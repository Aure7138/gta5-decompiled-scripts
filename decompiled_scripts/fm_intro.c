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
	if (unk_0x44243F2E2F58B8E3())
	{
		func_712(ScriptParam_0);
	}
	while (true)
	{
		func_711();
		if (func_703())
		{
			func_375(1);
		}
		if (func_372(0))
		{
			Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/] = 3;
		}
		if (func_371(unk_0xA651DA0BC9FD8FA4()) > -1)
		{
			unk_0x41C542213B94067C(unk_0x8CFC7D6E1DA5D304());
		}
		switch (func_370(unk_0xA651DA0BC9FD8FA4()))
		{
			case 0:
				if (!unk_0xB03A1684359C50A1(uLocal_751, 10))
				{
					if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
					{
						unk_0xD2A9C3F486236CC5(&uLocal_751, 10);
					}
				}
				unk_0x8E058779F430F4D7("FMINT", 0);
				if (func_369() && unk_0x04BF76BDE53874AF("FMINT", 0))
				{
					if (func_368() > 0)
					{
						func_367(&uLocal_403, 1, 0, "Lamar", 0, 1);
						func_366(0);
						func_365(4, 1);
						func_365(1, 1);
						func_365(0, 1);
						func_365(2, 1);
						func_365(3, 0);
						func_363(iLocal_93, 1);
						Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/] = 2;
						if (bLocal_759)
						{
							Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_2 = -2;
						}
						else
						{
							Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_368() == 4)
				{
					Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/] = 4;
				}
				if (func_368() == 6 && Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/] < 4)
				{
					Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_344();
				func_20();
				if (func_368() == 4)
				{
					Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/] = 4;
				}
				if (func_368() == 6 && Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/] < 4)
				{
					Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/] = 5;
				break;
			
			case 5:
				func_18(&(Local_568.f_5));
				if (func_17(&(Local_568.f_5)))
				{
					Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_10(iLocal_92);
				Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/] = 6;
			
			case 6:
				func_375(0);
				break;
		}
		if (unk_0xF67B871D7588B9D9())
		{
			switch (func_368())
			{
				case 0:
					Local_568.f_0 = 2;
					break;
				
				case 2:
					func_9();
					func_8();
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
		if (unk_0xB03A1684359C50A1(Local_568.f_1, 1))
		{
			return 1;
		}
	}
	else if (unk_0xB03A1684359C50A1(Local_568.f_1, 2))
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
	if (unk_0xF67B871D7588B9D9())
	{
		if (!unk_0xB03A1684359C50A1(Local_568.f_1, 3))
		{
			if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_4, 0))
			{
				unk_0xD2A9C3F486236CC5(&(Local_568.f_1), 3);
			}
		}
		if (!unk_0xB03A1684359C50A1(Local_568.f_1, 4))
		{
			if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_4, 2))
			{
				unk_0xD2A9C3F486236CC5(&(Local_568.f_1), 4);
			}
		}
		if (!unk_0xB03A1684359C50A1(Local_568.f_1, 5))
		{
			if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 3))
			{
				unk_0xD2A9C3F486236CC5(&(Local_568.f_1), 5);
			}
		}
		if (!unk_0xB03A1684359C50A1(Local_568.f_1, 6))
		{
			if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 4))
			{
				unk_0xD2A9C3F486236CC5(&(Local_568.f_1), 6);
			}
		}
		if (!unk_0xB03A1684359C50A1(Local_568.f_1, 7))
		{
			if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 5))
			{
				unk_0xD2A9C3F486236CC5(&(Local_568.f_1), 7);
			}
		}
		if (!unk_0xB03A1684359C50A1(Local_568.f_1, 8))
		{
			if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 6))
			{
				unk_0xD2A9C3F486236CC5(&(Local_568.f_1), 8);
			}
		}
		switch (Local_568.f_2)
		{
			case 0:
				if (unk_0xB03A1684359C50A1(Local_568.f_1, 3))
				{
					if (func_4(&(Local_568.f_3), &(Local_568.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_575))
					{
						unk_0x0F3F86C855582784(unk_0xFA62333764BA8F5D(Local_568.f_3), 1, 0, 0);
						Local_568.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0xB03A1684359C50A1(Local_568.f_1, 4))
				{
					Local_568.f_2 = 1;
				}
				break;
			
			case 1:
				if (unk_0xB03A1684359C50A1(Local_568.f_1, 5))
				{
					Local_568.f_2 = 3;
				}
				break;
			
			case 3:
				if (unk_0xB03A1684359C50A1(Local_568.f_1, 6))
				{
					Local_568.f_2 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB03A1684359C50A1(Local_568.f_1, 7))
				{
					Local_568.f_2 = 5;
				}
				break;
			
			case 5:
				if (unk_0xB03A1684359C50A1(Local_568.f_1, 8))
				{
					Local_568.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam5, var uParam6)
{
	if (func_7(Global_2512581.f_779) && func_7(Global_2512581.f_780))
	{
		if (!unk_0x49E68AAD93AADF10(*uParam0))
		{
			if (func_6(uParam0, Global_2512581.f_779, Param2, fParam5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				unk_0xF0EDB5B34363C3EB(unk_0xFA62333764BA8F5D(*uParam0), 1);
			}
		}
		if (!unk_0x49E68AAD93AADF10(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2512581.f_780, -1, 1, 1, 1))
			{
				unk_0x40E2910BAF39B1C7(unk_0x5FC7C92D1FA1DAEC(*uParam1), 1);
				unk_0x419C9117019F2E5A(Global_2512581.f_779);
				unk_0x419C9117019F2E5A(Global_2512581.f_780);
				unk_0xB05881241072FEE6(unk_0xFA62333764BA8F5D(*uParam0), 0);
				unk_0xEE12C3935551C9B1(unk_0x5FC7C92D1FA1DAEC(*uParam1), 1);
				func_367(uParam6, 8, unk_0x5FC7C92D1FA1DAEC(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!unk_0x49E68AAD93AADF10(*uParam0) || !unk_0x49E68AAD93AADF10(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x5A27D0B71FCE8B09(1))
	{
		return 0;
	}
	if (!unk_0x49E68AAD93AADF10(uParam1))
	{
		return 0;
	}
	if (!unk_0xC4B84EB67F78C1F0(unk_0xFA62333764BA8F5D(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x69B3692B4761803C(unk_0xC52E83A4C0F88DAB(unk_0xFA62333764BA8F5D(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x49E68AAD93AADF10(*uParam0))
	{
		unk_0xB05881241072FEE6(unk_0x5FC7C92D1FA1DAEC(*uParam0), iParam7);
		if (unk_0x2A7F482ED04D9A1A(unk_0x5FC7C92D1FA1DAEC(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x81E21F3D8AF3CEC2(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	float fVar1;
	
	if (!unk_0x274CFAE26B786CB6(1))
	{
		return 0;
	}
	fVar1 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar1 = 20f;
	}
	if (bParam11)
	{
		unk_0xE54597236B7D8C63(Param2, fVar1, 0, 0, 0, 0, 0, 0);
	}
	uVar0 = unk_0x3064CCF56C6C32BC(iParam1, Param2, fParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0x565DEBE7A0FD63C3(uVar0);
	Global_2512581.f_5849 = uVar0;
	if (unk_0x49E68AAD93AADF10(*uParam0))
	{
		if (bParam15)
		{
			unk_0xFE6B55E373059E87(uVar0, 1);
		}
		unk_0xB05881241072FEE6(uVar0, iParam10);
		if (unk_0x2A7F482ED04D9A1A(iVar0))
		{
			if (bParam8)
			{
				unk_0x81E21F3D8AF3CEC2(*uParam0, 1);
			}
			else
			{
				unk_0x81E21F3D8AF3CEC2(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0xB390A11FB93495B6(*uParam0, unk_0x8CFC7D6E1DA5D304(), 1);
			}
		}
		unk_0x0BF4E270537B1A96(iVar0, iParam9);
		unk_0xFE620BEABB8C5910(iVar0, 1);
		if (bParam12)
		{
			unk_0x4FC0DCE1F171F620(iVar0);
			unk_0xC6D32B0FDD8821E4(iVar0, 5, 5, 1f);
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
	unk_0x9016574B77A748EE(iParam0);
	return unk_0xEDFE27D1AEA0EA7F(iParam0);
}

void func_8()
{
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF02902C16AF3CA92())
	{
		if (unk_0x0CA6AB9C192005B8(unk_0xF4E7C3C6384793AA(iVar0)))
		{
			if (bLocal_757)
			{
				if (!unk_0xB03A1684359C50A1(Local_568.f_1, 2))
				{
					if (unk_0xB03A1684359C50A1(Local_740[iVar0 /*5*/].f_3, 2))
					{
						unk_0xD2A9C3F486236CC5(&(Local_568.f_1), 2);
					}
				}
			}
			else if (!unk_0xB03A1684359C50A1(Local_568.f_1, 1))
			{
				if (unk_0xB03A1684359C50A1(Local_740[iVar0 /*5*/].f_3, 1))
				{
					unk_0xD2A9C3F486236CC5(&(Local_568.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_10(int iParam0)
{
	if (!func_13(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		return;
	}
	if (!func_11(unk_0x8CFC7D6E1DA5D304()) == iParam0)
	{
		return;
	}
}

int func_11(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2422724[iParam0 /*420*/].f_1;
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
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
	if (Global_1595681[iParam0 /*678*/] == -1)
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
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_13.f_1, 0);
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= 1000)
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
		if (unk_0xF67B871D7588B9D9())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x44243F2E2F58B8E3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				*uParam0 = unk_0x5E1037C28AA2B562();
			}
		}
		else
		{
			*uParam0 = unk_0x5AFB8ED811F05E4D();
		}
		uParam0->f_1 = 1;
	}
}

void func_20()
{
	switch (func_371(unk_0xA651DA0BC9FD8FA4()))
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
	switch (iLocal_756)
	{
		case 0:
			if (!func_22(iLocal_93))
			{
				unk_0xD2A9C3F486236CC5(&(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3), 2);
				Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_2 = 99;
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
		return unk_0xB03A1684359C50A1(Global_92881.f_1322[iParam0], iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_28() == 0)
		{
			return unk_0xB03A1684359C50A1(func_24(func_27(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_668[iParam0], iParam1);
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
	uVar0 = Global_2522855[iParam0 /*3*/][func_25(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
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
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
		}
	}
	return iVar0;
}

int func_26()
{
	return Global_1312736;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7011;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7870;
}

int func_28()
{
	return Global_25233;
}

void func_29()
{
	int iVar0;
	
	if (func_184())
	{
		if (func_12(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			func_183(0);
		}
	}
	if (!func_182(&uLocal_393))
	{
		func_19(&uLocal_393, 0, 0);
	}
	if (!unk_0xB03A1684359C50A1(uLocal_751, 21))
	{
		unk_0xD2A9C3F486236CC5(&uLocal_751, 21);
	}
	if (!unk_0xB03A1684359C50A1(uLocal_751, 3))
	{
		if (!func_182(&uLocal_391))
		{
			func_19(&uLocal_391, 0, 0);
		}
		else if (unk_0xB03A1684359C50A1(uLocal_751, 21))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
				{
					if (func_181(&uLocal_391, 3000, 0))
					{
						unk_0xD2A9C3F486236CC5(&uLocal_751, 3);
					}
				}
			}
		}
		if (func_181(&uLocal_391, 40000, 0))
		{
			unk_0xD2A9C3F486236CC5(&uLocal_751, 3);
		}
	}
	else if (!unk_0xB03A1684359C50A1(uLocal_751, 16))
	{
		if (!unk_0x622E10ED992CEB95())
		{
			if (!unk_0xC83C302702976DCB())
			{
				unk_0xD2A9C3F486236CC5(&uLocal_751, 16);
				func_180(&uLocal_391);
			}
		}
	}
	if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_4, 2))
	{
		if (!func_182(&uLocal_397))
		{
			func_19(&uLocal_397, 0, 0);
		}
		else if (!unk_0xB03A1684359C50A1(uLocal_752, 1))
		{
			if (func_181(&uLocal_397, 10000, 0))
			{
				unk_0xD2A9C3F486236CC5(&uLocal_752, 1);
				func_180(&uLocal_397);
			}
		}
		else if (unk_0xB03A1684359C50A1(uLocal_751, 19))
		{
			if (!unk_0xB03A1684359C50A1(uLocal_751, 18))
			{
				if (!func_178() || func_181(&uLocal_391, 5000, 0))
				{
					func_177(0);
					unk_0xD2A9C3F486236CC5(&uLocal_751, 18);
					if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
					{
						unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 244, 0);
						unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 243, 0);
						unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 242, 0);
					}
				}
			}
		}
	}
	if (unk_0xB03A1684359C50A1(uLocal_751, 18))
	{
		if (!unk_0xB03A1684359C50A1(uLocal_751, 2))
		{
			if (unk_0xC8AB6A5E6C1E6613())
			{
				iVar0 = 0;
				unk_0xD2A9C3F486236CC5(&iVar0, 3);
				unk_0xD2A9C3F486236CC5(&iVar0, 4);
				unk_0xD2A9C3F486236CC5(&iVar0, 5);
				if (func_88(&uLocal_403, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_87(1);
					unk_0xD2A9C3F486236CC5(&uLocal_751, 2);
					if (!unk_0xB03A1684359C50A1(uLocal_751, 20))
					{
						func_78(19, 3, 1);
						unk_0xD2A9C3F486236CC5(&uLocal_751, 20);
					}
					if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
					{
						unk_0xC6FD5F4CF31458B8(unk_0x18F7BE9ACB7D08F4(), 1, 1);
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
					if (!unk_0xB03A1684359C50A1(uLocal_751, 12))
					{
						if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
						{
							unk_0xC6FD5F4CF31458B8(unk_0x18F7BE9ACB7D08F4(), 0, 1);
							unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 244, 1);
							unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 243, 1);
							unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 242, 1);
						}
						unk_0xD2A9C3F486236CC5(&uLocal_751, 12);
						func_19(&uLocal_395, 0, 0);
						func_19(&uLocal_399, 0, 0);
					}
				}
			}
		}
		if (unk_0xB03A1684359C50A1(uLocal_751, 12))
		{
			if (!unk_0xB03A1684359C50A1(uLocal_751, 17))
			{
				if (!unk_0xC83C302702976DCB())
				{
					func_70();
					unk_0xD2A9C3F486236CC5(&uLocal_751, 17);
					func_180(&uLocal_391);
				}
			}
			else if (!func_178())
			{
				if (!unk_0xB03A1684359C50A1(uLocal_751, 23))
				{
					if (func_181(&uLocal_399, 4500, 0))
					{
						unk_0xD2A9C3F486236CC5(&uLocal_751, 23);
						unk_0xD2A9C3F486236CC5(&(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3), 3);
					}
				}
				if (func_181(&uLocal_395, 15000, 0))
				{
					if (!unk_0xB03A1684359C50A1(uLocal_751, 22))
					{
						unk_0xD2A9C3F486236CC5(&uLocal_751, 22);
					}
				}
				if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) == 0)
				{
					if (unk_0xB03A1684359C50A1(uLocal_751, 14))
					{
						unk_0x62148293B793073B(&uLocal_751, 14);
					}
					if (!func_22(iLocal_93))
					{
						if (unk_0xB03A1684359C50A1(uLocal_751, 13))
						{
							unk_0x62148293B793073B(&uLocal_751, 13);
						}
						if (unk_0xB03A1684359C50A1(uLocal_751, 25) || (!unk_0xB03A1684359C50A1(uLocal_751, 25) && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)))
						{
							if (!unk_0xB03A1684359C50A1(uLocal_751, 0))
							{
								if (unk_0xB03A1684359C50A1(uLocal_751, 15))
								{
									unk_0x62148293B793073B(&uLocal_751, 15);
								}
								if (unk_0xE769D9B5158D0F11(Global_92881.f_215[iLocal_93]))
								{
									func_64("GET_AMMU", 0);
									unk_0xD2A9C3F486236CC5(&uLocal_751, 0);
									unk_0xD2A9C3F486236CC5(&uLocal_751, 25);
									if (unk_0xE769D9B5158D0F11(Global_92881.f_215[iLocal_93]))
									{
										if (!unk_0xB03A1684359C50A1(Global_2512581.f_778, 2))
										{
											unk_0x63EECA6600F1090E(Global_92881.f_215[iLocal_93], 1);
										}
										func_363(iLocal_93, 1);
									}
								}
							}
							else if (unk_0xB03A1684359C50A1(Global_2512581.f_778, 2))
							{
								if (unk_0xE769D9B5158D0F11(Global_92881.f_215[iLocal_93]))
								{
									if (!unk_0xB03A1684359C50A1(uLocal_751, 15))
									{
										unk_0x63EECA6600F1090E(Global_92881.f_215[iLocal_93], 0);
										unk_0xD2A9C3F486236CC5(&uLocal_751, 15);
									}
								}
							}
							else if (unk_0xE769D9B5158D0F11(Global_92881.f_215[iLocal_93]))
							{
								if (unk_0xB03A1684359C50A1(uLocal_751, 15))
								{
									unk_0x63EECA6600F1090E(Global_92881.f_215[iLocal_93], 1);
									unk_0x62148293B793073B(&uLocal_751, 15);
								}
							}
						}
					}
					else
					{
						if (unk_0xB03A1684359C50A1(uLocal_751, 0))
						{
							unk_0x62148293B793073B(&uLocal_751, 0);
						}
						if (!unk_0xB03A1684359C50A1(uLocal_751, 13))
						{
							func_64("GET_GUN", 0);
							func_63(1);
							unk_0xD2A9C3F486236CC5(&uLocal_751, 13);
						}
					}
				}
				else if (!unk_0xB03A1684359C50A1(uLocal_751, 14))
				{
					unk_0xEFF1F12403847394(1);
					if (unk_0xB03A1684359C50A1(uLocal_751, 0))
					{
						unk_0x62148293B793073B(&uLocal_751, 0);
					}
					if (unk_0xB03A1684359C50A1(uLocal_751, 13))
					{
						unk_0x62148293B793073B(&uLocal_751, 13);
					}
					if (unk_0xE769D9B5158D0F11(Global_92881.f_215[iLocal_93]))
					{
						unk_0x63EECA6600F1090E(Global_92881.f_215[iLocal_93], 0);
						unk_0xC3BBD8D349129F55(Global_92881.f_215[iLocal_93], 0);
						func_363(iLocal_93, 0);
					}
					func_64("LOSE_COP", 0);
					unk_0xD2A9C3F486236CC5(&uLocal_751, 14);
				}
			}
		}
	}
	else if (func_181(&uLocal_393, 300000, 0))
	{
		unk_0xD2A9C3F486236CC5(&uLocal_751, 18);
	}
	if (!unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 0))
	{
		if (((unk_0xBEF481E5CF03DC93(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_pistol"), 0) || unk_0xBEF481E5CF03DC93(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_combatpistol"), 0)) || unk_0xBEF481E5CF03DC93(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_appistol"), 0)) || unk_0xBEF481E5CF03DC93(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_microsmg"), 0))
		{
			if (func_61())
			{
				func_56(1);
				unk_0xD2A9C3F486236CC5(&(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3), 0);
				if (func_22(iLocal_93))
				{
				}
			}
		}
		else
		{
			func_42(400);
		}
	}
	else if (!unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 1))
	{
		if (!func_40())
		{
			unk_0xD2A9C3F486236CC5(&(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3), 1);
			func_33();
			func_32("FM_IHELP_AMMU", -1);
			if (!unk_0xB03A1684359C50A1(uLocal_751, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
				unk_0xD2A9C3F486236CC5(&uLocal_751, 31);
			}
			func_180(&uLocal_391);
			if (bLocal_757)
			{
				if (bLocal_758)
				{
					Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_2 = 3;
				}
				else
				{
					Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_31())
	{
		iVar0 = Global_2547154[iParam0 /*3*/][func_25(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0F1BF2DD8A1C0A68(iVar0, iParam1, iParam3);
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
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

void func_33()
{
	if (!func_39())
	{
		return;
	}
	if (!unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == Global_1312576.f_9)
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
	
	bVar0 = unk_0x44243F2E2F58B8E3();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xE92FCF3C05C2EF1D();
		Global_1312576.f_11 = unk_0xE92FCF3C05C2EF1D();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
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
		unk_0xE444E45D40243E87(&(Global_1312576.f_12));
		func_37();
		unk_0xF1591A76844D3AC1();
	}
}

void func_37()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3A12001DBF78DC62(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0x3A12001DBF78DC62(Global_1312576.f_52);
			unk_0x3A12001DBF78DC62(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x6F8D47F40E94DBED(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_57);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x6F8D47F40E94DBED(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_57);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_32));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_48));
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_32));
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
	unk_0x096CAD0A8332D384(&(Global_1312576.f_12));
	func_37();
	return unk_0x45CD208BAEE25DF4();
}

int func_39()
{
	if (Global_1312576 == 20)
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
	
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = func_53(unk_0x8CFC7D6E1DA5D304());
		if (iVar0 < iParam0)
		{
			if (func_52())
			{
				func_43(1734805203, (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				unk_0xA67E2E1BBE56F0CB((iParam0 - iVar0));
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
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
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
			func_44(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_44(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_52())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB1A4F3B337C17BB1(func_26()) || unk_0x84F9D738F354D65C())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457935)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x0F88B7BAE118271A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE91076F2B8E481C8(iVar4))
		{
			*uParam0 = func_51(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_50(1, iParam4);
			Global_4262414 = 0;
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
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_137.f_71), 0);
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
				unk_0x03E9246EC94148C2();
			}
		}
		else if (!bVar0)
		{
			unk_0xE5D55D650EDFDBAD(Global_4261865[iParam0 /*80*/]);
		}
		func_47(&(Global_4261865[iParam0 /*80*/]));
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
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
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
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_50(int iParam0, var uParam1)
{
	Global_2459106 = uParam1;
	Global_2459105 = iParam0;
}

int func_51(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_52())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = uParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = uParam2;
			Global_4261865[iVar0 /*80*/].f_7 = uParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = uParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x756DE011CEDBBD7E();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_52()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		return unk_0x7D2708796355B20B();
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
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return unk_0xF5AB78C0F4A0772B(-1);
		}
		else if (func_55(iParam0))
		{
			return Global_1595681[iParam0 /*678*/].f_211.f_3;
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
		return unk_0xB03A1684359C50A1(Global_2436169.f_1, iParam0);
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
		unk_0x62148293B793073B(&(Global_92881.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0x62148293B793073B(&uVar0, iParam1);
			func_59(func_27(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x62148293B793073B(&(Global_104551.f_668[iParam0]), iParam1);
	}
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD2A9C3F486236CC5(&(Global_92881.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0xD2A9C3F486236CC5(&uVar0, iParam1);
			func_59(func_27(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_668[iParam0]), iParam1);
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
		if (!unk_0xB03A1684359C50A1(Global_1786194, 19))
		{
			unk_0xD2A9C3F486236CC5(&Global_1786194, 19);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1786194, 19))
	{
		unk_0x62148293B793073B(&Global_1786194, 19);
	}
}

void func_64(char* sParam0, bool bParam1)
{
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return;
	}
	if (unk_0xA49B74E0C954F146(sParam0) > 23)
	{
		return;
	}
	if (func_68(sParam0))
	{
		return;
	}
	func_34();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0xFCA64981FEF7C913(), 32);
	Global_1312576.f_9 = unk_0x6E987D62C8535B6E(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_67();
	func_66(bParam1);
	func_65();
}

void func_65()
{
	unk_0xD2A9C3F486236CC5(&(Global_1312576.f_59), 1);
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD2A9C3F486236CC5(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x62148293B793073B(&(Global_1312576.f_59), 0);
}

void func_67()
{
	Global_1312576.f_10 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), 86400000);
	Global_1312576.f_11 = unk_0xE92FCF3C05C2EF1D();
}

bool func_68(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_69(sParam0);
	}
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return 0;
	}
	return unk_0x6E987D62C8535B6E(sParam0) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_12));
}

bool func_69(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return 0;
	}
	return unk_0x6E987D62C8535B6E(sParam0) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_16));
}

void func_70()
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { func_73(unk_0x8CFC7D6E1DA5D304()) };
	bVar13 = unk_0xA8AC70C7EA782CC4();
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
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 0, iParam1);
}

int func_72(var uParam0)
{
	if (unk_0x60D6796E6B9FD3DB())
	{
		if (unk_0xE906D9FB40E35957() && unk_0x9FDA5C5DFB3FE364(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_73(int iParam0)
{
	struct<13> Var0;
	
	unk_0xAFA03929DD14DF46(iParam0, &Var0, 13);
	return Var0;
}

bool func_74()
{
	return func_75();
}

bool func_75()
{
	return Global_1350816.f_40 == 3;
}

int func_76()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

int func_77(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_78(int iParam0, int iParam1, bool bParam2)
{
	Global_3009 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_80();
		if (iParam1 == 4)
		{
			Global_104551.f_28020[iParam0 /*29*/].f_12[0] = 1;
			Global_104551.f_28020[iParam0 /*29*/].f_12[1] = 1;
			Global_104551.f_28020[iParam0 /*29*/].f_12[2] = 1;
			Global_104551.f_28020[iParam0 /*29*/].f_24[0] = 1;
			Global_104551.f_28020[iParam0 /*29*/].f_24[1] = 1;
			Global_104551.f_28020[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_104551.f_28020[iParam0 /*29*/].f_12[iParam1] == 1 && Global_104551.f_28020[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_104551.f_28020[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_104551.f_28020[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_70852)
			{
				if (iParam1 != 4)
				{
					if (Global_14453 != iParam1)
					{
						Global_2982[iParam1 /*4*/] = { Global_104551.f_28020[iParam0 /*29*/].f_3 };
						Global_2999[iParam1] = 1;
						Global_3004[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14453)
					{
					}
					else
					{
						Global_2933[1 /*6*/] = { Global_104551.f_28020[iParam0 /*29*/].f_3 };
						Global_2933[1 /*6*/].f_5 = iParam1;
						func_79();
					}
				}
				else
				{
					Global_2933[1 /*6*/] = { Global_104551.f_28020[iParam0 /*29*/].f_3 };
					Global_2933[1 /*6*/].f_5 = iParam1;
					func_79();
				}
			}
			else
			{
				Global_2933[1 /*6*/] = { Global_104551.f_28020[iParam0 /*29*/].f_3 };
				Global_2933[1 /*6*/].f_5 = iParam1;
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
	
	StringCopy(&cVar0, unk_0xE883B8F5FA6A04DA(&(Global_104551.f_28020[Global_3009 /*29*/].f_7)), 64);
	if (Global_3028 == 0)
	{
		unk_0x55E6536147AC42E6("");
		StringCopy(&cVar16, unk_0xE883B8F5FA6A04DA(&(Global_2933[1 /*6*/])), 64);
		sVar32 = unk_0xE883B8F5FA6A04DA("CELL_253");
		unk_0xB317125F2A5746EB(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x55E6536147AC42E6("CELL_255");
		unk_0xBEFD1ED9B6BE5127(&(Global_2933[1 /*6*/]));
		unk_0xB317125F2A5746EB(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x62148293B793073B(&Global_2323, 0);
}

void func_80()
{
	if (func_86(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_81();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_81()
{
	func_82();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_82()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_85(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_84(unk_0x18F7BE9ACB7D08F4());
			if (func_83(iVar0) && (!func_86(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_83(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_83(int iParam0)
{
	return iParam0 < 3;
}

int func_84(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(uParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_86(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_87(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 17);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2324, 17);
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
	
	if (unk_0xFAFFA408239A026B(sParam2))
	{
		return 0;
	}
	if (unk_0xA49B74E0C954F146(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(sParam3))
	{
		return 0;
	}
	if (unk_0xA49B74E0C954F146(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913());
	iVar1 = func_173(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xFAFFA408239A026B(sParam7))
	{
		iVar2 = unk_0x6E987D62C8535B6E(sParam7);
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
	Global_1350816.f_40.f_1 = iParam0;
	Global_1350816.f_40.f_2 = iParam1;
	Global_1350816.f_40.f_3 = iParam2;
	StringCopy(&(Global_1350816.f_40.f_4), sParam3, 16);
	Global_1350816.f_40.f_8 = iParam4;
	Global_1350816.f_40.f_9 = iParam5;
	Global_1350816.f_40.f_14 = uParam6;
	func_91(iParam4);
	func_163();
	Global_1350816.f_40.f_13 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), 7000);
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
	Global_1350816.f_40.f_10 = 0;
}

void func_93()
{
	Global_1350816.f_40.f_10 = 1;
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
	return iParam0 > Global_1350816.f_40.f_8;
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
	Global_1350816.f_40.f_11 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), iParam0);
	Global_1350816.f_40.f_12 = 1;
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
		sVar2 = unk_0x3E8AA4B2B7764D27(iVar0);
		iVar1 = func_119(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x57D076A6F81F1FC1(unk_0xE92FCF3C05C2EF1D(), Global_1350816.f_40.f_13))
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
	if (!unk_0xFAFFA408239A026B(sParam8))
	{
		iVar6++;
		if (!unk_0xFAFFA408239A026B(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x9D39145AD645E383(sVar4, " "))
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
		if (unk_0xB03A1684359C50A1(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xB03A1684359C50A1(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xFAFFA408239A026B(sVar2))
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
	if (unk_0xB03A1684359C50A1(uParam4, 0))
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
	Global_1350816.f_57 = 0;
	Global_1350816.f_57.f_1 = 0;
}

void func_101()
{
	Global_1350816.f_40 = 3;
}

void func_102()
{
	unk_0xD2A9C3F486236CC5(&Global_2323, 8);
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
			Global_3030 = iParam6;
			unk_0xD2A9C3F486236CC5(&Global_4267143, 0);
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
	if (unk_0x9D39145AD645E383(sParam14, sParam15))
	{
	}
	func_80();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
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
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if (unk_0xB2F589E05EE3BB5E(unk_0x18F7BE9ACB7D08F4()))
			{
				return 0;
			}
		}
		if (Global_4267128 == 1)
		{
			return 0;
		}
		if (unk_0xE7FAF8E78F7D3A73(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xE7FAF8E78F7D3A73(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_114() == 0)
	{
		func_112();
		return 0;
	}
	func_111(Global_4267127);
	StringCopy(&(Global_4265878[Global_4267127 /*104*/]), sParam1, 64);
	Global_4265878[Global_4267127 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4265878[Global_4267127 /*104*/].f_24 = iParam2;
	}
	Global_4265878[Global_4267127 /*104*/].f_25 = iParam7;
	Global_4265878[Global_4267127 /*104*/].f_26 = uParam8;
	Global_4265878[Global_4267127 /*104*/].f_29 = uParam9;
	Global_4265878[Global_4267127 /*104*/].f_30 = uParam12;
	Global_4265878[Global_4267127 /*104*/].f_31 = uParam11;
	Global_4265878[Global_4267127 /*104*/].f_28 = 0;
	Global_4265878[Global_4267127 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_33), sParam4, 64);
	Global_4265878[Global_4267127 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_50), sParam5, 64);
	Global_4265878[Global_4267127 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_83), sParam15, 64);
	func_80();
	switch (iParam16)
	{
		case 3:
			Global_4265878[Global_4267127 /*104*/].f_99[Global_14453] = 1;
			break;
		
		case 0:
			Global_4265878[Global_4267127 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4265878[Global_4267127 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4265878[Global_4267127 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14453)
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
				Global_4267128 = 1;
				break;
			
			case 0:
				Global_4267128 = 1;
				break;
			
			case 2:
				Global_4267128 = 1;
				break;
			
			case 1:
				Global_4267128 = 1;
				break;
			}
	}
	Global_16825[Global_4267127] = 0;
	if (bParam10)
	{
		func_80();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_109())
			{
				unk_0x929C3CBA660376D5(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_108(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_105(1);
			func_108(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14433), -1082130432, -1082130432, -1082130432);
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
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
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_107(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar2);
								unk_0xE2B30EB9B14EEAB2();
							}
							if (Global_2456776)
							{
								if (iVar1 == 14)
								{
									func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
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
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104551.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104551.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104551.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70852)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36996;
											break;
										
										case 1:
											iVar6 = Global_36997;
											break;
										
										case 2:
											iVar6 = Global_36998;
											break;
										
										default:
											break;
									}
									func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_107(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(Global_2329);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_107(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar7);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_107(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar8);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 8)
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_107(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(42);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if ((iVar1 == 23 && unk_0x9D39145AD645E383(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xB03A1684359C50A1(Global_2324, 6))
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_107(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(42);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626200.f_1;
								func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
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
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xFAFFA408239A026B(sParam7))
	{
		func_107(sParam7);
	}
	if (!unk_0xFAFFA408239A026B(sParam8))
	{
		func_107(sParam8);
	}
	if (!unk_0xFAFFA408239A026B(sParam9))
	{
		func_107(sParam9);
	}
	if (!unk_0xFAFFA408239A026B(sParam10))
	{
		func_107(sParam10);
	}
	if (!unk_0xFAFFA408239A026B(sParam11))
	{
		func_107(sParam11);
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_107(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

void func_108(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE2B30EB9B14EEAB2();
}

bool func_109()
{
	return Global_1312854;
}

void func_110(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104551.f_14021[iParam0 /*20*/].f_8;
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
	
	uVar0 = unk_0xB093145A4ED05C87();
	uVar1 = unk_0x4BF279EB036481A0();
	uVar2 = unk_0xF0B96EE16BA9FBE8();
	uVar3 = unk_0x518720E0DE404FFC();
	uVar4 = unk_0x5E3E9A684A609866() + 1;
	uVar5 = unk_0xFBE778F13510E585();
	Global_4265878[iParam0 /*104*/].f_18 = uVar0;
	Global_4265878[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4265878[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4265878[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4265878[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4265878[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4267127 = 11;
	Global_4265878[Global_4267127 /*104*/].f_18 = -1;
	Global_4265878[Global_4267127 /*104*/].f_18.f_1 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_2 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_3 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_113(Global_4265878[iVar2 /*104*/].f_18, Global_4265878[Global_4267127 /*104*/].f_18))
		{
			Global_4267127 = iVar2;
		}
		iVar2++;
	}
	Global_4265878[Global_4267127 /*104*/].f_24 = 1;
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
		if (Global_4265878[iVar2 /*104*/].f_24 == 0)
		{
			Global_4267127 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4267127 = 11;
	Global_4265878[Global_4267127 /*104*/].f_18 = -1;
	Global_4265878[Global_4267127 /*104*/].f_18.f_1 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_2 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_3 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4265878[iVar2 /*104*/].f_24 == 0 || Global_4265878[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_113(Global_4265878[iVar2 /*104*/].f_18, Global_4265878[Global_4267127 /*104*/].f_18))
			{
				Global_4267127 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4267127 == 11)
	{
		return 0;
	}
	Global_4265878[Global_4267127 /*104*/].f_99[0] = 0;
	Global_4265878[Global_4267127 /*104*/].f_99[1] = 0;
	Global_4265878[Global_4267127 /*104*/].f_99[2] = 0;
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
			Global_3030 = iParam10;
			unk_0xD2A9C3F486236CC5(&Global_4267143, 0);
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
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x9D39145AD645E383(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_117(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xE883B8F5FA6A04DA(sParam0);
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
	Global_1368675[iVar0 /*5*/].f_4 = 1;
	return Global_1368675[iVar0 /*5*/].f_2;
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
	if (Global_1368838)
	{
		if (iParam0 == Global_1368838.f_1)
		{
			return;
		}
	}
	if (func_121(iParam0))
	{
		return;
	}
	if (Global_1368876 >= 32)
	{
		return;
	}
	Global_1368843[Global_1368876] = iParam0;
	Global_1368876++;
	if (bParam1)
	{
	}
}

int func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1368876)
	{
		if (Global_1368843[iVar0] == iParam0)
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
	if (Global_1368836 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1368836)
	{
		if (Global_1368675[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x474A54D9A9BD0D31(Global_1368675[iVar0 /*5*/].f_2) && unk_0x8A770CC4CC05DE07(Global_1368675[iVar0 /*5*/].f_2))
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
	
	if (iParam0 >= Global_1368836)
	{
		return;
	}
	if (unk_0x474A54D9A9BD0D31(Global_1368675[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1368675[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x18EA682CBBDF668A(Global_1368675[iParam0 /*5*/].f_2), 64);
			unk_0xBD17B901DFB6DC31(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x60E35C29E0313635(Global_1368675[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1368836)
	{
		Global_1368675[iVar32 /*5*/] = { Global_1368675[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_124(&(Global_1368675[iVar32 /*5*/]));
	Global_1368836 = (Global_1368836 - 1);
}

void func_124(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_125();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x44243F2E2F58B8E3())
	{
		uParam0->f_3 = unk_0xE92FCF3C05C2EF1D();
	}
}

int func_125()
{
	return -1;
}

void func_126()
{
	Global_1350816.f_40.f_9 = 4;
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
		sVar2 = unk_0x3E8AA4B2B7764D27(iVar0);
		iVar1 = func_119(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x57D076A6F81F1FC1(unk_0xE92FCF3C05C2EF1D(), Global_1350816.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16817 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_118(sParam5, bParam6, &iVar3);
	uVar5 = func_116(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xFAFFA408239A026B(sParam8))
	{
		iVar6++;
		if (!unk_0xFAFFA408239A026B(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x9D39145AD645E383(sVar4, " "))
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
		if (unk_0xB03A1684359C50A1(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xB03A1684359C50A1(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xFAFFA408239A026B(sVar2))
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
	if (unk_0xB03A1684359C50A1(uParam4, 0))
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
	Global_1350816.f_40.f_9 = 3;
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
	
	unk_0x62148293B793073B(&Global_2323, 10);
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
			Global_3030 = iParam6;
			Global_2933[3 /*6*/] = { Global_104551.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			unk_0xD2A9C3F486236CC5(&Global_2323, 1);
			unk_0xD2A9C3F486236CC5(&Global_2323, 7);
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
	if (unk_0x9D39145AD645E383(sParam14, sParam15))
	{
	}
	func_80();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
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
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if (unk_0xB2F589E05EE3BB5E(unk_0x18F7BE9ACB7D08F4()))
			{
				return 0;
			}
		}
		if (Global_104551.f_14021[Global_14453 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xE7FAF8E78F7D3A73(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xE7FAF8E78F7D3A73(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_136() == 0)
	{
		func_134();
		return 0;
	}
	func_133(Global_16823);
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/]), sParam1, 64);
	Global_104551.f_14111[Global_16823 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104551.f_14111[Global_16823 /*104*/].f_24 = iParam2;
	}
	Global_104551.f_14111[Global_16823 /*104*/].f_25 = iParam7;
	Global_104551.f_14111[Global_16823 /*104*/].f_26 = uParam8;
	Global_104551.f_14111[Global_16823 /*104*/].f_29 = uParam9;
	Global_104551.f_14111[Global_16823 /*104*/].f_30 = uParam12;
	Global_104551.f_14111[Global_16823 /*104*/].f_31 = uParam11;
	Global_104551.f_14111[Global_16823 /*104*/].f_28 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/].f_33), sParam4, 64);
	Global_104551.f_14111[Global_16823 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/].f_50), sParam5, 64);
	Global_104551.f_14111[Global_16823 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/].f_83), sParam15, 64);
	if (unk_0xB03A1684359C50A1(Global_2323, 10))
	{
		Global_104551.f_14111[Global_16823 /*104*/].f_99[0] = 1;
		Global_104551.f_14111[Global_16823 /*104*/].f_99[1] = 1;
		Global_104551.f_14111[Global_16823 /*104*/].f_99[2] = 1;
		Global_3029 = 4;
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
				Global_104551.f_14111[Global_16823 /*104*/].f_99[Global_14453] = 1;
				break;
			
			case 0:
				Global_104551.f_14111[Global_16823 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104551.f_14111[Global_16823 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104551.f_14111[Global_16823 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14453)
			{
				case 0:
					func_110(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_110(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_110(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_110(3);
					Global_3029 = 3;
					break;
				
				default:
					Global_3029 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xB03A1684359C50A1(Global_2323, 10))
		{
			Global_104551.f_14021[0 /*20*/].f_17 = 1;
			Global_104551.f_14021[1 /*20*/].f_17 = 1;
			Global_104551.f_14021[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104551.f_14021[Global_14453 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104551.f_14021[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104551.f_14021[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104551.f_14021[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16825[Global_16823] = 0;
	if (bParam10)
	{
		func_80();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_109())
			{
				unk_0x929C3CBA660376D5(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_108(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_105(1);
			func_108(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14433), -1082130432, -1082130432, -1082130432);
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
	
	uVar0 = unk_0xB093145A4ED05C87();
	uVar1 = unk_0x4BF279EB036481A0();
	uVar2 = unk_0xF0B96EE16BA9FBE8();
	uVar3 = unk_0x518720E0DE404FFC();
	uVar4 = unk_0x5E3E9A684A609866() + 1;
	uVar5 = unk_0xFBE778F13510E585();
	Global_104551.f_14111[iParam0 /*104*/].f_18 = uVar0;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70852)
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
	Global_16823 = 34;
	Global_104551.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_135(Global_104551.f_14111[iVar2 /*104*/].f_18, Global_104551.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104551.f_14111[Global_16823 /*104*/].f_24 = 1;
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
	
	if (Global_70852)
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
		if (Global_104551.f_14111[iVar2 /*104*/].f_24 == 0)
		{
			Global_16823 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104551.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104551.f_14111[iVar2 /*104*/].f_24 == 0 || Global_104551.f_14111[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_135(Global_104551.f_14111[iVar2 /*104*/].f_18, Global_104551.f_14111[Global_16823 /*104*/].f_18))
			{
				Global_16823 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16823 == 34)
	{
		return 0;
	}
	Global_104551.f_14111[Global_16823 /*104*/].f_99[0] = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_99[1] = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_99[2] = 0;
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
	unk_0x62148293B793073B(&Global_2323, 10);
	iVar0 = 3;
	if (func_132(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3030 = iParam10;
			Global_2933[3 /*6*/] = { Global_104551.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			StringCopy(&Global_3011, sParam5, 64);
			unk_0xD2A9C3F486236CC5(&Global_2323, 1);
			unk_0xD2A9C3F486236CC5(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_138(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
	}
	if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
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
	
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xB03A1684359C50A1(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xB03A1684359C50A1(uParam4, 4))
	{
		bVar0 = func_155(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_145(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xB03A1684359C50A1(uParam4, 3))
		{
			func_144(1);
		}
		if (unk_0xB03A1684359C50A1(uParam4, 5))
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
	Global_2520995 = 0;
}

void func_141()
{
	Global_1350816.f_57 = 1;
	Global_1350816.f_57.f_1 = 0;
}

void func_142()
{
	Global_1350816.f_40.f_9 = 1;
}

void func_143(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2325, 0);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2325, 0);
	}
}

void func_144(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 20);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 20);
	}
}

int func_145(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_154(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
	return func_146(sParam3, iParam4, bParam7);
}

int func_146(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
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
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_152(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_151();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_80();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_150())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
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
				switch (Global_14453.f_1)
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
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_148();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_147();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
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
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_148()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_149()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_150()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_152(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

void func_153()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_154(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

int func_155(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_154(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15804 = 1;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
	return func_146(sParam3, iParam4, bParam7);
}

int func_156(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
	}
	if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
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
	Global_16774 = 0;
}

bool func_158(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_154(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 1;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 1;
	Global_15810 = 0;
	StringCopy(&Global_15904, sParam5, 24);
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
	Global_1350816.f_40.f_9 = 2;
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
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_146(sParam2, iParam3, 0);
}

void func_162()
{
	Global_1350816.f_55 = Global_1350816.f_40.f_1;
	Global_1350816.f_55.f_1 = Global_1350816.f_40.f_10;
}

void func_163()
{
	Global_1350816.f_40 = 1;
}

bool func_164()
{
	return Global_1350816.f_40 == 1;
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	if (!func_166(iParam0))
	{
		return 0;
	}
	if (Global_1350816.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1350816.f_40.f_3 != iParam2)
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
	if (!Global_1350816.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_167()
{
	if (Global_1350816.f_40 == 0)
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
	if (Global_1794814 || func_170())
	{
		return 0;
	}
	if (!unk_0xB03A1684359C50A1(uParam0, 6))
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
	return unk_0x57D076A6F81F1FC1(unk_0xE92FCF3C05C2EF1D(), Global_1367558);
}

int func_170()
{
	if (Global_4253357.f_797 > -1)
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
	return unk_0x6E987D62C8535B6E(&cVar0);
}

bool func_174()
{
	return Global_2518483.f_1;
}

int func_175()
{
	if (Global_1351004.f_2)
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
	Global_2521482.f_1072 = iParam0;
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
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
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
	if (unk_0x44243F2E2F58B8E3() && !bParam2)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0x5AFB8ED811F05E4D(), *uParam0)) >= iParam1)
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
		if (!unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142, 8))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 8);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142, 8))
	{
		unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 8);
	}
}

bool func_184()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142, 8);
}

void func_185()
{
	unk_0x8359CF51370FC969(800);
	if (!bLocal_759 || bLocal_760)
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
		}
	}
	if (!bLocal_760)
	{
		Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_2 = 0;
	}
	else
	{
		Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_2 = 3;
	}
}

void func_186()
{
	if (func_190(&Local_94, &(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_4)))
	{
		Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_2 = -1;
	}
	func_187(&Local_94);
}

void func_187(var uParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xC83C302702976DCB();
	switch (iLocal_755)
	{
		case 0:
			if (unk_0xB03A1684359C50A1(*uParam0, 18))
			{
				if (!func_182(&uLocal_761))
				{
					func_19(&uLocal_761, 0, 0);
				}
				if (!bVar0)
				{
					if (!unk_0x622E10ED992CEB95())
					{
						func_71("HLP_XP1", 9000);
						func_180(&uLocal_761);
						func_19(&uLocal_761, 0, 0);
						iLocal_755++;
					}
				}
				else if (func_181(&uLocal_761, 5000, 0))
				{
					iLocal_755++;
					func_180(&uLocal_761);
					func_19(&uLocal_761, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!unk_0x622E10ED992CEB95())
				{
					func_71("HLP_XP2", 9000);
					func_180(&uLocal_761);
					func_19(&uLocal_761, 0, 0);
					iLocal_755++;
				}
			}
			else if (func_181(&uLocal_761, 5000, 0))
			{
				iLocal_755++;
				func_180(&uLocal_761);
				func_19(&uLocal_761, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!unk_0x622E10ED992CEB95())
				{
					func_71("HLP_RNK1", 9000);
					func_189(1);
					Global_2512581.f_1821 = 1;
					func_188(1, 0, -1);
					func_180(&uLocal_761);
					func_19(&uLocal_761, 0, 0);
					iLocal_755++;
				}
			}
			else if (func_181(&uLocal_761, 5000, 0))
			{
				iLocal_755++;
				func_180(&uLocal_761);
				func_19(&uLocal_761, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!unk_0x622E10ED992CEB95())
				{
					func_177(0);
					if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
					{
						func_71("HLP_CASHXBX", 9000);
					}
					else if (unk_0xC57A05B38A912073() || unk_0x0A8A596EB9C068FA())
					{
						func_71("HLP_CASHPSN", 9000);
					}
					else
					{
						func_71("HLP_CASHGEN", 9000);
					}
					func_180(&uLocal_761);
					func_19(&uLocal_761, 0, 0);
					iLocal_755 = 99;
				}
			}
			else if (func_181(&uLocal_761, 5000, 0))
			{
				iLocal_755 = 99;
				func_180(&uLocal_761);
				func_19(&uLocal_761, 0, 0);
			}
			break;
		
		case 99:
			if (!unk_0xB03A1684359C50A1(uLocal_752, 2))
			{
				unk_0xD2A9C3F486236CC5(&uLocal_752, 2);
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
				Global_1357213.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xD2A9C3F486236CC5(&(Global_1357213.f_1046), iParam0);
			}
			else
			{
				unk_0x62148293B793073B(&(Global_1357213.f_1046), iParam0);
			}
			break;
	}
}

void func_189(int iParam0)
{
	Global_2512581.f_4499 = iParam0;
}

int func_190(var uParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	bool bVar8;
	
	if (!unk_0xB03A1684359C50A1(*uParam0, 13))
	{
		if (unk_0x5400DC5FAEBF30F0(unk_0x2894A716C448FCB4()))
		{
			Var5 = { unk_0xB6E76298CC2D1D84(unk_0x2894A716C448FCB4()) };
			if ((Var5.f_0 != 0f || Var5.f_1 != 0f) || Var5.f_2 != 0f)
			{
				unk_0x73808E1273F0FC1F(Var5, 0f, 0f, 0f);
				if (!unk_0xB03A1684359C50A1(*uParam0, 14))
				{
					unk_0xD2A9C3F486236CC5(uParam0, 14);
				}
			}
		}
	}
	else if (unk_0xB03A1684359C50A1(*uParam0, 14))
	{
		unk_0x4A918952774CFC67();
		unk_0x62148293B793073B(uParam0, 14);
	}
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0xB05E48165A6F6058(unk_0x18F7BE9ACB7D08F4(), 337, 1);
	}
	func_343(uParam0);
	unk_0x05498EB35E8359DC(1f);
	func_337(uParam0);
	func_336(unk_0x8CFC7D6E1DA5D304());
	if (!unk_0xB03A1684359C50A1(*uParam0, 31))
	{
		if (uParam0->f_6 > 0)
		{
			uParam0->f_32 = unk_0x0E40E816537BFB87(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
			if (uParam0->f_32 != 0)
			{
				unk_0x31EA01EDFF03ED26(uParam0->f_32);
				unk_0xD2A9C3F486236CC5(uParam0, 31);
			}
		}
	}
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (unk_0xE7FAF8E78F7D3A73(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (unk_0xE7FAF8E78F7D3A73(joaat("freemode")) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2512581.f_1820)
				{
					Global_2512581.f_1820 = 1;
					unk_0x4EE74819814600BB(0);
				}
				if (!func_184())
				{
					func_183(1);
				}
				if (!unk_0xEC0ECEF2AF3FDA8D() && !unk_0xBC13F084F3B1B544())
				{
					unk_0xFF91FEC6E57575E4(800);
				}
				if (!func_182(&(uParam0->f_15)))
				{
					func_19(&(uParam0->f_15), 0, 0);
				}
				unk_0xEBE532BFFE618875(&Global_1795269);
				Global_1795270 = 0;
				Global_1795272 = 0;
				Global_1795271 = 0;
				Global_1795273 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0xEC0ECEF2AF3FDA8D())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_327(0, 0, 0, 1, 1, 1, 0);
					unk_0xF4C4068F5B840E73(1, 0);
					func_366(1);
					unk_0xE3BE2A8D1196BE5E(1);
					unk_0x7CE052BF7075B449("EXTRASUNNY");
					unk_0x79BFB212E01BEEB9(19, 0, 0);
					unk_0x902B266F0C9509A8(1);
					func_326(0);
					unk_0x93553958B8FC325B(0);
					func_320(1, 0);
					func_310(1, 1);
					if (unk_0xE7FAF8E78F7D3A73(joaat("fm_intro")) < 1 || !func_309())
					{
						if (uParam0->f_292)
						{
							if (func_308() == 0)
							{
								unk_0xD7E1CC615E56D2BB("GTAO_INTRO_MALE");
								unk_0x7A79EAE8B7A454B1(1);
							}
						}
					}
					func_301(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					unk_0x62148293B793073B(uParam0, 0);
					unk_0x62148293B793073B(uParam0, 1);
					unk_0x62148293B793073B(uParam0, 2);
					unk_0x62148293B793073B(uParam0, 9);
					unk_0xD2A9C3F486236CC5(uParam0, 7);
					uParam0->f_122 = unk_0x1701E0E6A11D6B65(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				unk_0x9016574B77A748EE(joaat("frogger"));
				if (unk_0xEDFE27D1AEA0EA7F(joaat("frogger")))
				{
					if (!uParam0->f_292 || unk_0xBD876DD84BEC587E())
					{
						if (func_298())
						{
							unk_0xBEDA07082BDF98E5(0);
							func_293(1, 1);
							unk_0x4CC4AF393934E194(0);
							unk_0xEFF1F12403847394(1);
							if (!func_176())
							{
								func_292();
							}
							func_189(0);
							func_291();
							unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Global_1312551, 1, 0, 0, 1);
							unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 1);
							unk_0xF342BF6A7A4C7A8F(unk_0x18F7BE9ACB7D08F4(), false, 0);
							unk_0x945880A1F9FE9E4F(0);
							if (unk_0xE769D9B5158D0F11(unk_0x9428CB8F0BB12770()))
							{
								unk_0x0590222010A36CE4(unk_0x9428CB8F0BB12770(), 0f);
							}
							unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), true);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0x51CFE20A158947F4())
				{
					if (!unk_0xB03A1684359C50A1(*uParam0, 4))
					{
						if (func_290() == 64 || func_290() == 65)
						{
							unk_0x4A918952774CFC67();
							unk_0xBD320BAA5701BEC0(754.2219f, 1226.831f, 356.5081f, func_289(-14.367f, 0f, 157.3524f), 100f, 0);
							func_180(&(uParam0->f_17));
							func_19(&(uParam0->f_17), 0, 0);
							unk_0xD2A9C3F486236CC5(uParam0, 4);
						}
					}
					else if (unk_0x6662DABCFF1B4AD5("FM_INTRO_START") && (unk_0x34CC31673AD34B53() || func_181(&(uParam0->f_17), 5000, 0)))
					{
						if (!unk_0xB03A1684359C50A1(*uParam0, 24))
						{
							if (unk_0xB03A1684359C50A1(*uParam0, 7))
							{
								unk_0x9BEA833CAF67289C("FM_INTRO_START");
								unk_0xD2A9C3F486236CC5(uParam0, 24);
								unk_0xD2A9C3F486236CC5(uParam0, 21);
							}
						}
						else if (unk_0x846A02507A14AF52() > 0)
						{
							unk_0xC7BB901E267A910A();
							unk_0x03CD98CCCD36A656(6);
							if (!unk_0x5400DC5FAEBF30F0(uParam0->f_7))
							{
								uParam0->f_7 = unk_0x5E35D8CCDF065701("DEFAULT_SCRIPTED_CAMERA", 0);
								unk_0x2C535610856B3F4D(uParam0->f_7, 1);
							}
							unk_0x444064C4BEF055A9(uParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							unk_0x444064C4BEF055A9(uParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							unk_0x24144CB94D75CE91(uParam0->f_7, "HAND_SHAKE", 0.15f);
							unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 1, 0);
							func_288(uParam0);
							unk_0xD2A9C3F486236CC5(uParam0, 11);
							if (uParam0->f_292)
							{
								unk_0x1EE958B38A9EC99D(9, 9, 9, 9);
								unk_0x10B4AFEEEAC7F087();
							}
							unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), true);
							if (unk_0xEC0ECEF2AF3FDA8D())
							{
								unk_0x8359CF51370FC969(800);
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
					unk_0xEFF1F12403847394(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!unk_0xB03A1684359C50A1(*uParam0, 2))
				{
					unk_0xEFF1F12403847394(1);
					func_71("FMIC_INTRO2", -1);
					unk_0xD2A9C3F486236CC5(uParam0, 2);
				}
				unk_0x444064C4BEF055A9(uParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				unk_0x444064C4BEF055A9(uParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				unk_0x1EE958B38A9EC99D(9, 13, 9, 13);
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
				if (!unk_0xB03A1684359C50A1(*uParam0, 10))
				{
					func_283();
					unk_0xD2A9C3F486236CC5(uParam0, 10);
				}
				unk_0x444064C4BEF055A9(uParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				unk_0x444064C4BEF055A9(uParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (unk_0xC4B84EB67F78C1F0(uParam0->f_48, 0))
				{
					unk_0xA6DF05EE1FFAD12F(uParam0->f_48);
					unk_0xA12407EB7D7CF146(uParam0->f_48, true, 0);
					unk_0xBCB52670CAA2819B(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0xC4B84EB67F78C1F0(uParam0->f_48, 0))
				{
					unk_0xBCB52670CAA2819B(uParam0->f_48);
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
								if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
								{
									unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), true);
								}
								fVar0 = 5000f;
								if (unk_0xC4B84EB67F78C1F0(uParam0->f_92[0], 0))
								{
									unk_0xF81720737A9C0B6E(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									unk_0x1177B8213A377DCE(uParam0->f_92[0], fVar0);
								}
								if (unk_0xC4B84EB67F78C1F0(uParam0->f_92[1], 0))
								{
									unk_0xF81720737A9C0B6E(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									unk_0x1177B8213A377DCE(uParam0->f_92[1], fVar0);
								}
								if (unk_0xC4B84EB67F78C1F0(uParam0->f_92[2], 0))
								{
									unk_0xF81720737A9C0B6E(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									unk_0x1177B8213A377DCE(uParam0->f_92[2], fVar0);
								}
								if (unk_0xC4B84EB67F78C1F0(uParam0->f_92[3], 0))
								{
									unk_0xF81720737A9C0B6E(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									unk_0x1177B8213A377DCE(uParam0->f_92[3], fVar0);
								}
								if (unk_0xC4B84EB67F78C1F0(uParam0->f_92[4], 0))
								{
									unk_0xF81720737A9C0B6E(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									unk_0x1177B8213A377DCE(uParam0->f_92[4], fVar0);
								}
								unk_0xD2A9C3F486236CC5(uParam0, 15);
								unk_0x8359CF51370FC969(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					unk_0x79BFB212E01BEEB9(16, 0, 0);
					func_280(uParam0);
					func_279(uParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					unk_0xA41F88BA20F1376F(uParam0->f_7, 1);
					unk_0x9CAC9AB29BD6AEB4(uParam0->f_7);
					unk_0x13AD763DBD687842(uParam0->f_7, 0);
					unk_0x64D773F3BE6DC50A("MP_INTRO_RACE_SCENE");
					unk_0x1EE958B38A9EC99D(9, 12, 9, 12);
					func_277(uParam0, 14);
					unk_0x62148293B793073B(uParam0, 15);
				}
				if (!unk_0xB03A1684359C50A1(*uParam0, 5))
				{
					func_71("FMIC_RACE1", -1);
					unk_0xD2A9C3F486236CC5(uParam0, 5);
				}
				func_287(uParam0, 14);
				if (func_285(uParam0, 14, 0))
				{
					func_276(uParam0, 23539f, 0);
					unk_0x79BFB212E01BEEB9(16, 0, 0);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_277(uParam0, 15);
					unk_0x62148293B793073B(uParam0, 15);
				}
				if (!unk_0xB03A1684359C50A1(uParam0->f_3, 0))
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
					unk_0x79BFB212E01BEEB9(16, 0, 0);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_255(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_277(uParam0, 16);
					unk_0x62148293B793073B(uParam0, 15);
				}
				if (!unk_0xB03A1684359C50A1(uParam0->f_3, 0))
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
					unk_0x79BFB212E01BEEB9(16, 0, 0);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0xCA450533BE462E51(uParam0->f_9, 0.7f);
					func_277(uParam0, 17);
					unk_0x62148293B793073B(uParam0, 15);
				}
				if (!unk_0xB03A1684359C50A1(*uParam0, 6))
				{
					unk_0xD2A9C3F486236CC5(uParam0, 6);
					func_71("FMIC_RACE2", -1);
				}
				if (!unk_0xB03A1684359C50A1(uParam0->f_3, 0))
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
					unk_0x79BFB212E01BEEB9(16, 0, 0);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 18);
					unk_0x62148293B793073B(uParam0, 15);
				}
				if (!unk_0xB03A1684359C50A1(uParam0->f_3, 0))
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
					unk_0x79BFB212E01BEEB9(16, 0, 0);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					if (unk_0x31F12808DC47A9E5(uParam0->f_92[2]))
					{
						unk_0xBECECD970F645217(&(uParam0->f_92[2]));
					}
					if (unk_0x31F12808DC47A9E5(uParam0->f_92[3]))
					{
						unk_0xBECECD970F645217(&(uParam0->f_92[3]));
					}
					if (unk_0x31F12808DC47A9E5(uParam0->f_92[4]))
					{
						unk_0xBECECD970F645217(&(uParam0->f_92[4]));
					}
					func_279(uParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 19);
					unk_0x62148293B793073B(uParam0, 15);
				}
				if (!unk_0xB03A1684359C50A1(uParam0->f_3, 0))
				{
					func_265(uParam0);
				}
				else
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (unk_0x44057CDFA5C14B91(uParam0->f_32))
							{
								if (!unk_0x74C2FE037DFC8B4A(uParam0->f_91, 0))
								{
									unk_0xDD4D7A17AA04E11E(uParam0->f_91, uParam0->f_32, unk_0x6E987D62C8535B6E("GtaMloRoom001"));
								}
								unk_0x2FA5BED6B7B0F0D4("SE_MP_GARAGE_L_RADIO", 0);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!unk_0x74C2FE037DFC8B4A(uParam0->f_49[iVar4], 0))
									{
										unk_0xDD4D7A17AA04E11E(uParam0->f_49[iVar4], uParam0->f_32, unk_0x6E987D62C8535B6E("GtaMloRoom001"));
									}
									iVar4++;
								}
								unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 6);
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
				if (func_285(uParam0, 19, 0) && unk_0xB03A1684359C50A1(uParam0->f_3, 0))
				{
					if (unk_0xB03A1684359C50A1(*uParam0, 12))
					{
						unk_0x62148293B793073B(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_285(uParam0, 19, -4968))
				{
					if (!unk_0xB03A1684359C50A1(*uParam0, 12))
					{
						unk_0xEFF1F12403847394(1);
						unk_0xD2A9C3F486236CC5(uParam0, 12);
					}
				}
				else if (func_285(uParam0, 19, -5618))
				{
					if (!unk_0xB03A1684359C50A1(*uParam0, 30))
					{
						unk_0x9575CEFF222148A6("MP_intro_logo", 0, 0);
						unk_0xD2A9C3F486236CC5(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_253(uParam0);
				func_252(uParam0);
				if (unk_0xB03A1684359C50A1(uParam0->f_3, 0))
				{
					if (!unk_0x5400DC5FAEBF30F0(uParam0->f_7))
					{
						uParam0->f_7 = unk_0x5E35D8CCDF065701("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					unk_0x2C535610856B3F4D(uParam0->f_7, 1);
					unk_0x444064C4BEF055A9(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					unk_0x444064C4BEF055A9(uParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					unk_0x24144CB94D75CE91(uParam0->f_7, "HAND_SHAKE", 0.1f);
					unk_0xE4DE0DEF5BD85660(uParam0->f_32, unk_0x6E987D62C8535B6E("GtaMloRoom001"));
					unk_0x2FA5BED6B7B0F0D4("SE_MP_GARAGE_L_RADIO", 0);
					unk_0x03CD98CCCD36A656(0);
					unk_0xE8444942F8401658(uParam0->f_10, 0f);
					if (!unk_0x0FAE113CE72ED842(uParam0->f_91))
					{
						unk_0x8F2E6C470A0005D4(uParam0->f_91, 0, 0);
					}
					if (unk_0x36CC410474001FBC("MP_INTRO_RACE_SCENE"))
					{
						unk_0xA11D9B06B99FE786("MP_INTRO_RACE_SCENE");
					}
					unk_0x1EE958B38A9EC99D(9, 13, 9, 13);
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
					unk_0x444064C4BEF055A9(uParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					unk_0x444064C4BEF055A9(uParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					unk_0xE8444942F8401658(uParam0->f_10, 0f);
					if (!unk_0x0FAE113CE72ED842(uParam0->f_91))
					{
						unk_0x8F2E6C470A0005D4(uParam0->f_91, 0, 0);
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
				unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				unk_0xD2A9C3F486236CC5(uParam0, 13);
				unk_0x444064C4BEF055A9(uParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				unk_0x444064C4BEF055A9(uParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				unk_0x79BFB212E01BEEB9(18, 0, 0);
				func_248(uParam0, 2);
				func_248(uParam0, 7);
				unk_0x419C9117019F2E5A(func_247());
				if (unk_0x31F12808DC47A9E5(uParam0->f_91))
				{
					unk_0x63C116C2153FAA3C(&(uParam0->f_91));
				}
				unk_0xD2A9C3F486236CC5(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_253(uParam0);
				func_252(uParam0);
				if (!unk_0xB03A1684359C50A1(*uParam0, 8))
				{
					unk_0xD2A9C3F486236CC5(uParam0, 8);
				}
				if (func_264(uParam0) && func_258(uParam0))
				{
					func_256(uParam0);
				}
				func_287(uParam0, 28);
				if ((unk_0x6662DABCFF1B4AD5("FM_INTRO_DRIVE_START") && unk_0xB03A1684359C50A1(uParam0->f_3, 3)) && func_285(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if (func_244(uParam0))
						{
							unk_0x8440A52435684AA5(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							unk_0x8440A52435684AA5(unk_0x18F7BE9ACB7D08F4(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x8440A52435684AA5(unk_0x18F7BE9ACB7D08F4(), "MP_Male_Character", 0, 0, 0);
							unk_0x8440A52435684AA5(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_244(uParam0))
				{
					unk_0x8440A52435684AA5(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					unk_0x8440A52435684AA5(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!unk_0x74C2FE037DFC8B4A(uParam0->f_35, 0))
				{
					unk_0x8440A52435684AA5(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x74C2FE037DFC8B4A(uParam0->f_34, 0))
				{
					unk_0x8440A52435684AA5(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0x74C2FE037DFC8B4A(uParam0->f_33, 0))
				{
					unk_0xA12407EB7D7CF146(uParam0->f_33, true, 0);
					unk_0x8440A52435684AA5(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_242(uParam0);
				unk_0x214D82C0D4F476D4("CONTRAILS", 0);
				unk_0x1EE958B38A9EC99D(9, 9, 9, 9);
				func_71("FMIC_TENN", -1);
				unk_0xCE82A1B9F41AE9D1(4);
				func_234(1, 1, 1, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0xEAE1A41FBC3984B1())
				{
					if (uParam0->f_32 != 0)
					{
						unk_0xF8BEB899F39F51F4(uParam0->f_32);
					}
					func_233(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (unk_0x5AFB8ED811F05E4D() - uParam0->f_13);
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
						if (unk_0x2D6E6D9121DADEC3("MP_Female_Character", 0))
						{
							if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
							{
								if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
								{
									if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
									{
										unk_0xFDBDFC454E44A5BF(unk_0x18F7BE9ACB7D08F4(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (unk_0x2D6E6D9121DADEC3("MP_Male_Character", 0))
					{
						if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
						{
							if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
							{
								if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
								{
									unk_0xFDBDFC454E44A5BF(unk_0x18F7BE9ACB7D08F4(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (unk_0x2D6E6D9121DADEC3("LAMAR", 0))
				{
					if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
					{
						if (!unk_0x0FAE113CE72ED842(uParam0->f_35))
						{
							if (!unk_0x657B649BA2AD3582(uParam0->f_35, 0))
							{
								unk_0xFDBDFC454E44A5BF(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								unk_0x8F2E6C470A0005D4(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (unk_0x2D6E6D9121DADEC3("MP_Lamar_Car", 0))
				{
					if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
					{
						unk_0x0F3F86C855582784(uParam0->f_34, 1, 1, 0);
						unk_0x990FFD4FB6ADD630(uParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						unk_0xB88121FF8A34A66F(uParam0->f_34, -106.11f);
						func_232(uParam0, 3099.997f);
						unk_0x16255149C63FBEEC(uParam0->f_34, 1);
					}
				}
				if (unk_0xAA006BC2D04125D0(0))
				{
					unk_0x79BFB212E01BEEB9(21, 0, 0);
					func_277(uParam0, 33);
					func_279(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (unk_0xB03A1684359C50A1(*uParam0, 29))
				{
					if (unk_0x946B9F54A0F6A9A4() || unk_0x63C1E7AE5873BEA0() > 3254)
					{
						unk_0x62148293B793073B(uParam0, 29);
					}
				}
				if ((func_231(uParam0) && func_230(uParam0)) && !unk_0xEAE1A41FBC3984B1())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (unk_0x5AFB8ED811F05E4D() - uParam0->f_13);
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
					unk_0x5A57025A0D4ABEDF();
					unk_0x294D1ED09EF7F3BF();
					if (unk_0xB03A1684359C50A1(*uParam0, 7))
					{
						unk_0x9BEA833CAF67289C("FM_INTRO_DRIVE_START");
						unk_0xD2A9C3F486236CC5(uParam0, 21);
					}
					if (!unk_0xE3E6E9EE5D071BD0())
					{
						unk_0xFF0F9807F8F0062F(0);
					}
					if (!unk_0xB03A1684359C50A1(*uParam1, 1))
					{
						unk_0xD2A9C3F486236CC5(uParam1, 1);
					}
					func_229(uParam0);
					func_228(uParam0);
					func_234(0, 1, 1, 0);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					unk_0x62148293B793073B(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x5AFB8ED811F05E4D() - (uParam0->f_26 + unk_0x63C1E7AE5873BEA0()));
					}
					if (!unk_0xB03A1684359C50A1(*uParam0, 22))
					{
						if (unk_0xB66F760FC616D603() == 1)
						{
							unk_0x79BFB212E01BEEB9(19, 59, 0);
							unk_0xD2A9C3F486236CC5(uParam0, 22);
						}
					}
					if (func_226(uParam0))
					{
						if (unk_0xB66F760FC616D603() == 2)
						{
							if (!unk_0xB03A1684359C50A1(*uParam0, 18))
							{
								unk_0xD2A9C3F486236CC5(uParam0, 18);
							}
							if (unk_0x63C1E7AE5873BEA0() > 23146)
							{
								if (!unk_0xB03A1684359C50A1(*uParam0, 27))
								{
									unk_0xB168A220550FC047("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xD2A9C3F486236CC5(uParam0, 27);
								}
								if (!unk_0xB03A1684359C50A1(*uParam0, 28))
								{
									unk_0xB168A220550FC047("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xD2A9C3F486236CC5(uParam0, 28);
								}
							}
							unk_0x560F0E62207A1C41(4950f);
							if (unk_0xB03A1684359C50A1(*uParam0, 22))
							{
								unk_0x79BFB212E01BEEB9(21, 0, 0);
								unk_0x62148293B793073B(uParam0, 22);
							}
							if (unk_0x63C1E7AE5873BEA0() > 23254)
							{
								func_225(uParam0);
							}
						}
					}
					if (unk_0xB66F760FC616D603() > 2)
					{
						func_228(uParam0);
						if (!unk_0xB03A1684359C50A1(*uParam0, 22))
						{
							unk_0x79BFB212E01BEEB9(21, 0, 0);
							unk_0xD2A9C3F486236CC5(uParam0, 22);
						}
						if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
						{
							unk_0xC1F655982D4E5525(uParam0->f_34);
							unk_0x91663DAD5DDAFA96(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = unk_0x63C1E7AE5873BEA0();
				}
				break;
			
			case 33:
				if (func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 1))
					{
						if (func_285(uParam0, 33, -5450))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 1);
							}
						}
					}
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 2))
					{
						if (func_285(uParam0, 33, -5450))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 1))
					{
						if (func_285(uParam0, 33, -5450))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					unk_0x64D773F3BE6DC50A("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 33);
				func_223(uParam0);
				if (func_285(uParam0, 33, 0))
				{
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 2))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 2);
						}
					}
				}
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_34, 0))
					{
						unk_0x505B5B32CED3A500(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xEEBA7A992DA7B65A(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x2A2BB8210FB20081(uParam0->f_7, 33.3479f);
						unk_0x24144CB94D75CE91(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x2C535610856B3F4D(uParam0->f_7, 1);
						if (!unk_0x74C2FE037DFC8B4A(uParam0->f_35, 0))
						{
							unk_0xA12407EB7D7CF146(uParam0->f_35, false, 0);
						}
						if (!unk_0x74C2FE037DFC8B4A(uParam0->f_36, 0))
						{
							unk_0xA12407EB7D7CF146(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xC1097EB02BD797F7(uParam0->f_11, uParam0->f_34, unk_0xFCA9C8367E44D3C2(uParam0->f_34, "seat_dside_f"));
						if (func_244(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xC1097EB02BD797F7(uParam0->f_12, uParam0->f_34, unk_0xFCA9C8367E44D3C2(uParam0->f_34, "seat_pside_f"));
							unk_0x4DD2EB945B4192FD(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE8444942F8401658(uParam0->f_11, 0.129f);
							unk_0xE8444942F8401658(uParam0->f_12, 0.129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xC1097EB02BD797F7(uParam0->f_12, uParam0->f_34, 0);
							unk_0x4DD2EB945B4192FD(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE8444942F8401658(uParam0->f_11, 0.145f);
							unk_0xE8444942F8401658(uParam0->f_12, 0.145f);
						}
						unk_0x8F2E6C470A0005D4(uParam0->f_36, 0, 0);
						unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 0, 0);
					}
					func_277(uParam0, 34);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 34);
				func_223(uParam0);
				if (func_285(uParam0, 34, 0))
				{
					func_232(uParam0, 18966.65f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 3))
					{
						if (func_285(uParam0, 34, 1100))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 3);
							}
						}
					}
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 4))
					{
						if (func_285(uParam0, 34, 1100))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 3))
					{
						if (func_285(uParam0, 34, 1000))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_35, 0))
					{
						unk_0xA12407EB7D7CF146(uParam0->f_35, true, 0);
					}
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_36, 0))
					{
						unk_0xA12407EB7D7CF146(uParam0->f_36, false, 0);
					}
					if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_34, 0))
					{
						unk_0xFDBDFC454E44A5BF(unk_0x18F7BE9ACB7D08F4(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 0, 0);
					}
					func_277(uParam0, 35);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 35);
				func_223(uParam0);
				if (func_285(uParam0, 35, 0))
				{
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 5))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 4))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 4);
						}
					}
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 5))
					{
						if (func_285(uParam0, 36, -3750))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_34, 0))
					{
						unk_0x505B5B32CED3A500(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xEEBA7A992DA7B65A(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x2A2BB8210FB20081(uParam0->f_7, 33.3479f);
						unk_0x24144CB94D75CE91(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x2C535610856B3F4D(uParam0->f_7, 1);
						if (!unk_0x74C2FE037DFC8B4A(uParam0->f_35, 0))
						{
							unk_0xA12407EB7D7CF146(uParam0->f_35, false, 0);
						}
						if (!unk_0x74C2FE037DFC8B4A(uParam0->f_36, 0))
						{
							unk_0xA12407EB7D7CF146(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xC1097EB02BD797F7(uParam0->f_11, uParam0->f_34, unk_0xFCA9C8367E44D3C2(uParam0->f_34, "seat_dside_f"));
						if (func_244(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xC1097EB02BD797F7(uParam0->f_12, uParam0->f_34, unk_0xFCA9C8367E44D3C2(uParam0->f_34, "seat_pside_f"));
							unk_0x4DD2EB945B4192FD(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE8444942F8401658(uParam0->f_11, 0.363f);
							unk_0xE8444942F8401658(uParam0->f_12, 0.363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xC1097EB02BD797F7(uParam0->f_12, uParam0->f_34, 0);
							unk_0x4DD2EB945B4192FD(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE8444942F8401658(uParam0->f_11, 0.298f);
							unk_0xE8444942F8401658(uParam0->f_12, 0.298f);
						}
						unk_0x8F2E6C470A0005D4(uParam0->f_36, 0, 0);
						unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 0, 0);
					}
					func_277(uParam0, 36);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 36);
				func_223(uParam0);
				if (func_285(uParam0, 36, 0))
				{
					func_232(uParam0, 42700.96f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 6))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 6))
					{
						if (func_285(uParam0, 36, 1000))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_35, 0))
					{
						unk_0xA12407EB7D7CF146(uParam0->f_35, true, 0);
					}
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_36, 0))
					{
						unk_0xA12407EB7D7CF146(uParam0->f_36, false, 0);
					}
					if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_34, 0))
					{
						unk_0xFDBDFC454E44A5BF(unk_0x18F7BE9ACB7D08F4(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 0, 0);
					}
					func_277(uParam0, 37);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 37);
				func_223(uParam0);
				if (func_285(uParam0, 37, 0))
				{
					func_232(uParam0, 51033.28f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 7))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 7);
						}
					}
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 8))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 9))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 7))
					{
						if (func_285(uParam0, 37, 2500))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 38);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 38);
				func_223(uParam0);
				if (func_285(uParam0, 38, 0))
				{
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 8))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 9))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 9);
						}
					}
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 31))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_244(uParam0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 31))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 31);
						}
					}
				}
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_34, 0))
					{
						unk_0x505B5B32CED3A500(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xEEBA7A992DA7B65A(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x2A2BB8210FB20081(uParam0->f_7, 33.3479f);
						unk_0x24144CB94D75CE91(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x2C535610856B3F4D(uParam0->f_7, 1);
						if (!unk_0x74C2FE037DFC8B4A(uParam0->f_35, 0))
						{
							unk_0xA12407EB7D7CF146(uParam0->f_35, false, 0);
						}
						if (!unk_0x74C2FE037DFC8B4A(uParam0->f_36, 0))
						{
							unk_0xA12407EB7D7CF146(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xC1097EB02BD797F7(uParam0->f_11, uParam0->f_34, unk_0xFCA9C8367E44D3C2(uParam0->f_34, "seat_dside_f"));
						if (func_244(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xC1097EB02BD797F7(uParam0->f_12, uParam0->f_34, unk_0xFCA9C8367E44D3C2(uParam0->f_34, "seat_pside_f"));
							unk_0x4DD2EB945B4192FD(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE8444942F8401658(uParam0->f_11, 0.811f);
							unk_0xE8444942F8401658(uParam0->f_12, 0.811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xC1097EB02BD797F7(uParam0->f_12, uParam0->f_34, 0);
							unk_0x4DD2EB945B4192FD(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE8444942F8401658(uParam0->f_11, 0.791f);
							unk_0xE8444942F8401658(uParam0->f_12, 0.791f);
						}
						unk_0x8F2E6C470A0005D4(uParam0->f_36, 0, 0);
						unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 0, 0);
					}
					func_277(uParam0, 39);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 39);
				func_223(uParam0);
				if (func_285(uParam0, 39, 0))
				{
					func_232(uParam0, 85050f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!unk_0xB03A1684359C50A1(uParam0->f_1, 31))
				{
					if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 31);
					}
				}
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x1EE958B38A9EC99D(9, 12, 9, 12);
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_35, 0))
					{
						unk_0xA12407EB7D7CF146(uParam0->f_35, true, 0);
					}
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_36, 0))
					{
						unk_0xA12407EB7D7CF146(uParam0->f_36, false, 0);
					}
					if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_34, 0))
					{
						unk_0xFDBDFC454E44A5BF(unk_0x18F7BE9ACB7D08F4(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 0, 0);
					}
					func_277(uParam0, 40);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 40);
				if (func_223(uParam0) && func_285(uParam0, 40, 0))
				{
					func_232(uParam0, 116366.5f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					unk_0x79BFB212E01BEEB9(0, 0, 0);
					func_279(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_277(uParam0, 41);
					unk_0xAF700B6114E8E629("CONTRAILS", 0);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 41);
				if (func_285(uParam0, 41, 0))
				{
					unk_0x021851FC22A0B487(1);
					func_232(uParam0, 127166.5f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_222(uParam0);
					func_279(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 42);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 42);
				if (func_285(uParam0, 42, 0))
				{
					unk_0x021851FC22A0B487(0);
					func_232(uParam0, 170800f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 43);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 43);
				if (func_285(uParam0, 43, 0))
				{
					unk_0x1EE958B38A9EC99D(9, 12, 9, 12);
					func_232(uParam0, 191799.8f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 44);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 44);
				if (func_285(uParam0, 44, 0))
				{
					func_232(uParam0, 196633.1f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 45);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 45);
				if (func_285(uParam0, 45, 0))
				{
					func_232(uParam0, 201466.5f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 46);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 46);
				if (func_285(uParam0, 46, 0))
				{
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_221(uParam0);
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_34, 0))
					{
						unk_0x505B5B32CED3A500(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xEEBA7A992DA7B65A(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x2A2BB8210FB20081(uParam0->f_7, 33.3479f);
						unk_0x24144CB94D75CE91(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x2C535610856B3F4D(uParam0->f_7, 1);
						if (!unk_0x74C2FE037DFC8B4A(uParam0->f_35, 0))
						{
							unk_0xA12407EB7D7CF146(uParam0->f_35, false, 0);
						}
						if (!unk_0x74C2FE037DFC8B4A(uParam0->f_36, 0))
						{
							unk_0xA12407EB7D7CF146(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xC1097EB02BD797F7(uParam0->f_11, uParam0->f_34, unk_0xFCA9C8367E44D3C2(uParam0->f_34, "seat_dside_f"));
						if (func_244(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xC1097EB02BD797F7(uParam0->f_12, uParam0->f_34, unk_0xFCA9C8367E44D3C2(uParam0->f_34, "seat_pside_f"));
							unk_0x4DD2EB945B4192FD(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE8444942F8401658(uParam0->f_11, 0.726f);
							unk_0xE8444942F8401658(uParam0->f_12, 0.74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xC1097EB02BD797F7(uParam0->f_12, uParam0->f_34, 0);
							unk_0x4DD2EB945B4192FD(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE8444942F8401658(uParam0->f_11, 0.726f);
							unk_0xE8444942F8401658(uParam0->f_12, 0.815f);
						}
						unk_0x8F2E6C470A0005D4(uParam0->f_36, 0, 0);
						unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 0, 0);
					}
					func_277(uParam0, 47);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 47);
				if (func_285(uParam0, 47, 0))
				{
					func_232(uParam0, 213066.4f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_221(uParam0);
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_35, 0))
					{
						unk_0xA12407EB7D7CF146(uParam0->f_35, true, 0);
					}
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_36, 0))
					{
						unk_0xA12407EB7D7CF146(uParam0->f_36, false, 0);
					}
					if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_34, 0))
					{
						unk_0xFDBDFC454E44A5BF(unk_0x18F7BE9ACB7D08F4(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 0, 0);
					}
					func_277(uParam0, 48);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 48);
				if (func_285(uParam0, 48, 0))
				{
					unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 3);
					func_220(uParam0, 10177.75f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_221(uParam0);
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 49);
					unk_0x62148293B793073B(uParam0, 15);
				}
				func_287(uParam0, 49);
				if (unk_0x6662DABCFF1B4AD5("FM_INTRO_DRIVE_END") && func_285(uParam0, 49, 0))
				{
					func_218(uParam0, 4500f);
					unk_0xD2A9C3F486236CC5(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_221(uParam0);
				if (!unk_0xC8AB6A5E6C1E6613())
				{
					if (!unk_0x610450B2545892B5())
					{
						unk_0x8359CF51370FC969(250);
					}
				}
				if (unk_0xB03A1684359C50A1(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						unk_0xB07D8A3BCB624BC9();
						unk_0x62148293B793073B(uParam0, 11);
					}
					func_277(uParam0, 50);
					unk_0x62148293B793073B(uParam0, 15);
				}
				if (!unk_0xB03A1684359C50A1(*uParam0, 20))
				{
					if (func_244(uParam0))
					{
						unk_0xFC829E6465CFFAC1("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0xFC829E6465CFFAC1("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (unk_0x42AFCF847E4360A0())
						{
							if (func_244(uParam0))
							{
								unk_0x029C8C7F95CB75F4("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0x029C8C7F95CB75F4("MP_1", 0, 1);
							}
						}
					}
					if (unk_0xF76283B558B032AE())
					{
						unk_0xD2A9C3F486236CC5(uParam0, 20);
					}
				}
				func_287(uParam0, 50);
				if (!unk_0x74C2FE037DFC8B4A(uParam0->f_34, 0))
				{
					if (unk_0xCD9EC66924076C1B(uParam0->f_34))
					{
						if (unk_0x2A72627520A107B5(uParam0->f_34) < 1f)
						{
							unk_0xF2106D7D1A77DBA8(uParam0->f_34);
						}
					}
				}
				if (func_285(uParam0, 50, 0) && unk_0xB03A1684359C50A1(*uParam0, 20))
				{
					if (unk_0xB03A1684359C50A1(*uParam0, 21))
					{
						unk_0x9BEA833CAF67289C("FM_INTRO_DRIVE_END");
						unk_0x62148293B793073B(uParam0, 21);
					}
					unk_0xF2106D7D1A77DBA8(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if (func_244(uParam0))
						{
							unk_0x8440A52435684AA5(unk_0x18F7BE9ACB7D08F4(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x8440A52435684AA5(unk_0x18F7BE9ACB7D08F4(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0x74C2FE037DFC8B4A(uParam0->f_35, 0))
				{
					unk_0x8440A52435684AA5(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x74C2FE037DFC8B4A(uParam0->f_34, 0))
				{
					unk_0x8440A52435684AA5(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0xD2A9C3F486236CC5(uParam0, 13);
				if (unk_0x36CC410474001FBC("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0xA11D9B06B99FE786("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0xCE82A1B9F41AE9D1(4);
				func_234(1, 1, 1, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0xEAE1A41FBC3984B1())
				{
					unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (unk_0x5AFB8ED811F05E4D() - uParam0->f_13);
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
						if (!unk_0xB03A1684359C50A1(*uParam0, 23))
						{
							if (unk_0x2D6E6D9121DADEC3("MP_Female_Character", 0))
							{
								if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
								{
									unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), unk_0x7F21F40674579303(Var1.f_0, Var1.f_1));
									unk_0xA3F41A1968319181(0);
									unk_0x4CCECEB2EA5D6A82(0, 1065353216);
									unk_0xD2A9C3F486236CC5(uParam0, 23);
								}
							}
						}
					}
					else if (!unk_0xB03A1684359C50A1(*uParam0, 23))
					{
						if (unk_0x2D6E6D9121DADEC3("MP_1", 0))
						{
							if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
							{
								unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), unk_0x7F21F40674579303(Var1.f_0, Var1.f_1));
								unk_0xA3F41A1968319181(0);
								unk_0x4CCECEB2EA5D6A82(0, 1065353216);
								unk_0xD2A9C3F486236CC5(uParam0, 23);
							}
						}
					}
				}
				if (unk_0x2D6E6D9121DADEC3("LAMAR", 0))
				{
					if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
					{
						if (!unk_0x0FAE113CE72ED842(uParam0->f_35))
						{
							if (!unk_0x657B649BA2AD3582(uParam0->f_35, 0))
							{
								unk_0xFDBDFC454E44A5BF(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (unk_0x2D6E6D9121DADEC3("MP_Lamar_Car", 0))
				{
					if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
					{
						unk_0x9B53B2691E2B1F79(uParam0->f_34, 1084227584);
					}
				}
				if (unk_0xAA006BC2D04125D0(0))
				{
					func_216(1);
					unk_0xA3F41A1968319181(0);
					unk_0x4CCECEB2EA5D6A82(0, 1065353216);
				}
				if (!func_215(unk_0x8CFC7D6E1DA5D304()))
				{
					func_214(1);
				}
				if (unk_0xEAE1A41FBC3984B1())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x5AFB8ED811F05E4D() - (uParam0->f_30 + unk_0x63C1E7AE5873BEA0()));
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
							if (unk_0x31F12808DC47A9E5(uParam0->f_36))
							{
								unk_0x63C116C2153FAA3C(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					unk_0x5A57025A0D4ABEDF();
					unk_0x294D1ED09EF7F3BF();
					if (!unk_0xE3E6E9EE5D071BD0())
					{
						unk_0xFF0F9807F8F0062F(0);
					}
					func_234(0, 1, 1, 0);
					unk_0x62148293B793073B(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0xEAE1A41FBC3984B1())
				{
					unk_0xCDA9878BAC5C6D68();
				}
				else if (!unk_0xB03A1684359C50A1(*uParam0, 17))
				{
					if (unk_0xEC0ECEF2AF3FDA8D())
					{
						unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
						unk_0xD2A9C3F486236CC5(uParam0, 13);
						unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), true);
						if (uParam0->f_292)
						{
							unk_0xB07D8A3BCB624BC9();
							unk_0x62148293B793073B(uParam0, 11);
						}
						func_180(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						unk_0xD2A9C3F486236CC5(uParam0, 17);
					}
					else if (!unk_0xBC13F084F3B1B544())
					{
						unk_0xFF91FEC6E57575E4(250);
					}
				}
				else if (func_181(&(uParam0->f_17), 10000, 0))
				{
					if (func_212(uParam0))
					{
						func_280(uParam0);
						func_228(uParam0);
						if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
						{
							unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), false);
							if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
							{
								unk_0xF342BF6A7A4C7A8F(unk_0x18F7BE9ACB7D08F4(), true, 0);
								unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 61.3164f);
							}
						}
						if (!unk_0x0FAE113CE72ED842(uParam0->f_35))
						{
							if (!unk_0x657B649BA2AD3582(uParam0->f_35, 0))
							{
								if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
								{
									unk_0xFDBDFC454E44A5BF(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_216(1);
						if (!func_215(unk_0x8CFC7D6E1DA5D304()))
						{
							func_214(1);
						}
						func_234(0, 1, 1, 0);
						unk_0x79BFB212E01BEEB9(0, 0, 0);
						if (unk_0xB03A1684359C50A1(*uParam0, 21))
						{
							unk_0x9BEA833CAF67289C("FM_INTRO_DRIVE_END");
							unk_0x62148293B793073B(uParam0, 21);
						}
						unk_0xD2A9C3F486236CC5(uParam0, 1);
						unk_0xD2A9C3F486236CC5(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0xEAE1A41FBC3984B1())
				{
					unk_0xCDA9878BAC5C6D68();
				}
				else if (!unk_0xB03A1684359C50A1(*uParam0, 17))
				{
					if (unk_0xEC0ECEF2AF3FDA8D())
					{
						unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
						unk_0xD2A9C3F486236CC5(uParam0, 13);
						unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), true);
						if (uParam0->f_292)
						{
							unk_0xB07D8A3BCB624BC9();
							unk_0x62148293B793073B(uParam0, 11);
						}
						func_180(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						unk_0xD2A9C3F486236CC5(uParam0, 17);
					}
					else if (!unk_0xBC13F084F3B1B544())
					{
						unk_0xFF91FEC6E57575E4(250);
					}
				}
				else if (func_181(&(uParam0->f_17), 10000, 0))
				{
					if (func_264(uParam0))
					{
						func_280(uParam0);
						func_228(uParam0);
						if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
						{
							unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), false);
							if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
							{
								unk_0xF342BF6A7A4C7A8F(unk_0x18F7BE9ACB7D08F4(), true, 0);
								unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 61.3164f);
								if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
								{
									unk_0xFDBDFC454E44A5BF(unk_0x18F7BE9ACB7D08F4(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!unk_0x0FAE113CE72ED842(uParam0->f_35))
						{
							if (!unk_0x657B649BA2AD3582(uParam0->f_35, 0))
							{
								if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
								{
									unk_0xFDBDFC454E44A5BF(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_215(unk_0x8CFC7D6E1DA5D304()))
						{
						}
						func_234(0, 1, 1, 0);
						if (unk_0xB03A1684359C50A1(*uParam0, 21))
						{
							unk_0x9BEA833CAF67289C("FM_INTRO_DRIVE_END");
							unk_0x62148293B793073B(uParam0, 21);
						}
						unk_0x8359CF51370FC969(250);
						unk_0x79BFB212E01BEEB9(0, 0, 0);
						unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 3);
						uParam0->f_13 = (unk_0x5AFB8ED811F05E4D() - func_209(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_220(uParam0, 10177.75f);
						unk_0xD2A9C3F486236CC5(uParam0, 15);
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
					unk_0xB07D8A3BCB624BC9();
					unk_0x62148293B793073B(uParam0, 11);
				}
				if (!unk_0x0FAE113CE72ED842(uParam0->f_35))
				{
					unk_0x73E31FC09D8359DB(uParam0->f_35, -1);
					unk_0x10F31830C95ED2E5(uParam0->f_35, 1);
				}
				unk_0x4EE74819814600BB(1);
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
				uParam0->f_289 = unk_0xBBDA792448DB5A89((unk_0x5AFB8ED811F05E4D() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = unk_0xBBDA792448DB5A89(func_217(uParam0));
			}
			uParam0->f_290 = func_197(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && unk_0xB03A1684359C50A1(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				unk_0x72C7C9FDE1759945(uParam0->f_289);
			}
			else
			{
				unk_0x72C7C9FDE1759945(uParam0->f_290);
			}
		}
		func_194(uParam0);
		if (unk_0xB03A1684359C50A1(*uParam0, 12))
		{
			if (func_254())
			{
				func_193();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
				{
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), false, 60);
				}
			}
			func_191(uParam0);
			unk_0x94881549299504FD();
			unk_0xE05212008FE9A018(9);
			unk_0xE05212008FE9A018(7);
			unk_0xE05212008FE9A018(18);
			unk_0xE05212008FE9A018(6);
			unk_0xE05212008FE9A018(3);
			unk_0xE05212008FE9A018(13);
			unk_0xE05212008FE9A018(4);
		}
		if (Global_2512581.f_1821)
		{
			unk_0xB156023E2D4E4859(2, 187, 1);
		}
	}
	return 0;
}

void func_191(var uParam0)
{
	var uVar0;
	
	if (!unk_0xB03A1684359C50A1(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!unk_0x3AB73ED02FDAC9A8())
			{
				if (!unk_0xACB55959DB871ABF())
				{
					uVar0 = unk_0x8CFC7D6E1DA5D304() + 32;
					unk_0x9DF67B7E20CCE422(1, uVar0);
					func_192(1);
					unk_0xD2A9C3F486236CC5(uParam0, 9);
				}
			}
			else
			{
				func_192(1);
				unk_0xD2A9C3F486236CC5(uParam0, 9);
			}
		}
	}
}

void func_192(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142, 18))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 18);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142, 18))
	{
		unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 18);
	}
}

void func_193()
{
	unk_0x5E70D9959D6F2350(Global_1315661, 255, 255, 255, 255, 0);
	if (Global_1315663 == 0)
	{
		unk_0x76F4FB5EFF5BDED5(Global_1315661, "SET_BIG_LOGO_VISIBLE");
		unk_0x22DD5585E00B80C3(1);
		unk_0xD6F1BD29497A51C8(1);
		unk_0xE2B30EB9B14EEAB2();
		Global_1315663 = 1;
	}
}

void func_194(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x31F12808DC47A9E5(uParam0->f_58[uParam0->f_90]))
	{
		if (unk_0x74C2FE037DFC8B4A(uParam0->f_58[uParam0->f_90], 0))
		{
		}
		Var0 = { unk_0x761660F5CE986DC4(uParam0->f_58[uParam0->f_90], 1) };
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
	
	if (unk_0x31F12808DC47A9E5(uParam0->f_58[iParam1]))
	{
		if (unk_0x74C2FE037DFC8B4A(uParam0->f_58[iParam1], 0))
		{
		}
		func_196(iParam1, &Var0, &fVar3);
		unk_0x990FFD4FB6ADD630(uParam0->f_58[iParam1], Var0, 1, 0, 0, 1);
		unk_0xB88121FF8A34A66F(uParam0->f_58[iParam1], fVar3);
		unk_0x73D7E57BF0ED7FEB(uParam0->f_58[iParam1], true);
		unk_0x0901CE00CFBB408F(uParam0->f_58[iParam1]);
		unk_0xF342BF6A7A4C7A8F(uParam0->f_58[iParam1], false, 0);
		unk_0xA12407EB7D7CF146(uParam0->f_58[iParam1], false, 0);
	}
	if (unk_0x31F12808DC47A9E5(uParam0->f_74[iParam1]))
	{
		if (unk_0x74C2FE037DFC8B4A(uParam0->f_74[iParam1], 0))
		{
		}
		unk_0xA12407EB7D7CF146(uParam0->f_74[iParam1], false, 0);
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
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0x63C1E7AE5873BEA0()));
			if (unk_0xB66F760FC616D603() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / unk_0xBBDA792448DB5A89(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0x63C1E7AE5873BEA0()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_198(var uParam0)
{
	if (unk_0xB03A1684359C50A1(*uParam0, 29))
	{
		unk_0x2F783C5AC635C44B(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		unk_0x2F783C5AC635C44B(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_199(var uParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xB03A1684359C50A1(*uParam0, 0))
	{
		if (unk_0xEAE1A41FBC3984B1())
		{
			unk_0xFF0F9807F8F0062F(0);
		}
		unk_0xE3BE2A8D1196BE5E(0);
		if (uParam0->f_292)
		{
			unk_0x7A79EAE8B7A454B1(0);
			unk_0xB07D8A3BCB624BC9();
			unk_0x62148293B793073B(uParam0, 11);
		}
		if (unk_0xB03A1684359C50A1(*uParam0, 14))
		{
			unk_0x4A918952774CFC67();
			unk_0x62148293B793073B(uParam0, 14);
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
		unk_0x6D88D1D62502CEFC();
		if (bParam2)
		{
			if (unk_0x31F12808DC47A9E5(uParam0->f_34))
			{
				unk_0x4F5FF3F3FDCAB15D(&(uParam0->f_34));
			}
			if (unk_0x31F12808DC47A9E5(uParam0->f_35))
			{
				unk_0xDBE64C5761554FBF(&(uParam0->f_35));
			}
		}
		if (unk_0x31F12808DC47A9E5(uParam0->f_36))
		{
			unk_0x63C116C2153FAA3C(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			func_366(0);
		}
		func_205();
		func_200();
		func_234(0, 1, 1, 0);
		unk_0xFF85AEF2518662A1(0, -1);
		unk_0x9A70D1B91A853FDD(1);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (unk_0x7DF51A716BE7A07F())
			{
				unk_0x38451EAF24F8D818(0, 1);
			}
		}
		if (unk_0xB03A1684359C50A1(*uParam0, 21))
		{
			unk_0x9BEA833CAF67289C("FM_INTRO_DRIVE_END");
			unk_0x62148293B793073B(uParam0, 21);
		}
		unk_0x902B266F0C9509A8(0);
		func_326(1);
		if (unk_0xB03A1684359C50A1(*uParam0, 26))
		{
			func_320(1, 0);
			unk_0x62148293B793073B(uParam0, 26);
		}
		Global_2436169.f_3611 = 0;
		if (!unk_0x51CFE20A158947F4())
		{
			unk_0x15C6442A649E0865(0);
		}
		unk_0x93553958B8FC325B(1);
		if (bParam1)
		{
		}
		func_177(0);
		func_189(1);
		Global_2512581.f_1821 = 0;
		Global_2512581.f_1820 = 0;
		if (unk_0x36CC410474001FBC("MP_INTRO_RACE_SCENE"))
		{
			unk_0xA11D9B06B99FE786("MP_INTRO_RACE_SCENE");
		}
		if (unk_0x36CC410474001FBC("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0xA11D9B06B99FE786("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_301(14, 1);
		unk_0x945880A1F9FE9E4F(5);
		unk_0xAF700B6114E8E629("CONTRAILS", 0);
		unk_0xFD32699B58C2E7EF(5, "FMINTRO");
		unk_0xFD32699B58C2E7EF(6, "FMINTRO");
		unk_0xFD32699B58C2E7EF(7, "FMINTRO");
		unk_0x334F1DD67B2EC86A("mp_intro_seq@");
		unk_0x334F1DD67B2EC86A("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x334F1DD67B2EC86A("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0x334F1DD67B2EC86A("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0xE769D9B5158D0F11(unk_0x9428CB8F0BB12770()))
		{
			unk_0x0590222010A36CE4(unk_0x9428CB8F0BB12770(), 0.7f);
		}
		unk_0x894C7AD708C5229D(0);
		unk_0xA3F41A1968319181(0);
		unk_0x4CCECEB2EA5D6A82(0, 1065353216);
		if (unk_0x44243F2E2F58B8E3())
		{
			unk_0x7F2E59ADFBF9E060();
			unk_0x4EE74819814600BB(1);
		}
		unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), false);
		if (!unk_0xC8AB6A5E6C1E6613() && !unk_0x610450B2545892B5())
		{
			unk_0x8359CF51370FC969(800);
		}
		unk_0xD2A9C3F486236CC5(uParam0, 0);
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
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0xD2A9C3F486236CC5(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_77(0))
		{
			func_202(0);
		}
	}
	else if (Global_14453.f_1 == 1)
	{
		if (!Global_14453.f_1 == 0)
		{
			Global_14453.f_1 = 3;
		}
	}
}

void func_202(int iParam0)
{
	if (Global_14615)
	{
		func_203(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_149())
	{
		Global_14453.f_1 = 3;
	}
}

void func_203(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_77(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

void func_204()
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_205()
{
	if (!Global_1312568)
	{
		return;
	}
	func_206();
}

void func_206()
{
	Global_1312568 = 0;
	StringCopy(&(Global_1312568.f_1), "", 24);
	Global_1312568.f_7 = 0;
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
	unk_0x1CA52524A2283CF0(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	unk_0x1CA52524A2283CF0(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
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
	unk_0x9016574B77A748EE(iVar0);
	unk_0x9016574B77A748EE(iVar1);
	if (unk_0xEDFE27D1AEA0EA7F(iVar0) && unk_0xEDFE27D1AEA0EA7F(iVar1))
	{
		if (!unk_0x31F12808DC47A9E5(uParam0->f_34))
		{
			uParam0->f_34 = unk_0x3064CCF56C6C32BC(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0, 0);
			unk_0x5C1B427FF1EDA9C6(uParam0->f_34, 1);
			unk_0xA0611ED281CB47AA(uParam0->f_34, 0);
			unk_0x8BA533846256EA8E(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			unk_0x91663DAD5DDAFA96(uParam0->f_34, 2);
		}
		else if (!unk_0x31F12808DC47A9E5(uParam0->f_35))
		{
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0x364B87C5C64BD100(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, 0);
				unk_0x40E2910BAF39B1C7(uParam0->f_35, 1);
				unk_0xF74B493CCF90C997(uParam0->f_34, 1);
				unk_0xF74B493CCF90C997(uParam0->f_35, 1);
				unk_0x641E77554763EF06(uParam0->f_35, unk_0x773D11D22FA84F6D(unk_0x18F7BE9ACB7D08F4()));
				unk_0x8BA533846256EA8E(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0x31F12808DC47A9E5(uParam0->f_34) || !unk_0x31F12808DC47A9E5(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_213(var uParam0, int iParam1)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_58[iParam1]))
	{
		unk_0xBECECD970F645217(&(uParam0->f_58[iParam1]));
	}
	if (unk_0x31F12808DC47A9E5(uParam0->f_74[iParam1]))
	{
		unk_0x63C116C2153FAA3C(&(uParam0->f_74[iParam1]));
	}
}

void func_214(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_146), 22);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_146), 22);
	}
}

bool func_215(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_146, 22);
}

void func_216(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 4);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 4);
	}
}

int func_217(var uParam0)
{
	if (uParam0->f_6 < 31)
	{
		return unk_0x846A02507A14AF52();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + unk_0x63C1E7AE5873BEA0());
	}
	return (uParam0->f_28 + unk_0x846A02507A14AF52());
}

void func_218(var uParam0, float fParam1)
{
	func_219(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_219(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0, 0))
	{
		if (bParam4)
		{
			unk_0xF2106D7D1A77DBA8(uParam0);
			unk_0xF81720737A9C0B6E(uParam0, iParam1, sParam2, 1);
		}
		else if (!unk_0xCD9EC66924076C1B(uParam0))
		{
			unk_0xF81720737A9C0B6E(uParam0, iParam1, sParam2, 1);
			unk_0x3DBBC15111C86253(uParam0, 1);
		}
		else
		{
			iVar0 = unk_0x267E17A905064537(iParam1, sParam2);
			if (unk_0xC966819F88EE3A5A(uParam0) != iVar0)
			{
				unk_0xF81720737A9C0B6E(uParam0, iParam1, sParam2, 1);
				unk_0x3DBBC15111C86253(uParam0, 1);
			}
		}
		unk_0x1177B8213A377DCE(uParam0, (fParam3 - unk_0xC4CA401C61A2A0C1(uParam0)));
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
		iVar0 = unk_0x6E987D62C8535B6E("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0xC542C0B6386400EF(iVar1))
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
		if (unk_0x31F12808DC47A9E5(uParam0->f_37[iVar0]))
		{
			unk_0x63C116C2153FAA3C(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0x419C9117019F2E5A(joaat("g_m_y_mexgoon_02"));
	unk_0x334F1DD67B2EC86A("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0x334F1DD67B2EC86A("amb@world_human_hang_out_street@male_a@base");
}

int func_223(var uParam0)
{
	int iVar0;
	
	if (unk_0xB03A1684359C50A1(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0x9016574B77A748EE(joaat("g_m_y_mexgoon_02"));
		unk_0x831CD0FBFB26EC7E("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x831CD0FBFB26EC7E("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0xEDFE27D1AEA0EA7F(joaat("g_m_y_mexgoon_02")) && unk_0x028356968FDD2DF2("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0x028356968FDD2DF2("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0x31F12808DC47A9E5(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = unk_0x364B87C5C64BD100(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, 0);
					unk_0xF74B493CCF90C997(uParam0->f_37[iVar0], 1);
					unk_0x40E2910BAF39B1C7(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							unk_0x981A584B2E775D45(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							unk_0x981A584B2E775D45(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							unk_0x981A584B2E775D45(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							unk_0x981A584B2E775D45(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							unk_0x981A584B2E775D45(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							unk_0x990FFD4FB6ADD630(uParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							unk_0xB88121FF8A34A66F(uParam0->f_37[iVar0], 76.8852f);
							unk_0x7D154B840BD03D00(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0x73D7E57BF0ED7FEB(uParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0x981A584B2E775D45(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							unk_0x990FFD4FB6ADD630(uParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							unk_0xB88121FF8A34A66F(uParam0->f_37[iVar0], 87.5786f);
							unk_0x7D154B840BD03D00(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0x73D7E57BF0ED7FEB(uParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0x981A584B2E775D45(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							unk_0x981A584B2E775D45(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0x31F12808DC47A9E5(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x419C9117019F2E5A(joaat("g_m_y_mexgoon_02"));
		unk_0x334F1DD67B2EC86A("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x334F1DD67B2EC86A("amb@world_human_hang_out_street@male_a@base");
		unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 5);
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
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 1;
	Global_16749 = 0;
	Global_16753 = 0;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_146(sParam2, iParam4, 0);
}

void func_225(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!unk_0xB03A1684359C50A1(*uParam0, 25))
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
			if (!unk_0x0FAE113CE72ED842(uParam0->f_98[iVar0]) && unk_0xC4B84EB67F78C1F0(uParam0->f_92[iVar0], 0))
			{
				unk_0x73D7E57BF0ED7FEB(uParam0->f_92[iVar0], false);
				unk_0xFBD899EB9A2EF7F4(uParam0->f_92[iVar0], 10f);
				unk_0x0F36ED260B9B4408(uParam0->f_98[iVar0], uParam0->f_92[iVar0], Var1, 5f, 0, unk_0x4F69FBD64CDF125B(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0xD2A9C3F486236CC5(uParam0, 25);
	}
}

int func_226(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (unk_0xB03A1684359C50A1(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = joaat("shamal");
	unk_0x9016574B77A748EE(iVar5);
	unk_0x9016574B77A748EE(func_227());
	if (unk_0xEDFE27D1AEA0EA7F(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x31F12808DC47A9E5(uParam0->f_92[iVar0]))
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
				uParam0->f_92[iVar0] = unk_0x3064CCF56C6C32BC(iVar5, Var1, fVar4, 0, 0, 0);
				unk_0x9B53B2691E2B1F79(uParam0->f_92[iVar0], 1084227584);
				unk_0x73D7E57BF0ED7FEB(uParam0->f_92[iVar0], true);
				unk_0x91663DAD5DDAFA96(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0x31F12808DC47A9E5(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0xEDFE27D1AEA0EA7F(func_227()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x31F12808DC47A9E5(uParam0->f_98[iVar0]))
			{
				if (unk_0x31F12808DC47A9E5(uParam0->f_92[iVar0]))
				{
					if (unk_0xC4B84EB67F78C1F0(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = unk_0xC52E83A4C0F88DAB(uParam0->f_92[iVar0], 4, func_227(), -1, 0, false);
						unk_0x40E2910BAF39B1C7(uParam0->f_98[iVar0], 1);
						unk_0x0F3F86C855582784(uParam0->f_92[iVar0], 1, 1, 0);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0x419C9117019F2E5A(iVar5);
	unk_0x419C9117019F2E5A(func_227());
	unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 11);
	return 1;
}

int func_227()
{
	return unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4());
}

void func_228(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x31F12808DC47A9E5(uParam0->f_92[iVar0]))
		{
			unk_0xBECECD970F645217(&(uParam0->f_92[iVar0]));
		}
		if (unk_0x31F12808DC47A9E5(uParam0->f_98[iVar0]))
		{
			unk_0x63C116C2153FAA3C(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0x419C9117019F2E5A(joaat("shamal"));
	unk_0x419C9117019F2E5A(func_227());
}

void func_229(var uParam0)
{
	int iVar0;
	
	if (unk_0xB03A1684359C50A1(uParam0->f_3, 2))
	{
		unk_0x419C9117019F2E5A(joaat("p_cs_mp_jet_01_s"));
		if (unk_0x31F12808DC47A9E5(uParam0->f_33))
		{
			unk_0x5BE35A26B9097351(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (unk_0x91EBF69195E33B5E(uParam0->f_120))
			{
				unk_0x6A2790768C90B24C(uParam0->f_120, 0);
			}
			if (unk_0x91EBF69195E33B5E(uParam0->f_121))
			{
				unk_0x6A2790768C90B24C(uParam0->f_121, 0);
			}
			if (unk_0x8851E7053F291F92())
			{
				unk_0xDB38C3D40ACF4B3D();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0x31F12808DC47A9E5(uParam0->f_104[iVar0]))
			{
				unk_0x63C116C2153FAA3C(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0x62148293B793073B(&(uParam0->f_3), 2);
	}
}

int func_230(var uParam0)
{
	if (func_244(uParam0))
	{
		unk_0x831CD0FBFB26EC7E("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x831CD0FBFB26EC7E("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x028356968FDD2DF2("mp_intro_seq@ig_1_lamar_drive_female") && unk_0x028356968FDD2DF2("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0x831CD0FBFB26EC7E("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0x831CD0FBFB26EC7E("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x028356968FDD2DF2("mp_intro_seq@ig_1_lamar_drive_male") && unk_0x028356968FDD2DF2("mp_intro_seq@ig_1_lamar_drive_radio"))
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
	if (!unk_0xB03A1684359C50A1(uParam0->f_3, 10))
	{
		unk_0x9016574B77A748EE(iVar0);
		if (unk_0xEDFE27D1AEA0EA7F(iVar0))
		{
			if (!unk_0x31F12808DC47A9E5(uParam0->f_36))
			{
				uParam0->f_36 = unk_0x364B87C5C64BD100(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, 0);
				unk_0x40E2910BAF39B1C7(uParam0->f_36, 1);
				unk_0xF74B493CCF90C997(uParam0->f_36, 1);
				unk_0xA12407EB7D7CF146(uParam0->f_36, false, 0);
				unk_0x641E77554763EF06(uParam0->f_36, unk_0x773D11D22FA84F6D(unk_0x18F7BE9ACB7D08F4()));
				unk_0x8BA533846256EA8E(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				func_367(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0x31F12808DC47A9E5(uParam0->f_36))
		{
			return 0;
		}
		unk_0x419C9117019F2E5A(iVar0);
		unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 10);
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
	
	unk_0x419C9117019F2E5A(func_247());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_248(uParam0, iVar0);
		iVar0++;
	}
	if (unk_0x31F12808DC47A9E5(uParam0->f_91))
	{
		unk_0x63C116C2153FAA3C(&(uParam0->f_91));
	}
}

void func_234(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_241(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_149())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_240(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_241(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_240(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_238(unk_0x8CFC7D6E1DA5D304())) && !func_236(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_235())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_238(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_235()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_236(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_237(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
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
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
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
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_239()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_240(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_241(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

void func_242(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_104[iVar0], 0))
		{
			unk_0x0ACEE7BC79EA804E(uParam0->f_104[iVar0]);
			unk_0x8440A52435684AA5(uParam0->f_104[iVar0], func_243(iVar0), 0, 0, 64);
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
	return func_246(unk_0x8CFC7D6E1DA5D304());
}

int func_246(int iParam0)
{
	if (unk_0x4F69FBD64CDF125B(unk_0x6604E096142B4B55(iParam0)) == joaat("mp_f_freemode_01"))
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
	unk_0x419C9117019F2E5A(func_249(iParam1));
	if (unk_0x31F12808DC47A9E5(uParam0->f_49[iParam1]))
	{
		if (unk_0xC4B84EB67F78C1F0(uParam0->f_49[iParam1], 0))
		{
		}
		unk_0xB067E83A842DA5E4(uParam0->f_49[iParam1]);
		unk_0xBECECD970F645217(&(uParam0->f_49[iParam1]));
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
	Global_1315663 = 0;
	if (unk_0x5C716BBF766E1C70(Global_1315661))
	{
		unk_0x76F4FB5EFF5BDED5(Global_1315661, "SET_BIG_LOGO_VISIBLE");
		unk_0x22DD5585E00B80C3(1);
		unk_0xD6F1BD29497A51C8(0);
		unk_0xE2B30EB9B14EEAB2();
		unk_0xEBE532BFFE618875(&Global_1315661);
	}
}

void func_251(var uParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0x31F12808DC47A9E5(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			unk_0xD3CBE4DA6FF850F6(&uVar0);
		}
		if (unk_0x31F12808DC47A9E5(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			unk_0xD3CBE4DA6FF850F6(&uVar0);
		}
		iVar1++;
	}
	unk_0x419C9117019F2E5A(joaat("cheetah"));
	unk_0x419C9117019F2E5A(joaat("monroe"));
	unk_0x419C9117019F2E5A(joaat("entityxf"));
	unk_0x419C9117019F2E5A(joaat("feltzer2"));
	unk_0xFD32699B58C2E7EF(100, "FM_Intro_uber");
	unk_0xFD32699B58C2E7EF(101, "FM_Intro_uber");
	unk_0xFD32699B58C2E7EF(102, "FM_Intro_uber");
	unk_0xFD32699B58C2E7EF(103, "FM_Intro_uber");
	unk_0xFD32699B58C2E7EF(104, "FM_Intro_uber");
	unk_0x334F1DD67B2EC86A("mp_intro_seq@");
}

void func_252(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_49[2]))
	{
		if (unk_0xC4B84EB67F78C1F0(uParam0->f_49[2], 0))
		{
			unk_0xC1F655982D4E5525(uParam0->f_49[2]);
		}
	}
	if (unk_0x31F12808DC47A9E5(uParam0->f_49[4]))
	{
		if (unk_0xC4B84EB67F78C1F0(uParam0->f_49[4], 0))
		{
			unk_0xC1F655982D4E5525(uParam0->f_49[4]);
		}
	}
}

void func_253(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_49[2]))
	{
		if (unk_0xC4B84EB67F78C1F0(uParam0->f_49[2], 0))
		{
			unk_0xC6D32B0FDD8821E4(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_254()
{
	if (unk_0x49DD6443D0B1EA1E())
	{
		return 0;
	}
	if (!unk_0x5C716BBF766E1C70(Global_1315661))
	{
		Global_1315661 = unk_0xBD7D7877C82BE42F("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_255(var uParam0, char* sParam1, char* sParam2, var uParam3, struct<3> Param4, struct<3> Param7)
{
	if (unk_0x31F12808DC47A9E5(uParam3))
	{
		if (unk_0x74C2FE037DFC8B4A(uParam3, 0))
		{
		}
		if (!unk_0x5400DC5FAEBF30F0(uParam0->f_8))
		{
			uParam0->f_8 = unk_0x5E35D8CCDF065701("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = unk_0x3C3438327FFEB224(Param4, Param7, 2);
		unk_0xC1097EB02BD797F7(uParam0->f_9, uParam3, 0);
		unk_0xFB34CCC40E7806C4(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		unk_0x2C535610856B3F4D(uParam0->f_8, 1);
		unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 1, 0);
	}
}

void func_256(var uParam0)
{
	if (!unk_0xB03A1684359C50A1(uParam0->f_3, 3))
	{
		unk_0x6B616FD60F46B2FB("CONTRAILS");
		if (func_244(uParam0))
		{
			unk_0x2638484EFB343584("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0x2638484EFB343584("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0x42AFCF847E4360A0())
		{
			if (uParam0->f_295)
			{
				if (func_244(uParam0))
				{
					unk_0x029C8C7F95CB75F4("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0x029C8C7F95CB75F4("MP_Male_Character", 0, 1);
				}
			}
			func_257();
		}
		if (unk_0xF76283B558B032AE())
		{
			unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 3);
		}
	}
}

void func_257()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0x029C8C7F95CB75F4(func_243(iVar0), 0, 1);
		iVar0++;
	}
}

int func_258(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!unk_0xB03A1684359C50A1(uParam0->f_3, 2))
	{
		unk_0x9016574B77A748EE(joaat("p_cs_mp_jet_01_s"));
		unk_0x9016574B77A748EE(joaat("mp_m_freemode_01"));
		unk_0x9016574B77A748EE(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			unk_0xF43D99776B580DA7();
		}
		if (((unk_0xEDFE27D1AEA0EA7F(joaat("p_cs_mp_jet_01_s")) && unk_0xEDFE27D1AEA0EA7F(joaat("mp_m_freemode_01"))) && unk_0xEDFE27D1AEA0EA7F(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || unk_0x8851E7053F291F92()))
		{
			uParam0->f_33 = unk_0x7082ECB3731CD86C(joaat("p_cs_mp_jet_01_s"), Var1, 0, 0, 0);
			unk_0xC74F690FB603E9C5(uParam0->f_33, 3000);
			unk_0xB05881241072FEE6(uParam0->f_33, 0);
			unk_0xA12407EB7D7CF146(uParam0->f_33, false, 0);
			if (uParam0->f_294)
			{
				uParam0->f_120 = unk_0xB819E2CDF1D7AC76("scr_mp_intro_plane_exhaust", uParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = unk_0xB819E2CDF1D7AC76("scr_mp_intro_plane_exhaust", uParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
					uParam0->f_104[iVar0] = unk_0x364B87C5C64BD100(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = unk_0x364B87C5C64BD100(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				if (func_260(uParam0, iVar0))
				{
					if (!unk_0x74C2FE037DFC8B4A(unk_0x6604E096142B4B55(unk_0x3479F6F64A48251C(uParam0->f_112[iVar0])), 0))
					{
					}
					unk_0xC390B6B28B78920E(unk_0x6604E096142B4B55(unk_0x3479F6F64A48251C(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					unk_0x0ACEE7BC79EA804E(uParam0->f_104[iVar0]);
				}
				else
				{
					func_259(uParam0, iVar0);
				}
				iVar0++;
			}
			unk_0x419C9117019F2E5A(joaat("p_cs_mp_jet_01_s"));
			unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 2);
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
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 1);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 2);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 3);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 4);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 5);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 6);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 7);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 1);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 2);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 3);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 4);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 5);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 6);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 7);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 1);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 2);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 3);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 4);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 5);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 6);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 7);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 1);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 2);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 3);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 4);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 5);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 6);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 7);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 1);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 2);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 3);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 4);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 5);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 6);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 7);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 1);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 2);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 3);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 4);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 5);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 6);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 7);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 0);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 1);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 2);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 3);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 4);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 5);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 6);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 7);
			unk_0xB4B486C789609375(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_260(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_12(unk_0x3479F6F64A48251C(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_261(var uParam0, int iParam1)
{
	if (func_260(uParam0, iParam1))
	{
		return func_246(unk_0x3479F6F64A48251C(uParam0->f_112[iParam1]));
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
		iVar2 = unk_0x3479F6F64A48251C(iVar1);
		if (func_12(iVar2, 0, 1))
		{
			if (unk_0x8CFC7D6E1DA5D304() != iVar2)
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
	if (unk_0xB03A1684359C50A1(uParam0->f_3, 9))
	{
		return 1;
	}
	unk_0x9016574B77A748EE(iVar0);
	unk_0x9016574B77A748EE(iVar1);
	unk_0xAE5F484E08487A0F(5, "FMINTRO");
	unk_0xAE5F484E08487A0F(6, "FMINTRO");
	unk_0xAE5F484E08487A0F(7, "FMINTRO");
	unk_0x831CD0FBFB26EC7E("mp_intro_seq@");
	if (((((unk_0xEDFE27D1AEA0EA7F(iVar0) && unk_0xEDFE27D1AEA0EA7F(iVar1)) && unk_0x53500A7D168BF5F6(5, "FMINTRO")) && unk_0x53500A7D168BF5F6(6, "FMINTRO")) && unk_0x53500A7D168BF5F6(7, "FMINTRO")) && unk_0x028356968FDD2DF2("mp_intro_seq@"))
	{
		if (!unk_0x31F12808DC47A9E5(uParam0->f_34))
		{
			unk_0x7EE425AE3317BA69(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = unk_0x3064CCF56C6C32BC(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0, 0);
			unk_0x5C1B427FF1EDA9C6(uParam0->f_34, 1);
			unk_0xA0611ED281CB47AA(uParam0->f_34, 0);
			unk_0x8BA533846256EA8E(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!unk_0x31F12808DC47A9E5(uParam0->f_35))
		{
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0x364B87C5C64BD100(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, 0);
				unk_0xFDBDFC454E44A5BF(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
				unk_0x40E2910BAF39B1C7(uParam0->f_35, 1);
				unk_0xF74B493CCF90C997(uParam0->f_34, 1);
				unk_0xF74B493CCF90C997(uParam0->f_35, 1);
				unk_0x641E77554763EF06(uParam0->f_35, unk_0x773D11D22FA84F6D(unk_0x18F7BE9ACB7D08F4()));
				unk_0x8BA533846256EA8E(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0x31F12808DC47A9E5(uParam0->f_34) || !unk_0x31F12808DC47A9E5(uParam0->f_35))
	{
		return 0;
	}
	unk_0x419C9117019F2E5A(iVar0);
	unk_0x419C9117019F2E5A(iVar1);
	unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 9);
	return 1;
}

void func_265(var uParam0)
{
	int iVar0;
	
	if (!unk_0xB03A1684359C50A1(uParam0->f_3, 0))
	{
		func_275();
		func_273();
		if (func_267(uParam0))
		{
			if (func_266(uParam0))
			{
				if (!unk_0x5400DC5FAEBF30F0(uParam0->f_7))
				{
					uParam0->f_7 = unk_0x5E35D8CCDF065701("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				unk_0x444064C4BEF055A9(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0x419C9117019F2E5A(func_249(iVar0));
					iVar0++;
				}
				unk_0x419C9117019F2E5A(func_247());
				unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 0);
			}
		}
	}
}

int func_266(var uParam0)
{
	int iVar0;
	
	iVar0 = func_247();
	if (!unk_0x31F12808DC47A9E5(uParam0->f_91))
	{
		if (unk_0x31F12808DC47A9E5(uParam0->f_49[2]))
		{
			if (unk_0xC542C0B6386400EF(iVar0))
			{
				if (unk_0xEDFE27D1AEA0EA7F(iVar0))
				{
					if (unk_0x028356968FDD2DF2("MP_INTRO_SEQ@"))
					{
						if (!unk_0x74C2FE037DFC8B4A(uParam0->f_49[2], 0))
						{
							uParam0->f_10 = unk_0x3C3438327FFEB224(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xC1097EB02BD797F7(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0x364B87C5C64BD100(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, 0);
							unk_0x40E2910BAF39B1C7(uParam0->f_91, 1);
							unk_0x4DD2EB945B4192FD(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							unk_0xAB888668498FCC04(uParam0->f_10, 1);
							unk_0x73D7E57BF0ED7FEB(uParam0->f_91, true);
							unk_0xF342BF6A7A4C7A8F(uParam0->f_91, false, 0);
							unk_0xA48F593CC7A71FCC(uParam0->f_91, joaat("gadget_parachute"));
							unk_0xDEA702F2138E0B35(uParam0->f_91, 0, 1, 1, 0);
							unk_0xDEA702F2138E0B35(uParam0->f_91, 1, 0, 0, 0);
							unk_0xDEA702F2138E0B35(uParam0->f_91, 2, 0, 2, 0);
							unk_0xDEA702F2138E0B35(uParam0->f_91, 3, 0, 2, 0);
							unk_0xDEA702F2138E0B35(uParam0->f_91, 4, 1, 0, 0);
							unk_0xDEA702F2138E0B35(uParam0->f_91, 5, 0, 0, 0);
							unk_0xDEA702F2138E0B35(uParam0->f_91, 6, 0, 0, 0);
							unk_0xDEA702F2138E0B35(uParam0->f_91, 7, 0, 0, 0);
							unk_0xDEA702F2138E0B35(uParam0->f_91, 8, 0, 0, 0);
							unk_0xDEA702F2138E0B35(uParam0->f_91, 9, 0, 0, 0);
							unk_0xDEA702F2138E0B35(uParam0->f_91, 10, 0, 0, 0);
							unk_0xDEA702F2138E0B35(uParam0->f_91, 11, 0, 0, 0);
							unk_0xB4B486C789609375(uParam0->f_91, 0);
							unk_0xB4B486C789609375(uParam0->f_91, 1);
							unk_0xB4B486C789609375(uParam0->f_91, 2);
							unk_0xB4B486C789609375(uParam0->f_91, 3);
							unk_0xB4B486C789609375(uParam0->f_91, 4);
							unk_0xB4B486C789609375(uParam0->f_91, 5);
							unk_0xB4B486C789609375(uParam0->f_91, 6);
							unk_0xB4B486C789609375(uParam0->f_91, 7);
							unk_0xB4B486C789609375(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!unk_0x31F12808DC47A9E5(uParam0->f_91))
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
	
	if (!unk_0xB03A1684359C50A1(uParam0->f_2, 31))
	{
		func_275();
		iVar5 = 0;
		while (iVar5 < 8)
		{
			func_272(iVar5, &Var1, &fVar4);
			if (!func_271(Var1, 0f, 0f, 0f, 0))
			{
				if (!unk_0x31F12808DC47A9E5(uParam0->f_49[iVar5]))
				{
					iVar0 = func_249(iVar5);
					if (unk_0xC542C0B6386400EF(iVar0))
					{
						if (unk_0xEDFE27D1AEA0EA7F(iVar0))
						{
							uParam0->f_49[iVar5] = unk_0x3064CCF56C6C32BC(iVar0, Var1, fVar4, 0, 0, 0);
							unk_0xB05881241072FEE6(uParam0->f_49[iVar5], 1);
							unk_0xD5D1BF12DEFE6979(uParam0->f_49[iVar5], 0f);
							unk_0x20DA875A55437C52(uParam0->f_49[iVar5], 0);
							if (iVar5 == 2)
							{
								unk_0x9F2024F28D07EE1E(uParam0->f_49[iVar5], 4, 0, 1);
								unk_0xC6D32B0FDD8821E4(uParam0->f_49[iVar5], 4, 0, 1f);
							}
							func_270(uParam0, iVar5);
							func_269(uParam0, iVar5);
							unk_0x419C9117019F2E5A(iVar0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 8)
		{
			if (!unk_0x31F12808DC47A9E5(uParam0->f_49[iVar5]))
			{
				return 0;
			}
			if (!unk_0xB03A1684359C50A1(uParam0->f_2, iVar5))
			{
				if (func_268(uParam0, iVar5))
				{
					unk_0xD2A9C3F486236CC5(&(uParam0->f_2), iVar5);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_49[iVar5], 0))
			{
				if (!unk_0xF351B0E786902B63(uParam0->f_49[iVar5]))
				{
					return 0;
				}
			}
			iVar5++;
		}
		unk_0xD2A9C3F486236CC5(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_268(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x8A27C3C945C9E921(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 0, 1, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 2, 1, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 3, 1, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 5, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 7, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 10, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 14, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 15, 4, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x8A27C3C945C9E921(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x4D9CCED3A1C96367(uParam0->f_49[iParam1], 22, 1);
					unk_0x5D41CFDE94DA9F49(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x8A27C3C945C9E921(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 4, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 14, 5, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x4D9CCED3A1C96367(uParam0->f_49[iParam1], 22, 1);
					unk_0x5D41CFDE94DA9F49(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x8A27C3C945C9E921(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 23, 11, 0);
					unk_0x4D9CCED3A1C96367(uParam0->f_49[iParam1], 22, 1);
					unk_0x5D41CFDE94DA9F49(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x8A27C3C945C9E921(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 7, 1, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 11, 3, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 12, 2, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 13, 2, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 16, 4, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0x4D9CCED3A1C96367(uParam0->f_49[iParam1], 22, 1);
					unk_0x5D41CFDE94DA9F49(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x8A27C3C945C9E921(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 3, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 6, 2, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 10, 3, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 15, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0x4D9CCED3A1C96367(uParam0->f_49[iParam1], 22, 1);
					unk_0x5D41CFDE94DA9F49(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x8A27C3C945C9E921(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 1, 1, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 8, 0, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x6819ABF1BBD7D728(uParam0->f_49[iParam1], 23, 0, 0);
					unk_0x4D9CCED3A1C96367(uParam0->f_49[iParam1], 22, 1);
					unk_0x5D41CFDE94DA9F49(uParam0->f_49[iParam1], 0);
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
			unk_0xD8A3CA4A1B092413(uParam0->f_49[iParam1], 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 0, 1);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 1, 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 2, 1);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 3, 1);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 4, 1);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 5, 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 7, 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 10, 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0xD8A3CA4A1B092413(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0xD8A3CA4A1B092413(uParam0->f_49[iParam1], 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 0, 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0xD8A3CA4A1B092413(uParam0->f_49[iParam1], 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0xD8A3CA4A1B092413(uParam0->f_49[iParam1], 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 1, 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 2, 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 4, 1);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 7, 1);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0xD8A3CA4A1B092413(uParam0->f_49[iParam1], 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 0, 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 1, 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 2, 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 3, 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 4, 1);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 6, 2);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 10, 3);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0xD8A3CA4A1B092413(uParam0->f_49[iParam1], 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 1, 1);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 4, 1);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 8, 0);
			unk_0xD258A165D40B2997(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_270(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x62270578972B4C56(uParam0->f_49[iParam1], 83, 134);
			unk_0xD7C3FB938E520431(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0x62270578972B4C56(uParam0->f_49[iParam1], 0, 0);
			unk_0xD7C3FB938E520431(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0x62270578972B4C56(uParam0->f_49[iParam1], 49, 0);
			unk_0xD7C3FB938E520431(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0x62270578972B4C56(uParam0->f_49[iParam1], 0, 0);
			unk_0xD7C3FB938E520431(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0x62270578972B4C56(uParam0->f_49[iParam1], 43, 5);
			unk_0xD7C3FB938E520431(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0x62270578972B4C56(uParam0->f_49[iParam1], 3, 3);
			unk_0xD7C3FB938E520431(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0x62270578972B4C56(uParam0->f_49[iParam1], 35, 0);
			unk_0xD7C3FB938E520431(uParam0->f_49[iParam1], 0, 156);
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
	unk_0x9016574B77A748EE(func_247());
	unk_0x831CD0FBFB26EC7E(func_274());
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
		unk_0x9016574B77A748EE(func_249(iVar0));
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
		if (!unk_0xB03A1684359C50A1(uVar1, iVar0))
		{
			func_195(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_278(var uParam0, int iParam1, struct<3> Param2, float fParam5, var uParam6, bool bParam7)
{
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_58[iParam1], 0) && !unk_0x0FAE113CE72ED842(uParam0->f_74[iParam1]))
	{
		unk_0x73D7E57BF0ED7FEB(uParam0->f_58[iParam1], false);
		unk_0xF342BF6A7A4C7A8F(uParam0->f_58[iParam1], true, 0);
		unk_0x990FFD4FB6ADD630(uParam0->f_58[iParam1], Param2, 1, 0, 0, 1);
		unk_0xB88121FF8A34A66F(uParam0->f_58[iParam1], fParam5);
		unk_0x9B53B2691E2B1F79(uParam0->f_58[iParam1], 1084227584);
		unk_0x0901CE00CFBB408F(uParam0->f_58[iParam1]);
		if (bParam7)
		{
			unk_0x8A58BE5F8F3F4E69(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			unk_0xFBD899EB9A2EF7F4(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			unk_0x8A58BE5F8F3F4E69(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			unk_0xFBD899EB9A2EF7F4(uParam0->f_58[iParam1], 10f);
		}
		unk_0x10F31830C95ED2E5(uParam0->f_74[iParam1], 1);
		unk_0xA12407EB7D7CF146(uParam0->f_58[iParam1], true, 0);
		unk_0xA12407EB7D7CF146(uParam0->f_74[iParam1], true, 0);
		unk_0xD2A9C3F486236CC5(uParam6, iParam1);
	}
}

void func_279(var uParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10)
{
	if (!unk_0x5400DC5FAEBF30F0(uParam0->f_8))
	{
		uParam0->f_8 = unk_0x5E35D8CCDF065701("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = unk_0x3C3438327FFEB224(Param3, Param6, 2);
	unk_0xFB34CCC40E7806C4(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	unk_0xE8444942F8401658(uParam0->f_9, fParam9);
	unk_0xCA450533BE462E51(uParam0->f_9, iParam10);
	unk_0x2C535610856B3F4D(uParam0->f_8, 1);
	unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 1, 0);
}

void func_280(var uParam0)
{
	unk_0x419C9117019F2E5A(joaat("frogger"));
	unk_0xFD32699B58C2E7EF(8, "FMIntro");
	if (unk_0x31F12808DC47A9E5(uParam0->f_48))
	{
		unk_0xBECECD970F645217(&(uParam0->f_48));
	}
}

int func_281(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (unk_0xB03A1684359C50A1(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_283();
		if (!unk_0x31F12808DC47A9E5(uParam0->f_92[0]))
		{
			if (unk_0xEDFE27D1AEA0EA7F(joaat("cheetah")))
			{
				uParam0->f_92[0] = unk_0x3064CCF56C6C32BC(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0, 0);
				unk_0xA0611ED281CB47AA(uParam0->f_92[0], 0);
				unk_0x5D41CFDE94DA9F49(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x31F12808DC47A9E5(uParam0->f_92[1]))
		{
			if (unk_0xEDFE27D1AEA0EA7F(joaat("entityxf")))
			{
				uParam0->f_92[1] = unk_0x3064CCF56C6C32BC(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0, 0);
				unk_0xA0611ED281CB47AA(uParam0->f_92[1], 0);
				unk_0xABEBC003B88D5144(uParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				unk_0xB447DBA72E281B1B(uParam0->f_92[1], 8);
				unk_0x5D41CFDE94DA9F49(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x31F12808DC47A9E5(uParam0->f_92[2]))
		{
			if (unk_0xEDFE27D1AEA0EA7F(joaat("monroe")))
			{
				uParam0->f_92[2] = unk_0x3064CCF56C6C32BC(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0, 0);
				unk_0xA0611ED281CB47AA(uParam0->f_92[2], 0);
				unk_0xABEBC003B88D5144(uParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				unk_0xB447DBA72E281B1B(uParam0->f_92[2], 2);
				unk_0x5D41CFDE94DA9F49(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x31F12808DC47A9E5(uParam0->f_92[3]))
		{
			if (unk_0xEDFE27D1AEA0EA7F(joaat("cheetah")))
			{
				uParam0->f_92[3] = unk_0x3064CCF56C6C32BC(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0, 0);
				unk_0xA0611ED281CB47AA(uParam0->f_92[3], 0);
				unk_0xABEBC003B88D5144(uParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				unk_0xB447DBA72E281B1B(uParam0->f_92[3], 15);
				unk_0x5D41CFDE94DA9F49(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x31F12808DC47A9E5(uParam0->f_92[4]))
		{
			if (unk_0xEDFE27D1AEA0EA7F(joaat("feltzer2")))
			{
				uParam0->f_92[4] = unk_0x3064CCF56C6C32BC(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0, 0);
				unk_0xA0611ED281CB47AA(uParam0->f_92[4], 0);
				unk_0xABEBC003B88D5144(uParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				unk_0x62270578972B4C56(uParam0->f_92[4], 0, 0);
				unk_0xD7C3FB938E520431(uParam0->f_92[4], 0, 156);
				unk_0xD8A3CA4A1B092413(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0xC4B84EB67F78C1F0(uParam0->f_92[4], 0))
		{
			if (!unk_0xB03A1684359C50A1(uParam0->f_3, 1))
			{
				if (unk_0x8A27C3C945C9E921(uParam0->f_92[4]) > 0)
				{
					unk_0x4D9CCED3A1C96367(uParam0->f_92[4], 22, 1);
					unk_0x5D41CFDE94DA9F49(uParam0->f_92[4], 0);
					unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0xEDFE27D1AEA0EA7F(func_227()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0x31F12808DC47A9E5(uParam0->f_98[iVar1]))
				{
					if (unk_0x31F12808DC47A9E5(uParam0->f_92[iVar1]))
					{
						if (unk_0xC4B84EB67F78C1F0(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = unk_0xC52E83A4C0F88DAB(uParam0->f_92[iVar1], 4, func_227(), -1, 0, false);
							unk_0x40E2910BAF39B1C7(uParam0->f_98[iVar1], 1);
							unk_0x0F3F86C855582784(uParam0->f_92[iVar1], 1, 1, 0);
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
			unk_0x419C9117019F2E5A(joaat("cheetah"));
			unk_0x419C9117019F2E5A(joaat("monroe"));
			unk_0x419C9117019F2E5A(joaat("entityxf"));
			unk_0x419C9117019F2E5A(joaat("feltzer2"));
			unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_282()
{
	func_283();
	if (unk_0xEDFE27D1AEA0EA7F(func_227()))
	{
		if (unk_0xEDFE27D1AEA0EA7F(joaat("cheetah")))
		{
			if (unk_0xEDFE27D1AEA0EA7F(joaat("monroe")))
			{
				if (unk_0xEDFE27D1AEA0EA7F(joaat("entityxf")))
				{
					if (unk_0xEDFE27D1AEA0EA7F(joaat("feltzer2")))
					{
						if (unk_0x53500A7D168BF5F6(100, "FM_Intro_uber"))
						{
							if (unk_0x53500A7D168BF5F6(101, "FM_Intro_uber"))
							{
								if (unk_0x53500A7D168BF5F6(102, "FM_Intro_uber"))
								{
									if (unk_0x53500A7D168BF5F6(103, "FM_Intro_uber"))
									{
										if (unk_0x53500A7D168BF5F6(104, "FM_Intro_uber"))
										{
											if (unk_0x028356968FDD2DF2("mp_intro_seq@"))
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
	unk_0x9016574B77A748EE(joaat("cheetah"));
	unk_0x9016574B77A748EE(joaat("monroe"));
	unk_0x9016574B77A748EE(joaat("entityxf"));
	unk_0x9016574B77A748EE(joaat("feltzer2"));
	unk_0x9016574B77A748EE(func_227());
	unk_0xAE5F484E08487A0F(100, "FM_Intro_uber");
	unk_0xAE5F484E08487A0F(101, "FM_Intro_uber");
	unk_0xAE5F484E08487A0F(102, "FM_Intro_uber");
	unk_0xAE5F484E08487A0F(103, "FM_Intro_uber");
	unk_0xAE5F484E08487A0F(104, "FM_Intro_uber");
	unk_0x831CD0FBFB26EC7E("mp_intro_seq@");
}

int func_284(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (unk_0xB03A1684359C50A1(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0x9016574B77A748EE(joaat("asterope"));
		unk_0x9016574B77A748EE(joaat("sentinel"));
		unk_0x9016574B77A748EE(func_227());
		if ((unk_0xEDFE27D1AEA0EA7F(joaat("asterope")) && unk_0xEDFE27D1AEA0EA7F(joaat("sentinel"))) && unk_0xEDFE27D1AEA0EA7F(func_227()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0x31F12808DC47A9E5(uParam0->f_58[iVar0]))
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
					uParam0->f_58[iVar0] = unk_0x3064CCF56C6C32BC(iVar1, Var2, fVar5, 0, 0, 0);
					unk_0xB447DBA72E281B1B(uParam0->f_58[iVar0], iVar0);
					unk_0xF74B493CCF90C997(uParam0->f_58[iVar0], 1);
					unk_0x91663DAD5DDAFA96(uParam0->f_58[iVar0], 2);
					unk_0x73D7E57BF0ED7FEB(uParam0->f_58[iVar0], true);
				}
				if (unk_0x31F12808DC47A9E5(uParam0->f_58[iVar0]))
				{
					if (!unk_0x31F12808DC47A9E5(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = unk_0xC52E83A4C0F88DAB(uParam0->f_58[iVar0], 4, func_227(), -1, 0, false);
						unk_0xF74B493CCF90C997(uParam0->f_74[iVar0], 1);
						unk_0x40E2910BAF39B1C7(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0x31F12808DC47A9E5(uParam0->f_58[iVar0]) || !unk_0x31F12808DC47A9E5(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x419C9117019F2E5A(joaat("asterope"));
		unk_0x419C9117019F2E5A(joaat("sentinel"));
		unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 4);
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
		if ((uParam0->f_13 + iVar0) + iParam2) <= unk_0x5AFB8ED811F05E4D()
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
	
	if (unk_0xB03A1684359C50A1(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	unk_0x9016574B77A748EE(iVar0);
	unk_0xAE5F484E08487A0F(8, "FMIntro");
	if (unk_0xEDFE27D1AEA0EA7F(iVar0) && unk_0x53500A7D168BF5F6(8, "FMIntro"))
	{
		if (!unk_0x31F12808DC47A9E5(uParam0->f_48))
		{
			uParam0->f_48 = unk_0x3064CCF56C6C32BC(iVar0, unk_0x82ABBDC169E2FF0C(8, 0f, "FMIntro"), 0f, 0, 0, 0);
			unk_0xF81720737A9C0B6E(uParam0->f_48, 8, "FMIntro", 1);
			unk_0x1177B8213A377DCE(uParam0->f_48, 5000f);
			unk_0xA7BE9F827A629295(uParam0->f_48);
			unk_0xA12407EB7D7CF146(uParam0->f_48, false, 0);
			unk_0x419C9117019F2E5A(iVar0);
		}
	}
	if (!unk_0x31F12808DC47A9E5(uParam0->f_48))
	{
		return 0;
	}
	unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 8);
	return 1;
}

void func_287(var uParam0, int iParam1)
{
	if (func_285(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (unk_0x5AFB8ED811F05E4D() - func_209(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_288(var uParam0)
{
	uParam0->f_13 = unk_0x5AFB8ED811F05E4D();
}

Vector3 func_289(struct<3> Param0)
{
	return (-unk_0x0BADBFA3B172435F(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), (unk_0xD0FFB162F40A139C(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), unk_0x0BADBFA3B172435F(Param0.f_0);
}

int func_290()
{
	return Global_1312789;
}

void func_291()
{
	unk_0xEDE582F2B0825317(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	unk_0xEDE582F2B0825317(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
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
	unk_0xEFF1F12403847394(1);
	unk_0x08FC50794202A47C();
	func_234(1, 1, 1, 0);
	func_294();
	func_188(12, 1, -1);
	func_189(0);
	unk_0xFF85AEF2518662A1(1, -1);
	unk_0x77B57B2BB7F3EA0A(0);
	unk_0x4A3AD9384F0AAEA0(0);
	func_295(1);
	func_241(1);
	Global_2436169.f_3611 = 1;
	if (bParam0)
	{
		if (!unk_0x7DF51A716BE7A07F())
		{
			unk_0x38451EAF24F8D818(1, iParam1);
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
	while (iVar0 < Global_103203)
	{
		unk_0x02207C8103E68CB0(iVar0, iParam0);
		func_296(iVar0);
		iVar0++;
	}
}

void func_296(int iParam0)
{
	Global_103203[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_103203[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_103203[iParam0 /*28*/].f_4), "", 64);
	Global_103203[iParam0 /*28*/].f_23 = 0;
	Global_103203[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_103203[iParam0 /*28*/].f_27 = 0;
	Global_103203[iParam0 /*28*/].f_20 = 0;
	Global_103203[iParam0 /*28*/].f_22 = 0;
}

void func_297()
{
	Global_1312568 = 1;
	StringCopy(&(Global_1312568.f_1), unk_0xFCA64981FEF7C913(), 24);
	Global_1312568.f_7 = unk_0x6E987D62C8535B6E(&(Global_1312568.f_1));
}

int func_298()
{
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		func_300(0);
		unk_0x47140E3A937B7EAC();
		return 1;
	}
	if (func_299() == 3)
	{
		func_300(2);
		unk_0x13965305DA09C03F(250f);
	}
	if (unk_0xBA30E53C6F39FB40() >= 250f)
	{
		unk_0x13965305DA09C03F(250f);
	}
	if (unk_0x03913958BF6E9F57() == 0)
	{
		unk_0x13965305DA09C03F(250f);
	}
	if (unk_0xBA30E53C6F39FB40() <= 0f)
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
	if (!unk_0x9D39145AD645E383("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xEBE493E29E0D8731(iVar1))
			{
				return;
			}
			if (unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == iVar1)
			{
				func_304(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xEBE493E29E0D8731(iVar1))
			{
				return;
			}
			if (func_302(iParam0))
			{
				func_304(iParam0, 0);
			}
		}
		unk_0xD1E5D502F8BD3DFF(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_302(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_303(iParam0) };
	if (Var0.f_1 != -1 && unk_0xB03A1684359C50A1(Global_31637[Var0.f_1], Var0.f_0))
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
	while (iVar1 < 6)
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
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_31637[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_31637[Var0.f_1]), Var0.f_0);
	}
}

var func_305(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_306(iParam0) };
	*iParam1 = unk_0x0E40E816537BFB87(Var0, Var0.f_3);
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
			Var0 = { Global_1049531[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
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
	return Global_2457937;
}

bool func_309()
{
	return Global_2456779;
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
	if (Global_1312854)
	{
		sVar1 = func_313(iParam0);
		iVar2 = unk_0x6E987D62C8535B6E(sVar1);
		func_312(&Global_2459027, 1, 0);
		unk_0xF076F4958AA554D9(iVar2, 1, uVar0, iParam0, 0);
	}
	Global_1312789 = iParam0;
}

void func_312(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x44243F2E2F58B8E3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xE92FCF3C05C2EF1D();
		}
		else
		{
			*uParam0 = unk_0x5E1037C28AA2B562();
		}
	}
	else
	{
		*uParam0 = unk_0x5AFB8ED811F05E4D();
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
	Global_1312788 = iParam0;
}

var func_315()
{
	return Global_1312788;
}

void func_316(bool bParam0, bool bParam1)
{
	int iVar0;
	
	func_318(&Global_17082, bParam1);
	unk_0x4CC4AF393934E194(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0xB0C54402D009BA38();
			func_317(0);
			if (unk_0x31F12808DC47A9E5(Global_1315636))
			{
				if (unk_0xE54DCC6B21FDC95A(Global_1315636, 0))
				{
					if (!unk_0x90D1FDC9D31B7BE1(Global_1315636))
					{
						unk_0x337F2213526139E0(Global_1315636, 0, 0);
					}
					unk_0x63C116C2153FAA3C(&Global_1315636);
				}
			}
		}
	}
}

void func_317(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2459010 = 0;
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
	if (unk_0x5400DC5FAEBF30F0(uParam0->f_9))
	{
		if (unk_0xEFEFF8C622C1C559(uParam0->f_9))
		{
			func_319(0);
		}
		unk_0x13AD763DBD687842(uParam0->f_9, 0);
	}
	if (!Global_36957)
	{
		unk_0x116F780D5A758BE3(1);
		unk_0xA1FB3417C3449864(0f);
		unk_0xDD4424863F033940(0f);
	}
	Global_2405047.f_584 = 0f;
	if (!bParam1)
	{
		unk_0xF5F744EF9F4DB21E(0, 0, 0, 1, 0, 0);
	}
}

void func_319(int iParam0)
{
	Global_17160 = iParam0;
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
		if (unk_0x40E364CCE009E0BA())
		{
			return;
		}
	}
	if (func_323() == 0 || unk_0xC83C302702976DCB())
	{
		func_322(1);
		unk_0x74C56BC938E3F7F3(0);
		unk_0x74C56BC938E3F7F3(0);
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
	Global_2458319 = 1;
}

void func_325(int iParam0)
{
	if ((func_323() == 1 || unk_0xC83C302702976DCB()) || iParam0)
	{
		func_322(0);
		unk_0x74C56BC938E3F7F3(1);
		unk_0x74C56BC938E3F7F3(1);
		unk_0x00708905A805DB08();
	}
}

void func_326(bool bParam0)
{
	if (bParam0)
	{
		unk_0x66D835F69B7842DC();
		unk_0x0F38E5424A42F6D6(-1);
		unk_0x8C9D400986CE2EE3(1);
		unk_0x071BB61A88D1BB5B(1);
		unk_0x3FA15AFD13DBAD3E(1f);
		unk_0x66167D25112DF37A(3);
		unk_0x3C9CC91B7425492C(3);
	}
	else
	{
		unk_0x3B4B46A2A779D56E(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		unk_0x0F38E5424A42F6D6(0);
		unk_0x8C9D400986CE2EE3(0);
		unk_0x071BB61A88D1BB5B(0);
		unk_0x3FA15AFD13DBAD3E(0f);
		unk_0x66167D25112DF37A(0);
		unk_0x3C9CC91B7425492C(0);
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
	unk_0x9A70D1B91A853FDD(0);
	if (bParam0)
	{
		unk_0x286749CD83D3C55A(unk_0x8CFC7D6E1DA5D304(), iParam6);
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
	func_328(unk_0x8CFC7D6E1DA5D304(), 0, iVar0);
	if (bParam5)
	{
		if (unk_0xEE46D335A57B8D7C(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0xB0F75D2CA4A879D1(unk_0x18F7BE9ACB7D08F4(), 0);
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
		if (unk_0x52F4DD18485E81C7())
		{
			unk_0x3B82047F26E2CEDB(0);
		}
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		uVar0 = iParam2;
		unk_0xF70DE7344EBF0825(iParam0, bParam1, uVar0);
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
		if (unk_0x4AF13BCD120BCDBC(iParam0) && unk_0x557001354138B7FB(iParam0))
		{
			uVar25 = unk_0x6604E096142B4B55(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x44243F2E2F58B8E3())
				{
					unk_0x710A8C8CDF18A4F9(1);
				}
				else if (bVar13 || (!func_236(unk_0x8CFC7D6E1DA5D304(), 0) && !func_239()))
				{
					unk_0xA12407EB7D7CF146(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x44243F2E2F58B8E3() && !bVar18)
					{
						unk_0x710A8C8CDF18A4F9(0);
					}
					Global_2422724[iParam0 /*420*/].f_259 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_332(uVar25) && !unk_0x4AA6B5B9E27A254A(uVar25))
				{
					if (!bVar21)
					{
						unk_0xF342BF6A7A4C7A8F(uVar25, true, 0);
					}
				}
				if (!unk_0x4A296E47F281D02F(uVar25))
				{
					if (!bVar20)
					{
						unk_0x73D7E57BF0ED7FEB(uVar25, false);
					}
					unk_0xB05881241072FEE6(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x73D7E57BF0ED7FEB(iVar25, false);
				}
				unk_0x44EB7E24C5D75087(iVar25, true);
				unk_0x36643EAE6212D16F(iParam0, 0);
				unk_0x0ACEE7BC79EA804E(iVar25);
				unk_0xBDFA8A71B1A23D86(iVar25, 1);
				func_331();
				func_330();
				if (unk_0x1E550B6CDBC1308F())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x8BDE5BE4E46BA35F())
				{
				}
				Global_2422724[iParam0 /*420*/].f_260 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_332(iVar25) && !unk_0x4AA6B5B9E27A254A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xF342BF6A7A4C7A8F(iVar25, !bVar14, 0);
					}
					if (!unk_0x4A296E47F281D02F(iVar25))
					{
						if (!bVar20)
						{
							unk_0x73D7E57BF0ED7FEB(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xB05881241072FEE6(iVar25, 1);
						}
					}
					if (func_329(Global_1646129.f_138609))
					{
						unk_0x73D7E57BF0ED7FEB(iVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x36643EAE6212D16F(iParam0, 0);
				}
				else
				{
					unk_0x36643EAE6212D16F(iParam0, 1);
				}
				unk_0x44EB7E24C5D75087(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x570C394C1E0D8834(iVar25) && !unk_0x657B649BA2AD3582(iVar25, 0))
					{
						unk_0xD9FCA20C1C5553F7(iVar25);
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
			unk_0xF70DE7344EBF0825(iParam0, bParam1, iVar26);
		}
	}
}

bool func_329(int iParam0)
{
	return iParam0 == 17;
}

void func_330()
{
	struct<3> Var0;
	
	Global_2436169.f_1117 = 0;
	Global_2436169.f_1118 = 0;
	Global_2436169.f_1119 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436169.f_1124 = -1;
	Global_2436169.f_1125 = 0;
	Global_2405047.f_2648 = { Var0 };
}

void func_331()
{
	Global_2405047.f_674 = 0;
	Global_2405047.f_2691 = 0;
	Global_2405047.f_507 = 0;
	Global_2405047.f_586 = 0;
	Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_222 = 0;
}

int func_332(int iParam0)
{
	int iVar0;
	
	if (unk_0x657B649BA2AD3582(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x2BBAA45ECDE3DAE2(iParam0, -1794415470);
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
	Global_17162.f_5 = 1;
}

void func_336(int iParam0)
{
	unk_0xB05E48165A6F6058(unk_0x6604E096142B4B55(iParam0), 346, 1);
}

void func_337(var uParam0)
{
	if (!unk_0xB03A1684359C50A1(uParam0->f_3, 12))
	{
		unk_0xD2A9C3F486236CC5(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1795270)
			{
				Global_1795270 = 1;
				Global_1795271 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (unk_0x5C716BBF766E1C70(Global_1795269))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if (((unk_0xE7A981467BC975BA() == 9 || unk_0xE7A981467BC975BA() == 10) || unk_0xE7A981467BC975BA() == 8) || unk_0xE7A981467BC975BA() == 12)
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
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 33, -3390))
							{
								func_338("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (func_285(uParam0, 33, -2940))
								{
									func_342("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_341("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_340("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_339("techdir", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 33, -450))
							{
								func_338("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_342("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_341("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_340("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_339("assartdir", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_338("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if (((unk_0xE7A981467BC975BA() == 9 || unk_0xE7A981467BC975BA() == 10) || unk_0xE7A981467BC975BA() == 8) || unk_0xE7A981467BC975BA() == 12)
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
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 36, -4740))
							{
								func_338("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (func_285(uParam0, 36, -3810))
								{
									func_342("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_341("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_339("leadprog", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 36, -600))
							{
								func_338("leadprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if (((unk_0xE7A981467BC975BA() == 9 || unk_0xE7A981467BC975BA() == 10) || unk_0xE7A981467BC975BA() == 8) || unk_0xE7A981467BC975BA() == 12)
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
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 37, -1350))
							{
								func_338("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_342("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_341("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_340("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_339("prog", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 38, -4320))
							{
								func_338("prog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (func_285(uParam0, 38, -3240))
								{
									if (((unk_0xE7A981467BC975BA() == 9 || unk_0xE7A981467BC975BA() == 10) || unk_0xE7A981467BC975BA() == 8) || unk_0xE7A981467BC975BA() == 12)
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
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 38, -870))
							{
								func_338("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_342("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_341("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_339("audio", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 39, -1620))
							{
								func_338("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_342("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_341("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_340("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_339("scrlead", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 40, -1470))
							{
								func_338("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_342("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_341("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_340("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_339("script1", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 41, -1200))
							{
								func_338("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_342("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_341("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_340("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_339("script2", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 42, -1320))
							{
								func_338("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_342("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_341("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_341("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_339("visdes", 0.05f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 43, -1320))
							{
								func_338("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_342("uides", 40f, 20f, "right", 0f, 0.3f);
									func_341("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_340("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_339("uides", 0f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 45, -1650))
							{
								func_338("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_342("concre", 0f, 20f, "left", 0f, 0.3f);
									func_341("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_340("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_340("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_339("concre", 0f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 46, -1950))
							{
								func_338("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_342("devass", 0f, 400f, "right", 0f, 0f);
									func_341("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_340("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_339("devass", 0f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_338("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_342("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_341("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_341("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_339("qasup", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 48, -1320))
							{
								func_338("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_342("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_341("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_340("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_339("senta", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 49, -5070))
							{
								func_338("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (func_285(uParam0, 49, -3750))
								{
									func_342("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_341("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_340("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_339("asspro", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 49, -720))
							{
								func_338("asspro", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (func_244(uParam0))
								{
									if (unk_0xEAE1A41FBC3984B1() && unk_0x63C1E7AE5873BEA0() > 2468)
									{
										func_342("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_341("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_340("animdir", "ROB NELSON", 200f, "|", 1);
										func_339("animdir", 0.16f);
										unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_342("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_341("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_340("animdir", "ROB NELSON", 90f, "|", 1);
									func_339("animdir", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_244(uParam0))
							{
								if (unk_0xEAE1A41FBC3984B1() && unk_0x63C1E7AE5873BEA0() > 6123)
								{
									func_338("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xEAE1A41FBC3984B1() && unk_0x63C1E7AE5873BEA0() > 1898)
							{
								func_338("animdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (func_244(uParam0))
								{
									if (unk_0xEAE1A41FBC3984B1() && unk_0x946B9F54A0F6A9A4())
									{
										func_342("producer", 65f, 55f, "right", 0f, 0f);
										func_341("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_340("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_339("producer", 0f);
										unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xEAE1A41FBC3984B1() && unk_0x63C1E7AE5873BEA0() > 2452)
								{
									func_342("producer", 0f, 100f, "left", 0.3f, 0f);
									func_341("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_340("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_339("producer", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_244(uParam0))
							{
								if (unk_0xEAE1A41FBC3984B1() && unk_0x946B9F54A0F6A9A4())
								{
									func_338("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xEAE1A41FBC3984B1() && unk_0x946B9F54A0F6A9A4())
							{
								func_338("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (func_244(uParam0))
								{
									if (unk_0xEAE1A41FBC3984B1() && unk_0x63C1E7AE5873BEA0() > 13265)
									{
										func_342("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_341("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_340("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_339("vpcre", 0.16f);
										unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xEAE1A41FBC3984B1() && unk_0x63C1E7AE5873BEA0() > 6921)
								{
									func_342("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_341("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_340("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_339("vpcre", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_244(uParam0))
							{
								if (unk_0xEAE1A41FBC3984B1() && unk_0x63C1E7AE5873BEA0() > 16955)
								{
									func_338("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xEAE1A41FBC3984B1() && unk_0x63C1E7AE5873BEA0() > 10513)
							{
								func_338("vpcre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!unk_0xB03A1684359C50A1(uParam0->f_4, uParam0->f_5))
							{
								if (func_244(uParam0))
								{
									if (unk_0xEAE1A41FBC3984B1() && unk_0x63C1E7AE5873BEA0() > 18077)
									{
										Global_1795271 = 0;
										func_342("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_341("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_340("execpro", "SAM HOUSER", 165f, "|", 1);
										func_339("execpro", 0.16f);
										unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xEAE1A41FBC3984B1() && unk_0x63C1E7AE5873BEA0() > 12358)
								{
									Global_1795271 = 0;
									func_342("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_341("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_340("execpro", "SAM HOUSER", 190f, "|", 1);
									func_339("execpro", 0.16f);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_244(uParam0))
							{
								if (unk_0xEAE1A41FBC3984B1() && unk_0x63C1E7AE5873BEA0() > 21785)
								{
									func_338("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xEAE1A41FBC3984B1() && unk_0x63C1E7AE5873BEA0() > 15333)
							{
								func_338("execpro", 0.16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1795271)
				{
					unk_0x5E70D9959D6F2350(Global_1795269, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_338(char* sParam0, float fParam1)
{
	unk_0x76F4FB5EFF5BDED5(Global_1795269, "HIDE");
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xB4179F7E88F4C4BF(sParam0);
	unk_0xC30401186AC91B01();
	unk_0x954263F3D07BEFC2(fParam1);
	unk_0xE2B30EB9B14EEAB2();
}

void func_339(char* sParam0, float fParam1)
{
	unk_0x76F4FB5EFF5BDED5(Global_1795269, "SHOW_CREDIT_BLOCK");
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xB4179F7E88F4C4BF(sParam0);
	unk_0xC30401186AC91B01();
	unk_0x954263F3D07BEFC2(fParam1);
	unk_0xE2B30EB9B14EEAB2();
}

void func_340(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0x76F4FB5EFF5BDED5(Global_1795269, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xB4179F7E88F4C4BF(sParam0);
	unk_0xC30401186AC91B01();
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xB4179F7E88F4C4BF(sParam1);
	unk_0xC30401186AC91B01();
	unk_0x954263F3D07BEFC2(fParam2);
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xB4179F7E88F4C4BF(sParam3);
	unk_0xC30401186AC91B01();
	unk_0xD6F1BD29497A51C8(iParam4);
	unk_0xE2B30EB9B14EEAB2();
}

void func_341(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0x76F4FB5EFF5BDED5(Global_1795269, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xB4179F7E88F4C4BF(sParam0);
	unk_0xC30401186AC91B01();
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xB4179F7E88F4C4BF(sParam1);
	unk_0xC30401186AC91B01();
	unk_0x954263F3D07BEFC2(fParam2);
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xB4179F7E88F4C4BF(sParam3);
	unk_0xC30401186AC91B01();
	unk_0xD6F1BD29497A51C8(iParam4);
	unk_0xE2B30EB9B14EEAB2();
}

void func_342(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0x76F4FB5EFF5BDED5(Global_1795269, "SETUP_CREDIT_BLOCK");
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xB4179F7E88F4C4BF(sParam0);
	unk_0xC30401186AC91B01();
	unk_0x954263F3D07BEFC2(fParam1);
	unk_0x954263F3D07BEFC2(fParam2);
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xB4179F7E88F4C4BF(sParam3);
	unk_0xC30401186AC91B01();
	unk_0x954263F3D07BEFC2(fParam4);
	unk_0x954263F3D07BEFC2(fParam5);
	unk_0xE2B30EB9B14EEAB2();
}

void func_343(var uParam0)
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (unk_0x31F12808DC47A9E5(uParam0->f_34))
		{
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_34, 0))
			{
				unk_0xA126FF4D2BDF265F(unk_0x0AF3D0AB54EA2104(uParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_344()
{
	var uVar0;
	
	if (unk_0x5AD42783360AB57E(Local_568.f_3))
	{
		switch (Local_568.f_2)
		{
			case 2:
				if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_4, 1))
				{
					if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
					{
						if (func_361(Local_568.f_3))
						{
							if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
							{
								if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -1794415470) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -1794415470) != 0)
								{
									unk_0xFDBDFC454E44A5BF(unk_0x18F7BE9ACB7D08F4(), unk_0xFA62333764BA8F5D(Local_568.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_4, 2))
							{
								if (unk_0x160400EAEE246B4D(unk_0x18F7BE9ACB7D08F4(), unk_0xFA62333764BA8F5D(Local_568.f_3)))
								{
									unk_0xD2A9C3F486236CC5(&(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_4), 2);
									func_360(1);
								}
								else
								{
									unk_0xE54597236B7D8C63(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_361(Local_568.f_3))
				{
					if (!func_359(Local_568.f_4))
					{
						if (unk_0xB03A1684359C50A1(uLocal_751, 26))
						{
							if (unk_0x2BBAA45ECDE3DAE2(unk_0x5FC7C92D1FA1DAEC(Local_568.f_4), -1273030092) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x5FC7C92D1FA1DAEC(Local_568.f_4), -1273030092) != 0)
							{
								unk_0xA0C0358B9D284C3C(unk_0x5FC7C92D1FA1DAEC(Local_568.f_4), unk_0xFA62333764BA8F5D(Local_568.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!unk_0xB03A1684359C50A1(uLocal_751, 27))
				{
					if (!unk_0xEC0ECEF2AF3FDA8D() && !unk_0xBC13F084F3B1B544())
					{
						if (!func_109())
						{
							if (!unk_0xC83C302702976DCB())
							{
								unk_0xFF91FEC6E57575E4(800);
							}
						}
					}
					else if (unk_0xEC0ECEF2AF3FDA8D())
					{
						unk_0xD2A9C3F486236CC5(&uLocal_751, 27);
					}
				}
				else if (!unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 4))
				{
					if (func_351(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
					{
						unk_0xE54597236B7D8C63(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0, 0);
						unk_0x5A57025A0D4ABEDF();
						unk_0x294D1ED09EF7F3BF();
						unk_0xA3F41A1968319181(0);
						unk_0x4CCECEB2EA5D6A82(0, 1065353216);
						unk_0xD2A9C3F486236CC5(&(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_359(Local_568.f_4))
				{
					if (!unk_0xB03A1684359C50A1(uLocal_751, 29))
					{
						if (func_361(Local_568.f_3))
						{
							unk_0xDEB2FA447DC90B82(unk_0x5FC7C92D1FA1DAEC(Local_568.f_4), unk_0xFA62333764BA8F5D(Local_568.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							unk_0x8359CF51370FC969(800);
							unk_0xD2A9C3F486236CC5(&uLocal_751, 29);
						}
					}
					else if (!unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 5))
					{
						if (unk_0x2BBAA45ECDE3DAE2(unk_0x5FC7C92D1FA1DAEC(Local_568.f_4), -272084098) == 7)
						{
							unk_0xD2A9C3F486236CC5(&(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 0)
						{
							unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 0);
						}
					}
					else if (!unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 6))
					{
						unk_0xD2A9C3F486236CC5(&(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3), 6);
						unk_0xD2A9C3F486236CC5(&(Global_2512581.f_778), 4);
						unk_0x62148293B793073B(&(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_4), 2);
						func_328(unk_0x8CFC7D6E1DA5D304(), 1, 0);
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
							unk_0x0107A675CF6918EF(200, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_359(Local_568.f_4))
				{
					if (func_361(Local_568.f_3))
					{
						if (unk_0x2BBAA45ECDE3DAE2(unk_0x5FC7C92D1FA1DAEC(Local_568.f_4), -258271821) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x5FC7C92D1FA1DAEC(Local_568.f_4), -258271821) != 0)
						{
							unk_0x10F31830C95ED2E5(unk_0x5FC7C92D1FA1DAEC(Local_568.f_4), 1);
							unk_0x21D24CE144A81296(unk_0x5FC7C92D1FA1DAEC(Local_568.f_4), unk_0xFA62333764BA8F5D(Local_568.f_3), 12f, 786599);
							func_346(&(Local_568.f_3));
							func_346(&(Local_568.f_4));
						}
					}
				}
				break;
		}
		if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_4, 1))
		{
			unk_0xEA3ACC77B4C2040A(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!unk_0xB03A1684359C50A1(uLocal_751, 26))
			{
				unk_0xD2A9C3F486236CC5(&uLocal_751, 26);
			}
		}
		if (!unk_0xB03A1684359C50A1(uLocal_751, 28))
		{
			if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_4, 2))
			{
				if (!func_182(&uLocal_401))
				{
					func_200();
					func_19(&uLocal_401, 0, 0);
				}
				else if (func_181(&uLocal_401, 5000, 0))
				{
					if (func_161(&uLocal_575, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						unk_0xD2A9C3F486236CC5(&uLocal_751, 28);
					}
				}
			}
		}
		if (!unk_0xB03A1684359C50A1(uLocal_751, 30))
		{
			if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 5))
			{
				if (func_161(&uLocal_575, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					unk_0xD2A9C3F486236CC5(&uLocal_751, 30);
				}
			}
		}
		if (!unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 6))
		{
			func_345();
		}
		if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_4, 2))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
				{
				}
			}
		}
	}
}

void func_345()
{
	Global_2522568.f_258 = 1;
}

void func_346(var uParam0)
{
	var uVar0;
	
	if (unk_0x5AD42783360AB57E(*uParam0))
	{
		uVar0 = unk_0x10427BA8138B7F3E(*uParam0);
		unk_0xE13BCCF275C3DEAF(&uVar0);
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
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211.f_4 = iVar1;
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211.f_3 = (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_348(iVar1, 0);
	}
}

void func_350()
{
	unk_0xB156023E2D4E4859(0, 22, 1);
	unk_0xB156023E2D4E4859(0, 36, 1);
	unk_0xB156023E2D4E4859(0, 32, 1);
	unk_0xB156023E2D4E4859(0, 34, 1);
	unk_0xB156023E2D4E4859(0, 35, 1);
	unk_0xB156023E2D4E4859(0, 33, 1);
	unk_0xB156023E2D4E4859(0, 31, 1);
	unk_0xB156023E2D4E4859(0, 30, 1);
	unk_0xB156023E2D4E4859(0, 44, 1);
	unk_0xB156023E2D4E4859(0, 141, 1);
	unk_0xB156023E2D4E4859(0, 140, 1);
	unk_0xB156023E2D4E4859(0, 263, 1);
	unk_0xB156023E2D4E4859(0, 264, 1);
	unk_0xB156023E2D4E4859(0, 143, 1);
	unk_0xB156023E2D4E4859(0, 24, 1);
	unk_0xB156023E2D4E4859(0, 257, 1);
	unk_0xB156023E2D4E4859(0, 263, 1);
	unk_0xB156023E2D4E4859(0, 264, 1);
	unk_0xB156023E2D4E4859(0, 143, 1);
	unk_0xB156023E2D4E4859(0, 262, 1);
	unk_0xB156023E2D4E4859(0, 261, 1);
	unk_0xB156023E2D4E4859(0, 37, 1);
	unk_0xB156023E2D4E4859(0, 25, 1);
	unk_0xB156023E2D4E4859(0, 26, 1);
}

int func_351(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, float fParam12)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_17162.f_6 = 1;
	if (Global_2436169.f_1117 && Global_2436169.f_1125)
	{
		func_357(0, bParam9);
		return 1;
	}
	if (unk_0x51CFE20A158947F4() && !bParam9)
	{
		if (Global_2436169.f_1117)
		{
			func_357(0, bParam9);
		}
		return 0;
	}
	if ((unk_0x8BDE5BE4E46BA35F() && !bParam9) && !unk_0x1E550B6CDBC1308F())
	{
		return 0;
	}
	if (!func_356())
	{
		if (func_355(unk_0x8CFC7D6E1DA5D304(), 1, 0))
		{
			if (((bParam9 && func_12(unk_0x8CFC7D6E1DA5D304(), 1, 0)) && unk_0x51CFE20A158947F4()) && Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_237 == 1)
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
	if (!Global_2436169.f_1117 && !bParam11)
	{
		Var1 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0) };
		if ((unk_0x36E1A96E1D63ED91((Var1.f_0 - Param0.f_0)) < 0.2f && unk_0x36E1A96E1D63ED91((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x36E1A96E1D63ED91((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - unk_0x93FDA3BF59E7B77F(unk_0x18F7BE9ACB7D08F4()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (unk_0x36E1A96E1D63ED91(fVar4) < 1f)
			{
				Global_2436169.f_1117 = 0;
				Global_2436169.f_1118 = 0;
				if (unk_0x1E550B6CDBC1308F())
				{
					unk_0x5BBFABDAEA0AC189();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2436169.f_1119 || !Param0.f_1 == Global_2436169.f_1119.f_1) || !Param0.f_2 == Global_2436169.f_1119.f_2) || !fParam3 == Global_2436169.f_1122)
	{
		if (Global_2436169.f_1117 == 1)
		{
			if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2436169.f_1123) < func_354(0))
			{
				return 0;
			}
			unk_0x5BBFABDAEA0AC189();
			Global_2436169.f_1118 = 1;
		}
		else
		{
			Global_2436169.f_1118 = 0;
		}
		Global_2436169.f_1119 = { Param0 };
		Global_2436169.f_1122 = fParam3;
		Global_2436169.f_1117 = 0;
	}
	if (!Global_2436169.f_1117 && !unk_0x1E550B6CDBC1308F())
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
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (!unk_0xB03A1684359C50A1(Global_92881.f_1322[44], 16))
			{
				func_353();
			}
			if (!unk_0x3AC10520A7F7B6D4(unk_0x18F7BE9ACB7D08F4(), &(Global_2405047.f_494)))
			{
				Global_2405047.f_494 = 0;
			}
		}
		if (bParam4)
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				uVar0 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
				if (unk_0xB84B6B13ADF5E3DF(uVar0))
				{
					Global_2436169.f_1124 = 0;
				}
			}
		}
		if (Global_2436169.f_1124 > -1)
		{
			Global_2436169.f_1123 = unk_0xE92FCF3C05C2EF1D();
			Global_2436169.f_1117 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						uVar0 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
						if (unk_0x1800B99666D25740(uVar0))
						{
							unk_0x990FFD4FB6ADD630(uVar0, Param0, 0, 1, 1, 1);
							unk_0xB88121FF8A34A66F(uVar0, fParam3);
							if (fParam12 != 0f)
							{
								unk_0x58F6B49606932378(uVar0, fParam12, 0f, fParam3, 2, 1);
							}
						}
						else
						{
							unk_0x89B8CFBBA51399C9(uVar0);
						}
					}
					else
					{
						unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Param0, 0, 0, 0, 1);
						unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), fParam3);
					}
				}
				else
				{
					unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Param0, 0, 0, 0, 1);
					unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), fParam3);
				}
				func_357(bParam6, bParam9);
				return 1;
			}
			else
			{
				unk_0x4A918952774CFC67();
				unk_0xD7E55EAE7FBB010C(unk_0x8CFC7D6E1DA5D304(), Param0, fParam3, bParam4, iParam10, 0);
			}
			Global_2436169.f_1123 = unk_0xE92FCF3C05C2EF1D();
			Global_2436169.f_1117 = 1;
		}
	}
	if (Global_2436169.f_1117)
	{
		Global_17162.f_6 = 1;
		Global_2436169.f_1123 = unk_0xE92FCF3C05C2EF1D();
		if (Global_2436169.f_1124 > -1)
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				uVar0 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
			}
			if (func_352(&(Global_2436169.f_1124), Param0, fParam3, uVar0))
			{
				func_357(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Global_2436169.f_1119) < 2f)
				{
					if (unk_0x1E550B6CDBC1308F())
					{
						unk_0x5BBFABDAEA0AC189();
					}
					func_357(bParam6, bParam9);
					return 1;
				}
			}
			if (!unk_0x1E550B6CDBC1308F())
			{
				if (fParam12 != 0f)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						uVar0 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
						unk_0x58F6B49606932378(uVar0, fParam12, 0f, fParam3, 2, 1);
						Global_2436169.f_1125 = 1;
						return 0;
					}
				}
				func_357(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_352(var uParam0, struct<3> Param1, float fParam4, var uParam5)
{
	if (unk_0x31F12808DC47A9E5(Global_2436169.f_1126) && !unk_0x74C2FE037DFC8B4A(Global_2436169.f_1126, 0))
	{
		unk_0x89B8CFBBA51399C9(Global_2436169.f_1126);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2436169.f_1126 = uParam5;
			unk_0x89B8CFBBA51399C9(Global_2436169.f_1126);
			if (unk_0x1800B99666D25740(Global_2436169.f_1126))
			{
				if (!unk_0x74C2FE037DFC8B4A(Global_2436169.f_1126, 0))
				{
					unk_0xB88121FF8A34A66F(Global_2436169.f_1126, fParam4);
					unk_0x990FFD4FB6ADD630(Global_2436169.f_1126, Param1, 0, 1, 1, 1);
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
	
	iVar0 = unk_0xFE4CC02D61DA2398();
	if (unk_0xF8A48FE6ACDA45E8() && Global_2405047.f_2647 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405047.f_2646)
	{
		if (!unk_0x278E531440F0A177())
		{
			Global_2405047.f_2646 = iVar0;
		}
	}
}

int func_354(bool bParam0)
{
	if (unk_0xEC0ECEF2AF3FDA8D())
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
	if (Global_2422724[iParam0 /*420*/].f_237 == 99)
	{
		if ((iParam2 && Global_2422724[iParam0 /*420*/].f_240 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2422724[iParam0 /*420*/].f_237 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_356()
{
	return Global_1312831;
}

void func_357(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
		unk_0xA3F41A1968319181(0f);
	}
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x052A14525D6B2CEB(unk_0x18F7BE9ACB7D08F4());
	}
	if (!bParam1)
	{
		unk_0x4A918952774CFC67();
	}
	if (unk_0x1E550B6CDBC1308F())
	{
		unk_0x5BBFABDAEA0AC189();
	}
	func_330();
	if (!unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_15, 14))
	{
		func_358();
	}
}

void func_358()
{
	Global_2520699.f_80 = 1;
}

int func_359(var uParam0)
{
	if (unk_0x49E68AAD93AADF10(uParam0))
	{
		return unk_0x0FAE113CE72ED842(unk_0x5FC7C92D1FA1DAEC(uParam0));
	}
	return 1;
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142, 15))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 15);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142, 15))
	{
		unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 15);
	}
}

int func_361(var uParam0)
{
	if (unk_0x49E68AAD93AADF10(uParam0))
	{
		return !func_362(unk_0xFA62333764BA8F5D(uParam0));
	}
	return 0;
}

int func_362(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (unk_0x74C2FE037DFC8B4A(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xC4B84EB67F78C1F0(uParam0, 0))
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
	Global_92881.f_166[iParam0] = 1;
	Global_92881.f_165 = 1;
}

void func_365(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_92881.f_9[iParam0] = 1;
	}
	else
	{
		Global_92881.f_9[iParam0] = 0;
	}
}

void func_366(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_92881.f_8 = 1;
	}
	else
	{
		Global_92881.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
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
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

int func_368()
{
	return Local_568.f_0;
}

int func_369()
{
	return 1;
}

int func_370(int iParam0)
{
	return Local_740[iParam0 /*5*/];
}

int func_371(int iParam0)
{
	return Local_740[iParam0 /*5*/].f_2;
}

int func_372(bool bParam0)
{
	if (func_374())
	{
		if (bParam0)
		{
			if (!Global_1574303 && !func_373(unk_0x8CFC7D6E1DA5D304(), 2))
			{
				unk_0x9575CEFF222148A6("MinigameTransitionIn", 0, 1);
				func_320(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_373(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_223, iParam1);
}

bool func_374()
{
	return Global_2436169.f_2;
}

void func_375(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x44243F2E2F58B8E3())
	{
		if (bLocal_757)
		{
			if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 2))
			{
				if (!unk_0xB03A1684359C50A1(uLocal_751, 31))
				{
					func_30(119, 1, -1, 1);
					func_30(115, 1, -1, 1);
				}
				func_668(1);
				bVar0 = true;
			}
		}
		else if (unk_0xB03A1684359C50A1(Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/].f_3, 1))
		{
			if (!unk_0xB03A1684359C50A1(uLocal_751, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_199(&Local_94, 0, bParam0);
	if (unk_0x44243F2E2F58B8E3())
	{
		if (Global_2436169.f_3611)
		{
			func_661(0, 1);
		}
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		func_360(0);
	}
	unk_0x7E1D02126DA8A751(Local_94.f_122, 0);
	unk_0x1CA52524A2283CF0(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	unk_0x1CA52524A2283CF0(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	unk_0x62148293B793073B(&(Global_2512581.f_778), 4);
	func_87(0);
	func_56(0);
	func_660();
	func_659(iLocal_93, 0);
	func_180(&(Global_2436169.f_3861));
	Global_2436169.f_3859 = 0;
	Global_2436169.f_3858 = 0;
	Global_2436169.f_3860 = 0;
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 244, 1);
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 243, 1);
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 242, 1);
	}
	if (bVar0)
	{
		func_378(0, 0, 0, 0);
	}
	else
	{
		unk_0xEFF1F12403847394(1);
		func_378(0, 0, 3, 1);
	}
	unk_0x62148293B793073B(&(Global_2512581.f_778), 0);
	func_366(0);
	func_365(4, 0);
	func_365(1, 0);
	func_365(0, 0);
	func_365(2, 0);
	func_365(3, 0);
	func_363(iLocal_93, 0);
	func_350();
	func_33();
	if (unk_0xE769D9B5158D0F11(Global_92881.f_215[iLocal_93]))
	{
		unk_0x63EECA6600F1090E(Global_92881.f_215[iLocal_93], 0);
	}
	if (unk_0xE769D9B5158D0F11(uLocal_754))
	{
		unk_0x40D517D991458154(&uLocal_754);
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		func_377(0);
		func_183(0);
	}
	func_376(Local_568.f_5);
}

void func_376(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Param0.f_0)) >= 1000)
		{
			unk_0x7188C6E902B39C59();
		}
	}
	unk_0x810C5D6462DD69E6();
}

void func_377(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 5);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 5);
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
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	iVar1 = Global_1595681[iVar0 /*678*/];
	func_658();
	func_654();
	unk_0x167E4547E2A24AA6(0);
	func_653();
	Global_979644 = 0;
	Global_1573298 = 0;
	func_652();
	unk_0xA56741ADAD3C2876(0);
	func_651();
	Global_786546 = 0;
	Global_786546.f_1 = 0;
	Global_1574132 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	func_650(0);
	Global_1574121 = 0;
	Global_1574120 = 0;
	Global_1574142 = 0;
	Global_1574321 = 0;
	Global_1574327 = 0;
	Global_1573860 = 0;
	Global_1574848 = 1;
	Global_1574294 = 0;
	Global_1574133 = -1;
	func_649();
	func_648(0);
	unk_0x62148293B793073B(&(Global_2359302.f_1), 5);
	if (!func_647())
	{
		func_646();
	}
	func_645();
	func_644();
	func_643();
	func_642();
	func_641();
	if (unk_0x44243F2E2F58B8E3())
	{
		func_640();
	}
	if (func_639() || !func_638())
	{
		func_637();
		func_636(1, 1, 1);
		func_635();
		func_634();
		if (iVar0 != -1)
		{
			Global_1626339[iVar0 /*35*/].f_1 = 0;
			Global_1626339[iVar0 /*35*/].f_2 = 0;
			Global_1626339[iVar0 /*35*/] = 0;
		}
	}
	func_633();
	if ((Global_1646129 != 6 && func_632(Global_1646129.f_116948) != 14) && func_632(Global_1646129.f_116948) != 15)
	{
		if (func_12(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			if (unk_0x2E64174C91365575(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0xE8144E7C72E963DC(unk_0x18F7BE9ACB7D08F4(), 1);
			}
		}
	}
	Global_1573319 = 0;
	if (Global_1786353.f_9 == 4)
	{
		if (func_631(unk_0x8CFC7D6E1DA5D304()) || func_630(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1573319 = 1;
		}
	}
	func_628();
	if (func_627())
	{
		func_626();
	}
	func_625();
	Global_1646129.f_117589 = 0;
	Global_1786313.f_4 = 0;
	if (unk_0xB03A1684359C50A1(Global_1646129.f_14, 17))
	{
		unk_0x027427BEA7F4FE63(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0xFF6693EB571459B3(1);
	}
	else
	{
		unk_0x027427BEA7F4FE63(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0xFF6693EB571459B3(0);
	}
	StringCopy(&(Global_1646129.f_116940), "", 32);
	unk_0xA92183CDC960EFB2();
	unk_0xE05212008FE9A018(18);
	if ((bParam3 && !func_624()) && !func_623())
	{
		unk_0x3F19B70555683951();
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1625876[iVar3] = 0;
		Global_1625843[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		unk_0xD2A9C3F486236CC5(&(Global_2447908.f_5680), 3);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_2447908.f_5680), 3);
	}
	if (iVar0 != -1 && Global_2447128.f_557.f_10 != 0)
	{
		Global_1626339[unk_0x8CFC7D6E1DA5D304() /*35*/].f_2 = Global_2447128.f_557.f_10;
	}
	if (func_374() || (iVar0 != -1 && Global_1595681[iVar0 /*678*/].f_559))
	{
		func_622();
		func_621(1, 1);
		func_636(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1626339[iVar0 /*35*/].f_1 = 0;
			Global_1626339[iVar0 /*35*/].f_2 = 0;
			Global_1626339[iVar0 /*35*/] = 0;
		}
		func_620(1);
		if (func_619())
		{
			func_618();
		}
		if (!func_15(unk_0x8CFC7D6E1DA5D304()))
		{
			func_616(4);
		}
		func_635();
		func_615(0);
		func_614();
		Global_1574840 = 0;
	}
	if (!func_613())
	{
		func_612();
		if (func_611())
		{
			if (func_610())
			{
				func_622();
			}
		}
		func_620(1);
		if (!func_609())
		{
			Global_2447908.f_6015 = 0;
			Global_2447908.f_6016 = 0;
			Global_2447908.f_6014 = 0;
			Global_2447908.f_6013 = 0;
			Global_2447908.f_6173 = 0;
		}
	}
	else
	{
		func_608(unk_0x8CFC7D6E1DA5D304(), 0);
	}
	func_607((Global_1786353.f_9 != 4 && !func_613()));
	func_606((Global_1786353.f_9 != 4 && !func_613()));
	if (func_609())
	{
		Global_2447908.f_6105 = 1;
	}
	else
	{
		Global_2447908.f_6105 = 0;
	}
	if (!func_613())
	{
		if (func_609())
		{
			Global_2447908.f_6106 = 1;
		}
		else
		{
			Global_2447908.f_6106 = 0;
		}
	}
	if (!func_647())
	{
		Global_1786378.f_1345 = 0;
	}
	if (!func_613() && !func_647())
	{
		func_621(1, Global_1786353.f_9 != 4);
		func_636(1, 1, 0);
		func_605(0);
		func_604();
		Global_1574842 = 0;
		if (iVar0 != -1)
		{
			Global_1626339[iVar0 /*35*/].f_1 = 0;
			Global_1626339[iVar0 /*35*/].f_2 = 0;
			Global_1626339[iVar0 /*35*/] = 0;
		}
	}
	func_601(1, -1);
	if (func_600())
	{
		func_599();
	}
	if (unk_0x13C2BC1B63ABBCD5())
	{
		unk_0xF405C3BA7047650A();
	}
	if ((!func_624() && !func_613()) && !func_623())
	{
		func_594();
	}
	Global_1646129.f_117585 = 0;
	func_593();
	Global_1574114 = -1;
	Global_1625920 = -1;
	Global_1625914 = -1;
	Global_1625916 = -1;
	Global_1574119 = 0;
	Global_1625915 = 0;
	Global_1574305 = 0;
	Global_1574297 = 0;
	Global_1625921 = 0;
	func_592(0);
	func_591();
	Global_1595681[iVar0 /*678*/].f_559 = 0;
	Global_1625912 = 0f;
	Global_1625913 = 0f;
	Global_1574306 = 0;
	Global_1574307 = -1;
	func_590(0);
	Global_1574295 = 0;
	Global_1573861 = 0;
	func_589();
	unk_0x9FC66CAE22E74E58("WantedMusicDisabled", 0);
	unk_0x9FC66CAE22E74E58("DisableFlightMusic", 0);
	func_588(1);
	if (func_587())
	{
		func_586();
	}
	if (func_585())
	{
		if (func_583(unk_0x8CFC7D6E1DA5D304()))
		{
			if (unk_0xF1EEA41E4AC81B72() < 2)
			{
				func_582();
				func_581(1);
			}
			else
			{
				func_580();
			}
			if (Global_1786353.f_9 != -1)
			{
				func_579();
			}
		}
		else if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 0)
		{
			if (Global_1786353.f_9 != -1)
			{
				func_579();
			}
		}
	}
	bVar4 = func_16(iVar0);
	Global_1595681[iVar0 /*678*/].f_198 = 0;
	if (bVar4 && !func_647())
	{
		func_578();
	}
	if (!bVar4)
	{
		func_577(0);
	}
	if ((func_576() != 37 && func_576() != 36) && !func_575())
	{
		Global_1573273 = { 0f, 0f, 0f };
	}
	func_574();
	func_573();
	func_581(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1786353.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_572())
		{
			func_571(0, iVar6);
		}
	}
	unk_0x9659ED964A9C5DAB(0);
	if (unk_0x44243F2E2F58B8E3())
	{
		switch (Global_1786353.f_9)
		{
			case 1:
				if (!func_570() && func_567(0) > 0)
				{
					Global_1804409[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					func_565();
					func_564();
				}
				break;
			
			case 6:
				Global_1574840 = 0;
				if (!bVar4)
				{
					func_565();
				}
				func_564();
				Global_1786353 = 0;
				Global_1786353.f_22 = { 0f, 0f, 0f };
				Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_12 = 0;
				StringCopy(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_231), "", 24);
				Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_228 = { 0f, 0f, 0f };
				break;
			
			case 2:
				func_563(0);
				if (!func_562() || (func_562() && unk_0xFAFFA408239A026B(&(Global_2447128.f_25))))
				{
					func_561(Global_1786353.f_16);
					func_560(Global_1786353.f_16);
				}
				iVar5 = Global_1595681[iVar0 /*678*/].f_11;
				if (iVar5 != func_125())
				{
					if (unk_0x4AF13BCD120BCDBC(iVar5))
					{
						Global_2447908.f_5681 = { func_73(iVar5) };
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
				if ((iVar7 && func_562()) && unk_0xF2B13671ED1DFEFD() == 1)
				{
					Global_2447908.f_5681 = { func_559() };
				}
				if (((((Global_1646129.f_35 > 1 && !func_552()) && !func_551(Global_1646129.f_116948)) && !func_550(Global_1646129.f_116948)) && Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_99.f_28 > -1) && Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_99.f_28 < 4)
				{
					func_549(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_99.f_28);
				}
				else
				{
					func_548();
				}
				break;
			
			case 3:
				func_563(0);
				iVar2 = 1;
				func_547();
				iVar5 = Global_1595681[iVar0 /*678*/].f_11;
				if (iVar5 != func_125())
				{
					if (unk_0x4AF13BCD120BCDBC(iVar5))
					{
						Global_2447908.f_5681 = { func_73(iVar5) };
					}
				}
				if (((Global_1646129.f_35 > 1 && !func_552()) && !func_551(Global_1646129.f_116948)) && !func_550(Global_1646129.f_116948))
				{
					func_549(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_99.f_28);
				}
				else
				{
					func_548();
				}
				break;
			
			case 4:
				func_563(0);
				iVar2 = 1;
				if (func_546())
				{
					func_545();
				}
				else if (func_544())
				{
				}
				else
				{
					Global_2447908.f_6015 = 0;
					Global_2447908.f_6016 = 0;
					Global_2447908.f_6014 = 0;
					Global_2447908.f_6013 = 0;
				}
				if (func_631(unk_0x8CFC7D6E1DA5D304()) || func_630(unk_0x8CFC7D6E1DA5D304()))
				{
					Global_786435.f_34++;
				}
				else if (func_543())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				if (!unk_0xB03A1684359C50A1(Global_1646129.f_12, 22))
				{
					if (!unk_0xB03A1684359C50A1(Global_1646129.f_12, 15))
					{
						func_542(Global_1646129.f_117562);
					}
					else
					{
						func_541(Global_1646129.f_135165, Global_1646129.f_135166);
					}
					if (Global_1786353.f_13 > -1)
					{
						unk_0x79BFB212E01BEEB9(Global_1786353.f_13, Global_1786353.f_14, 0);
					}
					else if (func_540() > -1)
					{
						func_538(func_540(), 0);
					}
				}
				if (func_537())
				{
					Var8 = { func_536() };
					func_535(Var8);
					if (func_534() != -1)
					{
						Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_99.f_28 = func_534();
					}
					func_533();
					func_532();
				}
				else
				{
					func_547();
				}
				if (!func_236(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					unk_0x91366BFB63F0F023(0);
					func_529(0, 0, 1);
				}
				break;
			
			case 5:
				func_563(0);
				iVar2 = 1;
				func_547();
				break;
			
			case 8:
				if (!func_562())
				{
					func_561(Global_1786353.f_16);
				}
				break;
			
			case 9:
				func_563(0);
				iVar2 = 1;
				func_547();
				func_560(Global_1646129.f_117235);
				Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_231 = { Global_1646129.f_117235 };
				if (func_528())
				{
					func_527();
				}
				if (!func_236(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					unk_0x91366BFB63F0F023(0);
					func_529(0, 0, 1);
				}
				break;
			
			case 10:
				func_510(10, 0f, 0f, 0f, Var14);
				func_509();
				break;
		}
	}
	else
	{
		Global_1574840 = 0;
	}
	if (iVar2 || func_630(unk_0x8CFC7D6E1DA5D304()))
	{
		if ((func_508(unk_0x8CFC7D6E1DA5D304()) || func_631(unk_0x8CFC7D6E1DA5D304())) || func_630(unk_0x8CFC7D6E1DA5D304()))
		{
			if (Global_1795250 > 0)
			{
				Global_2447908.f_1.f_2825.f_13 = Global_1795250;
				Global_2447908.f_1.f_2825 = { Global_1795250.f_1 };
			}
		}
		else
		{
			func_507();
		}
	}
	Global_2447908.f_1.f_842 = 0;
	unk_0x62148293B793073B(&Global_1573865, 0);
	func_506(0);
	Global_1574124 = 0;
	Global_1574290 = -1;
	Global_1625842 = 0;
	Global_1312436 = 0;
	Global_1786353.f_1 = 0;
	Global_1786353.f_2 = 0;
	if (func_505() == 0)
	{
		if (Global_1786353.f_9 == -1 && bVar4 == 0)
		{
			func_497(0);
		}
		else
		{
			Global_1786353.f_9 = -1;
		}
	}
	func_496();
	if (func_495())
	{
		func_494();
	}
	if (func_493())
	{
		func_492();
	}
	if (!unk_0x13C2BC1B63ABBCD5())
	{
		unk_0x91ECEEF6D26A87A6(1);
	}
	if (func_505() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!func_491(Global_1595681[iVar0 /*678*/]) && !func_624()) && !bVar4) && !func_356()) && !func_613()) && !func_623())
			{
				func_490(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_489();
	Global_1786353.f_1 = 0;
	if (!func_585())
	{
		func_488();
	}
	if (Global_1595681[iVar0 /*678*/] != -1)
	{
		iParam2 = iParam2;
		if (func_487(Global_1595681[iVar0 /*678*/]))
		{
			if (unk_0xA1C84586015AE5DB())
			{
				iVar20 = func_470(0);
				func_467(1209, -1);
				func_462(joaat("mpply_mgame_cheat_end"), iVar20);
				if (iVar20 > 0)
				{
					func_462(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		unk_0xF300503D6C1F6B14(unk_0x8CFC7D6E1DA5D304());
	}
	func_460();
	if (Global_1786353 == 0)
	{
		if (!bVar4)
		{
			Global_1595681[iVar0 /*678*/].f_11 = -1;
			Global_1595681[iVar0 /*678*/].f_12 = 0;
		}
	}
	if (bVar4)
	{
		func_490(0);
		Global_1595681[iVar0 /*678*/].f_12 = 1;
		Global_1595681[iVar0 /*678*/].f_11 = func_459(unk_0x8CFC7D6E1DA5D304());
		unk_0x91366BFB63F0F023(0);
		func_529(0, 0, 1);
		if (func_458())
		{
			func_456();
		}
	}
	if ((Global_1595681[iVar0 /*678*/] < 10 && Global_1595681[iVar0 /*678*/] != -1) && !func_356())
	{
		if ((!unk_0xFAFFA408239A026B(&(Global_1595681[iVar0 /*678*/].f_147)) && Global_1595681[iVar0 /*678*/] != 5) && Global_1595681[iVar0 /*678*/] != 148)
		{
			func_453(&(Global_1595681[iVar0 /*678*/].f_147));
		}
	}
	if (Global_1595681[iVar0 /*678*/] != 6)
	{
		Global_1786300 = 1;
	}
	Global_1595681[iVar0 /*678*/] = -1;
	Global_1595681[iVar0 /*678*/].f_39.f_2 = -1;
	Global_1595681[iVar0 /*678*/].f_39.f_16 = -1;
	Global_1595681[iVar0 /*678*/].f_39.f_1 = -1;
	Global_1646129 = 0;
	if (!bVar4)
	{
		func_452(0);
	}
	Global_1595681[iVar0 /*678*/].f_39.f_18 = 0;
	unk_0x62148293B793073B(&(Global_1595681[unk_0x71808F682AF71F7D() /*678*/].f_557), 0);
	unk_0x3137F687F17C5F70(0, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		unk_0x11E17A11B13AC43A();
		Global_2457953 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1595681[iVar0 /*678*/].f_147), sVar21, 24);
		StringCopy(&(Global_1595681[iVar0 /*678*/].f_153), sVar21, 24);
		func_451();
	}
	StringCopy(&(Global_1617378[iVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1595681[iVar0 /*678*/].f_167), sVar21, 64);
	Global_1626339[iVar0 /*35*/].f_30 = { Var22 };
	Global_1574300 = 0;
	Global_1574301 = 0;
	Global_1573873 = -1;
	bVar24 = false;
	func_450();
	func_449();
	func_448();
	if (func_447())
	{
		func_446();
	}
	if (func_445() && unk_0x13C2BC1B63ABBCD5())
	{
		func_444();
		func_328(unk_0x8CFC7D6E1DA5D304(), 0, 57348);
	}
	if (func_443())
	{
		func_442();
	}
	else if (func_441())
	{
		func_442();
	}
	else if (func_440())
	{
		func_442();
	}
	else if (func_439())
	{
		func_442();
	}
	else if (func_438())
	{
		func_442();
	}
	else if (func_505())
	{
		func_442();
	}
	else if (func_437() && func_436())
	{
		func_442();
	}
	else if (func_435())
	{
		func_442();
	}
	else
	{
		func_434();
		if (!Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_12 && !func_647())
		{
			if (unk_0x13C2BC1B63ABBCD5())
			{
				if (func_458())
				{
					func_433();
				}
				else
				{
					if (!unk_0xB03A1684359C50A1(Global_1646129.f_28, 10))
					{
						if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
						{
							Global_2447908.f_2843.f_197 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0) };
						}
					}
					func_432();
					func_635();
					func_431(6);
					func_564();
					if (bVar4)
					{
						func_615(0);
					}
				}
				func_430();
				func_429();
				func_428();
				if (Global_2447908.f_2843.f_4 == 2)
				{
					Global_2447908.f_2843.f_4 = 1;
				}
				if (func_236(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					func_427();
				}
				func_426();
				Global_2447908.f_2843 = 0;
			}
			else
			{
				func_425();
				func_442();
			}
		}
		else
		{
			if (!func_609() && !func_647())
			{
			}
			func_425();
			func_442();
		}
	}
	if ((((((((((!func_443() && !func_424()) && !func_436()) && !func_437()) && !func_440()) && !func_441()) && !func_423()) && !func_438()) && !func_505()) && !func_439()) && !func_422())
	{
		if (!func_421())
		{
			func_420();
			func_418();
			func_417();
			func_415(1);
		}
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0x3AB73ED02FDAC9A8())
		{
			if (!unk_0xACB55959DB871ABF())
			{
				if (!func_414())
				{
					if (!bVar24)
					{
						if (func_15(unk_0x8CFC7D6E1DA5D304()))
						{
							unk_0xAAFC3FABFBDC56B4();
							unk_0x0B462B751FFD3B6E();
						}
					}
				}
			}
		}
	}
	if (!func_356())
	{
		StringCopy(&(Global_1646129.f_116955), "", 64);
	}
	if (func_413(116, &iVar25))
	{
		func_412(iVar25);
	}
	if (func_413(123, &iVar25))
	{
		func_412(iVar25);
	}
	if (!func_647())
	{
		func_404();
	}
	func_403();
	if (!func_613() && !func_609())
	{
		func_402();
	}
	func_379(bParam3);
}

void func_379(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_585())
		{
		}
		else if ((((!func_613() && !func_609()) && !func_647()) && Global_1786353.f_9 != 9) && Global_1786353.f_9 != 4)
		{
			func_538(0, 1);
		}
	}
	unk_0x6D88D1D62502CEFC();
	if (!func_401(unk_0x8CFC7D6E1DA5D304()) && !Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_577)
	{
		func_400();
	}
	if (func_399())
	{
		func_398(1);
		func_397(1);
	}
	if ((((bParam0 && !func_396()) && !func_613()) && !Global_262145.f_4721) && !func_394())
	{
		unk_0x9A0B7D6B811C540B();
	}
	unk_0x4F7751BE82240EB4(5, 1);
	unk_0x4F7751BE82240EB4(3, 1);
	func_386(&uVar0, -1);
	if ((func_28() == 0 && !func_109()) && !func_613())
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
	if (!Global_1794792 == iParam0)
	{
		Global_1794792 = iParam0;
	}
}

void func_381(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_383(iParam0, iParam1))
	{
		iVar0 = func_382();
		Global_2456686[iVar0] = iParam0;
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
		if (Global_2456686[iVar1] == 0)
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
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	unk_0xD2A9C3F486236CC5(&(Global_971063.f_8), 22);
}

bool func_385()
{
	return unk_0xB03A1684359C50A1(Global_971063.f_8, 21);
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
	uVar1 = unk_0x3A75EA627A024B7A(uVar0);
	if (func_388())
	{
		if (unk_0xB03A1684359C50A1(uVar1, 1))
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
	uVar2 = unk_0x3A75EA627A024B7A(uVar1);
	if (unk_0xB03A1684359C50A1(uVar2, 1))
	{
		func_467(1204, iParam1);
		func_462(joaat("mpply_dm_cheat_start"), 2);
		func_462(joaat("mpply_activity_started"), 1);
		unk_0x62148293B793073B(&uVar2, 1);
		bVar0 = true;
	}
	if (unk_0xB03A1684359C50A1(uVar2, 2))
	{
		func_467(1206, iParam1);
		func_462(joaat("mpply_race_cheat_start"), 2);
		func_462(joaat("mpply_activity_started"), 1);
		unk_0x62148293B793073B(&uVar2, 2);
		bVar0 = true;
	}
	if (unk_0xB03A1684359C50A1(uVar2, 3))
	{
		func_467(1115, iParam1);
		func_462(joaat("mpply_mc_cheat_start"), 2);
		func_462(joaat("mpply_activity_started"), 1);
		unk_0x62148293B793073B(&uVar2, 3);
		bVar0 = true;
	}
	if (unk_0xB03A1684359C50A1(uVar2, 4))
	{
		func_467(1208, iParam1);
		func_462(joaat("mpply_mgame_cheat_start"), 2);
		func_462(joaat("mpply_activity_started"), 1);
		unk_0x62148293B793073B(&uVar2, 4);
		bVar0 = true;
	}
	if (unk_0xB03A1684359C50A1(uVar2, 5))
	{
		func_467(1920, iParam1);
		func_462(joaat("mpply_cap_cheat_start"), 2);
		func_462(joaat("mpply_activity_started"), 1);
		unk_0x62148293B793073B(&uVar2, 5);
		bVar0 = true;
	}
	if (unk_0xB03A1684359C50A1(uVar2, 6))
	{
		func_467(1922, iParam1);
		func_462(joaat("mpply_sur_cheat_start"), 2);
		func_462(joaat("mpply_activity_started"), 1);
		unk_0x62148293B793073B(&uVar2, 6);
		bVar0 = true;
	}
	if (unk_0xB03A1684359C50A1(uVar2, 7))
	{
		func_467(1924, iParam1);
		func_462(joaat("mpply_lts_cheat_start"), 2);
		func_462(joaat("mpply_activity_started"), 1);
		unk_0x62148293B793073B(&uVar2, 7);
		bVar0 = true;
	}
	if (unk_0xB03A1684359C50A1(uVar2, 8))
	{
		func_467(1926, iParam1);
		func_462(joaat("mpply_para_cheat_start"), 2);
		func_462(joaat("mpply_activity_started"), 1);
		unk_0x62148293B793073B(&uVar2, 8);
		bVar0 = true;
	}
	if (unk_0xB03A1684359C50A1(uVar2, 9))
	{
		func_467(6671, iParam1);
		func_462(joaat("mpply_heist_cheat_start"), 2);
		func_462(joaat("mpply_activity_started"), 1);
		unk_0x62148293B793073B(&uVar2, 9);
		bVar0 = true;
	}
	if (unk_0xB03A1684359C50A1(uVar2, 26))
	{
		func_467(1928, iParam1);
		func_462(joaat("mpply_fmevn_cheat_start"), 2);
		func_462(joaat("mpply_activity_started"), 1);
		unk_0x62148293B793073B(&uVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		unk_0x00B287B75519DE58(uVar2, iParam1);
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
	if (func_631(unk_0x8CFC7D6E1DA5D304()) || func_630(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_395() || func_609())
		{
			return 1;
		}
	}
	return 0;
}

bool func_395()
{
	return unk_0xB03A1684359C50A1(Global_1312760, 4);
}

bool func_396()
{
	return Global_1574303;
}

void func_397(int iParam0)
{
	Global_2447908.f_6172 = iParam0;
}

void func_398(int iParam0)
{
	Global_2447908.f_6012 = iParam0;
}

int func_399()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!unk_0xFAFFA408239A026B(&(Global_1646129.f_117241[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_400()
{
	unk_0x945880A1F9FE9E4F(6);
	unk_0x8BB3FA32294185BB(1f);
	unk_0x0A950E4F24C0A27E(1);
}

int func_401(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627460[iVar0 /*530*/] != -1;
	}
	return 0;
}

void func_402()
{
	Global_2447128.f_35.f_40 = 0;
}

void func_403()
{
	Global_1786353.f_6 = 0;
}

void func_404()
{
	struct<3> Var0;
	struct<2> Var3;
	int iVar5;
	
	if (!func_410(func_411(), Var0))
	{
		Var3.f_0 = -382386453;
		Var3.f_1 = unk_0x8CFC7D6E1DA5D304();
		iVar5 = func_409(1, 1);
		if (!iVar5 == 0)
		{
			func_406();
			func_405(0);
			unk_0xDC8B8CF2FBDF3387(1, &Var3, 2, iVar5);
		}
	}
}

void func_405(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2436169.f_3606 = unk_0xE92FCF3C05C2EF1D();
	}
	Global_2436169.f_3490 = iParam0;
}

void func_406()
{
	func_408();
	func_407();
}

void func_407()
{
	struct<72> Var0;
	
	if (func_55(unk_0x8CFC7D6E1DA5D304()))
	{
		Var0.f_6 = 32;
		Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_137 = { Var0 };
	}
}

void func_408()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2436169.f_3490.f_79 };
	Var0.f_95 = { Global_2436169.f_3490.f_95 };
	Global_2436169.f_3490 = { Var0 };
}

var func_409(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3479F6F64A48251C(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x8CFC7D6E1DA5D304() || iParam0)
			{
				if (bParam1)
				{
					unk_0xD2A9C3F486236CC5(&uVar0, iVar1);
				}
				else if (!func_236(iVar2, 0))
				{
					unk_0xD2A9C3F486236CC5(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_410(struct<3> Param0, struct<3> Param3)
{
	if ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_411()
{
	return Global_2421972[unk_0x8CFC7D6E1DA5D304() /*10*/];
}

void func_412(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2486334[iParam0 /*5*/].f_1 == -1 || Global_2486334[iParam0 /*5*/].f_2 == -1) || Global_2486334[iParam0 /*5*/].f_3 == -1) || Global_2486334[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	unk_0x6A1A601DA71D9D7B(Global_2486334[iParam0 /*5*/], Global_2486334[iParam0 /*5*/].f_1, Global_2486334[iParam0 /*5*/].f_2, Global_2486334[iParam0 /*5*/].f_3, Global_2486334[iParam0 /*5*/].f_4);
	Global_2486334[iParam0 /*5*/] = -1;
	Global_2486334[iParam0 /*5*/].f_1 = -1;
	Global_2486334[iParam0 /*5*/].f_2 = -1;
	Global_2486334[iParam0 /*5*/].f_3 = -1;
	Global_2486334[iParam0 /*5*/].f_4 = -1;
}

int func_413(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2486334[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_414()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142, 18);
}

void func_415(bool bParam0)
{
	struct<57> Var0;
	int iVar57;
	
	Global_2447908.f_1.f_2798 = 0;
	Global_2447908.f_1.f_2799 = 0;
	Global_2447908.f_1.f_2821 = 0;
	Global_2447908.f_1.f_2805 = 0;
	Global_2447908.f_1.f_2806 = 0;
	Global_2447908.f_1.f_2809 = 0;
	Global_2447908.f_1.f_2810 = 0;
	Global_2447908.f_1.f_2808 = -1;
	Global_2447908.f_1.f_2811 = -1;
	Global_2447908.f_1.f_2813 = 0;
	Global_2447908.f_1.f_2814 = 0;
	Global_2447908.f_1.f_2815 = 0;
	Global_2447908.f_1.f_2816 = 0;
	Global_2447908.f_1.f_2817 = 0;
	Global_2447908.f_1.f_2818 = 0;
	Global_2447908.f_1.f_2822 = -1;
	if (bParam0)
	{
		Global_2447908.f_1.f_2819 = -1;
		Global_2447908.f_1.f_2820 = -1;
	}
	Global_2447908.f_1.f_2841 = 0;
	func_416();
	Var0.f_33 = 2;
	Var0.f_36 = 7;
	iVar57 = 0;
	while (iVar57 <= 31)
	{
		Global_2447908.f_1.f_845[iVar57 /*57*/] = { Var0 };
		iVar57++;
	}
	Global_2443993.f_33 = -1;
	Global_2443993.f_34 = -1;
}

void func_416()
{
	Global_2443993.f_32 = 0;
}

void func_417()
{
	Global_2447128.f_579 = 0;
}

void func_418()
{
	Global_2447128.f_580 = 0;
	func_419();
}

void func_419()
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	if (iVar0 >= 0)
	{
		unk_0x62148293B793073B(&(Global_1595681[iVar0 /*678*/].f_99.f_32), 6);
	}
}

void func_420()
{
	Global_2447128 = 0;
	Global_2447128.f_2 = 0;
	Global_2447128.f_3 = 0;
}

bool func_421()
{
	return Global_2447128.f_579;
}

bool func_422()
{
	return Global_1795241;
}

bool func_423()
{
	return unk_0xB03A1684359C50A1(Global_2447128, 1);
}

bool func_424()
{
	return unk_0xB03A1684359C50A1(Global_2447128, 16);
}

void func_425()
{
	unk_0x62148293B793073B(&Global_2447128, 21);
}

void func_426()
{
	Global_2447908.f_2843.f_34 = 1;
}

void func_427()
{
	Global_2447908.f_1.f_2824 = 1;
}

void func_428()
{
	Global_2447128.f_713 = 1;
}

void func_429()
{
	Global_2447908.f_1.f_2823 = 1;
}

void func_430()
{
	unk_0xD2A9C3F486236CC5(&Global_2447128, 21);
}

void func_431(int iParam0)
{
	Global_2447908.f_1.f_837 = iParam0;
	Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_227 = iParam0;
}

void func_432()
{
	struct<38> Var0;
	
	Var0 = 31;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_2444031 = { Var0 };
}

void func_433()
{
	Global_2447908.f_2843.f_1 = 1;
}

void func_434()
{
	Global_2447908.f_2843.f_1 = 0;
}

bool func_435()
{
	return Global_2447128.f_604;
}

bool func_436()
{
	return Global_2447128.f_594;
}

bool func_437()
{
	return Global_2447128.f_581;
}

bool func_438()
{
	return Global_2447128.f_590;
}

bool func_439()
{
	return unk_0xB03A1684359C50A1(Global_2447128.f_2, 15);
}

bool func_440()
{
	return unk_0xB03A1684359C50A1(Global_2447128, 20);
}

bool func_441()
{
	return unk_0xB03A1684359C50A1(Global_2447128, 2);
}

void func_442()
{
	Global_2447908.f_2843.f_34 = 0;
}

bool func_443()
{
	return unk_0xB03A1684359C50A1(Global_971063.f_8, 8);
}

void func_444()
{
	Global_2447128.f_609 = 0;
}

var func_445()
{
	return Global_2447128.f_609;
}

void func_446()
{
	Global_2447128.f_639 = 0;
}

bool func_447()
{
	return Global_2447128.f_639;
}

void func_448()
{
	Global_2447908.f_1.f_838 = 0;
	Global_2447908.f_1.f_839 = 0;
	Global_2447908.f_1.f_841 = 0;
}

void func_449()
{
	unk_0x62148293B793073B(&Global_2447128, 4);
}

void func_450()
{
	unk_0x62148293B793073B(&Global_2447128, 28);
}

void func_451()
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	unk_0x62148293B793073B(&(Global_1595681[iVar0 /*678*/].f_13.f_1), 4);
	unk_0x62148293B793073B(&(Global_1595681[iVar0 /*678*/].f_13.f_1), 5);
	unk_0x62148293B793073B(&(Global_1595681[iVar0 /*678*/].f_13.f_1), 7);
	unk_0x62148293B793073B(&(Global_1595681[iVar0 /*678*/].f_13.f_1), 8);
	unk_0x62148293B793073B(&(Global_1595681[iVar0 /*678*/].f_13.f_1), 9);
	unk_0x62148293B793073B(&(Global_1595681[iVar0 /*678*/].f_13.f_1), 10);
	unk_0x62148293B793073B(&(Global_1595681[iVar0 /*678*/].f_13.f_1), 11);
	unk_0x62148293B793073B(&(Global_1595681[iVar0 /*678*/].f_13.f_1), 12);
	unk_0x62148293B793073B(&(Global_1595681[iVar0 /*678*/].f_13.f_1), 13);
}

void func_452(int iParam0)
{
	unk_0x91366BFB63F0F023(iParam0);
}

void func_453(var uParam0)
{
	var uVar0;
	
	if ((!func_455() && func_454(120, -1)) && !func_356())
	{
		unk_0xACA88C3DBF3EF1FE(uParam0, &uVar0, 13);
		if (unk_0xBD82AF3F842B99A5(&uVar0, 13))
		{
			if (unk_0x5AA8CFBEDE9B83FC(&uVar0))
			{
			}
		}
	}
}

int func_454(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547154[iParam0 /*3*/][func_25(iParam1)];
	if (unk_0xA17AF9F044C9C70E(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_455()
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	if ((Global_1595681[iVar0 /*678*/].f_39.f_2 == 63 || Global_1595681[iVar0 /*678*/].f_39.f_2 == 62) || Global_1595681[iVar0 /*678*/].f_39.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_456()
{
	unk_0xD2A9C3F486236CC5(&(Global_971063.f_8), 8);
	func_457();
}

void func_457()
{
	Global_2447128.f_767 = 1;
}

bool func_458()
{
	return Global_2447908.f_2843.f_2;
}

var func_459(int iParam0)
{
	return Global_1595681[iParam0 /*678*/].f_99.f_2;
}

void func_460()
{
	if (func_461())
	{
		unk_0xEFF1F12403847394(1);
	}
}

bool func_461()
{
	return func_179("FM_RETRY_INV");
}

void func_462(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_466(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_465(iParam0))
	{
		func_464(iParam0, iVar0);
	}
	else
	{
		func_463(iParam0, iVar0);
	}
}

void func_463(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1367754 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1367756 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1367756 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1367757 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1367758 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1367759 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1367760 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1367761 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1367762 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1367763 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1367764 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1367765 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1367766 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1367767 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1367768 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1367769 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1367770 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_464(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, 1);
	}
}

int func_465(int iParam0)
{
	if (Global_1367753)
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

int func_466(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_467(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam1), 0);
	iVar0++;
	if (!func_469(iParam0))
	{
		func_59(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_468(iParam0, iVar0, iParam1, 1);
	}
}

void func_468(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2522855[iParam0 /*3*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1367820[func_25(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1367826[func_25(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1367832[func_25(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1367838[func_25(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1367796[func_25(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1367802[func_25(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1367808[func_25(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1367814[func_25(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1367772[func_25(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1367778[func_25(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1367784[func_25(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1367790[func_25(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1367844[func_25(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1367850[func_25(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1367856[func_25(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1367862[func_25(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1367868[func_25(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1367874[func_25(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1367880[func_25(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2548958[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2548958[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2548958[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2548958[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 7050:
			Global_2549041[func_25(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1367886[func_25(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1367892[func_25(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1367898[func_25(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1367904[func_25(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2548998[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2548998[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2548998[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2548998[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2548998[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549044[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549044[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549044[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549044[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549044[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549060[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549060[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549060[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549060[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549060[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2548998[5 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2548958[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549076[func_25(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549085[func_25(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549079[func_25(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549088[func_25(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549082[func_25(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549091[func_25(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549094[func_25(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2548998[6 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2548958[5 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2548998[7 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2548958[6 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2548998[8 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2548958[7 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2548998[9 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2548958[8 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2548998[10 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2548958[9 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2548998[11 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2548958[10 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2548998[12 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2548958[11 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2548998[13 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2548958[12 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_469(int iParam0)
{
	if (Global_1367753)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7050:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

int func_470(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2457833 == 0)
	{
		return 0;
	}
	if (func_486())
	{
		if (unk_0x13C2BC1B63ABBCD5() || (func_485() || func_481()))
		{
			Global_2456785 = 1;
		}
	}
	Global_2457833 = 0;
	if (Global_1315680)
	{
		iVar0 = 1;
	}
	if (Global_2456785)
	{
		iVar0 = 1;
	}
	if (Global_2456784)
	{
		iVar0 = 1;
	}
	if (func_480(Global_103579.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2456710)
	{
		iVar0 = 1;
	}
	if (func_479(512))
	{
		iVar0 = 1;
	}
	if (func_478(128))
	{
		iVar0 = 1;
	}
	if (Global_1315704 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_356())
	{
		iVar0 = 0;
	}
	if (Global_2457272)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_476())
		{
			if (Global_1646129.f_117587 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_236(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		iVar0 = 0;
	}
	if (func_475())
	{
		iVar0 = 0;
	}
	if ((Global_2456785 || Global_2456784) || Global_1315680)
	{
		if (func_481())
		{
			iVar0 = 0;
		}
	}
	Global_2457272 = 0;
	Global_2456784 = 0;
	Global_2456785 = 0;
	Global_1315680 = 0;
	Global_2456710 = 0;
	func_473(&(Global_103579.f_1), 32);
	func_472(512);
	func_471(128);
	return iVar0;
}

void func_471(int iParam0)
{
	Global_103636 = (Global_103636 - (Global_103636 && iParam0));
}

void func_472(int iParam0)
{
	Global_103637 = (Global_103637 - (Global_103637 && iParam0));
}

void func_473(var uParam0, int iParam1)
{
	func_474(uParam0, iParam1);
}

void func_474(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_475()
{
	if (((Global_1574325 || Global_1574296) || func_236(unk_0x8CFC7D6E1DA5D304(), 0)) || func_235())
	{
		return 1;
	}
	return 0;
}

int func_476()
{
	switch (func_477())
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

int func_477()
{
	return Global_2447908.f_1.f_2819;
}

bool func_478(int iParam0)
{
	return (Global_103636 && iParam0) != 0;
}

bool func_479(int iParam0)
{
	return (Global_103637 && iParam0) != 0;
}

bool func_480(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_481()
{
	if (func_484(Global_2458947))
	{
		return 0;
	}
	if (func_482(unk_0x8CFC7D6E1DA5D304(), 146))
	{
		return 1;
	}
	return 0;
}

int func_482(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/] == iParam1)
	{
		return func_483(iParam0);
	}
	return 0;
}

int func_483(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_1627460[iVar0 /*530*/].f_1, 0);
	}
	return 0;
}

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_10554)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_10556)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_10553)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_10557)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_10558)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_10559)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_10555)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_10560)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_10561)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_10562)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_10563)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_485()
{
	if (func_484(Global_2458947))
	{
		return 0;
	}
	if (func_483(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	return 0;
}

bool func_486()
{
	return unk_0xB03A1684359C50A1(Global_1312423, 0);
}

int func_487(int iParam0)
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

void func_488()
{
	if (unk_0x788C6B35BB3FCF53(unk_0xDEC40DF5CB14766D(unk_0x8CFC7D6E1DA5D304()), "MissionType"))
	{
		unk_0x324E231F8F6EF220(unk_0xDEC40DF5CB14766D(unk_0x8CFC7D6E1DA5D304()), "MissionType");
	}
	if (unk_0x788C6B35BB3FCF53(unk_0xDEC40DF5CB14766D(unk_0x8CFC7D6E1DA5D304()), "MatchId"))
	{
		unk_0x324E231F8F6EF220(unk_0xDEC40DF5CB14766D(unk_0x8CFC7D6E1DA5D304()), "MatchId");
	}
	if (unk_0x788C6B35BB3FCF53(unk_0xDEC40DF5CB14766D(unk_0x8CFC7D6E1DA5D304()), "TeamId"))
	{
		unk_0x324E231F8F6EF220(unk_0xDEC40DF5CB14766D(unk_0x8CFC7D6E1DA5D304()), "TeamId");
	}
}

void func_489()
{
	Global_2447128.f_585 = 0;
	unk_0xAFB86CC0037355AE();
}

void func_490(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_35)
		{
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_35 = 1;
		}
	}
	else if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_35)
	{
		Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_35 = 0;
	}
}

int func_491(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_492()
{
	Global_2447128.f_727 = 0;
}

bool func_493()
{
	return Global_2447128.f_727;
}

void func_494()
{
	Global_2447128.f_731 = 0;
}

bool func_495()
{
	return Global_2447128.f_731;
}

void func_496()
{
	unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_99.f_32), 1);
}

int func_497(int iParam0)
{
	int iVar0;
	
	if (func_235())
	{
		return 1;
	}
	if (func_502())
	{
		return 1;
	}
	if (unk_0xFAFFA408239A026B(&(Global_1646129.f_117235)))
	{
		return 1;
	}
	if (func_501())
	{
		return 1;
	}
	func_500();
	unk_0x28B39A1BEDE0659D();
	iVar0 = unk_0x83D41653B770AF1D();
	if (iParam0 == 0)
	{
		Global_1786313++;
		unk_0x09F5B5852B43E28B(iVar0, "quit", Global_1786313);
		unk_0x09F5B5852B43E28B(iVar0, "quitd", 1);
		unk_0x09F5B5852B43E28B(iVar0, "ply", Global_1786313.f_2);
		unk_0x09F5B5852B43E28B(iVar0, "lp", unk_0xE6E19D6A1FC25165());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1786338.f_1++;
		unk_0x09F5B5852B43E28B(iVar0, "quit", Global_1786338.f_1);
		unk_0x09F5B5852B43E28B(iVar0, "quitd", 1);
		unk_0x09F5B5852B43E28B(iVar0, "ply", Global_1786338.f_4);
		unk_0x09F5B5852B43E28B(iVar0, "lp", unk_0xE6E19D6A1FC25165());
	}
	if (iParam0 == 0)
	{
		if (unk_0x5BBD5BFD9CA62A65(&(Global_1646129.f_117235), 0f, func_499(iParam0)))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (unk_0x5BBD5BFD9CA62A65(&(Global_971063.f_42), 0f, func_499(iParam0)))
		{
		}
	}
	func_498();
	func_500();
	unk_0xDC2CB8BCD7381867();
	return 1;
}

void func_498()
{
	Global_1786313 = 0;
	Global_1786313.f_2 = 0;
	Global_1786313.f_8 = 0;
	Global_1786313.f_3 = 0;
	Global_1786313.f_6 = 0;
}

char* func_499(int iParam0)
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

void func_500()
{
	if (unk_0x83D41653B770AF1D() != 0)
	{
		unk_0xA02C7F60D1CE5C0F();
	}
}

int func_501()
{
	if (unk_0x76001EA6354A3D94())
	{
		return 1;
	}
	else if (unk_0x570C8964C5CEF48B())
	{
		return 1;
	}
	else if (unk_0x3B324A969F8939CA())
	{
		return 1;
	}
	return 0;
}

int func_502()
{
	if (!func_503())
	{
		return 1;
	}
	return 0;
}

int func_503()
{
	if (func_504())
	{
		return 0;
	}
	if (unk_0x9D67C2091DFDB507() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_504()
{
	return Global_2457277;
}

bool func_505()
{
	return Global_2447128.f_621;
}

void func_506(bool bParam0)
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

void func_507()
{
	Global_2447908.f_1.f_2825.f_13 = 0;
	Global_2447908.f_1.f_2825 = 0;
	Global_2447908.f_1.f_2825.f_1 = 0;
	Global_2447908.f_1.f_2825.f_2 = 0;
	Global_2447908.f_1.f_2825.f_3 = 0;
	Global_2447908.f_1.f_2825.f_4 = 0;
	Global_2447908.f_1.f_2825.f_5 = 0;
	Global_2447908.f_1.f_2825.f_6 = 0;
	Global_2447908.f_1.f_2825.f_7 = 0;
	Global_2447908.f_1.f_2825.f_8 = 0;
	Global_2447908.f_1.f_2825.f_9 = 0;
	Global_2447908.f_1.f_2825.f_10 = 0;
	Global_2447908.f_1.f_2825.f_11 = 0;
	Global_2447908.f_1.f_2825.f_12 = 0;
}

bool func_508(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 1;
}

void func_509()
{
	Global_2447128.f_604 = 1;
}

void func_510(int iParam0, struct<3> Param1, struct<6> Param4)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_526();
	func_525();
	func_524();
	func_523();
	func_522();
	func_635();
	Global_1786353.f_9 = iParam0;
	switch (Global_1786353.f_9)
	{
		case 1:
			Global_1786353 = 0;
			Global_1786353.f_22 = { 0f, 0f, 0f };
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_12 = 0;
			break;
		
		case 2:
			Global_1786353 = 1;
			Global_1786353.f_22 = { Param1 };
			Global_1786353.f_16 = { Param4 };
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_12 = 0;
			break;
		
		case 3:
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 0 || Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 1)
			{
				func_521(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_99.f_28);
			}
			func_520();
			Global_1786353 = 1;
			Global_1786353.f_22 = { Param1 };
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_12 = 0;
			break;
		
		case 4:
			func_519();
			func_520();
			Global_1786353 = 1;
			if (func_630(unk_0x8CFC7D6E1DA5D304()) || func_631(unk_0x8CFC7D6E1DA5D304()))
			{
				func_518(1);
			}
			if ((func_517() || func_546()) && func_537())
			{
				Global_1786353.f_16 = { func_536() };
				Param4 = { Global_1786353.f_16 };
				Global_1786353.f_22 = { func_516() };
			}
			else if (func_517() || func_546())
			{
				if (func_515())
				{
					Global_1786353.f_22 = { func_514() };
				}
				else
				{
					Global_1786353.f_22 = { Param1 };
				}
			}
			else
			{
				Global_1786353.f_22 = { Param1 };
			}
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_12 = 1;
			break;
		
		case 5:
			func_519();
			func_513();
			func_520();
			if (func_630(unk_0x8CFC7D6E1DA5D304()) || func_631(unk_0x8CFC7D6E1DA5D304()))
			{
				func_518(1);
			}
			Global_1786353 = 1;
			Global_1786353.f_22 = { Param1 };
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_12 = 1;
			break;
		
		case 8:
			Global_1786353 = 0;
			Global_1786353.f_22 = { Param1 };
			Global_1786353.f_16 = { Param4 };
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_12 = 0;
			break;
		
		case 9:
			func_520();
			Global_1786353 = 1;
			Global_1786353.f_22 = { Param1 };
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_12 = 1;
			break;
		
		case 10:
			Global_1786353 = 0;
			Global_1786353.f_22 = { 0f, 0f, 0f };
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_12 = 0;
			break;
	}
	func_512();
	func_511();
	func_431(Global_1786353.f_9);
	Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_228 = { Global_1786353.f_22 };
	Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_231 = { Param4 };
}

void func_511()
{
	unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18), 23);
}

void func_512()
{
	unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18), 12);
}

void func_513()
{
	Global_1786353.f_4 = 1;
}

Vector3 func_514()
{
	return Global_2447128.f_35.f_492;
}

int func_515()
{
	if ((Global_2447128.f_35.f_492 != 0f || Global_2447128.f_35.f_492.f_1 != 0f) || Global_2447128.f_35.f_492.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_516()
{
	return Global_2447128.f_35.f_495;
}

var func_517()
{
	return Global_2447128.f_35.f_50;
}

void func_518(int iParam0)
{
	Global_2447908.f_6011 = iParam0;
}

void func_519()
{
	Global_1786353.f_3 = 1;
}

void func_520()
{
	Global_1786353.f_7 = 1;
}

void func_521(var uParam0)
{
	Global_1786353.f_10 = uParam0;
}

void func_522()
{
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_5 = 0;
}

void func_523()
{
	Global_1786353.f_10 = -1;
}

void func_524()
{
	Global_1786353.f_4 = 0;
}

void func_525()
{
	Global_1786353.f_3 = 0;
}

void func_526()
{
	Global_2447908.f_2843.f_2 = 1;
}

void func_527()
{
	Global_2447128.f_557.f_14 = 0;
}

bool func_528()
{
	return Global_2447128.f_557.f_14;
}

void func_529(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x31F12808DC47A9E5(iParam1))
		{
			if (unk_0xEE1E09882FA264CA(iParam1))
			{
				if (!unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), unk_0xD3287DCBDBC58316(iParam1)))
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
				func_531();
			}
			else if (!unk_0xB03A1684359C50A1(Global_2359302.f_67, 1))
			{
				if (unk_0xB03A1684359C50A1(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x9482FF5633EE6914(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xD2A9C3F486236CC5(&(Global_2359302.f_67), 1);
			}
		}
		if (func_236(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			unk_0x236DE73A5A94EC70(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x46C9EC5000FD8901(iParam0, iParam1);
		}
		unk_0xFE62067B485411F5(iParam0, iParam1);
		func_530(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_530(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x0F1BF2DD8A1C0A68(iVar0, iParam1, 1);
	}
}

void func_531()
{
	int iVar0;
	
	if (!unk_0x8D1AEC16F2956D17())
	{
		if (!unk_0xB03A1684359C50A1(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0xC345D9AB8BB3AB24(iVar0);
				iVar0++;
			}
			unk_0xD2A9C3F486236CC5(&(Global_2359302.f_67), 2);
			unk_0xD2A9C3F486236CC5(&(Global_2359302.f_67), 0);
		}
	}
}

void func_532()
{
	Global_2447128.f_35.f_48 = 0;
}

void func_533()
{
	Global_2447128.f_35.f_42 = -1;
}

int func_534()
{
	return Global_2447128.f_35.f_42;
}

void func_535(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0xFAFFA408239A026B(&uParam0))
	{
		return;
	}
	if (!Global_2398871)
	{
		return;
	}
	if (!unk_0x9D39145AD645E383(&uParam0, &(Global_2398871.f_1)))
	{
		return;
	}
	Global_2398937 = 1;
}

struct<6> func_536()
{
	return Global_2447128.f_35.f_12;
}

bool func_537()
{
	return Global_2447128.f_35.f_52;
}

void func_538(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (unk_0xFB6320824D4A8771())
				{
					unk_0x2B9CDBD872EAE5BB();
				}
			}
			break;
		
		case 1:
			unk_0x79BFB212E01BEEB9(6, 0, 0);
			break;
		
		case 2:
			unk_0x79BFB212E01BEEB9(12, 0, 0);
			break;
		
		case 3:
			if (func_539(Global_1646129.f_138609))
			{
				unk_0x79BFB212E01BEEB9(20, 50, 0);
			}
			else
			{
				unk_0x79BFB212E01BEEB9(21, 0, 0);
			}
			break;
		
		case 4:
			unk_0x79BFB212E01BEEB9(0, 0, 0);
			break;
		
		default:
			break;
	}
}

bool func_539(int iParam0)
{
	return iParam0 == 10;
}

int func_540()
{
	return Global_1786353.f_12;
}

void func_541(var uParam0, var uParam1)
{
	Global_1786353.f_13 = uParam0;
	Global_1786353.f_14 = uParam1;
}

void func_542(var uParam0)
{
	Global_1786353.f_12 = uParam0;
}

bool func_543()
{
	return Global_2447128.f_16;
}

bool func_544()
{
	return Global_2447128.f_14;
}

void func_545()
{
	Global_2447128.f_35.f_49 = 1;
}

bool func_546()
{
	return Global_2447128.f_35.f_48;
}

void func_547()
{
	if (unk_0xFAFFA408239A026B(&(Global_2391056.f_4.f_3)))
	{
		return;
	}
	if (!unk_0xFAFFA408239A026B(&(Global_2398169.f_3)))
	{
		if (unk_0x9D39145AD645E383(&(Global_2398169.f_3), &(Global_2391056.f_4.f_3)))
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

void func_548()
{
	Global_1786353.f_5 = 0;
	Global_1786353.f_11 = -1;
}

void func_549(var uParam0)
{
	Global_1786353.f_5 = 1;
	Global_1786353.f_11 = uParam0;
}

int func_550(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8410[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_551(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8246[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_552()
{
	if (unk_0xB03A1684359C50A1(Global_1646129.f_18, 0))
	{
		return 1;
	}
	return (((((func_558(Global_1646129.f_116948) || func_557(Global_1646129.f_116948)) || func_556(Global_1646129.f_116948)) || func_555(Global_1646129.f_116948)) || func_554(Global_1646129.f_138609)) || func_553(Global_1646129.f_138609));
}

bool func_553(int iParam0)
{
	return iParam0 == 48;
}

bool func_554(int iParam0)
{
	return iParam0 == 8;
}

int func_555(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8489[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_556(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8432[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_557(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8313[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_558(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8254[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<13> func_559()
{
	struct<13> Var0;
	
	unk_0x40A8F339DD6DC6FD(&Var0, 13);
	return Var0;
}

void func_560(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	var uVar0;
	
	if (unk_0xFAFFA408239A026B(&uParam0))
	{
		return;
	}
	if (!Global_2391045)
	{
		return;
	}
	uVar0 = unk_0x6E987D62C8535B6E(&uParam0);
	Global_2391047 = uVar0;
	Global_2391048 = (unk_0x5AFB8ED811F05E4D() + 60000);
}

void func_561(struct<6> Param0)
{
	if (unk_0xFAFFA408239A026B(&Param0))
	{
		return;
	}
	Global_1311839 = 1;
	Global_1311839.f_1 = { Param0 };
}

bool func_562()
{
	return Global_2447128.f_11;
}

void func_563(int iParam0)
{
	if (unk_0x44243F2E2F58B8E3())
	{
		unk_0xAF3C8BA7AAB9A93D(iParam0);
		unk_0x98C27C75026949FE(0);
	}
}

void func_564()
{
	Global_979885 = -1;
}

void func_565()
{
	func_566(-1f);
}

void func_566(float fParam0)
{
	if (unk_0x44243F2E2F58B8E3())
	{
		unk_0xAF3C8BA7AAB9A93D(fParam0);
		unk_0x98C27C75026949FE(0);
	}
}

int func_567(int iParam0)
{
	int iVar0;
	
	if (Global_1804409[iParam0 /*8*/] == -1)
	{
		iVar0 = func_24(func_569(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_568(iParam0, 0);
			iVar0 = 0;
		}
		Global_1804409[iParam0 /*8*/] = iVar0;
	}
	return Global_1804409[iParam0 /*8*/];
}

void func_568(int iParam0, int iParam1)
{
	Global_1804409[iParam0 /*8*/] = iParam1;
	func_59(func_569(iParam0), iParam1, -1, 1, 0);
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7012;
		
		default:
	}
	return 7012;
}

bool func_570()
{
	return Global_1646129.f_1 == 0;
}

void func_571(int iParam0, int iParam1)
{
	unk_0x46F21C85728EBCC8(iParam0);
	unk_0x5094B803E7A7A2EC(iParam0);
	if (unk_0x6CF414F2C268EB79())
	{
		unk_0x1F935C971EAE8AEB(iParam1);
	}
}

bool func_572()
{
	return Global_2447128.f_630;
}

void func_573()
{
	if (unk_0xB03A1684359C50A1(Global_2359302, 24))
	{
		unk_0x62148293B793073B(&Global_2359302, 24);
	}
}

void func_574()
{
	unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18), 14);
}

bool func_575()
{
	return Global_2447128.f_718;
}

int func_576()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_196;
}

void func_577(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574125 == 0)
		{
			Global_1574125 = 1;
		}
	}
	else if (Global_1574125 == 1)
	{
		Global_1574125 = 0;
	}
}

void func_578()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2447908.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2447908.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_579()
{
	int iVar0;
	
	if (func_235())
	{
		return 1;
	}
	if (func_502())
	{
		return 1;
	}
	if (func_501())
	{
		return 1;
	}
	if (unk_0xFAFFA408239A026B(&(Global_1646129.f_117235)))
	{
		return 1;
	}
	func_500();
	unk_0x28B39A1BEDE0659D();
	iVar0 = unk_0x83D41653B770AF1D();
	Global_1786313.f_2++;
	if (Global_1786313.f_2 < 1)
	{
		Global_1786313.f_2 = 1;
	}
	unk_0x09F5B5852B43E28B(iVar0, "quit", Global_1786313);
	unk_0x09F5B5852B43E28B(iVar0, "ply", Global_1786313.f_2);
	unk_0x09F5B5852B43E28B(iVar0, "plyd", 1);
	unk_0x09F5B5852B43E28B(iVar0, "lp", unk_0xE6E19D6A1FC25165());
	if (unk_0x5BBD5BFD9CA62A65(&(Global_1646129.f_117235), -1f, func_499(0)))
	{
	}
	func_498();
	func_500();
	unk_0xDC2CB8BCD7381867();
	return 1;
}

void func_580()
{
	Global_2447128.f_730 = 1;
}

void func_581(bool bParam0)
{
	if (bParam0)
	{
		unk_0xDAC7049C0D2EBB91();
	}
	else
	{
		unk_0x3B125D1DC3BDC0FA();
	}
}

void func_582()
{
	Global_2447128.f_729 = 1;
}

int func_583(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_584(iParam0))
			{
				if (Global_1595681[iParam0 /*678*/] == 2 || Global_1595681[iParam0 /*678*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_584(int iParam0)
{
	return Global_1595681[iParam0 /*678*/].f_196 != 0;
}

bool func_585()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142, 2);
}

void func_586()
{
	Global_2447128.f_729 = 0;
}

bool func_587()
{
	return Global_2447128.f_729;
}

void func_588(int iParam0)
{
	unk_0x2FA5BED6B7B0F0D4("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	unk_0x2FA5BED6B7B0F0D4("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	unk_0x2FA5BED6B7B0F0D4("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_589()
{
	Global_1786353.f_12 = -1;
	Global_1786353.f_13 = -1;
	Global_1786353.f_14 = -1;
}

void func_590(int iParam0)
{
	Global_979886 = iParam0;
}

void func_591()
{
	Global_1625918 = 0;
	Global_1574293 = 4;
}

void func_592(bool bParam0)
{
	if (bParam0)
	{
		Global_1574306 = 1;
	}
	else
	{
		Global_1574306 = 0;
	}
}

void func_593()
{
	Global_1625919 = -1;
	Global_1625922 = 0;
}

void func_594()
{
	Global_2512581.f_276 = 0;
	func_598(3782, 0, -1, 1);
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_596())
		{
			unk_0xDEA702F2138E0B35(unk_0x18F7BE9ACB7D08F4(), 5, 0, 0, 0);
			func_595();
		}
	}
}

void func_595()
{
	Global_70828 = 0;
	Global_70829 = -1;
	Global_70830 = -1;
	Global_70831 = -1;
	Global_70832 = -1;
	Global_70833 = -1;
}

bool func_596()
{
	return func_597(unk_0x18F7BE9ACB7D08F4());
}

int func_597(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x6363507A3F1C0EFE(uParam0, 5);
	iVar1 = -1;
	switch (unk_0x4F69FBD64CDF125B(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x1BDFED65066884D5(uParam0, 5, iVar0, unk_0xFCE96424181023AC(uParam0, 5));
			if (unk_0x8F6505F47B37EA40(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x1BDFED65066884D5(uParam0, 5, iVar0, unk_0xFCE96424181023AC(uParam0, 5));
			if (unk_0x8F6505F47B37EA40(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_598(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_599()
{
	Global_2447128.f_730 = 0;
}

bool func_600()
{
	return Global_2447128.f_730;
}

void func_601(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_603(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17301.f_7931)
	{
		unk_0xB9C0BA93B50CE575(15);
		Global_17301.f_7931 = 0;
	}
	unk_0x882C4E3F687152C5(0f);
	if (Global_17301.f_5498[iVar0])
	{
		unk_0x000ED7BEBF44F5EA(9, 0);
		Global_17301.f_5498[iVar0] = 0;
	}
	if (Global_17301.f_5484[iVar0])
	{
		unk_0x1D492DC0B64A955F("CommonMenu");
		Global_17301.f_5484[iVar0] = 0;
	}
	if (Global_17301.f_5491[iVar0])
	{
		unk_0x1D492DC0B64A955F("MPShopSale");
		Global_17301.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_602(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_602(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x5C716BBF766E1C70(*uParam0))
		{
			unk_0xEBE532BFFE618875(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_603(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x44243F2E2F58B8E3() && unk_0xD8E9E28C65F6D7A9())
		{
			iParam2 = unk_0x3910797658D84EE9();
		}
	}
	StringCopy(&cVar0, unk_0xFCA64981FEF7C913(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x6E987D62C8535B6E(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17301.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17301.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17301.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_604()
{
}

void func_605(int iParam0)
{
	struct<42> Var0;
	int iVar42;
	var uVar43;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	if (Global_2447128.f_557.f_9 == 0)
	{
		Global_1786378.f_1345 = 0;
	}
	iVar42 = 0;
	while (iVar42 <= 31)
	{
		uVar43 = Global_1786378[iVar42 /*42*/].f_3;
		Global_1786378[iVar42 /*42*/] = { Var0 };
		if (func_647())
		{
			Global_1786378[iVar42 /*42*/].f_3 = uVar43;
		}
		Global_1786378[iVar42 /*42*/].f_1 = func_125();
		Global_1786378[iVar42 /*42*/] = -1;
		Global_1786378[iVar42 /*42*/].f_2 = -1;
		iVar42++;
	}
	if ((!func_647() && !func_613()) && iParam0)
	{
		Global_1786378.f_1347 = 0;
		Global_1786378.f_1348 = 0;
	}
}

void func_606(bool bParam0)
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
	if ((!func_609() && !func_546()) && Global_1786353.f_9 != 4)
	{
		Global_786481.f_43 = 0;
		Global_786481.f_44 = 0;
		Global_786481.f_21 = 0;
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
		if ((!func_609() && !func_546()) && Global_1786353.f_9 != 4)
		{
			Global_786481.f_2 = 0;
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

void func_607(bool bParam0)
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

void func_608(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x788C6B35BB3FCF53(unk_0xDEC40DF5CB14766D(iParam0), "MPBitset"))
	{
		iVar0 = unk_0xFE0F5B815FB9D3D1(unk_0xDEC40DF5CB14766D(iParam0), "MPBitset");
	}
	unk_0x62148293B793073B(&iVar0, iParam1);
	unk_0x3259E4661D22EB25(unk_0xDEC40DF5CB14766D(iParam0), "MPBitset", iVar0);
}

bool func_609()
{
	return Global_1786353.f_3;
}

bool func_610()
{
	return Global_2455103.f_7;
}

bool func_611()
{
	return unk_0xB03A1684359C50A1(Global_2447128.f_35.f_4, 8);
}

void func_612()
{
	Global_2447128.f_35.f_50 = 0;
}

bool func_613()
{
	return unk_0xB03A1684359C50A1(Global_2447128.f_35.f_4, 0);
}

void func_614()
{
	unk_0x62148293B793073B(&(Global_971063.f_8), 8);
}

void func_615(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_13.f_1), 0);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_13.f_1), 0);
	}
}

void func_616(int iParam0)
{
	if (unk_0x44243F2E2F58B8E3())
	{
		if (((Global_2447908.f_3428 != 0 && Global_2447908.f_3428.f_1 != 0) && Global_2447908.f_3428.f_2 != 0) && Global_2447908.f_3428.f_3 != 0)
		{
			unk_0x544F02B1745D52FF(Global_2447908.f_3428, Global_2447908.f_3428.f_1, Global_2447908.f_3428.f_2, Global_2447908.f_3428.f_3, iParam0);
		}
	}
	func_617();
}

void func_617()
{
	Global_2447908.f_3428 = 0;
	Global_2447908.f_3428.f_1 = 0;
	Global_2447908.f_3428.f_2 = 0;
	Global_2447908.f_3428.f_3 = 0;
}

void func_618()
{
	Global_2447908.f_1.f_2801 = 1;
}

bool func_619()
{
	return unk_0xB03A1684359C50A1(Global_2447908.f_1.f_2809, 12);
}

void func_620(int iParam0)
{
	if (!func_613() || iParam0)
	{
		Global_1574839 = 0;
		Global_1574838 = 0;
	}
}

void func_621(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;
	
	Global_2447128.f_35 = -1;
	Global_2447128.f_35.f_56 = -1;
	Global_2447128.f_35.f_2 = -1;
	Global_2447128.f_35.f_5 = 0;
	Global_2447128.f_35.f_3 = 0;
	Global_2447128.f_35.f_4 = 0;
	Global_2447128.f_35.f_41 = -1;
	Global_2447128.f_35.f_6 = { Var0 };
	Global_2447128.f_35.f_54 = 0;
	Global_2447128.f_35.f_130 = 0;
	Global_2447128.f_35.f_345 = 0;
	Global_2447128.f_35.f_55 = 0;
	Global_2447128.f_35.f_131 = 0;
	Global_2447128.f_35.f_346 = 0;
	Global_2447128.f_35.f_520 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2447128.f_35.f_477[iVar6] = 0;
		iVar6++;
	}
	Global_2447128.f_35.f_53 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2447128.f_35.f_57[iVar6] = 0;
		iVar6++;
	}
	Global_2447128.f_35.f_129 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2447128.f_35.f_132[iVar6] = 0;
		iVar6++;
	}
	Global_2447128.f_35.f_344 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2447128.f_35.f_347[iVar6] = 0;
		Global_2447128.f_35.f_362[iVar6] = 0;
		Global_2447128.f_35.f_392[iVar6 /*6*/] = { Var0 };
		Global_2447128.f_35.f_377[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2447128.f_35.f_43[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2447128.f_35.f_498 = 0;
			Global_2447128.f_35.f_499 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2447128.f_35.f_506[iVar6] = -1;
				Global_2447128.f_35.f_512[iVar6] = -1;
				iVar6++;
			}
			Global_2447128.f_35.f_48 = 0;
			Global_2447128.f_35.f_12 = { Var0 };
			Global_2447128.f_35.f_52 = 0;
			Global_2447128.f_35.f_492 = { 0f, 0f, 0f };
			Global_2447128.f_35.f_495 = { 0f, 0f, 0f };
			Global_2447128.f_35.f_51 = 0;
			Global_2447128.f_35.f_50 = 0;
			Global_2447128.f_35.f_1 = -1;
			Global_2447128.f_35.f_521 = 0;
			Global_2447128.f_35.f_518 = -1;
		}
	}
}

void func_622()
{
	Global_2455103.f_8 = 0;
	Global_2455103.f_7 = 0;
}

bool func_623()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 148;
}

bool func_624()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 5;
}

void func_625()
{
	Global_1795316.f_1774 = 0;
}

void func_626()
{
	Global_2447128.f_723 = 0;
}

bool func_627()
{
	return Global_2447128.f_723;
}

void func_628()
{
	Global_14622 = 0;
	func_629();
}

void func_629()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

bool func_630(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 7;
}

bool func_631(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 2;
}

int func_632(int iParam0)
{
	if (iParam0 == Global_262145.f_4995[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_4995[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_4995[2])
	{
		return 2;
	}
	else if (iParam0 == Global_262145.f_4995[3])
	{
		return 3;
	}
	else if (iParam0 == Global_262145.f_4995[4])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_4995[5])
	{
		return 5;
	}
	else if (iParam0 == Global_262145.f_4995[6])
	{
		return 6;
	}
	else if (iParam0 == Global_262145.f_4995[7])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_4995[8])
	{
		return 8;
	}
	else if (iParam0 == Global_262145.f_4995[9])
	{
		return 9;
	}
	else if (iParam0 == Global_262145.f_4995[10])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_4995[11])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_4995[12])
	{
		return 12;
	}
	else if (iParam0 == Global_262145.f_4995[13])
	{
		return 13;
	}
	else if (iParam0 == Global_262145.f_4995[14])
	{
		return 14;
	}
	else if (iParam0 == Global_262145.f_4995[15])
	{
		return 15;
	}
	return -1;
}

void func_633()
{
	Global_2447128.f_588 = 0;
}

void func_634()
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_4 = -1;
	iVar13 = unk_0x8CFC7D6E1DA5D304();
	if (iVar13 != -1)
	{
		Global_1626339[iVar13 /*35*/] = { Var0 };
	}
}

void func_635()
{
	Global_1786353.f_7 = 0;
}

void func_636(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2447128.f_557.f_3 = { Var0 };
	Global_2447128.f_557 = 0;
	Global_2447128.f_557.f_1 = 0;
	Global_2447128.f_557.f_12 = 0;
	if (bParam0)
	{
		Global_2447128.f_557.f_2 = 0;
		Global_2447128.f_557.f_13 = 0;
		Global_2447128.f_557.f_14 = 0;
		Global_2394835 = 0;
		if (bParam1)
		{
			Global_2447128.f_557.f_9 = 0;
			Global_2447128.f_557.f_10 = 0;
			Global_2447128.f_557.f_11 = 0;
			Global_2447128.f_557.f_16 = -1;
		}
		if (iParam2 && !unk_0x13C2BC1B63ABBCD5())
		{
			Global_1786378.f_1347 = 0;
			Global_1786378.f_1348 = 0;
		}
		if (unk_0x8CFC7D6E1DA5D304() != -1)
		{
			Global_1626339[unk_0x8CFC7D6E1DA5D304() /*35*/].f_2 = 0;
			Global_1626339[unk_0x8CFC7D6E1DA5D304() /*35*/] = 0;
		}
	}
}

void func_637()
{
	Global_2447128.f_557.f_12 = 0;
}

bool func_638()
{
	return Global_2447128.f_557.f_9 > 0;
}

var func_639()
{
	return Global_2447128.f_557.f_12;
}

void func_640()
{
	unk_0x62148293B793073B(&(Global_1626339[unk_0x8CFC7D6E1DA5D304() /*35*/].f_28), 3);
}

void func_641()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1574852[iVar0] = 0;
		iVar0++;
	}
}

void func_642()
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	if (iVar0 != -1)
	{
		Global_1626339[iVar0 /*35*/].f_5 = 0;
	}
}

void func_643()
{
	Global_2457244 = 0;
	Global_2457245 = 0;
	Global_2457246 = 0;
	Global_2457247 = 0;
}

void func_644()
{
	Global_2447128.f_35.f_49 = 0;
}

void func_645()
{
	Global_2447128.f_35.f_51 = 0;
}

void func_646()
{
	if (unk_0xC345D9AB8BB3AB24(unk_0xEBE31BF57A0E4641()) != Global_1367971)
	{
		if (unk_0xEBE31BF57A0E4641() == 0 && Global_1367971 == 3)
		{
			Global_1367971 = unk_0xC345D9AB8BB3AB24(0);
		}
		unk_0x9482FF5633EE6914(unk_0xEBE31BF57A0E4641(), Global_1367971);
	}
}

bool func_647()
{
	return unk_0xB03A1684359C50A1(Global_2447128.f_557.f_1, 0);
}

void func_648(int iParam0)
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		unk_0x208A95898EEB1354(iParam0);
	}
}

void func_649()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!unk_0xFAFFA408239A026B(&(Global_1573921[iVar0 /*6*/])))
		{
			StringCopy(&(Global_1573921[iVar0 /*6*/]), "", 24);
		}
		iVar0++;
	}
}

void func_650(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x71808F682AF71F7D();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!unk_0xB03A1684359C50A1(Global_1595681[iVar0 /*678*/].f_203, 0))
			{
				unk_0xD2A9C3F486236CC5(&(Global_1595681[iVar0 /*678*/].f_203), 0);
			}
		}
		else if (unk_0xB03A1684359C50A1(Global_1595681[iVar0 /*678*/].f_203, 0))
		{
			unk_0x62148293B793073B(&(Global_1595681[iVar0 /*678*/].f_203), 0);
		}
	}
}

void func_651()
{
	unk_0x62148293B793073B(&(Global_2447128.f_2), 31);
}

void func_652()
{
	Global_2436169.f_1777.f_803 = func_125();
}

void func_653()
{
	Global_2447128.f_771 = 0;
}

void func_654()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_657(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1803650.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_656();
	func_655();
	Global_1803650 = 0;
}

void func_655()
{
	Global_1803650.f_4 = 0;
}

void func_656()
{
	Global_1803650.f_3 = 0;
}

void func_657(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1803650.f_5[iParam0 /*53*/] = { Var0 };
}

void func_658()
{
	unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18), 20);
}

void func_659(int iParam0, bool bParam1)
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

void func_660()
{
	unk_0x62148293B793073B(&(Global_2512581.f_778), 3);
}

void func_661(bool bParam0, int iParam1)
{
	func_205();
	if (bParam0)
	{
		func_295(1);
		unk_0xEFF1F12403847394(1);
	}
	unk_0x08FC50794202A47C();
	func_200();
	unk_0x7F974902FFA8BAC2(0);
	func_234(0, 1, 1, 0);
	func_667();
	func_188(12, 0, -1);
	func_189(1);
	unk_0xFF85AEF2518662A1(0, -1);
	unk_0x77B57B2BB7F3EA0A(1);
	unk_0x4A3AD9384F0AAEA0(1);
	func_666();
	unk_0x9A70D1B91A853FDD(1);
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0x7DF51A716BE7A07F())
		{
			unk_0x38451EAF24F8D818(0, 0);
		}
	}
	func_241(0);
	if ((((func_109() == 0 && func_665() == 0) && iParam1) && !func_238(unk_0x8CFC7D6E1DA5D304())) && !unk_0x8BDE5BE4E46BA35F())
	{
		func_328(unk_0x8CFC7D6E1DA5D304(), 1, 0);
	}
	Global_2436169.f_3611 = 0;
	func_662();
}

void func_662()
{
	int iVar0;
	int iVar1;
	
	if (func_182(&Global_2520502))
	{
		if (!func_181(&Global_2520502, 3500, 1) || unk_0x855A7CFBB8994D1B(unk_0x8CFC7D6E1DA5D304()))
		{
			if (!func_664())
			{
				if (unk_0xEC0ECEF2AF3FDA8D())
				{
					func_312(&Global_2520502, 1, 0);
				}
				else if (!func_236(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 1992968846) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 1992968846) != 0)
					{
						unk_0x71AA5C78FD1ED026(1);
						unk_0x20814ECE456A1672(unk_0x8CFC7D6E1DA5D304(), 1);
					}
					unk_0x93271EC996EE94D2(unk_0x18F7BE9ACB7D08F4(), 255, 0);
				}
			}
			else
			{
				func_312(&Global_2520502, 1, 0);
			}
		}
		else
		{
			unk_0x2087B43C7787E236(unk_0x18F7BE9ACB7D08F4());
			func_180(&Global_2520502);
		}
	}
	if (Global_2520506 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (unk_0xB03A1684359C50A1(Global_2520506, iVar0))
			{
				iVar1 = unk_0x3479F6F64A48251C(iVar0);
				if (func_12(iVar1, 1, 1))
				{
					func_663(iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_663(int iParam0)
{
	if (unk_0xB03A1684359C50A1(Global_2520506, iParam0))
	{
		if (!func_181(&(Global_2520507[iParam0 /*2*/]), 3500, 1) || unk_0x855A7CFBB8994D1B(iParam0))
		{
			if (!func_664())
			{
				if (unk_0xEC0ECEF2AF3FDA8D())
				{
					func_312(&(Global_2520507[iParam0 /*2*/]), 1, 0);
				}
				else if (!func_236(iParam0, 0))
				{
					unk_0x20814ECE456A1672(iParam0, 1);
					if (!unk_0x74C2FE037DFC8B4A(unk_0x6604E096142B4B55(iParam0), 0))
					{
						unk_0x93271EC996EE94D2(unk_0x6604E096142B4B55(iParam0), 255, 0);
					}
				}
			}
			else
			{
				func_312(&(Global_2520507[iParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!unk_0x74C2FE037DFC8B4A(unk_0x6604E096142B4B55(iParam0), 0))
			{
				unk_0x2087B43C7787E236(unk_0x6604E096142B4B55(iParam0));
			}
			func_180(&(Global_2520507[iParam0 /*2*/]));
			unk_0x62148293B793073B(&Global_2520506, iParam0);
		}
	}
}

int func_664()
{
	if (unk_0xEAE1A41FBC3984B1() || unk_0x7DF51A716BE7A07F())
	{
		return 1;
	}
	return 0;
}

bool func_665()
{
	return unk_0xB03A1684359C50A1(Global_2447128, 7);
}

void func_666()
{
	Global_17162.f_5 = 0;
}

void func_667()
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

void func_668(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312446)
	{
		if (!func_702())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574385[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_700(unk_0x8CFC7D6E1DA5D304(), bParam0);
	iVar2 = func_698(iVar1, bParam0);
	if (!func_697(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574385[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574385[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 235)
	{
		iVar3 = func_696(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_694(iVar4))
			{
				func_685(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_679(func_680(59, 0, 0), 0);
	func_677(func_680(135, 0, 0), 1);
	func_676(func_680(22, 0, 0), func_680(73, 0, 0));
	if (func_702())
	{
		if (func_454(77, -1))
		{
			func_675(1);
			func_674(1);
		}
	}
	if (func_673() || func_672())
	{
		func_30(77, 1, -1, 1);
		if (unk_0x44243F2E2F58B8E3())
		{
			func_669(28, 1, 0);
			func_669(29, 1, 0);
			func_669(30, 1, 0);
			func_669(31, 1, 0);
			func_669(32, 1, 0);
			func_669(33, 1, 0);
			func_669(34, 1, 0);
			func_669(35, 1, 0);
			func_669(36, 1, 0);
			func_669(37, 1, 0);
			func_669(38, 1, 0);
		}
	}
	if (func_680(21, 0, 0))
	{
		unk_0x4A98495E4799D6AA(0);
	}
	Global_979887 = 0;
}

void func_669(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 0, 0))
		{
			if (iParam2 && Global_92881.f_18[iParam0])
			{
				if (func_671(iParam0) == 3 && !func_22(iParam0))
				{
					func_670(iParam0);
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

void func_670(int iParam0)
{
	if (Global_92881.f_18[iParam0])
	{
		func_60(iParam0, 10, 1);
		func_60(iParam0, 19, 1);
	}
}

int func_671(int iParam0)
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
		
		case 47:
			return 3;
			break;
	}
	return 6;
}

bool func_672()
{
	return Global_1312842;
}

bool func_673()
{
	return Global_1312844;
}

void func_674(bool bParam0)
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	func_669(28, bParam0, 0);
	func_669(30, bParam0, 0);
	func_669(31, bParam0, 0);
	func_669(33, bParam0, 0);
	func_669(34, bParam0, 0);
	func_669(38, bParam0, 0);
}

void func_675(bool bParam0)
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	func_669(29, bParam0, 0);
	func_669(32, bParam0, 0);
	func_669(36, bParam0, 0);
	func_669(35, bParam0, 0);
	func_669(37, bParam0, 0);
}

void func_676(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_669(0, bParam0, 1);
	func_669(1, bParam0, 1);
	func_669(2, bParam0, 1);
	func_669(3, bParam0, 1);
	func_669(4, bParam0, 1);
	func_669(5, bParam0, 1);
	func_669(6, bParam0, 1);
	func_669(7, bParam0, bVar0);
	func_669(8, bParam0, 1);
	func_669(9, bParam0, 1);
	func_669(10, bParam0, 1);
	func_669(11, bParam0, 1);
	func_669(12, bParam0, bVar0);
	func_669(13, bParam0, 1);
	func_669(21, bParam0, 1);
	func_669(14, bParam0, 1);
	func_669(15, bParam0, 1);
	func_669(16, bParam0, 1);
	func_669(17, bParam0, 1);
	func_669(18, bParam0, 1);
	func_669(19, bParam0, 1);
	func_669(20, bParam0, 1);
	func_669(22, bParam0, 1);
	func_669(23, bParam0, 1);
	func_669(24, bParam0, 1);
	func_669(25, bParam0, 1);
	func_669(26, bParam0, 1);
	func_669(27, bParam0, 1);
	func_365(1, !bParam1);
	if (!bVar0)
	{
		func_670(12);
	}
}

void func_677(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	uVar0 = func_678(0);
	if (Global_262145.f_63 == 1 && func_680(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_669(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(44))
		{
			func_670(44);
		}
	}
	if (bParam0)
	{
		if (func_567(0) > 1)
		{
			unk_0xD2A9C3F486236CC5(&(Global_2512581.f_1710), 10);
		}
	}
}

int func_678(bool bParam0)
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (func_673())
	{
		return 1;
	}
	if (func_672())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_2512581.f_1701, 26))
		{
			uVar0 = func_24(1188, -1, 0);
			if (!unk_0xB03A1684359C50A1(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_454(122, -1);
}

void func_679(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	uVar0 = func_678(0);
	func_669(39, bParam0, 0);
	func_669(40, bParam0, 0);
	func_669(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_669(43, bParam0, 0);
		func_669(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(39))
		{
			func_670(39);
		}
		if (!func_22(40))
		{
			func_670(40);
		}
		if (!func_22(41))
		{
			func_670(41);
		}
		if (!func_22(42))
		{
			func_670(42);
		}
		if (!func_22(43))
		{
			func_670(43);
		}
	}
}

bool func_680(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6921 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_682(unk_0x8CFC7D6E1DA5D304(), 85))
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
		if (Global_262145.f_4716 == 1)
		{
			return 1;
		}
	}
	if (func_673() || func_672())
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
			if (func_681())
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
	return unk_0xB03A1684359C50A1(Global_1574385[iVar1], iVar0);
}

int func_681()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_1706, 23))
	{
		return 1;
	}
	if (func_673())
	{
		return 1;
	}
	if (func_672())
	{
		return 1;
	}
	uVar0 = Global_1367868[func_25(-1)];
	if (unk_0xB03A1684359C50A1(uVar0, 7))
	{
		unk_0xD2A9C3F486236CC5(&(Global_2512581.f_1706), 23);
		return 1;
	}
	return 0;
}

bool func_682(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_702())
	{
		return 0;
	}
	if (func_684())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_683(iParam1);
	iVar1 = uVar0;
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_556, iVar1);
}

int func_683(int iParam0)
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

bool func_684()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_146, 3);
}

void func_685(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_693(-1))
			{
				if (!func_702())
				{
					return;
				}
			}
			if (!func_693(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_692() && !func_691())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_690())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_693(-1))
				{
					if (!func_686())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0xD2A9C3F486236CC5(&(Global_1574385[iVar1]), iVar0);
	}
}

int func_686()
{
	var uVar0;
	
	if (func_689(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	uVar0 = Global_1367868[func_25(-1)];
	if (unk_0xB03A1684359C50A1(uVar0, 2))
	{
		func_687(1);
		return 1;
	}
	return 0;
}

void func_687(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142, 25))
		{
			func_688(unk_0x8CFC7D6E1DA5D304(), 12);
			unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 25);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142, 25))
	{
		unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142), 25);
	}
}

void func_688(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_683(iParam1);
	iVar1 = uVar0;
	unk_0xD2A9C3F486236CC5(&(Global_1595681[iParam0 /*678*/].f_556), iVar1);
}

bool func_689(int iParam0)
{
	if (func_673())
	{
		return 1;
	}
	if (func_672())
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_142, 25);
}

int func_690()
{
	var uVar0;
	
	if (unk_0xB03A1684359C50A1(Global_2512581.f_1706, 6))
	{
		return 1;
	}
	uVar0 = Global_1367868[func_25(-1)];
	if (unk_0xB03A1684359C50A1(uVar0, 0))
	{
		if (!unk_0xB03A1684359C50A1(Global_2512581.f_1706, 6))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2512581.f_1706), 6);
		}
		return 1;
	}
	if (func_673())
	{
		return 1;
	}
	if (func_672())
	{
		return 1;
	}
	return 0;
}

bool func_691()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_146, 7);
}

int func_692()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_673())
	{
		return 1;
	}
	if (func_672())
	{
		return 1;
	}
	return func_454(121, -1);
}

bool func_693(int iParam0)
{
	return func_454(123, iParam0);
}

int func_694(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_673())
	{
		return 1;
	}
	if (func_672())
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
			uVar0 = func_24(func_695(iParam0), -1, 0);
			if (unk_0xB03A1684359C50A1(uVar0, iVar1))
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

int func_695(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1197;
		
		case 1:
			return 1198;
		
		case 2:
			return 1199;
		
		case 3:
			return 1200;
		
		case 4:
			return 1201;
		
		case 5:
			return 1203;
		
		case 6:
			return 3798;
		
		case 7:
			return 4001;
		
		case 8:
			return 5455;
		
		default:
	}
	return 1197;
}

int func_696(int iParam0)
{
	if (func_673())
	{
		return 1;
	}
	if (func_672())
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
			if (!func_693(-1))
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

int func_697(int iParam0)
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_673())
	{
		return 1;
	}
	if (func_672())
	{
		return 1;
	}
	return func_454(119, iParam0);
}

int func_698(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_699(iParam0, 0);
}

int func_699(int iParam0, int iParam1)
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
		if (Global_284737[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_284737[iVar3] < iParam0)
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

int func_700(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_701(iParam0);
}

int func_701(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x8CFC7D6E1DA5D304())
			{
				return Global_1367874[func_25(-1)];
			}
			else if (func_55(iParam0))
			{
				return Global_1595681[iParam0 /*678*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1367874[func_25(-1)];
	}
	return 0;
}

int func_702()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_673())
	{
		return 1;
	}
	if (func_672())
	{
		return 1;
	}
	return func_454(120, -1);
}

int func_703()
{
	var uVar0;
	
	func_708(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 1;
		}
	}
	if (func_437())
	{
		return 1;
	}
	if (Global_2459011)
	{
		return 1;
	}
	if (func_707())
	{
		return 1;
	}
	if (func_706(157))
	{
		if (!func_705())
		{
			return 1;
		}
	}
	if (func_706(155))
	{
		return 1;
	}
	if (!unk_0xA1C84586015AE5DB())
	{
		return 1;
	}
	if (func_704() != 0)
	{
		if (unk_0xE7FAF8E78F7D3A73(func_704()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_704()
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

bool func_705()
{
	return Global_2447128.f_586;
}

int func_706(int iParam0)
{
	if (unk_0xA1B200C8BB1289B7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_707()
{
	return Global_2456781;
}

void func_708(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xF6A7C6FEAD04F4B3(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1592539087:
					func_709(iVar0);
					break;
				
				case 1094813140:
					unk_0xF6A7C6FEAD04F4B3(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1903409068)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_709(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x6604E096142B4B55(Var0.f_1);
			if (unk_0x31F12808DC47A9E5(uVar3))
			{
				if (unk_0x657B649BA2AD3582(iVar3, 0))
				{
					uVar4 = unk_0x5AD687C3474F04B4(iVar3, 0);
					if (unk_0xF7FC2DC5308754C4(uVar4, Var0.f_2) && unk_0xD8E9E28C65F6D7A9())
					{
						if (func_710(uVar4, &bVar5))
						{
							unk_0x02FFEDE7A52D9E18(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x4F5FF3F3FDCAB15D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_710(int iParam0, var uParam1)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (!unk_0x90D1FDC9D31B7BE1(iParam0))
		{
			if (unk_0x84E7E48409E0DA9F(iParam0))
			{
				if (!unk_0xA403D842C198CAFF(unk_0x4F69FBD64CDF125B(iParam0)))
				{
					unk_0x337F2213526139E0(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xE54DCC6B21FDC95A(iParam0, 0))
		{
			if (unk_0x1800B99666D25740(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_711()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_712(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20)
{
	var uVar0;
	
	unk_0x4121A9A0CCC0E014(2, 0, Param0.f_16);
	func_717(0, -1, 0);
	unk_0x9B457509556CB639(&Local_568, 7);
	unk_0x0D25D64240F2BAA8(&Local_740, 11);
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] = 16;
	if (bLocal_759)
	{
		if (!unk_0xEC0ECEF2AF3FDA8D() && !unk_0xBC13F084F3B1B544())
		{
			unk_0xFF91FEC6E57575E4(800);
		}
		if (!unk_0x3AB73ED02FDAC9A8())
		{
			if (!unk_0xACB55959DB871ABF())
			{
				uVar0 = unk_0x8CFC7D6E1DA5D304() + 32;
				unk_0x9DF67B7E20CCE422(1, uVar0);
				func_192(1);
			}
		}
	}
	unk_0x0C06E0BAD395F495(1);
	unk_0xC11ECDA47AB081F6(1);
	if (!func_716())
	{
		func_375(0);
	}
	unk_0xDA6A6B59F261B209(0);
	func_659(iLocal_93, 1);
	func_377(1);
	if (!bLocal_759)
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			func_328(unk_0x8CFC7D6E1DA5D304(), 1, 0);
		}
	}
	Global_2512581.f_1701 = 0;
	unk_0xEDE582F2B0825317(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, 0, 0);
	func_715();
	func_713();
	Local_740[unk_0xA651DA0BC9FD8FA4() /*5*/] = 0;
}

void func_713()
{
	unk_0x46F21C85728EBCC8(1);
	func_714(1, -1);
	unk_0x5094B803E7A7A2EC(1);
	if (func_454(133, -1))
	{
		func_30(133, 0, -1, 1);
	}
	Global_2447128.f_630 = 1;
}

void func_714(int iParam0, int iParam1)
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
			unk_0x0FF7F0CDD8B0D493(0, iParam1);
			break;
		
		default:
			uVar1 = func_391(iParam1);
			iVar0 = unk_0x3A75EA627A024B7A(uVar1);
			if (unk_0xB03A1684359C50A1(iVar0, iParam0))
			{
				unk_0x62148293B793073B(&iVar0, iParam0);
				unk_0x0FF7F0CDD8B0D493(iVar0, iParam1);
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

void func_715()
{
	unk_0xC8BEB049F3BFC0AB(&uLocal_753);
	unk_0x5941F8B2A813BBA8(0, 0, 0);
	unk_0xE4536F74EAB52EE1(0, 17.0693f, -1115.935f, 28.7968f, 0);
	unk_0xAFDA7B8F83B2CA58(uLocal_753);
}

int func_716()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 0;
		}
		if (unk_0x593B88C1B97BDD33())
		{
			return 1;
		}
		if (func_437())
		{
			return 0;
		}
		if (func_706(155))
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

int func_717(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD8BE1F0DC107B5A4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_718();
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
				if (!unk_0x44243F2E2F58B8E3())
				{
					if (!bParam2)
					{
						func_718();
					}
					else
					{
						return 0;
					}
				}
				if (func_437())
				{
					if (!bParam2)
					{
						func_718();
					}
					else
					{
						return 0;
					}
				}
				if (func_706(155))
				{
					if (!bParam2)
					{
						func_718();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x32BCC4E6A353E146())
			{
				if (!bParam2)
				{
					func_718();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD8BE1F0DC107B5A4();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			if (!bParam2)
			{
				func_718();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x32BCC4E6A353E146())
	{
		if (!bParam2)
		{
			func_718();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_718()
{
	unk_0x810C5D6462DD69E6();
}

