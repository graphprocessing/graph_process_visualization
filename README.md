[![Build Status](https://travis-ci.com/graphprocessing/graph_process_visualization.svg?branch=master)](https://travis-ci.com/graphprocessing/graph_process_visualization)
[![Build status](https://ci.appveyor.com/api/projects/status/r4ll77716od44vsl/branch/master?svg=true)](https://ci.appveyor.com/project/allnes/graph-process-visualization/branch/master)
# A tool for visualizing graph processing

Requirements:
- CMake
- [Qt5](https://www.qt.io/download)
- Python (to launch cpplint)

Build and run:
```console
$ mkdir build
$ cd build
$ cmake .. -DCMAKE_PREFIX_PATH="/path/to/qt"
$ cmake --build .
$ ./bin/graph_process_visualization
```
