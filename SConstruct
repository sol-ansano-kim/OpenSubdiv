import sys
import os
import excons
import functools


env = excons.MakeBaseEnv()
out_basedir = excons.OutputBaseDirectory()
out_incdir = os.path.join(out_basedir, "include")
out_libdir = os.path.join(out_basedir, "lib")


dependencies = []
osd_opts = {}
osd_opts["PTEX_LOCATION"] = ""
osd_opts["GLEW_LOCATION"] = excons.GetArgument("glew-location", "")
osd_opts["GLFW_LOCATION"] = ""
osd_opts["NO_LIB"] = 0
osd_opts["NO_EXAMPLES"] = 0
osd_opts["NO_TUTORIALS"] = 0
osd_opts["NO_REGRESSION"] = 0
osd_opts["NO_PTEX"] = 1
osd_opts["NO_DOC"] = 1
osd_opts["NO_OMP"] = 1
osd_opts["NO_TBB"] = 0
osd_opts["NO_CUDA"] = 1
osd_opts["NO_OPENCL"] = 1
osd_opts["NO_CLEW"] = 1
osd_opts["NO_OPENGL"] = 0
osd_opts["NO_METAL"] = 1
osd_opts["NO_DX"] = 1
osd_opts["NO_TESTS"] = 1
osd_opts["NO_GLTESTS"] = 1
osd_opts["NO_GLFW"] = 1
osd_opts["NO_GLFW_X11"] = 1
osd_opts["TBB_LOCATION"] = excons.GetArgument("tbb-location", "")
osd_opts["TBB_LIB_SUFFIX"] = excons.GetArgument("tbb-suffix", "")


rv = excons.ExternalLibRequire("tbb")
if not rv["require"]:
    tbb_opts = {"tbb-static": 1, "use-c++11": 1}
    excons.PrintOnce("OpenSubdiv: Build tbb from sources ...")
    excons.Call("tbb", overrides=tbb_opts, imp=["TBBPath", "TBBMallocPath", "TBBProxyPath", "TBBName"])
    dependencies.append(TBBPath())
    dependencies.append(TBBMallocPath())
    dependencies.append(TBBProxyPath())

    d = os.path.dirname(os.path.dirname(TBBPath()))
    osd_opts["TBB_LOCATION"] = d
    osd_opts["TBB_LIB_SUFFIX"] = TBBName().split("tbb")[-1]
else:
    d = os.path.dirname(rv["incdir"])
    osd_opts["TBB_LOCATION"] = d
    osd_opts["TBB_LIB_SUFFIX"] = excons.GetArgument("tbb-suffix", "")


def _name(libname, static=True):
    return libname

def _path(libname, static=True):
    libpath = _name(libname, static=static)
    if sys.platform == "win32":
        libpath = libname + ".lib"
    else:
        libpath = "lib" + libname + (".a" if static else excons.SharedLibraryLinkExt())

    return os.path.join(out_libdir, libpath)

def _require(pathFunc, static=True):
    # are symbols visible?
    env.Append(CPPPATH=[out_incdir])
    excons.Link(env, pathFunc(static), static=static, force=True, silent=True)


OsdCPUName = functools.partial(_name, "osdCPU")
OsdGPUName = functools.partial(_name, "osdGPU")
OsdCPUPath = functools.partial(_path, "osdCPU")
OsdGPUPath = functools.partial(_path, "osdGPU")
RequireOsdCPU = functools.partial(_require, "osdCPU")
RequireOsdGPU = functools.partial(_require, "osdGPU")


prjs = []
prjs.append({"name": "osd",
             "type": "cmake",
             "cmake-opts": osd_opts,
             "cmake-cfgs": dependencies + ["CMakeLists.txt"] + excons.CollectFiles(["opensubdiv"], patterns=["CMakeLists.txt"], recursive=True),
             "cmake-srcs": excons.CollectFiles(["opensubdiv"], patterns=[], recursive=True),
             "cmake-outputs": [OsdCPUPath(static=True), OsdGPUPath(static=True)]})
# 
# it seems to doesn't make shared lib on windows (and IOS?)
# look opensubdiv/CMakeLists.txt


excons.DeclareTargets(env, prjs)


Default("osd")

Export("OsdCPUName OsdGPUName OsdCPUPath OsdGPUPath RequireOsdCPU RequireOsdGPU")
