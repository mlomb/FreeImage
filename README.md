![FreeImage Logo](http://freeimage.sourceforge.net/images/logo.jpg)

# FreeImage
FreeImage with the CMake build system

## Branches
* **master** FreeImage 3.17 with all formats
* **only-png** FreeImage 3.17 only with PNG enabled
* **3.18** FreeImage 3.18 only with BMP, JPEG and PNG enabled

## Usage

Clone this repo (in the right branch) and use `add_subdirectory` in your root CMakeLists.txt file.

```cmake
add_subdirectory(FreeImage)

# if you want RGB color order instead of BGR
# target_compile_definitions(FreeImage PUBLIC FREEIMAGE_COLORORDER=1)

# ...

target_include_directories(YourTarget PUBLIC ${FreeImage_SOURCE_DIR}/Source)
target_link_libraries(YourTarget FreeImage)
```
