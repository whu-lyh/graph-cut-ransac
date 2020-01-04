# Graph-Cut RANSAC

The Graph-Cut RANSAC algorithm proposed in paper: Daniel Barath and Jiri Matas; Graph-Cut RANSAC, Conference on Computer Vision and Pattern Recognition, 2018. 
It is available at http://openaccess.thecvf.com/content_cvpr_2018/papers/Barath_Graph-Cut_RANSAC_CVPR_2018_paper.pdf

# Installation C++

To build and install C++ only `GraphCutRANSAC`, clone or download this repository and then build the project by CMAKE. 
```shell
$ git clone https://github.com/danini/graph-cut-ransac
$ cd build
$ cmake ..
$ make
```

# Install Python package and compile C++

```bash
python3 ./setup.py install
```

or

```bash
pip3 install -e .
```


# Example project

To build the sample project showing examples of fundamental matrix, homography and essential matrix fitting, set variable `CREATE_SAMPLE_PROJECT = ON` when creating the project in CMAKE. 
Then 
```shell
$ cd build
$ ./SampleProject
```

# Requirements

- Eigen 3.0 or higher
- CMake 2.8.12 or higher
- OpenCV 3.0 or higher
- A modern compiler with C++17 support


# Example of usage in python

```python
import pygcransac
h1, w1 = img1.shape
h2, w2 = img2.shape
H, mask = pygcransac.findHomography(src_pts, dst_pts, h1, w1, h2, w2, 3.0)
F, mask = pygcransac.findFundamentalMatrix(src_pts, dst_pts, h1, w1, h2, w2, 3.0)

```

See also this [notebook](examples/example.ipynb)


# Requirements

- Python 3
- CMake 2.8.12 or higher
- OpenCV 3.4
- A modern compiler with C++11 support

# Acknowledgements

When using the algorithm, please cite

```
@inproceedings{GCRansac2018,
	author = {Barath, Daniel and Matas, Jiri},
	title = {Graph-cut {RANSAC}},
	booktitle = {Conference on Computer Vision and Pattern Recognition},
	year = {2018},
}

```

If you use it together with DEGENSAC or PROSAC sampling, please cite 

```
@inproceedings{Degensac2005,
	author = {Chum, Ondrej and Werner, Tomas and Matas, Jiri},
	title = {Two-View Geometry Estimation Unaffected by a Dominant Plane},
	booktitle = {Conference on Computer Vision and Pattern Recognition},
	year = {2005},
}

@inproceedings{PROSAC2005,
	author = {Chum, Ondrej and Matas, Jiri},
	title = {Matching with {PROSAC}-progressive sample consensus},
	booktitle = {Conference on Computer Vision and Pattern Recognition},
	year = {2005},
}

```

The Python wrapper part is based on the great [Benjamin Jack `python_cpp_example`](https://github.com/benjaminjack/python_cpp_example).
