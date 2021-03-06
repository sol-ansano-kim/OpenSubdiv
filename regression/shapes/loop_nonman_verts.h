//
//   Copyright 2019 DreamWorks Animation LLC.
//
//   Licensed under the Apache License, Version 2.0 (the "Apache License")
//   with the following modification; you may not use this file except in
//   compliance with the Apache License and the following modification to it:
//   Section 6. Trademarks. is deleted and replaced with:
//
//   6. Trademarks. This License does not grant permission to use the trade
//      names, trademarks, service marks, or product names of the Licensor
//      and its affiliates, except as required to comply with Section 4(c) of
//      the License and to reproduce the content of the NOTICE file.
//
//   You may obtain a copy of the Apache License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the Apache License with the above modification is
//   distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
//   KIND, either express or implied. See the Apache License for the specific
//   language governing permissions and limitations under the Apache License.
//

static const std::string loop_nonman_verts =
"#\n"
"#   Four shapes ordered left->right and top->bottom in the XZ plane\n"
"#\n"
"#   Shape 1:  top-left\n"
"#\n"
"v -1.25  0.0  0.875\n"
"v -0.75 -0.25 0.75\n"
"v -0.25  0.0  0.875\n"
"v -1.0   0.0  1.25\n"
"v -0.5   0.0  1.25\n"
"v -1.0   0.0  0.25\n"
"v -0.5   0.0  0.25\n"
"#\n"
"vt 0.05 0.80\n"
"vt 0.25 0.75\n"
"vt 0.45 0.80\n"
"vt 0.15 0.95\n"
"vt 0.35 0.95\n"
"vt 0.15 0.55\n"
"vt 0.35 0.55\n"
"\n"
"f 1/1 2/2 4/4\n"
"f 2/2 5/5 4/4\n"
"f 2/2 3/3 5/5\n"
"f 2/2 6/6 7/7\n"
"\n"
"#\n"
"#   Shape 2:  top-right\n"
"#\n"
"v 0.25  0.0  0.875\n"
"v 0.75 -0.25 0.75\n"
"v 1.25  0.0  0.875\n"
"v 0.5   0.0  1.25\n"
"v 1.0   0.0  1.25\n"
"v 0.25  0.0  0.625\n"
"v 0.5   0.0  0.25\n"
"v 1.0   0.0  0.25\n"
"v 1.25  0.0  0.625\n"
"#\n"
"vt 0.55 0.80\n"
"vt 0.75 0.76\n"
"vt 0.95 0.80\n"
"vt 0.65 0.95\n"
"vt 0.85 0.95\n"
"vt 0.55 0.70\n"
"vt 0.65 0.55\n"
"vt 0.85 0.55\n"
"vt 0.95 0.70\n"
"vt 0.75 0.74\n"
"\n"
"f  8/8   9/9  11/11\n"
"f  9/9  12/12 11/11\n"
"f  9/9  10/10 12/12\n"
"f  9/17 13/13 14/14\n"
"f 15/15  9/17 14/14\n"
"f 15/15 16/16  9/17\n"
"\n"
"#\n"
"#   Shape 3:  bottom-left\n"
"#\n"
"v -0.75  0.0      -0.75\n"
"v -0.25  0.0      -1.0\n"
"v -0.5   0.433013 -1.0\n"
"v -1.0   0.433013 -1.0\n"
"v -1.25  0.0      -1.0\n"
"v -1.0  -0.433013 -1.0\n"
"v -0.5  -0.433013 -1.0\n"
"v -1.0   0.0      -0.5\n"
"v -0.5   0.0      -0.5\n"
"#\n"
"vt 0.25 0.20\n"
"vt 0.05 0.20\n"
"vt 0.15 0.03\n"
"vt 0.35 0.03\n"
"vt 0.45 0.20\n"
"vt 0.35 0.37\n"
"vt 0.15 0.37\n"
"vt 0.03 0.47\n"
"vt 0.23 0.47\n"
"vt 0.13 0.37\n"
"\n"
"f 17/18 18/19 19/20\n"
"f 17/18 19/20 20/21\n"
"f 17/18 20/21 21/22\n"
"f 17/18 21/22 22/23\n"
"f 17/18 22/23 23/24\n"
"f 17/18 23/24 18/19\n"
"f 17/27 25/26 24/25\n"
"\n"
"#\n"
"#   Shape 4:  bottom-right\n"
"#\n"
"v 0.75  0.0      -0.75\n"
"v 1.25  0.0      -1.0\n"
"v 1.0   0.433013 -1.0\n"
"v 0.5   0.433013 -1.0\n"
"v 0.25  0.0      -1.0\n"
"v 0.5  -0.433013 -1.0\n"
"v 1.0  -0.433013 -1.0\n"
"v 1.25  0.0      -0.5\n"
"v 1.0   0.433013 -0.5\n"
"v 0.5   0.433013 -0.5\n"
"v 0.25  0.0      -0.5\n"
"v 0.5  -0.433013 -0.5\n"
"v 1.0  -0.433013 -0.5\n"
"#\n"
"vt 0.66 0.36\n"
"vt 0.52 0.36\n"
"vt 0.59 0.24\n"
"vt 0.73 0.24\n"
"vt 0.80 0.36\n"
"vt 0.73 0.48\n"
"vt 0.59 0.48\n"
"vt 0.70 0.14\n"
"vt 0.77 0.26\n"
"vt 0.91 0.26\n"
"vt 0.98 0.14\n"
"vt 0.91 0.02\n"
"vt 0.77 0.02\n"
"vt 0.84 0.14\n"
"\n"
"f 26/28 27/29 28/30\n"
"f 26/28 28/30 29/31\n"
"f 26/28 29/31 30/32\n"
"f 26/28 30/32 31/33\n"
"f 26/28 31/33 32/34\n"
"f 26/28 32/34 27/29\n"
"f 26/41 34/36 33/35\n"
"f 26/41 35/37 34/36\n"
"f 26/41 36/38 35/37\n"
"f 26/41 37/39 36/38\n"
"f 26/41 38/40 37/39\n"
"f 26/41 33/35 38/40\n"
"\n"
"#\n"
"#   Additional 'shape' 5:  isolated non-manifold vertex in center\n"
"#\n"
"v 0 0 0\n"
"\n"
"t interpolateboundary 1/0/0 1\n"
"\n"
;
