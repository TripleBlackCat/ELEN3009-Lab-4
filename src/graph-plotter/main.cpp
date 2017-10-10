#include "Graph.h"
#include "Sinusoid.h"
#include "Exponential.h"
#include "Polynomial.h"
#include "Sampler.h"
#include "Display.h"
#include "SolidLineStyle.h"
#include "DashedLineStyle.h"
#include "DottedLineStyle.h"
#include "Points.h"
#include <memory>

using std::shared_ptr;
using std::make_shared;

const float PI = 3.14159265359;

int main()
{
    //The sinusoids are not smooth because of the number of sampling points in the sampler class
    
    
	// setup Graph with Display
	const int WIDTH = 800;
	const int HEIGHT = 600;
	shared_ptr<Display> display = make_shared<Display>(WIDTH, HEIGHT);
	Graph graph(display);

	// create sine and cosine functions
	float amplitude = 1.0;
	float frequency = 1.0;
	float phase = 0;
	Sinusoid sine_function{amplitude, frequency, phase};
	Sinusoid cosine_function{amplitude, frequency, phase + PI/2};

	// generate range and plot graphs
	Range range{0, 6*PI};
	SolidLineStyle solid_red{Colour::Red, display};
	graph.plot(generateDataPoints(sine_function, range), solid_red);

	SolidLineStyle solid_blue{Colour::Blue, display};
	graph.plot(generateDataPoints(cosine_function, range), solid_blue);
    
    DashedLineStyle dashed_green{Colour::Green, display};
	graph.plot(generateDataPoints(sine_function, range), dashed_green);

    DottedLineStyle dotted_red{Colour::Red, display};
	graph.plot(generateDataPoints(cosine_function, range), dotted_red);
    
    vector<float> polyCoeffs = {1, 2, 1};
    Polynomial poly_function{polyCoeffs};
    
    float expA = 1;
    float expB = 1.5;
    Exponential exp_function{expA, expB};
    
    
    Range newRange{-3, 1.5}; 
    
    SolidLineStyle solid_green_exp{Colour::Green, display};
    graph.plot(generateDataPoints(poly_function, newRange), solid_green_exp);
    
    
    SolidLineStyle solid_red_exp{Colour::Red, display};
    graph.plot(generateDataPoints(exp_function, newRange), solid_red);
    

	return 0;
}
