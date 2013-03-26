# vim:set ft=cmake:syn on

SET(CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS true)
cmake_minimum_required(VERSION 2.8)

PROJECT(ofxCodeEditorExample)

set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

SET(BUILD_SHARED_LIBS OFF)
SET(CMAKE_VERBOSE_MAKEFILE OFF)

###### 
get_filename_component(OPENFRAMEWORKS_CMAKE_DIR_ROOT ${CMAKE_CURRENT_LIST_FILE} PATH)
get_filename_component(OPENFRAMEWORKS_ROOT "${OPENFRAMEWORKS_CMAKE_DIR_ROOT}/../../../" ABSOLUTE)
set(OPENFRAMEWORKS_ADDONS_ROOT ${OPENFRAMEWORKS_ROOT}/addons/)

message(STATUS "Looking for OF: ${OPENFRAMEWORKS_ROOT}") 

set (OFX_LIB_PATH ${OPENFRAMEWORKS_ROOT}/libs/openFrameworks)
set (OFX_LIB_INCL_PATH ${OPENFRAMEWORKS_ROOT}/libs/openFrameworks)
set (OFX_GLEW_INCL_PATH ${OPENFRAMEWORKS_ROOT}/libs/glew/include/)
set (OFX_TESS2_INCL_PATH ${OPENFRAMEWORKS_ROOT}/libs/tess2/include/)
set (OFX_POCO_INCL_PATH ${OPENFRAMEWORKS_ROOT}/libs/poco/include/)
set (OFX_CAIRO_INCL_PATH ${OPENFRAMEWORKS_ROOT}/libs/cairo/include/cairo/)
set (OFX_FMOD_INCL_PATH ${OPENFRAMEWORKS_ROOT}/libs/fmodex/include/)
set (OFX_FREEIMAGE_INCL_PATH ${OPENFRAMEWORKS_ROOT}/libs/FreeImage/include/)
set (OFX_FREETYPE_INCL_PATH ${OPENFRAMEWORKS_ROOT}/libs/freetype/include/ ${OPENFRAMEWORKS_ROOT}/libs/freetype/include/freetype2/)
set (OFX_RTAUDIO_INCL_PATH ${OPENFRAMEWORKS_ROOT}/libs/rtAudio/include/)
#set (GST_INCL_PATH ../../../../../gstreamer-1.0.2/)

include_directories( ${OFX_LIB_INCL_PATH} ${OFX_GLEW_INCL_PATH}
					${OFX_POCO_INCL_PATH}
					${OFX_TESS2_INCL_PATH}
					${OFX_CAIRO_INCL_PATH}
					${OFX_FMOD_INCL_PATH}
					${OFX_FREEIMAGE_INCL_PATH}
					${OFX_FREETYPE_INCL_PATH}
					${OFX_RTAUDIO_INCL_PATH}
					${OFX_LIB_PATH}/3d/
					${OFX_LIB_PATH}/app/
					${OFX_LIB_PATH}/communication/
					${OFX_LIB_PATH}/events
					${OFX_LIB_PATH}/gl
					${OFX_LIB_PATH}/graphics
					${OFX_LIB_PATH}/math
					${OFX_LIB_PATH}/sound
					${OFX_LIB_PATH}/types
					${OFX_LIB_PATH}/utils
					${OFX_LIB_PATH}/video
					${GST_INCL_PATH}
)


