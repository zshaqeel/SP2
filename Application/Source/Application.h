#ifndef APPLICATION_H
#define APPLICATION_H

#include "timer.h"
#include <string>
#include <set>

struct Mouse {
	Mouse() {
		reset();
	}
	void reset() {
		x_diff = 0;
		y_diff = 0;
		scroll = 0;
		left = 0;
		right = 0;
		up = 0;
		down = 0;
		leftclick = 0;
		rightclick = 0;
	}
	bool left, right, up, down, leftclick, rightclick;
	int x_diff, y_diff;
	float scroll;
};

class Application {
public:
	Application();
	~Application();
	void Init();
	void Run();
	void Exit();
	static bool IsKeyPressed(unsigned short key);
	static bool IsKeyPressedOnce(unsigned short key);
	static bool IsMousePressed(unsigned short key);
	static bool IsMousePressedOnce(unsigned short key);
	static void GetCursorPos(double* xpos, double* ypos);
	static unsigned GetWindowHeight();
	static unsigned GetWindowWidth();
	static unsigned GetUIHeight();
	static unsigned GetUIWidth();
	static unsigned ui_width;
	static unsigned ui_height;
	static unsigned m_width;
	static unsigned m_height;
	static int state;
	static void log(std::string string);
	static std::set<unsigned short> activeKeys;
private:
	//Declare a window object
	StopWatch m_timer;
};
#endif