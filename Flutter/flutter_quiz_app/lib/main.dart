import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: '퀴즈 앱',
      home: HomeScreen(title: 'Flutter Demo Home Page'),
    );
  }
}
