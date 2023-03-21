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
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	struct<123> Local_94 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_217 = 16;
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
	var uLocal_402 = 0;
	var uLocal_403 = 16;
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
	var uLocal_567 = 0;
	struct<6> Local_568 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_574 = 0;
	var uLocal_575 = 16;
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
	var uLocal_739 = 0;
	struct<5> Local_740[2];
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	bool bLocal_757 = 0;
	bool bLocal_758 = 0;
	bool bLocal_759 = 0;
	bool bLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
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
	iLocal_92 = 20;
	iLocal_93 = 33;
	bLocal_757 = true;
	bLocal_758 = true;
	bLocal_759 = true;
	bLocal_760 = true;
	if (unk_0x393E9918BC37548A())
	{
		func_774(ScriptParam_0);
	}
	while (true)
	{
		func_773();
		if (func_765())
		{
			func_413(1);
		}
		if (func_410(0))
		{
			Local_740[unk_0x2E40EEA43EF34BD6() /*5*/] = 3;
		}
		if (func_409(unk_0x2E40EEA43EF34BD6()) > -1)
		{
			unk_0x3EF8C80DD57B551F(unk_0x7C7787D2D7139A85());
		}
		switch (func_408(unk_0x2E40EEA43EF34BD6()))
		{
			case 0:
				if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 10))
				{
					if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
					{
						unk_0xA1E7A40E1F56E511(&uLocal_751, 10);
					}
				}
				unk_0x9F815D4FA0C47F97("FMINT", 0);
				if (func_407() && unk_0x4F6F8DF9C96926B9("FMINT", 0))
				{
					if (func_406() > 0)
					{
						func_405(&uLocal_403, 1, 0, "Lamar", 0, 1);
						func_404(0);
						func_403(4, 1);
						func_403(1, 1);
						func_403(0, 1);
						func_403(2, 1);
						func_403(3, 0);
						func_401(iLocal_93, 1);
						Local_740[unk_0x2E40EEA43EF34BD6() /*5*/] = 2;
						if (bLocal_759)
						{
							Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 = -2;
						}
						else
						{
							Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_406() == 4)
				{
					Local_740[unk_0x2E40EEA43EF34BD6() /*5*/] = 4;
				}
				if (func_406() == 6 && Local_740[unk_0x2E40EEA43EF34BD6() /*5*/] < 4)
				{
					Local_740[unk_0x2E40EEA43EF34BD6() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_380();
				func_22();
				if (func_406() == 4)
				{
					Local_740[unk_0x2E40EEA43EF34BD6() /*5*/] = 4;
				}
				if (func_406() == 6 && Local_740[unk_0x2E40EEA43EF34BD6() /*5*/] < 4)
				{
					Local_740[unk_0x2E40EEA43EF34BD6() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_740[unk_0x2E40EEA43EF34BD6() /*5*/] = 5;
				break;
			
			case 5:
				func_20(&(Local_568.f_5));
				if (func_19(&(Local_568.f_5)))
				{
					Local_740[unk_0x2E40EEA43EF34BD6() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_12(iLocal_92);
				Local_740[unk_0x2E40EEA43EF34BD6() /*5*/] = 6;
			
			case 6:
				func_413(0);
				break;
		}
		if (unk_0x722688699565161D())
		{
			switch (func_406())
			{
				case 0:
					Local_568.f_0 = 2;
					break;
				
				case 2:
					func_11();
					func_10();
					func_2();
					if (func_1())
					{
						Local_568.f_0 = 6;
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
	if (!bLocal_757)
	{
		if (unk_0xA2BC31158C8CEFD2(Local_568.f_1, 1))
		{
			return 1;
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_568.f_1, 2))
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
	if (unk_0x722688699565161D())
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_568.f_1, 3))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_4, 0))
			{
				unk_0xA1E7A40E1F56E511(&(Local_568.f_1), 3);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_568.f_1, 4))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_4, 2))
			{
				unk_0xA1E7A40E1F56E511(&(Local_568.f_1), 4);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_568.f_1, 5))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 3))
			{
				unk_0xA1E7A40E1F56E511(&(Local_568.f_1), 5);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_568.f_1, 6))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 4))
			{
				unk_0xA1E7A40E1F56E511(&(Local_568.f_1), 6);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_568.f_1, 7))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 5))
			{
				unk_0xA1E7A40E1F56E511(&(Local_568.f_1), 7);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_568.f_1, 8))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 6))
			{
				unk_0xA1E7A40E1F56E511(&(Local_568.f_1), 8);
			}
		}
		switch (Local_568.f_2)
		{
			case 0:
				if (unk_0xA2BC31158C8CEFD2(Local_568.f_1, 3))
				{
					if (func_4(&(Local_568.f_3), &(Local_568.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_575))
					{
						unk_0xB90231068DCFFBA1(unk_0x40237B62400B4BCC(Local_568.f_3), 1, 0, 0);
						Local_568.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0xA2BC31158C8CEFD2(Local_568.f_1, 4))
				{
					Local_568.f_2 = 1;
				}
				break;
			
			case 1:
				if (unk_0xA2BC31158C8CEFD2(Local_568.f_1, 5))
				{
					Local_568.f_2 = 3;
				}
				break;
			
			case 3:
				if (unk_0xA2BC31158C8CEFD2(Local_568.f_1, 6))
				{
					Local_568.f_2 = 4;
				}
				break;
			
			case 4:
				if (unk_0xA2BC31158C8CEFD2(Local_568.f_1, 7))
				{
					Local_568.f_2 = 5;
				}
				break;
			
			case 5:
				if (unk_0xA2BC31158C8CEFD2(Local_568.f_1, 8))
				{
					Local_568.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam5, var uParam6)
{
	if (func_9(Global_2531497.f_796) && func_9(Global_2531497.f_797))
	{
		if (!unk_0x9C625F4590C97F13(*uParam0))
		{
			if (func_6(uParam0, Global_2531497.f_796, Param2, fParam5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				unk_0xD919B08076BE492F(unk_0x40237B62400B4BCC(*uParam0), 1);
			}
		}
		if (!unk_0x9C625F4590C97F13(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2531497.f_797, -1, 1, 1, 1))
			{
				unk_0xCC94EE23853F38E4(unk_0x70D3AC024E0A9837(*uParam1), 1);
				unk_0xE0AC40EF164A2569(Global_2531497.f_796);
				unk_0xE0AC40EF164A2569(Global_2531497.f_797);
				unk_0x9D3FE4786B8925D2(unk_0x40237B62400B4BCC(*uParam0), 0);
				unk_0xE2806AF865804258(unk_0x70D3AC024E0A9837(*uParam1), 1);
				func_405(uParam6, 8, unk_0x70D3AC024E0A9837(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!unk_0x9C625F4590C97F13(*uParam0) || !unk_0x9C625F4590C97F13(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xEA2FCC46B8870EF9(1))
	{
		return 0;
	}
	if (!unk_0x9C625F4590C97F13(uParam1))
	{
		return 0;
	}
	if (!unk_0xD960230552BC4165(unk_0x40237B62400B4BCC(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x62F4D4DB24880CA5(unk_0x81024A420EDCE2B5(unk_0x40237B62400B4BCC(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x9C625F4590C97F13(*uParam0))
	{
		unk_0x9D3FE4786B8925D2(unk_0x70D3AC024E0A9837(*uParam0), iParam7);
		if (unk_0x457EF27DC4F63820(unk_0x70D3AC024E0A9837(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9E11C6A0FFF1E999(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0xCBBFE6965951B21E(iParam1))
	{
		return 0;
	}
	if (!unk_0x987DF1B2025CC706(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0x7FB505C34A14BAAA(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x847817A65E16621A(iParam1, Param2, fParam5, iParam7, iParam6, iParam14);
	if (unk_0xD4B321D9096B01FC(iVar1))
	{
		*uParam0 = unk_0x7B82BDB8FBC5EEF9(iVar1);
		Global_2531497.f_6245 = iVar1;
		if (unk_0x9C625F4590C97F13(*uParam0))
		{
			if (bParam15)
			{
				unk_0x18620062E6D68D6E(iVar1, 1);
			}
			unk_0x9D3FE4786B8925D2(iVar1, iParam10);
			if (unk_0x457EF27DC4F63820(iVar1))
			{
				if (bParam8)
				{
					unk_0x9E11C6A0FFF1E999(*uParam0, 1);
				}
				else
				{
					unk_0x9E11C6A0FFF1E999(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xA986EE8F099052F4(*uParam0, unk_0x7C7787D2D7139A85(), 1);
				}
			}
			unk_0xEF5C4BC935BFF76E(iVar1, iParam9);
			unk_0x98E94863AB8F55F4(iVar1, 1);
			if (bParam12)
			{
				unk_0x58DFD2EDF224315F(iVar1);
				unk_0x48AB9211DB740DB5(iVar1, 5, 5, 1f);
			}
			func_7(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_7(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_8(unk_0x7C7787D2D7139A85(), Param0, iParam4) > -1)
	{
		if ((Global_2405071.f_2910[1 /*6*/].f_5 == iParam5 && Global_2405071.f_2910[1 /*6*/].f_4 == iParam4) && unk_0x2A488C176D52CCA5(Global_2405071.f_2910[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2910[iVar0 /*6*/] = { Global_2405071.f_2910[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2910[1 /*6*/] = { Param0 };
		Global_2405071.f_2910[1 /*6*/].f_3 = fParam3;
		Global_2405071.f_2910[1 /*6*/].f_4 = iParam4;
		Global_2405071.f_2910[1 /*6*/].f_5 = iParam5;
	}
}

int func_8(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x01CBD71E072E9F33((Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6BB2B1818CAE531E(iParam0);
	return unk_0x6DF9C43E3CC645BC(iParam0);
}

void func_10()
{
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xACF7D965CEBE5714())
	{
		if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
		{
			if (bLocal_757)
			{
				if (!unk_0xA2BC31158C8CEFD2(Local_568.f_1, 2))
				{
					if (unk_0xA2BC31158C8CEFD2(Local_740[iVar0 /*5*/].f_3, 2))
					{
						unk_0xA1E7A40E1F56E511(&(Local_568.f_1), 2);
					}
				}
			}
			else if (!unk_0xA2BC31158C8CEFD2(Local_568.f_1, 1))
			{
				if (unk_0xA2BC31158C8CEFD2(Local_740[iVar0 /*5*/].f_3, 1))
				{
					unk_0xA1E7A40E1F56E511(&(Local_568.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	if (!func_15(unk_0x7C7787D2D7139A85(), 1))
	{
		return;
	}
	if (!func_13(unk_0x7C7787D2D7139A85()) == iParam0)
	{
		return;
	}
}

int func_13(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xD699DB8EAB756F25(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_15(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_13(iParam0) != 0;
	}
	return func_16(iParam0, bParam1, 0);
}

int func_16(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_17(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590446[iParam0 /*871*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_17(int iParam0)
{
	return func_18(iParam0);
}

bool func_18(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

int func_19(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_20(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x722688699565161D())
		{
			func_21(uParam0, 0, 0);
		}
	}
}

void func_21(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x393E9918BC37548A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x169A8AC9F93C2727();
			}
			else
			{
				*uParam0 = unk_0x50D85685589EFCBD();
			}
		}
		else
		{
			*uParam0 = unk_0x9B35D07DCD0F0B43();
		}
		uParam0->f_1 = 1;
	}
}

void func_22()
{
	switch (func_409(unk_0x2E40EEA43EF34BD6()))
	{
		case -2:
			func_203();
			break;
		
		case -1:
			func_202();
			break;
		
		case 0:
			func_31();
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			func_23();
			break;
	}
}

void func_23()
{
	switch (iLocal_756)
	{
		case 0:
			if (!func_24(iLocal_93))
			{
				unk_0xA1E7A40E1F56E511(&(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3), 2);
				Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 = 99;
			}
			break;
	}
}

bool func_24(int iParam0)
{
	return func_25(iParam0, 5, 1);
}

int func_25(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xA2BC31158C8CEFD2(Global_98721.f_1357[iParam0], iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_30() == 0)
		{
			return unk_0xA2BC31158C8CEFD2(func_26(func_29(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2542527[iParam0 /*3*/][func_27(iParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

int func_28()
{
	return Global_1312745;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9470;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10999;
}

int func_30()
{
	return Global_30736;
}

void func_31()
{
	int iVar0;
	
	if (func_201())
	{
		if (func_14(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			func_200(0);
		}
	}
	if (!func_199(&uLocal_393))
	{
		func_21(&uLocal_393, 0, 0);
	}
	if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 21))
	{
		unk_0xA1E7A40E1F56E511(&uLocal_751, 21);
	}
	if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 3))
	{
		if (!func_199(&uLocal_391))
		{
			func_21(&uLocal_391, 0, 0);
		}
		else if (unk_0xA2BC31158C8CEFD2(uLocal_751, 21))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
				{
					if (func_198(&uLocal_391, 3000, 0))
					{
						unk_0xA1E7A40E1F56E511(&uLocal_751, 3);
					}
				}
			}
		}
		if (func_198(&uLocal_391, 40000, 0))
		{
			unk_0xA1E7A40E1F56E511(&uLocal_751, 3);
		}
	}
	else if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 16))
	{
		if (!unk_0x0945988C02AF3025())
		{
			if (!unk_0xCD97B9861557C025())
			{
				unk_0xA1E7A40E1F56E511(&uLocal_751, 16);
				func_197(&uLocal_391);
			}
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_4, 2))
	{
		if (!func_199(&uLocal_397))
		{
			func_21(&uLocal_397, 0, 0);
		}
		else if (!unk_0xA2BC31158C8CEFD2(uLocal_752, 1))
		{
			if (func_198(&uLocal_397, 10000, 0))
			{
				unk_0xA1E7A40E1F56E511(&uLocal_752, 1);
				func_197(&uLocal_397);
			}
		}
		else if (unk_0xA2BC31158C8CEFD2(uLocal_751, 19))
		{
			if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 18))
			{
				if (!func_195() || func_198(&uLocal_391, 5000, 0))
				{
					func_194(0);
					unk_0xA1E7A40E1F56E511(&uLocal_751, 18);
					if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
					{
						unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 244, 0);
						unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 243, 0);
						unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 242, 0);
					}
				}
			}
		}
	}
	if (unk_0xA2BC31158C8CEFD2(uLocal_751, 18))
	{
		if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 2))
		{
			if (unk_0xBF28CCACDDFF5346())
			{
				iVar0 = 0;
				unk_0xA1E7A40E1F56E511(&iVar0, 3);
				unk_0xA1E7A40E1F56E511(&iVar0, 4);
				unk_0xA1E7A40E1F56E511(&iVar0, 5);
				if (func_99(&uLocal_403, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_98(1);
					unk_0xA1E7A40E1F56E511(&uLocal_751, 2);
					if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 20))
					{
						func_83(19, 3, 1);
						unk_0xA1E7A40E1F56E511(&uLocal_751, 20);
					}
					if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
					{
						unk_0xDD91C0502D7C4DFF(unk_0x0FA8183DAD2B3203(), 1, 1);
					}
				}
			}
		}
		else if (!func_82(0))
		{
			if (!func_81())
			{
				if (!func_79())
				{
					if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 12))
					{
						if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
						{
							unk_0xDD91C0502D7C4DFF(unk_0x0FA8183DAD2B3203(), 0, 1);
							unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 244, 1);
							unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 243, 1);
							unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 242, 1);
						}
						unk_0xA1E7A40E1F56E511(&uLocal_751, 12);
						func_21(&uLocal_395, 0, 0);
						func_21(&uLocal_399, 0, 0);
					}
				}
			}
		}
		if (unk_0xA2BC31158C8CEFD2(uLocal_751, 12))
		{
			if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 17))
			{
				if (!unk_0xCD97B9861557C025())
				{
					func_75();
					unk_0xA1E7A40E1F56E511(&uLocal_751, 17);
					func_197(&uLocal_391);
				}
			}
			else if (!func_195())
			{
				if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 23))
				{
					if (func_198(&uLocal_399, 4500, 0))
					{
						unk_0xA1E7A40E1F56E511(&uLocal_751, 23);
						unk_0xA1E7A40E1F56E511(&(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3), 3);
					}
				}
				if (func_198(&uLocal_395, 15000, 0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 22))
					{
						unk_0xA1E7A40E1F56E511(&uLocal_751, 22);
					}
				}
				if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0)
				{
					if (unk_0xA2BC31158C8CEFD2(uLocal_751, 14))
					{
						unk_0x3B76114EC84D5812(&uLocal_751, 14);
					}
					if (!func_24(iLocal_93))
					{
						if (unk_0xA2BC31158C8CEFD2(uLocal_751, 13))
						{
							unk_0x3B76114EC84D5812(&uLocal_751, 13);
						}
						if (unk_0xA2BC31158C8CEFD2(uLocal_751, 25) || (!unk_0xA2BC31158C8CEFD2(uLocal_751, 25) && !unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0)))
						{
							if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 0))
							{
								if (unk_0xA2BC31158C8CEFD2(uLocal_751, 15))
								{
									unk_0x3B76114EC84D5812(&uLocal_751, 15);
								}
								if (unk_0x39A01A052D9B5FF0(Global_98721.f_235[iLocal_93]))
								{
									func_69("GET_AMMU", 0);
									unk_0xA1E7A40E1F56E511(&uLocal_751, 0);
									unk_0xA1E7A40E1F56E511(&uLocal_751, 25);
									if (unk_0x39A01A052D9B5FF0(Global_98721.f_235[iLocal_93]))
									{
										if (!unk_0xA2BC31158C8CEFD2(Global_2531497.f_795, 2))
										{
											unk_0x925BD1075D119B45(Global_98721.f_235[iLocal_93], 1);
										}
										func_401(iLocal_93, 1);
									}
								}
							}
							else if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_795, 2))
							{
								if (unk_0x39A01A052D9B5FF0(Global_98721.f_235[iLocal_93]))
								{
									if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 15))
									{
										unk_0x925BD1075D119B45(Global_98721.f_235[iLocal_93], 0);
										unk_0xA1E7A40E1F56E511(&uLocal_751, 15);
									}
								}
							}
							else if (unk_0x39A01A052D9B5FF0(Global_98721.f_235[iLocal_93]))
							{
								if (unk_0xA2BC31158C8CEFD2(uLocal_751, 15))
								{
									unk_0x925BD1075D119B45(Global_98721.f_235[iLocal_93], 1);
									unk_0x3B76114EC84D5812(&uLocal_751, 15);
								}
							}
						}
					}
					else
					{
						if (unk_0xA2BC31158C8CEFD2(uLocal_751, 0))
						{
							unk_0x3B76114EC84D5812(&uLocal_751, 0);
						}
						if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 13))
						{
							func_69("GET_GUN", 0);
							func_68(1);
							unk_0xA1E7A40E1F56E511(&uLocal_751, 13);
						}
					}
				}
				else if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 14))
				{
					unk_0x0D23E3918F7AF11B(1);
					if (unk_0xA2BC31158C8CEFD2(uLocal_751, 0))
					{
						unk_0x3B76114EC84D5812(&uLocal_751, 0);
					}
					if (unk_0xA2BC31158C8CEFD2(uLocal_751, 13))
					{
						unk_0x3B76114EC84D5812(&uLocal_751, 13);
					}
					if (unk_0x39A01A052D9B5FF0(Global_98721.f_235[iLocal_93]))
					{
						unk_0x925BD1075D119B45(Global_98721.f_235[iLocal_93], 0);
						unk_0x6B29681A8280DB75(Global_98721.f_235[iLocal_93], 0);
						func_401(iLocal_93, 0);
					}
					func_69("LOSE_COP", 0);
					unk_0xA1E7A40E1F56E511(&uLocal_751, 14);
				}
			}
		}
	}
	else if (func_198(&uLocal_393, 300000, 0))
	{
		unk_0xA1E7A40E1F56E511(&uLocal_751, 18);
	}
	if (!unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 0))
	{
		if (((unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_pistol"), 0) || unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_combatpistol"), 0)) || unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_appistol"), 0)) || unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_microsmg"), 0))
		{
			if (func_66())
			{
				func_61(1);
				unk_0xA1E7A40E1F56E511(&(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3), 0);
				if (func_24(iLocal_93))
				{
				}
			}
		}
		else
		{
			func_44(400);
		}
	}
	else if (!unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 1))
	{
		if (!func_42())
		{
			unk_0xA1E7A40E1F56E511(&(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3), 1);
			func_35();
			func_34("FM_IHELP_AMMU", -1);
			if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 31))
			{
				func_32(119, 1, -1, 1);
				func_32(115, 1, -1, 1);
				unk_0xA1E7A40E1F56E511(&uLocal_751, 31);
			}
			func_197(&uLocal_391);
			if (bLocal_757)
			{
				if (bLocal_758)
				{
					Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 = 3;
				}
				else
				{
					Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_33())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_27(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0EC7EA43028EE330(iVar0, iParam1, iParam3);
		}
	}
}

int func_33()
{
	return 1;
	return 0;
}

void func_34(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

void func_35()
{
	if (!func_41())
	{
		return;
	}
	if (!unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == Global_1312585.f_9)
	{
		return;
	}
	func_36();
}

void func_36()
{
	func_38();
	func_37(0);
}

void func_37(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x393E9918BC37548A();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x169A8AC9F93C2727();
		Global_1312585.f_11 = unk_0x169A8AC9F93C2727();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_38()
{
	if (!func_40())
	{
	}
	if (func_41())
	{
		unk_0x8C952E99D90780F7(&(Global_1312585.f_12));
		func_39();
		unk_0xCC56AD222DA9A8C1();
	}
}

void func_39()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6A8B3CC08A759F44(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0x6A8B3CC08A759F44(Global_1312585.f_52);
			unk_0x6A8B3CC08A759F44(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x2F3DFF2E75DFEA9B(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_57);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x2F3DFF2E75DFEA9B(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_57);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_32));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_48));
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_40()
{
	if (!func_41())
	{
		return 0;
	}
	unk_0xC1A9801A23F32F8F(&(Global_1312585.f_12));
	func_39();
	return unk_0xCDD0AB887E3F6532();
}

int func_41()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_42()
{
	return ((((((((((func_43(28) || func_43(29)) || func_43(30)) || func_43(31)) || func_43(32)) || func_43(33)) || func_43(34)) || func_43(35)) || func_43(36)) || func_43(37)) || func_43(38));
}

int func_43(int iParam0)
{
	return func_25(iParam0, 6, 1);
}

