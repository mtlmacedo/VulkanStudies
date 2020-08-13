#pragma once

#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <vector>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 1050;

class Renderer
{
private:

	GLFWwindow* window;
	VkInstance instance;

	void initWindow();
	void initVulkan();
	void checkExtensions();
	void createInstance();
	void mainLoop();
	void cleanup();

public:

	void run();

};

