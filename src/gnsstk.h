#pragma once

#ifdef GNSSTK_EXPORTS
#define GNSSTK_API __declspec(dllexport)
#else
#define GNSSTK_API __declspec(dllimport)
#endif