set (OPENFRAMEWORKS_LIB_SOURCES
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/3d/of3dUtils.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/3d/ofCamera.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/3d/ofEasyCam.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/3d/ofMesh.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/3d/ofNode.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/app/ofAppGlutWindow.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/app/ofAppRunner.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/communication/ofArduino.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/communication/ofSerial.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/events/ofEvents.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/gl/ofFbo.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/gl/ofGLRenderer.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/gl/ofLight.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/gl/ofMaterial.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/gl/ofShader.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/gl/ofTexture.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/gl/ofVbo.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/gl/ofVboMesh.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/graphics/ofBitmapFont.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/graphics/ofCairoRenderer.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/graphics/ofGraphics.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/graphics/ofImage.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/graphics/ofPath.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/graphics/ofPixels.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/graphics/ofPolyline.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/graphics/ofTessellator.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/graphics/ofTrueTypeFont.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/math/ofMath.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/math/ofMatrix3x3.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/math/ofMatrix4x4.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/math/ofQuaternion.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/math/ofVec2f.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/math/ofVec4f.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/sound/ofBaseSoundPlayer.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/sound/ofBaseSoundStream.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/sound/ofFmodSoundPlayer.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/sound/ofOpenALSoundPlayer.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/sound/ofPASoundStream.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/sound/ofRtAudioSoundStream.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/sound/ofSoundPlayer.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/sound/ofSoundStream.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/types/ofBaseTypes.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/types/ofColor.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/types/ofPoint.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/types/ofRectangle.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/utils/ofFileUtils.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/utils/ofLog.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/utils/ofSystemUtils.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/utils/ofThread.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/utils/ofURLFileLoader.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/utils/ofUtils.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofDirectShowGrabber.cpp
	#${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofGstUtils.cpp
	#${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofGstVideoGrabber.cpp
	#${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofGstVideoPlayer.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofQtUtils.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofQuickTimeGrabber.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofQuickTimePlayer.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofQTKitGrabber.mm
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofQTKitPlayer.mm
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofVideoGrabber.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofVideoPlayer.cpp
	${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofQTKitMovieRenderer.m
)


SET_SOURCE_FILES_PROPERTIES(${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/utils/ofSystemUtils.cpp
	PROPERTIES COMPILE_FLAGS "-x objective-c++")
SET_SOURCE_FILES_PROPERTIES(${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofQTKitGrabber.mm
	PROPERTIES COMPILE_FLAGS "-x objective-c++")
SET_SOURCE_FILES_PROPERTIES(${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofQTKitPlayer.mm
	PROPERTIES COMPILE_FLAGS "-x objective-c++")
SET_SOURCE_FILES_PROPERTIES(${OPENFRAMEWORKS_ROOT}/libs/openFrameworks/video/ofQTKitMovieRenderer.m
	PROPERTIES COMPILE_FLAGS "-x objective-c++")

set (app_sources_files ../src/ofxCodeEditor.mm ../example/main.mm ../example/testApp.cpp)
set (app_sources_files ${app_sources_files}
								${OPENFRAMEWORKS_LIB_SOURCES}
								${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCocoaWindow/src/GLView.mm
								${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCocoaWindow/src/GLWindow.mm
								${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCocoaWindow/src/ofxCocoaDelegate.mm
								${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCocoaWindow/src/ofxCocoaWindow.mm
)

# scintilla
file ( GLOB_RECURSE SCINTILLA_SOURCES
	${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCodeEditor/src/scintilla/*/*.cxx
	${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCodeEditor/src/scintilla/*/*.mm
)


SET_SOURCE_FILES_PROPERTIES(../example/main.mm PROPERTIES COMPILE_FLAGS "-x objective-c++")
SET_SOURCE_FILES_PROPERTIES(../example/testApp.cpp PROPERTIES COMPILE_FLAGS "-x objective-c++")
SET_SOURCE_FILES_PROPERTIES(../src/ofxCodeEditor.mm PROPERTIES COMPILE_FLAGS "-x objective-c++")

# ofxCocoaWindow rocks
SET_SOURCE_FILES_PROPERTIES(${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCocoaWindow/src/GLView.mm PROPERTIES COMPILE_FLAGS "-x objective-c++")
SET_SOURCE_FILES_PROPERTIES(${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCocoaWindow/src/GLWindow.mm PROPERTIES COMPILE_FLAGS "-x objective-c++")
SET_SOURCE_FILES_PROPERTIES(${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCocoaWindow/src/ofxCocoaDelegate.mm PROPERTIES COMPILE_FLAGS "-x objective-c++")
SET_SOURCE_FILES_PROPERTIES(${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCocoaWindow/src/ofxCocoaWindow.mm PROPERTIES COMPILE_FLAGS "-x objective-c++")


set(OPENFRAMEWORKS_INCLUDES_SEARCH_PATHS 
	${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCocoaWindow/src/
	${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCodeEditor/src/
	${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCodeEditor/src/scintilla/src
	${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCodeEditor/src/scintilla/include
	${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCodeEditor/src/scintilla/lexlib
	${OPENFRAMEWORKS_ADDONS_ROOT}/ofxCodeEditor/src/scintilla/cocoa
	${OPENFRAMEWORKS_ROOT}/libs/glu/include
	${OPENFRAMEWORKS_ROOT}/libs/glut/include
	/usr/include/
	CACHE STRING "OpenFrameworks includes search path"
)

if(APPLE)
    set(OPENFRAMEWORKS_LIBRARIES_SEARCH_PATHS 
    				     ${OPENFRAMEWORKS_ROOT}/libs/openFrameworksCompiled/lib/osx/
                                     ${OPENFRAMEWORKS_ROOT}/libs/fmodex/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/cairo/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/FreeImage/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/freetype/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/glee/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/glu/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/glu/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/glew/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/glut/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/glut/lib/osx/GLUT.framework/
                                     ${OPENFRAMEWORKS_ROOT}/libs/gstappsink/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/poco/lib/osx
                                     #${OPENFRAMEWORKS_ROOT}/libs/quicktime/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/tess2/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/rtAudio/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/unicap/lib/osx
                                     ${OPENFRAMEWORKS_ROOT}/libs/videoInput/lib/osx
                                     
                                     CACHE STRING "OpenFrameworks library search paths")
elseif( "${CMAKE_SYSTEM_NAME}" MATCHES "Linux")
  execute_process(COMMAND uname -m OUTPUT_VARIABLE ARCH)
  if ( ${ARCH} MATCHES "x86_64" )
    set (SUBLIBDIRSUFFIX "linux64")
  else()
    set(SUBLIBDIRSUFFIX "linux")
  endif()

     set(OPENFRAMEWORKS_LIBRARIES_SEARCH_PATHS 
                                     ${OPENFRAMEWORKS_ROOT}/libs/fmodex/lib/${SUBLIBDIRSUFFIX}
                                     #${OPENFRAMEWORKS_ROOT}/libs/FreeImage/lib/${SUBLIBDIRSUFFIX}
                                     #${OPENFRAMEWORKS_ROOT}/libs/freetype/lib/${SUBLIBDIRSUFFIX}
                                     #${OPENFRAMEWORKS_ROOT}/libs/glee/lib/${SUBLIBDIRSUFFIX}
                                     ${OPENFRAMEWORKS_ROOT}/libs/glu/lib/${SUBLIBDIRSUFFIX}
                                     ${OPENFRAMEWORKS_ROOT}/libs/glut/lib/${SUBLIBDIRSUFFIX}
                                     ${OPENFRAMEWORKS_ROOT}/libs/gstappsink/lib/${SUBLIBDIRSUFFIX}
                                     #${OPENFRAMEWORKS_ROOT}/libs/poco/lib/${SUBLIBDIRSUFFIX}
                                     ${OPENFRAMEWORKS_ROOT}/libs/rtAudio/lib/${SUBLIBDIRSUFFIX}
                                     /usr/lib/
                                     CACHE STRING "OpenFrameworks library search paths")
endif() 

if ( APPLE )
    set (CMAKE_FIND_LIBRARY_PREFIXES "" "lib")
    set (CMAKE_FIND_LIBRARY_SUFFIXES ".dylib" ".a" ".lib", ".so")
    set (CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-mmacosx-version-min=10.6")
    #set (CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-m32")
    set (CMAKE_OSX_ARCHITECTURES "i386")
elseif( "${CMAKE_SYSTEM_NAME}" MATCHES "Linux")
    set (CMAKE_FIND_LIBRARY_PREFIXES "lib" "")
    set (CMAKE_FIND_LIBRARY_SUFFIXES ".so" ".a")
endif ()

set (CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} ${OPENFRAMEWORKS_LIBRARIES_SEARCH_PATHS} /usr/lib /usr/local/lib )
set (CMAKE_INCLUDE_PATH ${OPENFRAMEWORKS_INCLUDES_SEARCH_PATHS} /usr/include /usr/local/include )

message(STATUS "Looking for libraries in : ${OPENFRAMEWORKS_LIBRARIES_SEARCH_PATHS}")
message(STATUS "Looking for includes in  :" ${CMAKE_INCLUDE_PATH})

include_directories(${CMAKE_INCLUDE_PATH})

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DSCI_NAMESPACE -DSCI_LEXER ")

#######################################################
#
# Find include file and fail if not found 
# 
macro(of_find_include includefile)
  find_path(${includefile}_INCPATH NAMES ${includefile} PATHS ${OPENFRAMEWORKS_INCLUDES_SEARCH_PATHS})
  if ( ${${includefile}_INCPATH} STREQUAL "${includefile}_INCPATH-NOTFOUND")
    message(FATAL_ERROR "Cannot find ${includefile}")
  else()
    message(STATUS "Found ${includefile} in ${${includefile}_INCPATH}")
  endif()
  set (OPENFRAMEWORKS_INCLUDES ${OPENFRAMEWORKS_INCLUDES} ${${includefile}_INCPATH})
endmacro(of_find_include)


#######################################################
####
# Find library and fail if not found 
#
macro(of_find_library libname)
  string(TOLOWER ${libname} libnamelow)
     
  find_library(${libname}_LIB NAMES ${libname} PATHS ${OPENFRAMEWORKS_LIBRARIES_SEARCH_PATHS})
  if (NOT ${libname}_LIB)
    find_library(${libname}_LIB NAMES ${libnamelow} PATHS ${OPENFRAMEWORKS_LIBRARIES_SEARCH_PATHS})
  endif()
  
  if (NOT ${libname}_LIB)
    message(FATAL_ERROR "Cannot find '${libname}' library")
  else()
    message(STATUS "Found '${libname}' library in ${${libname}_LIB}")
    set(OPENFRAMEWORKS_LIBRARIES ${OPENFRAMEWORKS_LIBRARIES} ${${libname}_LIB})
  endif()
endmacro()


#######################################################
####
# Find library and include 
#
macro(of_find_lib_and_include libname incname)
  of_find_library(${libname})
  of_find_include(${incname})
endmacro(of_find_lib_and_include)




#######################################################
####
# Find glut library
#
macro(of_find_glut)
  # find GLUT 
  include(FindGLUT)
  if ( GLUT_FOUND )
      message ( STATUS "Found GLUT ${GLUT_LIBRARIES}")
      set(OPENFRAMEWORKS_INCLUDES ${OPENFRAMEWORKS_INCLUDES} ${GLUT_INCLUDE_DIR})
      set(OPENFRAMEWORKS_LIBRARIES ${OPENFRAMEWORKS_LIBRARIES} ${GLUT_LIBRARIES})
  else ( GLUT_FOUND )
      message ( FATAL_ERROR  "Cannot find GLUT")
  endif (GLUT_FOUND)
endmacro(of_find_glut)


if ( APPLE )
    of_find_library("quicktime")
    of_find_library("accelerate")
    of_find_library("qtkit")
    of_find_library("coreaudio")
    of_find_library("corevideo")
    of_find_library("coremidi")
    of_find_library("opengl")
		of_find_library("carbon")
		of_find_library("quartzcore")
    of_find_library("PocoFoundation")
    of_find_library("PocoCrypto")
    of_find_library("PocoUtil")
    of_find_library("PocoNet")
    of_find_library("PocoNetSSL")
    of_find_library("PocoData")
    of_find_library("PocoXML")
    of_find_library("PocoZIp")
    of_find_library("PocoDataODBC")
    of_find_library("PocoDataSQLite")
    of_find_library("fmodex")
    of_find_library("FreeImage")
    of_find_library("cairo")
    of_find_library("cairo-script-interpreter")
    of_find_library("pixman-1")
    of_find_library("freetype")
    of_find_library("tess2")
    of_find_library("glew")
    of_find_library("glut")
    of_find_library("rtAudio")
endif(APPLE)
	
of_find_glut()

message("Files to be compiled: " ${app_sources_files})

set( MACOSX_RESOURCE_FILES
	${CMAKE_SOURCE_DIR}/../bin/data/info_bar_bg.png
)

# create an executable with all source files
add_executable( ${PROJECT_NAME}
		MACOSX_BUNDLE
    ${app_sources_files}
   ${OFX_SOURCE_FILES} 
   ${SCINTILLA_SOURCES} 
   ${OFX_INCLUDES_DIRS}
	${MACOSX_RESOURCE_FILES}
)

SET_SOURCE_FILES_PROPERTIES(
	${MACOSX_RESOURCE_FILES}
  PROPERTIES
  MACOSX_PACKAGE_LOCATION Resources
)

target_link_libraries(${PROJECT_NAME} ${OPENFRAMEWORKS_LIBRARIES})

ADD_CUSTOM_COMMAND(
    TARGET ${PROJECT_NAME}
    POST_BUILD
		COMMAND mkdir -p ${CMAKE_SOURCE_DIR}/../bin/${PROJECT_NAME}.app/Contents/Frameworks/GLUT.framework
		COMMAND cp -f ${OPENFRAMEWORKS_ROOT}/libs/fmodex/lib/osx/libfmodex.dylib ${CMAKE_SOURCE_DIR}/../bin/${PROJECT_NAME}.app/Contents/Frameworks
		COMMAND install_name_tool -change ./libfmodex.dylib @executable_path/../Frameworks/libfmodex.dylib ${CMAKE_SOURCE_DIR}/../bin/${PROJECT_NAME}.app/Contents/MacOS/${PROJECT_NAME}
)