void func_44(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		iVar0 = func_58(unk_0x7C7787D2D7139A85());
		if (iVar0 < iParam0)
		{
			if (func_57())
			{
				func_45(1734805203, (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				unk_0xE5009EC6D407C7D8((iParam0 - iVar0));
			}
		}
	}
}

void func_45(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_57())
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
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_46(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_46(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_46(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
			func_46(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x10312E24AC503B38(func_28()) || unk_0x9F3230C03E32BA3F())
		{
			Global_4264386 = 1;
			return 0;
		}
		if (Global_2460158)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264387 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263810[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x45E39245DFF8B94A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x813C0E090AFE247B(iVar4))
		{
			*uParam0 = func_53(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263810[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263810[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264371 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264385 = 1;
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_52(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_47(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_47(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xA1E7A40E1F56E511(&(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_48(iParam0);
	}
}

void func_48(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_51(iParam0))
		{
			if (!bVar0)
			{
				unk_0x35669F69F99705F6();
			}
		}
		else if (!bVar0)
		{
			unk_0x7724338620CF87D3(Global_4263810[iParam0 /*84*/].f_65);
		}
		func_49(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_49(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_50(&(uParam0->f_13));
	func_50(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_50(var uParam0)
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

int func_51(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_52(int iParam0, var uParam1)
{
	Global_2461338 = uParam1;
	Global_2461337 = iParam0;
}

int func_53(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_57())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263810[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263810[iVar0 /*84*/].f_65.f_1 = uParam5;
			Global_4263810[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263810[iVar0 /*84*/].f_65.f_4 = uParam2;
			Global_4263810[iVar0 /*84*/].f_65.f_7 = uParam3;
			Global_4263810[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263810[iVar0 /*84*/].f_65 = iParam0;
			Global_4263810[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263810[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263810[iVar0 /*84*/].f_65.f_10 = uParam7;
			Global_4263810[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263810[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263810[iVar0 /*84*/].f_65.f_14 = unk_0xB3EE417AD9F0CAA2();
			Global_4263810[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264371 = 0;
			if (bParam6)
			{
				Global_4263810[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_54(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_54(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
{
	struct<3> Var0;
	int iVar35;
	
	if (iParam84 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1969967074;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_2 = { Param0.f_65 };
	Var0.f_2.f_32 = iParam84;
	iVar35 = func_56(Var0.f_1);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_55();
		unk_0x990C4E4B3665A4D6(1, &Var0, 35, iVar35);
	}
}

void func_55()
{
	unk_0x42B7026D73D48D50("AM_ARENA_SHP");
}

var func_56(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xA1E7A40E1F56E511(&uVar0, iParam0);
	}
	return uVar0;
}

int func_57()
{
	if (unk_0xE434AB6E3DE89861())
	{
		return unk_0x60E2BDB67AA16B1C();
	}
	return 0;
}

var func_58(int iParam0)
{
	var uVar0;
	
	uVar0 = func_59(iParam0);
	return uVar0;
}

int func_59(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x7C7787D2D7139A85())
		{
			return unk_0x639F5C61520AE235(-1);
		}
		else if (func_60(iParam0))
		{
			return Global_1590446[iParam0 /*871*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xA2BC31158C8CEFD2(Global_2437549.f_1, iParam0);
	}
	return 1;
}

void func_61(bool bParam0)
{
	func_62(28, bParam0);
	func_62(29, bParam0);
	func_62(30, bParam0);
	func_62(31, bParam0);
	func_62(32, bParam0);
	func_62(33, bParam0);
	func_62(34, bParam0);
	func_62(35, bParam0);
	func_62(36, bParam0);
	func_62(37, bParam0);
	func_62(38, bParam0);
}

void func_62(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_25(iParam0, 14, 1))
		{
			func_65(iParam0, 14, 1);
		}
	}
	else if (func_25(iParam0, 14, 1))
	{
		func_63(iParam0, 14, 1);
	}
}

void func_63(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x3B76114EC84D5812(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_30() == 0)
		{
			uVar0 = func_26(func_29(iParam0), -1, 0);
			unk_0x3B76114EC84D5812(&uVar0, iParam1);
			func_64(func_29(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_27(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xA1E7A40E1F56E511(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_30() == 0)
		{
			uVar0 = func_26(func_29(iParam0), -1, 0);
			unk_0xA1E7A40E1F56E511(&uVar0, iParam1);
			func_64(func_29(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xA1E7A40E1F56E511(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

bool func_66()
{
	return ((((((((((func_67(28) || func_67(29)) || func_67(30)) || func_67(31)) || func_67(32)) || func_67(33)) || func_67(34)) || func_67(35)) || func_67(36)) || func_67(37)) || func_67(38));
}

int func_67(int iParam0)
{
	return func_25(iParam0, 3, 0);
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1653895, 19))
		{
			unk_0xA1E7A40E1F56E511(&Global_1653895, 19);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1653895, 19))
	{
		unk_0x3B76114EC84D5812(&Global_1653895, 19);
	}
}

void func_69(char* sParam0, bool bParam1)
{
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return;
	}
	if (unk_0xB9A31E6892C3D2C2(sParam0) > 23)
	{
		return;
	}
	if (func_73(sParam0))
	{
		return;
	}
	func_36();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0x0037AFCBDC61F351(), 32);
	Global_1312585.f_9 = unk_0xA8C462EF7D9DC564(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_72();
	func_71(bParam1);
	func_70();
}

void func_70()
{
	unk_0xA1E7A40E1F56E511(&(Global_1312585.f_59), 1);
}

void func_71(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA1E7A40E1F56E511(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0x3B76114EC84D5812(&(Global_1312585.f_59), 0);
}

void func_72()
{
	Global_1312585.f_10 = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), 86400000);
	Global_1312585.f_11 = unk_0x169A8AC9F93C2727();
}

bool func_73(char* sParam0)
{
	if (!func_41())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_74(sParam0);
	}
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return 0;
	}
	return unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_12));
}

bool func_74(char* sParam0)
{
	if (!func_41())
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return 0;
	}
	return unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_16));
}

void func_75()
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { func_78(unk_0x7C7787D2D7139A85()) };
	bVar13 = unk_0x55056A10BA1BA85A();
	bVar14 = func_77(&Var0);
	if (!bVar13 && !bVar14)
	{
		func_76("HLP_TAXI3", 9000);
	}
	else if (bVar13 && !bVar14)
	{
		func_76("HLP_SOC2", 9000);
	}
	else if (bVar13 && bVar14)
	{
		func_76("HLP_SOC1", 9000);
	}
}

void func_76(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 0, iParam1);
}

int func_77(var uParam0)
{
	if (unk_0xE7017554E7BCFB0E())
	{
		if (unk_0xFF6895C150414C31() && unk_0xF10E9BDC0C546560(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_78(int iParam0)
{
	struct<13> Var0;
	
	unk_0x229B5E28267D1B1F(iParam0, &Var0, 13);
	return Var0;
}

bool func_79()
{
	return func_80();
}

bool func_80()
{
	return Global_1366857.f_40 == 3;
}

int func_81()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
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
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8042 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		func_90();
		if (iParam1 == 4)
		{
			func_89(iParam0, 0, 1);
			func_89(iParam0, 1, 1);
			func_89(iParam0, 2, 1);
			func_88(iParam0, 0, 1);
			func_88(iParam0, 1, 1);
			func_88(iParam0, 2, 1);
		}
		else
		{
			if (func_87(iParam0, iParam1) == 1 && func_86(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_89(iParam0, iVar0, 1);
			func_88(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76577)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_85(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_85(iParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_84();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_85(iParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_84();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_85(iParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_84();
			}
		}
	}
}

void func_84()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xD54FB72F71EFE6C4(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
	if (Global_8061 == 0)
	{
		unk_0x6C607B5286DEE8D9("");
		StringCopy(&cVar16, unk_0xD54FB72F71EFE6C4(&(Global_7966[1 /*6*/])), 64);
		sVar32 = unk_0xD54FB72F71EFE6C4("CELL_253");
		unk_0x480C449653B881B1(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x6C607B5286DEE8D9("CELL_255");
		unk_0x0AC9F8E1AFCEC860(&(Global_7966[1 /*6*/]));
		unk_0x480C449653B881B1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x3B76114EC84D5812(&Global_7356, 0);
}

struct<4> func_85(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

int func_87(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

void func_88(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_89(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_90()
{
	if (func_97(14))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_91();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_91()
{
	func_92();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_92()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_95(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_94(unk_0x0FA8183DAD2B3203());
			if (func_93(iVar0) && (!func_97(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_93(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_93(int iParam0)
{
	return iParam0 < 3;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_95(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_95(int iParam0)
{
	if (func_93(iParam0))
	{
		return func_96(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_96(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_97(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 17);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7357, 17);
	}
}

int func_99(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_192())
	{
		return 0;
	}
	if (func_191())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_100(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_100(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x9591DE0F00127F2A(sParam2))
	{
		return 0;
	}
	if (unk_0xB9A31E6892C3D2C2(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(sParam3))
	{
		return 0;
	}
	if (unk_0xB9A31E6892C3D2C2(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351());
	iVar1 = func_190(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x9591DE0F00127F2A(sParam7))
	{
		iVar2 = unk_0xA8C462EF7D9DC564(sParam7);
	}
	if (func_189(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_185(uParam6))
	{
		return 0;
	}
	if (func_182(iVar0, iVar1, iVar2))
	{
		if (func_181())
		{
			return 0;
		}
		func_180();
		return func_107(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_106(iParam4))
	{
		return 0;
	}
	func_101(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_101(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1366857.f_40.f_1 = iParam0;
	Global_1366857.f_40.f_2 = iParam1;
	Global_1366857.f_40.f_3 = iParam2;
	StringCopy(&(Global_1366857.f_40.f_4), sParam3, 16);
	Global_1366857.f_40.f_8 = iParam4;
	Global_1366857.f_40.f_9 = iParam5;
	Global_1366857.f_40.f_14 = uParam6;
	func_102(iParam4);
	func_180();
	Global_1366857.f_40.f_13 = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), 7000);
}

void func_102(int iParam0)
{
	if (func_105(iParam0))
	{
		func_104();
		return;
	}
	func_103();
}

void func_103()
{
	Global_1366857.f_40.f_10 = 0;
}

void func_104()
{
	Global_1366857.f_40.f_10 = 1;
}

int func_105(int iParam0)
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

bool func_106(int iParam0)
{
	return iParam0 > Global_1366857.f_40.f_8;
}

int func_107(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_179();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_176(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_173(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_176(uParam0, sParam3, sParam4);
		}
		return func_155(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_154(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_143(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_142(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_108(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_108(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_141();
	bVar0 = true;
	if (func_110(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_109(120000);
		return 1;
	}
	return 0;
}

void func_109(int iParam0)
{
	Global_1366857.f_40.f_11 = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), iParam0);
	Global_1366857.f_40.f_12 = 1;
}

int func_110(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_140();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xA09A99AC02B24954(iVar0);
		iVar1 = func_134(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x7D08A7F177668824(unk_0x169A8AC9F93C2727(), Global_1366857.f_40.f_13))
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
	sVar4 = func_133(sParam5, bParam6, &iVar3);
	uVar5 = func_131(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x9591DE0F00127F2A(sParam8))
	{
		iVar6++;
		if (!unk_0x9591DE0F00127F2A(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x2553916E420E8EF0(sVar4, " "))
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
		if (unk_0xA2BC31158C8CEFD2(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x9591DE0F00127F2A(sVar2))
	{
		bVar12 = func_130(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_114(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(uParam4, 0))
	{
		func_113();
	}
	func_141();
	func_112();
	func_111();
	return 1;
}

void func_111()
{
	Global_1366857.f_57 = 0;
	Global_1366857.f_57.f_1 = 0;
}

void func_112()
{
	Global_1366857.f_40 = 3;
}

void func_113()
{
	unk_0xA1E7A40E1F56E511(&Global_7356, 8);
}

int func_114(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_115(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			unk_0xA1E7A40E1F56E511(&Global_4269615, 0);
		}
		return 1;
	}
	return 0;
}

int func_115(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x2553916E420E8EF0(sParam14, sParam15))
	{
	}
	func_90();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
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
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if (unk_0x2A58EB47597ACFA3(unk_0x0FA8183DAD2B3203()))
			{
				return 0;
			}
		}
		if (Global_4269600 == 1)
		{
			return 0;
		}
		if (unk_0x222F76006659B0EB(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x222F76006659B0EB(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_129() == 0)
	{
		func_127();
		return 0;
	}
	func_126(Global_4269599);
	StringCopy(&(Global_4268350[Global_4269599 /*104*/]), sParam1, 64);
	Global_4268350[Global_4269599 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268350[Global_4269599 /*104*/].f_24 = iParam2;
	}
	Global_4268350[Global_4269599 /*104*/].f_25 = iParam7;
	Global_4268350[Global_4269599 /*104*/].f_26 = uParam8;
	Global_4268350[Global_4269599 /*104*/].f_29 = uParam9;
	Global_4268350[Global_4269599 /*104*/].f_30 = uParam12;
	Global_4268350[Global_4269599 /*104*/].f_31 = uParam11;
	Global_4268350[Global_4269599 /*104*/].f_28 = 0;
	Global_4268350[Global_4269599 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_33), sParam4, 64);
	Global_4268350[Global_4269599 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_50), sParam5, 64);
	Global_4268350[Global_4269599 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_83), sParam15, 64);
	func_90();
	switch (iParam16)
	{
		case 3:
			Global_4268350[Global_4269599 /*104*/].f_99[Global_19486] = 1;
			break;
		
		case 0:
			Global_4268350[Global_4269599 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4268350[Global_4269599 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4268350[Global_4269599 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_125(0);
				break;
			
			case 1:
				func_125(1);
				break;
			
			case 2:
				func_125(2);
				break;
			
			case 3:
				func_125(3);
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
				Global_4269600 = 1;
				break;
			
			case 0:
				Global_4269600 = 1;
				break;
			
			case 2:
				Global_4269600 = 1;
				break;
			
			case 1:
				Global_4269600 = 1;
				break;
			}
	}
	Global_21874[Global_4269599] = 0;
	if (bParam10)
	{
		func_90();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_124())
			{
				unk_0x9964F5BBD9415AB7(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_123(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_120(1);
			func_123(Global_19467, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_116(uParam0, sParam1);
	return 1;
}

void func_116(var uParam0, char* sParam1)
{
	if (!func_117())
	{
		return;
	}
	unk_0x0077F15613D36993(uParam0, -1180597171, unk_0xA8C462EF7D9DC564(sParam1), 0);
}

int func_117()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_140())
	{
		return 0;
	}
	if (func_118(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	return 1;
}

bool func_118(int iParam0)
{
	return func_119(iParam0, 20);
}

bool func_119(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

void func_120(int iParam0)
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
	
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_97(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xA2BC31158C8CEFD2(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_122(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar2);
								unk_0xAC7C2DE2DDC7AF03();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_121(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
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
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111560.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111560.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111560.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_121(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76577)
								{
									iVar4 = 0;
									iVar4 = Global_4268349;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268350[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268350[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268350[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_121(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42566;
											break;
										
										case 1:
											iVar6 = Global_42567;
											break;
										
										case 2:
											iVar6 = Global_42568;
											break;
										
										default:
											break;
									}
									func_121(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_121(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_122(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(Global_7362);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xA2BC31158C8CEFD2(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_122(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar7);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xA2BC31158C8CEFD2(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_122(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar8);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (iVar1 == 8)
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_122(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(42);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if ((iVar1 == 23 && unk_0x2553916E420E8EF0(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xA2BC31158C8CEFD2(Global_7357, 6))
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_122(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(42);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_121(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_121(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9591DE0F00127F2A(sParam7))
	{
		func_122(sParam7);
	}
	if (!unk_0x9591DE0F00127F2A(sParam8))
	{
		func_122(sParam8);
	}
	if (!unk_0x9591DE0F00127F2A(sParam9))
	{
		func_122(sParam9);
	}
	if (!unk_0x9591DE0F00127F2A(sParam10))
	{
		func_122(sParam10);
	}
	if (!unk_0x9591DE0F00127F2A(sParam11))
	{
		func_122(sParam11);
	}
	unk_0xAC7C2DE2DDC7AF03();
}

void func_122(char* sParam0)
{
	unk_0x759AC38FBC6CCA9E(sParam0);
	unk_0x81019766FF500CCA();
}

void func_123(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xAC7C2DE2DDC7AF03();
}

bool func_124()
{
	return Global_1312873;
}

void func_125(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111560.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_126(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xCA3729F4C3A9E58A();
	uVar1 = unk_0x8F7802EF0E800F47();
	uVar2 = unk_0xA63165E74E9A042B();
	uVar3 = unk_0xFC6CBA5BA4E459A9();
	uVar4 = unk_0x4EBF6D59B95D29C2() + 1;
	uVar5 = unk_0x10CB21C87A35156F();
	Global_4268350[iParam0 /*104*/].f_18 = uVar0;
	Global_4268350[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4268350[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4268350[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4268350[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268350[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_127()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269599 = 11;
	Global_4268350[Global_4269599 /*104*/].f_18 = -1;
	Global_4268350[Global_4269599 /*104*/].f_18.f_1 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_2 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_3 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_128(Global_4268350[iVar2 /*104*/].f_18, Global_4268350[Global_4269599 /*104*/].f_18))
		{
			Global_4269599 = iVar2;
		}
		iVar2++;
	}
	Global_4268350[Global_4269599 /*104*/].f_24 = 1;
}

int func_128(struct<6> Param0, struct<6> Param6)
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

int func_129()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268350[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269599 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269599 = 11;
	Global_4268350[Global_4269599 /*104*/].f_18 = -1;
	Global_4268350[Global_4269599 /*104*/].f_18.f_1 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_2 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_3 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268350[iVar2 /*104*/].f_24 == 0 || Global_4268350[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_128(Global_4268350[iVar2 /*104*/].f_18, Global_4268350[Global_4269599 /*104*/].f_18))
			{
				Global_4269599 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269599 == 11)
	{
		return 0;
	}
	Global_4268350[Global_4269599 /*104*/].f_99[0] = 0;
	Global_4268350[Global_4269599 /*104*/].f_99[1] = 0;
	Global_4268350[Global_4269599 /*104*/].f_99[2] = 0;
	return 1;
}

int func_130(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_115(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			unk_0xA1E7A40E1F56E511(&Global_4269615, 0);
		}
		return 1;
	}
	return 0;
}

int func_131(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_132(2, iParam1);
	return iParam0;
}

void func_132(int iParam0, var uParam1)
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

char* func_133(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x2553916E420E8EF0(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_132(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xD54FB72F71EFE6C4(sParam0);
}

int func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = func_137(iParam0);
	if (iVar0 == -1)
	{
		func_135(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_135(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_137(iParam0) != -1)
	{
		return;
	}
	if (Global_1385457)
	{
		if (iParam0 == Global_1385457.f_1)
		{
			return;
		}
	}
	if (func_136(iParam0))
	{
		return;
	}
	if (Global_1385495 >= 32)
	{
		return;
	}
	Global_1385462[Global_1385495] = iParam0;
	Global_1385495++;
	if (bParam1)
	{
	}
}

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385495)
	{
		if (Global_1385462[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1385455 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385455)
	{
		if (Global_1385294[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA78F5AF1E2C5FDAB(Global_1385294[iVar0 /*5*/].f_2) && unk_0x7E9D01EC258BE530(Global_1385294[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_138(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_138(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1385455)
	{
		return;
	}
	if (unk_0xA78F5AF1E2C5FDAB(Global_1385294[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1385294[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x5C3CC258CDC18660(Global_1385294[iParam0 /*5*/].f_2), 64);
			unk_0x41E6991C564E55CD(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xF0502EB385D5B3C4(Global_1385294[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1385455)
	{
		Global_1385294[iVar32 /*5*/] = { Global_1385294[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_139(&(Global_1385294[iVar32 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_139(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_140();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x393E9918BC37548A())
	{
		uParam0->f_3 = unk_0x169A8AC9F93C2727();
	}
}

int func_140()
{
	return -1;
}

void func_141()
{
	Global_1366857.f_40.f_9 = 4;
}

int func_142(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_141();
	bVar0 = false;
	return func_110(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_143(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_144(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_144(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_140();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xA09A99AC02B24954(iVar0);
		iVar1 = func_134(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x7D08A7F177668824(unk_0x169A8AC9F93C2727(), Global_1366857.f_40.f_13))
			{
				return 0;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_133(sParam5, bParam6, &iVar3);
	uVar5 = func_131(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x9591DE0F00127F2A(sParam8))
	{
		iVar6++;
		if (!unk_0x9591DE0F00127F2A(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x2553916E420E8EF0(sVar4, " "))
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
		if (unk_0xA2BC31158C8CEFD2(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x9591DE0F00127F2A(sVar2))
	{
		bVar12 = func_153(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_146(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(uParam4, 0))
	{
		func_113();
	}
	func_145();
	func_112();
	func_111();
	return 1;
}

void func_145()
{
	Global_1366857.f_40.f_9 = 3;
}

int func_146(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x3B76114EC84D5812(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_147(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_85(iParam0) };
			Global_8043 = iParam0;
			unk_0xA1E7A40E1F56E511(&Global_7356, 1);
			unk_0xA1E7A40E1F56E511(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_147(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x2553916E420E8EF0(sParam14, sParam15))
	{
	}
	func_90();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
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
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if (unk_0x2A58EB47597ACFA3(unk_0x0FA8183DAD2B3203()))
			{
				return 0;
			}
		}
		if (Global_111560.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x222F76006659B0EB(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x222F76006659B0EB(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_152() == 0)
	{
		func_150();
		return 0;
	}
	func_149(Global_21872);
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/]), sParam1, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111560.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111560.f_14136[Global_21872 /*104*/].f_26 = uParam8;
	Global_111560.f_14136[Global_21872 /*104*/].f_29 = uParam9;
	Global_111560.f_14136[Global_21872 /*104*/].f_30 = uParam12;
	Global_111560.f_14136[Global_21872 /*104*/].f_31 = uParam11;
	Global_111560.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (unk_0xA2BC31158C8CEFD2(Global_7356, 10))
	{
		Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_125(0);
		func_125(2);
		func_125(1);
	}
	else
	{
		func_90();
		switch (iParam16)
		{
			case 3:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_125(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_125(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_125(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_125(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_7356, 10))
		{
			Global_111560.f_14046[0 /*20*/].f_17 = 1;
			Global_111560.f_14046[1 /*20*/].f_17 = 1;
			Global_111560.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111560.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111560.f_14046[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111560.f_14046[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111560.f_14046[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_90();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_124())
			{
				unk_0x9964F5BBD9415AB7(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_123(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_120(1);
			func_123(Global_19467, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_148(iParam0, sParam1);
	return 1;
}

void func_148(int iParam0, char* sParam1)
{
	if (!func_117())
	{
		return;
	}
	unk_0x0077F15613D36993(iParam0, 1654525105, unk_0xA8C462EF7D9DC564(sParam1), 0);
}

void func_149(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xCA3729F4C3A9E58A();
	uVar1 = unk_0x8F7802EF0E800F47();
	uVar2 = unk_0xA63165E74E9A042B();
	uVar3 = unk_0xFC6CBA5BA4E459A9();
	uVar4 = unk_0x4EBF6D59B95D29C2() + 1;
	uVar5 = unk_0x10CB21C87A35156F();
	Global_111560.f_14136[iParam0 /*104*/].f_18 = uVar0;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
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
	Global_21872 = 34;
	Global_111560.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_151(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_151(struct<6> Param0, struct<6> Param6)
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

int func_152()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
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
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111560.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111560.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_151(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

int func_153(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x3B76114EC84D5812(&Global_7356, 10);
	iVar0 = 3;
	if (func_147(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_85(iParam0) };
			Global_8043 = iParam0;
			StringCopy(&Global_8044, sParam5, 64);
			unk_0xA1E7A40E1F56E511(&Global_7356, 1);
			unk_0xA1E7A40E1F56E511(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_154(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
	}
	if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
	{
		return 0;
	}
	func_145();
	bVar0 = true;
	if (func_144(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_109(120000);
		return 1;
	}
	return 0;
}

int func_155(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xA2BC31158C8CEFD2(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xA2BC31158C8CEFD2(uParam4, 4))
	{
		bVar0 = func_172(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_161(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xA2BC31158C8CEFD2(uParam4, 3))
		{
			func_160(1);
		}
		if (unk_0xA2BC31158C8CEFD2(uParam4, 5))
		{
			func_159(1);
		}
		func_158();
		func_112();
		func_157();
		func_156();
		return 1;
	}
	return 0;
}

void func_156()
{
	Global_2540666 = 0;
}

void func_157()
{
	Global_1366857.f_57 = 1;
	Global_1366857.f_57.f_1 = 0;
}

void func_158()
{
	Global_1366857.f_40.f_9 = 1;
}

void func_159(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7358, 0);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7358, 0);
	}
}

void func_160(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 20);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 20);
	}
}

int func_161(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_171(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_162(sParam3, iParam4, bParam7);
}

int func_162(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x623942A4F366F9BB(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_170();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x04C7A9862FF737E9())
		{
			return 0;
		}
		if (func_169(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_168();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x3B76114EC84D5812(&Global_7356, 20);
			unk_0x3B76114EC84D5812(&Global_7357, 17);
			unk_0x3B76114EC84D5812(&Global_7358, 0);
			if (bParam2)
			{
				func_90();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (func_167())
				{
					return 0;
				}
				if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
					if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
				}
			}
			if (func_166())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
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
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 9))
				{
					return 0;
				}
			}
			func_165();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_164();
		func_163();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_170();
	}
	return 0;
}

void func_163()
{
	if (!func_117())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

void func_164()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x623942A4F366F9BB(0);
	Global_20805 = 1;
}

void func_165()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x3B76114EC84D5812(&Global_7357, 16);
}

int func_166()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_167()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
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

void func_168()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_169(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

void func_170()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if ((unk_0x31634D65216B86B6() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

void func_171(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_172(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_171(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_162(sParam3, iParam4, bParam7);
}

int func_173(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
	}
	if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
	{
		return 0;
	}
	if (func_175(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_174();
		func_158();
		func_112();
		func_157();
		func_156();
		return 1;
	}
	return 0;
}

void func_174()
{
	Global_21823 = 0;
}

bool func_175(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_171(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_162(sParam3, iParam4, bParam8);
}

int func_176(var uParam0, char* sParam1, char* sParam2)
{
	if (func_178(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_177();
		func_112();
		func_157();
		return 1;
	}
	return 0;
}

void func_177()
{
	Global_1366857.f_40.f_9 = 2;
}

bool func_178(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_171(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_162(sParam2, iParam3, 0);
}

void func_179()
{
	Global_1366857.f_55 = Global_1366857.f_40.f_1;
	Global_1366857.f_55.f_1 = Global_1366857.f_40.f_10;
}

void func_180()
{
	Global_1366857.f_40 = 1;
}

bool func_181()
{
	return Global_1366857.f_40 == 1;
}

int func_182(int iParam0, int iParam1, int iParam2)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	if (Global_1366857.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1366857.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_183(int iParam0)
{
	if (!func_184())
	{
		return 0;
	}
	if (!Global_1366857.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_184()
{
	if (Global_1366857.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_185(var uParam0)
{
	if (func_188())
	{
		return 0;
	}
	if (func_80())
	{
		return 0;
	}
	if (func_82(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1662552 || func_187())
	{
		return 0;
	}
	if (!unk_0xA2BC31158C8CEFD2(uParam0, 6))
	{
		if (func_186())
		{
			return 0;
		}
	}
	return 1;
}

bool func_186()
{
	return unk_0x7D08A7F177668824(unk_0x169A8AC9F93C2727(), Global_1383933);
}

int func_187()
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_188()
{
	return func_166();
}

int func_189(int iParam0, int iParam1, int iParam2)
{
	if (!func_80())
	{
		return 0;
	}
	return func_182(iParam0, iParam1, iParam2);
}

int func_190(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0xA8C462EF7D9DC564(&cVar0);
}

bool func_191()
{
	return Global_2537824.f_1;
}

int func_192()
{
	if (Global_1367045.f_2)
	{
		return 1;
	}
	return func_193();
}

bool func_193()
{
	return func_188();
}

void func_194(int iParam0)
{
	Global_2541154.f_1072 = iParam0;
}

int func_195()
{
	if (func_196("HLP_TAXI3"))
	{
		return 1;
	}
	if (func_196("HLP_SOC1"))
	{
		return 1;
	}
	if (func_196("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

bool func_196(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

void func_197(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_198(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_21(uParam0, bParam2, 0);
	if (unk_0x393E9918BC37548A() && !bParam2)
	{
		if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x9B35D07DCD0F0B43(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_199(var uParam0)
{
	return uParam0->f_1;
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142, 8))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 8);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142, 8))
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 8);
	}
}

bool func_201()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142, 8);
}

void func_202()
{
	unk_0xCF33E56642B34516(800);
	if (!bLocal_759 || bLocal_760)
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
		}
	}
	if (!bLocal_760)
	{
		Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 = 0;
	}
	else
	{
		Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 = 3;
	}
}

void func_203()
{
	if (func_207(&Local_94, &(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_4)))
	{
		Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 = -1;
	}
	func_204(&Local_94);
}

void func_204(var uParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xCD97B9861557C025();
	switch (iLocal_755)
	{
		case 0:
			if (unk_0xA2BC31158C8CEFD2(*uParam0, 18))
			{
				if (!func_199(&uLocal_761))
				{
					func_21(&uLocal_761, 0, 0);
				}
				if (!bVar0)
				{
					if (!unk_0x0945988C02AF3025())
					{
						func_76("HLP_XP1", 9000);
						func_197(&uLocal_761);
						func_21(&uLocal_761, 0, 0);
						iLocal_755++;
					}
				}
				else if (func_198(&uLocal_761, 5000, 0))
				{
					iLocal_755++;
					func_197(&uLocal_761);
					func_21(&uLocal_761, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!unk_0x0945988C02AF3025())
				{
					func_76("HLP_XP2", 9000);
					func_197(&uLocal_761);
					func_21(&uLocal_761, 0, 0);
					iLocal_755++;
				}
			}
			else if (func_198(&uLocal_761, 5000, 0))
			{
				iLocal_755++;
				func_197(&uLocal_761);
				func_21(&uLocal_761, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!unk_0x0945988C02AF3025())
				{
					func_76("HLP_RNK1", 9000);
					func_206(1);
					Global_2531497.f_1853 = 1;
					func_205(1, 0, -1);
					func_197(&uLocal_761);
					func_21(&uLocal_761, 0, 0);
					iLocal_755++;
				}
			}
			else if (func_198(&uLocal_761, 5000, 0))
			{
				iLocal_755++;
				func_197(&uLocal_761);
				func_21(&uLocal_761, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!unk_0x0945988C02AF3025())
				{
					func_194(0);
					if (unk_0xDB02E0A2E60C82EB() || unk_0x77BA37DB22C66465())
					{
						func_76("HLP_CASHXBX", 9000);
					}
					else if (unk_0xDC143D98E1977B20() || unk_0x39FDED461BF385C3())
					{
						func_76("HLP_CASHPSN", 9000);
					}
					else
					{
						func_76("HLP_CASHGEN", 9000);
					}
					func_197(&uLocal_761);
					func_21(&uLocal_761, 0, 0);
					iLocal_755 = 99;
				}
			}
			else if (func_198(&uLocal_761, 5000, 0))
			{
				iLocal_755 = 99;
				func_197(&uLocal_761);
				func_21(&uLocal_761, 0, 0);
			}
			break;
		
		case 99:
			if (!unk_0xA2BC31158C8CEFD2(uLocal_752, 2))
			{
				unk_0xA1E7A40E1F56E511(&uLocal_752, 2);
			}
			break;
	}
}

void func_205(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1373500.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xA1E7A40E1F56E511(&(Global_1373500.f_1046), iParam0);
			}
			else
			{
				unk_0x3B76114EC84D5812(&(Global_1373500.f_1046), iParam0);
			}
			break;
	}
}

void func_206(int iParam0)
{
	Global_2531497.f_4531 = iParam0;
}

int func_207(var uParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	bool bVar8;
	
	if (!unk_0xA2BC31158C8CEFD2(*uParam0, 13))
	{
		if (unk_0xD2652A8A890B29BA(unk_0xB68B0B87CF6C51B5()))
		{
			Var5 = { unk_0x35E6C89769982E5F(unk_0xB68B0B87CF6C51B5()) };
			if ((Var5.f_0 != 0f || Var5.f_1 != 0f) || Var5.f_2 != 0f)
			{
				unk_0xF819E1DA22C9AA6F(Var5, 0f, 0f, 0f);
				if (!unk_0xA2BC31158C8CEFD2(*uParam0, 14))
				{
					unk_0xA1E7A40E1F56E511(uParam0, 14);
				}
			}
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(*uParam0, 14))
	{
		unk_0x177A62AB5B680108();
		unk_0x3B76114EC84D5812(uParam0, 14);
	}
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		unk_0x70CBCB37A00F34A2(unk_0x0FA8183DAD2B3203(), 337, 1);
	}
	func_379(uParam0);
	unk_0xFF405DD22541A5FF(1f);
	func_373(uParam0);
	func_372(unk_0x7C7787D2D7139A85());
	if (!unk_0xA2BC31158C8CEFD2(*uParam0, 31))
	{
		if (uParam0->f_6 > 0)
		{
			uParam0->f_32 = unk_0x2BA8B1187A604700(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
			if (uParam0->f_32 != 0)
			{
				unk_0x38BE6DF48F0AC974(uParam0->f_32);
				unk_0xA1E7A40E1F56E511(uParam0, 31);
			}
		}
	}
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (unk_0x222F76006659B0EB(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (unk_0x222F76006659B0EB(func_371()) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2531497.f_1852)
				{
					Global_2531497.f_1852 = 1;
					unk_0x365D411106A30619(0);
				}
				if (!func_201())
				{
					func_200(1);
				}
				if (!unk_0x260395BA7F0C83CB() && !unk_0xA710300CD13D2877())
				{
					unk_0x5800A2599806C837(800);
				}
				if (!func_199(&(uParam0->f_15)))
				{
					func_21(&(uParam0->f_15), 0, 0);
				}
				unk_0x749CA887CB0AFEC9(&Global_1663010);
				Global_1663011 = 0;
				Global_1663013 = 0;
				Global_1663012 = 0;
				Global_1663014 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0x260395BA7F0C83CB())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_360(0, 0, 0, 1, 1, 1, 0);
					unk_0x4017F1306B802E03(1, 0);
					func_404(1);
					unk_0x8477769A3BA1A3F1(1);
					unk_0xD5153FAF9C9EA1CD("EXTRASUNNY");
					unk_0xB1CB008AB1B554E2(19, 0, 0);
					unk_0x55EE612A171C4D15(1);
					func_359(0);
					unk_0x40BF85B257E0DA20(0);
					func_351(1, 0);
					func_329(1, 1);
					if (unk_0x222F76006659B0EB(joaat("fm_intro")) < 1 || !func_328())
					{
						if (uParam0->f_292)
						{
							if (func_327() == 0)
							{
								unk_0xBAB60A3D0D86F57B("GTAO_INTRO_MALE");
								unk_0xFF12F7A3B62815F5(1);
							}
						}
					}
					func_320(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					unk_0x3B76114EC84D5812(uParam0, 0);
					unk_0x3B76114EC84D5812(uParam0, 1);
					unk_0x3B76114EC84D5812(uParam0, 2);
					unk_0x3B76114EC84D5812(uParam0, 9);
					unk_0xA1E7A40E1F56E511(uParam0, 7);
					uParam0->f_122 = unk_0x740FE9B7B3FE1CE5(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				unk_0x6BB2B1818CAE531E(joaat("frogger"));
				if (unk_0x6DF9C43E3CC645BC(joaat("frogger")))
				{
					if (!uParam0->f_292 || unk_0x3F2859BE6DBD09E9())
					{
						if (func_317())
						{
							unk_0x562E3C6CAE82C1BD(0);
							func_312(1, 1);
							unk_0x85348131606ACBB3(0);
							unk_0x0D23E3918F7AF11B(1);
							if (!func_193())
							{
								func_311();
							}
							func_206(0);
							func_310();
							unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), Global_1312553, 1, 0, 0, 1);
							unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 1);
							unk_0x8C85E8C71AD74415(unk_0x0FA8183DAD2B3203(), false, 0);
							unk_0x60F310C72311BCA8(0);
							if (unk_0x39A01A052D9B5FF0(unk_0xFD483C98AEBF2162()))
							{
								unk_0xBC0D06064C5B5413(unk_0xFD483C98AEBF2162(), 0f);
							}
							unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), true);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0x16587C6F71675106())
				{
					if (!unk_0xA2BC31158C8CEFD2(*uParam0, 4))
					{
						if (func_309() == 65 || func_309() == 66)
						{
							unk_0x177A62AB5B680108();
							unk_0xC8BCE0DAF7629AD0(754.2219f, 1226.831f, 356.5081f, func_308(-14.367f, 0f, 157.3524f), 100f, 0);
							func_197(&(uParam0->f_17));
							func_21(&(uParam0->f_17), 0, 0);
							unk_0xA1E7A40E1F56E511(uParam0, 4);
						}
					}
					else if (unk_0xF45B7CAEA9F06737("FM_INTRO_START") && (unk_0x235F15F5EE0D236B() || func_198(&(uParam0->f_17), 5000, 0)))
					{
						if (!unk_0xA2BC31158C8CEFD2(*uParam0, 24))
						{
							if (unk_0xA2BC31158C8CEFD2(*uParam0, 7))
							{
								unk_0x81995F6F93D8C987("FM_INTRO_START");
								unk_0xA1E7A40E1F56E511(uParam0, 24);
								unk_0xA1E7A40E1F56E511(uParam0, 21);
							}
						}
						else if (unk_0xB4556AE4D5AE9D80() > 0)
						{
							unk_0x7D4946564F5947D1();
							unk_0x9B4A8850E9552696(6);
							if (!unk_0xD2652A8A890B29BA(uParam0->f_7))
							{
								uParam0->f_7 = unk_0x87B0FFB353287F00("DEFAULT_SCRIPTED_CAMERA", 0);
								unk_0x0472F75F711AABCE(uParam0->f_7, 1);
							}
							unk_0x88C9848645E010B6(uParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							unk_0x88C9848645E010B6(uParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							unk_0x678A9FFAA65D1846(uParam0->f_7, "HAND_SHAKE", 0.15f);
							unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 1, 0);
							func_307(uParam0);
							unk_0xA1E7A40E1F56E511(uParam0, 11);
							if (uParam0->f_292)
							{
								unk_0x0A1D0B0A1518A5D2(9, 9, 9, 9);
								unk_0xF082058FC04A7400();
							}
							unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), true);
							if (unk_0x260395BA7F0C83CB())
							{
								unk_0xCF33E56642B34516(800);
							}
							uParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_306(uParam0, 6);
				func_305(uParam0);
				if (func_304(uParam0, 6, 0))
				{
					unk_0x0D23E3918F7AF11B(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!unk_0xA2BC31158C8CEFD2(*uParam0, 2))
				{
					unk_0x0D23E3918F7AF11B(1);
					func_76("FMIC_INTRO2", -1);
					unk_0xA1E7A40E1F56E511(uParam0, 2);
				}
				unk_0x88C9848645E010B6(uParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				unk_0x88C9848645E010B6(uParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				unk_0x0A1D0B0A1518A5D2(9, 13, 9, 13);
				uParam0->f_6 = 8;
				break;
			
			case 8:
				func_306(uParam0, 8);
				if (func_305(uParam0))
				{
					func_303(uParam0);
					if (func_304(uParam0, 8, 0))
					{
						uParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!unk_0xA2BC31158C8CEFD2(*uParam0, 10))
				{
					func_302();
					unk_0xA1E7A40E1F56E511(uParam0, 10);
				}
				unk_0x88C9848645E010B6(uParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				unk_0x88C9848645E010B6(uParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (unk_0xD960230552BC4165(uParam0->f_48, 0))
				{
					unk_0xF67B8373C76AEE06(uParam0->f_48);
					unk_0x2BBEC4B37B923F4B(uParam0->f_48, true, 0);
					unk_0x3231D7D927FBC2FC(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0xD960230552BC4165(uParam0->f_48, 0))
				{
					unk_0x3231D7D927FBC2FC(uParam0->f_48);
				}
				func_306(uParam0, 10);
				if (func_301())
				{
					if (func_300(uParam0))
					{
						if (func_303(uParam0))
						{
							if (func_304(uParam0, 10, 0))
							{
								if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
								{
									unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), true);
								}
								fVar0 = 5000f;
								if (unk_0xD960230552BC4165(uParam0->f_92[0], 0))
								{
									unk_0x10DFCD426DB9FAB3(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									unk_0xF7AA5991D9BC90F2(uParam0->f_92[0], fVar0);
								}
								if (unk_0xD960230552BC4165(uParam0->f_92[1], 0))
								{
									unk_0x10DFCD426DB9FAB3(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									unk_0xF7AA5991D9BC90F2(uParam0->f_92[1], fVar0);
								}
								if (unk_0xD960230552BC4165(uParam0->f_92[2], 0))
								{
									unk_0x10DFCD426DB9FAB3(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									unk_0xF7AA5991D9BC90F2(uParam0->f_92[2], fVar0);
								}
								if (unk_0xD960230552BC4165(uParam0->f_92[3], 0))
								{
									unk_0x10DFCD426DB9FAB3(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									unk_0xF7AA5991D9BC90F2(uParam0->f_92[3], fVar0);
								}
								if (unk_0xD960230552BC4165(uParam0->f_92[4], 0))
								{
									unk_0x10DFCD426DB9FAB3(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									unk_0xF7AA5991D9BC90F2(uParam0->f_92[4], fVar0);
								}
								unk_0xA1E7A40E1F56E511(uParam0, 15);
								unk_0xCF33E56642B34516(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					unk_0xB1CB008AB1B554E2(16, 0, 0);
					func_299(uParam0);
					func_298(uParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					unk_0x0E548D25BBAC1AA4(uParam0->f_7, 1);
					unk_0x3B5A16EB2D59D4F6(uParam0->f_7);
					unk_0xDC5BA18043353983(uParam0->f_7, 0);
					unk_0x7D17F1A2E0EEDBB9("MP_INTRO_RACE_SCENE");
					unk_0x0A1D0B0A1518A5D2(9, 12, 9, 12);
					func_296(uParam0, 14);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				if (!unk_0xA2BC31158C8CEFD2(*uParam0, 5))
				{
					func_76("FMIC_RACE1", -1);
					unk_0xA1E7A40E1F56E511(uParam0, 5);
				}
				func_306(uParam0, 14);
				if (func_304(uParam0, 14, 0))
				{
					func_295(uParam0, 23539f, 0);
					unk_0xB1CB008AB1B554E2(16, 0, 0);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_296(uParam0, 15);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				if (!unk_0xA2BC31158C8CEFD2(uParam0->f_3, 0))
				{
					func_284(uParam0);
				}
				else if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				func_306(uParam0, 15);
				if (func_304(uParam0, 15, 0))
				{
					func_295(uParam0, 28833.33f, 75f);
					unk_0xB1CB008AB1B554E2(16, 0, 0);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_274(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_296(uParam0, 16);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				if (!unk_0xA2BC31158C8CEFD2(uParam0->f_3, 0))
				{
					func_284(uParam0);
				}
				else if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				func_306(uParam0, 16);
				if (func_304(uParam0, 16, 0))
				{
					func_295(uParam0, 29700f, 0);
					unk_0xB1CB008AB1B554E2(16, 0, 0);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0xE151B846AFD22A97(uParam0->f_9, 0.7f);
					func_296(uParam0, 17);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				if (!unk_0xA2BC31158C8CEFD2(*uParam0, 6))
				{
					unk_0xA1E7A40E1F56E511(uParam0, 6);
					func_76("FMIC_RACE2", -1);
				}
				if (!unk_0xA2BC31158C8CEFD2(uParam0->f_3, 0))
				{
					func_284(uParam0);
				}
				else if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				func_306(uParam0, 17);
				if (func_304(uParam0, 17, 0))
				{
					func_295(uParam0, 36450f, 0);
					unk_0xB1CB008AB1B554E2(16, 0, 0);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 18);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				if (!unk_0xA2BC31158C8CEFD2(uParam0->f_3, 0))
				{
					func_284(uParam0);
				}
				else if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				func_306(uParam0, 18);
				if (func_273() && func_304(uParam0, 18, 0))
				{
					func_295(uParam0, 43650f, 0);
					unk_0xB1CB008AB1B554E2(16, 0, 0);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					if (unk_0xD4B321D9096B01FC(uParam0->f_92[2]))
					{
						unk_0xBD22862A2C5FD6DF(&(uParam0->f_92[2]));
					}
					if (unk_0xD4B321D9096B01FC(uParam0->f_92[3]))
					{
						unk_0xBD22862A2C5FD6DF(&(uParam0->f_92[3]));
					}
					if (unk_0xD4B321D9096B01FC(uParam0->f_92[4]))
					{
						unk_0xBD22862A2C5FD6DF(&(uParam0->f_92[4]));
					}
					func_298(uParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 19);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				if (!unk_0xA2BC31158C8CEFD2(uParam0->f_3, 0))
				{
					func_284(uParam0);
				}
				else
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (unk_0x2A29278E6E14C161(uParam0->f_32))
							{
								if (!unk_0xF4B969E0807E76C7(uParam0->f_91, 0))
								{
									unk_0x1B487E3EDBD79982(uParam0->f_91, uParam0->f_32, unk_0xA8C462EF7D9DC564("GtaMloRoom001"));
								}
								unk_0x0E7DFCFC6E6D9A0C("SE_MP_GARAGE_L_RADIO", 0);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!unk_0xF4B969E0807E76C7(uParam0->f_49[iVar4], 0))
									{
										unk_0x1B487E3EDBD79982(uParam0->f_49[iVar4], uParam0->f_32, unk_0xA8C462EF7D9DC564("GtaMloRoom001"));
									}
									iVar4++;
								}
								unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 6);
							}
						}
					}
					if (func_283(uParam0) && func_277(uParam0))
					{
						func_275(uParam0);
					}
				}
				func_272(uParam0);
				func_271(uParam0);
				func_306(uParam0, 19);
				if (func_304(uParam0, 19, 0) && unk_0xA2BC31158C8CEFD2(uParam0->f_3, 0))
				{
					if (unk_0xA2BC31158C8CEFD2(*uParam0, 12))
					{
						unk_0x3B76114EC84D5812(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_304(uParam0, 19, -4968))
				{
					if (!unk_0xA2BC31158C8CEFD2(*uParam0, 12))
					{
						unk_0x0D23E3918F7AF11B(1);
						unk_0xA1E7A40E1F56E511(uParam0, 12);
					}
				}
				else if (func_304(uParam0, 19, -5618))
				{
					if (!unk_0xA2BC31158C8CEFD2(*uParam0, 30))
					{
						unk_0x3E5A3FD805488EB9("MP_intro_logo", 0, 0);
						unk_0xA1E7A40E1F56E511(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_272(uParam0);
				func_271(uParam0);
				if (unk_0xA2BC31158C8CEFD2(uParam0->f_3, 0))
				{
					if (!unk_0xD2652A8A890B29BA(uParam0->f_7))
					{
						uParam0->f_7 = unk_0x87B0FFB353287F00("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					unk_0x0472F75F711AABCE(uParam0->f_7, 1);
					unk_0x88C9848645E010B6(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					unk_0x88C9848645E010B6(uParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					unk_0x678A9FFAA65D1846(uParam0->f_7, "HAND_SHAKE", 0.1f);
					unk_0x8F9E1932167D3D43(uParam0->f_32, unk_0xA8C462EF7D9DC564("GtaMloRoom001"));
					unk_0x0E7DFCFC6E6D9A0C("SE_MP_GARAGE_L_RADIO", 0);
					unk_0x9B4A8850E9552696(0);
					unk_0x418ABE435B684083(uParam0->f_10, 0f);
					if (!unk_0x2BF5E63466422C38(uParam0->f_91))
					{
						unk_0xCFEC09B98C6C5993(uParam0->f_91, 0, 0);
					}
					if (unk_0x6FE3A7E505FEC20C("MP_INTRO_RACE_SCENE"))
					{
						unk_0x8E3496DF5BF7F24D("MP_INTRO_RACE_SCENE");
					}
					unk_0x0A1D0B0A1518A5D2(9, 13, 9, 13);
					func_270(uParam0);
					func_269();
					func_76("FMIC_GAR", -1);
					uParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_272(uParam0);
				func_271(uParam0);
				func_306(uParam0, 23);
				if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				if (func_304(uParam0, 23, 0))
				{
					unk_0x88C9848645E010B6(uParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					unk_0x88C9848645E010B6(uParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					unk_0x418ABE435B684083(uParam0->f_10, 0f);
					if (!unk_0x2BF5E63466422C38(uParam0->f_91))
					{
						unk_0xCFEC09B98C6C5993(uParam0->f_91, 0, 0);
					}
					func_267(uParam0, 0);
					func_267(uParam0, 1);
					func_267(uParam0, 5);
					func_267(uParam0, 6);
					uParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_272(uParam0);
				func_271(uParam0);
				func_306(uParam0, 24);
				if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				if (func_304(uParam0, 24, 0))
				{
					uParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_272(uParam0);
				func_271(uParam0);
				unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				unk_0xA1E7A40E1F56E511(uParam0, 13);
				unk_0x88C9848645E010B6(uParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				unk_0x88C9848645E010B6(uParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				unk_0xB1CB008AB1B554E2(18, 0, 0);
				func_267(uParam0, 2);
				func_267(uParam0, 7);
				unk_0xE0AC40EF164A2569(func_266());
				if (unk_0xD4B321D9096B01FC(uParam0->f_91))
				{
					unk_0x4F058F27442031CC(&(uParam0->f_91));
				}
				unk_0xA1E7A40E1F56E511(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_272(uParam0);
				func_271(uParam0);
				if (!unk_0xA2BC31158C8CEFD2(*uParam0, 8))
				{
					unk_0xA1E7A40E1F56E511(uParam0, 8);
				}
				if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				func_306(uParam0, 28);
				if ((unk_0xF45B7CAEA9F06737("FM_INTRO_DRIVE_START") && unk_0xA2BC31158C8CEFD2(uParam0->f_3, 3)) && func_304(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
					{
						if (func_263(uParam0))
						{
							unk_0x38F2C110546BD846(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							unk_0x38F2C110546BD846(unk_0x0FA8183DAD2B3203(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x38F2C110546BD846(unk_0x0FA8183DAD2B3203(), "MP_Male_Character", 0, 0, 0);
							unk_0x38F2C110546BD846(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_263(uParam0))
				{
					unk_0x38F2C110546BD846(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					unk_0x38F2C110546BD846(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!unk_0xF4B969E0807E76C7(uParam0->f_35, 0))
				{
					unk_0x38F2C110546BD846(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0xF4B969E0807E76C7(uParam0->f_34, 0))
				{
					unk_0x38F2C110546BD846(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0xF4B969E0807E76C7(uParam0->f_33, 0))
				{
					unk_0x2BBEC4B37B923F4B(uParam0->f_33, true, 0);
					unk_0x38F2C110546BD846(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_261(uParam0);
				unk_0xF782235065EF1CC8("CONTRAILS", 0);
				unk_0x0A1D0B0A1518A5D2(9, 9, 9, 9);
				func_76("FMIC_TENN", -1);
				unk_0x3268D119250624E8(4);
				func_253(1, 1, 1, 0, 0, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0x33D7ABC47E81DCF9())
				{
					if (uParam0->f_32 != 0)
					{
						unk_0xBB907B119D16E32C(uParam0->f_32);
					}
					func_252(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (unk_0x9B35D07DCD0F0B43() - uParam0->f_13);
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
					if (func_263(uParam0))
					{
						if (unk_0xDFB741CB32BE818E("MP_Female_Character", 0))
						{
							if (unk_0xD960230552BC4165(uParam0->f_34, 0))
							{
								if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
								{
									if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
									{
										unk_0x31A7662B885C7549(unk_0x0FA8183DAD2B3203(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (unk_0xDFB741CB32BE818E("MP_Male_Character", 0))
					{
						if (unk_0xD960230552BC4165(uParam0->f_34, 0))
						{
							if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
							{
								if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
								{
									unk_0x31A7662B885C7549(unk_0x0FA8183DAD2B3203(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (unk_0xDFB741CB32BE818E("LAMAR", 0))
				{
					if (unk_0xD960230552BC4165(uParam0->f_34, 0))
					{
						if (!unk_0x2BF5E63466422C38(uParam0->f_35))
						{
							if (!unk_0x5294582CE404D3F4(uParam0->f_35, 0))
							{
								unk_0x31A7662B885C7549(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								unk_0xCFEC09B98C6C5993(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (unk_0xDFB741CB32BE818E("MP_Lamar_Car", 0))
				{
					if (unk_0xD960230552BC4165(uParam0->f_34, 0))
					{
						unk_0xB90231068DCFFBA1(uParam0->f_34, 1, 1, 0);
						unk_0xCB3446C6A91D1A78(uParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						unk_0x5A2B7C446C0CF087(uParam0->f_34, -106.11f);
						func_251(uParam0, 3099.997f);
						unk_0x261C1CE9E114E9F1(uParam0->f_34, 1);
					}
				}
				if (unk_0x5038F629059483A1(0))
				{
					unk_0xB1CB008AB1B554E2(21, 0, 0);
					func_296(uParam0, 33);
					func_298(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 29))
				{
					if (unk_0x86D254DAA7A8D910() || unk_0xD9B1B8CA88778543() > 3254)
					{
						unk_0x3B76114EC84D5812(uParam0, 29);
					}
				}
				if ((func_250(uParam0) && func_249(uParam0)) && !unk_0x33D7ABC47E81DCF9())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (unk_0x9B35D07DCD0F0B43() - uParam0->f_13);
					}
					else
					{
						uParam0->f_29 = 134784;
						if (func_263(uParam0))
						{
							uParam0->f_28 = 134784;
						}
						else
						{
							uParam0->f_28 = 134784;
						}
					}
					unk_0x3B134B2577EBD1FA();
					unk_0x67DAC9AA604EB02C();
					if (unk_0xA2BC31158C8CEFD2(*uParam0, 7))
					{
						unk_0x81995F6F93D8C987("FM_INTRO_DRIVE_START");
						unk_0xA1E7A40E1F56E511(uParam0, 21);
					}
					if (!unk_0x5E05FB12444196F6())
					{
						unk_0xBFE927EB9D89F26B(0);
					}
					if (!unk_0xA2BC31158C8CEFD2(*uParam1, 1))
					{
						unk_0xA1E7A40E1F56E511(uParam1, 1);
					}
					func_248(uParam0);
					func_247(uParam0);
					func_253(0, 1, 1, 0, 0, 0);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					unk_0x3B76114EC84D5812(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x9B35D07DCD0F0B43() - (uParam0->f_26 + unk_0xD9B1B8CA88778543()));
					}
					if (!unk_0xA2BC31158C8CEFD2(*uParam0, 22))
					{
						if (unk_0x634EC09651E4079C() == 1)
						{
							unk_0xB1CB008AB1B554E2(19, 59, 0);
							unk_0xA1E7A40E1F56E511(uParam0, 22);
						}
					}
					if (func_245(uParam0))
					{
						if (unk_0x634EC09651E4079C() == 2)
						{
							if (!unk_0xA2BC31158C8CEFD2(*uParam0, 18))
							{
								unk_0xA1E7A40E1F56E511(uParam0, 18);
							}
							if (unk_0xD9B1B8CA88778543() > 23146)
							{
								if (!unk_0xA2BC31158C8CEFD2(*uParam0, 27))
								{
									unk_0xE959A3F2DBA9EC7D("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xA1E7A40E1F56E511(uParam0, 27);
								}
								if (!unk_0xA2BC31158C8CEFD2(*uParam0, 28))
								{
									unk_0xE959A3F2DBA9EC7D("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xA1E7A40E1F56E511(uParam0, 28);
								}
							}
							unk_0x1E967532E62F9F18(4950f);
							if (unk_0xA2BC31158C8CEFD2(*uParam0, 22))
							{
								unk_0xB1CB008AB1B554E2(21, 0, 0);
								unk_0x3B76114EC84D5812(uParam0, 22);
							}
							if (unk_0xD9B1B8CA88778543() > 23254)
							{
								func_244(uParam0);
							}
						}
					}
					if (unk_0x634EC09651E4079C() > 2)
					{
						func_247(uParam0);
						if (!unk_0xA2BC31158C8CEFD2(*uParam0, 22))
						{
							unk_0xB1CB008AB1B554E2(21, 0, 0);
							unk_0xA1E7A40E1F56E511(uParam0, 22);
						}
						if (unk_0xD960230552BC4165(uParam0->f_34, 0))
						{
							unk_0x2B5BFC8190E00E7A(uParam0->f_34);
							unk_0xB6883476E00DBD57(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = unk_0xD9B1B8CA88778543();
				}
				break;
			
			case 33:
				if (func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 1))
					{
						if (func_304(uParam0, 33, -5450))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 1);
							}
						}
					}
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 2))
					{
						if (func_304(uParam0, 33, -5450))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 1))
					{
						if (func_304(uParam0, 33, -5450))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					unk_0x7D17F1A2E0EEDBB9("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 33);
				func_242(uParam0);
				if (func_304(uParam0, 33, 0))
				{
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 2))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 2);
						}
					}
				}
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					if (!unk_0xF4B969E0807E76C7(uParam0->f_34, 0))
					{
						unk_0x9F2F93BD843587E2(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x0620057C4982F1C1(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x494374BCB9580EA5(uParam0->f_7, 33.3479f);
						unk_0x678A9FFAA65D1846(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x0472F75F711AABCE(uParam0->f_7, 1);
						if (!unk_0xF4B969E0807E76C7(uParam0->f_35, 0))
						{
							unk_0x2BBEC4B37B923F4B(uParam0->f_35, false, 0);
						}
						if (!unk_0xF4B969E0807E76C7(uParam0->f_36, 0))
						{
							unk_0x2BBEC4B37B923F4B(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xADFCDA47D7031CF3(uParam0->f_11, uParam0->f_34, unk_0xCC77DF450B31521D(uParam0->f_34, "seat_dside_f"));
						if (func_263(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADFCDA47D7031CF3(uParam0->f_12, uParam0->f_34, unk_0xCC77DF450B31521D(uParam0->f_34, "seat_pside_f"));
							unk_0x8582CCEB95B1F1BE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x8582CCEB95B1F1BE(unk_0x0FA8183DAD2B3203(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x418ABE435B684083(uParam0->f_11, 0.129f);
							unk_0x418ABE435B684083(uParam0->f_12, 0.129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADFCDA47D7031CF3(uParam0->f_12, uParam0->f_34, 0);
							unk_0x8582CCEB95B1F1BE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x8582CCEB95B1F1BE(unk_0x0FA8183DAD2B3203(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x418ABE435B684083(uParam0->f_11, 0.145f);
							unk_0x418ABE435B684083(uParam0->f_12, 0.145f);
						}
						unk_0xCFEC09B98C6C5993(uParam0->f_36, 0, 0);
						unk_0xCFEC09B98C6C5993(unk_0x0FA8183DAD2B3203(), 0, 0);
					}
					func_296(uParam0, 34);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 34);
				func_242(uParam0);
				if (func_304(uParam0, 34, 0))
				{
					func_251(uParam0, 18966.65f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 3))
					{
						if (func_304(uParam0, 34, 1100))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 3);
							}
						}
					}
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 4))
					{
						if (func_304(uParam0, 34, 1100))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 3))
					{
						if (func_304(uParam0, 34, 1000))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0xF4B969E0807E76C7(uParam0->f_35, 0))
					{
						unk_0x2BBEC4B37B923F4B(uParam0->f_35, true, 0);
					}
					if (!unk_0xF4B969E0807E76C7(uParam0->f_36, 0))
					{
						unk_0x2BBEC4B37B923F4B(uParam0->f_36, false, 0);
					}
					if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0) && !unk_0xF4B969E0807E76C7(uParam0->f_34, 0))
					{
						unk_0x31A7662B885C7549(unk_0x0FA8183DAD2B3203(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xCFEC09B98C6C5993(unk_0x0FA8183DAD2B3203(), 0, 0);
					}
					func_296(uParam0, 35);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 35);
				func_242(uParam0);
				if (func_304(uParam0, 35, 0))
				{
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 5))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 4))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 4);
						}
					}
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 5))
					{
						if (func_304(uParam0, 36, -3750))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					if (!unk_0xF4B969E0807E76C7(uParam0->f_34, 0))
					{
						unk_0x9F2F93BD843587E2(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x0620057C4982F1C1(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x494374BCB9580EA5(uParam0->f_7, 33.3479f);
						unk_0x678A9FFAA65D1846(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x0472F75F711AABCE(uParam0->f_7, 1);
						if (!unk_0xF4B969E0807E76C7(uParam0->f_35, 0))
						{
							unk_0x2BBEC4B37B923F4B(uParam0->f_35, false, 0);
						}
						if (!unk_0xF4B969E0807E76C7(uParam0->f_36, 0))
						{
							unk_0x2BBEC4B37B923F4B(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xADFCDA47D7031CF3(uParam0->f_11, uParam0->f_34, unk_0xCC77DF450B31521D(uParam0->f_34, "seat_dside_f"));
						if (func_263(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADFCDA47D7031CF3(uParam0->f_12, uParam0->f_34, unk_0xCC77DF450B31521D(uParam0->f_34, "seat_pside_f"));
							unk_0x8582CCEB95B1F1BE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x8582CCEB95B1F1BE(unk_0x0FA8183DAD2B3203(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x418ABE435B684083(uParam0->f_11, 0.363f);
							unk_0x418ABE435B684083(uParam0->f_12, 0.363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADFCDA47D7031CF3(uParam0->f_12, uParam0->f_34, 0);
							unk_0x8582CCEB95B1F1BE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x8582CCEB95B1F1BE(unk_0x0FA8183DAD2B3203(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x418ABE435B684083(uParam0->f_11, 0.298f);
							unk_0x418ABE435B684083(uParam0->f_12, 0.298f);
						}
						unk_0xCFEC09B98C6C5993(uParam0->f_36, 0, 0);
						unk_0xCFEC09B98C6C5993(unk_0x0FA8183DAD2B3203(), 0, 0);
					}
					func_296(uParam0, 36);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 36);
				func_242(uParam0);
				if (func_304(uParam0, 36, 0))
				{
					func_251(uParam0, 42700.96f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 6))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 6))
					{
						if (func_304(uParam0, 36, 1000))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0xF4B969E0807E76C7(uParam0->f_35, 0))
					{
						unk_0x2BBEC4B37B923F4B(uParam0->f_35, true, 0);
					}
					if (!unk_0xF4B969E0807E76C7(uParam0->f_36, 0))
					{
						unk_0x2BBEC4B37B923F4B(uParam0->f_36, false, 0);
					}
					if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0) && !unk_0xF4B969E0807E76C7(uParam0->f_34, 0))
					{
						unk_0x31A7662B885C7549(unk_0x0FA8183DAD2B3203(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xCFEC09B98C6C5993(unk_0x0FA8183DAD2B3203(), 0, 0);
					}
					func_296(uParam0, 37);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 37);
				func_242(uParam0);
				if (func_304(uParam0, 37, 0))
				{
					func_251(uParam0, 51033.28f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 7))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 7);
						}
					}
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 8))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 9))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 7))
					{
						if (func_304(uParam0, 37, 2500))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 38);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 38);
				func_242(uParam0);
				if (func_304(uParam0, 38, 0))
				{
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 8))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 9))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 9);
						}
					}
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 31))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_263(uParam0))
				{
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 31))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 31);
						}
					}
				}
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					if (!unk_0xF4B969E0807E76C7(uParam0->f_34, 0))
					{
						unk_0x9F2F93BD843587E2(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x0620057C4982F1C1(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x494374BCB9580EA5(uParam0->f_7, 33.3479f);
						unk_0x678A9FFAA65D1846(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x0472F75F711AABCE(uParam0->f_7, 1);
						if (!unk_0xF4B969E0807E76C7(uParam0->f_35, 0))
						{
							unk_0x2BBEC4B37B923F4B(uParam0->f_35, false, 0);
						}
						if (!unk_0xF4B969E0807E76C7(uParam0->f_36, 0))
						{
							unk_0x2BBEC4B37B923F4B(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xADFCDA47D7031CF3(uParam0->f_11, uParam0->f_34, unk_0xCC77DF450B31521D(uParam0->f_34, "seat_dside_f"));
						if (func_263(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADFCDA47D7031CF3(uParam0->f_12, uParam0->f_34, unk_0xCC77DF450B31521D(uParam0->f_34, "seat_pside_f"));
							unk_0x8582CCEB95B1F1BE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x8582CCEB95B1F1BE(unk_0x0FA8183DAD2B3203(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x418ABE435B684083(uParam0->f_11, 0.811f);
							unk_0x418ABE435B684083(uParam0->f_12, 0.811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADFCDA47D7031CF3(uParam0->f_12, uParam0->f_34, 0);
							unk_0x8582CCEB95B1F1BE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x8582CCEB95B1F1BE(unk_0x0FA8183DAD2B3203(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x418ABE435B684083(uParam0->f_11, 0.791f);
							unk_0x418ABE435B684083(uParam0->f_12, 0.791f);
						}
						unk_0xCFEC09B98C6C5993(uParam0->f_36, 0, 0);
						unk_0xCFEC09B98C6C5993(unk_0x0FA8183DAD2B3203(), 0, 0);
					}
					func_296(uParam0, 39);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 39);
				func_242(uParam0);
				if (func_304(uParam0, 39, 0))
				{
					func_251(uParam0, 85050f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!unk_0xA2BC31158C8CEFD2(uParam0->f_1, 31))
				{
					if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0xA1E7A40E1F56E511(&(uParam0->f_1), 31);
					}
				}
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x0A1D0B0A1518A5D2(9, 12, 9, 12);
					if (!unk_0xF4B969E0807E76C7(uParam0->f_35, 0))
					{
						unk_0x2BBEC4B37B923F4B(uParam0->f_35, true, 0);
					}
					if (!unk_0xF4B969E0807E76C7(uParam0->f_36, 0))
					{
						unk_0x2BBEC4B37B923F4B(uParam0->f_36, false, 0);
					}
					if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0) && !unk_0xF4B969E0807E76C7(uParam0->f_34, 0))
					{
						unk_0x31A7662B885C7549(unk_0x0FA8183DAD2B3203(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xCFEC09B98C6C5993(unk_0x0FA8183DAD2B3203(), 0, 0);
					}
					func_296(uParam0, 40);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 40);
				if (func_242(uParam0) && func_304(uParam0, 40, 0))
				{
					func_251(uParam0, 116366.5f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					unk_0xB1CB008AB1B554E2(0, 0, 0);
					func_298(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_296(uParam0, 41);
					unk_0xF9D17DFC768E51E6("CONTRAILS", 0);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 41);
				if (func_304(uParam0, 41, 0))
				{
					unk_0x068C42047DCBA3BB(1);
					func_251(uParam0, 127166.5f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_241(uParam0);
					func_298(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 42);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 42);
				if (func_304(uParam0, 42, 0))
				{
					unk_0x068C42047DCBA3BB(0);
					func_251(uParam0, 170800f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 43);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 43);
				if (func_304(uParam0, 43, 0))
				{
					unk_0x0A1D0B0A1518A5D2(9, 12, 9, 12);
					func_251(uParam0, 191799.8f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 44);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 44);
				if (func_304(uParam0, 44, 0))
				{
					func_251(uParam0, 196633.1f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 45);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 45);
				if (func_304(uParam0, 45, 0))
				{
					func_251(uParam0, 201466.5f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 46);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 46);
				if (func_304(uParam0, 46, 0))
				{
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_240(uParam0);
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					if (!unk_0xF4B969E0807E76C7(uParam0->f_34, 0))
					{
						unk_0x9F2F93BD843587E2(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x0620057C4982F1C1(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x494374BCB9580EA5(uParam0->f_7, 33.3479f);
						unk_0x678A9FFAA65D1846(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x0472F75F711AABCE(uParam0->f_7, 1);
						if (!unk_0xF4B969E0807E76C7(uParam0->f_35, 0))
						{
							unk_0x2BBEC4B37B923F4B(uParam0->f_35, false, 0);
						}
						if (!unk_0xF4B969E0807E76C7(uParam0->f_36, 0))
						{
							unk_0x2BBEC4B37B923F4B(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xADFCDA47D7031CF3(uParam0->f_11, uParam0->f_34, unk_0xCC77DF450B31521D(uParam0->f_34, "seat_dside_f"));
						if (func_263(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADFCDA47D7031CF3(uParam0->f_12, uParam0->f_34, unk_0xCC77DF450B31521D(uParam0->f_34, "seat_pside_f"));
							unk_0x8582CCEB95B1F1BE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x8582CCEB95B1F1BE(unk_0x0FA8183DAD2B3203(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x418ABE435B684083(uParam0->f_11, 0.726f);
							unk_0x418ABE435B684083(uParam0->f_12, 0.74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADFCDA47D7031CF3(uParam0->f_12, uParam0->f_34, 0);
							unk_0x8582CCEB95B1F1BE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x8582CCEB95B1F1BE(unk_0x0FA8183DAD2B3203(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x418ABE435B684083(uParam0->f_11, 0.726f);
							unk_0x418ABE435B684083(uParam0->f_12, 0.815f);
						}
						unk_0xCFEC09B98C6C5993(uParam0->f_36, 0, 0);
						unk_0xCFEC09B98C6C5993(unk_0x0FA8183DAD2B3203(), 0, 0);
					}
					func_296(uParam0, 47);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 47);
				if (func_304(uParam0, 47, 0))
				{
					func_251(uParam0, 213066.4f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_240(uParam0);
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0xF4B969E0807E76C7(uParam0->f_35, 0))
					{
						unk_0x2BBEC4B37B923F4B(uParam0->f_35, true, 0);
					}
					if (!unk_0xF4B969E0807E76C7(uParam0->f_36, 0))
					{
						unk_0x2BBEC4B37B923F4B(uParam0->f_36, false, 0);
					}
					if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0) && !unk_0xF4B969E0807E76C7(uParam0->f_34, 0))
					{
						unk_0x31A7662B885C7549(unk_0x0FA8183DAD2B3203(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xCFEC09B98C6C5993(unk_0x0FA8183DAD2B3203(), 0, 0);
					}
					func_296(uParam0, 48);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 48);
				if (func_304(uParam0, 48, 0))
				{
					unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 3);
					func_239(uParam0, 10177.75f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_240(uParam0);
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 49);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				func_306(uParam0, 49);
				if (unk_0xF45B7CAEA9F06737("FM_INTRO_DRIVE_END") && func_304(uParam0, 49, 0))
				{
					func_237(uParam0, 4500f);
					unk_0xA1E7A40E1F56E511(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_240(uParam0);
				if (!unk_0xBF28CCACDDFF5346())
				{
					if (!unk_0xC862E94A8ABC89B8())
					{
						unk_0xCF33E56642B34516(250);
					}
				}
				if (unk_0xA2BC31158C8CEFD2(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						unk_0x203B205D65C3AE0C();
						unk_0x3B76114EC84D5812(uParam0, 11);
					}
					func_296(uParam0, 50);
					unk_0x3B76114EC84D5812(uParam0, 15);
				}
				if (!unk_0xA2BC31158C8CEFD2(*uParam0, 20))
				{
					if (func_263(uParam0))
					{
						unk_0xBA51426C369A1164("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0xBA51426C369A1164("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (unk_0xF628B2ECEE913E4E())
						{
							if (func_263(uParam0))
							{
								unk_0x7F94468B98845F66("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0x7F94468B98845F66("MP_1", 0, 1);
							}
						}
					}
					if (unk_0x9B70128914947222())
					{
						unk_0xA1E7A40E1F56E511(uParam0, 20);
					}
				}
				func_306(uParam0, 50);
				if (!unk_0xF4B969E0807E76C7(uParam0->f_34, 0))
				{
					if (unk_0x2956D94776C15770(uParam0->f_34))
					{
						if (unk_0xB8D4A2BAA78AB950(uParam0->f_34) < 1f)
						{
							unk_0x82F9D7FF967D63BE(uParam0->f_34);
						}
					}
				}
				if (func_304(uParam0, 50, 0) && unk_0xA2BC31158C8CEFD2(*uParam0, 20))
				{
					if (unk_0xA2BC31158C8CEFD2(*uParam0, 21))
					{
						unk_0x81995F6F93D8C987("FM_INTRO_DRIVE_END");
						unk_0x3B76114EC84D5812(uParam0, 21);
					}
					unk_0x82F9D7FF967D63BE(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
					{
						if (func_263(uParam0))
						{
							unk_0x38F2C110546BD846(unk_0x0FA8183DAD2B3203(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x38F2C110546BD846(unk_0x0FA8183DAD2B3203(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0xF4B969E0807E76C7(uParam0->f_35, 0))
				{
					unk_0x38F2C110546BD846(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0xF4B969E0807E76C7(uParam0->f_34, 0))
				{
					unk_0x38F2C110546BD846(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0xA1E7A40E1F56E511(uParam0, 13);
				if (unk_0x6FE3A7E505FEC20C("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0x8E3496DF5BF7F24D("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0x3268D119250624E8(4);
				func_253(1, 1, 1, 0, 0, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0x33D7ABC47E81DCF9())
				{
					unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (unk_0x9B35D07DCD0F0B43() - uParam0->f_13);
					}
					else
					{
						uParam0->f_30 = func_236(uParam0);
					}
					uParam0->f_14 = 0;
					uParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (uParam0->f_295)
				{
					if (func_263(uParam0))
					{
						if (!unk_0xA2BC31158C8CEFD2(*uParam0, 23))
						{
							if (unk_0xDFB741CB32BE818E("MP_Female_Character", 0))
							{
								if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
								{
									unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), unk_0x3BA2E0B9E14A8025(Var1.f_0, Var1.f_1));
									unk_0xB489E71A45CDC02F(0);
									unk_0xA291E27354439AE9(0, 1065353216);
									unk_0xA1E7A40E1F56E511(uParam0, 23);
								}
							}
						}
					}
					else if (!unk_0xA2BC31158C8CEFD2(*uParam0, 23))
					{
						if (unk_0xDFB741CB32BE818E("MP_1", 0))
						{
							if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
							{
								unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), unk_0x3BA2E0B9E14A8025(Var1.f_0, Var1.f_1));
								unk_0xB489E71A45CDC02F(0);
								unk_0xA291E27354439AE9(0, 1065353216);
								unk_0xA1E7A40E1F56E511(uParam0, 23);
							}
						}
					}
				}
				if (unk_0xDFB741CB32BE818E("LAMAR", 0))
				{
					if (unk_0xD960230552BC4165(uParam0->f_34, 0))
					{
						if (!unk_0x2BF5E63466422C38(uParam0->f_35))
						{
							if (!unk_0x5294582CE404D3F4(uParam0->f_35, 0))
							{
								unk_0x31A7662B885C7549(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (unk_0xDFB741CB32BE818E("MP_Lamar_Car", 0))
				{
					if (unk_0xD960230552BC4165(uParam0->f_34, 0))
					{
						unk_0x1ECAE5FB4DE78CF8(uParam0->f_34, 1084227584);
					}
				}
				if (unk_0x5038F629059483A1(0))
				{
					func_235(1);
					unk_0xB489E71A45CDC02F(0);
					unk_0xA291E27354439AE9(0, 1065353216);
				}
				if (!func_234(unk_0x7C7787D2D7139A85()))
				{
					func_233(1);
				}
				if (unk_0x33D7ABC47E81DCF9())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x9B35D07DCD0F0B43() - (uParam0->f_30 + unk_0xD9B1B8CA88778543()));
					}
					switch (uParam0->f_14)
					{
						case 0:
							func_232(uParam0, 0);
							break;
						
						case 10:
							func_232(uParam0, 1);
							break;
						
						case 20:
							func_232(uParam0, 2);
							break;
						
						case 30:
							func_232(uParam0, 3);
							break;
						
						case 40:
							func_232(uParam0, 4);
							break;
						
						case 50:
							func_232(uParam0, 5);
							break;
						
						case 60:
							func_232(uParam0, 6);
							break;
						
						case 70:
							func_232(uParam0, 7);
							break;
						
						case 80:
							func_232(uParam0, 8);
							break;
						
						case 90:
							func_232(uParam0, 9);
							break;
						
						case 100:
							if (unk_0xD4B321D9096B01FC(uParam0->f_36))
							{
								unk_0x4F058F27442031CC(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					unk_0x3B134B2577EBD1FA();
					unk_0x67DAC9AA604EB02C();
					if (!unk_0x5E05FB12444196F6())
					{
						unk_0xBFE927EB9D89F26B(0);
					}
					func_253(0, 1, 1, 0, 0, 0);
					unk_0x3B76114EC84D5812(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0x33D7ABC47E81DCF9())
				{
					unk_0x9A1834786EEC8D45();
				}
				else if (!unk_0xA2BC31158C8CEFD2(*uParam0, 17))
				{
					if (unk_0x260395BA7F0C83CB())
					{
						unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
						unk_0xA1E7A40E1F56E511(uParam0, 13);
						unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), true);
						if (uParam0->f_292)
						{
							unk_0x203B205D65C3AE0C();
							unk_0x3B76114EC84D5812(uParam0, 11);
						}
						func_197(&(uParam0->f_17));
						func_21(&(uParam0->f_17), 0, 0);
						unk_0xA1E7A40E1F56E511(uParam0, 17);
					}
					else if (!unk_0xA710300CD13D2877())
					{
						unk_0x5800A2599806C837(250);
					}
				}
				else if (func_198(&(uParam0->f_17), 10000, 0))
				{
					if (func_231(uParam0))
					{
						func_299(uParam0);
						func_247(uParam0);
						if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
						{
							unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), false);
							if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
							{
								unk_0x8C85E8C71AD74415(unk_0x0FA8183DAD2B3203(), true, 0);
								unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), 61.3164f);
							}
						}
						if (!unk_0x2BF5E63466422C38(uParam0->f_35))
						{
							if (!unk_0x5294582CE404D3F4(uParam0->f_35, 0))
							{
								if (unk_0xD960230552BC4165(uParam0->f_34, 0))
								{
									unk_0x31A7662B885C7549(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_235(1);
						if (!func_234(unk_0x7C7787D2D7139A85()))
						{
							func_233(1);
						}
						func_253(0, 1, 1, 0, 0, 0);
						unk_0xB1CB008AB1B554E2(0, 0, 0);
						if (unk_0xA2BC31158C8CEFD2(*uParam0, 21))
						{
							unk_0x81995F6F93D8C987("FM_INTRO_DRIVE_END");
							unk_0x3B76114EC84D5812(uParam0, 21);
						}
						unk_0xA1E7A40E1F56E511(uParam0, 1);
						unk_0xA1E7A40E1F56E511(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0x33D7ABC47E81DCF9())
				{
					unk_0x9A1834786EEC8D45();
				}
				else if (!unk_0xA2BC31158C8CEFD2(*uParam0, 17))
				{
					if (unk_0x260395BA7F0C83CB())
					{
						unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
						unk_0xA1E7A40E1F56E511(uParam0, 13);
						unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), true);
						if (uParam0->f_292)
						{
							unk_0x203B205D65C3AE0C();
							unk_0x3B76114EC84D5812(uParam0, 11);
						}
						func_197(&(uParam0->f_17));
						func_21(&(uParam0->f_17), 0, 0);
						unk_0xA1E7A40E1F56E511(uParam0, 17);
					}
					else if (!unk_0xA710300CD13D2877())
					{
						unk_0x5800A2599806C837(250);
					}
				}
				else if (func_198(&(uParam0->f_17), 10000, 0))
				{
					if (func_283(uParam0))
					{
						func_299(uParam0);
						func_247(uParam0);
						if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
						{
							unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), false);
							if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
							{
								unk_0x8C85E8C71AD74415(unk_0x0FA8183DAD2B3203(), true, 0);
								unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), 61.3164f);
								if (unk_0xD960230552BC4165(uParam0->f_34, 0))
								{
									unk_0x31A7662B885C7549(unk_0x0FA8183DAD2B3203(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!unk_0x2BF5E63466422C38(uParam0->f_35))
						{
							if (!unk_0x5294582CE404D3F4(uParam0->f_35, 0))
							{
								if (unk_0xD960230552BC4165(uParam0->f_34, 0))
								{
									unk_0x31A7662B885C7549(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_234(unk_0x7C7787D2D7139A85()))
						{
						}
						func_253(0, 1, 1, 0, 0, 0);
						if (unk_0xA2BC31158C8CEFD2(*uParam0, 21))
						{
							unk_0x81995F6F93D8C987("FM_INTRO_DRIVE_END");
							unk_0x3B76114EC84D5812(uParam0, 21);
						}
						unk_0xCF33E56642B34516(250);
						unk_0xB1CB008AB1B554E2(0, 0, 0);
						unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 3);
						uParam0->f_13 = (unk_0x9B35D07DCD0F0B43() - func_228(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_239(uParam0, 10177.75f);
						unk_0xA1E7A40E1F56E511(uParam0, 15);
						uParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_306(uParam0, 57);
				bVar8 = !uParam0->f_288;
				func_216(uParam0, bVar8, 0);
				if (uParam0->f_292)
				{
					unk_0x203B205D65C3AE0C();
					unk_0x3B76114EC84D5812(uParam0, 11);
				}
				if (!unk_0x2BF5E63466422C38(uParam0->f_35))
				{
					unk_0x45852AF9448D4F9F(uParam0->f_35, -1);
					unk_0x7D81B41B134BD6F2(uParam0->f_35, 1);
				}
				unk_0x365D411106A30619(1);
				if (!uParam0->f_288)
				{
					func_32(115, 1, -1, 1);
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
		func_215(uParam0);
		if (!uParam0->f_291)
		{
			if (uParam0->f_293)
			{
				uParam0->f_289 = unk_0xBBDA792448DB5A89((unk_0x9B35D07DCD0F0B43() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = unk_0xBBDA792448DB5A89(func_236(uParam0));
			}
			uParam0->f_290 = func_214(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && unk_0xA2BC31158C8CEFD2(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				unk_0x50BA14C7E5C6BA14(uParam0->f_289);
			}
			else
			{
				unk_0x50BA14C7E5C6BA14(uParam0->f_290);
			}
		}
		func_211(uParam0);
		if (unk_0xA2BC31158C8CEFD2(*uParam0, 12))
		{
			if (func_273())
			{
				func_210();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
				{
					unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), false, 60);
				}
			}
			func_208(uParam0);
			unk_0x562C0D84D0403529();
			unk_0x0AF55029F939BA65(9);
			unk_0x0AF55029F939BA65(7);
			unk_0x0AF55029F939BA65(18);
			unk_0x0AF55029F939BA65(6);
			unk_0x0AF55029F939BA65(3);
			unk_0x0AF55029F939BA65(13);
			unk_0x0AF55029F939BA65(4);
		}
		if (Global_2531497.f_1853)
		{
			unk_0x583A42EE47B55D77(2, 187, 1);
		}
	}
	return 0;
}

void func_208(var uParam0)
{
	var uVar0;
	
	if (!unk_0xA2BC31158C8CEFD2(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!unk_0xEDC68E498B715C56())
			{
				if (!unk_0xAC56C3809B2CBED6())
				{
					uVar0 = unk_0x7C7787D2D7139A85() + 32;
					unk_0x8E0A38503499E3D2(1, uVar0);
					func_209(1);
					unk_0xA1E7A40E1F56E511(uParam0, 9);
				}
			}
			else
			{
				func_209(1);
				unk_0xA1E7A40E1F56E511(uParam0, 9);
			}
		}
	}
}

void func_209(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142, 18))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 18);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142, 18))
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 18);
	}
}

void func_210()
{
	unk_0x53F520B89860756C(Global_1315681, 255, 255, 255, 255, 0);
	if (Global_1315683 == 0)
	{
		unk_0xF1BC72CEC2746995(Global_1315681, "SET_BIG_LOGO_VISIBLE");
		unk_0xD02F24F3E2DB263A(1);
		unk_0x282C78036676E0C2(1);
		unk_0xAC7C2DE2DDC7AF03();
		Global_1315683 = 1;
	}
}

void func_211(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xD4B321D9096B01FC(uParam0->f_58[uParam0->f_90]))
	{
		if (unk_0xF4B969E0807E76C7(uParam0->f_58[uParam0->f_90], 0))
		{
		}
		Var0 = { unk_0xACE5E491FC1B0D37(uParam0->f_58[uParam0->f_90], 1) };
		if (Var0.f_2 < -50f)
		{
			func_212(uParam0, uParam0->f_90);
		}
	}
	uParam0->f_90++;
	if (uParam0->f_90 >= 15)
	{
		uParam0->f_90 = 0;
	}
}

void func_212(var uParam0, int iParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (unk_0xD4B321D9096B01FC(uParam0->f_58[iParam1]))
	{
		if (unk_0xF4B969E0807E76C7(uParam0->f_58[iParam1], 0))
		{
		}
		func_213(iParam1, &Var0, &fVar3);
		unk_0xCB3446C6A91D1A78(uParam0->f_58[iParam1], Var0, 1, 0, 0, 1);
		unk_0x5A2B7C446C0CF087(uParam0->f_58[iParam1], fVar3);
		unk_0x860A5CC30A0EF207(uParam0->f_58[iParam1], true);
		unk_0x43C33457132CC44C(uParam0->f_58[iParam1]);
		unk_0x8C85E8C71AD74415(uParam0->f_58[iParam1], false, 0);
		unk_0x2BBEC4B37B923F4B(uParam0->f_58[iParam1], false, 0);
	}
	if (unk_0xD4B321D9096B01FC(uParam0->f_74[iParam1]))
	{
		if (unk_0xF4B969E0807E76C7(uParam0->f_74[iParam1], 0))
		{
		}
		unk_0x2BBEC4B37B923F4B(uParam0->f_74[iParam1], false, 0);
	}
}

void func_213(int iParam0, var uParam1, var uParam2)
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

float func_214(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (uParam0->f_6 >= 31 && uParam0->f_6 < 33)
	{
		if (func_263(uParam0))
		{
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0xD9B1B8CA88778543()));
			if (unk_0x634EC09651E4079C() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / unk_0xBBDA792448DB5A89(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0xD9B1B8CA88778543()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_215(var uParam0)
{
	if (unk_0xA2BC31158C8CEFD2(*uParam0, 29))
	{
		unk_0xCC46F00129F5F3BD(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		unk_0xCC46F00129F5F3BD(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_216(var uParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xA2BC31158C8CEFD2(*uParam0, 0))
	{
		if (unk_0x33D7ABC47E81DCF9())
		{
			unk_0xBFE927EB9D89F26B(0);
		}
		unk_0x8477769A3BA1A3F1(0);
		if (uParam0->f_292)
		{
			unk_0xFF12F7A3B62815F5(0);
			unk_0x203B205D65C3AE0C();
			unk_0x3B76114EC84D5812(uParam0, 11);
		}
		if (unk_0xA2BC31158C8CEFD2(*uParam0, 14))
		{
			unk_0x177A62AB5B680108();
			unk_0x3B76114EC84D5812(uParam0, 14);
		}
		func_227();
		func_248(uParam0);
		func_299(uParam0);
		func_247(uParam0);
		func_269();
		func_252(uParam0);
		func_270(uParam0);
		func_226(uParam0);
		func_241(uParam0);
		unk_0xD931F7E3EEBC7B7D();
		if (bParam2)
		{
			if (unk_0xD4B321D9096B01FC(uParam0->f_34))
			{
				unk_0xF25956700ADFD77F(&(uParam0->f_34));
			}
			if (unk_0xD4B321D9096B01FC(uParam0->f_35))
			{
				unk_0x0FFB05DA97E810B5(&(uParam0->f_35));
			}
		}
		if (unk_0xD4B321D9096B01FC(uParam0->f_36))
		{
			unk_0x4F058F27442031CC(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			func_404(0);
		}
		func_224();
		func_217();
		func_253(0, 1, 1, 0, 0, 0);
		unk_0x85417D6445C532FC(0, -1);
		unk_0x597D844D285B9272(1);
		if (unk_0x393E9918BC37548A())
		{
			if (unk_0xED4D72D338501085())
			{
				unk_0xBB40A8EBAAC73C4E(0, 1);
			}
		}
		if (unk_0xA2BC31158C8CEFD2(*uParam0, 21))
		{
			unk_0x81995F6F93D8C987("FM_INTRO_DRIVE_END");
			unk_0x3B76114EC84D5812(uParam0, 21);
		}
		unk_0x55EE612A171C4D15(0);
		func_359(1);
		if (unk_0xA2BC31158C8CEFD2(*uParam0, 26))
		{
			func_351(1, 0);
			unk_0x3B76114EC84D5812(uParam0, 26);
		}
		Global_2437549.f_3732 = 0;
		if (!unk_0x16587C6F71675106())
		{
			unk_0x79682C26B924A2EB(0);
		}
		unk_0x40BF85B257E0DA20(1);
		if (bParam1)
		{
		}
		func_194(0);
		func_206(1);
		Global_2531497.f_1853 = 0;
		Global_2531497.f_1852 = 0;
		if (unk_0x6FE3A7E505FEC20C("MP_INTRO_RACE_SCENE"))
		{
			unk_0x8E3496DF5BF7F24D("MP_INTRO_RACE_SCENE");
		}
		if (unk_0x6FE3A7E505FEC20C("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0x8E3496DF5BF7F24D("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_320(14, 1);
		unk_0x60F310C72311BCA8(5);
		unk_0xF9D17DFC768E51E6("CONTRAILS", 0);
		unk_0x497FAD093E19504A(5, "FMINTRO");
		unk_0x497FAD093E19504A(6, "FMINTRO");
		unk_0x497FAD093E19504A(7, "FMINTRO");
		unk_0x7D74D6A091150B86("mp_intro_seq@");
		unk_0x7D74D6A091150B86("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x7D74D6A091150B86("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0x7D74D6A091150B86("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0x39A01A052D9B5FF0(unk_0xFD483C98AEBF2162()))
		{
			unk_0xBC0D06064C5B5413(unk_0xFD483C98AEBF2162(), 0.7f);
		}
		unk_0x8D5A4C57FB25ED43(0);
		unk_0xB489E71A45CDC02F(0);
		unk_0xA291E27354439AE9(0, 1065353216);
		if (unk_0x393E9918BC37548A())
		{
			unk_0x222122192FE38581();
			unk_0x365D411106A30619(1);
		}
		unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
		unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), false);
		if (!unk_0xBF28CCACDDFF5346() && !unk_0xC862E94A8ABC89B8())
		{
			unk_0xCF33E56642B34516(800);
		}
		unk_0xA1E7A40E1F56E511(uParam0, 0);
	}
}

void func_217()
{
	func_218(0);
}

void func_218(bool bParam0)
{
	if (bParam0)
	{
		func_223();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0xA1E7A40E1F56E511(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_82(0))
		{
			func_219(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_219(int iParam0)
{
	if (func_222())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_221())
		{
			func_220(1, 1);
		}
		else
		{
			func_220(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 16);
	}
	if (unk_0x31634D65216B86B6())
	{
		unk_0x623942A4F366F9BB(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 30);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 30);
	}
	if (!func_166())
	{
		Global_19486.f_1 = 3;
	}
}

void func_220(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_82(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0xB1B52CCC3333E09F(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x4577629BF7B43F7F(Global_19423);
		}
		else
		{
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
}

bool func_221()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

bool func_222()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

void func_223()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_224()
{
	if (!Global_1312575)
	{
		return;
	}
	func_225();
}

void func_225()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_226(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_232(uParam0, iVar0);
		iVar0++;
	}
}

void func_227()
{
	unk_0x5FA16012EC432077(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	unk_0x5FA16012EC432077(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
}

int func_228(var uParam0, int iParam1, bool bParam2)
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
			iVar1 = (iVar1 + func_230(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_229(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_229(int iParam0)
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

int func_230(int iParam0)
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

int func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	unk_0x6BB2B1818CAE531E(iVar0);
	unk_0x6BB2B1818CAE531E(iVar1);
	if (unk_0x6DF9C43E3CC645BC(iVar0) && unk_0x6DF9C43E3CC645BC(iVar1))
	{
		if (!unk_0xD4B321D9096B01FC(uParam0->f_34))
		{
			uParam0->f_34 = unk_0x847817A65E16621A(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0, 0);
			unk_0xF4EA52166C1B2867(uParam0->f_34, 1);
			unk_0xF0ACB85418455412(uParam0->f_34, 0);
			unk_0x3427075D3608A3BB(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			unk_0xB6883476E00DBD57(uParam0->f_34, 2);
		}
		else if (!unk_0xD4B321D9096B01FC(uParam0->f_35))
		{
			if (unk_0xD960230552BC4165(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xB983F26E7AFB47BF(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, 0);
				unk_0xCC94EE23853F38E4(uParam0->f_35, 1);
				unk_0x04F5A8AA60EC662B(uParam0->f_34, 1);
				unk_0x04F5A8AA60EC662B(uParam0->f_35, 1);
				unk_0xDB889DCC8B0139E6(uParam0->f_35, unk_0x79CDB5CF25B388E3(unk_0x0FA8183DAD2B3203()));
				unk_0x3427075D3608A3BB(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0xD4B321D9096B01FC(uParam0->f_34) || !unk_0xD4B321D9096B01FC(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_232(var uParam0, int iParam1)
{
	if (unk_0xD4B321D9096B01FC(uParam0->f_58[iParam1]))
	{
		unk_0xBD22862A2C5FD6DF(&(uParam0->f_58[iParam1]));
	}
	if (unk_0xD4B321D9096B01FC(uParam0->f_74[iParam1]))
	{
		unk_0x4F058F27442031CC(&(uParam0->f_74[iParam1]));
	}
}

void func_233(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_146), 22);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_146), 22);
	}
}

bool func_234(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_146, 22);
}

void func_235(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 4);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 4);
	}
}

int func_236(var uParam0)
{
	if (uParam0->f_6 < 31)
	{
		return unk_0xB4556AE4D5AE9D80();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + unk_0xD9B1B8CA88778543());
	}
	return (uParam0->f_28 + unk_0xB4556AE4D5AE9D80());
}

void func_237(var uParam0, float fParam1)
{
	func_238(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_238(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0xD960230552BC4165(uParam0, 0))
	{
		if (bParam4)
		{
			unk_0x82F9D7FF967D63BE(uParam0);
			unk_0x10DFCD426DB9FAB3(uParam0, iParam1, sParam2, 1);
		}
		else if (!unk_0x2956D94776C15770(uParam0))
		{
			unk_0x10DFCD426DB9FAB3(uParam0, iParam1, sParam2, 1);
			unk_0x457F3C1AA71B7A5C(uParam0, 1);
		}
		else
		{
			iVar0 = unk_0x58A029E9CCC2D140(iParam1, sParam2);
			if (unk_0x78F759D53316D56B(uParam0) != iVar0)
			{
				unk_0x10DFCD426DB9FAB3(uParam0, iParam1, sParam2, 1);
				unk_0x457F3C1AA71B7A5C(uParam0, 1);
			}
		}
		unk_0xF7AA5991D9BC90F2(uParam0, (fParam3 - unk_0xFE7A61AEFDC41DA1(uParam0)));
	}
}

void func_239(var uParam0, float fParam1)
{
	func_238(uParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_240(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!uParam0->f_296)
	{
		iVar0 = unk_0xA8C462EF7D9DC564("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0x8C1D4D7F60F78C2A(iVar1))
		{
			func_9(iVar1);
			uParam0->f_296 = 1;
		}
	}
}

void func_241(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xD4B321D9096B01FC(uParam0->f_37[iVar0]))
		{
			unk_0x4F058F27442031CC(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0xE0AC40EF164A2569(joaat("g_m_y_mexgoon_02"));
	unk_0x7D74D6A091150B86("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0x7D74D6A091150B86("amb@world_human_hang_out_street@male_a@base");
}

int func_242(var uParam0)
{
	int iVar0;
	
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0x6BB2B1818CAE531E(joaat("g_m_y_mexgoon_02"));
		unk_0x36B659209EBDD366("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x36B659209EBDD366("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0x6DF9C43E3CC645BC(joaat("g_m_y_mexgoon_02")) && unk_0xB25A0D192C6A0A5B("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0xB25A0D192C6A0A5B("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0xD4B321D9096B01FC(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = unk_0xB983F26E7AFB47BF(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, 0);
					unk_0x04F5A8AA60EC662B(uParam0->f_37[iVar0], 1);
					unk_0xCC94EE23853F38E4(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							unk_0xF44C015A76EC14F8(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							unk_0xF44C015A76EC14F8(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							unk_0xF44C015A76EC14F8(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							unk_0xF44C015A76EC14F8(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							unk_0xF44C015A76EC14F8(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							unk_0xCB3446C6A91D1A78(uParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							unk_0x5A2B7C446C0CF087(uParam0->f_37[iVar0], 76.8852f);
							unk_0xC167C31F20B1FD61(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0x860A5CC30A0EF207(uParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0xF44C015A76EC14F8(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							unk_0xCB3446C6A91D1A78(uParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							unk_0x5A2B7C446C0CF087(uParam0->f_37[iVar0], 87.5786f);
							unk_0xC167C31F20B1FD61(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0x860A5CC30A0EF207(uParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0xF44C015A76EC14F8(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							unk_0xF44C015A76EC14F8(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0xD4B321D9096B01FC(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0xE0AC40EF164A2569(joaat("g_m_y_mexgoon_02"));
		unk_0x7D74D6A091150B86("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x7D74D6A091150B86("amb@world_human_hang_out_street@male_a@base");
		unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_243(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_171(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_162(sParam2, iParam4, 0);
}

void func_244(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!unk_0xA2BC31158C8CEFD2(*uParam0, 25))
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
			if (!unk_0x2BF5E63466422C38(uParam0->f_98[iVar0]) && unk_0xD960230552BC4165(uParam0->f_92[iVar0], 0))
			{
				unk_0x860A5CC30A0EF207(uParam0->f_92[iVar0], false);
				unk_0xD32341B4ADEC0821(uParam0->f_92[iVar0], 10f);
				unk_0xD67C82BBC9A488A6(uParam0->f_98[iVar0], uParam0->f_92[iVar0], Var1, 5f, 0, unk_0x7F375072508F738F(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0xA1E7A40E1F56E511(uParam0, 25);
	}
}

int func_245(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = joaat("shamal");
	unk_0x6BB2B1818CAE531E(iVar5);
	unk_0x6BB2B1818CAE531E(func_246());
	if (unk_0x6DF9C43E3CC645BC(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0xD4B321D9096B01FC(uParam0->f_92[iVar0]))
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
				uParam0->f_92[iVar0] = unk_0x847817A65E16621A(iVar5, Var1, fVar4, 0, 0, 0);
				unk_0x1ECAE5FB4DE78CF8(uParam0->f_92[iVar0], 1084227584);
				unk_0x860A5CC30A0EF207(uParam0->f_92[iVar0], true);
				unk_0xB6883476E00DBD57(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0xD4B321D9096B01FC(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0x6DF9C43E3CC645BC(func_246()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0xD4B321D9096B01FC(uParam0->f_98[iVar0]))
			{
				if (unk_0xD4B321D9096B01FC(uParam0->f_92[iVar0]))
				{
					if (unk_0xD960230552BC4165(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = unk_0x81024A420EDCE2B5(uParam0->f_92[iVar0], 4, func_246(), -1, 0, false);
						unk_0xCC94EE23853F38E4(uParam0->f_98[iVar0], 1);
						unk_0xB90231068DCFFBA1(uParam0->f_92[iVar0], 1, 1, 0);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0xE0AC40EF164A2569(iVar5);
	unk_0xE0AC40EF164A2569(func_246());
	unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 11);
	return 1;
}

int func_246()
{
	return unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203());
}

void func_247(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xD4B321D9096B01FC(uParam0->f_92[iVar0]))
		{
			unk_0xBD22862A2C5FD6DF(&(uParam0->f_92[iVar0]));
		}
		if (unk_0xD4B321D9096B01FC(uParam0->f_98[iVar0]))
		{
			unk_0x4F058F27442031CC(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0xE0AC40EF164A2569(joaat("shamal"));
	unk_0xE0AC40EF164A2569(func_246());
}

void func_248(var uParam0)
{
	int iVar0;
	
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_3, 2))
	{
		unk_0xE0AC40EF164A2569(joaat("p_cs_mp_jet_01_s"));
		if (unk_0xD4B321D9096B01FC(uParam0->f_33))
		{
			unk_0x377C9F2989832369(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (unk_0xFB3E0C95810C1454(uParam0->f_120))
			{
				unk_0xEB536AB1809C2FEF(uParam0->f_120, 0);
			}
			if (unk_0xFB3E0C95810C1454(uParam0->f_121))
			{
				unk_0xEB536AB1809C2FEF(uParam0->f_121, 0);
			}
			if (unk_0x5B9201742B00334D())
			{
				unk_0xD9E853CD947E590B();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0xD4B321D9096B01FC(uParam0->f_104[iVar0]))
			{
				unk_0x4F058F27442031CC(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0x3B76114EC84D5812(&(uParam0->f_3), 2);
	}
}

int func_249(var uParam0)
{
	if (func_263(uParam0))
	{
		unk_0x36B659209EBDD366("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x36B659209EBDD366("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xB25A0D192C6A0A5B("mp_intro_seq@ig_1_lamar_drive_female") && unk_0xB25A0D192C6A0A5B("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0x36B659209EBDD366("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0x36B659209EBDD366("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xB25A0D192C6A0A5B("mp_intro_seq@ig_1_lamar_drive_male") && unk_0xB25A0D192C6A0A5B("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_250(var uParam0)
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_3, 10))
	{
		unk_0x6BB2B1818CAE531E(iVar0);
		if (unk_0x6DF9C43E3CC645BC(iVar0))
		{
			if (!unk_0xD4B321D9096B01FC(uParam0->f_36))
			{
				uParam0->f_36 = unk_0xB983F26E7AFB47BF(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, 0);
				unk_0xCC94EE23853F38E4(uParam0->f_36, 1);
				unk_0x04F5A8AA60EC662B(uParam0->f_36, 1);
				unk_0x2BBEC4B37B923F4B(uParam0->f_36, false, 0);
				unk_0xDB889DCC8B0139E6(uParam0->f_36, unk_0x79CDB5CF25B388E3(unk_0x0FA8183DAD2B3203()));
				unk_0x3427075D3608A3BB(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				func_405(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0xD4B321D9096B01FC(uParam0->f_36))
		{
			return 0;
		}
		unk_0xE0AC40EF164A2569(iVar0);
		unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 10);
	}
	return 1;
}

void func_251(var uParam0, float fParam1)
{
	func_238(uParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_252(var uParam0)
{
	int iVar0;
	
	unk_0xE0AC40EF164A2569(func_266());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_267(uParam0, iVar0);
		iVar0++;
	}
	if (unk_0xD4B321D9096B01FC(uParam0->f_91))
	{
		unk_0x4F058F27442031CC(&(uParam0->f_91));
	}
}

void func_253(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x7FFD059D4FA38133(unk_0x7C7787D2D7139A85());
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 1);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 1);
		func_260(1);
		unk_0x0C90AD17B16DE260();
		unk_0x695A752EE2ABAEDE();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x31634D65216B86B6())
			{
				unk_0x623942A4F366F9BB(0);
			}
			if (!func_166())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_259(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_260(0);
		unk_0x418A0C9B89A8D0B1();
		Global_61477 = 0;
		if (bParam1)
		{
			unk_0x0BDD50D0AE4552F2();
		}
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 0);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 0);
		func_259(0, iParam3, iParam2, 0);
		if (unk_0x393E9918BC37548A())
		{
			if (((((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_257(unk_0x7C7787D2D7139A85())) && !func_255(unk_0x7C7787D2D7139A85(), 0)) && !func_254()) && !bParam4) && !bParam5)
			{
				unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
			}
		}
		else if (((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_257(unk_0x7C7787D2D7139A85())) && !bParam4) && !bParam5)
		{
			unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
		}
		Global_76575 = 0;
	}
}

bool func_254()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 14);
}

bool func_255(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_256(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_256(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_28();
	}
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_257(int iParam0)
{
	if (func_255(iParam0, 0))
	{
		return 1;
	}
	if (func_258())
	{
		if (iParam0 == unk_0x7C7787D2D7139A85())
		{
			return 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_258()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

int func_259(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0xC4741D7AA5AAF9B6() != iParam0 && uParam2)
		{
			unk_0x0696366AB240E4CD(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_260(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 13);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 13);
	}
}

void func_261(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0xF4B969E0807E76C7(uParam0->f_104[iVar0], 0))
		{
			unk_0xF77E0D8A93ED5E86(uParam0->f_104[iVar0]);
			unk_0x38F2C110546BD846(uParam0->f_104[iVar0], func_262(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_262(int iParam0)
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

int func_263(var uParam0)
{
	if (uParam0->f_295)
	{
		return func_264();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_264()
{
	return func_265(unk_0x7C7787D2D7139A85());
}

int func_265(int iParam0)
{
	if (unk_0x7F375072508F738F(unk_0x23625FE58BACEBFD(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_266()
{
	return joaat("s_m_y_xmech_02");
}

void func_267(var uParam0, int iParam1)
{
	unk_0xE0AC40EF164A2569(func_268(iParam1));
	if (unk_0xD4B321D9096B01FC(uParam0->f_49[iParam1]))
	{
		if (unk_0xD960230552BC4165(uParam0->f_49[iParam1], 0))
		{
		}
		unk_0x4F406F1A488A956F(uParam0->f_49[iParam1]);
		unk_0xBD22862A2C5FD6DF(&(uParam0->f_49[iParam1]));
	}
}

int func_268(int iParam0)
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

void func_269()
{
	Global_1315683 = 0;
	if (unk_0x08EA887200715AD9(Global_1315681))
	{
		unk_0xF1BC72CEC2746995(Global_1315681, "SET_BIG_LOGO_VISIBLE");
		unk_0xD02F24F3E2DB263A(1);
		unk_0x282C78036676E0C2(0);
		unk_0xAC7C2DE2DDC7AF03();
		unk_0x749CA887CB0AFEC9(&Global_1315681);
	}
}

void func_270(var uParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0xD4B321D9096B01FC(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			unk_0x55A0904E82955EC9(&uVar0);
		}
		if (unk_0xD4B321D9096B01FC(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			unk_0x55A0904E82955EC9(&uVar0);
		}
		iVar1++;
	}
	unk_0xE0AC40EF164A2569(joaat("cheetah"));
	unk_0xE0AC40EF164A2569(joaat("monroe"));
	unk_0xE0AC40EF164A2569(joaat("entityxf"));
	unk_0xE0AC40EF164A2569(joaat("feltzer2"));
	unk_0x497FAD093E19504A(100, "FM_Intro_uber");
	unk_0x497FAD093E19504A(101, "FM_Intro_uber");
	unk_0x497FAD093E19504A(102, "FM_Intro_uber");
	unk_0x497FAD093E19504A(103, "FM_Intro_uber");
	unk_0x497FAD093E19504A(104, "FM_Intro_uber");
	unk_0x7D74D6A091150B86("mp_intro_seq@");
}

void func_271(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(uParam0->f_49[2]))
	{
		if (unk_0xD960230552BC4165(uParam0->f_49[2], 0))
		{
			unk_0x2B5BFC8190E00E7A(uParam0->f_49[2]);
		}
	}
	if (unk_0xD4B321D9096B01FC(uParam0->f_49[4]))
	{
		if (unk_0xD960230552BC4165(uParam0->f_49[4], 0))
		{
			unk_0x2B5BFC8190E00E7A(uParam0->f_49[4]);
		}
	}
}

void func_272(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(uParam0->f_49[2]))
	{
		if (unk_0xD960230552BC4165(uParam0->f_49[2], 0))
		{
			unk_0x48AB9211DB740DB5(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_273()
{
	if (unk_0x01C22EB792BA0841())
	{
		return 0;
	}
	if (!unk_0x08EA887200715AD9(Global_1315681))
	{
		Global_1315681 = unk_0x1FAFE9BB9D8960C1("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_274(var uParam0, char* sParam1, char* sParam2, int iParam3, struct<3> Param4, struct<3> Param7)
{
	if (unk_0xD4B321D9096B01FC(uParam3))
	{
		if (unk_0xF4B969E0807E76C7(iParam3, 0))
		{
		}
		if (!unk_0xD2652A8A890B29BA(uParam0->f_8))
		{
			uParam0->f_8 = unk_0x87B0FFB353287F00("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = unk_0xF2A54C51C03CADAA(Param4, Param7, 2);
		unk_0xADFCDA47D7031CF3(uParam0->f_9, iParam3, 0);
		unk_0x0116AC515A8787A5(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		unk_0x0472F75F711AABCE(uParam0->f_8, 1);
		unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 1, 0);
	}
}

void func_275(var uParam0)
{
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_3, 3))
	{
		unk_0xD9009A50205BB518("CONTRAILS");
		if (func_263(uParam0))
		{
			unk_0xD951D071C4C60D8C("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0xD951D071C4C60D8C("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0xF628B2ECEE913E4E())
		{
			if (uParam0->f_295)
			{
				if (func_263(uParam0))
				{
					unk_0x7F94468B98845F66("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0x7F94468B98845F66("MP_Male_Character", 0, 1);
				}
			}
			func_276();
		}
		if (unk_0x9B70128914947222())
		{
			unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 3);
		}
	}
}

void func_276()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0x7F94468B98845F66(func_262(iVar0), 0, 1);
		iVar0++;
	}
}

int func_277(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_3, 2))
	{
		unk_0x6BB2B1818CAE531E(joaat("p_cs_mp_jet_01_s"));
		unk_0x6BB2B1818CAE531E(joaat("mp_m_freemode_01"));
		unk_0x6BB2B1818CAE531E(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			unk_0x8CD04D2D122523B6();
		}
		if (((unk_0x6DF9C43E3CC645BC(joaat("p_cs_mp_jet_01_s")) && unk_0x6DF9C43E3CC645BC(joaat("mp_m_freemode_01"))) && unk_0x6DF9C43E3CC645BC(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || unk_0x5B9201742B00334D()))
		{
			uParam0->f_33 = unk_0x7187764DB5121FC9(joaat("p_cs_mp_jet_01_s"), Var1, 0, 0, 0);
			unk_0x5C566093AEF7FD18(uParam0->f_33, 3000);
			unk_0x9D3FE4786B8925D2(uParam0->f_33, 0);
			unk_0x2BBEC4B37B923F4B(uParam0->f_33, false, 0);
			if (uParam0->f_294)
			{
				uParam0->f_120 = unk_0x5C20627D907188D6("scr_mp_intro_plane_exhaust", uParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = unk_0x5C20627D907188D6("scr_mp_intro_plane_exhaust", uParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			if (uParam0->f_295)
			{
				func_281(uParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_280(uParam0, iVar0))
				{
					uParam0->f_104[iVar0] = unk_0xB983F26E7AFB47BF(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = unk_0xB983F26E7AFB47BF(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				if (func_279(uParam0, iVar0))
				{
					if (!unk_0xF4B969E0807E76C7(unk_0x23625FE58BACEBFD(unk_0x0C98179F08C6DA4F(uParam0->f_112[iVar0])), 0))
					{
					}
					unk_0x1B6F0ECD991F3866(unk_0x23625FE58BACEBFD(unk_0x0C98179F08C6DA4F(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					unk_0xF77E0D8A93ED5E86(uParam0->f_104[iVar0]);
				}
				else
				{
					func_278(uParam0, iVar0);
				}
				iVar0++;
			}
			unk_0xE0AC40EF164A2569(joaat("p_cs_mp_jet_01_s"));
			unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_278(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 1);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 2);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 3);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 4);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 5);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 6);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 7);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 1);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 2);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 3);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 4);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 5);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 6);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 7);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 1);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 2);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 3);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 4);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 5);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 6);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 7);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 1);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 2);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 3);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 4);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 5);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 6);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 7);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 1);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 2);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 3);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 4);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 5);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 6);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 7);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 1);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 2);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 3);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 4);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 5);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 6);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 7);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x0453EBC0FB8D8A80(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 0);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 1);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 2);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 3);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 4);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 5);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 6);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 7);
			unk_0xC8AD310AAEF6B6EE(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_279(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_14(unk_0x0C98179F08C6DA4F(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_280(var uParam0, int iParam1)
{
	if (func_279(uParam0, iParam1))
	{
		return func_265(unk_0x0C98179F08C6DA4F(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_281(var uParam0)
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
		iVar2 = unk_0x0C98179F08C6DA4F(iVar1);
		if (func_14(iVar2, 0, 1))
		{
			if (unk_0x7C7787D2D7139A85() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_282(iVar0)] = iVar1;
					iVar0++;
				}
			}
		}
		iVar1++;
	}
}

int func_282(int iParam0)
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

int func_283(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_3, 9))
	{
		return 1;
	}
	unk_0x6BB2B1818CAE531E(iVar0);
	unk_0x6BB2B1818CAE531E(iVar1);
	unk_0x798362387B375EB6(5, "FMINTRO");
	unk_0x798362387B375EB6(6, "FMINTRO");
	unk_0x798362387B375EB6(7, "FMINTRO");
	unk_0x36B659209EBDD366("mp_intro_seq@");
	if (((((unk_0x6DF9C43E3CC645BC(iVar0) && unk_0x6DF9C43E3CC645BC(iVar1)) && unk_0xDA28050D0A4CAB3A(5, "FMINTRO")) && unk_0xDA28050D0A4CAB3A(6, "FMINTRO")) && unk_0xDA28050D0A4CAB3A(7, "FMINTRO")) && unk_0xB25A0D192C6A0A5B("mp_intro_seq@"))
	{
		if (!unk_0xD4B321D9096B01FC(uParam0->f_34))
		{
			unk_0xB82DC93528F8603C(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = unk_0x847817A65E16621A(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0, 0);
			unk_0xF4EA52166C1B2867(uParam0->f_34, 1);
			unk_0xF0ACB85418455412(uParam0->f_34, 0);
			unk_0x3427075D3608A3BB(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!unk_0xD4B321D9096B01FC(uParam0->f_35))
		{
			if (unk_0xD960230552BC4165(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xB983F26E7AFB47BF(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, 0);
				unk_0x31A7662B885C7549(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
				unk_0xCC94EE23853F38E4(uParam0->f_35, 1);
				unk_0x04F5A8AA60EC662B(uParam0->f_34, 1);
				unk_0x04F5A8AA60EC662B(uParam0->f_35, 1);
				unk_0xDB889DCC8B0139E6(uParam0->f_35, unk_0x79CDB5CF25B388E3(unk_0x0FA8183DAD2B3203()));
				unk_0x3427075D3608A3BB(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0xD4B321D9096B01FC(uParam0->f_34) || !unk_0xD4B321D9096B01FC(uParam0->f_35))
	{
		return 0;
	}
	unk_0xE0AC40EF164A2569(iVar0);
	unk_0xE0AC40EF164A2569(iVar1);
	unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 9);
	return 1;
}

void func_284(var uParam0)
{
	int iVar0;
	
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_3, 0))
	{
		func_294();
		func_292();
		if (func_286(uParam0))
		{
			if (func_285(uParam0))
			{
				if (!unk_0xD2652A8A890B29BA(uParam0->f_7))
				{
					uParam0->f_7 = unk_0x87B0FFB353287F00("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				unk_0x88C9848645E010B6(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0xE0AC40EF164A2569(func_268(iVar0));
					iVar0++;
				}
				unk_0xE0AC40EF164A2569(func_266());
				unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 0);
			}
		}
	}
}

int func_285(var uParam0)
{
	int iVar0;
	
	iVar0 = func_266();
	if (!unk_0xD4B321D9096B01FC(uParam0->f_91))
	{
		if (unk_0xD4B321D9096B01FC(uParam0->f_49[2]))
		{
			if (unk_0x8C1D4D7F60F78C2A(iVar0))
			{
				if (unk_0x6DF9C43E3CC645BC(iVar0))
				{
					if (unk_0xB25A0D192C6A0A5B("MP_INTRO_SEQ@"))
					{
						if (!unk_0xF4B969E0807E76C7(uParam0->f_49[2], 0))
						{
							uParam0->f_10 = unk_0xF2A54C51C03CADAA(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADFCDA47D7031CF3(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0xB983F26E7AFB47BF(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, 0);
							unk_0xCC94EE23853F38E4(uParam0->f_91, 1);
							unk_0x8582CCEB95B1F1BE(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							unk_0x3F8774A014F77C2D(uParam0->f_10, 1);
							unk_0x860A5CC30A0EF207(uParam0->f_91, true);
							unk_0x8C85E8C71AD74415(uParam0->f_91, false, 0);
							unk_0x4F1AEE91ADAE01D9(uParam0->f_91, joaat("gadget_parachute"));
							unk_0x0453EBC0FB8D8A80(uParam0->f_91, 0, 1, 1, 0);
							unk_0x0453EBC0FB8D8A80(uParam0->f_91, 1, 0, 0, 0);
							unk_0x0453EBC0FB8D8A80(uParam0->f_91, 2, 0, 2, 0);
							unk_0x0453EBC0FB8D8A80(uParam0->f_91, 3, 0, 2, 0);
							unk_0x0453EBC0FB8D8A80(uParam0->f_91, 4, 1, 0, 0);
							unk_0x0453EBC0FB8D8A80(uParam0->f_91, 5, 0, 0, 0);
							unk_0x0453EBC0FB8D8A80(uParam0->f_91, 6, 0, 0, 0);
							unk_0x0453EBC0FB8D8A80(uParam0->f_91, 7, 0, 0, 0);
							unk_0x0453EBC0FB8D8A80(uParam0->f_91, 8, 0, 0, 0);
							unk_0x0453EBC0FB8D8A80(uParam0->f_91, 9, 0, 0, 0);
							unk_0x0453EBC0FB8D8A80(uParam0->f_91, 10, 0, 0, 0);
							unk_0x0453EBC0FB8D8A80(uParam0->f_91, 11, 0, 0, 0);
							unk_0xC8AD310AAEF6B6EE(uParam0->f_91, 0);
							unk_0xC8AD310AAEF6B6EE(uParam0->f_91, 1);
							unk_0xC8AD310AAEF6B6EE(uParam0->f_91, 2);
							unk_0xC8AD310AAEF6B6EE(uParam0->f_91, 3);
							unk_0xC8AD310AAEF6B6EE(uParam0->f_91, 4);
							unk_0xC8AD310AAEF6B6EE(uParam0->f_91, 5);
							unk_0xC8AD310AAEF6B6EE(uParam0->f_91, 6);
							unk_0xC8AD310AAEF6B6EE(uParam0->f_91, 7);
							unk_0xC8AD310AAEF6B6EE(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!unk_0xD4B321D9096B01FC(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_286(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_2, 31))
	{
		func_294();
		iVar5 = 0;
		while (iVar5 < 8)
		{
			func_291(iVar5, &Var1, &fVar4);
			if (!func_290(Var1, 0f, 0f, 0f, 0))
			{
				if (!unk_0xD4B321D9096B01FC(uParam0->f_49[iVar5]))
				{
					iVar0 = func_268(iVar5);
					if (unk_0x8C1D4D7F60F78C2A(iVar0))
					{
						if (unk_0x6DF9C43E3CC645BC(iVar0))
						{
							uParam0->f_49[iVar5] = unk_0x847817A65E16621A(iVar0, Var1, fVar4, 0, 0, 0);
							unk_0x9D3FE4786B8925D2(uParam0->f_49[iVar5], 1);
							unk_0xFA8246C40ECE4497(uParam0->f_49[iVar5], 0f);
							unk_0x0B440CF5F7F3A631(uParam0->f_49[iVar5], 0);
							if (iVar5 == 2)
							{
								unk_0x6A99D1F228E18F5B(uParam0->f_49[iVar5], 4, 0, 1);
								unk_0x48AB9211DB740DB5(uParam0->f_49[iVar5], 4, 0, 1f);
							}
							func_289(uParam0, iVar5);
							func_288(uParam0, iVar5);
							unk_0xE0AC40EF164A2569(iVar0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 8)
		{
			if (!unk_0xD4B321D9096B01FC(uParam0->f_49[iVar5]))
			{
				return 0;
			}
			if (!unk_0xA2BC31158C8CEFD2(uParam0->f_2, iVar5))
			{
				if (func_287(uParam0, iVar5))
				{
					unk_0xA1E7A40E1F56E511(&(uParam0->f_2), iVar5);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xD960230552BC4165(uParam0->f_49[iVar5], 0))
			{
				if (!unk_0xCC0D9338F98B4703(uParam0->f_49[iVar5]))
				{
					return 0;
				}
			}
			iVar5++;
		}
		unk_0xA1E7A40E1F56E511(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_287(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0xD960230552BC4165(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x6AA7F87D45193D03(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 0, 1, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 2, 1, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 3, 1, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 5, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 7, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 10, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 14, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 15, 4, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xD960230552BC4165(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x6AA7F87D45193D03(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x19DA756F0F6C6D42(uParam0->f_49[iParam1], 22, 1);
					unk_0x3E26E6ECFA8CB038(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0xD960230552BC4165(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x6AA7F87D45193D03(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 4, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 14, 5, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x19DA756F0F6C6D42(uParam0->f_49[iParam1], 22, 1);
					unk_0x3E26E6ECFA8CB038(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0xD960230552BC4165(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x6AA7F87D45193D03(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 23, 11, 0);
					unk_0x19DA756F0F6C6D42(uParam0->f_49[iParam1], 22, 1);
					unk_0x3E26E6ECFA8CB038(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xD960230552BC4165(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x6AA7F87D45193D03(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 7, 1, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 11, 3, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 12, 2, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 13, 2, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 16, 4, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0x19DA756F0F6C6D42(uParam0->f_49[iParam1], 22, 1);
					unk_0x3E26E6ECFA8CB038(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0xD960230552BC4165(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x6AA7F87D45193D03(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 3, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 6, 2, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 10, 3, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 15, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0x19DA756F0F6C6D42(uParam0->f_49[iParam1], 22, 1);
					unk_0x3E26E6ECFA8CB038(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0xD960230552BC4165(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x6AA7F87D45193D03(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 1, 1, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 8, 0, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0xED4CA44675A55548(uParam0->f_49[iParam1], 23, 0, 0);
					unk_0x19DA756F0F6C6D42(uParam0->f_49[iParam1], 22, 1);
					unk_0x3E26E6ECFA8CB038(uParam0->f_49[iParam1], 0);
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

void func_288(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x97BEF8C19B950CA3(uParam0->f_49[iParam1], 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 0, 1);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 1, 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 2, 1);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 3, 1);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 4, 1);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 5, 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 7, 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 10, 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0x97BEF8C19B950CA3(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0x97BEF8C19B950CA3(uParam0->f_49[iParam1], 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 0, 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0x97BEF8C19B950CA3(uParam0->f_49[iParam1], 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0x97BEF8C19B950CA3(uParam0->f_49[iParam1], 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 1, 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 2, 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 4, 1);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 7, 1);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0x97BEF8C19B950CA3(uParam0->f_49[iParam1], 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 0, 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 1, 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 2, 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 3, 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 4, 1);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 6, 2);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 10, 3);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0x97BEF8C19B950CA3(uParam0->f_49[iParam1], 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 1, 1);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 4, 1);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 8, 0);
			unk_0xA0CE643765021F89(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_289(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x9E0EE3FF7D8C67E8(uParam0->f_49[iParam1], 83, 134);
			unk_0xE262D2AD599AFAF7(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0x9E0EE3FF7D8C67E8(uParam0->f_49[iParam1], 0, 0);
			unk_0xE262D2AD599AFAF7(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0x9E0EE3FF7D8C67E8(uParam0->f_49[iParam1], 49, 0);
			unk_0xE262D2AD599AFAF7(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0x9E0EE3FF7D8C67E8(uParam0->f_49[iParam1], 0, 0);
			unk_0xE262D2AD599AFAF7(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0x9E0EE3FF7D8C67E8(uParam0->f_49[iParam1], 43, 5);
			unk_0xE262D2AD599AFAF7(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0x9E0EE3FF7D8C67E8(uParam0->f_49[iParam1], 3, 3);
			unk_0xE262D2AD599AFAF7(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0x9E0EE3FF7D8C67E8(uParam0->f_49[iParam1], 35, 0);
			unk_0xE262D2AD599AFAF7(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_290(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_291(int iParam0, var uParam1, var uParam2)
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

void func_292()
{
	unk_0x6BB2B1818CAE531E(func_266());
	unk_0x36B659209EBDD366(func_293());
}

char* func_293()
{
	return "MP_INTRO_SEQ@";
}

void func_294()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		unk_0x6BB2B1818CAE531E(func_268(iVar0));
		iVar0++;
	}
}

void func_295(var uParam0, float fParam1, float fParam2)
{
	func_238(uParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_238(uParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_238(uParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_238(uParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_238(uParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_296(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	switch (iParam1)
	{
		case 14:
			func_297(uParam0, 0, -2997.174f, 330.9234f, 14.2341f, -15.97f, &uVar1, 1);
			func_297(uParam0, 2, -2983.9f, 423.7414f, 14.4122f, -5.25f, &uVar1, 1);
			break;
		
		case 15:
			func_297(uParam0, 1, -2622.208f, -109.3386f, 19.2643f, 39.34f, &uVar1, 1);
			func_297(uParam0, 3, -2583.95f, -143.6469f, 20.6224f, 48.89f, &uVar1, 1);
			func_297(uParam0, 7, -2552.145f, -169.0495f, 19.8664f, 60.04f, &uVar1, 1);
			func_297(uParam0, 8, -2531.474f, -174.4581f, 19.2269f, 58.09f, &uVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_297(uParam0, 0, -2420.618f, -232.2668f, 15.3525f, 57.71f, &uVar1, 1);
			func_297(uParam0, 2, -2399.709f, -249.2471f, 14.9551f, 58.19f, &uVar1, 1);
			func_297(uParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &uVar1, 1);
			func_297(uParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &uVar1, 1);
			func_297(uParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &uVar1, 1);
			func_297(uParam0, 9, -2408.733f, -238.8328f, 15.2055f, 59.84f, &uVar1, 1);
			break;
		
		case 18:
			func_297(uParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &uVar1, 1);
			func_297(uParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &uVar1, 1);
			func_297(uParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &uVar1, 1);
			func_297(uParam0, 8, -2191.429f, -335.8769f, 12.7225f, 84.71f, &uVar1, 1);
			break;
		
		case 19:
			func_297(uParam0, 0, -1833.87f, -561.7711f, 11.0989f, 48.11f, &uVar1, 1);
			func_297(uParam0, 1, -1630.587f, -685.6821f, 16.5351f, 58.23f, &uVar1, 1);
			func_297(uParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &uVar1, 1);
			func_297(uParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &uVar1, 1);
			func_297(uParam0, 4, -1706.507f, -720.8959f, 9.6281f, -132.94f, &uVar1, 1);
			func_297(uParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &uVar1, 1);
			func_297(uParam0, 6, -1782.764f, -610.5726f, 10.3008f, 52.34f, &uVar1, 1);
			func_297(uParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &uVar1, 1);
			func_297(uParam0, 8, -1751.892f, -682.1017f, 9.6795f, -134.89f, &uVar1, 1);
			func_297(uParam0, 9, -1742.098f, -642.5658f, 9.8169f, 48.19f, &uVar1, 1);
			break;
		
		case 33:
			func_297(uParam0, 0, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &uVar1, 0);
			func_297(uParam0, 5, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &uVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_297(uParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &uVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_297(uParam0, 0, -712.0925f, -1983.516f, 25.688f, -167.99f, &uVar1, 0);
			func_297(uParam0, 1, -533.9934f, -2004.727f, 26.9085f, 58.71f, &uVar1, 0);
			func_297(uParam0, 2, -653.3551f, -2047.782f, 27.3566f, -112.14f, &uVar1, 0);
			func_297(uParam0, 3, -663.821f, -1934.85f, 27.1417f, -121.65f, &uVar1, 0);
			func_297(uParam0, 4, -656.6017f, -2009.078f, 30.0188f, -106.53f, &uVar1, 0);
			func_297(uParam0, 5, -502.696f, -2023.068f, 26.2376f, 60.2827f, &uVar1, 0);
			func_297(uParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &uVar1, 0);
			func_297(uParam0, 7, -624.7944f, -1960.975f, 26.29f, 237.3848f, &uVar1, 0);
			func_297(uParam0, 8, -463.0545f, -1998.255f, 36.6533f, 27.85f, &uVar1, 0);
			func_297(uParam0, 9, -473.4099f, -1950.213f, 24.7576f, 37.16f, &uVar1, 0);
			func_297(uParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &uVar1, 0);
			func_297(uParam0, 11, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &uVar1, 0);
			func_297(uParam0, 12, -584.929f, -1970.332f, 26.2437f, 55.8826f, &uVar1, 0);
			func_297(uParam0, 13, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &uVar1, 0);
			func_297(uParam0, 14, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &uVar1, 0);
			break;
		
		case 39:
			func_297(uParam0, 4, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &uVar1, 0);
			func_297(uParam0, 9, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &uVar1, 0);
			break;
		
		case 40:
			func_297(uParam0, 3, -270.2197f, -1499.752f, 29.4309f, -13.07f, &uVar1, 0);
			func_297(uParam0, 7, -313.1461f, -1559.589f, 24.2966f, 145.66f, &uVar1, 0);
			func_297(uParam0, 8, -301.9485f, -1550.052f, 25.5595f, 146.95f, &uVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_297(uParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &uVar1, 0);
			func_297(uParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &uVar1, 0);
			func_297(uParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &uVar1, 0);
			break;
		
		case 44:
			func_297(uParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &uVar1, 0);
			func_297(uParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &uVar1, 0);
			func_297(uParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &uVar1, 0);
			break;
		
		case 45:
			func_297(uParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &uVar1, 0);
			func_297(uParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &uVar1, 0);
			func_297(uParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &uVar1, 0);
			func_297(uParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &uVar1, 0);
			func_297(uParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &uVar1, 0);
			func_297(uParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &uVar1, 0);
			func_297(uParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &uVar1, 0);
			func_297(uParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &uVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_297(uParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &uVar1, 0);
			func_297(uParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &uVar1, 0);
			func_297(uParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &uVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_297(uParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &uVar1, 0);
			func_297(uParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &uVar1, 0);
			func_297(uParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &uVar1, 0);
			func_297(uParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &uVar1, 0);
			func_297(uParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &uVar1, 0);
			func_297(uParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &uVar1, 0);
			func_297(uParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &uVar1, 0);
			func_297(uParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &uVar1, 0);
			break;
		
		case 50:
			break;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xA2BC31158C8CEFD2(uVar1, iVar0))
		{
			func_212(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_297(var uParam0, int iParam1, struct<3> Param2, float fParam5, var uParam6, bool bParam7)
{
	if (unk_0xD960230552BC4165(uParam0->f_58[iParam1], 0) && !unk_0x2BF5E63466422C38(uParam0->f_74[iParam1]))
	{
		unk_0x860A5CC30A0EF207(uParam0->f_58[iParam1], false);
		unk_0x8C85E8C71AD74415(uParam0->f_58[iParam1], true, 0);
		unk_0xCB3446C6A91D1A78(uParam0->f_58[iParam1], Param2, 1, 0, 0, 1);
		unk_0x5A2B7C446C0CF087(uParam0->f_58[iParam1], fParam5);
		unk_0x1ECAE5FB4DE78CF8(uParam0->f_58[iParam1], 1084227584);
		unk_0x43C33457132CC44C(uParam0->f_58[iParam1]);
		if (bParam7)
		{
			unk_0xF7D74EF517BDB7D0(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			unk_0xD32341B4ADEC0821(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			unk_0xF7D74EF517BDB7D0(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			unk_0xD32341B4ADEC0821(uParam0->f_58[iParam1], 10f);
		}
		unk_0x7D81B41B134BD6F2(uParam0->f_74[iParam1], 1);
		unk_0x2BBEC4B37B923F4B(uParam0->f_58[iParam1], true, 0);
		unk_0x2BBEC4B37B923F4B(uParam0->f_74[iParam1], true, 0);
		unk_0xA1E7A40E1F56E511(uParam6, iParam1);
	}
}

void func_298(var uParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10)
{
	if (!unk_0xD2652A8A890B29BA(uParam0->f_8))
	{
		uParam0->f_8 = unk_0x87B0FFB353287F00("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = unk_0xF2A54C51C03CADAA(Param3, Param6, 2);
	unk_0x0116AC515A8787A5(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	unk_0x418ABE435B684083(uParam0->f_9, fParam9);
	unk_0xE151B846AFD22A97(uParam0->f_9, iParam10);
	unk_0x0472F75F711AABCE(uParam0->f_8, 1);
	unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 1, 0);
}

void func_299(var uParam0)
{
	unk_0xE0AC40EF164A2569(joaat("frogger"));
	unk_0x497FAD093E19504A(8, "FMIntro");
	if (unk_0xD4B321D9096B01FC(uParam0->f_48))
	{
		unk_0xBD22862A2C5FD6DF(&(uParam0->f_48));
	}
}

int func_300(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_302();
		if (!unk_0xD4B321D9096B01FC(uParam0->f_92[0]))
		{
			if (unk_0x6DF9C43E3CC645BC(joaat("cheetah")))
			{
				uParam0->f_92[0] = unk_0x847817A65E16621A(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0, 0);
				unk_0xF0ACB85418455412(uParam0->f_92[0], 0);
				unk_0x3E26E6ECFA8CB038(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xD4B321D9096B01FC(uParam0->f_92[1]))
		{
			if (unk_0x6DF9C43E3CC645BC(joaat("entityxf")))
			{
				uParam0->f_92[1] = unk_0x847817A65E16621A(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0, 0);
				unk_0xF0ACB85418455412(uParam0->f_92[1], 0);
				unk_0x28DC4562BD7099B3(uParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				unk_0xA429E610637A53F5(uParam0->f_92[1], 8);
				unk_0x3E26E6ECFA8CB038(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xD4B321D9096B01FC(uParam0->f_92[2]))
		{
			if (unk_0x6DF9C43E3CC645BC(joaat("monroe")))
			{
				uParam0->f_92[2] = unk_0x847817A65E16621A(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0, 0);
				unk_0xF0ACB85418455412(uParam0->f_92[2], 0);
				unk_0x28DC4562BD7099B3(uParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				unk_0xA429E610637A53F5(uParam0->f_92[2], 2);
				unk_0x3E26E6ECFA8CB038(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xD4B321D9096B01FC(uParam0->f_92[3]))
		{
			if (unk_0x6DF9C43E3CC645BC(joaat("cheetah")))
			{
				uParam0->f_92[3] = unk_0x847817A65E16621A(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0, 0);
				unk_0xF0ACB85418455412(uParam0->f_92[3], 0);
				unk_0x28DC4562BD7099B3(uParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				unk_0xA429E610637A53F5(uParam0->f_92[3], 15);
				unk_0x3E26E6ECFA8CB038(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xD4B321D9096B01FC(uParam0->f_92[4]))
		{
			if (unk_0x6DF9C43E3CC645BC(joaat("feltzer2")))
			{
				uParam0->f_92[4] = unk_0x847817A65E16621A(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0, 0);
				unk_0xF0ACB85418455412(uParam0->f_92[4], 0);
				unk_0x28DC4562BD7099B3(uParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				unk_0x9E0EE3FF7D8C67E8(uParam0->f_92[4], 0, 0);
				unk_0xE262D2AD599AFAF7(uParam0->f_92[4], 0, 156);
				unk_0x97BEF8C19B950CA3(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0xD960230552BC4165(uParam0->f_92[4], 0))
		{
			if (!unk_0xA2BC31158C8CEFD2(uParam0->f_3, 1))
			{
				if (unk_0x6AA7F87D45193D03(uParam0->f_92[4]) > 0)
				{
					unk_0x19DA756F0F6C6D42(uParam0->f_92[4], 22, 1);
					unk_0x3E26E6ECFA8CB038(uParam0->f_92[4], 0);
					unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0x6DF9C43E3CC645BC(func_246()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0xD4B321D9096B01FC(uParam0->f_98[iVar1]))
				{
					if (unk_0xD4B321D9096B01FC(uParam0->f_92[iVar1]))
					{
						if (unk_0xD960230552BC4165(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = unk_0x81024A420EDCE2B5(uParam0->f_92[iVar1], 4, func_246(), -1, 0, false);
							unk_0xCC94EE23853F38E4(uParam0->f_98[iVar1], 1);
							unk_0xB90231068DCFFBA1(uParam0->f_92[iVar1], 1, 1, 0);
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
			unk_0xE0AC40EF164A2569(joaat("cheetah"));
			unk_0xE0AC40EF164A2569(joaat("monroe"));
			unk_0xE0AC40EF164A2569(joaat("entityxf"));
			unk_0xE0AC40EF164A2569(joaat("feltzer2"));
			unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_301()
{
	func_302();
	if (unk_0x6DF9C43E3CC645BC(func_246()))
	{
		if (unk_0x6DF9C43E3CC645BC(joaat("cheetah")))
		{
			if (unk_0x6DF9C43E3CC645BC(joaat("monroe")))
			{
				if (unk_0x6DF9C43E3CC645BC(joaat("entityxf")))
				{
					if (unk_0x6DF9C43E3CC645BC(joaat("feltzer2")))
					{
						if (unk_0xDA28050D0A4CAB3A(100, "FM_Intro_uber"))
						{
							if (unk_0xDA28050D0A4CAB3A(101, "FM_Intro_uber"))
							{
								if (unk_0xDA28050D0A4CAB3A(102, "FM_Intro_uber"))
								{
									if (unk_0xDA28050D0A4CAB3A(103, "FM_Intro_uber"))
									{
										if (unk_0xDA28050D0A4CAB3A(104, "FM_Intro_uber"))
										{
											if (unk_0xB25A0D192C6A0A5B("mp_intro_seq@"))
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

void func_302()
{
	unk_0x6BB2B1818CAE531E(joaat("cheetah"));
	unk_0x6BB2B1818CAE531E(joaat("monroe"));
	unk_0x6BB2B1818CAE531E(joaat("entityxf"));
	unk_0x6BB2B1818CAE531E(joaat("feltzer2"));
	unk_0x6BB2B1818CAE531E(func_246());
	unk_0x798362387B375EB6(100, "FM_Intro_uber");
	unk_0x798362387B375EB6(101, "FM_Intro_uber");
	unk_0x798362387B375EB6(102, "FM_Intro_uber");
	unk_0x798362387B375EB6(103, "FM_Intro_uber");
	unk_0x798362387B375EB6(104, "FM_Intro_uber");
	unk_0x36B659209EBDD366("mp_intro_seq@");
}

int func_303(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0x6BB2B1818CAE531E(joaat("asterope"));
		unk_0x6BB2B1818CAE531E(joaat("sentinel"));
		unk_0x6BB2B1818CAE531E(func_246());
		if ((unk_0x6DF9C43E3CC645BC(joaat("asterope")) && unk_0x6DF9C43E3CC645BC(joaat("sentinel"))) && unk_0x6DF9C43E3CC645BC(func_246()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0xD4B321D9096B01FC(uParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_213(iVar0, &Var2, &fVar5);
					uParam0->f_58[iVar0] = unk_0x847817A65E16621A(iVar1, Var2, fVar5, 0, 0, 0);
					unk_0xA429E610637A53F5(uParam0->f_58[iVar0], iVar0);
					unk_0x04F5A8AA60EC662B(uParam0->f_58[iVar0], 1);
					unk_0xB6883476E00DBD57(uParam0->f_58[iVar0], 2);
					unk_0x860A5CC30A0EF207(uParam0->f_58[iVar0], true);
				}
				if (unk_0xD4B321D9096B01FC(uParam0->f_58[iVar0]))
				{
					if (!unk_0xD4B321D9096B01FC(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = unk_0x81024A420EDCE2B5(uParam0->f_58[iVar0], 4, func_246(), -1, 0, false);
						unk_0x04F5A8AA60EC662B(uParam0->f_74[iVar0], 1);
						unk_0xCC94EE23853F38E4(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0xD4B321D9096B01FC(uParam0->f_58[iVar0]) || !unk_0xD4B321D9096B01FC(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0xE0AC40EF164A2569(joaat("asterope"));
		unk_0xE0AC40EF164A2569(joaat("sentinel"));
		unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_304(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_228(uParam0, iParam1, 0);
	if (uParam0->f_293)
	{
		if ((uParam0->f_13 + iVar0) + iParam2) <= unk_0x9B35D07DCD0F0B43()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_236(uParam0)
	{
		return 1;
	}
	return 0;
}

int func_305(var uParam0)
{
	int iVar0;
	
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	unk_0x6BB2B1818CAE531E(iVar0);
	unk_0x798362387B375EB6(8, "FMIntro");
	if (unk_0x6DF9C43E3CC645BC(iVar0) && unk_0xDA28050D0A4CAB3A(8, "FMIntro"))
	{
		if (!unk_0xD4B321D9096B01FC(uParam0->f_48))
		{
			uParam0->f_48 = unk_0x847817A65E16621A(iVar0, unk_0x25045323FB28ED97(8, 0f, "FMIntro"), 0f, 0, 0, 0);
			unk_0x10DFCD426DB9FAB3(uParam0->f_48, 8, "FMIntro", 1);
			unk_0xF7AA5991D9BC90F2(uParam0->f_48, 5000f);
			unk_0xFDA7BECCB86E3EFC(uParam0->f_48);
			unk_0x2BBEC4B37B923F4B(uParam0->f_48, false, 0);
			unk_0xE0AC40EF164A2569(iVar0);
		}
	}
	if (!unk_0xD4B321D9096B01FC(uParam0->f_48))
	{
		return 0;
	}
	unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 8);
	return 1;
}

void func_306(var uParam0, int iParam1)
{
	if (func_304(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (unk_0x9B35D07DCD0F0B43() - func_228(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_307(var uParam0)
{
	uParam0->f_13 = unk_0x9B35D07DCD0F0B43();
}

Vector3 func_308(struct<3> Param0)
{
	return (-unk_0x0BADBFA3B172435F(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), (unk_0xD0FFB162F40A139C(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), unk_0x0BADBFA3B172435F(Param0.f_0);
}

int func_309()
{
	return Global_1312808;
}

void func_310()
{
	unk_0xEAD374C7213329E9(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	unk_0xEAD374C7213329E9(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
}

void func_311()
{
	func_219(0);
	func_218(1);
}

void func_312(bool bParam0, int iParam1)
{
	func_316();
	func_314(1);
	unk_0x0D23E3918F7AF11B(1);
	unk_0x1C9DBC28A851F0A6();
	func_253(1, 1, 1, 0, 0, 0);
	func_313();
	func_205(12, 1, -1);
	func_206(0);
	unk_0x85417D6445C532FC(1, -1);
	unk_0x4BEE8AE599A4A300(0);
	unk_0x5AC8A91A3FD00B39(0);
	func_314(1);
	func_260(1);
	Global_2437549.f_3732 = 1;
	if (bParam0)
	{
		if (!unk_0xED4D72D338501085())
		{
			unk_0xBB40A8EBAAC73C4E(1, iParam1);
		}
	}
}

void func_313()
{
	func_206(0);
	func_205(4, 1, -1);
	func_205(6, 1, -1);
	func_205(7, 1, -1);
	func_205(3, 1, -1);
	func_205(1, 1, -1);
	func_205(2, 1, -1);
	func_205(11, 1, -1);
	func_205(13, 1, -1);
	func_205(14, 1, -1);
	func_205(16, 1, -1);
}

void func_314(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110212)
	{
		unk_0xE845A888B98DD9F6(iVar0, iParam0);
		func_315(iVar0);
		iVar0++;
	}
}

void func_315(int iParam0)
{
	Global_110212[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_110212[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_110212[iParam0 /*28*/].f_4), "", 64);
	Global_110212[iParam0 /*28*/].f_23 = 0;
	Global_110212[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_110212[iParam0 /*28*/].f_27 = 0;
	Global_110212[iParam0 /*28*/].f_20 = 0;
	Global_110212[iParam0 /*28*/].f_22 = 0;
}

void func_316()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), unk_0x0037AFCBDC61F351(), 32);
	Global_1312575.f_9 = unk_0xA8C462EF7D9DC564(&(Global_1312575.f_1));
}

int func_317()
{
	if (unk_0x260395BA7F0C83CB())
	{
		func_319(0);
		unk_0xBACA4322D322C99D();
		return 1;
	}
	if (func_318() == 3)
	{
		func_319(2);
		unk_0x38EDE0046123962F(250f);
	}
	if (unk_0x55F5513748ACB37F() >= 250f)
	{
		unk_0x38EDE0046123962F(250f);
	}
	if (unk_0x4A626DCFED7037FF() == 0)
	{
		unk_0x38EDE0046123962F(250f);
	}
	if (unk_0x55F5513748ACB37F() <= 0f)
	{
		func_319(0);
		return 1;
	}
	return 0;
}

int func_318()
{
	return Global_1312467.f_19;
}

void func_319(int iParam0)
{
	if (Global_1312467.f_19 != iParam0)
	{
		Global_1312467.f_19 = iParam0;
	}
}

void func_320(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_324(iParam0, &iVar1);
	if (!unk_0x2553916E420E8EF0("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x7D92DF5C9C68FE25(iVar1))
			{
				return;
			}
			if (unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()) == iVar1)
			{
				func_323(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x7D92DF5C9C68FE25(iVar1))
			{
				return;
			}
			if (func_321(iParam0))
			{
				func_323(iParam0, 0);
			}
		}
		unk_0xF5E5C3C4F3377E78(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_321(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_322(iParam0) };
	if (Var0.f_1 != -1 && unk_0xA2BC31158C8CEFD2(Global_37173[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_322(var uParam0)
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
	while (iVar1 < 7)
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

void func_323(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_322(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xA1E7A40E1F56E511(&(Global_37173[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_37173[Var0.f_1]), Var0.f_0);
	}
}

var func_324(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_325(iParam0) };
	*iParam1 = unk_0x2BA8B1187A604700(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_325(int iParam0)
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
			Var5 = { func_326(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_326(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_326(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_326(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_326(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_326(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_326(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049852[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_326(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_326(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_326(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_326(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_326(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_326(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_326(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_326(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_326(43, 0) };
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
			Var5 = { func_326(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_326(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_326(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_326(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_326(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_326(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_326(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_326(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_326(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_326(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_326(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_326(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_326(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_326(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_326(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_326(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_326(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_326(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_326(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_326(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_326(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_326(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_326(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_326(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_326(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_326(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_326(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_326(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_326(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_326(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_326(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_326(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_326(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_326(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_326(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_326(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_326(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_326(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_326(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_326(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_326(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_326(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_326(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_326(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_326(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_326(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_326(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_326(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_326(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_326(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_326(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_326(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_326(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_326(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 197:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 212:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_326(int iParam0, bool bParam1)
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

int func_327()
{
	return Global_2460160;
}

bool func_328()
{
	return Global_2458997;
}

void func_329(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(bParam0, 0);
	}
	func_345(0);
	func_330(66);
}

void func_330(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	iVar0 = func_309();
	if (Global_1312873)
	{
		sVar1 = func_344(iParam0);
		iVar2 = unk_0xA8C462EF7D9DC564(sVar1);
		func_343(&Global_2461259, 1, 0);
		unk_0xCC03F01149A79917(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_331();
	}
	Global_1312808 = iParam0;
}

void func_331()
{
	if (Global_2458905)
	{
		if (func_333())
		{
			unk_0x5800A2599806C837(0);
			func_332();
		}
	}
}

void func_332()
{
	if (Global_2458902)
	{
		if (!Global_2458901)
		{
			Global_2458901 = 1;
			Global_2458910 = unk_0x9B35D07DCD0F0B43();
			Global_2458909 = 1;
		}
	}
}

int func_333()
{
	if (Global_2449755.f_6465 && Global_2458902)
	{
		if (func_336(0))
		{
			if (func_334() && !unk_0x260395BA7F0C83CB())
			{
				if (((Global_2449755.f_6487 == 122 || Global_2449755.f_6487 == 123) || Global_2449755.f_6487 == 124) || Global_2449755.f_6487 == 125)
				{
					return 1;
				}
				if (unk_0xA2BC31158C8CEFD2(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_68.f_2, 26))
				{
					return 1;
				}
				if (unk_0xA2BC31158C8CEFD2(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_68.f_2, 27))
				{
					return 1;
				}
				if (Global_1687910)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_334()
{
	if (func_335() == 0)
	{
		return 1;
	}
	return 0;
}

int func_335()
{
	return Global_1312467.f_18;
}

int func_336(int iParam0)
{
	if (func_341(unk_0x7C7787D2D7139A85()) && unk_0xA2BC31158C8CEFD2(Global_1676879.f_4, 22))
	{
		return 0;
	}
	if (Global_1315686)
	{
		return 0;
	}
	if (!unk_0x393E9918BC37548A())
	{
		return 0;
	}
	if (func_340())
	{
		return 0;
	}
	if ((Global_2458903 && func_339()) || Global_2458903 == 0)
	{
		return 1;
	}
	if (Global_2449755.f_6487 == 123 && Global_2458906)
	{
		return 1;
	}
	if (Global_2458904)
	{
		if (Global_2449755.f_6487 == 122)
		{
			return 1;
		}
	}
	if (Global_2458907)
	{
		if (iParam0 == 0)
		{
			if ((Global_2449755.f_6487 == 123 || (Global_2449755.f_6487 == 124 && func_337() == 1)) || Global_2449755.f_6487 == 125)
			{
				return 1;
			}
		}
	}
	if (Global_2449755.f_6465 && Global_2458908)
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_337()
{
	return func_338(unk_0x7C7787D2D7139A85());
}

var func_338(int iParam0)
{
	return unk_0x2E938CC56931C5D4(Global_2424073[iParam0 /*421*/].f_309.f_3, 28, 31);
}

bool func_339()
{
	return unk_0xA2BC31158C8CEFD2(Global_4456448.f_184550, 12);
}

bool func_340()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961.f_2, 11);
}

int func_341(int iParam0)
{
	if (iParam0 != func_140())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_342(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
	}
	return -1;
}

void func_343(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x393E9918BC37548A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x169A8AC9F93C2727();
		}
		else
		{
			*uParam0 = unk_0x50D85685589EFCBD();
		}
	}
	else
	{
		*uParam0 = unk_0x9B35D07DCD0F0B43();
	}
	uParam0->f_1 = 1;
}

char* func_344(int iParam0)
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
		
		case 29:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 28:
			return "TRANSITION_STATE_POST_BINK_VIDEO_WARP";
		
		case 30:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 31:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 33:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 34:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 35:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 37:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 38:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 39:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 44:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 46:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 47:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 48:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 50:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 51:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 52:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 45:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 54:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 53:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 55:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 57:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 61:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 62:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 63:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 64:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 65:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 66:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 67:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		case 68:
			return "TRANSITION_STATE_CASINO_BINK";
		
		default:
	}
	return "";
}

void func_345(int iParam0)
{
	var uVar0;
	
	uVar0 = func_346();
	Global_1312807 = iParam0;
}

var func_346()
{
	return Global_1312807;
}

void func_347(bool bParam0, bool bParam1)
{
	int iVar0;
	
	func_349(&Global_22131, bParam1);
	unk_0x85348131606ACBB3(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0x3DDEF8BFE3DA0853();
			func_348(0);
			if (unk_0xD4B321D9096B01FC(Global_1315655))
			{
				if (unk_0x532AFD85DAA91F63(Global_1315655, 0))
				{
					if (!unk_0x00123AB82C5FAC28(Global_1315655))
					{
						unk_0xE5C667CF3B4642D2(Global_1315655, 0, 0);
					}
					unk_0x4F058F27442031CC(&Global_1315655);
				}
			}
		}
	}
}

void func_348(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2461237 = 0;
	}
	Global_1312467.f_18 = iParam0;
}

void func_349(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0xD2652A8A890B29BA(uParam0->f_9))
	{
		if (unk_0x1F70CA72458DB6BD(uParam0->f_9))
		{
			func_350(0);
		}
		unk_0xDC5BA18043353983(uParam0->f_9, 0);
	}
	if (!Global_42527)
	{
		unk_0x46E35A3D0C15DA6C(1);
		unk_0x20BFC1E1350B8732(0f);
		unk_0xC3FE9FADA2E85678(0f);
	}
	Global_2405071.f_596 = 0f;
	if (!bParam1)
	{
		unk_0x0298C8010FD5A69E(0, 0, 0, 1, 0, 0);
	}
}

void func_350(int iParam0)
{
	Global_22209 = iParam0;
}

void func_351(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_356(1, 0, 1);
	}
	else
	{
		func_352(iParam1);
	}
}

void func_352(int iParam0)
{
	func_355();
	if (iParam0 == 0)
	{
		if (unk_0x882C11C0D8A55CC3())
		{
			return;
		}
	}
	if (func_354() == 0 || unk_0xCD97B9861557C025())
	{
		func_353(1);
		unk_0xC0CA6ADE88CA9459(0);
		unk_0xC0CA6ADE88CA9459(0);
	}
}

void func_353(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_354()
{
	return Global_1312467.f_20;
}

void func_355()
{
	Global_2460545 = 1;
}

void func_356(int iParam0, bool bParam1, bool bParam2)
{
	if (func_357())
	{
		return;
	}
	if ((func_354() == 1 || unk_0xCD97B9861557C025()) || iParam0)
	{
		func_353(0);
		unk_0xC0CA6ADE88CA9459(1);
		if (!bParam1)
		{
			unk_0xC0CA6ADE88CA9459(1);
		}
		if (bParam2)
		{
			unk_0x0A28081A78B23563();
		}
	}
}

int func_357()
{
	if (func_358())
	{
		return Global_2458909;
	}
	return 0;
}

int func_358()
{
	if (Global_2458902)
	{
		return Global_2458901;
	}
	return 0;
}

void func_359(bool bParam0)
{
	if (bParam0)
	{
		unk_0x7223E1970B0C254B();
		unk_0xAF2549148B931181(-1);
		unk_0xC200A46CFE2A4F77(1);
		unk_0x36F0643894EDDE1E(1);
		unk_0xAC5263AEA7D6AA8A(1f);
		unk_0xBE7F0098965C1DAF(3);
		unk_0x01E9592ED51587A7(3);
	}
	else
	{
		unk_0x80BCF42B42433CEB(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		unk_0xAF2549148B931181(0);
		unk_0xC200A46CFE2A4F77(0);
		unk_0x36F0643894EDDE1E(0);
		unk_0xAC5263AEA7D6AA8A(0f);
		unk_0xBE7F0098965C1DAF(0);
		unk_0x01E9592ED51587A7(0);
	}
}

void func_360(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_311();
	func_218(1);
	func_206(1);
	func_205(12, 1, -1);
	func_370();
	unk_0x597D844D285B9272(0);
	if (bParam0)
	{
		unk_0x4B5F70FDA5DC966F(unk_0x7C7787D2D7139A85(), iParam6);
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
	func_361(unk_0x7C7787D2D7139A85(), 0, iVar0, 0);
	if (bParam5)
	{
		if (unk_0x449B8E561BCB881E(unk_0x0FA8183DAD2B3203()))
		{
			unk_0x93FD8072B6717CC3(unk_0x0FA8183DAD2B3203(), 0);
		}
	}
}

void func_361(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	bool bVar25;
	var uVar26;
	int iVar27;
	
	if (bParam1)
	{
		if (unk_0x2841E8CEB102C657())
		{
			unk_0x81394B4515AF31C3(0);
		}
	}
	if (func_369())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x393E9918BC37548A())
	{
		uVar0 = iParam2;
		unk_0x3D0DE925C0536CA0(iParam0, bParam1, uVar0);
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
		bVar24 = iParam2 & 16777216 != false;
		if (!func_334())
		{
			bVar25 = false;
			if (bParam1 == 1)
			{
				bVar25 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar25 = true;
			}
			if (bVar9 == 1)
			{
				bVar25 = true;
			}
			if (bVar25)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xD56C8C2B75BF9665(iParam0) && (unk_0xD699DB8EAB756F25(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xF4B969E0807E76C7(unk_0x23625FE58BACEBFD(iParam0), 0))
			{
				return;
			}
			uVar26 = unk_0x23625FE58BACEBFD(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x393E9918BC37548A())
				{
					unk_0xFBC7760B97C94CEE(1);
				}
				else if (bVar13 || (!func_255(unk_0x7C7787D2D7139A85(), 0) && !func_258()))
				{
					unk_0x2BBEC4B37B923F4B(uVar26, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x393E9918BC37548A() && !bVar18)
					{
						unk_0xFBC7760B97C94CEE(0);
					}
					Global_2424073[iParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				func_366(0, 0, 0);
				if (bVar24)
				{
					unk_0x177A62AB5B680108();
				}
				if (!func_365(uVar26) && !unk_0xFAA29571D9280AC0(uVar26))
				{
					if (!bVar21)
					{
						unk_0x8C85E8C71AD74415(uVar26, true, 0);
					}
				}
				if (!unk_0xCA7317DE7E0F89E9(uVar26))
				{
					if (!bVar20)
					{
						unk_0x860A5CC30A0EF207(uVar26, false);
					}
					unk_0x9D3FE4786B8925D2(uVar26, 1);
				}
				else if (!bVar20)
				{
					unk_0x860A5CC30A0EF207(iVar26, false);
				}
				unk_0x6E712A176E3EEFA8(iVar26, true);
				unk_0x80DD2AE2084AED15(iParam0, 0);
				unk_0x39EC8D05FEE60520(iParam0, 0);
				if (unk_0x088441D41D80C5C5(iVar26) && unk_0xB9F75075D0B810BF(iVar26))
				{
					unk_0xF77E0D8A93ED5E86(iVar26);
				}
				unk_0x18CD1B73D89ABE21(iVar26, 1);
				if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()) == 0)
				{
					func_364();
					func_363();
				}
				if (unk_0x88284A9044C97C3A())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xC53766CB7176C7C8())
				{
				}
				Global_2424073[iParam0 /*421*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2670)
				{
					Global_2405071.f_2670 = 0;
				}
			}
			else
			{
				if (!func_365(iVar26) && !unk_0xFAA29571D9280AC0(iVar26))
				{
					if (!bVar21)
					{
						unk_0x8C85E8C71AD74415(iVar26, !bVar14, 0);
					}
					if (!unk_0xCA7317DE7E0F89E9(iVar26))
					{
						if (!bVar20)
						{
							unk_0x860A5CC30A0EF207(iVar26, bVar15);
						}
						if (!bVar15)
						{
							unk_0x9D3FE4786B8925D2(iVar26, 1);
						}
					}
					if (func_362(Global_4456448.f_190930))
					{
						unk_0x860A5CC30A0EF207(iVar26, true);
					}
				}
				if (Global_1312850)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x80DD2AE2084AED15(iParam0, 0);
				}
				else
				{
					unk_0x80DD2AE2084AED15(iParam0, 1);
				}
				unk_0x6E712A176E3EEFA8(iVar26, bVar16);
				if (bVar2)
				{
					if (!unk_0x8597FB96A64B777C(iVar26) && !unk_0x5294582CE404D3F4(iVar26, 0))
					{
						unk_0x5BBDAD06F405ED2C(iVar26);
					}
				}
			}
			iVar27 = 0;
			if (bVar1)
			{
				iVar27 |= 2;
			}
			if (bVar2)
			{
				iVar27 |= 4;
			}
			if (bVar3)
			{
				iVar27 |= 8;
			}
			if (bVar4)
			{
				iVar27 |= 16;
			}
			if (bVar5)
			{
				iVar27 |= 32;
			}
			if (bVar6)
			{
				iVar27 |= 64;
			}
			if (bVar7)
			{
				iVar27 |= 128;
			}
			if (bVar8)
			{
				iVar27 |= 256;
			}
			if (bVar9)
			{
				iVar27 |= 512;
			}
			if (bVar10)
			{
				iVar27 |= 1024;
			}
			if (bVar11)
			{
				iVar27 |= 2048;
			}
			if (bVar12)
			{
				iVar27 |= 4096;
			}
			unk_0x3D0DE925C0536CA0(iParam0, bParam1, iVar27);
		}
	}
}

bool func_362(int iParam0)
{
	return iParam0 == 17;
}

void func_363()
{
	struct<3> Var0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { Var0 };
}

void func_364()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_365(int iParam0)
{
	int iVar0;
	
	if (unk_0x5294582CE404D3F4(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x411C065ADB822CD9(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_366(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF4B969E0807E76C7(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xD4B321D9096B01FC(iParam1))
		{
			if (unk_0x7FA2061748BA645E(iParam1))
			{
				if (!unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), unk_0x74D4E16E179B8F53(iParam1)))
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
				func_368();
			}
			else if (!unk_0xA2BC31158C8CEFD2(Global_2359302.f_67, 1))
			{
				if (unk_0xA2BC31158C8CEFD2(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x58AF82C8FFCE212D(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xA1E7A40E1F56E511(&(Global_2359302.f_67), 1);
			}
		}
		if (func_255(unk_0x7C7787D2D7139A85(), 0))
		{
			unk_0x1244983AF90581A1(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x82383378B7F391D7(iParam0, iParam1);
		}
		unk_0x62F681DBBF12DD7F(iParam0, iParam1);
		func_367(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_367(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x0EC7EA43028EE330(iVar0, iParam1, 1);
	}
}

void func_368()
{
	int iVar0;
	
	if (!unk_0xC2C832CF965AA6C1())
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0x328DC5757076B0D5(iVar0);
				iVar0++;
			}
			unk_0xA1E7A40E1F56E511(&(Global_2359302.f_67), 2);
			unk_0xA1E7A40E1F56E511(&(Global_2359302.f_67), 0);
		}
	}
}

int func_369()
{
	if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

void func_370()
{
	Global_22211.f_5 = 1;
}

int func_371()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_372(int iParam0)
{
	unk_0x70CBCB37A00F34A2(unk_0x23625FE58BACEBFD(iParam0), 346, 1);
}

void func_373(var uParam0)
{
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_3, 12))
	{
		unk_0xA1E7A40E1F56E511(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1663011)
			{
				Global_1663011 = 1;
				Global_1663012 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (unk_0x08EA887200715AD9(Global_1663010))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if (((unk_0xB859EDA9E476E45A() == 9 || unk_0xB859EDA9E476E45A() == 10) || unk_0xB859EDA9E476E45A() == 8) || unk_0xB859EDA9E476E45A() == 12)
									{
										func_378("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_378("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_377("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_376("artdir", "AARON GARBUT", 210f, "|", 1);
									func_375("artdir", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 33, -3390))
							{
								func_374("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (func_304(uParam0, 33, -2940))
								{
									func_378("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_377("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_376("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_375("techdir", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 33, -450))
							{
								func_374("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_378("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_377("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_376("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_375("assartdir", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_374("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if (((unk_0xB859EDA9E476E45A() == 9 || unk_0xB859EDA9E476E45A() == 10) || unk_0xB859EDA9E476E45A() == 8) || unk_0xB859EDA9E476E45A() == 12)
									{
										func_378("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_378("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_377("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_376("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_375("asstecdir", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 36, -4740))
							{
								func_374("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (func_304(uParam0, 36, -3810))
								{
									func_378("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_377("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_376("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_375("leadprog", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 36, -600))
							{
								func_374("leadprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if (((unk_0xB859EDA9E476E45A() == 9 || unk_0xB859EDA9E476E45A() == 10) || unk_0xB859EDA9E476E45A() == 8) || unk_0xB859EDA9E476E45A() == 12)
									{
										func_378("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_378("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_377("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_376("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_375("senprog", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 37, -1350))
							{
								func_374("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_378("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_377("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_376("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_375("prog", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 38, -4320))
							{
								func_374("prog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (func_304(uParam0, 38, -3240))
								{
									if (((unk_0xB859EDA9E476E45A() == 9 || unk_0xB859EDA9E476E45A() == 10) || unk_0xB859EDA9E476E45A() == 8) || unk_0xB859EDA9E476E45A() == 12)
									{
										func_378("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_378("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_377("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_376("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_375("socclub", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 38, -870))
							{
								func_374("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_378("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_377("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_376("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_375("audio", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 39, -1620))
							{
								func_374("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_378("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_377("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_376("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_375("scrlead", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 40, -1470))
							{
								func_374("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_378("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_377("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_376("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_375("script1", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 41, -1200))
							{
								func_374("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_378("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_377("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_376("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_375("script2", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 42, -1320))
							{
								func_374("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_378("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_377("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_376("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_377("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_376("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_375("visdes", 0.05f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 43, -1320))
							{
								func_374("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_378("uides", 40f, 20f, "right", 0f, 0.3f);
									func_377("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_376("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_375("uides", 0f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 45, -1650))
							{
								func_374("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_378("concre", 0f, 20f, "left", 0f, 0.3f);
									func_377("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_376("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_376("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_375("concre", 0f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 46, -1950))
							{
								func_374("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_378("devass", 0f, 400f, "right", 0f, 0f);
									func_377("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_376("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_375("devass", 0f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_374("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_378("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_377("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_376("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_377("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_376("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_375("qasup", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 48, -1320))
							{
								func_374("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_378("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_377("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_376("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_375("senta", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 49, -5070))
							{
								func_374("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (func_304(uParam0, 49, -3750))
								{
									func_378("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_377("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_376("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_375("asspro", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 49, -720))
							{
								func_374("asspro", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (func_263(uParam0))
								{
									if (unk_0x33D7ABC47E81DCF9() && unk_0xD9B1B8CA88778543() > 2468)
									{
										func_378("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_377("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_376("animdir", "ROB NELSON", 200f, "|", 1);
										func_375("animdir", 0.16f);
										unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_378("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_377("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_376("animdir", "ROB NELSON", 90f, "|", 1);
									func_375("animdir", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_263(uParam0))
							{
								if (unk_0x33D7ABC47E81DCF9() && unk_0xD9B1B8CA88778543() > 6123)
								{
									func_374("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x33D7ABC47E81DCF9() && unk_0xD9B1B8CA88778543() > 1898)
							{
								func_374("animdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (func_263(uParam0))
								{
									if (unk_0x33D7ABC47E81DCF9() && unk_0x86D254DAA7A8D910())
									{
										func_378("producer", 65f, 55f, "right", 0f, 0f);
										func_377("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_376("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_375("producer", 0f);
										unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x33D7ABC47E81DCF9() && unk_0xD9B1B8CA88778543() > 2452)
								{
									func_378("producer", 0f, 100f, "left", 0.3f, 0f);
									func_377("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_376("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_375("producer", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_263(uParam0))
							{
								if (unk_0x33D7ABC47E81DCF9() && unk_0x86D254DAA7A8D910())
								{
									func_374("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x33D7ABC47E81DCF9() && unk_0x86D254DAA7A8D910())
							{
								func_374("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (func_263(uParam0))
								{
									if (unk_0x33D7ABC47E81DCF9() && unk_0xD9B1B8CA88778543() > 13265)
									{
										func_378("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_377("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_376("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_375("vpcre", 0.16f);
										unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x33D7ABC47E81DCF9() && unk_0xD9B1B8CA88778543() > 6921)
								{
									func_378("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_377("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_376("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_375("vpcre", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_263(uParam0))
							{
								if (unk_0x33D7ABC47E81DCF9() && unk_0xD9B1B8CA88778543() > 16955)
								{
									func_374("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x33D7ABC47E81DCF9() && unk_0xD9B1B8CA88778543() > 10513)
							{
								func_374("vpcre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_4, uParam0->f_5))
							{
								if (func_263(uParam0))
								{
									if (unk_0x33D7ABC47E81DCF9() && unk_0xD9B1B8CA88778543() > 18077)
									{
										Global_1663012 = 0;
										func_378("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_377("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_376("execpro", "SAM HOUSER", 165f, "|", 1);
										func_375("execpro", 0.16f);
										unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x33D7ABC47E81DCF9() && unk_0xD9B1B8CA88778543() > 12358)
								{
									Global_1663012 = 0;
									func_378("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_377("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_376("execpro", "SAM HOUSER", 190f, "|", 1);
									func_375("execpro", 0.16f);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_263(uParam0))
							{
								if (unk_0x33D7ABC47E81DCF9() && unk_0xD9B1B8CA88778543() > 21785)
								{
									func_374("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x33D7ABC47E81DCF9() && unk_0xD9B1B8CA88778543() > 15333)
							{
								func_374("execpro", 0.16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1663012)
				{
					unk_0x53F520B89860756C(Global_1663010, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_374(char* sParam0, float fParam1)
{
	unk_0xF1BC72CEC2746995(Global_1663010, "HIDE");
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xA89C789CC9FEF523(sParam0);
	unk_0x81019766FF500CCA();
	unk_0xD435957F6275B434(fParam1);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_375(char* sParam0, float fParam1)
{
	unk_0xF1BC72CEC2746995(Global_1663010, "SHOW_CREDIT_BLOCK");
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xA89C789CC9FEF523(sParam0);
	unk_0x81019766FF500CCA();
	unk_0xD435957F6275B434(fParam1);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_376(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0xF1BC72CEC2746995(Global_1663010, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xA89C789CC9FEF523(sParam0);
	unk_0x81019766FF500CCA();
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xA89C789CC9FEF523(sParam1);
	unk_0x81019766FF500CCA();
	unk_0xD435957F6275B434(fParam2);
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xA89C789CC9FEF523(sParam3);
	unk_0x81019766FF500CCA();
	unk_0x282C78036676E0C2(iParam4);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_377(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0xF1BC72CEC2746995(Global_1663010, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xA89C789CC9FEF523(sParam0);
	unk_0x81019766FF500CCA();
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xA89C789CC9FEF523(sParam1);
	unk_0x81019766FF500CCA();
	unk_0xD435957F6275B434(fParam2);
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xA89C789CC9FEF523(sParam3);
	unk_0x81019766FF500CCA();
	unk_0x282C78036676E0C2(iParam4);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_378(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0xF1BC72CEC2746995(Global_1663010, "SETUP_CREDIT_BLOCK");
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xA89C789CC9FEF523(sParam0);
	unk_0x81019766FF500CCA();
	unk_0xD435957F6275B434(fParam1);
	unk_0xD435957F6275B434(fParam2);
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xA89C789CC9FEF523(sParam3);
	unk_0x81019766FF500CCA();
	unk_0xD435957F6275B434(fParam4);
	unk_0xD435957F6275B434(fParam5);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_379(var uParam0)
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (unk_0xD4B321D9096B01FC(uParam0->f_34))
		{
			if (unk_0xD960230552BC4165(uParam0->f_34, 0))
			{
				unk_0x491A789EB15F172D(unk_0xC12F91346EA13947(uParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_380()
{
	var uVar0;
	
	if (unk_0x8A7BBB98FFB32893(Local_568.f_3))
	{
		switch (Local_568.f_2)
		{
			case 2:
				if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_4, 1))
				{
					if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
					{
						if (func_399(Local_568.f_3))
						{
							if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
							{
								if (unk_0x411C065ADB822CD9(unk_0x0FA8183DAD2B3203(), -1794415470) != 1 && unk_0x411C065ADB822CD9(unk_0x0FA8183DAD2B3203(), -1794415470) != 0)
								{
									unk_0x31A7662B885C7549(unk_0x0FA8183DAD2B3203(), unk_0x40237B62400B4BCC(Local_568.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_4, 2))
							{
								if (unk_0x7E6F0519746C2295(unk_0x0FA8183DAD2B3203(), unk_0x40237B62400B4BCC(Local_568.f_3)))
								{
									unk_0xA1E7A40E1F56E511(&(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_4), 2);
									func_398(1);
								}
								else
								{
									unk_0x7FB505C34A14BAAA(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_399(Local_568.f_3))
				{
					if (!func_397(Local_568.f_4))
					{
						if (unk_0xA2BC31158C8CEFD2(uLocal_751, 26))
						{
							if (unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_568.f_4), -1273030092) != 1 && unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_568.f_4), -1273030092) != 0)
							{
								unk_0x522D78AE25E882BB(unk_0x70D3AC024E0A9837(Local_568.f_4), unk_0x40237B62400B4BCC(Local_568.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 27))
				{
					if (!unk_0x260395BA7F0C83CB() && !unk_0xA710300CD13D2877())
					{
						if (!func_124())
						{
							if (!unk_0xCD97B9861557C025())
							{
								unk_0x5800A2599806C837(800);
							}
						}
					}
					else if (unk_0x260395BA7F0C83CB())
					{
						unk_0xA1E7A40E1F56E511(&uLocal_751, 27);
					}
				}
				else if (!unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 4))
				{
					if (func_387(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
					{
						unk_0x7FB505C34A14BAAA(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0, 0);
						unk_0x3B134B2577EBD1FA();
						unk_0x67DAC9AA604EB02C();
						unk_0xB489E71A45CDC02F(0);
						unk_0xA291E27354439AE9(0, 1065353216);
						unk_0xA1E7A40E1F56E511(&(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_397(Local_568.f_4))
				{
					if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 29))
					{
						if (func_399(Local_568.f_3))
						{
							unk_0x1C9790213C8C7FC4(unk_0x70D3AC024E0A9837(Local_568.f_4), unk_0x40237B62400B4BCC(Local_568.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							unk_0xCF33E56642B34516(800);
							unk_0xA1E7A40E1F56E511(&uLocal_751, 29);
						}
					}
					else if (!unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 5))
					{
						if (unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_568.f_4), -272084098) == 7)
						{
							unk_0xA1E7A40E1F56E511(&(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
					{
						if (unk_0x411C065ADB822CD9(unk_0x0FA8183DAD2B3203(), -828834893) != 1 && unk_0x411C065ADB822CD9(unk_0x0FA8183DAD2B3203(), -828834893) != 0)
						{
							unk_0x2DCF88AC859255F3(unk_0x0FA8183DAD2B3203(), 0, 0);
						}
					}
					else if (!unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 6))
					{
						unk_0xA1E7A40E1F56E511(&(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3), 6);
						unk_0xA1E7A40E1F56E511(&(Global_2531497.f_795), 4);
						unk_0x3B76114EC84D5812(&(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_4), 2);
						func_361(unk_0x7C7787D2D7139A85(), 1, 0, 0);
						func_386();
						func_398(0);
						func_34("HLP_TAXI", -1);
						if (func_57())
						{
							func_45(-1834046564, 200, &uVar0, 0, 0, 0);
						}
						else
						{
							func_383(-200, 0);
							unk_0x63E41F0B54D73CE8(200, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_397(Local_568.f_4))
				{
					if (func_399(Local_568.f_3))
					{
						if (unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_568.f_4), -258271821) != 1 && unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_568.f_4), -258271821) != 0)
						{
							unk_0x7D81B41B134BD6F2(unk_0x70D3AC024E0A9837(Local_568.f_4), 1);
							unk_0x24BD9CEBA5D40F00(unk_0x70D3AC024E0A9837(Local_568.f_4), unk_0x40237B62400B4BCC(Local_568.f_3), 12f, 786599);
							func_382(&(Local_568.f_3));
							func_382(&(Local_568.f_4));
						}
					}
				}
				break;
		}
		if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_4, 1))
		{
			unk_0x960CDFA3CBFD7760(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 26))
			{
				unk_0xA1E7A40E1F56E511(&uLocal_751, 26);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 28))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_4, 2))
			{
				if (!func_199(&uLocal_401))
				{
					func_217();
					func_21(&uLocal_401, 0, 0);
				}
				else if (func_198(&uLocal_401, 5000, 0))
				{
					if (func_178(&uLocal_575, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						unk_0xA1E7A40E1F56E511(&uLocal_751, 28);
					}
				}
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 30))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 5))
			{
				if (func_178(&uLocal_575, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					unk_0xA1E7A40E1F56E511(&uLocal_751, 30);
				}
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 6))
		{
			func_381();
		}
		if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_4, 2))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
				{
				}
			}
		}
	}
}

void func_381()
{
	Global_2542240.f_258 = 1;
}

void func_382(var uParam0)
{
	var uVar0;
	
	if (unk_0x8A7BBB98FFB32893(*uParam0))
	{
		uVar0 = unk_0xAEA6D4EC961DFA03(*uParam0);
		unk_0xEADD2B962AE1DE7D(&uVar0);
	}
}

void func_383(int iParam0, int iParam1)
{
	func_385(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_384(iParam0, 0);
	}
}

void func_384(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_385(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_211.f_4 = iVar1;
	Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_211.f_3 = (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_384(iVar1, 0);
	}
}

void func_386()
{
	unk_0x583A42EE47B55D77(0, 22, 1);
	unk_0x583A42EE47B55D77(0, 36, 1);
	unk_0x583A42EE47B55D77(0, 32, 1);
	unk_0x583A42EE47B55D77(0, 34, 1);
	unk_0x583A42EE47B55D77(0, 35, 1);
	unk_0x583A42EE47B55D77(0, 33, 1);
	unk_0x583A42EE47B55D77(0, 31, 1);
	unk_0x583A42EE47B55D77(0, 30, 1);
	unk_0x583A42EE47B55D77(0, 44, 1);
	unk_0x583A42EE47B55D77(0, 141, 1);
	unk_0x583A42EE47B55D77(0, 140, 1);
	unk_0x583A42EE47B55D77(0, 263, 1);
	unk_0x583A42EE47B55D77(0, 264, 1);
	unk_0x583A42EE47B55D77(0, 143, 1);
	unk_0x583A42EE47B55D77(0, 24, 1);
	unk_0x583A42EE47B55D77(0, 257, 1);
	unk_0x583A42EE47B55D77(0, 263, 1);
	unk_0x583A42EE47B55D77(0, 264, 1);
	unk_0x583A42EE47B55D77(0, 143, 1);
	unk_0x583A42EE47B55D77(0, 262, 1);
	unk_0x583A42EE47B55D77(0, 261, 1);
	unk_0x583A42EE47B55D77(0, 37, 1);
	unk_0x583A42EE47B55D77(0, 25, 1);
	unk_0x583A42EE47B55D77(0, 26, 1);
}

int func_387(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, float fParam12)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_22211.f_6 = 1;
	if (Global_2437549.f_1232 && Global_2437549.f_1240)
	{
		func_395(0, bParam9);
		return 1;
	}
	if (unk_0x16587C6F71675106() && !bParam9)
	{
		if (Global_2437549.f_1232)
		{
			func_395(0, bParam9);
		}
		return 0;
	}
	if ((unk_0xC53766CB7176C7C8() && !bParam9) && !unk_0x88284A9044C97C3A())
	{
		return 0;
	}
	if (!func_394())
	{
		if (func_393(unk_0x7C7787D2D7139A85(), 1, 0) && !(func_392() || func_391()))
		{
			if (((bParam9 && func_14(unk_0x7C7787D2D7139A85(), 1, 0)) && unk_0x16587C6F71675106()) && Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_222 == 1)
			{
			}
			else if (func_309() == 28)
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
	if (!Global_2437549.f_1232 && !bParam11)
	{
		Var1 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0) };
		if ((unk_0x01CBD71E072E9F33((Var1.f_0 - Param0.f_0)) < 0.2f && unk_0x01CBD71E072E9F33((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x01CBD71E072E9F33((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - unk_0xD2809C7F7FD79247(unk_0x0FA8183DAD2B3203()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (unk_0x01CBD71E072E9F33(fVar4) < 1f)
			{
				Global_2437549.f_1232 = 0;
				Global_2437549.f_1233 = 0;
				if (unk_0x88284A9044C97C3A())
				{
					unk_0xEDE635576F472C83();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2437549.f_1234 || !Param0.f_1 == Global_2437549.f_1234.f_1) || !Param0.f_2 == Global_2437549.f_1234.f_2) || !fParam3 == Global_2437549.f_1237)
	{
		if (Global_2437549.f_1232 == 1)
		{
			if (unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Global_2437549.f_1238) < func_390(0))
			{
				return 0;
			}
			unk_0xEDE635576F472C83();
			Global_2437549.f_1233 = 1;
		}
		else
		{
			Global_2437549.f_1233 = 0;
		}
		Global_2437549.f_1234 = { Param0 };
		Global_2437549.f_1237 = fParam3;
		Global_2437549.f_1232 = 0;
	}
	if (!Global_2437549.f_1232 && !unk_0x88284A9044C97C3A())
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
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_98721.f_1357[44], 16))
			{
				func_389(0);
			}
			if (!unk_0xEA7888D9E5204734(unk_0x0FA8183DAD2B3203(), &(Global_2405071.f_497)))
			{
				Global_2405071.f_497 = 0;
			}
		}
		if (bParam4)
		{
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				uVar0 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
				if (unk_0x2D88761860D84993(uVar0))
				{
					Global_2437549.f_1239 = 0;
				}
			}
		}
		if (Global_2437549.f_1239 > -1)
		{
			Global_2437549.f_1238 = unk_0x169A8AC9F93C2727();
			Global_2437549.f_1232 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
					{
						uVar0 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
						if (unk_0x77FF1FAF6F41CA71(uVar0))
						{
							unk_0xCB3446C6A91D1A78(uVar0, Param0, 0, 1, 1, 1);
							unk_0x5A2B7C446C0CF087(uVar0, fParam3);
							if (fParam12 != 0f)
							{
								unk_0xF3D48447FACBBE72(uVar0, fParam12, 0f, fParam3, 2, 1);
							}
						}
						else
						{
							unk_0x7252D7992DA58CA9(uVar0);
						}
					}
					else
					{
						unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), Param0, 0, 0, 0, 1);
						unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), fParam3);
					}
				}
				else
				{
					unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), Param0, 0, 0, 0, 1);
					unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), fParam3);
				}
				func_395(bParam6, bParam9);
				return 1;
			}
			else
			{
				unk_0x177A62AB5B680108();
				unk_0xED64EF640FC5FCE4(unk_0x7C7787D2D7139A85(), Param0, fParam3, bParam4, iParam10, 0);
			}
			Global_2437549.f_1238 = unk_0x169A8AC9F93C2727();
			Global_2437549.f_1232 = 1;
		}
	}
	if (Global_2437549.f_1232)
	{
		Global_22211.f_6 = 1;
		Global_2437549.f_1238 = unk_0x169A8AC9F93C2727();
		if (Global_2437549.f_1239 > -1)
		{
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				uVar0 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
			}
			if (func_388(&(Global_2437549.f_1239), Param0, fParam3, uVar0))
			{
				func_395(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), Global_2437549.f_1234) < 2f)
				{
					if (unk_0x88284A9044C97C3A())
					{
						unk_0xEDE635576F472C83();
					}
					func_395(bParam6, bParam9);
					return 1;
				}
			}
			if (!unk_0x88284A9044C97C3A())
			{
				if (fParam12 != 0f)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
					{
						uVar0 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
						unk_0xF3D48447FACBBE72(uVar0, fParam12, 0f, fParam3, 2, 1);
						Global_2437549.f_1240 = 1;
						return 0;
					}
				}
				func_395(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_388(var uParam0, struct<3> Param1, float fParam4, var uParam5)
{
	if (unk_0xD4B321D9096B01FC(Global_2437549.f_1241) && !unk_0xF4B969E0807E76C7(Global_2437549.f_1241, 0))
	{
		unk_0x7252D7992DA58CA9(Global_2437549.f_1241);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2437549.f_1241 = uParam5;
			unk_0x7252D7992DA58CA9(Global_2437549.f_1241);
			if (unk_0x77FF1FAF6F41CA71(Global_2437549.f_1241))
			{
				if (!unk_0xF4B969E0807E76C7(Global_2437549.f_1241, 0))
				{
					unk_0x5A2B7C446C0CF087(Global_2437549.f_1241, fParam4);
					unk_0xCB3446C6A91D1A78(Global_2437549.f_1241, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_389(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2405071.f_2680;
	if ((unk_0xB24AEB6C29E01CF3() && Global_2405071.f_2678 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405071.f_2677)
	{
		if (!unk_0x9AD5E118EE76CC80())
		{
			Global_2405071.f_2677 = iVar0;
		}
	}
}

int func_390(bool bParam0)
{
	if (unk_0x260395BA7F0C83CB())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_391()
{
	return ((unk_0xA2BC31158C8CEFD2(Global_4456448.f_30, 12) && unk_0xA2BC31158C8CEFD2(Global_1695602, 12)) && Global_1695601 == 8);
}

bool func_392()
{
	return (unk_0xA2BC31158C8CEFD2(Global_4456448.f_30, 12) && unk_0xA2BC31158C8CEFD2(Global_1695602, 0));
}

int func_393(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2424073[iParam0 /*421*/].f_222 == 99)
	{
		if ((iParam2 && Global_2424073[iParam0 /*421*/].f_225 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2424073[iParam0 /*421*/].f_222 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_394()
{
	return Global_1312850;
}

void func_395(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0xA291E27354439AE9(0f, 1065353216);
		unk_0xB489E71A45CDC02F(0f);
	}
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x2D93ABBD68F7B1FF(unk_0x0FA8183DAD2B3203());
	}
	if (!bParam1)
	{
		unk_0x177A62AB5B680108();
	}
	if (unk_0x88284A9044C97C3A())
	{
		unk_0xEDE635576F472C83();
	}
	func_363();
	if (!unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_24, 14))
	{
		func_396();
	}
}

void func_396()
{
	Global_2540318.f_80 = 1;
}

int func_397(var uParam0)
{
	if (unk_0x9C625F4590C97F13(uParam0))
	{
		return unk_0x2BF5E63466422C38(unk_0x70D3AC024E0A9837(uParam0));
	}
	return 1;
}

void func_398(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142, 15))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 15);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142, 15))
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 15);
	}
}

int func_399(var uParam0)
{
	if (unk_0x9C625F4590C97F13(uParam0))
	{
		return !func_400(unk_0x40237B62400B4BCC(uParam0));
	}
	return 0;
}

int func_400(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (unk_0xF4B969E0807E76C7(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD960230552BC4165(iParam0, 0))
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

void func_401(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_25(iParam0, 8, 0))
		{
			func_65(iParam0, 8, 0);
			func_402(iParam0);
		}
	}
	else if (func_25(iParam0, 8, 0))
	{
		func_63(iParam0, 8, 0);
		func_402(iParam0);
	}
}

void func_402(int iParam0)
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

void func_403(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_98721.f_9[iParam0] = 1;
	}
	else
	{
		Global_98721.f_9[iParam0] = 0;
	}
}

void func_404(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_98721.f_8 = 1;
	}
	else
	{
		Global_98721.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_402(iVar0);
		iVar0++;
	}
}

void func_405(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x773434A2783CA924(iParam2, 0);
			}
			else
			{
				unk_0x773434A2783CA924(iParam2, 1);
			}
		}
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xB35478A1AA54EA1A(iParam2, 0);
			}
			else
			{
				unk_0xB35478A1AA54EA1A(iParam2, 1);
			}
		}
	}
}

int func_406()
{
	return Local_568.f_0;
}

int func_407()
{
	return 1;
}

int func_408(int iParam0)
{
	return Local_740[iParam0 /*5*/];
}

int func_409(int iParam0)
{
	return Local_740[iParam0 /*5*/].f_2;
}

int func_410(bool bParam0)
{
	if (func_412())
	{
		if (bParam0)
		{
			if (!Global_1574402 && !func_411(unk_0x7C7787D2D7139A85(), 2))
			{
				unk_0x3E5A3FD805488EB9("MinigameTransitionIn", 0, 1);
				func_351(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_411(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

bool func_412()
{
	return Global_2437549.f_2;
}

void func_413(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x393E9918BC37548A())
	{
		if (bLocal_757)
		{
			if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 2))
			{
				if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 31))
				{
					func_32(119, 1, -1, 1);
					func_32(115, 1, -1, 1);
				}
				func_730(1);
				bVar0 = true;
			}
		}
		else if (unk_0xA2BC31158C8CEFD2(Local_740[unk_0x2E40EEA43EF34BD6() /*5*/].f_3, 1))
		{
			if (!unk_0xA2BC31158C8CEFD2(uLocal_751, 31))
			{
				func_32(119, 1, -1, 1);
				func_32(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_216(&Local_94, 0, bParam0);
	if (unk_0x393E9918BC37548A())
	{
		if (Global_2437549.f_3732)
		{
			func_723(0, 1, 0, 1);
		}
	}
	if (unk_0x393E9918BC37548A())
	{
		func_398(0);
	}
	unk_0x9E64FD43AF331B00(Local_94.f_122, 0);
	unk_0x5FA16012EC432077(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	unk_0x5FA16012EC432077(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_795), 4);
	func_98(0);
	func_61(0);
	func_722();
	func_721(iLocal_93, 0);
	func_197(&(Global_2437549.f_3982));
	Global_2437549.f_3980 = 0;
	Global_2437549.f_3979 = 0;
	Global_2437549.f_3981 = 0;
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 244, 1);
		unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 243, 1);
		unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 242, 1);
	}
	if (bVar0)
	{
		func_416(0, 0, 0, 0);
	}
	else
	{
		unk_0x0D23E3918F7AF11B(1);
		func_416(0, 0, 3, 1);
	}
	unk_0x3B76114EC84D5812(&(Global_2531497.f_795), 0);
	func_404(0);
	func_403(4, 0);
	func_403(1, 0);
	func_403(0, 0);
	func_403(2, 0);
	func_403(3, 0);
	func_401(iLocal_93, 0);
	func_386();
	func_35();
	if (unk_0x39A01A052D9B5FF0(Global_98721.f_235[iLocal_93]))
	{
		unk_0x925BD1075D119B45(Global_98721.f_235[iLocal_93], 0);
	}
	if (unk_0x39A01A052D9B5FF0(uLocal_754))
	{
		unk_0xAA2276003B2ADF1B(&uLocal_754);
	}
	if (unk_0x393E9918BC37548A())
	{
		func_415(0);
		func_200(0);
	}
	func_414(Local_568.f_5);
}

void func_414(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Param0.f_0)) >= 1000)
		{
			unk_0xCF5BB8B889ADE257();
		}
	}
	unk_0x9C9E32388A7886A2();
}

void func_415(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 5);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 5);
	}
}

void func_416(int iParam0, int iParam1, int iParam2, bool bParam3)
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
	
	iVar0 = unk_0x7C7787D2D7139A85();
	iVar1 = Global_1590446[iVar0 /*871*/];
	func_720();
	func_716();
	unk_0x32831A09DF0F0AB1(0);
	func_715();
	Global_968153 = 0;
	Global_1573304 = 0;
	func_714();
	unk_0x99EB97492B32AC7D(0);
	func_713();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1574195 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	func_712(0);
	Global_1574184 = 0;
	Global_1574183 = 0;
	Global_1574207 = 0;
	Global_1574421 = 0;
	Global_1574427 = 0;
	Global_1573921 = 0;
	Global_1575101 = 1;
	Global_1574393 = 0;
	Global_1574196 = -1;
	func_711(0);
	unk_0x3B76114EC84D5812(&(Global_2359302.f_1), 5);
	if (!func_710() && !func_708())
	{
		func_707();
	}
	func_706();
	func_705();
	func_704();
	func_703();
	func_702();
	if (unk_0x393E9918BC37548A())
	{
		func_701();
		func_700();
	}
	if (func_699() || !func_698())
	{
		func_697();
		func_696(1, 1, 1);
		func_695();
		func_694();
		if (iVar0 != -1)
		{
			Global_1627738[iVar0 /*38*/].f_1 = 0;
			Global_1627738[iVar0 /*38*/].f_2 = 0;
			Global_1627738[iVar0 /*38*/] = 0;
		}
	}
	func_693();
	if ((((Global_4456448 != 6 && func_692(Global_4456448.f_154360) != 14) && func_692(Global_4456448.f_154360) != 15) && !func_339()) && !func_708())
	{
		if (func_14(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			if (unk_0xACFB2B501B3CED36(unk_0x0FA8183DAD2B3203()))
			{
				unk_0xFBE658450F3CCCC4(unk_0x0FA8183DAD2B3203(), 1);
			}
		}
	}
	Global_1573325 = 0;
	if (Global_1654084.f_9 == 4)
	{
		if (func_691(unk_0x7C7787D2D7139A85()) || func_690(unk_0x7C7787D2D7139A85()))
		{
			Global_1573325 = 1;
		}
	}
	func_688();
	if (func_687())
	{
		func_686();
	}
	func_685();
	Global_4456448.f_156038 = 0;
	Global_1654044.f_4 = 0;
	if (!unk_0xA2BC31158C8CEFD2(Global_4456448.f_29, 1) && !func_684())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_14, 17))
		{
			unk_0x0B28C202DF1BFF45(unk_0x7C7787D2D7139A85(), 0);
			unk_0xA4C5158DD4C77768(1);
		}
		else
		{
			unk_0x0B28C202DF1BFF45(unk_0x7C7787D2D7139A85(), 1);
			unk_0xA4C5158DD4C77768(0);
		}
	}
	StringCopy(&(Global_4456448.f_154352), "", 32);
	if (!func_708())
	{
		unk_0x1C0FEAA5C83F343B();
		unk_0x0AF55029F939BA65(18);
		if ((bParam3 && !func_683()) && !func_682())
		{
			unk_0x40984840FC30EC06();
		}
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1627265[iVar3] = 0;
		Global_1627232[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		unk_0xA1E7A40E1F56E511(&(Global_2449755.f_5840), 3);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_2449755.f_5840), 3);
	}
	if (iVar0 != -1 && Global_2448961.f_569.f_10 != 0)
	{
		Global_1627738[unk_0x7C7787D2D7139A85() /*38*/].f_2 = Global_2448961.f_569.f_10;
	}
	if (func_412() || (iVar0 != -1 && Global_1590446[iVar0 /*871*/].f_728))
	{
		func_680();
		func_679();
		func_678(1, 1);
		func_696(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1627738[iVar0 /*38*/].f_1 = 0;
			Global_1627738[iVar0 /*38*/].f_2 = 0;
			Global_1627738[iVar0 /*38*/] = 0;
		}
		func_677(1);
		if (func_676())
		{
			func_675();
		}
		if (!func_17(unk_0x7C7787D2D7139A85()))
		{
			func_673(4);
		}
		func_695();
		func_672(0);
		func_671();
		Global_1575093 = 0;
	}
	if (!func_670())
	{
		func_669();
		if (func_668())
		{
			if (func_667())
			{
				func_679();
			}
		}
		func_677(1);
		if (!func_666())
		{
			Global_2449755.f_6176 = 0;
			Global_2449755.f_6177 = 0;
			Global_2449755.f_6175 = 0;
			Global_2449755.f_6174 = 0;
			Global_2449755.f_6362 = 0;
		}
	}
	else
	{
		func_665(unk_0x7C7787D2D7139A85(), 0);
	}
	func_664((Global_1654084.f_9 != 4 && !func_670()));
	func_663((Global_1654084.f_9 != 4 && !func_670()));
	func_662((Global_1654084.f_9 != 4 && !func_670()));
	if (func_666())
	{
		Global_2449755.f_6266 = 1;
	}
	else
	{
		Global_2449755.f_6266 = 0;
	}
	if (!func_670())
	{
		if (func_666())
		{
			Global_2449755.f_6267 = 1;
		}
		else
		{
			Global_2449755.f_6267 = 0;
		}
	}
	if (func_660())
	{
		if (func_659())
		{
			Global_2449755.f_6268 = 1;
		}
		else
		{
			Global_2449755.f_6268 = 0;
		}
	}
	if (!func_710())
	{
		Global_1654109.f_1345 = 0;
	}
	if (!func_670() && !func_710())
	{
		func_678(1, Global_1654084.f_9 != 4);
		func_696(1, 1, 0);
		func_658(0);
		func_657();
		Global_1575095 = 0;
		if (iVar0 != -1)
		{
			Global_1627738[iVar0 /*38*/].f_1 = 0;
			Global_1627738[iVar0 /*38*/].f_2 = 0;
			Global_1627738[iVar0 /*38*/] = 0;
		}
	}
	func_654(1, -1);
	if (func_653())
	{
		func_652();
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		unk_0xC7F161BA667E88EB();
	}
	if ((!func_683() && !func_670()) && !func_682())
	{
		func_647();
	}
	Global_4456448.f_156034 = 0;
	func_646();
	Global_1574177 = -1;
	Global_1627313 = -1;
	Global_1627303 = -1;
	Global_1627306 = -1;
	Global_1574182 = 0;
	Global_1627304 = 0;
	Global_1574404 = 0;
	Global_1574396 = 0;
	Global_1627314 = 0;
	func_645(0);
	func_644();
	Global_1590446[iVar0 /*871*/].f_728 = 0;
	Global_1627301 = 0f;
	Global_1627302 = 0f;
	Global_1574405 = 0;
	Global_1574406 = -1;
	func_643(0);
	Global_1574394 = 0;
	Global_1573922 = 0;
	func_642();
	unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
	unk_0x70431C02FF392D24("DisableFlightMusic", 0);
	func_641(1);
	if (func_640())
	{
		func_639();
	}
	if (func_638())
	{
		if (func_636(unk_0x7C7787D2D7139A85()))
		{
			if (unk_0xABA4FE93FAF93E28() < 2)
			{
				func_635();
				func_634(1);
			}
			else
			{
				func_633();
			}
			if (Global_1654084.f_9 != -1)
			{
				func_632();
			}
		}
		else if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 0)
		{
			if (Global_1654084.f_9 != -1)
			{
				func_632();
			}
		}
	}
	bVar4 = func_18(iVar0);
	Global_1590446[iVar0 /*871*/].f_198 = 0;
	if (bVar4 && !func_710())
	{
		func_631();
	}
	if (!bVar4)
	{
		func_630(0);
	}
	if ((func_629() != 39 && func_629() != 38) && !func_628())
	{
		Global_1573279 = { 0f, 0f, 0f };
	}
	if (func_627() && func_254())
	{
	}
	else
	{
		func_626();
	}
	func_625();
	func_634(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1654084.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_624())
		{
			func_623(0, iVar6);
		}
	}
	unk_0x6B6F1502C0198832(0);
	if (unk_0x393E9918BC37548A())
	{
		switch (Global_1654084.f_9)
		{
			case 1:
				if (!func_622() && func_619(0) > 0)
				{
					Global_1672263[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					func_617();
					func_616();
				}
				break;
			
			case 6:
				Global_1575093 = 0;
				if (!bVar4)
				{
					func_617();
				}
				func_616();
				Global_1654084 = 0;
				Global_1654084.f_22 = { 0f, 0f, 0f };
				Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_12 = 0;
				StringCopy(&(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_216), "", 24);
				Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_213 = { 0f, 0f, 0f };
				func_615(0);
				break;
			
			case 2:
				func_614(0);
				if (!func_613() || (func_613() && unk_0x9591DE0F00127F2A(&(Global_2448961.f_29))))
				{
					func_612(Global_1654084.f_16);
					func_611(Global_1654084.f_16);
				}
				iVar5 = Global_1590446[iVar0 /*871*/].f_11;
				if (iVar5 != func_140())
				{
					if (unk_0xD56C8C2B75BF9665(iVar5))
					{
						Global_2449755.f_5841 = { func_78(iVar5) };
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
				if ((iVar7 && func_613()) && unk_0xAAAE7D3270284C4E() == 1)
				{
					Global_2449755.f_5841 = { func_610() };
				}
				if (((((Global_4456448.f_42 > 1 && !func_602()) && !func_601(Global_4456448.f_154360)) && !func_600(Global_4456448.f_154360)) && Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_99.f_28 > -1) && Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_99.f_28 < 4)
				{
					func_599(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_99.f_28);
				}
				else
				{
					func_598();
				}
				break;
			
			case 3:
				func_614(0);
				iVar2 = 1;
				func_597();
				iVar5 = Global_1590446[iVar0 /*871*/].f_11;
				if (iVar5 != func_140())
				{
					if (unk_0xD56C8C2B75BF9665(iVar5))
					{
						Global_2449755.f_5841 = { func_78(iVar5) };
					}
				}
				if (((Global_4456448.f_42 > 1 && !func_602()) && !func_601(Global_4456448.f_154360)) && !func_600(Global_4456448.f_154360))
				{
					func_599(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_99.f_28);
				}
				else
				{
					func_598();
				}
				break;
			
			case 4:
				func_614(0);
				iVar2 = 1;
				if (func_596())
				{
					func_595();
				}
				else if (func_594())
				{
				}
				else
				{
					if (!(func_593() || func_666()) || !func_592())
					{
						Global_2449755.f_6176 = 0;
						Global_2449755.f_6177 = 0;
					}
					if (!func_592())
					{
						Global_2449755.f_6175 = 0;
						Global_2449755.f_6174 = 0;
					}
				}
				if (func_691(unk_0x7C7787D2D7139A85()) || func_690(unk_0x7C7787D2D7139A85()))
				{
					Global_786435.f_34++;
				}
				else if (func_591())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				else if (func_589())
				{
					Global_1675423.f_17++;
				}
				if (func_588(Global_4456448.f_154360))
				{
					if (Global_1675343.f_14 == 0)
					{
						Global_1675343.f_14 = 1;
					}
				}
				if (!unk_0xA2BC31158C8CEFD2(Global_4456448.f_12, 22))
				{
					if (!unk_0xA2BC31158C8CEFD2(Global_4456448.f_12, 15))
					{
						func_587(Global_4456448.f_156011);
					}
					else
					{
						func_586(Global_4456448.f_187444, Global_4456448.f_187445);
					}
					if (Global_1654084.f_13 > -1)
					{
						unk_0xB1CB008AB1B554E2(Global_1654084.f_13, Global_1654084.f_14, 0);
					}
					else if (func_585() > -1)
					{
						func_583(func_585(), 0);
					}
				}
				if (func_582())
				{
					Var8 = { func_581() };
					func_580(Var8);
					if (func_579() != -1)
					{
						Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_99.f_28 = func_579();
					}
					func_578();
					func_577();
				}
				else
				{
					func_597();
				}
				if (!func_255(unk_0x7C7787D2D7139A85(), 0))
				{
					unk_0xC371B6756E9E56D1(0);
					func_366(0, 0, 1);
				}
				break;
			
			case 5:
				func_614(0);
				iVar2 = 1;
				func_597();
				break;
			
			case 8:
				if (!func_613())
				{
					func_612(Global_1654084.f_16);
				}
				break;
			
			case 9:
				func_614(0);
				iVar2 = 1;
				func_597();
				func_611(Global_4456448.f_154647);
				Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_216 = { Global_4456448.f_154647 };
				if (func_576())
				{
					func_575();
				}
				if (!func_255(unk_0x7C7787D2D7139A85(), 0))
				{
					unk_0xC371B6756E9E56D1(0);
					func_366(0, 0, 1);
				}
				break;
			
			case 10:
				func_555(10, 0f, 0f, 0f, Var14);
				func_554();
				break;
		}
	}
	else
	{
		Global_1575093 = 0;
	}
	if (iVar2 || func_690(unk_0x7C7787D2D7139A85()))
	{
		if ((func_553(unk_0x7C7787D2D7139A85()) || func_691(unk_0x7C7787D2D7139A85())) || func_690(unk_0x7C7787D2D7139A85()))
		{
			if (Global_1662991 > 0)
			{
				Global_2449755.f_1.f_2828.f_13 = Global_1662991;
				Global_2449755.f_1.f_2828 = { Global_1662991.f_1 };
			}
		}
		else
		{
			func_552();
		}
	}
	Global_2449755.f_1.f_842 = 0;
	unk_0x3B76114EC84D5812(&Global_1573926, 0);
	func_551(0);
	Global_1574187 = 0;
	Global_1574389 = -1;
	Global_1627231 = 0;
	Global_1312437 = 0;
	Global_1654084.f_1 = 0;
	Global_1654084.f_2 = 0;
	if (func_550() == 0)
	{
		if (Global_1654084.f_9 == -1 && bVar4 == 0)
		{
			func_542(0);
		}
		else
		{
			Global_1654084.f_9 = -1;
		}
	}
	func_541();
	if (func_540())
	{
		func_539();
	}
	if (func_538())
	{
		func_537();
	}
	if (!unk_0xA51CBC95AC3A4B14())
	{
		unk_0xA21FCD430A95FAB8(1);
	}
	if (func_550() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!func_536(Global_1590446[iVar0 /*871*/]) && !func_683()) && !bVar4) && !func_394()) && !func_670()) && !func_682())
			{
				func_535(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_534();
	Global_1654084.f_1 = 0;
	if (!func_638())
	{
		func_533();
	}
	if (Global_1590446[iVar0 /*871*/] != -1)
	{
		iParam2 = iParam2;
		if (func_532(Global_1590446[iVar0 /*871*/]))
		{
			if (unk_0x2A983C9CF4EE0D5E())
			{
				iVar20 = func_515(0);
				func_512(1212, -1);
				func_507(joaat("mpply_mgame_cheat_end"), iVar20);
				if (iVar20 > 0)
				{
					func_507(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (unk_0x393E9918BC37548A())
	{
		unk_0xF03873D0472CB6C9(unk_0x7C7787D2D7139A85());
	}
	func_505();
	if (Global_1654084 == 0)
	{
		if (!bVar4)
		{
			Global_1590446[iVar0 /*871*/].f_11 = -1;
			Global_1590446[iVar0 /*871*/].f_12 = 0;
		}
	}
	if (bVar4)
	{
		func_535(0);
		Global_1590446[iVar0 /*871*/].f_12 = 1;
		Global_1590446[iVar0 /*871*/].f_11 = func_504(unk_0x7C7787D2D7139A85());
		unk_0xC371B6756E9E56D1(0);
		func_366(0, 0, 1);
		if (func_503())
		{
			func_501();
		}
	}
	if ((Global_1590446[iVar0 /*871*/] < 10 && Global_1590446[iVar0 /*871*/] != -1) && !func_394())
	{
		if ((!unk_0x9591DE0F00127F2A(&(Global_1590446[iVar0 /*871*/].f_147)) && Global_1590446[iVar0 /*871*/] != 5) && Global_1590446[iVar0 /*871*/] != 148)
		{
			func_498(&(Global_1590446[iVar0 /*871*/].f_147));
		}
	}
	if (Global_1590446[iVar0 /*871*/] != 6)
	{
		Global_1654031 = 1;
	}
	Global_1590446[iVar0 /*871*/] = -1;
	Global_1590446[iVar0 /*871*/].f_39.f_2 = -1;
	Global_1590446[iVar0 /*871*/].f_39.f_16 = -1;
	Global_1590446[iVar0 /*871*/].f_39.f_1 = -1;
	Global_4456448 = 0;
	if (!bVar4)
	{
		func_497(0);
	}
	Global_1590446[iVar0 /*871*/].f_39.f_18 = 0;
	unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x45F54089C0F6B392() /*871*/].f_726), 0);
	unk_0x1F218199CA9934EC(0, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		unk_0x0C90AD17B16DE260();
		Global_2460176 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1590446[iVar0 /*871*/].f_147), sVar21, 24);
		StringCopy(&(Global_1590446[iVar0 /*871*/].f_153), sVar21, 24);
		func_496();
	}
	StringCopy(&(Global_1618319[iVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1590446[iVar0 /*871*/].f_167), sVar21, 64);
	Global_1627738[iVar0 /*38*/].f_31 = { Var22 };
	Global_1627738[iVar0 /*38*/].f_33 = { Var22 };
	Global_1574399 = 0;
	Global_1574400 = 0;
	Global_1573934 = -1;
	bVar24 = false;
	func_495();
	func_494();
	func_493();
	if (func_492())
	{
		func_491();
	}
	if (func_490() && unk_0xA51CBC95AC3A4B14())
	{
		func_489();
		func_361(unk_0x7C7787D2D7139A85(), 0, 57348, 0);
	}
	if (func_488())
	{
		func_487();
	}
	else if (func_486())
	{
		func_487();
	}
	else if (func_485())
	{
		func_487();
	}
	else if (func_484())
	{
		func_487();
	}
	else if (func_483())
	{
		func_487();
	}
	else if (func_550())
	{
		func_487();
	}
	else if (func_482() && func_481())
	{
		func_487();
	}
	else if (func_480())
	{
		func_487();
	}
	else
	{
		func_479();
		if (!Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_12 && !func_710())
		{
			if (unk_0xA51CBC95AC3A4B14())
			{
				if (func_503())
				{
					func_478();
				}
				else
				{
					if (!unk_0xA2BC31158C8CEFD2(Global_4456448.f_28, 10))
					{
						if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
						{
							Global_2449755.f_2846.f_197 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0) };
						}
					}
					func_477();
					func_695();
					func_476(6);
					func_616();
					if (bVar4)
					{
						func_672(0);
					}
				}
				func_475();
				func_474();
				func_473();
				if (Global_2449755.f_2846.f_4 == 2)
				{
					Global_2449755.f_2846.f_4 = 1;
				}
				if (func_255(unk_0x7C7787D2D7139A85(), 0))
				{
					func_472();
				}
				func_471();
				Global_2449755.f_2846 = 0;
			}
			else
			{
				func_470();
				func_487();
			}
		}
		else
		{
			if (!func_666() && !func_710())
			{
			}
			func_470();
			func_487();
		}
	}
	if ((((((((((!func_488() && !func_469()) && !func_481()) && !func_482()) && !func_485()) && !func_486()) && !func_468()) && !func_483()) && !func_550()) && !func_484()) && !func_467())
	{
		if (!func_466())
		{
			func_465();
			func_463();
			func_462();
			func_460(1);
		}
	}
	if (unk_0x393E9918BC37548A())
	{
		if (unk_0xEDC68E498B715C56())
		{
			if (!unk_0xAC56C3809B2CBED6())
			{
				if (!func_459())
				{
					if (!bVar24)
					{
						if (func_17(unk_0x7C7787D2D7139A85()))
						{
							unk_0xF5238CD58C6DD707();
							unk_0xDE275047AFC032D9();
						}
					}
				}
			}
		}
	}
	if (!func_394())
	{
		StringCopy(&(Global_4456448.f_154367), "", 64);
	}
	if (func_458(116, &iVar25))
	{
		func_457(iVar25);
	}
	if (func_458(123, &iVar25))
	{
		func_457(iVar25);
	}
	if (!func_710())
	{
		func_449();
	}
	else if (func_448())
	{
		func_447();
	}
	func_446();
	if (!func_670() && !func_666())
	{
		func_445();
	}
	iVar3 = 0;
	while (iVar3 < 27)
	{
		Global_1694467[iVar3] = -1;
		Global_1694495[iVar3] = -1;
		Global_1694523[iVar3] = -1;
		iVar3++;
	}
	func_439();
	func_417(bParam3);
}

void func_417(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_638())
		{
		}
		else if ((((!func_670() && !func_666()) && !func_710()) && Global_1654084.f_9 != 9) && Global_1654084.f_9 != 4)
		{
			func_583(0, 1);
		}
	}
	unk_0xD931F7E3EEBC7B7D();
	if (!func_438(unk_0x7C7787D2D7139A85()) && !Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_746)
	{
		func_437();
	}
	if (func_436())
	{
		func_435(1);
		func_434(1);
	}
	if ((((bParam0 && !func_433()) && !func_670()) && !Global_262145.f_4723) && !func_432())
	{
		unk_0x94121341AA63BFFE();
	}
	unk_0x31A175F9EC8E421C(5, 1);
	unk_0x31A175F9EC8E421C(3, 1);
	func_424(&uVar0, -1);
	if ((func_30() == 0 && !func_124()) && !func_670())
	{
		if (func_423())
		{
			func_422();
		}
		else
		{
			func_419(1147932892, 28, 0);
		}
	}
	func_418(0);
}

void func_418(int iParam0)
{
	if (!Global_1662524 == iParam0)
	{
		Global_1662524 = iParam0;
	}
}

void func_419(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_421(iParam1, iParam2))
	{
		iVar0 = func_420();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_420()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458876[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_421(int iParam0, var uParam1)
{
	if (Global_1312861)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312873) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_422()
{
	unk_0xA1E7A40E1F56E511(&(Global_959568.f_8), 22);
}

bool func_423()
{
	return unk_0xA2BC31158C8CEFD2(Global_959568.f_8, 21);
}

void func_424(var uParam0, int iParam1)
{
	func_430(uParam0, iParam1);
	func_425(iParam1);
}

void func_425(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_28();
	}
	uVar0 = func_429(iParam0);
	uVar1 = unk_0xFD4B2AAE20AA1CBB(uVar0);
	if (func_426())
	{
		if (unk_0xA2BC31158C8CEFD2(uVar1, 1))
		{
			func_32(133, 1, -1, 1);
		}
	}
}

int func_426()
{
	if (func_428() && func_427(0))
	{
		return 1;
	}
	return 0;
}

var func_427(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_428()
{
	return func_427(func_28() + 1);
}

int func_429(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_28();
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

void func_430(var uParam0, int iParam1)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	uVar1 = func_431(iParam1);
	uVar2 = unk_0xFD4B2AAE20AA1CBB(uVar1);
	if (unk_0xA2BC31158C8CEFD2(uVar2, 1))
	{
		func_512(1207, iParam1);
		func_507(joaat("mpply_dm_cheat_start"), 2);
		func_507(joaat("mpply_activity_started"), 1);
		unk_0x3B76114EC84D5812(&uVar2, 1);
		bVar0 = true;
	}
	if (unk_0xA2BC31158C8CEFD2(uVar2, 2))
	{
		func_512(1209, iParam1);
		func_507(joaat("mpply_race_cheat_start"), 2);
		func_507(joaat("mpply_activity_started"), 1);
		unk_0x3B76114EC84D5812(&uVar2, 2);
		bVar0 = true;
	}
	if (unk_0xA2BC31158C8CEFD2(uVar2, 3))
	{
		func_512(1118, iParam1);
		func_507(joaat("mpply_mc_cheat_start"), 2);
		func_507(joaat("mpply_activity_started"), 1);
		unk_0x3B76114EC84D5812(&uVar2, 3);
		bVar0 = true;
	}
	if (unk_0xA2BC31158C8CEFD2(uVar2, 4))
	{
		func_512(1211, iParam1);
		func_507(joaat("mpply_mgame_cheat_start"), 2);
		func_507(joaat("mpply_activity_started"), 1);
		unk_0x3B76114EC84D5812(&uVar2, 4);
		bVar0 = true;
	}
	if (unk_0xA2BC31158C8CEFD2(uVar2, 5))
	{
		func_512(1923, iParam1);
		func_507(joaat("mpply_cap_cheat_start"), 2);
		func_507(joaat("mpply_activity_started"), 1);
		unk_0x3B76114EC84D5812(&uVar2, 5);
		bVar0 = true;
	}
	if (unk_0xA2BC31158C8CEFD2(uVar2, 6))
	{
		func_512(1925, iParam1);
		func_507(joaat("mpply_sur_cheat_start"), 2);
		func_507(joaat("mpply_activity_started"), 1);
		unk_0x3B76114EC84D5812(&uVar2, 6);
		bVar0 = true;
	}
	if (unk_0xA2BC31158C8CEFD2(uVar2, 7))
	{
		func_512(1927, iParam1);
		func_507(joaat("mpply_lts_cheat_start"), 2);
		func_507(joaat("mpply_activity_started"), 1);
		unk_0x3B76114EC84D5812(&uVar2, 7);
		bVar0 = true;
	}
	if (unk_0xA2BC31158C8CEFD2(uVar2, 8))
	{
		func_512(1929, iParam1);
		func_507(joaat("mpply_para_cheat_start"), 2);
		func_507(joaat("mpply_activity_started"), 1);
		unk_0x3B76114EC84D5812(&uVar2, 8);
		bVar0 = true;
	}
	if (unk_0xA2BC31158C8CEFD2(uVar2, 9))
	{
		func_512(9130, iParam1);
		func_507(joaat("mpply_heist_cheat_start"), 2);
		func_507(joaat("mpply_activity_started"), 1);
		unk_0x3B76114EC84D5812(&uVar2, 9);
		bVar0 = true;
	}
	if (unk_0xA2BC31158C8CEFD2(uVar2, 26))
	{
		func_512(1931, iParam1);
		func_507(joaat("mpply_fmevn_cheat_start"), 2);
		func_507(joaat("mpply_activity_started"), 1);
		unk_0x3B76114EC84D5812(&uVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		unk_0x9380AC5E82FA214E(uVar2, iParam1);
	}
}

int func_431(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_28();
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

int func_432()
{
	if (func_691(unk_0x7C7787D2D7139A85()) || func_690(unk_0x7C7787D2D7139A85()))
	{
		if (func_593() || func_666())
		{
			return 1;
		}
	}
	return 0;
}

bool func_433()
{
	return Global_1574402;
}

void func_434(int iParam0)
{
	Global_2449755.f_6361 = iParam0;
}

void func_435(int iParam0)
{
	Global_2449755.f_6173 = iParam0;
}

int func_436()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!unk_0x9591DE0F00127F2A(&(Global_4456448.f_154678[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_437()
{
	unk_0x60F310C72311BCA8(6);
	unk_0xB7F4DA52DE3AAF24(1f);
	unk_0xF263AA20D7DC147B(1);
}

int func_438(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

void func_439()
{
	if (Global_1695551)
	{
		if (func_339())
		{
			if (func_444(Global_4456448.f_190930))
			{
				switch (Global_4456448.f_184556)
				{
					case 1:
						unk_0x4B46050239B939C7(2947.73f, -3860.622f, 142.6144f, 5f, joaat("xs_combined_dyst_06_build_03"), 0);
						break;
				}
			}
			else if (func_443(Global_4456448.f_190930))
			{
				switch (Global_4456448.f_184556)
				{
					case 3:
						unk_0x4B46050239B939C7(2943.765f, -3859.625f, 151.1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), 0);
						break;
				}
			}
			else if (func_442(Global_4456448.f_190930))
			{
				switch (Global_4456448.f_184556)
				{
					case 3:
						unk_0x4B46050239B939C7(2948.968f, -3854.075f, 150.7258f, 5f, joaat("xs_propint4_waste_08_plates"), 0);
						break;
				}
			}
			else if (func_441(Global_4456448.f_190930))
			{
				switch (Global_4456448.f_184556)
				{
					case 3:
						unk_0x4B46050239B939C7(2944.726f, -3846.384f, 140f, 5f, joaat("xs_propint5_waste_09_ground_d"), 0);
						unk_0x4B46050239B939C7(2948.589f, -3859.259f, 145.6578f, 5f, joaat("xs_propint5_waste_09_ground_cut"), 0);
						unk_0x4B46050239B939C7(2950.465f, -3861.078f, 149.8605f, 5f, joaat("xs_propint4_waste_09_lollywall"), 0);
						break;
				}
			}
			else if (func_440(Global_4456448.f_190930))
			{
				switch (Global_4456448.f_184556)
				{
					case 3:
						unk_0x4B46050239B939C7(2943.765f, -3859.625f, 151.1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), 0);
						break;
					}
				}
		}
		Global_1695551 = 0;
	}
}

bool func_440(int iParam0)
{
	return iParam0 == 76;
}

bool func_441(int iParam0)
{
	return iParam0 == 77;
}

bool func_442(int iParam0)
{
	return iParam0 == 83;
}

bool func_443(int iParam0)
{
	return iParam0 == 74;
}

bool func_444(int iParam0)
{
	return iParam0 == 78;
}

void func_445()
{
	Global_2448961.f_39.f_41 = 0;
}

void func_446()
{
	Global_1654084.f_6 = 0;
}

void func_447()
{
	unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_99.f_32), 5);
}

bool func_448()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961.f_3, 7);
}

void func_449()
{
	struct<3> Var0;
	struct<2> Var3;
	int iVar5;
	
	if (!func_455(func_456(), Var0))
	{
		Var3.f_0 = 521876760;
		Var3.f_1 = unk_0x7C7787D2D7139A85();
		iVar5 = func_454(1, 1);
		if (!iVar5 == 0)
		{
			func_451();
			func_450(0);
			unk_0x990C4E4B3665A4D6(1, &Var3, 2, iVar5);
		}
	}
}

void func_450(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2437549.f_3727 = unk_0x169A8AC9F93C2727();
	}
	Global_2437549.f_3611 = iParam0;
}

void func_451()
{
	func_453();
	func_452();
}

void func_452()
{
	struct<72> Var0;
	
	if (func_60(unk_0x7C7787D2D7139A85()))
	{
		Var0.f_6 = 32;
		Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_122 = { Var0 };
	}
}

void func_453()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2437549.f_3611.f_79 };
	Var0.f_95 = { Global_2437549.f_3611.f_95 };
	Global_2437549.f_3611 = { Var0 };
}

var func_454(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x0C98179F08C6DA4F(iVar1);
		if (func_14(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x7C7787D2D7139A85() || iParam0)
			{
				if (bParam1)
				{
					unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
				}
				else if (!func_255(iVar2, 0))
				{
					unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_455(struct<3> Param0, struct<3> Param3)
{
	if ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_456()
{
	return Global_2423321[unk_0x7C7787D2D7139A85() /*10*/];
}

void func_457(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2501030[iParam0 /*5*/].f_1 == -1 || Global_2501030[iParam0 /*5*/].f_2 == -1) || Global_2501030[iParam0 /*5*/].f_3 == -1) || Global_2501030[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	unk_0xFDD6E638459E4AB1(Global_2501030[iParam0 /*5*/], Global_2501030[iParam0 /*5*/].f_1, Global_2501030[iParam0 /*5*/].f_2, Global_2501030[iParam0 /*5*/].f_3, Global_2501030[iParam0 /*5*/].f_4);
	Global_2501030[iParam0 /*5*/] = -1;
	Global_2501030[iParam0 /*5*/].f_1 = -1;
	Global_2501030[iParam0 /*5*/].f_2 = -1;
	Global_2501030[iParam0 /*5*/].f_3 = -1;
	Global_2501030[iParam0 /*5*/].f_4 = -1;
}

int func_458(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2501030[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_459()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142, 18);
}

void func_460(bool bParam0)
{
	int iVar0;
	struct<57> Var1;
	int iVar58;
	
	Global_2449755.f_1.f_2798 = 0;
	Global_2449755.f_1.f_2799 = 0;
	Global_2449755.f_1.f_2824 = 0;
	Global_2449755.f_1.f_2805 = 0;
	Global_2449755.f_1.f_2806 = 0;
	Global_2449755.f_1.f_2809 = 0;
	Global_2449755.f_1.f_2810 = 0;
	Global_2449755.f_1.f_2808 = -1;
	Global_2449755.f_1.f_2811 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2449755.f_1.f_2813[iVar0] = 0;
		iVar0++;
	}
	Global_2449755.f_1.f_2825 = -1;
	if (bParam0)
	{
		Global_2449755.f_1.f_2822 = -1;
		Global_2449755.f_1.f_2823 = -1;
	}
	Global_2449755.f_1.f_2844 = 0;
	func_461();
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	iVar58 = 0;
	while (iVar58 <= 31)
	{
		Global_2449755.f_1.f_845[iVar58 /*57*/] = { Var1 };
		iVar58++;
	}
	Global_2445619.f_33 = -1;
	Global_2445619.f_34 = -1;
}

void func_461()
{
	Global_2445619.f_32 = 0;
}

void func_462()
{
	Global_2448961.f_591 = 0;
}

void func_463()
{
	Global_2448961.f_592 = 0;
	func_464();
}

void func_464()
{
	int iVar0;
	
	iVar0 = unk_0x7C7787D2D7139A85();
	if (iVar0 >= 0)
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[iVar0 /*871*/].f_99.f_32), 6);
	}
}

void func_465()
{
	Global_2448961 = 0;
	Global_2448961.f_2 = 0;
	Global_2448961.f_3 = 0;
}

bool func_466()
{
	return Global_2448961.f_591;
}

bool func_467()
{
	return Global_1662982;
}

bool func_468()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 1);
}

bool func_469()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 16);
}

void func_470()
{
	unk_0x3B76114EC84D5812(&Global_2448961, 21);
}

void func_471()
{
	Global_2449755.f_2846.f_34 = 1;
}

void func_472()
{
	Global_2449755.f_1.f_2827 = 1;
}

void func_473()
{
	Global_2448961.f_726 = 1;
}

void func_474()
{
	Global_2449755.f_1.f_2826 = 1;
}

void func_475()
{
	unk_0xA1E7A40E1F56E511(&Global_2448961, 21);
}

void func_476(int iParam0)
{
	Global_2449755.f_1.f_837 = iParam0;
	Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_212 = iParam0;
}

void func_477()
{
	struct<38> Var0;
	
	Var0 = 31;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_2445657 = { Var0 };
}

void func_478()
{
	Global_2449755.f_2846.f_1 = 1;
}

void func_479()
{
	Global_2449755.f_2846.f_1 = 0;
}

bool func_480()
{
	return Global_2448961.f_616;
}

bool func_481()
{
	return Global_2448961.f_606;
}

bool func_482()
{
	return Global_2448961.f_593;
}

bool func_483()
{
	return Global_2448961.f_602;
}

bool func_484()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961.f_2, 15);
}

bool func_485()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 20);
}

bool func_486()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 2);
}

void func_487()
{
	Global_2449755.f_2846.f_34 = 0;
}

bool func_488()
{
	return unk_0xA2BC31158C8CEFD2(Global_959568.f_8, 8);
}

void func_489()
{
	Global_2448961.f_621 = 0;
}

var func_490()
{
	return Global_2448961.f_621;
}

void func_491()
{
	Global_2448961.f_652 = 0;
}

bool func_492()
{
	return Global_2448961.f_652;
}

void func_493()
{
	Global_2449755.f_1.f_838 = 0;
	Global_2449755.f_1.f_839 = 0;
	Global_2449755.f_1.f_841 = 0;
}

void func_494()
{
	unk_0x3B76114EC84D5812(&Global_2448961, 4);
}

void func_495()
{
	unk_0x3B76114EC84D5812(&Global_2448961, 28);
}

void func_496()
{
	int iVar0;
	
	iVar0 = unk_0x7C7787D2D7139A85();
	unk_0x3B76114EC84D5812(&(Global_1590446[iVar0 /*871*/].f_13.f_1), 4);
	unk_0x3B76114EC84D5812(&(Global_1590446[iVar0 /*871*/].f_13.f_1), 5);
	unk_0x3B76114EC84D5812(&(Global_1590446[iVar0 /*871*/].f_13.f_1), 7);
	unk_0x3B76114EC84D5812(&(Global_1590446[iVar0 /*871*/].f_13.f_1), 8);
	unk_0x3B76114EC84D5812(&(Global_1590446[iVar0 /*871*/].f_13.f_1), 9);
	unk_0x3B76114EC84D5812(&(Global_1590446[iVar0 /*871*/].f_13.f_1), 10);
	unk_0x3B76114EC84D5812(&(Global_1590446[iVar0 /*871*/].f_13.f_1), 11);
	unk_0x3B76114EC84D5812(&(Global_1590446[iVar0 /*871*/].f_13.f_1), 12);
	unk_0x3B76114EC84D5812(&(Global_1590446[iVar0 /*871*/].f_13.f_1), 13);
}

void func_497(int iParam0)
{
	unk_0xC371B6756E9E56D1(iParam0);
}

void func_498(var uParam0)
{
	var uVar0;
	
	if ((!func_500() && func_499(120, -1)) && !func_394())
	{
		unk_0xA7EBB3B1D4BB4102(uParam0, &uVar0, 13);
		if (unk_0x5D17AB84230A234B(&uVar0, 13))
		{
			if (unk_0xB8A6A83E8C303720(&uVar0))
			{
			}
		}
	}
}

int func_499(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_27(iParam1)];
	if (unk_0xF7B5584413D4EA03(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_500()
{
	int iVar0;
	
	iVar0 = unk_0x7C7787D2D7139A85();
	if ((Global_1590446[iVar0 /*871*/].f_39.f_2 == 63 || Global_1590446[iVar0 /*871*/].f_39.f_2 == 62) || Global_1590446[iVar0 /*871*/].f_39.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_501()
{
	unk_0xA1E7A40E1F56E511(&(Global_959568.f_8), 8);
	func_502();
}

void func_502()
{
	Global_2448961.f_780 = 1;
}

bool func_503()
{
	return Global_2449755.f_2846.f_2;
}

var func_504(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_99.f_2;
}

void func_505()
{
	if (func_506())
	{
		unk_0x0D23E3918F7AF11B(1);
	}
}

bool func_506()
{
	return func_196("FM_RETRY_INV");
}

void func_507(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_511(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_510(iParam0))
	{
		func_509(iParam0, iVar0);
	}
	else
	{
		func_508(iParam0, iVar0);
	}
}

void func_508(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1384129 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1384132 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1384133 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1384134 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1384135 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1384136 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1384137 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1384138 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1384139 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1384140 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1384141 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1384142 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1384143 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1384144 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1384145 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_509(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, 1);
	}
}

int func_510(int iParam0)
{
	if (Global_1384128)
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

int func_511(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_512(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_26(iParam0, func_27(iParam1), 0);
	iVar0++;
	if (!func_514(iParam0))
	{
		func_64(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_513(iParam0, iVar0, iParam1, 1);
	}
}

void func_513(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_27(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_27(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_27(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_27(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_27(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_27(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_27(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_27(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_27(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_27(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_27(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_27(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_27(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_27(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_27(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_27(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_27(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_27(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_27(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_27(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_27(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_27(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_27(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_27(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_27(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_27(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_27(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_27(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_27(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_27(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_27(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_27(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_27(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_27(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_27(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_27(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_27(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_27(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_27(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_27(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_27(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_27(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_27(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_27(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_27(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_27(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_27(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_27(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_514(int iParam0)
{
	if (Global_1384128)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 9509:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
				return 1;
				break;
			}
	}
	return 0;
}

int func_515(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2460056 == 0)
	{
		return 0;
	}
	if (func_531())
	{
		if (unk_0xA51CBC95AC3A4B14() || (func_530() || func_526()))
		{
			Global_2459003 = 1;
		}
	}
	Global_2460056 = 0;
	if (Global_1315700)
	{
		iVar0 = 1;
	}
	if (Global_2459003)
	{
		iVar0 = 1;
	}
	if (Global_2459002)
	{
		iVar0 = 1;
	}
	if (func_525(Global_110588.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2458925)
	{
		iVar0 = 1;
	}
	if (func_524(512))
	{
		iVar0 = 1;
	}
	if (func_523(128))
	{
		iVar0 = 1;
	}
	if (Global_1315724 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_394())
	{
		iVar0 = 0;
	}
	if (Global_2459495)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_521())
		{
			if (Global_4456448.f_156036 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_255(unk_0x7C7787D2D7139A85(), 0))
	{
		iVar0 = 0;
	}
	if (func_520())
	{
		iVar0 = 0;
	}
	if ((Global_2459003 || Global_2459002) || Global_1315700)
	{
		if (func_526())
		{
			iVar0 = 0;
		}
	}
	Global_2459495 = 0;
	Global_2459002 = 0;
	Global_2459003 = 0;
	Global_1315700 = 0;
	Global_2458925 = 0;
	func_518(&(Global_110588.f_1), 32);
	func_517(512);
	func_516(128);
	return iVar0;
}

void func_516(int iParam0)
{
	Global_110645 = (Global_110645 - (Global_110645 && iParam0));
}

void func_517(int iParam0)
{
	Global_110646 = (Global_110646 - (Global_110646 && iParam0));
}

void func_518(var uParam0, int iParam1)
{
	func_519(uParam0, iParam1);
}

void func_519(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_520()
{
	if (((Global_1574425 || Global_1574395) || func_255(unk_0x7C7787D2D7139A85(), 0)) || func_254())
	{
		return 1;
	}
	return 0;
}

int func_521()
{
	switch (func_522())
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

int func_522()
{
	return Global_2449755.f_1.f_2822;
}

bool func_523(int iParam0)
{
	return (Global_110645 && iParam0) != 0;
}

bool func_524(int iParam0)
{
	return (Global_110646 && iParam0) != 0;
}

bool func_525(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_526()
{
	if (func_529(Global_2461173))
	{
		return 0;
	}
	if (func_527(unk_0x7C7787D2D7139A85(), 146))
	{
		return 1;
	}
	return 0;
}

int func_527(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/] == iParam1)
	{
		return func_528(iParam0);
	}
	return 0;
}

int func_528(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_529(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11389)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11391)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11388)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11392)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11393)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11394)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11390)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11395)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11396)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11397)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11398)
			{
				return 1;
			}
			break;
		
		case 236:
			break;
	}
	return 0;
}

int func_530()
{
	if (func_529(Global_2461173))
	{
		return 0;
	}
	if (func_528(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	return 0;
}

bool func_531()
{
	return unk_0xA2BC31158C8CEFD2(Global_1312424, 0);
}

int func_532(int iParam0)
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

void func_533()
{
	if (unk_0x145DAE1A4D0EA05D(unk_0x073CCB5DC4DE69A5(unk_0x7C7787D2D7139A85()), "MissionType"))
	{
		unk_0xA4BE0B085F6F0B04(unk_0x073CCB5DC4DE69A5(unk_0x7C7787D2D7139A85()), "MissionType");
	}
	if (unk_0x145DAE1A4D0EA05D(unk_0x073CCB5DC4DE69A5(unk_0x7C7787D2D7139A85()), "MatchId"))
	{
		unk_0xA4BE0B085F6F0B04(unk_0x073CCB5DC4DE69A5(unk_0x7C7787D2D7139A85()), "MatchId");
	}
	if (unk_0x145DAE1A4D0EA05D(unk_0x073CCB5DC4DE69A5(unk_0x7C7787D2D7139A85()), "TeamId"))
	{
		unk_0xA4BE0B085F6F0B04(unk_0x073CCB5DC4DE69A5(unk_0x7C7787D2D7139A85()), "TeamId");
	}
}

void func_534()
{
	Global_2448961.f_597 = 0;
	unk_0x828EDC07D27F660A();
}

void func_535(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_35)
		{
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_35 = 1;
		}
	}
	else if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_35)
	{
		Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_35 = 0;
	}
}

int func_536(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_537()
{
	Global_2448961.f_740 = 0;
}

bool func_538()
{
	return Global_2448961.f_740;
}

void func_539()
{
	Global_2448961.f_744 = 0;
}

bool func_540()
{
	return Global_2448961.f_744;
}

void func_541()
{
	unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_99.f_32), 1);
}

int func_542(int iParam0)
{
	int iVar0;
	
	if (func_254())
	{
		return 1;
	}
	if (func_547())
	{
		return 1;
	}
	if (unk_0x9591DE0F00127F2A(&(Global_4456448.f_154647)))
	{
		return 1;
	}
	if (func_546())
	{
		return 1;
	}
	func_545();
	unk_0x73EE1323F62AE6D1();
	iVar0 = unk_0xD15DDDE2D5991717();
	if (iParam0 == 0)
	{
		Global_1654044++;
		unk_0x36B9A21D956E1A8C(iVar0, "quit", Global_1654044);
		unk_0x36B9A21D956E1A8C(iVar0, "quitd", 1);
		unk_0x36B9A21D956E1A8C(iVar0, "ply", Global_1654044.f_2);
		unk_0x36B9A21D956E1A8C(iVar0, "lp", unk_0x71EC776E812C6A0A());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1654069.f_1++;
		unk_0x36B9A21D956E1A8C(iVar0, "quit", Global_1654069.f_1);
		unk_0x36B9A21D956E1A8C(iVar0, "quitd", 1);
		unk_0x36B9A21D956E1A8C(iVar0, "ply", Global_1654069.f_4);
		unk_0x36B9A21D956E1A8C(iVar0, "lp", unk_0x71EC776E812C6A0A());
	}
	if (iParam0 == 0)
	{
		if (unk_0xA67650B7F3A2423B(&(Global_4456448.f_154647), 0f, func_544(iParam0)))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (unk_0xA67650B7F3A2423B(&(Global_959568.f_42), 0f, func_544(iParam0)))
		{
		}
	}
	func_543();
	func_545();
	unk_0x92AD9FFFB8B0CC98();
	return 1;
}

void func_543()
{
	Global_1654044 = 0;
	Global_1654044.f_2 = 0;
	Global_1654044.f_8 = 0;
	Global_1654044.f_3 = 0;
	Global_1654044.f_6 = 0;
}

char* func_544(int iParam0)
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

void func_545()
{
	if (unk_0xD15DDDE2D5991717() != 0)
	{
		unk_0xD7DA134CB17A3ABD();
	}
}

int func_546()
{
	if (unk_0x3AD58850FCB85E22())
	{
		return 1;
	}
	else if (unk_0x6F6334468240A066())
	{
		return 1;
	}
	else if (unk_0x1C5454FD8046C706())
	{
		return 1;
	}
	return 0;
}

int func_547()
{
	if (!func_548())
	{
		return 1;
	}
	return 0;
}

int func_548()
{
	if (func_549())
	{
		return 0;
	}
	if (unk_0x56BDC2B0945F6D74() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_549()
{
	return Global_2459500;
}

bool func_550()
{
	return Global_2448961.f_634;
}

void func_551(bool bParam0)
{
	if (bParam0)
	{
		Global_1312451 = 1;
	}
	else
	{
		Global_1312451 = 0;
	}
}

void func_552()
{
	Global_2449755.f_1.f_2828.f_13 = 0;
	Global_2449755.f_1.f_2828 = 0;
	Global_2449755.f_1.f_2828.f_1 = 0;
	Global_2449755.f_1.f_2828.f_2 = 0;
	Global_2449755.f_1.f_2828.f_3 = 0;
	Global_2449755.f_1.f_2828.f_4 = 0;
	Global_2449755.f_1.f_2828.f_5 = 0;
	Global_2449755.f_1.f_2828.f_6 = 0;
	Global_2449755.f_1.f_2828.f_7 = 0;
	Global_2449755.f_1.f_2828.f_8 = 0;
	Global_2449755.f_1.f_2828.f_9 = 0;
	Global_2449755.f_1.f_2828.f_10 = 0;
	Global_2449755.f_1.f_2828.f_11 = 0;
	Global_2449755.f_1.f_2828.f_12 = 0;
}

bool func_553(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 1;
}

void func_554()
{
	Global_2448961.f_616 = 1;
}

void func_555(int iParam0, struct<3> Param1, struct<6> Param4)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_574();
	func_573();
	func_572();
	func_571();
	func_570();
	func_695();
	Global_1654084.f_9 = iParam0;
	switch (Global_1654084.f_9)
	{
		case 1:
			Global_1654084 = 0;
			Global_1654084.f_22 = { 0f, 0f, 0f };
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_12 = 0;
			func_567();
			break;
		
		case 2:
			Global_1654084 = 1;
			Global_1654084.f_22 = { Param1 };
			Global_1654084.f_16 = { Param4 };
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_12 = 0;
			break;
		
		case 3:
			if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 0 || Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 1)
			{
				func_566(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_99.f_28);
			}
			func_565();
			Global_1654084 = 1;
			Global_1654084.f_22 = { Param1 };
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_12 = 0;
			break;
		
		case 4:
			func_564();
			func_565();
			Global_1654084 = 1;
			if (func_690(unk_0x7C7787D2D7139A85()) || func_691(unk_0x7C7787D2D7139A85()))
			{
				func_563(1);
			}
			if ((func_562() || func_596()) && func_582())
			{
				Global_1654084.f_16 = { func_581() };
				Param4 = { Global_1654084.f_16 };
				Global_1654084.f_22 = { func_561() };
			}
			else if (func_562() || func_596())
			{
				if (func_560())
				{
					Global_1654084.f_22 = { func_559() };
				}
				else
				{
					Global_1654084.f_22 = { Param1 };
				}
			}
			else
			{
				Global_1654084.f_22 = { Param1 };
			}
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_12 = 1;
			break;
		
		case 5:
			func_564();
			func_558();
			func_565();
			if (func_690(unk_0x7C7787D2D7139A85()) || func_691(unk_0x7C7787D2D7139A85()))
			{
				func_563(1);
			}
			Global_1654084 = 1;
			Global_1654084.f_22 = { Param1 };
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_12 = 1;
			break;
		
		case 8:
			Global_1654084 = 0;
			Global_1654084.f_22 = { Param1 };
			Global_1654084.f_16 = { Param4 };
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_12 = 0;
			break;
		
		case 9:
			func_565();
			Global_1654084 = 1;
			Global_1654084.f_22 = { Param1 };
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_12 = 1;
			break;
		
		case 10:
			Global_1654084 = 0;
			Global_1654084.f_22 = { 0f, 0f, 0f };
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_12 = 0;
			break;
	}
	func_557();
	func_556();
	func_476(Global_1654084.f_9);
	Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_213 = { Global_1654084.f_22 };
	Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_216 = { Param4 };
}

void func_556()
{
	unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18), 23);
}

void func_557()
{
	unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18), 12);
}

void func_558()
{
	Global_1654084.f_4 = 1;
}

Vector3 func_559()
{
	return Global_2448961.f_39.f_500;
}

int func_560()
{
	if ((Global_2448961.f_39.f_500 != 0f || Global_2448961.f_39.f_500.f_1 != 0f) || Global_2448961.f_39.f_500.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_561()
{
	return Global_2448961.f_39.f_503;
}

var func_562()
{
	return Global_2448961.f_39.f_57;
}

void func_563(int iParam0)
{
	Global_2449755.f_6172 = iParam0;
}

void func_564()
{
	Global_1654084.f_3 = 1;
}

void func_565()
{
	Global_1654084.f_7 = 1;
}

void func_566(var uParam0)
{
	Global_1654084.f_10 = uParam0;
}

int func_567()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	
	if (!unk_0x5D17AB84230A234B(&(Global_2449755.f_6471), 13))
	{
		return 0;
	}
	iVar2 = unk_0x7C7787D2D7139A85();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = unk_0x0C98179F08C6DA4F(iVar1);
		if (unk_0xD56C8C2B75BF9665(iVar0) && iVar0 != iVar2)
		{
			Var3 = { func_78(iVar0) };
			if (unk_0xD7DE6AEF5C87DE06(&Var3, &(Global_2449755.f_6471)) && func_569(iVar0))
			{
				func_568();
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_568()
{
	unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18), 9);
}

bool func_569(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_39.f_18, 9);
}

void func_570()
{
	Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_5 = 0;
}

void func_571()
{
	Global_1654084.f_10 = -1;
}

void func_572()
{
	Global_1654084.f_4 = 0;
}

void func_573()
{
	Global_1654084.f_3 = 0;
}

void func_574()
{
	Global_2449755.f_2846.f_2 = 1;
}

void func_575()
{
	Global_2448961.f_569.f_14 = 0;
}

bool func_576()
{
	return Global_2448961.f_569.f_14;
}

void func_577()
{
	Global_2448961.f_39.f_55 = 0;
}

void func_578()
{
	Global_2448961.f_39.f_43 = -1;
}

int func_579()
{
	return Global_2448961.f_39.f_43;
}

void func_580(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0x9591DE0F00127F2A(&uParam0))
	{
		return;
	}
	if (!Global_2398871)
	{
		return;
	}
	if (!unk_0x2553916E420E8EF0(&uParam0, &(Global_2398871.f_1)))
	{
		return;
	}
	Global_2398937 = 1;
}

struct<6> func_581()
{
	return Global_2448961.f_39.f_12;
}

bool func_582()
{
	return Global_2448961.f_39.f_59;
}

void func_583(int iParam0, bool bParam1)
{
	if (func_684())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (unk_0xB449899BA6DC6730())
				{
					unk_0xA4C75A297F5EEDFD();
				}
			}
			break;
		
		case 1:
			unk_0xB1CB008AB1B554E2(6, 0, 0);
			break;
		
		case 2:
			unk_0xB1CB008AB1B554E2(12, 0, 0);
			break;
		
		case 3:
			if (func_584(Global_4456448.f_190930))
			{
				unk_0xB1CB008AB1B554E2(20, 50, 0);
			}
			else
			{
				unk_0xB1CB008AB1B554E2(21, 0, 0);
			}
			break;
		
		case 4:
			unk_0xB1CB008AB1B554E2(0, 0, 0);
			break;
		
		default:
			break;
	}
}

bool func_584(int iParam0)
{
	return iParam0 == 10;
}

int func_585()
{
	return Global_1654084.f_12;
}

void func_586(var uParam0, var uParam1)
{
	Global_1654084.f_13 = uParam0;
	Global_1654084.f_14 = uParam1;
}

void func_587(var uParam0)
{
	Global_1654084.f_12 = uParam0;
}

int func_588(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_5025[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_589()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return func_592();
	}
	return func_590(Global_4456448.f_154360);
}

int func_590(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_5798[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_591()
{
	return Global_2448961.f_17;
}

bool func_592()
{
	return Global_2448961.f_19;
}

bool func_593()
{
	return unk_0xA2BC31158C8CEFD2(Global_1312769, 4);
}

bool func_594()
{
	return Global_2448961.f_15;
}

void func_595()
{
	Global_2448961.f_39.f_56 = 1;
}

bool func_596()
{
	return Global_2448961.f_39.f_55;
}

void func_597()
{
	if (unk_0x9591DE0F00127F2A(&(Global_2391056.f_4.f_3)))
	{
		return;
	}
	if (!unk_0x9591DE0F00127F2A(&(Global_2398169.f_3)))
	{
		if (unk_0x2553916E420E8EF0(&(Global_2398169.f_3), &(Global_2391056.f_4.f_3)))
		{
			Global_1311838 = 0;
		}
		else
		{
			Global_1311838 = 1;
		}
	}
	Global_1311839 = 0;
	Global_1311839.f_1 = { Global_2391056.f_4.f_3 };
}

void func_598()
{
	Global_1654084.f_5 = 0;
	Global_1654084.f_11 = -1;
}

void func_599(var uParam0)
{
	Global_1654084.f_5 = 1;
	Global_1654084.f_11 = uParam0;
}

int func_600(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9175[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_601(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9011[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_602()
{
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_18, 0))
	{
		return 1;
	}
	return ((((((func_609(Global_4456448.f_154360, 1) || func_608(Global_4456448.f_154360)) || func_607(Global_4456448.f_154360)) || func_606(Global_4456448.f_154360)) || func_605(Global_4456448.f_190930)) || func_604(Global_4456448.f_190930)) || func_603(Global_4456448.f_190930));
}

bool func_603(int iParam0)
{
	return iParam0 == 65;
}

bool func_604(int iParam0)
{
	return iParam0 == 48;
}

bool func_605(int iParam0)
{
	return iParam0 == 8;
}

int func_606(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9254[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_607(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9197[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_608(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9078[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_609(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_190930 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<13> func_610()
{
	struct<13> Var0;
	
	unk_0xAC2208BB69C2069D(&Var0, 13);
	return Var0;
}

void func_611(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	var uVar0;
	
	if (unk_0x9591DE0F00127F2A(&uParam0))
	{
		return;
	}
	if (!Global_2391045)
	{
		return;
	}
	uVar0 = unk_0xA8C462EF7D9DC564(&uParam0);
	Global_2391047 = uVar0;
	Global_2391048 = (unk_0x9B35D07DCD0F0B43() + 60000);
}

void func_612(struct<6> Param0)
{
	if (unk_0x9591DE0F00127F2A(&Param0))
	{
		return;
	}
	Global_1311839 = 1;
	Global_1311839.f_1 = { Param0 };
}

bool func_613()
{
	return Global_2448961.f_12;
}

void func_614(int iParam0)
{
	if (unk_0x393E9918BC37548A())
	{
		unk_0x38073481B0C97D5E(iParam0);
		unk_0xC8D1D77E843EC52E(0);
	}
}

void func_615(int iParam0)
{
	if (Global_2508069 != iParam0)
	{
		Global_2508069 = iParam0;
	}
}

void func_616()
{
	Global_968397 = -1;
}

void func_617()
{
	func_618(-1f);
}

void func_618(float fParam0)
{
	if (unk_0x393E9918BC37548A())
	{
		unk_0x819F1ABD4952CD16(0);
		unk_0x4856D07113939DCC(0);
		unk_0x38073481B0C97D5E(fParam0);
		unk_0xC8D1D77E843EC52E(0);
	}
}

int func_619(int iParam0)
{
	int iVar0;
	
	if (Global_1672263[iParam0 /*8*/] == -1)
	{
		iVar0 = func_26(func_621(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_620(iParam0, 0);
			iVar0 = 0;
		}
		Global_1672263[iParam0 /*8*/] = iVar0;
	}
	return Global_1672263[iParam0 /*8*/];
}

void func_620(int iParam0, int iParam1)
{
	Global_1672263[iParam0 /*8*/] = iParam1;
	func_64(func_621(iParam0), iParam1, -1, 1, 0);
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9471;
		
		default:
	}
	return 9471;
}

bool func_622()
{
	return Global_4456448.f_1 == 0;
}

void func_623(int iParam0, int iParam1)
{
	unk_0x4E3A7A61D9B482C5(iParam0);
	unk_0x607E00E07DED5E30(iParam0);
	if (unk_0x33E17C52A9CBB69B())
	{
		unk_0x51CE11102E7A21D3(iParam1);
	}
}

bool func_624()
{
	return Global_2448961.f_643;
}

void func_625()
{
	if (unk_0xA2BC31158C8CEFD2(Global_2359302, 24))
	{
		unk_0x3B76114EC84D5812(&Global_2359302, 24);
	}
}

void func_626()
{
	unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18), 14);
}

var func_627()
{
	return Global_2508069;
}

bool func_628()
{
	return Global_2448961.f_731;
}

int func_629()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_196;
}

void func_630(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574188 == 0)
		{
			Global_1574188 = 1;
		}
	}
	else if (Global_1574188 == 1)
	{
		Global_1574188 = 0;
	}
}

void func_631()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2449755.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2449755.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_632()
{
	int iVar0;
	
	if (func_254())
	{
		return 1;
	}
	if (func_547())
	{
		return 1;
	}
	if (func_546())
	{
		return 1;
	}
	if (unk_0x9591DE0F00127F2A(&(Global_4456448.f_154647)))
	{
		return 1;
	}
	func_545();
	unk_0x73EE1323F62AE6D1();
	iVar0 = unk_0xD15DDDE2D5991717();
	Global_1654044.f_2++;
	if (Global_1654044.f_2 < 1)
	{
		Global_1654044.f_2 = 1;
	}
	unk_0x36B9A21D956E1A8C(iVar0, "quit", Global_1654044);
	unk_0x36B9A21D956E1A8C(iVar0, "ply", Global_1654044.f_2);
	unk_0x36B9A21D956E1A8C(iVar0, "plyd", 1);
	unk_0x36B9A21D956E1A8C(iVar0, "lp", unk_0x71EC776E812C6A0A());
	if (unk_0xA67650B7F3A2423B(&(Global_4456448.f_154647), -1f, func_544(0)))
	{
	}
	func_543();
	func_545();
	unk_0x92AD9FFFB8B0CC98();
	return 1;
}

void func_633()
{
	Global_2448961.f_743 = 1;
}

void func_634(bool bParam0)
{
	if (bParam0)
	{
		unk_0x008B893A1E7D01CE();
	}
	else
	{
		unk_0x9B67BD8C9AF63306();
	}
}

void func_635()
{
	Global_2448961.f_742 = 1;
}

int func_636(int iParam0)
{
	switch (Global_1312448)
	{
		case 0:
			if (!func_637(iParam0))
			{
				if (Global_1590446[iParam0 /*871*/] == 2 || Global_1590446[iParam0 /*871*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_637(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

bool func_638()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142, 2);
}

void func_639()
{
	Global_2448961.f_742 = 0;
}

bool func_640()
{
	return Global_2448961.f_742;
}

void func_641(int iParam0)
{
	unk_0x0E7DFCFC6E6D9A0C("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	unk_0x0E7DFCFC6E6D9A0C("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	unk_0x0E7DFCFC6E6D9A0C("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_642()
{
	Global_1654084.f_12 = -1;
	Global_1654084.f_13 = -1;
	Global_1654084.f_14 = -1;
}

void func_643(int iParam0)
{
	Global_968398 = iParam0;
}

void func_644()
{
	Global_1627308 = 0;
	Global_1574392 = 4;
}

void func_645(bool bParam0)
{
	if (bParam0)
	{
		Global_1574405 = 1;
	}
	else
	{
		Global_1574405 = 0;
	}
}

void func_646()
{
	Global_1627309 = -1;
	Global_1627315 = 0;
	Global_1627310 = -1;
}

void func_647()
{
	Global_2531497.f_287 = 0;
	func_651(3782, 0, -1, 1);
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (func_649())
		{
			unk_0x0453EBC0FB8D8A80(unk_0x0FA8183DAD2B3203(), 5, 0, 0, 0);
			func_648();
		}
	}
}

void func_648()
{
	Global_76550 = 0;
	Global_76551 = -1;
	Global_76552 = -1;
	Global_76553 = -1;
	Global_76554 = -1;
	Global_76555 = -1;
}

bool func_649()
{
	return func_650(unk_0x0FA8183DAD2B3203());
}

int func_650(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xF7BAF104A598DD7E(uParam0, 5);
	iVar1 = -1;
	switch (unk_0x7F375072508F738F(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x0247E28AC199A99A(iParam0, 5, iVar0, unk_0xFFE2C28AD044C475(iParam0, 5));
			if (unk_0xC8A729A94EDD3FC9(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x0247E28AC199A99A(iParam0, 5, iVar0, unk_0xFFE2C28AD044C475(iParam0, 5));
			if (unk_0xC8A729A94EDD3FC9(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_651(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar22, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_652()
{
	Global_2448961.f_743 = 0;
}

bool func_653()
{
	return Global_2448961.f_743;
}

void func_654(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_656(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8385)
	{
		unk_0x129AB650651225C5(15);
		Global_22350.f_8385 = 0;
	}
	unk_0xF3F61F23853206CB(0f);
	if (Global_22350.f_5628[iVar0])
	{
		unk_0xA95AA80044081B2A(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		unk_0xD73CEE901CAB1716("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		unk_0xD73CEE901CAB1716("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_655(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_655(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x08EA887200715AD9(*uParam0))
		{
			unk_0x749CA887CB0AFEC9(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_656(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x393E9918BC37548A() && unk_0xF77CF4BC35906B30())
		{
			iParam2 = unk_0xD048B37B1753D376();
		}
	}
	StringCopy(&cVar0, unk_0x0037AFCBDC61F351(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xA8C462EF7D9DC564(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_657()
{
}

void func_658(int iParam0)
{
	struct<42> Var0;
	int iVar42;
	var uVar43;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	if (Global_2448961.f_569.f_9 == 0)
	{
		Global_1654109.f_1345 = 0;
	}
	iVar42 = 0;
	while (iVar42 <= 31)
	{
		uVar43 = Global_1654109[iVar42 /*42*/].f_3;
		Global_1654109[iVar42 /*42*/] = { Var0 };
		if (func_710())
		{
			Global_1654109[iVar42 /*42*/].f_3 = uVar43;
		}
		Global_1654109[iVar42 /*42*/].f_1 = func_140();
		Global_1654109[iVar42 /*42*/] = -1;
		Global_1654109[iVar42 /*42*/].f_2 = -1;
		iVar42++;
	}
	if ((!func_710() && !func_670()) && iParam0)
	{
		Global_1654109.f_1347 = 0;
		Global_1654109.f_1348 = 0;
	}
}

int func_659()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1654109[iVar0 /*42*/].f_1 != func_140())
		{
			if (Global_1654109[iVar0 /*42*/].f_11 > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_660()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return func_591();
	}
	return func_661(Global_4456448.f_154360);
}

int func_661(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_662(bool bParam0)
{
	struct<51> Var0;
	
	if (!bParam0)
	{
		Var0.f_2 = { Global_1675423.f_2 };
		Var0.f_14 = Global_1675423.f_14;
		Var0.f_19 = Global_1675423.f_19;
		Var0.f_23 = Global_1675423.f_23;
		Var0.f_25 = Global_1675423.f_25;
		Var0.f_30 = Global_1675423.f_30;
		Var0.f_26 = Global_1675423.f_26;
		Var0.f_27 = Global_1675423.f_27;
		Var0.f_28 = Global_1675423.f_28;
		Var0.f_29 = Global_1675423.f_29;
		Var0.f_31 = Global_1675423.f_31;
		Var0.f_32 = Global_1675423.f_32;
		Var0.f_33 = Global_1675423.f_33;
		Var0.f_40 = Global_1675423.f_40;
		Var0.f_42 = Global_1675423.f_42;
		Var0.f_50 = Global_1675423.f_50;
		Var0.f_46 = Global_1675423.f_46;
	}
	Global_1675423 = { Var0 };
}

void func_663(bool bParam0)
{
	Global_786481.f_3 = 0;
	Global_786481.f_4 = 0;
	Global_786481.f_6 = 0;
	Global_786481.f_7 = 0;
	Global_786481.f_8 = 0;
	Global_786481.f_9 = 0;
	Global_786481.f_10 = 0;
	Global_786481.f_11 = 0;
	Global_786481.f_12 = 0;
	Global_786481.f_13 = 0;
	Global_786481.f_14 = 0;
	Global_786481.f_15 = 0;
	Global_786481.f_16 = 0;
	Global_786481.f_17 = 0;
	Global_786481.f_18 = 0;
	Global_786481.f_20 = 0;
	if (((!func_666() && !func_596()) && Global_1654084.f_9 != 4) && !func_670())
	{
		Global_786481.f_43 = 0;
		Global_786481.f_44 = 0;
	}
	Global_786481.f_22 = 0;
	Global_786481.f_24 = 0;
	Global_786481.f_25 = 0;
	Global_786481.f_28 = 0;
	Global_786481.f_29 = 0;
	Global_786481.f_30 = 0;
	Global_786481.f_31 = 0;
	Global_786481.f_32 = 0;
	Global_786481.f_33 = 0;
	Global_786481.f_36 = 0;
	Global_786481.f_37 = 0;
	Global_786481.f_38 = 0;
	Global_786481.f_39 = 0;
	Global_786481.f_40 = 0;
	Global_786481.f_41 = 0;
	Global_786481.f_42 = 0;
	Global_786481.f_35 = 0;
	Global_786481.f_63 = 0;
	if (bParam0)
	{
		Global_786481 = 0;
		Global_786481.f_1 = 0;
		if ((!func_666() && !func_596()) && Global_1654084.f_9 != 4)
		{
			Global_786481.f_2 = 0;
			Global_786481.f_21 = 0;
		}
		Global_786481.f_5 = 0;
		Global_786481.f_19 = 0;
		Global_786481.f_23 = 0;
		Global_786481.f_26 = 0;
		Global_786481.f_46 = 0;
		Global_786481.f_47 = 0;
		Global_786481.f_48 = 0;
		Global_786481.f_50 = 0;
		Global_786481.f_51 = 0;
		Global_786481.f_52 = 0;
		Global_786481.f_53 = 0;
		Global_786481.f_54 = 0;
		Global_786481.f_55 = 0;
	}
}

void func_664(bool bParam0)
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

void func_665(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x145DAE1A4D0EA05D(unk_0x073CCB5DC4DE69A5(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x7CE457B32235D9D1(unk_0x073CCB5DC4DE69A5(iParam0), "MPBitset");
	}
	unk_0x3B76114EC84D5812(&iVar0, iParam1);
	unk_0x6950A3804E46BC89(unk_0x073CCB5DC4DE69A5(iParam0), "MPBitset", iVar0);
}

bool func_666()
{
	return Global_1654084.f_3;
}

bool func_667()
{
	return Global_2457255.f_7;
}

bool func_668()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961.f_39.f_4, 8);
}

void func_669()
{
	Global_2448961.f_39.f_57 = 0;
}

bool func_670()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961.f_39.f_4, 0);
}

void func_671()
{
	unk_0x3B76114EC84D5812(&(Global_959568.f_8), 8);
}

void func_672(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_13.f_1), 0);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_13.f_1), 0);
	}
}

void func_673(int iParam0)
{
	if ((unk_0x393E9918BC37548A() && !Global_1312850) && !Global_1312851)
	{
		if (((Global_2449755.f_3467 != 0 && Global_2449755.f_3467.f_1 != 0) && Global_2449755.f_3467.f_2 != 0) && Global_2449755.f_3467.f_3 != 0)
		{
			unk_0x6BB9071E75A43938(Global_2449755.f_3467, Global_2449755.f_3467.f_1, Global_2449755.f_3467.f_2, Global_2449755.f_3467.f_3, iParam0);
		}
	}
	func_674();
}

void func_674()
{
	Global_2449755.f_3467 = 0;
	Global_2449755.f_3467.f_1 = 0;
	Global_2449755.f_3467.f_2 = 0;
	Global_2449755.f_3467.f_3 = 0;
}

void func_675()
{
	Global_2449755.f_1.f_2801 = 1;
}

bool func_676()
{
	return unk_0xA2BC31158C8CEFD2(Global_2449755.f_1.f_2809, 12);
}

void func_677(int iParam0)
{
	if (!func_670() || iParam0)
	{
		Global_1575092 = 0;
		Global_1575091 = 0;
	}
}

void func_678(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;
	
	Global_2448961.f_39 = -1;
	Global_2448961.f_39.f_64 = -1;
	Global_2448961.f_39.f_2 = -1;
	Global_2448961.f_39.f_5 = 0;
	Global_2448961.f_39.f_3 = 0;
	Global_2448961.f_39.f_4 = 0;
	Global_2448961.f_39.f_42 = -1;
	Global_2448961.f_39.f_6 = { Var0 };
	Global_2448961.f_39.f_62 = 0;
	Global_2448961.f_39.f_138 = 0;
	Global_2448961.f_39.f_353 = 0;
	Global_2448961.f_39.f_63 = 0;
	Global_2448961.f_39.f_139 = 0;
	Global_2448961.f_39.f_354 = 0;
	Global_2448961.f_39.f_528 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2448961.f_39.f_485[iVar6] = 0;
		iVar6++;
	}
	Global_2448961.f_39.f_61 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2448961.f_39.f_65[iVar6] = 0;
		iVar6++;
	}
	Global_2448961.f_39.f_137 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2448961.f_39.f_140[iVar6] = 0;
		iVar6++;
	}
	Global_2448961.f_39.f_352 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2448961.f_39.f_355[iVar6] = 0;
		Global_2448961.f_39.f_370[iVar6] = 0;
		Global_2448961.f_39.f_400[iVar6 /*6*/] = { Var0 };
		Global_2448961.f_39.f_385[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2448961.f_39.f_44[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2448961.f_39.f_506 = 0;
			Global_2448961.f_39.f_507 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2448961.f_39.f_514[iVar6] = -1;
				Global_2448961.f_39.f_520[iVar6] = -1;
				iVar6++;
			}
			Global_2448961.f_39.f_55 = 0;
			Global_2448961.f_39.f_12 = { Var0 };
			Global_2448961.f_39.f_59 = 0;
			Global_2448961.f_39.f_500 = { 0f, 0f, 0f };
			Global_2448961.f_39.f_503 = { 0f, 0f, 0f };
			Global_2448961.f_39.f_58 = 0;
			Global_2448961.f_39.f_57 = 0;
			Global_2448961.f_39.f_1 = -1;
			Global_2448961.f_39.f_526 = -1;
		}
	}
}

void func_679()
{
	Global_2457255.f_8 = 0;
	Global_2457255.f_7 = 0;
}

void func_680()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x393E9918BC37548A())
	{
		return;
	}
	iVar0 = unk_0xFC85EED762168EC0();
	iVar1 = unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(Global_968149, unk_0x169A8AC9F93C2727()));
	unk_0x5BF29846C6527C54(Global_4456448, &(Global_4456448.f_154647), iVar0, iVar1, Global_968149.f_1);
	func_681();
}

void func_681()
{
	Global_968149 = 0;
	Global_968149.f_1 = 0;
}

bool func_682()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 148;
}

bool func_683()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 5;
}

int func_684()
{
	if (func_339() && unk_0xA51CBC95AC3A4B14())
	{
		return 1;
	}
	return 0;
}

void func_685()
{
	Global_1663058.f_1774 = 0;
}

void func_686()
{
	Global_2448961.f_736 = 0;
}

bool func_687()
{
	return Global_2448961.f_736;
}

void func_688()
{
	Global_19671 = 0;
	func_689();
}

void func_689()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
	}
}

bool func_690(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_691(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

int func_692(int iParam0)
{
	if (iParam0 == Global_262145.f_5008[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_5008[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_5008[2])
	{
		return 2;
	}
	else if (iParam0 == Global_262145.f_5008[3])
	{
		return 3;
	}
	else if (iParam0 == Global_262145.f_5008[4])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_5008[5])
	{
		return 5;
	}
	else if (iParam0 == Global_262145.f_5008[6])
	{
		return 6;
	}
	else if (iParam0 == Global_262145.f_5008[7])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_5008[8])
	{
		return 8;
	}
	else if (iParam0 == Global_262145.f_5008[9])
	{
		return 9;
	}
	else if (iParam0 == Global_262145.f_5008[10])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_5008[11])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_5008[12])
	{
		return 12;
	}
	else if (iParam0 == Global_262145.f_5008[13])
	{
		return 13;
	}
	else if (iParam0 == Global_262145.f_5008[14])
	{
		return 14;
	}
	else if (iParam0 == Global_262145.f_5008[15])
	{
		return 15;
	}
	return -1;
}

void func_693()
{
	Global_2448961.f_600 = 0;
}

void func_694()
{
	struct<14> Var0;
	int iVar14;
	
	Var0.f_4 = -1;
	iVar14 = unk_0x7C7787D2D7139A85();
	if (iVar14 != -1)
	{
		Global_1627738[iVar14 /*38*/] = { Var0 };
	}
}

void func_695()
{
	Global_1654084.f_7 = 0;
}

void func_696(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2448961.f_569.f_3 = { Var0 };
	Global_2448961.f_569 = 0;
	Global_2448961.f_569.f_1 = 0;
	Global_2448961.f_569.f_12 = 0;
	if (bParam0)
	{
		Global_2448961.f_569.f_2 = 0;
		Global_2448961.f_569.f_13 = 0;
		Global_2448961.f_569.f_14 = 0;
		Global_2394835 = 0;
		if (bParam1)
		{
			Global_2448961.f_569.f_9 = 0;
			Global_2448961.f_569.f_10 = 0;
			Global_2448961.f_569.f_11 = 0;
			Global_2448961.f_569.f_16 = -1;
		}
		if (iParam2 && !unk_0xA51CBC95AC3A4B14())
		{
			Global_1654109.f_1347 = 0;
			Global_1654109.f_1348 = 0;
		}
		if (unk_0x7C7787D2D7139A85() != -1)
		{
			Global_1627738[unk_0x7C7787D2D7139A85() /*38*/].f_2 = 0;
			Global_1627738[unk_0x7C7787D2D7139A85() /*38*/] = 0;
		}
	}
}

void func_697()
{
	Global_2448961.f_569.f_12 = 0;
}

bool func_698()
{
	return Global_2448961.f_569.f_9 > 0;
}

var func_699()
{
	return Global_2448961.f_569.f_12;
}

void func_700()
{
	unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_99.f_32), 11);
}

void func_701()
{
	unk_0x3B76114EC84D5812(&(Global_1627738[unk_0x7C7787D2D7139A85() /*38*/].f_29), 3);
}

void func_702()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1575105[iVar0] = 0;
		iVar0++;
	}
}

void func_703()
{
	int iVar0;
	
	iVar0 = unk_0x7C7787D2D7139A85();
	if (iVar0 != -1)
	{
		Global_1627738[iVar0 /*38*/].f_5 = 0;
	}
}

void func_704()
{
	Global_2459467 = 0;
	Global_2459468 = 0;
	Global_2459469 = 0;
	Global_2459470 = 0;
}

void func_705()
{
	Global_2448961.f_39.f_56 = 0;
}

void func_706()
{
	Global_2448961.f_39.f_58 = 0;
}

void func_707()
{
	if (unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) != Global_1384382)
	{
		if (unk_0x18638AA8DFAAE787() == 0 && Global_1384382 == 3)
		{
			Global_1384382 = unk_0x328DC5757076B0D5(0);
		}
		unk_0x58AF82C8FFCE212D(unk_0x18638AA8DFAAE787(), Global_1384382);
	}
}

int func_708()
{
	if (func_709() != 2)
	{
		return 0;
	}
	if (!func_670() && !((Global_1670925 || Global_1312791) && func_562()))
	{
		return 0;
	}
	return 1;
}

int func_709()
{
	return Global_2448961.f_39.f_40;
}

bool func_710()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961.f_569.f_1, 0);
}

void func_711(int iParam0)
{
	if (unk_0xE434AB6E3DE89861())
	{
		unk_0x1CE82CC37B4CB2C3(iParam0);
	}
}

void func_712(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x45F54089C0F6B392();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_1590446[iVar0 /*871*/].f_203, 0))
			{
				unk_0xA1E7A40E1F56E511(&(Global_1590446[iVar0 /*871*/].f_203), 0);
			}
		}
		else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iVar0 /*871*/].f_203, 0))
		{
			unk_0x3B76114EC84D5812(&(Global_1590446[iVar0 /*871*/].f_203), 0);
		}
	}
}

void func_713()
{
	unk_0x3B76114EC84D5812(&(Global_2448961.f_2), 31);
}

void func_714()
{
	Global_2437549.f_1893.f_803 = func_140();
}

void func_715()
{
	Global_2448961.f_784 = 0;
}

void func_716()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_719(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1671392.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_718();
	func_717();
	Global_1671392 = 0;
}

void func_717()
{
	Global_1671392.f_4 = 0;
}

void func_718()
{
	Global_1671392.f_3 = 0;
}

void func_719(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1671392.f_5[iParam0 /*53*/] = { Var0 };
}

void func_720()
{
	unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18), 20);
}

void func_721(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_25(iParam0, 18, 1))
		{
			func_65(iParam0, 18, 1);
		}
	}
	else if (func_25(iParam0, 18, 1))
	{
		func_63(iParam0, 18, 1);
	}
}

void func_722()
{
	unk_0x3B76114EC84D5812(&(Global_2531497.f_795), 3);
}

void func_723(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_224();
	if (bParam0)
	{
		func_314(1);
		unk_0x0D23E3918F7AF11B(1);
	}
	unk_0x1C9DBC28A851F0A6();
	func_217();
	unk_0x34E9B3E45F66255B(0);
	func_253(0, 1, 1, 0, 0, bParam2);
	func_729();
	func_205(12, 0, -1);
	func_206(1);
	unk_0x85417D6445C532FC(0, -1);
	unk_0x4BEE8AE599A4A300(1);
	unk_0x5AC8A91A3FD00B39(1);
	func_728();
	unk_0x597D844D285B9272(1);
	if (unk_0x393E9918BC37548A())
	{
		if (bParam3)
		{
			if (unk_0xED4D72D338501085())
			{
				unk_0xBB40A8EBAAC73C4E(0, 0);
			}
		}
	}
	func_260(0);
	if (((((func_124() == 0 && func_727() == 0) && iParam1) && !func_257(unk_0x7C7787D2D7139A85())) && !unk_0xC53766CB7176C7C8()) && func_334())
	{
		func_361(unk_0x7C7787D2D7139A85(), 1, 0, 0);
	}
	Global_2437549.f_3732 = 0;
	func_724();
}

void func_724()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x393E9918BC37548A() && func_199(&Global_2540121))
	{
		if (!func_198(&Global_2540121, 3500, 1) || unk_0x11B5CC0E82921069(unk_0x7C7787D2D7139A85()))
		{
			if (!func_726())
			{
				if (unk_0x260395BA7F0C83CB())
				{
					func_343(&Global_2540121, 1, 0);
				}
				else if (!func_255(unk_0x7C7787D2D7139A85(), 0))
				{
					if (unk_0x411C065ADB822CD9(unk_0x0FA8183DAD2B3203(), 1992968846) != 1 && unk_0x411C065ADB822CD9(unk_0x0FA8183DAD2B3203(), 1992968846) != 0)
					{
						unk_0xF5D56B515F6ECFBE(1);
						unk_0x0E1BB7EDC8E895D0(unk_0x7C7787D2D7139A85(), 1);
					}
					unk_0x807E0DA92C4670DB(unk_0x0FA8183DAD2B3203(), 255, 0);
				}
			}
			else
			{
				func_343(&Global_2540121, 1, 0);
			}
		}
		else
		{
			if (unk_0x393E9918BC37548A())
			{
				unk_0x9271550EF2D47E17(unk_0x0FA8183DAD2B3203());
			}
			func_197(&Global_2540121);
		}
	}
	if (Global_2540125 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_2540125, iVar0))
			{
				iVar1 = unk_0x0C98179F08C6DA4F(iVar0);
				if (func_14(iVar1, 1, 1))
				{
					func_725(iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_725(int iParam0)
{
	if (unk_0xA2BC31158C8CEFD2(Global_2540125, iParam0) && unk_0x393E9918BC37548A())
	{
		if (!func_198(&(Global_2540126[iParam0 /*2*/]), 3500, 1) || unk_0x11B5CC0E82921069(iParam0))
		{
			if (!func_726())
			{
				if (unk_0x260395BA7F0C83CB())
				{
					func_343(&(Global_2540126[iParam0 /*2*/]), 1, 0);
				}
				else if (!func_255(iParam0, 0))
				{
					unk_0x0E1BB7EDC8E895D0(iParam0, 1);
					if (!unk_0xF4B969E0807E76C7(unk_0x23625FE58BACEBFD(iParam0), 0))
					{
						unk_0x807E0DA92C4670DB(unk_0x23625FE58BACEBFD(iParam0), 255, 0);
					}
				}
			}
			else
			{
				func_343(&(Global_2540126[iParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!unk_0xF4B969E0807E76C7(unk_0x23625FE58BACEBFD(iParam0), 0))
			{
				unk_0x9271550EF2D47E17(unk_0x23625FE58BACEBFD(iParam0));
			}
			func_197(&(Global_2540126[iParam0 /*2*/]));
			unk_0x3B76114EC84D5812(&Global_2540125, iParam0);
		}
	}
}

int func_726()
{
	if (unk_0x33D7ABC47E81DCF9() || unk_0xED4D72D338501085())
	{
		return 1;
	}
	return 0;
}

bool func_727()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 7);
}

void func_728()
{
	Global_22211.f_5 = 0;
}

void func_729()
{
	func_206(1);
	func_205(4, 0, -1);
	func_205(6, 0, -1);
	func_205(7, 0, -1);
	func_205(3, 0, -1);
	func_205(1, 0, -1);
	func_205(2, 0, -1);
	func_205(11, 0, -1);
	func_205(13, 0, -1);
	func_205(14, 0, -1);
	func_205(16, 0, -1);
}

void func_730(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312447)
	{
		if (!func_764())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574634[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_762(unk_0x7C7787D2D7139A85(), bParam0);
	iVar2 = func_760(iVar1, bParam0);
	if (!func_759(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574634[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574634[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 255)
	{
		iVar3 = func_758(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_756(iVar4))
			{
				func_747(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_741(func_742(59, 0, 0), 0);
	func_739(func_742(135, 0, 0), 1);
	func_738(func_742(22, 0, 0), func_742(73, 0, 0));
	if (func_764())
	{
		if (func_499(77, -1))
		{
			func_737(1);
			func_736(1);
		}
	}
	if (func_735() || func_734())
	{
		func_32(77, 1, -1, 1);
		if (unk_0x393E9918BC37548A())
		{
			func_731(28, 1, 0);
			func_731(29, 1, 0);
			func_731(30, 1, 0);
			func_731(31, 1, 0);
			func_731(32, 1, 0);
			func_731(33, 1, 0);
			func_731(34, 1, 0);
			func_731(35, 1, 0);
			func_731(36, 1, 0);
			func_731(37, 1, 0);
			func_731(38, 1, 0);
		}
	}
	if (func_742(21, 0, 0))
	{
		unk_0xD9EC1E89A56A4E61(0);
	}
	Global_968399 = 0;
}

void func_731(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_25(iParam0, 0, 0))
		{
			if (iParam2 && Global_98721.f_18[iParam0])
			{
				if (func_733(iParam0) == 3 && !func_24(iParam0))
				{
					func_732(iParam0);
					func_65(iParam0, 0, 0);
					func_63(iParam0, 1, 0);
					func_402(iParam0);
				}
				else
				{
					func_65(iParam0, 1, 0);
					func_402(iParam0);
				}
			}
			else
			{
				func_65(iParam0, 0, 0);
				func_63(iParam0, 1, 0);
				func_402(iParam0);
			}
		}
		else
		{
			func_63(iParam0, 1, 0);
			func_402(iParam0);
		}
	}
	else if (func_25(iParam0, 0, 0))
	{
		func_63(iParam0, 0, 0);
		func_63(iParam0, 1, 0);
		func_402(iParam0);
	}
}

void func_732(int iParam0)
{
	if (Global_98721.f_18[iParam0])
	{
		func_65(iParam0, 10, 1);
		func_65(iParam0, 19, 1);
	}
}

int func_733(int iParam0)
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
		
		case 50:
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
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

bool func_734()
{
	return Global_1312861;
}

bool func_735()
{
	return Global_1312863;
}

void func_736(bool bParam0)
{
	if (!unk_0x393E9918BC37548A())
	{
		return;
	}
	func_731(28, bParam0, 0);
	func_731(30, bParam0, 0);
	func_731(31, bParam0, 0);
	func_731(33, bParam0, 0);
	func_731(34, bParam0, 0);
	func_731(38, bParam0, 0);
}

void func_737(bool bParam0)
{
	if (!unk_0x393E9918BC37548A())
	{
		return;
	}
	func_731(29, bParam0, 0);
	func_731(32, bParam0, 0);
	func_731(36, bParam0, 0);
	func_731(35, bParam0, 0);
	func_731(37, bParam0, 0);
}

void func_738(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x393E9918BC37548A())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_731(0, bParam0, 1);
	func_731(1, bParam0, 1);
	func_731(2, bParam0, 1);
	func_731(3, bParam0, 1);
	func_731(4, bParam0, 1);
	func_731(5, bParam0, 1);
	func_731(6, bParam0, 1);
	func_731(7, bParam0, bVar0);
	func_731(8, bParam0, 1);
	func_731(9, bParam0, 1);
	func_731(10, bParam0, 1);
	func_731(11, bParam0, 1);
	func_731(12, bParam0, bVar0);
	func_731(13, bParam0, 1);
	func_731(21, bParam0, 1);
	func_731(14, bParam0, 1);
	func_731(15, bParam0, 1);
	func_731(16, bParam0, 1);
	func_731(17, bParam0, 1);
	func_731(18, bParam0, 1);
	func_731(19, bParam0, 1);
	func_731(20, bParam0, 1);
	func_731(22, bParam0, 1);
	func_731(23, bParam0, 1);
	func_731(24, bParam0, 1);
	func_731(25, bParam0, 1);
	func_731(26, bParam0, 1);
	func_731(27, bParam0, 1);
	func_403(1, !bParam1);
	if (!bVar0)
	{
		func_732(12);
	}
}

void func_739(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x393E9918BC37548A())
	{
		return;
	}
	uVar0 = func_740(0);
	if (Global_262145.f_63 == 1 && func_742(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_731(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_24(44))
		{
			func_732(44);
		}
	}
	if (bParam0)
	{
		if (func_619(0) > 1)
		{
			unk_0xA1E7A40E1F56E511(&(Global_2531497.f_1735), 10);
		}
	}
}

int func_740(bool bParam0)
{
	var uVar0;
	
	if (Global_1312447)
	{
		return 1;
	}
	if (func_735())
	{
		return 1;
	}
	if (func_734())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_2531497.f_1726, 26))
		{
			uVar0 = func_26(1191, -1, 0);
			if (!unk_0xA2BC31158C8CEFD2(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_499(122, -1);
}

void func_741(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x393E9918BC37548A())
	{
		return;
	}
	uVar0 = func_740(0);
	func_731(39, bParam0, 0);
	func_731(40, bParam0, 0);
	func_731(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_731(43, bParam0, 0);
		func_731(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_24(39))
		{
			func_732(39);
		}
		if (!func_24(40))
		{
			func_732(40);
		}
		if (!func_24(41))
		{
			func_732(41);
		}
		if (!func_24(42))
		{
			func_732(42);
		}
		if (!func_24(43))
		{
			func_732(43);
		}
	}
}

bool func_742(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_744(unk_0x7C7787D2D7139A85(), 85))
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
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_735() || func_734())
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
			if (func_743())
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
	return unk_0xA2BC31158C8CEFD2(Global_1574634[iVar1], iVar0);
}

int func_743()
{
	var uVar0;
	
	if (Global_1312447)
	{
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_1731, 23))
	{
		return 1;
	}
	if (func_735())
	{
		return 1;
	}
	if (func_734())
	{
		return 1;
	}
	uVar0 = Global_1384267[func_27(-1)];
	if (unk_0xA2BC31158C8CEFD2(uVar0, 7))
	{
		unk_0xA1E7A40E1F56E511(&(Global_2531497.f_1731), 23);
		return 1;
	}
	return 0;
}

bool func_744(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_764())
	{
		return 0;
	}
	if (func_746())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_745(iParam1);
	iVar1 = uVar0;
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_725, iVar1);
}

int func_745(int iParam0)
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
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_746()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_146, 3);
}

void func_747(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_755(-1))
			{
				if (!func_764())
				{
					return;
				}
			}
			if (!func_755(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_754() && !func_753())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_752())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_755(-1))
				{
					if (!func_748())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0xA1E7A40E1F56E511(&(Global_1574634[iVar1]), iVar0);
	}
}

int func_748()
{
	var uVar0;
	
	if (func_751(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	uVar0 = Global_1384267[func_27(-1)];
	if (unk_0xA2BC31158C8CEFD2(uVar0, 2))
	{
		func_749(1);
		return 1;
	}
	return 0;
}

void func_749(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142, 25))
		{
			func_750(unk_0x7C7787D2D7139A85(), 12);
			unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 25);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142, 25))
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142), 25);
	}
}

void func_750(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_745(iParam1);
	iVar1 = uVar0;
	unk_0xA1E7A40E1F56E511(&(Global_1590446[iParam0 /*871*/].f_725), iVar1);
}

bool func_751(int iParam0)
{
	if (func_735())
	{
		return 1;
	}
	if (func_734())
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_142, 25);
}

int func_752()
{
	var uVar0;
	
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_1731, 6))
	{
		return 1;
	}
	uVar0 = Global_1384267[func_27(-1)];
	if (unk_0xA2BC31158C8CEFD2(uVar0, 0))
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_2531497.f_1731, 6))
		{
			unk_0xA1E7A40E1F56E511(&(Global_2531497.f_1731), 6);
		}
		return 1;
	}
	if (func_735())
	{
		return 1;
	}
	if (func_734())
	{
		return 1;
	}
	return 0;
}

bool func_753()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_146, 7);
}

int func_754()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_735())
	{
		return 1;
	}
	if (func_734())
	{
		return 1;
	}
	return func_499(121, -1);
}

bool func_755(int iParam0)
{
	return func_499(123, iParam0);
}

int func_756(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_735())
	{
		return 1;
	}
	if (func_734())
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
			uVar0 = func_26(func_757(iParam0), -1, 0);
			if (unk_0xA2BC31158C8CEFD2(uVar0, iVar1))
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

int func_757(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1200;
		
		case 1:
			return 1201;
		
		case 2:
			return 1202;
		
		case 3:
			return 1203;
		
		case 4:
			return 1204;
		
		case 5:
			return 1206;
		
		case 6:
			return 3815;
		
		case 7:
			return 4018;
		
		case 8:
			return 5472;
		
		default:
	}
	return 1200;
}

int func_758(int iParam0)
{
	if (func_735())
	{
		return 1;
	}
	if (func_734())
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
		case 236:
			if (!func_755(-1))
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
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
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

int func_759(int iParam0)
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_735())
	{
		return 1;
	}
	if (func_734())
	{
		return 1;
	}
	return func_499(119, iParam0);
}

int func_760(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_761(iParam0, 0);
}

int func_761(int iParam0, int iParam1)
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
		if (Global_290594[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_290594[iVar3] < iParam0)
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

int func_762(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_763(iParam0);
}

int func_763(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x7C7787D2D7139A85())
			{
				return Global_1384279[func_27(-1)];
			}
			else if (func_60(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_27(-1)];
	}
	return 0;
}

int func_764()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_735())
	{
		return 1;
	}
	if (func_734())
	{
		return 1;
	}
	return func_499(120, -1);
}

int func_765()
{
	var uVar0;
	
	func_770(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			return 1;
		}
	}
	if (func_482())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_769())
	{
		return 1;
	}
	if (func_768(159))
	{
		if (!func_767())
		{
			return 1;
		}
	}
	if (func_768(157))
	{
		return 1;
	}
	if (!unk_0x2A983C9CF4EE0D5E())
	{
		return 1;
	}
	if (func_766() != 0)
	{
		if (unk_0x222F76006659B0EB(func_766()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_766()
{
	switch (func_30())
	{
		case 0:
			return func_371();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_767()
{
	return Global_2448961.f_598;
}

int func_768(int iParam0)
{
	if (unk_0xD076BFB919B20653(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_769()
{
	return Global_2458999;
}

void func_770(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEC6B468B6F580489(1))
	{
		iVar1 = unk_0x87C4D2EB1080B8EA(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x3C1EC42A2CC175C5(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1773456834:
					func_771(iVar0);
					break;
				
				case -498955166:
					unk_0x3C1EC42A2CC175C5(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1934809180)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_771(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 3))
	{
		if (func_14(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x23625FE58BACEBFD(Var0.f_1);
			if (unk_0xD4B321D9096B01FC(uVar3))
			{
				if (unk_0x5294582CE404D3F4(iVar3, 0))
				{
					uVar4 = unk_0x4D57D3E5ECE15A41(iVar3, 0);
					if (unk_0x3D65AB2C3D476E32(uVar4, Var0.f_2) && unk_0xF77CF4BC35906B30())
					{
						if (func_772(uVar4, &bVar5))
						{
							unk_0x302E0AC3BB715211(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xF25956700ADFD77F(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_772(int iParam0, var uParam1)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (!unk_0x00123AB82C5FAC28(iParam0))
		{
			if (unk_0xDCDE4069CE0EA4A6(iParam0))
			{
				if (!unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(iParam0)))
				{
					unk_0xE5C667CF3B4642D2(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x532AFD85DAA91F63(iParam0, 0))
		{
			if (unk_0x77FF1FAF6F41CA71(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_773()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_774(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20)
{
	var uVar0;
	
	unk_0x4CF6FBF2580A447D(2, 0, Param0.f_16);
	func_779(0, -1, 0);
	unk_0xCCD47D736BFD5DE3(&Local_568, 7);
	unk_0xFF584A1B7842F821(&Local_740, 11);
	Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] = 16;
	if (bLocal_759)
	{
		if (!unk_0x260395BA7F0C83CB() && !unk_0xA710300CD13D2877())
		{
			unk_0x5800A2599806C837(800);
		}
		if (!unk_0xEDC68E498B715C56())
		{
			if (!unk_0xAC56C3809B2CBED6())
			{
				uVar0 = unk_0x7C7787D2D7139A85() + 32;
				unk_0x8E0A38503499E3D2(1, uVar0);
				func_209(1);
			}
		}
	}
	unk_0x98B3F83A2664256A(1);
	unk_0xA019A9258930EC41(1);
	if (!func_778())
	{
		func_413(0);
	}
	unk_0x50E03C7D74E352C4(0);
	func_721(iLocal_93, 1);
	func_415(1);
	if (!bLocal_759)
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			func_361(unk_0x7C7787D2D7139A85(), 1, 0, 0);
		}
	}
	Global_2531497.f_1726 = 0;
	unk_0xEAD374C7213329E9(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, 0, 0);
	func_777();
	func_775();
	Local_740[unk_0x2E40EEA43EF34BD6() /*5*/] = 0;
}

void func_775()
{
	unk_0x4E3A7A61D9B482C5(1);
	func_776(1, -1);
	unk_0x607E00E07DED5E30(1);
	if (func_499(133, -1))
	{
		func_32(133, 0, -1, 1);
	}
	Global_2448961.f_643 = 1;
}

void func_776(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x86415D741BCBD40F(0, iParam1);
			break;
		
		default:
			uVar1 = func_429(iParam1);
			iVar0 = unk_0xFD4B2AAE20AA1CBB(uVar1);
			if (unk_0xA2BC31158C8CEFD2(iVar0, iParam0))
			{
				unk_0x3B76114EC84D5812(&iVar0, iParam0);
				unk_0x86415D741BCBD40F(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_32(120, 0, iParam1, 1);
			func_32(124, 0, iParam1, 1);
			func_32(115, 0, iParam1, 1);
			func_32(119, 0, iParam1, 1);
			break;
	}
}

void func_777()
{
	unk_0xA12E1659DEF57244(&uLocal_753);
	unk_0x2DCF88AC859255F3(0, 0, 0);
	unk_0xD65F7D9CC109BCC8(0, 17.0693f, -1115.935f, 28.7968f, 0);
	unk_0x15A7B753872B3CE3(uLocal_753);
}

int func_778()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x393E9918BC37548A())
		{
			return 0;
		}
		if (unk_0x7A22E0DA3B8BAF4B())
		{
			return 1;
		}
		if (func_482())
		{
			return 0;
		}
		if (func_768(157))
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

int func_779(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x306B26A377F9A5BE();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_780();
			}
			else
			{
				return 0;
			}
		}
		if (!func_394())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x393E9918BC37548A())
				{
					if (!bParam2)
					{
						func_780();
					}
					else
					{
						return 0;
					}
				}
				if (func_482())
				{
					if (!bParam2)
					{
						func_780();
					}
					else
					{
						return 0;
					}
				}
				if (func_768(157))
				{
					if (!bParam2)
					{
						func_780();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xA2E986F74092E569())
			{
				if (!bParam2)
				{
					func_780();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x306B26A377F9A5BE();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			if (!bParam2)
			{
				func_780();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xA2E986F74092E569())
	{
		if (!bParam2)
		{
			func_780();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_780()
{
	unk_0x9C9E32388A7886A2();
}

