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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 2;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 8;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<123> Local_87 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_210 = 16;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
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
	var uLocal_396 = 16;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
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
	struct<6> Local_561 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_567 = 0;
	var uLocal_568 = 16;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
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
	struct<5> Local_733[2];
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	bool bLocal_750 = 0;
	bool bLocal_751 = 0;
	bool bLocal_752 = 0;
	bool bLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_85 = 20;
	iLocal_86 = 33;
	bLocal_750 = true;
	bLocal_751 = true;
	bLocal_752 = true;
	bLocal_753 = true;
	if (unk_0x10FAB35428CCC9D7())
	{
		func_659(ScriptParam_0);
	}
	while (true)
	{
		func_658();
		if (func_650())
		{
			func_366(1);
		}
		if (func_363(0))
		{
			Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 3;
		}
		if (func_362(unk_0x57A3BDDAD8E5AA0A()) > -1)
		{
			unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
		}
		switch (func_361(unk_0x57A3BDDAD8E5AA0A()))
		{
			case 0:
				if (!unk_0xA921AA820C25702F(iLocal_744, 10))
				{
					if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						unk_0x933D6A9EEC1BACD0(&iLocal_744, 10);
					}
				}
				unk_0x71A78003C8E71424("FMINT", 0);
				if (func_360() && unk_0xADBF060E2B30C5BC("FMINT", 0))
				{
					if (func_359() > 0)
					{
						func_358(&uLocal_396, 1, 0, "Lamar", 0, 1);
						func_357(0);
						func_356(4, 1);
						func_356(1, 1);
						func_356(0, 1);
						func_356(2, 1);
						func_356(3, 0);
						func_354(iLocal_86, 1);
						Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 2;
						if (bLocal_752)
						{
							Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 = -2;
						}
						else
						{
							Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_359() == 4)
				{
					Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 4;
				}
				if (func_359() == 6 && Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/] < 4)
				{
					Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_337();
				func_20();
				if (func_359() == 4)
				{
					Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 4;
				}
				if (func_359() == 6 && Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/] < 4)
				{
					Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 5;
				break;
			
			case 5:
				func_18(&(Local_561.f_5));
				if (func_17(&(Local_561.f_5)))
				{
					Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_10(iLocal_85);
				Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 6;
			
			case 6:
				func_366(0);
				break;
		}
		if (unk_0x83CD99A1E6061AB5())
		{
			switch (func_359())
			{
				case 0:
					Local_561.f_0 = 2;
					break;
				
				case 2:
					func_9();
					func_8();
					func_2();
					if (func_1())
					{
						Local_561.f_0 = 6;
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
	if (!bLocal_750)
	{
		if (unk_0xA921AA820C25702F(Local_561.f_1, 1))
		{
			return 1;
		}
	}
	else if (unk_0xA921AA820C25702F(Local_561.f_1, 2))
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
	if (unk_0x83CD99A1E6061AB5())
	{
		if (!unk_0xA921AA820C25702F(Local_561.f_1, 3))
		{
			if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_4, 0))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_561.f_1), 3);
			}
		}
		if (!unk_0xA921AA820C25702F(Local_561.f_1, 4))
		{
			if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_4, 2))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_561.f_1), 4);
			}
		}
		if (!unk_0xA921AA820C25702F(Local_561.f_1, 5))
		{
			if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 3))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_561.f_1), 5);
			}
		}
		if (!unk_0xA921AA820C25702F(Local_561.f_1, 6))
		{
			if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 4))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_561.f_1), 6);
			}
		}
		if (!unk_0xA921AA820C25702F(Local_561.f_1, 7))
		{
			if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 5))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_561.f_1), 7);
			}
		}
		if (!unk_0xA921AA820C25702F(Local_561.f_1, 8))
		{
			if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 6))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_561.f_1), 8);
			}
		}
		switch (Local_561.f_2)
		{
			case 0:
				if (unk_0xA921AA820C25702F(Local_561.f_1, 3))
				{
					if (func_4(&(Local_561.f_3), &(Local_561.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_568))
					{
						unk_0x2497C4717C8B881E(unk_0x367B936610BA360C(Local_561.f_3), 1, 0);
						Local_561.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0xA921AA820C25702F(Local_561.f_1, 4))
				{
					Local_561.f_2 = 1;
				}
				break;
			
			case 1:
				if (unk_0xA921AA820C25702F(Local_561.f_1, 5))
				{
					Local_561.f_2 = 3;
				}
				break;
			
			case 3:
				if (unk_0xA921AA820C25702F(Local_561.f_1, 6))
				{
					Local_561.f_2 = 4;
				}
				break;
			
			case 4:
				if (unk_0xA921AA820C25702F(Local_561.f_1, 7))
				{
					Local_561.f_2 = 5;
				}
				break;
			
			case 5:
				if (unk_0xA921AA820C25702F(Local_561.f_1, 8))
				{
					Local_561.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam5, var uParam6)
{
	if (func_7(Global_2446207.f_730) && func_7(Global_2446207.f_731))
	{
		if (!unk_0x38CE16C96BD11344(*uParam0))
		{
			if (func_6(uParam0, Global_2446207.f_730, Param2, fParam5, 1, 1, 1, 0, 1, 1))
			{
				unk_0x2B5F9D2AF1F1722D(unk_0x367B936610BA360C(*uParam0), true);
			}
		}
		if (!unk_0x38CE16C96BD11344(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2446207.f_731, -1, 1, 1, 1))
			{
				unk_0x9F8AA94D6D97DBF4(unk_0xBDCD95FC216A8B3E(*uParam1), true);
				unk_0xE532F5D78798DAAB(Global_2446207.f_730);
				unk_0xE532F5D78798DAAB(Global_2446207.f_731);
				unk_0x3910051CCECDB00C(unk_0x367B936610BA360C(*uParam0), false);
				unk_0xBC0ED94165A48BC2(unk_0xBDCD95FC216A8B3E(*uParam1), true);
				func_358(uParam6, 8, unk_0xBDCD95FC216A8B3E(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!unk_0x38CE16C96BD11344(*uParam0) || !unk_0x38CE16C96BD11344(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!unk_0xBCBF4FEF9FA5D781(1))
	{
		return 0;
	}
	if (!unk_0x38CE16C96BD11344(iParam1))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(unk_0x367B936610BA360C(iParam1), false))
	{
		return 0;
	}
	*uParam0 = unk_0x0EDEC3C276198689(unk_0x7DD959874C1FD534(unk_0x367B936610BA360C(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(unk_0xBDCD95FC216A8B3E(*uParam0), bParam7);
		if (unk_0xC7827959479DCC78(unk_0xBDCD95FC216A8B3E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	
	if (!unk_0x7277F1F2E085EE74(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x01C7B9B38428AEB6(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xAF35D0D2583051B0(iParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = unk_0xB4C94523F023419C(iVar0);
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(iVar0, bParam10);
		if (unk_0xC7827959479DCC78(iVar0))
		{
			if (bParam8)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
			else
			{
				unk_0xE05E81A888FA63C8(*uParam0, false);
			}
		}
		unk_0x67B2C79AA7FF5738(iVar0, bParam9);
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
	unk_0x963D27A58DF860AC(iParam0);
	return unk_0x98A4EB5D89A0C952(iParam0);
}

void func_8()
{
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA6C90FBC38E395EE())
	{
		if (unk_0x6FF8FF40B6357D45(unk_0x9EC6603812C24710(iVar0)))
		{
			if (bLocal_750)
			{
				if (!unk_0xA921AA820C25702F(Local_561.f_1, 2))
				{
					if (unk_0xA921AA820C25702F(Local_733[iVar0 /*5*/].f_3, 2))
					{
						unk_0x933D6A9EEC1BACD0(&(Local_561.f_1), 2);
					}
				}
			}
			else if (!unk_0xA921AA820C25702F(Local_561.f_1, 1))
			{
				if (unk_0xA921AA820C25702F(Local_733[iVar0 /*5*/].f_3, 1))
				{
					unk_0x933D6A9EEC1BACD0(&(Local_561.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_10(int iParam0)
{
	if (!func_13(unk_0x4F8644AF03D0E0D6(), 1))
	{
		return;
	}
	if (!func_11(unk_0x4F8644AF03D0E0D6()) == iParam0)
	{
		return;
	}
}

int func_11(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2413868[iParam0 /*253*/].f_1;
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB8DFD30D6973E135(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x5E9564D8246B909A(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_13(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
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
	if (Global_1582048[iParam0 /*324*/] == -1)
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
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= 1000)
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
		if (unk_0x83CD99A1E6061AB5())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
		}
		uParam0->f_1 = 1;
	}
}

void func_20()
{
	switch (func_362(unk_0x57A3BDDAD8E5AA0A()))
	{
		case -2:
			func_184();
			break;
		
		case -1:
			func_183();
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
	switch (iLocal_749)
	{
		case 0:
			if (!func_22(iLocal_86))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3), 2);
				Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 = 99;
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
		return unk_0xA921AA820C25702F(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_28() == 0)
		{
			return unk_0xA921AA820C25702F(func_24(func_27(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA921AA820C25702F(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_24(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454187[iParam0 /*6*/][func_25(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
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
			Global_2453900 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453900 = 1;
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
			return 813;
			break;
		
		case 1:
			return 814;
			break;
		
		case 2:
			return 815;
			break;
		
		case 3:
			return 816;
			break;
		
		case 4:
			return 817;
			break;
		
		case 5:
			return 818;
			break;
		
		case 6:
			return 819;
			break;
		
		case 7:
			return 820;
			break;
		
		case 8:
			return 821;
			break;
		
		case 9:
			return 822;
			break;
		
		case 10:
			return 823;
			break;
		
		case 11:
			return 824;
			break;
		
		case 12:
			return 825;
			break;
		
		case 13:
			return 826;
			break;
		
		case 14:
			return 827;
			break;
		
		case 15:
			return 829;
			break;
		
		case 16:
			return 830;
			break;
		
		case 17:
			return 831;
			break;
		
		case 18:
			return 832;
			break;
		
		case 19:
			return 833;
			break;
		
		case 20:
			return 834;
			break;
		
		case 21:
			return 835;
			break;
		
		case 22:
			return 836;
			break;
		
		case 23:
			return 837;
			break;
		
		case 24:
			return 838;
			break;
		
		case 25:
			return 839;
			break;
		
		case 26:
			return 840;
			break;
		
		case 27:
			return 841;
			break;
		
		case 28:
			return 842;
			break;
		
		case 29:
			return 843;
			break;
		
		case 30:
			return 844;
			break;
		
		case 31:
			return 845;
			break;
		
		case 32:
			return 846;
			break;
		
		case 33:
			return 847;
			break;
		
		case 34:
			return 848;
			break;
		
		case 35:
			return 849;
			break;
		
		case 36:
			return 850;
			break;
		
		case 37:
			return 851;
			break;
		
		case 38:
			return 852;
			break;
		
		case 39:
			return 853;
			break;
		
		case 40:
			return 857;
			break;
		
		case 41:
			return 858;
			break;
		
		case 42:
			return 859;
			break;
		
		case 43:
			return 860;
			break;
		
		default:
			break;
	}
	return 2827;
}

int func_28()
{
	return Global_24444;
}

void func_29()
{
	int iVar0;
	
	if (func_182())
	{
		if (func_12(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			func_181(0);
		}
	}
	if (!func_180(&uLocal_386))
	{
		func_19(&uLocal_386, 0, 0);
	}
	if (!unk_0xA921AA820C25702F(iLocal_744, 21))
	{
		unk_0x933D6A9EEC1BACD0(&iLocal_744, 21);
	}
	if (!unk_0xA921AA820C25702F(iLocal_744, 3))
	{
		if (!func_180(&uLocal_384))
		{
			func_19(&uLocal_384, 0, 0);
		}
		else if (unk_0xA921AA820C25702F(iLocal_744, 21))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					if (func_179(&uLocal_384, 3000, 0))
					{
						unk_0x933D6A9EEC1BACD0(&iLocal_744, 3);
					}
				}
			}
		}
		if (func_179(&uLocal_384, 40000, 0))
		{
			unk_0x933D6A9EEC1BACD0(&iLocal_744, 3);
		}
	}
	else if (!unk_0xA921AA820C25702F(iLocal_744, 16))
	{
		if (!unk_0x4D79439A6B55AC67())
		{
			if (!unk_0xB0034A223497FFCB())
			{
				unk_0x933D6A9EEC1BACD0(&iLocal_744, 16);
				func_178(&uLocal_384);
			}
		}
	}
	if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_4, 2))
	{
		if (!func_180(&uLocal_390))
		{
			func_19(&uLocal_390, 0, 0);
		}
		else if (!unk_0xA921AA820C25702F(iLocal_745, 1))
		{
			if (func_179(&uLocal_390, 10000, 0))
			{
				unk_0x933D6A9EEC1BACD0(&iLocal_745, 1);
				func_178(&uLocal_390);
			}
		}
		else if (unk_0xA921AA820C25702F(iLocal_744, 19))
		{
			if (!unk_0xA921AA820C25702F(iLocal_744, 18))
			{
				if (!func_176() || func_179(&uLocal_384, 5000, 0))
				{
					func_175(0);
					unk_0x933D6A9EEC1BACD0(&iLocal_744, 18);
					if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 244, false);
						unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 243, false);
						unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 242, false);
					}
				}
			}
		}
	}
	if (unk_0xA921AA820C25702F(iLocal_744, 18))
	{
		if (!unk_0xA921AA820C25702F(iLocal_744, 2))
		{
			if (unk_0x5A859503B0C08678())
			{
				iVar0 = 0;
				unk_0x933D6A9EEC1BACD0(&iVar0, 3);
				unk_0x933D6A9EEC1BACD0(&iVar0, 4);
				unk_0x933D6A9EEC1BACD0(&iVar0, 5);
				if (func_86(&uLocal_396, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_85(1);
					unk_0x933D6A9EEC1BACD0(&iLocal_744, 2);
					if (!unk_0xA921AA820C25702F(iLocal_744, 20))
					{
						func_76(19, 3, 1);
						unk_0x933D6A9EEC1BACD0(&iLocal_744, 20);
					}
					if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						unk_0xBD2A8EC3AF4DE7DB(unk_0xD80958FC74E988A6(), 1, 1);
					}
				}
			}
		}
		else if (!func_75(0))
		{
			if (!func_74())
			{
				if (!func_72())
				{
					if (!unk_0xA921AA820C25702F(iLocal_744, 12))
					{
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
						{
							unk_0xBD2A8EC3AF4DE7DB(unk_0xD80958FC74E988A6(), 0, 1);
							unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 244, true);
							unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 243, true);
							unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 242, true);
						}
						unk_0x933D6A9EEC1BACD0(&iLocal_744, 12);
						func_19(&uLocal_388, 0, 0);
						func_19(&uLocal_392, 0, 0);
					}
				}
			}
		}
		if (unk_0xA921AA820C25702F(iLocal_744, 12))
		{
			if (!unk_0xA921AA820C25702F(iLocal_744, 17))
			{
				if (!unk_0xB0034A223497FFCB())
				{
					func_68();
					unk_0x933D6A9EEC1BACD0(&iLocal_744, 17);
					func_178(&uLocal_384);
				}
			}
			else if (!func_176())
			{
				if (!unk_0xA921AA820C25702F(iLocal_744, 23))
				{
					if (func_179(&uLocal_392, 4500, 0))
					{
						unk_0x933D6A9EEC1BACD0(&iLocal_744, 23);
						unk_0x933D6A9EEC1BACD0(&(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3), 3);
					}
				}
				if (func_179(&uLocal_388, 15000, 0))
				{
					if (!unk_0xA921AA820C25702F(iLocal_744, 22))
					{
						unk_0x933D6A9EEC1BACD0(&iLocal_744, 22);
					}
				}
				if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0)
				{
					if (unk_0xA921AA820C25702F(iLocal_744, 14))
					{
						unk_0xE80492A9AC099A93(&iLocal_744, 14);
					}
					if (!func_22(iLocal_86))
					{
						if (unk_0xA921AA820C25702F(iLocal_744, 13))
						{
							unk_0xE80492A9AC099A93(&iLocal_744, 13);
						}
						if (unk_0xA921AA820C25702F(iLocal_744, 25) || (!unk_0xA921AA820C25702F(iLocal_744, 25) && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false)))
						{
							if (!unk_0xA921AA820C25702F(iLocal_744, 0))
							{
								if (unk_0xA921AA820C25702F(iLocal_744, 15))
								{
									unk_0xE80492A9AC099A93(&iLocal_744, 15);
								}
								if (unk_0xA6DB27D19ECBB7DA(Global_89836.f_198[iLocal_86]))
								{
									func_62("GET_AMMU", 0);
									unk_0x933D6A9EEC1BACD0(&iLocal_744, 0);
									unk_0x933D6A9EEC1BACD0(&iLocal_744, 25);
									if (unk_0xA6DB27D19ECBB7DA(Global_89836.f_198[iLocal_86]))
									{
										if (!unk_0xA921AA820C25702F(Global_2446207.f_729, 2))
										{
											unk_0x4F7D8A9BFB0B43E9(Global_89836.f_198[iLocal_86], true);
										}
										func_354(iLocal_86, 1);
									}
								}
							}
							else if (unk_0xA921AA820C25702F(Global_2446207.f_729, 2))
							{
								if (unk_0xA6DB27D19ECBB7DA(Global_89836.f_198[iLocal_86]))
								{
									if (!unk_0xA921AA820C25702F(iLocal_744, 15))
									{
										unk_0x4F7D8A9BFB0B43E9(Global_89836.f_198[iLocal_86], false);
										unk_0x933D6A9EEC1BACD0(&iLocal_744, 15);
									}
								}
							}
							else if (unk_0xA6DB27D19ECBB7DA(Global_89836.f_198[iLocal_86]))
							{
								if (unk_0xA921AA820C25702F(iLocal_744, 15))
								{
									unk_0x4F7D8A9BFB0B43E9(Global_89836.f_198[iLocal_86], true);
									unk_0xE80492A9AC099A93(&iLocal_744, 15);
								}
							}
						}
					}
					else
					{
						if (unk_0xA921AA820C25702F(iLocal_744, 0))
						{
							unk_0xE80492A9AC099A93(&iLocal_744, 0);
						}
						if (!unk_0xA921AA820C25702F(iLocal_744, 13))
						{
							func_62("GET_GUN", 0);
							func_61(1);
							unk_0x933D6A9EEC1BACD0(&iLocal_744, 13);
						}
					}
				}
				else if (!unk_0xA921AA820C25702F(iLocal_744, 14))
				{
					unk_0x8DFCED7A656F8802(true);
					if (unk_0xA921AA820C25702F(iLocal_744, 0))
					{
						unk_0xE80492A9AC099A93(&iLocal_744, 0);
					}
					if (unk_0xA921AA820C25702F(iLocal_744, 13))
					{
						unk_0xE80492A9AC099A93(&iLocal_744, 13);
					}
					if (unk_0xA6DB27D19ECBB7DA(Global_89836.f_198[iLocal_86]))
					{
						unk_0x4F7D8A9BFB0B43E9(Global_89836.f_198[iLocal_86], false);
						unk_0xB14552383D39CE3E(Global_89836.f_198[iLocal_86], false);
						func_354(iLocal_86, 0);
					}
					func_62("LOSE_COP", 0);
					unk_0x933D6A9EEC1BACD0(&iLocal_744, 14);
				}
			}
		}
	}
	else if (func_179(&uLocal_386, 300000, 0))
	{
		unk_0x933D6A9EEC1BACD0(&iLocal_744, 18);
	}
	if (!unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 0))
	{
		if (((unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_pistol"), false) || unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_combatpistol"), false)) || unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_appistol"), false)) || unk_0x8DECB02F88F428BC(unk_0xD80958FC74E988A6(), joaat("weapon_microsmg"), false))
		{
			if (func_59())
			{
				func_54(1);
				unk_0x933D6A9EEC1BACD0(&(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3), 0);
				if (func_22(iLocal_86))
				{
				}
			}
		}
		else
		{
			func_42(400);
		}
	}
	else if (!unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 1))
	{
		if (!func_40())
		{
			unk_0x933D6A9EEC1BACD0(&(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3), 1);
			func_33();
			func_32("FM_IHELP_AMMU", -1);
			if (!unk_0xA921AA820C25702F(iLocal_744, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
				unk_0x933D6A9EEC1BACD0(&iLocal_744, 31);
			}
			func_178(&uLocal_384);
			if (bLocal_750)
			{
				if (bLocal_751)
				{
					Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 = 3;
				}
				else
				{
					Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_30(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_31())
	{
		iVar0 = Global_2472519[iParam0 /*6*/][func_25(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x4B33C4243DE0C432(iVar0, bParam1, bParam3);
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
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

void func_33()
{
	if (!func_39())
	{
		return;
	}
	if (!unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A()) == Global_1312578.f_7)
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
	
	bVar0 = unk_0x10FAB35428CCC9D7();
	Global_1312578 = 11;
	StringCopy(&(Global_1312578.f_1), "", 24);
	Global_1312578.f_7 = 0;
	if (bVar0)
	{
		Global_1312578.f_8 = unk_0x7A5487FE9FAA6B48();
		Global_1312578.f_9 = unk_0x7A5487FE9FAA6B48();
	}
	StringCopy(&(Global_1312578.f_10), "", 16);
	StringCopy(&(Global_1312578.f_14), "", 64);
	StringCopy(&(Global_1312578.f_30), "", 16);
	Global_1312578.f_34 = 0;
	Global_1312578.f_35 = 0;
	Global_1312578.f_36 = 0;
	Global_1312578.f_37 = -1;
	Global_1312578.f_38 = 0;
	Global_1312578.f_39 = 0;
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
		unk_0xE124FA80A759019C(&(Global_1312578.f_10));
		func_37();
		unk_0xFCC75460ABA29378();
	}
}

void func_37()
{
	switch (Global_1312578)
	{
		case 11:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x03B504CF259931BC(Global_1312578.f_34);
			return;
		
		case 2:
			unk_0x03B504CF259931BC(Global_1312578.f_34);
			unk_0x03B504CF259931BC(Global_1312578.f_35);
			return;
		
		case 3:
			unk_0xC63CD5D2920ACBE7(&(Global_1312578.f_14));
			return;
		
		case 4:
			unk_0xC63CD5D2920ACBE7(&(Global_1312578.f_14));
			unk_0xC63CD5D2920ACBE7(&(Global_1312578.f_30));
			return;
		
		case 5:
			unk_0x6C188BE134E074AA(&(Global_1312578.f_14));
			return;
		
		case 6:
			unk_0x39BBF623FC803EAC(Global_1312578.f_38);
			unk_0x6C188BE134E074AA(&(Global_1312578.f_14));
			return;
		
		case 7:
			unk_0xC63CD5D2920ACBE7(&(Global_1312578.f_14));
			return;
		
		case 8:
			unk_0x39BBF623FC803EAC(Global_1312578.f_38);
			unk_0xC63CD5D2920ACBE7(&(Global_1312578.f_14));
			return;
		
		case 9:
			unk_0x5F68520888E69014(&(Global_1312578.f_14));
			return;
		
		case 10:
			unk_0x5F68520888E69014(&(Global_1312578.f_14));
			return;
		
		default:
	}
}

bool func_38()
{
	if (!func_39())
	{
		return 0;
	}
	unk_0x853648FD1063A213(&(Global_1312578.f_10));
	func_37();
	return unk_0x8A9BA1AB3E237613();
}

int func_39()
{
	if (Global_1312578 == 11)
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
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		iVar0 = func_51(unk_0x4F8644AF03D0E0D6());
		if (iVar0 < iParam0)
		{
			if (func_50())
			{
				func_43(1734805203, (iParam0 - iVar0), &uVar1, 0, 0);
			}
			else
			{
				unk_0x45B8154E077D9E4D((iParam0 - iVar0));
			}
		}
	}
}

void func_43(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
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
		case 1349151477:
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
	if (!func_50())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xB24F0944DA203D9E(func_26()) || unk_0x810E8431C0614BF9())
		{
			Global_2539462 = 1;
			return 0;
		}
		if (Global_2435609)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2539463 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2539057[iVar1 /*67*/].f_2 == 0)
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
	if (bVar0 || unk_0x3C5FD37B5499582E(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x39BE7CEA8D9CC8E6(iVar3))
		{
			*uParam0 = func_49(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2539057[*uParam0 /*67*/].f_61 = 1;
				}
			}
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2539461 = 1;
			Global_2539464 = iParam4;
			Global_2539466 = iParam3;
			Global_2539467 = 1;
			Global_2539465 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2539464 = iParam4;
			Global_2539466 = iParam3;
			Global_2539467 = 1;
			Global_2539465 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_48(1, iParam4);
			Global_2539461 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_45(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_45(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x933D6A9EEC1BACD0(&(Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_121.f_71), 0);
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
	struct<67> Var1;
	
	bVar0 = false;
	if (!func_50())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_47(iParam0))
		{
			if (!bVar0)
			{
				unk_0xA65568121DF2EA26();
			}
		}
		else if (!bVar0)
		{
			unk_0xE2A99A9B524BEFFF(Global_2539057[iParam0 /*67*/]);
		}
		Var1 = 2147483647;
		Global_2539057[iParam0 /*67*/] = { Var1 };
	}
}

int func_47(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2539057[iParam0 /*67*/].f_5 == 1;
	}
	return 0;
}

void func_48(int iParam0, int iParam1)
{
	Global_2436786 = iParam1;
	Global_2436785 = iParam0;
}

int func_49(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2539057[iVar0 /*67*/].f_2 == 0)
		{
			if (!func_50())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2539057[iVar0 /*67*/].f_2 = 1;
			Global_2539057[iVar0 /*67*/].f_1 = iParam5;
			Global_2539057[iVar0 /*67*/].f_3 = uParam1;
			Global_2539057[iVar0 /*67*/].f_4 = iParam2;
			Global_2539057[iVar0 /*67*/].f_7 = iParam3;
			Global_2539057[iVar0 /*67*/].f_5 = 0;
			Global_2539057[iVar0 /*67*/] = iParam0;
			Global_2539057[iVar0 /*67*/].f_6 = iParam4;
			Global_2539057[iVar0 /*67*/].f_64 = uParam8;
			Global_2539057[iVar0 /*67*/].f_63 = iParam7;
			if (bParam6)
			{
				Global_2539057[iVar0 /*67*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_50()
{
	if (unk_0x48AF36444B965238())
	{
		return 1;
	}
	return 0;
}

var func_51(int iParam0)
{
	var uVar0;
	
	uVar0 = func_52(iParam0);
	return uVar0;
}

int func_52(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return unk_0xA40F9C2623F6A8B5(-1);
		}
		else if (func_53(iParam0))
		{
			return Global_1582048[iParam0 /*324*/].f_180.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xA921AA820C25702F(Global_2421967.f_1, iParam0);
	}
	return 1;
}

void func_54(bool bParam0)
{
	func_55(28, bParam0);
	func_55(29, bParam0);
	func_55(30, bParam0);
	func_55(31, bParam0);
	func_55(32, bParam0);
	func_55(33, bParam0);
	func_55(34, bParam0);
	func_55(35, bParam0);
	func_55(36, bParam0);
	func_55(37, bParam0);
	func_55(38, bParam0);
}

void func_55(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 14, 1))
		{
			func_58(iParam0, 14, 1);
		}
	}
	else if (func_23(iParam0, 14, 1))
	{
		func_56(iParam0, 14, 1);
	}
}

void func_56(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xE80492A9AC099A93(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_28() == 0)
		{
			iVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&iVar0, iParam1);
			func_57(func_27(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

void func_57(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454187[iParam0 /*6*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

void func_58(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_28() == 0)
		{
			iVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&iVar0, iParam1);
			func_57(func_27(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

bool func_59()
{
	return ((((((((((func_60(28) || func_60(29)) || func_60(30)) || func_60(31)) || func_60(32)) || func_60(33)) || func_60(34)) || func_60(35)) || func_60(36)) || func_60(37)) || func_60(38));
}

int func_60(int iParam0)
{
	return func_23(iParam0, 3, 0);
}

void func_61(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA921AA820C25702F(Global_1672786, 19))
		{
			unk_0x933D6A9EEC1BACD0(&Global_1672786, 19);
		}
	}
	else if (unk_0xA921AA820C25702F(Global_1672786, 19))
	{
		unk_0xE80492A9AC099A93(&Global_1672786, 19);
	}
}

void func_62(char* sParam0, bool bParam1)
{
	if (unk_0xCA042B6957743895(sParam0))
	{
		return;
	}
	if (unk_0x43E4111189E54F0E(sParam0) > 23)
	{
		return;
	}
	if (func_66(sParam0))
	{
		return;
	}
	func_34();
	Global_1312578 = 0;
	StringCopy(&(Global_1312578.f_1), unk_0x442E0A7EDE4A738A(), 24);
	Global_1312578.f_7 = unk_0xD24D37CC275948CC(&(Global_1312578.f_1));
	StringCopy(&(Global_1312578.f_10), sParam0, 16);
	func_65();
	func_64(bParam1);
	func_63();
}

void func_63()
{
	unk_0x933D6A9EEC1BACD0(&(Global_1312578.f_39), 1);
}

void func_64(bool bParam0)
{
	if (bParam0)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_1312578.f_39), 0);
		return;
	}
	unk_0xE80492A9AC099A93(&(Global_1312578.f_39), 0);
}

void func_65()
{
	Global_1312578.f_8 = unk_0x017008CCDAD48503(unk_0x7A5487FE9FAA6B48(), 86400000);
	Global_1312578.f_9 = unk_0x7A5487FE9FAA6B48();
}

bool func_66(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (Global_1312578 == 10)
	{
		return func_67(sParam0);
	}
	if (unk_0xCA042B6957743895(sParam0))
	{
		return 0;
	}
	return unk_0xD24D37CC275948CC(sParam0) == unk_0xD24D37CC275948CC(&(Global_1312578.f_10));
}

bool func_67(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (unk_0xCA042B6957743895(sParam0))
	{
		return 0;
	}
	return unk_0xD24D37CC275948CC(sParam0) == unk_0xD24D37CC275948CC(&(Global_1312578.f_14));
}

void func_68()
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { func_71(unk_0x4F8644AF03D0E0D6()) };
	bVar13 = unk_0x67A5589628E0CFF6();
	bVar14 = func_70(&Var0);
	if (!bVar13 && !bVar14)
	{
		func_69("HLP_TAXI3", 9000);
	}
	else if (bVar13 && !bVar14)
	{
		func_69("HLP_SOC2", 9000);
	}
	else if (bVar13 && bVar14)
	{
		func_69("HLP_SOC1", 9000);
	}
}

void func_69(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, false, iParam1);
}

int func_70(var* uParam0)
{
	if (unk_0xF25D331DC2627BBC())
	{
		if (unk_0x579CCED0265D4896() && unk_0xB124B57F571D8F18(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_71(int iParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(iParam0, &Var0, 13);
	return Var0;
}

bool func_72()
{
	return func_73();
}

bool func_73()
{
	return Global_1321257.f_40 == 3;
}

int func_74()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_76(int iParam0, int iParam1, bool bParam2)
{
	Global_2949 = iParam0;
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		func_78();
		if (iParam1 == 4)
		{
			Global_97173.f_29699[iParam0 /*29*/].f_12[0] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_12[1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_12[2] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[0] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] == 1 && Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68067)
			{
				if (iParam1 != 4)
				{
					if (Global_14393 != iParam1)
					{
						Global_2922[iParam1 /*4*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
						Global_2939[iParam1] = 1;
						Global_2944[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14393)
					{
					}
					else
					{
						Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
						Global_2873[1 /*6*/].f_5 = iParam1;
						func_77();
					}
				}
				else
				{
					Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
					Global_2873[1 /*6*/].f_5 = iParam1;
					func_77();
				}
			}
			else
			{
				Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
				Global_2873[1 /*6*/].f_5 = iParam1;
				func_77();
			}
		}
	}
}

void func_77()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x7B5280EBA9840C72(&(Global_97173.f_29699[Global_2949 /*29*/].f_7)), 64);
	if (Global_2968 == 0)
	{
		unk_0x202709F4C58A0424("");
		StringCopy(&cVar16, unk_0x7B5280EBA9840C72(&(Global_2873[1 /*6*/])), 64);
		sVar32 = unk_0x7B5280EBA9840C72("CELL_253");
		unk_0x1CCD9A37359072CF(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x202709F4C58A0424("CELL_255");
		unk_0xC63CD5D2920ACBE7(&(Global_2873[1 /*6*/]));
		unk_0x1CCD9A37359072CF(&cVar0, &cVar0, false, 3, "", 0);
	}
	unk_0xE80492A9AC099A93(&Global_2263, 0);
}

void func_78()
{
	if (func_84(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_79();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_79()
{
	func_80();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_80()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_83(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_82(unk_0xD80958FC74E988A6());
			if (func_81(iVar0) && (!func_84(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_81(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_81(int iParam0)
{
	return iParam0 < 3;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_83(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_83(int iParam0)
{
	if (func_81(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_84(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_85(bool bParam0)
{
	if (bParam0)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 17);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2264, 17);
	}
}

int func_86(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_173())
	{
		return 0;
	}
	if (func_172())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_87(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_87(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xCA042B6957743895(sParam2))
	{
		return 0;
	}
	if (unk_0x43E4111189E54F0E(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xCA042B6957743895(sParam3))
	{
		return 0;
	}
	if (unk_0x43E4111189E54F0E(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A());
	iVar1 = func_171(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xCA042B6957743895(sParam7))
	{
		iVar2 = unk_0xD24D37CC275948CC(sParam7);
	}
	if (func_170(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_166(iParam6))
	{
		return 0;
	}
	if (func_163(iVar0, iVar1, iVar2))
	{
		if (func_162())
		{
			return 0;
		}
		func_161();
		return func_94(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_93(iParam4))
	{
		return 0;
	}
	func_88(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_88(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1321257.f_40.f_1 = iParam0;
	Global_1321257.f_40.f_2 = iParam1;
	Global_1321257.f_40.f_3 = iParam2;
	StringCopy(&(Global_1321257.f_40.f_4), sParam3, 16);
	Global_1321257.f_40.f_8 = iParam4;
	Global_1321257.f_40.f_9 = iParam5;
	Global_1321257.f_40.f_14 = iParam6;
	func_89(iParam4);
	func_161();
	Global_1321257.f_40.f_13 = unk_0x017008CCDAD48503(unk_0x7A5487FE9FAA6B48(), 7000);
}

void func_89(int iParam0)
{
	if (func_92(iParam0))
	{
		func_91();
		return;
	}
	func_90();
}

void func_90()
{
	Global_1321257.f_40.f_10 = 0;
}

void func_91()
{
	Global_1321257.f_40.f_10 = 1;
}

int func_92(int iParam0)
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

bool func_93(int iParam0)
{
	return iParam0 > Global_1321257.f_40.f_8;
}

int func_94(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_160();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_157(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_154(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_157(uParam0, sParam3, sParam4);
		}
		return func_137(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_136(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_126(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_125(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_95(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_95(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_124();
	bVar0 = true;
	if (func_97(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_96(120000);
		return 1;
	}
	return 0;
}

void func_96(int iParam0)
{
	Global_1321257.f_40.f_11 = unk_0x017008CCDAD48503(unk_0x7A5487FE9FAA6B48(), iParam0);
	Global_1321257.f_40.f_12 = 1;
}

int func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_123();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6D0DE6A7B5DA71F8(iVar0);
		iVar1 = func_117(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xCB2CF5148012C8D0(unk_0x7A5487FE9FAA6B48(), Global_1321257.f_40.f_13))
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
	sVar4 = func_116(sParam5, bParam6, &iVar3);
	uVar5 = func_114(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xCA042B6957743895(sParam8))
	{
		iVar6++;
		if (!unk_0xCA042B6957743895(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x0C515FAB3FF9EA92(sVar4, " "))
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
		if (unk_0xA921AA820C25702F(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xA921AA820C25702F(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xCA042B6957743895(sVar2))
	{
		bVar12 = func_113(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_101(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xA921AA820C25702F(iParam4, 0))
	{
		func_100();
	}
	func_124();
	func_99();
	func_98();
	return 1;
}

void func_98()
{
	Global_1321257.f_57 = 0;
	Global_1321257.f_57.f_1 = 0;
}

void func_99()
{
	Global_1321257.f_40 = 3;
}

void func_100()
{
	unk_0x933D6A9EEC1BACD0(&Global_2263, 8);
}

int func_101(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_102(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			unk_0x933D6A9EEC1BACD0(&Global_2543488, 0);
		}
		return 1;
	}
	return 0;
}

int func_102(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x0C515FAB3FF9EA92(sParam14, sParam15))
	{
	}
	func_78();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
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
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (unk_0xC024869A53992F34(unk_0xD80958FC74E988A6()))
			{
				return 0;
			}
		}
		if (Global_2543473 == 1)
		{
			return 0;
		}
		if (unk_0x2C83A9DA6BFFC4F9(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x2C83A9DA6BFFC4F9(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_112() == 0)
	{
		func_110();
		return 0;
	}
	func_109(Global_2543472);
	StringCopy(&(Global_2542223[Global_2543472 /*104*/]), sParam1, 64);
	Global_2542223[Global_2543472 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2542223[Global_2543472 /*104*/].f_24 = iParam2;
	}
	Global_2542223[Global_2543472 /*104*/].f_25 = iParam7;
	Global_2542223[Global_2543472 /*104*/].f_26 = uParam8;
	Global_2542223[Global_2543472 /*104*/].f_29 = uParam9;
	Global_2542223[Global_2543472 /*104*/].f_30 = uParam12;
	Global_2542223[Global_2543472 /*104*/].f_31 = uParam11;
	Global_2542223[Global_2543472 /*104*/].f_28 = 0;
	Global_2542223[Global_2543472 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2542223[Global_2543472 /*104*/].f_33), sParam4, 64);
	Global_2542223[Global_2543472 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2542223[Global_2543472 /*104*/].f_50), sParam5, 64);
	Global_2542223[Global_2543472 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2542223[Global_2543472 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2542223[Global_2543472 /*104*/].f_83), sParam15, 64);
	func_78();
	switch (iParam16)
	{
		case 3:
			Global_2542223[Global_2543472 /*104*/].f_99[Global_14393] = 1;
			break;
		
		case 0:
			Global_2542223[Global_2543472 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2542223[Global_2543472 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2542223[Global_2543472 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14393)
		{
			case 0:
				func_108(0);
				break;
			
			case 1:
				func_108(1);
				break;
			
			case 2:
				func_108(2);
				break;
			
			case 3:
				func_108(3);
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
				Global_2543473 = 1;
				break;
			
			case 0:
				Global_2543473 = 1;
				break;
			
			case 2:
				Global_2543473 = 1;
				break;
			
			case 1:
				Global_2543473 = 1;
				break;
			}
	}
	Global_16761[Global_2543472] = 0;
	if (bParam10)
	{
		func_78();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_107())
			{
				unk_0x67C540AA08E4A6F5(-1, "Text_Arrive_Tone", &Global_14382, true);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			func_106(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_103(1);
			func_106(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_103(int iParam0)
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_84(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(iVar2);
								unk_0xC6796A8FFA375E53();
							}
							Global_2832[iVar0] = 1;
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
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97173.f_12362[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97173.f_12362[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97173.f_12362[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68067)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2542223[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2542223[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2542223[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35958;
											break;
										
										case 1:
											iVar6 = Global_35959;
											break;
										
										case 2:
											iVar6 = Global_35960;
											break;
										
										default:
											break;
									}
									func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(Global_2269);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(iVar7);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(iVar8);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 8)
							{
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(42);
								unk_0xC6796A8FFA375E53();
							}
							else
							{
								func_104(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_104(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xCA042B6957743895(sParam7))
	{
		func_105(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_105(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_105(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_105(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_105(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_105(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_106(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xC6796A8FFA375E53();
}

bool func_107()
{
	return Global_1315898;
}

void func_108(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_97173.f_12272[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_109(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x494E97C2EF27C470();
	iVar1 = unk_0x13D2B8ADD79640F2();
	iVar2 = unk_0x25223CA6B4D20B7F();
	iVar3 = unk_0x3D10BC92A4DB1D35();
	uVar4 = unk_0xBBC72712E80257A1() + 1;
	iVar5 = unk_0x961777E64BDAF717();
	Global_2542223[iParam0 /*104*/].f_18 = iVar0;
	Global_2542223[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_2542223[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_2542223[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_2542223[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2542223[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2543472 = 11;
	Global_2542223[Global_2543472 /*104*/].f_18 = -1;
	Global_2542223[Global_2543472 /*104*/].f_18.f_1 = 0;
	Global_2542223[Global_2543472 /*104*/].f_18.f_2 = 0;
	Global_2542223[Global_2543472 /*104*/].f_18.f_3 = 0;
	Global_2542223[Global_2543472 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_111(Global_2542223[iVar2 /*104*/].f_18, Global_2542223[Global_2543472 /*104*/].f_18))
		{
			Global_2543472 = iVar2;
		}
		iVar2++;
	}
	Global_2542223[Global_2543472 /*104*/].f_24 = 1;
}

int func_111(struct<6> Param0, struct<6> Param6)
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

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2542223[iVar2 /*104*/].f_24 == 0)
		{
			Global_2543472 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2543472 = 11;
	Global_2542223[Global_2543472 /*104*/].f_18 = -1;
	Global_2542223[Global_2543472 /*104*/].f_18.f_1 = 0;
	Global_2542223[Global_2543472 /*104*/].f_18.f_2 = 0;
	Global_2542223[Global_2543472 /*104*/].f_18.f_3 = 0;
	Global_2542223[Global_2543472 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2542223[iVar2 /*104*/].f_24 == 0 || Global_2542223[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_111(Global_2542223[iVar2 /*104*/].f_18, Global_2542223[Global_2543472 /*104*/].f_18))
			{
				Global_2543472 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2543472 == 11)
	{
		return 0;
	}
	Global_2542223[Global_2543472 /*104*/].f_99[0] = 0;
	Global_2542223[Global_2543472 /*104*/].f_99[1] = 0;
	Global_2542223[Global_2543472 /*104*/].f_99[2] = 0;
	return 1;
}

int func_113(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_102(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2970 = iParam10;
			unk_0x933D6A9EEC1BACD0(&Global_2543488, 0);
		}
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_115(2, iParam1);
	return iParam0;
}

void func_115(int iParam0, var uParam1)
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

char* func_116(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xCA042B6957743895(sParam0))
	{
		return sLocal_17;
	}
	if (unk_0x0C515FAB3FF9EA92(sParam0, sLocal_17))
	{
		return sLocal_17;
	}
	func_115(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x7B5280EBA9840C72(sParam0);
}

int func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = func_120(iParam0);
	if (iVar0 == -1)
	{
		func_118(iParam0, 1);
		return 0;
	}
	Global_1334625[iVar0 /*5*/].f_4 = 1;
	return Global_1334625[iVar0 /*5*/].f_2;
}

void func_118(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_120(iParam0) != -1)
	{
		return;
	}
	if (Global_1334788)
	{
		if (iParam0 == Global_1334788.f_1)
		{
			return;
		}
	}
	if (func_119(iParam0))
	{
		return;
	}
	if (Global_1334826 >= 32)
	{
		return;
	}
	Global_1334793[Global_1334826] = iParam0;
	Global_1334826++;
	if (bParam1)
	{
	}
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1334826)
	{
		if (Global_1334793[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1334786 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1334786)
	{
		if (Global_1334625[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA0A9668F158129A2(Global_1334625[iVar0 /*5*/].f_2) && unk_0x7085228842B13A67(Global_1334625[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_121(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_121(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1334786)
	{
		return;
	}
	if (unk_0xA0A9668F158129A2(Global_1334625[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1334625[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xDB4EACD4AD0A5D6B(Global_1334625[iParam0 /*5*/].f_2), 64);
			unk_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x96B1361D9B24C2FF(Global_1334625[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1334786)
	{
		Global_1334625[iVar32 /*5*/] = { Global_1334625[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_122(&(Global_1334625[iVar32 /*5*/]));
	Global_1334786 = (Global_1334786 - 1);
}

void func_122(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_123();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x10FAB35428CCC9D7())
	{
		uParam0->f_3 = unk_0x7A5487FE9FAA6B48();
	}
}

int func_123()
{
	return -1;
}

void func_124()
{
	Global_1321257.f_40.f_9 = 4;
}

int func_125(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_124();
	bVar0 = false;
	return func_97(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_126(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_127(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_127(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_123();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6D0DE6A7B5DA71F8(iVar0);
		iVar1 = func_117(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xCB2CF5148012C8D0(unk_0x7A5487FE9FAA6B48(), Global_1321257.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16753 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_116(sParam5, bParam6, &iVar3);
	uVar5 = func_114(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xCA042B6957743895(sParam8))
	{
		iVar6++;
		if (!unk_0xCA042B6957743895(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x0C515FAB3FF9EA92(sVar4, " "))
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
		if (unk_0xA921AA820C25702F(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xA921AA820C25702F(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xCA042B6957743895(sVar2))
	{
		bVar12 = func_135(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_129(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xA921AA820C25702F(iParam4, 0))
	{
		func_100();
	}
	func_128();
	func_99();
	func_98();
	return 1;
}

void func_128()
{
	Global_1321257.f_40.f_9 = 3;
}

int func_129(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xE80492A9AC099A93(&Global_2263, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_130(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			Global_2873[3 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			unk_0x933D6A9EEC1BACD0(&Global_2263, 1);
			unk_0x933D6A9EEC1BACD0(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_130(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x0C515FAB3FF9EA92(sParam14, sParam15))
	{
	}
	func_78();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
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
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (unk_0xC024869A53992F34(unk_0xD80958FC74E988A6()))
			{
				return 0;
			}
		}
		if (Global_97173.f_12272[Global_14393 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x2C83A9DA6BFFC4F9(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x2C83A9DA6BFFC4F9(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_134() == 0)
	{
		func_132();
		return 0;
	}
	func_131(Global_16759);
	StringCopy(&(Global_97173.f_12362[Global_16759 /*104*/]), sParam1, 64);
	Global_97173.f_12362[Global_16759 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_97173.f_12362[Global_16759 /*104*/].f_24 = iParam2;
	}
	Global_97173.f_12362[Global_16759 /*104*/].f_25 = iParam7;
	Global_97173.f_12362[Global_16759 /*104*/].f_26 = uParam8;
	Global_97173.f_12362[Global_16759 /*104*/].f_29 = uParam9;
	Global_97173.f_12362[Global_16759 /*104*/].f_30 = uParam12;
	Global_97173.f_12362[Global_16759 /*104*/].f_31 = uParam11;
	Global_97173.f_12362[Global_16759 /*104*/].f_28 = 0;
	Global_97173.f_12362[Global_16759 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_97173.f_12362[Global_16759 /*104*/].f_33), sParam4, 64);
	Global_97173.f_12362[Global_16759 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_97173.f_12362[Global_16759 /*104*/].f_50), sParam5, 64);
	Global_97173.f_12362[Global_16759 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_97173.f_12362[Global_16759 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_97173.f_12362[Global_16759 /*104*/].f_83), sParam15, 64);
	if (unk_0xA921AA820C25702F(Global_2263, 10))
	{
		Global_97173.f_12362[Global_16759 /*104*/].f_99[0] = 1;
		Global_97173.f_12362[Global_16759 /*104*/].f_99[1] = 1;
		Global_97173.f_12362[Global_16759 /*104*/].f_99[2] = 1;
		Global_2969 = 4;
		func_108(0);
		func_108(2);
		func_108(1);
	}
	else
	{
		func_78();
		switch (iParam16)
		{
			case 3:
				Global_97173.f_12362[Global_16759 /*104*/].f_99[Global_14393] = 1;
				break;
			
			case 0:
				Global_97173.f_12362[Global_16759 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_97173.f_12362[Global_16759 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_97173.f_12362[Global_16759 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14393)
			{
				case 0:
					func_108(0);
					Global_2969 = 0;
					break;
				
				case 1:
					func_108(1);
					Global_2969 = 1;
					break;
				
				case 2:
					func_108(2);
					Global_2969 = 2;
					break;
				
				case 3:
					func_108(3);
					Global_2969 = 3;
					break;
				
				default:
					Global_2969 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xA921AA820C25702F(Global_2263, 10))
		{
			Global_97173.f_12272[0 /*20*/].f_17 = 1;
			Global_97173.f_12272[1 /*20*/].f_17 = 1;
			Global_97173.f_12272[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_97173.f_12272[Global_14393 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_97173.f_12272[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_97173.f_12272[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_97173.f_12272[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16761[Global_16759] = 0;
	if (bParam10)
	{
		func_78();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_107())
			{
				unk_0x67C540AA08E4A6F5(-1, "Text_Arrive_Tone", &Global_14382, true);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			func_106(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_103(1);
			func_106(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_131(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x494E97C2EF27C470();
	iVar1 = unk_0x13D2B8ADD79640F2();
	iVar2 = unk_0x25223CA6B4D20B7F();
	iVar3 = unk_0x3D10BC92A4DB1D35();
	uVar4 = unk_0xBBC72712E80257A1() + 1;
	iVar5 = unk_0x961777E64BDAF717();
	Global_97173.f_12362[iParam0 /*104*/].f_18 = iVar0;
	Global_97173.f_12362[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_97173.f_12362[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_97173.f_12362[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_97173.f_12362[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_97173.f_12362[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_132()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68067)
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
	Global_16759 = 34;
	Global_97173.f_12362[Global_16759 /*104*/].f_18 = -1;
	Global_97173.f_12362[Global_16759 /*104*/].f_18.f_1 = 0;
	Global_97173.f_12362[Global_16759 /*104*/].f_18.f_2 = 0;
	Global_97173.f_12362[Global_16759 /*104*/].f_18.f_3 = 0;
	Global_97173.f_12362[Global_16759 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_133(Global_97173.f_12362[iVar2 /*104*/].f_18, Global_97173.f_12362[Global_16759 /*104*/].f_18))
		{
			Global_16759 = iVar2;
		}
		iVar2++;
	}
	Global_97173.f_12362[Global_16759 /*104*/].f_24 = 1;
}

int func_133(struct<6> Param0, struct<6> Param6)
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

int func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68067)
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
		if (Global_97173.f_12362[iVar2 /*104*/].f_24 == 0)
		{
			Global_16759 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16759 = 34;
	Global_97173.f_12362[Global_16759 /*104*/].f_18 = -1;
	Global_97173.f_12362[Global_16759 /*104*/].f_18.f_1 = 0;
	Global_97173.f_12362[Global_16759 /*104*/].f_18.f_2 = 0;
	Global_97173.f_12362[Global_16759 /*104*/].f_18.f_3 = 0;
	Global_97173.f_12362[Global_16759 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_97173.f_12362[iVar2 /*104*/].f_24 == 0 || Global_97173.f_12362[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_133(Global_97173.f_12362[iVar2 /*104*/].f_18, Global_97173.f_12362[Global_16759 /*104*/].f_18))
			{
				Global_16759 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16759 == 34)
	{
		return 0;
	}
	Global_97173.f_12362[Global_16759 /*104*/].f_99[0] = 0;
	Global_97173.f_12362[Global_16759 /*104*/].f_99[1] = 0;
	Global_97173.f_12362[Global_16759 /*104*/].f_99[2] = 0;
	return 1;
}

int func_135(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0xE80492A9AC099A93(&Global_2263, 10);
	iVar0 = 3;
	if (func_130(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2970 = iParam10;
			Global_2873[3 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			StringCopy(&Global_2951, sParam5, 64);
			unk_0x933D6A9EEC1BACD0(&Global_2263, 1);
			unk_0x933D6A9EEC1BACD0(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_136(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
	}
	if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
	{
		return 0;
	}
	func_128();
	bVar0 = true;
	if (func_127(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_96(120000);
		return 1;
	}
	return 0;
}

int func_137(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xA921AA820C25702F(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xA921AA820C25702F(iParam4, 4))
	{
		bVar0 = func_153(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_143(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xA921AA820C25702F(iParam4, 3))
		{
			func_142(1);
		}
		if (unk_0xA921AA820C25702F(iParam4, 5))
		{
			func_141(1);
		}
		func_140();
		func_99();
		func_139();
		func_138();
		return 1;
	}
	return 0;
}

void func_138()
{
	Global_2452477 = 0;
}

void func_139()
{
	Global_1321257.f_57 = 1;
	Global_1321257.f_57.f_1 = 0;
}

void func_140()
{
	Global_1321257.f_40.f_9 = 1;
}

void func_141(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2265, 0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2265, 0);
	}
}

void func_142(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 20);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 20);
	}
}

int func_143(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_152(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	Global_2621441 = 0;
	return func_144(sParam3, iParam4, bParam7);
}

int func_144(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD79DEEFB53455EBA(false);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_151();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_150(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_149();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_78();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_148())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
				}
			}
			if (func_147())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_146();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_145();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_151();
	}
	return 0;
}

void func_145()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_146()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_147()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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

void func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_150(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_151()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_152(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

int func_153(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_152(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15740 = 1;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	Global_2621441 = 0;
	return func_144(sParam3, iParam4, bParam7);
}

int func_154(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
	}
	if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
	{
		return 0;
	}
	if (func_156(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_155();
		func_140();
		func_99();
		func_139();
		func_138();
		return 1;
	}
	return 0;
}

void func_155()
{
	Global_16710 = 0;
}

bool func_156(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_152(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 1;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 1;
	Global_15746 = 0;
	StringCopy(&Global_15840, sParam5, 24);
	Global_2621441 = 0;
	return func_144(sParam3, iParam4, bParam8);
}

int func_157(var uParam0, char* sParam1, char* sParam2)
{
	if (func_159(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_158();
		func_99();
		func_139();
		return 1;
	}
	return 0;
}

void func_158()
{
	Global_1321257.f_40.f_9 = 2;
}

bool func_159(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_152(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_144(sParam2, iParam3, 0);
}

void func_160()
{
	Global_1321257.f_55 = Global_1321257.f_40.f_1;
	Global_1321257.f_55.f_1 = Global_1321257.f_40.f_10;
}

void func_161()
{
	Global_1321257.f_40 = 1;
}

bool func_162()
{
	return Global_1321257.f_40 == 1;
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	if (!func_164(iParam0))
	{
		return 0;
	}
	if (Global_1321257.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1321257.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_164(int iParam0)
{
	if (!func_165())
	{
		return 0;
	}
	if (!Global_1321257.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_165()
{
	if (Global_1321257.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_166(int iParam0)
{
	if (func_169())
	{
		return 0;
	}
	if (func_73())
	{
		return 0;
	}
	if (func_75(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1681085 || func_168())
	{
		return 0;
	}
	if (!unk_0xA921AA820C25702F(iParam0, 6))
	{
		if (func_167())
		{
			return 0;
		}
	}
	return 1;
}

bool func_167()
{
	return unk_0xCB2CF5148012C8D0(unk_0x7A5487FE9FAA6B48(), Global_1333417);
}

int func_168()
{
	if (Global_2534343.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_169()
{
	return func_147();
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	if (!func_73())
	{
		return 0;
	}
	return func_163(iParam0, iParam1, iParam2);
}

int func_171(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0xD24D37CC275948CC(&cVar0);
}

bool func_172()
{
	return Global_2450664.f_1;
}

int func_173()
{
	if (Global_1321445.f_2)
	{
		return 1;
	}
	return func_174();
}

bool func_174()
{
	return func_169();
}

void func_175(int iParam0)
{
	Global_2452828.f_1058 = iParam0;
}

int func_176()
{
	if (func_177("HLP_TAXI3"))
	{
		return 1;
	}
	if (func_177("HLP_SOC1"))
	{
		return 1;
	}
	if (func_177("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

bool func_177(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_178(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_179(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_180(var uParam0)
{
	return uParam0->f_1;
}

void func_181(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116, 8))
		{
			unk_0x933D6A9EEC1BACD0(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 8);
		}
	}
	else if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116, 8))
	{
		unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 8);
	}
}

bool func_182()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116, 8);
}

void func_183()
{
	unk_0xD4E8E24955024033(800);
	if (!bLocal_752 || bLocal_753)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
		}
	}
	if (!bLocal_753)
	{
		Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 = 0;
	}
	else
	{
		Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 = 3;
	}
}

void func_184()
{
	if (func_188(&Local_87, &(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_4)))
	{
		Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_2 = -1;
	}
	func_185(&Local_87);
}

void func_185(int* iParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xB0034A223497FFCB();
	switch (iLocal_748)
	{
		case 0:
			if (unk_0xA921AA820C25702F(*iParam0, 18))
			{
				if (!func_180(&uLocal_754))
				{
					func_19(&uLocal_754, 0, 0);
				}
				if (!bVar0)
				{
					if (!unk_0x4D79439A6B55AC67())
					{
						func_69("HLP_XP1", 9000);
						func_178(&uLocal_754);
						func_19(&uLocal_754, 0, 0);
						iLocal_748++;
					}
				}
				else if (func_179(&uLocal_754, 5000, 0))
				{
					iLocal_748++;
					func_178(&uLocal_754);
					func_19(&uLocal_754, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!unk_0x4D79439A6B55AC67())
				{
					func_69("HLP_XP2", 9000);
					func_178(&uLocal_754);
					func_19(&uLocal_754, 0, 0);
					iLocal_748++;
				}
			}
			else if (func_179(&uLocal_754, 5000, 0))
			{
				iLocal_748++;
				func_178(&uLocal_754);
				func_19(&uLocal_754, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!unk_0x4D79439A6B55AC67())
				{
					func_69("HLP_RNK1", 9000);
					func_187(1);
					Global_2446207.f_1683 = 1;
					func_186(1, 0, -1);
					func_178(&uLocal_754);
					func_19(&uLocal_754, 0, 0);
					iLocal_748++;
				}
			}
			else if (func_179(&uLocal_754, 5000, 0))
			{
				iLocal_748++;
				func_178(&uLocal_754);
				func_19(&uLocal_754, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!unk_0x4D79439A6B55AC67())
				{
					func_175(0);
					if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
					{
						func_69("HLP_CASHXBX", 9000);
					}
					else if (unk_0xCCA1072C29D096C2() || unk_0xA72BC0B675B1519E())
					{
						func_69("HLP_CASHPSN", 9000);
					}
					else
					{
						func_69("HLP_CASHGEN", 9000);
					}
					func_178(&uLocal_754);
					func_19(&uLocal_754, 0, 0);
					iLocal_748 = 99;
				}
			}
			else if (func_179(&uLocal_754, 5000, 0))
			{
				iLocal_748 = 99;
				func_178(&uLocal_754);
				func_19(&uLocal_754, 0, 0);
			}
			break;
		
		case 99:
			if (!unk_0xA921AA820C25702F(iLocal_745, 2))
			{
				unk_0x933D6A9EEC1BACD0(&iLocal_745, 2);
			}
			break;
	}
}

void func_186(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1327591.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x933D6A9EEC1BACD0(&(Global_1327591.f_947), iParam0);
			}
			else
			{
				unk_0xE80492A9AC099A93(&(Global_1327591.f_947), iParam0);
			}
			break;
	}
}

void func_187(int iParam0)
{
	Global_2446207.f_4361 = iParam0;
}

int func_188(int* iParam0, int* iParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	bool bVar8;
	
	if (!unk_0xA921AA820C25702F(*iParam0, 13))
	{
		if (unk_0xA7A932170592B50E(unk_0x5234F9F10919EABA()))
		{
			Var5 = { unk_0xBAC038F7459AE5AE(unk_0x5234F9F10919EABA()) };
			if ((Var5.f_0 != 0f || Var5.f_1 != 0f) || Var5.f_2 != 0f)
			{
				unk_0xBB7454BAFF08FE25(Var5, 0f, 0f, 0f);
				if (!unk_0xA921AA820C25702F(*iParam0, 14))
				{
					unk_0x933D6A9EEC1BACD0(iParam0, 14);
				}
			}
		}
	}
	else if (unk_0xA921AA820C25702F(*iParam0, 14))
	{
		unk_0x31B73D1EA9F01DA2();
		unk_0xE80492A9AC099A93(iParam0, 14);
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 337, true);
	}
	func_336(iParam0);
	unk_0xA76359FC80B2438E(1f);
	func_330(iParam0);
	func_329(unk_0x4F8644AF03D0E0D6());
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		switch (iParam0->f_6)
		{
			case 0:
				iParam0->f_292 = 1;
				iParam0->f_293 = 0;
				iParam0->f_295 = 0;
				iParam0->f_294 = 0;
				if (unk_0x2C83A9DA6BFFC4F9(joaat("fm_intro")) > 0)
				{
					iParam0->f_295 = 1;
					iParam0->f_294 = 1;
				}
				else if (unk_0x2C83A9DA6BFFC4F9(joaat("freemode")) > 0)
				{
					iParam0->f_295 = 1;
				}
				if (!Global_2446207.f_1682)
				{
					Global_2446207.f_1682 = 1;
					unk_0xBABEC9E69A91C57B(false);
				}
				if (!func_182())
				{
					func_181(1);
				}
				if (!unk_0xB16FCE9DDC7BA182() && !unk_0x797AC7CB535BA28F())
				{
					unk_0x891B5B39AC6302AF(800);
				}
				if (!func_180(&(iParam0->f_15)))
				{
					func_19(&(iParam0->f_15), 0, 0);
				}
				unk_0x1D132D614DD86811(&Global_1681488);
				Global_1681489 = 0;
				Global_1681491 = 0;
				Global_1681490 = 0;
				Global_1681492 = 0;
				iParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0xB16FCE9DDC7BA182())
				{
					*iParam0 = 0;
					iParam0->f_4 = 0;
					iParam0->f_5 = 0;
					func_321(0, 0, 0, 1, 1, 1, 0);
					unk_0xD1065D68947E7B6E(true, false);
					func_357(1);
					unk_0x9E6542F0CE8E70A3(true);
					unk_0xA43D5C6FE51ADBEF("EXTRASUNNY");
					unk_0xE679E3E06E363892(19, 0, 0);
					unk_0xFC18DB55AE19E046(true);
					func_320(0);
					unk_0x717CD6E6FAEBBEDC(false);
					func_315(1, 0);
					func_307(1, 1);
					if (unk_0x2C83A9DA6BFFC4F9(joaat("fm_intro")) < 1 || !func_306())
					{
						if (iParam0->f_292)
						{
							if (func_305() == 0)
							{
								unk_0x3D245789CE12982C("GTAO_INTRO_MALE");
								unk_0x20C6C7E4EB082A7F(true);
							}
						}
					}
					func_298(14, 0);
					iParam0->f_6 = 1;
					*iParam0 = 0;
					unk_0xE80492A9AC099A93(iParam0, 0);
					unk_0xE80492A9AC099A93(iParam0, 1);
					unk_0xE80492A9AC099A93(iParam0, 2);
					unk_0xE80492A9AC099A93(iParam0, 9);
					unk_0x933D6A9EEC1BACD0(iParam0, 7);
					iParam0->f_122 = unk_0x1B5C85C612E5256E(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, false, true, true, true);
				}
				break;
			
			case 1:
				unk_0x963D27A58DF860AC(joaat("frogger"));
				if (unk_0x98A4EB5D89A0C952(joaat("frogger")))
				{
					if (!iParam0->f_292 || unk_0xD0263801A4C5B0BB())
					{
						if (func_295())
						{
							unk_0x4E52E752C76E7E7A(0);
							func_290(1, 1);
							unk_0x22A249A53034450A(false);
							unk_0x8DFCED7A656F8802(true);
							if (!func_174())
							{
								func_289();
							}
							func_187(0);
							func_288();
							unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Global_1312553, true, false, false, true);
							unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), true);
							unk_0x1A9205C1B9EE827F(unk_0xD80958FC74E988A6(), false, false);
							unk_0xAA5F02DB48D704B9(0);
							if (unk_0xA6DB27D19ECBB7DA(unk_0xDCD4EC3F419D02FA()))
							{
								unk_0xD38744167B2FA257(unk_0xDCD4EC3F419D02FA(), 0f);
							}
							unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
							iParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0xD9D2CFFF49FAB35F())
				{
					if (!unk_0xA921AA820C25702F(*iParam0, 4))
					{
						if (func_287() == 65 || func_287() == 66)
						{
							unk_0x31B73D1EA9F01DA2();
							unk_0x212A8D0D2BABFAC2(754.2219f, 1226.831f, 356.5081f, func_286(-14.367f, 0f, 157.3524f), 100f, 0);
							func_178(&(iParam0->f_17));
							func_19(&(iParam0->f_17), 0, 0);
							unk_0x933D6A9EEC1BACD0(iParam0, 4);
						}
					}
					else if (unk_0x1E5185B72EF5158A("FM_INTRO_START") && (unk_0x01B8247A7A8B9AD1() || func_179(&(iParam0->f_17), 5000, 0)))
					{
						if (!unk_0xA921AA820C25702F(*iParam0, 24))
						{
							if (unk_0xA921AA820C25702F(*iParam0, 7))
							{
								unk_0x706D57B0F50DA710("FM_INTRO_START");
								unk_0x933D6A9EEC1BACD0(iParam0, 24);
								unk_0x933D6A9EEC1BACD0(iParam0, 21);
							}
						}
						else if (unk_0xE7A0D23DC414507B() > 0)
						{
							unk_0xC197616D221FF4A4();
							unk_0xE3E2C1B4C59DBC77(6);
							if (!unk_0xA7A932170592B50E(iParam0->f_7))
							{
								iParam0->f_7 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", false);
								unk_0x026FB97D0A425F84(iParam0->f_7, true);
							}
							unk_0xBFD8727AEA3CCEBA(iParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							unk_0xBFD8727AEA3CCEBA(iParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							unk_0x6A25241C340D3822(iParam0->f_7, "HAND_SHAKE", 0.15f);
							unk_0x07E5B515DB0636FC(true, false, 3000, true, true, 0);
							func_285(iParam0);
							unk_0x933D6A9EEC1BACD0(iParam0, 11);
							if (iParam0->f_292)
							{
								unk_0xBEB2D9A1D9A8F55A(9, 9, 9, 9);
								unk_0x9BADDC94EF83B823();
							}
							unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
							if (unk_0xB16FCE9DDC7BA182())
							{
								unk_0xD4E8E24955024033(800);
							}
							iParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_284(iParam0, 6);
				func_283(iParam0);
				if (func_282(iParam0, 6, 0))
				{
					unk_0x8DFCED7A656F8802(true);
					iParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!unk_0xA921AA820C25702F(*iParam0, 2))
				{
					unk_0x8DFCED7A656F8802(true);
					func_69("FMIC_INTRO2", -1);
					unk_0x933D6A9EEC1BACD0(iParam0, 2);
				}
				unk_0xBFD8727AEA3CCEBA(iParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				unk_0xBFD8727AEA3CCEBA(iParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				unk_0xBEB2D9A1D9A8F55A(9, 13, 9, 13);
				iParam0->f_6 = 8;
				break;
			
			case 8:
				func_284(iParam0, 8);
				if (func_283(iParam0))
				{
					func_281(iParam0);
					if (func_282(iParam0, 8, 0))
					{
						iParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!unk_0xA921AA820C25702F(*iParam0, 10))
				{
					func_280();
					unk_0x933D6A9EEC1BACD0(iParam0, 10);
				}
				unk_0xBFD8727AEA3CCEBA(iParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				unk_0xBFD8727AEA3CCEBA(iParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (unk_0x4C241E39B23DF959(iParam0->f_48, false))
				{
					unk_0x8879EE09268305D5(iParam0->f_48);
					unk_0xEA1C610A04DB6BBB(iParam0->f_48, true);
					unk_0xA178472EBB8AE60D(iParam0->f_48);
				}
				iParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0x4C241E39B23DF959(iParam0->f_48, false))
				{
					unk_0xA178472EBB8AE60D(iParam0->f_48);
				}
				func_284(iParam0, 10);
				if (func_279())
				{
					if (func_278(iParam0))
					{
						if (func_281(iParam0))
						{
							if (func_282(iParam0, 10, 0))
							{
								if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
								{
									unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -2870.804f, 81.4979f, 13.1957f, true, false, false, true);
									unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
								}
								fVar0 = 5000f;
								if (unk_0x4C241E39B23DF959(iParam0->f_92[0], false))
								{
									unk_0x3F878F92B3A7A071(iParam0->f_92[0], 100, "FM_Intro_uber", true);
									unk_0x9438F7AD68771A20(iParam0->f_92[0], fVar0);
								}
								if (unk_0x4C241E39B23DF959(iParam0->f_92[1], false))
								{
									unk_0x3F878F92B3A7A071(iParam0->f_92[1], 101, "FM_Intro_uber", true);
									unk_0x9438F7AD68771A20(iParam0->f_92[1], fVar0);
								}
								if (unk_0x4C241E39B23DF959(iParam0->f_92[2], false))
								{
									unk_0x3F878F92B3A7A071(iParam0->f_92[2], 102, "FM_Intro_uber", true);
									unk_0x9438F7AD68771A20(iParam0->f_92[2], fVar0);
								}
								if (unk_0x4C241E39B23DF959(iParam0->f_92[3], false))
								{
									unk_0x3F878F92B3A7A071(iParam0->f_92[3], 103, "FM_Intro_uber", true);
									unk_0x9438F7AD68771A20(iParam0->f_92[3], fVar0);
								}
								if (unk_0x4C241E39B23DF959(iParam0->f_92[4], false))
								{
									unk_0x3F878F92B3A7A071(iParam0->f_92[4], 104, "FM_Intro_uber", true);
									unk_0x9438F7AD68771A20(iParam0->f_92[4], fVar0);
								}
								unk_0x933D6A9EEC1BACD0(iParam0, 15);
								unk_0xD4E8E24955024033(800);
								iParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					unk_0xE679E3E06E363892(16, 0, 0);
					func_277(iParam0);
					func_276(iParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					unk_0xBDECF64367884AC3(iParam0->f_7, true);
					unk_0xA2FABBE87F4BAD82(iParam0->f_7);
					unk_0x865908C81A2C22E9(iParam0->f_7, false);
					unk_0x013A80FC08F6E4F2("MP_INTRO_RACE_SCENE");
					unk_0xBEB2D9A1D9A8F55A(9, 12, 9, 12);
					func_274(iParam0, 14);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				if (!unk_0xA921AA820C25702F(*iParam0, 5))
				{
					func_69("FMIC_RACE1", -1);
					unk_0x933D6A9EEC1BACD0(iParam0, 5);
				}
				func_284(iParam0, 14);
				if (func_282(iParam0, 14, 0))
				{
					iParam0->f_32 = unk_0x05B7A89BD78797FC(234.0331f, -1005.203f, -98.4626f, "v_garagel");
					if (iParam0->f_32 != 0)
					{
						unk_0x2CA429C029CCF247(iParam0->f_32);
					}
					func_273(iParam0, 23539f, 0);
					unk_0xE679E3E06E363892(16, 0, 0);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_274(iParam0, 15);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				if (!unk_0xA921AA820C25702F(iParam0->f_3, 0))
				{
					func_262(iParam0);
				}
				else if (func_261(iParam0) && func_255(iParam0))
				{
					func_253(iParam0);
				}
				func_284(iParam0, 15);
				if (func_282(iParam0, 15, 0))
				{
					func_273(iParam0, 28833.33f, 75f);
					unk_0xE679E3E06E363892(16, 0, 0);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_252(iParam0, "race_camera_3a", "mp_intro_seq@", iParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_274(iParam0, 16);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				if (!unk_0xA921AA820C25702F(iParam0->f_3, 0))
				{
					func_262(iParam0);
				}
				else if (func_261(iParam0) && func_255(iParam0))
				{
					func_253(iParam0);
				}
				func_284(iParam0, 16);
				if (func_282(iParam0, 16, 0))
				{
					func_273(iParam0, 29700f, 0);
					unk_0xE679E3E06E363892(16, 0, 0);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0xB6C49F8A5E295A5D(iParam0->f_9, 0.7f);
					func_274(iParam0, 17);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				if (!unk_0xA921AA820C25702F(*iParam0, 6))
				{
					unk_0x933D6A9EEC1BACD0(iParam0, 6);
					func_69("FMIC_RACE2", -1);
				}
				if (!unk_0xA921AA820C25702F(iParam0->f_3, 0))
				{
					func_262(iParam0);
				}
				else if (func_261(iParam0) && func_255(iParam0))
				{
					func_253(iParam0);
				}
				func_284(iParam0, 17);
				if (func_282(iParam0, 17, 0))
				{
					func_273(iParam0, 36450f, 0);
					unk_0xE679E3E06E363892(16, 0, 0);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_274(iParam0, 18);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				if (!unk_0xA921AA820C25702F(iParam0->f_3, 0))
				{
					func_262(iParam0);
				}
				else if (func_261(iParam0) && func_255(iParam0))
				{
					func_253(iParam0);
				}
				func_284(iParam0, 18);
				if (func_251() && func_282(iParam0, 18, 0))
				{
					func_273(iParam0, 43650f, 0);
					unk_0xE679E3E06E363892(16, 0, 0);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					if (unk_0x7239B21A38F536BA(iParam0->f_92[2]))
					{
						unk_0xEA386986E786A54F(&(iParam0->f_92[2]));
					}
					if (unk_0x7239B21A38F536BA(iParam0->f_92[3]))
					{
						unk_0xEA386986E786A54F(&(iParam0->f_92[3]));
					}
					if (unk_0x7239B21A38F536BA(iParam0->f_92[4]))
					{
						unk_0xEA386986E786A54F(&(iParam0->f_92[4]));
					}
					func_276(iParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_274(iParam0, 19);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				if (!unk_0xA921AA820C25702F(iParam0->f_3, 0))
				{
					func_262(iParam0);
				}
				else
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_3, 6))
					{
						if (iParam0->f_32 != 0)
						{
							if (unk_0x6726BDCCC1932F0E(iParam0->f_32))
							{
								if (!unk_0x5F9532F3B5CC2551(iParam0->f_91))
								{
									unk_0x52923C4710DD9907(iParam0->f_91, iParam0->f_32, unk_0xD24D37CC275948CC("GtaMloRoom001"));
								}
								unk_0x399D2D3B33F1B8EB("SE_MP_GARAGE_L_RADIO", false);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!unk_0x5F9532F3B5CC2551(iParam0->f_49[iVar4]))
									{
										unk_0x52923C4710DD9907(iParam0->f_49[iVar4], iParam0->f_32, unk_0xD24D37CC275948CC("GtaMloRoom001"));
									}
									iVar4++;
								}
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 6);
							}
						}
					}
					if (func_261(iParam0) && func_255(iParam0))
					{
						func_253(iParam0);
					}
				}
				func_250(iParam0);
				func_249(iParam0);
				func_284(iParam0, 19);
				if (func_282(iParam0, 19, 0) && unk_0xA921AA820C25702F(iParam0->f_3, 0))
				{
					if (unk_0xA921AA820C25702F(*iParam0, 12))
					{
						unk_0xE80492A9AC099A93(iParam0, 12);
					}
					iParam0->f_6 = 22;
				}
				else if (func_282(iParam0, 19, -4968))
				{
					if (!unk_0xA921AA820C25702F(*iParam0, 12))
					{
						unk_0x8DFCED7A656F8802(true);
						unk_0x933D6A9EEC1BACD0(iParam0, 12);
					}
				}
				else if (func_282(iParam0, 19, -5618))
				{
					if (!unk_0xA921AA820C25702F(*iParam0, 30))
					{
						unk_0x2206BF9A37B7F724("MP_intro_logo", 0, false);
						unk_0x933D6A9EEC1BACD0(iParam0, 30);
					}
				}
				break;
			
			case 22:
				func_250(iParam0);
				func_249(iParam0);
				if (unk_0xA921AA820C25702F(iParam0->f_3, 0))
				{
					if (!unk_0xA7A932170592B50E(iParam0->f_7))
					{
						iParam0->f_7 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", false);
					}
					unk_0x026FB97D0A425F84(iParam0->f_7, true);
					unk_0xBFD8727AEA3CCEBA(iParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					unk_0xBFD8727AEA3CCEBA(iParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					unk_0x6A25241C340D3822(iParam0->f_7, "HAND_SHAKE", 0.1f);
					unk_0x920D853F3E17F1DA(iParam0->f_32, unk_0xD24D37CC275948CC("GtaMloRoom001"));
					unk_0x399D2D3B33F1B8EB("SE_MP_GARAGE_L_RADIO", false);
					unk_0xE3E2C1B4C59DBC77(0);
					unk_0x734292F4F0ABF6D0(iParam0->f_10, 0f);
					if (!unk_0x84A2DD9AC37C35C1(iParam0->f_91))
					{
						unk_0x2208438012482A1A(iParam0->f_91, false, false);
					}
					if (unk_0xB65B60556E2A9225("MP_INTRO_RACE_SCENE"))
					{
						unk_0xDFE8422B3B94E688("MP_INTRO_RACE_SCENE");
					}
					unk_0xBEB2D9A1D9A8F55A(9, 13, 9, 13);
					func_248(iParam0);
					func_247();
					func_69("FMIC_GAR", -1);
					iParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_250(iParam0);
				func_249(iParam0);
				func_284(iParam0, 23);
				if (func_261(iParam0) && func_255(iParam0))
				{
					func_253(iParam0);
				}
				if (func_282(iParam0, 23, 0))
				{
					unk_0xBFD8727AEA3CCEBA(iParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					unk_0xBFD8727AEA3CCEBA(iParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					unk_0x734292F4F0ABF6D0(iParam0->f_10, 0f);
					if (!unk_0x84A2DD9AC37C35C1(iParam0->f_91))
					{
						unk_0x2208438012482A1A(iParam0->f_91, false, false);
					}
					func_245(iParam0, 0);
					func_245(iParam0, 1);
					func_245(iParam0, 5);
					func_245(iParam0, 6);
					iParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_250(iParam0);
				func_249(iParam0);
				func_284(iParam0, 24);
				if (func_261(iParam0) && func_255(iParam0))
				{
					func_253(iParam0);
				}
				if (func_282(iParam0, 24, 0))
				{
					iParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_250(iParam0);
				func_249(iParam0);
				unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -1148.286f, -1639.737f, 5.106698f, true, false, false, true);
				unk_0x933D6A9EEC1BACD0(iParam0, 13);
				unk_0xBFD8727AEA3CCEBA(iParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				unk_0xBFD8727AEA3CCEBA(iParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				unk_0xE679E3E06E363892(18, 0, 0);
				func_245(iParam0, 2);
				func_245(iParam0, 7);
				unk_0xE532F5D78798DAAB(func_244());
				if (unk_0x7239B21A38F536BA(iParam0->f_91))
				{
					unk_0x9614299DCB53E54B(&(iParam0->f_91));
				}
				unk_0x933D6A9EEC1BACD0(iParam0, 29);
				iParam0->f_6 = 28;
				break;
			
			case 28:
				func_250(iParam0);
				func_249(iParam0);
				if (!unk_0xA921AA820C25702F(*iParam0, 8))
				{
					unk_0x933D6A9EEC1BACD0(iParam0, 8);
				}
				if (func_261(iParam0) && func_255(iParam0))
				{
					func_253(iParam0);
				}
				func_284(iParam0, 28);
				if ((unk_0x1E5185B72EF5158A("FM_INTRO_DRIVE_START") && unk_0xA921AA820C25702F(iParam0->f_3, 3)) && func_282(iParam0, 28, 0))
				{
					iParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (iParam0->f_295)
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
					{
						if (func_241(iParam0))
						{
							unk_0xE40C1C56DF95C2E8(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							unk_0xE40C1C56DF95C2E8(unk_0xD80958FC74E988A6(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0xE40C1C56DF95C2E8(unk_0xD80958FC74E988A6(), "MP_Male_Character", 0, 0, 0);
							unk_0xE40C1C56DF95C2E8(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_241(iParam0))
				{
					unk_0xE40C1C56DF95C2E8(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					unk_0xE40C1C56DF95C2E8(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!unk_0x5F9532F3B5CC2551(iParam0->f_35))
				{
					unk_0xE40C1C56DF95C2E8(iParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x5F9532F3B5CC2551(iParam0->f_34))
				{
					unk_0xE40C1C56DF95C2E8(iParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0x5F9532F3B5CC2551(iParam0->f_33))
				{
					unk_0xEA1C610A04DB6BBB(iParam0->f_33, true);
					unk_0xE40C1C56DF95C2E8(iParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_239(iParam0);
				unk_0xFC4842A34657BFCB("CONTRAILS", 0f);
				unk_0xBEB2D9A1D9A8F55A(9, 9, 9, 9);
				func_69("FMIC_TENN", -1);
				unk_0x186D5CB5E7B0FF7B(4);
				func_232(1, 1, 1, 0);
				iParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0xD3C2E180A40F031E())
				{
					if (iParam0->f_32 != 0)
					{
						unk_0x261CCE7EED010641(iParam0->f_32);
					}
					func_231(iParam0);
					if (iParam0->f_293)
					{
						iParam0->f_26 = (unk_0x9CD27B0045628463() - iParam0->f_13);
					}
					else
					{
						iParam0->f_26 = 52618;
						iParam0->f_27 = 52618;
					}
					iParam0->f_6 = 31;
				}
				break;
			
			case 31:
				if (iParam0->f_295)
				{
					if (func_241(iParam0))
					{
						if (unk_0x4C6A6451C79E4662("MP_Female_Character", 0))
						{
							if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
							{
								if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
								{
									if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
									{
										unk_0xC20E50AA46D09CA8(unk_0xD80958FC74E988A6(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (unk_0x4C6A6451C79E4662("MP_Male_Character", 0))
					{
						if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
						{
							if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
							{
								if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
								{
									unk_0xC20E50AA46D09CA8(unk_0xD80958FC74E988A6(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (unk_0x4C6A6451C79E4662("LAMAR", 0))
				{
					if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
					{
						if (!unk_0x84A2DD9AC37C35C1(iParam0->f_35))
						{
							if (!unk_0x997ABD671D25CA0B(iParam0->f_35, false))
							{
								unk_0xC20E50AA46D09CA8(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								unk_0x2208438012482A1A(iParam0->f_35, false, false);
							}
						}
					}
				}
				if (unk_0x4C6A6451C79E4662("MP_Lamar_Car", 0))
				{
					if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
					{
						unk_0x2497C4717C8B881E(iParam0->f_34, 1, 1);
						unk_0x06843DA7060A026B(iParam0->f_34, -1028.406f, -2732.782f, 19.5931f, true, false, false, true);
						unk_0x8E2530AA8ADA980E(iParam0->f_34, -106.11f);
						func_230(iParam0, 3099.997f);
						unk_0x781B3D62BB013EF5(iParam0->f_34, true);
					}
				}
				if (unk_0xB2CBCD0930DFB420(false))
				{
					unk_0xE679E3E06E363892(21, 0, 0);
					func_274(iParam0, 33);
					func_276(iParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (unk_0xA921AA820C25702F(*iParam0, 29))
				{
					if (unk_0x708BDD8CD795B043() || unk_0xE625BEABBAFFDAB9() > 3254)
					{
						unk_0xE80492A9AC099A93(iParam0, 29);
					}
				}
				if ((func_229(iParam0) && func_228(iParam0)) && !unk_0xD3C2E180A40F031E())
				{
					if (iParam0->f_293)
					{
						iParam0->f_28 = (unk_0x9CD27B0045628463() - iParam0->f_13);
					}
					else
					{
						iParam0->f_29 = 134784;
						if (func_241(iParam0))
						{
							iParam0->f_28 = 134784;
						}
						else
						{
							iParam0->f_28 = 134784;
						}
					}
					unk_0x62ECFCFDEE7885D6();
					unk_0x9E4CFFF989258472();
					if (unk_0xA921AA820C25702F(*iParam0, 7))
					{
						unk_0x706D57B0F50DA710("FM_INTRO_DRIVE_START");
						unk_0x933D6A9EEC1BACD0(iParam0, 21);
					}
					if (!unk_0x7C0A893088881D57())
					{
						unk_0xC7272775B4DC786E(false);
					}
					if (!unk_0xA921AA820C25702F(*iParam1, 1))
					{
						unk_0x933D6A9EEC1BACD0(iParam1, 1);
					}
					func_227(iParam0);
					func_226(iParam0);
					func_232(0, 1, 1, 0);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					unk_0xE80492A9AC099A93(iParam0, 13);
					iParam0->f_6 = 33;
				}
				else
				{
					if (iParam0->f_293)
					{
						iParam0->f_13 = (unk_0x9CD27B0045628463() - (iParam0->f_26 + unk_0xE625BEABBAFFDAB9()));
					}
					if (!unk_0xA921AA820C25702F(*iParam0, 22))
					{
						if (unk_0x583DF8E3D4AFBD98() == 1)
						{
							unk_0xE679E3E06E363892(19, 59, 0);
							unk_0x933D6A9EEC1BACD0(iParam0, 22);
						}
					}
					if (func_224(iParam0))
					{
						if (unk_0x583DF8E3D4AFBD98() == 2)
						{
							if (!unk_0xA921AA820C25702F(*iParam0, 18))
							{
								unk_0x933D6A9EEC1BACD0(iParam0, 18);
							}
							if (unk_0xE625BEABBAFFDAB9() > 23146)
							{
								if (!unk_0xA921AA820C25702F(*iParam0, 27))
								{
									unk_0x0D53A3B8DA0809D2("scr_mp_plane_landing_tyre_smoke", iParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1f, false, false, false);
									unk_0x933D6A9EEC1BACD0(iParam0, 27);
								}
								if (!unk_0xA921AA820C25702F(*iParam0, 28))
								{
									unk_0x0D53A3B8DA0809D2("scr_mp_plane_landing_tyre_smoke", iParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1f, false, false, false);
									unk_0x933D6A9EEC1BACD0(iParam0, 28);
								}
							}
							unk_0x12DED8CA53D47EA5(4950f);
							if (unk_0xA921AA820C25702F(*iParam0, 22))
							{
								unk_0xE679E3E06E363892(21, 0, 0);
								unk_0xE80492A9AC099A93(iParam0, 22);
							}
							if (unk_0xE625BEABBAFFDAB9() > 23254)
							{
								func_223(iParam0);
							}
						}
					}
					if (unk_0x583DF8E3D4AFBD98() > 2)
					{
						func_226(iParam0);
						if (!unk_0xA921AA820C25702F(*iParam0, 22))
						{
							unk_0xE679E3E06E363892(21, 0, 0);
							unk_0x933D6A9EEC1BACD0(iParam0, 22);
						}
						if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
						{
							unk_0xA6E9FDCB2C76785E(iParam0->f_34);
							unk_0x34E710FF01247C5A(iParam0->f_34, 2);
						}
					}
					iParam0->f_31 = unk_0xE625BEABBAFFDAB9();
				}
				break;
			
			case 33:
				if (func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 1))
					{
						if (func_282(iParam0, 33, -5450))
						{
							if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 1);
							}
						}
					}
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 2))
					{
						if (func_282(iParam0, 33, -5450))
						{
							if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 1))
					{
						if (func_282(iParam0, 33, -5450))
						{
							if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 1);
							}
						}
					}
				}
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					unk_0x013A80FC08F6E4F2("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 33);
				func_221(iParam0);
				if (func_282(iParam0, 33, 0))
				{
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 2))
					{
						if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 2);
						}
					}
				}
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					if (!unk_0x5F9532F3B5CC2551(iParam0->f_34))
					{
						unk_0xFEDB7D269E8C60E3(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						unk_0x5640BFF86B16E8DC(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						unk_0xB13C14F66A00D047(iParam0->f_7, 33.3479f);
						unk_0x6A25241C340D3822(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x026FB97D0A425F84(iParam0->f_7, true);
						if (!unk_0x5F9532F3B5CC2551(iParam0->f_35))
						{
							unk_0xEA1C610A04DB6BBB(iParam0->f_35, false);
						}
						if (!unk_0x5F9532F3B5CC2551(iParam0->f_36))
						{
							unk_0xEA1C610A04DB6BBB(iParam0->f_36, true);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x272E4723B56A3B96(iParam0->f_11, iParam0->f_34, unk_0xFB71170B7E76ACBA(iParam0->f_34, "seat_dside_f"));
						if (func_241(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x272E4723B56A3B96(iParam0->f_12, iParam0->f_34, unk_0xFB71170B7E76ACBA(iParam0->f_34, "seat_pside_f"));
							unk_0xEEA929141F699854(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0x734292F4F0ABF6D0(iParam0->f_11, 0.129f);
							unk_0x734292F4F0ABF6D0(iParam0->f_12, 0.129f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x272E4723B56A3B96(iParam0->f_12, iParam0->f_34, 0);
							unk_0xEEA929141F699854(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0x734292F4F0ABF6D0(iParam0->f_11, 0.145f);
							unk_0x734292F4F0ABF6D0(iParam0->f_12, 0.145f);
						}
						unk_0x2208438012482A1A(iParam0->f_36, false, false);
						unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
					}
					func_274(iParam0, 34);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 34);
				func_221(iParam0);
				if (func_282(iParam0, 34, 0))
				{
					func_230(iParam0, 18966.65f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 3))
					{
						if (func_282(iParam0, 34, 1100))
						{
							if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 3);
							}
						}
					}
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 4))
					{
						if (func_282(iParam0, 34, 1100))
						{
							if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 3))
					{
						if (func_282(iParam0, 34, 1000))
						{
							if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 3);
							}
						}
					}
				}
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x5F9532F3B5CC2551(iParam0->f_35))
					{
						unk_0xEA1C610A04DB6BBB(iParam0->f_35, true);
					}
					if (!unk_0x5F9532F3B5CC2551(iParam0->f_36))
					{
						unk_0xEA1C610A04DB6BBB(iParam0->f_36, false);
					}
					if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(iParam0->f_34))
					{
						unk_0xC20E50AA46D09CA8(unk_0xD80958FC74E988A6(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
					}
					func_274(iParam0, 35);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 35);
				func_221(iParam0);
				if (func_282(iParam0, 35, 0))
				{
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 5))
					{
						if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 5);
						}
					}
				}
				if (!func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 4))
					{
						if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 4);
						}
					}
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 5))
					{
						if (func_282(iParam0, 36, -3750))
						{
							if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 5);
							}
						}
					}
				}
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					if (!unk_0x5F9532F3B5CC2551(iParam0->f_34))
					{
						unk_0xFEDB7D269E8C60E3(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						unk_0x5640BFF86B16E8DC(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						unk_0xB13C14F66A00D047(iParam0->f_7, 33.3479f);
						unk_0x6A25241C340D3822(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x026FB97D0A425F84(iParam0->f_7, true);
						if (!unk_0x5F9532F3B5CC2551(iParam0->f_35))
						{
							unk_0xEA1C610A04DB6BBB(iParam0->f_35, false);
						}
						if (!unk_0x5F9532F3B5CC2551(iParam0->f_36))
						{
							unk_0xEA1C610A04DB6BBB(iParam0->f_36, true);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x272E4723B56A3B96(iParam0->f_11, iParam0->f_34, unk_0xFB71170B7E76ACBA(iParam0->f_34, "seat_dside_f"));
						if (func_241(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x272E4723B56A3B96(iParam0->f_12, iParam0->f_34, unk_0xFB71170B7E76ACBA(iParam0->f_34, "seat_pside_f"));
							unk_0xEEA929141F699854(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0x734292F4F0ABF6D0(iParam0->f_11, 0.363f);
							unk_0x734292F4F0ABF6D0(iParam0->f_12, 0.363f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x272E4723B56A3B96(iParam0->f_12, iParam0->f_34, 0);
							unk_0xEEA929141F699854(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0x734292F4F0ABF6D0(iParam0->f_11, 0.298f);
							unk_0x734292F4F0ABF6D0(iParam0->f_12, 0.298f);
						}
						unk_0x2208438012482A1A(iParam0->f_36, false, false);
						unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
					}
					func_274(iParam0, 36);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 36);
				func_221(iParam0);
				if (func_282(iParam0, 36, 0))
				{
					func_230(iParam0, 42700.96f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 6))
					{
						if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 6);
						}
					}
				}
				if (!func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 6))
					{
						if (func_282(iParam0, 36, 1000))
						{
							if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 6);
							}
						}
					}
				}
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x5F9532F3B5CC2551(iParam0->f_35))
					{
						unk_0xEA1C610A04DB6BBB(iParam0->f_35, true);
					}
					if (!unk_0x5F9532F3B5CC2551(iParam0->f_36))
					{
						unk_0xEA1C610A04DB6BBB(iParam0->f_36, false);
					}
					if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(iParam0->f_34))
					{
						unk_0xC20E50AA46D09CA8(unk_0xD80958FC74E988A6(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
					}
					func_274(iParam0, 37);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 37);
				func_221(iParam0);
				if (func_282(iParam0, 37, 0))
				{
					func_230(iParam0, 51033.28f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 7))
					{
						if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 7);
						}
					}
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 8))
					{
						if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 8);
						}
					}
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 9))
					{
						if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 9);
						}
					}
				}
				if (!func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 7))
					{
						if (func_282(iParam0, 37, 2500))
						{
							if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 7);
							}
						}
					}
				}
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(iParam0, 38);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 38);
				func_221(iParam0);
				if (func_282(iParam0, 38, 0))
				{
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 8))
					{
						if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 8);
						}
					}
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 9))
					{
						if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 9);
						}
					}
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 31))
					{
						if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 31);
						}
					}
				}
				if (func_241(iParam0))
				{
					if (!unk_0xA921AA820C25702F(iParam0->f_1, 31))
					{
						if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 31);
						}
					}
				}
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					if (!unk_0x5F9532F3B5CC2551(iParam0->f_34))
					{
						unk_0xFEDB7D269E8C60E3(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						unk_0x5640BFF86B16E8DC(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						unk_0xB13C14F66A00D047(iParam0->f_7, 33.3479f);
						unk_0x6A25241C340D3822(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x026FB97D0A425F84(iParam0->f_7, true);
						if (!unk_0x5F9532F3B5CC2551(iParam0->f_35))
						{
							unk_0xEA1C610A04DB6BBB(iParam0->f_35, false);
						}
						if (!unk_0x5F9532F3B5CC2551(iParam0->f_36))
						{
							unk_0xEA1C610A04DB6BBB(iParam0->f_36, true);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x272E4723B56A3B96(iParam0->f_11, iParam0->f_34, unk_0xFB71170B7E76ACBA(iParam0->f_34, "seat_dside_f"));
						if (func_241(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x272E4723B56A3B96(iParam0->f_12, iParam0->f_34, unk_0xFB71170B7E76ACBA(iParam0->f_34, "seat_pside_f"));
							unk_0xEEA929141F699854(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0x734292F4F0ABF6D0(iParam0->f_11, 0.811f);
							unk_0x734292F4F0ABF6D0(iParam0->f_12, 0.811f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x272E4723B56A3B96(iParam0->f_12, iParam0->f_34, 0);
							unk_0xEEA929141F699854(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0x734292F4F0ABF6D0(iParam0->f_11, 0.791f);
							unk_0x734292F4F0ABF6D0(iParam0->f_12, 0.791f);
						}
						unk_0x2208438012482A1A(iParam0->f_36, false, false);
						unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
					}
					func_274(iParam0, 39);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 39);
				func_221(iParam0);
				if (func_282(iParam0, 39, 0))
				{
					func_230(iParam0, 85050f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!unk_0xA921AA820C25702F(iParam0->f_1, 31))
				{
					if (func_222(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), 31);
					}
				}
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0xBEB2D9A1D9A8F55A(9, 12, 9, 12);
					if (!unk_0x5F9532F3B5CC2551(iParam0->f_35))
					{
						unk_0xEA1C610A04DB6BBB(iParam0->f_35, true);
					}
					if (!unk_0x5F9532F3B5CC2551(iParam0->f_36))
					{
						unk_0xEA1C610A04DB6BBB(iParam0->f_36, false);
					}
					if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(iParam0->f_34))
					{
						unk_0xC20E50AA46D09CA8(unk_0xD80958FC74E988A6(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
					}
					func_274(iParam0, 40);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 40);
				if (func_221(iParam0) && func_282(iParam0, 40, 0))
				{
					func_230(iParam0, 116366.5f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					unk_0xE679E3E06E363892(0, 0, 0);
					func_276(iParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_274(iParam0, 41);
					unk_0xA74802FB8D0B7814("CONTRAILS", 0f);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 41);
				if (func_282(iParam0, 41, 0))
				{
					unk_0x03300B57FCAC6DDB(true);
					func_230(iParam0, 127166.5f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_220(iParam0);
					func_276(iParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(iParam0, 42);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 42);
				if (func_282(iParam0, 42, 0))
				{
					unk_0x03300B57FCAC6DDB(false);
					func_230(iParam0, 170800f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(iParam0, 43);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 43);
				if (func_282(iParam0, 43, 0))
				{
					unk_0xBEB2D9A1D9A8F55A(9, 12, 9, 12);
					func_230(iParam0, 191799.8f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(iParam0, 44);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 44);
				if (func_282(iParam0, 44, 0))
				{
					func_230(iParam0, 196633.1f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(iParam0, 45);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 45);
				if (func_282(iParam0, 45, 0))
				{
					func_230(iParam0, 201466.5f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(iParam0, 46);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 46);
				if (func_282(iParam0, 46, 0))
				{
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_219(iParam0);
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					if (!unk_0x5F9532F3B5CC2551(iParam0->f_34))
					{
						unk_0xFEDB7D269E8C60E3(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						unk_0x5640BFF86B16E8DC(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						unk_0xB13C14F66A00D047(iParam0->f_7, 33.3479f);
						unk_0x6A25241C340D3822(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x026FB97D0A425F84(iParam0->f_7, true);
						if (!unk_0x5F9532F3B5CC2551(iParam0->f_35))
						{
							unk_0xEA1C610A04DB6BBB(iParam0->f_35, false);
						}
						if (!unk_0x5F9532F3B5CC2551(iParam0->f_36))
						{
							unk_0xEA1C610A04DB6BBB(iParam0->f_36, true);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x272E4723B56A3B96(iParam0->f_11, iParam0->f_34, unk_0xFB71170B7E76ACBA(iParam0->f_34, "seat_dside_f"));
						if (func_241(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x272E4723B56A3B96(iParam0->f_12, iParam0->f_34, unk_0xFB71170B7E76ACBA(iParam0->f_34, "seat_pside_f"));
							unk_0xEEA929141F699854(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0x734292F4F0ABF6D0(iParam0->f_11, 0.726f);
							unk_0x734292F4F0ABF6D0(iParam0->f_12, 0.74f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x272E4723B56A3B96(iParam0->f_12, iParam0->f_34, 0);
							unk_0xEEA929141F699854(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							unk_0x734292F4F0ABF6D0(iParam0->f_11, 0.726f);
							unk_0x734292F4F0ABF6D0(iParam0->f_12, 0.815f);
						}
						unk_0x2208438012482A1A(iParam0->f_36, false, false);
						unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
					}
					func_274(iParam0, 47);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 47);
				if (func_282(iParam0, 47, 0))
				{
					func_230(iParam0, 213066.4f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_219(iParam0);
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x5F9532F3B5CC2551(iParam0->f_35))
					{
						unk_0xEA1C610A04DB6BBB(iParam0->f_35, true);
					}
					if (!unk_0x5F9532F3B5CC2551(iParam0->f_36))
					{
						unk_0xEA1C610A04DB6BBB(iParam0->f_36, false);
					}
					if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(iParam0->f_34))
					{
						unk_0xC20E50AA46D09CA8(unk_0xD80958FC74E988A6(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
					}
					func_274(iParam0, 48);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 48);
				if (func_282(iParam0, 48, 0))
				{
					unk_0x933D6A9EEC1BACD0(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 3);
					func_218(iParam0, 10177.75f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_219(iParam0);
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(iParam0, 49);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				func_284(iParam0, 49);
				if (unk_0x1E5185B72EF5158A("FM_INTRO_DRIVE_END") && func_282(iParam0, 49, 0))
				{
					func_216(iParam0, 4500f);
					unk_0x933D6A9EEC1BACD0(iParam0, 15);
					iParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_219(iParam0);
				if (!unk_0x5A859503B0C08678())
				{
					if (!unk_0x5C544BC6C57AC575())
					{
						unk_0xD4E8E24955024033(250);
					}
				}
				if (unk_0xA921AA820C25702F(*iParam0, 15))
				{
					func_276(iParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (iParam0->f_292)
					{
						unk_0x0A41540E63C9EE17();
						unk_0xE80492A9AC099A93(iParam0, 11);
					}
					func_274(iParam0, 50);
					unk_0xE80492A9AC099A93(iParam0, 15);
				}
				if (!unk_0xA921AA820C25702F(*iParam0, 20))
				{
					if (func_241(iParam0))
					{
						unk_0x7A86743F475D9E09("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0x7A86743F475D9E09("MP_INT_MCS_5_ALT1", 8);
					}
					if (iParam0->f_295)
					{
						if (unk_0xB56BBBCC2955D9CB())
						{
							if (func_241(iParam0))
							{
								unk_0x4C61C75BEE8184C2("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0x4C61C75BEE8184C2("MP_1", 0, 1);
							}
						}
					}
					if (unk_0xC59F528E9AB9F339())
					{
						unk_0x933D6A9EEC1BACD0(iParam0, 20);
					}
				}
				func_284(iParam0, 50);
				if (!unk_0x5F9532F3B5CC2551(iParam0->f_34))
				{
					if (unk_0x1C8A4C2C19E68EEC(iParam0->f_34))
					{
						if (unk_0xD5037BA82E12416F(iParam0->f_34) < 1f)
						{
							unk_0x54833611C17ABDEA(iParam0->f_34);
						}
					}
				}
				if (func_282(iParam0, 50, 0) && unk_0xA921AA820C25702F(*iParam0, 20))
				{
					if (unk_0xA921AA820C25702F(*iParam0, 21))
					{
						unk_0x706D57B0F50DA710("FM_INTRO_DRIVE_END");
						unk_0xE80492A9AC099A93(iParam0, 21);
					}
					unk_0x54833611C17ABDEA(iParam0->f_34);
					iParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (iParam0->f_295)
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
					{
						if (func_241(iParam0))
						{
							unk_0xE40C1C56DF95C2E8(unk_0xD80958FC74E988A6(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0xE40C1C56DF95C2E8(unk_0xD80958FC74E988A6(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0x5F9532F3B5CC2551(iParam0->f_35))
				{
					unk_0xE40C1C56DF95C2E8(iParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x5F9532F3B5CC2551(iParam0->f_34))
				{
					unk_0xE40C1C56DF95C2E8(iParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0x933D6A9EEC1BACD0(iParam0, 13);
				if (unk_0xB65B60556E2A9225("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0xDFE8422B3B94E688("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0x186D5CB5E7B0FF7B(4);
				func_232(1, 1, 1, 0);
				iParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0xD3C2E180A40F031E())
				{
					unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
					if (iParam0->f_293)
					{
						iParam0->f_30 = (unk_0x9CD27B0045628463() - iParam0->f_13);
					}
					else
					{
						iParam0->f_30 = func_215(iParam0);
					}
					iParam0->f_14 = 0;
					iParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (iParam0->f_295)
				{
					if (func_241(iParam0))
					{
						if (!unk_0xA921AA820C25702F(*iParam0, 23))
						{
							if (unk_0x4C6A6451C79E4662("MP_Female_Character", 0))
							{
								if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
								{
									unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), unk_0x2FFB6B224F4B2926(Var1.f_0, Var1.f_1));
									unk_0xB4EC2312F4E5B1F1(0f);
									unk_0x6D0858B8EDFD2B7D(0f, 1f);
									unk_0x933D6A9EEC1BACD0(iParam0, 23);
								}
							}
						}
					}
					else if (!unk_0xA921AA820C25702F(*iParam0, 23))
					{
						if (unk_0x4C6A6451C79E4662("MP_1", 0))
						{
							if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
							{
								unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), unk_0x2FFB6B224F4B2926(Var1.f_0, Var1.f_1));
								unk_0xB4EC2312F4E5B1F1(0f);
								unk_0x6D0858B8EDFD2B7D(0f, 1f);
								unk_0x933D6A9EEC1BACD0(iParam0, 23);
							}
						}
					}
				}
				if (unk_0x4C6A6451C79E4662("LAMAR", 0))
				{
					if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
					{
						if (!unk_0x84A2DD9AC37C35C1(iParam0->f_35))
						{
							if (!unk_0x997ABD671D25CA0B(iParam0->f_35, false))
							{
								unk_0xC20E50AA46D09CA8(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (unk_0x4C6A6451C79E4662("MP_Lamar_Car", 0))
				{
					if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
					{
						unk_0x49733E92263139D1(iParam0->f_34);
					}
				}
				if (unk_0xB2CBCD0930DFB420(false))
				{
					func_214(1);
					unk_0xB4EC2312F4E5B1F1(0f);
					unk_0x6D0858B8EDFD2B7D(0f, 1f);
				}
				if (!func_213(unk_0x4F8644AF03D0E0D6()))
				{
					func_212(1);
				}
				if (unk_0xD3C2E180A40F031E())
				{
					if (iParam0->f_293)
					{
						iParam0->f_13 = (unk_0x9CD27B0045628463() - (iParam0->f_30 + unk_0xE625BEABBAFFDAB9()));
					}
					switch (iParam0->f_14)
					{
						case 0:
							func_211(iParam0, 0);
							break;
						
						case 10:
							func_211(iParam0, 1);
							break;
						
						case 20:
							func_211(iParam0, 2);
							break;
						
						case 30:
							func_211(iParam0, 3);
							break;
						
						case 40:
							func_211(iParam0, 4);
							break;
						
						case 50:
							func_211(iParam0, 5);
							break;
						
						case 60:
							func_211(iParam0, 6);
							break;
						
						case 70:
							func_211(iParam0, 7);
							break;
						
						case 80:
							func_211(iParam0, 8);
							break;
						
						case 90:
							func_211(iParam0, 9);
							break;
						
						case 100:
							if (unk_0x7239B21A38F536BA(iParam0->f_36))
							{
								unk_0x9614299DCB53E54B(&(iParam0->f_36));
							}
							break;
					}
					iParam0->f_14++;
				}
				else
				{
					unk_0x62ECFCFDEE7885D6();
					unk_0x9E4CFFF989258472();
					if (!unk_0x7C0A893088881D57())
					{
						unk_0xC7272775B4DC786E(false);
					}
					func_232(0, 1, 1, 0);
					unk_0xE80492A9AC099A93(iParam0, 13);
					iParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0xD3C2E180A40F031E())
				{
					unk_0xD220BDD222AC4A1E();
				}
				else if (!unk_0xA921AA820C25702F(*iParam0, 17))
				{
					if (unk_0xB16FCE9DDC7BA182())
					{
						unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
						unk_0x933D6A9EEC1BACD0(iParam0, 13);
						unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -195.2f, 307.1825f, 95.9455f, true, false, false, true);
						unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
						if (iParam0->f_292)
						{
							unk_0x0A41540E63C9EE17();
							unk_0xE80492A9AC099A93(iParam0, 11);
						}
						func_178(&(iParam0->f_17));
						func_19(&(iParam0->f_17), 0, 0);
						unk_0x933D6A9EEC1BACD0(iParam0, 17);
					}
					else if (!unk_0x797AC7CB535BA28F())
					{
						unk_0x891B5B39AC6302AF(250);
					}
				}
				else if (func_179(&(iParam0->f_17), 10000, 0))
				{
					if (func_210(iParam0))
					{
						func_277(iParam0);
						func_226(iParam0);
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
						{
							unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
							if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								unk_0x1A9205C1B9EE827F(unk_0xD80958FC74E988A6(), true, false);
								unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 61.3164f);
							}
						}
						if (!unk_0x84A2DD9AC37C35C1(iParam0->f_35))
						{
							if (!unk_0x997ABD671D25CA0B(iParam0->f_35, false))
							{
								if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
								{
									unk_0xC20E50AA46D09CA8(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_214(1);
						if (!func_213(unk_0x4F8644AF03D0E0D6()))
						{
							func_212(1);
						}
						func_232(0, 1, 1, 0);
						unk_0xE679E3E06E363892(0, 0, 0);
						if (unk_0xA921AA820C25702F(*iParam0, 21))
						{
							unk_0x706D57B0F50DA710("FM_INTRO_DRIVE_END");
							unk_0xE80492A9AC099A93(iParam0, 21);
						}
						unk_0x933D6A9EEC1BACD0(iParam0, 1);
						unk_0x933D6A9EEC1BACD0(iParam0, 15);
						iParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0xD3C2E180A40F031E())
				{
					unk_0xD220BDD222AC4A1E();
				}
				else if (!unk_0xA921AA820C25702F(*iParam0, 17))
				{
					if (unk_0xB16FCE9DDC7BA182())
					{
						unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
						unk_0x933D6A9EEC1BACD0(iParam0, 13);
						unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -195.2f, 307.1825f, 95.9455f, true, false, false, true);
						unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
						if (iParam0->f_292)
						{
							unk_0x0A41540E63C9EE17();
							unk_0xE80492A9AC099A93(iParam0, 11);
						}
						func_178(&(iParam0->f_17));
						func_19(&(iParam0->f_17), 0, 0);
						unk_0x933D6A9EEC1BACD0(iParam0, 17);
					}
					else if (!unk_0x797AC7CB535BA28F())
					{
						unk_0x891B5B39AC6302AF(250);
					}
				}
				else if (func_179(&(iParam0->f_17), 10000, 0))
				{
					if (func_261(iParam0))
					{
						func_277(iParam0);
						func_226(iParam0);
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
						{
							unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
							if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								unk_0x1A9205C1B9EE827F(unk_0xD80958FC74E988A6(), true, false);
								unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 61.3164f);
								if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
								{
									unk_0xC20E50AA46D09CA8(unk_0xD80958FC74E988A6(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!unk_0x84A2DD9AC37C35C1(iParam0->f_35))
						{
							if (!unk_0x997ABD671D25CA0B(iParam0->f_35, false))
							{
								if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
								{
									unk_0xC20E50AA46D09CA8(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_213(unk_0x4F8644AF03D0E0D6()))
						{
						}
						func_232(0, 1, 1, 0);
						if (unk_0xA921AA820C25702F(*iParam0, 21))
						{
							unk_0x706D57B0F50DA710("FM_INTRO_DRIVE_END");
							unk_0xE80492A9AC099A93(iParam0, 21);
						}
						unk_0xD4E8E24955024033(250);
						unk_0xE679E3E06E363892(0, 0, 0);
						unk_0x933D6A9EEC1BACD0(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 3);
						iParam0->f_13 = (unk_0x9CD27B0045628463() - func_207(iParam0, 48, 0));
						iParam0->f_293 = 1;
						func_218(iParam0, 10177.75f);
						unk_0x933D6A9EEC1BACD0(iParam0, 15);
						iParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_284(iParam0, 57);
				bVar8 = !iParam0->f_288;
				func_197(iParam0, bVar8, 0);
				if (iParam0->f_292)
				{
					unk_0x0A41540E63C9EE17();
					unk_0xE80492A9AC099A93(iParam0, 11);
				}
				if (!unk_0x84A2DD9AC37C35C1(iParam0->f_35))
				{
					unk_0x919BE13EED931959(iParam0->f_35, -1);
					unk_0x971D38760FBC02EF(iParam0->f_35, true);
				}
				unk_0xBABEC9E69A91C57B(true);
				if (!iParam0->f_288)
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
		func_196(iParam0);
		if (!iParam0->f_291)
		{
			if (iParam0->f_293)
			{
				iParam0->f_289 = unk_0xBBDA792448DB5A89((unk_0x9CD27B0045628463() - iParam0->f_13));
			}
			else
			{
				iParam0->f_289 = unk_0xBBDA792448DB5A89(func_215(iParam0));
			}
			iParam0->f_290 = func_195(iParam0);
		}
		iParam0->f_291 = 0;
		if (iParam0->f_292 && unk_0xA921AA820C25702F(*iParam0, 11))
		{
			if (iParam0->f_293)
			{
				unk_0xA74A541C6884E7B8(iParam0->f_289);
			}
			else
			{
				unk_0xA74A541C6884E7B8(iParam0->f_290);
			}
		}
		func_192(iParam0);
		if (unk_0xA921AA820C25702F(*iParam0, 12))
		{
			if (func_251())
			{
				func_191();
			}
		}
		if (iParam0->f_6 > 0 && iParam0->f_6 <= 57)
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
				{
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 60);
				}
			}
			func_189(iParam0);
			unk_0x6D3465A73092F0E6();
			unk_0x6806C51AD12B83B8(9);
			unk_0x6806C51AD12B83B8(7);
			unk_0x6806C51AD12B83B8(18);
			unk_0x6806C51AD12B83B8(6);
			unk_0x6806C51AD12B83B8(3);
			unk_0x6806C51AD12B83B8(13);
			unk_0x6806C51AD12B83B8(4);
		}
		if (Global_2446207.f_1683)
		{
			unk_0x351220255D64C155(2, 187, true);
		}
	}
	return 0;
}

void func_189(int* iParam0)
{
	int iVar0;
	
	if (!unk_0xA921AA820C25702F(*iParam0, 9))
	{
		if (iParam0->f_6 > 0)
		{
			if (!unk_0xADA24309FE08DACF())
			{
				if (!unk_0x35F0B98A8387274D())
				{
					iVar0 = unk_0x4F8644AF03D0E0D6() + 32;
					unk_0xFB680D403909DC70(1, iVar0);
					func_190(1);
					unk_0x933D6A9EEC1BACD0(iParam0, 9);
				}
			}
			else
			{
				func_190(1);
				unk_0x933D6A9EEC1BACD0(iParam0, 9);
			}
		}
	}
}

void func_190(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116, 18))
		{
			unk_0x933D6A9EEC1BACD0(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 18);
		}
	}
	else if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116, 18))
	{
		unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 18);
	}
}

void func_191()
{
	unk_0x0DF606929C105BE1(Global_1318711, 255, 255, 255, 255, 0);
	if (Global_1318713 == 0)
	{
		unk_0xF6E48914C7A8694E(Global_1318711, "SET_BIG_LOGO_VISIBLE");
		unk_0xC3D0841A0CC546A6(1);
		unk_0xC58424BA936EB458(true);
		unk_0xC6796A8FFA375E53();
		Global_1318713 = 1;
	}
}

void func_192(int* iParam0)
{
	struct<3> Var0;
	
	if (unk_0x7239B21A38F536BA(iParam0->f_58[iParam0->f_90]))
	{
		if (unk_0x5F9532F3B5CC2551(iParam0->f_58[iParam0->f_90]))
		{
		}
		Var0 = { unk_0x3FEF770D40960D5A(iParam0->f_58[iParam0->f_90], true) };
		if (Var0.f_2 < -50f)
		{
			func_193(iParam0, iParam0->f_90);
		}
	}
	iParam0->f_90++;
	if (iParam0->f_90 >= 15)
	{
		iParam0->f_90 = 0;
	}
}

void func_193(var uParam0, int iParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (unk_0x7239B21A38F536BA(uParam0->f_58[iParam1]))
	{
		if (unk_0x5F9532F3B5CC2551(uParam0->f_58[iParam1]))
		{
		}
		func_194(iParam1, &Var0, &fVar3);
		unk_0x06843DA7060A026B(uParam0->f_58[iParam1], Var0, true, false, false, true);
		unk_0x8E2530AA8ADA980E(uParam0->f_58[iParam1], fVar3);
		unk_0x428CA6DBD1094446(uParam0->f_58[iParam1], true);
		unk_0x115722B1B9C14C1C(uParam0->f_58[iParam1]);
		unk_0x1A9205C1B9EE827F(uParam0->f_58[iParam1], false, false);
		unk_0xEA1C610A04DB6BBB(uParam0->f_58[iParam1], false);
	}
	if (unk_0x7239B21A38F536BA(uParam0->f_74[iParam1]))
	{
		if (unk_0x5F9532F3B5CC2551(uParam0->f_74[iParam1]))
		{
		}
		unk_0xEA1C610A04DB6BBB(uParam0->f_74[iParam1], false);
	}
}

void func_194(int iParam0, var uParam1, var uParam2)
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

float func_195(int* iParam0)
{
	float fVar0;
	float fVar1;
	
	if (iParam0->f_6 >= 31 && iParam0->f_6 < 33)
	{
		if (func_241(iParam0))
		{
			fVar0 = unk_0xBBDA792448DB5A89((iParam0->f_27 + unk_0xE625BEABBAFFDAB9()));
			if (unk_0x583DF8E3D4AFBD98() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / unk_0xBBDA792448DB5A89(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = unk_0xBBDA792448DB5A89((iParam0->f_27 + unk_0xE625BEABBAFFDAB9()));
		}
		return fVar0;
	}
	return iParam0->f_289;
}

void func_196(int* iParam0)
{
	if (unk_0xA921AA820C25702F(*iParam0, 29))
	{
		unk_0xD0F64B265C8C8B33(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		unk_0xD0F64B265C8C8B33(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_197(int* iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xA921AA820C25702F(*iParam0, 0))
	{
		if (unk_0xD3C2E180A40F031E())
		{
			unk_0xC7272775B4DC786E(false);
		}
		unk_0x9E6542F0CE8E70A3(false);
		if (iParam0->f_292)
		{
			unk_0x20C6C7E4EB082A7F(false);
			unk_0x0A41540E63C9EE17();
			unk_0xE80492A9AC099A93(iParam0, 11);
		}
		if (unk_0xA921AA820C25702F(*iParam0, 14))
		{
			unk_0x31B73D1EA9F01DA2();
			unk_0xE80492A9AC099A93(iParam0, 14);
		}
		func_206();
		func_227(iParam0);
		func_277(iParam0);
		func_226(iParam0);
		func_247();
		func_231(iParam0);
		func_248(iParam0);
		func_205(iParam0);
		func_220(iParam0);
		unk_0xD37401D78A929A49();
		if (bParam2)
		{
			if (unk_0x7239B21A38F536BA(iParam0->f_34))
			{
				unk_0x629BFA74418D6239(&(iParam0->f_34));
			}
			if (unk_0x7239B21A38F536BA(iParam0->f_35))
			{
				unk_0x2595DD4236549CE3(&(iParam0->f_35));
			}
		}
		if (unk_0x7239B21A38F536BA(iParam0->f_36))
		{
			unk_0x9614299DCB53E54B(&(iParam0->f_36));
		}
		if (!iParam0->f_288)
		{
			func_357(0);
		}
		func_203();
		func_198();
		func_232(0, 1, 1, 0);
		unk_0xDCD4EA924F42D01A(false, -1);
		unk_0x19F21E63AE6EAE4E(true);
		if (unk_0x10FAB35428CCC9D7())
		{
			if (unk_0x6CC27C9FA2040220())
			{
				unk_0x9CA5DE655269FEC4(false, true);
			}
		}
		if (unk_0xA921AA820C25702F(*iParam0, 21))
		{
			unk_0x706D57B0F50DA710("FM_INTRO_DRIVE_END");
			unk_0xE80492A9AC099A93(iParam0, 21);
		}
		unk_0xFC18DB55AE19E046(false);
		func_320(1);
		if (unk_0xA921AA820C25702F(*iParam0, 26))
		{
			func_315(1, 0);
			unk_0xE80492A9AC099A93(iParam0, 26);
		}
		Global_2421967.f_3012 = 0;
		if (!unk_0xD9D2CFFF49FAB35F())
		{
			unk_0x40AEFD1A244741F2(false);
		}
		unk_0x717CD6E6FAEBBEDC(true);
		if (bParam1)
		{
		}
		func_175(0);
		func_187(1);
		Global_2446207.f_1683 = 0;
		Global_2446207.f_1682 = 0;
		if (unk_0xB65B60556E2A9225("MP_INTRO_RACE_SCENE"))
		{
			unk_0xDFE8422B3B94E688("MP_INTRO_RACE_SCENE");
		}
		if (unk_0xB65B60556E2A9225("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0xDFE8422B3B94E688("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_298(14, 1);
		unk_0xAA5F02DB48D704B9(5);
		unk_0xA74802FB8D0B7814("CONTRAILS", 0f);
		unk_0xF1160ACCF98A3FC8(5, "FMINTRO");
		unk_0xF1160ACCF98A3FC8(6, "FMINTRO");
		unk_0xF1160ACCF98A3FC8(7, "FMINTRO");
		unk_0xF66A602F829E2A06("mp_intro_seq@");
		unk_0xF66A602F829E2A06("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0xF66A602F829E2A06("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0xF66A602F829E2A06("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0xA6DB27D19ECBB7DA(unk_0xDCD4EC3F419D02FA()))
		{
			unk_0xD38744167B2FA257(unk_0xDCD4EC3F419D02FA(), 0.7f);
		}
		unk_0x096EF57A0C999BBA(0);
		unk_0xB4EC2312F4E5B1F1(0f);
		unk_0x6D0858B8EDFD2B7D(0f, 1f);
		if (unk_0x10FAB35428CCC9D7())
		{
			unk_0x916F0A3CDEC3445E();
			unk_0xBABEC9E69A91C57B(true);
		}
		unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
		if (!unk_0x5A859503B0C08678() && !unk_0x5C544BC6C57AC575())
		{
			unk_0xD4E8E24955024033(800);
		}
		unk_0x933D6A9EEC1BACD0(iParam0, 0);
	}
}

void func_198()
{
	func_199(0);
}

void func_199(bool bParam0)
{
	if (bParam0)
	{
		func_202();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_75(0))
		{
			func_200(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_200(int iParam0)
{
	if (Global_14551)
	{
		func_201(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
	}
	if (!func_147())
	{
		Global_14393.f_1 = 3;
	}
}

void func_201(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_75(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

void func_202()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_203()
{
	if (!Global_1312570)
	{
		return;
	}
	func_204();
}

void func_204()
{
	Global_1312570 = 0;
	StringCopy(&(Global_1312570.f_1), "", 24);
	Global_1312570.f_7 = 0;
}

void func_205(int* iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_211(iParam0, iVar0);
		iVar0++;
	}
}

void func_206()
{
	unk_0x0027501B9F3B407E(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	unk_0x0027501B9F3B407E(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
}

int func_207(int* iParam0, int iParam1, bool bParam2)
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
			iVar1 = iParam0->f_29;
		}
		else
		{
			iVar1 = iParam0->f_28;
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
			iVar1 = (iVar1 + func_209(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_208(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_208(int iParam0)
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

int func_209(int iParam0)
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

int func_210(int* iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	unk_0x963D27A58DF860AC(iVar0);
	unk_0x963D27A58DF860AC(iVar1);
	if (unk_0x98A4EB5D89A0C952(iVar0) && unk_0x98A4EB5D89A0C952(iVar1))
	{
		if (!unk_0x7239B21A38F536BA(iParam0->f_34))
		{
			iParam0->f_34 = unk_0xAF35D0D2583051B0(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0);
			unk_0xACAD101E1FB66689(iParam0->f_34, true);
			unk_0x3B988190C0AA6C0B(iParam0->f_34, false);
			unk_0xFAEE099C6F890BB8(iParam0->f_34, true, true, true, true, true, true, true, false);
			unk_0x34E710FF01247C5A(iParam0->f_34, 2);
		}
		else if (!unk_0x7239B21A38F536BA(iParam0->f_35))
		{
			if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
			{
				iParam0->f_35 = unk_0xD49F9B0955C367DE(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, false, false);
				unk_0x9F8AA94D6D97DBF4(iParam0->f_35, true);
				unk_0x3882114BDE571AD4(iParam0->f_34, true);
				unk_0x3882114BDE571AD4(iParam0->f_35, true);
				unk_0xC80A74AC829DDD92(iParam0->f_35, unk_0x7DBDD04862D95F04(unk_0xD80958FC74E988A6()));
				unk_0xFAEE099C6F890BB8(iParam0->f_35, true, true, true, true, true, true, true, false);
			}
		}
	}
	if (!unk_0x7239B21A38F536BA(iParam0->f_34) || !unk_0x7239B21A38F536BA(iParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_211(int* iParam0, int iParam1)
{
	if (unk_0x7239B21A38F536BA(iParam0->f_58[iParam1]))
	{
		unk_0xEA386986E786A54F(&(iParam0->f_58[iParam1]));
	}
	if (unk_0x7239B21A38F536BA(iParam0->f_74[iParam1]))
	{
		unk_0x9614299DCB53E54B(&(iParam0->f_74[iParam1]));
	}
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_120), 22);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_120), 22);
	}
}

bool func_213(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_120, 22);
}

void func_214(bool bParam0)
{
	if (bParam0)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 4);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 4);
	}
}

int func_215(int* iParam0)
{
	if (iParam0->f_6 < 31)
	{
		return unk_0xE7A0D23DC414507B();
	}
	if (iParam0->f_6 < 33)
	{
		return (iParam0->f_26 + unk_0xE625BEABBAFFDAB9());
	}
	return (iParam0->f_28 + unk_0xE7A0D23DC414507B());
}

void func_216(int* iParam0, float fParam1)
{
	func_217(iParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_217(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		if (bParam4)
		{
			unk_0x54833611C17ABDEA(iParam0);
			unk_0x3F878F92B3A7A071(iParam0, iParam1, sParam2, true);
		}
		else if (!unk_0x1C8A4C2C19E68EEC(iParam0))
		{
			unk_0x3F878F92B3A7A071(iParam0, iParam1, sParam2, true);
			unk_0xDFFCEF48E511DB48(iParam0, true);
		}
		else
		{
			iVar0 = unk_0x21543C612379DB3C(iParam1, sParam2);
			if (unk_0x42BC05C27A946054(iParam0) != iVar0)
			{
				unk_0x3F878F92B3A7A071(iParam0, iParam1, sParam2, true);
				unk_0xDFFCEF48E511DB48(iParam0, true);
			}
		}
		unk_0x9438F7AD68771A20(iParam0, (fParam3 - unk_0x5746F3A7AB7FE544(iParam0)));
	}
}

void func_218(int* iParam0, float fParam1)
{
	func_217(iParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_219(int* iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!iParam0->f_296)
	{
		iVar0 = unk_0xD24D37CC275948CC("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0x35B9E0803292B641(iVar1))
		{
			func_7(iVar1);
			iParam0->f_296 = 1;
		}
	}
}

void func_220(int* iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x7239B21A38F536BA(iParam0->f_37[iVar0]))
		{
			unk_0x9614299DCB53E54B(&(iParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0xE532F5D78798DAAB(joaat("g_m_y_mexgoon_02"));
	unk_0xF66A602F829E2A06("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0xF66A602F829E2A06("amb@world_human_hang_out_street@male_a@base");
}

int func_221(int* iParam0)
{
	int iVar0;
	
	if (unk_0xA921AA820C25702F(iParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0x963D27A58DF860AC(joaat("g_m_y_mexgoon_02"));
		unk_0xD3BD40951412FEF6("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0xD3BD40951412FEF6("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0x98A4EB5D89A0C952(joaat("g_m_y_mexgoon_02")) && unk_0xD031A9162D01088C("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0xD031A9162D01088C("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0x7239B21A38F536BA(iParam0->f_37[iVar0]))
				{
					iParam0->f_37[iVar0] = unk_0xD49F9B0955C367DE(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, false, false);
					unk_0x3882114BDE571AD4(iParam0->f_37[iVar0], true);
					unk_0x9F8AA94D6D97DBF4(iParam0->f_37[iVar0], true);
					switch (iVar0)
					{
						case 0:
							unk_0x83CDB10EA29B370B(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0f, 2, 0);
							break;
						
						case 1:
							unk_0x83CDB10EA29B370B(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 2:
							unk_0x83CDB10EA29B370B(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 3:
							unk_0x83CDB10EA29B370B(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 4:
							unk_0x83CDB10EA29B370B(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 5:
							unk_0x06843DA7060A026B(iParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, true, false, false, true);
							unk_0x8E2530AA8ADA980E(iParam0->f_37[iVar0], 76.8852f);
							unk_0xBF0FD6E56C964FCB(iParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, true, true);
							unk_0x428CA6DBD1094446(iParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0x83CDB10EA29B370B(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 7:
							unk_0x06843DA7060A026B(iParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, true, false, false, true);
							unk_0x8E2530AA8ADA980E(iParam0->f_37[iVar0], 87.5786f);
							unk_0xBF0FD6E56C964FCB(iParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, true, true);
							unk_0x428CA6DBD1094446(iParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0x83CDB10EA29B370B(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 9:
							unk_0x83CDB10EA29B370B(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0x7239B21A38F536BA(iParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0xE532F5D78798DAAB(joaat("g_m_y_mexgoon_02"));
		unk_0xF66A602F829E2A06("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0xF66A602F829E2A06("amb@world_human_hang_out_street@male_a@base");
		unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_222(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_152(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_144(sParam2, iParam4, 0);
}

void func_223(int* iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!unk_0xA921AA820C25702F(*iParam0, 25))
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
			if (!unk_0x84A2DD9AC37C35C1(iParam0->f_98[iVar0]) && unk_0x4C241E39B23DF959(iParam0->f_92[iVar0], false))
			{
				unk_0x428CA6DBD1094446(iParam0->f_92[iVar0], false);
				unk_0xAB54A438726D25D5(iParam0->f_92[iVar0], 10f);
				unk_0xE2A2AA2F659D77A7(iParam0->f_98[iVar0], iParam0->f_92[iVar0], Var1, 5f, 0, unk_0x9F47B058362C84B5(iParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0x933D6A9EEC1BACD0(iParam0, 25);
	}
}

int func_224(int* iParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (unk_0xA921AA820C25702F(iParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = joaat("shamal");
	unk_0x963D27A58DF860AC(iVar5);
	unk_0x963D27A58DF860AC(func_225());
	if (unk_0x98A4EB5D89A0C952(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x7239B21A38F536BA(iParam0->f_92[iVar0]))
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
				iParam0->f_92[iVar0] = unk_0xAF35D0D2583051B0(iVar5, Var1, fVar4, 0, 0);
				unk_0x49733E92263139D1(iParam0->f_92[iVar0]);
				unk_0x428CA6DBD1094446(iParam0->f_92[iVar0], true);
				unk_0x34E710FF01247C5A(iParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0x7239B21A38F536BA(iParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0x98A4EB5D89A0C952(func_225()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x7239B21A38F536BA(iParam0->f_98[iVar0]))
			{
				if (unk_0x7239B21A38F536BA(iParam0->f_92[iVar0]))
				{
					if (unk_0x4C241E39B23DF959(iParam0->f_92[iVar0], false))
					{
						iParam0->f_98[iVar0] = unk_0x7DD959874C1FD534(iParam0->f_92[iVar0], 4, func_225(), -1, false, false);
						unk_0x9F8AA94D6D97DBF4(iParam0->f_98[iVar0], true);
						unk_0x2497C4717C8B881E(iParam0->f_92[iVar0], 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0xE532F5D78798DAAB(iVar5);
	unk_0xE532F5D78798DAAB(func_225());
	unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 11);
	return 1;
}

int func_225()
{
	return unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6());
}

void func_226(int* iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x7239B21A38F536BA(iParam0->f_92[iVar0]))
		{
			unk_0xEA386986E786A54F(&(iParam0->f_92[iVar0]));
		}
		if (unk_0x7239B21A38F536BA(iParam0->f_98[iVar0]))
		{
			unk_0x9614299DCB53E54B(&(iParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0xE532F5D78798DAAB(joaat("shamal"));
	unk_0xE532F5D78798DAAB(func_225());
}

void func_227(int* iParam0)
{
	int iVar0;
	
	if (unk_0xA921AA820C25702F(iParam0->f_3, 2))
	{
		unk_0xE532F5D78798DAAB(joaat("p_cs_mp_jet_01_s"));
		if (unk_0x7239B21A38F536BA(iParam0->f_33))
		{
			unk_0x539E0AE3E6634B9F(&(iParam0->f_33));
		}
		if (iParam0->f_294)
		{
			if (unk_0x74AFEF0D2E1E409B(iParam0->f_120))
			{
				unk_0xC401503DFE8D53CF(iParam0->f_120, false);
			}
			if (unk_0x74AFEF0D2E1E409B(iParam0->f_121))
			{
				unk_0xC401503DFE8D53CF(iParam0->f_121, false);
			}
			if (unk_0xCA7D9B86ECA7481B())
			{
				unk_0x88C6814073DD4A73();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0x7239B21A38F536BA(iParam0->f_104[iVar0]))
			{
				unk_0x9614299DCB53E54B(&(iParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0xE80492A9AC099A93(&(iParam0->f_3), 2);
	}
}

int func_228(int* iParam0)
{
	if (func_241(iParam0))
	{
		unk_0xD3BD40951412FEF6("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0xD3BD40951412FEF6("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xD031A9162D01088C("mp_intro_seq@ig_1_lamar_drive_female") && unk_0xD031A9162D01088C("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0xD3BD40951412FEF6("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0xD3BD40951412FEF6("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xD031A9162D01088C("mp_intro_seq@ig_1_lamar_drive_male") && unk_0xD031A9162D01088C("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_229(int* iParam0)
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!unk_0xA921AA820C25702F(iParam0->f_3, 10))
	{
		unk_0x963D27A58DF860AC(iVar0);
		if (unk_0x98A4EB5D89A0C952(iVar0))
		{
			if (!unk_0x7239B21A38F536BA(iParam0->f_36))
			{
				iParam0->f_36 = unk_0xD49F9B0955C367DE(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, false, false);
				unk_0x9F8AA94D6D97DBF4(iParam0->f_36, true);
				unk_0x3882114BDE571AD4(iParam0->f_36, true);
				unk_0xEA1C610A04DB6BBB(iParam0->f_36, false);
				unk_0xC80A74AC829DDD92(iParam0->f_36, unk_0x7DBDD04862D95F04(unk_0xD80958FC74E988A6()));
				unk_0xFAEE099C6F890BB8(iParam0->f_36, true, true, true, true, true, true, true, false);
				func_358(&(iParam0->f_123), 1, iParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0x7239B21A38F536BA(iParam0->f_36))
		{
			return 0;
		}
		unk_0xE532F5D78798DAAB(iVar0);
		unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 10);
	}
	return 1;
}

void func_230(int* iParam0, float fParam1)
{
	func_217(iParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_231(int* iParam0)
{
	int iVar0;
	
	unk_0xE532F5D78798DAAB(func_244());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_245(iParam0, iVar0);
		iVar0++;
	}
	if (unk_0x7239B21A38F536BA(iParam0->f_91))
	{
		unk_0x9614299DCB53E54B(&(iParam0->f_91));
	}
}

void func_232(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_238(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_147())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_237(1, bParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_238(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_237(0, bParam3, iParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_233(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
	}
}

int func_233(int iParam0)
{
	if (func_235(iParam0, 0))
	{
		return 1;
	}
	if (func_234())
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_234()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_235(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_236(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_236(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
	}
	if (Global_1315875[iVar1] == 1)
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

int func_237(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_238(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
	}
}

void func_239(int* iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0->f_104[iVar0]))
		{
			unk_0x4668D80430D6C299(iParam0->f_104[iVar0]);
			unk_0xE40C1C56DF95C2E8(iParam0->f_104[iVar0], func_240(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_240(int iParam0)
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

int func_241(int* iParam0)
{
	if (iParam0->f_295)
	{
		return func_242();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_242()
{
	return func_243(unk_0x4F8644AF03D0E0D6());
}

int func_243(int iParam0)
{
	if (unk_0x9F47B058362C84B5(unk_0x43A66C31C68491C0(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_244()
{
	return joaat("s_m_y_xmech_02");
}

void func_245(int* iParam0, int iParam1)
{
	unk_0xE532F5D78798DAAB(func_246(iParam1));
	if (unk_0x7239B21A38F536BA(iParam0->f_49[iParam1]))
	{
		if (unk_0x4C241E39B23DF959(iParam0->f_49[iParam1], false))
		{
		}
		unk_0x445D79F995508307(iParam0->f_49[iParam1]);
		unk_0xEA386986E786A54F(&(iParam0->f_49[iParam1]));
	}
}

int func_246(int iParam0)
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

void func_247()
{
	Global_1318713 = 0;
	if (unk_0x85F01B8D5B90570E(Global_1318711))
	{
		unk_0xF6E48914C7A8694E(Global_1318711, "SET_BIG_LOGO_VISIBLE");
		unk_0xC3D0841A0CC546A6(1);
		unk_0xC58424BA936EB458(false);
		unk_0xC6796A8FFA375E53();
		unk_0x1D132D614DD86811(&Global_1318711);
	}
}

void func_248(int* iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0x7239B21A38F536BA(iParam0->f_92[iVar1]))
		{
			uVar0 = iParam0->f_92[iVar1];
			unk_0xAE3CBE5BF394C9C9(&uVar0);
		}
		if (unk_0x7239B21A38F536BA(iParam0->f_98[iVar1]))
		{
			uVar0 = iParam0->f_98[iVar1];
			unk_0xAE3CBE5BF394C9C9(&uVar0);
		}
		iVar1++;
	}
	unk_0xE532F5D78798DAAB(joaat("cheetah"));
	unk_0xE532F5D78798DAAB(joaat("monroe"));
	unk_0xE532F5D78798DAAB(joaat("entityxf"));
	unk_0xE532F5D78798DAAB(joaat("feltzer2"));
	unk_0xF1160ACCF98A3FC8(100, "FM_Intro_uber");
	unk_0xF1160ACCF98A3FC8(101, "FM_Intro_uber");
	unk_0xF1160ACCF98A3FC8(102, "FM_Intro_uber");
	unk_0xF1160ACCF98A3FC8(103, "FM_Intro_uber");
	unk_0xF1160ACCF98A3FC8(104, "FM_Intro_uber");
	unk_0xF66A602F829E2A06("mp_intro_seq@");
}

void func_249(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0->f_49[2]))
	{
		if (unk_0x4C241E39B23DF959(iParam0->f_49[2], false))
		{
			unk_0xA6E9FDCB2C76785E(iParam0->f_49[2]);
		}
	}
	if (unk_0x7239B21A38F536BA(iParam0->f_49[4]))
	{
		if (unk_0x4C241E39B23DF959(iParam0->f_49[4], false))
		{
			unk_0xA6E9FDCB2C76785E(iParam0->f_49[4]);
		}
	}
}

void func_250(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0->f_49[2]))
	{
		if (unk_0x4C241E39B23DF959(iParam0->f_49[2], false))
		{
			unk_0xF2BFA0430F0A0FCB(iParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_251()
{
	if (unk_0x10D0A8F259E93EC9())
	{
		return 0;
	}
	if (!unk_0x85F01B8D5B90570E(Global_1318711))
	{
		Global_1318711 = unk_0x11FE353CF9733E6F("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_252(int* iParam0, char* sParam1, char* sParam2, int iParam3, struct<3> Param4, struct<3> Param7)
{
	if (unk_0x7239B21A38F536BA(iParam3))
	{
		if (unk_0x5F9532F3B5CC2551(iParam3))
		{
		}
		if (!unk_0xA7A932170592B50E(iParam0->f_8))
		{
			iParam0->f_8 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", false);
		}
		iParam0->f_9 = -1;
		iParam0->f_9 = unk_0x8C18E0F9080ADD73(Param4, Param7, 2);
		unk_0x272E4723B56A3B96(iParam0->f_9, iParam3, 0);
		unk_0xE32EFE9AB4A9AA0C(iParam0->f_8, iParam0->f_9, sParam1, sParam2);
		unk_0x026FB97D0A425F84(iParam0->f_8, true);
		unk_0x07E5B515DB0636FC(true, false, 3000, true, true, 0);
	}
}

void func_253(int* iParam0)
{
	if (!unk_0xA921AA820C25702F(iParam0->f_3, 3))
	{
		unk_0x11B56FBBF7224868("CONTRAILS");
		if (func_241(iParam0))
		{
			unk_0xC23DE0E91C30B58C("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0xC23DE0E91C30B58C("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0xB56BBBCC2955D9CB())
		{
			if (iParam0->f_295)
			{
				if (func_241(iParam0))
				{
					unk_0x4C61C75BEE8184C2("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0x4C61C75BEE8184C2("MP_Male_Character", 0, 1);
				}
			}
			func_254();
		}
		if (unk_0xC59F528E9AB9F339())
		{
			unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 3);
		}
	}
}

void func_254()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0x4C61C75BEE8184C2(func_240(iVar0), 0, 1);
		iVar0++;
	}
}

int func_255(int* iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!unk_0xA921AA820C25702F(iParam0->f_3, 2))
	{
		unk_0x963D27A58DF860AC(joaat("p_cs_mp_jet_01_s"));
		unk_0x963D27A58DF860AC(joaat("mp_m_freemode_01"));
		unk_0x963D27A58DF860AC(joaat("mp_f_freemode_01"));
		if (iParam0->f_294)
		{
			unk_0x944955FB2A3935C8();
		}
		if (((unk_0x98A4EB5D89A0C952(joaat("p_cs_mp_jet_01_s")) && unk_0x98A4EB5D89A0C952(joaat("mp_m_freemode_01"))) && unk_0x98A4EB5D89A0C952(joaat("mp_f_freemode_01"))) && (!iParam0->f_294 || unk_0xCA7D9B86ECA7481B()))
		{
			iParam0->f_33 = unk_0x509D5878EB39E842(joaat("p_cs_mp_jet_01_s"), Var1, false, false, false);
			unk_0x5927F96A78577363(iParam0->f_33, 3000);
			unk_0x3910051CCECDB00C(iParam0->f_33, false);
			unk_0xEA1C610A04DB6BBB(iParam0->f_33, false);
			if (iParam0->f_294)
			{
				iParam0->f_120 = unk_0x1AE42C1660FD6517("scr_mp_intro_plane_exhaust", iParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1f, false, false, false);
				iParam0->f_121 = unk_0x1AE42C1660FD6517("scr_mp_intro_plane_exhaust", iParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1f, false, false, false);
			}
			if (iParam0->f_295)
			{
				func_259(iParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_258(iParam0, iVar0))
				{
					iParam0->f_104[iVar0] = unk_0xD49F9B0955C367DE(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, false, false);
				}
				else
				{
					iParam0->f_104[iVar0] = unk_0xD49F9B0955C367DE(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, false, false);
				}
				if (func_257(iParam0, iVar0))
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0x43A66C31C68491C0(unk_0x41BD2A6B006AF756(iParam0->f_112[iVar0]))))
					{
					}
					unk_0xE952D6431689AD9A(unk_0x43A66C31C68491C0(unk_0x41BD2A6B006AF756(iParam0->f_112[iVar0])), iParam0->f_104[iVar0]);
					unk_0x4668D80430D6C299(iParam0->f_104[iVar0]);
				}
				else
				{
					func_256(iParam0, iVar0);
				}
				iVar0++;
			}
			unk_0xE532F5D78798DAAB(joaat("p_cs_mp_jet_01_s"));
			unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_256(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 1);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 2);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 3);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 4);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 5);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 6);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 7);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 1);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 2);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 3);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 4);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 5);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 6);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 7);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 1);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 2);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 3);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 4);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 5);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 6);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 7);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 1);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 2);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 3);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 4);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 5);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 6);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 7);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 1);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 2);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 3);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 4);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 5);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 6);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 7);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 1);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 2);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 3);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 4);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 5);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 6);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 7);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x262B14F48D29DE80(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 0);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 1);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 2);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 3);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 4);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 5);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 6);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 7);
			unk_0x0943E5B8E078E76E(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_257(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_12(unk_0x41BD2A6B006AF756(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, int iParam1)
{
	if (func_257(uParam0, iParam1))
	{
		return func_243(unk_0x41BD2A6B006AF756(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_259(var uParam0)
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
		iVar2 = unk_0x41BD2A6B006AF756(iVar1);
		if (func_12(iVar2, 0, 1))
		{
			if (unk_0x4F8644AF03D0E0D6() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_260(iVar0)] = iVar1;
					iVar0++;
				}
			}
		}
		iVar1++;
	}
}

int func_260(int iParam0)
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

int func_261(int* iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (unk_0xA921AA820C25702F(iParam0->f_3, 9))
	{
		return 1;
	}
	unk_0x963D27A58DF860AC(iVar0);
	unk_0x963D27A58DF860AC(iVar1);
	unk_0xAF514CABE74CBF15(5, "FMINTRO");
	unk_0xAF514CABE74CBF15(6, "FMINTRO");
	unk_0xAF514CABE74CBF15(7, "FMINTRO");
	unk_0xD3BD40951412FEF6("mp_intro_seq@");
	if (((((unk_0x98A4EB5D89A0C952(iVar0) && unk_0x98A4EB5D89A0C952(iVar1)) && unk_0x300D614A4C785FC4(5, "FMINTRO")) && unk_0x300D614A4C785FC4(6, "FMINTRO")) && unk_0x300D614A4C785FC4(7, "FMINTRO")) && unk_0xD031A9162D01088C("mp_intro_seq@"))
	{
		if (!unk_0x7239B21A38F536BA(iParam0->f_34))
		{
			unk_0xA56F01F3765B93A0(-1034.035f, -2730.485f, 19.0565f, 3f, true, false, false, false);
			iParam0->f_34 = unk_0xAF35D0D2583051B0(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0);
			unk_0xACAD101E1FB66689(iParam0->f_34, true);
			unk_0x3B988190C0AA6C0B(iParam0->f_34, false);
			unk_0xFAEE099C6F890BB8(iParam0->f_34, true, true, true, true, true, true, true, false);
		}
		else if (!unk_0x7239B21A38F536BA(iParam0->f_35))
		{
			if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
			{
				iParam0->f_35 = unk_0xD49F9B0955C367DE(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, false, false);
				unk_0xC20E50AA46D09CA8(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
				unk_0x9F8AA94D6D97DBF4(iParam0->f_35, true);
				unk_0x3882114BDE571AD4(iParam0->f_34, true);
				unk_0x3882114BDE571AD4(iParam0->f_35, true);
				unk_0xC80A74AC829DDD92(iParam0->f_35, unk_0x7DBDD04862D95F04(unk_0xD80958FC74E988A6()));
				unk_0xFAEE099C6F890BB8(iParam0->f_35, true, true, true, true, true, true, true, false);
			}
		}
	}
	if (!unk_0x7239B21A38F536BA(iParam0->f_34) || !unk_0x7239B21A38F536BA(iParam0->f_35))
	{
		return 0;
	}
	unk_0xE532F5D78798DAAB(iVar0);
	unk_0xE532F5D78798DAAB(iVar1);
	unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 9);
	return 1;
}

void func_262(int* iParam0)
{
	int iVar0;
	
	if (!unk_0xA921AA820C25702F(iParam0->f_3, 0))
	{
		func_272();
		func_270();
		if (func_264(iParam0))
		{
			if (func_263(iParam0))
			{
				if (!unk_0xA7A932170592B50E(iParam0->f_7))
				{
					iParam0->f_7 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", false);
				}
				unk_0xBFD8727AEA3CCEBA(iParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0xE532F5D78798DAAB(func_246(iVar0));
					iVar0++;
				}
				unk_0xE532F5D78798DAAB(func_244());
				unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 0);
			}
		}
	}
}

int func_263(var uParam0)
{
	int iVar0;
	
	iVar0 = func_244();
	if (!unk_0x7239B21A38F536BA(uParam0->f_91))
	{
		if (unk_0x7239B21A38F536BA(uParam0->f_49[2]))
		{
			if (unk_0x35B9E0803292B641(iVar0))
			{
				if (unk_0x98A4EB5D89A0C952(iVar0))
				{
					if (unk_0xD031A9162D01088C("MP_INTRO_SEQ@"))
					{
						if (!unk_0x5F9532F3B5CC2551(uParam0->f_49[2]))
						{
							uParam0->f_10 = unk_0x8C18E0F9080ADD73(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x272E4723B56A3B96(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0xD49F9B0955C367DE(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, false, false);
							unk_0x9F8AA94D6D97DBF4(uParam0->f_91, true);
							unk_0xEEA929141F699854(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1000f, 0);
							unk_0xD9A897A4C6C2974F(uParam0->f_10, true);
							unk_0x428CA6DBD1094446(uParam0->f_91, true);
							unk_0x1A9205C1B9EE827F(uParam0->f_91, false, false);
							unk_0x4899CB088EDF59B8(uParam0->f_91, joaat("gadget_parachute"));
							unk_0x262B14F48D29DE80(uParam0->f_91, 0, 1, 1, 0);
							unk_0x262B14F48D29DE80(uParam0->f_91, 1, 0, 0, 0);
							unk_0x262B14F48D29DE80(uParam0->f_91, 2, 0, 2, 0);
							unk_0x262B14F48D29DE80(uParam0->f_91, 3, 0, 2, 0);
							unk_0x262B14F48D29DE80(uParam0->f_91, 4, 1, 0, 0);
							unk_0x262B14F48D29DE80(uParam0->f_91, 5, 0, 0, 0);
							unk_0x262B14F48D29DE80(uParam0->f_91, 6, 0, 0, 0);
							unk_0x262B14F48D29DE80(uParam0->f_91, 7, 0, 0, 0);
							unk_0x262B14F48D29DE80(uParam0->f_91, 8, 0, 0, 0);
							unk_0x262B14F48D29DE80(uParam0->f_91, 9, 0, 0, 0);
							unk_0x262B14F48D29DE80(uParam0->f_91, 10, 0, 0, 0);
							unk_0x262B14F48D29DE80(uParam0->f_91, 11, 0, 0, 0);
							unk_0x0943E5B8E078E76E(uParam0->f_91, 0);
							unk_0x0943E5B8E078E76E(uParam0->f_91, 1);
							unk_0x0943E5B8E078E76E(uParam0->f_91, 2);
							unk_0x0943E5B8E078E76E(uParam0->f_91, 3);
							unk_0x0943E5B8E078E76E(uParam0->f_91, 4);
							unk_0x0943E5B8E078E76E(uParam0->f_91, 5);
							unk_0x0943E5B8E078E76E(uParam0->f_91, 6);
							unk_0x0943E5B8E078E76E(uParam0->f_91, 7);
							unk_0x0943E5B8E078E76E(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!unk_0x7239B21A38F536BA(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_264(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (!unk_0xA921AA820C25702F(uParam0->f_2, 31))
	{
		func_272();
		iVar5 = 0;
		while (iVar5 < 8)
		{
			func_269(iVar5, &Var1, &fVar4);
			if (!func_268(Var1, 0f, 0f, 0f))
			{
				if (!unk_0x7239B21A38F536BA(uParam0->f_49[iVar5]))
				{
					iVar0 = func_246(iVar5);
					if (unk_0x35B9E0803292B641(iVar0))
					{
						if (unk_0x98A4EB5D89A0C952(iVar0))
						{
							uParam0->f_49[iVar5] = unk_0xAF35D0D2583051B0(iVar0, Var1, fVar4, 0, 0);
							unk_0x3910051CCECDB00C(uParam0->f_49[iVar5], true);
							unk_0x79D3B596FE44EE8B(uParam0->f_49[iVar5], 0f);
							unk_0xAB04325045427AAE(uParam0->f_49[iVar5], false);
							if (iVar5 == 2)
							{
								unk_0x7C65DAC73C35C862(uParam0->f_49[iVar5], 4, false, true);
								unk_0xF2BFA0430F0A0FCB(uParam0->f_49[iVar5], 4, 0, 1f);
							}
							func_267(uParam0, iVar5);
							func_266(uParam0, iVar5);
							unk_0xE532F5D78798DAAB(iVar0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 8)
		{
			if (!unk_0x7239B21A38F536BA(uParam0->f_49[iVar5]))
			{
				return 0;
			}
			if (!unk_0xA921AA820C25702F(uParam0->f_2, iVar5))
			{
				if (func_265(uParam0, iVar5))
				{
					unk_0x933D6A9EEC1BACD0(&(uParam0->f_2), iVar5);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x4C241E39B23DF959(uParam0->f_49[iVar5], false))
			{
				if (!unk_0x9A83F5F9963775EF(uParam0->f_49[iVar5]))
				{
					return 0;
				}
			}
			iVar5++;
		}
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_265(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0x4C241E39B23DF959(uParam0->f_49[iParam1], false))
			{
				if (unk_0x33F2E3FE70EAAE1D(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 0, 1, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 1, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 2, 1, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 3, 1, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 4, 1, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 5, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 7, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 10, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 12, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 14, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 15, 4, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 23, 11, false);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x4C241E39B23DF959(uParam0->f_49[iParam1], false))
			{
				if (unk_0x33F2E3FE70EAAE1D(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 12, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 15, 3, false);
					unk_0x2A1F4F37F95BAD08(uParam0->f_49[iParam1], 22, true);
					unk_0xEB9DC3C7D8596C46(uParam0->f_49[iParam1], false);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0x4C241E39B23DF959(uParam0->f_49[iParam1], false))
			{
				if (unk_0x33F2E3FE70EAAE1D(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 0, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 4, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 14, 5, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 15, 3, false);
					unk_0x2A1F4F37F95BAD08(uParam0->f_49[iParam1], 22, true);
					unk_0xEB9DC3C7D8596C46(uParam0->f_49[iParam1], false);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0x4C241E39B23DF959(uParam0->f_49[iParam1], false))
			{
				if (unk_0x33F2E3FE70EAAE1D(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 15, 3, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 23, 11, false);
					unk_0x2A1F4F37F95BAD08(uParam0->f_49[iParam1], 22, true);
					unk_0xEB9DC3C7D8596C46(uParam0->f_49[iParam1], false);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x4C241E39B23DF959(uParam0->f_49[iParam1], false))
			{
				if (unk_0x33F2E3FE70EAAE1D(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 1, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 2, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 4, 1, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 7, 1, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 11, 3, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 12, 2, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 13, 2, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 15, 3, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 16, 4, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 23, 5, false);
					unk_0x2A1F4F37F95BAD08(uParam0->f_49[iParam1], 22, true);
					unk_0xEB9DC3C7D8596C46(uParam0->f_49[iParam1], false);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0x4C241E39B23DF959(uParam0->f_49[iParam1], false))
			{
				if (unk_0x33F2E3FE70EAAE1D(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 0, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 1, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 2, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 3, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 4, 1, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 6, 2, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 10, 3, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 14, 7, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 15, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 23, 5, false);
					unk_0x2A1F4F37F95BAD08(uParam0->f_49[iParam1], 22, true);
					unk_0xEB9DC3C7D8596C46(uParam0->f_49[iParam1], false);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0x4C241E39B23DF959(uParam0->f_49[iParam1], false))
			{
				if (unk_0x33F2E3FE70EAAE1D(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 1, 1, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 4, 1, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 8, 0, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 14, 7, false);
					unk_0x6AF0636DDEDCB6DD(uParam0->f_49[iParam1], 23, 0, false);
					unk_0x2A1F4F37F95BAD08(uParam0->f_49[iParam1], 22, true);
					unk_0xEB9DC3C7D8596C46(uParam0->f_49[iParam1], false);
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

void func_266(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x1F2AA07F00B3217A(uParam0->f_49[iParam1], 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 0, 1);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 1, 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 2, 1);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 3, 1);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 4, 1);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 5, 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 7, 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 10, 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0x1F2AA07F00B3217A(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0x1F2AA07F00B3217A(uParam0->f_49[iParam1], 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 0, 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0x1F2AA07F00B3217A(uParam0->f_49[iParam1], 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0x1F2AA07F00B3217A(uParam0->f_49[iParam1], 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 1, 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 2, 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 4, 1);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 7, 1);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0x1F2AA07F00B3217A(uParam0->f_49[iParam1], 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 0, 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 1, 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 2, 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 3, 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 4, 1);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 6, 2);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 10, 3);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0x1F2AA07F00B3217A(uParam0->f_49[iParam1], 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 1, 1);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 4, 1);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 8, 0);
			unk_0x758F49C24925568A(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_267(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x4F1D4BE3A7F24601(uParam0->f_49[iParam1], 83, 134);
			unk_0x2036F561ADD12E33(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0x4F1D4BE3A7F24601(uParam0->f_49[iParam1], 0, 0);
			unk_0x2036F561ADD12E33(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0x4F1D4BE3A7F24601(uParam0->f_49[iParam1], 49, 0);
			unk_0x2036F561ADD12E33(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0x4F1D4BE3A7F24601(uParam0->f_49[iParam1], 0, 0);
			unk_0x2036F561ADD12E33(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0x4F1D4BE3A7F24601(uParam0->f_49[iParam1], 43, 5);
			unk_0x2036F561ADD12E33(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0x4F1D4BE3A7F24601(uParam0->f_49[iParam1], 3, 3);
			unk_0x2036F561ADD12E33(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0x4F1D4BE3A7F24601(uParam0->f_49[iParam1], 35, 0);
			unk_0x2036F561ADD12E33(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_268(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_269(int iParam0, var uParam1, var uParam2)
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

void func_270()
{
	unk_0x963D27A58DF860AC(func_244());
	unk_0xD3BD40951412FEF6(func_271());
}

char* func_271()
{
	return "MP_INTRO_SEQ@";
}

void func_272()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		unk_0x963D27A58DF860AC(func_246(iVar0));
		iVar0++;
	}
}

void func_273(int* iParam0, float fParam1, float fParam2)
{
	func_217(iParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_217(iParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_217(iParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_217(iParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_217(iParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_274(int* iParam0, int iParam1)
{
	int iVar0;
	int* iVar1;
	
	switch (iParam1)
	{
		case 14:
			func_275(iParam0, 0, -2997.174f, 330.9234f, 14.2341f, -15.97f, &iVar1, 1);
			func_275(iParam0, 2, -2983.9f, 423.7414f, 14.4122f, -5.25f, &iVar1, 1);
			break;
		
		case 15:
			func_275(iParam0, 1, -2622.208f, -109.3386f, 19.2643f, 39.34f, &iVar1, 1);
			func_275(iParam0, 3, -2583.95f, -143.6469f, 20.6224f, 48.89f, &iVar1, 1);
			func_275(iParam0, 7, -2552.145f, -169.0495f, 19.8664f, 60.04f, &iVar1, 1);
			func_275(iParam0, 8, -2531.474f, -174.4581f, 19.2269f, 58.09f, &iVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_275(iParam0, 0, -2420.618f, -232.2668f, 15.3525f, 57.71f, &iVar1, 1);
			func_275(iParam0, 2, -2399.709f, -249.2471f, 14.9551f, 58.19f, &iVar1, 1);
			func_275(iParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &iVar1, 1);
			func_275(iParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &iVar1, 1);
			func_275(iParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &iVar1, 1);
			func_275(iParam0, 9, -2408.733f, -238.8328f, 15.2055f, 59.84f, &iVar1, 1);
			break;
		
		case 18:
			func_275(iParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &iVar1, 1);
			func_275(iParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &iVar1, 1);
			func_275(iParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &iVar1, 1);
			func_275(iParam0, 8, -2191.429f, -335.8769f, 12.7225f, 84.71f, &iVar1, 1);
			break;
		
		case 19:
			func_275(iParam0, 0, -1833.87f, -561.7711f, 11.0989f, 48.11f, &iVar1, 1);
			func_275(iParam0, 1, -1630.587f, -685.6821f, 16.5351f, 58.23f, &iVar1, 1);
			func_275(iParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &iVar1, 1);
			func_275(iParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &iVar1, 1);
			func_275(iParam0, 4, -1706.507f, -720.8959f, 9.6281f, -132.94f, &iVar1, 1);
			func_275(iParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &iVar1, 1);
			func_275(iParam0, 6, -1782.764f, -610.5726f, 10.3008f, 52.34f, &iVar1, 1);
			func_275(iParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &iVar1, 1);
			func_275(iParam0, 8, -1751.892f, -682.1017f, 9.6795f, -134.89f, &iVar1, 1);
			func_275(iParam0, 9, -1742.098f, -642.5658f, 9.8169f, 48.19f, &iVar1, 1);
			break;
		
		case 33:
			func_275(iParam0, 0, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &iVar1, 0);
			func_275(iParam0, 5, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &iVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_275(iParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &iVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_275(iParam0, 0, -712.0925f, -1983.516f, 25.688f, -167.99f, &iVar1, 0);
			func_275(iParam0, 1, -533.9934f, -2004.727f, 26.9085f, 58.71f, &iVar1, 0);
			func_275(iParam0, 2, -653.3551f, -2047.782f, 27.3566f, -112.14f, &iVar1, 0);
			func_275(iParam0, 3, -663.821f, -1934.85f, 27.1417f, -121.65f, &iVar1, 0);
			func_275(iParam0, 4, -656.6017f, -2009.078f, 30.0188f, -106.53f, &iVar1, 0);
			func_275(iParam0, 5, -502.696f, -2023.068f, 26.2376f, 60.2827f, &iVar1, 0);
			func_275(iParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &iVar1, 0);
			func_275(iParam0, 7, -624.7944f, -1960.975f, 26.29f, 237.3848f, &iVar1, 0);
			func_275(iParam0, 8, -463.0545f, -1998.255f, 36.6533f, 27.85f, &iVar1, 0);
			func_275(iParam0, 9, -473.4099f, -1950.213f, 24.7576f, 37.16f, &iVar1, 0);
			func_275(iParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &iVar1, 0);
			func_275(iParam0, 11, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &iVar1, 0);
			func_275(iParam0, 12, -584.929f, -1970.332f, 26.2437f, 55.8826f, &iVar1, 0);
			func_275(iParam0, 13, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &iVar1, 0);
			func_275(iParam0, 14, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &iVar1, 0);
			break;
		
		case 39:
			func_275(iParam0, 4, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &iVar1, 0);
			func_275(iParam0, 9, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &iVar1, 0);
			break;
		
		case 40:
			func_275(iParam0, 3, -270.2197f, -1499.752f, 29.4309f, -13.07f, &iVar1, 0);
			func_275(iParam0, 7, -313.1461f, -1559.589f, 24.2966f, 145.66f, &iVar1, 0);
			func_275(iParam0, 8, -301.9485f, -1550.052f, 25.5595f, 146.95f, &iVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_275(iParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &iVar1, 0);
			func_275(iParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &iVar1, 0);
			func_275(iParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &iVar1, 0);
			break;
		
		case 44:
			func_275(iParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &iVar1, 0);
			func_275(iParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &iVar1, 0);
			func_275(iParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &iVar1, 0);
			break;
		
		case 45:
			func_275(iParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &iVar1, 0);
			func_275(iParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &iVar1, 0);
			func_275(iParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &iVar1, 0);
			func_275(iParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &iVar1, 0);
			func_275(iParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &iVar1, 0);
			func_275(iParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &iVar1, 0);
			func_275(iParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &iVar1, 0);
			func_275(iParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &iVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_275(iParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &iVar1, 0);
			func_275(iParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &iVar1, 0);
			func_275(iParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &iVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_275(iParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &iVar1, 0);
			func_275(iParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &iVar1, 0);
			func_275(iParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &iVar1, 0);
			func_275(iParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &iVar1, 0);
			func_275(iParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &iVar1, 0);
			func_275(iParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &iVar1, 0);
			func_275(iParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &iVar1, 0);
			func_275(iParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &iVar1, 0);
			break;
		
		case 50:
			break;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xA921AA820C25702F(iVar1, iVar0))
		{
			func_193(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_275(var uParam0, int iParam1, struct<3> Param2, float fParam5, int* iParam6, bool bParam7)
{
	if (unk_0x4C241E39B23DF959(uParam0->f_58[iParam1], false) && !unk_0x84A2DD9AC37C35C1(uParam0->f_74[iParam1]))
	{
		unk_0x428CA6DBD1094446(uParam0->f_58[iParam1], false);
		unk_0x1A9205C1B9EE827F(uParam0->f_58[iParam1], true, false);
		unk_0x06843DA7060A026B(uParam0->f_58[iParam1], Param2, true, false, false, true);
		unk_0x8E2530AA8ADA980E(uParam0->f_58[iParam1], fParam5);
		unk_0x49733E92263139D1(uParam0->f_58[iParam1]);
		unk_0x115722B1B9C14C1C(uParam0->f_58[iParam1]);
		if (bParam7)
		{
			unk_0x659427E0EF36BCDE(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, true);
			unk_0xAB54A438726D25D5(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			unk_0x659427E0EF36BCDE(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, true);
			unk_0xAB54A438726D25D5(uParam0->f_58[iParam1], 10f);
		}
		unk_0x971D38760FBC02EF(uParam0->f_74[iParam1], true);
		unk_0xEA1C610A04DB6BBB(uParam0->f_58[iParam1], true);
		unk_0xEA1C610A04DB6BBB(uParam0->f_74[iParam1], true);
		unk_0x933D6A9EEC1BACD0(iParam6, iParam1);
	}
}

void func_276(int* iParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param6, float fParam9, float fParam10)
{
	if (!unk_0xA7A932170592B50E(iParam0->f_8))
	{
		iParam0->f_8 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", false);
	}
	iParam0->f_9 = -1;
	iParam0->f_9 = unk_0x8C18E0F9080ADD73(Param3, Param6, 2);
	unk_0xE32EFE9AB4A9AA0C(iParam0->f_8, iParam0->f_9, sParam1, sParam2);
	unk_0x734292F4F0ABF6D0(iParam0->f_9, fParam9);
	unk_0xB6C49F8A5E295A5D(iParam0->f_9, fParam10);
	unk_0x026FB97D0A425F84(iParam0->f_8, true);
	unk_0x07E5B515DB0636FC(true, false, 3000, true, true, 0);
}

void func_277(int* iParam0)
{
	unk_0xE532F5D78798DAAB(joaat("frogger"));
	unk_0xF1160ACCF98A3FC8(8, "FMIntro");
	if (unk_0x7239B21A38F536BA(iParam0->f_48))
	{
		unk_0xEA386986E786A54F(&(iParam0->f_48));
	}
}

int func_278(int* iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (unk_0xA921AA820C25702F(iParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_280();
		if (!unk_0x7239B21A38F536BA(iParam0->f_92[0]))
		{
			if (unk_0x98A4EB5D89A0C952(joaat("cheetah")))
			{
				iParam0->f_92[0] = unk_0xAF35D0D2583051B0(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0);
				unk_0x3B988190C0AA6C0B(iParam0->f_92[0], false);
				unk_0xEB9DC3C7D8596C46(iParam0->f_92[0], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x7239B21A38F536BA(iParam0->f_92[1]))
		{
			if (unk_0x98A4EB5D89A0C952(joaat("entityxf")))
			{
				iParam0->f_92[1] = unk_0xAF35D0D2583051B0(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0);
				unk_0x3B988190C0AA6C0B(iParam0->f_92[1], false);
				unk_0x77B21BE7AC540F07(iParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				unk_0x33E8CD3322E2FE31(iParam0->f_92[1], 8);
				unk_0xEB9DC3C7D8596C46(iParam0->f_92[1], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x7239B21A38F536BA(iParam0->f_92[2]))
		{
			if (unk_0x98A4EB5D89A0C952(joaat("monroe")))
			{
				iParam0->f_92[2] = unk_0xAF35D0D2583051B0(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0);
				unk_0x3B988190C0AA6C0B(iParam0->f_92[2], false);
				unk_0x77B21BE7AC540F07(iParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				unk_0x33E8CD3322E2FE31(iParam0->f_92[2], 2);
				unk_0xEB9DC3C7D8596C46(iParam0->f_92[2], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x7239B21A38F536BA(iParam0->f_92[3]))
		{
			if (unk_0x98A4EB5D89A0C952(joaat("cheetah")))
			{
				iParam0->f_92[3] = unk_0xAF35D0D2583051B0(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0);
				unk_0x3B988190C0AA6C0B(iParam0->f_92[3], false);
				unk_0x77B21BE7AC540F07(iParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				unk_0x33E8CD3322E2FE31(iParam0->f_92[3], 15);
				unk_0xEB9DC3C7D8596C46(iParam0->f_92[3], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x7239B21A38F536BA(iParam0->f_92[4]))
		{
			if (unk_0x98A4EB5D89A0C952(joaat("feltzer2")))
			{
				iParam0->f_92[4] = unk_0xAF35D0D2583051B0(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0);
				unk_0x3B988190C0AA6C0B(iParam0->f_92[4], false);
				unk_0x77B21BE7AC540F07(iParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				unk_0x4F1D4BE3A7F24601(iParam0->f_92[4], 0, 0);
				unk_0x2036F561ADD12E33(iParam0->f_92[4], 0, 156);
				unk_0x1F2AA07F00B3217A(iParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0x4C241E39B23DF959(iParam0->f_92[4], false))
		{
			if (!unk_0xA921AA820C25702F(iParam0->f_3, 1))
			{
				if (unk_0x33F2E3FE70EAAE1D(iParam0->f_92[4]) > 0)
				{
					unk_0x2A1F4F37F95BAD08(iParam0->f_92[4], 22, true);
					unk_0xEB9DC3C7D8596C46(iParam0->f_92[4], false);
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0x98A4EB5D89A0C952(func_225()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0x7239B21A38F536BA(iParam0->f_98[iVar1]))
				{
					if (unk_0x7239B21A38F536BA(iParam0->f_92[iVar1]))
					{
						if (unk_0x4C241E39B23DF959(iParam0->f_92[iVar1], false))
						{
							iParam0->f_98[iVar1] = unk_0x7DD959874C1FD534(iParam0->f_92[iVar1], 4, func_225(), -1, false, false);
							unk_0x9F8AA94D6D97DBF4(iParam0->f_98[iVar1], true);
							unk_0x2497C4717C8B881E(iParam0->f_92[iVar1], 1, 1);
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
			unk_0xE532F5D78798DAAB(joaat("cheetah"));
			unk_0xE532F5D78798DAAB(joaat("monroe"));
			unk_0xE532F5D78798DAAB(joaat("entityxf"));
			unk_0xE532F5D78798DAAB(joaat("feltzer2"));
			unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_279()
{
	func_280();
	if (unk_0x98A4EB5D89A0C952(func_225()))
	{
		if (unk_0x98A4EB5D89A0C952(joaat("cheetah")))
		{
			if (unk_0x98A4EB5D89A0C952(joaat("monroe")))
			{
				if (unk_0x98A4EB5D89A0C952(joaat("entityxf")))
				{
					if (unk_0x98A4EB5D89A0C952(joaat("feltzer2")))
					{
						if (unk_0x300D614A4C785FC4(100, "FM_Intro_uber"))
						{
							if (unk_0x300D614A4C785FC4(101, "FM_Intro_uber"))
							{
								if (unk_0x300D614A4C785FC4(102, "FM_Intro_uber"))
								{
									if (unk_0x300D614A4C785FC4(103, "FM_Intro_uber"))
									{
										if (unk_0x300D614A4C785FC4(104, "FM_Intro_uber"))
										{
											if (unk_0xD031A9162D01088C("mp_intro_seq@"))
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

void func_280()
{
	unk_0x963D27A58DF860AC(joaat("cheetah"));
	unk_0x963D27A58DF860AC(joaat("monroe"));
	unk_0x963D27A58DF860AC(joaat("entityxf"));
	unk_0x963D27A58DF860AC(joaat("feltzer2"));
	unk_0x963D27A58DF860AC(func_225());
	unk_0xAF514CABE74CBF15(100, "FM_Intro_uber");
	unk_0xAF514CABE74CBF15(101, "FM_Intro_uber");
	unk_0xAF514CABE74CBF15(102, "FM_Intro_uber");
	unk_0xAF514CABE74CBF15(103, "FM_Intro_uber");
	unk_0xAF514CABE74CBF15(104, "FM_Intro_uber");
	unk_0xD3BD40951412FEF6("mp_intro_seq@");
}

int func_281(int* iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (unk_0xA921AA820C25702F(iParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0x963D27A58DF860AC(joaat("asterope"));
		unk_0x963D27A58DF860AC(joaat("sentinel"));
		unk_0x963D27A58DF860AC(func_225());
		if ((unk_0x98A4EB5D89A0C952(joaat("asterope")) && unk_0x98A4EB5D89A0C952(joaat("sentinel"))) && unk_0x98A4EB5D89A0C952(func_225()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0x7239B21A38F536BA(iParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_194(iVar0, &Var2, &fVar5);
					iParam0->f_58[iVar0] = unk_0xAF35D0D2583051B0(iVar1, Var2, fVar5, 0, 0);
					unk_0x33E8CD3322E2FE31(iParam0->f_58[iVar0], iVar0);
					unk_0x3882114BDE571AD4(iParam0->f_58[iVar0], true);
					unk_0x34E710FF01247C5A(iParam0->f_58[iVar0], 2);
					unk_0x428CA6DBD1094446(iParam0->f_58[iVar0], true);
				}
				if (unk_0x7239B21A38F536BA(iParam0->f_58[iVar0]))
				{
					if (!unk_0x7239B21A38F536BA(iParam0->f_74[iVar0]))
					{
						iParam0->f_74[iVar0] = unk_0x7DD959874C1FD534(iParam0->f_58[iVar0], 4, func_225(), -1, false, false);
						unk_0x3882114BDE571AD4(iParam0->f_74[iVar0], true);
						unk_0x9F8AA94D6D97DBF4(iParam0->f_74[iVar0], true);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0x7239B21A38F536BA(iParam0->f_58[iVar0]) || !unk_0x7239B21A38F536BA(iParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0xE532F5D78798DAAB(joaat("asterope"));
		unk_0xE532F5D78798DAAB(joaat("sentinel"));
		unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_282(int* iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_207(iParam0, iParam1, 0);
	if (iParam0->f_293)
	{
		if ((iParam0->f_13 + iVar0) + iParam2) <= unk_0x9CD27B0045628463()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_215(iParam0)
	{
		return 1;
	}
	return 0;
}

int func_283(int* iParam0)
{
	int iVar0;
	
	if (unk_0xA921AA820C25702F(iParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	unk_0x963D27A58DF860AC(iVar0);
	unk_0xAF514CABE74CBF15(8, "FMIntro");
	if (unk_0x98A4EB5D89A0C952(iVar0) && unk_0x300D614A4C785FC4(8, "FMIntro"))
	{
		if (!unk_0x7239B21A38F536BA(iParam0->f_48))
		{
			iParam0->f_48 = unk_0xAF35D0D2583051B0(iVar0, unk_0xD242728AA6F0FBA2(8, 0f, "FMIntro"), 0f, 0, 0);
			unk_0x3F878F92B3A7A071(iParam0->f_48, 8, "FMIntro", true);
			unk_0x9438F7AD68771A20(iParam0->f_48, 5000f);
			unk_0x632A689BF42301B1(iParam0->f_48);
			unk_0xEA1C610A04DB6BBB(iParam0->f_48, false);
			unk_0xE532F5D78798DAAB(iVar0);
		}
	}
	if (!unk_0x7239B21A38F536BA(iParam0->f_48))
	{
		return 0;
	}
	unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 8);
	return 1;
}

void func_284(int* iParam0, int iParam1)
{
	if (func_282(iParam0, iParam1, 0))
	{
		if (iParam0->f_293)
		{
			iParam0->f_13 = (unk_0x9CD27B0045628463() - func_207(iParam0, iParam1, 0));
		}
		else
		{
			iParam0->f_291 = 1;
		}
	}
}

void func_285(int* iParam0)
{
	iParam0->f_13 = unk_0x9CD27B0045628463();
}

Vector3 func_286(struct<3> Param0)
{
	return (-unk_0x0BADBFA3B172435F(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), (unk_0xD0FFB162F40A139C(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), unk_0x0BADBFA3B172435F(Param0.f_0);
}

int func_287()
{
	return Global_1315830;
}

void func_288()
{
	unk_0x1A5AA1208AF5DB59(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, false, false, false);
	unk_0x1A5AA1208AF5DB59(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, false, false, false);
}

void func_289()
{
	func_200(0);
	func_199(1);
}

void func_290(bool bParam0, bool bParam1)
{
	func_294();
	func_292(1);
	unk_0x8DFCED7A656F8802(true);
	unk_0xCC33FA791322B9D9();
	func_232(1, 1, 1, 0);
	func_291();
	func_186(12, 1, -1);
	func_187(0);
	unk_0xDCD4EA924F42D01A(true, -1);
	unk_0xA0EBB943C300E693(false);
	unk_0xA6294919E56FF02A(false);
	func_292(1);
	func_238(1);
	Global_2421967.f_3012 = 1;
	if (bParam0)
	{
		if (!unk_0x6CC27C9FA2040220())
		{
			unk_0x9CA5DE655269FEC4(true, bParam1);
		}
	}
}

void func_291()
{
	func_187(0);
	func_186(4, 1, -1);
	func_186(6, 1, -1);
	func_186(7, 1, -1);
	func_186(3, 1, -1);
	func_186(1, 1, -1);
	func_186(2, 1, -1);
	func_186(11, 1, -1);
	func_186(13, 1, -1);
	func_186(14, 1, -1);
	func_186(16, 1, -1);
}

void func_292(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_95829)
	{
		unk_0x50085246ABD3FEFA(iVar0, bParam0);
		func_293(iVar0);
		iVar0++;
	}
}

void func_293(int iParam0)
{
	Global_95829[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_95829[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_95829[iParam0 /*28*/].f_4), "", 64);
	Global_95829[iParam0 /*28*/].f_23 = 0;
	Global_95829[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_95829[iParam0 /*28*/].f_27 = 0;
	Global_95829[iParam0 /*28*/].f_20 = 0;
	Global_95829[iParam0 /*28*/].f_22 = 0;
}

void func_294()
{
	Global_1312570 = 1;
	StringCopy(&(Global_1312570.f_1), unk_0x442E0A7EDE4A738A(), 24);
	Global_1312570.f_7 = unk_0xD24D37CC275948CC(&(Global_1312570.f_1));
}

int func_295()
{
	if (unk_0xB16FCE9DDC7BA182())
	{
		func_297(0);
		unk_0xDE81239437E8C5A8();
		return 1;
	}
	if (func_296() == 3)
	{
		func_297(2);
		unk_0xEFACC8AEF94430D5(250f);
	}
	if (unk_0x5CCABFFCA31DDE33() >= 250f)
	{
		unk_0xEFACC8AEF94430D5(250f);
	}
	if (unk_0x7B226C785A52A0A9() == 0)
	{
		unk_0xEFACC8AEF94430D5(250f);
	}
	if (unk_0x5CCABFFCA31DDE33() <= 0f)
	{
		func_297(0);
		return 1;
	}
	return 0;
}

int func_296()
{
	return Global_1312466.f_19;
}

void func_297(int iParam0)
{
	if (Global_1312466.f_19 != iParam0)
	{
		Global_1312466.f_19 = iParam0;
	}
}

void func_298(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_302(iParam0, &iVar1);
	if (!unk_0x0C515FAB3FF9EA92("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xBC5115A5A939DD15(iVar1))
			{
				return;
			}
			if (unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == iVar1)
			{
				func_301(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xBC5115A5A939DD15(iVar1))
			{
				return;
			}
			if (func_299(iParam0))
			{
				func_301(iParam0, 0);
			}
		}
		unk_0x6170941419D7D8EC(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_299(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_300(iParam0) };
	if (unk_0xA921AA820C25702F(Global_30779[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_300(var uParam0)
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
	while (iVar1 < 2)
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

void func_301(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_300(iParam0) };
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_30779[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_30779[Var0.f_1]), Var0.f_0);
	}
}

var func_302(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_303(iParam0) };
	*iParam1 = unk_0x05B7A89BD78797FC(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_303(int iParam0)
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
			Var5 = { func_304(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_304(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_304(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_304(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_304(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_304(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_304(7) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1048995[34 /*1425*/].f_146.f_1041 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_304(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_304(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_304(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_304(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_304(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_304(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_304(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_304(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_304(43) };
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
	return Var0;
}

struct<6> func_304(int iParam0)
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
	}
	return Var0;
}

int func_305()
{
	return Global_2435611;
}

bool func_306()
{
	return Global_2434969;
}

void func_307(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_311(bParam0);
	}
	func_309(0);
	func_308(66);
}

void func_308(int iParam0)
{
	var uVar0;
	
	uVar0 = func_287();
	Global_1315830 = iParam0;
}

void func_309(int iParam0)
{
	var uVar0;
	
	uVar0 = func_310();
	Global_1315829 = iParam0;
}

var func_310()
{
	return Global_1315829;
}

void func_311(bool bParam0)
{
	int iVar0;
	
	func_313(&Global_17018);
	unk_0x22A249A53034450A(false);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0x95C0A5BBDC189AA1();
			func_312(0);
			if (unk_0x7239B21A38F536BA(Global_1318683))
			{
				if (unk_0xDDE6DF5AE89981D2(Global_1318683, false))
				{
					if (!unk_0x0A7B270912999B3C(Global_1318683))
					{
						unk_0xAD738C3085FE7E11(Global_1318683, false, false);
					}
					unk_0x9614299DCB53E54B(&Global_1318683);
				}
			}
		}
	}
}

void func_312(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2436711 = 0;
	}
	Global_1312466.f_18 = iParam0;
}

void func_313(var uParam0)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0xA7A932170592B50E(uParam0->f_9))
	{
		if (unk_0xDFB2B516207D3534(uParam0->f_9))
		{
			func_314(0);
		}
		unk_0x865908C81A2C22E9(uParam0->f_9, false);
	}
	if (!Global_35919)
	{
		unk_0x0EF93E9F3D08C178(true);
		unk_0x487A82C650EB7799(0f);
		unk_0x0225778816FDC28C(0f);
	}
	Global_2404546.f_480 = 0f;
	unk_0x07E5B515DB0636FC(false, false, 0, true, false, 0);
}

void func_314(int iParam0)
{
	Global_17096 = iParam0;
}

void func_315(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_319(1);
	}
	else
	{
		func_316(iParam1);
	}
}

void func_316(int iParam0)
{
	if (iParam0 == 0)
	{
		if (unk_0xEF7D17BC6C85264C())
		{
			return;
		}
	}
	if (func_318() == 0 || unk_0xB0034A223497FFCB())
	{
		func_317(1);
		unk_0xDFC252D8A3E15AB7(false);
		unk_0xDFC252D8A3E15AB7(false);
	}
}

void func_317(int iParam0)
{
	if (Global_1312466.f_20 != iParam0)
	{
		Global_1312466.f_20 = iParam0;
	}
}

int func_318()
{
	return Global_1312466.f_20;
}

void func_319(int iParam0)
{
	if ((func_318() == 1 || unk_0xB0034A223497FFCB()) || iParam0)
	{
		func_317(0);
		unk_0xDFC252D8A3E15AB7(true);
		unk_0xDFC252D8A3E15AB7(true);
		unk_0xE1C8709406F2C41C();
	}
}

void func_320(bool bParam0)
{
	if (bParam0)
	{
		unk_0x34AD89078831A4BC();
		unk_0xCAA15F13EBD417FF(-1);
		unk_0x2AFD795EEAC8D30D(true);
		unk_0x608207E7A8FB787C(true);
		unk_0x245A6883D966D537(1f);
		unk_0xCB9E1EB3BE2AF4E9(3);
		unk_0x8C95333CFC3340F3(3);
	}
	else
	{
		unk_0xC12321827687FE4D(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, true);
		unk_0xCAA15F13EBD417FF(0);
		unk_0x2AFD795EEAC8D30D(false);
		unk_0x608207E7A8FB787C(false);
		unk_0x245A6883D966D537(0f);
		unk_0xCB9E1EB3BE2AF4E9(0);
		unk_0x8C95333CFC3340F3(0);
	}
}

void func_321(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	func_289();
	func_199(1);
	func_187(1);
	func_186(12, 1, -1);
	func_328();
	unk_0x19F21E63AE6EAE4E(false);
	if (bParam0)
	{
		unk_0xBF22E0F32968E967(unk_0x4F8644AF03D0E0D6(), bParam6);
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
	func_322(unk_0x4F8644AF03D0E0D6(), 0, iVar0, 1);
	if (bParam5)
	{
		if (unk_0xD125AE748725C6BC(unk_0xD80958FC74E988A6()))
		{
			unk_0x030983CA930B692D(unk_0xD80958FC74E988A6(), false);
		}
	}
}

void func_322(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
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
	int iVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (unk_0x18C1270EA7F199BC())
		{
			unk_0x5262CC1995D07E09(false);
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		iVar0 = iParam2;
		unk_0x8D32347D6D4C40A2(iParam0, bParam1, iVar0);
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
		if (!func_326())
		{
			bVar22 = false;
			if (bParam1 == 1)
			{
				bVar22 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar22 = true;
			}
			if (bVar9 == 1)
			{
				bVar22 = true;
			}
			if (bVar22)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xB8DFD30D6973E135(iParam0) && unk_0x5E9564D8246B909A(iParam0))
		{
			iVar23 = unk_0x43A66C31C68491C0(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x10FAB35428CCC9D7())
				{
					unk_0x416DBD4CD6ED8DD2(true);
				}
				else
				{
					unk_0xEA1C610A04DB6BBB(iVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x10FAB35428CCC9D7() && !bVar18)
					{
						unk_0x416DBD4CD6ED8DD2(false);
					}
					Global_2413868[iParam0 /*253*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_325(iVar23) && !unk_0x26AA915AD89BFB4B(iVar23))
				{
					if (!bVar21)
					{
						unk_0x1A9205C1B9EE827F(iVar23, true, false);
					}
				}
				if (!unk_0xB346476EF1A64897(iVar23))
				{
					if (!bVar20)
					{
						unk_0x428CA6DBD1094446(iVar23, false);
					}
					unk_0x3910051CCECDB00C(iVar23, true);
				}
				else if (!bVar20)
				{
					unk_0x428CA6DBD1094446(iVar23, false);
				}
				unk_0x63F58F7C80513AAD(iVar23, true);
				unk_0x239528EACDC3E7DE(iParam0, false);
				unk_0x4668D80430D6C299(iVar23);
				unk_0xB128377056A54E2A(iVar23, true);
				func_324();
				func_323();
				if (unk_0x02B15662D7F8886F())
				{
				}
				if (unk_0xA41A05B6CB741B85())
				{
				}
				Global_2413868[iParam0 /*253*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_325(iVar23) && !unk_0x26AA915AD89BFB4B(iVar23))
				{
					if (!bVar21)
					{
						unk_0x1A9205C1B9EE827F(iVar23, !bVar14, false);
					}
					if (!unk_0xB346476EF1A64897(iVar23))
					{
						if (!bVar20)
						{
							unk_0x428CA6DBD1094446(iVar23, bVar15);
						}
						if (!bVar15)
						{
							unk_0x3910051CCECDB00C(iVar23, true);
						}
					}
				}
				if (bVar9)
				{
					unk_0x239528EACDC3E7DE(iParam0, false);
				}
				else
				{
					unk_0x239528EACDC3E7DE(iParam0, true);
				}
				unk_0x63F58F7C80513AAD(iVar23, bVar16);
				if (bVar2)
				{
					if (!unk_0xD839450756ED5A80(iVar23) && !unk_0x997ABD671D25CA0B(iVar23, false))
					{
						unk_0xAAA34F8A7CB32098(iVar23);
					}
				}
			}
			iVar24 = 0;
			if (bVar1)
			{
				iVar24 |= 2;
			}
			if (bVar2)
			{
				iVar24 |= 4;
			}
			if (bVar3)
			{
				iVar24 |= 8;
			}
			if (bVar4)
			{
				iVar24 |= 16;
			}
			if (bVar5)
			{
				iVar24 |= 32;
			}
			if (bVar6)
			{
				iVar24 |= 64;
			}
			if (bVar7)
			{
				iVar24 |= 128;
			}
			if (bVar8)
			{
				iVar24 |= 256;
			}
			if (bVar9)
			{
				iVar24 |= 512;
			}
			if (bVar10)
			{
				iVar24 |= 1024;
			}
			if (bVar11)
			{
				iVar24 |= 2048;
			}
			if (bVar12)
			{
				iVar24 |= 4096;
			}
			unk_0x8D32347D6D4C40A2(iParam0, bParam1, iVar24);
		}
	}
}

void func_323()
{
	struct<2> Var0;
	
	Global_2421967.f_675 = 0;
	Global_2421967.f_676 = 0;
	Global_2421967.f_677 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404546.f_1374 = { Var0 };
}

void func_324()
{
	Global_2404546.f_537 = 0;
	Global_2404546.f_1415 = 0;
	Global_2404546.f_420 = 0;
	Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_204 = 0;
}

int func_325(int iParam0)
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x77F1BEB8863288D5(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_326()
{
	if (func_327() == 0)
	{
		return 1;
	}
	return 0;
}

int func_327()
{
	return Global_1312466.f_18;
}

void func_328()
{
	Global_17098.f_5 = 1;
}

void func_329(int iParam0)
{
	unk_0xC1E8A365BF3B29F2(unk_0x43A66C31C68491C0(iParam0), 346, true);
}

void func_330(int* iParam0)
{
	if (!unk_0xA921AA820C25702F(iParam0->f_3, 12))
	{
		unk_0x933D6A9EEC1BACD0(&(iParam0->f_3), 12);
	}
	else
	{
		if (iParam0->f_6 > 30)
		{
			if (!Global_1681489)
			{
				Global_1681489 = 1;
				Global_1681490 = 1;
			}
		}
		if (iParam0->f_6 > 31)
		{
			if (unk_0x85F01B8D5B90570E(Global_1681488))
			{
				if (iParam0->f_5 < 23)
				{
					switch (iParam0->f_5)
					{
						case 0:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 33)
								{
									if ((unk_0x2BDD44CC428A7EAE() == 9 || unk_0x2BDD44CC428A7EAE() == 10) || unk_0x2BDD44CC428A7EAE() == 8)
									{
										func_335("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_335("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_334("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("artdir", "AARON GARBUT", 210f, "|", 1);
									func_332("artdir", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 33, -3390))
							{
								func_331("artdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 1:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (func_282(iParam0, 33, -2940))
								{
									func_335("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_334("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_332("techdir", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 33, -450))
							{
								func_331("techdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 2:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 35)
								{
									func_335("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_334("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_332("assartdir", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (iParam0->f_6 > 35)
							{
								func_331("assartdir", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 3:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 36)
								{
									if ((unk_0x2BDD44CC428A7EAE() == 9 || unk_0x2BDD44CC428A7EAE() == 10) || unk_0x2BDD44CC428A7EAE() == 8)
									{
										func_335("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_335("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_334("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_332("asstecdir", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 36, -4740))
							{
								func_331("asstecdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 4:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (func_282(iParam0, 36, -3810))
								{
									func_335("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_334("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_332("leadprog", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 36, -600))
							{
								func_331("leadprog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 5:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 37)
								{
									if ((unk_0x2BDD44CC428A7EAE() == 9 || unk_0x2BDD44CC428A7EAE() == 10) || unk_0x2BDD44CC428A7EAE() == 8)
									{
										func_335("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_335("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_334("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_332("senprog", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 37, -1350))
							{
								func_331("senprog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 6:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 38)
								{
									func_335("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_334("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_332("prog", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 38, -4320))
							{
								func_331("prog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 7:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (func_282(iParam0, 38, -3240))
								{
									if ((unk_0x2BDD44CC428A7EAE() == 9 || unk_0x2BDD44CC428A7EAE() == 10) || unk_0x2BDD44CC428A7EAE() == 8)
									{
										func_335("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_335("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_334("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_332("socclub", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 38, -870))
							{
								func_331("socclub", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 8:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 39)
								{
									func_335("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_334("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_332("audio", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 39, -1620))
							{
								func_331("audio", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 9:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 40)
								{
									func_335("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_334("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_332("scrlead", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 40, -1470))
							{
								func_331("scrlead", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 10:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 41)
								{
									func_335("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_334("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_332("script1", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 41, -1200))
							{
								func_331("script1", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 11:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 42)
								{
									func_335("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_334("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_332("script2", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 42, -1320))
							{
								func_331("script2", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 12:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 43)
								{
									func_335("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_334("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_334("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_332("visdes", 0.05f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 43, -1320))
							{
								func_331("visdes", 0.05f);
								iParam0->f_5++;
							}
							break;
						
						case 13:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 44)
								{
									func_335("uides", 40f, 20f, "right", 0f, 0.3f);
									func_334("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_332("uides", 0f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 45, -1650))
							{
								func_331("uides", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 14:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 46)
								{
									func_335("concre", 0f, 20f, "left", 0f, 0.3f);
									func_334("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_333("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_332("concre", 0f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 46, -1950))
							{
								func_331("concre", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 15:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 47)
								{
									func_335("devass", 0f, 400f, "right", 0f, 0f);
									func_334("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_332("devass", 0f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (iParam0->f_6 > 47)
							{
								func_331("devass", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 16:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 48)
								{
									func_335("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_334("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_334("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_332("qasup", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 48, -1320))
							{
								func_331("qasup", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 17:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 49)
								{
									func_335("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_334("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_332("senta", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 49, -5070))
							{
								func_331("senta", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 18:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (func_282(iParam0, 49, -3750))
								{
									func_335("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_334("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_332("asspro", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_282(iParam0, 49, -720))
							{
								func_331("asspro", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 19:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (func_241(iParam0))
								{
									if (unk_0xD3C2E180A40F031E() && unk_0xE625BEABBAFFDAB9() > 2468)
									{
										func_335("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_334("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_333("animdir", "ROB NELSON", 200f, "|", 1);
										func_332("animdir", 0.16f);
										unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (iParam0->f_6 >= 50)
								{
									func_335("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_334("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("animdir", "ROB NELSON", 90f, "|", 1);
									func_332("animdir", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_241(iParam0))
							{
								if (unk_0xD3C2E180A40F031E() && unk_0xE625BEABBAFFDAB9() > 6123)
								{
									func_331("animdir", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (unk_0xD3C2E180A40F031E() && unk_0xE625BEABBAFFDAB9() > 1898)
							{
								func_331("animdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 20:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (func_241(iParam0))
								{
									if (unk_0xD3C2E180A40F031E() && unk_0x708BDD8CD795B043())
									{
										func_335("producer", 65f, 55f, "right", 0f, 0f);
										func_334("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_333("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_332("producer", 0f);
										unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (unk_0xD3C2E180A40F031E() && unk_0xE625BEABBAFFDAB9() > 2452)
								{
									func_335("producer", 0f, 100f, "left", 0.3f, 0f);
									func_334("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_332("producer", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_241(iParam0))
							{
								if (unk_0xD3C2E180A40F031E() && unk_0x708BDD8CD795B043())
								{
									func_331("producer", 0f);
									iParam0->f_5++;
								}
							}
							else if (unk_0xD3C2E180A40F031E() && unk_0x708BDD8CD795B043())
							{
								func_331("producer", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 21:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (func_241(iParam0))
								{
									if (unk_0xD3C2E180A40F031E() && unk_0xE625BEABBAFFDAB9() > 13265)
									{
										func_335("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_334("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_333("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_332("vpcre", 0.16f);
										unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (unk_0xD3C2E180A40F031E() && unk_0xE625BEABBAFFDAB9() > 6921)
								{
									func_335("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_334("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_332("vpcre", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_241(iParam0))
							{
								if (unk_0xD3C2E180A40F031E() && unk_0xE625BEABBAFFDAB9() > 16955)
								{
									func_331("vpcre", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (unk_0xD3C2E180A40F031E() && unk_0xE625BEABBAFFDAB9() > 10513)
							{
								func_331("vpcre", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 22:
							if (!unk_0xA921AA820C25702F(iParam0->f_4, iParam0->f_5))
							{
								if (func_241(iParam0))
								{
									if (unk_0xD3C2E180A40F031E() && unk_0xE625BEABBAFFDAB9() > 18077)
									{
										Global_1681490 = 0;
										func_335("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_334("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_333("execpro", "SAM HOUSER", 165f, "|", 1);
										func_332("execpro", 0.16f);
										unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (unk_0xD3C2E180A40F031E() && unk_0xE625BEABBAFFDAB9() > 12358)
								{
									Global_1681490 = 0;
									func_335("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_334("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("execpro", "SAM HOUSER", 190f, "|", 1);
									func_332("execpro", 0.16f);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_241(iParam0))
							{
								if (unk_0xD3C2E180A40F031E() && unk_0xE625BEABBAFFDAB9() > 21785)
								{
									func_331("execpro", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (unk_0xD3C2E180A40F031E() && unk_0xE625BEABBAFFDAB9() > 15333)
							{
								func_331("execpro", 0.16f);
								iParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1681490)
				{
					unk_0x0DF606929C105BE1(Global_1681488, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_331(char* sParam0, float fParam1)
{
	unk_0xF6E48914C7A8694E(Global_1681488, "HIDE");
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam0);
	unk_0x362E2D3FE93A9959();
	unk_0xD69736AAE04DB51A(fParam1);
	unk_0xC6796A8FFA375E53();
}

void func_332(char* sParam0, float fParam1)
{
	unk_0xF6E48914C7A8694E(Global_1681488, "SHOW_CREDIT_BLOCK");
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam0);
	unk_0x362E2D3FE93A9959();
	unk_0xD69736AAE04DB51A(fParam1);
	unk_0xC6796A8FFA375E53();
}

void func_333(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)
{
	unk_0xF6E48914C7A8694E(Global_1681488, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam0);
	unk_0x362E2D3FE93A9959();
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam1);
	unk_0x362E2D3FE93A9959();
	unk_0xD69736AAE04DB51A(fParam2);
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam3);
	unk_0x362E2D3FE93A9959();
	unk_0xC58424BA936EB458(bParam4);
	unk_0xC6796A8FFA375E53();
}

void func_334(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)
{
	unk_0xF6E48914C7A8694E(Global_1681488, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam0);
	unk_0x362E2D3FE93A9959();
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam1);
	unk_0x362E2D3FE93A9959();
	unk_0xD69736AAE04DB51A(fParam2);
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam3);
	unk_0x362E2D3FE93A9959();
	unk_0xC58424BA936EB458(bParam4);
	unk_0xC6796A8FFA375E53();
}

void func_335(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0xF6E48914C7A8694E(Global_1681488, "SETUP_CREDIT_BLOCK");
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam0);
	unk_0x362E2D3FE93A9959();
	unk_0xD69736AAE04DB51A(fParam1);
	unk_0xD69736AAE04DB51A(fParam2);
	unk_0x80338406F3475E55("STRING");
	unk_0x6C188BE134E074AA(sParam3);
	unk_0x362E2D3FE93A9959();
	unk_0xD69736AAE04DB51A(fParam4);
	unk_0xD69736AAE04DB51A(fParam5);
	unk_0xC6796A8FFA375E53();
}

void func_336(int* iParam0)
{
	if (iParam0->f_6 >= 33 && iParam0->f_6 < 51)
	{
		if (unk_0x7239B21A38F536BA(iParam0->f_34))
		{
			if (unk_0x4C241E39B23DF959(iParam0->f_34, false))
			{
				unk_0xF2A1B2771A01DBD4(unk_0x1899F328B0E12848(iParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_337()
{
	var uVar0;
	
	if (unk_0x18A47D074708FD68(Local_561.f_3))
	{
		switch (Local_561.f_2)
		{
			case 2:
				if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_4, 1))
				{
					if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						if (func_352(Local_561.f_3))
						{
							if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								if (unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -1794415470) != 1 && unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -1794415470) != 0)
								{
									unk_0xC20E50AA46D09CA8(unk_0xD80958FC74E988A6(), unk_0x367B936610BA360C(Local_561.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_4, 2))
							{
								if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), unk_0x367B936610BA360C(Local_561.f_3)))
								{
									unk_0x933D6A9EEC1BACD0(&(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_4), 2);
									func_351(1);
								}
								else
								{
									unk_0x01C7B9B38428AEB6(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_352(Local_561.f_3))
				{
					if (!func_350(Local_561.f_4))
					{
						if (unk_0xA921AA820C25702F(iLocal_744, 26))
						{
							if (unk_0x77F1BEB8863288D5(unk_0xBDCD95FC216A8B3E(Local_561.f_4), -1273030092) != 1 && unk_0x77F1BEB8863288D5(unk_0xBDCD95FC216A8B3E(Local_561.f_4), -1273030092) != 0)
							{
								unk_0xF0AF20AA7731F8C3(unk_0xBDCD95FC216A8B3E(Local_561.f_4), unk_0x367B936610BA360C(Local_561.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, false);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!unk_0xA921AA820C25702F(iLocal_744, 27))
				{
					if (!unk_0xB16FCE9DDC7BA182() && !unk_0x797AC7CB535BA28F())
					{
						if (!func_107())
						{
							if (!unk_0xB0034A223497FFCB())
							{
								unk_0x891B5B39AC6302AF(800);
							}
						}
					}
					else if (unk_0xB16FCE9DDC7BA182())
					{
						unk_0x933D6A9EEC1BACD0(&iLocal_744, 27);
					}
				}
				else if (!unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 4))
				{
					if (func_344(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0))
					{
						unk_0x01C7B9B38428AEB6(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0);
						unk_0x62ECFCFDEE7885D6();
						unk_0x9E4CFFF989258472();
						unk_0xB4EC2312F4E5B1F1(0f);
						unk_0x6D0858B8EDFD2B7D(0f, 1f);
						unk_0x933D6A9EEC1BACD0(&(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_350(Local_561.f_4))
				{
					if (!unk_0xA921AA820C25702F(iLocal_744, 29))
					{
						if (func_352(Local_561.f_3))
						{
							unk_0x0F3E34E968EA374E(unk_0xBDCD95FC216A8B3E(Local_561.f_4), unk_0x367B936610BA360C(Local_561.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, true);
							unk_0xD4E8E24955024033(800);
							unk_0x933D6A9EEC1BACD0(&iLocal_744, 29);
						}
					}
					else if (!unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 5))
					{
						if (unk_0x77F1BEB8863288D5(unk_0xBDCD95FC216A8B3E(Local_561.f_4), -272084098) == 7)
						{
							unk_0x933D6A9EEC1BACD0(&(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -828834893) != 1 && unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -828834893) != 0)
						{
							unk_0x504D54DF3F6F2247(unk_0xD80958FC74E988A6(), 0, 0);
						}
					}
					else if (!unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 6))
					{
						unk_0x933D6A9EEC1BACD0(&(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3), 6);
						unk_0x933D6A9EEC1BACD0(&(Global_2446207.f_729), 4);
						unk_0xE80492A9AC099A93(&(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_4), 2);
						func_322(unk_0x4F8644AF03D0E0D6(), 1, 0, 1);
						func_343();
						func_351(0);
						func_32("HLP_TAXI", -1);
						if (func_50())
						{
							func_43(-1834046564, 200, &uVar0, 0, 0);
						}
						else
						{
							func_340(-200, 0);
							unk_0x17C3A7D31EAE39F9(200, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_350(Local_561.f_4))
				{
					if (func_352(Local_561.f_3))
					{
						if (unk_0x77F1BEB8863288D5(unk_0xBDCD95FC216A8B3E(Local_561.f_4), -258271821) != 1 && unk_0x77F1BEB8863288D5(unk_0xBDCD95FC216A8B3E(Local_561.f_4), -258271821) != 0)
						{
							unk_0x971D38760FBC02EF(unk_0xBDCD95FC216A8B3E(Local_561.f_4), true);
							unk_0x480142959D337D00(unk_0xBDCD95FC216A8B3E(Local_561.f_4), unk_0x367B936610BA360C(Local_561.f_3), 12f, 786599);
							func_339(&(Local_561.f_3));
							func_339(&(Local_561.f_4));
						}
					}
				}
				break;
		}
		if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_4, 1))
		{
			unk_0x07FB139B592FA687(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!unk_0xA921AA820C25702F(iLocal_744, 26))
			{
				unk_0x933D6A9EEC1BACD0(&iLocal_744, 26);
			}
		}
		if (!unk_0xA921AA820C25702F(iLocal_744, 28))
		{
			if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_4, 2))
			{
				if (!func_180(&uLocal_394))
				{
					func_198();
					func_19(&uLocal_394, 0, 0);
				}
				else if (func_179(&uLocal_394, 5000, 0))
				{
					if (func_159(&uLocal_568, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						unk_0x933D6A9EEC1BACD0(&iLocal_744, 28);
					}
				}
			}
		}
		if (!unk_0xA921AA820C25702F(iLocal_744, 30))
		{
			if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 5))
			{
				if (func_159(&uLocal_568, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					unk_0x933D6A9EEC1BACD0(&iLocal_744, 30);
				}
			}
		}
		if (!unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 6))
		{
			func_338();
		}
		if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_4, 2))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
				}
			}
		}
	}
}

void func_338()
{
	Global_2453900.f_258 = 1;
}

void func_339(var uParam0)
{
	int iVar0;
	
	if (unk_0x18A47D074708FD68(*uParam0))
	{
		iVar0 = unk_0xBFFEAB45A9A9094A(*uParam0);
		unk_0xB736A491E64A32CF(&iVar0);
	}
}

void func_340(int iParam0, int iParam1)
{
	func_342(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_341(iParam0, 0);
	}
}

void func_341(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_342(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_4 = iVar1;
	Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_3 = (Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_341(iVar1, 0);
	}
}

void func_343()
{
	unk_0x351220255D64C155(0, 22, true);
	unk_0x351220255D64C155(0, 36, true);
	unk_0x351220255D64C155(0, 32, true);
	unk_0x351220255D64C155(0, 34, true);
	unk_0x351220255D64C155(0, 35, true);
	unk_0x351220255D64C155(0, 33, true);
	unk_0x351220255D64C155(0, 31, true);
	unk_0x351220255D64C155(0, 30, true);
	unk_0x351220255D64C155(0, 44, true);
	unk_0x351220255D64C155(0, 141, true);
	unk_0x351220255D64C155(0, 140, true);
	unk_0x351220255D64C155(0, 263, true);
	unk_0x351220255D64C155(0, 264, true);
	unk_0x351220255D64C155(0, 143, true);
	unk_0x351220255D64C155(0, 24, true);
	unk_0x351220255D64C155(0, 257, true);
	unk_0x351220255D64C155(0, 263, true);
	unk_0x351220255D64C155(0, 264, true);
	unk_0x351220255D64C155(0, 143, true);
	unk_0x351220255D64C155(0, 262, true);
	unk_0x351220255D64C155(0, 261, true);
	unk_0x351220255D64C155(0, 37, true);
	unk_0x351220255D64C155(0, 25, true);
	unk_0x351220255D64C155(0, 26, true);
}

int func_344(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	Global_17098.f_6 = 1;
	if (unk_0xD9D2CFFF49FAB35F() && !bParam9)
	{
		if (Global_2421967.f_675)
		{
			func_349(0, bParam9);
		}
		return 0;
	}
	if ((unk_0xA41A05B6CB741B85() && !bParam9) && !unk_0x02B15662D7F8886F())
	{
		return 0;
	}
	if (!func_348())
	{
		if (func_347(unk_0x4F8644AF03D0E0D6(), 1))
		{
			if (((bParam9 && func_12(unk_0x4F8644AF03D0E0D6(), 1, 0)) && unk_0xD9D2CFFF49FAB35F()) && Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_219 == 1)
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
	if (!Global_2421967.f_675 && !bParam11)
	{
		Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) };
		if ((unk_0x73D57CFFDD12C355((Var0.f_0 - Param0.f_0)) < 0.2f && unk_0x73D57CFFDD12C355((Var0.f_1 - Param0.f_1)) < 0.2f) && unk_0x73D57CFFDD12C355((Var0.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar3 = (fParam3 - unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6()));
			if (fVar3 > 180f)
			{
				fVar3 = (fVar3 + -360f);
			}
			if (fVar3 < -180f)
			{
				fVar3 = (fVar3 + 360f);
			}
			if (unk_0x73D57CFFDD12C355(fVar3) < 1f)
			{
				Global_2421967.f_675 = 0;
				Global_2421967.f_676 = 0;
				if (unk_0x02B15662D7F8886F())
				{
					unk_0xC449EDED9D73009C();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2421967.f_677 || !Param0.f_1 == Global_2421967.f_677.f_1) || !Param0.f_2 == Global_2421967.f_677.f_2) || !fParam3 == Global_2421967.f_680)
	{
		if (Global_2421967.f_675 == 1)
		{
			if (unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), Global_2421967.f_681) < func_346())
			{
				return 0;
			}
			unk_0xC449EDED9D73009C();
			Global_2421967.f_676 = 1;
		}
		else
		{
			Global_2421967.f_676 = 0;
		}
		Global_2421967.f_677 = { Param0 };
		Global_2421967.f_680 = fParam3;
		Global_2421967.f_675 = 0;
	}
	if (!Global_2421967.f_675 && !unk_0x02B15662D7F8886F())
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
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			func_345();
			if (!unk_0x1017582BCD3832DC(unk_0xD80958FC74E988A6(), &(Global_2404546.f_409)))
			{
				Global_2404546.f_409 = 0;
			}
		}
		if (bParam9)
		{
			if (bParam4)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					iVar4 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
					unk_0x06843DA7060A026B(iVar4, Param0, false, true, true, true);
					unk_0x8E2530AA8ADA980E(iVar4, fParam3);
				}
				else
				{
					unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Param0, false, false, false, true);
					unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), fParam3);
				}
			}
			else
			{
				unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Param0, false, false, false, true);
				unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), fParam3);
			}
			func_349(bParam6, bParam9);
			return 1;
		}
		else
		{
			unk_0x31B73D1EA9F01DA2();
			unk_0xAD15F075A4DA0FDE(unk_0x4F8644AF03D0E0D6(), Param0, fParam3, bParam4, bParam10, false);
		}
		Global_2421967.f_681 = unk_0x7A5487FE9FAA6B48();
		Global_2421967.f_675 = 1;
	}
	if (Global_2421967.f_675)
	{
		Global_17098.f_6 = 1;
		Global_2421967.f_681 = unk_0x7A5487FE9FAA6B48();
		if (bParam9)
		{
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Global_2421967.f_677) < 2f)
			{
				if (unk_0x02B15662D7F8886F())
				{
					unk_0xC449EDED9D73009C();
				}
				func_349(bParam6, bParam9);
				return 1;
			}
		}
		if (!unk_0x02B15662D7F8886F())
		{
			func_349(bParam6, bParam9);
			return 1;
		}
	}
	return 0;
}

void func_345()
{
	Global_2404546.f_1373 = unk_0xE8AF77C4C06ADC93();
}

int func_346()
{
	if (unk_0xB16FCE9DDC7BA182())
	{
		return 10000;
	}
	return 1000;
}

int func_347(int iParam0, bool bParam1)
{
	if (Global_2413868[iParam0 /*253*/].f_219 == 99)
	{
		return 0;
	}
	if (bParam1)
	{
		if (Global_2413868[iParam0 /*253*/].f_219 == 11)
		{
			return 0;
		}
	}
	return 1;
}

bool func_348()
{
	return Global_1315872;
}

void func_349(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x6D0858B8EDFD2B7D(0f, 1f);
		unk_0xB4EC2312F4E5B1F1(0f);
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x9C720776DAA43E7E(unk_0xD80958FC74E988A6());
	}
	if (!bParam1)
	{
		unk_0x31B73D1EA9F01DA2();
	}
	if (unk_0x02B15662D7F8886F())
	{
		unk_0xC449EDED9D73009C();
	}
	func_323();
}

int func_350(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return unk_0x84A2DD9AC37C35C1(unk_0xBDCD95FC216A8B3E(iParam0));
	}
	return 1;
}

void func_351(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116, 15))
		{
			unk_0x933D6A9EEC1BACD0(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 15);
		}
	}
	else if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116, 15))
	{
		unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 15);
	}
}

int func_352(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return !func_353(unk_0x367B936610BA360C(iParam0));
	}
	return 0;
}

int func_353(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(iParam0, false))
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

void func_354(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 8, 0))
		{
			func_58(iParam0, 8, 0);
			func_355(iParam0);
		}
	}
	else if (func_23(iParam0, 8, 0))
	{
		func_56(iParam0, 8, 0);
		func_355(iParam0);
	}
}

void func_355(int iParam0)
{
	Global_89836.f_153[iParam0] = 1;
	Global_89836.f_152 = 1;
}

void func_356(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_89836.f_9[iParam0] = 1;
	}
	else
	{
		Global_89836.f_9[iParam0] = 0;
	}
}

void func_357(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_89836.f_8 = 1;
	}
	else
	{
		Global_89836.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_355(iVar0);
		iVar0++;
	}
}

void func_358(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

int func_359()
{
	return Local_561.f_0;
}

int func_360()
{
	return 1;
}

int func_361(int iParam0)
{
	return Local_733[iParam0 /*5*/];
}

int func_362(int iParam0)
{
	return Local_733[iParam0 /*5*/].f_2;
}

int func_363(bool bParam0)
{
	if (func_365())
	{
		if (bParam0)
		{
			if (!Global_1573679 && !func_364(unk_0x4F8644AF03D0E0D6(), 2))
			{
				unk_0x2206BF9A37B7F724("MinigameTransitionIn", 0, true);
				func_315(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_364(int iParam0, int iParam1)
{
	return unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_205, iParam1);
}

bool func_365()
{
	return Global_2421967.f_2;
}

void func_366(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		if (bLocal_750)
		{
			if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 2))
			{
				if (!unk_0xA921AA820C25702F(iLocal_744, 31))
				{
					func_30(119, 1, -1, 1);
					func_30(115, 1, -1, 1);
				}
				func_616(1);
				bVar0 = true;
			}
		}
		else if (unk_0xA921AA820C25702F(Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/].f_3, 1))
		{
			if (!unk_0xA921AA820C25702F(iLocal_744, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_197(&Local_87, 0, bParam0);
	if (unk_0x10FAB35428CCC9D7())
	{
		if (Global_2421967.f_3012)
		{
			func_612(0, 1);
		}
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		func_351(0);
	}
	unk_0x31D16B74C6E29D66(Local_87.f_122, false);
	unk_0x0027501B9F3B407E(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	unk_0x0027501B9F3B407E(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	unk_0xE80492A9AC099A93(&(Global_2446207.f_729), 4);
	func_85(0);
	func_54(0);
	func_611();
	func_610(iLocal_86, 0);
	func_178(&(Global_2421967.f_3259));
	Global_2421967.f_3257 = 0;
	Global_2421967.f_3256 = 0;
	Global_2421967.f_3258 = 0;
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 244, true);
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 243, true);
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 242, true);
	}
	if (bVar0)
	{
		func_369(0, 0, 0, 0);
	}
	else
	{
		unk_0x8DFCED7A656F8802(true);
		func_369(0, 0, 3, 1);
	}
	unk_0xE80492A9AC099A93(&(Global_2446207.f_729), 0);
	func_357(0);
	func_356(4, 0);
	func_356(1, 0);
	func_356(0, 0);
	func_356(2, 0);
	func_356(3, 0);
	func_354(iLocal_86, 0);
	func_343();
	func_33();
	if (unk_0xA6DB27D19ECBB7DA(Global_89836.f_198[iLocal_86]))
	{
		unk_0x4F7D8A9BFB0B43E9(Global_89836.f_198[iLocal_86], false);
	}
	if (unk_0xA6DB27D19ECBB7DA(iLocal_747))
	{
		unk_0x86A652570E5F25DD(&iLocal_747);
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		func_368(0);
		func_181(0);
	}
	func_367(Local_561.f_5);
}

void func_367(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), Param0.f_0)) >= 1000)
		{
			unk_0x3B3D11CD9FFCDFC9();
		}
	}
	unk_0x1090044AD1DA76FA();
}

void func_368(bool bParam0)
{
	if (bParam0)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 5);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 5);
	}
}

void func_369(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	struct<6> Var8;
	struct<6> Var14;
	int iVar20;
	char* sVar21;
	struct<2> Var22;
	bool bVar24;
	
	iVar0 = unk_0x4F8644AF03D0E0D6();
	iVar1 = Global_1582048[iVar0 /*324*/];
	func_609();
	func_605();
	unk_0xA0CEFCEA390AAB9B(0);
	Global_971496 = 0;
	unk_0xCFEB8AF24FC1D0BB(false);
	Global_786481 = 0;
	Global_786481.f_1 = 0;
	Global_1573548 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	func_604(0);
	Global_1573537 = 0;
	Global_1573536 = 0;
	Global_1573556 = 0;
	Global_1573697 = 0;
	Global_1573703 = 0;
	Global_1573282 = 0;
	Global_1574144 = 1;
	func_603();
	func_602();
	func_601();
	func_600();
	func_599();
	func_598();
	if (unk_0x10FAB35428CCC9D7())
	{
		func_597();
	}
	if (func_596())
	{
		func_595();
		func_594(1, 1, 1);
		func_593();
		func_592();
		if (iVar0 != -1)
		{
			Global_1599457[iVar0 /*32*/].f_22 = 0;
			Global_1599457[iVar0 /*32*/].f_22.f_1 = 0;
		}
	}
	func_591();
	if (Global_1601761 != 6)
	{
		if (func_12(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (unk_0xF33BDFE19B309B19(unk_0xD80958FC74E988A6()))
			{
				unk_0xA7B2458D0AD6DED8(unk_0xD80958FC74E988A6(), true);
			}
		}
	}
	Global_1572908 = 0;
	if (Global_1672859.f_9 == 4)
	{
		if (func_590(unk_0x4F8644AF03D0E0D6()) || func_589(unk_0x4F8644AF03D0E0D6()))
		{
			Global_1572908 = 1;
		}
	}
	func_587();
	if (func_586())
	{
		func_585();
	}
	func_584();
	Global_1601761.f_55472 = 0;
	Global_1672819.f_4 = 0;
	unk_0xFF300C7649724A0B(unk_0x4F8644AF03D0E0D6(), true);
	StringCopy(&(Global_1601761.f_54829), "", 32);
	unk_0x25F87B30C382FCA7();
	unk_0x6806C51AD12B83B8(18);
	if (bParam3 && !func_583())
	{
		unk_0x719FF505F097FD20();
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1599306[iVar3] = 0;
		Global_1599273[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_2428692.f_5175), 3);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_2428692.f_5175), 3);
	}
	if (func_365() || (iVar0 != -1 && Global_1582048[iVar0 /*324*/].f_303))
	{
		func_582();
		func_581(1, 1);
		func_594(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1599457[iVar0 /*32*/].f_22 = 0;
			Global_1599457[iVar0 /*32*/].f_22.f_1 = 0;
		}
		func_580(1);
		if (func_579())
		{
			func_578();
		}
		if (!func_15(unk_0x4F8644AF03D0E0D6()))
		{
			func_576(4);
		}
		func_593();
		func_575(0);
		func_574();
		Global_1574137 = 0;
	}
	if (!func_573())
	{
		func_572();
		if (func_571())
		{
			if (func_570())
			{
				func_582();
			}
		}
		func_580(1);
		if (!func_569())
		{
			Global_2428692.f_5466 = 0;
			Global_2428692.f_5467 = 0;
			Global_2428692.f_5465 = 0;
			Global_2428692.f_5464 = 0;
		}
	}
	else
	{
		func_568(unk_0x4F8644AF03D0E0D6(), 0);
	}
	func_567((Global_1672859.f_9 != 4 && !func_573()));
	if (func_569())
	{
		Global_2428692.f_5555 = 1;
	}
	else
	{
		Global_2428692.f_5555 = 0;
	}
	if (!func_566())
	{
		Global_1672884.f_1121 = 0;
	}
	if (!func_573() && !func_566())
	{
		func_581(1, Global_1672859.f_9 != 4);
		func_594(1, 1, 0);
		func_565(0);
		func_564();
		Global_1574139 = 0;
		if (iVar0 != -1)
		{
			Global_1599457[iVar0 /*32*/].f_22 = 0;
			Global_1599457[iVar0 /*32*/].f_22.f_1 = 0;
		}
	}
	func_561(1, -1);
	if (func_560())
	{
		func_559();
	}
	if (unk_0x05095437424397FA())
	{
		unk_0x9465E683B12D3F6B();
	}
	if (!func_583() && !func_573())
	{
		func_555();
	}
	Global_1601761.f_55468 = 0;
	func_554();
	Global_1573530 = -1;
	Global_1599349 = -1;
	Global_1599343 = -1;
	Global_1599345 = -1;
	Global_1573535 = 0;
	Global_1599344 = 0;
	Global_1573681 = 0;
	Global_1573673 = 0;
	Global_1599350 = 0;
	func_553(0);
	func_552();
	Global_1582048[iVar0 /*324*/].f_303 = 0;
	Global_1599341 = 0f;
	Global_1599342 = 0f;
	Global_1573682 = 0;
	Global_1573683 = -1;
	Global_971738 = 0;
	Global_1573671 = 0;
	Global_1573283 = 0;
	func_551();
	unk_0xB9EFD5C25018725A("WantedMusicDisabled", false);
	unk_0xB9EFD5C25018725A("DisableFlightMusic", false);
	func_550(1);
	if (func_549())
	{
		func_548();
	}
	if (func_547())
	{
		if (func_545(unk_0x4F8644AF03D0E0D6()))
		{
			if (unk_0xCF61D4B4702EE9EB() < 2)
			{
				func_544();
				func_543(1);
			}
			else
			{
				func_542();
			}
			if (Global_1672859.f_9 != -1)
			{
				func_541();
			}
		}
		else if (Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/] == 0)
		{
			if (Global_1672859.f_9 != -1)
			{
				func_541();
			}
		}
	}
	bVar4 = func_16(iVar0);
	Global_1582048[iVar0 /*324*/].f_167 = 0;
	if (bVar4 && !func_566())
	{
		func_540();
	}
	if (!bVar4)
	{
		func_539(0);
	}
	if ((func_538() != 35 && func_538() != 34) && !func_537())
	{
		Global_1572864 = { 0f, 0f, 0f };
	}
	func_536();
	func_535();
	func_543(0);
	bVar6 = false;
	if (!bVar4)
	{
		if (Global_1672859.f_9 == 6)
		{
			bVar6 = true;
		}
		if (!func_534())
		{
			func_533(0, bVar6);
		}
	}
	unk_0x9D7AFCBF21C51712(false);
	if (unk_0x10FAB35428CCC9D7())
	{
		switch (Global_1672859.f_9)
		{
			case 1:
				if (!bVar4)
				{
					func_531();
					func_530();
				}
				break;
			
			case 6:
				Global_1574137 = 0;
				if (!bVar4)
				{
					func_531();
				}
				func_530();
				Global_1672859 = 0;
				Global_1672859.f_22 = { 0f, 0f, 0f };
				Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_12 = 0;
				StringCopy(&(Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_213), "", 24);
				Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_210 = { 0f, 0f, 0f };
				break;
			
			case 2:
				func_529(0);
				func_528(Global_1672859.f_16);
				iVar5 = Global_1582048[iVar0 /*324*/].f_11;
				if (iVar5 != func_123())
				{
					if (unk_0xB8DFD30D6973E135(iVar5))
					{
						Global_2428692.f_5176 = { func_71(iVar5) };
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
				if ((iVar7 && func_527()) && unk_0x18D0456E86604654() == 1)
				{
					Global_2428692.f_5176 = { func_526() };
				}
				if (Global_1601761.f_18 > 1)
				{
					func_525(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_76.f_28);
				}
				break;
			
			case 3:
				func_529(0);
				iVar2 = 1;
				func_524();
				iVar5 = Global_1582048[iVar0 /*324*/].f_11;
				if (iVar5 != func_123())
				{
					if (unk_0xB8DFD30D6973E135(iVar5))
					{
						Global_2428692.f_5176 = { func_71(iVar5) };
					}
				}
				if (Global_1601761.f_18 > 1)
				{
					func_525(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_76.f_28);
				}
				break;
			
			case 4:
				func_529(0);
				iVar2 = 1;
				if (func_523())
				{
					func_522();
				}
				else
				{
					Global_2428692.f_5466 = 0;
					Global_2428692.f_5467 = 0;
					Global_2428692.f_5465 = 0;
					Global_2428692.f_5464 = 0;
				}
				if (func_590(unk_0x4F8644AF03D0E0D6()) || func_589(unk_0x4F8644AF03D0E0D6()))
				{
					Global_786435.f_34++;
				}
				if (!unk_0xA921AA820C25702F(Global_1601761.f_10, 22))
				{
					if (!unk_0xA921AA820C25702F(Global_1601761.f_10, 15))
					{
						func_521(Global_1601761.f_55444);
					}
					else
					{
						func_520(Global_1601761.f_69889, Global_1601761.f_69890);
					}
					if (Global_1672859.f_13 > -1)
					{
						unk_0xE679E3E06E363892(Global_1672859.f_13, Global_1672859.f_14, 0);
					}
					else if (func_519() > -1)
					{
						func_518(func_519(), 0);
					}
				}
				if (func_517())
				{
					Var8 = { func_516() };
					func_515(Var8);
					if (func_514() != -1)
					{
						Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_76.f_28 = func_514();
					}
					func_513();
					func_512();
				}
				else
				{
					func_524();
				}
				break;
			
			case 5:
				func_529(0);
				iVar2 = 1;
				func_524();
				break;
			
			case 8:
				if (!func_527())
				{
					func_528(Global_1672859.f_16);
				}
				break;
			
			case 9:
				func_529(0);
				iVar2 = 1;
				func_524();
				break;
			
			case 10:
				func_495(10, 0f, 0f, 0f, Var14);
				func_494();
				break;
		}
	}
	else
	{
		Global_1574137 = 0;
	}
	if (iVar2 || func_589(unk_0x4F8644AF03D0E0D6()))
	{
		if ((func_493(unk_0x4F8644AF03D0E0D6()) || func_590(unk_0x4F8644AF03D0E0D6())) || func_589(unk_0x4F8644AF03D0E0D6()))
		{
			if (Global_1681469 > 0)
			{
				Global_2428692.f_1.f_2823.f_13 = Global_1681469;
				Global_2428692.f_1.f_2823 = { Global_1681469.f_1 };
			}
		}
		else
		{
			func_492();
		}
	}
	Global_2428692.f_1.f_840 = 0;
	unk_0xE80492A9AC099A93(&Global_1573287, 0);
	func_491(0);
	Global_1573540 = 0;
	Global_1573667 = -1;
	Global_1599272 = 0;
	Global_1312437 = 0;
	Global_1672859.f_1 = 0;
	Global_1672859.f_2 = 0;
	if (func_490() == 0)
	{
		if (Global_1672859.f_9 == -1 && bVar4 == 0)
		{
			func_482(0);
		}
		else
		{
			Global_1672859.f_9 = -1;
		}
	}
	func_481();
	if (func_480())
	{
		func_479();
	}
	if (func_478())
	{
		func_477();
	}
	if (!unk_0x05095437424397FA())
	{
		unk_0x9641A9FF718E9C5E(true);
	}
	if (func_490() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if ((((!func_476(Global_1582048[iVar0 /*324*/]) && !func_583()) && !bVar4) && !func_348()) && !func_573())
			{
				func_475(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_474();
	Global_1672859.f_1 = 0;
	if (!func_547())
	{
		func_473();
	}
	if (Global_1582048[iVar0 /*324*/] != -1)
	{
		iParam2 = iParam2;
		if (func_472(Global_1582048[iVar0 /*324*/]))
		{
			if (unk_0x1077788E268557C2())
			{
				iVar20 = func_459();
				func_456(1197, -1);
				func_451(joaat("mpply_mgame_cheat_end"), iVar20);
				if (iVar20 > 0)
				{
					func_451(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		unk_0x5E3AA4CA2B6FB0EE(unk_0x4F8644AF03D0E0D6());
	}
	func_449();
	if (Global_1672859 == 0)
	{
		if (!bVar4)
		{
			Global_1582048[iVar0 /*324*/].f_11 = -1;
			Global_1582048[iVar0 /*324*/].f_12 = 0;
		}
	}
	if (bVar4)
	{
		func_475(0);
		Global_1582048[iVar0 /*324*/].f_12 = 1;
		Global_1582048[iVar0 /*324*/].f_11 = func_448(unk_0x4F8644AF03D0E0D6());
		unk_0x70DA3BF8DACD3210(false);
		func_445(0, 0, 1);
		if (func_444())
		{
			func_442();
		}
	}
	if ((Global_1582048[iVar0 /*324*/] < 10 && Global_1582048[iVar0 /*324*/] != -1) && !func_348())
	{
		if (!unk_0xCA042B6957743895(&(Global_1582048[iVar0 /*324*/].f_121)) && Global_1582048[iVar0 /*324*/] != 5)
		{
			func_439(&(Global_1582048[iVar0 /*324*/].f_121));
		}
	}
	Global_1582048[iVar0 /*324*/] = -1;
	Global_1582048[iVar0 /*324*/].f_31.f_2 = -1;
	Global_1582048[iVar0 /*324*/].f_31.f_16 = -1;
	Global_1582048[iVar0 /*324*/].f_31.f_1 = -1;
	Global_1601761 = 0;
	if (!bVar4)
	{
		func_438(0);
	}
	Global_1582048[iVar0 /*324*/].f_31.f_18 = 0;
	unk_0xE80492A9AC099A93(&(Global_1582048[unk_0xEE68096F9F37341E() /*324*/].f_301), 0);
	unk_0xE45087D85F468BC2(false, 0);
	if (iVar1 != 6)
	{
		unk_0xA8FDB297A8D25FBA();
		Global_2435622 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1582048[iVar0 /*324*/].f_121), sVar21, 24);
		StringCopy(&(Global_1582048[iVar0 /*324*/].f_127), sVar21, 24);
		func_437();
	}
	StringCopy(&(Global_1592417[iVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1582048[iVar0 /*324*/].f_141), sVar21, 64);
	Global_1599457[iVar0 /*32*/].f_19 = { Var22 };
	Global_1573676 = 0;
	Global_1573677 = 0;
	Global_1573294 = -1;
	Global_1672806 = 1;
	bVar24 = false;
	func_436();
	func_435();
	func_434();
	if (func_433())
	{
		func_432();
	}
	if (func_431() && unk_0x05095437424397FA())
	{
		func_430();
		func_322(unk_0x4F8644AF03D0E0D6(), 0, 57348, 1);
	}
	if (func_429())
	{
		func_428();
	}
	else if (func_427())
	{
		func_428();
	}
	else if (func_426())
	{
		func_428();
	}
	else if (func_425())
	{
		func_428();
	}
	else if (func_424())
	{
		func_428();
	}
	else if (func_490())
	{
		func_428();
	}
	else if (func_423() && func_422())
	{
		func_428();
	}
	else if (func_421())
	{
		func_428();
	}
	else
	{
		func_420();
		if (!Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_12 && !func_566())
		{
			if (unk_0x05095437424397FA())
			{
				if (func_444())
				{
					func_419();
				}
				else
				{
					if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
					{
						Global_2428692.f_2841.f_195 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) };
					}
					func_418();
					func_593();
					func_417(6);
					func_530();
					if (bVar4)
					{
						func_575(0);
					}
				}
				func_416();
				func_415();
				func_414();
				if (Global_2428692.f_2841.f_4 == 2)
				{
					Global_2428692.f_2841.f_4 = 1;
				}
				if (func_235(unk_0x4F8644AF03D0E0D6(), 0))
				{
					func_413();
				}
				func_412();
				Global_2428692.f_2841 = 0;
			}
			else
			{
				func_411();
				func_428();
			}
		}
		else
		{
			if (!func_569() && !func_566())
			{
			}
			func_411();
			func_428();
		}
	}
	if ((((((((((!func_429() && !func_410()) && !func_422()) && !func_423()) && !func_426()) && !func_427()) && !func_409()) && !func_424()) && !func_490()) && !func_425()) && !func_408())
	{
		if (!func_407())
		{
			func_406();
			func_404();
			func_403();
			func_401(1);
		}
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xADA24309FE08DACF())
		{
			if (!unk_0x35F0B98A8387274D())
			{
				if (!func_400())
				{
					if (!bVar24)
					{
						if (func_15(unk_0x4F8644AF03D0E0D6()))
						{
							unk_0xD0AFAFF5A51D72F7();
							unk_0x4D953DF78EBF8158();
						}
					}
				}
			}
		}
	}
	if (!func_348())
	{
		StringCopy(&(Global_1601761.f_54844), "", 64);
	}
	if (!func_566())
	{
		func_392();
	}
	func_391();
	if (!func_573() && !func_569())
	{
		func_390();
	}
	func_370(bParam3);
}

void func_370(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_547())
		{
		}
		else if ((((!func_573() && !func_569()) && !func_566()) && Global_1672859.f_9 != 9) && Global_1672859.f_9 != 4)
		{
			func_518(0, 1);
		}
	}
	unk_0xD37401D78A929A49();
	func_389();
	func_388(1);
	if ((((bParam0 && !func_387()) && !func_573()) && !Global_262145.f_4810) && !func_385())
	{
		unk_0x338D2E3477711050();
	}
	unk_0xDC0F817884CDD856(5, true);
	unk_0xDC0F817884CDD856(3, true);
	func_377(&uVar0, -1);
	if ((func_28() == 0 && !func_107()) && !func_573())
	{
		if (func_376())
		{
			func_375();
		}
		else
		{
			func_372(28, 0);
		}
	}
	func_371(0);
}

void func_371(int iParam0)
{
	if (!Global_1681070 == iParam0)
	{
		Global_1681070 = iParam0;
	}
}

void func_372(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_374(iParam0, iParam1))
	{
		iVar0 = func_373();
		Global_2434883[iVar0] = iParam0;
	}
}

int func_373()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2434883[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_374(int iParam0, var uParam1)
{
	if (Global_1315886)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315898) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_375()
{
	unk_0x933D6A9EEC1BACD0(&(Global_964222.f_8), 22);
}

bool func_376()
{
	return unk_0xA921AA820C25702F(Global_964222.f_8, 21);
}

void func_377(var uParam0, int iParam1)
{
	func_383(uParam0, iParam1);
	func_378(iParam1);
}

void func_378(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	iVar0 = func_382(iParam0);
	iVar1 = unk_0xC488FF2356EA7791(iVar0);
	if (func_379())
	{
		if (unk_0xA921AA820C25702F(iVar1, 1))
		{
			func_30(133, 1, -1, 1);
		}
	}
}

int func_379()
{
	if (func_381() && func_380(0))
	{
		return 1;
	}
	return 0;
}

var func_380(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_381()
{
	return func_380(func_26() + 1);
}

int func_382(int iParam0)
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

void func_383(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar1 = func_384(iParam1);
	iVar2 = unk_0xC488FF2356EA7791(iVar1);
	if (unk_0xA921AA820C25702F(iVar2, 1))
	{
		func_456(1192, iParam1);
		func_451(joaat("mpply_dm_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xE80492A9AC099A93(&iVar2, 1);
		bVar0 = true;
	}
	if (unk_0xA921AA820C25702F(iVar2, 2))
	{
		func_456(1194, iParam1);
		func_451(joaat("mpply_race_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xE80492A9AC099A93(&iVar2, 2);
		bVar0 = true;
	}
	if (unk_0xA921AA820C25702F(iVar2, 3))
	{
		func_456(1104, iParam1);
		func_451(joaat("mpply_mc_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xE80492A9AC099A93(&iVar2, 3);
		bVar0 = true;
	}
	if (unk_0xA921AA820C25702F(iVar2, 4))
	{
		func_456(1196, iParam1);
		func_451(joaat("mpply_mgame_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xE80492A9AC099A93(&iVar2, 4);
		bVar0 = true;
	}
	if (unk_0xA921AA820C25702F(iVar2, 5))
	{
		func_456(1907, iParam1);
		func_451(joaat("mpply_cap_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xE80492A9AC099A93(&iVar2, 5);
		bVar0 = true;
	}
	if (unk_0xA921AA820C25702F(iVar2, 6))
	{
		func_456(1909, iParam1);
		func_451(joaat("mpply_sur_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xE80492A9AC099A93(&iVar2, 6);
		bVar0 = true;
	}
	if (unk_0xA921AA820C25702F(iVar2, 7))
	{
		func_456(1911, iParam1);
		func_451(joaat("mpply_lts_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xE80492A9AC099A93(&iVar2, 7);
		bVar0 = true;
	}
	if (unk_0xA921AA820C25702F(iVar2, 8))
	{
		func_456(1913, iParam1);
		func_451(joaat("mpply_para_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xE80492A9AC099A93(&iVar2, 8);
		bVar0 = true;
	}
	if (unk_0xA921AA820C25702F(iVar2, 9))
	{
		func_456(2592, iParam1);
		func_451(joaat("mpply_heist_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xE80492A9AC099A93(&iVar2, 9);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		unk_0x723C1CE13FBFDB67(iVar2, iParam1);
	}
}

int func_384(int iParam0)
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

int func_385()
{
	if (func_590(unk_0x4F8644AF03D0E0D6()) || func_589(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_386() || func_569())
		{
			return 1;
		}
	}
	return 0;
}

bool func_386()
{
	return unk_0xA921AA820C25702F(Global_1315805, 4);
}

bool func_387()
{
	return Global_1573679;
}

void func_388(int iParam0)
{
	Global_2428692.f_5463 = iParam0;
}

void func_389()
{
	unk_0xAA5F02DB48D704B9(6);
	unk_0x020E5F00CDA207BA(1f);
	unk_0x102E68B2024D536D(true);
}

void func_390()
{
	Global_2427935.f_24.f_39 = 0;
}

void func_391()
{
	Global_1672859.f_6 = 0;
}

void func_392()
{
	struct<3> Var0;
	struct<2> Var3;
	int iVar5;
	
	if (!func_398(func_399(), Var0))
	{
		Var3.f_0 = 200;
		Var3.f_1 = unk_0x4F8644AF03D0E0D6();
		iVar5 = func_397(1, 1);
		if (!iVar5 == 0)
		{
			func_394();
			func_393(0);
			unk_0x5AE99C571D5BBE5D(1, &Var3, 2, iVar5);
		}
	}
}

void func_393(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2421967.f_3007 = unk_0x7A5487FE9FAA6B48();
	}
	Global_2421967.f_2891 = iParam0;
}

void func_394()
{
	func_396();
	func_395();
}

void func_395()
{
	struct<72> Var0;
	
	if (func_53(unk_0x4F8644AF03D0E0D6()))
	{
		Var0.f_6 = 32;
		Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_121 = { Var0 };
	}
}

void func_396()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2421967.f_2891.f_79 };
	Var0.f_95 = { Global_2421967.f_2891.f_95 };
	Global_2421967.f_2891 = { Var0 };
}

var func_397(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x41BD2A6B006AF756(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x4F8644AF03D0E0D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, iVar1);
				}
				else if (!func_235(iVar2, 0))
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_398(struct<3> Param0, struct<3> Param3)
{
	if ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_399()
{
	return Global_2413116[unk_0x4F8644AF03D0E0D6() /*10*/];
}

bool func_400()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116, 18);
}

void func_401(bool bParam0)
{
	struct<57> Var0;
	int iVar57;
	
	Global_2428692.f_1.f_2796 = 0;
	Global_2428692.f_1.f_2797 = 0;
	Global_2428692.f_1.f_2819 = 0;
	Global_2428692.f_1.f_2803 = 0;
	Global_2428692.f_1.f_2804 = 0;
	Global_2428692.f_1.f_2807 = 0;
	Global_2428692.f_1.f_2808 = 0;
	Global_2428692.f_1.f_2806 = -1;
	Global_2428692.f_1.f_2809 = -1;
	Global_2428692.f_1.f_2811 = 0;
	Global_2428692.f_1.f_2812 = 0;
	Global_2428692.f_1.f_2813 = 0;
	Global_2428692.f_1.f_2814 = 0;
	Global_2428692.f_1.f_2815 = 0;
	Global_2428692.f_1.f_2816 = 0;
	Global_2428692.f_1.f_2820 = -1;
	if (bParam0)
	{
		Global_2428692.f_1.f_2817 = -1;
		Global_2428692.f_1.f_2818 = -1;
	}
	Global_2428692.f_1.f_2839 = 0;
	func_402();
	Var0.f_33 = 2;
	Var0.f_36 = 7;
	iVar57 = 0;
	while (iVar57 <= 31)
	{
		Global_2428692.f_1.f_843[iVar57 /*57*/] = { Var0 };
		iVar57++;
	}
	Global_2425253.f_20 = -1;
}

void func_402()
{
	Global_2425253.f_19 = 0;
}

void func_403()
{
	Global_2427935.f_563 = 0;
}

void func_404()
{
	Global_2427935.f_564 = 0;
	func_405();
}

void func_405()
{
	int iVar0;
	
	iVar0 = unk_0x4F8644AF03D0E0D6();
	if (iVar0 >= 0)
	{
		unk_0xE80492A9AC099A93(&(Global_1582048[iVar0 /*324*/].f_76.f_32), 6);
	}
}

void func_406()
{
	Global_2427935 = 0;
	Global_2427935.f_2 = 0;
}

bool func_407()
{
	return Global_2427935.f_563;
}

bool func_408()
{
	return Global_1681460;
}

bool func_409()
{
	return unk_0xA921AA820C25702F(Global_2427935, 1);
}

bool func_410()
{
	return unk_0xA921AA820C25702F(Global_2427935, 16);
}

void func_411()
{
	unk_0xE80492A9AC099A93(&Global_2427935, 21);
}

void func_412()
{
	Global_2428692.f_2841.f_34 = 1;
}

void func_413()
{
	Global_2428692.f_1.f_2822 = 1;
}

void func_414()
{
	Global_2427935.f_696 = 1;
}

void func_415()
{
	Global_2428692.f_1.f_2821 = 1;
}

void func_416()
{
	unk_0x933D6A9EEC1BACD0(&Global_2427935, 21);
}

void func_417(int iParam0)
{
	Global_2428692.f_1.f_836 = iParam0;
	Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_209 = iParam0;
}

void func_418()
{
	struct<24> Var0;
	
	Var0 = 18;
	Var0.f_20 = -1;
	Global_2425277 = { Var0 };
}

void func_419()
{
	Global_2428692.f_2841.f_1 = 1;
}

void func_420()
{
	Global_2428692.f_2841.f_1 = 0;
}

bool func_421()
{
	return Global_2427935.f_588;
}

bool func_422()
{
	return Global_2427935.f_578;
}

bool func_423()
{
	return Global_2427935.f_565;
}

bool func_424()
{
	return Global_2427935.f_574;
}

bool func_425()
{
	return unk_0xA921AA820C25702F(Global_2427935.f_2, 15);
}

bool func_426()
{
	return unk_0xA921AA820C25702F(Global_2427935, 20);
}

bool func_427()
{
	return unk_0xA921AA820C25702F(Global_2427935, 2);
}

void func_428()
{
	Global_2428692.f_2841.f_34 = 0;
}

bool func_429()
{
	return unk_0xA921AA820C25702F(Global_964222.f_8, 8);
}

void func_430()
{
	Global_2427935.f_593 = 0;
}

var func_431()
{
	return Global_2427935.f_593;
}

void func_432()
{
	Global_2427935.f_623 = 0;
}

bool func_433()
{
	return Global_2427935.f_623;
}

void func_434()
{
	Global_2428692.f_1.f_837 = 0;
	Global_2428692.f_1.f_839 = 0;
}

void func_435()
{
	unk_0xE80492A9AC099A93(&Global_2427935, 4);
}

void func_436()
{
	unk_0xE80492A9AC099A93(&Global_2427935, 28);
}

void func_437()
{
	int iVar0;
	
	iVar0 = unk_0x4F8644AF03D0E0D6();
	unk_0xE80492A9AC099A93(&(Global_1582048[iVar0 /*324*/].f_13.f_1), 4);
	unk_0xE80492A9AC099A93(&(Global_1582048[iVar0 /*324*/].f_13.f_1), 5);
	unk_0xE80492A9AC099A93(&(Global_1582048[iVar0 /*324*/].f_13.f_1), 7);
	unk_0xE80492A9AC099A93(&(Global_1582048[iVar0 /*324*/].f_13.f_1), 8);
	unk_0xE80492A9AC099A93(&(Global_1582048[iVar0 /*324*/].f_13.f_1), 9);
	unk_0xE80492A9AC099A93(&(Global_1582048[iVar0 /*324*/].f_13.f_1), 10);
	unk_0xE80492A9AC099A93(&(Global_1582048[iVar0 /*324*/].f_13.f_1), 11);
	unk_0xE80492A9AC099A93(&(Global_1582048[iVar0 /*324*/].f_13.f_1), 12);
	unk_0xE80492A9AC099A93(&(Global_1582048[iVar0 /*324*/].f_13.f_1), 13);
}

void func_438(bool bParam0)
{
	unk_0x70DA3BF8DACD3210(bParam0);
}

void func_439(char* sParam0)
{
	var uVar0;
	
	if ((!func_441() && func_440(120, -1)) && !func_348())
	{
		unk_0xA0FD21BED61E5C4C(sParam0, &uVar0, 13);
		if (unk_0x6F79B93B0A8E4133(&uVar0, 13))
		{
			if (unk_0x1A24A179F9B31654(&uVar0))
			{
			}
		}
	}
}

int func_440(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2472519[iParam0 /*6*/][func_25(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_441()
{
	int iVar0;
	
	iVar0 = unk_0x4F8644AF03D0E0D6();
	if ((Global_1582048[iVar0 /*324*/].f_31.f_2 == 63 || Global_1582048[iVar0 /*324*/].f_31.f_2 == 62) || Global_1582048[iVar0 /*324*/].f_31.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_442()
{
	unk_0x933D6A9EEC1BACD0(&(Global_964222.f_8), 8);
	func_443();
}

void func_443()
{
	Global_2427935.f_747 = 1;
}

bool func_444()
{
	return Global_2428692.f_2841.f_2;
}

void func_445(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5F9532F3B5CC2551(iParam1))
	{
	}
	if (bParam0 == 1)
	{
		if (unk_0x7239B21A38F536BA(iParam1))
		{
			if (unk_0x12534C348C6CB68B(iParam1))
			{
				if (!unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), unk_0x6C0E2E0125610278(iParam1)))
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
			if (bParam0 == 1)
			{
				func_447();
			}
			else if (!unk_0xA921AA820C25702F(Global_2359301.f_66, 1))
			{
				if (unk_0xA921AA820C25702F(Global_2359301.f_66, 2))
				{
					iVar1 = 0;
					while (iVar1 < 7)
					{
						unk_0x2A2173E46DAECD12(iVar1, Global_2359301.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x933D6A9EEC1BACD0(&(Global_2359301.f_66), 1);
			}
		}
		if (func_235(unk_0x4F8644AF03D0E0D6(), 0))
		{
			unk_0x419594E137637120(bParam0, iParam1, true);
		}
		else
		{
			unk_0x423DE3854BB50894(bParam0, iParam1);
		}
		unk_0x1A5CD7752DD28CD3(bParam0, iParam1);
		func_446(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_446(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x4B33C4243DE0C432(iVar0, bParam1, true);
	}
}

void func_447()
{
	int iVar0;
	
	if (!unk_0x048746E388762E11())
	{
		if (!unk_0xA921AA820C25702F(Global_2359301.f_66, 2))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				Global_2359301.f_58[iVar0] = unk_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			unk_0x933D6A9EEC1BACD0(&(Global_2359301.f_66), 2);
			unk_0x933D6A9EEC1BACD0(&(Global_2359301.f_66), 0);
		}
	}
}

var func_448(int iParam0)
{
	return Global_1582048[iParam0 /*324*/].f_76.f_2;
}

void func_449()
{
	if (func_450())
	{
		unk_0x8DFCED7A656F8802(true);
	}
}

bool func_450()
{
	return func_177("FM_RETRY_INV");
}

void func_451(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_455(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_454(iParam0))
	{
		func_453(iParam0, iVar0);
	}
	else
	{
		func_452(iParam0, iVar0);
	}
}

void func_452(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1333710 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1333712 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1333712 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1333713 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1333714 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1333715 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1333716 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1333717 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1333718 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1333719 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1333720 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1333721 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1333722 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1333723 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1333724 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1333725 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1333726 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_453(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, true);
	}
}

int func_454(int iParam0)
{
	if (Global_1333709)
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

int func_455(var uParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = uParam0;
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_456(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam1), 0);
	iVar0++;
	if (!func_458(iParam0))
	{
		func_57(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_457(iParam0, iVar0, iParam1, 1);
	}
}

void func_457(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454187[iParam0 /*6*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 773:
			Global_1333776[func_25(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1333782[func_25(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1333788[func_25(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1333794[func_25(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1333752[func_25(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1333758[func_25(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1333764[func_25(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1333770[func_25(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1333728[func_25(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1333734[func_25(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1333740[func_25(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1333746[func_25(iParam2)] = iParam1;
			break;
		
		case 743:
			Global_1333800[func_25(iParam2)] = iParam1;
			break;
		
		case 744:
			Global_1333806[func_25(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_1333812[func_25(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_1333818[func_25(iParam2)] = iParam1;
			break;
		
		case 1288:
			Global_1333824[func_25(iParam2)] = iParam1;
			break;
		
		case 625:
			Global_1333830[func_25(iParam2)] = iParam1;
			break;
		
		case 1263:
			Global_1333836[func_25(iParam2)] = iParam1;
			break;
		
		case 1860:
			Global_2474966[0 /*6*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2249:
			Global_2474966[1 /*6*/][func_25(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1333842[func_25(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1333848[func_25(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1333854[func_25(iParam2)] = iParam1;
			break;
		
		case 1221:
			Global_1333860[func_25(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_458(int iParam0)
{
	if (Global_1333709)
	{
		switch (iParam0)
		{
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
			case 743:
			case 744:
			case 745:
			case 746:
			case 1288:
			case 625:
			case 1263:
			case 750:
			case 751:
			case 752:
			case 1221:
			case 1860:
			case 2249:
				return 1;
				break;
			}
	}
	return 0;
}

int func_459()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (func_471())
	{
		if (unk_0x05095437424397FA())
		{
			Global_2434975 = 1;
		}
	}
	if (Global_1318730)
	{
		iVar0 = 1;
	}
	if (Global_2434975)
	{
		iVar0 = 1;
	}
	if (Global_2434974)
	{
		iVar0 = 1;
	}
	if (func_470(Global_96201.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2434906)
	{
		iVar0 = 1;
	}
	if (func_469(512))
	{
		iVar0 = 1;
	}
	if (func_468(128))
	{
		iVar0 = 1;
	}
	if (Global_1318754 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_348())
	{
		iVar0 = 0;
	}
	if (Global_2435034)
	{
		iVar0 = 2;
	}
	if (!func_466())
	{
		if (Global_1601761.f_55470 == 0)
		{
			iVar0 = 0;
		}
	}
	if (func_235(unk_0x4F8644AF03D0E0D6(), 0))
	{
		iVar0 = 0;
	}
	if (func_464())
	{
		iVar0 = 0;
	}
	Global_2435034 = 0;
	Global_2434974 = 0;
	Global_2434975 = 0;
	Global_1318730 = 0;
	Global_2434906 = 0;
	func_462(&(Global_96201.f_1), 32);
	func_461(512);
	func_460(128);
	return iVar0;
}

void func_460(int iParam0)
{
	Global_96258 = (Global_96258 - (Global_96258 && iParam0));
}

void func_461(int iParam0)
{
	Global_96259 = (Global_96259 - (Global_96259 && iParam0));
}

void func_462(var uParam0, int iParam1)
{
	func_463(uParam0, iParam1);
}

void func_463(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_464()
{
	if (((Global_1573701 || Global_1573672) || func_235(unk_0x4F8644AF03D0E0D6(), 0)) || func_465())
	{
		return 1;
	}
	return 0;
}

bool func_465()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18, 14);
}

int func_466()
{
	switch (func_467())
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

int func_467()
{
	return Global_2428692.f_1.f_2817;
}

bool func_468(int iParam0)
{
	return (Global_96258 && iParam0) != 0;
}

bool func_469(int iParam0)
{
	return (Global_96259 && iParam0) != 0;
}

bool func_470(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_471()
{
	return unk_0xA921AA820C25702F(Global_1312424, 0);
}

int func_472(int iParam0)
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

void func_473()
{
	if (unk_0x05661B80A8C9165F(unk_0x50FAC3A3E030A6E1(unk_0x4F8644AF03D0E0D6()), "MissionType"))
	{
		unk_0x00EE9F297C738720(unk_0x50FAC3A3E030A6E1(unk_0x4F8644AF03D0E0D6()), "MissionType");
	}
	if (unk_0x05661B80A8C9165F(unk_0x50FAC3A3E030A6E1(unk_0x4F8644AF03D0E0D6()), "MatchId"))
	{
		unk_0x00EE9F297C738720(unk_0x50FAC3A3E030A6E1(unk_0x4F8644AF03D0E0D6()), "MatchId");
	}
	if (unk_0x05661B80A8C9165F(unk_0x50FAC3A3E030A6E1(unk_0x4F8644AF03D0E0D6()), "TeamId"))
	{
		unk_0x00EE9F297C738720(unk_0x50FAC3A3E030A6E1(unk_0x4F8644AF03D0E0D6()), "TeamId");
	}
}

void func_474()
{
	Global_2427935.f_569 = 0;
	unk_0xFB3272229A82C759();
}

void func_475(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_27)
		{
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_27 = 1;
		}
	}
	else if (Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_27)
	{
		Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_27 = 0;
	}
}

int func_476(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_477()
{
	Global_2427935.f_708 = 0;
}

bool func_478()
{
	return Global_2427935.f_708;
}

void func_479()
{
	Global_2427935.f_712 = 0;
}

bool func_480()
{
	return Global_2427935.f_712;
}

void func_481()
{
	unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_76.f_32), 1);
}

int func_482(int iParam0)
{
	char* sVar0;
	
	if (func_465())
	{
		return 1;
	}
	if (func_487())
	{
		return 1;
	}
	if (unk_0xCA042B6957743895(&(Global_1601761.f_55124)))
	{
		return 1;
	}
	if (func_486())
	{
		return 1;
	}
	func_485();
	unk_0xD27058A1CA2B13EE();
	sVar0 = unk_0x906B778CA1DC72B6();
	if (iParam0 == 0)
	{
		Global_1672819++;
		unk_0xE7E035450A7948D5(sVar0, "quit", Global_1672819);
		unk_0xE7E035450A7948D5(sVar0, "quitd", 1);
		unk_0xE7E035450A7948D5(sVar0, "ply", Global_1672819.f_2);
		unk_0xE7E035450A7948D5(sVar0, "lp", unk_0x9A73240B49945C76());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1672844.f_1++;
		unk_0xE7E035450A7948D5(sVar0, "quit", Global_1672844.f_1);
		unk_0xE7E035450A7948D5(sVar0, "quitd", 1);
		unk_0xE7E035450A7948D5(sVar0, "ply", Global_1672844.f_4);
		unk_0xE7E035450A7948D5(sVar0, "lp", unk_0x9A73240B49945C76());
	}
	if (iParam0 == 0)
	{
		if (unk_0x692D808C34A82143(&(Global_1601761.f_55124), 0f, func_484(iParam0)))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (unk_0x692D808C34A82143(&(Global_964222.f_34), 0f, func_484(iParam0)))
		{
		}
	}
	func_483();
	func_485();
	unk_0xA1E5E0204A6FCC70();
	return 1;
}

void func_483()
{
	Global_1672819 = 0;
	Global_1672819.f_2 = 0;
	Global_1672819.f_8 = 0;
	Global_1672819.f_3 = 0;
	Global_1672819.f_6 = 0;
}

char* func_484(int iParam0)
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

void func_485()
{
	if (unk_0x906B778CA1DC72B6() != 0)
	{
		unk_0x9AB9C1CFC8862DFB();
	}
}

int func_486()
{
	if (unk_0x9FEDF86898F100E9())
	{
		return 1;
	}
	else if (unk_0xD53ACDBEF24A46E8())
	{
		return 1;
	}
	else if (unk_0x45E816772E93A9DB())
	{
		return 1;
	}
	return 0;
}

int func_487()
{
	if (!func_488())
	{
		return 1;
	}
	return 0;
}

int func_488()
{
	if (func_489())
	{
		return 0;
	}
	if (unk_0x9A4CF4F48AD77302() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_489()
{
	return Global_2435038;
}

bool func_490()
{
	return Global_2427935.f_605;
}

void func_491(bool bParam0)
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

void func_492()
{
	Global_2428692.f_1.f_2823.f_13 = 0;
	Global_2428692.f_1.f_2823 = 0;
	Global_2428692.f_1.f_2823.f_1 = 0;
	Global_2428692.f_1.f_2823.f_2 = 0;
	Global_2428692.f_1.f_2823.f_3 = 0;
	Global_2428692.f_1.f_2823.f_4 = 0;
	Global_2428692.f_1.f_2823.f_5 = 0;
	Global_2428692.f_1.f_2823.f_6 = 0;
	Global_2428692.f_1.f_2823.f_7 = 0;
	Global_2428692.f_1.f_2823.f_8 = 0;
	Global_2428692.f_1.f_2823.f_9 = 0;
	Global_2428692.f_1.f_2823.f_10 = 0;
	Global_2428692.f_1.f_2823.f_11 = 0;
	Global_2428692.f_1.f_2823.f_12 = 0;
}

bool func_493(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 1;
}

void func_494()
{
	Global_2427935.f_588 = 1;
}

void func_495(int iParam0, struct<3> Param1, struct<6> Param4)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_511();
	func_510();
	func_509();
	func_508();
	func_507();
	func_593();
	Global_1672859.f_9 = iParam0;
	switch (Global_1672859.f_9)
	{
		case 1:
			Global_1672859 = 0;
			Global_1672859.f_22 = { 0f, 0f, 0f };
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_12 = 0;
			break;
		
		case 2:
			Global_1672859 = 1;
			Global_1672859.f_22 = { Param1 };
			Global_1672859.f_16 = { Param4 };
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_12 = 0;
			break;
		
		case 3:
			if (Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/] == 0 || Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/] == 1)
			{
				func_506(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_76.f_28);
			}
			func_505();
			Global_1672859 = 1;
			Global_1672859.f_22 = { Param1 };
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_12 = 0;
			break;
		
		case 4:
			func_504();
			func_505();
			Global_1672859 = 1;
			if (func_589(unk_0x4F8644AF03D0E0D6()) || func_590(unk_0x4F8644AF03D0E0D6()))
			{
				func_503(1);
			}
			if ((func_502() || func_523()) && func_517())
			{
				Global_1672859.f_16 = { func_516() };
				Param4 = { Global_1672859.f_16 };
				Global_1672859.f_22 = { func_501() };
			}
			else if (func_502() || func_523())
			{
				if (func_500())
				{
					Global_1672859.f_22 = { func_499() };
				}
				else
				{
					Global_1672859.f_22 = { Param1 };
				}
			}
			else
			{
				Global_1672859.f_22 = { Param1 };
			}
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_12 = 1;
			break;
		
		case 5:
			func_504();
			func_498();
			func_505();
			if (func_589(unk_0x4F8644AF03D0E0D6()) || func_590(unk_0x4F8644AF03D0E0D6()))
			{
				func_503(1);
			}
			Global_1672859 = 1;
			Global_1672859.f_22 = { Param1 };
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_12 = 1;
			break;
		
		case 8:
			Global_1672859 = 0;
			Global_1672859.f_22 = { Param1 };
			Global_1672859.f_16 = { Param4 };
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_12 = 0;
			break;
		
		case 9:
			func_505();
			Global_1672859 = 1;
			Global_1672859.f_22 = { Param1 };
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_12 = 1;
			break;
		
		case 10:
			Global_1672859 = 0;
			Global_1672859.f_22 = { 0f, 0f, 0f };
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_12 = 0;
			break;
	}
	func_497();
	func_496();
	func_417(Global_1672859.f_9);
	Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_210 = { Global_1672859.f_22 };
	Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_213 = { Param4 };
}

void func_496()
{
	unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18), 23);
}

void func_497()
{
	unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18), 12);
}

void func_498()
{
	Global_1672859.f_4 = 1;
}

Vector3 func_499()
{
	return Global_2427935.f_24.f_491;
}

int func_500()
{
	if ((Global_2427935.f_24.f_491 != 0f || Global_2427935.f_24.f_491.f_1 != 0f) || Global_2427935.f_24.f_491.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_501()
{
	return Global_2427935.f_24.f_494;
}

var func_502()
{
	return Global_2427935.f_24.f_49;
}

void func_503(int iParam0)
{
	Global_2428692.f_5462 = iParam0;
}

void func_504()
{
	Global_1672859.f_3 = 1;
}

void func_505()
{
	Global_1672859.f_7 = 1;
}

void func_506(var uParam0)
{
	Global_1672859.f_10 = uParam0;
}

void func_507()
{
	Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_5 = 0;
}

void func_508()
{
	Global_1672859.f_10 = -1;
}

void func_509()
{
	Global_1672859.f_4 = 0;
}

void func_510()
{
	Global_1672859.f_3 = 0;
}

void func_511()
{
	Global_2428692.f_2841.f_2 = 1;
}

void func_512()
{
	Global_2427935.f_24.f_47 = 0;
}

void func_513()
{
	Global_2427935.f_24.f_41 = -1;
}

int func_514()
{
	return Global_2427935.f_24.f_41;
}

void func_515(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0xCA042B6957743895(&uParam0))
	{
		return;
	}
	if (!Global_2398371)
	{
		return;
	}
	if (!unk_0x0C515FAB3FF9EA92(&uParam0, &(Global_2398371.f_1)))
	{
		return;
	}
	Global_2398437 = 1;
}

struct<6> func_516()
{
	return Global_2427935.f_24.f_11;
}

bool func_517()
{
	return Global_2427935.f_24.f_51;
}

void func_518(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (unk_0xD7C95D322FF57522())
				{
					unk_0xD972DF67326F966E();
				}
			}
			break;
		
		case 1:
			unk_0xE679E3E06E363892(6, 0, 0);
			break;
		
		case 2:
			unk_0xE679E3E06E363892(12, 0, 0);
			break;
		
		case 3:
			unk_0xE679E3E06E363892(21, 0, 0);
			break;
		
		case 4:
			unk_0xE679E3E06E363892(0, 0, 0);
			break;
		
		default:
			break;
	}
}

int func_519()
{
	return Global_1672859.f_12;
}

void func_520(var uParam0, var uParam1)
{
	Global_1672859.f_13 = uParam0;
	Global_1672859.f_14 = uParam1;
}

void func_521(var uParam0)
{
	Global_1672859.f_12 = uParam0;
}

void func_522()
{
	Global_2427935.f_24.f_48 = 1;
}

bool func_523()
{
	return Global_2427935.f_24.f_47;
}

void func_524()
{
	if (unk_0xCA042B6957743895(&(Global_2391043.f_4.f_3)))
	{
		return;
	}
	if (!unk_0xCA042B6957743895(&(Global_2397671.f_3)))
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_2397671.f_3), &(Global_2391043.f_4.f_3)))
		{
			Global_1311838 = 0;
		}
		else
		{
			Global_1311838 = 1;
		}
	}
	Global_1311839 = 0;
	Global_1311839.f_1 = { Global_2391043.f_4.f_3 };
}

void func_525(var uParam0)
{
	Global_1672859.f_5 = 1;
	Global_1672859.f_11 = uParam0;
}

struct<13> func_526()
{
	struct<13> Var0;
	
	unk_0xE86051786B66CD8E(&Var0, 13);
	return Var0;
}

bool func_527()
{
	return Global_2427935.f_9;
}

void func_528(struct<6> Param0)
{
	if (unk_0xCA042B6957743895(&Param0))
	{
		return;
	}
	Global_1311839 = 1;
	Global_1311839.f_1 = { Param0 };
}

void func_529(float fParam0)
{
	if (unk_0x10FAB35428CCC9D7())
	{
		unk_0xCBF12D65F95AD686(fParam0);
		unk_0xD5B4883AC32F24C3(false);
	}
}

void func_530()
{
	Global_971737 = -1;
}

void func_531()
{
	func_532(-1f);
}

void func_532(float fParam0)
{
	if (unk_0x10FAB35428CCC9D7())
	{
		unk_0xCBF12D65F95AD686(fParam0);
		unk_0xD5B4883AC32F24C3(false);
	}
}

void func_533(bool bParam0, bool bParam1)
{
	unk_0x34F9E9049454A7A0(bParam0);
	unk_0x4A9FDE3A5A6D0437(bParam0);
	if (unk_0x8DB296B814EDDA07())
	{
		unk_0xA73667484D7037C3(bParam1);
	}
}

bool func_534()
{
	return Global_2427935.f_614;
}

void func_535()
{
	if (unk_0xA921AA820C25702F(Global_2359301, 24))
	{
		unk_0xE80492A9AC099A93(&Global_2359301, 24);
	}
}

void func_536()
{
	unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18), 14);
}

bool func_537()
{
	return Global_2427935.f_700;
}

int func_538()
{
	return Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_165;
}

void func_539(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573541 == 0)
		{
			Global_1573541 = 1;
		}
	}
	else if (Global_1573541 == 1)
	{
		Global_1573541 = 0;
	}
}

void func_540()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2428692.f_1.f_843[iVar0 /*57*/].f_44 = 0;
		iVar0++;
	}
}

int func_541()
{
	char* sVar0;
	
	if (func_465())
	{
		return 1;
	}
	if (func_487())
	{
		return 1;
	}
	if (func_486())
	{
		return 1;
	}
	if (unk_0xCA042B6957743895(&(Global_1601761.f_55124)))
	{
		return 1;
	}
	func_485();
	unk_0xD27058A1CA2B13EE();
	sVar0 = unk_0x906B778CA1DC72B6();
	Global_1672819.f_2++;
	if (Global_1672819.f_2 < 1)
	{
		Global_1672819.f_2 = 1;
	}
	unk_0xE7E035450A7948D5(sVar0, "quit", Global_1672819);
	unk_0xE7E035450A7948D5(sVar0, "ply", Global_1672819.f_2);
	unk_0xE7E035450A7948D5(sVar0, "plyd", 1);
	unk_0xE7E035450A7948D5(sVar0, "lp", unk_0x9A73240B49945C76());
	if (unk_0x692D808C34A82143(&(Global_1601761.f_55124), -1f, func_484(0)))
	{
	}
	func_483();
	func_485();
	unk_0xA1E5E0204A6FCC70();
	return 1;
}

void func_542()
{
	Global_2427935.f_711 = 1;
}

void func_543(bool bParam0)
{
	if (bParam0)
	{
		unk_0x56C8B608CFD49854();
	}
	else
	{
		unk_0xADED7F5748ACAFE6();
	}
}

void func_544()
{
	Global_2427935.f_710 = 1;
}

int func_545(int iParam0)
{
	switch (Global_1312448)
	{
		case 0:
			if (!func_546(iParam0))
			{
				if (Global_1582048[iParam0 /*324*/] == 2 || Global_1582048[iParam0 /*324*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_546(int iParam0)
{
	return Global_1582048[iParam0 /*324*/].f_165 != 0;
}

bool func_547()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116, 2);
}

void func_548()
{
	Global_2427935.f_710 = 0;
}

bool func_549()
{
	return Global_2427935.f_710;
}

void func_550(bool bParam0)
{
	unk_0x399D2D3B33F1B8EB("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", bParam0);
	unk_0x399D2D3B33F1B8EB("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", bParam0);
	unk_0x399D2D3B33F1B8EB("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", bParam0);
}

void func_551()
{
	Global_1672859.f_12 = -1;
	Global_1672859.f_13 = -1;
	Global_1672859.f_14 = -1;
}

void func_552()
{
	Global_1599347 = 0;
}

void func_553(bool bParam0)
{
	if (bParam0)
	{
		Global_1573682 = 1;
	}
	else
	{
		Global_1573682 = 0;
	}
}

void func_554()
{
	Global_1599348 = -1;
	Global_1599351 = 0;
}

void func_555()
{
	Global_2446207.f_271 = 0;
	func_558(3782, 0, -1, 1);
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (func_556())
		{
			unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 5, 0, 0, 0);
		}
	}
}

bool func_556()
{
	return func_557(unk_0xD80958FC74E988A6());
}

int func_557(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x67F3780DD425D4FC(iParam0, 5);
	iVar1 = -1;
	switch (unk_0x9F47B058362C84B5(iParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x0368B3A838070348(iParam0, 5, iVar0, unk_0x04A355E041E004E6(iParam0, 5));
			if (unk_0x341DE7ED1D2A1BFD(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x0368B3A838070348(iParam0, 5, iVar0, unk_0x04A355E041E004E6(iParam0, 5));
			if (unk_0x341DE7ED1D2A1BFD(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_558(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_559()
{
	Global_2427935.f_711 = 0;
}

bool func_560()
{
	return Global_2427935.f_711;
}

void func_561(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_563(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17236.f_7207)
	{
		unk_0x450930E616475D0D(15);
		Global_17236.f_7207 = 0;
	}
	unk_0x55598D21339CB998(0f);
	if (Global_17236.f_4886[iVar0])
	{
		unk_0x2A179DF17CCF04CD(9, false);
		Global_17236.f_4886[iVar0] = 0;
	}
	if (Global_17236.f_4879[iVar0])
	{
		unk_0xBE2CACCF5A8AA805("CommonMenu");
		Global_17236.f_4879[iVar0] = 0;
	}
	if (bParam0)
	{
		func_562(&(Global_17236.f_4918[iVar0 /*10*/]));
		Global_17236.f_4979[iVar0] = 0;
	}
	else
	{
		Global_17236.f_4979[iVar0] = 0;
	}
}

void func_562(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x85F01B8D5B90570E(*iParam0))
		{
			unk_0x1D132D614DD86811(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_563(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x10FAB35428CCC9D7() && unk_0x2910669969E9535E())
		{
			iParam2 = unk_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, unk_0x442E0A7EDE4A738A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xD24D37CC275948CC(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17236.f_4979[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17236.f_4979[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17236.f_4979[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_564()
{
}

void func_565(int iParam0)
{
	struct<35> Var0;
	int iVar35;
	var uVar36;
	
	Var0 = -1;
	Var0.f_21 = 3;
	if (Global_2427935.f_543.f_9 == 0)
	{
		Global_1672884.f_1121 = 0;
	}
	iVar35 = 0;
	while (iVar35 <= 31)
	{
		uVar36 = Global_1672884[iVar35 /*35*/].f_3;
		Global_1672884[iVar35 /*35*/] = { Var0 };
		if (func_566())
		{
			Global_1672884[iVar35 /*35*/].f_3 = uVar36;
		}
		Global_1672884[iVar35 /*35*/].f_1 = func_123();
		Global_1672884[iVar35 /*35*/] = -1;
		Global_1672884[iVar35 /*35*/].f_2 = -1;
		iVar35++;
	}
	if ((!func_566() && !func_573()) && iParam0)
	{
		Global_1672884.f_1123 = 0;
		Global_1672884.f_1124 = 0;
	}
}

bool func_566()
{
	return unk_0xA921AA820C25702F(Global_2427935.f_543.f_1, 0);
}

void func_567(bool bParam0)
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

void func_568(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x05661B80A8C9165F(unk_0x50FAC3A3E030A6E1(iParam0), "MPBitset"))
	{
		iVar0 = unk_0xA06C969B02A97298(unk_0x50FAC3A3E030A6E1(iParam0), "MPBitset");
	}
	unk_0xE80492A9AC099A93(&iVar0, iParam1);
	unk_0x0CE3AA5E1CA19E10(unk_0x50FAC3A3E030A6E1(iParam0), "MPBitset", iVar0);
}

bool func_569()
{
	return Global_1672859.f_3;
}

bool func_570()
{
	return Global_2434309.f_7;
}

bool func_571()
{
	return unk_0xA921AA820C25702F(Global_2427935.f_24.f_3, 8);
}

void func_572()
{
	Global_2427935.f_24.f_49 = 0;
}

bool func_573()
{
	return unk_0xA921AA820C25702F(Global_2427935.f_24.f_3, 0);
}

void func_574()
{
	unk_0xE80492A9AC099A93(&(Global_964222.f_8), 8);
}

void func_575(bool bParam0)
{
	if (bParam0)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_13.f_1), 0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_13.f_1), 0);
	}
}

void func_576(int iParam0)
{
	if (unk_0x10FAB35428CCC9D7())
	{
		if (((Global_2428692.f_3151 != 0 && Global_2428692.f_3151.f_1 != 0) && Global_2428692.f_3151.f_2 != 0) && Global_2428692.f_3151.f_3 != 0)
		{
			unk_0xC5BE134EC7BA96A0(Global_2428692.f_3151, Global_2428692.f_3151.f_1, Global_2428692.f_3151.f_2, Global_2428692.f_3151.f_3, iParam0);
		}
	}
	func_577();
}

void func_577()
{
	Global_2428692.f_3151 = 0;
	Global_2428692.f_3151.f_1 = 0;
	Global_2428692.f_3151.f_2 = 0;
	Global_2428692.f_3151.f_3 = 0;
}

void func_578()
{
	Global_2428692.f_1.f_2799 = 1;
}

bool func_579()
{
	return unk_0xA921AA820C25702F(Global_2428692.f_1.f_2807, 12);
}

void func_580(int iParam0)
{
	if (!func_573() || iParam0)
	{
		Global_1574136 = 0;
		Global_1574135 = 0;
	}
}

void func_581(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;
	
	Global_2427935.f_24 = -1;
	Global_2427935.f_24.f_55 = -1;
	Global_2427935.f_24.f_1 = -1;
	Global_2427935.f_24.f_4 = 0;
	Global_2427935.f_24.f_2 = 0;
	Global_2427935.f_24.f_3 = 0;
	Global_2427935.f_24.f_40 = -1;
	Global_2427935.f_24.f_5 = { Var0 };
	Global_2427935.f_24.f_53 = 0;
	Global_2427935.f_24.f_129 = 0;
	Global_2427935.f_24.f_344 = 0;
	Global_2427935.f_24.f_54 = 0;
	Global_2427935.f_24.f_130 = 0;
	Global_2427935.f_24.f_345 = 0;
	Global_2427935.f_24.f_518 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2427935.f_24.f_476[iVar6] = 0;
		iVar6++;
	}
	Global_2427935.f_24.f_52 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2427935.f_24.f_56[iVar6] = 0;
		iVar6++;
	}
	Global_2427935.f_24.f_128 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2427935.f_24.f_131[iVar6] = 0;
		iVar6++;
	}
	Global_2427935.f_24.f_343 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2427935.f_24.f_346[iVar6] = 0;
		Global_2427935.f_24.f_361[iVar6] = 0;
		Global_2427935.f_24.f_391[iVar6 /*6*/] = { Var0 };
		Global_2427935.f_24.f_376[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2427935.f_24.f_42[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2427935.f_24.f_497 = 0;
			Global_2427935.f_24.f_498 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2427935.f_24.f_505[iVar6] = -1;
				Global_2427935.f_24.f_511[iVar6] = -1;
				iVar6++;
			}
			Global_2427935.f_24.f_47 = 0;
			Global_2427935.f_24.f_11 = { Var0 };
			Global_2427935.f_24.f_51 = 0;
			Global_2427935.f_24.f_491 = { 0f, 0f, 0f };
			Global_2427935.f_24.f_494 = { 0f, 0f, 0f };
			Global_2427935.f_24.f_50 = 0;
			Global_2427935.f_24.f_49 = 0;
		}
	}
}

void func_582()
{
	Global_2434309.f_8 = 0;
	Global_2434309.f_7 = 0;
}

bool func_583()
{
	return Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/] == 5;
}

void func_584()
{
	Global_1681535.f_1773 = 0;
}

void func_585()
{
	Global_2427935.f_704 = 0;
}

bool func_586()
{
	return Global_2427935.f_704;
}

void func_587()
{
	Global_14558 = 0;
	func_588();
}

void func_588()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

bool func_589(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 7;
}

bool func_590(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 2;
}

void func_591()
{
	Global_2427935.f_572 = 0;
}

void func_592()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_3 = -1;
	iVar10 = unk_0x4F8644AF03D0E0D6();
	if (iVar10 != -1)
	{
		Global_1599457[iVar10 /*32*/].f_22 = { Var0 };
	}
}

void func_593()
{
	Global_1672859.f_7 = 0;
}

void func_594(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2427935.f_543.f_3 = { Var0 };
	Global_2427935.f_543 = 0;
	Global_2427935.f_543.f_1 = 0;
	Global_2427935.f_543.f_11 = 0;
	if (bParam0)
	{
		Global_2427935.f_543.f_2 = 0;
		Global_2427935.f_543.f_12 = 0;
		Global_2427935.f_543.f_13 = 0;
		if (bParam1)
		{
			Global_2427935.f_543.f_9 = 0;
			Global_2427935.f_543.f_10 = 0;
		}
		if (iParam2 && !unk_0x05095437424397FA())
		{
			Global_1672884.f_1123 = 0;
			Global_1672884.f_1124 = 0;
		}
		if (unk_0x4F8644AF03D0E0D6() != -1)
		{
			Global_1599457[unk_0x4F8644AF03D0E0D6() /*32*/].f_22.f_1 = 0;
		}
	}
}

void func_595()
{
	Global_2427935.f_543.f_11 = 0;
}

bool func_596()
{
	return Global_2427935.f_543.f_11;
}

void func_597()
{
	unk_0xE80492A9AC099A93(&(Global_1599457[unk_0x4F8644AF03D0E0D6() /*32*/].f_18), 3);
}

void func_598()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1574147[iVar0] = 0;
		iVar0++;
	}
}

void func_599()
{
	int iVar0;
	
	iVar0 = unk_0x4F8644AF03D0E0D6();
	if (iVar0 != -1)
	{
		Global_1599457[iVar0 /*32*/].f_22.f_4 = 0;
	}
}

void func_600()
{
	Global_2435006 = 0;
	Global_2435007 = 0;
	Global_2435008 = 0;
	Global_2435009 = 0;
}

void func_601()
{
	Global_2427935.f_24.f_48 = 0;
}

void func_602()
{
	Global_2427935.f_24.f_50 = 0;
}

void func_603()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!unk_0xCA042B6957743895(&(Global_1573337[iVar0 /*6*/])))
		{
			StringCopy(&(Global_1573337[iVar0 /*6*/]), "", 24);
		}
		iVar0++;
	}
}

void func_604(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xEE68096F9F37341E();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!unk_0xA921AA820C25702F(Global_1582048[iVar0 /*324*/].f_172, 0))
			{
				unk_0x933D6A9EEC1BACD0(&(Global_1582048[iVar0 /*324*/].f_172), 0);
			}
		}
		else if (unk_0xA921AA820C25702F(Global_1582048[iVar0 /*324*/].f_172, 0))
		{
			unk_0xE80492A9AC099A93(&(Global_1582048[iVar0 /*324*/].f_172), 0);
		}
	}
}

void func_605()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_608(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1689857.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_607();
	func_606();
	Global_1689857 = 0;
}

void func_606()
{
	Global_1689857.f_4 = 0;
}

void func_607()
{
	Global_1689857.f_3 = 0;
}

void func_608(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1689857.f_5[iParam0 /*53*/] = { Var0 };
}

void func_609()
{
	unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18), 20);
}

void func_610(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 18, 1))
		{
			func_58(iParam0, 18, 1);
		}
	}
	else if (func_23(iParam0, 18, 1))
	{
		func_56(iParam0, 18, 1);
	}
}

void func_611()
{
	unk_0xE80492A9AC099A93(&(Global_2446207.f_729), 3);
}

void func_612(bool bParam0, int iParam1)
{
	func_203();
	if (bParam0)
	{
		func_292(1);
		unk_0x8DFCED7A656F8802(true);
	}
	unk_0xCC33FA791322B9D9();
	func_198();
	unk_0xEEC4047028426510(false);
	func_232(0, 1, 1, 0);
	func_615();
	func_186(12, 0, -1);
	func_187(1);
	unk_0xDCD4EA924F42D01A(false, -1);
	unk_0xA0EBB943C300E693(true);
	unk_0xA6294919E56FF02A(true);
	func_614();
	unk_0x19F21E63AE6EAE4E(true);
	if (unk_0x10FAB35428CCC9D7())
	{
		if (unk_0x6CC27C9FA2040220())
		{
			unk_0x9CA5DE655269FEC4(false, false);
		}
	}
	func_238(0);
	if (((func_107() == 0 && func_613() == 0) && iParam1) && !func_233(unk_0x4F8644AF03D0E0D6()))
	{
		func_322(unk_0x4F8644AF03D0E0D6(), 1, 0, 1);
	}
	Global_2421967.f_3012 = 0;
}

bool func_613()
{
	return unk_0xA921AA820C25702F(Global_2427935, 7);
}

void func_614()
{
	Global_17098.f_5 = 0;
}

void func_615()
{
	func_187(1);
	func_186(4, 0, -1);
	func_186(6, 0, -1);
	func_186(7, 0, -1);
	func_186(3, 0, -1);
	func_186(1, 0, -1);
	func_186(2, 0, -1);
	func_186(11, 0, -1);
	func_186(13, 0, -1);
	func_186(14, 0, -1);
	func_186(16, 0, -1);
}

void func_616(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312447)
	{
		if (!func_649())
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				Global_1573719[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_647(unk_0x4F8644AF03D0E0D6(), bParam0);
	iVar2 = func_645(iVar1, bParam0);
	if (!func_644(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			Global_1573719[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1573719[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 128)
	{
		iVar3 = func_643(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_641(iVar4))
			{
				func_632(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_625(func_627(59, 0), 0);
	func_624(func_627(22, 0), func_627(73, 0));
	if (func_649())
	{
		if (func_440(77, -1))
		{
			func_623(1);
			func_622(1);
		}
	}
	if (func_621() || func_620())
	{
		func_30(77, 1, -1, 1);
		if (unk_0x10FAB35428CCC9D7())
		{
			func_617(28, 1, 0);
			func_617(29, 1, 0);
			func_617(30, 1, 0);
			func_617(31, 1, 0);
			func_617(32, 1, 0);
			func_617(33, 1, 0);
			func_617(34, 1, 0);
			func_617(35, 1, 0);
			func_617(36, 1, 0);
			func_617(37, 1, 0);
			func_617(38, 1, 0);
		}
	}
	if (func_627(21, 0))
	{
		unk_0xE369A5783B866016(0);
	}
	Global_971739 = 0;
}

void func_617(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 0, 0))
		{
			if (iParam2 && Global_89836.f_17[iParam0])
			{
				if (func_619(iParam0) == 3 && !func_22(iParam0))
				{
					func_618(iParam0);
					func_58(iParam0, 0, 0);
					func_56(iParam0, 1, 0);
					func_355(iParam0);
				}
				else
				{
					func_58(iParam0, 1, 0);
					func_355(iParam0);
				}
			}
			else
			{
				func_58(iParam0, 0, 0);
				func_56(iParam0, 1, 0);
				func_355(iParam0);
			}
		}
		else
		{
			func_56(iParam0, 1, 0);
			func_355(iParam0);
		}
	}
	else if (func_23(iParam0, 0, 0))
	{
		func_56(iParam0, 0, 0);
		func_56(iParam0, 1, 0);
		func_355(iParam0);
	}
}

void func_618(int iParam0)
{
	if (Global_89836.f_17[iParam0])
	{
		func_58(iParam0, 10, 1);
		func_58(iParam0, 19, 1);
	}
}

int func_619(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
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
	}
	return 5;
}

bool func_620()
{
	return Global_1315886;
}

bool func_621()
{
	return Global_1315888;
}

void func_622(bool bParam0)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	func_617(28, bParam0, 0);
	func_617(30, bParam0, 0);
	func_617(31, bParam0, 0);
	func_617(33, bParam0, 0);
	func_617(34, bParam0, 0);
	func_617(38, bParam0, 0);
}

void func_623(bool bParam0)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	func_617(29, bParam0, 0);
	func_617(32, bParam0, 0);
	func_617(36, bParam0, 0);
	func_617(35, bParam0, 0);
	func_617(37, bParam0, 0);
}

void func_624(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_617(0, bParam0, 1);
	func_617(1, bParam0, 1);
	func_617(2, bParam0, 1);
	func_617(3, bParam0, 1);
	func_617(4, bParam0, 1);
	func_617(5, bParam0, 1);
	func_617(6, bParam0, 1);
	func_617(7, bParam0, bVar0);
	func_617(8, bParam0, 1);
	func_617(9, bParam0, 1);
	func_617(10, bParam0, 1);
	func_617(11, bParam0, 1);
	func_617(12, bParam0, bVar0);
	func_617(13, bParam0, 1);
	func_617(21, bParam0, 1);
	func_617(14, bParam0, 1);
	func_617(15, bParam0, 1);
	func_617(16, bParam0, 1);
	func_617(17, bParam0, 1);
	func_617(18, bParam0, 1);
	func_617(19, bParam0, 1);
	func_617(20, bParam0, 1);
	func_617(22, bParam0, 1);
	func_617(23, bParam0, 1);
	func_617(24, bParam0, 1);
	func_617(25, bParam0, 1);
	func_617(26, bParam0, 1);
	func_617(27, bParam0, 1);
	func_356(1, !bParam1);
	if (!bVar0)
	{
		func_618(12);
	}
}

void func_625(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	uVar0 = func_626(0);
	func_617(39, bParam0, 0);
	func_617(40, bParam0, 0);
	func_617(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_617(43, bParam0, 0);
		func_617(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(39))
		{
			func_618(39);
		}
		if (!func_22(40))
		{
			func_618(40);
		}
		if (!func_22(41))
		{
			func_618(41);
		}
		if (!func_22(42))
		{
			func_618(42);
		}
		if (!func_22(43))
		{
			func_618(43);
		}
	}
}

int func_626(bool bParam0)
{
	int iVar0;
	
	if (Global_1312447)
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	if (func_620())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0xA921AA820C25702F(Global_2446207.f_1610, 26))
		{
			iVar0 = func_24(1177, -1, 0);
			if (!unk_0xA921AA820C25702F(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_440(122, -1);
}

bool func_627(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6000 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_629(unk_0x4F8644AF03D0E0D6(), 85))
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
		if (Global_262145.f_4806 == 1)
		{
			return 1;
		}
	}
	if (func_621() || func_620())
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
			if (func_628())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0xA921AA820C25702F(Global_1573719[iVar1], iVar0);
}

int func_628()
{
	int iVar0;
	
	if (Global_1312447)
	{
		return 1;
	}
	if (unk_0xA921AA820C25702F(Global_2446207.f_1615, 23))
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	if (func_620())
	{
		return 1;
	}
	iVar0 = Global_1333824[func_25(-1)];
	if (unk_0xA921AA820C25702F(iVar0, 7))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_2446207.f_1615), 23);
		return 1;
	}
	return 0;
}

bool func_629(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_649())
	{
		return 0;
	}
	if (func_631())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_630(iParam1);
	iVar1 = uVar0;
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_300, iVar1);
}

int func_630(int iParam0)
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

bool func_631()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_120, 3);
}

void func_632(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_640(-1))
			{
				if (!func_649())
				{
					return;
				}
			}
			if (!func_640(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_639() && !func_638())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_637())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_640(-1))
				{
					if (!func_633())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0x933D6A9EEC1BACD0(&(Global_1573719[iVar1]), iVar0);
	}
}

int func_633()
{
	int iVar0;
	
	if (func_636(unk_0x4F8644AF03D0E0D6()))
	{
		return 1;
	}
	iVar0 = Global_1333824[func_25(-1)];
	if (unk_0xA921AA820C25702F(iVar0, 2))
	{
		func_634(1);
		return 1;
	}
	return 0;
}

void func_634(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116, 25))
		{
			func_635(unk_0x4F8644AF03D0E0D6(), 12);
			unk_0x933D6A9EEC1BACD0(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 25);
		}
	}
	else if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116, 25))
	{
		unk_0xE80492A9AC099A93(&(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116), 25);
	}
}

void func_635(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_630(iParam1);
	iVar1 = uVar0;
	unk_0x933D6A9EEC1BACD0(&(Global_1582048[iParam0 /*324*/].f_300), iVar1);
}

bool func_636(int iParam0)
{
	if (func_621())
	{
		return 1;
	}
	if (func_620())
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_116, 25);
}

int func_637()
{
	int iVar0;
	
	if (unk_0xA921AA820C25702F(Global_2446207.f_1615, 6))
	{
		return 1;
	}
	iVar0 = Global_1333824[func_25(-1)];
	if (unk_0xA921AA820C25702F(iVar0, 0))
	{
		if (!unk_0xA921AA820C25702F(Global_2446207.f_1615, 6))
		{
			unk_0x933D6A9EEC1BACD0(&(Global_2446207.f_1615), 6);
		}
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	if (func_620())
	{
		return 1;
	}
	return 0;
}

bool func_638()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_120, 7);
}

int func_639()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	if (func_620())
	{
		return 1;
	}
	return func_440(121, -1);
}

bool func_640(int iParam0)
{
	return func_440(123, iParam0);
}

int func_641(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_621())
	{
		return 1;
	}
	if (func_620())
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
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			iVar0 = func_24(func_642(iParam0), -1, 0);
			if (unk_0xA921AA820C25702F(iVar0, iVar1))
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

int func_642(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1186;
		
		case 1:
			return 1187;
		
		case 2:
			return 1188;
		
		case 3:
			return 1189;
		
		case 4:
			return 1190;
		
		default:
	}
	return 1186;
}

int func_643(int iParam0)
{
	if (func_621())
	{
		return 1;
	}
	if (func_620())
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
			if (!func_640(-1))
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

int func_644(int iParam0)
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	if (func_620())
	{
		return 1;
	}
	return func_440(119, iParam0);
}

int func_645(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_646(iParam0, 0);
}

int func_646(int iParam0, int iParam1)
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
		if (Global_270025[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270025[iVar3] < iParam0)
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

int func_647(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_648(iParam0);
}

int func_648(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x4F8644AF03D0E0D6())
			{
				return Global_1333830[func_25(-1)];
			}
			else if (func_53(iParam0))
			{
				return Global_1582048[iParam0 /*324*/].f_180.f_1;
			}
		}
	}
	else
	{
		return Global_1333830[func_25(-1)];
	}
	return 0;
}

int func_649()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	if (func_620())
	{
		return 1;
	}
	return func_440(120, -1);
}

int func_650()
{
	bool bVar0;
	
	func_655(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_423())
	{
		return 1;
	}
	if (Global_2436712)
	{
		return 1;
	}
	if (func_654())
	{
		return 1;
	}
	if (func_653(157))
	{
		if (!func_652())
		{
			return 1;
		}
	}
	if (func_653(155))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_651() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_651()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_651()
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

bool func_652()
{
	return Global_2427935.f_570;
}

int func_653(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_654()
{
	return Global_2434971;
}

void func_655(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5F92A689A06620AA(1))
	{
		iVar1 = unk_0xD8F66A3A60C62153(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2902843FCD2B2D79(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_656(iVar0);
					break;
				
				case 2:
					unk_0x2902843FCD2B2D79(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_656(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x43A66C31C68491C0(Var0.f_1);
			if (unk_0x7239B21A38F536BA(iVar3))
			{
				if (unk_0x997ABD671D25CA0B(iVar3, false))
				{
					iVar4 = unk_0x9A9112A0FE9A4713(iVar3, false);
					if (unk_0x46E571A0E20D01F1(iVar4, Var0.f_2) && unk_0x2910669969E9535E())
					{
						if (func_657(iVar4, &bVar5))
						{
							unk_0xA711568EEDB43069(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x629BFA74418D6239(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_657(int iParam0, var uParam1)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x0A7B270912999B3C(iParam0))
		{
			if (unk_0x0991549DE4D64762(iParam0))
			{
				unk_0xAD738C3085FE7E11(iParam0, false, true);
				*uParam1 = 1;
			}
		}
		if (unk_0xDDE6DF5AE89981D2(iParam0, false))
		{
			if (unk_0x01BF60A500E28887(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_658()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_659(struct<17> Param0, var uParam17, var uParam18, var uParam19)
{
	int iVar0;
	
	unk_0x1CA59E306ECB80A5(2, false, Param0.f_16);
	func_664(0, -1, 0);
	unk_0x3E9B2F01C50DF595(&Local_561, 7);
	unk_0x3364AA97340CA215(&Local_733, 11);
	Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/] = 16;
	if (bLocal_752)
	{
		if (!unk_0xB16FCE9DDC7BA182() && !unk_0x797AC7CB535BA28F())
		{
			unk_0x891B5B39AC6302AF(800);
		}
		if (!unk_0xADA24309FE08DACF())
		{
			if (!unk_0x35F0B98A8387274D())
			{
				iVar0 = unk_0x4F8644AF03D0E0D6() + 32;
				unk_0xFB680D403909DC70(1, iVar0);
				func_190(1);
			}
		}
	}
	unk_0xB60FEBA45333D36F(1);
	unk_0x76B02E21ED27A469(1);
	if (!func_663())
	{
		func_366(0);
	}
	unk_0xAA391C728106F7AF(false);
	func_610(iLocal_86, 1);
	func_368(1);
	if (!bLocal_752)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			func_322(unk_0x4F8644AF03D0E0D6(), 1, 0, 1);
		}
	}
	Global_2446207.f_1610 = 0;
	unk_0x1A5AA1208AF5DB59(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, false, false, false);
	func_662();
	func_660();
	Local_733[unk_0x57A3BDDAD8E5AA0A() /*5*/] = 0;
}

void func_660()
{
	unk_0x34F9E9049454A7A0(true);
	func_661(1, -1);
	unk_0x4A9FDE3A5A6D0437(true);
	if (func_440(133, -1))
	{
		func_30(133, 0, -1, 1);
	}
	Global_2427935.f_614 = 1;
}

void func_661(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x0D01D20616FC73FB(0, iParam1);
			break;
		
		default:
			iVar1 = func_382(iParam1);
			iVar0 = unk_0xC488FF2356EA7791(iVar1);
			if (unk_0xA921AA820C25702F(iVar0, iParam0))
			{
				unk_0xE80492A9AC099A93(&iVar0, iParam0);
				unk_0x0D01D20616FC73FB(iVar0, iParam1);
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

void func_662()
{
	unk_0xE8854A4326B9E12B(&iLocal_746);
	unk_0x504D54DF3F6F2247(0, 0, 0);
	unk_0x1DDA930A0AC38571(0, 17.0693f, -1115.935f, 28.7968f, 0);
	unk_0x39E72BC99E6360CB(iLocal_746);
}

int func_663()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 0;
		}
		if (unk_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_423())
		{
			return 0;
		}
		if (func_653(155))
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

int func_664(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_665();
			}
			else
			{
				return 0;
			}
		}
		if (!func_348())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_665();
					}
					else
					{
						return 0;
					}
				}
				if (func_423())
				{
					if (!bParam2)
					{
						func_665();
					}
					else
					{
						return 0;
					}
				}
				if (func_653(155))
				{
					if (!bParam2)
					{
						func_665();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xCA97246103B63917())
			{
				if (!bParam2)
				{
					func_665();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x57D158647A6BFABF();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			if (!bParam2)
			{
				func_665();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xCA97246103B63917())
	{
		if (!bParam2)
		{
			func_665();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_665()
{
	unk_0x1090044AD1DA76FA();
}

