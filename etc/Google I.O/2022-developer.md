# Google I/O Developer Keynote 2022 


<a href="https://www.youtube.com/watch?v=qBkyU1TJKDg">Youtube</a>


## Introduction

- Developers power the way we live today creating the software that makes it possible to continuouly improve and adapt how we learn, work, communicate, ...
- Google is bringing simplicity to the challenges that developers face.


- Users expect to have polished,highly-interactive, and fast experiences that run across many different devices, form factors, and platforms.
- We need to deliver systems that scale to sudden user demand while protecting their privacy and safety.


- Simplicity : first, by connecting out products so that they work even better when you use them together. <bold>(work better together)</bold>
- second, by providing guidance and best practices to help you improve your entire workflow.


- Augmented Reality, Android, Flutter, Chrome, Firebase, Google Cloud, Machine Learning.


---


## Augmented Reality
- ARCore
- new launched! <a href="https://developers.google.com/ar/develop/geospatial#android-kotlinjava">'ARCore Geospatial API'</a> on Android and iOS.
- At no cost, in 87 countries
- Google map API 정보를 View and our visual positioning service를 이용해서 만듦.
- Partners : NBA, Snpa, Bird, Lime, Donkey, docomo, WeMo,...
- AR experience Demo - <a href="https://github.com/googlecreativelab/balloon-pop"> 'Balloon Pop' </a>


---


## Android
- Better Together
- Developer productivity


- `'Modern Android Development'`
```
    - Android Studio, Kotlin -> productive development
    - Material, Jetpack Compose -> UI framework, guidance
    - Jetpack -> reduce the code you need to write
    - Google services- > enhance your application
    - Google Play -> front store
```

- `1. **Better Together**`


- **'wearables' and 'large screens'**
- ` 1. Wear OS, with Fitbit `
    - launch <a href="https://android-developers.googleblog.com/2022/05/announcing-compose-for-wear-os-beta.html#:~:text=With%20this%20Beta%20release%2C%20Compose,components%20for%20the%201.0%20release.">the beta of Jetpack Compose for Wear OS</a>
    - Jetpack의 Form Factor를 통해 다양한 사이즈의 스크린에 대응 할 수 있음


    - <a href="https://developer.android.com/guide/health-and-fitness/health-connect">'Health Connect'</a> (collab. Google and Samsung) : Simplify connectivity between apps
    - Health관련 API를 안전하게 불러올 수 있음.


- ` 2. 'large screens', Tablet `
    - In 2022 시장 상황, Chrome OS(Chromebook models), Foldables(OPPO's Find N, Samsung's Fold/Flip 3),  Tablets(Lenovo's Tab P12Pro, Samsung's Galaxy Tab S8)
    - this year, launch Pixel Tablets
    - Android 12, 13 has optimizations. 'Taskbar, Multi-tasking, Keyboard and Mouse support, Compatibility mode'
    - <a href="https://developer.android.com/guide/topics/large-screens/get-started-with-large-screens">'large-screen quality guidelines'</a>
    - Jetpack library "DragAndDrop" and "WindowManager" have reached their 1.0 stable release.

    - Changes of **the Play Store**
    - the best large-screen optimized apps
    - focused editorial content / Separate review and rating system


- `2. **Developer Productivity**`
    - Changes of **Android Studio**
    - In Android Studio Electric Eel, we can see the new features
    - <a href="https://developer.android.com/studio/preview/features#compose_multipreview_annotations">'Multipreview API' </a> : different screen sizes에서 어떻게 보이는지 확인하고 싶을 때 preview code를 작성하지 않고 확인할 수 있음.
    - One annotation(@PreviewDevices) 작성만 하면 됨.

    - **Screen Mirroring Updates**
    - IDE flow에 머무르고 싶을 때가 있다.
    - feel my app(validate gestures, scoll events)
    - We can stream the interaction of a physical device screen right into Android Studio (over Wi-Fi or USB).
    - Live Edit without rebuilding
    - 이거말고도 여러가지 <a href="https://android-developers.googleblog.com/2022/05/13-things-to-know-for-android-developers-at-google-io.html"> 업데이트 </a>가 있으니 피드백 부탁!
    - in Lastest Jetpack Compose APIs
    > Every Developer said they never want to go back to XML once they've tried Compose
    - Twitter, Airbnb, Play Store가 Jetpack Compose로 만들어짐.