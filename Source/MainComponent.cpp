#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
//  Image img (Image::ARGB, 800, 600, true);
//  CairoGraphicsContext renderer (&img);

  CairoGraphicsContext renderer(CairoGraphicsContext::CAIRO_OUTPUT_SVG, "/Users/oli/Desktop/test.svg", 1000, 1000);
  
  Graphics g (renderer);

  g.fillAll ( Colours::red );
  g.setColour ( Colours::blue );
  g.fillRect ( 100, 100, 600, 400 );
  

  setSize (600, 400);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
}

void MainContentComponent::resized()
{
}
