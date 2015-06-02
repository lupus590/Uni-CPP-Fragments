#pragma once
class NA_Timer
{
private:
	unsigned int duration;
	unsigned int start;
public:
  bool debug;
	NA_Timer(void);
	NA_Timer(int d);
	~NA_Timer(void);
	void setDuration(int d);
	bool hasElapsed();
	void restart();
};

