workspace "Project"
  configurations {"Debug", "Release"}
  location "build"

project "Project"
  kind "ConsoleApp"
  language "C++"
  cppdialect "C++20"
  targetdir "build/Project"
  files {
    "src/**.cpp",
    "src/**.h"
  }

  links {
    "fmt",
    "spdlog",
  }

  includedirs {
    "vendor/args/"
  }

  filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"

