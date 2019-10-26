cmake_minimum_required(VERSION 2.6)

project(FreeImage)

file(GLOB FreeImage_SRC
    Source/*.h
	
    Source/FreeImage/*.h
    Source/FreeImage/*.cpp
	
    Source/FreeImageToolkit/*.h
    Source/FreeImageToolkit/*.cpp
	
    Source/Metadata/*.h
    Source/Metadata/*.cpp
	
	# LibJPEG
	Source/LibJPEG/./jaricom.c
	Source/LibJPEG/jcapimin.c
	Source/LibJPEG/jcapistd.c
	Source/LibJPEG/./jcarith.c
	Source/LibJPEG/jccoefct.c
	Source/LibJPEG/jccolor.c
	Source/LibJPEG/jcdctmgr.c
	Source/LibJPEG/jchuff.c
	Source/LibJPEG/jcinit.c
	Source/LibJPEG/jcmainct.c
	Source/LibJPEG/jcmarker.c
	Source/LibJPEG/jcmaster.c
	Source/LibJPEG/jcomapi.c
	Source/LibJPEG/jcparam.c
	Source/LibJPEG/jcprepct.c
	Source/LibJPEG/jcsample.c
	Source/LibJPEG/jctrans.c
	Source/LibJPEG/jdapimin.c
	Source/LibJPEG/jdapistd.c
	Source/LibJPEG/./jdarith.c
	Source/LibJPEG/jdatadst.c
	Source/LibJPEG/jdatasrc.c
	Source/LibJPEG/jdcoefct.c
	Source/LibJPEG/jdcolor.c
	Source/LibJPEG/jddctmgr.c
	Source/LibJPEG/jdhuff.c
	Source/LibJPEG/jdinput.c
	Source/LibJPEG/jdmainct.c
	Source/LibJPEG/jdmarker.c
	Source/LibJPEG/jdmaster.c
	Source/LibJPEG/jdmerge.c
	Source/LibJPEG/jdpostct.c
	Source/LibJPEG/jdsample.c
	Source/LibJPEG/jdtrans.c
	Source/LibJPEG/jerror.c
	Source/LibJPEG/jfdctflt.c
	Source/LibJPEG/jfdctfst.c
	Source/LibJPEG/jfdctint.c
	Source/LibJPEG/jidctflt.c
	Source/LibJPEG/jidctfst.c
	Source/LibJPEG/jidctint.c
	Source/LibJPEG/jmemmgr.c
	Source/LibJPEG/jmemnobs.c
	Source/LibJPEG/jquant1.c
	Source/LibJPEG/jquant2.c
	Source/LibJPEG/jutils.c
	Source/LibJPEG/transupp.c
	
	# LibPNG
	Source/LibPNG/./png.c
	Source/LibPNG/./pngerror.c
	Source/LibPNG/./pngget.c
	Source/LibPNG/./pngmem.c
	Source/LibPNG/./pngpread.c
	Source/LibPNG/./pngread.c
	Source/LibPNG/./pngrio.c
	Source/LibPNG/./pngrtran.c
	Source/LibPNG/./pngrutil.c
	Source/LibPNG/./pngset.c
	Source/LibPNG/./pngtrans.c
	Source/LibPNG/./pngwio.c
	Source/LibPNG/./pngwrite.c
	Source/LibPNG/./pngwtran.c
	Source/LibPNG/./pngwutil.c
	
)

# Include all the files for all the libraries
include_directories(Source)
include_directories(Source/FreeImage)
include_directories(Source/FreeImageToolkit)
include_directories(Source/LibJPEG)
include_directories(Source/LibJXR)
include_directories(Source/LibJXR/common/include)
include_directories(Source/LibJXR/image/decode)
include_directories(Source/LibJXR/image/encode)
include_directories(Source/LibJXR/image/sys)
include_directories(Source/LibJXR/image/x86)
include_directories(Source/LibJXR/jxrgluelib)
include_directories(Source/LibOpenJPEG)
include_directories(Source/LibPNG)
include_directories(Source/LibRawLite)
include_directories(Source/LibRawLite/dcraw)
include_directories(Source/LibRawLite/internal)
include_directories(Source/LibRawLite/libraw)
include_directories(Source/LibRawLite/src)
include_directories(Source/LibTIFF4)
include_directories(Source/LibWebP/src)
include_directories(Source/Metadata)
include_directories(Source/OpenEXR)
include_directories(Source/OpenEXR/Half)
include_directories(Source/OpenEXR/Iex)
include_directories(Source/OpenEXR/IlmImf)
include_directories(Source/OpenEXR/IlmThread)
include_directories(Source/OpenEXR/Imath)
include_directories(Source/OpenEXR/IexMath)
include_directories(Source/ZLib)

add_definitions(-DOPJ_STATIC -DLIBRAW_NODLL -DFREEIMAGE_LIB)
add_library(FreeImage STATIC ${FreeImage_SRC})