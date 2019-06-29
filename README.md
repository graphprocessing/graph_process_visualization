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
