![Schema1](1.png)

    | **A** | **NOT** |
    | :-: | :-: |
    | 0 | 1 |
    | 1 | 0 |

    | **A** | **B** | **AND** | **NAND** |
    | :-: | :-: | :-: | :-: |
    | 0 | 0 | 0 | 1 |
    | 0 | 1 | 0 | 1 |
    | 1 | 0 | 0 | 1 |
    | 1 | 1 | 1 | 0 |

    | **A** | **B** | **OR** | **NOR** |
    | :-: | :-: | :-: | :-: |
    | 0 | 0 | 0 | 1 |
    | 0 | 1 | 1 | 0 |
    | 1 | 0 | 1 | 0 |
    | 1 | 1 | 1 | 0 |

    | **A** | **B** | **XOR** | **XNOR** |
    | :-: | :-: | :-: | :-: |
    | 0 | 0 | 0 | 1 |
    | 0 | 1 | 1 | 0 |
    | 1 | 0 | 1 | 0 |
    | 1 | 1 | 0 | 1 |

![equation](https://latex.codecogs.com/gif.latex?f%20%3D%20a%5Ccdot%20%5Coverline%7Bb%7D%20&plus;%20%5Coverline%7Bb%7D%5Ccdot%20%5Coverline%7Bc%7D)

    &nbsp;

![Schema1](2.png)
![Schema1](3.png)
![Schema1](4.png)

| **A** | **B** |**C** | ![equation](https://latex.codecogs.com/gif.latex?f) | ![equation](https://latex.codecogs.com/gif.latex?f_%7BAND%7D) | ![equation](https://latex.codecogs.com/gif.latex?f_%7BOR%7D) |
    | :-: | :-: | :-: | :-: | :-: | :-: |
    | 0 | 0 | 0 | 1 | 1 | 1 |
    | 0 | 0 | 1 | 0 | 0 | 0 |
    | 0 | 1 | 0 | 0 | 0 | 0 |
    | 0 | 1 | 1 | 0 | 0 | 0 |
    | 1 | 0 | 0 | 1 | 1 | 1 |
    | 1 | 0 | 1 | 1 | 1 | 1 |
    | 1 | 1 | 0 | 0 | 0 | 0 |
    | 1 | 1 | 1 | 0 | 0 | 0 |



