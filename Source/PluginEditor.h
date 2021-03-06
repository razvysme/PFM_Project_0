/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Pmf_project_0AudioProcessorEditor  : public AudioProcessorEditor
{
public:
    Pmf_project_0AudioProcessorEditor (Pmf_project_0AudioProcessor&);
    ~Pmf_project_0AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Pmf_project_0AudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Pmf_project_0AudioProcessorEditor)
};
