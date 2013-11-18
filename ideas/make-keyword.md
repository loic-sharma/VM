## Make Keyword

Say a class requires a type in its constructor:

```php
class PostsController {

	public function __construct(PostsRepositoryInterface $posts) {

	}
}
```

The class could be instantiated like so (``PostsRepository`` implements ``PostsRepositoryInterface`` in this example):

```php
$controller = new PostsController(new PostsRepository);
```

While this works, this code is tightly coupled. Better yet, the ``PostsRepositoryInterface`` could be bound to ``PostsRepository`` in the ``Container``:

```php
Container::bind(PostsRepositoryInterface, function($container)
{
	return new DbPostsRepository;	
});
```

Then, instantiate the ``PostsController`` using the ``make`` keyword instead of ``new``:

```php
$controller = make PostsController;
```

The class is now instantiated with a new instance of the ``PostsRepository``.