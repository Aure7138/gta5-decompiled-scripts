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
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
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
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_677(ScriptParam_0);
	}
	while (true)
	{
		func_676();
		if (func_668())
		{
			func_367(1);
		}
		if (func_364(0))
		{
			Local_733[unk_0x519AAFF77CC141DF() /*5*/] = 3;
		}
		if (func_363(unk_0x519AAFF77CC141DF()) > -1)
		{
			unk_0x5DFA9D9EFD236763(unk_0x1329891157A54C63());
		}
		switch (func_362(unk_0x519AAFF77CC141DF()))
		{
			case 0:
				if (!unk_0x236D8AD7EE179F46(uLocal_744, 10))
				{
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						unk_0xF3148AAF69AF9CBC(&uLocal_744, 10);
					}
				}
				unk_0x86B83C54AF71BD12("FMINT", 0);
				if (func_361() && unk_0x138E88466113A6BE("FMINT", 0))
				{
					if (func_360() > 0)
					{
						func_359(&uLocal_396, 1, 0, "Lamar", 0, 1);
						func_358(0);
						func_357(4, 1);
						func_357(1, 1);
						func_357(0, 1);
						func_357(2, 1);
						func_357(3, 0);
						func_355(iLocal_86, 1);
						Local_733[unk_0x519AAFF77CC141DF() /*5*/] = 2;
						if (bLocal_752)
						{
							Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_2 = -2;
						}
						else
						{
							Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_360() == 4)
				{
					Local_733[unk_0x519AAFF77CC141DF() /*5*/] = 4;
				}
				if (func_360() == 6 && Local_733[unk_0x519AAFF77CC141DF() /*5*/] < 4)
				{
					Local_733[unk_0x519AAFF77CC141DF() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_338();
				func_20();
				if (func_360() == 4)
				{
					Local_733[unk_0x519AAFF77CC141DF() /*5*/] = 4;
				}
				if (func_360() == 6 && Local_733[unk_0x519AAFF77CC141DF() /*5*/] < 4)
				{
					Local_733[unk_0x519AAFF77CC141DF() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_733[unk_0x519AAFF77CC141DF() /*5*/] = 5;
				break;
			
			case 5:
				func_18(&(Local_561.f_5));
				if (func_17(&(Local_561.f_5)))
				{
					Local_733[unk_0x519AAFF77CC141DF() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_10(iLocal_85);
				Local_733[unk_0x519AAFF77CC141DF() /*5*/] = 6;
			
			case 6:
				func_367(0);
				break;
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			switch (func_360())
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
		if (unk_0x236D8AD7EE179F46(Local_561.f_1, 1))
		{
			return 1;
		}
	}
	else if (unk_0x236D8AD7EE179F46(Local_561.f_1, 2))
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
	if (unk_0x1C7D9BFDF15A02B4())
	{
		if (!unk_0x236D8AD7EE179F46(Local_561.f_1, 3))
		{
			if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_4, 0))
			{
				unk_0xF3148AAF69AF9CBC(&(Local_561.f_1), 3);
			}
		}
		if (!unk_0x236D8AD7EE179F46(Local_561.f_1, 4))
		{
			if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_4, 2))
			{
				unk_0xF3148AAF69AF9CBC(&(Local_561.f_1), 4);
			}
		}
		if (!unk_0x236D8AD7EE179F46(Local_561.f_1, 5))
		{
			if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 3))
			{
				unk_0xF3148AAF69AF9CBC(&(Local_561.f_1), 5);
			}
		}
		if (!unk_0x236D8AD7EE179F46(Local_561.f_1, 6))
		{
			if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 4))
			{
				unk_0xF3148AAF69AF9CBC(&(Local_561.f_1), 6);
			}
		}
		if (!unk_0x236D8AD7EE179F46(Local_561.f_1, 7))
		{
			if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 5))
			{
				unk_0xF3148AAF69AF9CBC(&(Local_561.f_1), 7);
			}
		}
		if (!unk_0x236D8AD7EE179F46(Local_561.f_1, 8))
		{
			if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 6))
			{
				unk_0xF3148AAF69AF9CBC(&(Local_561.f_1), 8);
			}
		}
		switch (Local_561.f_2)
		{
			case 0:
				if (unk_0x236D8AD7EE179F46(Local_561.f_1, 3))
				{
					if (func_4(&(Local_561.f_3), &(Local_561.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_568))
					{
						unk_0x686D6CDC14C4BA6C(unk_0x1D1DAF7F94D5FE77(Local_561.f_3), 1, 0);
						Local_561.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0x236D8AD7EE179F46(Local_561.f_1, 4))
				{
					Local_561.f_2 = 1;
				}
				break;
			
			case 1:
				if (unk_0x236D8AD7EE179F46(Local_561.f_1, 5))
				{
					Local_561.f_2 = 3;
				}
				break;
			
			case 3:
				if (unk_0x236D8AD7EE179F46(Local_561.f_1, 6))
				{
					Local_561.f_2 = 4;
				}
				break;
			
			case 4:
				if (unk_0x236D8AD7EE179F46(Local_561.f_1, 7))
				{
					Local_561.f_2 = 5;
				}
				break;
			
			case 5:
				if (unk_0x236D8AD7EE179F46(Local_561.f_1, 8))
				{
					Local_561.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam5, var uParam6)
{
	if (func_7(Global_2451473.f_735) && func_7(Global_2451473.f_736))
	{
		if (!unk_0x250A8F68F67CA19A(*uParam0))
		{
			if (func_6(uParam0, Global_2451473.f_735, Param2, fParam5, 1, 1, 1, 0, 1, 1))
			{
				unk_0x04CA137FB87EF9B9(unk_0x1D1DAF7F94D5FE77(*uParam0), 1);
			}
		}
		if (!unk_0x250A8F68F67CA19A(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2451473.f_736, -1, 1, 1, 1))
			{
				unk_0x1D15D99A10A15334(unk_0xCFD52BB67CC0A98F(*uParam1), 1);
				unk_0x887F4488DA99FD21(Global_2451473.f_735);
				unk_0x887F4488DA99FD21(Global_2451473.f_736);
				unk_0xEA89E72C99125D9C(unk_0x1D1DAF7F94D5FE77(*uParam0), 0);
				unk_0x36C8C9789AEE2A5D(unk_0xCFD52BB67CC0A98F(*uParam1), 1);
				func_359(uParam6, 8, unk_0xCFD52BB67CC0A98F(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!unk_0x250A8F68F67CA19A(*uParam0) || !unk_0x250A8F68F67CA19A(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x9C32248B2352E183(1))
	{
		return 0;
	}
	if (!unk_0x250A8F68F67CA19A(uParam1))
	{
		return 0;
	}
	if (!unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x39E5853480A5C856(unk_0x4D135F3066A9BF9C(unk_0x1D1DAF7F94D5FE77(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(unk_0xCFD52BB67CC0A98F(*uParam0), iParam7);
		if (unk_0xE682D8146CB90267(unk_0xCFD52BB67CC0A98F(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x63A7F7D75B0E5FA9(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xA450601E968044DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE00F8DEA9778FC87(iParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = unk_0x59FB930CD0E1CDFD(uVar0);
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(uVar0, iParam10);
		if (unk_0xE682D8146CB90267(iVar0))
		{
			if (bParam8)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
			else
			{
				unk_0xE2F4428601519A00(*uParam0, 0);
			}
		}
		unk_0xF239D177F4EB07F9(iVar0, iParam9);
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
	unk_0x32A12757CBF48A33(iParam0);
	return unk_0x33ACB874CECA2D4B(iParam0);
}

void func_8()
{
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
		{
			if (bLocal_750)
			{
				if (!unk_0x236D8AD7EE179F46(Local_561.f_1, 2))
				{
					if (unk_0x236D8AD7EE179F46(Local_733[iVar0 /*5*/].f_3, 2))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_561.f_1), 2);
					}
				}
			}
			else if (!unk_0x236D8AD7EE179F46(Local_561.f_1, 1))
			{
				if (unk_0x236D8AD7EE179F46(Local_733[iVar0 /*5*/].f_3, 1))
				{
					unk_0xF3148AAF69AF9CBC(&(Local_561.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_10(int iParam0)
{
	if (!func_13(unk_0x1329891157A54C63(), 1))
	{
		return;
	}
	if (!func_11(unk_0x1329891157A54C63()) == iParam0)
	{
		return;
	}
}

int func_11(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2414506[iParam0 /*255*/].f_1;
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA89AE5060232966A(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
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
	if (Global_1585045[iParam0 /*400*/] == -1)
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
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= 1000)
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
		if (unk_0x1C7D9BFDF15A02B4())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1C6DF6AD69BE853E() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD74C7D8D2E5E43D2();
			}
			else
			{
				*uParam0 = unk_0xE36DF6414E5CCBBF();
			}
		}
		else
		{
			*uParam0 = unk_0x48E480685981C7D4();
		}
		uParam0->f_1 = 1;
	}
}

void func_20()
{
	switch (func_363(unk_0x519AAFF77CC141DF()))
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
				unk_0xF3148AAF69AF9CBC(&(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3), 2);
				Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_2 = 99;
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
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_28() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_24(func_27(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
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
	uVar0 = Global_2459767[iParam0 /*5*/][func_25(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
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
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

int func_26()
{
	return Global_1312729;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

int func_28()
{
	return Global_24946;
}

void func_29()
{
	int iVar0;
	
	if (func_182())
	{
		if (func_12(unk_0x1329891157A54C63(), 1, 1))
		{
			func_181(0);
		}
	}
	if (!func_180(&uLocal_386))
	{
		func_19(&uLocal_386, 0, 0);
	}
	if (!unk_0x236D8AD7EE179F46(uLocal_744, 21))
	{
		unk_0xF3148AAF69AF9CBC(&uLocal_744, 21);
	}
	if (!unk_0x236D8AD7EE179F46(uLocal_744, 3))
	{
		if (!func_180(&uLocal_384))
		{
			func_19(&uLocal_384, 0, 0);
		}
		else if (unk_0x236D8AD7EE179F46(uLocal_744, 21))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
				{
					if (func_179(&uLocal_384, 3000, 0))
					{
						unk_0xF3148AAF69AF9CBC(&uLocal_744, 3);
					}
				}
			}
		}
		if (func_179(&uLocal_384, 40000, 0))
		{
			unk_0xF3148AAF69AF9CBC(&uLocal_744, 3);
		}
	}
	else if (!unk_0x236D8AD7EE179F46(uLocal_744, 16))
	{
		if (!unk_0xA83A609D74168B30())
		{
			if (!unk_0xDB10DED5ABC4AA20())
			{
				unk_0xF3148AAF69AF9CBC(&uLocal_744, 16);
				func_178(&uLocal_384);
			}
		}
	}
	if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_4, 2))
	{
		if (!func_180(&uLocal_390))
		{
			func_19(&uLocal_390, 0, 0);
		}
		else if (!unk_0x236D8AD7EE179F46(uLocal_745, 1))
		{
			if (func_179(&uLocal_390, 10000, 0))
			{
				unk_0xF3148AAF69AF9CBC(&uLocal_745, 1);
				func_178(&uLocal_390);
			}
		}
		else if (unk_0x236D8AD7EE179F46(uLocal_744, 19))
		{
			if (!unk_0x236D8AD7EE179F46(uLocal_744, 18))
			{
				if (!func_176() || func_179(&uLocal_384, 5000, 0))
				{
					func_175(0);
					unk_0xF3148AAF69AF9CBC(&uLocal_744, 18);
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 244, 0);
						unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 243, 0);
						unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 242, 0);
					}
				}
			}
		}
	}
	if (unk_0x236D8AD7EE179F46(uLocal_744, 18))
	{
		if (!unk_0x236D8AD7EE179F46(uLocal_744, 2))
		{
			if (unk_0xECDEA377354CBDA4())
			{
				iVar0 = 0;
				unk_0xF3148AAF69AF9CBC(&iVar0, 3);
				unk_0xF3148AAF69AF9CBC(&iVar0, 4);
				unk_0xF3148AAF69AF9CBC(&iVar0, 5);
				if (func_86(&uLocal_396, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_85(1);
					unk_0xF3148AAF69AF9CBC(&uLocal_744, 2);
					if (!unk_0x236D8AD7EE179F46(uLocal_744, 20))
					{
						func_76(19, 3, 1);
						unk_0xF3148AAF69AF9CBC(&uLocal_744, 20);
					}
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						unk_0xA0E7F565B88CC79B(unk_0x81873881071CD9FE(), 1, 1);
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
					if (!unk_0x236D8AD7EE179F46(uLocal_744, 12))
					{
						if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							unk_0xA0E7F565B88CC79B(unk_0x81873881071CD9FE(), 0, 1);
							unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 244, 1);
							unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 243, 1);
							unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 242, 1);
						}
						unk_0xF3148AAF69AF9CBC(&uLocal_744, 12);
						func_19(&uLocal_388, 0, 0);
						func_19(&uLocal_392, 0, 0);
					}
				}
			}
		}
		if (unk_0x236D8AD7EE179F46(uLocal_744, 12))
		{
			if (!unk_0x236D8AD7EE179F46(uLocal_744, 17))
			{
				if (!unk_0xDB10DED5ABC4AA20())
				{
					func_68();
					unk_0xF3148AAF69AF9CBC(&uLocal_744, 17);
					func_178(&uLocal_384);
				}
			}
			else if (!func_176())
			{
				if (!unk_0x236D8AD7EE179F46(uLocal_744, 23))
				{
					if (func_179(&uLocal_392, 4500, 0))
					{
						unk_0xF3148AAF69AF9CBC(&uLocal_744, 23);
						unk_0xF3148AAF69AF9CBC(&(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3), 3);
					}
				}
				if (func_179(&uLocal_388, 15000, 0))
				{
					if (!unk_0x236D8AD7EE179F46(uLocal_744, 22))
					{
						unk_0xF3148AAF69AF9CBC(&uLocal_744, 22);
					}
				}
				if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
				{
					if (unk_0x236D8AD7EE179F46(uLocal_744, 14))
					{
						unk_0xC69E84EBBD7166E6(&uLocal_744, 14);
					}
					if (!func_22(iLocal_86))
					{
						if (unk_0x236D8AD7EE179F46(uLocal_744, 13))
						{
							unk_0xC69E84EBBD7166E6(&uLocal_744, 13);
						}
						if (unk_0x236D8AD7EE179F46(uLocal_744, 25) || (!unk_0x236D8AD7EE179F46(uLocal_744, 25) && !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0)))
						{
							if (!unk_0x236D8AD7EE179F46(uLocal_744, 0))
							{
								if (unk_0x236D8AD7EE179F46(uLocal_744, 15))
								{
									unk_0xC69E84EBBD7166E6(&uLocal_744, 15);
								}
								if (unk_0xFBACB273AA628CC5(Global_90861.f_202[iLocal_86]))
								{
									func_62("GET_AMMU", 0);
									unk_0xF3148AAF69AF9CBC(&uLocal_744, 0);
									unk_0xF3148AAF69AF9CBC(&uLocal_744, 25);
									if (unk_0xFBACB273AA628CC5(Global_90861.f_202[iLocal_86]))
									{
										if (!unk_0x236D8AD7EE179F46(Global_2451473.f_734, 2))
										{
											unk_0x116FDB7E27590C7F(Global_90861.f_202[iLocal_86], 1);
										}
										func_355(iLocal_86, 1);
									}
								}
							}
							else if (unk_0x236D8AD7EE179F46(Global_2451473.f_734, 2))
							{
								if (unk_0xFBACB273AA628CC5(Global_90861.f_202[iLocal_86]))
								{
									if (!unk_0x236D8AD7EE179F46(uLocal_744, 15))
									{
										unk_0x116FDB7E27590C7F(Global_90861.f_202[iLocal_86], 0);
										unk_0xF3148AAF69AF9CBC(&uLocal_744, 15);
									}
								}
							}
							else if (unk_0xFBACB273AA628CC5(Global_90861.f_202[iLocal_86]))
							{
								if (unk_0x236D8AD7EE179F46(uLocal_744, 15))
								{
									unk_0x116FDB7E27590C7F(Global_90861.f_202[iLocal_86], 1);
									unk_0xC69E84EBBD7166E6(&uLocal_744, 15);
								}
							}
						}
					}
					else
					{
						if (unk_0x236D8AD7EE179F46(uLocal_744, 0))
						{
							unk_0xC69E84EBBD7166E6(&uLocal_744, 0);
						}
						if (!unk_0x236D8AD7EE179F46(uLocal_744, 13))
						{
							func_62("GET_GUN", 0);
							func_61(1);
							unk_0xF3148AAF69AF9CBC(&uLocal_744, 13);
						}
					}
				}
				else if (!unk_0x236D8AD7EE179F46(uLocal_744, 14))
				{
					unk_0xB8BB626315D394F5(1);
					if (unk_0x236D8AD7EE179F46(uLocal_744, 0))
					{
						unk_0xC69E84EBBD7166E6(&uLocal_744, 0);
					}
					if (unk_0x236D8AD7EE179F46(uLocal_744, 13))
					{
						unk_0xC69E84EBBD7166E6(&uLocal_744, 13);
					}
					if (unk_0xFBACB273AA628CC5(Global_90861.f_202[iLocal_86]))
					{
						unk_0x116FDB7E27590C7F(Global_90861.f_202[iLocal_86], 0);
						unk_0x20F5C387A2DC0C80(Global_90861.f_202[iLocal_86], 0);
						func_355(iLocal_86, 0);
					}
					func_62("LOSE_COP", 0);
					unk_0xF3148AAF69AF9CBC(&uLocal_744, 14);
				}
			}
		}
	}
	else if (func_179(&uLocal_386, 300000, 0))
	{
		unk_0xF3148AAF69AF9CBC(&uLocal_744, 18);
	}
	if (!unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 0))
	{
		if (((unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), joaat("weapon_pistol"), 0) || unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), joaat("weapon_combatpistol"), 0)) || unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), joaat("weapon_appistol"), 0)) || unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), joaat("weapon_microsmg"), 0))
		{
			if (func_59())
			{
				func_54(1);
				unk_0xF3148AAF69AF9CBC(&(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3), 0);
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
	else if (!unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 1))
	{
		if (!func_40())
		{
			unk_0xF3148AAF69AF9CBC(&(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3), 1);
			func_33();
			func_32("FM_IHELP_AMMU", -1);
			if (!unk_0x236D8AD7EE179F46(uLocal_744, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
				unk_0xF3148AAF69AF9CBC(&uLocal_744, 31);
			}
			func_178(&uLocal_384);
			if (bLocal_750)
			{
				if (bLocal_751)
				{
					Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_2 = 3;
				}
				else
				{
					Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_31())
	{
		iVar0 = Global_2478104[iParam0 /*5*/][func_25(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x20026873DF8DB72A(iVar0, iParam1, iParam3);
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
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

void func_33()
{
	if (!func_39())
	{
		return;
	}
	if (!unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == Global_1312577.f_7)
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
	
	bVar0 = unk_0x1C6DF6AD69BE853E();
	Global_1312577 = 12;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0xD74C7D8D2E5E43D2();
		Global_1312577.f_9 = unk_0xD74C7D8D2E5E43D2();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 16);
	Global_1312577.f_34 = 0;
	Global_1312577.f_35 = 0;
	Global_1312577.f_36 = 0;
	Global_1312577.f_37 = -1;
	Global_1312577.f_38 = 0;
	Global_1312577.f_39 = 0;
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
		unk_0x10F61CB44B66BBDE(&(Global_1312577.f_10));
		func_37();
		unk_0x311B25F9901AB37A();
	}
}

void func_37()
{
	switch (Global_1312577)
	{
		case 12:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D55FF05D62B91BC(Global_1312577.f_34);
			return;
		
		case 2:
			unk_0x6D55FF05D62B91BC(Global_1312577.f_34);
			unk_0x6D55FF05D62B91BC(Global_1312577.f_35);
			return;
		
		case 3:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xDB5ED960DFB0E4DF(Global_1312577.f_38);
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xDB5ED960DFB0E4DF(Global_1312577.f_38);
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x92D1853394E2386A(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x92D1853394E2386A(&(Global_1312577.f_14));
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
	unk_0x35C3DC3A3BE08CC1(&(Global_1312577.f_10));
	func_37();
	return unk_0x8BF06EFC37AF94F0();
}

int func_39()
{
	if (Global_1312577 == 12)
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
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		iVar0 = func_51(unk_0x1329891157A54C63());
		if (iVar0 < iParam0)
		{
			if (func_50())
			{
				func_43(1734805203, (iParam0 - iVar0), &uVar1, 0, 0);
			}
			else
			{
				unk_0x8A0F422D707DF530((iParam0 - iVar0));
			}
		}
	}
}

void func_43(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_50())
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
		if (!unk_0x077FF247AF837AEC(func_26()) || unk_0x2FABBA9E4D234344())
		{
			Global_2545975 = 1;
			return 0;
		}
		if (Global_2437720)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2545976 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2545514[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0x08F28BBA457D0639(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xAECF50B5A74D109D(iVar3))
		{
			*uParam0 = func_49(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2545514[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2545972 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2545974 = 1;
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_48(1, iParam4);
			Global_2545974 = 0;
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
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_121.f_71), 0);
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
	struct<69> Var1;
	
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
				unk_0x9FC03E9C1F7C60AB();
			}
		}
		else if (!bVar0)
		{
			unk_0x314D4CB8F27D3283(Global_2545514[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2545514[iParam0 /*69*/] = { Var1 };
	}
}

int func_47(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2545514[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_48(int iParam0, var uParam1)
{
	Global_2438972 = uParam1;
	Global_2438971 = iParam0;
}

int func_49(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2545514[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_50())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2545514[iVar0 /*69*/].f_2 = 1;
			Global_2545514[iVar0 /*69*/].f_1 = uParam5;
			Global_2545514[iVar0 /*69*/].f_3 = uParam1;
			Global_2545514[iVar0 /*69*/].f_4 = uParam2;
			Global_2545514[iVar0 /*69*/].f_7 = uParam3;
			Global_2545514[iVar0 /*69*/].f_5 = 0;
			Global_2545514[iVar0 /*69*/] = iParam0;
			Global_2545514[iVar0 /*69*/].f_6 = iParam4;
			Global_2545514[iVar0 /*69*/].f_65 = uParam8;
			Global_2545514[iVar0 /*69*/].f_64 = uParam7;
			Global_2545514[iVar0 /*69*/].f_68 = 0;
			Global_2545972 = 0;
			if (bParam6)
			{
				Global_2545514[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_50()
{
	if (unk_0x913B1C01C1BA6C6F())
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
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return unk_0x5DE212B0AA7F2897(-1);
		}
		else if (func_53(iParam0))
		{
			return Global_1585045[iParam0 /*400*/].f_192.f_3;
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
		return unk_0x236D8AD7EE179F46(Global_2422670.f_1, iParam0);
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
	var uVar0;
	
	if (bParam2)
	{
		unk_0xC69E84EBBD7166E6(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, iParam1);
			func_57(func_27(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
}

void func_58(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0xF3148AAF69AF9CBC(&uVar0, iParam1);
			func_57(func_27(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_668[iParam0]), iParam1);
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
		if (!unk_0x236D8AD7EE179F46(Global_1690008, 19))
		{
			unk_0xF3148AAF69AF9CBC(&Global_1690008, 19);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1690008, 19))
	{
		unk_0xC69E84EBBD7166E6(&Global_1690008, 19);
	}
}

void func_62(char* sParam0, bool bParam1)
{
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam0) > 23)
	{
		return;
	}
	if (func_66(sParam0))
	{
		return;
	}
	func_34();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x11CA2334E341B424(), 24);
	Global_1312577.f_7 = unk_0x8DAF7A748E41AD46(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_65();
	func_64(bParam1);
	func_63();
}

void func_63()
{
	unk_0xF3148AAF69AF9CBC(&(Global_1312577.f_39), 1);
}

void func_64(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1312577.f_39), 0);
		return;
	}
	unk_0xC69E84EBBD7166E6(&(Global_1312577.f_39), 0);
}

void func_65()
{
	Global_1312577.f_8 = unk_0x372240B0254847DF(unk_0xD74C7D8D2E5E43D2(), 86400000);
	Global_1312577.f_9 = unk_0xD74C7D8D2E5E43D2();
}

bool func_66(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_67(sParam0);
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_10));
}

bool func_67(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_14));
}

void func_68()
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { func_71(unk_0x1329891157A54C63()) };
	bVar13 = unk_0x9F80443939366966();
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
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 0, iParam1);
}

int func_70(var uParam0)
{
	if (unk_0x98465343DD18A1F7())
	{
		if (unk_0x80622F5ED5957337() && unk_0x464883E45616A088(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_71(int iParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

bool func_72()
{
	return func_73();
}

bool func_73()
{
	return Global_1328429.f_40 == 3;
}

int func_74()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_76(int iParam0, int iParam1, bool bParam2)
{
	Global_2950 = iParam0;
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		func_78();
		if (iParam1 == 4)
		{
			Global_98931.f_32499[iParam0 /*29*/].f_12[0] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_12[1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_12[2] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[0] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] == 1 && Global_98931.f_32499[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69020)
			{
				if (iParam1 != 4)
				{
					if (Global_14394 != iParam1)
					{
						Global_2923[iParam1 /*4*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
						Global_2940[iParam1] = 1;
						Global_2945[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14394)
					{
					}
					else
					{
						Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
						Global_2874[1 /*6*/].f_5 = iParam1;
						func_77();
					}
				}
				else
				{
					Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
					Global_2874[1 /*6*/].f_5 = iParam1;
					func_77();
				}
			}
			else
			{
				Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
				Global_2874[1 /*6*/].f_5 = iParam1;
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
	
	StringCopy(&cVar0, unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[Global_2950 /*29*/].f_7)), 64);
	if (Global_2969 == 0)
	{
		unk_0x02A6B267064771B1("");
		StringCopy(&cVar16, unk_0x46E7F5908F815DDC(&(Global_2874[1 /*6*/])), 64);
		sVar32 = unk_0x46E7F5908F815DDC("CELL_253");
		unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x02A6B267064771B1("CELL_255");
		unk_0x072D7B028D6C7A05(&(Global_2874[1 /*6*/]));
		unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xC69E84EBBD7166E6(&Global_2264, 0);
}

void func_78()
{
	if (func_84(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_79();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_79()
{
	func_80();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_80()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_83(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_82(unk_0x81873881071CD9FE());
			if (func_81(iVar0) && (!func_84(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_81(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_81(int iParam0)
{
	return iParam0 < 3;
}

int func_82(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(uParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_84(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_85(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 17);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2265, 17);
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

int func_87(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB318FDA0D1ABDB20(sParam2))
	{
		return 0;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam3))
	{
		return 0;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424());
	iVar1 = func_171(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xB318FDA0D1ABDB20(sParam7))
	{
		iVar2 = unk_0x8DAF7A748E41AD46(sParam7);
	}
	if (func_170(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_166(uParam6))
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
		return func_94(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_93(iParam4))
	{
		return 0;
	}
	func_88(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_88(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1328429.f_40.f_1 = iParam0;
	Global_1328429.f_40.f_2 = iParam1;
	Global_1328429.f_40.f_3 = iParam2;
	StringCopy(&(Global_1328429.f_40.f_4), sParam3, 16);
	Global_1328429.f_40.f_8 = iParam4;
	Global_1328429.f_40.f_9 = iParam5;
	Global_1328429.f_40.f_14 = uParam6;
	func_89(iParam4);
	func_161();
	Global_1328429.f_40.f_13 = unk_0x372240B0254847DF(unk_0xD74C7D8D2E5E43D2(), 7000);
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
	Global_1328429.f_40.f_10 = 0;
}

void func_91()
{
	Global_1328429.f_40.f_10 = 1;
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
	return iParam0 > Global_1328429.f_40.f_8;
}

int func_94(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
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
		return func_137(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_136(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_126(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_125(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_95(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_95(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_124();
	bVar0 = true;
	if (func_97(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_96(120000);
		return 1;
	}
	return 0;
}

void func_96(int iParam0)
{
	Global_1328429.f_40.f_11 = unk_0x372240B0254847DF(unk_0xD74C7D8D2E5E43D2(), iParam0);
	Global_1328429.f_40.f_12 = 1;
}

int func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0xB67DF8F35744CF60(iVar0);
		iVar1 = func_117(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x18E9EAED9F29B72C(unk_0xD74C7D8D2E5E43D2(), Global_1328429.f_40.f_13))
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
	if (!unk_0xB318FDA0D1ABDB20(sParam8))
	{
		iVar6++;
		if (!unk_0xB318FDA0D1ABDB20(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xD994929E13CC1ED5(sVar4, " "))
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
		if (unk_0x236D8AD7EE179F46(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xB318FDA0D1ABDB20(sVar2))
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
	if (unk_0x236D8AD7EE179F46(uParam4, 0))
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
	Global_1328429.f_57 = 0;
	Global_1328429.f_57.f_1 = 0;
}

void func_99()
{
	Global_1328429.f_40 = 3;
}

void func_100()
{
	unk_0xF3148AAF69AF9CBC(&Global_2264, 8);
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
			Global_2971 = iParam6;
			unk_0xF3148AAF69AF9CBC(&Global_2550377, 0);
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
	if (unk_0xD994929E13CC1ED5(sParam14, sParam15))
	{
	}
	func_78();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14394 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14394 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14394 == 1)
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (unk_0x9BF75C3BD2379A6C(unk_0x81873881071CD9FE()))
			{
				return 0;
			}
		}
		if (Global_2550362 == 1)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_112() == 0)
	{
		func_110();
		return 0;
	}
	func_109(Global_2550361);
	StringCopy(&(Global_2549112[Global_2550361 /*104*/]), sParam1, 64);
	Global_2549112[Global_2550361 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2549112[Global_2550361 /*104*/].f_24 = iParam2;
	}
	Global_2549112[Global_2550361 /*104*/].f_25 = iParam7;
	Global_2549112[Global_2550361 /*104*/].f_26 = uParam8;
	Global_2549112[Global_2550361 /*104*/].f_29 = uParam9;
	Global_2549112[Global_2550361 /*104*/].f_30 = uParam12;
	Global_2549112[Global_2550361 /*104*/].f_31 = uParam11;
	Global_2549112[Global_2550361 /*104*/].f_28 = 0;
	Global_2549112[Global_2550361 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2549112[Global_2550361 /*104*/].f_33), sParam4, 64);
	Global_2549112[Global_2550361 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2549112[Global_2550361 /*104*/].f_50), sParam5, 64);
	Global_2549112[Global_2550361 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2549112[Global_2550361 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2549112[Global_2550361 /*104*/].f_83), sParam15, 64);
	func_78();
	switch (iParam16)
	{
		case 3:
			Global_2549112[Global_2550361 /*104*/].f_99[Global_14394] = 1;
			break;
		
		case 0:
			Global_2549112[Global_2550361 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2549112[Global_2550361 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2549112[Global_2550361 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14394)
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
				Global_2550362 = 1;
				break;
			
			case 0:
				Global_2550362 = 1;
				break;
			
			case 2:
				Global_2550362 = 1;
				break;
			
			case 1:
				Global_2550362 = 1;
				break;
			}
	}
	Global_16762[Global_2550361] = 0;
	if (bParam10)
	{
		func_78();
		if (Global_14337)
		{
			StringCopy(&Global_14383, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14394)
			{
				case 0:
					StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_107())
			{
				unk_0x35D7948F61AA3FEC(-1, "Text_Arrive_Tone", &Global_14383, 1);
			}
		}
	}
	if (!Global_14553)
	{
		if (Global_14394.f_1 == 6)
		{
			func_106(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_103(1);
			func_106(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14374), -1082130432, -1082130432, -1082130432);
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
	
	Global_16761 = 0;
	Global_2869 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2833[iVar0] = 0;
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
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 3))
								{
									iVar2 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14556 = 0;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_105(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar2);
								unk_0xBA9BA6181F2B6111();
							}
							if (Global_2436984)
							{
								if (iVar1 == 14)
								{
									func_104(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2833[iVar0] = 1;
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
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_98931.f_12755[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_98931.f_12755[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_98931.f_12755[iVar3 /*104*/].f_99[Global_14394] == 1)
											{
												Global_16761++;
											}
										}
									}
									iVar3++;
								}
								func_104(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16761), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69020)
								{
									iVar4 = 0;
									iVar4 = Global_2549111;
									func_104(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14394)
									{
										case 0:
											iVar5 = Global_36498;
											break;
										
										case 1:
											iVar5 = Global_36499;
											break;
										
										case 2:
											iVar5 = Global_36500;
											break;
										
										default:
											break;
									}
									func_104(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_104(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_105(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(Global_2270);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_105(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar6);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 3))
								{
									iVar7 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14556 = 0;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_105(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar7);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 8)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_105(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
							}
							else if ((iVar1 == 23 && unk_0xD994929E13CC1ED5(&(Global_2271[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x236D8AD7EE179F46(Global_2265, 6))
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_105(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
							}
							else
							{
								func_104(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2833[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_104(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam7))
	{
		func_105(sParam7);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam8))
	{
		func_105(sParam8);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam9))
	{
		func_105(sParam9);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam10))
	{
		func_105(sParam10);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam11))
	{
		func_105(sParam11);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_105(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

void func_106(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBA9BA6181F2B6111();
}

bool func_107()
{
	return Global_1315892;
}

void func_108(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_98931.f_12665[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_109(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xBF0A1447DA6AE4B5();
	uVar1 = unk_0x25B31B877207A3A9();
	uVar2 = unk_0x0C937048CF6952B5();
	uVar3 = unk_0x8B6B3DD84CE74978();
	uVar4 = unk_0x02DC618B9A1DB8D1() + 1;
	uVar5 = unk_0x57E483B654EDD986();
	Global_2549112[iParam0 /*104*/].f_18 = uVar0;
	Global_2549112[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2549112[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2549112[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2549112[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2549112[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2550361 = 11;
	Global_2549112[Global_2550361 /*104*/].f_18 = -1;
	Global_2549112[Global_2550361 /*104*/].f_18.f_1 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_2 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_3 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_111(Global_2549112[iVar2 /*104*/].f_18, Global_2549112[Global_2550361 /*104*/].f_18))
		{
			Global_2550361 = iVar2;
		}
		iVar2++;
	}
	Global_2549112[Global_2550361 /*104*/].f_24 = 1;
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
		if (Global_2549112[iVar2 /*104*/].f_24 == 0)
		{
			Global_2550361 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2550361 = 11;
	Global_2549112[Global_2550361 /*104*/].f_18 = -1;
	Global_2549112[Global_2550361 /*104*/].f_18.f_1 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_2 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_3 = 0;
	Global_2549112[Global_2550361 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2549112[iVar2 /*104*/].f_24 == 0 || Global_2549112[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_111(Global_2549112[iVar2 /*104*/].f_18, Global_2549112[Global_2550361 /*104*/].f_18))
			{
				Global_2550361 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2550361 == 11)
	{
		return 0;
	}
	Global_2549112[Global_2550361 /*104*/].f_99[0] = 0;
	Global_2549112[Global_2550361 /*104*/].f_99[1] = 0;
	Global_2549112[Global_2550361 /*104*/].f_99[2] = 0;
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
			Global_2971 = iParam10;
			unk_0xF3148AAF69AF9CBC(&Global_2550377, 0);
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
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return sLocal_17;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, sLocal_17))
	{
		return sLocal_17;
	}
	func_115(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x46E7F5908F815DDC(sParam0);
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
	Global_1344467[iVar0 /*5*/].f_4 = 1;
	return Global_1344467[iVar0 /*5*/].f_2;
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
	if (Global_1344630)
	{
		if (iParam0 == Global_1344630.f_1)
		{
			return;
		}
	}
	if (func_119(iParam0))
	{
		return;
	}
	if (Global_1344668 >= 32)
	{
		return;
	}
	Global_1344635[Global_1344668] = iParam0;
	Global_1344668++;
	if (bParam1)
	{
	}
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344668)
	{
		if (Global_1344635[iVar0] == iParam0)
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
	if (Global_1344628 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344628)
	{
		if (Global_1344467[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xF873F9422A5D48E5(Global_1344467[iVar0 /*5*/].f_2) && unk_0x79A3388251B8DD5B(Global_1344467[iVar0 /*5*/].f_2))
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
	
	if (iParam0 >= Global_1344628)
	{
		return;
	}
	if (unk_0xF873F9422A5D48E5(Global_1344467[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1344467[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xD23DF626788C30FE(Global_1344467[iParam0 /*5*/].f_2), 64);
			unk_0xDC6F0301DF609264(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2B91F38290118964(Global_1344467[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1344628)
	{
		Global_1344467[iVar32 /*5*/] = { Global_1344467[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_122(&(Global_1344467[iVar32 /*5*/]));
	Global_1344628 = (Global_1344628 - 1);
}

void func_122(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_123();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1C6DF6AD69BE853E())
	{
		uParam0->f_3 = unk_0xD74C7D8D2E5E43D2();
	}
}

int func_123()
{
	return -1;
}

void func_124()
{
	Global_1328429.f_40.f_9 = 4;
}

int func_125(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_124();
	bVar0 = false;
	return func_97(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_126(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_127(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_127(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0xB67DF8F35744CF60(iVar0);
		iVar1 = func_117(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x18E9EAED9F29B72C(unk_0xD74C7D8D2E5E43D2(), Global_1328429.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16754 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_116(sParam5, bParam6, &iVar3);
	uVar5 = func_114(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xB318FDA0D1ABDB20(sParam8))
	{
		iVar6++;
		if (!unk_0xB318FDA0D1ABDB20(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xD994929E13CC1ED5(sVar4, " "))
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
		if (unk_0x236D8AD7EE179F46(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xB318FDA0D1ABDB20(sVar2))
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
	if (unk_0x236D8AD7EE179F46(uParam4, 0))
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
	Global_1328429.f_40.f_9 = 3;
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
	
	unk_0xC69E84EBBD7166E6(&Global_2264, 10);
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
			Global_2971 = iParam6;
			Global_2874[3 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			unk_0xF3148AAF69AF9CBC(&Global_2264, 1);
			unk_0xF3148AAF69AF9CBC(&Global_2264, 7);
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
	if (unk_0xD994929E13CC1ED5(sParam14, sParam15))
	{
	}
	func_78();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14394 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14394 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14394 == 1)
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (unk_0x9BF75C3BD2379A6C(unk_0x81873881071CD9FE()))
			{
				return 0;
			}
		}
		if (Global_98931.f_12665[Global_14394 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x968BF1C2C695B61A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_134() == 0)
	{
		func_132();
		return 0;
	}
	func_131(Global_16760);
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/]), sParam1, 64);
	Global_98931.f_12755[Global_16760 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_98931.f_12755[Global_16760 /*104*/].f_24 = iParam2;
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_25 = iParam7;
	Global_98931.f_12755[Global_16760 /*104*/].f_26 = uParam8;
	Global_98931.f_12755[Global_16760 /*104*/].f_29 = uParam9;
	Global_98931.f_12755[Global_16760 /*104*/].f_30 = uParam12;
	Global_98931.f_12755[Global_16760 /*104*/].f_31 = uParam11;
	Global_98931.f_12755[Global_16760 /*104*/].f_28 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_33), sParam4, 64);
	Global_98931.f_12755[Global_16760 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_50), sParam5, 64);
	Global_98931.f_12755[Global_16760 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_98931.f_12755[Global_16760 /*104*/].f_83), sParam15, 64);
	if (unk_0x236D8AD7EE179F46(Global_2264, 10))
	{
		Global_98931.f_12755[Global_16760 /*104*/].f_99[0] = 1;
		Global_98931.f_12755[Global_16760 /*104*/].f_99[1] = 1;
		Global_98931.f_12755[Global_16760 /*104*/].f_99[2] = 1;
		Global_2970 = 4;
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
				Global_98931.f_12755[Global_16760 /*104*/].f_99[Global_14394] = 1;
				break;
			
			case 0:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_98931.f_12755[Global_16760 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14394)
			{
				case 0:
					func_108(0);
					Global_2970 = 0;
					break;
				
				case 1:
					func_108(1);
					Global_2970 = 1;
					break;
				
				case 2:
					func_108(2);
					Global_2970 = 2;
					break;
				
				case 3:
					func_108(3);
					Global_2970 = 3;
					break;
				
				default:
					Global_2970 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x236D8AD7EE179F46(Global_2264, 10))
		{
			Global_98931.f_12665[0 /*20*/].f_17 = 1;
			Global_98931.f_12665[1 /*20*/].f_17 = 1;
			Global_98931.f_12665[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_98931.f_12665[Global_14394 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_98931.f_12665[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_98931.f_12665[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_98931.f_12665[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16762[Global_16760] = 0;
	if (bParam10)
	{
		func_78();
		if (Global_14337)
		{
			StringCopy(&Global_14383, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14394)
			{
				case 0:
					StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_107())
			{
				unk_0x35D7948F61AA3FEC(-1, "Text_Arrive_Tone", &Global_14383, 1);
			}
		}
	}
	if (!Global_14553)
	{
		if (Global_14394.f_1 == 6)
		{
			func_106(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_103(1);
			func_106(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14374), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_131(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xBF0A1447DA6AE4B5();
	uVar1 = unk_0x25B31B877207A3A9();
	uVar2 = unk_0x0C937048CF6952B5();
	uVar3 = unk_0x8B6B3DD84CE74978();
	uVar4 = unk_0x02DC618B9A1DB8D1() + 1;
	uVar5 = unk_0x57E483B654EDD986();
	Global_98931.f_12755[iParam0 /*104*/].f_18 = uVar0;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_98931.f_12755[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_132()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69020)
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
	Global_16760 = 34;
	Global_98931.f_12755[Global_16760 /*104*/].f_18 = -1;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_133(Global_98931.f_12755[iVar2 /*104*/].f_18, Global_98931.f_12755[Global_16760 /*104*/].f_18))
		{
			Global_16760 = iVar2;
		}
		iVar2++;
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_24 = 1;
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
	
	if (Global_69020)
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
		if (Global_98931.f_12755[iVar2 /*104*/].f_24 == 0)
		{
			Global_16760 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16760 = 34;
	Global_98931.f_12755[Global_16760 /*104*/].f_18 = -1;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_98931.f_12755[iVar2 /*104*/].f_24 == 0 || Global_98931.f_12755[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_133(Global_98931.f_12755[iVar2 /*104*/].f_18, Global_98931.f_12755[Global_16760 /*104*/].f_18))
			{
				Global_16760 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16760 == 34)
	{
		return 0;
	}
	Global_98931.f_12755[Global_16760 /*104*/].f_99[0] = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_99[1] = 0;
	Global_98931.f_12755[Global_16760 /*104*/].f_99[2] = 0;
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
	unk_0xC69E84EBBD7166E6(&Global_2264, 10);
	iVar0 = 3;
	if (func_130(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2971 = iParam10;
			Global_2874[3 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			StringCopy(&Global_2952, sParam5, 64);
			unk_0xF3148AAF69AF9CBC(&Global_2264, 1);
			unk_0xF3148AAF69AF9CBC(&Global_2264, 7);
		}
		return 1;
	}
	return 0;
}

int func_136(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
	}
	if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	func_128();
	bVar0 = true;
	if (func_127(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_96(120000);
		return 1;
	}
	return 0;
}

int func_137(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x236D8AD7EE179F46(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x236D8AD7EE179F46(uParam4, 4))
	{
		bVar0 = func_153(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_143(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x236D8AD7EE179F46(uParam4, 3))
		{
			func_142(1);
		}
		if (unk_0x236D8AD7EE179F46(uParam4, 5))
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
	Global_2457949 = 0;
}

void func_139()
{
	Global_1328429.f_57 = 1;
	Global_1328429.f_57.f_1 = 0;
}

void func_140()
{
	Global_1328429.f_40.f_9 = 1;
}

void func_141(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2266, 0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2266, 0);
	}
}

void func_142(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 20);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 20);
	}
}

int func_143(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_152(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	Global_2621441 = 0;
	return func_144(sParam3, iParam4, bParam7);
}

int func_144(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
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
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_150(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_149();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_78();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_148())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
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
				switch (Global_14394.f_1)
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_146();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_145();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
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
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_146()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_147()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_150(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_151()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_152(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

int func_153(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_152(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15741 = 1;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	Global_2621441 = 0;
	return func_144(sParam3, iParam4, bParam7);
}

int func_154(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
	}
	if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
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
	Global_16711 = 0;
}

bool func_156(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_152(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 1;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 1;
	Global_15747 = 0;
	StringCopy(&Global_15841, sParam5, 24);
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
	Global_1328429.f_40.f_9 = 2;
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
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_144(sParam2, iParam3, 0);
}

void func_160()
{
	Global_1328429.f_55 = Global_1328429.f_40.f_1;
	Global_1328429.f_55.f_1 = Global_1328429.f_40.f_10;
}

void func_161()
{
	Global_1328429.f_40 = 1;
}

bool func_162()
{
	return Global_1328429.f_40 == 1;
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	if (!func_164(iParam0))
	{
		return 0;
	}
	if (Global_1328429.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1328429.f_40.f_3 != iParam2)
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
	if (!Global_1328429.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_165()
{
	if (Global_1328429.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_166(var uParam0)
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
	if (Global_1698742 || func_168())
	{
		return 0;
	}
	if (!unk_0x236D8AD7EE179F46(uParam0, 6))
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
	return unk_0x18E9EAED9F29B72C(unk_0xD74C7D8D2E5E43D2(), Global_1343296);
}

int func_168()
{
	if (Global_2539917.f_796 > -1)
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
	return unk_0x8DAF7A748E41AD46(&cVar0);
}

bool func_172()
{
	return Global_2456109.f_1;
}

int func_173()
{
	if (Global_1328617.f_2)
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
	Global_2458399.f_1067 = iParam0;
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
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
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
	if (unk_0x1C6DF6AD69BE853E() && !bParam2)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0)) >= iParam1)
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
		if (!unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 8))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 8);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 8))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 8);
	}
}

bool func_182()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 8);
}

void func_183()
{
	unk_0xAE2B1C30F8A0B67C(800);
	if (!bLocal_752 || bLocal_753)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
		}
	}
	if (!bLocal_753)
	{
		Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_2 = 0;
	}
	else
	{
		Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_2 = 3;
	}
}

void func_184()
{
	if (func_188(&Local_87, &(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_4)))
	{
		Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_2 = -1;
	}
	func_185(&Local_87);
}

void func_185(var uParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xDB10DED5ABC4AA20();
	switch (iLocal_748)
	{
		case 0:
			if (unk_0x236D8AD7EE179F46(*uParam0, 18))
			{
				if (!func_180(&uLocal_754))
				{
					func_19(&uLocal_754, 0, 0);
				}
				if (!bVar0)
				{
					if (!unk_0xA83A609D74168B30())
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
				if (!unk_0xA83A609D74168B30())
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
				if (!unk_0xA83A609D74168B30())
				{
					func_69("HLP_RNK1", 9000);
					func_187(1);
					Global_2451473.f_1695 = 1;
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
				if (!unk_0xA83A609D74168B30())
				{
					func_175(0);
					if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
					{
						func_69("HLP_CASHXBX", 9000);
					}
					else if (unk_0x211AF631627DE2C5() || unk_0xEC209B562C5EFDB2())
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
			if (!unk_0x236D8AD7EE179F46(uLocal_745, 2))
			{
				unk_0xF3148AAF69AF9CBC(&uLocal_745, 2);
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
				Global_1334766.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_1334766.f_947), iParam0);
			}
			else
			{
				unk_0xC69E84EBBD7166E6(&(Global_1334766.f_947), iParam0);
			}
			break;
	}
}

void func_187(int iParam0)
{
	Global_2451473.f_4373 = iParam0;
}

int func_188(var uParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	bool bVar8;
	
	if (!unk_0x236D8AD7EE179F46(*uParam0, 13))
	{
		if (unk_0x42E36F2D658EB2FF(unk_0x0182E0991149701B()))
		{
			Var5 = { unk_0xFFD5BB58282E438D(unk_0x0182E0991149701B()) };
			if ((Var5.f_0 != 0f || Var5.f_1 != 0f) || Var5.f_2 != 0f)
			{
				unk_0x367C758C1C7849EF(Var5, 0f, 0f, 0f);
				if (!unk_0x236D8AD7EE179F46(*uParam0, 14))
				{
					unk_0xF3148AAF69AF9CBC(uParam0, 14);
				}
			}
		}
	}
	else if (unk_0x236D8AD7EE179F46(*uParam0, 14))
	{
		unk_0x3E52122FBF3FC64C();
		unk_0xC69E84EBBD7166E6(uParam0, 14);
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 337, 1);
	}
	func_337(uParam0);
	unk_0x6C267AA809C7B44C(1f);
	func_331(uParam0);
	func_330(unk_0x1329891157A54C63());
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (unk_0x968BF1C2C695B61A(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (unk_0x968BF1C2C695B61A(joaat("freemode")) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2451473.f_1694)
				{
					Global_2451473.f_1694 = 1;
					unk_0xF8F0D6D97DAA6497(0);
				}
				if (!func_182())
				{
					func_181(1);
				}
				if (!unk_0x29AFA2493D7C23D0() && !unk_0xC584A413BCB2AA39())
				{
					unk_0x3B283FEBA87FFBEB(800);
				}
				if (!func_180(&(uParam0->f_15)))
				{
					func_19(&(uParam0->f_15), 0, 0);
				}
				unk_0x4B6F01DE8CCE643E(&Global_1699193);
				Global_1699194 = 0;
				Global_1699196 = 0;
				Global_1699195 = 0;
				Global_1699197 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0x29AFA2493D7C23D0())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_322(0, 0, 0, 1, 1, 1, 0);
					unk_0x7C2F1EF25026F919(1, 0);
					func_358(1);
					unk_0xB637713097371D78(1);
					unk_0x3EEDB1885742A47A("EXTRASUNNY");
					unk_0x2D8AA12A484054EB(19, 0, 0);
					unk_0xC2E7759493BD12A8(1);
					func_321(0);
					unk_0x8AAC3307B1C23688(0);
					func_315(1, 0);
					func_307(1, 1);
					if (unk_0x968BF1C2C695B61A(joaat("fm_intro")) < 1 || !func_306())
					{
						if (uParam0->f_292)
						{
							if (func_305() == 0)
							{
								unk_0x1F6092386878A56E("GTAO_INTRO_MALE");
								unk_0x198DF62C5BFC6FFE(1);
							}
						}
					}
					func_298(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					unk_0xC69E84EBBD7166E6(uParam0, 0);
					unk_0xC69E84EBBD7166E6(uParam0, 1);
					unk_0xC69E84EBBD7166E6(uParam0, 2);
					unk_0xC69E84EBBD7166E6(uParam0, 9);
					unk_0xF3148AAF69AF9CBC(uParam0, 7);
					uParam0->f_122 = unk_0x13705C66F125D98D(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				unk_0x32A12757CBF48A33(joaat("frogger"));
				if (unk_0x33ACB874CECA2D4B(joaat("frogger")))
				{
					if (!uParam0->f_292 || unk_0x03E81819B8204724())
					{
						if (func_295())
						{
							unk_0xCDE383CAE5E4AB85(0);
							func_290(1, 1);
							unk_0x931FEA45DD0271A5(0);
							unk_0xB8BB626315D394F5(1);
							if (!func_174())
							{
								func_289();
							}
							func_187(0);
							func_288();
							unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Global_1312552, 1, 0, 0, 1);
							unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 1);
							unk_0x5CEA5F12775261F2(unk_0x81873881071CD9FE(), false, 0);
							unk_0x9BAE0FF806E5C2E5(0);
							if (unk_0xFBACB273AA628CC5(unk_0xB912F354EBC95ECF()))
							{
								unk_0xD6DF56BB9537BCC5(unk_0xB912F354EBC95ECF(), 0f);
							}
							unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), true);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0xF33755A765033580())
				{
					if (!unk_0x236D8AD7EE179F46(*uParam0, 4))
					{
						if (func_287() == 64 || func_287() == 65)
						{
							unk_0x3E52122FBF3FC64C();
							unk_0x7E2FE21B0F846986(754.2219f, 1226.831f, 356.5081f, func_286(-14.367f, 0f, 157.3524f), 100f, 0);
							func_178(&(uParam0->f_17));
							func_19(&(uParam0->f_17), 0, 0);
							unk_0xF3148AAF69AF9CBC(uParam0, 4);
						}
					}
					else if (unk_0xA3BC6AA446F03669("FM_INTRO_START") && (unk_0xA5C3CFD413D647EA() || func_179(&(uParam0->f_17), 5000, 0)))
					{
						if (!unk_0x236D8AD7EE179F46(*uParam0, 24))
						{
							if (unk_0x236D8AD7EE179F46(*uParam0, 7))
							{
								unk_0x80650551CC58C784("FM_INTRO_START");
								unk_0xF3148AAF69AF9CBC(uParam0, 24);
								unk_0xF3148AAF69AF9CBC(uParam0, 21);
							}
						}
						else if (unk_0x1888D9411BE75F8D() > 0)
						{
							unk_0x5AD73EF670D05F7D();
							unk_0xFF37998A011E1E8E(6);
							if (!unk_0x42E36F2D658EB2FF(uParam0->f_7))
							{
								uParam0->f_7 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 0);
								unk_0xDD0B0D77CB8995B1(uParam0->f_7, 1);
							}
							unk_0xD269CB43D12C6BF5(uParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							unk_0xD269CB43D12C6BF5(uParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							unk_0x4BC806FF702341FC(uParam0->f_7, "HAND_SHAKE", 0.15f);
							unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 1, 0);
							func_285(uParam0);
							unk_0xF3148AAF69AF9CBC(uParam0, 11);
							if (uParam0->f_292)
							{
								unk_0x8562B9D72AC75620(9, 9, 9, 9);
								unk_0xB69F60D4F553A15A();
							}
							unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), true);
							if (unk_0x29AFA2493D7C23D0())
							{
								unk_0xAE2B1C30F8A0B67C(800);
							}
							uParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_284(uParam0, 6);
				func_283(uParam0);
				if (func_282(uParam0, 6, 0))
				{
					unk_0xB8BB626315D394F5(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!unk_0x236D8AD7EE179F46(*uParam0, 2))
				{
					unk_0xB8BB626315D394F5(1);
					func_69("FMIC_INTRO2", -1);
					unk_0xF3148AAF69AF9CBC(uParam0, 2);
				}
				unk_0xD269CB43D12C6BF5(uParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				unk_0xD269CB43D12C6BF5(uParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				unk_0x8562B9D72AC75620(9, 13, 9, 13);
				uParam0->f_6 = 8;
				break;
			
			case 8:
				func_284(uParam0, 8);
				if (func_283(uParam0))
				{
					func_281(uParam0);
					if (func_282(uParam0, 8, 0))
					{
						uParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!unk_0x236D8AD7EE179F46(*uParam0, 10))
				{
					func_280();
					unk_0xF3148AAF69AF9CBC(uParam0, 10);
				}
				unk_0xD269CB43D12C6BF5(uParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				unk_0xD269CB43D12C6BF5(uParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (unk_0x7404950238A154C2(uParam0->f_48, 0))
				{
					unk_0x14EA7B0562BF5E0C(uParam0->f_48);
					unk_0xABA9860C0161F3CD(uParam0->f_48, true);
					unk_0x50638C188ABB218B(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0x7404950238A154C2(uParam0->f_48, 0))
				{
					unk_0x50638C188ABB218B(uParam0->f_48);
				}
				func_284(uParam0, 10);
				if (func_279())
				{
					if (func_278(uParam0))
					{
						if (func_281(uParam0))
						{
							if (func_282(uParam0, 10, 0))
							{
								if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
								{
									unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), true);
								}
								fVar0 = 5000f;
								if (unk_0x7404950238A154C2(uParam0->f_92[0], 0))
								{
									unk_0xC8F62804B10A6701(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									unk_0x0039C5B0E3E4993E(uParam0->f_92[0], fVar0);
								}
								if (unk_0x7404950238A154C2(uParam0->f_92[1], 0))
								{
									unk_0xC8F62804B10A6701(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									unk_0x0039C5B0E3E4993E(uParam0->f_92[1], fVar0);
								}
								if (unk_0x7404950238A154C2(uParam0->f_92[2], 0))
								{
									unk_0xC8F62804B10A6701(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									unk_0x0039C5B0E3E4993E(uParam0->f_92[2], fVar0);
								}
								if (unk_0x7404950238A154C2(uParam0->f_92[3], 0))
								{
									unk_0xC8F62804B10A6701(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									unk_0x0039C5B0E3E4993E(uParam0->f_92[3], fVar0);
								}
								if (unk_0x7404950238A154C2(uParam0->f_92[4], 0))
								{
									unk_0xC8F62804B10A6701(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									unk_0x0039C5B0E3E4993E(uParam0->f_92[4], fVar0);
								}
								unk_0xF3148AAF69AF9CBC(uParam0, 15);
								unk_0xAE2B1C30F8A0B67C(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					unk_0x2D8AA12A484054EB(16, 0, 0);
					func_277(uParam0);
					func_276(uParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					unk_0x19E32192B402B7F9(uParam0->f_7, 1);
					unk_0x862718CE0FD5611D(uParam0->f_7);
					unk_0x35B958B469415A23(uParam0->f_7, 0);
					unk_0xF2A6D4C99549CA85("MP_INTRO_RACE_SCENE");
					unk_0x8562B9D72AC75620(9, 12, 9, 12);
					func_274(uParam0, 14);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				if (!unk_0x236D8AD7EE179F46(*uParam0, 5))
				{
					func_69("FMIC_RACE1", -1);
					unk_0xF3148AAF69AF9CBC(uParam0, 5);
				}
				func_284(uParam0, 14);
				if (func_282(uParam0, 14, 0))
				{
					uParam0->f_32 = unk_0xA17AB437A96481B6(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
					if (uParam0->f_32 != 0)
					{
						unk_0xC9C56731782E64CD(uParam0->f_32);
					}
					func_273(uParam0, 23539f, 0);
					unk_0x2D8AA12A484054EB(16, 0, 0);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_274(uParam0, 15);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				if (!unk_0x236D8AD7EE179F46(uParam0->f_3, 0))
				{
					func_262(uParam0);
				}
				else if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				func_284(uParam0, 15);
				if (func_282(uParam0, 15, 0))
				{
					func_273(uParam0, 28833.33f, 75f);
					unk_0x2D8AA12A484054EB(16, 0, 0);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_252(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_274(uParam0, 16);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				if (!unk_0x236D8AD7EE179F46(uParam0->f_3, 0))
				{
					func_262(uParam0);
				}
				else if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				func_284(uParam0, 16);
				if (func_282(uParam0, 16, 0))
				{
					func_273(uParam0, 29700f, 0);
					unk_0x2D8AA12A484054EB(16, 0, 0);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0xFADF60D9F697DB9C(uParam0->f_9, 0.7f);
					func_274(uParam0, 17);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				if (!unk_0x236D8AD7EE179F46(*uParam0, 6))
				{
					unk_0xF3148AAF69AF9CBC(uParam0, 6);
					func_69("FMIC_RACE2", -1);
				}
				if (!unk_0x236D8AD7EE179F46(uParam0->f_3, 0))
				{
					func_262(uParam0);
				}
				else if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				func_284(uParam0, 17);
				if (func_282(uParam0, 17, 0))
				{
					func_273(uParam0, 36450f, 0);
					unk_0x2D8AA12A484054EB(16, 0, 0);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 18);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				if (!unk_0x236D8AD7EE179F46(uParam0->f_3, 0))
				{
					func_262(uParam0);
				}
				else if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				func_284(uParam0, 18);
				if (func_251() && func_282(uParam0, 18, 0))
				{
					func_273(uParam0, 43650f, 0);
					unk_0x2D8AA12A484054EB(16, 0, 0);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					if (unk_0x86CCCD2FAE9D5E65(uParam0->f_92[2]))
					{
						unk_0x5D00E836B6BE8693(&(uParam0->f_92[2]));
					}
					if (unk_0x86CCCD2FAE9D5E65(uParam0->f_92[3]))
					{
						unk_0x5D00E836B6BE8693(&(uParam0->f_92[3]));
					}
					if (unk_0x86CCCD2FAE9D5E65(uParam0->f_92[4]))
					{
						unk_0x5D00E836B6BE8693(&(uParam0->f_92[4]));
					}
					func_276(uParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 19);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				if (!unk_0x236D8AD7EE179F46(uParam0->f_3, 0))
				{
					func_262(uParam0);
				}
				else
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (unk_0x9B710BA2688DD221(uParam0->f_32))
							{
								if (!unk_0x930F8FBB8E9537CC(uParam0->f_91))
								{
									unk_0x173A01F6325D60AF(uParam0->f_91, uParam0->f_32, unk_0x8DAF7A748E41AD46("GtaMloRoom001"));
								}
								unk_0x2AC63060DD745CF5("SE_MP_GARAGE_L_RADIO", 0);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!unk_0x930F8FBB8E9537CC(uParam0->f_49[iVar4]))
									{
										unk_0x173A01F6325D60AF(uParam0->f_49[iVar4], uParam0->f_32, unk_0x8DAF7A748E41AD46("GtaMloRoom001"));
									}
									iVar4++;
								}
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 6);
							}
						}
					}
					if (func_261(uParam0) && func_255(uParam0))
					{
						func_253(uParam0);
					}
				}
				func_250(uParam0);
				func_249(uParam0);
				func_284(uParam0, 19);
				if (func_282(uParam0, 19, 0) && unk_0x236D8AD7EE179F46(uParam0->f_3, 0))
				{
					if (unk_0x236D8AD7EE179F46(*uParam0, 12))
					{
						unk_0xC69E84EBBD7166E6(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_282(uParam0, 19, -4968))
				{
					if (!unk_0x236D8AD7EE179F46(*uParam0, 12))
					{
						unk_0xB8BB626315D394F5(1);
						unk_0xF3148AAF69AF9CBC(uParam0, 12);
					}
				}
				else if (func_282(uParam0, 19, -5618))
				{
					if (!unk_0x236D8AD7EE179F46(*uParam0, 30))
					{
						unk_0x45D2AAD93E9AC4B3("MP_intro_logo", 0, 0);
						unk_0xF3148AAF69AF9CBC(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_250(uParam0);
				func_249(uParam0);
				if (unk_0x236D8AD7EE179F46(uParam0->f_3, 0))
				{
					if (!unk_0x42E36F2D658EB2FF(uParam0->f_7))
					{
						uParam0->f_7 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					unk_0xDD0B0D77CB8995B1(uParam0->f_7, 1);
					unk_0xD269CB43D12C6BF5(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					unk_0xD269CB43D12C6BF5(uParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					unk_0x4BC806FF702341FC(uParam0->f_7, "HAND_SHAKE", 0.1f);
					unk_0x159689B83993A062(uParam0->f_32, unk_0x8DAF7A748E41AD46("GtaMloRoom001"));
					unk_0x2AC63060DD745CF5("SE_MP_GARAGE_L_RADIO", 0);
					unk_0xFF37998A011E1E8E(0);
					unk_0x176AAFA85E979842(uParam0->f_10, 0f);
					if (!unk_0x5FEB513A4402FD59(uParam0->f_91))
					{
						unk_0x95BE9BA77CA91710(uParam0->f_91, 0, 0);
					}
					if (unk_0x12F24A1A22BF90A7("MP_INTRO_RACE_SCENE"))
					{
						unk_0x0C22E352114F699C("MP_INTRO_RACE_SCENE");
					}
					unk_0x8562B9D72AC75620(9, 13, 9, 13);
					func_248(uParam0);
					func_247();
					func_69("FMIC_GAR", -1);
					uParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_250(uParam0);
				func_249(uParam0);
				func_284(uParam0, 23);
				if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				if (func_282(uParam0, 23, 0))
				{
					unk_0xD269CB43D12C6BF5(uParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					unk_0xD269CB43D12C6BF5(uParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					unk_0x176AAFA85E979842(uParam0->f_10, 0f);
					if (!unk_0x5FEB513A4402FD59(uParam0->f_91))
					{
						unk_0x95BE9BA77CA91710(uParam0->f_91, 0, 0);
					}
					func_245(uParam0, 0);
					func_245(uParam0, 1);
					func_245(uParam0, 5);
					func_245(uParam0, 6);
					uParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_250(uParam0);
				func_249(uParam0);
				func_284(uParam0, 24);
				if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				if (func_282(uParam0, 24, 0))
				{
					uParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_250(uParam0);
				func_249(uParam0);
				unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				unk_0xF3148AAF69AF9CBC(uParam0, 13);
				unk_0xD269CB43D12C6BF5(uParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				unk_0xD269CB43D12C6BF5(uParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				unk_0x2D8AA12A484054EB(18, 0, 0);
				func_245(uParam0, 2);
				func_245(uParam0, 7);
				unk_0x887F4488DA99FD21(func_244());
				if (unk_0x86CCCD2FAE9D5E65(uParam0->f_91))
				{
					unk_0xF210D34D7F7152ED(&(uParam0->f_91));
				}
				unk_0xF3148AAF69AF9CBC(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_250(uParam0);
				func_249(uParam0);
				if (!unk_0x236D8AD7EE179F46(*uParam0, 8))
				{
					unk_0xF3148AAF69AF9CBC(uParam0, 8);
				}
				if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				func_284(uParam0, 28);
				if ((unk_0xA3BC6AA446F03669("FM_INTRO_DRIVE_START") && unk_0x236D8AD7EE179F46(uParam0->f_3, 3)) && func_282(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
					{
						if (func_241(uParam0))
						{
							unk_0x991ABCA492D8C897(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							unk_0x991ABCA492D8C897(unk_0x81873881071CD9FE(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x991ABCA492D8C897(unk_0x81873881071CD9FE(), "MP_Male_Character", 0, 0, 0);
							unk_0x991ABCA492D8C897(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_241(uParam0))
				{
					unk_0x991ABCA492D8C897(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					unk_0x991ABCA492D8C897(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!unk_0x930F8FBB8E9537CC(uParam0->f_35))
				{
					unk_0x991ABCA492D8C897(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x930F8FBB8E9537CC(uParam0->f_34))
				{
					unk_0x991ABCA492D8C897(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0x930F8FBB8E9537CC(uParam0->f_33))
				{
					unk_0xABA9860C0161F3CD(uParam0->f_33, true);
					unk_0x991ABCA492D8C897(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_239(uParam0);
				unk_0xD6C6A4CDACA04556("CONTRAILS", 0);
				unk_0x8562B9D72AC75620(9, 9, 9, 9);
				func_69("FMIC_TENN", -1);
				unk_0x5632EA201EAF956B(4);
				func_232(1, 1, 1, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0x521385D8214D27C4())
				{
					if (uParam0->f_32 != 0)
					{
						unk_0x2912C2F5F69CF538(uParam0->f_32);
					}
					func_231(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (unk_0x48E480685981C7D4() - uParam0->f_13);
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
					if (func_241(uParam0))
					{
						if (unk_0x673E6879232705DA("MP_Female_Character", 0))
						{
							if (unk_0x7404950238A154C2(uParam0->f_34, 0))
							{
								if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
								{
									if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
									{
										unk_0x3C3A95141D01773E(unk_0x81873881071CD9FE(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (unk_0x673E6879232705DA("MP_Male_Character", 0))
					{
						if (unk_0x7404950238A154C2(uParam0->f_34, 0))
						{
							if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
							{
								if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
								{
									unk_0x3C3A95141D01773E(unk_0x81873881071CD9FE(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (unk_0x673E6879232705DA("LAMAR", 0))
				{
					if (unk_0x7404950238A154C2(uParam0->f_34, 0))
					{
						if (!unk_0x5FEB513A4402FD59(uParam0->f_35))
						{
							if (!unk_0xE5AB05962FA1FF3F(uParam0->f_35, 0))
							{
								unk_0x3C3A95141D01773E(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								unk_0x95BE9BA77CA91710(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (unk_0x673E6879232705DA("MP_Lamar_Car", 0))
				{
					if (unk_0x7404950238A154C2(uParam0->f_34, 0))
					{
						unk_0x686D6CDC14C4BA6C(uParam0->f_34, 1, 1);
						unk_0xB067093BBAF0A747(uParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						unk_0xC24172029826A66F(uParam0->f_34, -106.11f);
						func_230(uParam0, 3099.997f);
						unk_0xE6116B2B5D358CE9(uParam0->f_34, 1);
					}
				}
				if (unk_0x1787C7476F17BD5C(0))
				{
					unk_0x2D8AA12A484054EB(21, 0, 0);
					func_274(uParam0, 33);
					func_276(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (unk_0x236D8AD7EE179F46(*uParam0, 29))
				{
					if (unk_0x1F060840C0363DAC() || unk_0x9317F2B481D935D4() > 3254)
					{
						unk_0xC69E84EBBD7166E6(uParam0, 29);
					}
				}
				if ((func_229(uParam0) && func_228(uParam0)) && !unk_0x521385D8214D27C4())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (unk_0x48E480685981C7D4() - uParam0->f_13);
					}
					else
					{
						uParam0->f_29 = 134784;
						if (func_241(uParam0))
						{
							uParam0->f_28 = 134784;
						}
						else
						{
							uParam0->f_28 = 134784;
						}
					}
					unk_0xDE7CED04760CFED9();
					unk_0x72280C402F1D5F9D();
					if (unk_0x236D8AD7EE179F46(*uParam0, 7))
					{
						unk_0x80650551CC58C784("FM_INTRO_DRIVE_START");
						unk_0xF3148AAF69AF9CBC(uParam0, 21);
					}
					if (!unk_0x0CD223E4B2B9708A())
					{
						unk_0x30E4A4CF320834D9(0);
					}
					if (!unk_0x236D8AD7EE179F46(*uParam1, 1))
					{
						unk_0xF3148AAF69AF9CBC(uParam1, 1);
					}
					func_227(uParam0);
					func_226(uParam0);
					func_232(0, 1, 1, 0);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					unk_0xC69E84EBBD7166E6(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x48E480685981C7D4() - (uParam0->f_26 + unk_0x9317F2B481D935D4()));
					}
					if (!unk_0x236D8AD7EE179F46(*uParam0, 22))
					{
						if (unk_0x12E412BB427DC29B() == 1)
						{
							unk_0x2D8AA12A484054EB(19, 59, 0);
							unk_0xF3148AAF69AF9CBC(uParam0, 22);
						}
					}
					if (func_224(uParam0))
					{
						if (unk_0x12E412BB427DC29B() == 2)
						{
							if (!unk_0x236D8AD7EE179F46(*uParam0, 18))
							{
								unk_0xF3148AAF69AF9CBC(uParam0, 18);
							}
							if (unk_0x9317F2B481D935D4() > 23146)
							{
								if (!unk_0x236D8AD7EE179F46(*uParam0, 27))
								{
									unk_0x5CBC8B584F025FB4("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xF3148AAF69AF9CBC(uParam0, 27);
								}
								if (!unk_0x236D8AD7EE179F46(*uParam0, 28))
								{
									unk_0x5CBC8B584F025FB4("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xF3148AAF69AF9CBC(uParam0, 28);
								}
							}
							unk_0x31BF6BB6AE72A4F8(4950f);
							if (unk_0x236D8AD7EE179F46(*uParam0, 22))
							{
								unk_0x2D8AA12A484054EB(21, 0, 0);
								unk_0xC69E84EBBD7166E6(uParam0, 22);
							}
							if (unk_0x9317F2B481D935D4() > 23254)
							{
								func_223(uParam0);
							}
						}
					}
					if (unk_0x12E412BB427DC29B() > 2)
					{
						func_226(uParam0);
						if (!unk_0x236D8AD7EE179F46(*uParam0, 22))
						{
							unk_0x2D8AA12A484054EB(21, 0, 0);
							unk_0xF3148AAF69AF9CBC(uParam0, 22);
						}
						if (unk_0x7404950238A154C2(uParam0->f_34, 0))
						{
							unk_0x2EDBED0C31D95957(uParam0->f_34);
							unk_0x69AA788B6BA4CB68(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = unk_0x9317F2B481D935D4();
				}
				break;
			
			case 33:
				if (func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 1))
					{
						if (func_282(uParam0, 33, -5450))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 1);
							}
						}
					}
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 2))
					{
						if (func_282(uParam0, 33, -5450))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 1))
					{
						if (func_282(uParam0, 33, -5450))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					unk_0xF2A6D4C99549CA85("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 33);
				func_221(uParam0);
				if (func_282(uParam0, 33, 0))
				{
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 2))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 2);
						}
					}
				}
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_34))
					{
						unk_0xCE9B10B35E094A1B(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xB9B28C6B0F141577(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0xBF1C17EB7F681E53(uParam0->f_7, 33.3479f);
						unk_0x4BC806FF702341FC(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xDD0B0D77CB8995B1(uParam0->f_7, 1);
						if (!unk_0x930F8FBB8E9537CC(uParam0->f_35))
						{
							unk_0xABA9860C0161F3CD(uParam0->f_35, false);
						}
						if (!unk_0x930F8FBB8E9537CC(uParam0->f_36))
						{
							unk_0xABA9860C0161F3CD(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xBCD946677FB3F5D5(uParam0->f_11, uParam0->f_34, unk_0x2430739394FC68FC(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xBCD946677FB3F5D5(uParam0->f_12, uParam0->f_34, unk_0x2430739394FC68FC(uParam0->f_34, "seat_pside_f"));
							unk_0x58BEA8B2364F8C48(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x176AAFA85E979842(uParam0->f_11, 0.129f);
							unk_0x176AAFA85E979842(uParam0->f_12, 0.129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xBCD946677FB3F5D5(uParam0->f_12, uParam0->f_34, 0);
							unk_0x58BEA8B2364F8C48(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x176AAFA85E979842(uParam0->f_11, 0.145f);
							unk_0x176AAFA85E979842(uParam0->f_12, 0.145f);
						}
						unk_0x95BE9BA77CA91710(uParam0->f_36, 0, 0);
						unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
					}
					func_274(uParam0, 34);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 34);
				func_221(uParam0);
				if (func_282(uParam0, 34, 0))
				{
					func_230(uParam0, 18966.65f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 3))
					{
						if (func_282(uParam0, 34, 1100))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 3);
							}
						}
					}
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 4))
					{
						if (func_282(uParam0, 34, 1100))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 3))
					{
						if (func_282(uParam0, 34, 1000))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_35))
					{
						unk_0xABA9860C0161F3CD(uParam0->f_35, true);
					}
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_36))
					{
						unk_0xABA9860C0161F3CD(uParam0->f_36, false);
					}
					if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && !unk_0x930F8FBB8E9537CC(uParam0->f_34))
					{
						unk_0x3C3A95141D01773E(unk_0x81873881071CD9FE(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
					}
					func_274(uParam0, 35);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 35);
				func_221(uParam0);
				if (func_282(uParam0, 35, 0))
				{
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 5))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 4))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 4);
						}
					}
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 5))
					{
						if (func_282(uParam0, 36, -3750))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_34))
					{
						unk_0xCE9B10B35E094A1B(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xB9B28C6B0F141577(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0xBF1C17EB7F681E53(uParam0->f_7, 33.3479f);
						unk_0x4BC806FF702341FC(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xDD0B0D77CB8995B1(uParam0->f_7, 1);
						if (!unk_0x930F8FBB8E9537CC(uParam0->f_35))
						{
							unk_0xABA9860C0161F3CD(uParam0->f_35, false);
						}
						if (!unk_0x930F8FBB8E9537CC(uParam0->f_36))
						{
							unk_0xABA9860C0161F3CD(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xBCD946677FB3F5D5(uParam0->f_11, uParam0->f_34, unk_0x2430739394FC68FC(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xBCD946677FB3F5D5(uParam0->f_12, uParam0->f_34, unk_0x2430739394FC68FC(uParam0->f_34, "seat_pside_f"));
							unk_0x58BEA8B2364F8C48(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x176AAFA85E979842(uParam0->f_11, 0.363f);
							unk_0x176AAFA85E979842(uParam0->f_12, 0.363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xBCD946677FB3F5D5(uParam0->f_12, uParam0->f_34, 0);
							unk_0x58BEA8B2364F8C48(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x176AAFA85E979842(uParam0->f_11, 0.298f);
							unk_0x176AAFA85E979842(uParam0->f_12, 0.298f);
						}
						unk_0x95BE9BA77CA91710(uParam0->f_36, 0, 0);
						unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
					}
					func_274(uParam0, 36);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 36);
				func_221(uParam0);
				if (func_282(uParam0, 36, 0))
				{
					func_230(uParam0, 42700.96f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 6))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 6))
					{
						if (func_282(uParam0, 36, 1000))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_35))
					{
						unk_0xABA9860C0161F3CD(uParam0->f_35, true);
					}
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_36))
					{
						unk_0xABA9860C0161F3CD(uParam0->f_36, false);
					}
					if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && !unk_0x930F8FBB8E9537CC(uParam0->f_34))
					{
						unk_0x3C3A95141D01773E(unk_0x81873881071CD9FE(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
					}
					func_274(uParam0, 37);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 37);
				func_221(uParam0);
				if (func_282(uParam0, 37, 0))
				{
					func_230(uParam0, 51033.28f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 7))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 7);
						}
					}
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 8))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 9))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 7))
					{
						if (func_282(uParam0, 37, 2500))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 38);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 38);
				func_221(uParam0);
				if (func_282(uParam0, 38, 0))
				{
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 8))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 9))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 9);
						}
					}
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 31))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_241(uParam0))
				{
					if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 31))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 31);
						}
					}
				}
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_34))
					{
						unk_0xCE9B10B35E094A1B(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xB9B28C6B0F141577(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0xBF1C17EB7F681E53(uParam0->f_7, 33.3479f);
						unk_0x4BC806FF702341FC(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xDD0B0D77CB8995B1(uParam0->f_7, 1);
						if (!unk_0x930F8FBB8E9537CC(uParam0->f_35))
						{
							unk_0xABA9860C0161F3CD(uParam0->f_35, false);
						}
						if (!unk_0x930F8FBB8E9537CC(uParam0->f_36))
						{
							unk_0xABA9860C0161F3CD(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xBCD946677FB3F5D5(uParam0->f_11, uParam0->f_34, unk_0x2430739394FC68FC(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xBCD946677FB3F5D5(uParam0->f_12, uParam0->f_34, unk_0x2430739394FC68FC(uParam0->f_34, "seat_pside_f"));
							unk_0x58BEA8B2364F8C48(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x176AAFA85E979842(uParam0->f_11, 0.811f);
							unk_0x176AAFA85E979842(uParam0->f_12, 0.811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xBCD946677FB3F5D5(uParam0->f_12, uParam0->f_34, 0);
							unk_0x58BEA8B2364F8C48(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x176AAFA85E979842(uParam0->f_11, 0.791f);
							unk_0x176AAFA85E979842(uParam0->f_12, 0.791f);
						}
						unk_0x95BE9BA77CA91710(uParam0->f_36, 0, 0);
						unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
					}
					func_274(uParam0, 39);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 39);
				func_221(uParam0);
				if (func_282(uParam0, 39, 0))
				{
					func_230(uParam0, 85050f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!unk_0x236D8AD7EE179F46(uParam0->f_1, 31))
				{
					if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0xF3148AAF69AF9CBC(&(uParam0->f_1), 31);
					}
				}
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x8562B9D72AC75620(9, 12, 9, 12);
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_35))
					{
						unk_0xABA9860C0161F3CD(uParam0->f_35, true);
					}
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_36))
					{
						unk_0xABA9860C0161F3CD(uParam0->f_36, false);
					}
					if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && !unk_0x930F8FBB8E9537CC(uParam0->f_34))
					{
						unk_0x3C3A95141D01773E(unk_0x81873881071CD9FE(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
					}
					func_274(uParam0, 40);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 40);
				if (func_221(uParam0) && func_282(uParam0, 40, 0))
				{
					func_230(uParam0, 116366.5f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					unk_0x2D8AA12A484054EB(0, 0, 0);
					func_276(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_274(uParam0, 41);
					unk_0x54897F64BBD39D9B("CONTRAILS", 0);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 41);
				if (func_282(uParam0, 41, 0))
				{
					unk_0x9783A8936D79AE1B(1);
					func_230(uParam0, 127166.5f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_220(uParam0);
					func_276(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 42);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 42);
				if (func_282(uParam0, 42, 0))
				{
					unk_0x9783A8936D79AE1B(0);
					func_230(uParam0, 170800f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 43);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 43);
				if (func_282(uParam0, 43, 0))
				{
					unk_0x8562B9D72AC75620(9, 12, 9, 12);
					func_230(uParam0, 191799.8f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 44);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 44);
				if (func_282(uParam0, 44, 0))
				{
					func_230(uParam0, 196633.1f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 45);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 45);
				if (func_282(uParam0, 45, 0))
				{
					func_230(uParam0, 201466.5f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 46);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 46);
				if (func_282(uParam0, 46, 0))
				{
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_219(uParam0);
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_34))
					{
						unk_0xCE9B10B35E094A1B(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xB9B28C6B0F141577(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0xBF1C17EB7F681E53(uParam0->f_7, 33.3479f);
						unk_0x4BC806FF702341FC(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xDD0B0D77CB8995B1(uParam0->f_7, 1);
						if (!unk_0x930F8FBB8E9537CC(uParam0->f_35))
						{
							unk_0xABA9860C0161F3CD(uParam0->f_35, false);
						}
						if (!unk_0x930F8FBB8E9537CC(uParam0->f_36))
						{
							unk_0xABA9860C0161F3CD(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xBCD946677FB3F5D5(uParam0->f_11, uParam0->f_34, unk_0x2430739394FC68FC(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xBCD946677FB3F5D5(uParam0->f_12, uParam0->f_34, unk_0x2430739394FC68FC(uParam0->f_34, "seat_pside_f"));
							unk_0x58BEA8B2364F8C48(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x176AAFA85E979842(uParam0->f_11, 0.726f);
							unk_0x176AAFA85E979842(uParam0->f_12, 0.74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xBCD946677FB3F5D5(uParam0->f_12, uParam0->f_34, 0);
							unk_0x58BEA8B2364F8C48(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x176AAFA85E979842(uParam0->f_11, 0.726f);
							unk_0x176AAFA85E979842(uParam0->f_12, 0.815f);
						}
						unk_0x95BE9BA77CA91710(uParam0->f_36, 0, 0);
						unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
					}
					func_274(uParam0, 47);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 47);
				if (func_282(uParam0, 47, 0))
				{
					func_230(uParam0, 213066.4f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_219(uParam0);
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_35))
					{
						unk_0xABA9860C0161F3CD(uParam0->f_35, true);
					}
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_36))
					{
						unk_0xABA9860C0161F3CD(uParam0->f_36, false);
					}
					if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && !unk_0x930F8FBB8E9537CC(uParam0->f_34))
					{
						unk_0x3C3A95141D01773E(unk_0x81873881071CD9FE(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
					}
					func_274(uParam0, 48);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 48);
				if (func_282(uParam0, 48, 0))
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 3);
					func_218(uParam0, 10177.75f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_219(uParam0);
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 49);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				func_284(uParam0, 49);
				if (unk_0xA3BC6AA446F03669("FM_INTRO_DRIVE_END") && func_282(uParam0, 49, 0))
				{
					func_216(uParam0, 4500f);
					unk_0xF3148AAF69AF9CBC(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_219(uParam0);
				if (!unk_0xECDEA377354CBDA4())
				{
					if (!unk_0xC11AD1609CFCCCE1())
					{
						unk_0xAE2B1C30F8A0B67C(250);
					}
				}
				if (unk_0x236D8AD7EE179F46(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						unk_0xCA355997FF54F6CA();
						unk_0xC69E84EBBD7166E6(uParam0, 11);
					}
					func_274(uParam0, 50);
					unk_0xC69E84EBBD7166E6(uParam0, 15);
				}
				if (!unk_0x236D8AD7EE179F46(*uParam0, 20))
				{
					if (func_241(uParam0))
					{
						unk_0x0ADAEB274E23621D("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0x0ADAEB274E23621D("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (unk_0xFE489BA9CA22B147())
						{
							if (func_241(uParam0))
							{
								unk_0x410CFFB50166931E("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0x410CFFB50166931E("MP_1", 0, 1);
							}
						}
					}
					if (unk_0x0A11B2F86364F5B7())
					{
						unk_0xF3148AAF69AF9CBC(uParam0, 20);
					}
				}
				func_284(uParam0, 50);
				if (!unk_0x930F8FBB8E9537CC(uParam0->f_34))
				{
					if (unk_0xE20321A2D7F8960C(uParam0->f_34))
					{
						if (unk_0xA04824262F150982(uParam0->f_34) < 1f)
						{
							unk_0x05ACEF4F060B9B4E(uParam0->f_34);
						}
					}
				}
				if (func_282(uParam0, 50, 0) && unk_0x236D8AD7EE179F46(*uParam0, 20))
				{
					if (unk_0x236D8AD7EE179F46(*uParam0, 21))
					{
						unk_0x80650551CC58C784("FM_INTRO_DRIVE_END");
						unk_0xC69E84EBBD7166E6(uParam0, 21);
					}
					unk_0x05ACEF4F060B9B4E(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
					{
						if (func_241(uParam0))
						{
							unk_0x991ABCA492D8C897(unk_0x81873881071CD9FE(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x991ABCA492D8C897(unk_0x81873881071CD9FE(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0x930F8FBB8E9537CC(uParam0->f_35))
				{
					unk_0x991ABCA492D8C897(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x930F8FBB8E9537CC(uParam0->f_34))
				{
					unk_0x991ABCA492D8C897(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0xF3148AAF69AF9CBC(uParam0, 13);
				if (unk_0x12F24A1A22BF90A7("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0x0C22E352114F699C("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0x5632EA201EAF956B(4);
				func_232(1, 1, 1, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0x521385D8214D27C4())
				{
					unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (unk_0x48E480685981C7D4() - uParam0->f_13);
					}
					else
					{
						uParam0->f_30 = func_215(uParam0);
					}
					uParam0->f_14 = 0;
					uParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (uParam0->f_295)
				{
					if (func_241(uParam0))
					{
						if (!unk_0x236D8AD7EE179F46(*uParam0, 23))
						{
							if (unk_0x673E6879232705DA("MP_Female_Character", 0))
							{
								if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
								{
									unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), unk_0x097CA9356FED843D(Var1.f_0, Var1.f_1));
									unk_0x270066FDBAF3A458(0);
									unk_0xEAB527164AD92BF3(0, 1065353216);
									unk_0xF3148AAF69AF9CBC(uParam0, 23);
								}
							}
						}
					}
					else if (!unk_0x236D8AD7EE179F46(*uParam0, 23))
					{
						if (unk_0x673E6879232705DA("MP_1", 0))
						{
							if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
							{
								unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), unk_0x097CA9356FED843D(Var1.f_0, Var1.f_1));
								unk_0x270066FDBAF3A458(0);
								unk_0xEAB527164AD92BF3(0, 1065353216);
								unk_0xF3148AAF69AF9CBC(uParam0, 23);
							}
						}
					}
				}
				if (unk_0x673E6879232705DA("LAMAR", 0))
				{
					if (unk_0x7404950238A154C2(uParam0->f_34, 0))
					{
						if (!unk_0x5FEB513A4402FD59(uParam0->f_35))
						{
							if (!unk_0xE5AB05962FA1FF3F(uParam0->f_35, 0))
							{
								unk_0x3C3A95141D01773E(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (unk_0x673E6879232705DA("MP_Lamar_Car", 0))
				{
					if (unk_0x7404950238A154C2(uParam0->f_34, 0))
					{
						unk_0x5CC9D6711FE01F0D(uParam0->f_34);
					}
				}
				if (unk_0x1787C7476F17BD5C(0))
				{
					func_214(1);
					unk_0x270066FDBAF3A458(0);
					unk_0xEAB527164AD92BF3(0, 1065353216);
				}
				if (!func_213(unk_0x1329891157A54C63()))
				{
					func_212(1);
				}
				if (unk_0x521385D8214D27C4())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x48E480685981C7D4() - (uParam0->f_30 + unk_0x9317F2B481D935D4()));
					}
					switch (uParam0->f_14)
					{
						case 0:
							func_211(uParam0, 0);
							break;
						
						case 10:
							func_211(uParam0, 1);
							break;
						
						case 20:
							func_211(uParam0, 2);
							break;
						
						case 30:
							func_211(uParam0, 3);
							break;
						
						case 40:
							func_211(uParam0, 4);
							break;
						
						case 50:
							func_211(uParam0, 5);
							break;
						
						case 60:
							func_211(uParam0, 6);
							break;
						
						case 70:
							func_211(uParam0, 7);
							break;
						
						case 80:
							func_211(uParam0, 8);
							break;
						
						case 90:
							func_211(uParam0, 9);
							break;
						
						case 100:
							if (unk_0x86CCCD2FAE9D5E65(uParam0->f_36))
							{
								unk_0xF210D34D7F7152ED(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					unk_0xDE7CED04760CFED9();
					unk_0x72280C402F1D5F9D();
					if (!unk_0x0CD223E4B2B9708A())
					{
						unk_0x30E4A4CF320834D9(0);
					}
					func_232(0, 1, 1, 0);
					unk_0xC69E84EBBD7166E6(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0x521385D8214D27C4())
				{
					unk_0xCA986D0DFD6258E9();
				}
				else if (!unk_0x236D8AD7EE179F46(*uParam0, 17))
				{
					if (unk_0x29AFA2493D7C23D0())
					{
						unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
						unk_0xF3148AAF69AF9CBC(uParam0, 13);
						unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), true);
						if (uParam0->f_292)
						{
							unk_0xCA355997FF54F6CA();
							unk_0xC69E84EBBD7166E6(uParam0, 11);
						}
						func_178(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						unk_0xF3148AAF69AF9CBC(uParam0, 17);
					}
					else if (!unk_0xC584A413BCB2AA39())
					{
						unk_0x3B283FEBA87FFBEB(250);
					}
				}
				else if (func_179(&(uParam0->f_17), 10000, 0))
				{
					if (func_210(uParam0))
					{
						func_277(uParam0);
						func_226(uParam0);
						if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), false);
							if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
							{
								unk_0x5CEA5F12775261F2(unk_0x81873881071CD9FE(), true, 0);
								unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), 61.3164f);
							}
						}
						if (!unk_0x5FEB513A4402FD59(uParam0->f_35))
						{
							if (!unk_0xE5AB05962FA1FF3F(uParam0->f_35, 0))
							{
								if (unk_0x7404950238A154C2(uParam0->f_34, 0))
								{
									unk_0x3C3A95141D01773E(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_214(1);
						if (!func_213(unk_0x1329891157A54C63()))
						{
							func_212(1);
						}
						func_232(0, 1, 1, 0);
						unk_0x2D8AA12A484054EB(0, 0, 0);
						if (unk_0x236D8AD7EE179F46(*uParam0, 21))
						{
							unk_0x80650551CC58C784("FM_INTRO_DRIVE_END");
							unk_0xC69E84EBBD7166E6(uParam0, 21);
						}
						unk_0xF3148AAF69AF9CBC(uParam0, 1);
						unk_0xF3148AAF69AF9CBC(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0x521385D8214D27C4())
				{
					unk_0xCA986D0DFD6258E9();
				}
				else if (!unk_0x236D8AD7EE179F46(*uParam0, 17))
				{
					if (unk_0x29AFA2493D7C23D0())
					{
						unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
						unk_0xF3148AAF69AF9CBC(uParam0, 13);
						unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), true);
						if (uParam0->f_292)
						{
							unk_0xCA355997FF54F6CA();
							unk_0xC69E84EBBD7166E6(uParam0, 11);
						}
						func_178(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						unk_0xF3148AAF69AF9CBC(uParam0, 17);
					}
					else if (!unk_0xC584A413BCB2AA39())
					{
						unk_0x3B283FEBA87FFBEB(250);
					}
				}
				else if (func_179(&(uParam0->f_17), 10000, 0))
				{
					if (func_261(uParam0))
					{
						func_277(uParam0);
						func_226(uParam0);
						if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), false);
							if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
							{
								unk_0x5CEA5F12775261F2(unk_0x81873881071CD9FE(), true, 0);
								unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), 61.3164f);
								if (unk_0x7404950238A154C2(uParam0->f_34, 0))
								{
									unk_0x3C3A95141D01773E(unk_0x81873881071CD9FE(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!unk_0x5FEB513A4402FD59(uParam0->f_35))
						{
							if (!unk_0xE5AB05962FA1FF3F(uParam0->f_35, 0))
							{
								if (unk_0x7404950238A154C2(uParam0->f_34, 0))
								{
									unk_0x3C3A95141D01773E(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_213(unk_0x1329891157A54C63()))
						{
						}
						func_232(0, 1, 1, 0);
						if (unk_0x236D8AD7EE179F46(*uParam0, 21))
						{
							unk_0x80650551CC58C784("FM_INTRO_DRIVE_END");
							unk_0xC69E84EBBD7166E6(uParam0, 21);
						}
						unk_0xAE2B1C30F8A0B67C(250);
						unk_0x2D8AA12A484054EB(0, 0, 0);
						unk_0xF3148AAF69AF9CBC(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 3);
						uParam0->f_13 = (unk_0x48E480685981C7D4() - func_207(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_218(uParam0, 10177.75f);
						unk_0xF3148AAF69AF9CBC(uParam0, 15);
						uParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_284(uParam0, 57);
				bVar8 = !uParam0->f_288;
				func_197(uParam0, bVar8, 0);
				if (uParam0->f_292)
				{
					unk_0xCA355997FF54F6CA();
					unk_0xC69E84EBBD7166E6(uParam0, 11);
				}
				if (!unk_0x5FEB513A4402FD59(uParam0->f_35))
				{
					unk_0x52A7A8711E08087B(uParam0->f_35, -1);
					unk_0x6CB332CB31E9FA96(uParam0->f_35, 1);
				}
				unk_0xF8F0D6D97DAA6497(1);
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
		func_196(uParam0);
		if (!uParam0->f_291)
		{
			if (uParam0->f_293)
			{
				uParam0->f_289 = unk_0xBBDA792448DB5A89((unk_0x48E480685981C7D4() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = unk_0xBBDA792448DB5A89(func_215(uParam0));
			}
			uParam0->f_290 = func_195(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && unk_0x236D8AD7EE179F46(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				unk_0x2BA54EBC6DB9EB38(uParam0->f_289);
			}
			else
			{
				unk_0x2BA54EBC6DB9EB38(uParam0->f_290);
			}
		}
		func_192(uParam0);
		if (unk_0x236D8AD7EE179F46(*uParam0, 12))
		{
			if (func_251())
			{
				func_191();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
				{
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), false, 60);
				}
			}
			func_189(uParam0);
			unk_0xC3E2D7B6F8DC5E5B();
			unk_0xC9A352663D97EFC3(9);
			unk_0xC9A352663D97EFC3(7);
			unk_0xC9A352663D97EFC3(18);
			unk_0xC9A352663D97EFC3(6);
			unk_0xC9A352663D97EFC3(3);
			unk_0xC9A352663D97EFC3(13);
			unk_0xC9A352663D97EFC3(4);
		}
		if (Global_2451473.f_1695)
		{
			unk_0xF333CEFDC2923B24(2, 187, 1);
		}
	}
	return 0;
}

void func_189(var uParam0)
{
	var uVar0;
	
	if (!unk_0x236D8AD7EE179F46(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!unk_0x9B20331E99DD1C1C())
			{
				if (!unk_0xB692CF9D7FE78958())
				{
					uVar0 = unk_0x1329891157A54C63() + 32;
					unk_0xE6A9902E43C5B000(1, uVar0);
					func_190(1);
					unk_0xF3148AAF69AF9CBC(uParam0, 9);
				}
			}
			else
			{
				func_190(1);
				unk_0xF3148AAF69AF9CBC(uParam0, 9);
			}
		}
	}
}

void func_190(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 18))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 18);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 18))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 18);
	}
}

void func_191()
{
	unk_0x88188CE25DF2572C(Global_1318703, 255, 255, 255, 255, 0);
	if (Global_1318705 == 0)
	{
		unk_0x21ED0FC9B5CC748B(Global_1318703, "SET_BIG_LOGO_VISIBLE");
		unk_0xBD0C54D89298454E(1);
		unk_0x75A2A42ADE12FD0E(1);
		unk_0xBA9BA6181F2B6111();
		Global_1318705 = 1;
	}
}

void func_192(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_58[uParam0->f_90]))
	{
		if (unk_0x930F8FBB8E9537CC(uParam0->f_58[uParam0->f_90]))
		{
		}
		Var0 = { unk_0xB6AE0DAE06D56288(uParam0->f_58[uParam0->f_90], 1) };
		if (Var0.f_2 < -50f)
		{
			func_193(uParam0, uParam0->f_90);
		}
	}
	uParam0->f_90++;
	if (uParam0->f_90 >= 15)
	{
		uParam0->f_90 = 0;
	}
}

void func_193(var uParam0, int iParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_58[iParam1]))
	{
		if (unk_0x930F8FBB8E9537CC(uParam0->f_58[iParam1]))
		{
		}
		func_194(iParam1, &Var0, &fVar3);
		unk_0xB067093BBAF0A747(uParam0->f_58[iParam1], Var0, 1, 0, 0, 1);
		unk_0xC24172029826A66F(uParam0->f_58[iParam1], fVar3);
		unk_0xA8F22633ACC22189(uParam0->f_58[iParam1], true);
		unk_0x4F7552F76F378DB7(uParam0->f_58[iParam1]);
		unk_0x5CEA5F12775261F2(uParam0->f_58[iParam1], false, 0);
		unk_0xABA9860C0161F3CD(uParam0->f_58[iParam1], false);
	}
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_74[iParam1]))
	{
		if (unk_0x930F8FBB8E9537CC(uParam0->f_74[iParam1]))
		{
		}
		unk_0xABA9860C0161F3CD(uParam0->f_74[iParam1], false);
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

float func_195(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (uParam0->f_6 >= 31 && uParam0->f_6 < 33)
	{
		if (func_241(uParam0))
		{
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0x9317F2B481D935D4()));
			if (unk_0x12E412BB427DC29B() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / unk_0xBBDA792448DB5A89(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0x9317F2B481D935D4()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_196(var uParam0)
{
	if (unk_0x236D8AD7EE179F46(*uParam0, 29))
	{
		unk_0x64B51730CF6A77FB(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		unk_0x64B51730CF6A77FB(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_197(var uParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x236D8AD7EE179F46(*uParam0, 0))
	{
		if (unk_0x521385D8214D27C4())
		{
			unk_0x30E4A4CF320834D9(0);
		}
		unk_0xB637713097371D78(0);
		if (uParam0->f_292)
		{
			unk_0x198DF62C5BFC6FFE(0);
			unk_0xCA355997FF54F6CA();
			unk_0xC69E84EBBD7166E6(uParam0, 11);
		}
		if (unk_0x236D8AD7EE179F46(*uParam0, 14))
		{
			unk_0x3E52122FBF3FC64C();
			unk_0xC69E84EBBD7166E6(uParam0, 14);
		}
		func_206();
		func_227(uParam0);
		func_277(uParam0);
		func_226(uParam0);
		func_247();
		func_231(uParam0);
		func_248(uParam0);
		func_205(uParam0);
		func_220(uParam0);
		unk_0x3C936873011FA97B();
		if (bParam2)
		{
			if (unk_0x86CCCD2FAE9D5E65(uParam0->f_34))
			{
				unk_0xE0913C01F5C0CC3D(&(uParam0->f_34));
			}
			if (unk_0x86CCCD2FAE9D5E65(uParam0->f_35))
			{
				unk_0x71A8BCA218722FA1(&(uParam0->f_35));
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_36))
		{
			unk_0xF210D34D7F7152ED(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			func_358(0);
		}
		func_203();
		func_198();
		func_232(0, 1, 1, 0);
		unk_0x1448B1808E373DDE(0, -1);
		unk_0x094B864326B5FE96(1);
		if (unk_0x1C6DF6AD69BE853E())
		{
			if (unk_0xD10899F3A1372292())
			{
				unk_0xB6FBBE4CF8110C93(0, 1);
			}
		}
		if (unk_0x236D8AD7EE179F46(*uParam0, 21))
		{
			unk_0x80650551CC58C784("FM_INTRO_DRIVE_END");
			unk_0xC69E84EBBD7166E6(uParam0, 21);
		}
		unk_0xC2E7759493BD12A8(0);
		func_321(1);
		if (unk_0x236D8AD7EE179F46(*uParam0, 26))
		{
			func_315(1, 0);
			unk_0xC69E84EBBD7166E6(uParam0, 26);
		}
		Global_2422670.f_3127 = 0;
		if (!unk_0xF33755A765033580())
		{
			unk_0x15CC333336530455(0);
		}
		unk_0x8AAC3307B1C23688(1);
		if (bParam1)
		{
		}
		func_175(0);
		func_187(1);
		Global_2451473.f_1695 = 0;
		Global_2451473.f_1694 = 0;
		if (unk_0x12F24A1A22BF90A7("MP_INTRO_RACE_SCENE"))
		{
			unk_0x0C22E352114F699C("MP_INTRO_RACE_SCENE");
		}
		if (unk_0x12F24A1A22BF90A7("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0x0C22E352114F699C("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_298(14, 1);
		unk_0x9BAE0FF806E5C2E5(5);
		unk_0x54897F64BBD39D9B("CONTRAILS", 0);
		unk_0x4855165A2773595C(5, "FMINTRO");
		unk_0x4855165A2773595C(6, "FMINTRO");
		unk_0x4855165A2773595C(7, "FMINTRO");
		unk_0xD8323B49BAE93D80("mp_intro_seq@");
		unk_0xD8323B49BAE93D80("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0xD8323B49BAE93D80("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0xD8323B49BAE93D80("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0xFBACB273AA628CC5(unk_0xB912F354EBC95ECF()))
		{
			unk_0xD6DF56BB9537BCC5(unk_0xB912F354EBC95ECF(), 0.7f);
		}
		unk_0xCB81460231D04F59(0);
		unk_0x270066FDBAF3A458(0);
		unk_0xEAB527164AD92BF3(0, 1065353216);
		if (unk_0x1C6DF6AD69BE853E())
		{
			unk_0xA3063424F5C9A51D();
			unk_0xF8F0D6D97DAA6497(1);
		}
		unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), false);
		if (!unk_0xECDEA377354CBDA4() && !unk_0xC11AD1609CFCCCE1())
		{
			unk_0xAE2B1C30F8A0B67C(800);
		}
		unk_0xF3148AAF69AF9CBC(uParam0, 0);
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
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
		}
		Global_14394.f_1 = 1;
		if (func_75(0))
		{
			func_200(0);
		}
	}
	else if (Global_14394.f_1 == 1)
	{
		if (!Global_14394.f_1 == 0)
		{
			Global_14394.f_1 = 3;
		}
	}
}

void func_200(int iParam0)
{
	if (Global_14552)
	{
		func_201(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_147())
	{
		Global_14394.f_1 = 3;
	}
}

void func_201(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_75(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

void func_202()
{
	if (Global_14394.f_1 == 9 || Global_14394.f_1 == 10)
	{
		Global_15746 = 0;
		Global_15742 = 1;
	}
}

void func_203()
{
	if (!Global_1312569)
	{
		return;
	}
	func_204();
}

void func_204()
{
	Global_1312569 = 0;
	StringCopy(&(Global_1312569.f_1), "", 24);
	Global_1312569.f_7 = 0;
}

void func_205(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_211(uParam0, iVar0);
		iVar0++;
	}
}

void func_206()
{
	unk_0xC3A1174645E71AB9(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	unk_0xC3A1174645E71AB9(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
}

int func_207(var uParam0, int iParam1, bool bParam2)
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

int func_210(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	unk_0x32A12757CBF48A33(iVar0);
	unk_0x32A12757CBF48A33(iVar1);
	if (unk_0x33ACB874CECA2D4B(iVar0) && unk_0x33ACB874CECA2D4B(iVar1))
	{
		if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_34))
		{
			uParam0->f_34 = unk_0xE00F8DEA9778FC87(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0);
			unk_0xC050334007FDA968(uParam0->f_34, 1);
			unk_0x89540DDA99D7346F(uParam0->f_34, 0);
			unk_0xCEDA5B7DDF6C8846(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			unk_0x69AA788B6BA4CB68(uParam0->f_34, 2);
		}
		else if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_35))
		{
			if (unk_0x7404950238A154C2(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0x206897C6DBC12488(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, 0);
				unk_0x1D15D99A10A15334(uParam0->f_35, 1);
				unk_0x210A4A0B257F8433(uParam0->f_34, 1);
				unk_0x210A4A0B257F8433(uParam0->f_35, 1);
				unk_0x506A601663C5417C(uParam0->f_35, unk_0x88594869E178AFA2(unk_0x81873881071CD9FE()));
				unk_0xCEDA5B7DDF6C8846(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_34) || !unk_0x86CCCD2FAE9D5E65(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_211(var uParam0, int iParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_58[iParam1]))
	{
		unk_0x5D00E836B6BE8693(&(uParam0->f_58[iParam1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_74[iParam1]))
	{
		unk_0xF210D34D7F7152ED(&(uParam0->f_74[iParam1]));
	}
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_132), 22);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_132), 22);
	}
}

bool func_213(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_132, 22);
}

void func_214(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 4);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 4);
	}
}

int func_215(var uParam0)
{
	if (uParam0->f_6 < 31)
	{
		return unk_0x1888D9411BE75F8D();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + unk_0x9317F2B481D935D4());
	}
	return (uParam0->f_28 + unk_0x1888D9411BE75F8D());
}

void func_216(var uParam0, float fParam1)
{
	func_217(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_217(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(uParam0, 0))
	{
		if (bParam4)
		{
			unk_0x05ACEF4F060B9B4E(uParam0);
			unk_0xC8F62804B10A6701(uParam0, iParam1, sParam2, 1);
		}
		else if (!unk_0xE20321A2D7F8960C(uParam0))
		{
			unk_0xC8F62804B10A6701(uParam0, iParam1, sParam2, 1);
			unk_0xF22174186369FC91(uParam0, 1);
		}
		else
		{
			iVar0 = unk_0xFCFD8E6E4FB394AD(iParam1, sParam2);
			if (unk_0x579D32FAAD5CA6B8(uParam0) != iVar0)
			{
				unk_0xC8F62804B10A6701(uParam0, iParam1, sParam2, 1);
				unk_0xF22174186369FC91(uParam0, 1);
			}
		}
		unk_0x0039C5B0E3E4993E(uParam0, (fParam3 - unk_0x678BA9CA7610A13E(uParam0)));
	}
}

void func_218(var uParam0, float fParam1)
{
	func_217(uParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_219(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!uParam0->f_296)
	{
		iVar0 = unk_0x8DAF7A748E41AD46("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0xC6F372320BE985CB(iVar1))
		{
			func_7(iVar1);
			uParam0->f_296 = 1;
		}
	}
}

void func_220(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_37[iVar0]))
		{
			unk_0xF210D34D7F7152ED(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0x887F4488DA99FD21(joaat("g_m_y_mexgoon_02"));
	unk_0xD8323B49BAE93D80("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0xD8323B49BAE93D80("amb@world_human_hang_out_street@male_a@base");
}

int func_221(var uParam0)
{
	int iVar0;
	
	if (unk_0x236D8AD7EE179F46(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0x32A12757CBF48A33(joaat("g_m_y_mexgoon_02"));
		unk_0x295DC04FC13E025B("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x295DC04FC13E025B("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0x33ACB874CECA2D4B(joaat("g_m_y_mexgoon_02")) && unk_0x8E8B546E1A81D27F("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0x8E8B546E1A81D27F("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = unk_0x206897C6DBC12488(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, 0);
					unk_0x210A4A0B257F8433(uParam0->f_37[iVar0], 1);
					unk_0x1D15D99A10A15334(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							unk_0x7C6E9DADDEC3138E(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							unk_0x7C6E9DADDEC3138E(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							unk_0x7C6E9DADDEC3138E(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							unk_0x7C6E9DADDEC3138E(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							unk_0x7C6E9DADDEC3138E(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							unk_0xB067093BBAF0A747(uParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							unk_0xC24172029826A66F(uParam0->f_37[iVar0], 76.8852f);
							unk_0x8E4A427F5C43E416(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0xA8F22633ACC22189(uParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0x7C6E9DADDEC3138E(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							unk_0xB067093BBAF0A747(uParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							unk_0xC24172029826A66F(uParam0->f_37[iVar0], 87.5786f);
							unk_0x8E4A427F5C43E416(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0xA8F22633ACC22189(uParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0x7C6E9DADDEC3138E(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							unk_0x7C6E9DADDEC3138E(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x887F4488DA99FD21(joaat("g_m_y_mexgoon_02"));
		unk_0xD8323B49BAE93D80("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0xD8323B49BAE93D80("amb@world_human_hang_out_street@male_a@base");
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 5);
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
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 1;
	Global_16686 = 0;
	Global_16690 = 0;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_144(sParam2, iParam4, 0);
}

void func_223(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!unk_0x236D8AD7EE179F46(*uParam0, 25))
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
			if (!unk_0x5FEB513A4402FD59(uParam0->f_98[iVar0]) && unk_0x7404950238A154C2(uParam0->f_92[iVar0], 0))
			{
				unk_0xA8F22633ACC22189(uParam0->f_92[iVar0], false);
				unk_0x3D24414865131CB8(uParam0->f_92[iVar0], 10f);
				unk_0x1ABA8A919187E144(uParam0->f_98[iVar0], uParam0->f_92[iVar0], Var1, 5f, 0, unk_0x14B7103DBD149FFE(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0xF3148AAF69AF9CBC(uParam0, 25);
	}
}

int func_224(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (unk_0x236D8AD7EE179F46(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = joaat("shamal");
	unk_0x32A12757CBF48A33(iVar5);
	unk_0x32A12757CBF48A33(func_225());
	if (unk_0x33ACB874CECA2D4B(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_92[iVar0]))
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
				uParam0->f_92[iVar0] = unk_0xE00F8DEA9778FC87(iVar5, Var1, fVar4, 0, 0);
				unk_0x5CC9D6711FE01F0D(uParam0->f_92[iVar0]);
				unk_0xA8F22633ACC22189(uParam0->f_92[iVar0], true);
				unk_0x69AA788B6BA4CB68(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0x33ACB874CECA2D4B(func_225()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_98[iVar0]))
			{
				if (unk_0x86CCCD2FAE9D5E65(uParam0->f_92[iVar0]))
				{
					if (unk_0x7404950238A154C2(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = unk_0x4D135F3066A9BF9C(uParam0->f_92[iVar0], 4, func_225(), -1, 0, false);
						unk_0x1D15D99A10A15334(uParam0->f_98[iVar0], 1);
						unk_0x686D6CDC14C4BA6C(uParam0->f_92[iVar0], 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0x887F4488DA99FD21(iVar5);
	unk_0x887F4488DA99FD21(func_225());
	unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 11);
	return 1;
}

int func_225()
{
	return unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE());
}

void func_226(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_92[iVar0]))
		{
			unk_0x5D00E836B6BE8693(&(uParam0->f_92[iVar0]));
		}
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_98[iVar0]))
		{
			unk_0xF210D34D7F7152ED(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0x887F4488DA99FD21(joaat("shamal"));
	unk_0x887F4488DA99FD21(func_225());
}

void func_227(var uParam0)
{
	int iVar0;
	
	if (unk_0x236D8AD7EE179F46(uParam0->f_3, 2))
	{
		unk_0x887F4488DA99FD21(joaat("p_cs_mp_jet_01_s"));
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_33))
		{
			unk_0xAB6AFD52AD641D70(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (unk_0x3D675D69D18A10E9(uParam0->f_120))
			{
				unk_0x82463470A763AABA(uParam0->f_120, 0);
			}
			if (unk_0x3D675D69D18A10E9(uParam0->f_121))
			{
				unk_0x82463470A763AABA(uParam0->f_121, 0);
			}
			if (unk_0x7A74065A1435C8AB())
			{
				unk_0x954FB3FC1E04A7A9();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0x86CCCD2FAE9D5E65(uParam0->f_104[iVar0]))
			{
				unk_0xF210D34D7F7152ED(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0xC69E84EBBD7166E6(&(uParam0->f_3), 2);
	}
}

int func_228(var uParam0)
{
	if (func_241(uParam0))
	{
		unk_0x295DC04FC13E025B("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x295DC04FC13E025B("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x8E8B546E1A81D27F("mp_intro_seq@ig_1_lamar_drive_female") && unk_0x8E8B546E1A81D27F("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0x295DC04FC13E025B("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0x295DC04FC13E025B("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x8E8B546E1A81D27F("mp_intro_seq@ig_1_lamar_drive_male") && unk_0x8E8B546E1A81D27F("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_229(var uParam0)
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!unk_0x236D8AD7EE179F46(uParam0->f_3, 10))
	{
		unk_0x32A12757CBF48A33(iVar0);
		if (unk_0x33ACB874CECA2D4B(iVar0))
		{
			if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_36))
			{
				uParam0->f_36 = unk_0x206897C6DBC12488(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, 0);
				unk_0x1D15D99A10A15334(uParam0->f_36, 1);
				unk_0x210A4A0B257F8433(uParam0->f_36, 1);
				unk_0xABA9860C0161F3CD(uParam0->f_36, false);
				unk_0x506A601663C5417C(uParam0->f_36, unk_0x88594869E178AFA2(unk_0x81873881071CD9FE()));
				unk_0xCEDA5B7DDF6C8846(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				func_359(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_36))
		{
			return 0;
		}
		unk_0x887F4488DA99FD21(iVar0);
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 10);
	}
	return 1;
}

void func_230(var uParam0, float fParam1)
{
	func_217(uParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_231(var uParam0)
{
	int iVar0;
	
	unk_0x887F4488DA99FD21(func_244());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_245(uParam0, iVar0);
		iVar0++;
	}
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_91))
	{
		unk_0xF210D34D7F7152ED(&(uParam0->f_91));
	}
}

void func_232(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_238(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_147())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_237(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_238(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_237(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_233(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
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
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_234()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_235(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_236(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
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
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_237(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_238(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

void func_239(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_104[iVar0]))
		{
			unk_0xDC96513B84DA05AA(uParam0->f_104[iVar0]);
			unk_0x991ABCA492D8C897(uParam0->f_104[iVar0], func_240(iVar0), 0, 0, 64);
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

int func_241(var uParam0)
{
	if (uParam0->f_295)
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
	return func_243(unk_0x1329891157A54C63());
}

int func_243(int iParam0)
{
	if (unk_0x14B7103DBD149FFE(unk_0xE495E987CB2BE7EF(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_244()
{
	return joaat("s_m_y_xmech_02");
}

void func_245(var uParam0, int iParam1)
{
	unk_0x887F4488DA99FD21(func_246(iParam1));
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_49[iParam1]))
	{
		if (unk_0x7404950238A154C2(uParam0->f_49[iParam1], 0))
		{
		}
		unk_0x1E42A5E25CF196EF(uParam0->f_49[iParam1]);
		unk_0x5D00E836B6BE8693(&(uParam0->f_49[iParam1]));
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
	Global_1318705 = 0;
	if (unk_0xCC8E3BAC62A29F42(Global_1318703))
	{
		unk_0x21ED0FC9B5CC748B(Global_1318703, "SET_BIG_LOGO_VISIBLE");
		unk_0xBD0C54D89298454E(1);
		unk_0x75A2A42ADE12FD0E(0);
		unk_0xBA9BA6181F2B6111();
		unk_0x4B6F01DE8CCE643E(&Global_1318703);
	}
}

void func_248(var uParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			unk_0xFF4D210CF887E915(&uVar0);
		}
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			unk_0xFF4D210CF887E915(&uVar0);
		}
		iVar1++;
	}
	unk_0x887F4488DA99FD21(joaat("cheetah"));
	unk_0x887F4488DA99FD21(joaat("monroe"));
	unk_0x887F4488DA99FD21(joaat("entityxf"));
	unk_0x887F4488DA99FD21(joaat("feltzer2"));
	unk_0x4855165A2773595C(100, "FM_Intro_uber");
	unk_0x4855165A2773595C(101, "FM_Intro_uber");
	unk_0x4855165A2773595C(102, "FM_Intro_uber");
	unk_0x4855165A2773595C(103, "FM_Intro_uber");
	unk_0x4855165A2773595C(104, "FM_Intro_uber");
	unk_0xD8323B49BAE93D80("mp_intro_seq@");
}

void func_249(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_49[2]))
	{
		if (unk_0x7404950238A154C2(uParam0->f_49[2], 0))
		{
			unk_0x2EDBED0C31D95957(uParam0->f_49[2]);
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_49[4]))
	{
		if (unk_0x7404950238A154C2(uParam0->f_49[4], 0))
		{
			unk_0x2EDBED0C31D95957(uParam0->f_49[4]);
		}
	}
}

void func_250(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_49[2]))
	{
		if (unk_0x7404950238A154C2(uParam0->f_49[2], 0))
		{
			unk_0x6BDD8931B909A663(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_251()
{
	if (unk_0xEBC0C5BF725D9DBE())
	{
		return 0;
	}
	if (!unk_0xCC8E3BAC62A29F42(Global_1318703))
	{
		Global_1318703 = unk_0x95EF972E3A07B525("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_252(var uParam0, char* sParam1, char* sParam2, var uParam3, struct<3> Param4, struct<3> Param7)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam3))
	{
		if (unk_0x930F8FBB8E9537CC(uParam3))
		{
		}
		if (!unk_0x42E36F2D658EB2FF(uParam0->f_8))
		{
			uParam0->f_8 = unk_0xAAC4D4F273757469("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = unk_0x59C061A719024602(Param4, Param7, 2);
		unk_0xBCD946677FB3F5D5(uParam0->f_9, uParam3, 0);
		unk_0xC813152833B59518(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		unk_0xDD0B0D77CB8995B1(uParam0->f_8, 1);
		unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 1, 0);
	}
}

void func_253(var uParam0)
{
	if (!unk_0x236D8AD7EE179F46(uParam0->f_3, 3))
	{
		unk_0xF403E3C0F7174ABE("CONTRAILS");
		if (func_241(uParam0))
		{
			unk_0xA9F0B166E9ABE875("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0xA9F0B166E9ABE875("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0xFE489BA9CA22B147())
		{
			if (uParam0->f_295)
			{
				if (func_241(uParam0))
				{
					unk_0x410CFFB50166931E("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0x410CFFB50166931E("MP_Male_Character", 0, 1);
				}
			}
			func_254();
		}
		if (unk_0x0A11B2F86364F5B7())
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 3);
		}
	}
}

void func_254()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0x410CFFB50166931E(func_240(iVar0), 0, 1);
		iVar0++;
	}
}

int func_255(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!unk_0x236D8AD7EE179F46(uParam0->f_3, 2))
	{
		unk_0x32A12757CBF48A33(joaat("p_cs_mp_jet_01_s"));
		unk_0x32A12757CBF48A33(joaat("mp_m_freemode_01"));
		unk_0x32A12757CBF48A33(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			unk_0x18C8823792832C78();
		}
		if (((unk_0x33ACB874CECA2D4B(joaat("p_cs_mp_jet_01_s")) && unk_0x33ACB874CECA2D4B(joaat("mp_m_freemode_01"))) && unk_0x33ACB874CECA2D4B(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || unk_0x7A74065A1435C8AB()))
		{
			uParam0->f_33 = unk_0xF364195A57BB7AE3(joaat("p_cs_mp_jet_01_s"), Var1, 0, 0, 0);
			unk_0x6927F8C100125A71(uParam0->f_33, 3000);
			unk_0xEA89E72C99125D9C(uParam0->f_33, 0);
			unk_0xABA9860C0161F3CD(uParam0->f_33, false);
			if (uParam0->f_294)
			{
				uParam0->f_120 = unk_0xAB454B9B11E38180("scr_mp_intro_plane_exhaust", uParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = unk_0xAB454B9B11E38180("scr_mp_intro_plane_exhaust", uParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			if (uParam0->f_295)
			{
				func_259(uParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_258(uParam0, iVar0))
				{
					uParam0->f_104[iVar0] = unk_0x206897C6DBC12488(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = unk_0x206897C6DBC12488(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				if (func_257(uParam0, iVar0))
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0xE495E987CB2BE7EF(unk_0x6528B1497E4313F1(uParam0->f_112[iVar0]))))
					{
					}
					unk_0x5104989EC670F5F4(unk_0xE495E987CB2BE7EF(unk_0x6528B1497E4313F1(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					unk_0xDC96513B84DA05AA(uParam0->f_104[iVar0]);
				}
				else
				{
					func_256(uParam0, iVar0);
				}
				iVar0++;
			}
			unk_0x887F4488DA99FD21(joaat("p_cs_mp_jet_01_s"));
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 2);
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
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 1);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 2);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 3);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 4);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 5);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 6);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 7);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 1);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 2);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 3);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 4);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 5);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 6);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 7);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 1);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 2);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 3);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 4);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 5);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 6);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 7);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 1);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 2);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 3);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 4);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 5);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 6);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 7);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 1);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 2);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 3);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 4);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 5);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 6);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 7);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 1);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 2);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 3);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 4);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 5);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 6);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 7);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x03F73D35E5AC583A(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 0);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 1);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 2);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 3);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 4);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 5);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 6);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 7);
			unk_0xBD4A273C1B487F68(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_257(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_12(unk_0x6528B1497E4313F1(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, int iParam1)
{
	if (func_257(uParam0, iParam1))
	{
		return func_243(unk_0x6528B1497E4313F1(uParam0->f_112[iParam1]));
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
		iVar2 = unk_0x6528B1497E4313F1(iVar1);
		if (func_12(iVar2, 0, 1))
		{
			if (unk_0x1329891157A54C63() != iVar2)
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

int func_261(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (unk_0x236D8AD7EE179F46(uParam0->f_3, 9))
	{
		return 1;
	}
	unk_0x32A12757CBF48A33(iVar0);
	unk_0x32A12757CBF48A33(iVar1);
	unk_0x995DCDA796A47049(5, "FMINTRO");
	unk_0x995DCDA796A47049(6, "FMINTRO");
	unk_0x995DCDA796A47049(7, "FMINTRO");
	unk_0x295DC04FC13E025B("mp_intro_seq@");
	if (((((unk_0x33ACB874CECA2D4B(iVar0) && unk_0x33ACB874CECA2D4B(iVar1)) && unk_0x498998F33897432E(5, "FMINTRO")) && unk_0x498998F33897432E(6, "FMINTRO")) && unk_0x498998F33897432E(7, "FMINTRO")) && unk_0x8E8B546E1A81D27F("mp_intro_seq@"))
	{
		if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_34))
		{
			unk_0x7C6BF0CD5D7454C9(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = unk_0xE00F8DEA9778FC87(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0);
			unk_0xC050334007FDA968(uParam0->f_34, 1);
			unk_0x89540DDA99D7346F(uParam0->f_34, 0);
			unk_0xCEDA5B7DDF6C8846(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_35))
		{
			if (unk_0x7404950238A154C2(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0x206897C6DBC12488(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, 0);
				unk_0x3C3A95141D01773E(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
				unk_0x1D15D99A10A15334(uParam0->f_35, 1);
				unk_0x210A4A0B257F8433(uParam0->f_34, 1);
				unk_0x210A4A0B257F8433(uParam0->f_35, 1);
				unk_0x506A601663C5417C(uParam0->f_35, unk_0x88594869E178AFA2(unk_0x81873881071CD9FE()));
				unk_0xCEDA5B7DDF6C8846(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_34) || !unk_0x86CCCD2FAE9D5E65(uParam0->f_35))
	{
		return 0;
	}
	unk_0x887F4488DA99FD21(iVar0);
	unk_0x887F4488DA99FD21(iVar1);
	unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 9);
	return 1;
}

void func_262(var uParam0)
{
	int iVar0;
	
	if (!unk_0x236D8AD7EE179F46(uParam0->f_3, 0))
	{
		func_272();
		func_270();
		if (func_264(uParam0))
		{
			if (func_263(uParam0))
			{
				if (!unk_0x42E36F2D658EB2FF(uParam0->f_7))
				{
					uParam0->f_7 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				unk_0xD269CB43D12C6BF5(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0x887F4488DA99FD21(func_246(iVar0));
					iVar0++;
				}
				unk_0x887F4488DA99FD21(func_244());
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 0);
			}
		}
	}
}

int func_263(var uParam0)
{
	int iVar0;
	
	iVar0 = func_244();
	if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_91))
	{
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_49[2]))
		{
			if (unk_0xC6F372320BE985CB(iVar0))
			{
				if (unk_0x33ACB874CECA2D4B(iVar0))
				{
					if (unk_0x8E8B546E1A81D27F("MP_INTRO_SEQ@"))
					{
						if (!unk_0x930F8FBB8E9537CC(uParam0->f_49[2]))
						{
							uParam0->f_10 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xBCD946677FB3F5D5(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0x206897C6DBC12488(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, 0);
							unk_0x1D15D99A10A15334(uParam0->f_91, 1);
							unk_0x58BEA8B2364F8C48(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							unk_0xFD9AE4CEB0ED9DDF(uParam0->f_10, 1);
							unk_0xA8F22633ACC22189(uParam0->f_91, true);
							unk_0x5CEA5F12775261F2(uParam0->f_91, false, 0);
							unk_0x7FC06F0DCD7AC728(uParam0->f_91, joaat("gadget_parachute"));
							unk_0x03F73D35E5AC583A(uParam0->f_91, 0, 1, 1, 0);
							unk_0x03F73D35E5AC583A(uParam0->f_91, 1, 0, 0, 0);
							unk_0x03F73D35E5AC583A(uParam0->f_91, 2, 0, 2, 0);
							unk_0x03F73D35E5AC583A(uParam0->f_91, 3, 0, 2, 0);
							unk_0x03F73D35E5AC583A(uParam0->f_91, 4, 1, 0, 0);
							unk_0x03F73D35E5AC583A(uParam0->f_91, 5, 0, 0, 0);
							unk_0x03F73D35E5AC583A(uParam0->f_91, 6, 0, 0, 0);
							unk_0x03F73D35E5AC583A(uParam0->f_91, 7, 0, 0, 0);
							unk_0x03F73D35E5AC583A(uParam0->f_91, 8, 0, 0, 0);
							unk_0x03F73D35E5AC583A(uParam0->f_91, 9, 0, 0, 0);
							unk_0x03F73D35E5AC583A(uParam0->f_91, 10, 0, 0, 0);
							unk_0x03F73D35E5AC583A(uParam0->f_91, 11, 0, 0, 0);
							unk_0xBD4A273C1B487F68(uParam0->f_91, 0);
							unk_0xBD4A273C1B487F68(uParam0->f_91, 1);
							unk_0xBD4A273C1B487F68(uParam0->f_91, 2);
							unk_0xBD4A273C1B487F68(uParam0->f_91, 3);
							unk_0xBD4A273C1B487F68(uParam0->f_91, 4);
							unk_0xBD4A273C1B487F68(uParam0->f_91, 5);
							unk_0xBD4A273C1B487F68(uParam0->f_91, 6);
							unk_0xBD4A273C1B487F68(uParam0->f_91, 7);
							unk_0xBD4A273C1B487F68(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_91))
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
	
	if (!unk_0x236D8AD7EE179F46(uParam0->f_2, 31))
	{
		func_272();
		iVar5 = 0;
		while (iVar5 < 8)
		{
			func_269(iVar5, &Var1, &fVar4);
			if (!func_268(Var1, 0f, 0f, 0f, 0))
			{
				if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_49[iVar5]))
				{
					iVar0 = func_246(iVar5);
					if (unk_0xC6F372320BE985CB(iVar0))
					{
						if (unk_0x33ACB874CECA2D4B(iVar0))
						{
							uParam0->f_49[iVar5] = unk_0xE00F8DEA9778FC87(iVar0, Var1, fVar4, 0, 0);
							unk_0xEA89E72C99125D9C(uParam0->f_49[iVar5], 1);
							unk_0xA0E7470F98EF901A(uParam0->f_49[iVar5], 0f);
							unk_0x726A9B2010B2B4D6(uParam0->f_49[iVar5], 0);
							if (iVar5 == 2)
							{
								unk_0x4DBA43D6DE677017(uParam0->f_49[iVar5], 4, 0, 1);
								unk_0x6BDD8931B909A663(uParam0->f_49[iVar5], 4, 0, 1f);
							}
							func_267(uParam0, iVar5);
							func_266(uParam0, iVar5);
							unk_0x887F4488DA99FD21(iVar0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 8)
		{
			if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_49[iVar5]))
			{
				return 0;
			}
			if (!unk_0x236D8AD7EE179F46(uParam0->f_2, iVar5))
			{
				if (func_265(uParam0, iVar5))
				{
					unk_0xF3148AAF69AF9CBC(&(uParam0->f_2), iVar5);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x7404950238A154C2(uParam0->f_49[iVar5], 0))
			{
				if (!unk_0x5217251E32972F38(uParam0->f_49[iVar5]))
				{
					return 0;
				}
			}
			iVar5++;
		}
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_265(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0x7404950238A154C2(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xBE23E5C609DF6E79(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 0, 1, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 2, 1, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 3, 1, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 5, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 7, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 10, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 14, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 15, 4, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x7404950238A154C2(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xBE23E5C609DF6E79(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0xC163DC4217AA2669(uParam0->f_49[iParam1], 22, 1);
					unk_0xDD213338390D43E1(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0x7404950238A154C2(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xBE23E5C609DF6E79(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 4, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 14, 5, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0xC163DC4217AA2669(uParam0->f_49[iParam1], 22, 1);
					unk_0xDD213338390D43E1(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0x7404950238A154C2(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xBE23E5C609DF6E79(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 23, 11, 0);
					unk_0xC163DC4217AA2669(uParam0->f_49[iParam1], 22, 1);
					unk_0xDD213338390D43E1(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x7404950238A154C2(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xBE23E5C609DF6E79(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 7, 1, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 11, 3, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 12, 2, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 13, 2, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 16, 4, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0xC163DC4217AA2669(uParam0->f_49[iParam1], 22, 1);
					unk_0xDD213338390D43E1(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0x7404950238A154C2(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xBE23E5C609DF6E79(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 3, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 6, 2, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 10, 3, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 15, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0xC163DC4217AA2669(uParam0->f_49[iParam1], 22, 1);
					unk_0xDD213338390D43E1(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0x7404950238A154C2(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xBE23E5C609DF6E79(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 1, 1, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 8, 0, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x323720FEE81B53C0(uParam0->f_49[iParam1], 23, 0, 0);
					unk_0xC163DC4217AA2669(uParam0->f_49[iParam1], 22, 1);
					unk_0xDD213338390D43E1(uParam0->f_49[iParam1], 0);
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
			unk_0xF196EBA065B17452(uParam0->f_49[iParam1], 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 0, 1);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 1, 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 2, 1);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 3, 1);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 4, 1);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 5, 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 7, 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 10, 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0xF196EBA065B17452(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0xF196EBA065B17452(uParam0->f_49[iParam1], 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 0, 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0xF196EBA065B17452(uParam0->f_49[iParam1], 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0xF196EBA065B17452(uParam0->f_49[iParam1], 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 1, 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 2, 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 4, 1);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 7, 1);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0xF196EBA065B17452(uParam0->f_49[iParam1], 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 0, 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 1, 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 2, 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 3, 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 4, 1);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 6, 2);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 10, 3);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0xF196EBA065B17452(uParam0->f_49[iParam1], 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 1, 1);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 4, 1);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 8, 0);
			unk_0x1B868992ADBB2BF5(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_267(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xFD021BAF9614D437(uParam0->f_49[iParam1], 83, 134);
			unk_0x3CA38E5C9A060AAD(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0xFD021BAF9614D437(uParam0->f_49[iParam1], 0, 0);
			unk_0x3CA38E5C9A060AAD(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0xFD021BAF9614D437(uParam0->f_49[iParam1], 49, 0);
			unk_0x3CA38E5C9A060AAD(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0xFD021BAF9614D437(uParam0->f_49[iParam1], 0, 0);
			unk_0x3CA38E5C9A060AAD(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0xFD021BAF9614D437(uParam0->f_49[iParam1], 43, 5);
			unk_0x3CA38E5C9A060AAD(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0xFD021BAF9614D437(uParam0->f_49[iParam1], 3, 3);
			unk_0x3CA38E5C9A060AAD(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0xFD021BAF9614D437(uParam0->f_49[iParam1], 35, 0);
			unk_0x3CA38E5C9A060AAD(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_268(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
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
	unk_0x32A12757CBF48A33(func_244());
	unk_0x295DC04FC13E025B(func_271());
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
		unk_0x32A12757CBF48A33(func_246(iVar0));
		iVar0++;
	}
}

void func_273(var uParam0, float fParam1, float fParam2)
{
	func_217(uParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_217(uParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_217(uParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_217(uParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_217(uParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_274(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	switch (iParam1)
	{
		case 14:
			func_275(uParam0, 0, -2997.174f, 330.9234f, 14.2341f, -15.97f, &uVar1, 1);
			func_275(uParam0, 2, -2983.9f, 423.7414f, 14.4122f, -5.25f, &uVar1, 1);
			break;
		
		case 15:
			func_275(uParam0, 1, -2622.208f, -109.3386f, 19.2643f, 39.34f, &uVar1, 1);
			func_275(uParam0, 3, -2583.95f, -143.6469f, 20.6224f, 48.89f, &uVar1, 1);
			func_275(uParam0, 7, -2552.145f, -169.0495f, 19.8664f, 60.04f, &uVar1, 1);
			func_275(uParam0, 8, -2531.474f, -174.4581f, 19.2269f, 58.09f, &uVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_275(uParam0, 0, -2420.618f, -232.2668f, 15.3525f, 57.71f, &uVar1, 1);
			func_275(uParam0, 2, -2399.709f, -249.2471f, 14.9551f, 58.19f, &uVar1, 1);
			func_275(uParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &uVar1, 1);
			func_275(uParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &uVar1, 1);
			func_275(uParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &uVar1, 1);
			func_275(uParam0, 9, -2408.733f, -238.8328f, 15.2055f, 59.84f, &uVar1, 1);
			break;
		
		case 18:
			func_275(uParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &uVar1, 1);
			func_275(uParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &uVar1, 1);
			func_275(uParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &uVar1, 1);
			func_275(uParam0, 8, -2191.429f, -335.8769f, 12.7225f, 84.71f, &uVar1, 1);
			break;
		
		case 19:
			func_275(uParam0, 0, -1833.87f, -561.7711f, 11.0989f, 48.11f, &uVar1, 1);
			func_275(uParam0, 1, -1630.587f, -685.6821f, 16.5351f, 58.23f, &uVar1, 1);
			func_275(uParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &uVar1, 1);
			func_275(uParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &uVar1, 1);
			func_275(uParam0, 4, -1706.507f, -720.8959f, 9.6281f, -132.94f, &uVar1, 1);
			func_275(uParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &uVar1, 1);
			func_275(uParam0, 6, -1782.764f, -610.5726f, 10.3008f, 52.34f, &uVar1, 1);
			func_275(uParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &uVar1, 1);
			func_275(uParam0, 8, -1751.892f, -682.1017f, 9.6795f, -134.89f, &uVar1, 1);
			func_275(uParam0, 9, -1742.098f, -642.5658f, 9.8169f, 48.19f, &uVar1, 1);
			break;
		
		case 33:
			func_275(uParam0, 0, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &uVar1, 0);
			func_275(uParam0, 5, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &uVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_275(uParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &uVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_275(uParam0, 0, -712.0925f, -1983.516f, 25.688f, -167.99f, &uVar1, 0);
			func_275(uParam0, 1, -533.9934f, -2004.727f, 26.9085f, 58.71f, &uVar1, 0);
			func_275(uParam0, 2, -653.3551f, -2047.782f, 27.3566f, -112.14f, &uVar1, 0);
			func_275(uParam0, 3, -663.821f, -1934.85f, 27.1417f, -121.65f, &uVar1, 0);
			func_275(uParam0, 4, -656.6017f, -2009.078f, 30.0188f, -106.53f, &uVar1, 0);
			func_275(uParam0, 5, -502.696f, -2023.068f, 26.2376f, 60.2827f, &uVar1, 0);
			func_275(uParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &uVar1, 0);
			func_275(uParam0, 7, -624.7944f, -1960.975f, 26.29f, 237.3848f, &uVar1, 0);
			func_275(uParam0, 8, -463.0545f, -1998.255f, 36.6533f, 27.85f, &uVar1, 0);
			func_275(uParam0, 9, -473.4099f, -1950.213f, 24.7576f, 37.16f, &uVar1, 0);
			func_275(uParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &uVar1, 0);
			func_275(uParam0, 11, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &uVar1, 0);
			func_275(uParam0, 12, -584.929f, -1970.332f, 26.2437f, 55.8826f, &uVar1, 0);
			func_275(uParam0, 13, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &uVar1, 0);
			func_275(uParam0, 14, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &uVar1, 0);
			break;
		
		case 39:
			func_275(uParam0, 4, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &uVar1, 0);
			func_275(uParam0, 9, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &uVar1, 0);
			break;
		
		case 40:
			func_275(uParam0, 3, -270.2197f, -1499.752f, 29.4309f, -13.07f, &uVar1, 0);
			func_275(uParam0, 7, -313.1461f, -1559.589f, 24.2966f, 145.66f, &uVar1, 0);
			func_275(uParam0, 8, -301.9485f, -1550.052f, 25.5595f, 146.95f, &uVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_275(uParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &uVar1, 0);
			func_275(uParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &uVar1, 0);
			func_275(uParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &uVar1, 0);
			break;
		
		case 44:
			func_275(uParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &uVar1, 0);
			func_275(uParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &uVar1, 0);
			func_275(uParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &uVar1, 0);
			break;
		
		case 45:
			func_275(uParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &uVar1, 0);
			func_275(uParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &uVar1, 0);
			func_275(uParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &uVar1, 0);
			func_275(uParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &uVar1, 0);
			func_275(uParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &uVar1, 0);
			func_275(uParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &uVar1, 0);
			func_275(uParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &uVar1, 0);
			func_275(uParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &uVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_275(uParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &uVar1, 0);
			func_275(uParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &uVar1, 0);
			func_275(uParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &uVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_275(uParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &uVar1, 0);
			func_275(uParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &uVar1, 0);
			func_275(uParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &uVar1, 0);
			func_275(uParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &uVar1, 0);
			func_275(uParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &uVar1, 0);
			func_275(uParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &uVar1, 0);
			func_275(uParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &uVar1, 0);
			func_275(uParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &uVar1, 0);
			break;
		
		case 50:
			break;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0x236D8AD7EE179F46(uVar1, iVar0))
		{
			func_193(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_275(var uParam0, int iParam1, struct<3> Param2, float fParam5, var uParam6, bool bParam7)
{
	if (unk_0x7404950238A154C2(uParam0->f_58[iParam1], 0) && !unk_0x5FEB513A4402FD59(uParam0->f_74[iParam1]))
	{
		unk_0xA8F22633ACC22189(uParam0->f_58[iParam1], false);
		unk_0x5CEA5F12775261F2(uParam0->f_58[iParam1], true, 0);
		unk_0xB067093BBAF0A747(uParam0->f_58[iParam1], Param2, 1, 0, 0, 1);
		unk_0xC24172029826A66F(uParam0->f_58[iParam1], fParam5);
		unk_0x5CC9D6711FE01F0D(uParam0->f_58[iParam1]);
		unk_0x4F7552F76F378DB7(uParam0->f_58[iParam1]);
		if (bParam7)
		{
			unk_0x31F198965149F7F4(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			unk_0x3D24414865131CB8(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			unk_0x31F198965149F7F4(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			unk_0x3D24414865131CB8(uParam0->f_58[iParam1], 10f);
		}
		unk_0x6CB332CB31E9FA96(uParam0->f_74[iParam1], 1);
		unk_0xABA9860C0161F3CD(uParam0->f_58[iParam1], true);
		unk_0xABA9860C0161F3CD(uParam0->f_74[iParam1], true);
		unk_0xF3148AAF69AF9CBC(uParam6, iParam1);
	}
}

void func_276(var uParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10)
{
	if (!unk_0x42E36F2D658EB2FF(uParam0->f_8))
	{
		uParam0->f_8 = unk_0xAAC4D4F273757469("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = unk_0x59C061A719024602(Param3, Param6, 2);
	unk_0xC813152833B59518(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	unk_0x176AAFA85E979842(uParam0->f_9, fParam9);
	unk_0xFADF60D9F697DB9C(uParam0->f_9, iParam10);
	unk_0xDD0B0D77CB8995B1(uParam0->f_8, 1);
	unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 1, 0);
}

void func_277(var uParam0)
{
	unk_0x887F4488DA99FD21(joaat("frogger"));
	unk_0x4855165A2773595C(8, "FMIntro");
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_48))
	{
		unk_0x5D00E836B6BE8693(&(uParam0->f_48));
	}
}

int func_278(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (unk_0x236D8AD7EE179F46(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_280();
		if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_92[0]))
		{
			if (unk_0x33ACB874CECA2D4B(joaat("cheetah")))
			{
				uParam0->f_92[0] = unk_0xE00F8DEA9778FC87(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0);
				unk_0x89540DDA99D7346F(uParam0->f_92[0], 0);
				unk_0xDD213338390D43E1(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_92[1]))
		{
			if (unk_0x33ACB874CECA2D4B(joaat("entityxf")))
			{
				uParam0->f_92[1] = unk_0xE00F8DEA9778FC87(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0);
				unk_0x89540DDA99D7346F(uParam0->f_92[1], 0);
				unk_0x5D6F89F6DD9B0781(uParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				unk_0xED1544041E75AE1E(uParam0->f_92[1], 8);
				unk_0xDD213338390D43E1(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_92[2]))
		{
			if (unk_0x33ACB874CECA2D4B(joaat("monroe")))
			{
				uParam0->f_92[2] = unk_0xE00F8DEA9778FC87(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0);
				unk_0x89540DDA99D7346F(uParam0->f_92[2], 0);
				unk_0x5D6F89F6DD9B0781(uParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				unk_0xED1544041E75AE1E(uParam0->f_92[2], 2);
				unk_0xDD213338390D43E1(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_92[3]))
		{
			if (unk_0x33ACB874CECA2D4B(joaat("cheetah")))
			{
				uParam0->f_92[3] = unk_0xE00F8DEA9778FC87(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0);
				unk_0x89540DDA99D7346F(uParam0->f_92[3], 0);
				unk_0x5D6F89F6DD9B0781(uParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				unk_0xED1544041E75AE1E(uParam0->f_92[3], 15);
				unk_0xDD213338390D43E1(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_92[4]))
		{
			if (unk_0x33ACB874CECA2D4B(joaat("feltzer2")))
			{
				uParam0->f_92[4] = unk_0xE00F8DEA9778FC87(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0);
				unk_0x89540DDA99D7346F(uParam0->f_92[4], 0);
				unk_0x5D6F89F6DD9B0781(uParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				unk_0xFD021BAF9614D437(uParam0->f_92[4], 0, 0);
				unk_0x3CA38E5C9A060AAD(uParam0->f_92[4], 0, 156);
				unk_0xF196EBA065B17452(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0x7404950238A154C2(uParam0->f_92[4], 0))
		{
			if (!unk_0x236D8AD7EE179F46(uParam0->f_3, 1))
			{
				if (unk_0xBE23E5C609DF6E79(uParam0->f_92[4]) > 0)
				{
					unk_0xC163DC4217AA2669(uParam0->f_92[4], 22, 1);
					unk_0xDD213338390D43E1(uParam0->f_92[4], 0);
					unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0x33ACB874CECA2D4B(func_225()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_98[iVar1]))
				{
					if (unk_0x86CCCD2FAE9D5E65(uParam0->f_92[iVar1]))
					{
						if (unk_0x7404950238A154C2(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = unk_0x4D135F3066A9BF9C(uParam0->f_92[iVar1], 4, func_225(), -1, 0, false);
							unk_0x1D15D99A10A15334(uParam0->f_98[iVar1], 1);
							unk_0x686D6CDC14C4BA6C(uParam0->f_92[iVar1], 1, 1);
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
			unk_0x887F4488DA99FD21(joaat("cheetah"));
			unk_0x887F4488DA99FD21(joaat("monroe"));
			unk_0x887F4488DA99FD21(joaat("entityxf"));
			unk_0x887F4488DA99FD21(joaat("feltzer2"));
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_279()
{
	func_280();
	if (unk_0x33ACB874CECA2D4B(func_225()))
	{
		if (unk_0x33ACB874CECA2D4B(joaat("cheetah")))
		{
			if (unk_0x33ACB874CECA2D4B(joaat("monroe")))
			{
				if (unk_0x33ACB874CECA2D4B(joaat("entityxf")))
				{
					if (unk_0x33ACB874CECA2D4B(joaat("feltzer2")))
					{
						if (unk_0x498998F33897432E(100, "FM_Intro_uber"))
						{
							if (unk_0x498998F33897432E(101, "FM_Intro_uber"))
							{
								if (unk_0x498998F33897432E(102, "FM_Intro_uber"))
								{
									if (unk_0x498998F33897432E(103, "FM_Intro_uber"))
									{
										if (unk_0x498998F33897432E(104, "FM_Intro_uber"))
										{
											if (unk_0x8E8B546E1A81D27F("mp_intro_seq@"))
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
	unk_0x32A12757CBF48A33(joaat("cheetah"));
	unk_0x32A12757CBF48A33(joaat("monroe"));
	unk_0x32A12757CBF48A33(joaat("entityxf"));
	unk_0x32A12757CBF48A33(joaat("feltzer2"));
	unk_0x32A12757CBF48A33(func_225());
	unk_0x995DCDA796A47049(100, "FM_Intro_uber");
	unk_0x995DCDA796A47049(101, "FM_Intro_uber");
	unk_0x995DCDA796A47049(102, "FM_Intro_uber");
	unk_0x995DCDA796A47049(103, "FM_Intro_uber");
	unk_0x995DCDA796A47049(104, "FM_Intro_uber");
	unk_0x295DC04FC13E025B("mp_intro_seq@");
}

int func_281(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (unk_0x236D8AD7EE179F46(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0x32A12757CBF48A33(joaat("asterope"));
		unk_0x32A12757CBF48A33(joaat("sentinel"));
		unk_0x32A12757CBF48A33(func_225());
		if ((unk_0x33ACB874CECA2D4B(joaat("asterope")) && unk_0x33ACB874CECA2D4B(joaat("sentinel"))) && unk_0x33ACB874CECA2D4B(func_225()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_58[iVar0]))
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
					uParam0->f_58[iVar0] = unk_0xE00F8DEA9778FC87(iVar1, Var2, fVar5, 0, 0);
					unk_0xED1544041E75AE1E(uParam0->f_58[iVar0], iVar0);
					unk_0x210A4A0B257F8433(uParam0->f_58[iVar0], 1);
					unk_0x69AA788B6BA4CB68(uParam0->f_58[iVar0], 2);
					unk_0xA8F22633ACC22189(uParam0->f_58[iVar0], true);
				}
				if (unk_0x86CCCD2FAE9D5E65(uParam0->f_58[iVar0]))
				{
					if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = unk_0x4D135F3066A9BF9C(uParam0->f_58[iVar0], 4, func_225(), -1, 0, false);
						unk_0x210A4A0B257F8433(uParam0->f_74[iVar0], 1);
						unk_0x1D15D99A10A15334(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_58[iVar0]) || !unk_0x86CCCD2FAE9D5E65(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x887F4488DA99FD21(joaat("asterope"));
		unk_0x887F4488DA99FD21(joaat("sentinel"));
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_282(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_207(uParam0, iParam1, 0);
	if (uParam0->f_293)
	{
		if ((uParam0->f_13 + iVar0) + iParam2) <= unk_0x48E480685981C7D4()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_215(uParam0)
	{
		return 1;
	}
	return 0;
}

int func_283(var uParam0)
{
	int iVar0;
	
	if (unk_0x236D8AD7EE179F46(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	unk_0x32A12757CBF48A33(iVar0);
	unk_0x995DCDA796A47049(8, "FMIntro");
	if (unk_0x33ACB874CECA2D4B(iVar0) && unk_0x498998F33897432E(8, "FMIntro"))
	{
		if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_48))
		{
			uParam0->f_48 = unk_0xE00F8DEA9778FC87(iVar0, unk_0xD0CC9D77E98DFF73(8, 0f, "FMIntro"), 0f, 0, 0);
			unk_0xC8F62804B10A6701(uParam0->f_48, 8, "FMIntro", 1);
			unk_0x0039C5B0E3E4993E(uParam0->f_48, 5000f);
			unk_0xD1CC99D6F8459ED6(uParam0->f_48);
			unk_0xABA9860C0161F3CD(uParam0->f_48, false);
			unk_0x887F4488DA99FD21(iVar0);
		}
	}
	if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_48))
	{
		return 0;
	}
	unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 8);
	return 1;
}

void func_284(var uParam0, int iParam1)
{
	if (func_282(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (unk_0x48E480685981C7D4() - func_207(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_285(var uParam0)
{
	uParam0->f_13 = unk_0x48E480685981C7D4();
}

Vector3 func_286(struct<3> Param0)
{
	return (-unk_0x0BADBFA3B172435F(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), (unk_0xD0FFB162F40A139C(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), unk_0x0BADBFA3B172435F(Param0.f_0);
}

int func_287()
{
	return Global_1315825;
}

void func_288()
{
	unk_0x0C17E2FCF3ABF5A3(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	unk_0x0C17E2FCF3ABF5A3(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
}

void func_289()
{
	func_200(0);
	func_199(1);
}

void func_290(bool bParam0, int iParam1)
{
	func_294();
	func_292(1);
	unk_0xB8BB626315D394F5(1);
	unk_0xD1C83BD797927DD5();
	func_232(1, 1, 1, 0);
	func_291();
	func_186(12, 1, -1);
	func_187(0);
	unk_0x1448B1808E373DDE(1, -1);
	unk_0x3BF4F473786B0150(0);
	unk_0xF1BC58601CA4A5C7(0);
	func_292(1);
	func_238(1);
	Global_2422670.f_3127 = 1;
	if (bParam0)
	{
		if (!unk_0xD10899F3A1372292())
		{
			unk_0xB6FBBE4CF8110C93(1, iParam1);
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

void func_292(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_97585)
	{
		unk_0x88BC2C534DB4793B(iVar0, iParam0);
		func_293(iVar0);
		iVar0++;
	}
}

void func_293(int iParam0)
{
	Global_97585[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_97585[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_97585[iParam0 /*28*/].f_4), "", 64);
	Global_97585[iParam0 /*28*/].f_23 = 0;
	Global_97585[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_97585[iParam0 /*28*/].f_27 = 0;
	Global_97585[iParam0 /*28*/].f_20 = 0;
	Global_97585[iParam0 /*28*/].f_22 = 0;
}

void func_294()
{
	Global_1312569 = 1;
	StringCopy(&(Global_1312569.f_1), unk_0x11CA2334E341B424(), 24);
	Global_1312569.f_7 = unk_0x8DAF7A748E41AD46(&(Global_1312569.f_1));
}

int func_295()
{
	if (unk_0x29AFA2493D7C23D0())
	{
		func_297(0);
		unk_0x9040BA4866A98FA4();
		return 1;
	}
	if (func_296() == 3)
	{
		func_297(2);
		unk_0xE960B2354B18D38F(250f);
	}
	if (unk_0xC8CC367673B4E784() >= 250f)
	{
		unk_0xE960B2354B18D38F(250f);
	}
	if (unk_0x69AF04BBDA843765() == 0)
	{
		unk_0xE960B2354B18D38F(250f);
	}
	if (unk_0xC8CC367673B4E784() <= 0f)
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
	if (!unk_0xD994929E13CC1ED5("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x722B1277ED8601B6(iVar1))
			{
				return;
			}
			if (unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == iVar1)
			{
				func_301(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x722B1277ED8601B6(iVar1))
			{
				return;
			}
			if (func_299(iParam0))
			{
				func_301(iParam0, 0);
			}
		}
		unk_0x1409374EEBBAEF54(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_299(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_300(iParam0) };
	if (unk_0x236D8AD7EE179F46(Global_31307[Var0.f_1], Var0.f_0))
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
		unk_0xF3148AAF69AF9CBC(&(Global_31307[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_31307[Var0.f_1]), Var0.f_0);
	}
}

var func_302(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_303(iParam0) };
	*iParam1 = unk_0xA17AB437A96481B6(Var0, Var0.f_3);
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
			Var0 = { Global_1049033[34 /*1485*/].f_146.f_1101 + Vector(1f, 0f, 0f) };
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
		
		case 47:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 48:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 49:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 50:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
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
	return Global_2437722;
}

bool func_306()
{
	return Global_2436986;
}

void func_307(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_311(bParam0);
	}
	func_309(0);
	func_308(65);
}

void func_308(int iParam0)
{
	var uVar0;
	
	uVar0 = func_287();
	Global_1315825 = iParam0;
}

void func_309(int iParam0)
{
	var uVar0;
	
	uVar0 = func_310();
	Global_1315824 = iParam0;
}

var func_310()
{
	return Global_1315824;
}

void func_311(bool bParam0)
{
	int iVar0;
	
	func_313(&Global_17019);
	unk_0x931FEA45DD0271A5(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0xCA7E772B9960318C();
			func_312(0);
			if (unk_0x86CCCD2FAE9D5E65(Global_1318676))
			{
				if (unk_0x46AE53A47E5D03D5(Global_1318676, 0))
				{
					if (!unk_0xE86442941AE40E75(Global_1318676))
					{
						unk_0xD768713E73165208(Global_1318676, 0, 0);
					}
					unk_0xF210D34D7F7152ED(&Global_1318676);
				}
			}
		}
	}
}

void func_312(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2438896 = 0;
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
	if (unk_0x42E36F2D658EB2FF(uParam0->f_9))
	{
		if (unk_0x6B6362BE9BFD1ACA(uParam0->f_9))
		{
			func_314(0);
		}
		unk_0x35B958B469415A23(uParam0->f_9, 0);
	}
	if (!Global_36459)
	{
		unk_0x55FFFE9031CD8ABF(1);
		unk_0x418F5717704BF717(0f);
		unk_0x7FACAFB713BC76BB(0f);
	}
	Global_2404607.f_551 = 0f;
	unk_0xFEBF3DDE5E4DC5C5(0, 0, 0, 1, 0, 0);
}

void func_314(int iParam0)
{
	Global_17097 = iParam0;
}

void func_315(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_320(1);
	}
	else
	{
		func_316(iParam1);
	}
}

void func_316(int iParam0)
{
	func_319();
	if (iParam0 == 0)
	{
		if (unk_0xCBE1E5AA5B87EA4D())
		{
			return;
		}
	}
	if (func_318() == 0 || unk_0xDB10DED5ABC4AA20())
	{
		func_317(1);
		unk_0xFCA015092EDC5CE5(0);
		unk_0xFCA015092EDC5CE5(0);
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

void func_319()
{
	Global_2438035 = 1;
}

void func_320(int iParam0)
{
	if ((func_318() == 1 || unk_0xDB10DED5ABC4AA20()) || iParam0)
	{
		func_317(0);
		unk_0xFCA015092EDC5CE5(1);
		unk_0xFCA015092EDC5CE5(1);
		unk_0xBF63BF865AB24D13();
	}
}

void func_321(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA5EC8D4B74D54C9B();
		unk_0x24E17EE0B44D9A19(-1);
		unk_0x14EDFFB16F85839D(1);
		unk_0x9897700A81F3DE35(1);
		unk_0xCDE668E40D482687(1f);
		unk_0xB740337582B8FF04(3);
		unk_0xAFFB324194E5B6B2(3);
	}
	else
	{
		unk_0x3DD1ED742E99F292(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		unk_0x24E17EE0B44D9A19(0);
		unk_0x14EDFFB16F85839D(0);
		unk_0x9897700A81F3DE35(0);
		unk_0xCDE668E40D482687(0f);
		unk_0xB740337582B8FF04(0);
		unk_0xAFFB324194E5B6B2(0);
	}
}

void func_322(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_289();
	func_199(1);
	func_187(1);
	func_186(12, 1, -1);
	func_329();
	unk_0x094B864326B5FE96(0);
	if (bParam0)
	{
		unk_0x1394BC5E274A21FD(unk_0x1329891157A54C63(), iParam6);
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
	func_323(unk_0x1329891157A54C63(), 0, iVar0);
	if (bParam5)
	{
		if (unk_0xF00D568103F6320B(unk_0x81873881071CD9FE()))
		{
			unk_0x0312925C32B20A0E(unk_0x81873881071CD9FE(), 0);
		}
	}
}

void func_323(int iParam0, bool bParam1, int iParam2)
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
		if (unk_0xC04B59103F71021C())
		{
			unk_0xCFB703A5F752D1C3(0);
		}
	}
	if (!unk_0x1C6DF6AD69BE853E())
	{
		uVar0 = iParam2;
		unk_0x034205BA180B4E43(iParam0, bParam1, uVar0);
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
		if (!func_327())
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
		if (unk_0xA89AE5060232966A(iParam0) && unk_0x7DF7DE8C76D7F346(iParam0))
		{
			uVar25 = unk_0xE495E987CB2BE7EF(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x1C6DF6AD69BE853E())
				{
					unk_0xA62A443049FCB56D(1);
				}
				else
				{
					unk_0xABA9860C0161F3CD(uVar25, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x1C6DF6AD69BE853E() && !bVar18)
					{
						unk_0xA62A443049FCB56D(0);
					}
					Global_2414506[iParam0 /*255*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_326(uVar25) && !unk_0x9274B3297D0AC71D(uVar25))
				{
					if (!bVar21)
					{
						unk_0x5CEA5F12775261F2(uVar25, true, 0);
					}
				}
				if (!unk_0xCB8B9E751036ECB2(uVar25))
				{
					if (!bVar20)
					{
						unk_0xA8F22633ACC22189(uVar25, false);
					}
					unk_0xEA89E72C99125D9C(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xA8F22633ACC22189(iVar25, false);
				}
				unk_0x33B1E568CEF14B0D(iVar25, true);
				unk_0xE5BBA710593FB752(iParam0, 0);
				unk_0xDC96513B84DA05AA(iVar25);
				unk_0x1BFA331FECEC4F68(iVar25, 1);
				func_325();
				func_324();
				if (unk_0x91A2643FAECEA14A())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x2CB3B76C90F08111())
				{
				}
				Global_2414506[iParam0 /*255*/].f_239 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_326(iVar25) && !unk_0x9274B3297D0AC71D(iVar25))
				{
					if (!bVar21)
					{
						unk_0x5CEA5F12775261F2(iVar25, !bVar14, 0);
					}
					if (!unk_0xCB8B9E751036ECB2(iVar25))
					{
						if (!bVar20)
						{
							unk_0xA8F22633ACC22189(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xEA89E72C99125D9C(iVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xE5BBA710593FB752(iParam0, 0);
				}
				else
				{
					unk_0xE5BBA710593FB752(iParam0, 1);
				}
				unk_0x33B1E568CEF14B0D(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x0B392DF1B3286590(iVar25) && !unk_0xE5AB05962FA1FF3F(iVar25, 0))
					{
						unk_0x1E2B48EE3EC55DCF(iVar25);
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
			unk_0x034205BA180B4E43(iParam0, bParam1, iVar26);
		}
	}
}

void func_324()
{
	struct<2> Var0;
	
	Global_2422670.f_690 = 0;
	Global_2422670.f_691 = 0;
	Global_2422670.f_692 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404607.f_1447 = { Var0 };
}

void func_325()
{
	Global_2404607.f_608 = 0;
	Global_2404607.f_1488 = 0;
	Global_2404607.f_481 = 0;
	Global_2414506[unk_0x1329891157A54C63() /*255*/].f_204 = 0;
}

int func_326(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5AB05962FA1FF3F(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xFA1212DE7C455679(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_327()
{
	if (func_328() == 0)
	{
		return 1;
	}
	return 0;
}

int func_328()
{
	return Global_1312466.f_18;
}

void func_329()
{
	Global_17099.f_5 = 1;
}

void func_330(int iParam0)
{
	unk_0x0B895A812F665A52(unk_0xE495E987CB2BE7EF(iParam0), 346, 1);
}

void func_331(var uParam0)
{
	if (!unk_0x236D8AD7EE179F46(uParam0->f_3, 12))
	{
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1699194)
			{
				Global_1699194 = 1;
				Global_1699195 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (unk_0xCC8E3BAC62A29F42(Global_1699193))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if ((unk_0x45EDE682E0EE8FDF() == 9 || unk_0x45EDE682E0EE8FDF() == 10) || unk_0x45EDE682E0EE8FDF() == 8)
									{
										func_336("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_336("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_335("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("artdir", "AARON GARBUT", 210f, "|", 1);
									func_333("artdir", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 33, -3390))
							{
								func_332("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 33, -2940))
								{
									func_336("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_335("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_334("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_333("techdir", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 33, -450))
							{
								func_332("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_336("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_335("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_334("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_333("assartdir", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_332("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if ((unk_0x45EDE682E0EE8FDF() == 9 || unk_0x45EDE682E0EE8FDF() == 10) || unk_0x45EDE682E0EE8FDF() == 8)
									{
										func_336("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_336("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_335("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_334("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_333("asstecdir", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 36, -4740))
							{
								func_332("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 36, -3810))
								{
									func_336("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_335("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_333("leadprog", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 36, -600))
							{
								func_332("leadprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if ((unk_0x45EDE682E0EE8FDF() == 9 || unk_0x45EDE682E0EE8FDF() == 10) || unk_0x45EDE682E0EE8FDF() == 8)
									{
										func_336("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_336("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_335("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_334("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_333("senprog", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 37, -1350))
							{
								func_332("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_336("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_335("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_334("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_333("prog", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 38, -4320))
							{
								func_332("prog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 38, -3240))
								{
									if ((unk_0x45EDE682E0EE8FDF() == 9 || unk_0x45EDE682E0EE8FDF() == 10) || unk_0x45EDE682E0EE8FDF() == 8)
									{
										func_336("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_336("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_335("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_334("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_333("socclub", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 38, -870))
							{
								func_332("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_336("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_335("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_333("audio", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 39, -1620))
							{
								func_332("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_336("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_335("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_334("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_333("scrlead", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 40, -1470))
							{
								func_332("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_336("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_335("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_334("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_333("script1", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 41, -1200))
							{
								func_332("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_336("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_335("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_334("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_333("script2", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 42, -1320))
							{
								func_332("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_336("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_335("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_335("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_333("visdes", 0.05f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 43, -1320))
							{
								func_332("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_336("uides", 40f, 20f, "right", 0f, 0.3f);
									func_335("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_334("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_333("uides", 0f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 45, -1650))
							{
								func_332("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_336("concre", 0f, 20f, "left", 0f, 0.3f);
									func_335("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_334("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_334("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_333("concre", 0f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 46, -1950))
							{
								func_332("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_336("devass", 0f, 400f, "right", 0f, 0f);
									func_335("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_334("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_333("devass", 0f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_332("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_336("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_335("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_335("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_333("qasup", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 48, -1320))
							{
								func_332("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_336("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_335("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_334("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_333("senta", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 49, -5070))
							{
								func_332("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 49, -3750))
								{
									func_336("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_335("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_334("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_333("asspro", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 49, -720))
							{
								func_332("asspro", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (unk_0x521385D8214D27C4() && unk_0x9317F2B481D935D4() > 2468)
									{
										func_336("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_335("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_334("animdir", "ROB NELSON", 200f, "|", 1);
										func_333("animdir", 0.16f);
										unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_336("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_335("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_334("animdir", "ROB NELSON", 90f, "|", 1);
									func_333("animdir", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (unk_0x521385D8214D27C4() && unk_0x9317F2B481D935D4() > 6123)
								{
									func_332("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x521385D8214D27C4() && unk_0x9317F2B481D935D4() > 1898)
							{
								func_332("animdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (unk_0x521385D8214D27C4() && unk_0x1F060840C0363DAC())
									{
										func_336("producer", 65f, 55f, "right", 0f, 0f);
										func_335("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_334("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_333("producer", 0f);
										unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x521385D8214D27C4() && unk_0x9317F2B481D935D4() > 2452)
								{
									func_336("producer", 0f, 100f, "left", 0.3f, 0f);
									func_335("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_333("producer", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (unk_0x521385D8214D27C4() && unk_0x1F060840C0363DAC())
								{
									func_332("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x521385D8214D27C4() && unk_0x1F060840C0363DAC())
							{
								func_332("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (unk_0x521385D8214D27C4() && unk_0x9317F2B481D935D4() > 13265)
									{
										func_336("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_335("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_334("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_333("vpcre", 0.16f);
										unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x521385D8214D27C4() && unk_0x9317F2B481D935D4() > 6921)
								{
									func_336("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_335("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_334("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_333("vpcre", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (unk_0x521385D8214D27C4() && unk_0x9317F2B481D935D4() > 16955)
								{
									func_332("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x521385D8214D27C4() && unk_0x9317F2B481D935D4() > 10513)
							{
								func_332("vpcre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!unk_0x236D8AD7EE179F46(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (unk_0x521385D8214D27C4() && unk_0x9317F2B481D935D4() > 18077)
									{
										Global_1699195 = 0;
										func_336("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_335("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_334("execpro", "SAM HOUSER", 165f, "|", 1);
										func_333("execpro", 0.16f);
										unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x521385D8214D27C4() && unk_0x9317F2B481D935D4() > 12358)
								{
									Global_1699195 = 0;
									func_336("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_335("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_334("execpro", "SAM HOUSER", 190f, "|", 1);
									func_333("execpro", 0.16f);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (unk_0x521385D8214D27C4() && unk_0x9317F2B481D935D4() > 21785)
								{
									func_332("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x521385D8214D27C4() && unk_0x9317F2B481D935D4() > 15333)
							{
								func_332("execpro", 0.16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1699195)
				{
					unk_0x88188CE25DF2572C(Global_1699193, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_332(char* sParam0, float fParam1)
{
	unk_0x21ED0FC9B5CC748B(Global_1699193, "HIDE");
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(sParam0);
	unk_0xC3822F70D0E7940B();
	unk_0x518198639630AE08(fParam1);
	unk_0xBA9BA6181F2B6111();
}

void func_333(char* sParam0, float fParam1)
{
	unk_0x21ED0FC9B5CC748B(Global_1699193, "SHOW_CREDIT_BLOCK");
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(sParam0);
	unk_0xC3822F70D0E7940B();
	unk_0x518198639630AE08(fParam1);
	unk_0xBA9BA6181F2B6111();
}

void func_334(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0x21ED0FC9B5CC748B(Global_1699193, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(sParam0);
	unk_0xC3822F70D0E7940B();
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(sParam1);
	unk_0xC3822F70D0E7940B();
	unk_0x518198639630AE08(fParam2);
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(sParam3);
	unk_0xC3822F70D0E7940B();
	unk_0x75A2A42ADE12FD0E(iParam4);
	unk_0xBA9BA6181F2B6111();
}

void func_335(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0x21ED0FC9B5CC748B(Global_1699193, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(sParam0);
	unk_0xC3822F70D0E7940B();
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(sParam1);
	unk_0xC3822F70D0E7940B();
	unk_0x518198639630AE08(fParam2);
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(sParam3);
	unk_0xC3822F70D0E7940B();
	unk_0x75A2A42ADE12FD0E(iParam4);
	unk_0xBA9BA6181F2B6111();
}

void func_336(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0x21ED0FC9B5CC748B(Global_1699193, "SETUP_CREDIT_BLOCK");
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(sParam0);
	unk_0xC3822F70D0E7940B();
	unk_0x518198639630AE08(fParam1);
	unk_0x518198639630AE08(fParam2);
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(sParam3);
	unk_0xC3822F70D0E7940B();
	unk_0x518198639630AE08(fParam4);
	unk_0x518198639630AE08(fParam5);
	unk_0xBA9BA6181F2B6111();
}

void func_337(var uParam0)
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_34))
		{
			if (unk_0x7404950238A154C2(uParam0->f_34, 0))
			{
				unk_0xFCCBFA61E2AB6DCA(unk_0xB07F27EC3B05E4EA(uParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_338()
{
	var uVar0;
	
	if (unk_0x335F574AD77E59CE(Local_561.f_3))
	{
		switch (Local_561.f_2)
		{
			case 2:
				if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_4, 1))
				{
					if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
					{
						if (func_353(Local_561.f_3))
						{
							if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
							{
								if (unk_0xFA1212DE7C455679(unk_0x81873881071CD9FE(), -1794415470) != 1 && unk_0xFA1212DE7C455679(unk_0x81873881071CD9FE(), -1794415470) != 0)
								{
									unk_0x3C3A95141D01773E(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_561.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_4, 2))
							{
								if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_561.f_3)))
								{
									unk_0xF3148AAF69AF9CBC(&(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_4), 2);
									func_352(1);
								}
								else
								{
									unk_0xA450601E968044DB(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_353(Local_561.f_3))
				{
					if (!func_351(Local_561.f_4))
					{
						if (unk_0x236D8AD7EE179F46(uLocal_744, 26))
						{
							if (unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_561.f_4), -1273030092) != 1 && unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_561.f_4), -1273030092) != 0)
							{
								unk_0x73FD8D43B37C0615(unk_0xCFD52BB67CC0A98F(Local_561.f_4), unk_0x1D1DAF7F94D5FE77(Local_561.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!unk_0x236D8AD7EE179F46(uLocal_744, 27))
				{
					if (!unk_0x29AFA2493D7C23D0() && !unk_0xC584A413BCB2AA39())
					{
						if (!func_107())
						{
							if (!unk_0xDB10DED5ABC4AA20())
							{
								unk_0x3B283FEBA87FFBEB(800);
							}
						}
					}
					else if (unk_0x29AFA2493D7C23D0())
					{
						unk_0xF3148AAF69AF9CBC(&uLocal_744, 27);
					}
				}
				else if (!unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 4))
				{
					if (func_345(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0))
					{
						unk_0xA450601E968044DB(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0);
						unk_0xDE7CED04760CFED9();
						unk_0x72280C402F1D5F9D();
						unk_0x270066FDBAF3A458(0);
						unk_0xEAB527164AD92BF3(0, 1065353216);
						unk_0xF3148AAF69AF9CBC(&(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_351(Local_561.f_4))
				{
					if (!unk_0x236D8AD7EE179F46(uLocal_744, 29))
					{
						if (func_353(Local_561.f_3))
						{
							unk_0xB5583B79BBC50AC9(unk_0xCFD52BB67CC0A98F(Local_561.f_4), unk_0x1D1DAF7F94D5FE77(Local_561.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							unk_0xAE2B1C30F8A0B67C(800);
							unk_0xF3148AAF69AF9CBC(&uLocal_744, 29);
						}
					}
					else if (!unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 5))
					{
						if (unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_561.f_4), -272084098) == 7)
						{
							unk_0xF3148AAF69AF9CBC(&(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if (unk_0xFA1212DE7C455679(unk_0x81873881071CD9FE(), -828834893) != 1 && unk_0xFA1212DE7C455679(unk_0x81873881071CD9FE(), -828834893) != 0)
						{
							unk_0x98046F3D16B9CF76(unk_0x81873881071CD9FE(), 0, 0);
						}
					}
					else if (!unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 6))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3), 6);
						unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_734), 4);
						unk_0xC69E84EBBD7166E6(&(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_4), 2);
						func_323(unk_0x1329891157A54C63(), 1, 0);
						func_344();
						func_352(0);
						func_32("HLP_TAXI", -1);
						if (func_50())
						{
							func_43(-1834046564, 200, &uVar0, 0, 0);
						}
						else
						{
							func_341(-200, 0);
							unk_0x8362417AFA5DFE8C(200, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_351(Local_561.f_4))
				{
					if (func_353(Local_561.f_3))
					{
						if (unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_561.f_4), -258271821) != 1 && unk_0xFA1212DE7C455679(unk_0xCFD52BB67CC0A98F(Local_561.f_4), -258271821) != 0)
						{
							unk_0x6CB332CB31E9FA96(unk_0xCFD52BB67CC0A98F(Local_561.f_4), 1);
							unk_0x2D7E8CD6F4101CAB(unk_0xCFD52BB67CC0A98F(Local_561.f_4), unk_0x1D1DAF7F94D5FE77(Local_561.f_3), 12f, 786599);
							func_340(&(Local_561.f_3));
							func_340(&(Local_561.f_4));
						}
					}
				}
				break;
		}
		if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_4, 1))
		{
			unk_0xCF95B143971C4F42(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!unk_0x236D8AD7EE179F46(uLocal_744, 26))
			{
				unk_0xF3148AAF69AF9CBC(&uLocal_744, 26);
			}
		}
		if (!unk_0x236D8AD7EE179F46(uLocal_744, 28))
		{
			if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_4, 2))
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
						unk_0xF3148AAF69AF9CBC(&uLocal_744, 28);
					}
				}
			}
		}
		if (!unk_0x236D8AD7EE179F46(uLocal_744, 30))
		{
			if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 5))
			{
				if (func_159(&uLocal_568, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					unk_0xF3148AAF69AF9CBC(&uLocal_744, 30);
				}
			}
		}
		if (!unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 6))
		{
			func_339();
		}
		if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_4, 2))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
				{
				}
			}
		}
	}
}

void func_339()
{
	Global_2459480.f_258 = 1;
}

void func_340(var uParam0)
{
	var uVar0;
	
	if (unk_0x335F574AD77E59CE(*uParam0))
	{
		uVar0 = unk_0x262EBD0AA0ED1D6D(*uParam0);
		unk_0x3C6E68D2D7F41A39(&uVar0);
	}
}

void func_341(int iParam0, int iParam1)
{
	func_343(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_342(iParam0, 0);
	}
}

void func_342(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_343(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_4 = iVar1;
	Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_3 = (Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_342(iVar1, 0);
	}
}

void func_344()
{
	unk_0xF333CEFDC2923B24(0, 22, 1);
	unk_0xF333CEFDC2923B24(0, 36, 1);
	unk_0xF333CEFDC2923B24(0, 32, 1);
	unk_0xF333CEFDC2923B24(0, 34, 1);
	unk_0xF333CEFDC2923B24(0, 35, 1);
	unk_0xF333CEFDC2923B24(0, 33, 1);
	unk_0xF333CEFDC2923B24(0, 31, 1);
	unk_0xF333CEFDC2923B24(0, 30, 1);
	unk_0xF333CEFDC2923B24(0, 44, 1);
	unk_0xF333CEFDC2923B24(0, 141, 1);
	unk_0xF333CEFDC2923B24(0, 140, 1);
	unk_0xF333CEFDC2923B24(0, 263, 1);
	unk_0xF333CEFDC2923B24(0, 264, 1);
	unk_0xF333CEFDC2923B24(0, 143, 1);
	unk_0xF333CEFDC2923B24(0, 24, 1);
	unk_0xF333CEFDC2923B24(0, 257, 1);
	unk_0xF333CEFDC2923B24(0, 263, 1);
	unk_0xF333CEFDC2923B24(0, 264, 1);
	unk_0xF333CEFDC2923B24(0, 143, 1);
	unk_0xF333CEFDC2923B24(0, 262, 1);
	unk_0xF333CEFDC2923B24(0, 261, 1);
	unk_0xF333CEFDC2923B24(0, 37, 1);
	unk_0xF333CEFDC2923B24(0, 25, 1);
	unk_0xF333CEFDC2923B24(0, 26, 1);
}

int func_345(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11)
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	
	Global_17099.f_6 = 1;
	if (unk_0xF33755A765033580() && !bParam9)
	{
		if (Global_2422670.f_690)
		{
			func_350(0, bParam9);
		}
		return 0;
	}
	if ((unk_0x2CB3B76C90F08111() && !bParam9) && !unk_0x91A2643FAECEA14A())
	{
		return 0;
	}
	if (!func_349())
	{
		if (func_348(unk_0x1329891157A54C63(), 1))
		{
			if (((bParam9 && func_12(unk_0x1329891157A54C63(), 1, 0)) && unk_0xF33755A765033580()) && Global_2414506[unk_0x1329891157A54C63() /*255*/].f_219 == 1)
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
	if (!Global_2422670.f_690 && !bParam11)
	{
		Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
		if ((unk_0xB9AA84B14E04BC20((Var0.f_0 - Param0.f_0)) < 0.2f && unk_0xB9AA84B14E04BC20((Var0.f_1 - Param0.f_1)) < 0.2f) && unk_0xB9AA84B14E04BC20((Var0.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar3 = (fParam3 - unk_0x3306AAAFE3B25098(unk_0x81873881071CD9FE()));
			if (fVar3 > 180f)
			{
				fVar3 = (fVar3 + -360f);
			}
			if (fVar3 < -180f)
			{
				fVar3 = (fVar3 + 360f);
			}
			if (unk_0xB9AA84B14E04BC20(fVar3) < 1f)
			{
				Global_2422670.f_690 = 0;
				Global_2422670.f_691 = 0;
				if (unk_0x91A2643FAECEA14A())
				{
					unk_0xE9F8004202C6A851();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2422670.f_692 || !Param0.f_1 == Global_2422670.f_692.f_1) || !Param0.f_2 == Global_2422670.f_692.f_2) || !fParam3 == Global_2422670.f_695)
	{
		if (Global_2422670.f_690 == 1)
		{
			if (unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Global_2422670.f_696) < func_347())
			{
				return 0;
			}
			unk_0xE9F8004202C6A851();
			Global_2422670.f_691 = 1;
		}
		else
		{
			Global_2422670.f_691 = 0;
		}
		Global_2422670.f_692 = { Param0 };
		Global_2422670.f_695 = fParam3;
		Global_2422670.f_690 = 0;
	}
	if (!Global_2422670.f_690 && !unk_0x91A2643FAECEA14A())
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
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (!unk_0x236D8AD7EE179F46(Global_90861.f_1279[44], 16))
			{
				func_346();
			}
			if (!unk_0x9FDFD64B505A1C77(unk_0x81873881071CD9FE(), &(Global_2404607.f_470)))
			{
				Global_2404607.f_470 = 0;
			}
		}
		if (bParam9)
		{
			if (bParam4)
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					uVar4 = unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE());
					unk_0xB067093BBAF0A747(uVar4, Param0, 0, 1, 1, 1);
					unk_0xC24172029826A66F(uVar4, fParam3);
				}
				else
				{
					unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Param0, 0, 0, 0, 1);
					unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), fParam3);
				}
			}
			else
			{
				unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Param0, 0, 0, 0, 1);
				unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), fParam3);
			}
			func_350(bParam6, bParam9);
			return 1;
		}
		else
		{
			unk_0x3E52122FBF3FC64C();
			unk_0x2ED8088A589F1EAF(unk_0x1329891157A54C63(), Param0, fParam3, bParam4, iParam10, 0);
		}
		Global_2422670.f_696 = unk_0xD74C7D8D2E5E43D2();
		Global_2422670.f_690 = 1;
	}
	if (Global_2422670.f_690)
	{
		Global_17099.f_6 = 1;
		Global_2422670.f_696 = unk_0xD74C7D8D2E5E43D2();
		if (bParam9)
		{
			if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Global_2422670.f_692) < 2f)
			{
				if (unk_0x91A2643FAECEA14A())
				{
					unk_0xE9F8004202C6A851();
				}
				func_350(bParam6, bParam9);
				return 1;
			}
		}
		if (!unk_0x91A2643FAECEA14A())
		{
			func_350(bParam6, bParam9);
			return 1;
		}
	}
	return 0;
}

void func_346()
{
	Global_2404607.f_1446 = unk_0x2595B211F055F9FB();
}

int func_347()
{
	if (unk_0x29AFA2493D7C23D0())
	{
		return 10000;
	}
	return 1000;
}

int func_348(int iParam0, bool bParam1)
{
	if (Global_2414506[iParam0 /*255*/].f_219 == 99)
	{
		return 0;
	}
	if (bParam1)
	{
		if (Global_2414506[iParam0 /*255*/].f_219 == 11)
		{
			return 0;
		}
	}
	return 1;
}

bool func_349()
{
	return Global_1315867;
}

void func_350(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0xEAB527164AD92BF3(0f, 1065353216);
		unk_0x270066FDBAF3A458(0f);
	}
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x59DEC64833EB09EA(unk_0x81873881071CD9FE());
	}
	if (!bParam1)
	{
		unk_0x3E52122FBF3FC64C();
	}
	if (unk_0x91A2643FAECEA14A())
	{
		unk_0xE9F8004202C6A851();
	}
	func_324();
}

int func_351(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return unk_0x5FEB513A4402FD59(unk_0xCFD52BB67CC0A98F(uParam0));
	}
	return 1;
}

void func_352(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 15))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 15);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 15))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 15);
	}
}

int func_353(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return !func_354(unk_0x1D1DAF7F94D5FE77(uParam0));
	}
	return 0;
}

int func_354(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (unk_0x930F8FBB8E9537CC(uParam0))
		{
			return 1;
		}
		else if (!unk_0x7404950238A154C2(uParam0, 0))
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

void func_355(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 8, 0))
		{
			func_58(iParam0, 8, 0);
			func_356(iParam0);
		}
	}
	else if (func_23(iParam0, 8, 0))
	{
		func_56(iParam0, 8, 0);
		func_356(iParam0);
	}
}

void func_356(int iParam0)
{
	Global_90861.f_156[iParam0] = 1;
	Global_90861.f_155 = 1;
}

void func_357(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_90861.f_9[iParam0] = 1;
	}
	else
	{
		Global_90861.f_9[iParam0] = 0;
	}
}

void func_358(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_90861.f_8 = 1;
	}
	else
	{
		Global_90861.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_356(iVar0);
		iVar0++;
	}
}

void func_359(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

int func_360()
{
	return Local_561.f_0;
}

int func_361()
{
	return 1;
}

int func_362(int iParam0)
{
	return Local_733[iParam0 /*5*/];
}

int func_363(int iParam0)
{
	return Local_733[iParam0 /*5*/].f_2;
}

int func_364(bool bParam0)
{
	if (func_366())
	{
		if (bParam0)
		{
			if (!Global_1573817 && !func_365(unk_0x1329891157A54C63(), 2))
			{
				unk_0x45D2AAD93E9AC4B3("MinigameTransitionIn", 0, 1);
				func_315(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_365(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

bool func_366()
{
	return Global_2422670.f_2;
}

void func_367(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (bLocal_750)
		{
			if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 2))
			{
				if (!unk_0x236D8AD7EE179F46(uLocal_744, 31))
				{
					func_30(119, 1, -1, 1);
					func_30(115, 1, -1, 1);
				}
				func_633(1);
				bVar0 = true;
			}
		}
		else if (unk_0x236D8AD7EE179F46(Local_733[unk_0x519AAFF77CC141DF() /*5*/].f_3, 1))
		{
			if (!unk_0x236D8AD7EE179F46(uLocal_744, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_197(&Local_87, 0, bParam0);
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (Global_2422670.f_3127)
		{
			func_629(0, 1);
		}
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_352(0);
	}
	unk_0xE91F714E010C7127(Local_87.f_122, 0);
	unk_0xC3A1174645E71AB9(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	unk_0xC3A1174645E71AB9(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_734), 4);
	func_85(0);
	func_54(0);
	func_628();
	func_627(iLocal_86, 0);
	func_178(&(Global_2422670.f_3376));
	Global_2422670.f_3374 = 0;
	Global_2422670.f_3373 = 0;
	Global_2422670.f_3375 = 0;
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 244, 1);
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 243, 1);
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 242, 1);
	}
	if (bVar0)
	{
		func_370(0, 0, 0, 0);
	}
	else
	{
		unk_0xB8BB626315D394F5(1);
		func_370(0, 0, 3, 1);
	}
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_734), 0);
	func_358(0);
	func_357(4, 0);
	func_357(1, 0);
	func_357(0, 0);
	func_357(2, 0);
	func_357(3, 0);
	func_355(iLocal_86, 0);
	func_344();
	func_33();
	if (unk_0xFBACB273AA628CC5(Global_90861.f_202[iLocal_86]))
	{
		unk_0x116FDB7E27590C7F(Global_90861.f_202[iLocal_86], 0);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_747))
	{
		unk_0x0A8175F24237A3D4(&uLocal_747);
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_369(0);
		func_181(0);
	}
	func_368(Local_561.f_5);
}

void func_368(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Param0.f_0)) >= 1000)
		{
			unk_0xE362BE8561822D4E();
		}
	}
	unk_0xC23A229F78DAD92A();
}

void func_369(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 5);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 5);
	}
}

void func_370(int iParam0, int iParam1, int iParam2, bool bParam3)
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
	
	iVar0 = unk_0x1329891157A54C63();
	iVar1 = Global_1585045[iVar0 /*400*/];
	func_626();
	func_622();
	unk_0xDA8F3E8E900877F7(0);
	Global_975520 = 0;
	unk_0xC79150CDEEC8CC5D(0);
	Global_786481 = 0;
	Global_786481.f_1 = 0;
	Global_1573683 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	func_621(0);
	Global_1573672 = 0;
	Global_1573671 = 0;
	Global_1573693 = 0;
	Global_1573835 = 0;
	Global_1573841 = 0;
	Global_1573416 = 0;
	Global_1574310 = 1;
	Global_1573808 = 0;
	Global_1573684 = -1;
	func_620();
	func_619(0);
	unk_0xC69E84EBBD7166E6(&(Global_2359301.f_1), 5);
	func_618();
	func_617();
	func_616();
	func_615();
	func_614();
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_613();
	}
	if (func_612())
	{
		func_611();
		func_610(1, 1, 1);
		func_609();
		func_608();
		if (iVar0 != -1)
		{
			Global_1605110[iVar0 /*33*/].f_22 = 0;
			Global_1605110[iVar0 /*33*/].f_22.f_1 = 0;
			Global_1605110[iVar0 /*33*/].f_22.f_5 = 0;
		}
	}
	func_607();
	if (Global_1607808 != 6)
	{
		if (func_12(unk_0x1329891157A54C63(), 1, 1))
		{
			if (unk_0x77B5315758411237(unk_0x81873881071CD9FE()))
			{
				unk_0x78693D09089780B5(unk_0x81873881071CD9FE(), 1);
			}
		}
	}
	Global_1572908 = 0;
	if (Global_1690163.f_9 == 4)
	{
		if (func_606(unk_0x1329891157A54C63()) || func_605(unk_0x1329891157A54C63()))
		{
			Global_1572908 = 1;
		}
	}
	func_603();
	if (func_602())
	{
		func_601();
	}
	func_600();
	Global_1607808.f_64062 = 0;
	Global_1690123.f_4 = 0;
	unk_0x838C98F6FDEDD8AB(unk_0x1329891157A54C63(), 1);
	StringCopy(&(Global_1607808.f_63413), "", 32);
	unk_0x10BFA51B8BA62476();
	unk_0xC9A352663D97EFC3(18);
	if (bParam3 && !func_599())
	{
		unk_0xD61D5795530D0627();
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1604959[iVar3] = 0;
		Global_1604926[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_2429626.f_5296), 3);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_2429626.f_5296), 3);
	}
	if (iVar0 != -1 && Global_2428865.f_545.f_10 != 0)
	{
		Global_1605110[unk_0x1329891157A54C63() /*33*/].f_22.f_1 = Global_2428865.f_545.f_10;
	}
	if (func_366() || (iVar0 != -1 && Global_1585045[iVar0 /*400*/].f_317))
	{
		func_598();
		func_597(1, 1);
		func_610(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1605110[iVar0 /*33*/].f_22 = 0;
			Global_1605110[iVar0 /*33*/].f_22.f_1 = 0;
			Global_1605110[iVar0 /*33*/].f_22.f_5 = 0;
		}
		func_596(1);
		if (func_595())
		{
			func_594();
		}
		if (!func_15(unk_0x1329891157A54C63()))
		{
			func_592(4);
		}
		func_609();
		func_591(0);
		func_590();
		Global_1574303 = 0;
	}
	if (!func_589())
	{
		func_588();
		if (func_587())
		{
			if (func_586())
			{
				func_598();
			}
		}
		func_596(1);
		if (!func_585())
		{
			Global_2429626.f_5615 = 0;
			Global_2429626.f_5616 = 0;
			Global_2429626.f_5614 = 0;
			Global_2429626.f_5613 = 0;
		}
	}
	else
	{
		func_584(unk_0x1329891157A54C63(), 0);
	}
	func_583((Global_1690163.f_9 != 4 && !func_589()));
	if (func_585())
	{
		Global_2429626.f_5704 = 1;
	}
	else
	{
		Global_2429626.f_5704 = 0;
	}
	if (!func_582())
	{
		Global_1690188.f_1473 = 0;
	}
	if (!func_589() && !func_582())
	{
		func_597(1, Global_1690163.f_9 != 4);
		func_610(1, 1, 0);
		func_581(0);
		func_580();
		Global_1574305 = 0;
		if (iVar0 != -1)
		{
			Global_1605110[iVar0 /*33*/].f_22 = 0;
			Global_1605110[iVar0 /*33*/].f_22.f_1 = 0;
			Global_1605110[iVar0 /*33*/].f_22.f_5 = 0;
		}
	}
	func_577(1, -1);
	if (func_576())
	{
		func_575();
	}
	if (unk_0x726DA50057167075())
	{
		unk_0x91B123F8522E00DC();
	}
	if (!func_599() && !func_589())
	{
		func_571();
	}
	Global_1607808.f_64058 = 0;
	func_570();
	Global_1573665 = -1;
	Global_1605002 = -1;
	Global_1604996 = -1;
	Global_1604998 = -1;
	Global_1573670 = 0;
	Global_1604997 = 0;
	Global_1573819 = 0;
	Global_1573811 = 0;
	Global_1605003 = 0;
	func_569(0);
	func_568();
	Global_1585045[iVar0 /*400*/].f_317 = 0;
	Global_1604994 = 0f;
	Global_1604995 = 0f;
	Global_1573820 = 0;
	Global_1573821 = -1;
	Global_975762 = 0;
	Global_1573809 = 0;
	Global_1573417 = 0;
	func_567();
	unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
	unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
	func_566(1);
	if (func_565())
	{
		func_564();
	}
	if (func_563())
	{
		if (func_561(unk_0x1329891157A54C63()))
		{
			if (unk_0x8C283330B889AF48() < 2)
			{
				func_560();
				func_559(1);
			}
			else
			{
				func_558();
			}
			if (Global_1690163.f_9 != -1)
			{
				func_557();
			}
		}
		else if (Global_1585045[unk_0x1329891157A54C63() /*400*/] == 0)
		{
			if (Global_1690163.f_9 != -1)
			{
				func_557();
			}
		}
	}
	bVar4 = func_16(iVar0);
	Global_1585045[iVar0 /*400*/].f_179 = 0;
	if (bVar4 && !func_582())
	{
		func_556();
	}
	if (!bVar4)
	{
		func_555(0);
	}
	if ((func_554() != 36 && func_554() != 35) && !func_553())
	{
		Global_1572864 = { 0f, 0f, 0f };
	}
	func_552();
	func_551();
	func_559(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1690163.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_550())
		{
			func_549(0, iVar6);
		}
	}
	unk_0x38AC13D4F8FC6C58(0);
	if (unk_0x1C6DF6AD69BE853E())
	{
		switch (Global_1690163.f_9)
		{
			case 1:
				if (!func_548() && func_545(0) > 0)
				{
					Global_1708182[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					func_543();
					func_542();
				}
				break;
			
			case 6:
				Global_1574303 = 0;
				if (!bVar4)
				{
					func_543();
				}
				func_542();
				Global_1690163 = 0;
				Global_1690163.f_22 = { 0f, 0f, 0f };
				Global_1585045[unk_0x1329891157A54C63() /*400*/].f_12 = 0;
				StringCopy(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_213), "", 24);
				Global_2414506[unk_0x1329891157A54C63() /*255*/].f_210 = { 0f, 0f, 0f };
				break;
			
			case 2:
				func_541(0);
				if (!func_540())
				{
					func_539(Global_1690163.f_16);
				}
				iVar5 = Global_1585045[iVar0 /*400*/].f_11;
				if (iVar5 != func_123())
				{
					if (unk_0xA89AE5060232966A(iVar5))
					{
						Global_2429626.f_5297 = { func_71(iVar5) };
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
				if ((iVar7 && func_540()) && unk_0xD49F8CA46CF1D5B3() == 1)
				{
					Global_2429626.f_5297 = { func_538() };
				}
				if ((Global_1607808.f_22 > 1 && !func_535(Global_1607808.f_63421)) && !func_534(Global_1607808.f_63421))
				{
					func_533(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_85.f_28);
				}
				else
				{
					func_532();
				}
				break;
			
			case 3:
				func_541(0);
				iVar2 = 1;
				func_531();
				iVar5 = Global_1585045[iVar0 /*400*/].f_11;
				if (iVar5 != func_123())
				{
					if (unk_0xA89AE5060232966A(iVar5))
					{
						Global_2429626.f_5297 = { func_71(iVar5) };
					}
				}
				if ((Global_1607808.f_22 > 1 && !func_535(Global_1607808.f_63421)) && !func_534(Global_1607808.f_63421))
				{
					func_533(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_85.f_28);
				}
				else
				{
					func_532();
				}
				break;
			
			case 4:
				func_541(0);
				iVar2 = 1;
				if (func_530())
				{
					func_529();
				}
				else
				{
					Global_2429626.f_5615 = 0;
					Global_2429626.f_5616 = 0;
					Global_2429626.f_5614 = 0;
					Global_2429626.f_5613 = 0;
				}
				if (func_606(unk_0x1329891157A54C63()) || func_605(unk_0x1329891157A54C63()))
				{
					Global_786435.f_34++;
				}
				if (!unk_0x236D8AD7EE179F46(Global_1607808.f_12, 22))
				{
					if (!unk_0x236D8AD7EE179F46(Global_1607808.f_12, 15))
					{
						func_528(Global_1607808.f_64034);
					}
					else
					{
						func_527(Global_1607808.f_78902, Global_1607808.f_78903);
					}
					if (Global_1690163.f_13 > -1)
					{
						unk_0x2D8AA12A484054EB(Global_1690163.f_13, Global_1690163.f_14, 0);
					}
					else if (func_526() > -1)
					{
						func_525(func_526(), 0);
					}
				}
				if (func_524())
				{
					Var8 = { func_523() };
					func_522(Var8);
					if (func_521() != -1)
					{
						Global_1585045[unk_0x1329891157A54C63() /*400*/].f_85.f_28 = func_521();
					}
					func_520();
					func_519();
				}
				else
				{
					func_531();
				}
				break;
			
			case 5:
				func_541(0);
				iVar2 = 1;
				func_531();
				break;
			
			case 8:
				if (!func_540())
				{
					func_539(Global_1690163.f_16);
				}
				break;
			
			case 9:
				func_541(0);
				iVar2 = 1;
				func_531();
				break;
			
			case 10:
				func_502(10, 0f, 0f, 0f, Var14);
				func_501();
				break;
		}
	}
	else
	{
		Global_1574303 = 0;
	}
	if (iVar2 || func_605(unk_0x1329891157A54C63()))
	{
		if ((func_500(unk_0x1329891157A54C63()) || func_606(unk_0x1329891157A54C63())) || func_605(unk_0x1329891157A54C63()))
		{
			if (Global_1699174 > 0)
			{
				Global_2429626.f_1.f_2824.f_13 = Global_1699174;
				Global_2429626.f_1.f_2824 = { Global_1699174.f_1 };
			}
		}
		else
		{
			func_499();
		}
	}
	Global_2429626.f_1.f_841 = 0;
	unk_0xC69E84EBBD7166E6(&Global_1573421, 0);
	func_498(0);
	Global_1573675 = 0;
	Global_1573804 = -1;
	Global_1604925 = 0;
	Global_1312436 = 0;
	Global_1690163.f_1 = 0;
	Global_1690163.f_2 = 0;
	if (func_497() == 0)
	{
		if (Global_1690163.f_9 == -1 && bVar4 == 0)
		{
			func_489(0);
		}
		else
		{
			Global_1690163.f_9 = -1;
		}
	}
	func_488();
	if (func_487())
	{
		func_486();
	}
	if (func_485())
	{
		func_484();
	}
	if (!unk_0x726DA50057167075())
	{
		unk_0xAD6D9BBD2C721EAA(1);
	}
	if (func_497() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if ((((!func_483(Global_1585045[iVar0 /*400*/]) && !func_599()) && !bVar4) && !func_349()) && !func_589())
			{
				func_482(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_481();
	Global_1690163.f_1 = 0;
	if (!func_563())
	{
		func_480();
	}
	if (Global_1585045[iVar0 /*400*/] != -1)
	{
		iParam2 = iParam2;
		if (func_479(Global_1585045[iVar0 /*400*/]))
		{
			if (unk_0x1F2C82EFDAD19C5D())
			{
				iVar20 = func_461(0);
				func_458(1201, -1);
				func_453(joaat("mpply_mgame_cheat_end"), iVar20);
				if (iVar20 > 0)
				{
					func_453(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		unk_0x4B52178E7DCB5964(unk_0x1329891157A54C63());
	}
	func_451();
	if (Global_1690163 == 0)
	{
		if (!bVar4)
		{
			Global_1585045[iVar0 /*400*/].f_11 = -1;
			Global_1585045[iVar0 /*400*/].f_12 = 0;
		}
	}
	if (bVar4)
	{
		func_482(0);
		Global_1585045[iVar0 /*400*/].f_12 = 1;
		Global_1585045[iVar0 /*400*/].f_11 = func_450(unk_0x1329891157A54C63());
		unk_0xC8FB7E27C811BE31(0);
		func_447(0, 0, 1);
		if (func_446())
		{
			func_444();
		}
	}
	if ((Global_1585045[iVar0 /*400*/] < 10 && Global_1585045[iVar0 /*400*/] != -1) && !func_349())
	{
		if (!unk_0xB318FDA0D1ABDB20(&(Global_1585045[iVar0 /*400*/].f_133)) && Global_1585045[iVar0 /*400*/] != 5)
		{
			func_441(&(Global_1585045[iVar0 /*400*/].f_133));
		}
	}
	Global_1585045[iVar0 /*400*/] = -1;
	Global_1585045[iVar0 /*400*/].f_39.f_2 = -1;
	Global_1585045[iVar0 /*400*/].f_39.f_16 = -1;
	Global_1585045[iVar0 /*400*/].f_39.f_1 = -1;
	Global_1607808 = 0;
	if (!bVar4)
	{
		func_440(0);
	}
	Global_1585045[iVar0 /*400*/].f_39.f_18 = 0;
	unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x04EFA8D3BE8500E7() /*400*/].f_315), 0);
	unk_0x427AC0961189F9DA(0, 0);
	if (iVar1 != 6)
	{
		unk_0x314942833427CBA3();
		Global_2437733 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1585045[iVar0 /*400*/].f_133), sVar21, 24);
		StringCopy(&(Global_1585045[iVar0 /*400*/].f_139), sVar21, 24);
		func_439();
	}
	StringCopy(&(Global_1597846[iVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1585045[iVar0 /*400*/].f_153), sVar21, 64);
	Global_1605110[iVar0 /*33*/].f_19 = { Var22 };
	Global_1573814 = 0;
	Global_1573815 = 0;
	Global_1573429 = -1;
	Global_1690110 = 1;
	bVar24 = false;
	func_438();
	func_437();
	func_436();
	if (func_435())
	{
		func_434();
	}
	if (func_433() && unk_0x726DA50057167075())
	{
		func_432();
		func_323(unk_0x1329891157A54C63(), 0, 57348);
	}
	if (func_431())
	{
		func_430();
	}
	else if (func_429())
	{
		func_430();
	}
	else if (func_428())
	{
		func_430();
	}
	else if (func_427())
	{
		func_430();
	}
	else if (func_426())
	{
		func_430();
	}
	else if (func_497())
	{
		func_430();
	}
	else if (func_425() && func_424())
	{
		func_430();
	}
	else if (func_423())
	{
		func_430();
	}
	else
	{
		func_422();
		if (!Global_1585045[unk_0x1329891157A54C63() /*400*/].f_12 && !func_582())
		{
			if (unk_0x726DA50057167075())
			{
				if (func_446())
				{
					func_421();
				}
				else
				{
					if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
					{
						Global_2429626.f_2842.f_195 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
					}
					func_420();
					func_609();
					func_419(6);
					func_542();
					if (bVar4)
					{
						func_591(0);
					}
				}
				func_418();
				func_417();
				func_416();
				if (Global_2429626.f_2842.f_4 == 2)
				{
					Global_2429626.f_2842.f_4 = 1;
				}
				if (func_235(unk_0x1329891157A54C63(), 0))
				{
					func_415();
				}
				func_414();
				Global_2429626.f_2842 = 0;
			}
			else
			{
				func_413();
				func_430();
			}
		}
		else
		{
			if (!func_585() && !func_582())
			{
			}
			func_413();
			func_430();
		}
	}
	if ((((((((((!func_431() && !func_412()) && !func_424()) && !func_425()) && !func_428()) && !func_429()) && !func_411()) && !func_426()) && !func_497()) && !func_427()) && !func_410())
	{
		if (!func_409())
		{
			func_408();
			func_406();
			func_405();
			func_403(1);
		}
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x9B20331E99DD1C1C())
		{
			if (!unk_0xB692CF9D7FE78958())
			{
				if (!func_402())
				{
					if (!bVar24)
					{
						if (func_15(unk_0x1329891157A54C63()))
						{
							unk_0x1DEDD3FDB8EE31DE();
							unk_0x685FB002C8258D40();
						}
					}
				}
			}
		}
	}
	if (!func_349())
	{
		StringCopy(&(Global_1607808.f_63428), "", 64);
	}
	if (!func_582())
	{
		func_394();
	}
	func_393();
	if (!func_589() && !func_585())
	{
		func_392();
	}
	func_371(bParam3);
}

void func_371(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_563())
		{
		}
		else if ((((!func_589() && !func_585()) && !func_582()) && Global_1690163.f_9 != 9) && Global_1690163.f_9 != 4)
		{
			func_525(0, 1);
		}
	}
	unk_0x3C936873011FA97B();
	if (!func_391(unk_0x1329891157A54C63()))
	{
		func_390();
	}
	func_389(1);
	if ((((bParam0 && !func_388()) && !func_589()) && !Global_262145.f_4854) && !func_386())
	{
		unk_0x5205F4FBEB1EFA02();
	}
	unk_0xCF03502D0A0CF8C3(5, 1);
	unk_0xCF03502D0A0CF8C3(3, 1);
	func_378(&uVar0, -1);
	if ((func_28() == 0 && !func_107()) && !func_589())
	{
		if (func_377())
		{
			func_376();
		}
		else
		{
			func_373(28, 0);
		}
	}
	func_372(0);
}

void func_372(int iParam0)
{
	if (!Global_1698727 == iParam0)
	{
		Global_1698727 = iParam0;
	}
}

void func_373(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_375(iParam0, iParam1))
	{
		iVar0 = func_374();
		Global_2436893[iVar0] = iParam0;
	}
}

int func_374()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2436893[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_375(int iParam0, var uParam1)
{
	if (Global_1315880)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315892) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_376()
{
	unk_0xF3148AAF69AF9CBC(&(Global_967557.f_8), 22);
}

bool func_377()
{
	return unk_0x236D8AD7EE179F46(Global_967557.f_8, 21);
}

void func_378(var uParam0, int iParam1)
{
	func_384(uParam0, iParam1);
	func_379(iParam1);
}

void func_379(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	uVar0 = func_383(iParam0);
	uVar1 = unk_0xE19FDB171CBF814A(uVar0);
	if (func_380())
	{
		if (unk_0x236D8AD7EE179F46(uVar1, 1))
		{
			func_30(133, 1, -1, 1);
		}
	}
}

int func_380()
{
	if (func_382() && func_381(0))
	{
		return 1;
	}
	return 0;
}

var func_381(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_382()
{
	return func_381(func_26() + 1);
}

int func_383(int iParam0)
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

void func_384(var uParam0, int iParam1)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	uVar1 = func_385(iParam1);
	uVar2 = unk_0xE19FDB171CBF814A(uVar1);
	if (unk_0x236D8AD7EE179F46(uVar2, 1))
	{
		func_458(1196, iParam1);
		func_453(joaat("mpply_dm_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0xC69E84EBBD7166E6(&uVar2, 1);
		bVar0 = true;
	}
	if (unk_0x236D8AD7EE179F46(uVar2, 2))
	{
		func_458(1198, iParam1);
		func_453(joaat("mpply_race_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0xC69E84EBBD7166E6(&uVar2, 2);
		bVar0 = true;
	}
	if (unk_0x236D8AD7EE179F46(uVar2, 3))
	{
		func_458(1108, iParam1);
		func_453(joaat("mpply_mc_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0xC69E84EBBD7166E6(&uVar2, 3);
		bVar0 = true;
	}
	if (unk_0x236D8AD7EE179F46(uVar2, 4))
	{
		func_458(1200, iParam1);
		func_453(joaat("mpply_mgame_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0xC69E84EBBD7166E6(&uVar2, 4);
		bVar0 = true;
	}
	if (unk_0x236D8AD7EE179F46(uVar2, 5))
	{
		func_458(1911, iParam1);
		func_453(joaat("mpply_cap_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0xC69E84EBBD7166E6(&uVar2, 5);
		bVar0 = true;
	}
	if (unk_0x236D8AD7EE179F46(uVar2, 6))
	{
		func_458(1913, iParam1);
		func_453(joaat("mpply_sur_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0xC69E84EBBD7166E6(&uVar2, 6);
		bVar0 = true;
	}
	if (unk_0x236D8AD7EE179F46(uVar2, 7))
	{
		func_458(1915, iParam1);
		func_453(joaat("mpply_lts_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0xC69E84EBBD7166E6(&uVar2, 7);
		bVar0 = true;
	}
	if (unk_0x236D8AD7EE179F46(uVar2, 8))
	{
		func_458(1917, iParam1);
		func_453(joaat("mpply_para_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0xC69E84EBBD7166E6(&uVar2, 8);
		bVar0 = true;
	}
	if (unk_0x236D8AD7EE179F46(uVar2, 9))
	{
		func_458(3122, iParam1);
		func_453(joaat("mpply_heist_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0xC69E84EBBD7166E6(&uVar2, 9);
		bVar0 = true;
	}
	if (unk_0x236D8AD7EE179F46(uVar2, 26))
	{
		func_458(1919, iParam1);
		func_453(joaat("mpply_fmevn_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0xC69E84EBBD7166E6(&uVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		unk_0x59C26149DF458387(uVar2, iParam1);
	}
}

int func_385(int iParam0)
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

int func_386()
{
	if (func_606(unk_0x1329891157A54C63()) || func_605(unk_0x1329891157A54C63()))
	{
		if (func_387() || func_585())
		{
			return 1;
		}
	}
	return 0;
}

bool func_387()
{
	return unk_0x236D8AD7EE179F46(Global_1315799, 4);
}

bool func_388()
{
	return Global_1573817;
}

void func_389(int iParam0)
{
	Global_2429626.f_5612 = iParam0;
}

void func_390()
{
	unk_0x9BAE0FF806E5C2E5(6);
	unk_0x5B6D37392F5991C3(1f);
	unk_0xA9DF4B73BBB06CE5(1);
}

int func_391(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1606167[iVar0 /*12*/] != -1;
	}
	return 0;
}

void func_392()
{
	Global_2428865.f_26.f_39 = 0;
}

void func_393()
{
	Global_1690163.f_6 = 0;
}

void func_394()
{
	struct<3> Var0;
	struct<2> Var3;
	int iVar5;
	
	if (!func_400(func_401(), Var0))
	{
		Var3.f_0 = 205;
		Var3.f_1 = unk_0x1329891157A54C63();
		iVar5 = func_399(1, 1);
		if (!iVar5 == 0)
		{
			func_396();
			func_395(0);
			unk_0x8DAD64B00B88FC2D(1, &Var3, 2, iVar5);
		}
	}
}

void func_395(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2422670.f_3122 = unk_0xD74C7D8D2E5E43D2();
	}
	Global_2422670.f_3006 = iParam0;
}

void func_396()
{
	func_398();
	func_397();
}

void func_397()
{
	struct<72> Var0;
	
	if (func_53(unk_0x1329891157A54C63()))
	{
		Var0.f_6 = 32;
		Global_2414506[unk_0x1329891157A54C63() /*255*/].f_121 = { Var0 };
	}
}

void func_398()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2422670.f_3006.f_79 };
	Var0.f_95 = { Global_2422670.f_3006.f_95 };
	Global_2422670.f_3006 = { Var0 };
}

var func_399(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1329891157A54C63() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
				else if (!func_235(iVar2, 0))
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_400(struct<3> Param0, struct<3> Param3)
{
	if ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_401()
{
	return Global_2413754[unk_0x1329891157A54C63() /*10*/];
}

bool func_402()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 18);
}

void func_403(bool bParam0)
{
	struct<57> Var0;
	int iVar57;
	
	Global_2429626.f_1.f_2797 = 0;
	Global_2429626.f_1.f_2798 = 0;
	Global_2429626.f_1.f_2820 = 0;
	Global_2429626.f_1.f_2804 = 0;
	Global_2429626.f_1.f_2805 = 0;
	Global_2429626.f_1.f_2808 = 0;
	Global_2429626.f_1.f_2809 = 0;
	Global_2429626.f_1.f_2807 = -1;
	Global_2429626.f_1.f_2810 = -1;
	Global_2429626.f_1.f_2812 = 0;
	Global_2429626.f_1.f_2813 = 0;
	Global_2429626.f_1.f_2814 = 0;
	Global_2429626.f_1.f_2815 = 0;
	Global_2429626.f_1.f_2816 = 0;
	Global_2429626.f_1.f_2817 = 0;
	Global_2429626.f_1.f_2821 = -1;
	if (bParam0)
	{
		Global_2429626.f_1.f_2818 = -1;
		Global_2429626.f_1.f_2819 = -1;
	}
	Global_2429626.f_1.f_2840 = 0;
	func_404();
	Var0.f_33 = 2;
	Var0.f_36 = 7;
	iVar57 = 0;
	while (iVar57 <= 31)
	{
		Global_2429626.f_1.f_844[iVar57 /*57*/] = { Var0 };
		iVar57++;
	}
	Global_2426073.f_21 = -1;
}

void func_404()
{
	Global_2426073.f_20 = 0;
}

void func_405()
{
	Global_2428865.f_566 = 0;
}

void func_406()
{
	Global_2428865.f_567 = 0;
	func_407();
}

void func_407()
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	if (iVar0 >= 0)
	{
		unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar0 /*400*/].f_85.f_32), 6);
	}
}

void func_408()
{
	Global_2428865 = 0;
	Global_2428865.f_2 = 0;
}

bool func_409()
{
	return Global_2428865.f_566;
}

bool func_410()
{
	return Global_1699165;
}

bool func_411()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 1);
}

bool func_412()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 16);
}

void func_413()
{
	unk_0xC69E84EBBD7166E6(&Global_2428865, 21);
}

void func_414()
{
	Global_2429626.f_2842.f_34 = 1;
}

void func_415()
{
	Global_2429626.f_1.f_2823 = 1;
}

void func_416()
{
	Global_2428865.f_699 = 1;
}

void func_417()
{
	Global_2429626.f_1.f_2822 = 1;
}

void func_418()
{
	unk_0xF3148AAF69AF9CBC(&Global_2428865, 21);
}

void func_419(int iParam0)
{
	Global_2429626.f_1.f_837 = iParam0;
	Global_2414506[unk_0x1329891157A54C63() /*255*/].f_209 = iParam0;
}

void func_420()
{
	struct<25> Var0;
	
	Var0 = 19;
	Var0.f_21 = -1;
	Global_2426098 = { Var0 };
}

void func_421()
{
	Global_2429626.f_2842.f_1 = 1;
}

void func_422()
{
	Global_2429626.f_2842.f_1 = 0;
}

bool func_423()
{
	return Global_2428865.f_591;
}

bool func_424()
{
	return Global_2428865.f_581;
}

bool func_425()
{
	return Global_2428865.f_568;
}

bool func_426()
{
	return Global_2428865.f_577;
}

bool func_427()
{
	return unk_0x236D8AD7EE179F46(Global_2428865.f_2, 15);
}

bool func_428()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 20);
}

bool func_429()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 2);
}

void func_430()
{
	Global_2429626.f_2842.f_34 = 0;
}

bool func_431()
{
	return unk_0x236D8AD7EE179F46(Global_967557.f_8, 8);
}

void func_432()
{
	Global_2428865.f_596 = 0;
}

var func_433()
{
	return Global_2428865.f_596;
}

void func_434()
{
	Global_2428865.f_626 = 0;
}

bool func_435()
{
	return Global_2428865.f_626;
}

void func_436()
{
	Global_2429626.f_1.f_838 = 0;
	Global_2429626.f_1.f_840 = 0;
}

void func_437()
{
	unk_0xC69E84EBBD7166E6(&Global_2428865, 4);
}

void func_438()
{
	unk_0xC69E84EBBD7166E6(&Global_2428865, 28);
}

void func_439()
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar0 /*400*/].f_13.f_1), 4);
	unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar0 /*400*/].f_13.f_1), 5);
	unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar0 /*400*/].f_13.f_1), 7);
	unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar0 /*400*/].f_13.f_1), 8);
	unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar0 /*400*/].f_13.f_1), 9);
	unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar0 /*400*/].f_13.f_1), 10);
	unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar0 /*400*/].f_13.f_1), 11);
	unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar0 /*400*/].f_13.f_1), 12);
	unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar0 /*400*/].f_13.f_1), 13);
}

void func_440(int iParam0)
{
	unk_0xC8FB7E27C811BE31(iParam0);
}

void func_441(var uParam0)
{
	var uVar0;
	
	if ((!func_443() && func_442(120, -1)) && !func_349())
	{
		unk_0xC3FF8FEA4F22B327(uParam0, &uVar0, 13);
		if (unk_0x7BD139E6ED31A2EB(&uVar0, 13))
		{
			if (unk_0x5762EE910D467202(&uVar0))
			{
			}
		}
	}
}

int func_442(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2478104[iParam0 /*5*/][func_25(iParam1)];
	if (unk_0xFD72912C9064BF1F(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_443()
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	if ((Global_1585045[iVar0 /*400*/].f_39.f_2 == 63 || Global_1585045[iVar0 /*400*/].f_39.f_2 == 62) || Global_1585045[iVar0 /*400*/].f_39.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_444()
{
	unk_0xF3148AAF69AF9CBC(&(Global_967557.f_8), 8);
	func_445();
}

void func_445()
{
	Global_2428865.f_751 = 1;
}

bool func_446()
{
	return Global_2429626.f_2842.f_2;
}

void func_447(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x930F8FBB8E9537CC(iParam1))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x86CCCD2FAE9D5E65(iParam1))
		{
			if (unk_0x0452D5BF20AD945A(iParam1))
			{
				if (!unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), unk_0x1B503E81E3B3D65F(iParam1)))
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
				func_449();
			}
			else if (!unk_0x236D8AD7EE179F46(Global_2359301.f_66, 1))
			{
				if (unk_0x236D8AD7EE179F46(Global_2359301.f_66, 2))
				{
					iVar1 = 0;
					while (iVar1 < 7)
					{
						unk_0xC2DA06044571AD7C(iVar1, Global_2359301.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xF3148AAF69AF9CBC(&(Global_2359301.f_66), 1);
			}
		}
		if (func_235(unk_0x1329891157A54C63(), 0))
		{
			unk_0xBB145D2FECFBC876(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x015C3A67349BDB5D(iParam0, iParam1);
		}
		unk_0x76694A36D4C9C063(iParam0, iParam1);
		func_448(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_448(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x20026873DF8DB72A(iVar0, iParam1, 1);
	}
}

void func_449()
{
	int iVar0;
	
	if (!unk_0x75C72A7C77A94B27())
	{
		if (!unk_0x236D8AD7EE179F46(Global_2359301.f_66, 2))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				Global_2359301.f_58[iVar0] = unk_0x7FCE6803A3D23268(iVar0);
				iVar0++;
			}
			unk_0xF3148AAF69AF9CBC(&(Global_2359301.f_66), 2);
			unk_0xF3148AAF69AF9CBC(&(Global_2359301.f_66), 0);
		}
	}
}

var func_450(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_85.f_2;
}

void func_451()
{
	if (func_452())
	{
		unk_0xB8BB626315D394F5(1);
	}
}

bool func_452()
{
	return func_177("FM_RETRY_INV");
}

void func_453(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_457(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_456(iParam0))
	{
		func_455(iParam0, iVar0);
	}
	else
	{
		func_454(iParam0, iVar0);
	}
}

void func_454(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1343552 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1343554 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1343554 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1343555 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1343556 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1343557 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1343558 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1343559 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1343560 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1343561 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1343562 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1343563 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1343564 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1343565 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1343566 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1343567 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1343568 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_455(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, 1);
	}
}

int func_456(int iParam0)
{
	if (Global_1343551)
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

int func_457(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_458(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam1), 0);
	iVar0++;
	if (!func_460(iParam0))
	{
		func_57(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_459(iParam0, iVar0, iParam1, 1);
	}
}

void func_459(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1343618[func_25(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1343624[func_25(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1343630[func_25(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1343636[func_25(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1343594[func_25(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1343600[func_25(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1343606[func_25(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1343612[func_25(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1343570[func_25(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1343576[func_25(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1343582[func_25(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1343588[func_25(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1343642[func_25(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1343648[func_25(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1343654[func_25(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1343660[func_25(iParam2)] = iParam1;
			break;
		
		case 1292:
			Global_1343666[func_25(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1343672[func_25(iParam2)] = iParam1;
			break;
		
		case 1267:
			Global_1343678[func_25(iParam2)] = iParam1;
			break;
		
		case 1864:
			Global_2480427[0 /*6*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2480427[1 /*6*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2899:
			Global_2480427[2 /*6*/][func_25(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1343684[func_25(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1343690[func_25(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1343696[func_25(iParam2)] = iParam1;
			break;
		
		case 1225:
			Global_1343702[func_25(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_460(int iParam0)
{
	if (Global_1343551)
	{
		switch (iParam0)
		{
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
			case 747:
			case 748:
			case 749:
			case 750:
			case 1292:
			case 629:
			case 1267:
			case 754:
			case 755:
			case 756:
			case 1225:
			case 1864:
			case 2255:
			case 2899:
				return 1;
				break;
			}
	}
	return 0;
}

int func_461(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2437616 == 0)
	{
		return 0;
	}
	if (func_478())
	{
		if (unk_0x726DA50057167075() || (func_477() || func_473()))
		{
			Global_2436992 = 1;
		}
	}
	Global_2437616 = 0;
	if (Global_1318722)
	{
		iVar0 = 1;
	}
	if (Global_2436992)
	{
		iVar0 = 1;
	}
	if (Global_2436991)
	{
		iVar0 = 1;
	}
	if (func_472(Global_97959.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2436917)
	{
		iVar0 = 1;
	}
	if (func_471(512))
	{
		iVar0 = 1;
	}
	if (func_470(128))
	{
		iVar0 = 1;
	}
	if (Global_1318746 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_349())
	{
		iVar0 = 0;
	}
	if (Global_2437056)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_468())
		{
			if (Global_1607808.f_64060 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_235(unk_0x1329891157A54C63(), 0))
	{
		iVar0 = 0;
	}
	if (func_466())
	{
		iVar0 = 0;
	}
	if ((Global_2436992 || Global_2436991) || Global_1318722)
	{
		if (func_473())
		{
			iVar0 = 0;
		}
	}
	Global_2437056 = 0;
	Global_2436991 = 0;
	Global_2436992 = 0;
	Global_1318722 = 0;
	Global_2436917 = 0;
	func_464(&(Global_97959.f_1), 32);
	func_463(512);
	func_462(128);
	return iVar0;
}

void func_462(int iParam0)
{
	Global_98016 = (Global_98016 - (Global_98016 && iParam0));
}

void func_463(int iParam0)
{
	Global_98017 = (Global_98017 - (Global_98017 && iParam0));
}

void func_464(var uParam0, int iParam1)
{
	func_465(uParam0, iParam1);
}

void func_465(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_466()
{
	if (((Global_1573839 || Global_1573810) || func_235(unk_0x1329891157A54C63(), 0)) || func_467())
	{
		return 1;
	}
	return 0;
}

bool func_467()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 14);
}

int func_468()
{
	switch (func_469())
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

int func_469()
{
	return Global_2429626.f_1.f_2818;
}

bool func_470(int iParam0)
{
	return (Global_98016 && iParam0) != 0;
}

bool func_471(int iParam0)
{
	return (Global_98017 && iParam0) != 0;
}

bool func_472(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_473()
{
	if (func_476(Global_2438842))
	{
		return 0;
	}
	if (func_474(unk_0x1329891157A54C63(), 146))
	{
		return 1;
	}
	return 0;
}

int func_474(int iParam0, int iParam1)
{
	if (Global_1606167[iParam0 /*12*/] == iParam1)
	{
		return func_475(iParam0);
	}
	return 0;
}

int func_475(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_1606167[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

int func_476(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_9157)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_9159)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_9156)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_9160)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_9161)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_9162)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_9158)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_9163)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_9164)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_9165)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_9166)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_477()
{
	if (func_476(Global_2438842))
	{
		return 0;
	}
	if (func_475(unk_0x1329891157A54C63()))
	{
		return 1;
	}
	return 0;
}

bool func_478()
{
	return unk_0x236D8AD7EE179F46(Global_1312423, 0);
}

int func_479(int iParam0)
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

void func_480()
{
	if (unk_0xCEC9D74C9FF51C8C(unk_0x1643DC5B15755CD2(unk_0x1329891157A54C63()), "MissionType"))
	{
		unk_0x6C0114FA4EE71DBC(unk_0x1643DC5B15755CD2(unk_0x1329891157A54C63()), "MissionType");
	}
	if (unk_0xCEC9D74C9FF51C8C(unk_0x1643DC5B15755CD2(unk_0x1329891157A54C63()), "MatchId"))
	{
		unk_0x6C0114FA4EE71DBC(unk_0x1643DC5B15755CD2(unk_0x1329891157A54C63()), "MatchId");
	}
	if (unk_0xCEC9D74C9FF51C8C(unk_0x1643DC5B15755CD2(unk_0x1329891157A54C63()), "TeamId"))
	{
		unk_0x6C0114FA4EE71DBC(unk_0x1643DC5B15755CD2(unk_0x1329891157A54C63()), "TeamId");
	}
}

void func_481()
{
	Global_2428865.f_572 = 0;
	unk_0x6894CD2F7E04FE4C();
}

void func_482(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1585045[unk_0x1329891157A54C63() /*400*/].f_35)
		{
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_35 = 1;
		}
	}
	else if (Global_1585045[unk_0x1329891157A54C63() /*400*/].f_35)
	{
		Global_1585045[unk_0x1329891157A54C63() /*400*/].f_35 = 0;
	}
}

int func_483(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_484()
{
	Global_2428865.f_712 = 0;
}

bool func_485()
{
	return Global_2428865.f_712;
}

void func_486()
{
	Global_2428865.f_716 = 0;
}

bool func_487()
{
	return Global_2428865.f_716;
}

void func_488()
{
	unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_85.f_32), 1);
}

int func_489(int iParam0)
{
	int iVar0;
	
	if (func_467())
	{
		return 1;
	}
	if (func_494())
	{
		return 1;
	}
	if (unk_0xB318FDA0D1ABDB20(&(Global_1607808.f_63708)))
	{
		return 1;
	}
	if (func_493())
	{
		return 1;
	}
	func_492();
	unk_0xAF9FE1D2FBB72A7C();
	iVar0 = unk_0x8BE02EEFCBD13E2E();
	if (iParam0 == 0)
	{
		Global_1690123++;
		unk_0xD8BA7ECE6257173C(iVar0, "quit", Global_1690123);
		unk_0xD8BA7ECE6257173C(iVar0, "quitd", 1);
		unk_0xD8BA7ECE6257173C(iVar0, "ply", Global_1690123.f_2);
		unk_0xD8BA7ECE6257173C(iVar0, "lp", unk_0xC7224E4F41E00BE3());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1690148.f_1++;
		unk_0xD8BA7ECE6257173C(iVar0, "quit", Global_1690148.f_1);
		unk_0xD8BA7ECE6257173C(iVar0, "quitd", 1);
		unk_0xD8BA7ECE6257173C(iVar0, "ply", Global_1690148.f_4);
		unk_0xD8BA7ECE6257173C(iVar0, "lp", unk_0xC7224E4F41E00BE3());
	}
	if (iParam0 == 0)
	{
		if (unk_0x7A16292C4FF36952(&(Global_1607808.f_63708), 0f, func_491(iParam0)))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (unk_0x7A16292C4FF36952(&(Global_967557.f_42), 0f, func_491(iParam0)))
		{
		}
	}
	func_490();
	func_492();
	unk_0x459190EB772F7AB9();
	return 1;
}

void func_490()
{
	Global_1690123 = 0;
	Global_1690123.f_2 = 0;
	Global_1690123.f_8 = 0;
	Global_1690123.f_3 = 0;
	Global_1690123.f_6 = 0;
}

char* func_491(int iParam0)
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

void func_492()
{
	if (unk_0x8BE02EEFCBD13E2E() != 0)
	{
		unk_0x9BE3E13B1F3F1100();
	}
}

int func_493()
{
	if (unk_0xC8EC0AD55DF1C9EA())
	{
		return 1;
	}
	else if (unk_0x4F63B47A2DE11C82())
	{
		return 1;
	}
	else if (unk_0xF934A69B628212A0())
	{
		return 1;
	}
	return 0;
}

int func_494()
{
	if (!func_495())
	{
		return 1;
	}
	return 0;
}

int func_495()
{
	if (func_496())
	{
		return 0;
	}
	if (unk_0x847832409C9B7582() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_496()
{
	return Global_2437061;
}

bool func_497()
{
	return Global_2428865.f_608;
}

void func_498(bool bParam0)
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

void func_499()
{
	Global_2429626.f_1.f_2824.f_13 = 0;
	Global_2429626.f_1.f_2824 = 0;
	Global_2429626.f_1.f_2824.f_1 = 0;
	Global_2429626.f_1.f_2824.f_2 = 0;
	Global_2429626.f_1.f_2824.f_3 = 0;
	Global_2429626.f_1.f_2824.f_4 = 0;
	Global_2429626.f_1.f_2824.f_5 = 0;
	Global_2429626.f_1.f_2824.f_6 = 0;
	Global_2429626.f_1.f_2824.f_7 = 0;
	Global_2429626.f_1.f_2824.f_8 = 0;
	Global_2429626.f_1.f_2824.f_9 = 0;
	Global_2429626.f_1.f_2824.f_10 = 0;
	Global_2429626.f_1.f_2824.f_11 = 0;
	Global_2429626.f_1.f_2824.f_12 = 0;
}

bool func_500(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 1;
}

void func_501()
{
	Global_2428865.f_591 = 1;
}

void func_502(int iParam0, struct<3> Param1, struct<6> Param4)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_518();
	func_517();
	func_516();
	func_515();
	func_514();
	func_609();
	Global_1690163.f_9 = iParam0;
	switch (Global_1690163.f_9)
	{
		case 1:
			Global_1690163 = 0;
			Global_1690163.f_22 = { 0f, 0f, 0f };
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_12 = 0;
			break;
		
		case 2:
			Global_1690163 = 1;
			Global_1690163.f_22 = { Param1 };
			Global_1690163.f_16 = { Param4 };
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_12 = 0;
			break;
		
		case 3:
			if (Global_1585045[unk_0x1329891157A54C63() /*400*/] == 0 || Global_1585045[unk_0x1329891157A54C63() /*400*/] == 1)
			{
				func_513(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_85.f_28);
			}
			func_512();
			Global_1690163 = 1;
			Global_1690163.f_22 = { Param1 };
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_12 = 0;
			break;
		
		case 4:
			func_511();
			func_512();
			Global_1690163 = 1;
			if (func_605(unk_0x1329891157A54C63()) || func_606(unk_0x1329891157A54C63()))
			{
				func_510(1);
			}
			if ((func_509() || func_530()) && func_524())
			{
				Global_1690163.f_16 = { func_523() };
				Param4 = { Global_1690163.f_16 };
				Global_1690163.f_22 = { func_508() };
			}
			else if (func_509() || func_530())
			{
				if (func_507())
				{
					Global_1690163.f_22 = { func_506() };
				}
				else
				{
					Global_1690163.f_22 = { Param1 };
				}
			}
			else
			{
				Global_1690163.f_22 = { Param1 };
			}
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_12 = 1;
			break;
		
		case 5:
			func_511();
			func_505();
			func_512();
			if (func_605(unk_0x1329891157A54C63()) || func_606(unk_0x1329891157A54C63()))
			{
				func_510(1);
			}
			Global_1690163 = 1;
			Global_1690163.f_22 = { Param1 };
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_12 = 1;
			break;
		
		case 8:
			Global_1690163 = 0;
			Global_1690163.f_22 = { Param1 };
			Global_1690163.f_16 = { Param4 };
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_12 = 0;
			break;
		
		case 9:
			func_512();
			Global_1690163 = 1;
			Global_1690163.f_22 = { Param1 };
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_12 = 1;
			break;
		
		case 10:
			Global_1690163 = 0;
			Global_1690163.f_22 = { 0f, 0f, 0f };
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_12 = 0;
			break;
	}
	func_504();
	func_503();
	func_419(Global_1690163.f_9);
	Global_2414506[unk_0x1329891157A54C63() /*255*/].f_210 = { Global_1690163.f_22 };
	Global_2414506[unk_0x1329891157A54C63() /*255*/].f_213 = { Param4 };
}

void func_503()
{
	unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18), 23);
}

void func_504()
{
	unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18), 12);
}

void func_505()
{
	Global_1690163.f_4 = 1;
}

Vector3 func_506()
{
	return Global_2428865.f_26.f_491;
}

int func_507()
{
	if ((Global_2428865.f_26.f_491 != 0f || Global_2428865.f_26.f_491.f_1 != 0f) || Global_2428865.f_26.f_491.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_508()
{
	return Global_2428865.f_26.f_494;
}

var func_509()
{
	return Global_2428865.f_26.f_49;
}

void func_510(int iParam0)
{
	Global_2429626.f_5611 = iParam0;
}

void func_511()
{
	Global_1690163.f_3 = 1;
}

void func_512()
{
	Global_1690163.f_7 = 1;
}

void func_513(var uParam0)
{
	Global_1690163.f_10 = uParam0;
}

void func_514()
{
	Global_1585045[unk_0x1329891157A54C63() /*400*/].f_5 = 0;
}

void func_515()
{
	Global_1690163.f_10 = -1;
}

void func_516()
{
	Global_1690163.f_4 = 0;
}

void func_517()
{
	Global_1690163.f_3 = 0;
}

void func_518()
{
	Global_2429626.f_2842.f_2 = 1;
}

void func_519()
{
	Global_2428865.f_26.f_47 = 0;
}

void func_520()
{
	Global_2428865.f_26.f_41 = -1;
}

int func_521()
{
	return Global_2428865.f_26.f_41;
}

void func_522(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0xB318FDA0D1ABDB20(&uParam0))
	{
		return;
	}
	if (!Global_2398432)
	{
		return;
	}
	if (!unk_0xD994929E13CC1ED5(&uParam0, &(Global_2398432.f_1)))
	{
		return;
	}
	Global_2398498 = 1;
}

struct<6> func_523()
{
	return Global_2428865.f_26.f_11;
}

bool func_524()
{
	return Global_2428865.f_26.f_51;
}

void func_525(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (unk_0xD02FFD4DFF4CC11E())
				{
					unk_0x69D75FF6A279CE22();
				}
			}
			break;
		
		case 1:
			unk_0x2D8AA12A484054EB(6, 0, 0);
			break;
		
		case 2:
			unk_0x2D8AA12A484054EB(12, 0, 0);
			break;
		
		case 3:
			unk_0x2D8AA12A484054EB(21, 0, 0);
			break;
		
		case 4:
			unk_0x2D8AA12A484054EB(0, 0, 0);
			break;
		
		default:
			break;
	}
}

int func_526()
{
	return Global_1690163.f_12;
}

void func_527(var uParam0, var uParam1)
{
	Global_1690163.f_13 = uParam0;
	Global_1690163.f_14 = uParam1;
}

void func_528(var uParam0)
{
	Global_1690163.f_12 = uParam0;
}

void func_529()
{
	Global_2428865.f_26.f_48 = 1;
}

bool func_530()
{
	return Global_2428865.f_26.f_47;
}

void func_531()
{
	if (unk_0xB318FDA0D1ABDB20(&(Global_2391053.f_4.f_3)))
	{
		return;
	}
	if (!unk_0xB318FDA0D1ABDB20(&(Global_2397731.f_3)))
	{
		if (unk_0xD994929E13CC1ED5(&(Global_2397731.f_3), &(Global_2391053.f_4.f_3)))
		{
			Global_1311838 = 0;
		}
		else
		{
			Global_1311838 = 1;
		}
	}
	Global_1311839 = 0;
	Global_1311839.f_1 = { Global_2391053.f_4.f_3 };
}

void func_532()
{
	Global_1690163.f_5 = 0;
	Global_1690163.f_11 = -1;
}

void func_533(var uParam0)
{
	Global_1690163.f_5 = 1;
	Global_1690163.f_11 = uParam0;
}

int func_534(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7288[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_535(int iParam0)
{
	return (func_537(iParam0) || func_536(iParam0));
}

int func_536(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7355[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_537(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7296[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<13> func_538()
{
	struct<13> Var0;
	
	unk_0xAD462A32D0F07ED6(&Var0, 13);
	return Var0;
}

void func_539(struct<6> Param0)
{
	if (unk_0xB318FDA0D1ABDB20(&Param0))
	{
		return;
	}
	Global_1311839 = 1;
	Global_1311839.f_1 = { Param0 };
}

bool func_540()
{
	return Global_2428865.f_9;
}

void func_541(int iParam0)
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		unk_0xCB9ED80838478527(iParam0);
		unk_0x00427B5576D22CDA(0);
	}
}

void func_542()
{
	Global_975761 = -1;
}

void func_543()
{
	func_544(-1f);
}

void func_544(float fParam0)
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		unk_0xCB9ED80838478527(fParam0);
		unk_0x00427B5576D22CDA(0);
	}
}

int func_545(int iParam0)
{
	int iVar0;
	
	if (Global_1708182[iParam0 /*8*/] == -1)
	{
		iVar0 = func_24(func_547(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_546(iParam0, 0);
			iVar0 = 0;
		}
		Global_1708182[iParam0 /*8*/] = iVar0;
	}
	return Global_1708182[iParam0 /*8*/];
}

void func_546(int iParam0, int iParam1)
{
	Global_1708182[iParam0 /*8*/] = iParam1;
	func_57(func_547(iParam0), iParam1, -1, 1);
}

int func_547(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3423;
		
		default:
	}
	return 3423;
}

bool func_548()
{
	return Global_1607808.f_1 == 0;
}

void func_549(int iParam0, int iParam1)
{
	unk_0x1D29878D06EA4C78(iParam0);
	unk_0xBA11DCED68364FD0(iParam0);
	if (unk_0x1DC5977716A60EFE())
	{
		unk_0x55AEF7489FCB092C(iParam1);
	}
}

bool func_550()
{
	return Global_2428865.f_617;
}

void func_551()
{
	if (unk_0x236D8AD7EE179F46(Global_2359301, 24))
	{
		unk_0xC69E84EBBD7166E6(&Global_2359301, 24);
	}
}

void func_552()
{
	unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18), 14);
}

bool func_553()
{
	return Global_2428865.f_704;
}

int func_554()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/].f_177;
}

void func_555(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573676 == 0)
		{
			Global_1573676 = 1;
		}
	}
	else if (Global_1573676 == 1)
	{
		Global_1573676 = 0;
	}
}

void func_556()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2429626.f_1.f_844[iVar0 /*57*/].f_44 = 0;
		Global_2429626.f_1.f_844[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_557()
{
	int iVar0;
	
	if (func_467())
	{
		return 1;
	}
	if (func_494())
	{
		return 1;
	}
	if (func_493())
	{
		return 1;
	}
	if (unk_0xB318FDA0D1ABDB20(&(Global_1607808.f_63708)))
	{
		return 1;
	}
	func_492();
	unk_0xAF9FE1D2FBB72A7C();
	iVar0 = unk_0x8BE02EEFCBD13E2E();
	Global_1690123.f_2++;
	if (Global_1690123.f_2 < 1)
	{
		Global_1690123.f_2 = 1;
	}
	unk_0xD8BA7ECE6257173C(iVar0, "quit", Global_1690123);
	unk_0xD8BA7ECE6257173C(iVar0, "ply", Global_1690123.f_2);
	unk_0xD8BA7ECE6257173C(iVar0, "plyd", 1);
	unk_0xD8BA7ECE6257173C(iVar0, "lp", unk_0xC7224E4F41E00BE3());
	if (unk_0x7A16292C4FF36952(&(Global_1607808.f_63708), -1f, func_491(0)))
	{
	}
	func_490();
	func_492();
	unk_0x459190EB772F7AB9();
	return 1;
}

void func_558()
{
	Global_2428865.f_715 = 1;
}

void func_559(bool bParam0)
{
	if (bParam0)
	{
		unk_0x71190C28DC005F77();
	}
	else
	{
		unk_0x2DBB182FDDC0D09B();
	}
}

void func_560()
{
	Global_2428865.f_714 = 1;
}

int func_561(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_562(iParam0))
			{
				if (Global_1585045[iParam0 /*400*/] == 2 || Global_1585045[iParam0 /*400*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_562(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_177 != 0;
}

bool func_563()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 2);
}

void func_564()
{
	Global_2428865.f_714 = 0;
}

bool func_565()
{
	return Global_2428865.f_714;
}

void func_566(int iParam0)
{
	unk_0x2AC63060DD745CF5("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	unk_0x2AC63060DD745CF5("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	unk_0x2AC63060DD745CF5("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_567()
{
	Global_1690163.f_12 = -1;
	Global_1690163.f_13 = -1;
	Global_1690163.f_14 = -1;
}

void func_568()
{
	Global_1605000 = 0;
	Global_1573807 = 4;
}

void func_569(bool bParam0)
{
	if (bParam0)
	{
		Global_1573820 = 1;
	}
	else
	{
		Global_1573820 = 0;
	}
}

void func_570()
{
	Global_1605001 = -1;
	Global_1605004 = 0;
}

void func_571()
{
	Global_2451473.f_273 = 0;
	func_574(3782, 0, -1, 1);
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (func_572())
		{
			unk_0x03F73D35E5AC583A(unk_0x81873881071CD9FE(), 5, 0, 0, 0);
		}
	}
}

bool func_572()
{
	return func_573(unk_0x81873881071CD9FE());
}

int func_573(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x1CFC95A2D6BABBA2(uParam0, 5);
	iVar1 = -1;
	switch (unk_0x14B7103DBD149FFE(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x630D604241EC3A6A(uParam0, 5, iVar0, unk_0x2933140C98919EB1(uParam0, 5));
			if (unk_0x3FFA0207A02FD5C0(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x630D604241EC3A6A(uParam0, 5, iVar0, unk_0x2933140C98919EB1(uParam0, 5));
			if (unk_0x3FFA0207A02FD5C0(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_574(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_575()
{
	Global_2428865.f_715 = 0;
}

bool func_576()
{
	return Global_2428865.f_715;
}

void func_577(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_579(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17238.f_7707)
	{
		unk_0x5547446287DE314B(15);
		Global_17238.f_7707 = 0;
	}
	unk_0x97925E0DE42EFC5C(0f);
	if (Global_17238.f_5386[iVar0])
	{
		unk_0xBEE99C97A1B87F95(9, 0);
		Global_17238.f_5386[iVar0] = 0;
	}
	if (Global_17238.f_5379[iVar0])
	{
		unk_0x9B331DCFDFC55491("CommonMenu");
		Global_17238.f_5379[iVar0] = 0;
	}
	if (bParam0)
	{
		func_578(&(Global_17238.f_5418[iVar0 /*10*/]));
		Global_17238.f_5479[iVar0] = 0;
	}
	else
	{
		Global_17238.f_5479[iVar0] = 0;
	}
}

void func_578(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xCC8E3BAC62A29F42(*uParam0))
		{
			unk_0x4B6F01DE8CCE643E(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_579(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x1C6DF6AD69BE853E() && unk_0xA360A5024482E898())
		{
			iParam2 = unk_0xC74204D062B48807();
		}
	}
	StringCopy(&cVar0, unk_0x11CA2334E341B424(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x8DAF7A748E41AD46(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17238.f_5479[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17238.f_5479[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17238.f_5479[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_580()
{
}

void func_581(int iParam0)
{
	struct<46> Var0;
	int iVar46;
	var uVar47;
	
	Var0 = -1;
	Var0.f_21 = -1082130432;
	Var0.f_22 = 3;
	Var0.f_45 = -1;
	if (Global_2428865.f_545.f_9 == 0)
	{
		Global_1690188.f_1473 = 0;
	}
	iVar46 = 0;
	while (iVar46 <= 31)
	{
		uVar47 = Global_1690188[iVar46 /*46*/].f_3;
		Global_1690188[iVar46 /*46*/] = { Var0 };
		if (func_582())
		{
			Global_1690188[iVar46 /*46*/].f_3 = uVar47;
		}
		Global_1690188[iVar46 /*46*/].f_1 = func_123();
		Global_1690188[iVar46 /*46*/] = -1;
		Global_1690188[iVar46 /*46*/].f_2 = -1;
		iVar46++;
	}
	if ((!func_582() && !func_589()) && iParam0)
	{
		Global_1690188.f_1475 = 0;
		Global_1690188.f_1476 = 0;
	}
}

bool func_582()
{
	return unk_0x236D8AD7EE179F46(Global_2428865.f_545.f_1, 0);
}

void func_583(bool bParam0)
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

void func_584(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xCEC9D74C9FF51C8C(unk_0x1643DC5B15755CD2(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x8B4662A1D2DF932C(unk_0x1643DC5B15755CD2(iParam0), "MPBitset");
	}
	unk_0xC69E84EBBD7166E6(&iVar0, iParam1);
	unk_0xEAE276D4D897C5F4(unk_0x1643DC5B15755CD2(iParam0), "MPBitset", iVar0);
}

bool func_585()
{
	return Global_1690163.f_3;
}

bool func_586()
{
	return Global_2435406.f_7;
}

bool func_587()
{
	return unk_0x236D8AD7EE179F46(Global_2428865.f_26.f_3, 8);
}

void func_588()
{
	Global_2428865.f_26.f_49 = 0;
}

bool func_589()
{
	return unk_0x236D8AD7EE179F46(Global_2428865.f_26.f_3, 0);
}

void func_590()
{
	unk_0xC69E84EBBD7166E6(&(Global_967557.f_8), 8);
}

void func_591(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_13.f_1), 0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_13.f_1), 0);
	}
}

void func_592(int iParam0)
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (((Global_2429626.f_3196 != 0 && Global_2429626.f_3196.f_1 != 0) && Global_2429626.f_3196.f_2 != 0) && Global_2429626.f_3196.f_3 != 0)
		{
			unk_0x044B276976A343A6(Global_2429626.f_3196, Global_2429626.f_3196.f_1, Global_2429626.f_3196.f_2, Global_2429626.f_3196.f_3, iParam0);
		}
	}
	func_593();
}

void func_593()
{
	Global_2429626.f_3196 = 0;
	Global_2429626.f_3196.f_1 = 0;
	Global_2429626.f_3196.f_2 = 0;
	Global_2429626.f_3196.f_3 = 0;
}

void func_594()
{
	Global_2429626.f_1.f_2800 = 1;
}

bool func_595()
{
	return unk_0x236D8AD7EE179F46(Global_2429626.f_1.f_2808, 12);
}

void func_596(int iParam0)
{
	if (!func_589() || iParam0)
	{
		Global_1574302 = 0;
		Global_1574301 = 0;
	}
}

void func_597(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;
	
	Global_2428865.f_26 = -1;
	Global_2428865.f_26.f_55 = -1;
	Global_2428865.f_26.f_1 = -1;
	Global_2428865.f_26.f_4 = 0;
	Global_2428865.f_26.f_2 = 0;
	Global_2428865.f_26.f_3 = 0;
	Global_2428865.f_26.f_40 = -1;
	Global_2428865.f_26.f_5 = { Var0 };
	Global_2428865.f_26.f_53 = 0;
	Global_2428865.f_26.f_129 = 0;
	Global_2428865.f_26.f_344 = 0;
	Global_2428865.f_26.f_54 = 0;
	Global_2428865.f_26.f_130 = 0;
	Global_2428865.f_26.f_345 = 0;
	Global_2428865.f_26.f_518 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2428865.f_26.f_476[iVar6] = 0;
		iVar6++;
	}
	Global_2428865.f_26.f_52 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2428865.f_26.f_56[iVar6] = 0;
		iVar6++;
	}
	Global_2428865.f_26.f_128 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2428865.f_26.f_131[iVar6] = 0;
		iVar6++;
	}
	Global_2428865.f_26.f_343 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2428865.f_26.f_346[iVar6] = 0;
		Global_2428865.f_26.f_361[iVar6] = 0;
		Global_2428865.f_26.f_391[iVar6 /*6*/] = { Var0 };
		Global_2428865.f_26.f_376[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2428865.f_26.f_42[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2428865.f_26.f_497 = 0;
			Global_2428865.f_26.f_498 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2428865.f_26.f_505[iVar6] = -1;
				Global_2428865.f_26.f_511[iVar6] = -1;
				iVar6++;
			}
			Global_2428865.f_26.f_47 = 0;
			Global_2428865.f_26.f_11 = { Var0 };
			Global_2428865.f_26.f_51 = 0;
			Global_2428865.f_26.f_491 = { 0f, 0f, 0f };
			Global_2428865.f_26.f_494 = { 0f, 0f, 0f };
			Global_2428865.f_26.f_50 = 0;
			Global_2428865.f_26.f_49 = 0;
		}
	}
}

void func_598()
{
	Global_2435406.f_8 = 0;
	Global_2435406.f_7 = 0;
}

bool func_599()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/] == 5;
}

void func_600()
{
	Global_1699240.f_1774 = 0;
}

void func_601()
{
	Global_2428865.f_708 = 0;
}

bool func_602()
{
	return Global_2428865.f_708;
}

void func_603()
{
	Global_14559 = 0;
	func_604();
}

void func_604()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

bool func_605(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

bool func_606(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

void func_607()
{
	Global_2428865.f_575 = 0;
}

void func_608()
{
	struct<11> Var0;
	int iVar11;
	
	Var0.f_3 = -1;
	iVar11 = unk_0x1329891157A54C63();
	if (iVar11 != -1)
	{
		Global_1605110[iVar11 /*33*/].f_22 = { Var0 };
	}
}

void func_609()
{
	Global_1690163.f_7 = 0;
}

void func_610(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2428865.f_545.f_3 = { Var0 };
	Global_2428865.f_545 = 0;
	Global_2428865.f_545.f_1 = 0;
	Global_2428865.f_545.f_12 = 0;
	if (bParam0)
	{
		Global_2428865.f_545.f_2 = 0;
		Global_2428865.f_545.f_13 = 0;
		Global_2428865.f_545.f_14 = 0;
		Global_2394685 = 0;
		if (bParam1)
		{
			Global_2428865.f_545.f_9 = 0;
			Global_2428865.f_545.f_10 = 0;
			Global_2428865.f_545.f_11 = 0;
		}
		if (iParam2 && !unk_0x726DA50057167075())
		{
			Global_1690188.f_1475 = 0;
			Global_1690188.f_1476 = 0;
		}
		if (unk_0x1329891157A54C63() != -1)
		{
			Global_1605110[unk_0x1329891157A54C63() /*33*/].f_22.f_1 = 0;
			Global_1605110[unk_0x1329891157A54C63() /*33*/].f_22.f_5 = 0;
		}
	}
}

void func_611()
{
	Global_2428865.f_545.f_12 = 0;
}

bool func_612()
{
	return Global_2428865.f_545.f_12;
}

void func_613()
{
	unk_0xC69E84EBBD7166E6(&(Global_1605110[unk_0x1329891157A54C63() /*33*/].f_18), 3);
}

void func_614()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1574313[iVar0] = 0;
		iVar0++;
	}
}

void func_615()
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	if (iVar0 != -1)
	{
		Global_1605110[iVar0 /*33*/].f_22.f_4 = 0;
	}
}

void func_616()
{
	Global_2437028 = 0;
	Global_2437029 = 0;
	Global_2437030 = 0;
	Global_2437031 = 0;
}

void func_617()
{
	Global_2428865.f_26.f_48 = 0;
}

void func_618()
{
	Global_2428865.f_26.f_50 = 0;
}

void func_619(int iParam0)
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		unk_0x153179EB871CA796(iParam0);
	}
}

void func_620()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!unk_0xB318FDA0D1ABDB20(&(Global_1573472[iVar0 /*6*/])))
		{
			StringCopy(&(Global_1573472[iVar0 /*6*/]), "", 24);
		}
		iVar0++;
	}
}

void func_621(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x04EFA8D3BE8500E7();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!unk_0x236D8AD7EE179F46(Global_1585045[iVar0 /*400*/].f_184, 0))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_1585045[iVar0 /*400*/].f_184), 0);
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_1585045[iVar0 /*400*/].f_184, 0))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar0 /*400*/].f_184), 0);
		}
	}
}

void func_622()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_625(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1707570.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_624();
	func_623();
	Global_1707570 = 0;
}

void func_623()
{
	Global_1707570.f_4 = 0;
}

void func_624()
{
	Global_1707570.f_3 = 0;
}

void func_625(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1707570.f_5[iParam0 /*53*/] = { Var0 };
}

void func_626()
{
	unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18), 20);
}

void func_627(int iParam0, bool bParam1)
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

void func_628()
{
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_734), 3);
}

void func_629(bool bParam0, int iParam1)
{
	func_203();
	if (bParam0)
	{
		func_292(1);
		unk_0xB8BB626315D394F5(1);
	}
	unk_0xD1C83BD797927DD5();
	func_198();
	unk_0x938EA0FA9A1D6ABD(0);
	func_232(0, 1, 1, 0);
	func_632();
	func_186(12, 0, -1);
	func_187(1);
	unk_0x1448B1808E373DDE(0, -1);
	unk_0x3BF4F473786B0150(1);
	unk_0xF1BC58601CA4A5C7(1);
	func_631();
	unk_0x094B864326B5FE96(1);
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0xD10899F3A1372292())
		{
			unk_0xB6FBBE4CF8110C93(0, 0);
		}
	}
	func_238(0);
	if (((func_107() == 0 && func_630() == 0) && iParam1) && !func_233(unk_0x1329891157A54C63()))
	{
		func_323(unk_0x1329891157A54C63(), 1, 0);
	}
	Global_2422670.f_3127 = 0;
}

bool func_630()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 7);
}

void func_631()
{
	Global_17099.f_5 = 0;
}

void func_632()
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

void func_633(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312446)
	{
		if (!func_667())
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				Global_1573858[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_665(unk_0x1329891157A54C63(), bParam0);
	iVar2 = func_663(iVar1, bParam0);
	if (!func_662(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			Global_1573858[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1573858[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 156)
	{
		iVar3 = func_661(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_659(iVar4))
			{
				func_650(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_644(func_645(59, 0), 0);
	func_642(func_645(135, 0), 1);
	func_641(func_645(22, 0), func_645(73, 0));
	if (func_667())
	{
		if (func_442(77, -1))
		{
			func_640(1);
			func_639(1);
		}
	}
	if (func_638() || func_637())
	{
		func_30(77, 1, -1, 1);
		if (unk_0x1C6DF6AD69BE853E())
		{
			func_634(28, 1, 0);
			func_634(29, 1, 0);
			func_634(30, 1, 0);
			func_634(31, 1, 0);
			func_634(32, 1, 0);
			func_634(33, 1, 0);
			func_634(34, 1, 0);
			func_634(35, 1, 0);
			func_634(36, 1, 0);
			func_634(37, 1, 0);
			func_634(38, 1, 0);
		}
	}
	if (func_645(21, 0))
	{
		unk_0x0A69D07CDC971572(0);
	}
	Global_975763 = 0;
}

void func_634(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 0, 0))
		{
			if (iParam2 && Global_90861.f_17[iParam0])
			{
				if (func_636(iParam0) == 3 && !func_22(iParam0))
				{
					func_635(iParam0);
					func_58(iParam0, 0, 0);
					func_56(iParam0, 1, 0);
					func_356(iParam0);
				}
				else
				{
					func_58(iParam0, 1, 0);
					func_356(iParam0);
				}
			}
			else
			{
				func_58(iParam0, 0, 0);
				func_56(iParam0, 1, 0);
				func_356(iParam0);
			}
		}
		else
		{
			func_56(iParam0, 1, 0);
			func_356(iParam0);
		}
	}
	else if (func_23(iParam0, 0, 0))
	{
		func_56(iParam0, 0, 0);
		func_56(iParam0, 1, 0);
		func_356(iParam0);
	}
}

void func_635(int iParam0)
{
	if (Global_90861.f_17[iParam0])
	{
		func_58(iParam0, 10, 1);
		func_58(iParam0, 19, 1);
	}
}

int func_636(int iParam0)
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
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

bool func_637()
{
	return Global_1315880;
}

bool func_638()
{
	return Global_1315882;
}

void func_639(bool bParam0)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	func_634(28, bParam0, 0);
	func_634(30, bParam0, 0);
	func_634(31, bParam0, 0);
	func_634(33, bParam0, 0);
	func_634(34, bParam0, 0);
	func_634(38, bParam0, 0);
}

void func_640(bool bParam0)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	func_634(29, bParam0, 0);
	func_634(32, bParam0, 0);
	func_634(36, bParam0, 0);
	func_634(35, bParam0, 0);
	func_634(37, bParam0, 0);
}

void func_641(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_634(0, bParam0, 1);
	func_634(1, bParam0, 1);
	func_634(2, bParam0, 1);
	func_634(3, bParam0, 1);
	func_634(4, bParam0, 1);
	func_634(5, bParam0, 1);
	func_634(6, bParam0, 1);
	func_634(7, bParam0, bVar0);
	func_634(8, bParam0, 1);
	func_634(9, bParam0, 1);
	func_634(10, bParam0, 1);
	func_634(11, bParam0, 1);
	func_634(12, bParam0, bVar0);
	func_634(13, bParam0, 1);
	func_634(21, bParam0, 1);
	func_634(14, bParam0, 1);
	func_634(15, bParam0, 1);
	func_634(16, bParam0, 1);
	func_634(17, bParam0, 1);
	func_634(18, bParam0, 1);
	func_634(19, bParam0, 1);
	func_634(20, bParam0, 1);
	func_634(22, bParam0, 1);
	func_634(23, bParam0, 1);
	func_634(24, bParam0, 1);
	func_634(25, bParam0, 1);
	func_634(26, bParam0, 1);
	func_634(27, bParam0, 1);
	func_357(1, !bParam1);
	if (!bVar0)
	{
		func_635(12);
	}
}

void func_642(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	uVar0 = func_643(0);
	if (Global_262145.f_63 == 1 && func_645(135, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_634(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(44))
		{
			func_635(44);
		}
	}
	if (bParam0)
	{
		if (func_545(0) > 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1627), 10);
		}
	}
}

int func_643(bool bParam0)
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (func_638())
	{
		return 1;
	}
	if (func_637())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_1618, 26))
		{
			uVar0 = func_24(1181, -1, 0);
			if (!unk_0x236D8AD7EE179F46(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_442(122, -1);
}

void func_644(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	uVar0 = func_643(0);
	func_634(39, bParam0, 0);
	func_634(40, bParam0, 0);
	func_634(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_634(43, bParam0, 0);
		func_634(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(39))
		{
			func_635(39);
		}
		if (!func_22(40))
		{
			func_635(40);
		}
		if (!func_22(41))
		{
			func_635(41);
		}
		if (!func_22(42))
		{
			func_635(42);
		}
		if (!func_22(43))
		{
			func_635(43);
		}
	}
}

bool func_645(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6049 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_647(unk_0x1329891157A54C63(), 85))
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
		if (Global_262145.f_4850 == 1)
		{
			return 1;
		}
	}
	if (func_638() || func_637())
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
			if (func_646())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0x236D8AD7EE179F46(Global_1573858[iVar1], iVar0);
}

int func_646()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1623, 23))
	{
		return 1;
	}
	if (func_638())
	{
		return 1;
	}
	if (func_637())
	{
		return 1;
	}
	uVar0 = Global_1343666[func_25(-1)];
	if (unk_0x236D8AD7EE179F46(uVar0, 7))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1623), 23);
		return 1;
	}
	return 0;
}

bool func_647(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_667())
	{
		return 0;
	}
	if (func_649())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_648(iParam1);
	iVar1 = uVar0;
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_314, iVar1);
}

int func_648(int iParam0)
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

bool func_649()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_132, 3);
}

void func_650(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_658(-1))
			{
				if (!func_667())
				{
					return;
				}
			}
			if (!func_658(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_657() && !func_656())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_655())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_658(-1))
				{
					if (!func_651())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0xF3148AAF69AF9CBC(&(Global_1573858[iVar1]), iVar0);
	}
}

int func_651()
{
	var uVar0;
	
	if (func_654(unk_0x1329891157A54C63()))
	{
		return 1;
	}
	uVar0 = Global_1343666[func_25(-1)];
	if (unk_0x236D8AD7EE179F46(uVar0, 2))
	{
		func_652(1);
		return 1;
	}
	return 0;
}

void func_652(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 25))
		{
			func_653(unk_0x1329891157A54C63(), 12);
			unk_0xF3148AAF69AF9CBC(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 25);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 25))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128), 25);
	}
}

void func_653(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_648(iParam1);
	iVar1 = uVar0;
	unk_0xF3148AAF69AF9CBC(&(Global_1585045[iParam0 /*400*/].f_314), iVar1);
}

bool func_654(int iParam0)
{
	if (func_638())
	{
		return 1;
	}
	if (func_637())
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_128, 25);
}

int func_655()
{
	var uVar0;
	
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1623, 6))
	{
		return 1;
	}
	uVar0 = Global_1343666[func_25(-1)];
	if (unk_0x236D8AD7EE179F46(uVar0, 0))
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_1623, 6))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1623), 6);
		}
		return 1;
	}
	if (func_638())
	{
		return 1;
	}
	if (func_637())
	{
		return 1;
	}
	return 0;
}

bool func_656()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_132, 7);
}

int func_657()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_638())
	{
		return 1;
	}
	if (func_637())
	{
		return 1;
	}
	return func_442(121, -1);
}

bool func_658(int iParam0)
{
	return func_442(123, iParam0);
}

int func_659(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_638())
	{
		return 1;
	}
	if (func_637())
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
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			uVar0 = func_24(func_660(iParam0), -1, 0);
			if (unk_0x236D8AD7EE179F46(uVar0, iVar1))
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

int func_660(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1190;
		
		case 1:
			return 1191;
		
		case 2:
			return 1192;
		
		case 3:
			return 1193;
		
		case 4:
			return 1194;
		
		default:
	}
	return 1190;
}

int func_661(int iParam0)
{
	if (func_638())
	{
		return 1;
	}
	if (func_637())
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
			if (!func_658(-1))
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

int func_662(int iParam0)
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_638())
	{
		return 1;
	}
	if (func_637())
	{
		return 1;
	}
	return func_442(119, iParam0);
}

int func_663(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_664(iParam0, 0);
}

int func_664(int iParam0, int iParam1)
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
		if (Global_272182[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_272182[iVar3] < iParam0)
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

int func_665(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_666(iParam0);
}

int func_666(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return Global_1343672[func_25(-1)];
			}
			else if (func_53(iParam0))
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1343672[func_25(-1)];
	}
	return 0;
}

int func_667()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_638())
	{
		return 1;
	}
	if (func_637())
	{
		return 1;
	}
	return func_442(120, -1);
}

int func_668()
{
	bool bVar0;
	
	func_673(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_425())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_672())
	{
		return 1;
	}
	if (func_671(157))
	{
		if (!func_670())
		{
			return 1;
		}
	}
	if (func_671(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_669() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_669()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_669()
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

bool func_670()
{
	return Global_2428865.f_573;
}

int func_671(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_672()
{
	return Global_2436988;
}

void func_673(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_674(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_674(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(iVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(iVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_675(uVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_675(int iParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(iParam0))
		{
			if (unk_0x28BE3924E7CDB27F(iParam0))
			{
				unk_0xD768713E73165208(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(iParam0, 0))
		{
			if (unk_0x4D2386673BCED434(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_676()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_677(struct<17> Param0, var uParam17, var uParam18, var uParam19)
{
	var uVar0;
	
	unk_0xBA029707F4D8FFB0(2, 0, Param0.f_16);
	func_682(0, -1, 0);
	unk_0x19F630B59442E836(&Local_561, 7);
	unk_0xCBCBE0D8DD0EF168(&Local_733, 11);
	Global_1585045[unk_0x1329891157A54C63() /*400*/] = 16;
	if (bLocal_752)
	{
		if (!unk_0x29AFA2493D7C23D0() && !unk_0xC584A413BCB2AA39())
		{
			unk_0x3B283FEBA87FFBEB(800);
		}
		if (!unk_0x9B20331E99DD1C1C())
		{
			if (!unk_0xB692CF9D7FE78958())
			{
				uVar0 = unk_0x1329891157A54C63() + 32;
				unk_0xE6A9902E43C5B000(1, uVar0);
				func_190(1);
			}
		}
	}
	unk_0xAADD6AD1A7B6D4E2(1);
	unk_0xCD9A6588DBAF710A(1);
	if (!func_681())
	{
		func_367(0);
	}
	unk_0xE6E19E3BBABCBC24(0);
	func_627(iLocal_86, 1);
	func_369(1);
	if (!bLocal_752)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			func_323(unk_0x1329891157A54C63(), 1, 0);
		}
	}
	Global_2451473.f_1618 = 0;
	unk_0x0C17E2FCF3ABF5A3(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, 0, 0);
	func_680();
	func_678();
	Local_733[unk_0x519AAFF77CC141DF() /*5*/] = 0;
}

void func_678()
{
	unk_0x1D29878D06EA4C78(1);
	func_679(1, -1);
	unk_0xBA11DCED68364FD0(1);
	if (func_442(133, -1))
	{
		func_30(133, 0, -1, 1);
	}
	Global_2428865.f_617 = 1;
}

void func_679(int iParam0, int iParam1)
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
			unk_0x0D508D54D1277DCB(0, iParam1);
			break;
		
		default:
			uVar1 = func_383(iParam1);
			iVar0 = unk_0xE19FDB171CBF814A(uVar1);
			if (unk_0x236D8AD7EE179F46(iVar0, iParam0))
			{
				unk_0xC69E84EBBD7166E6(&iVar0, iParam0);
				unk_0x0D508D54D1277DCB(iVar0, iParam1);
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

void func_680()
{
	unk_0xEAD984C2869B8B7C(&uLocal_746);
	unk_0x98046F3D16B9CF76(0, 0, 0);
	unk_0xBF7CD5D6793CA1E8(0, 17.0693f, -1115.935f, 28.7968f, 0);
	unk_0x56D9ED1541046AF6(uLocal_746);
}

int func_681()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 0;
		}
		if (unk_0x299162DAA4768797())
		{
			return 1;
		}
		if (func_425())
		{
			return 0;
		}
		if (func_671(155))
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

int func_682(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_683();
			}
			else
			{
				return 0;
			}
		}
		if (!func_349())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_683();
					}
					else
					{
						return 0;
					}
				}
				if (func_425())
				{
					if (!bParam2)
					{
						func_683();
					}
					else
					{
						return 0;
					}
				}
				if (func_671(155))
				{
					if (!bParam2)
					{
						func_683();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x25E16CB232F8AB91())
			{
				if (!bParam2)
				{
					func_683();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (!bParam2)
			{
				func_683();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x25E16CB232F8AB91())
	{
		if (!bParam2)
		{
			func_683();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_683()
{
	unk_0xC23A229F78DAD92A();
}

