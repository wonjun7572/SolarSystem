#include "MyGraphicsLib.h"

int main(void)
{
	// tearup 器窃 内靛 抗矫
	{
		//if (!glfwInit())
		//{
		//	fprintf(stderr, "Failed to initialize GLFW\n");
		//	getchar();
		//	return -1;
		//}

		//glfwWindowHint(GLFW_SAMPLES, 4);
		//glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		//glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		//glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
		//glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

		//window = glfwCreateWindow(1024, 768, "Tutorial 03 - Matrices", NULL, NULL);
		//if (window == NULL) {
		//	fprintf(stderr, "Failed to open GLFW window. If you have an Intel GPU, they are not 3.3 compatible. Try the 2.1 version of the tutorials.\n");
		//	getchar();
		//	glfwTerminate();
		//	return -1;
		//}
		//glfwMakeContextCurrent(window);

		//glewExperimental = true;

		//if (glewInit() != GLEW_OK) {
		//	fprintf(stderr, "Failed to initialize GLEW\n");
		//	getchar();
		//	glfwTerminate();
		//	return -1;
		//}

		//glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);
	}	
	GraphicsEnv.instance.tearUp();

	// RenderObject 器窃 内靛 抗矫
	{
		//GLuint VertexArrayID;
		//glGenVertexArrays(1, &VertexArrayID);
		//glBindVertexArray(VertexArrayID);

		//GLuint programID = LoadShaders("vs_w5.shader", "fs_w5.shader");

		//GLuint MatrixID = glGetUniformLocation(programID, "MVP");

		//glm::mat4 Projection = glm::perspective(glm::radians(45.0f), 4.0f / 3.0f, 0.1f, 100.0f);

		//// 流背 捧康
		////glm::mat4 Projection = glm::ortho(-10.0f,10.0f,-10.0f,10.0f,0.0f,100.0f); // In world coordinates

		//glm::mat4 View = glm::lookAt(
		//	glm::vec3(-5, 3, 5),
		//	glm::vec3(0, 0, 0),
		//	glm::vec3(0, 1, 0)
		//);

		//////
		////glm::mat4 To_World = glm::mat4(1.0f);
		////To_World = glm::translate(To_World, glm::vec3(1.0f, 0.0f, 0.0f));
		//////

		//glm::mat4 To_World = glm::mat4(1.0f);
		//glm::mat4 MVP = Projection * View * To_World;

		//static const GLfloat g_vertex_buffer_data[] = {
		//	-1.0f,-1.0f,-1.0f, // triangle 1 : begin
		//	-1.0f,-1.0f, 1.0f,
		//	-1.0f, 1.0f, 1.0f, // triangle 1 : end
		//	1.0f, 1.0f,-1.0f, // triangle 2 : begin
		//	-1.0f,-1.0f,-1.0f,
		//	-1.0f, 1.0f,-1.0f, // triangle 2 : end
		//	1.0f,-1.0f, 1.0f,
		//	-1.0f,-1.0f,-1.0f,
		//	1.0f,-1.0f,-1.0f,
		//	1.0f, 1.0f,-1.0f,
		//	1.0f,-1.0f,-1.0f,
		//	-1.0f,-1.0f,-1.0f,
		//	-1.0f,-1.0f,-1.0f,
		//	-1.0f, 1.0f, 1.0f,
		//	-1.0f, 1.0f,-1.0f,
		//	1.0f,-1.0f, 1.0f,
		//	-1.0f,-1.0f, 1.0f,
		//	-1.0f,-1.0f,-1.0f,
		//	-1.0f, 1.0f, 1.0f,
		//	-1.0f,-1.0f, 1.0f,
		//	1.0f,-1.0f, 1.0f,
		//	1.0f, 1.0f, 1.0f,
		//	1.0f,-1.0f,-1.0f,
		//	1.0f, 1.0f,-1.0f,
		//	1.0f,-1.0f,-1.0f,
		//	1.0f, 1.0f, 1.0f,
		//	1.0f,-1.0f, 1.0f,
		//	1.0f, 1.0f, 1.0f,
		//	1.0f, 1.0f,-1.0f,
		//	-1.0f, 1.0f,-1.0f,
		//	1.0f, 1.0f, 1.0f,
		//	-1.0f, 1.0f,-1.0f,
		//	-1.0f, 1.0f, 1.0f,
		//	1.0f, 1.0f, 1.0f,
		//	-1.0f, 1.0f, 1.0f,
		//	1.0f,-1.0f, 1.0f
		//};

		//GLuint vertexbuffer;
		//glGenBuffers(1, &vertexbuffer);
		//glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
		//glBufferData(GL_ARRAY_BUFFER, sizeof(g_vertex_buffer_data), g_vertex_buffer_data, GL_STATIC_DRAW);

		//static const GLfloat g_color_buffer_data[] = {
		//	0.583f,  0.771f,  0.014f,
		//	0.609f,  0.115f,  0.436f,
		//	0.327f,  0.483f,  0.844f,
		//	0.822f,  0.569f,  0.201f,
		//	0.435f,  0.602f,  0.223f,
		//	0.310f,  0.747f,  0.185f,
		//	0.597f,  0.770f,  0.761f,
		//	0.559f,  0.436f,  0.730f,
		//	0.359f,  0.583f,  0.152f,
		//	0.483f,  0.596f,  0.789f,
		//	0.559f,  0.861f,  0.639f,
		//	0.195f,  0.548f,  0.859f,
		//	0.014f,  0.184f,  0.576f,
		//	0.771f,  0.328f,  0.970f,
		//	0.406f,  0.615f,  0.116f,
		//	0.676f,  0.977f,  0.133f,
		//	0.971f,  0.572f,  0.833f,
		//	0.140f,  0.616f,  0.489f,
		//	0.997f,  0.513f,  0.064f,
		//	0.945f,  0.719f,  0.592f,
		//	0.543f,  0.021f,  0.978f,
		//	0.279f,  0.317f,  0.505f,
		//	0.167f,  0.620f,  0.077f,
		//	0.347f,  0.857f,  0.137f,
		//	0.055f,  0.953f,  0.042f,
		//	0.714f,  0.505f,  0.345f,
		//	0.783f,  0.290f,  0.734f,
		//	0.722f,  0.645f,  0.174f,
		//	0.302f,  0.455f,  0.848f,
		//	0.225f,  0.587f,  0.040f,
		//	0.517f,  0.713f,  0.338f,
		//	0.053f,  0.959f,  0.120f,
		//	0.393f,  0.621f,  0.362f,
		//	0.673f,  0.211f,  0.457f,
		//	0.820f,  0.883f,  0.371f,
		//	0.982f,  0.099f,  0.879f
		//};

		//GLuint colorbuffer;
		//glGenBuffers(1, &colorbuffer);
		//glBindBuffer(GL_ARRAY_BUFFER, colorbuffer);
		//glBufferData(GL_ARRAY_BUFFER, sizeof(g_color_buffer_data), g_color_buffer_data, GL_STATIC_DRAW);

		//// depth test on
		//glEnable(GL_DEPTH_TEST);
		//glDepthFunc(GL_LESS);
	}
	RenderObject npc1 = new RenderObject("char.obj", "vs_w9.shader", "fs_w9.shader");
	RenderObject npc2 = new RenderObject("char.obj", "vs_w9.shader", "fs_w9.shader");
	RenderObject plane = new RenderObject("plane.obj", "vs_w10.shader", "fs_w10.shader");

	do {

		// tearUpRender 器窃 内靛 抗矫
		{
			//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		}
		GraphicsEnv.instance.tearUpRender();

		// render 器窃 内靛 抗矫
		{
			//glUseProgram(programID);
			//glUniformMatrix4fv(MatrixID, 1, GL_FALSE, &MVP[0][0]);

			//glEnableVertexAttribArray(0);
			//glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
			//glVertexAttribPointer(
			//	0,
			//	3,
			//	GL_FLOAT,
			//	GL_FALSE,
			//	0,
			//	(void*)0
			//);

			//glEnableVertexAttribArray(1);
			//glBindBuffer(GL_ARRAY_BUFFER, colorbuffer);
			//glVertexAttribPointer(
			//	1,                                // attribute. No particular reason for 1, but must match the layout in the shader.
			//	3,                                // size
			//	GL_FLOAT,                         // type
			//	GL_FALSE,                         // normalized?
			//	0,                                // stride
			//	(void*)0                          // array buffer offset
			//);

			//glDrawArrays(GL_TRIANGLES, 0, 3 * 12);

			// glDisableVertexAttribArray(0);
		}
		npc1->render();
		npc2->render();
		plane->render();

		// tearDownRender 器窃 内靛 抗矫
		{
			/*glfwSwapBuffers(window);
			glfwPollEvents();*/
		}
		GraphicsEnv.instance.tearDownRender();

	} while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS && glfwWindowShouldClose(window) == 0);

	// tearDown 器窃 内靛 抗矫
	{
		/*glDeleteBuffers(1, &vertexbuffer);
		glDeleteProgram(programID);
		glDeleteVertexArrays(1, &VertexArrayID);

		glfwTerminate();*/
	}
	GraphicsEnv.instance.tearDown();

	return 0;
}