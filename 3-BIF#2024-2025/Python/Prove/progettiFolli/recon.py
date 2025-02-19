import cv2
import kivy
from kivy.app import App
from kivy.uix.image import Image
from kivy.clock import Clock
from kivy.core.image import Texture


class FaceRecognitionApp(App):
    def build(self):
        self.img = Image()
        self.capture = cv2.VideoCapture(0)
        Clock.schedule_interval(self.update, 1.0 / 30.0)
        return self.img

    def update(self, dt):
        ret, frame = self.capture.read()
        if ret:
            # Convert the frame to grayscale
            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            # Load the pre-trained face detection model
            face_cascade = cv2.CascadeClassifier(
                cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
            # Detect faces in the frame
            faces = face_cascade.detectMultiScale(gray, 1.3, 5)
            # Draw rectangles around the faces
            for (x, y, w, h) in faces:
                cv2.rectangle(frame, (x, y), (x+w, y+h), (255, 0, 0), 2)
            # Convert the frame to texture
            buf = cv2.flip(frame, 0).tostring()
            texture = Texture.create(
                size=(frame.shape[1], frame.shape[0]), colorfmt='bgr')
            texture.blit_buffer(buf, colorfmt='bgr', bufferfmt='ubyte')
            self.img.texture = texture


if __name__ == '__main__':
    FaceRecognitionApp().run()
