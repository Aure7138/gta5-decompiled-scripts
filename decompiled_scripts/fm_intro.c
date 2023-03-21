#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 10;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 2;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 8;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 8;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	struct<123> Local_93 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_216 = 16;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 16;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	struct<6> Local_567 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_573 = 0;
	var uLocal_574 = 16;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	struct<5> Local_739[2];
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	bool bLocal_756 = 0;
	bool bLocal_757 = 0;
	bool bLocal_758 = 0;
	bool bLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_91 = 20;
	iLocal_92 = 33;
	bLocal_756 = true;
	bLocal_757 = true;
	bLocal_758 = true;
	bLocal_759 = true;
	if (unk_0x591AF4C50B46E014())
	{
		func_703(ScriptParam_0);
	}
	while (true)
	{
		func_702();
		if (func_694())
		{
			func_375(1);
		}
		if (func_372(0))
		{
			Local_739[unk_0x88641E5BC172153A() /*5*/] = 3;
		}
		if (func_371(unk_0x88641E5BC172153A()) > -1)
		{
			unk_0x0EA9C6F829566CB7(unk_0x0FFED3E94261A832());
		}
		switch (func_370(unk_0x88641E5BC172153A()))
		{
			case 0:
				if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 10))
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						unk_0xF6082E2ADA1C795B(&uLocal_750, 10);
					}
				}
				unk_0xC9173FA08E7D8227("FMINT", 0);
				if (func_369() && unk_0xED267C415C550FF0("FMINT", 0))
				{
					if (func_368() > 0)
					{
						func_367(&uLocal_402, 1, 0, "Lamar", 0, 1);
						func_366(0);
						func_365(4, 1);
						func_365(1, 1);
						func_365(0, 1);
						func_365(2, 1);
						func_365(3, 0);
						func_363(iLocal_92, 1);
						Local_739[unk_0x88641E5BC172153A() /*5*/] = 2;
						if (bLocal_758)
						{
							Local_739[unk_0x88641E5BC172153A() /*5*/].f_2 = -2;
						}
						else
						{
							Local_739[unk_0x88641E5BC172153A() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_368() == 4)
				{
					Local_739[unk_0x88641E5BC172153A() /*5*/] = 4;
				}
				if (func_368() == 6 && Local_739[unk_0x88641E5BC172153A() /*5*/] < 4)
				{
					Local_739[unk_0x88641E5BC172153A() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_344();
				func_20();
				if (func_368() == 4)
				{
					Local_739[unk_0x88641E5BC172153A() /*5*/] = 4;
				}
				if (func_368() == 6 && Local_739[unk_0x88641E5BC172153A() /*5*/] < 4)
				{
					Local_739[unk_0x88641E5BC172153A() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_739[unk_0x88641E5BC172153A() /*5*/] = 5;
				break;
			
			case 5:
				func_18(&(Local_567.f_5));
				if (func_17(&(Local_567.f_5)))
				{
					Local_739[unk_0x88641E5BC172153A() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_10(iLocal_91);
				Local_739[unk_0x88641E5BC172153A() /*5*/] = 6;
			
			case 6:
				func_375(0);
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			switch (func_368())
			{
				case 0:
					Local_567.f_0 = 2;
					break;
				
				case 2:
					func_9();
					func_8();
					func_2();
					if (func_1())
					{
						Local_567.f_0 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (!bLocal_756)
	{
		if (unk_0xAA4F14DA15DB0B51(Local_567.f_1, 1))
		{
			return 1;
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Local_567.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	func_3();
}

void func_3()
{
	if (unk_0x62E688B72E3C57B0())
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_567.f_1, 3))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_4, 0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_567.f_1), 3);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_567.f_1, 4))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_4, 2))
			{
				unk_0xF6082E2ADA1C795B(&(Local_567.f_1), 4);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_567.f_1, 5))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 3))
			{
				unk_0xF6082E2ADA1C795B(&(Local_567.f_1), 5);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_567.f_1, 6))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 4))
			{
				unk_0xF6082E2ADA1C795B(&(Local_567.f_1), 6);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_567.f_1, 7))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 5))
			{
				unk_0xF6082E2ADA1C795B(&(Local_567.f_1), 7);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_567.f_1, 8))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 6))
			{
				unk_0xF6082E2ADA1C795B(&(Local_567.f_1), 8);
			}
		}
		switch (Local_567.f_2)
		{
			case 0:
				if (unk_0xAA4F14DA15DB0B51(Local_567.f_1, 3))
				{
					if (func_4(&(Local_567.f_3), &(Local_567.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_574))
					{
						unk_0x2DEA38A68AA89671(unk_0xECBE9D2902B2B964(Local_567.f_3), 1, 0, 0);
						Local_567.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0xAA4F14DA15DB0B51(Local_567.f_1, 4))
				{
					Local_567.f_2 = 1;
				}
				break;
			
			case 1:
				if (unk_0xAA4F14DA15DB0B51(Local_567.f_1, 5))
				{
					Local_567.f_2 = 3;
				}
				break;
			
			case 3:
				if (unk_0xAA4F14DA15DB0B51(Local_567.f_1, 6))
				{
					Local_567.f_2 = 4;
				}
				break;
			
			case 4:
				if (unk_0xAA4F14DA15DB0B51(Local_567.f_1, 7))
				{
					Local_567.f_2 = 5;
				}
				break;
			
			case 5:
				if (unk_0xAA4F14DA15DB0B51(Local_567.f_1, 8))
				{
					Local_567.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam5, var uParam6)
{
	if (func_7(Global_2497344.f_773) && func_7(Global_2497344.f_774))
	{
		if (!unk_0x3756406E4D76B25E(*uParam0))
		{
			if (func_6(uParam0, Global_2497344.f_773, Param2, fParam5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				unk_0x14999277BDD138F1(unk_0xECBE9D2902B2B964(*uParam0), 1);
			}
		}
		if (!unk_0x3756406E4D76B25E(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2497344.f_774, -1, 1, 1, 1))
			{
				unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(*uParam1), 1);
				unk_0xFD213087BC4CC3B3(Global_2497344.f_773);
				unk_0xFD213087BC4CC3B3(Global_2497344.f_774);
				unk_0xE77EEA92586CF2E8(unk_0xECBE9D2902B2B964(*uParam0), 0);
				unk_0x13DE0BD5FC063164(unk_0xC09E9E2B61AD04E7(*uParam1), 1);
				func_367(uParam6, 8, unk_0xC09E9E2B61AD04E7(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!unk_0x3756406E4D76B25E(*uParam0) || !unk_0x3756406E4D76B25E(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xF157AC7C4936A07C(1))
	{
		return 0;
	}
	if (!unk_0x3756406E4D76B25E(uParam1))
	{
		return 0;
	}
	if (!unk_0x7FAC45D56235AB39(unk_0xECBE9D2902B2B964(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xDF7D91421097E934(unk_0x7B47BFDF39EC38D3(unk_0xECBE9D2902B2B964(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(unk_0xC09E9E2B61AD04E7(*uParam0), iParam7);
		if (unk_0x84AEB9C70AC446A5(unk_0xC09E9E2B61AD04E7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	
	if (!unk_0x0EFB343481EA3E51(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x17F1CA1754EDB8DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE42A511281C9895B(iParam1, Param2, fParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0xEDE67C014A25CEBB(uVar0);
	Global_2497344.f_5742 = uVar0;
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		if (bParam15)
		{
			unk_0x6584E56EC53294F2(uVar0, 1);
		}
		unk_0xE77EEA92586CF2E8(uVar0, iParam10);
		if (unk_0x84AEB9C70AC446A5(iVar0))
		{
			if (bParam8)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
			else
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0x71BF6BEE4B09B8FF(*uParam0, unk_0x0FFED3E94261A832(), 1);
			}
		}
		unk_0xC0CE5D00E49597D9(iVar0, iParam9);
		unk_0xE373A18F5FF76D31(iVar0, 1);
		if (bParam12)
		{
			unk_0xC4021F26C717AD72(iVar0);
			unk_0x1873102BDC0A9FE0(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

bool func_7(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x0F39DF6675B2333E(iParam0);
	return unk_0xA1FC9D7AEA164881(iParam0);
}

void func_8()
{
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
		{
			if (bLocal_756)
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_567.f_1, 2))
				{
					if (unk_0xAA4F14DA15DB0B51(Local_739[iVar0 /*5*/].f_3, 2))
					{
						unk_0xF6082E2ADA1C795B(&(Local_567.f_1), 2);
					}
				}
			}
			else if (!unk_0xAA4F14DA15DB0B51(Local_567.f_1, 1))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_739[iVar0 /*5*/].f_3, 1))
				{
					unk_0xF6082E2ADA1C795B(&(Local_567.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_10(int iParam0)
{
	if (!func_13(unk_0x0FFED3E94261A832(), 1))
	{
		return;
	}
	if (!func_11(unk_0x0FFED3E94261A832()) == iParam0)
	{
		return;
	}
}

int func_11(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2422215[iParam0 /*387*/].f_1;
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_13(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_11(iParam0) != 0;
	}
	return func_14(iParam0, bParam1);
}

int func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_15(iParam0))
		{
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_15(int iParam0)
{
	return func_16(iParam0);
}

bool func_16(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_18(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x62E688B72E3C57B0())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
		}
		uParam0->f_1 = 1;
	}
}

void func_20()
{
	switch (func_371(unk_0x88641E5BC172153A()))
	{
		case -2:
			func_186();
			break;
		
		case -1:
			func_185();
			break;
		
		case 0:
			func_29();
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			func_21();
			break;
	}
}

void func_21()
{
	switch (iLocal_755)
	{
		case 0:
			if (!func_22(iLocal_92))
			{
				unk_0xF6082E2ADA1C795B(&(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3), 2);
				Local_739[unk_0x88641E5BC172153A() /*5*/].f_2 = 99;
			}
			break;
	}
}

bool func_22(int iParam0)
{
	return func_23(iParam0, 5, 1);
}

int func_23(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xAA4F14DA15DB0B51(Global_91829.f_1315[iParam0], iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_28() == 0)
		{
			return unk_0xAA4F14DA15DB0B51(func_24(func_27(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_24(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_25(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

int func_26()
{
	return Global_1312735;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 823;
			break;
		
		case 1:
			return 824;
			break;
		
		case 2:
			return 825;
			break;
		
		case 3:
			return 826;
			break;
		
		case 4:
			return 827;
			break;
		
		case 5:
			return 828;
			break;
		
		case 6:
			return 829;
			break;
		
		case 7:
			return 830;
			break;
		
		case 8:
			return 831;
			break;
		
		case 9:
			return 832;
			break;
		
		case 10:
			return 833;
			break;
		
		case 11:
			return 834;
			break;
		
		case 12:
			return 835;
			break;
		
		case 13:
			return 836;
			break;
		
		case 14:
			return 837;
			break;
		
		case 15:
			return 839;
			break;
		
		case 16:
			return 840;
			break;
		
		case 17:
			return 841;
			break;
		
		case 18:
			return 842;
			break;
		
		case 19:
			return 843;
			break;
		
		case 20:
			return 844;
			break;
		
		case 21:
			return 845;
			break;
		
		case 22:
			return 846;
			break;
		
		case 23:
			return 847;
			break;
		
		case 24:
			return 848;
			break;
		
		case 25:
			return 849;
			break;
		
		case 26:
			return 850;
			break;
		
		case 27:
			return 851;
			break;
		
		case 28:
			return 852;
			break;
		
		case 29:
			return 853;
			break;
		
		case 30:
			return 854;
			break;
		
		case 31:
			return 855;
			break;
		
		case 32:
			return 856;
			break;
		
		case 33:
			return 857;
			break;
		
		case 34:
			return 858;
			break;
		
		case 35:
			return 859;
			break;
		
		case 36:
			return 860;
			break;
		
		case 37:
			return 861;
			break;
		
		case 38:
			return 862;
			break;
		
		case 39:
			return 863;
			break;
		
		case 40:
			return 867;
			break;
		
		case 41:
			return 868;
			break;
		
		case 42:
			return 869;
			break;
		
		case 43:
			return 870;
			break;
		
		case 44:
			return 6134;
			break;
		
		case 45:
			return 3783;
			break;
		
		case 46:
			return 5358;
			break;
		
		default:
			break;
	}
	return 6309;
}

int func_28()
{
	return Global_25222;
}

void func_29()
{
	int iVar0;
	
	if (func_184())
	{
		if (func_12(unk_0x0FFED3E94261A832(), 1, 1))
		{
			func_183(0);
		}
	}
	if (!func_182(&uLocal_392))
	{
		func_19(&uLocal_392, 0, 0);
	}
	if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 21))
	{
		unk_0xF6082E2ADA1C795B(&uLocal_750, 21);
	}
	if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 3))
	{
		if (!func_182(&uLocal_390))
		{
			func_19(&uLocal_390, 0, 0);
		}
		else if (unk_0xAA4F14DA15DB0B51(uLocal_750, 21))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
				{
					if (func_181(&uLocal_390, 3000, 0))
					{
						unk_0xF6082E2ADA1C795B(&uLocal_750, 3);
					}
				}
			}
		}
		if (func_181(&uLocal_390, 40000, 0))
		{
			unk_0xF6082E2ADA1C795B(&uLocal_750, 3);
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 16))
	{
		if (!unk_0x6235C49EA2DBA22D())
		{
			if (!unk_0x9E5289F5D782437C())
			{
				unk_0xF6082E2ADA1C795B(&uLocal_750, 16);
				func_180(&uLocal_390);
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_4, 2))
	{
		if (!func_182(&uLocal_396))
		{
			func_19(&uLocal_396, 0, 0);
		}
		else if (!unk_0xAA4F14DA15DB0B51(uLocal_751, 1))
		{
			if (func_181(&uLocal_396, 10000, 0))
			{
				unk_0xF6082E2ADA1C795B(&uLocal_751, 1);
				func_180(&uLocal_396);
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(uLocal_750, 19))
		{
			if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 18))
			{
				if (!func_178() || func_181(&uLocal_390, 5000, 0))
				{
					func_177(0);
					unk_0xF6082E2ADA1C795B(&uLocal_750, 18);
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 244, 0);
						unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 243, 0);
						unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 242, 0);
					}
				}
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(uLocal_750, 18))
	{
		if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 2))
		{
			if (unk_0x0B21CC5276C2CE1B())
			{
				iVar0 = 0;
				unk_0xF6082E2ADA1C795B(&iVar0, 3);
				unk_0xF6082E2ADA1C795B(&iVar0, 4);
				unk_0xF6082E2ADA1C795B(&iVar0, 5);
				if (func_88(&uLocal_402, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_87(1);
					unk_0xF6082E2ADA1C795B(&uLocal_750, 2);
					if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 20))
					{
						func_78(19, 3, 1);
						unk_0xF6082E2ADA1C795B(&uLocal_750, 20);
					}
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						unk_0xA6EF4C7DCA806A90(unk_0x2A5EB8B0FE590B91(), 1, 1);
					}
				}
			}
		}
		else if (!func_77(0))
		{
			if (!func_76())
			{
				if (!func_74())
				{
					if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 12))
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							unk_0xA6EF4C7DCA806A90(unk_0x2A5EB8B0FE590B91(), 0, 1);
							unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 244, 1);
							unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 243, 1);
							unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 242, 1);
						}
						unk_0xF6082E2ADA1C795B(&uLocal_750, 12);
						func_19(&uLocal_394, 0, 0);
						func_19(&uLocal_398, 0, 0);
					}
				}
			}
		}
		if (unk_0xAA4F14DA15DB0B51(uLocal_750, 12))
		{
			if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 17))
			{
				if (!unk_0x9E5289F5D782437C())
				{
					func_70();
					unk_0xF6082E2ADA1C795B(&uLocal_750, 17);
					func_180(&uLocal_390);
				}
			}
			else if (!func_178())
			{
				if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 23))
				{
					if (func_181(&uLocal_398, 4500, 0))
					{
						unk_0xF6082E2ADA1C795B(&uLocal_750, 23);
						unk_0xF6082E2ADA1C795B(&(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3), 3);
					}
				}
				if (func_181(&uLocal_394, 15000, 0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 22))
					{
						unk_0xF6082E2ADA1C795B(&uLocal_750, 22);
					}
				}
				if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) == 0)
				{
					if (unk_0xAA4F14DA15DB0B51(uLocal_750, 14))
					{
						unk_0x507FE690B1271947(&uLocal_750, 14);
					}
					if (!func_22(iLocal_92))
					{
						if (unk_0xAA4F14DA15DB0B51(uLocal_750, 13))
						{
							unk_0x507FE690B1271947(&uLocal_750, 13);
						}
						if (unk_0xAA4F14DA15DB0B51(uLocal_750, 25) || (!unk_0xAA4F14DA15DB0B51(uLocal_750, 25) && !unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0)))
						{
							if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 0))
							{
								if (unk_0xAA4F14DA15DB0B51(uLocal_750, 15))
								{
									unk_0x507FE690B1271947(&uLocal_750, 15);
								}
								if (unk_0xBDD3EABACAB97D09(Global_91829.f_211[iLocal_92]))
								{
									func_64("GET_AMMU", 0);
									unk_0xF6082E2ADA1C795B(&uLocal_750, 0);
									unk_0xF6082E2ADA1C795B(&uLocal_750, 25);
									if (unk_0xBDD3EABACAB97D09(Global_91829.f_211[iLocal_92]))
									{
										if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_772, 2))
										{
											unk_0xD42DEAFD12809447(Global_91829.f_211[iLocal_92], 1);
										}
										func_363(iLocal_92, 1);
									}
								}
							}
							else if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_772, 2))
							{
								if (unk_0xBDD3EABACAB97D09(Global_91829.f_211[iLocal_92]))
								{
									if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 15))
									{
										unk_0xD42DEAFD12809447(Global_91829.f_211[iLocal_92], 0);
										unk_0xF6082E2ADA1C795B(&uLocal_750, 15);
									}
								}
							}
							else if (unk_0xBDD3EABACAB97D09(Global_91829.f_211[iLocal_92]))
							{
								if (unk_0xAA4F14DA15DB0B51(uLocal_750, 15))
								{
									unk_0xD42DEAFD12809447(Global_91829.f_211[iLocal_92], 1);
									unk_0x507FE690B1271947(&uLocal_750, 15);
								}
							}
						}
					}
					else
					{
						if (unk_0xAA4F14DA15DB0B51(uLocal_750, 0))
						{
							unk_0x507FE690B1271947(&uLocal_750, 0);
						}
						if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 13))
						{
							func_64("GET_GUN", 0);
							func_63(1);
							unk_0xF6082E2ADA1C795B(&uLocal_750, 13);
						}
					}
				}
				else if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 14))
				{
					unk_0x7D53B6FFAEDA810A(1);
					if (unk_0xAA4F14DA15DB0B51(uLocal_750, 0))
					{
						unk_0x507FE690B1271947(&uLocal_750, 0);
					}
					if (unk_0xAA4F14DA15DB0B51(uLocal_750, 13))
					{
						unk_0x507FE690B1271947(&uLocal_750, 13);
					}
					if (unk_0xBDD3EABACAB97D09(Global_91829.f_211[iLocal_92]))
					{
						unk_0xD42DEAFD12809447(Global_91829.f_211[iLocal_92], 0);
						unk_0xA4F6216A8431C2E8(Global_91829.f_211[iLocal_92], 0);
						func_363(iLocal_92, 0);
					}
					func_64("LOSE_COP", 0);
					unk_0xF6082E2ADA1C795B(&uLocal_750, 14);
				}
			}
		}
	}
	else if (func_181(&uLocal_392, 300000, 0))
	{
		unk_0xF6082E2ADA1C795B(&uLocal_750, 18);
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 0))
	{
		if (((unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_pistol"), 0) || unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_combatpistol"), 0)) || unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_appistol"), 0)) || unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_microsmg"), 0))
		{
			if (func_61())
			{
				func_56(1);
				unk_0xF6082E2ADA1C795B(&(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3), 0);
				if (func_22(iLocal_92))
				{
				}
			}
		}
		else
		{
			func_42(400);
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 1))
	{
		if (!func_40())
		{
			unk_0xF6082E2ADA1C795B(&(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3), 1);
			func_33();
			func_32("FM_IHELP_AMMU", -1);
			if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
				unk_0xF6082E2ADA1C795B(&uLocal_750, 31);
			}
			func_180(&uLocal_390);
			if (bLocal_756)
			{
				if (bLocal_757)
				{
					Local_739[unk_0x88641E5BC172153A() /*5*/].f_2 = 3;
				}
				else
				{
					Local_739[unk_0x88641E5BC172153A() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_739[unk_0x88641E5BC172153A() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_31())
	{
		iVar0 = Global_2526994[iParam0 /*3*/][func_25(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0D7634B211BCB8B0(iVar0, iParam1, iParam3);
		}
	}
}

int func_31()
{
	return 1;
	return 0;
}

void func_32(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

void func_33()
{
	if (!func_39())
	{
		return;
	}
	if (!unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == Global_1312575.f_9)
	{
		return;
	}
	func_34();
}

void func_34()
{
	func_36();
	func_35(0);
}

void func_35(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x591AF4C50B46E014();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0x11ABC381A58DD5AB();
		Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
	}
	StringCopy(&(Global_1312575.f_12), "", 16);
	StringCopy(&(Global_1312575.f_16), "", 64);
	StringCopy(&(Global_1312575.f_32), "", 64);
	Global_1312575.f_52 = 0;
	Global_1312575.f_53 = 0;
	Global_1312575.f_54 = 0;
	Global_1312575.f_55 = -1;
	Global_1312575.f_56 = 0;
	Global_1312575.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_36()
{
	if (!func_38())
	{
	}
	if (func_39())
	{
		unk_0x2EDDA24620ABEEBA(&(Global_1312575.f_12));
		func_37();
		unk_0x3CBB1A3F50D6B58F();
	}
}

void func_37()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			unk_0xEA97619D8B89D387(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		default:
	}
}

int func_38()
{
	if (!func_39())
	{
		return 0;
	}
	unk_0x7474291EEDB9BF12(&(Global_1312575.f_12));
	func_37();
	return unk_0x0D3452E263E036CA();
}

int func_39()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_40()
{
	return ((((((((((func_41(28) || func_41(29)) || func_41(30)) || func_41(31)) || func_41(32)) || func_41(33)) || func_41(34)) || func_41(35)) || func_41(36)) || func_41(37)) || func_41(38));
}

int func_41(int iParam0)
{
	return func_23(iParam0, 6, 1);
}

void func_42(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		iVar0 = func_53(unk_0x0FFED3E94261A832());
		if (iVar0 < iParam0)
		{
			if (func_52())
			{
				func_43(1734805203, (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				unk_0x82BB9E48D27ED2C6((iParam0 - iVar0));
			}
		}
	}
}

void func_43(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_52())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
			if (iParam1 > 0)
			{
				func_44(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
			func_44(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_44(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_52())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_26()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0xA4924D1E6921DA1D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar3))
		{
			*uParam0 = func_51(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2595364[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2595864 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2595873 = 1;
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_50(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_45(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_46(iParam0);
	}
}

void func_46(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_52())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_49(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9C51DBB1481E20AE();
			}
		}
		else if (!bVar0)
		{
			unk_0x2605CD7011F296C8(Global_2595364[iParam0 /*76*/]);
		}
		func_47(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_47(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_48(&(uParam0->f_8.f_3));
	func_48(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_48(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_49(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_50(int iParam0, var uParam1)
{
	Global_2457026 = uParam1;
	Global_2457025 = iParam0;
}

int func_51(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_52())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2595364[iVar0 /*76*/].f_2 = 1;
			Global_2595364[iVar0 /*76*/].f_1 = uParam5;
			Global_2595364[iVar0 /*76*/].f_3 = uParam1;
			Global_2595364[iVar0 /*76*/].f_4 = uParam2;
			Global_2595364[iVar0 /*76*/].f_7 = uParam3;
			Global_2595364[iVar0 /*76*/].f_5 = 0;
			Global_2595364[iVar0 /*76*/] = iParam0;
			Global_2595364[iVar0 /*76*/].f_6 = iParam4;
			Global_2595364[iVar0 /*76*/].f_72 = uParam8;
			Global_2595364[iVar0 /*76*/].f_71 = uParam7;
			Global_2595364[iVar0 /*76*/].f_75 = 0;
			Global_2595864 = 0;
			if (bParam6)
			{
				Global_2595364[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_52()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

var func_53(int iParam0)
{
	var uVar0;
	
	uVar0 = func_54(iParam0);
	return uVar0;
}

int func_54(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return unk_0x0A157779750902D2(-1);
		}
		else if (func_55(iParam0))
		{
			return Global_1592456[iParam0 /*635*/].f_204.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_55(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_2434604.f_1, iParam0);
	}
	return 1;
}

void func_56(bool bParam0)
{
	func_57(28, bParam0);
	func_57(29, bParam0);
	func_57(30, bParam0);
	func_57(31, bParam0);
	func_57(32, bParam0);
	func_57(33, bParam0);
	func_57(34, bParam0);
	func_57(35, bParam0);
	func_57(36, bParam0);
	func_57(37, bParam0);
	func_57(38, bParam0);
}

void func_57(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 14, 1))
		{
			func_60(iParam0, 14, 1);
		}
	}
	else if (func_23(iParam0, 14, 1))
	{
		func_58(iParam0, 14, 1);
	}
}

void func_58(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x507FE690B1271947(&(Global_91829.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0x507FE690B1271947(&uVar0, iParam1);
			func_59(func_27(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_103236.f_668[iParam0]), iParam1);
	}
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF6082E2ADA1C795B(&(Global_91829.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0xF6082E2ADA1C795B(&uVar0, iParam1);
			func_59(func_27(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_668[iParam0]), iParam1);
	}
}

bool func_61()
{
	return ((((((((((func_62(28) || func_62(29)) || func_62(30)) || func_62(31)) || func_62(32)) || func_62(33)) || func_62(34)) || func_62(35)) || func_62(36)) || func_62(37)) || func_62(38));
}

int func_62(int iParam0)
{
	return func_23(iParam0, 3, 0);
}

void func_63(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1752261, 19))
		{
			unk_0xF6082E2ADA1C795B(&Global_1752261, 19);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1752261, 19))
	{
		unk_0x507FE690B1271947(&Global_1752261, 19);
	}
}

void func_64(char* sParam0, bool bParam1)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return;
	}
	if (func_68(sParam0))
	{
		return;
	}
	func_34();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_67();
	func_66(bParam1);
	func_65();
}

void func_65()
{
	unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 1);
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x507FE690B1271947(&(Global_1312575.f_59), 0);
}

void func_67()
{
	Global_1312575.f_10 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 86400000);
	Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
}

bool func_68(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_69(sParam0);
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12));
}

bool func_69(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

void func_70()
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { func_73(unk_0x0FFED3E94261A832()) };
	bVar13 = unk_0x26BB1D4FDEDC41EC();
	bVar14 = func_72(&Var0);
	if (!bVar13 && !bVar14)
	{
		func_71("HLP_TAXI3", 9000);
	}
	else if (bVar13 && !bVar14)
	{
		func_71("HLP_SOC2", 9000);
	}
	else if (bVar13 && bVar14)
	{
		func_71("HLP_SOC1", 9000);
	}
}

void func_71(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 0, iParam1);
}

int func_72(var uParam0)
{
	if (unk_0x72BFFF26648DA18C())
	{
		if (unk_0x591BB87E287F24DC() && unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_73(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

bool func_74()
{
	return func_75();
}

bool func_75()
{
	return Global_1345111.f_40 == 3;
}

int func_76()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

int func_77(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_78(int iParam0, int iParam1, bool bParam2)
{
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_80();
		if (iParam1 == 4)
		{
			Global_103236.f_27831[iParam0 /*29*/].f_12[0] = 1;
			Global_103236.f_27831[iParam0 /*29*/].f_12[1] = 1;
			Global_103236.f_27831[iParam0 /*29*/].f_12[2] = 1;
			Global_103236.f_27831[iParam0 /*29*/].f_24[0] = 1;
			Global_103236.f_27831[iParam0 /*29*/].f_24[1] = 1;
			Global_103236.f_27831[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] == 1 && Global_103236.f_27831[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_103236.f_27831[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69800)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_79();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_79();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_79();
			}
		}
	}
}

void func_79()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x91D2F083AE17E209(&(Global_103236.f_27831[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0xD05F099FEF4ED10A("");
		StringCopy(&cVar16, unk_0x91D2F083AE17E209(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0x91D2F083AE17E209("CELL_253");
		unk_0xF8DCA62B36D8BCE7(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xD05F099FEF4ED10A("CELL_255");
		unk_0xD5DA3EC5EEC78358(&(Global_2923[1 /*6*/]));
		unk_0xF8DCA62B36D8BCE7(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x507FE690B1271947(&Global_2313, 0);
}

void func_80()
{
	if (func_86(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_81();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_81()
{
	func_82();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_82()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_85(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_84(unk_0x2A5EB8B0FE590B91());
			if (func_83(iVar0) && (!func_86(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_83(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_83(int iParam0)
{
	return iParam0 < 3;
}

int func_84(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_85(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_85(int iParam0)
{
	if (func_83(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_86(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_87(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 17);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2314, 17);
	}
}

int func_88(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_175())
	{
		return 0;
	}
	if (func_174())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_89(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_89(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x58478145CAF8429C(sParam2))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam3))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC());
	iVar1 = func_173(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x58478145CAF8429C(sParam7))
	{
		iVar2 = unk_0xCAEDBF30E3EA14FC(sParam7);
	}
	if (func_172(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_168(uParam6))
	{
		return 0;
	}
	if (func_165(iVar0, iVar1, iVar2))
	{
		if (func_164())
		{
			return 0;
		}
		func_163();
		return func_96(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_95(iParam4))
	{
		return 0;
	}
	func_90(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1345111.f_40.f_1 = iParam0;
	Global_1345111.f_40.f_2 = iParam1;
	Global_1345111.f_40.f_3 = iParam2;
	StringCopy(&(Global_1345111.f_40.f_4), sParam3, 16);
	Global_1345111.f_40.f_8 = iParam4;
	Global_1345111.f_40.f_9 = iParam5;
	Global_1345111.f_40.f_14 = uParam6;
	func_91(iParam4);
	func_163();
	Global_1345111.f_40.f_13 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 7000);
}

void func_91(int iParam0)
{
	if (func_94(iParam0))
	{
		func_93();
		return;
	}
	func_92();
}

void func_92()
{
	Global_1345111.f_40.f_10 = 0;
}

void func_93()
{
	Global_1345111.f_40.f_10 = 1;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_95(int iParam0)
{
	return iParam0 > Global_1345111.f_40.f_8;
}

int func_96(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_162();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_159(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_156(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_159(uParam0, sParam3, sParam4);
		}
		return func_139(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_138(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_128(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_127(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_97(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_97(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_126();
	bVar0 = true;
	if (func_99(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_98(120000);
		return 1;
	}
	return 0;
}

void func_98(int iParam0)
{
	Global_1345111.f_40.f_11 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam0);
	Global_1345111.f_40.f_12 = 1;
}

int func_99(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_125();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x4325D353D7D27B34(iVar0);
		iVar1 = func_119(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x64168D046C8CFB0F(unk_0x11ABC381A58DD5AB(), Global_1345111.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_118(sParam5, bParam6, &iVar3);
	uVar5 = func_116(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		iVar6++;
		if (!unk_0x58478145CAF8429C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x35302CD5A5D37EED(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xAA4F14DA15DB0B51(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x58478145CAF8429C(sVar2))
	{
		bVar12 = func_115(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_103(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(uParam4, 0))
	{
		func_102();
	}
	func_126();
	func_101();
	func_100();
	return 1;
}

void func_100()
{
	Global_1345111.f_57 = 0;
	Global_1345111.f_57.f_1 = 0;
}

void func_101()
{
	Global_1345111.f_40 = 3;
}

void func_102()
{
	unk_0xF6082E2ADA1C795B(&Global_2313, 8);
}

int func_103(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_104(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0xF6082E2ADA1C795B(&Global_2600685, 0);
		}
		return 1;
	}
	return 0;
}

int func_104(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x35302CD5A5D37EED(sParam14, sParam15))
	{
	}
	func_80();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xFBCC401A3A7C9E1C(unk_0x2A5EB8B0FE590B91()))
			{
				return 0;
			}
		}
		if (Global_2600670 == 1)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_114() == 0)
	{
		func_112();
		return 0;
	}
	func_111(Global_2600669);
	StringCopy(&(Global_2599420[Global_2600669 /*104*/]), sParam1, 64);
	Global_2599420[Global_2600669 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2599420[Global_2600669 /*104*/].f_24 = iParam2;
	}
	Global_2599420[Global_2600669 /*104*/].f_25 = iParam7;
	Global_2599420[Global_2600669 /*104*/].f_26 = uParam8;
	Global_2599420[Global_2600669 /*104*/].f_29 = uParam9;
	Global_2599420[Global_2600669 /*104*/].f_30 = uParam12;
	Global_2599420[Global_2600669 /*104*/].f_31 = uParam11;
	Global_2599420[Global_2600669 /*104*/].f_28 = 0;
	Global_2599420[Global_2600669 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_33), sParam4, 64);
	Global_2599420[Global_2600669 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_50), sParam5, 64);
	Global_2599420[Global_2600669 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_83), sParam15, 64);
	func_80();
	switch (iParam16)
	{
		case 3:
			Global_2599420[Global_2600669 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2599420[Global_2600669 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2599420[Global_2600669 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2599420[Global_2600669 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_110(0);
				break;
			
			case 1:
				func_110(1);
				break;
			
			case 2:
				func_110(2);
				break;
			
			case 3:
				func_110(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2600670 = 1;
				break;
			
			case 0:
				Global_2600670 = 1;
				break;
			
			case 2:
				Global_2600670 = 1;
				break;
			
			case 1:
				Global_2600670 = 1;
				break;
			}
	}
	Global_16814[Global_2600669] = 0;
	if (bParam10)
	{
		func_80();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_109())
			{
				unk_0x08BE237DBCD9CBD9(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_108(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_105(1);
			func_108(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_86(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_107(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar2);
								unk_0x8123397DC676E794();
							}
							if (Global_2454704)
							{
								if (iVar1 == 14)
								{
									func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_103236.f_13922[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_103236.f_13922[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_103236.f_13922[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69800)
								{
									iVar4 = 0;
									iVar4 = Global_2599419;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2599420[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2599420[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2599420[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36949;
											break;
										
										case 1:
											iVar6 = Global_36950;
											break;
										
										case 2:
											iVar6 = Global_36951;
											break;
										
										default:
											break;
									}
									func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_107(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(Global_2319);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_107(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar7);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_107(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar8);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 8)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_107(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if ((iVar1 == 23 && unk_0x35302CD5A5D37EED(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xAA4F14DA15DB0B51(Global_2314, 6))
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_107(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1621535.f_1;
								func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_106(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x58478145CAF8429C(sParam7))
	{
		func_107(sParam7);
	}
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		func_107(sParam8);
	}
	if (!unk_0x58478145CAF8429C(sParam9))
	{
		func_107(sParam9);
	}
	if (!unk_0x58478145CAF8429C(sParam10))
	{
		func_107(sParam10);
	}
	if (!unk_0x58478145CAF8429C(sParam11))
	{
		func_107(sParam11);
	}
	unk_0x8123397DC676E794();
}

void func_107(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

void func_108(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x8123397DC676E794();
}

bool func_109()
{
	return Global_1312852;
}

void func_110(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_103236.f_13832[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_111(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD887411BD4A4A92D();
	uVar1 = unk_0xA4EAAF8247A3A69E();
	uVar2 = unk_0xDA870B7547A455EA();
	uVar3 = unk_0x56E76B9CA4BBAA18();
	uVar4 = unk_0x0FD588FC21950895() + 1;
	uVar5 = unk_0x15C180E135C728D1();
	Global_2599420[iParam0 /*104*/].f_18 = uVar0;
	Global_2599420[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2599420[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2599420[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2599420[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2599420[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2600669 = 11;
	Global_2599420[Global_2600669 /*104*/].f_18 = -1;
	Global_2599420[Global_2600669 /*104*/].f_18.f_1 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_2 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_3 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_113(Global_2599420[iVar2 /*104*/].f_18, Global_2599420[Global_2600669 /*104*/].f_18))
		{
			Global_2600669 = iVar2;
		}
		iVar2++;
	}
	Global_2599420[Global_2600669 /*104*/].f_24 = 1;
}

int func_113(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_114()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2599420[iVar2 /*104*/].f_24 == 0)
		{
			Global_2600669 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2600669 = 11;
	Global_2599420[Global_2600669 /*104*/].f_18 = -1;
	Global_2599420[Global_2600669 /*104*/].f_18.f_1 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_2 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_3 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2599420[iVar2 /*104*/].f_24 == 0 || Global_2599420[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_113(Global_2599420[iVar2 /*104*/].f_18, Global_2599420[Global_2600669 /*104*/].f_18))
			{
				Global_2600669 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2600669 == 11)
	{
		return 0;
	}
	Global_2599420[Global_2600669 /*104*/].f_99[0] = 0;
	Global_2599420[Global_2600669 /*104*/].f_99[1] = 0;
	Global_2599420[Global_2600669 /*104*/].f_99[2] = 0;
	return 1;
}

int func_115(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_104(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0xF6082E2ADA1C795B(&Global_2600685, 0);
		}
		return 1;
	}
	return 0;
}

int func_116(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_117(2, iParam1);
	return iParam0;
}

void func_117(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_118(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_117(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x91D2F083AE17E209(sParam0);
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = func_122(iParam0);
	if (iVar0 == -1)
	{
		func_120(iParam0, 1);
		return 0;
	}
	Global_1362801[iVar0 /*5*/].f_4 = 1;
	return Global_1362801[iVar0 /*5*/].f_2;
}

void func_120(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_122(iParam0) != -1)
	{
		return;
	}
	if (Global_1362964)
	{
		if (iParam0 == Global_1362964.f_1)
		{
			return;
		}
	}
	if (func_121(iParam0))
	{
		return;
	}
	if (Global_1363002 >= 32)
	{
		return;
	}
	Global_1362969[Global_1363002] = iParam0;
	Global_1363002++;
	if (bParam1)
	{
	}
}

int func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363002)
	{
		if (Global_1362969[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_122(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1362962 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1362962)
	{
		if (Global_1362801[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA630F1AB10AC8C10(Global_1362801[iVar0 /*5*/].f_2) && unk_0x32291EA29B6FC538(Global_1362801[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_123(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_123(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1362962)
	{
		return;
	}
	if (unk_0xA630F1AB10AC8C10(Global_1362801[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1362801[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xCF8EC788EB8AB4DB(Global_1362801[iParam0 /*5*/].f_2), 64);
			unk_0xE6AF47B902DCABC1(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x1156FB73B5FB1CC5(Global_1362801[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1362962)
	{
		Global_1362801[iVar32 /*5*/] = { Global_1362801[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_124(&(Global_1362801[iVar32 /*5*/]));
	Global_1362962 = (Global_1362962 - 1);
}

void func_124(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_125();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x591AF4C50B46E014())
	{
		uParam0->f_3 = unk_0x11ABC381A58DD5AB();
	}
}

int func_125()
{
	return -1;
}

void func_126()
{
	Global_1345111.f_40.f_9 = 4;
}

int func_127(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_126();
	bVar0 = false;
	return func_99(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_128(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_129(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_129(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_125();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x4325D353D7D27B34(iVar0);
		iVar1 = func_119(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x64168D046C8CFB0F(unk_0x11ABC381A58DD5AB(), Global_1345111.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16806 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_118(sParam5, bParam6, &iVar3);
	uVar5 = func_116(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		iVar6++;
		if (!unk_0x58478145CAF8429C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x35302CD5A5D37EED(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xAA4F14DA15DB0B51(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x58478145CAF8429C(sVar2))
	{
		bVar12 = func_137(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_131(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(uParam4, 0))
	{
		func_102();
	}
	func_130();
	func_101();
	func_100();
	return 1;
}

void func_130()
{
	Global_1345111.f_40.f_9 = 3;
}

int func_131(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x507FE690B1271947(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_132(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xF6082E2ADA1C795B(&Global_2313, 1);
			unk_0xF6082E2ADA1C795B(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_132(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x35302CD5A5D37EED(sParam14, sParam15))
	{
	}
	func_80();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xFBCC401A3A7C9E1C(unk_0x2A5EB8B0FE590B91()))
			{
				return 0;
			}
		}
		if (Global_103236.f_13832[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_136() == 0)
	{
		func_134();
		return 0;
	}
	func_133(Global_16812);
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/]), sParam1, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_103236.f_13922[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_25 = iParam7;
	Global_103236.f_13922[Global_16812 /*104*/].f_26 = uParam8;
	Global_103236.f_13922[Global_16812 /*104*/].f_29 = uParam9;
	Global_103236.f_13922[Global_16812 /*104*/].f_30 = uParam12;
	Global_103236.f_13922[Global_16812 /*104*/].f_31 = uParam11;
	Global_103236.f_13922[Global_16812 /*104*/].f_28 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0xAA4F14DA15DB0B51(Global_2313, 10))
	{
		Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 1;
		Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 1;
		Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_110(0);
		func_110(2);
		func_110(1);
	}
	else
	{
		func_80();
		switch (iParam16)
		{
			case 3:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_110(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_110(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_110(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_110(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2313, 10))
		{
			Global_103236.f_13832[0 /*20*/].f_17 = 1;
			Global_103236.f_13832[1 /*20*/].f_17 = 1;
			Global_103236.f_13832[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_103236.f_13832[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_103236.f_13832[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_103236.f_13832[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_103236.f_13832[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_80();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_109())
			{
				unk_0x08BE237DBCD9CBD9(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_108(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_105(1);
			func_108(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_133(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD887411BD4A4A92D();
	uVar1 = unk_0xA4EAAF8247A3A69E();
	uVar2 = unk_0xDA870B7547A455EA();
	uVar3 = unk_0x56E76B9CA4BBAA18();
	uVar4 = unk_0x0FD588FC21950895() + 1;
	uVar5 = unk_0x15C180E135C728D1();
	Global_103236.f_13922[iParam0 /*104*/].f_18 = uVar0;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_103236.f_13922[Global_16812 /*104*/].f_18 = -1;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_135(Global_103236.f_13922[iVar2 /*104*/].f_18, Global_103236.f_13922[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_24 = 1;
}

int func_135(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_136()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_103236.f_13922[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_103236.f_13922[Global_16812 /*104*/].f_18 = -1;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_103236.f_13922[iVar2 /*104*/].f_24 == 0 || Global_103236.f_13922[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_135(Global_103236.f_13922[iVar2 /*104*/].f_18, Global_103236.f_13922[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

int func_137(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x507FE690B1271947(&Global_2313, 10);
	iVar0 = 3;
	if (func_132(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0xF6082E2ADA1C795B(&Global_2313, 1);
			unk_0xF6082E2ADA1C795B(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_138(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
	}
	if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	func_130();
	bVar0 = true;
	if (func_129(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_98(120000);
		return 1;
	}
	return 0;
}

int func_139(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xAA4F14DA15DB0B51(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xAA4F14DA15DB0B51(uParam4, 4))
	{
		bVar0 = func_155(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_145(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xAA4F14DA15DB0B51(uParam4, 3))
		{
			func_144(1);
		}
		if (unk_0xAA4F14DA15DB0B51(uParam4, 5))
		{
			func_143(1);
		}
		func_142();
		func_101();
		func_141();
		func_140();
		return 1;
	}
	return 0;
}

void func_140()
{
	Global_2505523 = 0;
}

void func_141()
{
	Global_1345111.f_57 = 1;
	Global_1345111.f_57.f_1 = 0;
}

void func_142()
{
	Global_1345111.f_40.f_9 = 1;
}

void func_143(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2315, 0);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2315, 0);
	}
}

void func_144(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 20);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 20);
	}
}

int func_145(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_154(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_146(sParam3, iParam4, bParam7);
}

int func_146(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0xE40123A348A5FEDA(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_153();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_152(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_151();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_80();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_150())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
				}
			}
			if (func_149())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_148();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_147();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_153();
	}
	return 0;
}

void func_147()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_148()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_149()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_150()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_151()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_152(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

void func_153()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_154(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_155(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_154(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 1;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_146(sParam3, iParam4, bParam7);
}

int func_156(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
	}
	if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (func_158(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_157();
		func_142();
		func_101();
		func_141();
		func_140();
		return 1;
	}
	return 0;
}

void func_157()
{
	Global_16763 = 0;
}

bool func_158(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_154(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 1;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 1;
	Global_15799 = 0;
	StringCopy(&Global_15893, sParam5, 24);
	Global_2621441 = 0;
	return func_146(sParam3, iParam4, bParam8);
}

int func_159(var uParam0, char* sParam1, char* sParam2)
{
	if (func_161(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_160();
		func_101();
		func_141();
		return 1;
	}
	return 0;
}

void func_160()
{
	Global_1345111.f_40.f_9 = 2;
}

bool func_161(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_154(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_146(sParam2, iParam3, 0);
}

void func_162()
{
	Global_1345111.f_55 = Global_1345111.f_40.f_1;
	Global_1345111.f_55.f_1 = Global_1345111.f_40.f_10;
}

void func_163()
{
	Global_1345111.f_40 = 1;
}

bool func_164()
{
	return Global_1345111.f_40 == 1;
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	if (!func_166(iParam0))
	{
		return 0;
	}
	if (Global_1345111.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1345111.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_166(int iParam0)
{
	if (!func_167())
	{
		return 0;
	}
	if (!Global_1345111.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_167()
{
	if (Global_1345111.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_168(var uParam0)
{
	if (func_171())
	{
		return 0;
	}
	if (func_75())
	{
		return 0;
	}
	if (func_77(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1761100 || func_170())
	{
		return 0;
	}
	if (!unk_0xAA4F14DA15DB0B51(uParam0, 6))
	{
		if (func_169())
		{
			return 0;
		}
	}
	return 1;
}

bool func_169()
{
	return unk_0x64168D046C8CFB0F(unk_0x11ABC381A58DD5AB(), Global_1361697);
}

int func_170()
{
	if (Global_2588311.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_171()
{
	return func_149();
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	if (!func_75())
	{
		return 0;
	}
	return func_165(iParam0, iParam1, iParam2);
}

int func_173(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

bool func_174()
{
	return Global_2503090.f_1;
}

int func_175()
{
	if (Global_1345299.f_2)
	{
		return 1;
	}
	return func_176();
}

bool func_176()
{
	return func_171();
}

void func_177(int iParam0)
{
	Global_2506010.f_1067 = iParam0;
}

int func_178()
{
	if (func_179("HLP_TAXI3"))
	{
		return 1;
	}
	if (func_179("HLP_SOC1"))
	{
		return 1;
	}
	if (func_179("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

bool func_179(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

void func_180(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_181(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
	if (unk_0x591AF4C50B46E014() && !bParam2)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_182(var uParam0)
{
	return uParam0->f_1;
}

void func_183(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 8))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 8);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 8))
	{
		unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 8);
	}
}

bool func_184()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 8);
}

void func_185()
{
	unk_0x9B0467159FAB9F56(800);
	if (!bLocal_758 || bLocal_759)
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
		}
	}
	if (!bLocal_759)
	{
		Local_739[unk_0x88641E5BC172153A() /*5*/].f_2 = 0;
	}
	else
	{
		Local_739[unk_0x88641E5BC172153A() /*5*/].f_2 = 3;
	}
}

void func_186()
{
	if (func_190(&Local_93, &(Local_739[unk_0x88641E5BC172153A() /*5*/].f_4)))
	{
		Local_739[unk_0x88641E5BC172153A() /*5*/].f_2 = -1;
	}
	func_187(&Local_93);
}

void func_187(var uParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x9E5289F5D782437C();
	switch (iLocal_754)
	{
		case 0:
			if (unk_0xAA4F14DA15DB0B51(*uParam0, 18))
			{
				if (!func_182(&uLocal_760))
				{
					func_19(&uLocal_760, 0, 0);
				}
				if (!bVar0)
				{
					if (!unk_0x6235C49EA2DBA22D())
					{
						func_71("HLP_XP1", 9000);
						func_180(&uLocal_760);
						func_19(&uLocal_760, 0, 0);
						iLocal_754++;
					}
				}
				else if (func_181(&uLocal_760, 5000, 0))
				{
					iLocal_754++;
					func_180(&uLocal_760);
					func_19(&uLocal_760, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!unk_0x6235C49EA2DBA22D())
				{
					func_71("HLP_XP2", 9000);
					func_180(&uLocal_760);
					func_19(&uLocal_760, 0, 0);
					iLocal_754++;
				}
			}
			else if (func_181(&uLocal_760, 5000, 0))
			{
				iLocal_754++;
				func_180(&uLocal_760);
				func_19(&uLocal_760, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!unk_0x6235C49EA2DBA22D())
				{
					func_71("HLP_RNK1", 9000);
					func_189(1);
					Global_2497344.f_1772 = 1;
					func_188(1, 0, -1);
					func_180(&uLocal_760);
					func_19(&uLocal_760, 0, 0);
					iLocal_754++;
				}
			}
			else if (func_181(&uLocal_760, 5000, 0))
			{
				iLocal_754++;
				func_180(&uLocal_760);
				func_19(&uLocal_760, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!unk_0x6235C49EA2DBA22D())
				{
					func_177(0);
					if (unk_0xC1A8588DDF7A118E() || unk_0x97FFE0491AC179A2())
					{
						func_71("HLP_CASHXBX", 9000);
					}
					else if (unk_0xCF690C88B391CFA3() || unk_0x429A1F8C699BEE23())
					{
						func_71("HLP_CASHPSN", 9000);
					}
					else
					{
						func_71("HLP_CASHGEN", 9000);
					}
					func_180(&uLocal_760);
					func_19(&uLocal_760, 0, 0);
					iLocal_754 = 99;
				}
			}
			else if (func_181(&uLocal_760, 5000, 0))
			{
				iLocal_754 = 99;
				func_180(&uLocal_760);
				func_19(&uLocal_760, 0, 0);
			}
			break;
		
		case 99:
			if (!unk_0xAA4F14DA15DB0B51(uLocal_751, 2))
			{
				unk_0xF6082E2ADA1C795B(&uLocal_751, 2);
			}
			break;
	}
}

void func_188(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1351508.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_1351508.f_1046), iParam0);
			}
			else
			{
				unk_0x507FE690B1271947(&(Global_1351508.f_1046), iParam0);
			}
			break;
	}
}

void func_189(int iParam0)
{
	Global_2497344.f_4450 = iParam0;
}

int func_190(var uParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	bool bVar8;
	
	if (!unk_0xAA4F14DA15DB0B51(*uParam0, 13))
	{
		if (unk_0x9FA769EB6C3BCCE4(unk_0x831E4CCD26549E1C()))
		{
			Var5 = { unk_0x0599320263F2EE4D(unk_0x831E4CCD26549E1C()) };
			if ((Var5.f_0 != 0f || Var5.f_1 != 0f) || Var5.f_2 != 0f)
			{
				unk_0xF8B740F31137A7A1(Var5, 0f, 0f, 0f);
				if (!unk_0xAA4F14DA15DB0B51(*uParam0, 14))
				{
					unk_0xF6082E2ADA1C795B(uParam0, 14);
				}
			}
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(*uParam0, 14))
	{
		unk_0xD36F38C63C0345CF();
		unk_0x507FE690B1271947(uParam0, 14);
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0x3EFE40733EFB6649(unk_0x2A5EB8B0FE590B91(), 337, 1);
	}
	func_343(uParam0);
	unk_0xF65D8DDE43138882(1f);
	func_337(uParam0);
	func_336(unk_0x0FFED3E94261A832());
	if (!unk_0xAA4F14DA15DB0B51(*uParam0, 31))
	{
		if (uParam0->f_6 > 0)
		{
			uParam0->f_32 = unk_0xD79C30F3A2706E90(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
			if (uParam0->f_32 != 0)
			{
				unk_0x1826A17A53A522C9(uParam0->f_32);
				unk_0xF6082E2ADA1C795B(uParam0, 31);
			}
		}
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (unk_0x09952BA662A7629B(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (unk_0x09952BA662A7629B(joaat("freemode")) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2497344.f_1771)
				{
					Global_2497344.f_1771 = 1;
					unk_0x154C8E1E6EFF1585(0);
				}
				if (!func_184())
				{
					func_183(1);
				}
				if (!unk_0xF4EE9D6C8E60AE22() && !unk_0xEF08C8E0C4679477())
				{
					unk_0x5BFE0E837BA0AF60(800);
				}
				if (!func_182(&(uParam0->f_15)))
				{
					func_19(&(uParam0->f_15), 0, 0);
				}
				unk_0x73F5E7B6BB964839(&Global_1761553);
				Global_1761554 = 0;
				Global_1761556 = 0;
				Global_1761555 = 0;
				Global_1761557 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0xF4EE9D6C8E60AE22())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_327(0, 0, 0, 1, 1, 1, 0);
					unk_0x75B1AC87ADB58EDD(1, 0);
					func_366(1);
					unk_0x3BA7AE801A10D005(1);
					unk_0x2849131272C1B1B9("EXTRASUNNY");
					unk_0xF1BE816931996931(19, 0, 0);
					unk_0x45E1ADCAE603052F(1);
					func_326(0);
					unk_0x43E2CCD362655963(0);
					func_320(1, 0);
					func_310(1, 1);
					if (unk_0x09952BA662A7629B(joaat("fm_intro")) < 1 || !func_309())
					{
						if (uParam0->f_292)
						{
							if (func_308() == 0)
							{
								unk_0xB0E58F97A2D02E5B("GTAO_INTRO_MALE");
								unk_0x4FACC47006A3F70F(1);
							}
						}
					}
					func_301(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					unk_0x507FE690B1271947(uParam0, 0);
					unk_0x507FE690B1271947(uParam0, 1);
					unk_0x507FE690B1271947(uParam0, 2);
					unk_0x507FE690B1271947(uParam0, 9);
					unk_0xF6082E2ADA1C795B(uParam0, 7);
					uParam0->f_122 = unk_0x25118499AB6F447B(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				unk_0x0F39DF6675B2333E(joaat("frogger"));
				if (unk_0xA1FC9D7AEA164881(joaat("frogger")))
				{
					if (!uParam0->f_292 || unk_0x70895480480AB5FC())
					{
						if (func_298())
						{
							unk_0xB519F0E6744DCBBF(0);
							func_293(1, 1);
							unk_0x7D44811DD0B8D958(0);
							unk_0x7D53B6FFAEDA810A(1);
							if (!func_176())
							{
								func_292();
							}
							func_189(0);
							func_291();
							unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), Global_1312550, 1, 0, 0, 1);
							unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 1);
							unk_0x81642E3BC0111BF2(unk_0x2A5EB8B0FE590B91(), false, 0);
							unk_0xE0125DCD8DB3EFC3(0);
							if (unk_0xBDD3EABACAB97D09(unk_0x6C94FE3D83E07CE7()))
							{
								unk_0x0B584E556B01101F(unk_0x6C94FE3D83E07CE7(), 0f);
							}
							unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), true);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0x0AFBA1AD6DC1C540())
				{
					if (!unk_0xAA4F14DA15DB0B51(*uParam0, 4))
					{
						if (func_290() == 64 || func_290() == 65)
						{
							unk_0xD36F38C63C0345CF();
							unk_0x749F8DABD0CEE89A(754.2219f, 1226.831f, 356.5081f, func_289(-14.367f, 0f, 157.3524f), 100f, 0);
							func_180(&(uParam0->f_17));
							func_19(&(uParam0->f_17), 0, 0);
							unk_0xF6082E2ADA1C795B(uParam0, 4);
						}
					}
					else if (unk_0x8CF1128C350F1552("FM_INTRO_START") && (unk_0xAFCB22D9B08750BD() || func_181(&(uParam0->f_17), 5000, 0)))
					{
						if (!unk_0xAA4F14DA15DB0B51(*uParam0, 24))
						{
							if (unk_0xAA4F14DA15DB0B51(*uParam0, 7))
							{
								unk_0x988197573BDAD49A("FM_INTRO_START");
								unk_0xF6082E2ADA1C795B(uParam0, 24);
								unk_0xF6082E2ADA1C795B(uParam0, 21);
							}
						}
						else if (unk_0x4F2092EE9639E8C0() > 0)
						{
							unk_0x39E6BFF51A22111E();
							unk_0xB21C20DB41B2133E(6);
							if (!unk_0x9FA769EB6C3BCCE4(uParam0->f_7))
							{
								uParam0->f_7 = unk_0x1FF428E592B6F928("DEFAULT_SCRIPTED_CAMERA", 0);
								unk_0xD429163073BD3A47(uParam0->f_7, 1);
							}
							unk_0xF3FE3F0E2BC462D7(uParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							unk_0xF3FE3F0E2BC462D7(uParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							unk_0x1EB7361ECC8DAFEE(uParam0->f_7, "HAND_SHAKE", 0.15f);
							unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 1, 0);
							func_288(uParam0);
							unk_0xF6082E2ADA1C795B(uParam0, 11);
							if (uParam0->f_292)
							{
								unk_0x35A9245E41C43A09(9, 9, 9, 9);
								unk_0x8D3D5D7617FBC96E();
							}
							unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), true);
							if (unk_0xF4EE9D6C8E60AE22())
							{
								unk_0x9B0467159FAB9F56(800);
							}
							uParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_287(uParam0, 6);
				func_286(uParam0);
				if (func_285(uParam0, 6, 0))
				{
					unk_0x7D53B6FFAEDA810A(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!unk_0xAA4F14DA15DB0B51(*uParam0, 2))
				{
					unk_0x7D53B6FFAEDA810A(1);
					func_71("FMIC_INTRO2", -1);
					unk_0xF6082E2ADA1C795B(uParam0, 2);
				}
				unk_0xF3FE3F0E2BC462D7(uParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				unk_0xF3FE3F0E2BC462D7(uParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				unk_0x35A9245E41C43A09(9, 13, 9, 13);
				uParam0->f_6 = 8;
				break;
			
			case 8:
				func_287(uParam0, 8);
				if (func_286(uParam0))
				{
					func_284(uParam0);
					if (func_285(uParam0, 8, 0))
					{
						uParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!unk_0xAA4F14DA15DB0B51(*uParam0, 10))
				{
					func_283();
					unk_0xF6082E2ADA1C795B(uParam0, 10);
				}
				unk_0xF3FE3F0E2BC462D7(uParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				unk_0xF3FE3F0E2BC462D7(uParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (unk_0x7FAC45D56235AB39(uParam0->f_48, 0))
				{
					unk_0xBD0E4B99FA3F0915(uParam0->f_48);
					unk_0x4C1FCB3943DAF647(uParam0->f_48, true, 0);
					unk_0x6437B8B0C99971F3(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0x7FAC45D56235AB39(uParam0->f_48, 0))
				{
					unk_0x6437B8B0C99971F3(uParam0->f_48);
				}
				func_287(uParam0, 10);
				if (func_282())
				{
					if (func_281(uParam0))
					{
						if (func_284(uParam0))
						{
							if (func_285(uParam0, 10, 0))
							{
								if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
								{
									unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), true);
								}
								fVar0 = 5000f;
								if (unk_0x7FAC45D56235AB39(uParam0->f_92[0], 0))
								{
									unk_0xFF6757A3AC8108B0(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									unk_0x4729AA8BDD4C7CC6(uParam0->f_92[0], fVar0);
								}
								if (unk_0x7FAC45D56235AB39(uParam0->f_92[1], 0))
								{
									unk_0xFF6757A3AC8108B0(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									unk_0x4729AA8BDD4C7CC6(uParam0->f_92[1], fVar0);
								}
								if (unk_0x7FAC45D56235AB39(uParam0->f_92[2], 0))
								{
									unk_0xFF6757A3AC8108B0(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									unk_0x4729AA8BDD4C7CC6(uParam0->f_92[2], fVar0);
								}
								if (unk_0x7FAC45D56235AB39(uParam0->f_92[3], 0))
								{
									unk_0xFF6757A3AC8108B0(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									unk_0x4729AA8BDD4C7CC6(uParam0->f_92[3], fVar0);
								}
								if (unk_0x7FAC45D56235AB39(uParam0->f_92[4], 0))
								{
									unk_0xFF6757A3AC8108B0(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									unk_0x4729AA8BDD4C7CC6(uParam0->f_92[4], fVar0);
								}
								unk_0xF6082E2ADA1C795B(uParam0, 15);
								unk_0x9B0467159FAB9F56(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					unk_0xF1BE816931996931(16, 0, 0);
					func_280(uParam0);
					func_279(uParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					unk_0xBE51678DF2A99288(uParam0->f_7, 1);
					unk_0x304CEAABB4E09035(uParam0->f_7);
					unk_0x1E2E6AAAD9AE1286(uParam0->f_7, 0);
					unk_0xB0D390F8FEB78903("MP_INTRO_RACE_SCENE");
					unk_0x35A9245E41C43A09(9, 12, 9, 12);
					func_277(uParam0, 14);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				if (!unk_0xAA4F14DA15DB0B51(*uParam0, 5))
				{
					func_71("FMIC_RACE1", -1);
					unk_0xF6082E2ADA1C795B(uParam0, 5);
				}
				func_287(uParam0, 14);
				if (func_285(uParam0, 14, 0))
				{
					func_276(uParam0, 23539f, 0);
					unk_0xF1BE816931996931(16, 0, 0);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_277(uParam0, 15);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				if (!unk_0xAA4F14DA15DB0B51(uParam0->f_3, 0))
				{
					func_265(uParam0);
				}
				else if (func_264(uParam0) && func_258(uParam0))
				{
					func_256(uParam0);
				}
				func_287(uParam0, 15);
				if (func_285(uParam0, 15, 0))
				{
					func_276(uParam0, 28833.33f, 75f);
					unk_0xF1BE816931996931(16, 0, 0);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_255(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_277(uParam0, 16);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				if (!unk_0xAA4F14DA15DB0B51(uParam0->f_3, 0))
				{
					func_265(uParam0);
				}
				else if (func_264(uParam0) && func_258(uParam0))
				{
					func_256(uParam0);
				}
				func_287(uParam0, 16);
				if (func_285(uParam0, 16, 0))
				{
					func_276(uParam0, 29700f, 0);
					unk_0xF1BE816931996931(16, 0, 0);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x553FF36131238395(uParam0->f_9, 0.7f);
					func_277(uParam0, 17);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				if (!unk_0xAA4F14DA15DB0B51(*uParam0, 6))
				{
					unk_0xF6082E2ADA1C795B(uParam0, 6);
					func_71("FMIC_RACE2", -1);
				}
				if (!unk_0xAA4F14DA15DB0B51(uParam0->f_3, 0))
				{
					func_265(uParam0);
				}
				else if (func_264(uParam0) && func_258(uParam0))
				{
					func_256(uParam0);
				}
				func_287(uParam0, 17);
				if (func_285(uParam0, 17, 0))
				{
					func_276(uParam0, 36450f, 0);
					unk_0xF1BE816931996931(16, 0, 0);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 18);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				if (!unk_0xAA4F14DA15DB0B51(uParam0->f_3, 0))
				{
					func_265(uParam0);
				}
				else if (func_264(uParam0) && func_258(uParam0))
				{
					func_256(uParam0);
				}
				func_287(uParam0, 18);
				if (func_254() && func_285(uParam0, 18, 0))
				{
					func_276(uParam0, 43650f, 0);
					unk_0xF1BE816931996931(16, 0, 0);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					if (unk_0x2137828D03306CAF(uParam0->f_92[2]))
					{
						unk_0xA613FDAC42DBBFAD(&(uParam0->f_92[2]));
					}
					if (unk_0x2137828D03306CAF(uParam0->f_92[3]))
					{
						unk_0xA613FDAC42DBBFAD(&(uParam0->f_92[3]));
					}
					if (unk_0x2137828D03306CAF(uParam0->f_92[4]))
					{
						unk_0xA613FDAC42DBBFAD(&(uParam0->f_92[4]));
					}
					func_279(uParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 19);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				if (!unk_0xAA4F14DA15DB0B51(uParam0->f_3, 0))
				{
					func_265(uParam0);
				}
				else
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (unk_0xACBF56DC1C78B822(uParam0->f_32))
							{
								if (!unk_0xA9A04898798AE9E6(uParam0->f_91, 0))
								{
									unk_0xEF97E8F47BBC2B86(uParam0->f_91, uParam0->f_32, unk_0xCAEDBF30E3EA14FC("GtaMloRoom001"));
								}
								unk_0x6E4B8D274EF24EDE("SE_MP_GARAGE_L_RADIO", 0);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!unk_0xA9A04898798AE9E6(uParam0->f_49[iVar4], 0))
									{
										unk_0xEF97E8F47BBC2B86(uParam0->f_49[iVar4], uParam0->f_32, unk_0xCAEDBF30E3EA14FC("GtaMloRoom001"));
									}
									iVar4++;
								}
								unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 6);
							}
						}
					}
					if (func_264(uParam0) && func_258(uParam0))
					{
						func_256(uParam0);
					}
				}
				func_253(uParam0);
				func_252(uParam0);
				func_287(uParam0, 19);
				if (func_285(uParam0, 19, 0) && unk_0xAA4F14DA15DB0B51(uParam0->f_3, 0))
				{
					if (unk_0xAA4F14DA15DB0B51(*uParam0, 12))
					{
						unk_0x507FE690B1271947(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_285(uParam0, 19, -4968))
				{
					if (!unk_0xAA4F14DA15DB0B51(*uParam0, 12))
					{
						unk_0x7D53B6FFAEDA810A(1);
						unk_0xF6082E2ADA1C795B(uParam0, 12);
					}
				}
				else if (func_285(uParam0, 19, -5618))
				{
					if (!unk_0xAA4F14DA15DB0B51(*uParam0, 30))
					{
						unk_0x18A0B296F4932A7B("MP_intro_logo", 0, 0);
						unk_0xF6082E2ADA1C795B(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_253(uParam0);
				func_252(uParam0);
				if (unk_0xAA4F14DA15DB0B51(uParam0->f_3, 0))
				{
					if (!unk_0x9FA769EB6C3BCCE4(uParam0->f_7))
					{
						uParam0->f_7 = unk_0x1FF428E592B6F928("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					unk_0xD429163073BD3A47(uParam0->f_7, 1);
					unk_0xF3FE3F0E2BC462D7(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					unk_0xF3FE3F0E2BC462D7(uParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					unk_0x1EB7361ECC8DAFEE(uParam0->f_7, "HAND_SHAKE", 0.1f);
					unk_0xC8810CADE94D6A61(uParam0->f_32, unk_0xCAEDBF30E3EA14FC("GtaMloRoom001"));
					unk_0x6E4B8D274EF24EDE("SE_MP_GARAGE_L_RADIO", 0);
					unk_0xB21C20DB41B2133E(0);
					unk_0x7D700F8B84AB6466(uParam0->f_10, 0f);
					if (!unk_0x769F0F6444C1ABE0(uParam0->f_91))
					{
						unk_0xB1D181DBFC526F52(uParam0->f_91, 0, 0);
					}
					if (unk_0x8BEECCAAE312A5BA("MP_INTRO_RACE_SCENE"))
					{
						unk_0x40F160C3038ECAF5("MP_INTRO_RACE_SCENE");
					}
					unk_0x35A9245E41C43A09(9, 13, 9, 13);
					func_251(uParam0);
					func_250();
					func_71("FMIC_GAR", -1);
					uParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_253(uParam0);
				func_252(uParam0);
				func_287(uParam0, 23);
				if (func_264(uParam0) && func_258(uParam0))
				{
					func_256(uParam0);
				}
				if (func_285(uParam0, 23, 0))
				{
					unk_0xF3FE3F0E2BC462D7(uParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					unk_0xF3FE3F0E2BC462D7(uParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					unk_0x7D700F8B84AB6466(uParam0->f_10, 0f);
					if (!unk_0x769F0F6444C1ABE0(uParam0->f_91))
					{
						unk_0xB1D181DBFC526F52(uParam0->f_91, 0, 0);
					}
					func_248(uParam0, 0);
					func_248(uParam0, 1);
					func_248(uParam0, 5);
					func_248(uParam0, 6);
					uParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_253(uParam0);
				func_252(uParam0);
				func_287(uParam0, 24);
				if (func_264(uParam0) && func_258(uParam0))
				{
					func_256(uParam0);
				}
				if (func_285(uParam0, 24, 0))
				{
					uParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_253(uParam0);
				func_252(uParam0);
				unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				unk_0xF6082E2ADA1C795B(uParam0, 13);
				unk_0xF3FE3F0E2BC462D7(uParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				unk_0xF3FE3F0E2BC462D7(uParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				unk_0xF1BE816931996931(18, 0, 0);
				func_248(uParam0, 2);
				func_248(uParam0, 7);
				unk_0xFD213087BC4CC3B3(func_247());
				if (unk_0x2137828D03306CAF(uParam0->f_91))
				{
					unk_0x27BAC9B39BCC6522(&(uParam0->f_91));
				}
				unk_0xF6082E2ADA1C795B(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_253(uParam0);
				func_252(uParam0);
				if (!unk_0xAA4F14DA15DB0B51(*uParam0, 8))
				{
					unk_0xF6082E2ADA1C795B(uParam0, 8);
				}
				if (func_264(uParam0) && func_258(uParam0))
				{
					func_256(uParam0);
				}
				func_287(uParam0, 28);
				if ((unk_0x8CF1128C350F1552("FM_INTRO_DRIVE_START") && unk_0xAA4F14DA15DB0B51(uParam0->f_3, 3)) && func_285(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
					{
						if (func_244(uParam0))
						{
							unk_0x063C67E5BF3D0895(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							unk_0x063C67E5BF3D0895(unk_0x2A5EB8B0FE590B91(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x063C67E5BF3D0895(unk_0x2A5EB8B0FE590B91(), "MP_Male_Character", 0, 0, 0);
							unk_0x063C67E5BF3D0895(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_244(uParam0))
				{
					unk_0x063C67E5BF3D0895(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					unk_0x063C67E5BF3D0895(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!unk_0xA9A04898798AE9E6(uParam0->f_35, 0))
				{
					unk_0x063C67E5BF3D0895(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0xA9A04898798AE9E6(uParam0->f_34, 0))
				{
					unk_0x063C67E5BF3D0895(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0xA9A04898798AE9E6(uParam0->f_33, 0))
				{
					unk_0x4C1FCB3943DAF647(uParam0->f_33, true, 0);
					unk_0x063C67E5BF3D0895(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_242(uParam0);
				unk_0xE06F77FA8C3E4AFD("CONTRAILS", 0);
				unk_0x35A9245E41C43A09(9, 9, 9, 9);
				func_71("FMIC_TENN", -1);
				unk_0x256CC452D2C1731B(4);
				func_234(1, 1, 1, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0x863D84AFAC2AB730())
				{
					if (uParam0->f_32 != 0)
					{
						unk_0x4BECDF7222654A56(uParam0->f_32);
					}
					func_233(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (unk_0x3732B96D7A1859B4() - uParam0->f_13);
					}
					else
					{
						uParam0->f_26 = 52618;
						uParam0->f_27 = 52618;
					}
					uParam0->f_6 = 31;
				}
				break;
			
			case 31:
				if (uParam0->f_295)
				{
					if (func_244(uParam0))
					{
						if (unk_0x2C290803FEDB1727("MP_Female_Character", 0))
						{
							if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
							{
								if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
								{
									if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
									{
										unk_0xA6AC097BEBB7B1F0(unk_0x2A5EB8B0FE590B91(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (unk_0x2C290803FEDB1727("MP_Male_Character", 0))
					{
						if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
						{
							if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
							{
								if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
								{
									unk_0xA6AC097BEBB7B1F0(unk_0x2A5EB8B0FE590B91(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (unk_0x2C290803FEDB1727("LAMAR", 0))
				{
					if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
					{
						if (!unk_0x769F0F6444C1ABE0(uParam0->f_35))
						{
							if (!unk_0xC4A39E4229BD3ABE(uParam0->f_35, 0))
							{
								unk_0xA6AC097BEBB7B1F0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								unk_0xB1D181DBFC526F52(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (unk_0x2C290803FEDB1727("MP_Lamar_Car", 0))
				{
					if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
					{
						unk_0x2DEA38A68AA89671(uParam0->f_34, 1, 1, 0);
						unk_0x8E979F037EACE55A(uParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						unk_0x2681BA3707AF6DA7(uParam0->f_34, -106.11f);
						func_232(uParam0, 3099.997f);
						unk_0xE03057DEE542DC11(uParam0->f_34, 1);
					}
				}
				if (unk_0x05E45421C17E15FD(0))
				{
					unk_0xF1BE816931996931(21, 0, 0);
					func_277(uParam0, 33);
					func_279(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 29))
				{
					if (unk_0xA312986453A60AE9() || unk_0xC01930F478B14879() > 3254)
					{
						unk_0x507FE690B1271947(uParam0, 29);
					}
				}
				if ((func_231(uParam0) && func_230(uParam0)) && !unk_0x863D84AFAC2AB730())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (unk_0x3732B96D7A1859B4() - uParam0->f_13);
					}
					else
					{
						uParam0->f_29 = 134784;
						if (func_244(uParam0))
						{
							uParam0->f_28 = 134784;
						}
						else
						{
							uParam0->f_28 = 134784;
						}
					}
					unk_0x4EFD4D9A8A408E46();
					unk_0x360C8AF0F8140840();
					if (unk_0xAA4F14DA15DB0B51(*uParam0, 7))
					{
						unk_0x988197573BDAD49A("FM_INTRO_DRIVE_START");
						unk_0xF6082E2ADA1C795B(uParam0, 21);
					}
					if (!unk_0xE47930B7E8D2BA53())
					{
						unk_0x3E6ED80934AE4880(0);
					}
					if (!unk_0xAA4F14DA15DB0B51(*uParam1, 1))
					{
						unk_0xF6082E2ADA1C795B(uParam1, 1);
					}
					func_229(uParam0);
					func_228(uParam0);
					func_234(0, 1, 1, 0);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					unk_0x507FE690B1271947(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x3732B96D7A1859B4() - (uParam0->f_26 + unk_0xC01930F478B14879()));
					}
					if (!unk_0xAA4F14DA15DB0B51(*uParam0, 22))
					{
						if (unk_0x96EAB4D6F5C6CD68() == 1)
						{
							unk_0xF1BE816931996931(19, 59, 0);
							unk_0xF6082E2ADA1C795B(uParam0, 22);
						}
					}
					if (func_226(uParam0))
					{
						if (unk_0x96EAB4D6F5C6CD68() == 2)
						{
							if (!unk_0xAA4F14DA15DB0B51(*uParam0, 18))
							{
								unk_0xF6082E2ADA1C795B(uParam0, 18);
							}
							if (unk_0xC01930F478B14879() > 23146)
							{
								if (!unk_0xAA4F14DA15DB0B51(*uParam0, 27))
								{
									unk_0xA60596C647F340CC("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xF6082E2ADA1C795B(uParam0, 27);
								}
								if (!unk_0xAA4F14DA15DB0B51(*uParam0, 28))
								{
									unk_0xA60596C647F340CC("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xF6082E2ADA1C795B(uParam0, 28);
								}
							}
							unk_0xF944481620088CC4(4950f);
							if (unk_0xAA4F14DA15DB0B51(*uParam0, 22))
							{
								unk_0xF1BE816931996931(21, 0, 0);
								unk_0x507FE690B1271947(uParam0, 22);
							}
							if (unk_0xC01930F478B14879() > 23254)
							{
								func_225(uParam0);
							}
						}
					}
					if (unk_0x96EAB4D6F5C6CD68() > 2)
					{
						func_228(uParam0);
						if (!unk_0xAA4F14DA15DB0B51(*uParam0, 22))
						{
							unk_0xF1BE816931996931(21, 0, 0);
							unk_0xF6082E2ADA1C795B(uParam0, 22);
						}
						if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
						{
							unk_0x30ACD14DF6F5D27F(uParam0->f_34);
							unk_0x8916BD2C5463CBEE(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = unk_0xC01930F478B14879();
				}
				break;
			
			case 33:
				if (func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 1))
					{
						if (func_285(uParam0, 33, -5450))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 1);
							}
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 2))
					{
						if (func_285(uParam0, 33, -5450))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 1))
					{
						if (func_285(uParam0, 33, -5450))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					unk_0xB0D390F8FEB78903("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 33);
				func_223(uParam0);
				if (func_285(uParam0, 33, 0))
				{
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 2))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 2);
						}
					}
				}
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					if (!unk_0xA9A04898798AE9E6(uParam0->f_34, 0))
					{
						unk_0xFF739A843B6BF64D(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x5E75FFAC17CA8984(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x4DD38134E80D1D6A(uParam0->f_7, 33.3479f);
						unk_0x1EB7361ECC8DAFEE(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xD429163073BD3A47(uParam0->f_7, 1);
						if (!unk_0xA9A04898798AE9E6(uParam0->f_35, 0))
						{
							unk_0x4C1FCB3943DAF647(uParam0->f_35, false, 0);
						}
						if (!unk_0xA9A04898798AE9E6(uParam0->f_36, 0))
						{
							unk_0x4C1FCB3943DAF647(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xCBCB8935BAB0AEF6(uParam0->f_11, uParam0->f_34, unk_0x6EB9FFF630189D64(uParam0->f_34, "seat_dside_f"));
						if (func_244(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xCBCB8935BAB0AEF6(uParam0->f_12, uParam0->f_34, unk_0x6EB9FFF630189D64(uParam0->f_34, "seat_pside_f"));
							unk_0x5F778B8D6D7DF47B(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x5F778B8D6D7DF47B(unk_0x2A5EB8B0FE590B91(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7D700F8B84AB6466(uParam0->f_11, 0.129f);
							unk_0x7D700F8B84AB6466(uParam0->f_12, 0.129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xCBCB8935BAB0AEF6(uParam0->f_12, uParam0->f_34, 0);
							unk_0x5F778B8D6D7DF47B(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x5F778B8D6D7DF47B(unk_0x2A5EB8B0FE590B91(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7D700F8B84AB6466(uParam0->f_11, 0.145f);
							unk_0x7D700F8B84AB6466(uParam0->f_12, 0.145f);
						}
						unk_0xB1D181DBFC526F52(uParam0->f_36, 0, 0);
						unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
					}
					func_277(uParam0, 34);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 34);
				func_223(uParam0);
				if (func_285(uParam0, 34, 0))
				{
					func_232(uParam0, 18966.65f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 3))
					{
						if (func_285(uParam0, 34, 1100))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 3);
							}
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 4))
					{
						if (func_285(uParam0, 34, 1100))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 3))
					{
						if (func_285(uParam0, 34, 1000))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0xA9A04898798AE9E6(uParam0->f_35, 0))
					{
						unk_0x4C1FCB3943DAF647(uParam0->f_35, true, 0);
					}
					if (!unk_0xA9A04898798AE9E6(uParam0->f_36, 0))
					{
						unk_0x4C1FCB3943DAF647(uParam0->f_36, false, 0);
					}
					if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0xA9A04898798AE9E6(uParam0->f_34, 0))
					{
						unk_0xA6AC097BEBB7B1F0(unk_0x2A5EB8B0FE590B91(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
					}
					func_277(uParam0, 35);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 35);
				func_223(uParam0);
				if (func_285(uParam0, 35, 0))
				{
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 5))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 4))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 4);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 5))
					{
						if (func_285(uParam0, 36, -3750))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					if (!unk_0xA9A04898798AE9E6(uParam0->f_34, 0))
					{
						unk_0xFF739A843B6BF64D(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x5E75FFAC17CA8984(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x4DD38134E80D1D6A(uParam0->f_7, 33.3479f);
						unk_0x1EB7361ECC8DAFEE(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xD429163073BD3A47(uParam0->f_7, 1);
						if (!unk_0xA9A04898798AE9E6(uParam0->f_35, 0))
						{
							unk_0x4C1FCB3943DAF647(uParam0->f_35, false, 0);
						}
						if (!unk_0xA9A04898798AE9E6(uParam0->f_36, 0))
						{
							unk_0x4C1FCB3943DAF647(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xCBCB8935BAB0AEF6(uParam0->f_11, uParam0->f_34, unk_0x6EB9FFF630189D64(uParam0->f_34, "seat_dside_f"));
						if (func_244(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xCBCB8935BAB0AEF6(uParam0->f_12, uParam0->f_34, unk_0x6EB9FFF630189D64(uParam0->f_34, "seat_pside_f"));
							unk_0x5F778B8D6D7DF47B(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x5F778B8D6D7DF47B(unk_0x2A5EB8B0FE590B91(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7D700F8B84AB6466(uParam0->f_11, 0.363f);
							unk_0x7D700F8B84AB6466(uParam0->f_12, 0.363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xCBCB8935BAB0AEF6(uParam0->f_12, uParam0->f_34, 0);
							unk_0x5F778B8D6D7DF47B(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x5F778B8D6D7DF47B(unk_0x2A5EB8B0FE590B91(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7D700F8B84AB6466(uParam0->f_11, 0.298f);
							unk_0x7D700F8B84AB6466(uParam0->f_12, 0.298f);
						}
						unk_0xB1D181DBFC526F52(uParam0->f_36, 0, 0);
						unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
					}
					func_277(uParam0, 36);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 36);
				func_223(uParam0);
				if (func_285(uParam0, 36, 0))
				{
					func_232(uParam0, 42700.96f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 6))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 6))
					{
						if (func_285(uParam0, 36, 1000))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0xA9A04898798AE9E6(uParam0->f_35, 0))
					{
						unk_0x4C1FCB3943DAF647(uParam0->f_35, true, 0);
					}
					if (!unk_0xA9A04898798AE9E6(uParam0->f_36, 0))
					{
						unk_0x4C1FCB3943DAF647(uParam0->f_36, false, 0);
					}
					if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0xA9A04898798AE9E6(uParam0->f_34, 0))
					{
						unk_0xA6AC097BEBB7B1F0(unk_0x2A5EB8B0FE590B91(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
					}
					func_277(uParam0, 37);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 37);
				func_223(uParam0);
				if (func_285(uParam0, 37, 0))
				{
					func_232(uParam0, 51033.28f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 7))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 7);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 8))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 9))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 7))
					{
						if (func_285(uParam0, 37, 2500))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 38);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 38);
				func_223(uParam0);
				if (func_285(uParam0, 38, 0))
				{
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 8))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 9))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 9);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 31))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_244(uParam0))
				{
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 31))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 31);
						}
					}
				}
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					if (!unk_0xA9A04898798AE9E6(uParam0->f_34, 0))
					{
						unk_0xFF739A843B6BF64D(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x5E75FFAC17CA8984(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x4DD38134E80D1D6A(uParam0->f_7, 33.3479f);
						unk_0x1EB7361ECC8DAFEE(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xD429163073BD3A47(uParam0->f_7, 1);
						if (!unk_0xA9A04898798AE9E6(uParam0->f_35, 0))
						{
							unk_0x4C1FCB3943DAF647(uParam0->f_35, false, 0);
						}
						if (!unk_0xA9A04898798AE9E6(uParam0->f_36, 0))
						{
							unk_0x4C1FCB3943DAF647(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xCBCB8935BAB0AEF6(uParam0->f_11, uParam0->f_34, unk_0x6EB9FFF630189D64(uParam0->f_34, "seat_dside_f"));
						if (func_244(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xCBCB8935BAB0AEF6(uParam0->f_12, uParam0->f_34, unk_0x6EB9FFF630189D64(uParam0->f_34, "seat_pside_f"));
							unk_0x5F778B8D6D7DF47B(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x5F778B8D6D7DF47B(unk_0x2A5EB8B0FE590B91(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7D700F8B84AB6466(uParam0->f_11, 0.811f);
							unk_0x7D700F8B84AB6466(uParam0->f_12, 0.811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xCBCB8935BAB0AEF6(uParam0->f_12, uParam0->f_34, 0);
							unk_0x5F778B8D6D7DF47B(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x5F778B8D6D7DF47B(unk_0x2A5EB8B0FE590B91(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7D700F8B84AB6466(uParam0->f_11, 0.791f);
							unk_0x7D700F8B84AB6466(uParam0->f_12, 0.791f);
						}
						unk_0xB1D181DBFC526F52(uParam0->f_36, 0, 0);
						unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
					}
					func_277(uParam0, 39);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 39);
				func_223(uParam0);
				if (func_285(uParam0, 39, 0))
				{
					func_232(uParam0, 85050f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!unk_0xAA4F14DA15DB0B51(uParam0->f_1, 31))
				{
					if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0xF6082E2ADA1C795B(&(uParam0->f_1), 31);
					}
				}
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x35A9245E41C43A09(9, 12, 9, 12);
					if (!unk_0xA9A04898798AE9E6(uParam0->f_35, 0))
					{
						unk_0x4C1FCB3943DAF647(uParam0->f_35, true, 0);
					}
					if (!unk_0xA9A04898798AE9E6(uParam0->f_36, 0))
					{
						unk_0x4C1FCB3943DAF647(uParam0->f_36, false, 0);
					}
					if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0xA9A04898798AE9E6(uParam0->f_34, 0))
					{
						unk_0xA6AC097BEBB7B1F0(unk_0x2A5EB8B0FE590B91(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
					}
					func_277(uParam0, 40);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 40);
				if (func_223(uParam0) && func_285(uParam0, 40, 0))
				{
					func_232(uParam0, 116366.5f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					unk_0xF1BE816931996931(0, 0, 0);
					func_279(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_277(uParam0, 41);
					unk_0x2AE32A3B0545ACE8("CONTRAILS", 0);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 41);
				if (func_285(uParam0, 41, 0))
				{
					unk_0x92E9754BE0D4F703(1);
					func_232(uParam0, 127166.5f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_222(uParam0);
					func_279(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 42);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 42);
				if (func_285(uParam0, 42, 0))
				{
					unk_0x92E9754BE0D4F703(0);
					func_232(uParam0, 170800f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 43);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 43);
				if (func_285(uParam0, 43, 0))
				{
					unk_0x35A9245E41C43A09(9, 12, 9, 12);
					func_232(uParam0, 191799.8f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 44);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 44);
				if (func_285(uParam0, 44, 0))
				{
					func_232(uParam0, 196633.1f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 45);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 45);
				if (func_285(uParam0, 45, 0))
				{
					func_232(uParam0, 201466.5f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 46);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 46);
				if (func_285(uParam0, 46, 0))
				{
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_221(uParam0);
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					if (!unk_0xA9A04898798AE9E6(uParam0->f_34, 0))
					{
						unk_0xFF739A843B6BF64D(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x5E75FFAC17CA8984(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x4DD38134E80D1D6A(uParam0->f_7, 33.3479f);
						unk_0x1EB7361ECC8DAFEE(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xD429163073BD3A47(uParam0->f_7, 1);
						if (!unk_0xA9A04898798AE9E6(uParam0->f_35, 0))
						{
							unk_0x4C1FCB3943DAF647(uParam0->f_35, false, 0);
						}
						if (!unk_0xA9A04898798AE9E6(uParam0->f_36, 0))
						{
							unk_0x4C1FCB3943DAF647(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xCBCB8935BAB0AEF6(uParam0->f_11, uParam0->f_34, unk_0x6EB9FFF630189D64(uParam0->f_34, "seat_dside_f"));
						if (func_244(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xCBCB8935BAB0AEF6(uParam0->f_12, uParam0->f_34, unk_0x6EB9FFF630189D64(uParam0->f_34, "seat_pside_f"));
							unk_0x5F778B8D6D7DF47B(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x5F778B8D6D7DF47B(unk_0x2A5EB8B0FE590B91(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7D700F8B84AB6466(uParam0->f_11, 0.726f);
							unk_0x7D700F8B84AB6466(uParam0->f_12, 0.74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xCBCB8935BAB0AEF6(uParam0->f_12, uParam0->f_34, 0);
							unk_0x5F778B8D6D7DF47B(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x5F778B8D6D7DF47B(unk_0x2A5EB8B0FE590B91(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7D700F8B84AB6466(uParam0->f_11, 0.726f);
							unk_0x7D700F8B84AB6466(uParam0->f_12, 0.815f);
						}
						unk_0xB1D181DBFC526F52(uParam0->f_36, 0, 0);
						unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
					}
					func_277(uParam0, 47);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 47);
				if (func_285(uParam0, 47, 0))
				{
					func_232(uParam0, 213066.4f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_221(uParam0);
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0xA9A04898798AE9E6(uParam0->f_35, 0))
					{
						unk_0x4C1FCB3943DAF647(uParam0->f_35, true, 0);
					}
					if (!unk_0xA9A04898798AE9E6(uParam0->f_36, 0))
					{
						unk_0x4C1FCB3943DAF647(uParam0->f_36, false, 0);
					}
					if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0xA9A04898798AE9E6(uParam0->f_34, 0))
					{
						unk_0xA6AC097BEBB7B1F0(unk_0x2A5EB8B0FE590B91(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
					}
					func_277(uParam0, 48);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 48);
				if (func_285(uParam0, 48, 0))
				{
					unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 3);
					func_220(uParam0, 10177.75f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_221(uParam0);
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 49);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				func_287(uParam0, 49);
				if (unk_0x8CF1128C350F1552("FM_INTRO_DRIVE_END") && func_285(uParam0, 49, 0))
				{
					func_218(uParam0, 4500f);
					unk_0xF6082E2ADA1C795B(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_221(uParam0);
				if (!unk_0x0B21CC5276C2CE1B())
				{
					if (!unk_0x9AF3AC4F52023B45())
					{
						unk_0x9B0467159FAB9F56(250);
					}
				}
				if (unk_0xAA4F14DA15DB0B51(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						unk_0xA65B8BDC69CB1776();
						unk_0x507FE690B1271947(uParam0, 11);
					}
					func_277(uParam0, 50);
					unk_0x507FE690B1271947(uParam0, 15);
				}
				if (!unk_0xAA4F14DA15DB0B51(*uParam0, 20))
				{
					if (func_244(uParam0))
					{
						unk_0x7C58954B914236EF("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0x7C58954B914236EF("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (unk_0x4492AAB360D28093())
						{
							if (func_244(uParam0))
							{
								unk_0x9C27559FFF13554A("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0x9C27559FFF13554A("MP_1", 0, 1);
							}
						}
					}
					if (unk_0xA1EDDE074DA26387())
					{
						unk_0xF6082E2ADA1C795B(uParam0, 20);
					}
				}
				func_287(uParam0, 50);
				if (!unk_0xA9A04898798AE9E6(uParam0->f_34, 0))
				{
					if (unk_0x2B5189D75DFE6D55(uParam0->f_34))
					{
						if (unk_0xD2660BAC03EB7433(uParam0->f_34) < 1f)
						{
							unk_0xB3AE8D41B88ED362(uParam0->f_34);
						}
					}
				}
				if (func_285(uParam0, 50, 0) && unk_0xAA4F14DA15DB0B51(*uParam0, 20))
				{
					if (unk_0xAA4F14DA15DB0B51(*uParam0, 21))
					{
						unk_0x988197573BDAD49A("FM_INTRO_DRIVE_END");
						unk_0x507FE690B1271947(uParam0, 21);
					}
					unk_0xB3AE8D41B88ED362(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
					{
						if (func_244(uParam0))
						{
							unk_0x063C67E5BF3D0895(unk_0x2A5EB8B0FE590B91(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x063C67E5BF3D0895(unk_0x2A5EB8B0FE590B91(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0xA9A04898798AE9E6(uParam0->f_35, 0))
				{
					unk_0x063C67E5BF3D0895(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0xA9A04898798AE9E6(uParam0->f_34, 0))
				{
					unk_0x063C67E5BF3D0895(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0xF6082E2ADA1C795B(uParam0, 13);
				if (unk_0x8BEECCAAE312A5BA("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0x40F160C3038ECAF5("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0x256CC452D2C1731B(4);
				func_234(1, 1, 1, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0x863D84AFAC2AB730())
				{
					unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (unk_0x3732B96D7A1859B4() - uParam0->f_13);
					}
					else
					{
						uParam0->f_30 = func_217(uParam0);
					}
					uParam0->f_14 = 0;
					uParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (uParam0->f_295)
				{
					if (func_244(uParam0))
					{
						if (!unk_0xAA4F14DA15DB0B51(*uParam0, 23))
						{
							if (unk_0x2C290803FEDB1727("MP_Female_Character", 0))
							{
								if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
								{
									unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), unk_0x2410C2F4DC01A40D(Var1.f_0, Var1.f_1));
									unk_0x164CA344DBD7B6F3(0);
									unk_0x61C3B2A4FEFA1D6D(0, 1065353216);
									unk_0xF6082E2ADA1C795B(uParam0, 23);
								}
							}
						}
					}
					else if (!unk_0xAA4F14DA15DB0B51(*uParam0, 23))
					{
						if (unk_0x2C290803FEDB1727("MP_1", 0))
						{
							if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
							{
								unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), unk_0x2410C2F4DC01A40D(Var1.f_0, Var1.f_1));
								unk_0x164CA344DBD7B6F3(0);
								unk_0x61C3B2A4FEFA1D6D(0, 1065353216);
								unk_0xF6082E2ADA1C795B(uParam0, 23);
							}
						}
					}
				}
				if (unk_0x2C290803FEDB1727("LAMAR", 0))
				{
					if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
					{
						if (!unk_0x769F0F6444C1ABE0(uParam0->f_35))
						{
							if (!unk_0xC4A39E4229BD3ABE(uParam0->f_35, 0))
							{
								unk_0xA6AC097BEBB7B1F0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (unk_0x2C290803FEDB1727("MP_Lamar_Car", 0))
				{
					if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
					{
						unk_0x07C140F31B3CDAFA(uParam0->f_34, 1084227584);
					}
				}
				if (unk_0x05E45421C17E15FD(0))
				{
					func_216(1);
					unk_0x164CA344DBD7B6F3(0);
					unk_0x61C3B2A4FEFA1D6D(0, 1065353216);
				}
				if (!func_215(unk_0x0FFED3E94261A832()))
				{
					func_214(1);
				}
				if (unk_0x863D84AFAC2AB730())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x3732B96D7A1859B4() - (uParam0->f_30 + unk_0xC01930F478B14879()));
					}
					switch (uParam0->f_14)
					{
						case 0:
							func_213(uParam0, 0);
							break;
						
						case 10:
							func_213(uParam0, 1);
							break;
						
						case 20:
							func_213(uParam0, 2);
							break;
						
						case 30:
							func_213(uParam0, 3);
							break;
						
						case 40:
							func_213(uParam0, 4);
							break;
						
						case 50:
							func_213(uParam0, 5);
							break;
						
						case 60:
							func_213(uParam0, 6);
							break;
						
						case 70:
							func_213(uParam0, 7);
							break;
						
						case 80:
							func_213(uParam0, 8);
							break;
						
						case 90:
							func_213(uParam0, 9);
							break;
						
						case 100:
							if (unk_0x2137828D03306CAF(uParam0->f_36))
							{
								unk_0x27BAC9B39BCC6522(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					unk_0x4EFD4D9A8A408E46();
					unk_0x360C8AF0F8140840();
					if (!unk_0xE47930B7E8D2BA53())
					{
						unk_0x3E6ED80934AE4880(0);
					}
					func_234(0, 1, 1, 0);
					unk_0x507FE690B1271947(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0x863D84AFAC2AB730())
				{
					unk_0x086F1A514E2C4051();
				}
				else if (!unk_0xAA4F14DA15DB0B51(*uParam0, 17))
				{
					if (unk_0xF4EE9D6C8E60AE22())
					{
						unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
						unk_0xF6082E2ADA1C795B(uParam0, 13);
						unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), true);
						if (uParam0->f_292)
						{
							unk_0xA65B8BDC69CB1776();
							unk_0x507FE690B1271947(uParam0, 11);
						}
						func_180(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						unk_0xF6082E2ADA1C795B(uParam0, 17);
					}
					else if (!unk_0xEF08C8E0C4679477())
					{
						unk_0x5BFE0E837BA0AF60(250);
					}
				}
				else if (func_181(&(uParam0->f_17), 10000, 0))
				{
					if (func_212(uParam0))
					{
						func_280(uParam0);
						func_228(uParam0);
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), false);
							if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
							{
								unk_0x81642E3BC0111BF2(unk_0x2A5EB8B0FE590B91(), true, 0);
								unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), 61.3164f);
							}
						}
						if (!unk_0x769F0F6444C1ABE0(uParam0->f_35))
						{
							if (!unk_0xC4A39E4229BD3ABE(uParam0->f_35, 0))
							{
								if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
								{
									unk_0xA6AC097BEBB7B1F0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_216(1);
						if (!func_215(unk_0x0FFED3E94261A832()))
						{
							func_214(1);
						}
						func_234(0, 1, 1, 0);
						unk_0xF1BE816931996931(0, 0, 0);
						if (unk_0xAA4F14DA15DB0B51(*uParam0, 21))
						{
							unk_0x988197573BDAD49A("FM_INTRO_DRIVE_END");
							unk_0x507FE690B1271947(uParam0, 21);
						}
						unk_0xF6082E2ADA1C795B(uParam0, 1);
						unk_0xF6082E2ADA1C795B(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0x863D84AFAC2AB730())
				{
					unk_0x086F1A514E2C4051();
				}
				else if (!unk_0xAA4F14DA15DB0B51(*uParam0, 17))
				{
					if (unk_0xF4EE9D6C8E60AE22())
					{
						unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
						unk_0xF6082E2ADA1C795B(uParam0, 13);
						unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), true);
						if (uParam0->f_292)
						{
							unk_0xA65B8BDC69CB1776();
							unk_0x507FE690B1271947(uParam0, 11);
						}
						func_180(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						unk_0xF6082E2ADA1C795B(uParam0, 17);
					}
					else if (!unk_0xEF08C8E0C4679477())
					{
						unk_0x5BFE0E837BA0AF60(250);
					}
				}
				else if (func_181(&(uParam0->f_17), 10000, 0))
				{
					if (func_264(uParam0))
					{
						func_280(uParam0);
						func_228(uParam0);
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), false);
							if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
							{
								unk_0x81642E3BC0111BF2(unk_0x2A5EB8B0FE590B91(), true, 0);
								unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), 61.3164f);
								if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
								{
									unk_0xA6AC097BEBB7B1F0(unk_0x2A5EB8B0FE590B91(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!unk_0x769F0F6444C1ABE0(uParam0->f_35))
						{
							if (!unk_0xC4A39E4229BD3ABE(uParam0->f_35, 0))
							{
								if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
								{
									unk_0xA6AC097BEBB7B1F0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_215(unk_0x0FFED3E94261A832()))
						{
						}
						func_234(0, 1, 1, 0);
						if (unk_0xAA4F14DA15DB0B51(*uParam0, 21))
						{
							unk_0x988197573BDAD49A("FM_INTRO_DRIVE_END");
							unk_0x507FE690B1271947(uParam0, 21);
						}
						unk_0x9B0467159FAB9F56(250);
						unk_0xF1BE816931996931(0, 0, 0);
						unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 3);
						uParam0->f_13 = (unk_0x3732B96D7A1859B4() - func_209(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_220(uParam0, 10177.75f);
						unk_0xF6082E2ADA1C795B(uParam0, 15);
						uParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_287(uParam0, 57);
				bVar8 = !uParam0->f_288;
				func_199(uParam0, bVar8, 0);
				if (uParam0->f_292)
				{
					unk_0xA65B8BDC69CB1776();
					unk_0x507FE690B1271947(uParam0, 11);
				}
				if (!unk_0x769F0F6444C1ABE0(uParam0->f_35))
				{
					unk_0xD605CAC9F8611B4D(uParam0->f_35, -1);
					unk_0x015B50BC21C88C8C(uParam0->f_35, 1);
				}
				unk_0x154C8E1E6EFF1585(1);
				if (!uParam0->f_288)
				{
					func_30(115, 1, -1, 1);
					return 1;
				}
				break;
			
			case 58:
				break;
			
			case 54:
				break;
			
			case 59:
				return 1;
				break;
		}
		func_198(uParam0);
		if (!uParam0->f_291)
		{
			if (uParam0->f_293)
			{
				uParam0->f_289 = unk_0xBBDA792448DB5A89((unk_0x3732B96D7A1859B4() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = unk_0xBBDA792448DB5A89(func_217(uParam0));
			}
			uParam0->f_290 = func_197(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && unk_0xAA4F14DA15DB0B51(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				unk_0x4CD9E89EB78FA907(uParam0->f_289);
			}
			else
			{
				unk_0x4CD9E89EB78FA907(uParam0->f_290);
			}
		}
		func_194(uParam0);
		if (unk_0xAA4F14DA15DB0B51(*uParam0, 12))
		{
			if (func_254())
			{
				func_193();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
				{
					unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), false, 60);
				}
			}
			func_191(uParam0);
			unk_0xCF3FB52D0C1B0347();
			unk_0x47BFFB0507046AE3(9);
			unk_0x47BFFB0507046AE3(7);
			unk_0x47BFFB0507046AE3(18);
			unk_0x47BFFB0507046AE3(6);
			unk_0x47BFFB0507046AE3(3);
			unk_0x47BFFB0507046AE3(13);
			unk_0x47BFFB0507046AE3(4);
		}
		if (Global_2497344.f_1772)
		{
			unk_0x2C6CBE6F28447D42(2, 187, 1);
		}
	}
	return 0;
}

void func_191(var uParam0)
{
	var uVar0;
	
	if (!unk_0xAA4F14DA15DB0B51(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!unk_0x1CF28DE85743D98B())
			{
				if (!unk_0x29A198A43483252D())
				{
					uVar0 = unk_0x0FFED3E94261A832() + 32;
					unk_0x07D5F8617C6DDBAC(1, uVar0);
					func_192(1);
					unk_0xF6082E2ADA1C795B(uParam0, 9);
				}
			}
			else
			{
				func_192(1);
				unk_0xF6082E2ADA1C795B(uParam0, 9);
			}
		}
	}
}

void func_192(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 18))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 18);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 18))
	{
		unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 18);
	}
}

void func_193()
{
	unk_0x792C5262A7BE057A(Global_1315659, 255, 255, 255, 255, 0);
	if (Global_1315661 == 0)
	{
		unk_0xD1FCC52F87A98873(Global_1315659, "SET_BIG_LOGO_VISIBLE");
		unk_0x4CECF13AF144A8F6(1);
		unk_0xD426F7366505EADF(1);
		unk_0x8123397DC676E794();
		Global_1315661 = 1;
	}
}

void func_194(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x2137828D03306CAF(uParam0->f_58[uParam0->f_90]))
	{
		if (unk_0xA9A04898798AE9E6(uParam0->f_58[uParam0->f_90], 0))
		{
		}
		Var0 = { unk_0xD1EE0E9FCD74A37B(uParam0->f_58[uParam0->f_90], 1) };
		if (Var0.f_2 < -50f)
		{
			func_195(uParam0, uParam0->f_90);
		}
	}
	uParam0->f_90++;
	if (uParam0->f_90 >= 15)
	{
		uParam0->f_90 = 0;
	}
}

void func_195(var uParam0, int iParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (unk_0x2137828D03306CAF(uParam0->f_58[iParam1]))
	{
		if (unk_0xA9A04898798AE9E6(uParam0->f_58[iParam1], 0))
		{
		}
		func_196(iParam1, &Var0, &fVar3);
		unk_0x8E979F037EACE55A(uParam0->f_58[iParam1], Var0, 1, 0, 0, 1);
		unk_0x2681BA3707AF6DA7(uParam0->f_58[iParam1], fVar3);
		unk_0xA32D9C84C1A93920(uParam0->f_58[iParam1], true);
		unk_0x1FD7155AA0D91CFA(uParam0->f_58[iParam1]);
		unk_0x81642E3BC0111BF2(uParam0->f_58[iParam1], false, 0);
		unk_0x4C1FCB3943DAF647(uParam0->f_58[iParam1], false, 0);
	}
	if (unk_0x2137828D03306CAF(uParam0->f_74[iParam1]))
	{
		if (unk_0xA9A04898798AE9E6(uParam0->f_74[iParam1], 0))
		{
		}
		unk_0x4C1FCB3943DAF647(uParam0->f_74[iParam1], false, 0);
	}
}

void func_196(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -285.8592f, -914.3868f, 30.08f };
			*uParam2 = 77.3101f;
			break;
		
		case 1:
			*uParam1 = { -303.4057f, -910.434f, 30.0797f };
			*uParam2 = 77.3122f;
			break;
		
		case 2:
			*uParam1 = { -328.6838f, -905.0965f, 30.0783f };
			*uParam2 = 74.4975f;
			break;
		
		case 3:
			*uParam1 = { -353.6149f, -896.1278f, 30.0707f };
			*uParam2 = 358.6274f;
			break;
		
		case 4:
			*uParam1 = { -354.2628f, -915.5025f, 30.08f };
			*uParam2 = 358.0417f;
			break;
		
		case 5:
			*uParam1 = { -354.6489f, -935.3478f, 30.08f };
			*uParam2 = 0.5678f;
			break;
		
		case 6:
			*uParam1 = { -354.4816f, -953.4573f, 30.08f };
			*uParam2 = 0.4572f;
			break;
		
		case 7:
			*uParam1 = { -343.5193f, -967.0103f, 30.08f };
			*uParam2 = 247.6961f;
			break;
		
		case 8:
			*uParam1 = { -324.7872f, -974.6605f, 30.08f };
			*uParam2 = 247.7728f;
			break;
		
		case 9:
			*uParam1 = { -301.3824f, -977.9114f, 30.08f };
			*uParam2 = 249.2065f;
			break;
		
		case 10:
			*uParam1 = { -342.4198f, -1019.456f, 29.3849f };
			*uParam2 = 250.0953f;
			break;
		
		case 11:
			*uParam1 = { -317.1607f, -1025.859f, 29.3849f };
			*uParam2 = 250.7381f;
			break;
		
		case 12:
			*uParam1 = { -302.658f, -1022.401f, 29.385f };
			*uParam2 = 244.0013f;
			break;
		
		case 13:
			*uParam1 = { -283.3195f, -1029.469f, 29.385f };
			*uParam2 = 252.7933f;
			break;
		
		case 14:
			*uParam1 = { -276.4286f, -1013.534f, 29.385f };
			*uParam2 = 339.4764f;
			break;
	}
}

float func_197(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (uParam0->f_6 >= 31 && uParam0->f_6 < 33)
	{
		if (func_244(uParam0))
		{
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0xC01930F478B14879()));
			if (unk_0x96EAB4D6F5C6CD68() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / unk_0xBBDA792448DB5A89(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0xC01930F478B14879()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_198(var uParam0)
{
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 29))
	{
		unk_0x516CFF280A8644A4(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		unk_0x516CFF280A8644A4(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_199(var uParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xAA4F14DA15DB0B51(*uParam0, 0))
	{
		if (unk_0x863D84AFAC2AB730())
		{
			unk_0x3E6ED80934AE4880(0);
		}
		unk_0x3BA7AE801A10D005(0);
		if (uParam0->f_292)
		{
			unk_0x4FACC47006A3F70F(0);
			unk_0xA65B8BDC69CB1776();
			unk_0x507FE690B1271947(uParam0, 11);
		}
		if (unk_0xAA4F14DA15DB0B51(*uParam0, 14))
		{
			unk_0xD36F38C63C0345CF();
			unk_0x507FE690B1271947(uParam0, 14);
		}
		func_208();
		func_229(uParam0);
		func_280(uParam0);
		func_228(uParam0);
		func_250();
		func_233(uParam0);
		func_251(uParam0);
		func_207(uParam0);
		func_222(uParam0);
		unk_0xF185F03C5796A4F6();
		if (bParam2)
		{
			if (unk_0x2137828D03306CAF(uParam0->f_34))
			{
				unk_0xFECCD8AF38671477(&(uParam0->f_34));
			}
			if (unk_0x2137828D03306CAF(uParam0->f_35))
			{
				unk_0x6C559FCFFD2365CB(&(uParam0->f_35));
			}
		}
		if (unk_0x2137828D03306CAF(uParam0->f_36))
		{
			unk_0x27BAC9B39BCC6522(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			func_366(0);
		}
		func_205();
		func_200();
		func_234(0, 1, 1, 0);
		unk_0x44FC1DFD412D8376(0, -1);
		unk_0x6040865446FA4030(1);
		if (unk_0x591AF4C50B46E014())
		{
			if (unk_0x45A42C7863C1A2B9())
			{
				unk_0x98C476D8F2ACDB57(0, 1);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(*uParam0, 21))
		{
			unk_0x988197573BDAD49A("FM_INTRO_DRIVE_END");
			unk_0x507FE690B1271947(uParam0, 21);
		}
		unk_0x45E1ADCAE603052F(0);
		func_326(1);
		if (unk_0xAA4F14DA15DB0B51(*uParam0, 26))
		{
			func_320(1, 0);
			unk_0x507FE690B1271947(uParam0, 26);
		}
		Global_2434604.f_3491 = 0;
		if (!unk_0x0AFBA1AD6DC1C540())
		{
			unk_0x74552DCCB9DDC40F(0);
		}
		unk_0x43E2CCD362655963(1);
		if (bParam1)
		{
		}
		func_177(0);
		func_189(1);
		Global_2497344.f_1772 = 0;
		Global_2497344.f_1771 = 0;
		if (unk_0x8BEECCAAE312A5BA("MP_INTRO_RACE_SCENE"))
		{
			unk_0x40F160C3038ECAF5("MP_INTRO_RACE_SCENE");
		}
		if (unk_0x8BEECCAAE312A5BA("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0x40F160C3038ECAF5("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_301(14, 1);
		unk_0xE0125DCD8DB3EFC3(5);
		unk_0x2AE32A3B0545ACE8("CONTRAILS", 0);
		unk_0x0090DF2486F4EBEE(5, "FMINTRO");
		unk_0x0090DF2486F4EBEE(6, "FMINTRO");
		unk_0x0090DF2486F4EBEE(7, "FMINTRO");
		unk_0x15167ADA0B7D44AE("mp_intro_seq@");
		unk_0x15167ADA0B7D44AE("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x15167ADA0B7D44AE("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0x15167ADA0B7D44AE("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0xBDD3EABACAB97D09(unk_0x6C94FE3D83E07CE7()))
		{
			unk_0x0B584E556B01101F(unk_0x6C94FE3D83E07CE7(), 0.7f);
		}
		unk_0x454FBBBEE67E17C3(0);
		unk_0x164CA344DBD7B6F3(0);
		unk_0x61C3B2A4FEFA1D6D(0, 1065353216);
		if (unk_0x591AF4C50B46E014())
		{
			unk_0xA1A58DB8A7A22164();
			unk_0x154C8E1E6EFF1585(1);
		}
		unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
		unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), false);
		if (!unk_0x0B21CC5276C2CE1B() && !unk_0x9AF3AC4F52023B45())
		{
			unk_0x9B0467159FAB9F56(800);
		}
		unk_0xF6082E2ADA1C795B(uParam0, 0);
	}
}

void func_200()
{
	func_201(0);
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		func_204();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xF6082E2ADA1C795B(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_77(0))
		{
			func_202(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_202(int iParam0)
{
	if (Global_14604)
	{
		func_203(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_149())
	{
		Global_14443.f_1 = 3;
	}
}

void func_203(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_77(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

void func_204()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_205()
{
	if (!Global_1312567)
	{
		return;
	}
	func_206();
}

void func_206()
{
	Global_1312567 = 0;
	StringCopy(&(Global_1312567.f_1), "", 24);
	Global_1312567.f_7 = 0;
}

void func_207(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_213(uParam0, iVar0);
		iVar0++;
	}
}

void func_208()
{
	unk_0xB887F7201FD411C1(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	unk_0xB887F7201FD411C1(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
}

int func_209(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam1 < 31)
	{
		iVar1 = 0;
		iVar2 = 6;
		iVar3 = 28;
	}
	else
	{
		if (bParam2)
		{
			iVar1 = uParam0->f_29;
		}
		else
		{
			iVar1 = uParam0->f_28;
		}
		iVar2 = 33;
		iVar3 = 57;
	}
	iVar0 = 0;
	while (iVar0 < (iVar3 - iVar2) + 1)
	{
		iVar4 = (iVar2 + iVar0);
		if (bParam2)
		{
			iVar1 = (iVar1 + func_211(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_210(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_212(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	unk_0x0F39DF6675B2333E(iVar0);
	unk_0x0F39DF6675B2333E(iVar1);
	if (unk_0xA1FC9D7AEA164881(iVar0) && unk_0xA1FC9D7AEA164881(iVar1))
	{
		if (!unk_0x2137828D03306CAF(uParam0->f_34))
		{
			uParam0->f_34 = unk_0xE42A511281C9895B(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0, 0);
			unk_0xF153F20870B938D8(uParam0->f_34, 1);
			unk_0x841ECE80AB1B99B3(uParam0->f_34, 0);
			unk_0x9C27A9366AD7DE0B(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			unk_0x8916BD2C5463CBEE(uParam0->f_34, 2);
		}
		else if (!unk_0x2137828D03306CAF(uParam0->f_35))
		{
			if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xD00B79C0E206E082(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, 0);
				unk_0x4C47904AE69D7393(uParam0->f_35, 1);
				unk_0xF65C7766FB8D4B2C(uParam0->f_34, 1);
				unk_0xF65C7766FB8D4B2C(uParam0->f_35, 1);
				unk_0x3C030E241A3543D2(uParam0->f_35, unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()));
				unk_0x9C27A9366AD7DE0B(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0x2137828D03306CAF(uParam0->f_34) || !unk_0x2137828D03306CAF(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_213(var uParam0, int iParam1)
{
	if (unk_0x2137828D03306CAF(uParam0->f_58[iParam1]))
	{
		unk_0xA613FDAC42DBBFAD(&(uParam0->f_58[iParam1]));
	}
	if (unk_0x2137828D03306CAF(uParam0->f_74[iParam1]))
	{
		unk_0x27BAC9B39BCC6522(&(uParam0->f_74[iParam1]));
	}
}

void func_214(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_144), 22);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_144), 22);
	}
}

bool func_215(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_144, 22);
}

void func_216(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 4);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 4);
	}
}

int func_217(var uParam0)
{
	if (uParam0->f_6 < 31)
	{
		return unk_0x4F2092EE9639E8C0();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + unk_0xC01930F478B14879());
	}
	return (uParam0->f_28 + unk_0x4F2092EE9639E8C0());
}

void func_218(var uParam0, float fParam1)
{
	func_219(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_219(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0x7FAC45D56235AB39(uParam0, 0))
	{
		if (bParam4)
		{
			unk_0xB3AE8D41B88ED362(uParam0);
			unk_0xFF6757A3AC8108B0(uParam0, iParam1, sParam2, 1);
		}
		else if (!unk_0x2B5189D75DFE6D55(uParam0))
		{
			unk_0xFF6757A3AC8108B0(uParam0, iParam1, sParam2, 1);
			unk_0x05D965ED7D6B82B2(uParam0, 1);
		}
		else
		{
			iVar0 = unk_0xB48B31AD52B7414A(iParam1, sParam2);
			if (unk_0xEDF60C885E7AF3B1(uParam0) != iVar0)
			{
				unk_0xFF6757A3AC8108B0(uParam0, iParam1, sParam2, 1);
				unk_0x05D965ED7D6B82B2(uParam0, 1);
			}
		}
		unk_0x4729AA8BDD4C7CC6(uParam0, (fParam3 - unk_0xC444496DA6C87BCF(uParam0)));
	}
}

void func_220(var uParam0, float fParam1)
{
	func_219(uParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_221(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!uParam0->f_296)
	{
		iVar0 = unk_0xCAEDBF30E3EA14FC("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0x818F50CBEC587879(iVar1))
		{
			func_7(iVar1);
			uParam0->f_296 = 1;
		}
	}
}

void func_222(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2137828D03306CAF(uParam0->f_37[iVar0]))
		{
			unk_0x27BAC9B39BCC6522(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0xFD213087BC4CC3B3(joaat("g_m_y_mexgoon_02"));
	unk_0x15167ADA0B7D44AE("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0x15167ADA0B7D44AE("amb@world_human_hang_out_street@male_a@base");
}

int func_223(var uParam0)
{
	int iVar0;
	
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0x0F39DF6675B2333E(joaat("g_m_y_mexgoon_02"));
		unk_0xA7C81DED990D3418("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0xA7C81DED990D3418("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0xA1FC9D7AEA164881(joaat("g_m_y_mexgoon_02")) && unk_0x45834D6C20FFF689("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0x45834D6C20FFF689("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0x2137828D03306CAF(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = unk_0xD00B79C0E206E082(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, 0);
					unk_0xF65C7766FB8D4B2C(uParam0->f_37[iVar0], 1);
					unk_0x4C47904AE69D7393(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							unk_0x272807C2BACC5351(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							unk_0x272807C2BACC5351(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							unk_0x272807C2BACC5351(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							unk_0x272807C2BACC5351(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							unk_0x272807C2BACC5351(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							unk_0x8E979F037EACE55A(uParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							unk_0x2681BA3707AF6DA7(uParam0->f_37[iVar0], 76.8852f);
							unk_0x0013D519C885E60B(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0xA32D9C84C1A93920(uParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0x272807C2BACC5351(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							unk_0x8E979F037EACE55A(uParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							unk_0x2681BA3707AF6DA7(uParam0->f_37[iVar0], 87.5786f);
							unk_0x0013D519C885E60B(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0xA32D9C84C1A93920(uParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0x272807C2BACC5351(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							unk_0x272807C2BACC5351(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0x2137828D03306CAF(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0xFD213087BC4CC3B3(joaat("g_m_y_mexgoon_02"));
		unk_0x15167ADA0B7D44AE("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x15167ADA0B7D44AE("amb@world_human_hang_out_street@male_a@base");
		unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_224(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_154(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_146(sParam2, iParam4, 0);
}

void func_225(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!unk_0xAA4F14DA15DB0B51(*uParam0, 25))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			switch (iVar0)
			{
				case 0:
					Var1 = { -1403.42f, -2437.447f, 12.9496f };
					break;
				
				case 1:
					Var1 = { -1245.758f, -2311.979f, 12.9445f };
					break;
			}
			if (!unk_0x769F0F6444C1ABE0(uParam0->f_98[iVar0]) && unk_0x7FAC45D56235AB39(uParam0->f_92[iVar0], 0))
			{
				unk_0xA32D9C84C1A93920(uParam0->f_92[iVar0], false);
				unk_0xDFFEF66D82BDA05C(uParam0->f_92[iVar0], 10f);
				unk_0xED057CE9299687BC(uParam0->f_98[iVar0], uParam0->f_92[iVar0], Var1, 5f, 0, unk_0xD3B21CE53AA7BE51(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0xF6082E2ADA1C795B(uParam0, 25);
	}
}

int func_226(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = joaat("shamal");
	unk_0x0F39DF6675B2333E(iVar5);
	unk_0x0F39DF6675B2333E(func_227());
	if (unk_0xA1FC9D7AEA164881(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x2137828D03306CAF(uParam0->f_92[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						Var1 = { -1358.973f, -2361.92f, 12.9502f };
						fVar4 = 149.9339f;
						break;
					
					case 1:
						Var1 = { -1302.004f, -2279.378f, 12.9468f };
						fVar4 = 239.9712f;
						break;
				}
				uParam0->f_92[iVar0] = unk_0xE42A511281C9895B(iVar5, Var1, fVar4, 0, 0, 0);
				unk_0x07C140F31B3CDAFA(uParam0->f_92[iVar0], 1084227584);
				unk_0xA32D9C84C1A93920(uParam0->f_92[iVar0], true);
				unk_0x8916BD2C5463CBEE(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0x2137828D03306CAF(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0xA1FC9D7AEA164881(func_227()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x2137828D03306CAF(uParam0->f_98[iVar0]))
			{
				if (unk_0x2137828D03306CAF(uParam0->f_92[iVar0]))
				{
					if (unk_0x7FAC45D56235AB39(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = unk_0x7B47BFDF39EC38D3(uParam0->f_92[iVar0], 4, func_227(), -1, 0, false);
						unk_0x4C47904AE69D7393(uParam0->f_98[iVar0], 1);
						unk_0x2DEA38A68AA89671(uParam0->f_92[iVar0], 1, 1, 0);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0xFD213087BC4CC3B3(iVar5);
	unk_0xFD213087BC4CC3B3(func_227());
	unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 11);
	return 1;
}

int func_227()
{
	return unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91());
}

void func_228(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x2137828D03306CAF(uParam0->f_92[iVar0]))
		{
			unk_0xA613FDAC42DBBFAD(&(uParam0->f_92[iVar0]));
		}
		if (unk_0x2137828D03306CAF(uParam0->f_98[iVar0]))
		{
			unk_0x27BAC9B39BCC6522(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0xFD213087BC4CC3B3(joaat("shamal"));
	unk_0xFD213087BC4CC3B3(func_227());
}

void func_229(var uParam0)
{
	int iVar0;
	
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_3, 2))
	{
		unk_0xFD213087BC4CC3B3(joaat("p_cs_mp_jet_01_s"));
		if (unk_0x2137828D03306CAF(uParam0->f_33))
		{
			unk_0xBE35B7268C680A20(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (unk_0x7766CF1CC89CA80D(uParam0->f_120))
			{
				unk_0x77BB0DD97B4CEB70(uParam0->f_120, 0);
			}
			if (unk_0x7766CF1CC89CA80D(uParam0->f_121))
			{
				unk_0x77BB0DD97B4CEB70(uParam0->f_121, 0);
			}
			if (unk_0x1135D5BD86A70AD2())
			{
				unk_0x2C495F7C13999480();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0x2137828D03306CAF(uParam0->f_104[iVar0]))
			{
				unk_0x27BAC9B39BCC6522(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0x507FE690B1271947(&(uParam0->f_3), 2);
	}
}

int func_230(var uParam0)
{
	if (func_244(uParam0))
	{
		unk_0xA7C81DED990D3418("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0xA7C81DED990D3418("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x45834D6C20FFF689("mp_intro_seq@ig_1_lamar_drive_female") && unk_0x45834D6C20FFF689("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0xA7C81DED990D3418("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0xA7C81DED990D3418("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x45834D6C20FFF689("mp_intro_seq@ig_1_lamar_drive_male") && unk_0x45834D6C20FFF689("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_231(var uParam0)
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_3, 10))
	{
		unk_0x0F39DF6675B2333E(iVar0);
		if (unk_0xA1FC9D7AEA164881(iVar0))
		{
			if (!unk_0x2137828D03306CAF(uParam0->f_36))
			{
				uParam0->f_36 = unk_0xD00B79C0E206E082(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, 0);
				unk_0x4C47904AE69D7393(uParam0->f_36, 1);
				unk_0xF65C7766FB8D4B2C(uParam0->f_36, 1);
				unk_0x4C1FCB3943DAF647(uParam0->f_36, false, 0);
				unk_0x3C030E241A3543D2(uParam0->f_36, unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()));
				unk_0x9C27A9366AD7DE0B(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				func_367(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0x2137828D03306CAF(uParam0->f_36))
		{
			return 0;
		}
		unk_0xFD213087BC4CC3B3(iVar0);
		unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 10);
	}
	return 1;
}

void func_232(var uParam0, float fParam1)
{
	func_219(uParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_233(var uParam0)
{
	int iVar0;
	
	unk_0xFD213087BC4CC3B3(func_247());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_248(uParam0, iVar0);
		iVar0++;
	}
	if (unk_0x2137828D03306CAF(uParam0->f_91))
	{
		unk_0x27BAC9B39BCC6522(&(uParam0->f_91));
	}
}

void func_234(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xFEDBEA905C0956B1(unk_0x0FFED3E94261A832());
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 1);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 1);
		func_241(1);
		unk_0x2200CE3F471C6FE7();
		unk_0xFF9AC2CB876656B2();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3813EBE69CF8CAD2())
			{
				unk_0xE40123A348A5FEDA(0);
			}
			if (!func_149())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_240(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_69798 = 1;
	}
	else
	{
		func_241(0);
		unk_0x5827AA638AD6DBC3();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x387F543932786998();
		}
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 0);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 0);
		func_240(0, iParam3, iParam2, 0);
		if (unk_0x591AF4C50B46E014())
		{
			if (((!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_238(unk_0x0FFED3E94261A832())) && !func_236(unk_0x0FFED3E94261A832(), 0)) && !func_235())
			{
				unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
			}
		}
		else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_238(unk_0x0FFED3E94261A832()))
		{
			unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
		}
		Global_69798 = 0;
	}
}

bool func_235()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

bool func_236(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_237(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_237(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
	}
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_238(int iParam0)
{
	if (func_236(iParam0, 0))
	{
		return 1;
	}
	if (func_239())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_239()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

int func_240(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0xDBE931ADE82E8C84() != iParam0 && uParam2)
		{
			unk_0xD1D26ECE1663B2D6(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_241(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 13);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 13);
	}
}

void func_242(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0xA9A04898798AE9E6(uParam0->f_104[iVar0], 0))
		{
			unk_0x81CEA1F6278C00AA(uParam0->f_104[iVar0]);
			unk_0x063C67E5BF3D0895(uParam0->f_104[iVar0], func_243(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_Plane_Passenger_1";
			break;
		
		case 1:
			return "MP_Plane_Passenger_2";
			break;
		
		case 2:
			return "MP_Plane_Passenger_3";
			break;
		
		case 3:
			return "MP_Plane_Passenger_4";
			break;
		
		case 4:
			return "MP_Plane_Passenger_5";
			break;
		
		case 5:
			return "MP_Plane_Passenger_6";
			break;
		
		case 6:
			return "MP_Plane_Passenger_7";
			break;
	}
	return "";
}

int func_244(var uParam0)
{
	if (uParam0->f_295)
	{
		return func_245();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_245()
{
	return func_246(unk_0x0FFED3E94261A832());
}

int func_246(int iParam0)
{
	if (unk_0xD3B21CE53AA7BE51(unk_0x1E199569E0295838(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_247()
{
	return joaat("s_m_y_xmech_02");
}

void func_248(var uParam0, int iParam1)
{
	unk_0xFD213087BC4CC3B3(func_249(iParam1));
	if (unk_0x2137828D03306CAF(uParam0->f_49[iParam1]))
	{
		if (unk_0x7FAC45D56235AB39(uParam0->f_49[iParam1], 0))
		{
		}
		unk_0x58AB6E3840AF2138(uParam0->f_49[iParam1]);
		unk_0xA613FDAC42DBBFAD(&(uParam0->f_49[iParam1]));
	}
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("penumbra");
			break;
		
		case 1:
			return joaat("feltzer2");
			break;
		
		case 2:
			return joaat("coquette");
			break;
		
		case 3:
			return joaat("felon2");
			break;
		
		case 4:
			return joaat("sabregt");
			break;
		
		case 5:
			return joaat("dubsta");
			break;
		
		case 6:
			return joaat("tornado");
			break;
		
		case 7:
			return joaat("monroe");
			break;
	}
	return joaat("tailgater");
}

void func_250()
{
	Global_1315661 = 0;
	if (unk_0xA8AF99BD8D81CFB7(Global_1315659))
	{
		unk_0xD1FCC52F87A98873(Global_1315659, "SET_BIG_LOGO_VISIBLE");
		unk_0x4CECF13AF144A8F6(1);
		unk_0xD426F7366505EADF(0);
		unk_0x8123397DC676E794();
		unk_0x73F5E7B6BB964839(&Global_1315659);
	}
}

void func_251(var uParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0x2137828D03306CAF(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			unk_0xA54DE0E68212CD6B(&uVar0);
		}
		if (unk_0x2137828D03306CAF(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			unk_0xA54DE0E68212CD6B(&uVar0);
		}
		iVar1++;
	}
	unk_0xFD213087BC4CC3B3(joaat("cheetah"));
	unk_0xFD213087BC4CC3B3(joaat("monroe"));
	unk_0xFD213087BC4CC3B3(joaat("entityxf"));
	unk_0xFD213087BC4CC3B3(joaat("feltzer2"));
	unk_0x0090DF2486F4EBEE(100, "FM_Intro_uber");
	unk_0x0090DF2486F4EBEE(101, "FM_Intro_uber");
	unk_0x0090DF2486F4EBEE(102, "FM_Intro_uber");
	unk_0x0090DF2486F4EBEE(103, "FM_Intro_uber");
	unk_0x0090DF2486F4EBEE(104, "FM_Intro_uber");
	unk_0x15167ADA0B7D44AE("mp_intro_seq@");
}

void func_252(var uParam0)
{
	if (unk_0x2137828D03306CAF(uParam0->f_49[2]))
	{
		if (unk_0x7FAC45D56235AB39(uParam0->f_49[2], 0))
		{
			unk_0x30ACD14DF6F5D27F(uParam0->f_49[2]);
		}
	}
	if (unk_0x2137828D03306CAF(uParam0->f_49[4]))
	{
		if (unk_0x7FAC45D56235AB39(uParam0->f_49[4], 0))
		{
			unk_0x30ACD14DF6F5D27F(uParam0->f_49[4]);
		}
	}
}

void func_253(var uParam0)
{
	if (unk_0x2137828D03306CAF(uParam0->f_49[2]))
	{
		if (unk_0x7FAC45D56235AB39(uParam0->f_49[2], 0))
		{
			unk_0x1873102BDC0A9FE0(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_254()
{
	if (unk_0x2887CC7EA84C8F29())
	{
		return 0;
	}
	if (!unk_0xA8AF99BD8D81CFB7(Global_1315659))
	{
		Global_1315659 = unk_0x4D6D22510A2467D9("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_255(var uParam0, char* sParam1, char* sParam2, var uParam3, struct<3> Param4, struct<3> Param7)
{
	if (unk_0x2137828D03306CAF(uParam3))
	{
		if (unk_0xA9A04898798AE9E6(uParam3, 0))
		{
		}
		if (!unk_0x9FA769EB6C3BCCE4(uParam0->f_8))
		{
			uParam0->f_8 = unk_0x1FF428E592B6F928("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = unk_0x6D46C949A32B8D73(Param4, Param7, 2);
		unk_0xCBCB8935BAB0AEF6(uParam0->f_9, uParam3, 0);
		unk_0x70D9DCACEFF60406(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		unk_0xD429163073BD3A47(uParam0->f_8, 1);
		unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 1, 0);
	}
}

void func_256(var uParam0)
{
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_3, 3))
	{
		unk_0xA3649FB0675E7676("CONTRAILS");
		if (func_244(uParam0))
		{
			unk_0x8243AC20524825EB("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0x8243AC20524825EB("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0x4492AAB360D28093())
		{
			if (uParam0->f_295)
			{
				if (func_244(uParam0))
				{
					unk_0x9C27559FFF13554A("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0x9C27559FFF13554A("MP_Male_Character", 0, 1);
				}
			}
			func_257();
		}
		if (unk_0xA1EDDE074DA26387())
		{
			unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 3);
		}
	}
}

void func_257()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0x9C27559FFF13554A(func_243(iVar0), 0, 1);
		iVar0++;
	}
}

int func_258(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_3, 2))
	{
		unk_0x0F39DF6675B2333E(joaat("p_cs_mp_jet_01_s"));
		unk_0x0F39DF6675B2333E(joaat("mp_m_freemode_01"));
		unk_0x0F39DF6675B2333E(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			unk_0x926AB8F66F783F4D();
		}
		if (((unk_0xA1FC9D7AEA164881(joaat("p_cs_mp_jet_01_s")) && unk_0xA1FC9D7AEA164881(joaat("mp_m_freemode_01"))) && unk_0xA1FC9D7AEA164881(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || unk_0x1135D5BD86A70AD2()))
		{
			uParam0->f_33 = unk_0xA3618B5F6184DAD2(joaat("p_cs_mp_jet_01_s"), Var1, 0, 0, 0);
			unk_0xCEF34666451D1CD0(uParam0->f_33, 3000);
			unk_0xE77EEA92586CF2E8(uParam0->f_33, 0);
			unk_0x4C1FCB3943DAF647(uParam0->f_33, false, 0);
			if (uParam0->f_294)
			{
				uParam0->f_120 = unk_0x2FBC377D2B29B60F("scr_mp_intro_plane_exhaust", uParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = unk_0x2FBC377D2B29B60F("scr_mp_intro_plane_exhaust", uParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			if (uParam0->f_295)
			{
				func_262(uParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_261(uParam0, iVar0))
				{
					uParam0->f_104[iVar0] = unk_0xD00B79C0E206E082(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = unk_0xD00B79C0E206E082(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				if (func_260(uParam0, iVar0))
				{
					if (!unk_0xA9A04898798AE9E6(unk_0x1E199569E0295838(unk_0x7C214DA899F05536(uParam0->f_112[iVar0])), 0))
					{
					}
					unk_0x78A0ED7B3653F566(unk_0x1E199569E0295838(unk_0x7C214DA899F05536(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					unk_0x81CEA1F6278C00AA(uParam0->f_104[iVar0]);
				}
				else
				{
					func_259(uParam0, iVar0);
				}
				iVar0++;
			}
			unk_0xFD213087BC4CC3B3(joaat("p_cs_mp_jet_01_s"));
			unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_259(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 1);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 2);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 3);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 4);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 5);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 6);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 7);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 1);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 2);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 3);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 4);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 5);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 6);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 7);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 1);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 2);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 3);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 4);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 5);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 6);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 7);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 1);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 2);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 3);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 4);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 5);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 6);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 7);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 1);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 2);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 3);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 4);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 5);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 6);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 7);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 1);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 2);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 3);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 4);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 5);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 6);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 7);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x6CA29A70250F194F(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 0);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 1);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 2);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 3);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 4);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 5);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 6);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 7);
			unk_0x04B3C2AC5FF924D1(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_260(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_12(unk_0x7C214DA899F05536(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_261(var uParam0, int iParam1)
{
	if (func_260(uParam0, iParam1))
	{
		return func_246(unk_0x7C214DA899F05536(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_262(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		uParam0->f_112[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar1);
		if (func_12(iVar2, 0, 1))
		{
			if (unk_0x0FFED3E94261A832() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_263(iVar0)] = iVar1;
					iVar0++;
				}
			}
		}
		iVar1++;
	}
}

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			return 3;
			break;
		
		case 6:
			return 2;
			break;
	}
	return 0;
}

int func_264(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_3, 9))
	{
		return 1;
	}
	unk_0x0F39DF6675B2333E(iVar0);
	unk_0x0F39DF6675B2333E(iVar1);
	unk_0x6C2A4A9F6C64E132(5, "FMINTRO");
	unk_0x6C2A4A9F6C64E132(6, "FMINTRO");
	unk_0x6C2A4A9F6C64E132(7, "FMINTRO");
	unk_0xA7C81DED990D3418("mp_intro_seq@");
	if (((((unk_0xA1FC9D7AEA164881(iVar0) && unk_0xA1FC9D7AEA164881(iVar1)) && unk_0x3FCFBAC760CAEC03(5, "FMINTRO")) && unk_0x3FCFBAC760CAEC03(6, "FMINTRO")) && unk_0x3FCFBAC760CAEC03(7, "FMINTRO")) && unk_0x45834D6C20FFF689("mp_intro_seq@"))
	{
		if (!unk_0x2137828D03306CAF(uParam0->f_34))
		{
			unk_0x333EF04F1A5ADEB5(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = unk_0xE42A511281C9895B(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0, 0);
			unk_0xF153F20870B938D8(uParam0->f_34, 1);
			unk_0x841ECE80AB1B99B3(uParam0->f_34, 0);
			unk_0x9C27A9366AD7DE0B(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!unk_0x2137828D03306CAF(uParam0->f_35))
		{
			if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xD00B79C0E206E082(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, 0);
				unk_0xA6AC097BEBB7B1F0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
				unk_0x4C47904AE69D7393(uParam0->f_35, 1);
				unk_0xF65C7766FB8D4B2C(uParam0->f_34, 1);
				unk_0xF65C7766FB8D4B2C(uParam0->f_35, 1);
				unk_0x3C030E241A3543D2(uParam0->f_35, unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()));
				unk_0x9C27A9366AD7DE0B(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0x2137828D03306CAF(uParam0->f_34) || !unk_0x2137828D03306CAF(uParam0->f_35))
	{
		return 0;
	}
	unk_0xFD213087BC4CC3B3(iVar0);
	unk_0xFD213087BC4CC3B3(iVar1);
	unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 9);
	return 1;
}

void func_265(var uParam0)
{
	int iVar0;
	
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_3, 0))
	{
		func_275();
		func_273();
		if (func_267(uParam0))
		{
			if (func_266(uParam0))
			{
				if (!unk_0x9FA769EB6C3BCCE4(uParam0->f_7))
				{
					uParam0->f_7 = unk_0x1FF428E592B6F928("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				unk_0xF3FE3F0E2BC462D7(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0xFD213087BC4CC3B3(func_249(iVar0));
					iVar0++;
				}
				unk_0xFD213087BC4CC3B3(func_247());
				unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 0);
			}
		}
	}
}

int func_266(var uParam0)
{
	int iVar0;
	
	iVar0 = func_247();
	if (!unk_0x2137828D03306CAF(uParam0->f_91))
	{
		if (unk_0x2137828D03306CAF(uParam0->f_49[2]))
		{
			if (unk_0x818F50CBEC587879(iVar0))
			{
				if (unk_0xA1FC9D7AEA164881(iVar0))
				{
					if (unk_0x45834D6C20FFF689("MP_INTRO_SEQ@"))
					{
						if (!unk_0xA9A04898798AE9E6(uParam0->f_49[2], 0))
						{
							uParam0->f_10 = unk_0x6D46C949A32B8D73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xCBCB8935BAB0AEF6(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0xD00B79C0E206E082(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, 0);
							unk_0x4C47904AE69D7393(uParam0->f_91, 1);
							unk_0x5F778B8D6D7DF47B(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							unk_0xA2218E1CAB0028A5(uParam0->f_10, 1);
							unk_0xA32D9C84C1A93920(uParam0->f_91, true);
							unk_0x81642E3BC0111BF2(uParam0->f_91, false, 0);
							unk_0x060F3ECCAB5F35C0(uParam0->f_91, joaat("gadget_parachute"));
							unk_0x6CA29A70250F194F(uParam0->f_91, 0, 1, 1, 0);
							unk_0x6CA29A70250F194F(uParam0->f_91, 1, 0, 0, 0);
							unk_0x6CA29A70250F194F(uParam0->f_91, 2, 0, 2, 0);
							unk_0x6CA29A70250F194F(uParam0->f_91, 3, 0, 2, 0);
							unk_0x6CA29A70250F194F(uParam0->f_91, 4, 1, 0, 0);
							unk_0x6CA29A70250F194F(uParam0->f_91, 5, 0, 0, 0);
							unk_0x6CA29A70250F194F(uParam0->f_91, 6, 0, 0, 0);
							unk_0x6CA29A70250F194F(uParam0->f_91, 7, 0, 0, 0);
							unk_0x6CA29A70250F194F(uParam0->f_91, 8, 0, 0, 0);
							unk_0x6CA29A70250F194F(uParam0->f_91, 9, 0, 0, 0);
							unk_0x6CA29A70250F194F(uParam0->f_91, 10, 0, 0, 0);
							unk_0x6CA29A70250F194F(uParam0->f_91, 11, 0, 0, 0);
							unk_0x04B3C2AC5FF924D1(uParam0->f_91, 0);
							unk_0x04B3C2AC5FF924D1(uParam0->f_91, 1);
							unk_0x04B3C2AC5FF924D1(uParam0->f_91, 2);
							unk_0x04B3C2AC5FF924D1(uParam0->f_91, 3);
							unk_0x04B3C2AC5FF924D1(uParam0->f_91, 4);
							unk_0x04B3C2AC5FF924D1(uParam0->f_91, 5);
							unk_0x04B3C2AC5FF924D1(uParam0->f_91, 6);
							unk_0x04B3C2AC5FF924D1(uParam0->f_91, 7);
							unk_0x04B3C2AC5FF924D1(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!unk_0x2137828D03306CAF(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_267(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_2, 31))
	{
		func_275();
		iVar5 = 0;
		while (iVar5 < 8)
		{
			func_272(iVar5, &Var1, &fVar4);
			if (!func_271(Var1, 0f, 0f, 0f, 0))
			{
				if (!unk_0x2137828D03306CAF(uParam0->f_49[iVar5]))
				{
					iVar0 = func_249(iVar5);
					if (unk_0x818F50CBEC587879(iVar0))
					{
						if (unk_0xA1FC9D7AEA164881(iVar0))
						{
							uParam0->f_49[iVar5] = unk_0xE42A511281C9895B(iVar0, Var1, fVar4, 0, 0, 0);
							unk_0xE77EEA92586CF2E8(uParam0->f_49[iVar5], 1);
							unk_0x170792970BF5726F(uParam0->f_49[iVar5], 0f);
							unk_0x57BF0DBF9E160E0A(uParam0->f_49[iVar5], 0);
							if (iVar5 == 2)
							{
								unk_0xE90B4C21E7E6817C(uParam0->f_49[iVar5], 4, 0, 1);
								unk_0x1873102BDC0A9FE0(uParam0->f_49[iVar5], 4, 0, 1f);
							}
							func_270(uParam0, iVar5);
							func_269(uParam0, iVar5);
							unk_0xFD213087BC4CC3B3(iVar0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 8)
		{
			if (!unk_0x2137828D03306CAF(uParam0->f_49[iVar5]))
			{
				return 0;
			}
			if (!unk_0xAA4F14DA15DB0B51(uParam0->f_2, iVar5))
			{
				if (func_268(uParam0, iVar5))
				{
					unk_0xF6082E2ADA1C795B(&(uParam0->f_2), iVar5);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x7FAC45D56235AB39(uParam0->f_49[iVar5], 0))
			{
				if (!unk_0x524C8716F4E9E23A(uParam0->f_49[iVar5]))
				{
					return 0;
				}
			}
			iVar5++;
		}
		unk_0xF6082E2ADA1C795B(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_268(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0x7FAC45D56235AB39(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x300A7FCC6B376752(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 0, 1, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 2, 1, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 3, 1, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 5, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 7, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 10, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 14, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 15, 4, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x7FAC45D56235AB39(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x300A7FCC6B376752(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x4F10E5AD7F210123(uParam0->f_49[iParam1], 22, 1);
					unk_0x11C8DD1ABA391722(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0x7FAC45D56235AB39(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x300A7FCC6B376752(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 4, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 14, 5, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x4F10E5AD7F210123(uParam0->f_49[iParam1], 22, 1);
					unk_0x11C8DD1ABA391722(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0x7FAC45D56235AB39(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x300A7FCC6B376752(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 23, 11, 0);
					unk_0x4F10E5AD7F210123(uParam0->f_49[iParam1], 22, 1);
					unk_0x11C8DD1ABA391722(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x7FAC45D56235AB39(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x300A7FCC6B376752(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 7, 1, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 11, 3, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 12, 2, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 13, 2, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 16, 4, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0x4F10E5AD7F210123(uParam0->f_49[iParam1], 22, 1);
					unk_0x11C8DD1ABA391722(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0x7FAC45D56235AB39(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x300A7FCC6B376752(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 3, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 6, 2, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 10, 3, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 15, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0x4F10E5AD7F210123(uParam0->f_49[iParam1], 22, 1);
					unk_0x11C8DD1ABA391722(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0x7FAC45D56235AB39(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x300A7FCC6B376752(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 1, 1, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 8, 0, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x7940803ED711B46E(uParam0->f_49[iParam1], 23, 0, 0);
					unk_0x4F10E5AD7F210123(uParam0->f_49[iParam1], 22, 1);
					unk_0x11C8DD1ABA391722(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void func_269(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x3EEE06C64BC5D39B(uParam0->f_49[iParam1], 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 0, 1);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 1, 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 2, 1);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 3, 1);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 4, 1);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 5, 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 7, 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 10, 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0x3EEE06C64BC5D39B(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0x3EEE06C64BC5D39B(uParam0->f_49[iParam1], 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 0, 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0x3EEE06C64BC5D39B(uParam0->f_49[iParam1], 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0x3EEE06C64BC5D39B(uParam0->f_49[iParam1], 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 1, 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 2, 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 4, 1);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 7, 1);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0x3EEE06C64BC5D39B(uParam0->f_49[iParam1], 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 0, 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 1, 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 2, 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 3, 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 4, 1);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 6, 2);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 10, 3);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0x3EEE06C64BC5D39B(uParam0->f_49[iParam1], 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 1, 1);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 4, 1);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 8, 0);
			unk_0x4BAC09741E3FF2E8(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_270(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xC2C096B78AB918EB(uParam0->f_49[iParam1], 83, 134);
			unk_0x1225B25A5432A577(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0xC2C096B78AB918EB(uParam0->f_49[iParam1], 0, 0);
			unk_0x1225B25A5432A577(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0xC2C096B78AB918EB(uParam0->f_49[iParam1], 49, 0);
			unk_0x1225B25A5432A577(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0xC2C096B78AB918EB(uParam0->f_49[iParam1], 0, 0);
			unk_0x1225B25A5432A577(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0xC2C096B78AB918EB(uParam0->f_49[iParam1], 43, 5);
			unk_0x1225B25A5432A577(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0xC2C096B78AB918EB(uParam0->f_49[iParam1], 3, 3);
			unk_0x1225B25A5432A577(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0xC2C096B78AB918EB(uParam0->f_49[iParam1], 35, 0);
			unk_0x1225B25A5432A577(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_271(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_272(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 224.478f, -986.548f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 1:
			*uParam1 = { 224.305f, -991.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 2:
			*uParam1 = { 224.535f, -997.348f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 3:
			*uParam1 = { 232.847f, -986.818f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 4:
			*uParam1 = { 232.847f, -980.848f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 5:
			*uParam1 = { 224.535f, -980.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 6:
			*uParam1 = { 232.779f, -992.84f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 7:
			*uParam1 = { 232.709f, -997.348f, -99.9999f };
			*uParam2 = 118.309f;
			break;
	}
}

void func_273()
{
	unk_0x0F39DF6675B2333E(func_247());
	unk_0xA7C81DED990D3418(func_274());
}

char* func_274()
{
	return "MP_INTRO_SEQ@";
}

void func_275()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		unk_0x0F39DF6675B2333E(func_249(iVar0));
		iVar0++;
	}
}

void func_276(var uParam0, float fParam1, float fParam2)
{
	func_219(uParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_219(uParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_219(uParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_219(uParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_219(uParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_277(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	switch (iParam1)
	{
		case 14:
			func_278(uParam0, 0, -2997.174f, 330.9234f, 14.2341f, -15.97f, &uVar1, 1);
			func_278(uParam0, 2, -2983.9f, 423.7414f, 14.4122f, -5.25f, &uVar1, 1);
			break;
		
		case 15:
			func_278(uParam0, 1, -2622.208f, -109.3386f, 19.2643f, 39.34f, &uVar1, 1);
			func_278(uParam0, 3, -2583.95f, -143.6469f, 20.6224f, 48.89f, &uVar1, 1);
			func_278(uParam0, 7, -2552.145f, -169.0495f, 19.8664f, 60.04f, &uVar1, 1);
			func_278(uParam0, 8, -2531.474f, -174.4581f, 19.2269f, 58.09f, &uVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_278(uParam0, 0, -2420.618f, -232.2668f, 15.3525f, 57.71f, &uVar1, 1);
			func_278(uParam0, 2, -2399.709f, -249.2471f, 14.9551f, 58.19f, &uVar1, 1);
			func_278(uParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &uVar1, 1);
			func_278(uParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &uVar1, 1);
			func_278(uParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &uVar1, 1);
			func_278(uParam0, 9, -2408.733f, -238.8328f, 15.2055f, 59.84f, &uVar1, 1);
			break;
		
		case 18:
			func_278(uParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &uVar1, 1);
			func_278(uParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &uVar1, 1);
			func_278(uParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &uVar1, 1);
			func_278(uParam0, 8, -2191.429f, -335.8769f, 12.7225f, 84.71f, &uVar1, 1);
			break;
		
		case 19:
			func_278(uParam0, 0, -1833.87f, -561.7711f, 11.0989f, 48.11f, &uVar1, 1);
			func_278(uParam0, 1, -1630.587f, -685.6821f, 16.5351f, 58.23f, &uVar1, 1);
			func_278(uParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &uVar1, 1);
			func_278(uParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &uVar1, 1);
			func_278(uParam0, 4, -1706.507f, -720.8959f, 9.6281f, -132.94f, &uVar1, 1);
			func_278(uParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &uVar1, 1);
			func_278(uParam0, 6, -1782.764f, -610.5726f, 10.3008f, 52.34f, &uVar1, 1);
			func_278(uParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &uVar1, 1);
			func_278(uParam0, 8, -1751.892f, -682.1017f, 9.6795f, -134.89f, &uVar1, 1);
			func_278(uParam0, 9, -1742.098f, -642.5658f, 9.8169f, 48.19f, &uVar1, 1);
			break;
		
		case 33:
			func_278(uParam0, 0, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &uVar1, 0);
			func_278(uParam0, 5, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &uVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_278(uParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &uVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_278(uParam0, 0, -712.0925f, -1983.516f, 25.688f, -167.99f, &uVar1, 0);
			func_278(uParam0, 1, -533.9934f, -2004.727f, 26.9085f, 58.71f, &uVar1, 0);
			func_278(uParam0, 2, -653.3551f, -2047.782f, 27.3566f, -112.14f, &uVar1, 0);
			func_278(uParam0, 3, -663.821f, -1934.85f, 27.1417f, -121.65f, &uVar1, 0);
			func_278(uParam0, 4, -656.6017f, -2009.078f, 30.0188f, -106.53f, &uVar1, 0);
			func_278(uParam0, 5, -502.696f, -2023.068f, 26.2376f, 60.2827f, &uVar1, 0);
			func_278(uParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &uVar1, 0);
			func_278(uParam0, 7, -624.7944f, -1960.975f, 26.29f, 237.3848f, &uVar1, 0);
			func_278(uParam0, 8, -463.0545f, -1998.255f, 36.6533f, 27.85f, &uVar1, 0);
			func_278(uParam0, 9, -473.4099f, -1950.213f, 24.7576f, 37.16f, &uVar1, 0);
			func_278(uParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &uVar1, 0);
			func_278(uParam0, 11, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &uVar1, 0);
			func_278(uParam0, 12, -584.929f, -1970.332f, 26.2437f, 55.8826f, &uVar1, 0);
			func_278(uParam0, 13, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &uVar1, 0);
			func_278(uParam0, 14, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &uVar1, 0);
			break;
		
		case 39:
			func_278(uParam0, 4, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &uVar1, 0);
			func_278(uParam0, 9, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &uVar1, 0);
			break;
		
		case 40:
			func_278(uParam0, 3, -270.2197f, -1499.752f, 29.4309f, -13.07f, &uVar1, 0);
			func_278(uParam0, 7, -313.1461f, -1559.589f, 24.2966f, 145.66f, &uVar1, 0);
			func_278(uParam0, 8, -301.9485f, -1550.052f, 25.5595f, 146.95f, &uVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_278(uParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &uVar1, 0);
			func_278(uParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &uVar1, 0);
			func_278(uParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &uVar1, 0);
			break;
		
		case 44:
			func_278(uParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &uVar1, 0);
			func_278(uParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &uVar1, 0);
			func_278(uParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &uVar1, 0);
			break;
		
		case 45:
			func_278(uParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &uVar1, 0);
			func_278(uParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &uVar1, 0);
			func_278(uParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &uVar1, 0);
			func_278(uParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &uVar1, 0);
			func_278(uParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &uVar1, 0);
			func_278(uParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &uVar1, 0);
			func_278(uParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &uVar1, 0);
			func_278(uParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &uVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_278(uParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &uVar1, 0);
			func_278(uParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &uVar1, 0);
			func_278(uParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &uVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_278(uParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &uVar1, 0);
			func_278(uParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &uVar1, 0);
			func_278(uParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &uVar1, 0);
			func_278(uParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &uVar1, 0);
			func_278(uParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &uVar1, 0);
			func_278(uParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &uVar1, 0);
			func_278(uParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &uVar1, 0);
			func_278(uParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &uVar1, 0);
			break;
		
		case 50:
			break;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xAA4F14DA15DB0B51(uVar1, iVar0))
		{
			func_195(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_278(var uParam0, int iParam1, struct<3> Param2, float fParam5, var uParam6, bool bParam7)
{
	if (unk_0x7FAC45D56235AB39(uParam0->f_58[iParam1], 0) && !unk_0x769F0F6444C1ABE0(uParam0->f_74[iParam1]))
	{
		unk_0xA32D9C84C1A93920(uParam0->f_58[iParam1], false);
		unk_0x81642E3BC0111BF2(uParam0->f_58[iParam1], true, 0);
		unk_0x8E979F037EACE55A(uParam0->f_58[iParam1], Param2, 1, 0, 0, 1);
		unk_0x2681BA3707AF6DA7(uParam0->f_58[iParam1], fParam5);
		unk_0x07C140F31B3CDAFA(uParam0->f_58[iParam1], 1084227584);
		unk_0x1FD7155AA0D91CFA(uParam0->f_58[iParam1]);
		if (bParam7)
		{
			unk_0x82D957BF5625B846(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			unk_0xDFFEF66D82BDA05C(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			unk_0x82D957BF5625B846(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			unk_0xDFFEF66D82BDA05C(uParam0->f_58[iParam1], 10f);
		}
		unk_0x015B50BC21C88C8C(uParam0->f_74[iParam1], 1);
		unk_0x4C1FCB3943DAF647(uParam0->f_58[iParam1], true, 0);
		unk_0x4C1FCB3943DAF647(uParam0->f_74[iParam1], true, 0);
		unk_0xF6082E2ADA1C795B(uParam6, iParam1);
	}
}

void func_279(var uParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10)
{
	if (!unk_0x9FA769EB6C3BCCE4(uParam0->f_8))
	{
		uParam0->f_8 = unk_0x1FF428E592B6F928("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = unk_0x6D46C949A32B8D73(Param3, Param6, 2);
	unk_0x70D9DCACEFF60406(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	unk_0x7D700F8B84AB6466(uParam0->f_9, fParam9);
	unk_0x553FF36131238395(uParam0->f_9, iParam10);
	unk_0xD429163073BD3A47(uParam0->f_8, 1);
	unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 1, 0);
}

void func_280(var uParam0)
{
	unk_0xFD213087BC4CC3B3(joaat("frogger"));
	unk_0x0090DF2486F4EBEE(8, "FMIntro");
	if (unk_0x2137828D03306CAF(uParam0->f_48))
	{
		unk_0xA613FDAC42DBBFAD(&(uParam0->f_48));
	}
}

int func_281(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_283();
		if (!unk_0x2137828D03306CAF(uParam0->f_92[0]))
		{
			if (unk_0xA1FC9D7AEA164881(joaat("cheetah")))
			{
				uParam0->f_92[0] = unk_0xE42A511281C9895B(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0, 0);
				unk_0x841ECE80AB1B99B3(uParam0->f_92[0], 0);
				unk_0x11C8DD1ABA391722(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x2137828D03306CAF(uParam0->f_92[1]))
		{
			if (unk_0xA1FC9D7AEA164881(joaat("entityxf")))
			{
				uParam0->f_92[1] = unk_0xE42A511281C9895B(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0, 0);
				unk_0x841ECE80AB1B99B3(uParam0->f_92[1], 0);
				unk_0xF7DBB58616DE468C(uParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				unk_0x23B7F0BEB9890E62(uParam0->f_92[1], 8);
				unk_0x11C8DD1ABA391722(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x2137828D03306CAF(uParam0->f_92[2]))
		{
			if (unk_0xA1FC9D7AEA164881(joaat("monroe")))
			{
				uParam0->f_92[2] = unk_0xE42A511281C9895B(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0, 0);
				unk_0x841ECE80AB1B99B3(uParam0->f_92[2], 0);
				unk_0xF7DBB58616DE468C(uParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				unk_0x23B7F0BEB9890E62(uParam0->f_92[2], 2);
				unk_0x11C8DD1ABA391722(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x2137828D03306CAF(uParam0->f_92[3]))
		{
			if (unk_0xA1FC9D7AEA164881(joaat("cheetah")))
			{
				uParam0->f_92[3] = unk_0xE42A511281C9895B(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0, 0);
				unk_0x841ECE80AB1B99B3(uParam0->f_92[3], 0);
				unk_0xF7DBB58616DE468C(uParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				unk_0x23B7F0BEB9890E62(uParam0->f_92[3], 15);
				unk_0x11C8DD1ABA391722(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x2137828D03306CAF(uParam0->f_92[4]))
		{
			if (unk_0xA1FC9D7AEA164881(joaat("feltzer2")))
			{
				uParam0->f_92[4] = unk_0xE42A511281C9895B(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0, 0);
				unk_0x841ECE80AB1B99B3(uParam0->f_92[4], 0);
				unk_0xF7DBB58616DE468C(uParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				unk_0xC2C096B78AB918EB(uParam0->f_92[4], 0, 0);
				unk_0x1225B25A5432A577(uParam0->f_92[4], 0, 156);
				unk_0x3EEE06C64BC5D39B(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0x7FAC45D56235AB39(uParam0->f_92[4], 0))
		{
			if (!unk_0xAA4F14DA15DB0B51(uParam0->f_3, 1))
			{
				if (unk_0x300A7FCC6B376752(uParam0->f_92[4]) > 0)
				{
					unk_0x4F10E5AD7F210123(uParam0->f_92[4], 22, 1);
					unk_0x11C8DD1ABA391722(uParam0->f_92[4], 0);
					unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0xA1FC9D7AEA164881(func_227()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0x2137828D03306CAF(uParam0->f_98[iVar1]))
				{
					if (unk_0x2137828D03306CAF(uParam0->f_92[iVar1]))
					{
						if (unk_0x7FAC45D56235AB39(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = unk_0x7B47BFDF39EC38D3(uParam0->f_92[iVar1], 4, func_227(), -1, 0, false);
							unk_0x4C47904AE69D7393(uParam0->f_98[iVar1], 1);
							unk_0x2DEA38A68AA89671(uParam0->f_92[iVar1], 1, 1, 0);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			unk_0xFD213087BC4CC3B3(joaat("cheetah"));
			unk_0xFD213087BC4CC3B3(joaat("monroe"));
			unk_0xFD213087BC4CC3B3(joaat("entityxf"));
			unk_0xFD213087BC4CC3B3(joaat("feltzer2"));
			unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_282()
{
	func_283();
	if (unk_0xA1FC9D7AEA164881(func_227()))
	{
		if (unk_0xA1FC9D7AEA164881(joaat("cheetah")))
		{
			if (unk_0xA1FC9D7AEA164881(joaat("monroe")))
			{
				if (unk_0xA1FC9D7AEA164881(joaat("entityxf")))
				{
					if (unk_0xA1FC9D7AEA164881(joaat("feltzer2")))
					{
						if (unk_0x3FCFBAC760CAEC03(100, "FM_Intro_uber"))
						{
							if (unk_0x3FCFBAC760CAEC03(101, "FM_Intro_uber"))
							{
								if (unk_0x3FCFBAC760CAEC03(102, "FM_Intro_uber"))
								{
									if (unk_0x3FCFBAC760CAEC03(103, "FM_Intro_uber"))
									{
										if (unk_0x3FCFBAC760CAEC03(104, "FM_Intro_uber"))
										{
											if (unk_0x45834D6C20FFF689("mp_intro_seq@"))
											{
												return 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_283()
{
	unk_0x0F39DF6675B2333E(joaat("cheetah"));
	unk_0x0F39DF6675B2333E(joaat("monroe"));
	unk_0x0F39DF6675B2333E(joaat("entityxf"));
	unk_0x0F39DF6675B2333E(joaat("feltzer2"));
	unk_0x0F39DF6675B2333E(func_227());
	unk_0x6C2A4A9F6C64E132(100, "FM_Intro_uber");
	unk_0x6C2A4A9F6C64E132(101, "FM_Intro_uber");
	unk_0x6C2A4A9F6C64E132(102, "FM_Intro_uber");
	unk_0x6C2A4A9F6C64E132(103, "FM_Intro_uber");
	unk_0x6C2A4A9F6C64E132(104, "FM_Intro_uber");
	unk_0xA7C81DED990D3418("mp_intro_seq@");
}

int func_284(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0x0F39DF6675B2333E(joaat("asterope"));
		unk_0x0F39DF6675B2333E(joaat("sentinel"));
		unk_0x0F39DF6675B2333E(func_227());
		if ((unk_0xA1FC9D7AEA164881(joaat("asterope")) && unk_0xA1FC9D7AEA164881(joaat("sentinel"))) && unk_0xA1FC9D7AEA164881(func_227()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0x2137828D03306CAF(uParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_196(iVar0, &Var2, &fVar5);
					uParam0->f_58[iVar0] = unk_0xE42A511281C9895B(iVar1, Var2, fVar5, 0, 0, 0);
					unk_0x23B7F0BEB9890E62(uParam0->f_58[iVar0], iVar0);
					unk_0xF65C7766FB8D4B2C(uParam0->f_58[iVar0], 1);
					unk_0x8916BD2C5463CBEE(uParam0->f_58[iVar0], 2);
					unk_0xA32D9C84C1A93920(uParam0->f_58[iVar0], true);
				}
				if (unk_0x2137828D03306CAF(uParam0->f_58[iVar0]))
				{
					if (!unk_0x2137828D03306CAF(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = unk_0x7B47BFDF39EC38D3(uParam0->f_58[iVar0], 4, func_227(), -1, 0, false);
						unk_0xF65C7766FB8D4B2C(uParam0->f_74[iVar0], 1);
						unk_0x4C47904AE69D7393(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0x2137828D03306CAF(uParam0->f_58[iVar0]) || !unk_0x2137828D03306CAF(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0xFD213087BC4CC3B3(joaat("asterope"));
		unk_0xFD213087BC4CC3B3(joaat("sentinel"));
		unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_285(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_209(uParam0, iParam1, 0);
	if (uParam0->f_293)
	{
		if ((uParam0->f_13 + iVar0) + iParam2) <= unk_0x3732B96D7A1859B4()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_217(uParam0)
	{
		return 1;
	}
	return 0;
}

int func_286(var uParam0)
{
	int iVar0;
	
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	unk_0x0F39DF6675B2333E(iVar0);
	unk_0x6C2A4A9F6C64E132(8, "FMIntro");
	if (unk_0xA1FC9D7AEA164881(iVar0) && unk_0x3FCFBAC760CAEC03(8, "FMIntro"))
	{
		if (!unk_0x2137828D03306CAF(uParam0->f_48))
		{
			uParam0->f_48 = unk_0xE42A511281C9895B(iVar0, unk_0x2E4BE8F677916845(8, 0f, "FMIntro"), 0f, 0, 0, 0);
			unk_0xFF6757A3AC8108B0(uParam0->f_48, 8, "FMIntro", 1);
			unk_0x4729AA8BDD4C7CC6(uParam0->f_48, 5000f);
			unk_0x479360177A467531(uParam0->f_48);
			unk_0x4C1FCB3943DAF647(uParam0->f_48, false, 0);
			unk_0xFD213087BC4CC3B3(iVar0);
		}
	}
	if (!unk_0x2137828D03306CAF(uParam0->f_48))
	{
		return 0;
	}
	unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 8);
	return 1;
}

void func_287(var uParam0, int iParam1)
{
	if (func_285(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (unk_0x3732B96D7A1859B4() - func_209(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_288(var uParam0)
{
	uParam0->f_13 = unk_0x3732B96D7A1859B4();
}

Vector3 func_289(struct<3> Param0)
{
	return (-unk_0x0BADBFA3B172435F(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), (unk_0xD0FFB162F40A139C(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), unk_0x0BADBFA3B172435F(Param0.f_0);
}

int func_290()
{
	return Global_1312787;
}

void func_291()
{
	unk_0x4AE062EA52E5F2B3(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	unk_0x4AE062EA52E5F2B3(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
}

void func_292()
{
	func_202(0);
	func_201(1);
}

void func_293(bool bParam0, int iParam1)
{
	func_297();
	func_295(1);
	unk_0x7D53B6FFAEDA810A(1);
	unk_0x0508903FC1B0ED24();
	func_234(1, 1, 1, 0);
	func_294();
	func_188(12, 1, -1);
	func_189(0);
	unk_0x44FC1DFD412D8376(1, -1);
	unk_0xA6C8C7573424CA93(0);
	unk_0xDA0C5084402DA99C(0);
	func_295(1);
	func_241(1);
	Global_2434604.f_3491 = 1;
	if (bParam0)
	{
		if (!unk_0x45A42C7863C1A2B9())
		{
			unk_0x98C476D8F2ACDB57(1, iParam1);
		}
	}
}

void func_294()
{
	func_189(0);
	func_188(4, 1, -1);
	func_188(6, 1, -1);
	func_188(7, 1, -1);
	func_188(3, 1, -1);
	func_188(1, 1, -1);
	func_188(2, 1, -1);
	func_188(11, 1, -1);
	func_188(13, 1, -1);
	func_188(14, 1, -1);
	func_188(16, 1, -1);
}

void func_295(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101890)
	{
		unk_0xCE563FE94BCF6479(iVar0, iParam0);
		func_296(iVar0);
		iVar0++;
	}
}

void func_296(int iParam0)
{
	Global_101890[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_101890[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_101890[iParam0 /*28*/].f_4), "", 64);
	Global_101890[iParam0 /*28*/].f_23 = 0;
	Global_101890[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_101890[iParam0 /*28*/].f_27 = 0;
	Global_101890[iParam0 /*28*/].f_20 = 0;
	Global_101890[iParam0 /*28*/].f_22 = 0;
}

void func_297()
{
	Global_1312567 = 1;
	StringCopy(&(Global_1312567.f_1), unk_0xFABF5258A318B1DC(), 24);
	Global_1312567.f_7 = unk_0xCAEDBF30E3EA14FC(&(Global_1312567.f_1));
}

int func_298()
{
	if (unk_0xF4EE9D6C8E60AE22())
	{
		func_300(0);
		unk_0xC5399DEC1F24FCEE();
		return 1;
	}
	if (func_299() == 3)
	{
		func_300(2);
		unk_0xB17D86E15C9B8DC7(250f);
	}
	if (unk_0xC8856AA9674494DD() >= 250f)
	{
		unk_0xB17D86E15C9B8DC7(250f);
	}
	if (unk_0x213DCAC8E2C953BA() == 0)
	{
		unk_0xB17D86E15C9B8DC7(250f);
	}
	if (unk_0xC8856AA9674494DD() <= 0f)
	{
		func_300(0);
		return 1;
	}
	return 0;
}

int func_299()
{
	return Global_1312466.f_19;
}

void func_300(int iParam0)
{
	if (Global_1312466.f_19 != iParam0)
	{
		Global_1312466.f_19 = iParam0;
	}
}

void func_301(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_305(iParam0, &iVar1);
	if (!unk_0x35302CD5A5D37EED("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xF406A51DE8AB8874(iVar1))
			{
				return;
			}
			if (unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == iVar1)
			{
				func_304(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xF406A51DE8AB8874(iVar1))
			{
				return;
			}
			if (func_302(iParam0))
			{
				func_304(iParam0, 0);
			}
		}
		unk_0x4E710FFD35B4AEA9(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_302(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_303(iParam0) };
	if (unk_0xAA4F14DA15DB0B51(Global_31593[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_303(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3.f_0 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 5)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3.f_0 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_304(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_303(iParam0) };
	if (bParam1)
	{
		unk_0xF6082E2ADA1C795B(&(Global_31593[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_31593[Var0.f_1]), Var0.f_0);
	}
}

var func_305(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_306(iParam0) };
	*iParam1 = unk_0xD79C30F3A2706E90(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_306(int iParam0)
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_307(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_307(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_307(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_307(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_307(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_307(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_307(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049460[34 /*1943*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_307(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_307(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_307(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_307(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_307(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_307(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_307(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_307(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_307(43, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var5 = { func_307(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_307(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_307(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_307(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_307(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_307(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_307(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_307(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_307(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_307(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_307(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_307(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_307(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_307(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_307(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_307(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_307(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_307(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_307(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_307(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_307(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_307(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_307(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_307(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_307(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_307(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_307(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_307(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_307(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_307(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_307(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_307(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_307(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_307(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_307(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_307(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_307(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_307(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_307(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_307(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_307(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_307(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_307(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_307(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_307(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_307(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_307(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_307(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_307(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_307(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_307(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_307(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_307(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_307(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_307(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_308()
{
	return Global_2455863;
}

bool func_309()
{
	return Global_2454707;
}

void func_310(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_316(bParam0, 0);
	}
	func_314(0);
	func_311(65);
}

void func_311(int iParam0)
{
	var uVar0;
	char* sVar1;
	int iVar2;
	
	uVar0 = func_290();
	if (Global_1312852)
	{
		sVar1 = func_313(iParam0);
		iVar2 = unk_0xCAEDBF30E3EA14FC(sVar1);
		func_312(&Global_2456948, 1, 0);
		unk_0xE4116BA100C4B193(iVar2, 1, uVar0, iParam0, 0);
	}
	Global_1312787 = iParam0;
}

void func_312(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x11ABC381A58DD5AB();
		}
		else
		{
			*uParam0 = unk_0xFD0C6B49DA615791();
		}
	}
	else
	{
		*uParam0 = unk_0x3732B96D7A1859B4();
	}
	uParam0->f_1 = 1;
}

char* func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 28:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 29:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 30:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 31:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 33:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 34:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 35:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 37:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 38:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 39:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 45:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 46:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 47:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 48:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 50:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 51:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 44:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 53:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 52:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 54:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 55:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 57:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 61:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 62:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 63:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 64:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 65:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 66:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		default:
	}
	return "";
}

void func_314(int iParam0)
{
	var uVar0;
	
	uVar0 = func_315();
	Global_1312786 = iParam0;
}

var func_315()
{
	return Global_1312786;
}

void func_316(bool bParam0, bool bParam1)
{
	int iVar0;
	
	func_318(&Global_17071, bParam1);
	unk_0x7D44811DD0B8D958(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0x7537D31F710440D5();
			func_317(0);
			if (unk_0x2137828D03306CAF(Global_1315634))
			{
				if (unk_0xDDB64A4460B8504C(Global_1315634, 0))
				{
					if (!unk_0x03322C3918511AA0(Global_1315634))
					{
						unk_0x216B434C1A609F5B(Global_1315634, 0, 0);
					}
					unk_0x27BAC9B39BCC6522(&Global_1315634);
				}
			}
		}
	}
}

void func_317(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2456931 = 0;
	}
	Global_1312466.f_18 = iParam0;
}

void func_318(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0x9FA769EB6C3BCCE4(uParam0->f_9))
	{
		if (unk_0xF0A915CB71B8E167(uParam0->f_9))
		{
			func_319(0);
		}
		unk_0x1E2E6AAAD9AE1286(uParam0->f_9, 0);
	}
	if (!Global_36910)
	{
		unk_0x7FAF8FA8166834A7(1);
		unk_0x9BCFE282549F0ABE(0f);
		unk_0xCA4458A7A267D61B(0f);
	}
	Global_2404996.f_576 = 0f;
	if (!bParam1)
	{
		unk_0xB9658EBA374EC2AD(0, 0, 0, 1, 0, 0);
	}
}

void func_319(int iParam0)
{
	Global_17149 = iParam0;
}

void func_320(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_325(1);
	}
	else
	{
		func_321(iParam1);
	}
}

void func_321(int iParam0)
{
	func_324();
	if (iParam0 == 0)
	{
		if (unk_0x82DFF1E96EC2F516())
		{
			return;
		}
	}
	if (func_323() == 0 || unk_0x9E5289F5D782437C())
	{
		func_322(1);
		unk_0x4DE990805F476C4B(0);
		unk_0x4DE990805F476C4B(0);
	}
}

void func_322(int iParam0)
{
	if (Global_1312466.f_20 != iParam0)
	{
		Global_1312466.f_20 = iParam0;
	}
}

int func_323()
{
	return Global_1312466.f_20;
}

void func_324()
{
	Global_2456240 = 1;
}

void func_325(int iParam0)
{
	if ((func_323() == 1 || unk_0x9E5289F5D782437C()) || iParam0)
	{
		func_322(0);
		unk_0x4DE990805F476C4B(1);
		unk_0x4DE990805F476C4B(1);
		unk_0xDB5A5215468442C1();
	}
}

void func_326(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0FC6E1EE5D8B33CE();
		unk_0x25366A1767144A26(-1);
		unk_0x4123E2F864AB86BE(1);
		unk_0x058730A7C31A1B0A(1);
		unk_0x0C0404DFB8BB22C1(1f);
		unk_0x9C3E48F44A0E0BFC(3);
		unk_0xF514FA707F98BA43(3);
	}
	else
	{
		unk_0x20A9229D8F4F054A(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		unk_0x25366A1767144A26(0);
		unk_0x4123E2F864AB86BE(0);
		unk_0x058730A7C31A1B0A(0);
		unk_0x0C0404DFB8BB22C1(0f);
		unk_0x9C3E48F44A0E0BFC(0);
		unk_0xF514FA707F98BA43(0);
	}
}

void func_327(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_292();
	func_201(1);
	func_189(1);
	func_188(12, 1, -1);
	func_335();
	unk_0x6040865446FA4030(0);
	if (bParam0)
	{
		unk_0x9FD131F22473B3D7(unk_0x0FFED3E94261A832(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_328(unk_0x0FFED3E94261A832(), 0, iVar0);
	if (bParam5)
	{
		if (unk_0x79AB623AEFBB0906(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0xF09DCA8124694AF7(unk_0x2A5EB8B0FE590B91(), 0);
		}
	}
}

void func_328(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0x7B399FFF3AC5B678())
		{
			unk_0x6F0F1C5EEC77F84A(0);
		}
	}
	if (!unk_0x591AF4C50B46E014())
	{
		uVar0 = iParam2;
		unk_0x73EC54DB6766EF37(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_333())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x885F483F34E47503(iParam0) && unk_0xB8B285A272E7A79E(iParam0))
		{
			uVar25 = unk_0x1E199569E0295838(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x591AF4C50B46E014())
				{
					unk_0xA64CA7CB069DDFFA(1);
				}
				else
				{
					unk_0x4C1FCB3943DAF647(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x591AF4C50B46E014() && !bVar18)
					{
						unk_0xA64CA7CB069DDFFA(0);
					}
					Global_2422215[iParam0 /*387*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_332(uVar25) && !unk_0x1CF549F1B0277DA6(uVar25))
				{
					if (!bVar21)
					{
						unk_0x81642E3BC0111BF2(uVar25, true, 0);
					}
				}
				if (!unk_0xED01C551E3A161C0(uVar25))
				{
					if (!bVar20)
					{
						unk_0xA32D9C84C1A93920(uVar25, false);
					}
					unk_0xE77EEA92586CF2E8(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xA32D9C84C1A93920(iVar25, false);
				}
				unk_0x2725C3746060DA66(iVar25, true);
				unk_0x1EF72C87138AD63D(iParam0, 0);
				unk_0x81CEA1F6278C00AA(iVar25);
				unk_0xDC7A31134115BFF0(iVar25, 1);
				func_331();
				func_330();
				if (unk_0x57A397BDF5F38342())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xFD918707B1B07874())
				{
				}
				Global_2422215[iParam0 /*387*/].f_254 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_332(iVar25) && !unk_0x1CF549F1B0277DA6(iVar25))
				{
					if (!bVar21)
					{
						unk_0x81642E3BC0111BF2(iVar25, !bVar14, 0);
					}
					if (!unk_0xED01C551E3A161C0(iVar25))
					{
						if (!bVar20)
						{
							unk_0xA32D9C84C1A93920(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xE77EEA92586CF2E8(iVar25, 1);
						}
					}
					if (func_329(Global_1638223.f_112772))
					{
						unk_0xA32D9C84C1A93920(iVar25, true);
					}
				}
				if (bVar9)
				{
					unk_0x1EF72C87138AD63D(iParam0, 0);
				}
				else
				{
					unk_0x1EF72C87138AD63D(iParam0, 1);
				}
				unk_0x2725C3746060DA66(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xE1F938E1A529D851(iVar25) && !unk_0xC4A39E4229BD3ABE(iVar25, 0))
					{
						unk_0x5DE3EC94E90BB96F(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x73EC54DB6766EF37(iParam0, bParam1, iVar26);
		}
	}
}

bool func_329(int iParam0)
{
	return iParam0 == 17;
}

void func_330()
{
	struct<2> Var0;
	
	Global_2434604.f_1010 = 0;
	Global_2434604.f_1011 = 0;
	Global_2434604.f_1012 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2434604.f_1017 = -1;
	Global_2404996.f_2472 = { Var0 };
}

void func_331()
{
	Global_2404996.f_664 = 0;
	Global_2404996.f_2513 = 0;
	Global_2404996.f_502 = 0;
	Global_2404996.f_578 = 0;
	Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_216 = 0;
}

int func_332(int iParam0)
{
	int iVar0;
	
	if (unk_0xC4A39E4229BD3ABE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xE897E371352225D5(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_333()
{
	if (func_334() == 0)
	{
		return 1;
	}
	return 0;
}

int func_334()
{
	return Global_1312466.f_18;
}

void func_335()
{
	Global_17151.f_5 = 1;
}

void func_336(int iParam0)
{
	unk_0x3EFE40733EFB6649(unk_0x1E199569E0295838(iParam0), 346, 1);
}

void func_337(var uParam0)
{
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_3, 12))
	{
		unk_0xF6082E2ADA1C795B(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1761554)
			{
				Global_1761554 = 1;
				Global_1761555 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (unk_0xA8AF99BD8D81CFB7(Global_1761553))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if ((unk_0xBC8CC6C19B70E1C4() == 9 || unk_0xBC8CC6C19B70E1C4() == 10) || unk_0xBC8CC6C19B70E1C4() == 8)
									{
										func_342("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_342("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_341("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("artdir", "AARON GARBUT", 210f, "|", 1);
									func_339("artdir", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 33, -3390))
							{
								func_338("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (func_285(uParam0, 33, -2940))
								{
									func_342("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_341("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_340("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_339("techdir", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 33, -450))
							{
								func_338("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_342("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_341("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_340("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_339("assartdir", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_338("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if ((unk_0xBC8CC6C19B70E1C4() == 9 || unk_0xBC8CC6C19B70E1C4() == 10) || unk_0xBC8CC6C19B70E1C4() == 8)
									{
										func_342("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_342("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_341("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_340("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_339("asstecdir", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 36, -4740))
							{
								func_338("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (func_285(uParam0, 36, -3810))
								{
									func_342("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_341("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_339("leadprog", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 36, -600))
							{
								func_338("leadprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if ((unk_0xBC8CC6C19B70E1C4() == 9 || unk_0xBC8CC6C19B70E1C4() == 10) || unk_0xBC8CC6C19B70E1C4() == 8)
									{
										func_342("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_342("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_341("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_340("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_339("senprog", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 37, -1350))
							{
								func_338("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_342("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_341("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_340("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_339("prog", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 38, -4320))
							{
								func_338("prog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (func_285(uParam0, 38, -3240))
								{
									if ((unk_0xBC8CC6C19B70E1C4() == 9 || unk_0xBC8CC6C19B70E1C4() == 10) || unk_0xBC8CC6C19B70E1C4() == 8)
									{
										func_342("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_342("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_341("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_340("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_339("socclub", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 38, -870))
							{
								func_338("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_342("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_341("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_339("audio", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 39, -1620))
							{
								func_338("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_342("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_341("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_340("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_339("scrlead", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 40, -1470))
							{
								func_338("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_342("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_341("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_340("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_339("script1", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 41, -1200))
							{
								func_338("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_342("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_341("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_340("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_339("script2", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 42, -1320))
							{
								func_338("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_342("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_341("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_341("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_339("visdes", 0.05f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 43, -1320))
							{
								func_338("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_342("uides", 40f, 20f, "right", 0f, 0.3f);
									func_341("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_340("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_339("uides", 0f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 45, -1650))
							{
								func_338("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_342("concre", 0f, 20f, "left", 0f, 0.3f);
									func_341("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_340("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_340("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_339("concre", 0f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 46, -1950))
							{
								func_338("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_342("devass", 0f, 400f, "right", 0f, 0f);
									func_341("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_340("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_339("devass", 0f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_338("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_342("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_341("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_341("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_339("qasup", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 48, -1320))
							{
								func_338("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_342("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_341("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_340("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_339("senta", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 49, -5070))
							{
								func_338("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (func_285(uParam0, 49, -3750))
								{
									func_342("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_341("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_340("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_339("asspro", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 49, -720))
							{
								func_338("asspro", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (func_244(uParam0))
								{
									if (unk_0x863D84AFAC2AB730() && unk_0xC01930F478B14879() > 2468)
									{
										func_342("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_341("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_340("animdir", "ROB NELSON", 200f, "|", 1);
										func_339("animdir", 0.16f);
										unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_342("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_341("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_340("animdir", "ROB NELSON", 90f, "|", 1);
									func_339("animdir", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_244(uParam0))
							{
								if (unk_0x863D84AFAC2AB730() && unk_0xC01930F478B14879() > 6123)
								{
									func_338("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x863D84AFAC2AB730() && unk_0xC01930F478B14879() > 1898)
							{
								func_338("animdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (func_244(uParam0))
								{
									if (unk_0x863D84AFAC2AB730() && unk_0xA312986453A60AE9())
									{
										func_342("producer", 65f, 55f, "right", 0f, 0f);
										func_341("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_340("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_339("producer", 0f);
										unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x863D84AFAC2AB730() && unk_0xC01930F478B14879() > 2452)
								{
									func_342("producer", 0f, 100f, "left", 0.3f, 0f);
									func_341("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_339("producer", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_244(uParam0))
							{
								if (unk_0x863D84AFAC2AB730() && unk_0xA312986453A60AE9())
								{
									func_338("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x863D84AFAC2AB730() && unk_0xA312986453A60AE9())
							{
								func_338("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (func_244(uParam0))
								{
									if (unk_0x863D84AFAC2AB730() && unk_0xC01930F478B14879() > 13265)
									{
										func_342("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_341("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_340("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_339("vpcre", 0.16f);
										unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x863D84AFAC2AB730() && unk_0xC01930F478B14879() > 6921)
								{
									func_342("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_341("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_340("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_339("vpcre", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_244(uParam0))
							{
								if (unk_0x863D84AFAC2AB730() && unk_0xC01930F478B14879() > 16955)
								{
									func_338("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x863D84AFAC2AB730() && unk_0xC01930F478B14879() > 10513)
							{
								func_338("vpcre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_4, uParam0->f_5))
							{
								if (func_244(uParam0))
								{
									if (unk_0x863D84AFAC2AB730() && unk_0xC01930F478B14879() > 18077)
									{
										Global_1761555 = 0;
										func_342("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_341("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_340("execpro", "SAM HOUSER", 165f, "|", 1);
										func_339("execpro", 0.16f);
										unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x863D84AFAC2AB730() && unk_0xC01930F478B14879() > 12358)
								{
									Global_1761555 = 0;
									func_342("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_341("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_340("execpro", "SAM HOUSER", 190f, "|", 1);
									func_339("execpro", 0.16f);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_244(uParam0))
							{
								if (unk_0x863D84AFAC2AB730() && unk_0xC01930F478B14879() > 21785)
								{
									func_338("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x863D84AFAC2AB730() && unk_0xC01930F478B14879() > 15333)
							{
								func_338("execpro", 0.16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1761555)
				{
					unk_0x792C5262A7BE057A(Global_1761553, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_338(char* sParam0, float fParam1)
{
	unk_0xD1FCC52F87A98873(Global_1761553, "HIDE");
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(sParam0);
	unk_0xF7D95CCE1364B5CE();
	unk_0xD3A4A11E4FDC9D63(fParam1);
	unk_0x8123397DC676E794();
}

void func_339(char* sParam0, float fParam1)
{
	unk_0xD1FCC52F87A98873(Global_1761553, "SHOW_CREDIT_BLOCK");
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(sParam0);
	unk_0xF7D95CCE1364B5CE();
	unk_0xD3A4A11E4FDC9D63(fParam1);
	unk_0x8123397DC676E794();
}

void func_340(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0xD1FCC52F87A98873(Global_1761553, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(sParam0);
	unk_0xF7D95CCE1364B5CE();
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(sParam1);
	unk_0xF7D95CCE1364B5CE();
	unk_0xD3A4A11E4FDC9D63(fParam2);
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(sParam3);
	unk_0xF7D95CCE1364B5CE();
	unk_0xD426F7366505EADF(iParam4);
	unk_0x8123397DC676E794();
}

void func_341(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0xD1FCC52F87A98873(Global_1761553, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(sParam0);
	unk_0xF7D95CCE1364B5CE();
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(sParam1);
	unk_0xF7D95CCE1364B5CE();
	unk_0xD3A4A11E4FDC9D63(fParam2);
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(sParam3);
	unk_0xF7D95CCE1364B5CE();
	unk_0xD426F7366505EADF(iParam4);
	unk_0x8123397DC676E794();
}

void func_342(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0xD1FCC52F87A98873(Global_1761553, "SETUP_CREDIT_BLOCK");
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(sParam0);
	unk_0xF7D95CCE1364B5CE();
	unk_0xD3A4A11E4FDC9D63(fParam1);
	unk_0xD3A4A11E4FDC9D63(fParam2);
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(sParam3);
	unk_0xF7D95CCE1364B5CE();
	unk_0xD3A4A11E4FDC9D63(fParam4);
	unk_0xD3A4A11E4FDC9D63(fParam5);
	unk_0x8123397DC676E794();
}

void func_343(var uParam0)
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (unk_0x2137828D03306CAF(uParam0->f_34))
		{
			if (unk_0x7FAC45D56235AB39(uParam0->f_34, 0))
			{
				unk_0xD6283D9AAB436A6E(unk_0x82D9CF397BA8C885(uParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_344()
{
	var uVar0;
	
	if (unk_0xD0BCF9877CD72A3F(Local_567.f_3))
	{
		switch (Local_567.f_2)
		{
			case 2:
				if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_4, 1))
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if (func_361(Local_567.f_3))
						{
							if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
							{
								if (unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -1794415470) != 1 && unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -1794415470) != 0)
								{
									unk_0xA6AC097BEBB7B1F0(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_567.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_4, 2))
							{
								if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_567.f_3)))
								{
									unk_0xF6082E2ADA1C795B(&(Local_739[unk_0x88641E5BC172153A() /*5*/].f_4), 2);
									func_360(1);
								}
								else
								{
									unk_0x17F1CA1754EDB8DB(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_361(Local_567.f_3))
				{
					if (!func_359(Local_567.f_4))
					{
						if (unk_0xAA4F14DA15DB0B51(uLocal_750, 26))
						{
							if (unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_567.f_4), -1273030092) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_567.f_4), -1273030092) != 0)
							{
								unk_0xA9EDD66D1A73F31A(unk_0xC09E9E2B61AD04E7(Local_567.f_4), unk_0xECBE9D2902B2B964(Local_567.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 27))
				{
					if (!unk_0xF4EE9D6C8E60AE22() && !unk_0xEF08C8E0C4679477())
					{
						if (!func_109())
						{
							if (!unk_0x9E5289F5D782437C())
							{
								unk_0x5BFE0E837BA0AF60(800);
							}
						}
					}
					else if (unk_0xF4EE9D6C8E60AE22())
					{
						unk_0xF6082E2ADA1C795B(&uLocal_750, 27);
					}
				}
				else if (!unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 4))
				{
					if (func_351(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0))
					{
						unk_0x17F1CA1754EDB8DB(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0);
						unk_0x4EFD4D9A8A408E46();
						unk_0x360C8AF0F8140840();
						unk_0x164CA344DBD7B6F3(0);
						unk_0x61C3B2A4FEFA1D6D(0, 1065353216);
						unk_0xF6082E2ADA1C795B(&(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_359(Local_567.f_4))
				{
					if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 29))
					{
						if (func_361(Local_567.f_3))
						{
							unk_0x8170B02A098B74FD(unk_0xC09E9E2B61AD04E7(Local_567.f_4), unk_0xECBE9D2902B2B964(Local_567.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							unk_0x9B0467159FAB9F56(800);
							unk_0xF6082E2ADA1C795B(&uLocal_750, 29);
						}
					}
					else if (!unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 5))
					{
						if (unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_567.f_4), -272084098) == 7)
						{
							unk_0xF6082E2ADA1C795B(&(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
					{
						if (unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -828834893) != 1 && unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), -828834893) != 0)
						{
							unk_0x8F2751B831A7B303(unk_0x2A5EB8B0FE590B91(), 0, 0);
						}
					}
					else if (!unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 6))
					{
						unk_0xF6082E2ADA1C795B(&(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3), 6);
						unk_0xF6082E2ADA1C795B(&(Global_2497344.f_772), 4);
						unk_0x507FE690B1271947(&(Local_739[unk_0x88641E5BC172153A() /*5*/].f_4), 2);
						func_328(unk_0x0FFED3E94261A832(), 1, 0);
						func_350();
						func_360(0);
						func_32("HLP_TAXI", -1);
						if (func_52())
						{
							func_43(-1834046564, 200, &uVar0, 0, 0, 0);
						}
						else
						{
							func_347(-200, 0);
							unk_0x9BD9C37376903AB9(200, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_359(Local_567.f_4))
				{
					if (func_361(Local_567.f_3))
					{
						if (unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_567.f_4), -258271821) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_567.f_4), -258271821) != 0)
						{
							unk_0x015B50BC21C88C8C(unk_0xC09E9E2B61AD04E7(Local_567.f_4), 1);
							unk_0x37959C6A7F431781(unk_0xC09E9E2B61AD04E7(Local_567.f_4), unk_0xECBE9D2902B2B964(Local_567.f_3), 12f, 786599);
							func_346(&(Local_567.f_3));
							func_346(&(Local_567.f_4));
						}
					}
				}
				break;
		}
		if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_4, 1))
		{
			unk_0x22B61B02AFE2AF2E(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 26))
			{
				unk_0xF6082E2ADA1C795B(&uLocal_750, 26);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 28))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_4, 2))
			{
				if (!func_182(&uLocal_400))
				{
					func_200();
					func_19(&uLocal_400, 0, 0);
				}
				else if (func_181(&uLocal_400, 5000, 0))
				{
					if (func_161(&uLocal_574, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						unk_0xF6082E2ADA1C795B(&uLocal_750, 28);
					}
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 30))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 5))
			{
				if (func_161(&uLocal_574, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					unk_0xF6082E2ADA1C795B(&uLocal_750, 30);
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 6))
		{
			func_345();
		}
		if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_4, 2))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
				{
				}
			}
		}
	}
}

void func_345()
{
	Global_2507091.f_258 = 1;
}

void func_346(var uParam0)
{
	var uVar0;
	
	if (unk_0xD0BCF9877CD72A3F(*uParam0))
	{
		uVar0 = unk_0x7BAE3A9057619E1F(*uParam0);
		unk_0xC76AD47E2B4CE25C(&uVar0);
	}
}

void func_347(int iParam0, int iParam1)
{
	func_349(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_348(iParam0, 0);
	}
}

void func_348(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_349(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_4 = iVar1;
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_3 = (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_348(iVar1, 0);
	}
}

void func_350()
{
	unk_0x2C6CBE6F28447D42(0, 22, 1);
	unk_0x2C6CBE6F28447D42(0, 36, 1);
	unk_0x2C6CBE6F28447D42(0, 32, 1);
	unk_0x2C6CBE6F28447D42(0, 34, 1);
	unk_0x2C6CBE6F28447D42(0, 35, 1);
	unk_0x2C6CBE6F28447D42(0, 33, 1);
	unk_0x2C6CBE6F28447D42(0, 31, 1);
	unk_0x2C6CBE6F28447D42(0, 30, 1);
	unk_0x2C6CBE6F28447D42(0, 44, 1);
	unk_0x2C6CBE6F28447D42(0, 141, 1);
	unk_0x2C6CBE6F28447D42(0, 140, 1);
	unk_0x2C6CBE6F28447D42(0, 263, 1);
	unk_0x2C6CBE6F28447D42(0, 264, 1);
	unk_0x2C6CBE6F28447D42(0, 143, 1);
	unk_0x2C6CBE6F28447D42(0, 24, 1);
	unk_0x2C6CBE6F28447D42(0, 257, 1);
	unk_0x2C6CBE6F28447D42(0, 263, 1);
	unk_0x2C6CBE6F28447D42(0, 264, 1);
	unk_0x2C6CBE6F28447D42(0, 143, 1);
	unk_0x2C6CBE6F28447D42(0, 262, 1);
	unk_0x2C6CBE6F28447D42(0, 261, 1);
	unk_0x2C6CBE6F28447D42(0, 37, 1);
	unk_0x2C6CBE6F28447D42(0, 25, 1);
	unk_0x2C6CBE6F28447D42(0, 26, 1);
}

int func_351(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_17151.f_6 = 1;
	if (unk_0x0AFBA1AD6DC1C540() && !bParam9)
	{
		if (Global_2434604.f_1010)
		{
			func_357(0, bParam9);
		}
		return 0;
	}
	if ((unk_0xFD918707B1B07874() && !bParam9) && !unk_0x57A397BDF5F38342())
	{
		return 0;
	}
	if (!func_356())
	{
		if (func_355(unk_0x0FFED3E94261A832(), 1, 0))
		{
			if (((bParam9 && func_12(unk_0x0FFED3E94261A832(), 1, 0)) && unk_0x0AFBA1AD6DC1C540()) && Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_231 == 1)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2434604.f_1010 && !bParam11)
	{
		Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0) };
		if ((unk_0x3FEF699D13BCC798((Var1.f_0 - Param0.f_0)) < 0.2f && unk_0x3FEF699D13BCC798((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x3FEF699D13BCC798((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - unk_0x6DAB28241B34DEED(unk_0x2A5EB8B0FE590B91()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (unk_0x3FEF699D13BCC798(fVar4) < 1f)
			{
				Global_2434604.f_1010 = 0;
				Global_2434604.f_1011 = 0;
				if (unk_0x57A397BDF5F38342())
				{
					unk_0xEB531A0D22CEB461();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2434604.f_1012 || !Param0.f_1 == Global_2434604.f_1012.f_1) || !Param0.f_2 == Global_2434604.f_1012.f_2) || !fParam3 == Global_2434604.f_1015)
	{
		if (Global_2434604.f_1010 == 1)
		{
			if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2434604.f_1016) < func_354(0))
			{
				return 0;
			}
			unk_0xEB531A0D22CEB461();
			Global_2434604.f_1011 = 1;
		}
		else
		{
			Global_2434604.f_1011 = 0;
		}
		Global_2434604.f_1012 = { Param0 };
		Global_2434604.f_1015 = fParam3;
		Global_2434604.f_1010 = 0;
	}
	if (!Global_2434604.f_1010 && !unk_0x57A397BDF5F38342())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_91829.f_1315[44], 16))
			{
				func_353();
			}
			if (!unk_0x7C16D570B776CD97(unk_0x2A5EB8B0FE590B91(), &(Global_2404996.f_491)))
			{
				Global_2404996.f_491 = 0;
			}
		}
		if (bParam4)
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				uVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
				if (unk_0xE8592B93875DBF28(uVar0))
				{
					Global_2434604.f_1017 = 0;
				}
			}
		}
		if (Global_2434604.f_1017 > -1)
		{
			Global_2434604.f_1016 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1010 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
					{
						uVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
						unk_0x8E979F037EACE55A(uVar0, Param0, 0, 1, 1, 1);
						unk_0x2681BA3707AF6DA7(uVar0, fParam3);
					}
					else
					{
						unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), Param0, 0, 0, 0, 1);
						unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), fParam3);
					}
				}
				else
				{
					unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), Param0, 0, 0, 0, 1);
					unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), fParam3);
				}
				func_357(bParam6, bParam9);
				return 1;
			}
			else
			{
				unk_0xD36F38C63C0345CF();
				unk_0x7981ED41B043B8BE(unk_0x0FFED3E94261A832(), Param0, fParam3, bParam4, iParam10, 0);
			}
			Global_2434604.f_1016 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1010 = 1;
		}
	}
	if (Global_2434604.f_1010)
	{
		Global_17151.f_6 = 1;
		Global_2434604.f_1016 = unk_0x11ABC381A58DD5AB();
		if (Global_2434604.f_1017 > -1)
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				uVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
			}
			if (func_352(&(Global_2434604.f_1017), Param0, fParam3, uVar0))
			{
				func_357(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Global_2434604.f_1012) < 2f)
				{
					if (unk_0x57A397BDF5F38342())
					{
						unk_0xEB531A0D22CEB461();
					}
					func_357(bParam6, bParam9);
					return 1;
				}
			}
			if (!unk_0x57A397BDF5F38342())
			{
				func_357(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_352(var uParam0, struct<3> Param1, float fParam4, var uParam5)
{
	if (unk_0x2137828D03306CAF(Global_2434604.f_1018) && !unk_0xA9A04898798AE9E6(Global_2434604.f_1018, 0))
	{
		unk_0xC620100105DBAFCF(Global_2434604.f_1018);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2434604.f_1018 = uParam5;
			unk_0xC620100105DBAFCF(Global_2434604.f_1018);
			if (unk_0x1979A7D1D0538188(Global_2434604.f_1018))
			{
				if (!unk_0xA9A04898798AE9E6(Global_2434604.f_1018, 0))
				{
					unk_0x2681BA3707AF6DA7(Global_2434604.f_1018, fParam4);
					unk_0x8E979F037EACE55A(Global_2434604.f_1018, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_353()
{
	int iVar0;
	
	iVar0 = unk_0x511EB800EFE78B52();
	if (unk_0x06E94A65666E496C() && Global_2404996.f_2471 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2404996.f_2470)
	{
		if (!unk_0xF250EAC6F54E6FD5())
		{
			Global_2404996.f_2470 = iVar0;
		}
	}
}

int func_354(bool bParam0)
{
	if (unk_0xF4EE9D6C8E60AE22())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_355(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2422215[iParam0 /*387*/].f_231 == 99)
	{
		if ((iParam2 && Global_2422215[iParam0 /*387*/].f_234 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2422215[iParam0 /*387*/].f_231 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_356()
{
	return Global_1312829;
}

void func_357(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
		unk_0x164CA344DBD7B6F3(0f);
	}
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x8591E81E75799D08(unk_0x2A5EB8B0FE590B91());
	}
	if (!bParam1)
	{
		unk_0xD36F38C63C0345CF();
	}
	if (unk_0x57A397BDF5F38342())
	{
		unk_0xEB531A0D22CEB461();
	}
	func_330();
	if (!unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 14))
	{
		func_358();
	}
}

void func_358()
{
	Global_2505234.f_80 = 1;
}

int func_359(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return unk_0x769F0F6444C1ABE0(unk_0xC09E9E2B61AD04E7(uParam0));
	}
	return 1;
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 15))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 15);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 15))
	{
		unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 15);
	}
}

int func_361(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return !func_362(unk_0xECBE9D2902B2B964(uParam0));
	}
	return 0;
}

int func_362(var uParam0)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (unk_0xA9A04898798AE9E6(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x7FAC45D56235AB39(uParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_363(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 8, 0))
		{
			func_60(iParam0, 8, 0);
			func_364(iParam0);
		}
	}
	else if (func_23(iParam0, 8, 0))
	{
		func_58(iParam0, 8, 0);
		func_364(iParam0);
	}
}

void func_364(int iParam0)
{
	Global_91829.f_163[iParam0] = 1;
	Global_91829.f_162 = 1;
}

void func_365(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_91829.f_9[iParam0] = 1;
	}
	else
	{
		Global_91829.f_9[iParam0] = 0;
	}
}

void func_366(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_91829.f_8 = 1;
	}
	else
	{
		Global_91829.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 47)
	{
		func_364(iVar0);
		iVar0++;
	}
}

void func_367(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
			}
		}
	}
}

int func_368()
{
	return Local_567.f_0;
}

int func_369()
{
	return 1;
}

int func_370(int iParam0)
{
	return Local_739[iParam0 /*5*/];
}

int func_371(int iParam0)
{
	return Local_739[iParam0 /*5*/].f_2;
}

int func_372(bool bParam0)
{
	if (func_374())
	{
		if (bParam0)
		{
			if (!Global_1574290 && !func_373(unk_0x0FFED3E94261A832(), 2))
			{
				unk_0x18A0B296F4932A7B("MinigameTransitionIn", 0, 1);
				func_320(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_373(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

bool func_374()
{
	return Global_2434604.f_2;
}

void func_375(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x591AF4C50B46E014())
	{
		if (bLocal_756)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 2))
			{
				if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 31))
				{
					func_30(119, 1, -1, 1);
					func_30(115, 1, -1, 1);
				}
				func_659(1);
				bVar0 = true;
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Local_739[unk_0x88641E5BC172153A() /*5*/].f_3, 1))
		{
			if (!unk_0xAA4F14DA15DB0B51(uLocal_750, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_199(&Local_93, 0, bParam0);
	if (unk_0x591AF4C50B46E014())
	{
		if (Global_2434604.f_3491)
		{
			func_655(0, 1);
		}
	}
	if (unk_0x591AF4C50B46E014())
	{
		func_360(0);
	}
	unk_0x6790C1CEA32DA629(Local_93.f_122, 0);
	unk_0xB887F7201FD411C1(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	unk_0xB887F7201FD411C1(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	unk_0x507FE690B1271947(&(Global_2497344.f_772), 4);
	func_87(0);
	func_56(0);
	func_654();
	func_653(iLocal_92, 0);
	func_180(&(Global_2434604.f_3741));
	Global_2434604.f_3739 = 0;
	Global_2434604.f_3738 = 0;
	Global_2434604.f_3740 = 0;
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 244, 1);
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 243, 1);
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 242, 1);
	}
	if (bVar0)
	{
		func_378(0, 0, 0, 0);
	}
	else
	{
		unk_0x7D53B6FFAEDA810A(1);
		func_378(0, 0, 3, 1);
	}
	unk_0x507FE690B1271947(&(Global_2497344.f_772), 0);
	func_366(0);
	func_365(4, 0);
	func_365(1, 0);
	func_365(0, 0);
	func_365(2, 0);
	func_365(3, 0);
	func_363(iLocal_92, 0);
	func_350();
	func_33();
	if (unk_0xBDD3EABACAB97D09(Global_91829.f_211[iLocal_92]))
	{
		unk_0xD42DEAFD12809447(Global_91829.f_211[iLocal_92], 0);
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_753))
	{
		unk_0x789C84F1B8496AD0(&uLocal_753);
	}
	if (unk_0x591AF4C50B46E014())
	{
		func_377(0);
		func_183(0);
	}
	func_376(Local_567.f_5);
}

void func_376(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Param0.f_0)) >= 1000)
		{
			unk_0xF51D58B8478160F2();
		}
	}
	unk_0xA232817B0B36F2E5();
}

void func_377(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 5);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 5);
	}
}

void func_378(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<6> Var8;
	struct<6> Var14;
	int iVar20;
	char* sVar21;
	struct<2> Var22;
	bool bVar24;
	int iVar25;
	
	iVar0 = unk_0x0FFED3E94261A832();
	iVar1 = Global_1592456[iVar0 /*635*/];
	func_652();
	func_648();
	unk_0x19658B76BC96EAAE(0);
	func_647();
	Global_979577 = 0;
	Global_1573296 = 0;
	func_646();
	unk_0xF7C9A2DB8978D9D1(0);
	func_645();
	Global_786481 = 0;
	Global_786481.f_1 = 0;
	Global_1574121 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	func_644(0);
	Global_1574110 = 0;
	Global_1574109 = 0;
	Global_1574131 = 0;
	Global_1574308 = 0;
	Global_1574314 = 0;
	Global_1573852 = 0;
	Global_1574828 = 1;
	Global_1574281 = 0;
	Global_1574122 = -1;
	func_643();
	func_642(0);
	unk_0x507FE690B1271947(&(Global_2359301.f_1), 5);
	if (!func_641())
	{
		func_640();
	}
	func_639();
	func_638();
	func_637();
	func_636();
	func_635();
	if (unk_0x591AF4C50B46E014())
	{
		func_634();
	}
	if (func_633() || !func_632())
	{
		func_631();
		func_630(1, 1, 1);
		func_629();
		func_628();
		if (iVar0 != -1)
		{
			Global_1621674[iVar0 /*35*/].f_1 = 0;
			Global_1621674[iVar0 /*35*/].f_2 = 0;
			Global_1621674[iVar0 /*35*/] = 0;
		}
	}
	func_627();
	if (Global_1638223 != 6)
	{
		if (func_12(unk_0x0FFED3E94261A832(), 1, 1))
		{
			if (unk_0x766E73D267F62C4B(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0xA7832A6F29DEF417(unk_0x2A5EB8B0FE590B91(), 1);
			}
		}
	}
	Global_1573317 = 0;
	if (Global_1752418.f_9 == 4)
	{
		if (func_626(unk_0x0FFED3E94261A832()) || func_625(unk_0x0FFED3E94261A832()))
		{
			Global_1573317 = 1;
		}
	}
	func_623();
	if (func_622())
	{
		func_621();
	}
	func_620();
	Global_1638223.f_94173 = 0;
	Global_1752378.f_4 = 0;
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_14, 17))
	{
		unk_0x54B330AA6705C763(unk_0x0FFED3E94261A832(), 0);
		unk_0x6E0F73901246F5C8(1);
	}
	else
	{
		unk_0x54B330AA6705C763(unk_0x0FFED3E94261A832(), 1);
		unk_0x6E0F73901246F5C8(0);
	}
	StringCopy(&(Global_1638223.f_93524), "", 32);
	unk_0x891A3238A7E50954();
	unk_0x47BFFB0507046AE3(18);
	if ((bParam3 && !func_619()) && !func_618())
	{
		unk_0x9BF32B79391A5A8E();
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1621211[iVar3] = 0;
		Global_1621178[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_2445989.f_5591), 3);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_2445989.f_5591), 3);
	}
	if (iVar0 != -1 && Global_2445217.f_549.f_10 != 0)
	{
		Global_1621674[unk_0x0FFED3E94261A832() /*35*/].f_2 = Global_2445217.f_549.f_10;
	}
	if (func_374() || (iVar0 != -1 && Global_1592456[iVar0 /*635*/].f_527))
	{
		func_617();
		func_616(1, 1);
		func_630(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1621674[iVar0 /*35*/].f_1 = 0;
			Global_1621674[iVar0 /*35*/].f_2 = 0;
			Global_1621674[iVar0 /*35*/] = 0;
		}
		func_615(1);
		if (func_614())
		{
			func_613();
		}
		if (!func_15(unk_0x0FFED3E94261A832()))
		{
			func_611(4);
		}
		func_629();
		func_610(0);
		func_609();
		Global_1574820 = 0;
	}
	if (!func_608())
	{
		func_607();
		if (func_606())
		{
			if (func_605())
			{
				func_617();
			}
		}
		func_615(1);
		if (!func_604())
		{
			Global_2445989.f_5926 = 0;
			Global_2445989.f_5927 = 0;
			Global_2445989.f_5925 = 0;
			Global_2445989.f_5924 = 0;
			Global_2445989.f_6080 = 0;
		}
	}
	else
	{
		func_603(unk_0x0FFED3E94261A832(), 0);
	}
	func_602((Global_1752418.f_9 != 4 && !func_608()));
	if (func_604())
	{
		Global_2445989.f_6016 = 1;
	}
	else
	{
		Global_2445989.f_6016 = 0;
	}
	if (!func_641())
	{
		Global_1752443.f_1569 = 0;
	}
	if (!func_608() && !func_641())
	{
		func_616(1, Global_1752418.f_9 != 4);
		func_630(1, 1, 0);
		func_601(0);
		func_600();
		Global_1574822 = 0;
		if (iVar0 != -1)
		{
			Global_1621674[iVar0 /*35*/].f_1 = 0;
			Global_1621674[iVar0 /*35*/].f_2 = 0;
			Global_1621674[iVar0 /*35*/] = 0;
		}
	}
	func_597(1, -1);
	if (func_596())
	{
		func_595();
	}
	if (unk_0x1B154DE2D4606530())
	{
		unk_0x4E959B5E24F28CFE();
	}
	if ((!func_619() && !func_608()) && !func_618())
	{
		func_591();
	}
	Global_1638223.f_94169 = 0;
	func_590();
	Global_1574103 = -1;
	Global_1621255 = -1;
	Global_1621249 = -1;
	Global_1621251 = -1;
	Global_1574108 = 0;
	Global_1621250 = 0;
	Global_1574292 = 0;
	Global_1574284 = 0;
	Global_1621256 = 0;
	func_589(0);
	func_588();
	Global_1592456[iVar0 /*635*/].f_527 = 0;
	Global_1621247 = 0f;
	Global_1621248 = 0f;
	Global_1574293 = 0;
	Global_1574294 = -1;
	func_587(0);
	Global_1574282 = 0;
	Global_1573853 = 0;
	func_586();
	unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
	unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
	func_585(1);
	if (func_584())
	{
		func_583();
	}
	if (func_582())
	{
		if (func_580(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xE66A798F07C5EFC7() < 2)
			{
				func_579();
				func_578(1);
			}
			else
			{
				func_577();
			}
			if (Global_1752418.f_9 != -1)
			{
				func_576();
			}
		}
		else if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 0)
		{
			if (Global_1752418.f_9 != -1)
			{
				func_576();
			}
		}
	}
	bVar4 = func_16(iVar0);
	Global_1592456[iVar0 /*635*/].f_191 = 0;
	if (bVar4 && !func_641())
	{
		func_575();
	}
	if (!bVar4)
	{
		func_574(0);
	}
	if ((func_573() != 36 && func_573() != 35) && !func_572())
	{
		Global_1573271 = { 0f, 0f, 0f };
	}
	func_571();
	func_570();
	func_578(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1752418.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_569())
		{
			func_568(0, iVar6);
		}
	}
	unk_0x026F57F86EADE4A5(0);
	if (unk_0x591AF4C50B46E014())
	{
		switch (Global_1752418.f_9)
		{
			case 1:
				if (!func_567() && func_564(0) > 0)
				{
					Global_1770656[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					func_562();
					func_561();
				}
				break;
			
			case 6:
				Global_1574820 = 0;
				if (!bVar4)
				{
					func_562();
				}
				func_561();
				Global_1752418 = 0;
				Global_1752418.f_22 = { 0f, 0f, 0f };
				Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_12 = 0;
				StringCopy(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_225), "", 24);
				Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_222 = { 0f, 0f, 0f };
				break;
			
			case 2:
				func_560(0);
				if (!func_559() || (func_559() && unk_0x58478145CAF8429C(&(Global_2445217.f_20))))
				{
					func_558(Global_1752418.f_16);
					func_557(Global_1752418.f_16);
				}
				iVar5 = Global_1592456[iVar0 /*635*/].f_11;
				if (iVar5 != func_125())
				{
					if (unk_0x885F483F34E47503(iVar5))
					{
						Global_2445989.f_5592 = { func_73(iVar5) };
					}
					else
					{
						iVar7 = 1;
					}
				}
				else
				{
					iVar7 = 1;
				}
				if ((iVar7 && func_559()) && unk_0xD7577082A8533202() == 1)
				{
					Global_2445989.f_5592 = { func_556() };
				}
				if (((((Global_1638223.f_32 > 1 && !func_549()) && !func_548(Global_1638223.f_93532)) && !func_547(Global_1638223.f_93532)) && Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_97.f_28 > -1) && Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_97.f_28 < 4)
				{
					func_546(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_97.f_28);
				}
				else
				{
					func_545();
				}
				break;
			
			case 3:
				func_560(0);
				iVar2 = 1;
				func_544();
				iVar5 = Global_1592456[iVar0 /*635*/].f_11;
				if (iVar5 != func_125())
				{
					if (unk_0x885F483F34E47503(iVar5))
					{
						Global_2445989.f_5592 = { func_73(iVar5) };
					}
				}
				if (((Global_1638223.f_32 > 1 && !func_549()) && !func_548(Global_1638223.f_93532)) && !func_547(Global_1638223.f_93532))
				{
					func_546(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_97.f_28);
				}
				else
				{
					func_545();
				}
				break;
			
			case 4:
				func_560(0);
				iVar2 = 1;
				if (func_543())
				{
					func_542();
				}
				else if (func_541())
				{
				}
				else
				{
					Global_2445989.f_5926 = 0;
					Global_2445989.f_5927 = 0;
					Global_2445989.f_5925 = 0;
					Global_2445989.f_5924 = 0;
				}
				if (func_626(unk_0x0FFED3E94261A832()) || func_625(unk_0x0FFED3E94261A832()))
				{
					Global_786435.f_34++;
				}
				if (!unk_0xAA4F14DA15DB0B51(Global_1638223.f_12, 22))
				{
					if (!unk_0xAA4F14DA15DB0B51(Global_1638223.f_12, 15))
					{
						func_540(Global_1638223.f_94145);
					}
					else
					{
						func_539(Global_1638223.f_109717, Global_1638223.f_109718);
					}
					if (Global_1752418.f_13 > -1)
					{
						unk_0xF1BE816931996931(Global_1752418.f_13, Global_1752418.f_14, 0);
					}
					else if (func_538() > -1)
					{
						func_536(func_538(), 0);
					}
				}
				if (func_535())
				{
					Var8 = { func_534() };
					func_533(Var8);
					if (func_532() != -1)
					{
						Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_97.f_28 = func_532();
					}
					func_531();
					func_530();
				}
				else
				{
					func_544();
				}
				if (!func_236(unk_0x0FFED3E94261A832(), 0))
				{
					unk_0xD6BA33D17760B749(0);
					func_527(0, 0, 1);
				}
				break;
			
			case 5:
				func_560(0);
				iVar2 = 1;
				func_544();
				break;
			
			case 8:
				if (!func_559())
				{
					func_558(Global_1752418.f_16);
				}
				break;
			
			case 9:
				func_560(0);
				iVar2 = 1;
				func_544();
				func_557(Global_1638223.f_93819);
				Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_225 = { Global_1638223.f_93819 };
				if (func_526())
				{
					func_525();
				}
				if (!func_236(unk_0x0FFED3E94261A832(), 0))
				{
					unk_0xD6BA33D17760B749(0);
					func_527(0, 0, 1);
				}
				break;
			
			case 10:
				func_508(10, 0f, 0f, 0f, Var14);
				func_507();
				break;
		}
	}
	else
	{
		Global_1574820 = 0;
	}
	if (iVar2 || func_625(unk_0x0FFED3E94261A832()))
	{
		if ((func_506(unk_0x0FFED3E94261A832()) || func_626(unk_0x0FFED3E94261A832())) || func_625(unk_0x0FFED3E94261A832()))
		{
			if (Global_1761534 > 0)
			{
				Global_2445989.f_1.f_2825.f_13 = Global_1761534;
				Global_2445989.f_1.f_2825 = { Global_1761534.f_1 };
			}
		}
		else
		{
			func_505();
		}
	}
	Global_2445989.f_1.f_842 = 0;
	unk_0x507FE690B1271947(&Global_1573857, 0);
	func_504(0);
	Global_1574113 = 0;
	Global_1574277 = -1;
	Global_1621177 = 0;
	Global_1312436 = 0;
	Global_1752418.f_1 = 0;
	Global_1752418.f_2 = 0;
	if (func_503() == 0)
	{
		if (Global_1752418.f_9 == -1 && bVar4 == 0)
		{
			func_495(0);
		}
		else
		{
			Global_1752418.f_9 = -1;
		}
	}
	func_494();
	if (func_493())
	{
		func_492();
	}
	if (func_491())
	{
		func_490();
	}
	if (!unk_0x1B154DE2D4606530())
	{
		unk_0xCA165B76DEE8DBC9(1);
	}
	if (func_503() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!func_489(Global_1592456[iVar0 /*635*/]) && !func_619()) && !bVar4) && !func_356()) && !func_608()) && !func_618())
			{
				func_488(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_487();
	Global_1752418.f_1 = 0;
	if (!func_582())
	{
		func_486();
	}
	if (Global_1592456[iVar0 /*635*/] != -1)
	{
		iParam2 = iParam2;
		if (func_485(Global_1592456[iVar0 /*635*/]))
		{
			if (unk_0x822F3797A8B64786())
			{
				iVar20 = func_468(0);
				func_465(1208, -1);
				func_460(joaat("mpply_mgame_cheat_end"), iVar20);
				if (iVar20 > 0)
				{
					func_460(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (unk_0x591AF4C50B46E014())
	{
		unk_0x6FB67148B7D443F0(unk_0x0FFED3E94261A832());
	}
	func_458();
	if (Global_1752418 == 0)
	{
		if (!bVar4)
		{
			Global_1592456[iVar0 /*635*/].f_11 = -1;
			Global_1592456[iVar0 /*635*/].f_12 = 0;
		}
	}
	if (bVar4)
	{
		func_488(0);
		Global_1592456[iVar0 /*635*/].f_12 = 1;
		Global_1592456[iVar0 /*635*/].f_11 = func_457(unk_0x0FFED3E94261A832());
		unk_0xD6BA33D17760B749(0);
		func_527(0, 0, 1);
		if (func_456())
		{
			func_454();
		}
	}
	if ((Global_1592456[iVar0 /*635*/] < 10 && Global_1592456[iVar0 /*635*/] != -1) && !func_356())
	{
		if ((!unk_0x58478145CAF8429C(&(Global_1592456[iVar0 /*635*/].f_145)) && Global_1592456[iVar0 /*635*/] != 5) && Global_1592456[iVar0 /*635*/] != 148)
		{
			func_451(&(Global_1592456[iVar0 /*635*/].f_145));
		}
	}
	if (Global_1592456[iVar0 /*635*/] != 6)
	{
		Global_1752365 = 1;
	}
	Global_1592456[iVar0 /*635*/] = -1;
	Global_1592456[iVar0 /*635*/].f_39.f_2 = -1;
	Global_1592456[iVar0 /*635*/].f_39.f_16 = -1;
	Global_1592456[iVar0 /*635*/].f_39.f_1 = -1;
	Global_1638223 = 0;
	if (!bVar4)
	{
		func_450(0);
	}
	Global_1592456[iVar0 /*635*/].f_39.f_18 = 0;
	unk_0x507FE690B1271947(&(Global_1592456[unk_0x87B7000A6C80CCEF() /*635*/].f_525), 0);
	unk_0x4D55679802D8856F(0, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		unk_0x2200CE3F471C6FE7();
		Global_2455879 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1592456[iVar0 /*635*/].f_145), sVar21, 24);
		StringCopy(&(Global_1592456[iVar0 /*635*/].f_151), sVar21, 24);
		func_449();
	}
	StringCopy(&(Global_1612777[iVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1592456[iVar0 /*635*/].f_165), sVar21, 64);
	Global_1621674[iVar0 /*35*/].f_30 = { Var22 };
	Global_1574287 = 0;
	Global_1574288 = 0;
	Global_1573865 = -1;
	bVar24 = false;
	func_448();
	func_447();
	func_446();
	if (func_445())
	{
		func_444();
	}
	if (func_443() && unk_0x1B154DE2D4606530())
	{
		func_442();
		func_328(unk_0x0FFED3E94261A832(), 0, 57348);
	}
	if (func_441())
	{
		func_440();
	}
	else if (func_439())
	{
		func_440();
	}
	else if (func_438())
	{
		func_440();
	}
	else if (func_437())
	{
		func_440();
	}
	else if (func_436())
	{
		func_440();
	}
	else if (func_503())
	{
		func_440();
	}
	else if (func_435() && func_434())
	{
		func_440();
	}
	else if (func_433())
	{
		func_440();
	}
	else
	{
		func_432();
		if (!Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_12 && !func_641())
		{
			if (unk_0x1B154DE2D4606530())
			{
				if (func_456())
				{
					func_431();
				}
				else
				{
					if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
					{
						Global_2445989.f_2843.f_197 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0) };
					}
					func_430();
					func_629();
					func_429(6);
					func_561();
					if (bVar4)
					{
						func_610(0);
					}
				}
				func_428();
				func_427();
				func_426();
				if (Global_2445989.f_2843.f_4 == 2)
				{
					Global_2445989.f_2843.f_4 = 1;
				}
				if (func_236(unk_0x0FFED3E94261A832(), 0))
				{
					func_425();
				}
				func_424();
				Global_2445989.f_2843 = 0;
			}
			else
			{
				func_423();
				func_440();
			}
		}
		else
		{
			if (!func_604() && !func_641())
			{
			}
			func_423();
			func_440();
		}
	}
	if ((((((((((!func_441() && !func_422()) && !func_434()) && !func_435()) && !func_438()) && !func_439()) && !func_421()) && !func_436()) && !func_503()) && !func_437()) && !func_420())
	{
		if (!func_419())
		{
			func_418();
			func_416();
			func_415();
			func_413(1);
		}
	}
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0x1CF28DE85743D98B())
		{
			if (!unk_0x29A198A43483252D())
			{
				if (!func_412())
				{
					if (!bVar24)
					{
						if (func_15(unk_0x0FFED3E94261A832()))
						{
							unk_0x0980E327080BAD57();
							unk_0xC58C9DE0181B58E7();
						}
					}
				}
			}
		}
	}
	if (!func_356())
	{
		StringCopy(&(Global_1638223.f_93539), "", 64);
	}
	if (func_411(116, &iVar25))
	{
		func_410(iVar25);
	}
	if (func_411(123, &iVar25))
	{
		func_410(iVar25);
	}
	if (!func_641())
	{
		func_402();
	}
	func_401();
	if (!func_608() && !func_604())
	{
		func_400();
	}
	func_379(bParam3);
}

void func_379(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_582())
		{
		}
		else if ((((!func_608() && !func_604()) && !func_641()) && Global_1752418.f_9 != 9) && Global_1752418.f_9 != 4)
		{
			func_536(0, 1);
		}
	}
	unk_0xF185F03C5796A4F6();
	if (!func_399(unk_0x0FFED3E94261A832()) && !Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_544)
	{
		func_398();
	}
	func_397(1);
	if ((((bParam0 && !func_396()) && !func_608()) && !Global_262145.f_4887) && !func_394())
	{
		unk_0x87895C4689500F17();
	}
	unk_0xBAD89C59C9871295(5, 1);
	unk_0xBAD89C59C9871295(3, 1);
	func_386(&uVar0, -1);
	if ((func_28() == 0 && !func_109()) && !func_608())
	{
		if (func_385())
		{
			func_384();
		}
		else
		{
			func_381(28, 0);
		}
	}
	func_380(0);
}

void func_380(int iParam0)
{
	if (!Global_1761078 == iParam0)
	{
		Global_1761078 = iParam0;
	}
}

void func_381(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_383(iParam0, iParam1))
	{
		iVar0 = func_382();
		Global_2454613[iVar0] = iParam0;
	}
}

int func_382()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2454613[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_383(int iParam0, var uParam1)
{
	if (Global_1312840)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312852) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_384()
{
	unk_0xF6082E2ADA1C795B(&(Global_970998.f_8), 22);
}

bool func_385()
{
	return unk_0xAA4F14DA15DB0B51(Global_970998.f_8, 21);
}

void func_386(var uParam0, int iParam1)
{
	func_392(uParam0, iParam1);
	func_387(iParam1);
}

void func_387(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	uVar0 = func_391(iParam0);
	uVar1 = unk_0x29B06605BA5CF280(uVar0);
	if (func_388())
	{
		if (unk_0xAA4F14DA15DB0B51(uVar1, 1))
		{
			func_30(133, 1, -1, 1);
		}
	}
}

int func_388()
{
	if (func_390() && func_389(0))
	{
		return 1;
	}
	return 0;
}

var func_389(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_390()
{
	return func_389(func_26() + 1);
}

int func_391(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_392(var uParam0, int iParam1)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	uVar1 = func_393(iParam1);
	uVar2 = unk_0x29B06605BA5CF280(uVar1);
	if (unk_0xAA4F14DA15DB0B51(uVar2, 1))
	{
		func_465(1203, iParam1);
		func_460(joaat("mpply_dm_cheat_start"), 2);
		func_460(joaat("mpply_activity_started"), 1);
		unk_0x507FE690B1271947(&uVar2, 1);
		bVar0 = true;
	}
	if (unk_0xAA4F14DA15DB0B51(uVar2, 2))
	{
		func_465(1205, iParam1);
		func_460(joaat("mpply_race_cheat_start"), 2);
		func_460(joaat("mpply_activity_started"), 1);
		unk_0x507FE690B1271947(&uVar2, 2);
		bVar0 = true;
	}
	if (unk_0xAA4F14DA15DB0B51(uVar2, 3))
	{
		func_465(1114, iParam1);
		func_460(joaat("mpply_mc_cheat_start"), 2);
		func_460(joaat("mpply_activity_started"), 1);
		unk_0x507FE690B1271947(&uVar2, 3);
		bVar0 = true;
	}
	if (unk_0xAA4F14DA15DB0B51(uVar2, 4))
	{
		func_465(1207, iParam1);
		func_460(joaat("mpply_mgame_cheat_start"), 2);
		func_460(joaat("mpply_activity_started"), 1);
		unk_0x507FE690B1271947(&uVar2, 4);
		bVar0 = true;
	}
	if (unk_0xAA4F14DA15DB0B51(uVar2, 5))
	{
		func_465(1918, iParam1);
		func_460(joaat("mpply_cap_cheat_start"), 2);
		func_460(joaat("mpply_activity_started"), 1);
		unk_0x507FE690B1271947(&uVar2, 5);
		bVar0 = true;
	}
	if (unk_0xAA4F14DA15DB0B51(uVar2, 6))
	{
		func_465(1920, iParam1);
		func_460(joaat("mpply_sur_cheat_start"), 2);
		func_460(joaat("mpply_activity_started"), 1);
		unk_0x507FE690B1271947(&uVar2, 6);
		bVar0 = true;
	}
	if (unk_0xAA4F14DA15DB0B51(uVar2, 7))
	{
		func_465(1922, iParam1);
		func_460(joaat("mpply_lts_cheat_start"), 2);
		func_460(joaat("mpply_activity_started"), 1);
		unk_0x507FE690B1271947(&uVar2, 7);
		bVar0 = true;
	}
	if (unk_0xAA4F14DA15DB0B51(uVar2, 8))
	{
		func_465(1924, iParam1);
		func_460(joaat("mpply_para_cheat_start"), 2);
		func_460(joaat("mpply_activity_started"), 1);
		unk_0x507FE690B1271947(&uVar2, 8);
		bVar0 = true;
	}
	if (unk_0xAA4F14DA15DB0B51(uVar2, 9))
	{
		func_465(5794, iParam1);
		func_460(joaat("mpply_heist_cheat_start"), 2);
		func_460(joaat("mpply_activity_started"), 1);
		unk_0x507FE690B1271947(&uVar2, 9);
		bVar0 = true;
	}
	if (unk_0xAA4F14DA15DB0B51(uVar2, 26))
	{
		func_465(1926, iParam1);
		func_460(joaat("mpply_fmevn_cheat_start"), 2);
		func_460(joaat("mpply_activity_started"), 1);
		unk_0x507FE690B1271947(&uVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		unk_0xB8D595DDD2159686(uVar2, iParam1);
	}
}

int func_393(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_394()
{
	if (func_626(unk_0x0FFED3E94261A832()) || func_625(unk_0x0FFED3E94261A832()))
	{
		if (func_395() || func_604())
		{
			return 1;
		}
	}
	return 0;
}

bool func_395()
{
	return unk_0xAA4F14DA15DB0B51(Global_1312758, 4);
}

bool func_396()
{
	return Global_1574290;
}

void func_397(int iParam0)
{
	Global_2445989.f_5923 = iParam0;
}

void func_398()
{
	unk_0xE0125DCD8DB3EFC3(6);
	unk_0xFBC4596E19752537(1f);
	unk_0xFA96CEABD6118DCF(1);
}

int func_399(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/] != -1;
	}
	return 0;
}

void func_400()
{
	Global_2445217.f_30.f_39 = 0;
}

void func_401()
{
	Global_1752418.f_6 = 0;
}

void func_402()
{
	struct<3> Var0;
	struct<2> Var3;
	int iVar5;
	
	if (!func_408(func_409(), Var0))
	{
		Var3.f_0 = -854426711;
		Var3.f_1 = unk_0x0FFED3E94261A832();
		iVar5 = func_407(1, 1);
		if (!iVar5 == 0)
		{
			func_404();
			func_403(0);
			unk_0xA40CC53DF8E50837(1, &Var3, 2, iVar5);
		}
	}
}

void func_403(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2434604.f_3486 = unk_0x11ABC381A58DD5AB();
	}
	Global_2434604.f_3370 = iParam0;
}

void func_404()
{
	func_406();
	func_405();
}

void func_405()
{
	struct<72> Var0;
	
	if (func_55(unk_0x0FFED3E94261A832()))
	{
		Var0.f_6 = 32;
		Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131 = { Var0 };
	}
}

void func_406()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2434604.f_3370.f_79 };
	Var0.f_95 = { Global_2434604.f_3370.f_95 };
	Global_2434604.f_3370 = { Var0 };
}

var func_407(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
				else if (!func_236(iVar2, 0))
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_408(struct<3> Param0, struct<3> Param3)
{
	if ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_409()
{
	return Global_2421463[unk_0x0FFED3E94261A832() /*10*/];
}

void func_410(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2479354[iParam0 /*5*/].f_1 == -1 || Global_2479354[iParam0 /*5*/].f_2 == -1) || Global_2479354[iParam0 /*5*/].f_3 == -1) || Global_2479354[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	unk_0xE88A8BC8FBA0E866(Global_2479354[iParam0 /*5*/], Global_2479354[iParam0 /*5*/].f_1, Global_2479354[iParam0 /*5*/].f_2, Global_2479354[iParam0 /*5*/].f_3, Global_2479354[iParam0 /*5*/].f_4);
	Global_2479354[iParam0 /*5*/] = -1;
	Global_2479354[iParam0 /*5*/].f_1 = -1;
	Global_2479354[iParam0 /*5*/].f_2 = -1;
	Global_2479354[iParam0 /*5*/].f_3 = -1;
	Global_2479354[iParam0 /*5*/].f_4 = -1;
}

int func_411(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2479354[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_412()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 18);
}

void func_413(bool bParam0)
{
	struct<57> Var0;
	int iVar57;
	
	Global_2445989.f_1.f_2798 = 0;
	Global_2445989.f_1.f_2799 = 0;
	Global_2445989.f_1.f_2821 = 0;
	Global_2445989.f_1.f_2805 = 0;
	Global_2445989.f_1.f_2806 = 0;
	Global_2445989.f_1.f_2809 = 0;
	Global_2445989.f_1.f_2810 = 0;
	Global_2445989.f_1.f_2808 = -1;
	Global_2445989.f_1.f_2811 = -1;
	Global_2445989.f_1.f_2813 = 0;
	Global_2445989.f_1.f_2814 = 0;
	Global_2445989.f_1.f_2815 = 0;
	Global_2445989.f_1.f_2816 = 0;
	Global_2445989.f_1.f_2817 = 0;
	Global_2445989.f_1.f_2818 = 0;
	Global_2445989.f_1.f_2822 = -1;
	if (bParam0)
	{
		Global_2445989.f_1.f_2819 = -1;
		Global_2445989.f_1.f_2820 = -1;
	}
	Global_2445989.f_1.f_2841 = 0;
	func_414();
	Var0.f_33 = 2;
	Var0.f_36 = 7;
	iVar57 = 0;
	while (iVar57 <= 31)
	{
		Global_2445989.f_1.f_845[iVar57 /*57*/] = { Var0 };
		iVar57++;
	}
	Global_2442156.f_32 = -1;
}

void func_414()
{
	Global_2442156.f_31 = 0;
}

void func_415()
{
	Global_2445217.f_571 = 0;
}

void func_416()
{
	Global_2445217.f_572 = 0;
	func_417();
}

void func_417()
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	if (iVar0 >= 0)
	{
		unk_0x507FE690B1271947(&(Global_1592456[iVar0 /*635*/].f_97.f_32), 6);
	}
}

void func_418()
{
	Global_2445217 = 0;
	Global_2445217.f_2 = 0;
	Global_2445217.f_3 = 0;
}

bool func_419()
{
	return Global_2445217.f_571;
}

bool func_420()
{
	return Global_1761525;
}

bool func_421()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 1);
}

bool func_422()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 16);
}

void func_423()
{
	unk_0x507FE690B1271947(&Global_2445217, 21);
}

void func_424()
{
	Global_2445989.f_2843.f_34 = 1;
}

void func_425()
{
	Global_2445989.f_1.f_2824 = 1;
}

void func_426()
{
	Global_2445217.f_705 = 1;
}

void func_427()
{
	Global_2445989.f_1.f_2823 = 1;
}

void func_428()
{
	unk_0xF6082E2ADA1C795B(&Global_2445217, 21);
}

void func_429(int iParam0)
{
	Global_2445989.f_1.f_837 = iParam0;
	Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_221 = iParam0;
}

void func_430()
{
	struct<36> Var0;
	
	Var0 = 30;
	Var0.f_32 = -1;
	Global_2442192 = { Var0 };
}

void func_431()
{
	Global_2445989.f_2843.f_1 = 1;
}

void func_432()
{
	Global_2445989.f_2843.f_1 = 0;
}

bool func_433()
{
	return Global_2445217.f_596;
}

bool func_434()
{
	return Global_2445217.f_586;
}

bool func_435()
{
	return Global_2445217.f_573;
}

bool func_436()
{
	return Global_2445217.f_582;
}

bool func_437()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 15);
}

bool func_438()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 20);
}

bool func_439()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 2);
}

void func_440()
{
	Global_2445989.f_2843.f_34 = 0;
}

bool func_441()
{
	return unk_0xAA4F14DA15DB0B51(Global_970998.f_8, 8);
}

void func_442()
{
	Global_2445217.f_601 = 0;
}

var func_443()
{
	return Global_2445217.f_601;
}

void func_444()
{
	Global_2445217.f_631 = 0;
}

bool func_445()
{
	return Global_2445217.f_631;
}

void func_446()
{
	Global_2445989.f_1.f_838 = 0;
	Global_2445989.f_1.f_839 = 0;
	Global_2445989.f_1.f_841 = 0;
}

void func_447()
{
	unk_0x507FE690B1271947(&Global_2445217, 4);
}

void func_448()
{
	unk_0x507FE690B1271947(&Global_2445217, 28);
}

void func_449()
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	unk_0x507FE690B1271947(&(Global_1592456[iVar0 /*635*/].f_13.f_1), 4);
	unk_0x507FE690B1271947(&(Global_1592456[iVar0 /*635*/].f_13.f_1), 5);
	unk_0x507FE690B1271947(&(Global_1592456[iVar0 /*635*/].f_13.f_1), 7);
	unk_0x507FE690B1271947(&(Global_1592456[iVar0 /*635*/].f_13.f_1), 8);
	unk_0x507FE690B1271947(&(Global_1592456[iVar0 /*635*/].f_13.f_1), 9);
	unk_0x507FE690B1271947(&(Global_1592456[iVar0 /*635*/].f_13.f_1), 10);
	unk_0x507FE690B1271947(&(Global_1592456[iVar0 /*635*/].f_13.f_1), 11);
	unk_0x507FE690B1271947(&(Global_1592456[iVar0 /*635*/].f_13.f_1), 12);
	unk_0x507FE690B1271947(&(Global_1592456[iVar0 /*635*/].f_13.f_1), 13);
}

void func_450(int iParam0)
{
	unk_0xD6BA33D17760B749(iParam0);
}

void func_451(var uParam0)
{
	var uVar0;
	
	if ((!func_453() && func_452(120, -1)) && !func_356())
	{
		unk_0xACBC583A6A251BE0(uParam0, &uVar0, 13);
		if (unk_0x6A68E91B1AC64FBD(&uVar0, 13))
		{
			if (unk_0xC869A9FE1FE47589(&uVar0))
			{
			}
		}
	}
}

int func_452(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2526994[iParam0 /*3*/][func_25(iParam1)];
	if (unk_0x17DA8BAE529C4AC7(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_453()
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	if ((Global_1592456[iVar0 /*635*/].f_39.f_2 == 63 || Global_1592456[iVar0 /*635*/].f_39.f_2 == 62) || Global_1592456[iVar0 /*635*/].f_39.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_454()
{
	unk_0xF6082E2ADA1C795B(&(Global_970998.f_8), 8);
	func_455();
}

void func_455()
{
	Global_2445217.f_759 = 1;
}

bool func_456()
{
	return Global_2445989.f_2843.f_2;
}

var func_457(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_97.f_2;
}

void func_458()
{
	if (func_459())
	{
		unk_0x7D53B6FFAEDA810A(1);
	}
}

bool func_459()
{
	return func_179("FM_RETRY_INV");
}

void func_460(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_464(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_463(iParam0))
	{
		func_462(iParam0, iVar0);
	}
	else
	{
		func_461(iParam0, iVar0);
	}
}

void func_461(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1361882 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1361885 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1361886 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1361887 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1361888 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1361889 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1361890 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1361891 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1361892 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1361893 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1361894 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1361895 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1361896 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1361897 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1361898 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_462(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, 1);
	}
}

int func_463(int iParam0)
{
	if (Global_1361881)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_464(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_465(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam1), 0);
	iVar0++;
	if (!func_467(iParam0))
	{
		func_59(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_466(iParam0, iVar0, iParam1, 1);
	}
}

void func_466(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_25(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_25(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_25(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_25(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_25(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_25(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_25(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_25(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_25(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_25(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_25(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_25(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_25(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_25(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_25(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_25(iParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_25(iParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_25(iParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_25(iParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_25(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_25(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_25(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_25(iParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_25(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_25(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_25(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_25(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_25(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_25(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_25(iParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_25(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_467(int iParam0)
{
	if (Global_1361881)
	{
		switch (iParam0)
		{
			case 783:
			case 784:
			case 785:
			case 786:
			case 773:
			case 774:
			case 775:
			case 776:
			case 763:
			case 764:
			case 765:
			case 766:
			case 753:
			case 754:
			case 755:
			case 756:
			case 1299:
			case 635:
			case 1274:
			case 760:
			case 761:
			case 762:
			case 1232:
			case 1871:
			case 2262:
			case 2914:
			case 3043:
			case 6173:
			case 3038:
			case 3039:
			case 3040:
			case 3041:
			case 3042:
			case 3217:
			case 3219:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3212:
			case 3206:
			case 3648:
			case 3649:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3674:
			case 3215:
			case 3214:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
			case 4004:
			case 4003:
				return 1;
				break;
			}
	}
	return 0;
}

int func_468(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2455759 == 0)
	{
		return 0;
	}
	if (func_484())
	{
		if (unk_0x1B154DE2D4606530() || (func_483() || func_479()))
		{
			Global_2454713 = 1;
		}
	}
	Global_2455759 = 0;
	if (Global_1315678)
	{
		iVar0 = 1;
	}
	if (Global_2454713)
	{
		iVar0 = 1;
	}
	if (Global_2454712)
	{
		iVar0 = 1;
	}
	if (func_478(Global_102264.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2454637)
	{
		iVar0 = 1;
	}
	if (func_477(512))
	{
		iVar0 = 1;
	}
	if (func_476(128))
	{
		iVar0 = 1;
	}
	if (Global_1315702 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_356())
	{
		iVar0 = 0;
	}
	if (Global_2455198)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_474())
		{
			if (Global_1638223.f_94171 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_236(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = 0;
	}
	if (func_473())
	{
		iVar0 = 0;
	}
	if ((Global_2454713 || Global_2454712) || Global_1315678)
	{
		if (func_479())
		{
			iVar0 = 0;
		}
	}
	Global_2455198 = 0;
	Global_2454712 = 0;
	Global_2454713 = 0;
	Global_1315678 = 0;
	Global_2454637 = 0;
	func_471(&(Global_102264.f_1), 32);
	func_470(512);
	func_469(128);
	return iVar0;
}

void func_469(int iParam0)
{
	Global_102321 = (Global_102321 - (Global_102321 && iParam0));
}

void func_470(int iParam0)
{
	Global_102322 = (Global_102322 - (Global_102322 && iParam0));
}

void func_471(var uParam0, int iParam1)
{
	func_472(uParam0, iParam1);
}

void func_472(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_473()
{
	if (((Global_1574312 || Global_1574283) || func_236(unk_0x0FFED3E94261A832(), 0)) || func_235())
	{
		return 1;
	}
	return 0;
}

int func_474()
{
	switch (func_475())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_475()
{
	return Global_2445989.f_1.f_2819;
}

bool func_476(int iParam0)
{
	return (Global_102321 && iParam0) != 0;
}

bool func_477(int iParam0)
{
	return (Global_102322 && iParam0) != 0;
}

bool func_478(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_479()
{
	if (func_482(Global_2456868))
	{
		return 0;
	}
	if (func_480(unk_0x0FFED3E94261A832(), 146))
	{
		return 1;
	}
	return 0;
}

int func_480(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/] == iParam1)
	{
		return func_481(iParam0);
	}
	return 0;
}

int func_481(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

int func_482(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_10048)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_10050)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_10047)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_10051)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_10052)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_10053)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_10049)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_10054)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_10055)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_10056)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_10057)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_483()
{
	if (func_482(Global_2456868))
	{
		return 0;
	}
	if (func_481(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

bool func_484()
{
	return unk_0xAA4F14DA15DB0B51(Global_1312423, 0);
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_486()
{
	if (unk_0x30BD96CB13063EC9(unk_0x96CB654BBCDD4063(unk_0x0FFED3E94261A832()), "MissionType"))
	{
		unk_0x8B66D3A6E5B29A1A(unk_0x96CB654BBCDD4063(unk_0x0FFED3E94261A832()), "MissionType");
	}
	if (unk_0x30BD96CB13063EC9(unk_0x96CB654BBCDD4063(unk_0x0FFED3E94261A832()), "MatchId"))
	{
		unk_0x8B66D3A6E5B29A1A(unk_0x96CB654BBCDD4063(unk_0x0FFED3E94261A832()), "MatchId");
	}
	if (unk_0x30BD96CB13063EC9(unk_0x96CB654BBCDD4063(unk_0x0FFED3E94261A832()), "TeamId"))
	{
		unk_0x8B66D3A6E5B29A1A(unk_0x96CB654BBCDD4063(unk_0x0FFED3E94261A832()), "TeamId");
	}
}

void func_487()
{
	Global_2445217.f_577 = 0;
	unk_0x49B44914D4943050();
}

void func_488(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_35)
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_35 = 1;
		}
	}
	else if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_35)
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_35 = 0;
	}
}

int func_489(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_490()
{
	Global_2445217.f_719 = 0;
}

bool func_491()
{
	return Global_2445217.f_719;
}

void func_492()
{
	Global_2445217.f_723 = 0;
}

bool func_493()
{
	return Global_2445217.f_723;
}

void func_494()
{
	unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_97.f_32), 1);
}

int func_495(int iParam0)
{
	int iVar0;
	
	if (func_235())
	{
		return 1;
	}
	if (func_500())
	{
		return 1;
	}
	if (unk_0x58478145CAF8429C(&(Global_1638223.f_93819)))
	{
		return 1;
	}
	if (func_499())
	{
		return 1;
	}
	func_498();
	unk_0x65D6AE0CFD23929A();
	iVar0 = unk_0xBEA29F6CAC4ECD19();
	if (iParam0 == 0)
	{
		Global_1752378++;
		unk_0x7402BDBF0A111B86(iVar0, "quit", Global_1752378);
		unk_0x7402BDBF0A111B86(iVar0, "quitd", 1);
		unk_0x7402BDBF0A111B86(iVar0, "ply", Global_1752378.f_2);
		unk_0x7402BDBF0A111B86(iVar0, "lp", unk_0xDA84A1E29323722E());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1752403.f_1++;
		unk_0x7402BDBF0A111B86(iVar0, "quit", Global_1752403.f_1);
		unk_0x7402BDBF0A111B86(iVar0, "quitd", 1);
		unk_0x7402BDBF0A111B86(iVar0, "ply", Global_1752403.f_4);
		unk_0x7402BDBF0A111B86(iVar0, "lp", unk_0xDA84A1E29323722E());
	}
	if (iParam0 == 0)
	{
		if (unk_0x5FA9D35DEE1C9D77(&(Global_1638223.f_93819), 0f, func_497(iParam0)))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (unk_0x5FA9D35DEE1C9D77(&(Global_970998.f_42), 0f, func_497(iParam0)))
		{
		}
	}
	func_496();
	func_498();
	unk_0x8C7B6AEB2280D38F();
	return 1;
}

void func_496()
{
	Global_1752378 = 0;
	Global_1752378.f_2 = 0;
	Global_1752378.f_8 = 0;
	Global_1752378.f_3 = 0;
	Global_1752378.f_6 = 0;
}

char* func_497(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_498()
{
	if (unk_0xBEA29F6CAC4ECD19() != 0)
	{
		unk_0x97003200DCC6C27A();
	}
}

int func_499()
{
	if (unk_0x3B6919E718EE555D())
	{
		return 1;
	}
	else if (unk_0xA0534D593C0FD34C())
	{
		return 1;
	}
	else if (unk_0xEF5A95F12D88CBC0())
	{
		return 1;
	}
	return 0;
}

int func_500()
{
	if (!func_501())
	{
		return 1;
	}
	return 0;
}

int func_501()
{
	if (func_502())
	{
		return 0;
	}
	if (unk_0xD49DD4AB66A964B2() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_502()
{
	return Global_2455203;
}

bool func_503()
{
	return Global_2445217.f_613;
}

void func_504(bool bParam0)
{
	if (bParam0)
	{
		Global_1312450 = 1;
	}
	else
	{
		Global_1312450 = 0;
	}
}

void func_505()
{
	Global_2445989.f_1.f_2825.f_13 = 0;
	Global_2445989.f_1.f_2825 = 0;
	Global_2445989.f_1.f_2825.f_1 = 0;
	Global_2445989.f_1.f_2825.f_2 = 0;
	Global_2445989.f_1.f_2825.f_3 = 0;
	Global_2445989.f_1.f_2825.f_4 = 0;
	Global_2445989.f_1.f_2825.f_5 = 0;
	Global_2445989.f_1.f_2825.f_6 = 0;
	Global_2445989.f_1.f_2825.f_7 = 0;
	Global_2445989.f_1.f_2825.f_8 = 0;
	Global_2445989.f_1.f_2825.f_9 = 0;
	Global_2445989.f_1.f_2825.f_10 = 0;
	Global_2445989.f_1.f_2825.f_11 = 0;
	Global_2445989.f_1.f_2825.f_12 = 0;
}

bool func_506(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 1;
}

void func_507()
{
	Global_2445217.f_596 = 1;
}

void func_508(int iParam0, struct<3> Param1, struct<6> Param4)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_524();
	func_523();
	func_522();
	func_521();
	func_520();
	func_629();
	Global_1752418.f_9 = iParam0;
	switch (Global_1752418.f_9)
	{
		case 1:
			Global_1752418 = 0;
			Global_1752418.f_22 = { 0f, 0f, 0f };
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_12 = 0;
			break;
		
		case 2:
			Global_1752418 = 1;
			Global_1752418.f_22 = { Param1 };
			Global_1752418.f_16 = { Param4 };
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_12 = 0;
			break;
		
		case 3:
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 0 || Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 1)
			{
				func_519(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_97.f_28);
			}
			func_518();
			Global_1752418 = 1;
			Global_1752418.f_22 = { Param1 };
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_12 = 0;
			break;
		
		case 4:
			func_517();
			func_518();
			Global_1752418 = 1;
			if (func_625(unk_0x0FFED3E94261A832()) || func_626(unk_0x0FFED3E94261A832()))
			{
				func_516(1);
			}
			if ((func_515() || func_543()) && func_535())
			{
				Global_1752418.f_16 = { func_534() };
				Param4 = { Global_1752418.f_16 };
				Global_1752418.f_22 = { func_514() };
			}
			else if (func_515() || func_543())
			{
				if (func_513())
				{
					Global_1752418.f_22 = { func_512() };
				}
				else
				{
					Global_1752418.f_22 = { Param1 };
				}
			}
			else
			{
				Global_1752418.f_22 = { Param1 };
			}
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_12 = 1;
			break;
		
		case 5:
			func_517();
			func_511();
			func_518();
			if (func_625(unk_0x0FFED3E94261A832()) || func_626(unk_0x0FFED3E94261A832()))
			{
				func_516(1);
			}
			Global_1752418 = 1;
			Global_1752418.f_22 = { Param1 };
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_12 = 1;
			break;
		
		case 8:
			Global_1752418 = 0;
			Global_1752418.f_22 = { Param1 };
			Global_1752418.f_16 = { Param4 };
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_12 = 0;
			break;
		
		case 9:
			func_518();
			Global_1752418 = 1;
			Global_1752418.f_22 = { Param1 };
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_12 = 1;
			break;
		
		case 10:
			Global_1752418 = 0;
			Global_1752418.f_22 = { 0f, 0f, 0f };
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_12 = 0;
			break;
	}
	func_510();
	func_509();
	func_429(Global_1752418.f_9);
	Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_222 = { Global_1752418.f_22 };
	Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_225 = { Param4 };
}

void func_509()
{
	unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18), 23);
}

void func_510()
{
	unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18), 12);
}

void func_511()
{
	Global_1752418.f_4 = 1;
}

Vector3 func_512()
{
	return Global_2445217.f_30.f_491;
}

int func_513()
{
	if ((Global_2445217.f_30.f_491 != 0f || Global_2445217.f_30.f_491.f_1 != 0f) || Global_2445217.f_30.f_491.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_514()
{
	return Global_2445217.f_30.f_494;
}

var func_515()
{
	return Global_2445217.f_30.f_49;
}

void func_516(int iParam0)
{
	Global_2445989.f_5922 = iParam0;
}

void func_517()
{
	Global_1752418.f_3 = 1;
}

void func_518()
{
	Global_1752418.f_7 = 1;
}

void func_519(var uParam0)
{
	Global_1752418.f_10 = uParam0;
}

void func_520()
{
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_5 = 0;
}

void func_521()
{
	Global_1752418.f_10 = -1;
}

void func_522()
{
	Global_1752418.f_4 = 0;
}

void func_523()
{
	Global_1752418.f_3 = 0;
}

void func_524()
{
	Global_2445989.f_2843.f_2 = 1;
}

void func_525()
{
	Global_2445217.f_549.f_14 = 0;
}

bool func_526()
{
	return Global_2445217.f_549.f_14;
}

void func_527(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA9A04898798AE9E6(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x2137828D03306CAF(iParam1))
		{
			if (unk_0xDB61DD81432BD145(iParam1))
			{
				if (!unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), unk_0xB0BB7458627D389F(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_529();
			}
			else if (!unk_0xAA4F14DA15DB0B51(Global_2359301.f_66, 1))
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2359301.f_66, 2))
				{
					iVar1 = 0;
					while (iVar1 < 7)
					{
						unk_0xE7BE229503B147D3(iVar1, Global_2359301.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xF6082E2ADA1C795B(&(Global_2359301.f_66), 1);
			}
		}
		if (func_236(unk_0x0FFED3E94261A832(), 0))
		{
			unk_0x351F1FF2642A128A(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xFB8890941DAFE353(iParam0, iParam1);
		}
		unk_0x604540942DC31F92(iParam0, iParam1);
		func_528(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_528(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x0D7634B211BCB8B0(iVar0, iParam1, 1);
	}
}

void func_529()
{
	int iVar0;
	
	if (!unk_0x2C25B4C9175B42F3())
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2359301.f_66, 2))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				Global_2359301.f_58[iVar0] = unk_0xC1A55CEDE7782B6F(iVar0);
				iVar0++;
			}
			unk_0xF6082E2ADA1C795B(&(Global_2359301.f_66), 2);
			unk_0xF6082E2ADA1C795B(&(Global_2359301.f_66), 0);
		}
	}
}

void func_530()
{
	Global_2445217.f_30.f_47 = 0;
}

void func_531()
{
	Global_2445217.f_30.f_41 = -1;
}

int func_532()
{
	return Global_2445217.f_30.f_41;
}

void func_533(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0x58478145CAF8429C(&uParam0))
	{
		return;
	}
	if (!Global_2398820)
	{
		return;
	}
	if (!unk_0x35302CD5A5D37EED(&uParam0, &(Global_2398820.f_1)))
	{
		return;
	}
	Global_2398886 = 1;
}

struct<6> func_534()
{
	return Global_2445217.f_30.f_11;
}

bool func_535()
{
	return Global_2445217.f_30.f_51;
}

void func_536(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (unk_0x63C81A5D9CF723DC())
				{
					unk_0x82F41FFFC1B72DF6();
				}
			}
			break;
		
		case 1:
			unk_0xF1BE816931996931(6, 0, 0);
			break;
		
		case 2:
			unk_0xF1BE816931996931(12, 0, 0);
			break;
		
		case 3:
			if (func_537(Global_1638223.f_112772))
			{
				unk_0xF1BE816931996931(20, 50, 0);
			}
			else
			{
				unk_0xF1BE816931996931(21, 0, 0);
			}
			break;
		
		case 4:
			unk_0xF1BE816931996931(0, 0, 0);
			break;
		
		default:
			break;
	}
}

bool func_537(int iParam0)
{
	return iParam0 == 10;
}

int func_538()
{
	return Global_1752418.f_12;
}

void func_539(var uParam0, var uParam1)
{
	Global_1752418.f_13 = uParam0;
	Global_1752418.f_14 = uParam1;
}

void func_540(var uParam0)
{
	Global_1752418.f_12 = uParam0;
}

bool func_541()
{
	return Global_2445217.f_12;
}

void func_542()
{
	Global_2445217.f_30.f_48 = 1;
}

bool func_543()
{
	return Global_2445217.f_30.f_47;
}

void func_544()
{
	if (unk_0x58478145CAF8429C(&(Global_2391054.f_4.f_3)))
	{
		return;
	}
	if (!unk_0x58478145CAF8429C(&(Global_2398118.f_3)))
	{
		if (unk_0x35302CD5A5D37EED(&(Global_2398118.f_3), &(Global_2391054.f_4.f_3)))
		{
			Global_1311838 = 0;
		}
		else
		{
			Global_1311838 = 1;
		}
	}
	Global_1311839 = 0;
	Global_1311839.f_1 = { Global_2391054.f_4.f_3 };
}

void func_545()
{
	Global_1752418.f_5 = 0;
	Global_1752418.f_11 = -1;
}

void func_546(var uParam0)
{
	Global_1752418.f_5 = 1;
	Global_1752418.f_11 = uParam0;
}

int func_547(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8010[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_548(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7846[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_549()
{
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_18, 0))
	{
		return 1;
	}
	return (((((func_555(Global_1638223.f_93532) || func_554(Global_1638223.f_93532)) || func_553(Global_1638223.f_93532)) || func_552(Global_1638223.f_93532)) || func_551(Global_1638223.f_112772)) || func_550(Global_1638223.f_112772));
}

bool func_550(int iParam0)
{
	return iParam0 == 48;
}

bool func_551(int iParam0)
{
	return iParam0 == 8;
}

int func_552(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8089[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_553(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8032[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_554(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7913[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_555(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7854[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<13> func_556()
{
	struct<13> Var0;
	
	unk_0xF74E1F71F4B58CC4(&Var0, 13);
	return Var0;
}

void func_557(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	var uVar0;
	
	if (unk_0x58478145CAF8429C(&uParam0))
	{
		return;
	}
	if (!Global_2391043)
	{
		return;
	}
	uVar0 = unk_0xCAEDBF30E3EA14FC(&uParam0);
	Global_2391045 = uVar0;
	Global_2391046 = (unk_0x3732B96D7A1859B4() + 60000);
}

void func_558(struct<6> Param0)
{
	if (unk_0x58478145CAF8429C(&Param0))
	{
		return;
	}
	Global_1311839 = 1;
	Global_1311839.f_1 = { Param0 };
}

bool func_559()
{
	return Global_2445217.f_10;
}

void func_560(int iParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		unk_0x2B8C2CE4B857E60B(iParam0);
		unk_0x6C541723CBD48DE9(0);
	}
}

void func_561()
{
	Global_979818 = -1;
}

void func_562()
{
	func_563(-1f);
}

void func_563(float fParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		unk_0x2B8C2CE4B857E60B(fParam0);
		unk_0x6C541723CBD48DE9(0);
	}
}

int func_564(int iParam0)
{
	int iVar0;
	
	if (Global_1770656[iParam0 /*8*/] == -1)
	{
		iVar0 = func_24(func_566(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_565(iParam0, 0);
			iVar0 = 0;
		}
		Global_1770656[iParam0 /*8*/] = iVar0;
	}
	return Global_1770656[iParam0 /*8*/];
}

void func_565(int iParam0, int iParam1)
{
	Global_1770656[iParam0 /*8*/] = iParam1;
	func_59(func_566(iParam0), iParam1, -1, 1, 0);
}

int func_566(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6135;
		
		default:
	}
	return 6135;
}

bool func_567()
{
	return Global_1638223.f_1 == 0;
}

void func_568(int iParam0, int iParam1)
{
	unk_0x8CBD190EC95B5F8A(iParam0);
	unk_0x3C15FC3023A4E9E6(iParam0);
	if (unk_0x57ABD3933CA48C8B())
	{
		unk_0xB0829D6A28BDD727(iParam1);
	}
}

bool func_569()
{
	return Global_2445217.f_622;
}

void func_570()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2359301, 24))
	{
		unk_0x507FE690B1271947(&Global_2359301, 24);
	}
}

void func_571()
{
	unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18), 14);
}

bool func_572()
{
	return Global_2445217.f_710;
}

int func_573()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189;
}

void func_574(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574114 == 0)
		{
			Global_1574114 = 1;
		}
	}
	else if (Global_1574114 == 1)
	{
		Global_1574114 = 0;
	}
}

void func_575()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2445989.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2445989.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_576()
{
	int iVar0;
	
	if (func_235())
	{
		return 1;
	}
	if (func_500())
	{
		return 1;
	}
	if (func_499())
	{
		return 1;
	}
	if (unk_0x58478145CAF8429C(&(Global_1638223.f_93819)))
	{
		return 1;
	}
	func_498();
	unk_0x65D6AE0CFD23929A();
	iVar0 = unk_0xBEA29F6CAC4ECD19();
	Global_1752378.f_2++;
	if (Global_1752378.f_2 < 1)
	{
		Global_1752378.f_2 = 1;
	}
	unk_0x7402BDBF0A111B86(iVar0, "quit", Global_1752378);
	unk_0x7402BDBF0A111B86(iVar0, "ply", Global_1752378.f_2);
	unk_0x7402BDBF0A111B86(iVar0, "plyd", 1);
	unk_0x7402BDBF0A111B86(iVar0, "lp", unk_0xDA84A1E29323722E());
	if (unk_0x5FA9D35DEE1C9D77(&(Global_1638223.f_93819), -1f, func_497(0)))
	{
	}
	func_496();
	func_498();
	unk_0x8C7B6AEB2280D38F();
	return 1;
}

void func_577()
{
	Global_2445217.f_722 = 1;
}

void func_578(bool bParam0)
{
	if (bParam0)
	{
		unk_0x6AE6A862BA850B71();
	}
	else
	{
		unk_0x47518D3FEA82DDE6();
	}
}

void func_579()
{
	Global_2445217.f_721 = 1;
}

int func_580(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_581(iParam0))
			{
				if (Global_1592456[iParam0 /*635*/] == 2 || Global_1592456[iParam0 /*635*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_581(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_189 != 0;
}

bool func_582()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 2);
}

void func_583()
{
	Global_2445217.f_721 = 0;
}

bool func_584()
{
	return Global_2445217.f_721;
}

void func_585(int iParam0)
{
	unk_0x6E4B8D274EF24EDE("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	unk_0x6E4B8D274EF24EDE("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	unk_0x6E4B8D274EF24EDE("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_586()
{
	Global_1752418.f_12 = -1;
	Global_1752418.f_13 = -1;
	Global_1752418.f_14 = -1;
}

void func_587(int iParam0)
{
	Global_979819 = iParam0;
}

void func_588()
{
	Global_1621253 = 0;
	Global_1574280 = 4;
}

void func_589(bool bParam0)
{
	if (bParam0)
	{
		Global_1574293 = 1;
	}
	else
	{
		Global_1574293 = 0;
	}
}

void func_590()
{
	Global_1621254 = -1;
	Global_1621257 = 0;
}

void func_591()
{
	Global_2497344.f_275 = 0;
	func_594(3782, 0, -1, 1);
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_592())
		{
			unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 5, 0, 0, 0);
		}
	}
}

bool func_592()
{
	return func_593(unk_0x2A5EB8B0FE590B91());
}

int func_593(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x29D988205B5459BD(uParam0, 5);
	iVar1 = -1;
	switch (unk_0xD3B21CE53AA7BE51(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0xE1155F8509CBD256(uParam0, 5, iVar0, unk_0x0B56C00A178536FE(uParam0, 5));
			if (unk_0x62B1B843DC27A464(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0xE1155F8509CBD256(uParam0, 5, iVar0, unk_0x0B56C00A178536FE(uParam0, 5));
			if (unk_0x62B1B843DC27A464(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_594(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_595()
{
	Global_2445217.f_722 = 0;
}

bool func_596()
{
	return Global_2445217.f_722;
}

void func_597(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_599(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7931)
	{
		unk_0x58553FD5FAFD566B(15);
		Global_17290.f_7931 = 0;
	}
	unk_0x11CA0D8AE0C37B1C(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0xEF7A86AB02E46379(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0x2FCDEAA8BCC22D85("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0x2FCDEAA8BCC22D85("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_598(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_598(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xA8AF99BD8D81CFB7(*uParam0))
		{
			unk_0x73F5E7B6BB964839(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_599(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x591AF4C50B46E014() && unk_0xBCE21F0E265FBBAE())
		{
			iParam2 = unk_0xA6F0FC98755348DF();
		}
	}
	StringCopy(&cVar0, unk_0xFABF5258A318B1DC(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xCAEDBF30E3EA14FC(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17290.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17290.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_600()
{
}

void func_601(int iParam0)
{
	struct<49> Var0;
	int iVar49;
	var uVar50;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_48 = -1;
	if (Global_2445217.f_549.f_9 == 0)
	{
		Global_1752443.f_1569 = 0;
	}
	iVar49 = 0;
	while (iVar49 <= 31)
	{
		uVar50 = Global_1752443[iVar49 /*49*/].f_3;
		Global_1752443[iVar49 /*49*/] = { Var0 };
		if (func_641())
		{
			Global_1752443[iVar49 /*49*/].f_3 = uVar50;
		}
		Global_1752443[iVar49 /*49*/].f_1 = func_125();
		Global_1752443[iVar49 /*49*/] = -1;
		Global_1752443[iVar49 /*49*/].f_2 = -1;
		iVar49++;
	}
	if ((!func_641() && !func_608()) && iParam0)
	{
		Global_1752443.f_1571 = 0;
		Global_1752443.f_1572 = 0;
	}
}

void func_602(bool bParam0)
{
	Global_786435.f_3 = 0;
	Global_786435.f_4 = 0;
	Global_786435.f_6 = 0;
	Global_786435.f_7 = 0;
	Global_786435.f_8 = 0;
	Global_786435.f_9 = 0;
	Global_786435.f_10 = 0;
	Global_786435.f_11 = 0;
	Global_786435.f_12 = 0;
	Global_786435.f_13 = 0;
	Global_786435.f_14 = 0;
	Global_786435.f_15 = 0;
	Global_786435.f_16 = 0;
	Global_786435.f_17 = 0;
	Global_786435.f_18 = 0;
	Global_786435.f_20 = 0;
	Global_786435.f_21 = 0;
	Global_786435.f_22 = 0;
	Global_786435.f_24 = 0;
	Global_786435.f_25 = 0;
	Global_786435.f_28 = 0;
	Global_786435.f_29 = 0;
	Global_786435.f_30 = 0;
	Global_786435.f_31 = 0;
	Global_786435.f_32 = 0;
	Global_786435.f_33 = 0;
	Global_786435.f_36 = 0;
	Global_786435.f_37 = 0;
	Global_786435.f_38 = 0;
	Global_786435.f_39 = 0;
	Global_786435.f_40 = 0;
	Global_786435.f_41 = 0;
	Global_786435.f_42 = 0;
	Global_786435.f_35 = 0;
	if (bParam0)
	{
		Global_786435 = 0;
		Global_786435.f_1 = 0;
		Global_786435.f_2 = 0;
		Global_786435.f_5 = 0;
		Global_786435.f_19 = 0;
		Global_786435.f_23 = 0;
		Global_786435.f_26 = 0;
	}
}

void func_603(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x30BD96CB13063EC9(unk_0x96CB654BBCDD4063(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x01307FD0B54F50D3(unk_0x96CB654BBCDD4063(iParam0), "MPBitset");
	}
	unk_0x507FE690B1271947(&iVar0, iParam1);
	unk_0xE7B1DEED5908F19B(unk_0x96CB654BBCDD4063(iParam0), "MPBitset", iVar0);
}

bool func_604()
{
	return Global_1752418.f_3;
}

bool func_605()
{
	return Global_2453064.f_7;
}

bool func_606()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_30.f_3, 8);
}

void func_607()
{
	Global_2445217.f_30.f_49 = 0;
}

bool func_608()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_30.f_3, 0);
}

void func_609()
{
	unk_0x507FE690B1271947(&(Global_970998.f_8), 8);
}

void func_610(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_13.f_1), 0);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_13.f_1), 0);
	}
}

void func_611(int iParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (((Global_2445989.f_3396 != 0 && Global_2445989.f_3396.f_1 != 0) && Global_2445989.f_3396.f_2 != 0) && Global_2445989.f_3396.f_3 != 0)
		{
			unk_0x157CD7721883F3F8(Global_2445989.f_3396, Global_2445989.f_3396.f_1, Global_2445989.f_3396.f_2, Global_2445989.f_3396.f_3, iParam0);
		}
	}
	func_612();
}

void func_612()
{
	Global_2445989.f_3396 = 0;
	Global_2445989.f_3396.f_1 = 0;
	Global_2445989.f_3396.f_2 = 0;
	Global_2445989.f_3396.f_3 = 0;
}

void func_613()
{
	Global_2445989.f_1.f_2801 = 1;
}

bool func_614()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445989.f_1.f_2809, 12);
}

void func_615(int iParam0)
{
	if (!func_608() || iParam0)
	{
		Global_1574819 = 0;
		Global_1574818 = 0;
	}
}

void func_616(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;
	
	Global_2445217.f_30 = -1;
	Global_2445217.f_30.f_55 = -1;
	Global_2445217.f_30.f_1 = -1;
	Global_2445217.f_30.f_4 = 0;
	Global_2445217.f_30.f_2 = 0;
	Global_2445217.f_30.f_3 = 0;
	Global_2445217.f_30.f_40 = -1;
	Global_2445217.f_30.f_5 = { Var0 };
	Global_2445217.f_30.f_53 = 0;
	Global_2445217.f_30.f_129 = 0;
	Global_2445217.f_30.f_344 = 0;
	Global_2445217.f_30.f_54 = 0;
	Global_2445217.f_30.f_130 = 0;
	Global_2445217.f_30.f_345 = 0;
	Global_2445217.f_30.f_518 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2445217.f_30.f_476[iVar6] = 0;
		iVar6++;
	}
	Global_2445217.f_30.f_52 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2445217.f_30.f_56[iVar6] = 0;
		iVar6++;
	}
	Global_2445217.f_30.f_128 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2445217.f_30.f_131[iVar6] = 0;
		iVar6++;
	}
	Global_2445217.f_30.f_343 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2445217.f_30.f_346[iVar6] = 0;
		Global_2445217.f_30.f_361[iVar6] = 0;
		Global_2445217.f_30.f_391[iVar6 /*6*/] = { Var0 };
		Global_2445217.f_30.f_376[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2445217.f_30.f_42[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2445217.f_30.f_497 = 0;
			Global_2445217.f_30.f_498 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2445217.f_30.f_505[iVar6] = -1;
				Global_2445217.f_30.f_511[iVar6] = -1;
				iVar6++;
			}
			Global_2445217.f_30.f_47 = 0;
			Global_2445217.f_30.f_11 = { Var0 };
			Global_2445217.f_30.f_51 = 0;
			Global_2445217.f_30.f_491 = { 0f, 0f, 0f };
			Global_2445217.f_30.f_494 = { 0f, 0f, 0f };
			Global_2445217.f_30.f_50 = 0;
			Global_2445217.f_30.f_49 = 0;
		}
	}
}

void func_617()
{
	Global_2453064.f_8 = 0;
	Global_2453064.f_7 = 0;
}

bool func_618()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148;
}

bool func_619()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 5;
}

void func_620()
{
	Global_1761600.f_1774 = 0;
}

void func_621()
{
	Global_2445217.f_715 = 0;
}

bool func_622()
{
	return Global_2445217.f_715;
}

void func_623()
{
	Global_14611 = 0;
	func_624();
}

void func_624()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
	}
}

bool func_625(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

bool func_626(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

void func_627()
{
	Global_2445217.f_580 = 0;
}

void func_628()
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_4 = -1;
	iVar13 = unk_0x0FFED3E94261A832();
	if (iVar13 != -1)
	{
		Global_1621674[iVar13 /*35*/] = { Var0 };
	}
}

void func_629()
{
	Global_1752418.f_7 = 0;
}

void func_630(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2445217.f_549.f_3 = { Var0 };
	Global_2445217.f_549 = 0;
	Global_2445217.f_549.f_1 = 0;
	Global_2445217.f_549.f_12 = 0;
	if (bParam0)
	{
		Global_2445217.f_549.f_2 = 0;
		Global_2445217.f_549.f_13 = 0;
		Global_2445217.f_549.f_14 = 0;
		Global_2394784 = 0;
		if (bParam1)
		{
			Global_2445217.f_549.f_9 = 0;
			Global_2445217.f_549.f_10 = 0;
			Global_2445217.f_549.f_11 = 0;
			Global_2445217.f_549.f_16 = -1;
		}
		if (iParam2 && !unk_0x1B154DE2D4606530())
		{
			Global_1752443.f_1571 = 0;
			Global_1752443.f_1572 = 0;
		}
		if (unk_0x0FFED3E94261A832() != -1)
		{
			Global_1621674[unk_0x0FFED3E94261A832() /*35*/].f_2 = 0;
			Global_1621674[unk_0x0FFED3E94261A832() /*35*/] = 0;
		}
	}
}

void func_631()
{
	Global_2445217.f_549.f_12 = 0;
}

bool func_632()
{
	return Global_2445217.f_549.f_9 > 0;
}

var func_633()
{
	return Global_2445217.f_549.f_12;
}

void func_634()
{
	unk_0x507FE690B1271947(&(Global_1621674[unk_0x0FFED3E94261A832() /*35*/].f_28), 3);
}

void func_635()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1574832[iVar0] = 0;
		iVar0++;
	}
}

void func_636()
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	if (iVar0 != -1)
	{
		Global_1621674[iVar0 /*35*/].f_5 = 0;
	}
}

void func_637()
{
	Global_2455170 = 0;
	Global_2455171 = 0;
	Global_2455172 = 0;
	Global_2455173 = 0;
}

void func_638()
{
	Global_2445217.f_30.f_48 = 0;
}

void func_639()
{
	Global_2445217.f_30.f_50 = 0;
}

void func_640()
{
	if (unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) != Global_1362099)
	{
		if (unk_0x8EEB10CA57B82F27() == 0 && Global_1362099 == 3)
		{
			Global_1362099 = unk_0xC1A55CEDE7782B6F(0);
		}
		unk_0xE7BE229503B147D3(unk_0x8EEB10CA57B82F27(), Global_1362099);
	}
}

bool func_641()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_549.f_1, 0);
}

void func_642(int iParam0)
{
	if (unk_0x5018862FF5D9F844())
	{
		unk_0x7E9E33A1196BC468(iParam0);
	}
}

void func_643()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!unk_0x58478145CAF8429C(&(Global_1573910[iVar0 /*6*/])))
		{
			StringCopy(&(Global_1573910[iVar0 /*6*/]), "", 24);
		}
		iVar0++;
	}
}

void func_644(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x87B7000A6C80CCEF();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_1592456[iVar0 /*635*/].f_196, 0))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1592456[iVar0 /*635*/].f_196), 0);
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iVar0 /*635*/].f_196, 0))
		{
			unk_0x507FE690B1271947(&(Global_1592456[iVar0 /*635*/].f_196), 0);
		}
	}
}

void func_645()
{
	unk_0x507FE690B1271947(&(Global_2445217.f_2), 31);
}

void func_646()
{
	Global_2434604.f_1669.f_803 = func_125();
}

void func_647()
{
	Global_2445217.f_763 = 0;
}

void func_648()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_651(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1769933.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_650();
	func_649();
	Global_1769933 = 0;
}

void func_649()
{
	Global_1769933.f_4 = 0;
}

void func_650()
{
	Global_1769933.f_3 = 0;
}

void func_651(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1769933.f_5[iParam0 /*53*/] = { Var0 };
}

void func_652()
{
	unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18), 20);
}

void func_653(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 18, 1))
		{
			func_60(iParam0, 18, 1);
		}
	}
	else if (func_23(iParam0, 18, 1))
	{
		func_58(iParam0, 18, 1);
	}
}

void func_654()
{
	unk_0x507FE690B1271947(&(Global_2497344.f_772), 3);
}

void func_655(bool bParam0, int iParam1)
{
	func_205();
	if (bParam0)
	{
		func_295(1);
		unk_0x7D53B6FFAEDA810A(1);
	}
	unk_0x0508903FC1B0ED24();
	func_200();
	unk_0x06C5FE32E76D8B52(0);
	func_234(0, 1, 1, 0);
	func_658();
	func_188(12, 0, -1);
	func_189(1);
	unk_0x44FC1DFD412D8376(0, -1);
	unk_0xA6C8C7573424CA93(1);
	unk_0xDA0C5084402DA99C(1);
	func_657();
	unk_0x6040865446FA4030(1);
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0x45A42C7863C1A2B9())
		{
			unk_0x98C476D8F2ACDB57(0, 0);
		}
	}
	func_241(0);
	if (((func_109() == 0 && func_656() == 0) && iParam1) && !func_238(unk_0x0FFED3E94261A832()))
	{
		func_328(unk_0x0FFED3E94261A832(), 1, 0);
	}
	Global_2434604.f_3491 = 0;
}

bool func_656()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 7);
}

void func_657()
{
	Global_17151.f_5 = 0;
}

void func_658()
{
	func_189(1);
	func_188(4, 0, -1);
	func_188(6, 0, -1);
	func_188(7, 0, -1);
	func_188(3, 0, -1);
	func_188(1, 0, -1);
	func_188(2, 0, -1);
	func_188(11, 0, -1);
	func_188(13, 0, -1);
	func_188(14, 0, -1);
	func_188(16, 0, -1);
}

void func_659(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312446)
	{
		if (!func_693())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574366[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_691(unk_0x0FFED3E94261A832(), bParam0);
	iVar2 = func_689(iVar1, bParam0);
	if (!func_688(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574366[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574366[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 228)
	{
		iVar3 = func_687(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_685(iVar4))
			{
				func_676(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_670(func_671(59, 0, 0), 0);
	func_668(func_671(135, 0, 0), 1);
	func_667(func_671(22, 0, 0), func_671(73, 0, 0));
	if (func_693())
	{
		if (func_452(77, -1))
		{
			func_666(1);
			func_665(1);
		}
	}
	if (func_664() || func_663())
	{
		func_30(77, 1, -1, 1);
		if (unk_0x591AF4C50B46E014())
		{
			func_660(28, 1, 0);
			func_660(29, 1, 0);
			func_660(30, 1, 0);
			func_660(31, 1, 0);
			func_660(32, 1, 0);
			func_660(33, 1, 0);
			func_660(34, 1, 0);
			func_660(35, 1, 0);
			func_660(36, 1, 0);
			func_660(37, 1, 0);
			func_660(38, 1, 0);
		}
	}
	if (func_671(21, 0, 0))
	{
		unk_0x34FC316780901654(0);
	}
	Global_979820 = 0;
}

void func_660(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 0, 0))
		{
			if (iParam2 && Global_91829.f_18[iParam0])
			{
				if (func_662(iParam0) == 3 && !func_22(iParam0))
				{
					func_661(iParam0);
					func_60(iParam0, 0, 0);
					func_58(iParam0, 1, 0);
					func_364(iParam0);
				}
				else
				{
					func_60(iParam0, 1, 0);
					func_364(iParam0);
				}
			}
			else
			{
				func_60(iParam0, 0, 0);
				func_58(iParam0, 1, 0);
				func_364(iParam0);
			}
		}
		else
		{
			func_58(iParam0, 1, 0);
			func_364(iParam0);
		}
	}
	else if (func_23(iParam0, 0, 0))
	{
		func_58(iParam0, 0, 0);
		func_58(iParam0, 1, 0);
		func_364(iParam0);
	}
}

void func_661(int iParam0)
{
	if (Global_91829.f_18[iParam0])
	{
		func_60(iParam0, 10, 1);
		func_60(iParam0, 19, 1);
	}
}

int func_662(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
	}
	return 6;
}

bool func_663()
{
	return Global_1312840;
}

bool func_664()
{
	return Global_1312842;
}

void func_665(bool bParam0)
{
	if (!unk_0x591AF4C50B46E014())
	{
		return;
	}
	func_660(28, bParam0, 0);
	func_660(30, bParam0, 0);
	func_660(31, bParam0, 0);
	func_660(33, bParam0, 0);
	func_660(34, bParam0, 0);
	func_660(38, bParam0, 0);
}

void func_666(bool bParam0)
{
	if (!unk_0x591AF4C50B46E014())
	{
		return;
	}
	func_660(29, bParam0, 0);
	func_660(32, bParam0, 0);
	func_660(36, bParam0, 0);
	func_660(35, bParam0, 0);
	func_660(37, bParam0, 0);
}

void func_667(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x591AF4C50B46E014())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_660(0, bParam0, 1);
	func_660(1, bParam0, 1);
	func_660(2, bParam0, 1);
	func_660(3, bParam0, 1);
	func_660(4, bParam0, 1);
	func_660(5, bParam0, 1);
	func_660(6, bParam0, 1);
	func_660(7, bParam0, bVar0);
	func_660(8, bParam0, 1);
	func_660(9, bParam0, 1);
	func_660(10, bParam0, 1);
	func_660(11, bParam0, 1);
	func_660(12, bParam0, bVar0);
	func_660(13, bParam0, 1);
	func_660(21, bParam0, 1);
	func_660(14, bParam0, 1);
	func_660(15, bParam0, 1);
	func_660(16, bParam0, 1);
	func_660(17, bParam0, 1);
	func_660(18, bParam0, 1);
	func_660(19, bParam0, 1);
	func_660(20, bParam0, 1);
	func_660(22, bParam0, 1);
	func_660(23, bParam0, 1);
	func_660(24, bParam0, 1);
	func_660(25, bParam0, 1);
	func_660(26, bParam0, 1);
	func_660(27, bParam0, 1);
	func_365(1, !bParam1);
	if (!bVar0)
	{
		func_661(12);
	}
}

void func_668(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x591AF4C50B46E014())
	{
		return;
	}
	uVar0 = func_669(0);
	if (Global_262145.f_63 == 1 && func_671(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_660(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(44))
		{
			func_661(44);
		}
	}
	if (bParam0)
	{
		if (func_564(0) > 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1698), 10);
		}
	}
}

int func_669(bool bParam0)
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (func_664())
	{
		return 1;
	}
	if (func_663())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_1689, 26))
		{
			uVar0 = func_24(1187, -1, 0);
			if (!unk_0xAA4F14DA15DB0B51(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_452(122, -1);
}

void func_670(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x591AF4C50B46E014())
	{
		return;
	}
	uVar0 = func_669(0);
	func_660(39, bParam0, 0);
	func_660(40, bParam0, 0);
	func_660(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_660(43, bParam0, 0);
		func_660(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(39))
		{
			func_661(39);
		}
		if (!func_22(40))
		{
			func_661(40);
		}
		if (!func_22(41))
		{
			func_661(41);
		}
		if (!func_22(42))
		{
			func_661(42);
		}
		if (!func_22(43))
		{
			func_661(43);
		}
	}
}

bool func_671(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6600 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_673(unk_0x0FFED3E94261A832(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4882 == 1)
		{
			return 1;
		}
	}
	if (func_664() || func_663())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_672())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1574366[iVar1], iVar0);
}

int func_672()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_1694, 23))
	{
		return 1;
	}
	if (func_664())
	{
		return 1;
	}
	if (func_663())
	{
		return 1;
	}
	uVar0 = Global_1361996[func_25(-1)];
	if (unk_0xAA4F14DA15DB0B51(uVar0, 7))
	{
		unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1694), 23);
		return 1;
	}
	return 0;
}

bool func_673(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_693())
	{
		return 0;
	}
	if (func_675())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_674(iParam1);
	iVar1 = uVar0;
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_524, iVar1);
}

int func_674(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_675()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_144, 3);
}

void func_676(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_684(-1))
			{
				if (!func_693())
				{
					return;
				}
			}
			if (!func_684(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_683() && !func_682())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_681())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_684(-1))
				{
					if (!func_677())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0xF6082E2ADA1C795B(&(Global_1574366[iVar1]), iVar0);
	}
}

int func_677()
{
	var uVar0;
	
	if (func_680(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	uVar0 = Global_1361996[func_25(-1)];
	if (unk_0xAA4F14DA15DB0B51(uVar0, 2))
	{
		func_678(1);
		return 1;
	}
	return 0;
}

void func_678(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 25))
		{
			func_679(unk_0x0FFED3E94261A832(), 12);
			unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 25);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 25))
	{
		unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140), 25);
	}
}

void func_679(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_674(iParam1);
	iVar1 = uVar0;
	unk_0xF6082E2ADA1C795B(&(Global_1592456[iParam0 /*635*/].f_524), iVar1);
}

bool func_680(int iParam0)
{
	if (func_664())
	{
		return 1;
	}
	if (func_663())
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_140, 25);
}

int func_681()
{
	var uVar0;
	
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_1694, 6))
	{
		return 1;
	}
	uVar0 = Global_1361996[func_25(-1)];
	if (unk_0xAA4F14DA15DB0B51(uVar0, 0))
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2497344.f_1694, 6))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1694), 6);
		}
		return 1;
	}
	if (func_664())
	{
		return 1;
	}
	if (func_663())
	{
		return 1;
	}
	return 0;
}

bool func_682()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_144, 7);
}

int func_683()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_664())
	{
		return 1;
	}
	if (func_663())
	{
		return 1;
	}
	return func_452(121, -1);
}

bool func_684(int iParam0)
{
	return func_452(123, iParam0);
}

int func_685(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_664())
	{
		return 1;
	}
	if (func_663())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			uVar0 = func_24(func_686(iParam0), -1, 0);
			if (unk_0xAA4F14DA15DB0B51(uVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_686(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1196;
		
		case 1:
			return 1197;
		
		case 2:
			return 1198;
		
		case 3:
			return 1199;
		
		case 4:
			return 1200;
		
		case 5:
			return 1202;
		
		case 6:
			return 3790;
		
		case 7:
			return 3993;
		
		case 8:
			return 5447;
		
		default:
	}
	return 1196;
}

int func_687(int iParam0)
{
	if (func_664())
	{
		return 1;
	}
	if (func_663())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
			if (!func_684(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_688(int iParam0)
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_664())
	{
		return 1;
	}
	if (func_663())
	{
		return 1;
	}
	return func_452(119, iParam0);
}

int func_689(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_690(iParam0, 0);
}

int func_690(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_282038[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_282038[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_691(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_692(iParam0);
}

int func_692(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_25(-1)];
			}
			else if (func_55(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_25(-1)];
	}
	return 0;
}

int func_693()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_664())
	{
		return 1;
	}
	if (func_663())
	{
		return 1;
	}
	return func_452(120, -1);
}

int func_694()
{
	var uVar0;
	
	func_699(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_435())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_698())
	{
		return 1;
	}
	if (func_697(157))
	{
		if (!func_696())
		{
			return 1;
		}
	}
	if (func_697(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_695() != 0)
	{
		if (unk_0x09952BA662A7629B(func_695()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_695()
{
	switch (func_28())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_696()
{
	return Global_2445217.f_578;
}

int func_697(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_698()
{
	return Global_2454709;
}

void func_699(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_700(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_700(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(iVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(iVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_701(uVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_701(int iParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(iParam0))
		{
			if (unk_0x3321AFCAE6E141D4(iParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(iParam0)))
				{
					unk_0x216B434C1A609F5B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(iParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_702()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_703(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20)
{
	var uVar0;
	
	unk_0x7784BB6DC48D0B18(2, 0, Param0.f_16);
	func_708(0, -1, 0);
	unk_0x2D179B3FFCF1AADA(&Local_567, 7);
	unk_0xA5929B03CD847BE8(&Local_739, 11);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/] = 16;
	if (bLocal_758)
	{
		if (!unk_0xF4EE9D6C8E60AE22() && !unk_0xEF08C8E0C4679477())
		{
			unk_0x5BFE0E837BA0AF60(800);
		}
		if (!unk_0x1CF28DE85743D98B())
		{
			if (!unk_0x29A198A43483252D())
			{
				uVar0 = unk_0x0FFED3E94261A832() + 32;
				unk_0x07D5F8617C6DDBAC(1, uVar0);
				func_192(1);
			}
		}
	}
	unk_0x20DC9856B13C398C(1);
	unk_0x7E04478E16257BA0(1);
	if (!func_707())
	{
		func_375(0);
	}
	unk_0xAC09235E2065C253(0);
	func_653(iLocal_92, 1);
	func_377(1);
	if (!bLocal_758)
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			func_328(unk_0x0FFED3E94261A832(), 1, 0);
		}
	}
	Global_2497344.f_1689 = 0;
	unk_0x4AE062EA52E5F2B3(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, 0, 0);
	func_706();
	func_704();
	Local_739[unk_0x88641E5BC172153A() /*5*/] = 0;
}

void func_704()
{
	unk_0x8CBD190EC95B5F8A(1);
	func_705(1, -1);
	unk_0x3C15FC3023A4E9E6(1);
	if (func_452(133, -1))
	{
		func_30(133, 0, -1, 1);
	}
	Global_2445217.f_622 = 1;
}

void func_705(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xDE8FC36D22CF9D2D(0, iParam1);
			break;
		
		default:
			uVar1 = func_391(iParam1);
			iVar0 = unk_0x29B06605BA5CF280(uVar1);
			if (unk_0xAA4F14DA15DB0B51(iVar0, iParam0))
			{
				unk_0x507FE690B1271947(&iVar0, iParam0);
				unk_0xDE8FC36D22CF9D2D(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_30(120, 0, iParam1, 1);
			func_30(124, 0, iParam1, 1);
			func_30(115, 0, iParam1, 1);
			func_30(119, 0, iParam1, 1);
			break;
	}
}

void func_706()
{
	unk_0x219EE6A7B599E7DC(&uLocal_752);
	unk_0x8F2751B831A7B303(0, 0, 0);
	unk_0x7E68A9B1407E9970(0, 17.0693f, -1115.935f, 28.7968f, 0);
	unk_0xBD718C5BA2122192(uLocal_752);
}

int func_707()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x591AF4C50B46E014())
		{
			return 0;
		}
		if (unk_0x3F76B69AE9B695DD())
		{
			return 1;
		}
		if (func_435())
		{
			return 0;
		}
		if (func_697(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_708(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_709();
			}
			else
			{
				return 0;
			}
		}
		if (!func_356())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_709();
					}
					else
					{
						return 0;
					}
				}
				if (func_435())
				{
					if (!bParam2)
					{
						func_709();
					}
					else
					{
						return 0;
					}
				}
				if (func_697(155))
				{
					if (!bParam2)
					{
						func_709();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAD61841DF357CB5C())
			{
				if (!bParam2)
				{
					func_709();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBC3BAD18EBEFD169();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			if (!bParam2)
			{
				func_709();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAD61841DF357CB5C())
	{
		if (!bParam2)
		{
			func_709();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_709()
{
	unk_0xA232817B0B36F2E5();
}

