#pragma once
#include <string>
#include <glad/glad.h>

class Shader {
public:
    unsigned int ID;

    Shader(const char* vertexPath, const char* fragmentPath);
    void use();
    void setMat4(const std::string& name, const float* value);
    void setVec3(const std::string& name, float x, float y, float z);
};
