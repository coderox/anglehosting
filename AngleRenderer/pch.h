//
// pch.h
// Header for platform projection include files
//

#pragma once

#define NOMINMAX

#include "unknwn.h"
#include "winrt/Windows.ApplicationModel.Core.h"
#include "winrt/Windows.UI.Core.h"
#include "winrt/Windows.UI.Composition.h"
#include "winrt/Windows.UI.Input.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.System.Threading.h"

#include <concrt.h>
#include <ppltasks.h>

// Enable function definitions in the GL headers below
#ifndef EGL_EGL_PROTOTYPES
#define EGL_EGL_PROTOTYPES 1
#endif

// OpenGL ES includes
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

// EGL includes
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <EGL/eglplatform.h>
