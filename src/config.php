<?php

declare(strict_types=1);

use Rector\Config\RectorConfig;
use Rector\Transform\Rector\MethodCall\MethodCallToMethodCallRector;
use Rector\Transform\ValueObject\MethodCallToMethodCall;

return static function (
    RectorConfig $rectorConfig
): void {
    $rectorConfig->ruleWithConfiguration(
        MethodCallToMethodCallRector::class,
        [new MethodCallToMethodCall('AClass', 'methodFromAClass', 'AnotherClass', 'methodFromAnotherClass')]
    );
};