from conans import ConanFile

class MyProjectConan(ConanFile):
    requires = "jsoncpp/1.9.5"  # Указываем необходимую версию jsoncpp
    generators = "cmake"
