#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class MainContentComponent   : public juce::Component
{
public:
  //==============================================================================
  MainContentComponent();
  ~MainContentComponent();

  void paint (Graphics&) override;
  void resized() override;

private:
  //==============================================================================
  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};
