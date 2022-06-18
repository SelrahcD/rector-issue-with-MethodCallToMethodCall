# Readme

I expected the MethodCallToMethodCall rector to be able to perform the following transformation but it doesn't work.

```php
<?php

class AClass {

    public function run()
    {
        $this->methodFromAClass();
    }
}

?>
-----
<?php

class AClass
{
    public function __construct(
            private AnotherClass $anotherClass
    )
    {
    }

    public function run()
    {
        $this->anotherClass->methodFromAnotherClass();
    }
}

?>
```

## Test
You can run the test with `phpunit` to see the issue.

## Cause

I believe the issue comes from a [check made at the start of the refactor method](https://github.com/rectorphp/rector-src/blob/main/rules/Transform/Rector/MethodCall/MethodCallToMethodCallRector.php#L95-L97) ensuring only method calls made on property are replaced.