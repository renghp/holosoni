// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using Microsoft.MixedReality.Toolkit.Audio;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.Examples.Demos
{
    /// <summary>
    /// Sample script for text to speech
    /// </summary>
    [RequireComponent(typeof(TextToSpeech))]
    public class TextToSpeechSample : MonoBehaviour
    {
        private TextToSpeech textToSpeech;

        public string messageToBeRead;

        private void Awake()
        {
            textToSpeech = GetComponent<TextToSpeech>();
        }

        /// <summary>
        /// Start playing Text To Speech generated voice
        /// </summary>
        public void Speak()
        {

            Debug.Log("started speaking");
            // If we have a text to speech manager on the target object, say something.
            // This voice will appear to emanate from the object.
            if (textToSpeech != null)
            {
                // Create message
                // var msg = string.Format( "This is the {0} voice. It should sound like it's coming from the object you clicked. Feel free to walk around and listen from different angles.", textToSpeech.Voice.ToString());
                var msg = messageToBeRead;

                // Speak message
                textToSpeech.StartSpeaking(msg);
            }
        }
    }
}
