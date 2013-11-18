## Everything is an object!

For example, let's look at a string:

```php
String $hello = 'Hello World';

Int $length = $hello->length();

$length->toString()->dump(); // "string(11)"
```