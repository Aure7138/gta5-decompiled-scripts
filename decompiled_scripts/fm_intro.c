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
	if (unk_0x4B69FB3A5B09A1BA())
	{
		func_660(ScriptParam_0);
	}
	while (true)
	{
		func_659();
		if (func_651())
		{
			func_366(1);
		}
		if (func_363(0))
		{
			Local_733[unk_0x9725084D4DFE8258() /*5*/] = 3;
		}
		if (func_362(unk_0x9725084D4DFE8258()) > -1)
		{
			unk_0xA067756A5A1E98E5(unk_0xCFC72E446B0B3AD7());
		}
		switch (func_361(unk_0x9725084D4DFE8258()))
		{
			case 0:
				if (!unk_0x94E72F17611BCD3C(uLocal_744, 10))
				{
					if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
					{
						unk_0xEDB9A377CD8B7F03(&uLocal_744, 10);
					}
				}
				unk_0x9C53AD1E8A38ADEE("FMINT", 0);
				if (func_360() && unk_0x2508FF4D4BF655CE("FMINT", 0))
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
						Local_733[unk_0x9725084D4DFE8258() /*5*/] = 2;
						if (bLocal_752)
						{
							Local_733[unk_0x9725084D4DFE8258() /*5*/].f_2 = -2;
						}
						else
						{
							Local_733[unk_0x9725084D4DFE8258() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_359() == 4)
				{
					Local_733[unk_0x9725084D4DFE8258() /*5*/] = 4;
				}
				if (func_359() == 6 && Local_733[unk_0x9725084D4DFE8258() /*5*/] < 4)
				{
					Local_733[unk_0x9725084D4DFE8258() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_337();
				func_20();
				if (func_359() == 4)
				{
					Local_733[unk_0x9725084D4DFE8258() /*5*/] = 4;
				}
				if (func_359() == 6 && Local_733[unk_0x9725084D4DFE8258() /*5*/] < 4)
				{
					Local_733[unk_0x9725084D4DFE8258() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_733[unk_0x9725084D4DFE8258() /*5*/] = 5;
				break;
			
			case 5:
				func_18(&(Local_561.f_5));
				if (func_17(&(Local_561.f_5)))
				{
					Local_733[unk_0x9725084D4DFE8258() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_10(iLocal_85);
				Local_733[unk_0x9725084D4DFE8258() /*5*/] = 6;
			
			case 6:
				func_366(0);
				break;
		}
		if (unk_0x7EF90A4891193127())
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
		if (unk_0x94E72F17611BCD3C(Local_561.f_1, 1))
		{
			return 1;
		}
	}
	else if (unk_0x94E72F17611BCD3C(Local_561.f_1, 2))
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
	if (unk_0x7EF90A4891193127())
	{
		if (!unk_0x94E72F17611BCD3C(Local_561.f_1, 3))
		{
			if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_4, 0))
			{
				unk_0xEDB9A377CD8B7F03(&(Local_561.f_1), 3);
			}
		}
		if (!unk_0x94E72F17611BCD3C(Local_561.f_1, 4))
		{
			if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_4, 2))
			{
				unk_0xEDB9A377CD8B7F03(&(Local_561.f_1), 4);
			}
		}
		if (!unk_0x94E72F17611BCD3C(Local_561.f_1, 5))
		{
			if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 3))
			{
				unk_0xEDB9A377CD8B7F03(&(Local_561.f_1), 5);
			}
		}
		if (!unk_0x94E72F17611BCD3C(Local_561.f_1, 6))
		{
			if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 4))
			{
				unk_0xEDB9A377CD8B7F03(&(Local_561.f_1), 6);
			}
		}
		if (!unk_0x94E72F17611BCD3C(Local_561.f_1, 7))
		{
			if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 5))
			{
				unk_0xEDB9A377CD8B7F03(&(Local_561.f_1), 7);
			}
		}
		if (!unk_0x94E72F17611BCD3C(Local_561.f_1, 8))
		{
			if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 6))
			{
				unk_0xEDB9A377CD8B7F03(&(Local_561.f_1), 8);
			}
		}
		switch (Local_561.f_2)
		{
			case 0:
				if (unk_0x94E72F17611BCD3C(Local_561.f_1, 3))
				{
					if (func_4(&(Local_561.f_3), &(Local_561.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_568))
					{
						unk_0x6FD45FA39DD18625(unk_0x1349078BE884A8E7(Local_561.f_3), 1, 0);
						Local_561.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0x94E72F17611BCD3C(Local_561.f_1, 4))
				{
					Local_561.f_2 = 1;
				}
				break;
			
			case 1:
				if (unk_0x94E72F17611BCD3C(Local_561.f_1, 5))
				{
					Local_561.f_2 = 3;
				}
				break;
			
			case 3:
				if (unk_0x94E72F17611BCD3C(Local_561.f_1, 6))
				{
					Local_561.f_2 = 4;
				}
				break;
			
			case 4:
				if (unk_0x94E72F17611BCD3C(Local_561.f_1, 7))
				{
					Local_561.f_2 = 5;
				}
				break;
			
			case 5:
				if (unk_0x94E72F17611BCD3C(Local_561.f_1, 8))
				{
					Local_561.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam5, var uParam6)
{
	if (func_7(Global_2446533.f_733) && func_7(Global_2446533.f_734))
	{
		if (!unk_0x53C457DC61CBEBCA(*uParam0))
		{
			if (func_6(uParam0, Global_2446533.f_733, Param2, fParam5, 1, 1, 1, 0, 1, 1))
			{
				unk_0x6C8D1C157ED4B832(unk_0x1349078BE884A8E7(*uParam0), 1);
			}
		}
		if (!unk_0x53C457DC61CBEBCA(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2446533.f_734, -1, 1, 1, 1))
			{
				unk_0x4A1AC49BA4A747F7(unk_0x3CD0885BEAA1EC4B(*uParam1), 1);
				unk_0x0880E86251A44B7F(Global_2446533.f_733);
				unk_0x0880E86251A44B7F(Global_2446533.f_734);
				unk_0x185D18DA9BC98757(unk_0x1349078BE884A8E7(*uParam0), 0);
				unk_0xC5E1B2288C6D4382(unk_0x3CD0885BEAA1EC4B(*uParam1), 1);
				func_358(uParam6, 8, unk_0x3CD0885BEAA1EC4B(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!unk_0x53C457DC61CBEBCA(*uParam0) || !unk_0x53C457DC61CBEBCA(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x42A900287C0ACC6F(1))
	{
		return 0;
	}
	if (!unk_0x53C457DC61CBEBCA(uParam1))
	{
		return 0;
	}
	if (!unk_0xFC38B241541883D3(unk_0x1349078BE884A8E7(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xFC2961E139989126(unk_0xAD7526C9AA33EE39(unk_0x1349078BE884A8E7(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		unk_0x185D18DA9BC98757(unk_0x3CD0885BEAA1EC4B(*uParam0), iParam7);
		if (unk_0xCD22EDB73BA42551(unk_0x3CD0885BEAA1EC4B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x45A6B51275211E6D(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x9AD64775663C0BCF(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x8F9D4AA83F37F6E2(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xB0694AD0A3BB8936(iParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = unk_0xDBDB9A424A3C41D3(uVar0);
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		unk_0x185D18DA9BC98757(uVar0, iParam10);
		if (unk_0xCD22EDB73BA42551(iVar0))
		{
			if (bParam8)
			{
				unk_0x45A6B51275211E6D(*uParam0, 1);
			}
			else
			{
				unk_0x45A6B51275211E6D(*uParam0, 0);
			}
		}
		unk_0x042E8EAB80B3768F(iVar0, iParam9);
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
	unk_0x3BC6D217451D6BB7(iParam0);
	return unk_0x149162179DBAEDB0(iParam0);
}

void func_8()
{
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar0)))
		{
			if (bLocal_750)
			{
				if (!unk_0x94E72F17611BCD3C(Local_561.f_1, 2))
				{
					if (unk_0x94E72F17611BCD3C(Local_733[iVar0 /*5*/].f_3, 2))
					{
						unk_0xEDB9A377CD8B7F03(&(Local_561.f_1), 2);
					}
				}
			}
			else if (!unk_0x94E72F17611BCD3C(Local_561.f_1, 1))
			{
				if (unk_0x94E72F17611BCD3C(Local_733[iVar0 /*5*/].f_3, 1))
				{
					unk_0xEDB9A377CD8B7F03(&(Local_561.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_10(int iParam0)
{
	if (!func_13(unk_0xCFC72E446B0B3AD7(), 1))
	{
		return;
	}
	if (!func_11(unk_0xCFC72E446B0B3AD7()) == iParam0)
	{
		return;
	}
}

int func_11(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2414035[iParam0 /*254*/].f_1;
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xCB29E1C3D086FBAE(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
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
	if (Global_1312449 != 0)
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
	if (Global_1582869[iParam0 /*332*/] == -1)
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
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_13.f_1, 0);
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0)) >= 1000)
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
		if (unk_0x7EF90A4891193127())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4B69FB3A5B09A1BA() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6A8628B6E9F055B3();
			}
			else
			{
				*uParam0 = unk_0x4FEA29C1086C638D();
			}
		}
		else
		{
			*uParam0 = unk_0x17103F66FBB44C3C();
		}
		uParam0->f_1 = 1;
	}
}

void func_20()
{
	switch (func_362(unk_0x9725084D4DFE8258()))
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
				unk_0xEDB9A377CD8B7F03(&(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3), 2);
				Local_733[unk_0x9725084D4DFE8258() /*5*/].f_2 = 99;
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
		return unk_0x94E72F17611BCD3C(Global_90014.f_1272[iParam0], iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_28() == 0)
		{
			return unk_0x94E72F17611BCD3C(func_24(func_27(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_668[iParam0], iParam1);
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
	uVar0 = Global_2454588[iParam0 /*6*/][func_25(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
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
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

int func_26()
{
	return Global_1312737;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 819;
			break;
		
		case 1:
			return 820;
			break;
		
		case 2:
			return 821;
			break;
		
		case 3:
			return 822;
			break;
		
		case 4:
			return 823;
			break;
		
		case 5:
			return 824;
			break;
		
		case 6:
			return 825;
			break;
		
		case 7:
			return 826;
			break;
		
		case 8:
			return 827;
			break;
		
		case 9:
			return 828;
			break;
		
		case 10:
			return 829;
			break;
		
		case 11:
			return 830;
			break;
		
		case 12:
			return 831;
			break;
		
		case 13:
			return 832;
			break;
		
		case 14:
			return 833;
			break;
		
		case 15:
			return 835;
			break;
		
		case 16:
			return 836;
			break;
		
		case 17:
			return 837;
			break;
		
		case 18:
			return 838;
			break;
		
		case 19:
			return 839;
			break;
		
		case 20:
			return 840;
			break;
		
		case 21:
			return 841;
			break;
		
		case 22:
			return 842;
			break;
		
		case 23:
			return 843;
			break;
		
		case 24:
			return 844;
			break;
		
		case 25:
			return 845;
			break;
		
		case 26:
			return 846;
			break;
		
		case 27:
			return 847;
			break;
		
		case 28:
			return 848;
			break;
		
		case 29:
			return 849;
			break;
		
		case 30:
			return 850;
			break;
		
		case 31:
			return 851;
			break;
		
		case 32:
			return 852;
			break;
		
		case 33:
			return 853;
			break;
		
		case 34:
			return 854;
			break;
		
		case 35:
			return 855;
			break;
		
		case 36:
			return 856;
			break;
		
		case 37:
			return 857;
			break;
		
		case 38:
			return 858;
			break;
		
		case 39:
			return 859;
			break;
		
		case 40:
			return 863;
			break;
		
		case 41:
			return 864;
			break;
		
		case 42:
			return 865;
			break;
		
		case 43:
			return 866;
			break;
		
		default:
			break;
	}
	return 3015;
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
		if (func_12(unk_0xCFC72E446B0B3AD7(), 1, 1))
		{
			func_181(0);
		}
	}
	if (!func_180(&uLocal_386))
	{
		func_19(&uLocal_386, 0, 0);
	}
	if (!unk_0x94E72F17611BCD3C(uLocal_744, 21))
	{
		unk_0xEDB9A377CD8B7F03(&uLocal_744, 21);
	}
	if (!unk_0x94E72F17611BCD3C(uLocal_744, 3))
	{
		if (!func_180(&uLocal_384))
		{
			func_19(&uLocal_384, 0, 0);
		}
		else if (unk_0x94E72F17611BCD3C(uLocal_744, 21))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
				{
					if (func_179(&uLocal_384, 3000, 0))
					{
						unk_0xEDB9A377CD8B7F03(&uLocal_744, 3);
					}
				}
			}
		}
		if (func_179(&uLocal_384, 40000, 0))
		{
			unk_0xEDB9A377CD8B7F03(&uLocal_744, 3);
		}
	}
	else if (!unk_0x94E72F17611BCD3C(uLocal_744, 16))
	{
		if (!unk_0xC9EED58014EF1F40())
		{
			if (!unk_0xC8557993A78C1B3E())
			{
				unk_0xEDB9A377CD8B7F03(&uLocal_744, 16);
				func_178(&uLocal_384);
			}
		}
	}
	if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_4, 2))
	{
		if (!func_180(&uLocal_390))
		{
			func_19(&uLocal_390, 0, 0);
		}
		else if (!unk_0x94E72F17611BCD3C(uLocal_745, 1))
		{
			if (func_179(&uLocal_390, 10000, 0))
			{
				unk_0xEDB9A377CD8B7F03(&uLocal_745, 1);
				func_178(&uLocal_390);
			}
		}
		else if (unk_0x94E72F17611BCD3C(uLocal_744, 19))
		{
			if (!unk_0x94E72F17611BCD3C(uLocal_744, 18))
			{
				if (!func_176() || func_179(&uLocal_384, 5000, 0))
				{
					func_175(0);
					unk_0xEDB9A377CD8B7F03(&uLocal_744, 18);
					if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
					{
						unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 244, 0);
						unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 243, 0);
						unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 242, 0);
					}
				}
			}
		}
	}
	if (unk_0x94E72F17611BCD3C(uLocal_744, 18))
	{
		if (!unk_0x94E72F17611BCD3C(uLocal_744, 2))
		{
			if (unk_0x9685D9855970A029())
			{
				iVar0 = 0;
				unk_0xEDB9A377CD8B7F03(&iVar0, 3);
				unk_0xEDB9A377CD8B7F03(&iVar0, 4);
				unk_0xEDB9A377CD8B7F03(&iVar0, 5);
				if (func_86(&uLocal_396, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_85(1);
					unk_0xEDB9A377CD8B7F03(&uLocal_744, 2);
					if (!unk_0x94E72F17611BCD3C(uLocal_744, 20))
					{
						func_76(19, 3, 1);
						unk_0xEDB9A377CD8B7F03(&uLocal_744, 20);
					}
					if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
					{
						unk_0xE5A3DAF115E9C2FE(unk_0x9F92518438215DD0(), 1, 1);
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
					if (!unk_0x94E72F17611BCD3C(uLocal_744, 12))
					{
						if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
						{
							unk_0xE5A3DAF115E9C2FE(unk_0x9F92518438215DD0(), 0, 1);
							unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 244, 1);
							unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 243, 1);
							unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 242, 1);
						}
						unk_0xEDB9A377CD8B7F03(&uLocal_744, 12);
						func_19(&uLocal_388, 0, 0);
						func_19(&uLocal_392, 0, 0);
					}
				}
			}
		}
		if (unk_0x94E72F17611BCD3C(uLocal_744, 12))
		{
			if (!unk_0x94E72F17611BCD3C(uLocal_744, 17))
			{
				if (!unk_0xC8557993A78C1B3E())
				{
					func_68();
					unk_0xEDB9A377CD8B7F03(&uLocal_744, 17);
					func_178(&uLocal_384);
				}
			}
			else if (!func_176())
			{
				if (!unk_0x94E72F17611BCD3C(uLocal_744, 23))
				{
					if (func_179(&uLocal_392, 4500, 0))
					{
						unk_0xEDB9A377CD8B7F03(&uLocal_744, 23);
						unk_0xEDB9A377CD8B7F03(&(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3), 3);
					}
				}
				if (func_179(&uLocal_388, 15000, 0))
				{
					if (!unk_0x94E72F17611BCD3C(uLocal_744, 22))
					{
						unk_0xEDB9A377CD8B7F03(&uLocal_744, 22);
					}
				}
				if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) == 0)
				{
					if (unk_0x94E72F17611BCD3C(uLocal_744, 14))
					{
						unk_0xF76EE56D3E7DAF1B(&uLocal_744, 14);
					}
					if (!func_22(iLocal_86))
					{
						if (unk_0x94E72F17611BCD3C(uLocal_744, 13))
						{
							unk_0xF76EE56D3E7DAF1B(&uLocal_744, 13);
						}
						if (unk_0x94E72F17611BCD3C(uLocal_744, 25) || (!unk_0x94E72F17611BCD3C(uLocal_744, 25) && !unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0)))
						{
							if (!unk_0x94E72F17611BCD3C(uLocal_744, 0))
							{
								if (unk_0x94E72F17611BCD3C(uLocal_744, 15))
								{
									unk_0xF76EE56D3E7DAF1B(&uLocal_744, 15);
								}
								if (unk_0x2E6E8D325977B3EC(Global_90014.f_198[iLocal_86]))
								{
									func_62("GET_AMMU", 0);
									unk_0xEDB9A377CD8B7F03(&uLocal_744, 0);
									unk_0xEDB9A377CD8B7F03(&uLocal_744, 25);
									if (unk_0x2E6E8D325977B3EC(Global_90014.f_198[iLocal_86]))
									{
										if (!unk_0x94E72F17611BCD3C(Global_2446533.f_732, 2))
										{
											unk_0xD8EEE815F0120FCE(Global_90014.f_198[iLocal_86], 1);
										}
										func_354(iLocal_86, 1);
									}
								}
							}
							else if (unk_0x94E72F17611BCD3C(Global_2446533.f_732, 2))
							{
								if (unk_0x2E6E8D325977B3EC(Global_90014.f_198[iLocal_86]))
								{
									if (!unk_0x94E72F17611BCD3C(uLocal_744, 15))
									{
										unk_0xD8EEE815F0120FCE(Global_90014.f_198[iLocal_86], 0);
										unk_0xEDB9A377CD8B7F03(&uLocal_744, 15);
									}
								}
							}
							else if (unk_0x2E6E8D325977B3EC(Global_90014.f_198[iLocal_86]))
							{
								if (unk_0x94E72F17611BCD3C(uLocal_744, 15))
								{
									unk_0xD8EEE815F0120FCE(Global_90014.f_198[iLocal_86], 1);
									unk_0xF76EE56D3E7DAF1B(&uLocal_744, 15);
								}
							}
						}
					}
					else
					{
						if (unk_0x94E72F17611BCD3C(uLocal_744, 0))
						{
							unk_0xF76EE56D3E7DAF1B(&uLocal_744, 0);
						}
						if (!unk_0x94E72F17611BCD3C(uLocal_744, 13))
						{
							func_62("GET_GUN", 0);
							func_61(1);
							unk_0xEDB9A377CD8B7F03(&uLocal_744, 13);
						}
					}
				}
				else if (!unk_0x94E72F17611BCD3C(uLocal_744, 14))
				{
					unk_0x35611EEE7A1FFEDB(1);
					if (unk_0x94E72F17611BCD3C(uLocal_744, 0))
					{
						unk_0xF76EE56D3E7DAF1B(&uLocal_744, 0);
					}
					if (unk_0x94E72F17611BCD3C(uLocal_744, 13))
					{
						unk_0xF76EE56D3E7DAF1B(&uLocal_744, 13);
					}
					if (unk_0x2E6E8D325977B3EC(Global_90014.f_198[iLocal_86]))
					{
						unk_0xD8EEE815F0120FCE(Global_90014.f_198[iLocal_86], 0);
						unk_0xA0BFA3F6C43DF44B(Global_90014.f_198[iLocal_86], 0);
						func_354(iLocal_86, 0);
					}
					func_62("LOSE_COP", 0);
					unk_0xEDB9A377CD8B7F03(&uLocal_744, 14);
				}
			}
		}
	}
	else if (func_179(&uLocal_386, 300000, 0))
	{
		unk_0xEDB9A377CD8B7F03(&uLocal_744, 18);
	}
	if (!unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 0))
	{
		if (((unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_pistol"), 0) || unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_combatpistol"), 0)) || unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_appistol"), 0)) || unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_microsmg"), 0))
		{
			if (func_59())
			{
				func_54(1);
				unk_0xEDB9A377CD8B7F03(&(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3), 0);
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
	else if (!unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 1))
	{
		if (!func_40())
		{
			unk_0xEDB9A377CD8B7F03(&(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3), 1);
			func_33();
			func_32("FM_IHELP_AMMU", -1);
			if (!unk_0x94E72F17611BCD3C(uLocal_744, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
				unk_0xEDB9A377CD8B7F03(&uLocal_744, 31);
			}
			func_178(&uLocal_384);
			if (bLocal_750)
			{
				if (bLocal_751)
				{
					Local_733[unk_0x9725084D4DFE8258() /*5*/].f_2 = 3;
				}
				else
				{
					Local_733[unk_0x9725084D4DFE8258() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_733[unk_0x9725084D4DFE8258() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_31())
	{
		iVar0 = Global_2474108[iParam0 /*6*/][func_25(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xC715C0FD7A589EA7(iVar0, iParam1, iParam3);
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
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

void func_33()
{
	if (!func_39())
	{
		return;
	}
	if (!unk_0x398F092142D37E17(unk_0xC2E9075570B5D2B9()) == Global_1312579.f_7)
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
	
	bVar0 = unk_0x4B69FB3A5B09A1BA();
	Global_1312579 = 11;
	StringCopy(&(Global_1312579.f_1), "", 24);
	Global_1312579.f_7 = 0;
	if (bVar0)
	{
		Global_1312579.f_8 = unk_0x6A8628B6E9F055B3();
		Global_1312579.f_9 = unk_0x6A8628B6E9F055B3();
	}
	StringCopy(&(Global_1312579.f_10), "", 16);
	StringCopy(&(Global_1312579.f_14), "", 64);
	StringCopy(&(Global_1312579.f_30), "", 16);
	Global_1312579.f_34 = 0;
	Global_1312579.f_35 = 0;
	Global_1312579.f_36 = 0;
	Global_1312579.f_37 = -1;
	Global_1312579.f_38 = 0;
	Global_1312579.f_39 = 0;
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
		unk_0x18A11AF64F186F62(&(Global_1312579.f_10));
		func_37();
		unk_0x7C68BD68C4E013ED();
	}
}

void func_37()
{
	switch (Global_1312579)
	{
		case 11:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x25585F3578FE81FC(Global_1312579.f_34);
			return;
		
		case 2:
			unk_0x25585F3578FE81FC(Global_1312579.f_34);
			unk_0x25585F3578FE81FC(Global_1312579.f_35);
			return;
		
		case 3:
			unk_0xDB4BC767CEF09274(&(Global_1312579.f_14));
			return;
		
		case 4:
			unk_0xDB4BC767CEF09274(&(Global_1312579.f_14));
			unk_0xDB4BC767CEF09274(&(Global_1312579.f_30));
			return;
		
		case 5:
			unk_0x7FAFF3E791AF486A(&(Global_1312579.f_14));
			return;
		
		case 6:
			unk_0xE34B517A17B2CB8D(Global_1312579.f_38);
			unk_0x7FAFF3E791AF486A(&(Global_1312579.f_14));
			return;
		
		case 7:
			unk_0xDB4BC767CEF09274(&(Global_1312579.f_14));
			return;
		
		case 8:
			unk_0xE34B517A17B2CB8D(Global_1312579.f_38);
			unk_0xDB4BC767CEF09274(&(Global_1312579.f_14));
			return;
		
		case 9:
			unk_0xBE450B0DD4D82DF2(&(Global_1312579.f_14));
			return;
		
		case 10:
			unk_0xBE450B0DD4D82DF2(&(Global_1312579.f_14));
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
	unk_0x1A95252BC324DC59(&(Global_1312579.f_10));
	func_37();
	return unk_0x776411DBC9EB2206();
}

int func_39()
{
	if (Global_1312579 == 11)
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
	
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		iVar0 = func_51(unk_0xCFC72E446B0B3AD7());
		if (iVar0 < iParam0)
		{
			if (func_50())
			{
				func_43(1734805203, (iParam0 - iVar0), &uVar1, 0, 0);
			}
			else
			{
				unk_0xEFE4CFE8CC09E155((iParam0 - iVar0));
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
		if (!unk_0xA549BE81FFC4288A(func_26()) || unk_0xADE1DFE09709BDB1())
		{
			Global_2541344 = 1;
			return 0;
		}
		if (Global_2435857)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2541345 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2540883[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0x4C02C7B08F757BFA(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x4265811DC0390422(iVar3))
		{
			*uParam0 = func_49(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2540883[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2541341 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2541343 = 1;
			Global_2541346 = iParam4;
			Global_2541348 = iParam3;
			Global_2541349 = 1;
			Global_2541347 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2541346 = iParam4;
			Global_2541348 = iParam3;
			Global_2541349 = 1;
			Global_2541347 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_48(1, iParam4);
			Global_2541343 = 0;
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
			unk_0xEDB9A377CD8B7F03(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_121.f_71), 0);
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
				unk_0x57A7DB00C63E14B4();
			}
		}
		else if (!bVar0)
		{
			unk_0x3B8BE022876FFEA4(Global_2540883[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2540883[iParam0 /*69*/] = { Var1 };
	}
}

int func_47(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540883[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_48(int iParam0, var uParam1)
{
	Global_2437111 = uParam1;
	Global_2437110 = iParam0;
}

int func_49(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2540883[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_50())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2540883[iVar0 /*69*/].f_2 = 1;
			Global_2540883[iVar0 /*69*/].f_1 = uParam5;
			Global_2540883[iVar0 /*69*/].f_3 = uParam1;
			Global_2540883[iVar0 /*69*/].f_4 = uParam2;
			Global_2540883[iVar0 /*69*/].f_7 = uParam3;
			Global_2540883[iVar0 /*69*/].f_5 = 0;
			Global_2540883[iVar0 /*69*/] = iParam0;
			Global_2540883[iVar0 /*69*/].f_6 = iParam4;
			Global_2540883[iVar0 /*69*/].f_65 = uParam8;
			Global_2540883[iVar0 /*69*/].f_64 = uParam7;
			Global_2540883[iVar0 /*69*/].f_68 = 0;
			Global_2541341 = 0;
			if (bParam6)
			{
				Global_2540883[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_50()
{
	if (unk_0x708CE249B4F97BF8())
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
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return unk_0x855BF4AC1E385EF1(-1);
		}
		else if (func_53(iParam0))
		{
			return Global_1582869[iParam0 /*332*/].f_188.f_3;
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
		return unk_0x94E72F17611BCD3C(Global_2422166.f_1, iParam0);
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
		unk_0xF76EE56D3E7DAF1B(&(Global_90014.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0xF76EE56D3E7DAF1B(&uVar0, iParam1);
			func_57(func_27(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_668[iParam0]), iParam1);
	}
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
}

void func_58(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_90014.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0xEDB9A377CD8B7F03(&uVar0, iParam1);
			func_57(func_27(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_668[iParam0]), iParam1);
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
		if (!unk_0x94E72F17611BCD3C(Global_1676873, 19))
		{
			unk_0xEDB9A377CD8B7F03(&Global_1676873, 19);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_1676873, 19))
	{
		unk_0xF76EE56D3E7DAF1B(&Global_1676873, 19);
	}
}

void func_62(char* sParam0, bool bParam1)
{
	if (unk_0x9E9AFDBF482248F6(sParam0))
	{
		return;
	}
	if (unk_0x6BD5B77CFC3C9B4B(sParam0) > 23)
	{
		return;
	}
	if (func_66(sParam0))
	{
		return;
	}
	func_34();
	Global_1312579 = 0;
	StringCopy(&(Global_1312579.f_1), unk_0xC2E9075570B5D2B9(), 24);
	Global_1312579.f_7 = unk_0x398F092142D37E17(&(Global_1312579.f_1));
	StringCopy(&(Global_1312579.f_10), sParam0, 16);
	func_65();
	func_64(bParam1);
	func_63();
}

void func_63()
{
	unk_0xEDB9A377CD8B7F03(&(Global_1312579.f_39), 1);
}

void func_64(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1312579.f_39), 0);
		return;
	}
	unk_0xF76EE56D3E7DAF1B(&(Global_1312579.f_39), 0);
}

void func_65()
{
	Global_1312579.f_8 = unk_0x9B93E0378395B104(unk_0x6A8628B6E9F055B3(), 86400000);
	Global_1312579.f_9 = unk_0x6A8628B6E9F055B3();
}

bool func_66(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (Global_1312579 == 10)
	{
		return func_67(sParam0);
	}
	if (unk_0x9E9AFDBF482248F6(sParam0))
	{
		return 0;
	}
	return unk_0x398F092142D37E17(sParam0) == unk_0x398F092142D37E17(&(Global_1312579.f_10));
}

bool func_67(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (unk_0x9E9AFDBF482248F6(sParam0))
	{
		return 0;
	}
	return unk_0x398F092142D37E17(sParam0) == unk_0x398F092142D37E17(&(Global_1312579.f_14));
}

void func_68()
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { func_71(unk_0xCFC72E446B0B3AD7()) };
	bVar13 = unk_0x948B11D8CB0B9FB8();
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
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 0, iParam1);
}

int func_70(var uParam0)
{
	if (unk_0x0AF1D13FCD3E5065())
	{
		if (unk_0xEBD30B93B1EED82E() && unk_0x1F0B5C273160FECE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_71(int iParam0)
{
	struct<13> Var0;
	
	unk_0x4DB2D434F7F3C6B1(iParam0, &Var0, 13);
	return Var0;
}

bool func_72()
{
	return func_73();
}

bool func_73()
{
	return Global_1321259.f_40 == 3;
}

int func_74()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
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
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
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
			Global_97358.f_29774[iParam0 /*29*/].f_12[0] = 1;
			Global_97358.f_29774[iParam0 /*29*/].f_12[1] = 1;
			Global_97358.f_29774[iParam0 /*29*/].f_12[2] = 1;
			Global_97358.f_29774[iParam0 /*29*/].f_24[0] = 1;
			Global_97358.f_29774[iParam0 /*29*/].f_24[1] = 1;
			Global_97358.f_29774[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_97358.f_29774[iParam0 /*29*/].f_12[iParam1] == 1 && Global_97358.f_29774[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_97358.f_29774[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_97358.f_29774[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68245)
			{
				if (iParam1 != 4)
				{
					if (Global_14393 != iParam1)
					{
						Global_2922[iParam1 /*4*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
						Global_2939[iParam1] = 1;
						Global_2944[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14393)
					{
					}
					else
					{
						Global_2873[1 /*6*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
						Global_2873[1 /*6*/].f_5 = iParam1;
						func_77();
					}
				}
				else
				{
					Global_2873[1 /*6*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
					Global_2873[1 /*6*/].f_5 = iParam1;
					func_77();
				}
			}
			else
			{
				Global_2873[1 /*6*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
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
	
	StringCopy(&cVar0, unk_0x398E4CFB573BEBB7(&(Global_97358.f_29774[Global_2949 /*29*/].f_7)), 64);
	if (Global_2968 == 0)
	{
		unk_0x3BE5C2319988C0DB("");
		StringCopy(&cVar16, unk_0x398E4CFB573BEBB7(&(Global_2873[1 /*6*/])), 64);
		sVar32 = unk_0x398E4CFB573BEBB7("CELL_253");
		unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x3BE5C2319988C0DB("CELL_255");
		unk_0xDB4BC767CEF09274(&(Global_2873[1 /*6*/]));
		unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 0);
}

void func_78()
{
	if (func_84(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
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
		if (Global_68245)
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
	return Global_97358.f_1729.f_539.f_3213;
}

void func_80()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_83(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_82(unk_0x9F92518438215DD0());
			if (func_81(iVar0) && (!func_84(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_81(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_81(int iParam0)
{
	return iParam0 < 3;
}

int func_82(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(uParam0);
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
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_84(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_85(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 17);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
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
	
	if (unk_0x9E9AFDBF482248F6(sParam2))
	{
		return 0;
	}
	if (unk_0x6BD5B77CFC3C9B4B(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x9E9AFDBF482248F6(sParam3))
	{
		return 0;
	}
	if (unk_0x6BD5B77CFC3C9B4B(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x398F092142D37E17(unk_0xC2E9075570B5D2B9());
	iVar1 = func_171(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x9E9AFDBF482248F6(sParam7))
	{
		iVar2 = unk_0x398F092142D37E17(sParam7);
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
	Global_1321259.f_40.f_1 = iParam0;
	Global_1321259.f_40.f_2 = iParam1;
	Global_1321259.f_40.f_3 = iParam2;
	StringCopy(&(Global_1321259.f_40.f_4), sParam3, 16);
	Global_1321259.f_40.f_8 = iParam4;
	Global_1321259.f_40.f_9 = iParam5;
	Global_1321259.f_40.f_14 = uParam6;
	func_89(iParam4);
	func_161();
	Global_1321259.f_40.f_13 = unk_0x9B93E0378395B104(unk_0x6A8628B6E9F055B3(), 7000);
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
	Global_1321259.f_40.f_10 = 0;
}

void func_91()
{
	Global_1321259.f_40.f_10 = 1;
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
	return iParam0 > Global_1321259.f_40.f_8;
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
	Global_1321259.f_40.f_11 = unk_0x9B93E0378395B104(unk_0x6A8628B6E9F055B3(), iParam0);
	Global_1321259.f_40.f_12 = 1;
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
		sVar2 = unk_0x6866FFA103E7C994(iVar0);
		iVar1 = func_117(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x3BFEFA55CCE228E0(unk_0x6A8628B6E9F055B3(), Global_1321259.f_40.f_13))
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
	if (!unk_0x9E9AFDBF482248F6(sParam8))
	{
		iVar6++;
		if (!unk_0x9E9AFDBF482248F6(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x6B08EC9A88700FBB(sVar4, " "))
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
		if (unk_0x94E72F17611BCD3C(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x9E9AFDBF482248F6(sVar2))
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
	if (unk_0x94E72F17611BCD3C(uParam4, 0))
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
	Global_1321259.f_57 = 0;
	Global_1321259.f_57.f_1 = 0;
}

void func_99()
{
	Global_1321259.f_40 = 3;
}

void func_100()
{
	unk_0xEDB9A377CD8B7F03(&Global_2263, 8);
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
			unk_0xEDB9A377CD8B7F03(&Global_2545539, 0);
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
	if (unk_0x6B08EC9A88700FBB(sParam14, sParam15))
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
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if (unk_0x02616AAC1A02E70E(unk_0x9F92518438215DD0()))
			{
				return 0;
			}
		}
		if (Global_2545524 == 1)
		{
			return 0;
		}
		if (unk_0x7B47A371E2D93C2C(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x7B47A371E2D93C2C(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_112() == 0)
	{
		func_110();
		return 0;
	}
	func_109(Global_2545523);
	StringCopy(&(Global_2544274[Global_2545523 /*104*/]), sParam1, 64);
	Global_2544274[Global_2545523 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2544274[Global_2545523 /*104*/].f_24 = iParam2;
	}
	Global_2544274[Global_2545523 /*104*/].f_25 = iParam7;
	Global_2544274[Global_2545523 /*104*/].f_26 = uParam8;
	Global_2544274[Global_2545523 /*104*/].f_29 = uParam9;
	Global_2544274[Global_2545523 /*104*/].f_30 = uParam12;
	Global_2544274[Global_2545523 /*104*/].f_31 = uParam11;
	Global_2544274[Global_2545523 /*104*/].f_28 = 0;
	Global_2544274[Global_2545523 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2544274[Global_2545523 /*104*/].f_33), sParam4, 64);
	Global_2544274[Global_2545523 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2544274[Global_2545523 /*104*/].f_50), sParam5, 64);
	Global_2544274[Global_2545523 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2544274[Global_2545523 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2544274[Global_2545523 /*104*/].f_83), sParam15, 64);
	func_78();
	switch (iParam16)
	{
		case 3:
			Global_2544274[Global_2545523 /*104*/].f_99[Global_14393] = 1;
			break;
		
		case 0:
			Global_2544274[Global_2545523 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2544274[Global_2545523 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2544274[Global_2545523 /*104*/].f_99[1] = 1;
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
				Global_2545524 = 1;
				break;
			
			case 0:
				Global_2545524 = 1;
				break;
			
			case 2:
				Global_2545524 = 1;
				break;
			
			case 1:
				Global_2545524 = 1;
				break;
			}
	}
	Global_16761[Global_2545523] = 0;
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
				unk_0x86F4B3D6FF8F65DE(-1, "Text_Arrive_Tone", &Global_14382, 1);
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
								if (unk_0x94E72F17611BCD3C(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(iVar2);
								unk_0x7E86CE5F658823DB();
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
									if (Global_97358.f_12395[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97358.f_12395[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97358.f_12395[iVar3 /*104*/].f_99[Global_14393] == 1)
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
								if (Global_68245)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2544274[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2544274[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2544274[iVar4 /*104*/].f_99[Global_14393] == 1)
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
											iVar6 = Global_35962;
											break;
										
										case 1:
											iVar6 = Global_35963;
											break;
										
										case 2:
											iVar6 = Global_35964;
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
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(Global_2269);
								unk_0x7E86CE5F658823DB();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x94E72F17611BCD3C(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(iVar7);
								unk_0x7E86CE5F658823DB();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x94E72F17611BCD3C(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(iVar8);
								unk_0x7E86CE5F658823DB();
							}
							else if (iVar1 == 8)
							{
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_105(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(42);
								unk_0x7E86CE5F658823DB();
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

void func_104(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9E9AFDBF482248F6(sParam7))
	{
		func_105(sParam7);
	}
	if (!unk_0x9E9AFDBF482248F6(sParam8))
	{
		func_105(sParam8);
	}
	if (!unk_0x9E9AFDBF482248F6(sParam9))
	{
		func_105(sParam9);
	}
	if (!unk_0x9E9AFDBF482248F6(sParam10))
	{
		func_105(sParam10);
	}
	if (!unk_0x9E9AFDBF482248F6(sParam11))
	{
		func_105(sParam11);
	}
	unk_0x7E86CE5F658823DB();
}

void func_105(char* sParam0)
{
	unk_0x0F79C8080022554A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_106(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x7E86CE5F658823DB();
}

bool func_107()
{
	return Global_1315900;
}

void func_108(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_97358.f_12305[iParam0 /*20*/].f_8;
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
	
	uVar0 = unk_0xD9940DF735CED1D5();
	uVar1 = unk_0x00CE62DFC32D8B1E();
	uVar2 = unk_0x3E15607264E063C3();
	uVar3 = unk_0xA2C54D866C588926();
	uVar4 = unk_0x35E06151CD8A2DD1() + 1;
	uVar5 = unk_0x4C625096668FC49E();
	Global_2544274[iParam0 /*104*/].f_18 = uVar0;
	Global_2544274[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2544274[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2544274[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2544274[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2544274[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2545523 = 11;
	Global_2544274[Global_2545523 /*104*/].f_18 = -1;
	Global_2544274[Global_2545523 /*104*/].f_18.f_1 = 0;
	Global_2544274[Global_2545523 /*104*/].f_18.f_2 = 0;
	Global_2544274[Global_2545523 /*104*/].f_18.f_3 = 0;
	Global_2544274[Global_2545523 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_111(Global_2544274[iVar2 /*104*/].f_18, Global_2544274[Global_2545523 /*104*/].f_18))
		{
			Global_2545523 = iVar2;
		}
		iVar2++;
	}
	Global_2544274[Global_2545523 /*104*/].f_24 = 1;
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
		if (Global_2544274[iVar2 /*104*/].f_24 == 0)
		{
			Global_2545523 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2545523 = 11;
	Global_2544274[Global_2545523 /*104*/].f_18 = -1;
	Global_2544274[Global_2545523 /*104*/].f_18.f_1 = 0;
	Global_2544274[Global_2545523 /*104*/].f_18.f_2 = 0;
	Global_2544274[Global_2545523 /*104*/].f_18.f_3 = 0;
	Global_2544274[Global_2545523 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2544274[iVar2 /*104*/].f_24 == 0 || Global_2544274[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_111(Global_2544274[iVar2 /*104*/].f_18, Global_2544274[Global_2545523 /*104*/].f_18))
			{
				Global_2545523 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2545523 == 11)
	{
		return 0;
	}
	Global_2544274[Global_2545523 /*104*/].f_99[0] = 0;
	Global_2544274[Global_2545523 /*104*/].f_99[1] = 0;
	Global_2544274[Global_2545523 /*104*/].f_99[2] = 0;
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
			unk_0xEDB9A377CD8B7F03(&Global_2545539, 0);
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
	if (unk_0x9E9AFDBF482248F6(sParam0))
	{
		return sLocal_17;
	}
	if (unk_0x6B08EC9A88700FBB(sParam0, sLocal_17))
	{
		return sLocal_17;
	}
	func_115(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x398E4CFB573BEBB7(sParam0);
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
	Global_1336400[iVar0 /*5*/].f_4 = 1;
	return Global_1336400[iVar0 /*5*/].f_2;
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
	if (Global_1336563)
	{
		if (iParam0 == Global_1336563.f_1)
		{
			return;
		}
	}
	if (func_119(iParam0))
	{
		return;
	}
	if (Global_1336601 >= 32)
	{
		return;
	}
	Global_1336568[Global_1336601] = iParam0;
	Global_1336601++;
	if (bParam1)
	{
	}
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1336601)
	{
		if (Global_1336568[iVar0] == iParam0)
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
	if (Global_1336561 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1336561)
	{
		if (Global_1336400[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xB72DEA463116350F(Global_1336400[iVar0 /*5*/].f_2) && unk_0xA8985BD1EF3D9A7B(Global_1336400[iVar0 /*5*/].f_2))
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
	
	if (iParam0 >= Global_1336561)
	{
		return;
	}
	if (unk_0xB72DEA463116350F(Global_1336400[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1336400[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xEE19D2B42122B330(Global_1336400[iParam0 /*5*/].f_2), 64);
			unk_0x8C599FA8F9C56D91(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x41979D12FECA5105(Global_1336400[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1336561)
	{
		Global_1336400[iVar32 /*5*/] = { Global_1336400[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_122(&(Global_1336400[iVar32 /*5*/]));
	Global_1336561 = (Global_1336561 - 1);
}

void func_122(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_123();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x4B69FB3A5B09A1BA())
	{
		uParam0->f_3 = unk_0x6A8628B6E9F055B3();
	}
}

int func_123()
{
	return -1;
}

void func_124()
{
	Global_1321259.f_40.f_9 = 4;
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
		sVar2 = unk_0x6866FFA103E7C994(iVar0);
		iVar1 = func_117(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x3BFEFA55CCE228E0(unk_0x6A8628B6E9F055B3(), Global_1321259.f_40.f_13))
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
	if (!unk_0x9E9AFDBF482248F6(sParam8))
	{
		iVar6++;
		if (!unk_0x9E9AFDBF482248F6(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x6B08EC9A88700FBB(sVar4, " "))
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
		if (unk_0x94E72F17611BCD3C(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x9E9AFDBF482248F6(sVar2))
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
	if (unk_0x94E72F17611BCD3C(uParam4, 0))
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
	Global_1321259.f_40.f_9 = 3;
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
	
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 10);
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
			Global_2873[3 /*6*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			unk_0xEDB9A377CD8B7F03(&Global_2263, 1);
			unk_0xEDB9A377CD8B7F03(&Global_2263, 7);
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
	if (unk_0x6B08EC9A88700FBB(sParam14, sParam15))
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
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if (unk_0x02616AAC1A02E70E(unk_0x9F92518438215DD0()))
			{
				return 0;
			}
		}
		if (Global_97358.f_12305[Global_14393 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x7B47A371E2D93C2C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x7B47A371E2D93C2C(joaat("apptextmessage")) > 0)
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
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/]), sParam1, 64);
	Global_97358.f_12395[Global_16759 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_97358.f_12395[Global_16759 /*104*/].f_24 = iParam2;
	}
	Global_97358.f_12395[Global_16759 /*104*/].f_25 = iParam7;
	Global_97358.f_12395[Global_16759 /*104*/].f_26 = uParam8;
	Global_97358.f_12395[Global_16759 /*104*/].f_29 = uParam9;
	Global_97358.f_12395[Global_16759 /*104*/].f_30 = uParam12;
	Global_97358.f_12395[Global_16759 /*104*/].f_31 = uParam11;
	Global_97358.f_12395[Global_16759 /*104*/].f_28 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/].f_33), sParam4, 64);
	Global_97358.f_12395[Global_16759 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/].f_50), sParam5, 64);
	Global_97358.f_12395[Global_16759 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/].f_83), sParam15, 64);
	if (unk_0x94E72F17611BCD3C(Global_2263, 10))
	{
		Global_97358.f_12395[Global_16759 /*104*/].f_99[0] = 1;
		Global_97358.f_12395[Global_16759 /*104*/].f_99[1] = 1;
		Global_97358.f_12395[Global_16759 /*104*/].f_99[2] = 1;
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
				Global_97358.f_12395[Global_16759 /*104*/].f_99[Global_14393] = 1;
				break;
			
			case 0:
				Global_97358.f_12395[Global_16759 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_97358.f_12395[Global_16759 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_97358.f_12395[Global_16759 /*104*/].f_99[1] = 1;
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
		if (unk_0x94E72F17611BCD3C(Global_2263, 10))
		{
			Global_97358.f_12305[0 /*20*/].f_17 = 1;
			Global_97358.f_12305[1 /*20*/].f_17 = 1;
			Global_97358.f_12305[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_97358.f_12305[Global_14393 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_97358.f_12305[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_97358.f_12305[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_97358.f_12305[1 /*20*/].f_17 = 1;
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
				unk_0x86F4B3D6FF8F65DE(-1, "Text_Arrive_Tone", &Global_14382, 1);
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
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD9940DF735CED1D5();
	uVar1 = unk_0x00CE62DFC32D8B1E();
	uVar2 = unk_0x3E15607264E063C3();
	uVar3 = unk_0xA2C54D866C588926();
	uVar4 = unk_0x35E06151CD8A2DD1() + 1;
	uVar5 = unk_0x4C625096668FC49E();
	Global_97358.f_12395[iParam0 /*104*/].f_18 = uVar0;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_132()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
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
	Global_97358.f_12395[Global_16759 /*104*/].f_18 = -1;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_1 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_2 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_3 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_133(Global_97358.f_12395[iVar2 /*104*/].f_18, Global_97358.f_12395[Global_16759 /*104*/].f_18))
		{
			Global_16759 = iVar2;
		}
		iVar2++;
	}
	Global_97358.f_12395[Global_16759 /*104*/].f_24 = 1;
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
	
	if (Global_68245)
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
		if (Global_97358.f_12395[iVar2 /*104*/].f_24 == 0)
		{
			Global_16759 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16759 = 34;
	Global_97358.f_12395[Global_16759 /*104*/].f_18 = -1;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_1 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_2 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_3 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_97358.f_12395[iVar2 /*104*/].f_24 == 0 || Global_97358.f_12395[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_133(Global_97358.f_12395[iVar2 /*104*/].f_18, Global_97358.f_12395[Global_16759 /*104*/].f_18))
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
	Global_97358.f_12395[Global_16759 /*104*/].f_99[0] = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_99[1] = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_99[2] = 0;
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
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 10);
	iVar0 = 3;
	if (func_130(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2970 = iParam10;
			Global_2873[3 /*6*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			StringCopy(&Global_2951, sParam5, 64);
			unk_0xEDB9A377CD8B7F03(&Global_2263, 1);
			unk_0xEDB9A377CD8B7F03(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_136(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
	}
	if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
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
	
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x94E72F17611BCD3C(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x94E72F17611BCD3C(uParam4, 4))
	{
		bVar0 = func_153(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_143(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x94E72F17611BCD3C(uParam4, 3))
		{
			func_142(1);
		}
		if (unk_0x94E72F17611BCD3C(uParam4, 5))
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
	Global_2452812 = 0;
}

void func_139()
{
	Global_1321259.f_57 = 1;
	Global_1321259.f_57.f_1 = 0;
}

void func_140()
{
	Global_1321259.f_40.f_9 = 1;
}

void func_141(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2265, 0);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
	}
}

void func_142(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 20);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
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
					unk_0xC318E8D9E0AA1394(0);
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
		if (unk_0xDFF00E8709AA7095())
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
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
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
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_148())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
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
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
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
	unk_0xC318E8D9E0AA1394(0);
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
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
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
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
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
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

void func_151()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
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
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
	}
	if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
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
	Global_1321259.f_40.f_9 = 2;
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
	Global_1321259.f_55 = Global_1321259.f_40.f_1;
	Global_1321259.f_55.f_1 = Global_1321259.f_40.f_10;
}

void func_161()
{
	Global_1321259.f_40 = 1;
}

bool func_162()
{
	return Global_1321259.f_40 == 1;
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	if (!func_164(iParam0))
	{
		return 0;
	}
	if (Global_1321259.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1321259.f_40.f_3 != iParam2)
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
	if (!Global_1321259.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_165()
{
	if (Global_1321259.f_40 == 0)
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
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1685205 || func_168())
	{
		return 0;
	}
	if (!unk_0x94E72F17611BCD3C(uParam0, 6))
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
	return unk_0x3BFEFA55CCE228E0(unk_0x6A8628B6E9F055B3(), Global_1335192);
}

int func_168()
{
	if (Global_2536168.f_796 > -1)
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
	return unk_0x398F092142D37E17(&cVar0);
}

bool func_172()
{
	return Global_2450998.f_1;
}

int func_173()
{
	if (Global_1321447.f_2)
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
	Global_2453227.f_1060 = iParam0;
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
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
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
	if (unk_0x4B69FB3A5B09A1BA() && !bParam2)
	{
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x17103F66FBB44C3C(), *uParam0)) >= iParam1)
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
		if (!unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 8))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 8);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 8))
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 8);
	}
}

bool func_182()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 8);
}

void func_183()
{
	unk_0xF391B7BD1F131C3F(800);
	if (!bLocal_752 || bLocal_753)
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
		}
	}
	if (!bLocal_753)
	{
		Local_733[unk_0x9725084D4DFE8258() /*5*/].f_2 = 0;
	}
	else
	{
		Local_733[unk_0x9725084D4DFE8258() /*5*/].f_2 = 3;
	}
}

void func_184()
{
	if (func_188(&Local_87, &(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_4)))
	{
		Local_733[unk_0x9725084D4DFE8258() /*5*/].f_2 = -1;
	}
	func_185(&Local_87);
}

void func_185(var uParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xC8557993A78C1B3E();
	switch (iLocal_748)
	{
		case 0:
			if (unk_0x94E72F17611BCD3C(*uParam0, 18))
			{
				if (!func_180(&uLocal_754))
				{
					func_19(&uLocal_754, 0, 0);
				}
				if (!bVar0)
				{
					if (!unk_0xC9EED58014EF1F40())
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
				if (!unk_0xC9EED58014EF1F40())
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
				if (!unk_0xC9EED58014EF1F40())
				{
					func_69("HLP_RNK1", 9000);
					func_187(1);
					Global_2446533.f_1689 = 1;
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
				if (!unk_0xC9EED58014EF1F40())
				{
					func_175(0);
					if (unk_0x1B54267BB477DB52() || unk_0x035E2C7B598704F7())
					{
						func_69("HLP_CASHXBX", 9000);
					}
					else if (unk_0x523427CCABD5EC9C() || unk_0x7F11C755C90EFEC5())
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
			if (!unk_0x94E72F17611BCD3C(uLocal_745, 2))
			{
				unk_0xEDB9A377CD8B7F03(&uLocal_745, 2);
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
				Global_1327593.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_1327593.f_947), iParam0);
			}
			else
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_1327593.f_947), iParam0);
			}
			break;
	}
}

void func_187(int iParam0)
{
	Global_2446533.f_4367 = iParam0;
}

int func_188(var uParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	bool bVar8;
	
	if (!unk_0x94E72F17611BCD3C(*uParam0, 13))
	{
		if (unk_0x5329DB72517417AE(unk_0x9EC44F28079D37AE()))
		{
			Var5 = { unk_0x4AFE600E56B931B6(unk_0x9EC44F28079D37AE()) };
			if ((Var5.f_0 != 0f || Var5.f_1 != 0f) || Var5.f_2 != 0f)
			{
				unk_0xC5D4C5DB3290D900(Var5, 0f, 0f, 0f);
				if (!unk_0x94E72F17611BCD3C(*uParam0, 14))
				{
					unk_0xEDB9A377CD8B7F03(uParam0, 14);
				}
			}
		}
	}
	else if (unk_0x94E72F17611BCD3C(*uParam0, 14))
	{
		unk_0x198BDC6BF12F2D84();
		unk_0xF76EE56D3E7DAF1B(uParam0, 14);
	}
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 337, 1);
	}
	func_336(uParam0);
	unk_0x8A63A305A0B03AF2(1f);
	func_330(uParam0);
	func_329(unk_0xCFC72E446B0B3AD7());
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (unk_0x7B47A371E2D93C2C(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (unk_0x7B47A371E2D93C2C(joaat("freemode")) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2446533.f_1688)
				{
					Global_2446533.f_1688 = 1;
					unk_0x3A3225ACCFD6ED91(0);
				}
				if (!func_182())
				{
					func_181(1);
				}
				if (!unk_0x2E9CF5C574019636() && !unk_0x351E8373AE3D741D())
				{
					unk_0xC6EA7B53F52F1DF9(800);
				}
				if (!func_180(&(uParam0->f_15)))
				{
					func_19(&(uParam0->f_15), 0, 0);
				}
				unk_0x76D57BAF1F432EA7(&Global_1685656);
				Global_1685657 = 0;
				Global_1685659 = 0;
				Global_1685658 = 0;
				Global_1685660 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0x2E9CF5C574019636())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_321(0, 0, 0, 1, 1, 1, 0);
					unk_0x28818C4A8A8DAE1F(1, 0);
					func_357(1);
					unk_0xD30CC382C34317CB(1);
					unk_0x24F996E6554D4425("EXTRASUNNY");
					unk_0xC861B765753DC070(19, 0, 0);
					unk_0xF065EC55CD448A4C(1);
					func_320(0);
					unk_0xD6B7E966D6378295(0);
					func_315(1, 0);
					func_307(1, 1);
					if (unk_0x7B47A371E2D93C2C(joaat("fm_intro")) < 1 || !func_306())
					{
						if (uParam0->f_292)
						{
							if (func_305() == 0)
							{
								unk_0xC3AEE8D8BDB1D8C7("GTAO_INTRO_MALE");
								unk_0x8CFE3865875D19E6(1);
							}
						}
					}
					func_298(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					unk_0xF76EE56D3E7DAF1B(uParam0, 0);
					unk_0xF76EE56D3E7DAF1B(uParam0, 1);
					unk_0xF76EE56D3E7DAF1B(uParam0, 2);
					unk_0xF76EE56D3E7DAF1B(uParam0, 9);
					unk_0xEDB9A377CD8B7F03(uParam0, 7);
					uParam0->f_122 = unk_0x676E460800A9E1B7(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				unk_0x3BC6D217451D6BB7(joaat("frogger"));
				if (unk_0x149162179DBAEDB0(joaat("frogger")))
				{
					if (!uParam0->f_292 || unk_0x73DD4481692AF236())
					{
						if (func_295())
						{
							unk_0xF835EF2BD778BDB1(0);
							func_290(1, 1);
							unk_0xA18036D53D82E096(0);
							unk_0x35611EEE7A1FFEDB(1);
							if (!func_174())
							{
								func_289();
							}
							func_187(0);
							func_288();
							unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Global_1312554, 1, 0, 0, 1);
							unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 1);
							unk_0x4220BD8C5CDBF540(unk_0x9F92518438215DD0(), false, 0);
							unk_0xF72219EF3DF47F66(0);
							if (unk_0x2E6E8D325977B3EC(unk_0xB9C72E97E89CC683()))
							{
								unk_0xD4916ED85412C8D9(unk_0xB9C72E97E89CC683(), 0f);
							}
							unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), true);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0x2D8FCFBC4E01FF7C())
				{
					if (!unk_0x94E72F17611BCD3C(*uParam0, 4))
					{
						if (func_287() == 65 || func_287() == 66)
						{
							unk_0x198BDC6BF12F2D84();
							unk_0x97AB8B9CB42C5147(754.2219f, 1226.831f, 356.5081f, func_286(-14.367f, 0f, 157.3524f), 100f, 0);
							func_178(&(uParam0->f_17));
							func_19(&(uParam0->f_17), 0, 0);
							unk_0xEDB9A377CD8B7F03(uParam0, 4);
						}
					}
					else if (unk_0xD670D03A989D1279("FM_INTRO_START") && (unk_0xDB4BFE4AA6FE81F6() || func_179(&(uParam0->f_17), 5000, 0)))
					{
						if (!unk_0x94E72F17611BCD3C(*uParam0, 24))
						{
							if (unk_0x94E72F17611BCD3C(*uParam0, 7))
							{
								unk_0xDD74AAB135833BB7("FM_INTRO_START");
								unk_0xEDB9A377CD8B7F03(uParam0, 24);
								unk_0xEDB9A377CD8B7F03(uParam0, 21);
							}
						}
						else if (unk_0xA6053C2AAB834F13() > 0)
						{
							unk_0xCBCE71C7693F1CF8();
							unk_0x3CE3126E0DCA6C8C(6);
							if (!unk_0x5329DB72517417AE(uParam0->f_7))
							{
								uParam0->f_7 = unk_0x9DC0C451516E13AF("DEFAULT_SCRIPTED_CAMERA", 0);
								unk_0x45826D2663F7FD9C(uParam0->f_7, 1);
							}
							unk_0xD137F1896B8B6A2E(uParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							unk_0xD137F1896B8B6A2E(uParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							unk_0x79DDEE9A5547C864(uParam0->f_7, "HAND_SHAKE", 0.15f);
							unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 1, 0);
							func_285(uParam0);
							unk_0xEDB9A377CD8B7F03(uParam0, 11);
							if (uParam0->f_292)
							{
								unk_0x30678C96F8F94241(9, 9, 9, 9);
								unk_0xAD4B8C9AB12D1809();
							}
							unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), true);
							if (unk_0x2E9CF5C574019636())
							{
								unk_0xF391B7BD1F131C3F(800);
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
					unk_0x35611EEE7A1FFEDB(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!unk_0x94E72F17611BCD3C(*uParam0, 2))
				{
					unk_0x35611EEE7A1FFEDB(1);
					func_69("FMIC_INTRO2", -1);
					unk_0xEDB9A377CD8B7F03(uParam0, 2);
				}
				unk_0xD137F1896B8B6A2E(uParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				unk_0xD137F1896B8B6A2E(uParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				unk_0x30678C96F8F94241(9, 13, 9, 13);
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
				if (!unk_0x94E72F17611BCD3C(*uParam0, 10))
				{
					func_280();
					unk_0xEDB9A377CD8B7F03(uParam0, 10);
				}
				unk_0xD137F1896B8B6A2E(uParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				unk_0xD137F1896B8B6A2E(uParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (unk_0xFC38B241541883D3(uParam0->f_48, 0))
				{
					unk_0xCE1A7FCBAF911781(uParam0->f_48);
					unk_0x407020DF5CAB33D3(uParam0->f_48, true);
					unk_0xB52E7B84B0470D05(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0xFC38B241541883D3(uParam0->f_48, 0))
				{
					unk_0xB52E7B84B0470D05(uParam0->f_48);
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
								if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
								{
									unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), true);
								}
								fVar0 = 5000f;
								if (unk_0xFC38B241541883D3(uParam0->f_92[0], 0))
								{
									unk_0x62F337D16CFC3C6E(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									unk_0xD172502A99767BFE(uParam0->f_92[0], fVar0);
								}
								if (unk_0xFC38B241541883D3(uParam0->f_92[1], 0))
								{
									unk_0x62F337D16CFC3C6E(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									unk_0xD172502A99767BFE(uParam0->f_92[1], fVar0);
								}
								if (unk_0xFC38B241541883D3(uParam0->f_92[2], 0))
								{
									unk_0x62F337D16CFC3C6E(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									unk_0xD172502A99767BFE(uParam0->f_92[2], fVar0);
								}
								if (unk_0xFC38B241541883D3(uParam0->f_92[3], 0))
								{
									unk_0x62F337D16CFC3C6E(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									unk_0xD172502A99767BFE(uParam0->f_92[3], fVar0);
								}
								if (unk_0xFC38B241541883D3(uParam0->f_92[4], 0))
								{
									unk_0x62F337D16CFC3C6E(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									unk_0xD172502A99767BFE(uParam0->f_92[4], fVar0);
								}
								unk_0xEDB9A377CD8B7F03(uParam0, 15);
								unk_0xF391B7BD1F131C3F(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					unk_0xC861B765753DC070(16, 0, 0);
					func_277(uParam0);
					func_276(uParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					unk_0x8323D198B0FC05E0(uParam0->f_7, 1);
					unk_0x653BBCE2A363D53D(uParam0->f_7);
					unk_0x0CF4B2266E47C15F(uParam0->f_7, 0);
					unk_0x9B517A4FE28A719F("MP_INTRO_RACE_SCENE");
					unk_0x30678C96F8F94241(9, 12, 9, 12);
					func_274(uParam0, 14);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				if (!unk_0x94E72F17611BCD3C(*uParam0, 5))
				{
					func_69("FMIC_RACE1", -1);
					unk_0xEDB9A377CD8B7F03(uParam0, 5);
				}
				func_284(uParam0, 14);
				if (func_282(uParam0, 14, 0))
				{
					uParam0->f_32 = unk_0xD443D4CF892AD418(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
					if (uParam0->f_32 != 0)
					{
						unk_0x151286FE6ED20A12(uParam0->f_32);
					}
					func_273(uParam0, 23539f, 0);
					unk_0xC861B765753DC070(16, 0, 0);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_274(uParam0, 15);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				if (!unk_0x94E72F17611BCD3C(uParam0->f_3, 0))
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
					unk_0xC861B765753DC070(16, 0, 0);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_252(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_274(uParam0, 16);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				if (!unk_0x94E72F17611BCD3C(uParam0->f_3, 0))
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
					unk_0xC861B765753DC070(16, 0, 0);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x367643B597A08F4E(uParam0->f_9, 0.7f);
					func_274(uParam0, 17);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				if (!unk_0x94E72F17611BCD3C(*uParam0, 6))
				{
					unk_0xEDB9A377CD8B7F03(uParam0, 6);
					func_69("FMIC_RACE2", -1);
				}
				if (!unk_0x94E72F17611BCD3C(uParam0->f_3, 0))
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
					unk_0xC861B765753DC070(16, 0, 0);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 18);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				if (!unk_0x94E72F17611BCD3C(uParam0->f_3, 0))
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
					unk_0xC861B765753DC070(16, 0, 0);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					if (unk_0x746960881FB19A89(uParam0->f_92[2]))
					{
						unk_0xCD3EBB4EAE50293F(&(uParam0->f_92[2]));
					}
					if (unk_0x746960881FB19A89(uParam0->f_92[3]))
					{
						unk_0xCD3EBB4EAE50293F(&(uParam0->f_92[3]));
					}
					if (unk_0x746960881FB19A89(uParam0->f_92[4]))
					{
						unk_0xCD3EBB4EAE50293F(&(uParam0->f_92[4]));
					}
					func_276(uParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 19);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				if (!unk_0x94E72F17611BCD3C(uParam0->f_3, 0))
				{
					func_262(uParam0);
				}
				else
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (unk_0x7CE60248D6135E74(uParam0->f_32))
							{
								if (!unk_0x0BA451447C3B1A8D(uParam0->f_91))
								{
									unk_0xC15F1B488DF483FD(uParam0->f_91, uParam0->f_32, unk_0x398F092142D37E17("GtaMloRoom001"));
								}
								unk_0x0CFDF5C48961D6EC("SE_MP_GARAGE_L_RADIO", 0);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!unk_0x0BA451447C3B1A8D(uParam0->f_49[iVar4]))
									{
										unk_0xC15F1B488DF483FD(uParam0->f_49[iVar4], uParam0->f_32, unk_0x398F092142D37E17("GtaMloRoom001"));
									}
									iVar4++;
								}
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 6);
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
				if (func_282(uParam0, 19, 0) && unk_0x94E72F17611BCD3C(uParam0->f_3, 0))
				{
					if (unk_0x94E72F17611BCD3C(*uParam0, 12))
					{
						unk_0xF76EE56D3E7DAF1B(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_282(uParam0, 19, -4968))
				{
					if (!unk_0x94E72F17611BCD3C(*uParam0, 12))
					{
						unk_0x35611EEE7A1FFEDB(1);
						unk_0xEDB9A377CD8B7F03(uParam0, 12);
					}
				}
				else if (func_282(uParam0, 19, -5618))
				{
					if (!unk_0x94E72F17611BCD3C(*uParam0, 30))
					{
						unk_0x20BCECAA3CCE96D0("MP_intro_logo", 0, 0);
						unk_0xEDB9A377CD8B7F03(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_250(uParam0);
				func_249(uParam0);
				if (unk_0x94E72F17611BCD3C(uParam0->f_3, 0))
				{
					if (!unk_0x5329DB72517417AE(uParam0->f_7))
					{
						uParam0->f_7 = unk_0x9DC0C451516E13AF("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					unk_0x45826D2663F7FD9C(uParam0->f_7, 1);
					unk_0xD137F1896B8B6A2E(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					unk_0xD137F1896B8B6A2E(uParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					unk_0x79DDEE9A5547C864(uParam0->f_7, "HAND_SHAKE", 0.1f);
					unk_0x248D60BF458B9BE5(uParam0->f_32, unk_0x398F092142D37E17("GtaMloRoom001"));
					unk_0x0CFDF5C48961D6EC("SE_MP_GARAGE_L_RADIO", 0);
					unk_0x3CE3126E0DCA6C8C(0);
					unk_0x47E1E12B5E2888D4(uParam0->f_10, 0f);
					if (!unk_0x3E0478C40AB5B38D(uParam0->f_91))
					{
						unk_0xF0875A1DC909B469(uParam0->f_91, 0, 0);
					}
					if (unk_0x370603716EC2D420("MP_INTRO_RACE_SCENE"))
					{
						unk_0x6041FBFC1EE8196A("MP_INTRO_RACE_SCENE");
					}
					unk_0x30678C96F8F94241(9, 13, 9, 13);
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
					unk_0xD137F1896B8B6A2E(uParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					unk_0xD137F1896B8B6A2E(uParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					unk_0x47E1E12B5E2888D4(uParam0->f_10, 0f);
					if (!unk_0x3E0478C40AB5B38D(uParam0->f_91))
					{
						unk_0xF0875A1DC909B469(uParam0->f_91, 0, 0);
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
				unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				unk_0xEDB9A377CD8B7F03(uParam0, 13);
				unk_0xD137F1896B8B6A2E(uParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				unk_0xD137F1896B8B6A2E(uParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				unk_0xC861B765753DC070(18, 0, 0);
				func_245(uParam0, 2);
				func_245(uParam0, 7);
				unk_0x0880E86251A44B7F(func_244());
				if (unk_0x746960881FB19A89(uParam0->f_91))
				{
					unk_0x7763EDCBED8A5840(&(uParam0->f_91));
				}
				unk_0xEDB9A377CD8B7F03(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_250(uParam0);
				func_249(uParam0);
				if (!unk_0x94E72F17611BCD3C(*uParam0, 8))
				{
					unk_0xEDB9A377CD8B7F03(uParam0, 8);
				}
				if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				func_284(uParam0, 28);
				if ((unk_0xD670D03A989D1279("FM_INTRO_DRIVE_START") && unk_0x94E72F17611BCD3C(uParam0->f_3, 3)) && func_282(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
					{
						if (func_241(uParam0))
						{
							unk_0x717851935436D1B0(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							unk_0x717851935436D1B0(unk_0x9F92518438215DD0(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x717851935436D1B0(unk_0x9F92518438215DD0(), "MP_Male_Character", 0, 0, 0);
							unk_0x717851935436D1B0(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_241(uParam0))
				{
					unk_0x717851935436D1B0(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					unk_0x717851935436D1B0(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!unk_0x0BA451447C3B1A8D(uParam0->f_35))
				{
					unk_0x717851935436D1B0(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x0BA451447C3B1A8D(uParam0->f_34))
				{
					unk_0x717851935436D1B0(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0x0BA451447C3B1A8D(uParam0->f_33))
				{
					unk_0x407020DF5CAB33D3(uParam0->f_33, true);
					unk_0x717851935436D1B0(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_239(uParam0);
				unk_0x84C38EB88AA2718B("CONTRAILS", 0);
				unk_0x30678C96F8F94241(9, 9, 9, 9);
				func_69("FMIC_TENN", -1);
				unk_0xEFAE0030469E9B12(4);
				func_232(1, 1, 1, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0xC42238EA2EBA3C42())
				{
					if (uParam0->f_32 != 0)
					{
						unk_0xC70BF1179D8B6A50(uParam0->f_32);
					}
					func_231(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (unk_0x17103F66FBB44C3C() - uParam0->f_13);
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
						if (unk_0x87E70BB14C5C25EE("MP_Female_Character", 0))
						{
							if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
							{
								if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
								{
									if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
									{
										unk_0x4073360CA020BB84(unk_0x9F92518438215DD0(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (unk_0x87E70BB14C5C25EE("MP_Male_Character", 0))
					{
						if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
						{
							if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
							{
								if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
								{
									unk_0x4073360CA020BB84(unk_0x9F92518438215DD0(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (unk_0x87E70BB14C5C25EE("LAMAR", 0))
				{
					if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
					{
						if (!unk_0x3E0478C40AB5B38D(uParam0->f_35))
						{
							if (!unk_0x827151D7B70CB853(uParam0->f_35, 0))
							{
								unk_0x4073360CA020BB84(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								unk_0xF0875A1DC909B469(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (unk_0x87E70BB14C5C25EE("MP_Lamar_Car", 0))
				{
					if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
					{
						unk_0x6FD45FA39DD18625(uParam0->f_34, 1, 1);
						unk_0xFA51DC22F6E34F6E(uParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						unk_0x03D97EDECF2E1859(uParam0->f_34, -106.11f);
						func_230(uParam0, 3099.997f);
						unk_0xE80930A2EBCF96CA(uParam0->f_34, 1);
					}
				}
				if (unk_0x0DEEB038117360A3(0))
				{
					unk_0xC861B765753DC070(21, 0, 0);
					func_274(uParam0, 33);
					func_276(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (unk_0x94E72F17611BCD3C(*uParam0, 29))
				{
					if (unk_0x5F2D9C17ACA8C463() || unk_0x7D9E747E28B50929() > 3254)
					{
						unk_0xF76EE56D3E7DAF1B(uParam0, 29);
					}
				}
				if ((func_229(uParam0) && func_228(uParam0)) && !unk_0xC42238EA2EBA3C42())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (unk_0x17103F66FBB44C3C() - uParam0->f_13);
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
					unk_0x6EAAF037567A12E2();
					unk_0x975D05EBF3CF46C0();
					if (unk_0x94E72F17611BCD3C(*uParam0, 7))
					{
						unk_0xDD74AAB135833BB7("FM_INTRO_DRIVE_START");
						unk_0xEDB9A377CD8B7F03(uParam0, 21);
					}
					if (!unk_0x18E5FE61656F62A0())
					{
						unk_0x667FB252FBBF3EAC(0);
					}
					if (!unk_0x94E72F17611BCD3C(*uParam1, 1))
					{
						unk_0xEDB9A377CD8B7F03(uParam1, 1);
					}
					func_227(uParam0);
					func_226(uParam0);
					func_232(0, 1, 1, 0);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					unk_0xF76EE56D3E7DAF1B(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x17103F66FBB44C3C() - (uParam0->f_26 + unk_0x7D9E747E28B50929()));
					}
					if (!unk_0x94E72F17611BCD3C(*uParam0, 22))
					{
						if (unk_0x8D7C9489438A6EE6() == 1)
						{
							unk_0xC861B765753DC070(19, 59, 0);
							unk_0xEDB9A377CD8B7F03(uParam0, 22);
						}
					}
					if (func_224(uParam0))
					{
						if (unk_0x8D7C9489438A6EE6() == 2)
						{
							if (!unk_0x94E72F17611BCD3C(*uParam0, 18))
							{
								unk_0xEDB9A377CD8B7F03(uParam0, 18);
							}
							if (unk_0x7D9E747E28B50929() > 23146)
							{
								if (!unk_0x94E72F17611BCD3C(*uParam0, 27))
								{
									unk_0xACCC0049A47E21C3("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xEDB9A377CD8B7F03(uParam0, 27);
								}
								if (!unk_0x94E72F17611BCD3C(*uParam0, 28))
								{
									unk_0xACCC0049A47E21C3("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xEDB9A377CD8B7F03(uParam0, 28);
								}
							}
							unk_0x30C2E641563FF3C4(4950f);
							if (unk_0x94E72F17611BCD3C(*uParam0, 22))
							{
								unk_0xC861B765753DC070(21, 0, 0);
								unk_0xF76EE56D3E7DAF1B(uParam0, 22);
							}
							if (unk_0x7D9E747E28B50929() > 23254)
							{
								func_223(uParam0);
							}
						}
					}
					if (unk_0x8D7C9489438A6EE6() > 2)
					{
						func_226(uParam0);
						if (!unk_0x94E72F17611BCD3C(*uParam0, 22))
						{
							unk_0xC861B765753DC070(21, 0, 0);
							unk_0xEDB9A377CD8B7F03(uParam0, 22);
						}
						if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
						{
							unk_0x53F6B63C3853545F(uParam0->f_34);
							unk_0x4F089107CDB61F75(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = unk_0x7D9E747E28B50929();
				}
				break;
			
			case 33:
				if (func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 1))
					{
						if (func_282(uParam0, 33, -5450))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 1);
							}
						}
					}
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 2))
					{
						if (func_282(uParam0, 33, -5450))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 1))
					{
						if (func_282(uParam0, 33, -5450))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					unk_0x9B517A4FE28A719F("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 33);
				func_221(uParam0);
				if (func_282(uParam0, 33, 0))
				{
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 2))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 2);
						}
					}
				}
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					if (!unk_0x0BA451447C3B1A8D(uParam0->f_34))
					{
						unk_0x1799A3BC0F7F7EB9(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xBFDA8319C24B82E9(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x31966ED835A3E8E4(uParam0->f_7, 33.3479f);
						unk_0x79DDEE9A5547C864(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x45826D2663F7FD9C(uParam0->f_7, 1);
						if (!unk_0x0BA451447C3B1A8D(uParam0->f_35))
						{
							unk_0x407020DF5CAB33D3(uParam0->f_35, false);
						}
						if (!unk_0x0BA451447C3B1A8D(uParam0->f_36))
						{
							unk_0x407020DF5CAB33D3(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x2DDE6F600C12637C(uParam0->f_11, uParam0->f_34, unk_0xB96C39A95065BDE2(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DDE6F600C12637C(uParam0->f_12, uParam0->f_34, unk_0xB96C39A95065BDE2(uParam0->f_34, "seat_pside_f"));
							unk_0x6C4954C76B25F972(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x6C4954C76B25F972(unk_0x9F92518438215DD0(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x47E1E12B5E2888D4(uParam0->f_11, 0.129f);
							unk_0x47E1E12B5E2888D4(uParam0->f_12, 0.129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DDE6F600C12637C(uParam0->f_12, uParam0->f_34, 0);
							unk_0x6C4954C76B25F972(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x6C4954C76B25F972(unk_0x9F92518438215DD0(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x47E1E12B5E2888D4(uParam0->f_11, 0.145f);
							unk_0x47E1E12B5E2888D4(uParam0->f_12, 0.145f);
						}
						unk_0xF0875A1DC909B469(uParam0->f_36, 0, 0);
						unk_0xF0875A1DC909B469(unk_0x9F92518438215DD0(), 0, 0);
					}
					func_274(uParam0, 34);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 34);
				func_221(uParam0);
				if (func_282(uParam0, 34, 0))
				{
					func_230(uParam0, 18966.65f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 3))
					{
						if (func_282(uParam0, 34, 1100))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 3);
							}
						}
					}
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 4))
					{
						if (func_282(uParam0, 34, 1100))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 3))
					{
						if (func_282(uParam0, 34, 1000))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x0BA451447C3B1A8D(uParam0->f_35))
					{
						unk_0x407020DF5CAB33D3(uParam0->f_35, true);
					}
					if (!unk_0x0BA451447C3B1A8D(uParam0->f_36))
					{
						unk_0x407020DF5CAB33D3(uParam0->f_36, false);
					}
					if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()) && !unk_0x0BA451447C3B1A8D(uParam0->f_34))
					{
						unk_0x4073360CA020BB84(unk_0x9F92518438215DD0(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xF0875A1DC909B469(unk_0x9F92518438215DD0(), 0, 0);
					}
					func_274(uParam0, 35);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 35);
				func_221(uParam0);
				if (func_282(uParam0, 35, 0))
				{
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 5))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 4))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 4);
						}
					}
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 5))
					{
						if (func_282(uParam0, 36, -3750))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					if (!unk_0x0BA451447C3B1A8D(uParam0->f_34))
					{
						unk_0x1799A3BC0F7F7EB9(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xBFDA8319C24B82E9(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x31966ED835A3E8E4(uParam0->f_7, 33.3479f);
						unk_0x79DDEE9A5547C864(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x45826D2663F7FD9C(uParam0->f_7, 1);
						if (!unk_0x0BA451447C3B1A8D(uParam0->f_35))
						{
							unk_0x407020DF5CAB33D3(uParam0->f_35, false);
						}
						if (!unk_0x0BA451447C3B1A8D(uParam0->f_36))
						{
							unk_0x407020DF5CAB33D3(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x2DDE6F600C12637C(uParam0->f_11, uParam0->f_34, unk_0xB96C39A95065BDE2(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DDE6F600C12637C(uParam0->f_12, uParam0->f_34, unk_0xB96C39A95065BDE2(uParam0->f_34, "seat_pside_f"));
							unk_0x6C4954C76B25F972(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x6C4954C76B25F972(unk_0x9F92518438215DD0(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x47E1E12B5E2888D4(uParam0->f_11, 0.363f);
							unk_0x47E1E12B5E2888D4(uParam0->f_12, 0.363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DDE6F600C12637C(uParam0->f_12, uParam0->f_34, 0);
							unk_0x6C4954C76B25F972(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x6C4954C76B25F972(unk_0x9F92518438215DD0(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x47E1E12B5E2888D4(uParam0->f_11, 0.298f);
							unk_0x47E1E12B5E2888D4(uParam0->f_12, 0.298f);
						}
						unk_0xF0875A1DC909B469(uParam0->f_36, 0, 0);
						unk_0xF0875A1DC909B469(unk_0x9F92518438215DD0(), 0, 0);
					}
					func_274(uParam0, 36);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 36);
				func_221(uParam0);
				if (func_282(uParam0, 36, 0))
				{
					func_230(uParam0, 42700.96f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 6))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 6))
					{
						if (func_282(uParam0, 36, 1000))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x0BA451447C3B1A8D(uParam0->f_35))
					{
						unk_0x407020DF5CAB33D3(uParam0->f_35, true);
					}
					if (!unk_0x0BA451447C3B1A8D(uParam0->f_36))
					{
						unk_0x407020DF5CAB33D3(uParam0->f_36, false);
					}
					if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()) && !unk_0x0BA451447C3B1A8D(uParam0->f_34))
					{
						unk_0x4073360CA020BB84(unk_0x9F92518438215DD0(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xF0875A1DC909B469(unk_0x9F92518438215DD0(), 0, 0);
					}
					func_274(uParam0, 37);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 37);
				func_221(uParam0);
				if (func_282(uParam0, 37, 0))
				{
					func_230(uParam0, 51033.28f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 7))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 7);
						}
					}
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 8))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 9))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 7))
					{
						if (func_282(uParam0, 37, 2500))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 38);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 38);
				func_221(uParam0);
				if (func_282(uParam0, 38, 0))
				{
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 8))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 9))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 9);
						}
					}
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 31))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_241(uParam0))
				{
					if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 31))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 31);
						}
					}
				}
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					if (!unk_0x0BA451447C3B1A8D(uParam0->f_34))
					{
						unk_0x1799A3BC0F7F7EB9(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xBFDA8319C24B82E9(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x31966ED835A3E8E4(uParam0->f_7, 33.3479f);
						unk_0x79DDEE9A5547C864(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x45826D2663F7FD9C(uParam0->f_7, 1);
						if (!unk_0x0BA451447C3B1A8D(uParam0->f_35))
						{
							unk_0x407020DF5CAB33D3(uParam0->f_35, false);
						}
						if (!unk_0x0BA451447C3B1A8D(uParam0->f_36))
						{
							unk_0x407020DF5CAB33D3(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x2DDE6F600C12637C(uParam0->f_11, uParam0->f_34, unk_0xB96C39A95065BDE2(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DDE6F600C12637C(uParam0->f_12, uParam0->f_34, unk_0xB96C39A95065BDE2(uParam0->f_34, "seat_pside_f"));
							unk_0x6C4954C76B25F972(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x6C4954C76B25F972(unk_0x9F92518438215DD0(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x47E1E12B5E2888D4(uParam0->f_11, 0.811f);
							unk_0x47E1E12B5E2888D4(uParam0->f_12, 0.811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DDE6F600C12637C(uParam0->f_12, uParam0->f_34, 0);
							unk_0x6C4954C76B25F972(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x6C4954C76B25F972(unk_0x9F92518438215DD0(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x47E1E12B5E2888D4(uParam0->f_11, 0.791f);
							unk_0x47E1E12B5E2888D4(uParam0->f_12, 0.791f);
						}
						unk_0xF0875A1DC909B469(uParam0->f_36, 0, 0);
						unk_0xF0875A1DC909B469(unk_0x9F92518438215DD0(), 0, 0);
					}
					func_274(uParam0, 39);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 39);
				func_221(uParam0);
				if (func_282(uParam0, 39, 0))
				{
					func_230(uParam0, 85050f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!unk_0x94E72F17611BCD3C(uParam0->f_1, 31))
				{
					if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), 31);
					}
				}
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x30678C96F8F94241(9, 12, 9, 12);
					if (!unk_0x0BA451447C3B1A8D(uParam0->f_35))
					{
						unk_0x407020DF5CAB33D3(uParam0->f_35, true);
					}
					if (!unk_0x0BA451447C3B1A8D(uParam0->f_36))
					{
						unk_0x407020DF5CAB33D3(uParam0->f_36, false);
					}
					if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()) && !unk_0x0BA451447C3B1A8D(uParam0->f_34))
					{
						unk_0x4073360CA020BB84(unk_0x9F92518438215DD0(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xF0875A1DC909B469(unk_0x9F92518438215DD0(), 0, 0);
					}
					func_274(uParam0, 40);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 40);
				if (func_221(uParam0) && func_282(uParam0, 40, 0))
				{
					func_230(uParam0, 116366.5f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					unk_0xC861B765753DC070(0, 0, 0);
					func_276(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_274(uParam0, 41);
					unk_0xDBE21D4D59BC34D4("CONTRAILS", 0);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 41);
				if (func_282(uParam0, 41, 0))
				{
					unk_0x5449CEA09EA19BCE(1);
					func_230(uParam0, 127166.5f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_220(uParam0);
					func_276(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 42);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 42);
				if (func_282(uParam0, 42, 0))
				{
					unk_0x5449CEA09EA19BCE(0);
					func_230(uParam0, 170800f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 43);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 43);
				if (func_282(uParam0, 43, 0))
				{
					unk_0x30678C96F8F94241(9, 12, 9, 12);
					func_230(uParam0, 191799.8f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 44);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 44);
				if (func_282(uParam0, 44, 0))
				{
					func_230(uParam0, 196633.1f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 45);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 45);
				if (func_282(uParam0, 45, 0))
				{
					func_230(uParam0, 201466.5f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 46);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 46);
				if (func_282(uParam0, 46, 0))
				{
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_219(uParam0);
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					if (!unk_0x0BA451447C3B1A8D(uParam0->f_34))
					{
						unk_0x1799A3BC0F7F7EB9(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xBFDA8319C24B82E9(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x31966ED835A3E8E4(uParam0->f_7, 33.3479f);
						unk_0x79DDEE9A5547C864(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x45826D2663F7FD9C(uParam0->f_7, 1);
						if (!unk_0x0BA451447C3B1A8D(uParam0->f_35))
						{
							unk_0x407020DF5CAB33D3(uParam0->f_35, false);
						}
						if (!unk_0x0BA451447C3B1A8D(uParam0->f_36))
						{
							unk_0x407020DF5CAB33D3(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x2DDE6F600C12637C(uParam0->f_11, uParam0->f_34, unk_0xB96C39A95065BDE2(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DDE6F600C12637C(uParam0->f_12, uParam0->f_34, unk_0xB96C39A95065BDE2(uParam0->f_34, "seat_pside_f"));
							unk_0x6C4954C76B25F972(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x6C4954C76B25F972(unk_0x9F92518438215DD0(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x47E1E12B5E2888D4(uParam0->f_11, 0.726f);
							unk_0x47E1E12B5E2888D4(uParam0->f_12, 0.74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DDE6F600C12637C(uParam0->f_12, uParam0->f_34, 0);
							unk_0x6C4954C76B25F972(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x6C4954C76B25F972(unk_0x9F92518438215DD0(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x47E1E12B5E2888D4(uParam0->f_11, 0.726f);
							unk_0x47E1E12B5E2888D4(uParam0->f_12, 0.815f);
						}
						unk_0xF0875A1DC909B469(uParam0->f_36, 0, 0);
						unk_0xF0875A1DC909B469(unk_0x9F92518438215DD0(), 0, 0);
					}
					func_274(uParam0, 47);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 47);
				if (func_282(uParam0, 47, 0))
				{
					func_230(uParam0, 213066.4f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_219(uParam0);
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x0BA451447C3B1A8D(uParam0->f_35))
					{
						unk_0x407020DF5CAB33D3(uParam0->f_35, true);
					}
					if (!unk_0x0BA451447C3B1A8D(uParam0->f_36))
					{
						unk_0x407020DF5CAB33D3(uParam0->f_36, false);
					}
					if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()) && !unk_0x0BA451447C3B1A8D(uParam0->f_34))
					{
						unk_0x4073360CA020BB84(unk_0x9F92518438215DD0(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xF0875A1DC909B469(unk_0x9F92518438215DD0(), 0, 0);
					}
					func_274(uParam0, 48);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 48);
				if (func_282(uParam0, 48, 0))
				{
					unk_0xEDB9A377CD8B7F03(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 3);
					func_218(uParam0, 10177.75f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_219(uParam0);
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 49);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				func_284(uParam0, 49);
				if (unk_0xD670D03A989D1279("FM_INTRO_DRIVE_END") && func_282(uParam0, 49, 0))
				{
					func_216(uParam0, 4500f);
					unk_0xEDB9A377CD8B7F03(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_219(uParam0);
				if (!unk_0x9685D9855970A029())
				{
					if (!unk_0xA0CD269F4B0B4468())
					{
						unk_0xF391B7BD1F131C3F(250);
					}
				}
				if (unk_0x94E72F17611BCD3C(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						unk_0x7CA170124D017D0C();
						unk_0xF76EE56D3E7DAF1B(uParam0, 11);
					}
					func_274(uParam0, 50);
					unk_0xF76EE56D3E7DAF1B(uParam0, 15);
				}
				if (!unk_0x94E72F17611BCD3C(*uParam0, 20))
				{
					if (func_241(uParam0))
					{
						unk_0x4CE9C0B6BB26989C("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0x4CE9C0B6BB26989C("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (unk_0x3E477C98C0B83EB5())
						{
							if (func_241(uParam0))
							{
								unk_0xBE56ABEE2783E472("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0xBE56ABEE2783E472("MP_1", 0, 1);
							}
						}
					}
					if (unk_0x8C177CD087379EBE())
					{
						unk_0xEDB9A377CD8B7F03(uParam0, 20);
					}
				}
				func_284(uParam0, 50);
				if (!unk_0x0BA451447C3B1A8D(uParam0->f_34))
				{
					if (unk_0x1B277BFA27CD5A9F(uParam0->f_34))
					{
						if (unk_0x9EF11DECA38804B6(uParam0->f_34) < 1f)
						{
							unk_0x0DC4413F65975A4C(uParam0->f_34);
						}
					}
				}
				if (func_282(uParam0, 50, 0) && unk_0x94E72F17611BCD3C(*uParam0, 20))
				{
					if (unk_0x94E72F17611BCD3C(*uParam0, 21))
					{
						unk_0xDD74AAB135833BB7("FM_INTRO_DRIVE_END");
						unk_0xF76EE56D3E7DAF1B(uParam0, 21);
					}
					unk_0x0DC4413F65975A4C(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
					{
						if (func_241(uParam0))
						{
							unk_0x717851935436D1B0(unk_0x9F92518438215DD0(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x717851935436D1B0(unk_0x9F92518438215DD0(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0x0BA451447C3B1A8D(uParam0->f_35))
				{
					unk_0x717851935436D1B0(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x0BA451447C3B1A8D(uParam0->f_34))
				{
					unk_0x717851935436D1B0(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0xEDB9A377CD8B7F03(uParam0, 13);
				if (unk_0x370603716EC2D420("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0x6041FBFC1EE8196A("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0xEFAE0030469E9B12(4);
				func_232(1, 1, 1, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0xC42238EA2EBA3C42())
				{
					unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (unk_0x17103F66FBB44C3C() - uParam0->f_13);
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
						if (!unk_0x94E72F17611BCD3C(*uParam0, 23))
						{
							if (unk_0x87E70BB14C5C25EE("MP_Female_Character", 0))
							{
								if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
								{
									unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), unk_0x4F034F83AF91EC27(Var1.f_0, Var1.f_1));
									unk_0x5EF916489F3787FC(0);
									unk_0x203B2685C1715644(0, 1065353216);
									unk_0xEDB9A377CD8B7F03(uParam0, 23);
								}
							}
						}
					}
					else if (!unk_0x94E72F17611BCD3C(*uParam0, 23))
					{
						if (unk_0x87E70BB14C5C25EE("MP_1", 0))
						{
							if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
							{
								unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), unk_0x4F034F83AF91EC27(Var1.f_0, Var1.f_1));
								unk_0x5EF916489F3787FC(0);
								unk_0x203B2685C1715644(0, 1065353216);
								unk_0xEDB9A377CD8B7F03(uParam0, 23);
							}
						}
					}
				}
				if (unk_0x87E70BB14C5C25EE("LAMAR", 0))
				{
					if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
					{
						if (!unk_0x3E0478C40AB5B38D(uParam0->f_35))
						{
							if (!unk_0x827151D7B70CB853(uParam0->f_35, 0))
							{
								unk_0x4073360CA020BB84(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (unk_0x87E70BB14C5C25EE("MP_Lamar_Car", 0))
				{
					if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
					{
						unk_0x77C765087051EDD6(uParam0->f_34);
					}
				}
				if (unk_0x0DEEB038117360A3(0))
				{
					func_214(1);
					unk_0x5EF916489F3787FC(0);
					unk_0x203B2685C1715644(0, 1065353216);
				}
				if (!func_213(unk_0xCFC72E446B0B3AD7()))
				{
					func_212(1);
				}
				if (unk_0xC42238EA2EBA3C42())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x17103F66FBB44C3C() - (uParam0->f_30 + unk_0x7D9E747E28B50929()));
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
							if (unk_0x746960881FB19A89(uParam0->f_36))
							{
								unk_0x7763EDCBED8A5840(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					unk_0x6EAAF037567A12E2();
					unk_0x975D05EBF3CF46C0();
					if (!unk_0x18E5FE61656F62A0())
					{
						unk_0x667FB252FBBF3EAC(0);
					}
					func_232(0, 1, 1, 0);
					unk_0xF76EE56D3E7DAF1B(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0xC42238EA2EBA3C42())
				{
					unk_0xE76F2C93487B6AD1();
				}
				else if (!unk_0x94E72F17611BCD3C(*uParam0, 17))
				{
					if (unk_0x2E9CF5C574019636())
					{
						unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
						unk_0xEDB9A377CD8B7F03(uParam0, 13);
						unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), true);
						if (uParam0->f_292)
						{
							unk_0x7CA170124D017D0C();
							unk_0xF76EE56D3E7DAF1B(uParam0, 11);
						}
						func_178(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						unk_0xEDB9A377CD8B7F03(uParam0, 17);
					}
					else if (!unk_0x351E8373AE3D741D())
					{
						unk_0xC6EA7B53F52F1DF9(250);
					}
				}
				else if (func_179(&(uParam0->f_17), 10000, 0))
				{
					if (func_210(uParam0))
					{
						func_277(uParam0);
						func_226(uParam0);
						if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
						{
							unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), false);
							if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
							{
								unk_0x4220BD8C5CDBF540(unk_0x9F92518438215DD0(), true, 0);
								unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), 61.3164f);
							}
						}
						if (!unk_0x3E0478C40AB5B38D(uParam0->f_35))
						{
							if (!unk_0x827151D7B70CB853(uParam0->f_35, 0))
							{
								if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
								{
									unk_0x4073360CA020BB84(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_214(1);
						if (!func_213(unk_0xCFC72E446B0B3AD7()))
						{
							func_212(1);
						}
						func_232(0, 1, 1, 0);
						unk_0xC861B765753DC070(0, 0, 0);
						if (unk_0x94E72F17611BCD3C(*uParam0, 21))
						{
							unk_0xDD74AAB135833BB7("FM_INTRO_DRIVE_END");
							unk_0xF76EE56D3E7DAF1B(uParam0, 21);
						}
						unk_0xEDB9A377CD8B7F03(uParam0, 1);
						unk_0xEDB9A377CD8B7F03(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0xC42238EA2EBA3C42())
				{
					unk_0xE76F2C93487B6AD1();
				}
				else if (!unk_0x94E72F17611BCD3C(*uParam0, 17))
				{
					if (unk_0x2E9CF5C574019636())
					{
						unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
						unk_0xEDB9A377CD8B7F03(uParam0, 13);
						unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), true);
						if (uParam0->f_292)
						{
							unk_0x7CA170124D017D0C();
							unk_0xF76EE56D3E7DAF1B(uParam0, 11);
						}
						func_178(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						unk_0xEDB9A377CD8B7F03(uParam0, 17);
					}
					else if (!unk_0x351E8373AE3D741D())
					{
						unk_0xC6EA7B53F52F1DF9(250);
					}
				}
				else if (func_179(&(uParam0->f_17), 10000, 0))
				{
					if (func_261(uParam0))
					{
						func_277(uParam0);
						func_226(uParam0);
						if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
						{
							unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), false);
							if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
							{
								unk_0x4220BD8C5CDBF540(unk_0x9F92518438215DD0(), true, 0);
								unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), 61.3164f);
								if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
								{
									unk_0x4073360CA020BB84(unk_0x9F92518438215DD0(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!unk_0x3E0478C40AB5B38D(uParam0->f_35))
						{
							if (!unk_0x827151D7B70CB853(uParam0->f_35, 0))
							{
								if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
								{
									unk_0x4073360CA020BB84(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_213(unk_0xCFC72E446B0B3AD7()))
						{
						}
						func_232(0, 1, 1, 0);
						if (unk_0x94E72F17611BCD3C(*uParam0, 21))
						{
							unk_0xDD74AAB135833BB7("FM_INTRO_DRIVE_END");
							unk_0xF76EE56D3E7DAF1B(uParam0, 21);
						}
						unk_0xF391B7BD1F131C3F(250);
						unk_0xC861B765753DC070(0, 0, 0);
						unk_0xEDB9A377CD8B7F03(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 3);
						uParam0->f_13 = (unk_0x17103F66FBB44C3C() - func_207(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_218(uParam0, 10177.75f);
						unk_0xEDB9A377CD8B7F03(uParam0, 15);
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
					unk_0x7CA170124D017D0C();
					unk_0xF76EE56D3E7DAF1B(uParam0, 11);
				}
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_35))
				{
					unk_0xD19636383159AC07(uParam0->f_35, -1);
					unk_0xE8105B7E3908547D(uParam0->f_35, 1);
				}
				unk_0x3A3225ACCFD6ED91(1);
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
				uParam0->f_289 = unk_0xBBDA792448DB5A89((unk_0x17103F66FBB44C3C() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = unk_0xBBDA792448DB5A89(func_215(uParam0));
			}
			uParam0->f_290 = func_195(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && unk_0x94E72F17611BCD3C(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				unk_0x14E9F3D2EBBCF900(uParam0->f_289);
			}
			else
			{
				unk_0x14E9F3D2EBBCF900(uParam0->f_290);
			}
		}
		func_192(uParam0);
		if (unk_0x94E72F17611BCD3C(*uParam0, 12))
		{
			if (func_251())
			{
				func_191();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
				{
					unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), false, 60);
				}
			}
			func_189(uParam0);
			unk_0x1D16A18EF0719298();
			unk_0xAB10BEEBB0614A3E(9);
			unk_0xAB10BEEBB0614A3E(7);
			unk_0xAB10BEEBB0614A3E(18);
			unk_0xAB10BEEBB0614A3E(6);
			unk_0xAB10BEEBB0614A3E(3);
			unk_0xAB10BEEBB0614A3E(13);
			unk_0xAB10BEEBB0614A3E(4);
		}
		if (Global_2446533.f_1689)
		{
			unk_0xC805A7010638FA82(2, 187, 1);
		}
	}
	return 0;
}

void func_189(var uParam0)
{
	var uVar0;
	
	if (!unk_0x94E72F17611BCD3C(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!unk_0x4F0283431254A343())
			{
				if (!unk_0x9BFC762F15A9BED6())
				{
					uVar0 = unk_0xCFC72E446B0B3AD7() + 32;
					unk_0xCC24CEF3DA5DD1A8(1, uVar0);
					func_190(1);
					unk_0xEDB9A377CD8B7F03(uParam0, 9);
				}
			}
			else
			{
				func_190(1);
				unk_0xEDB9A377CD8B7F03(uParam0, 9);
			}
		}
	}
}

void func_190(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 18))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 18);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 18))
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 18);
	}
}

void func_191()
{
	unk_0x10243718C63A4D3E(Global_1318713, 255, 255, 255, 255, 0);
	if (Global_1318715 == 0)
	{
		unk_0x48F299599202B77A(Global_1318713, "SET_BIG_LOGO_VISIBLE");
		unk_0x4BD4D58838D3F8E5(1);
		unk_0x63E5FA5DEE979BD6(1);
		unk_0x7E86CE5F658823DB();
		Global_1318715 = 1;
	}
}

void func_192(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x746960881FB19A89(uParam0->f_58[uParam0->f_90]))
	{
		if (unk_0x0BA451447C3B1A8D(uParam0->f_58[uParam0->f_90]))
		{
		}
		Var0 = { unk_0x77009B1C011405A9(uParam0->f_58[uParam0->f_90], 1) };
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
	
	if (unk_0x746960881FB19A89(uParam0->f_58[iParam1]))
	{
		if (unk_0x0BA451447C3B1A8D(uParam0->f_58[iParam1]))
		{
		}
		func_194(iParam1, &Var0, &fVar3);
		unk_0xFA51DC22F6E34F6E(uParam0->f_58[iParam1], Var0, 1, 0, 0, 1);
		unk_0x03D97EDECF2E1859(uParam0->f_58[iParam1], fVar3);
		unk_0xD9B13F0A69759C12(uParam0->f_58[iParam1], true);
		unk_0x407153DCFFCB4657(uParam0->f_58[iParam1]);
		unk_0x4220BD8C5CDBF540(uParam0->f_58[iParam1], false, 0);
		unk_0x407020DF5CAB33D3(uParam0->f_58[iParam1], false);
	}
	if (unk_0x746960881FB19A89(uParam0->f_74[iParam1]))
	{
		if (unk_0x0BA451447C3B1A8D(uParam0->f_74[iParam1]))
		{
		}
		unk_0x407020DF5CAB33D3(uParam0->f_74[iParam1], false);
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
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0x7D9E747E28B50929()));
			if (unk_0x8D7C9489438A6EE6() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / unk_0xBBDA792448DB5A89(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0x7D9E747E28B50929()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_196(var uParam0)
{
	if (unk_0x94E72F17611BCD3C(*uParam0, 29))
	{
		unk_0x23B9CA717684958D(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		unk_0x23B9CA717684958D(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_197(var uParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x94E72F17611BCD3C(*uParam0, 0))
	{
		if (unk_0xC42238EA2EBA3C42())
		{
			unk_0x667FB252FBBF3EAC(0);
		}
		unk_0xD30CC382C34317CB(0);
		if (uParam0->f_292)
		{
			unk_0x8CFE3865875D19E6(0);
			unk_0x7CA170124D017D0C();
			unk_0xF76EE56D3E7DAF1B(uParam0, 11);
		}
		if (unk_0x94E72F17611BCD3C(*uParam0, 14))
		{
			unk_0x198BDC6BF12F2D84();
			unk_0xF76EE56D3E7DAF1B(uParam0, 14);
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
		unk_0x845977C673188B47();
		if (bParam2)
		{
			if (unk_0x746960881FB19A89(uParam0->f_34))
			{
				unk_0x9187463EB4918A4D(&(uParam0->f_34));
			}
			if (unk_0x746960881FB19A89(uParam0->f_35))
			{
				unk_0x995B3705D02B0401(&(uParam0->f_35));
			}
		}
		if (unk_0x746960881FB19A89(uParam0->f_36))
		{
			unk_0x7763EDCBED8A5840(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			func_357(0);
		}
		func_203();
		func_198();
		func_232(0, 1, 1, 0);
		unk_0xC658188535CE7FAF(0, -1);
		unk_0xAC852201A4726FF0(1);
		if (unk_0x4B69FB3A5B09A1BA())
		{
			if (unk_0x3E5B62F75695AF89())
			{
				unk_0xFF8914300FF5C56D(0, 1);
			}
		}
		if (unk_0x94E72F17611BCD3C(*uParam0, 21))
		{
			unk_0xDD74AAB135833BB7("FM_INTRO_DRIVE_END");
			unk_0xF76EE56D3E7DAF1B(uParam0, 21);
		}
		unk_0xF065EC55CD448A4C(0);
		func_320(1);
		if (unk_0x94E72F17611BCD3C(*uParam0, 26))
		{
			func_315(1, 0);
			unk_0xF76EE56D3E7DAF1B(uParam0, 26);
		}
		Global_2422166.f_3037 = 0;
		if (!unk_0x2D8FCFBC4E01FF7C())
		{
			unk_0xDB87073305408494(0);
		}
		unk_0xD6B7E966D6378295(1);
		if (bParam1)
		{
		}
		func_175(0);
		func_187(1);
		Global_2446533.f_1689 = 0;
		Global_2446533.f_1688 = 0;
		if (unk_0x370603716EC2D420("MP_INTRO_RACE_SCENE"))
		{
			unk_0x6041FBFC1EE8196A("MP_INTRO_RACE_SCENE");
		}
		if (unk_0x370603716EC2D420("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0x6041FBFC1EE8196A("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_298(14, 1);
		unk_0xF72219EF3DF47F66(5);
		unk_0xDBE21D4D59BC34D4("CONTRAILS", 0);
		unk_0x6AC537DA214AB66E(5, "FMINTRO");
		unk_0x6AC537DA214AB66E(6, "FMINTRO");
		unk_0x6AC537DA214AB66E(7, "FMINTRO");
		unk_0xE29F0AC6C728DD9C("mp_intro_seq@");
		unk_0xE29F0AC6C728DD9C("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0xE29F0AC6C728DD9C("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0xE29F0AC6C728DD9C("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0x2E6E8D325977B3EC(unk_0xB9C72E97E89CC683()))
		{
			unk_0xD4916ED85412C8D9(unk_0xB9C72E97E89CC683(), 0.7f);
		}
		unk_0xB8CAC5BE07F9D9E0(0);
		unk_0x5EF916489F3787FC(0);
		unk_0x203B2685C1715644(0, 1065353216);
		if (unk_0x4B69FB3A5B09A1BA())
		{
			unk_0x592CBB5BF561A072();
			unk_0x3A3225ACCFD6ED91(1);
		}
		unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
		unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), false);
		if (!unk_0x9685D9855970A029() && !unk_0xA0CD269F4B0B4468())
		{
			unk_0xF391B7BD1F131C3F(800);
		}
		unk_0xEDB9A377CD8B7F03(uParam0, 0);
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
			unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
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
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
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
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
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
	if (!Global_1312571)
	{
		return;
	}
	func_204();
}

void func_204()
{
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), "", 24);
	Global_1312571.f_7 = 0;
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
	unk_0x973CDBEE91574C6A(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	unk_0x973CDBEE91574C6A(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
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
	unk_0x3BC6D217451D6BB7(iVar0);
	unk_0x3BC6D217451D6BB7(iVar1);
	if (unk_0x149162179DBAEDB0(iVar0) && unk_0x149162179DBAEDB0(iVar1))
	{
		if (!unk_0x746960881FB19A89(uParam0->f_34))
		{
			uParam0->f_34 = unk_0xB0694AD0A3BB8936(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0);
			unk_0xC360E3C17C23186B(uParam0->f_34, 1);
			unk_0xC7C9C824705A3C60(uParam0->f_34, 0);
			unk_0x08B4E5756419497B(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			unk_0x4F089107CDB61F75(uParam0->f_34, 2);
		}
		else if (!unk_0x746960881FB19A89(uParam0->f_35))
		{
			if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xA00B5D954AD320BF(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, 0);
				unk_0x4A1AC49BA4A747F7(uParam0->f_35, 1);
				unk_0xC204B4E5503A54EA(uParam0->f_34, 1);
				unk_0xC204B4E5503A54EA(uParam0->f_35, 1);
				unk_0xA50AD6983D49A772(uParam0->f_35, unk_0x859AF9B2709EF054(unk_0x9F92518438215DD0()));
				unk_0x08B4E5756419497B(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0x746960881FB19A89(uParam0->f_34) || !unk_0x746960881FB19A89(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_211(var uParam0, int iParam1)
{
	if (unk_0x746960881FB19A89(uParam0->f_58[iParam1]))
	{
		unk_0xCD3EBB4EAE50293F(&(uParam0->f_58[iParam1]));
	}
	if (unk_0x746960881FB19A89(uParam0->f_74[iParam1]))
	{
		unk_0x7763EDCBED8A5840(&(uParam0->f_74[iParam1]));
	}
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_128), 22);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_128), 22);
	}
}

bool func_213(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_128, 22);
}

void func_214(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 4);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 4);
	}
}

int func_215(var uParam0)
{
	if (uParam0->f_6 < 31)
	{
		return unk_0xA6053C2AAB834F13();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + unk_0x7D9E747E28B50929());
	}
	return (uParam0->f_28 + unk_0xA6053C2AAB834F13());
}

void func_216(var uParam0, float fParam1)
{
	func_217(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_217(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(uParam0, 0))
	{
		if (bParam4)
		{
			unk_0x0DC4413F65975A4C(uParam0);
			unk_0x62F337D16CFC3C6E(uParam0, iParam1, sParam2, 1);
		}
		else if (!unk_0x1B277BFA27CD5A9F(uParam0))
		{
			unk_0x62F337D16CFC3C6E(uParam0, iParam1, sParam2, 1);
			unk_0x2A6F4D0282BA47A1(uParam0, 1);
		}
		else
		{
			iVar0 = unk_0x18D55FD90C071812(iParam1, sParam2);
			if (unk_0x7508F069B2A7BA46(uParam0) != iVar0)
			{
				unk_0x62F337D16CFC3C6E(uParam0, iParam1, sParam2, 1);
				unk_0x2A6F4D0282BA47A1(uParam0, 1);
			}
		}
		unk_0xD172502A99767BFE(uParam0, (fParam3 - unk_0x2767A2FD649FAEE2(uParam0)));
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
		iVar0 = unk_0x398F092142D37E17("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0x23EA0079E2840B6D(iVar1))
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
		if (unk_0x746960881FB19A89(uParam0->f_37[iVar0]))
		{
			unk_0x7763EDCBED8A5840(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0x0880E86251A44B7F(joaat("g_m_y_mexgoon_02"));
	unk_0xE29F0AC6C728DD9C("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0xE29F0AC6C728DD9C("amb@world_human_hang_out_street@male_a@base");
}

int func_221(var uParam0)
{
	int iVar0;
	
	if (unk_0x94E72F17611BCD3C(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0x3BC6D217451D6BB7(joaat("g_m_y_mexgoon_02"));
		unk_0xDA293E5084610B09("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0xDA293E5084610B09("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0x149162179DBAEDB0(joaat("g_m_y_mexgoon_02")) && unk_0x3DA2EED4204CE591("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0x3DA2EED4204CE591("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0x746960881FB19A89(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = unk_0xA00B5D954AD320BF(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, 0);
					unk_0xC204B4E5503A54EA(uParam0->f_37[iVar0], 1);
					unk_0x4A1AC49BA4A747F7(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							unk_0x0B7D6B6B8084020E(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							unk_0x0B7D6B6B8084020E(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							unk_0x0B7D6B6B8084020E(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							unk_0x0B7D6B6B8084020E(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							unk_0x0B7D6B6B8084020E(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							unk_0xFA51DC22F6E34F6E(uParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							unk_0x03D97EDECF2E1859(uParam0->f_37[iVar0], 76.8852f);
							unk_0x46D3B8FF073CD238(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0xD9B13F0A69759C12(uParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0x0B7D6B6B8084020E(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							unk_0xFA51DC22F6E34F6E(uParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							unk_0x03D97EDECF2E1859(uParam0->f_37[iVar0], 87.5786f);
							unk_0x46D3B8FF073CD238(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0xD9B13F0A69759C12(uParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0x0B7D6B6B8084020E(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							unk_0x0B7D6B6B8084020E(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0x746960881FB19A89(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x0880E86251A44B7F(joaat("g_m_y_mexgoon_02"));
		unk_0xE29F0AC6C728DD9C("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0xE29F0AC6C728DD9C("amb@world_human_hang_out_street@male_a@base");
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 5);
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

void func_223(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!unk_0x94E72F17611BCD3C(*uParam0, 25))
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
			if (!unk_0x3E0478C40AB5B38D(uParam0->f_98[iVar0]) && unk_0xFC38B241541883D3(uParam0->f_92[iVar0], 0))
			{
				unk_0xD9B13F0A69759C12(uParam0->f_92[iVar0], false);
				unk_0xBF3459C0ACC7B82F(uParam0->f_92[iVar0], 10f);
				unk_0xC96425701AF2C9C4(uParam0->f_98[iVar0], uParam0->f_92[iVar0], Var1, 5f, 0, unk_0xB6A50C909A8FABC3(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0xEDB9A377CD8B7F03(uParam0, 25);
	}
}

int func_224(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (unk_0x94E72F17611BCD3C(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = joaat("shamal");
	unk_0x3BC6D217451D6BB7(iVar5);
	unk_0x3BC6D217451D6BB7(func_225());
	if (unk_0x149162179DBAEDB0(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x746960881FB19A89(uParam0->f_92[iVar0]))
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
				uParam0->f_92[iVar0] = unk_0xB0694AD0A3BB8936(iVar5, Var1, fVar4, 0, 0);
				unk_0x77C765087051EDD6(uParam0->f_92[iVar0]);
				unk_0xD9B13F0A69759C12(uParam0->f_92[iVar0], true);
				unk_0x4F089107CDB61F75(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0x746960881FB19A89(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0x149162179DBAEDB0(func_225()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x746960881FB19A89(uParam0->f_98[iVar0]))
			{
				if (unk_0x746960881FB19A89(uParam0->f_92[iVar0]))
				{
					if (unk_0xFC38B241541883D3(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = unk_0xAD7526C9AA33EE39(uParam0->f_92[iVar0], 4, func_225(), -1, 0, false);
						unk_0x4A1AC49BA4A747F7(uParam0->f_98[iVar0], 1);
						unk_0x6FD45FA39DD18625(uParam0->f_92[iVar0], 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0x0880E86251A44B7F(iVar5);
	unk_0x0880E86251A44B7F(func_225());
	unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 11);
	return 1;
}

int func_225()
{
	return unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0());
}

void func_226(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x746960881FB19A89(uParam0->f_92[iVar0]))
		{
			unk_0xCD3EBB4EAE50293F(&(uParam0->f_92[iVar0]));
		}
		if (unk_0x746960881FB19A89(uParam0->f_98[iVar0]))
		{
			unk_0x7763EDCBED8A5840(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0x0880E86251A44B7F(joaat("shamal"));
	unk_0x0880E86251A44B7F(func_225());
}

void func_227(var uParam0)
{
	int iVar0;
	
	if (unk_0x94E72F17611BCD3C(uParam0->f_3, 2))
	{
		unk_0x0880E86251A44B7F(joaat("p_cs_mp_jet_01_s"));
		if (unk_0x746960881FB19A89(uParam0->f_33))
		{
			unk_0x83A49C880CB75451(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (unk_0x3C5A2499E52A9A94(uParam0->f_120))
			{
				unk_0xAC467C1E0A7369EE(uParam0->f_120, 0);
			}
			if (unk_0x3C5A2499E52A9A94(uParam0->f_121))
			{
				unk_0xAC467C1E0A7369EE(uParam0->f_121, 0);
			}
			if (unk_0x3749C5550F0953F2())
			{
				unk_0xC3CD8798C7C83A3D();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0x746960881FB19A89(uParam0->f_104[iVar0]))
			{
				unk_0x7763EDCBED8A5840(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0xF76EE56D3E7DAF1B(&(uParam0->f_3), 2);
	}
}

int func_228(var uParam0)
{
	if (func_241(uParam0))
	{
		unk_0xDA293E5084610B09("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0xDA293E5084610B09("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x3DA2EED4204CE591("mp_intro_seq@ig_1_lamar_drive_female") && unk_0x3DA2EED4204CE591("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0xDA293E5084610B09("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0xDA293E5084610B09("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x3DA2EED4204CE591("mp_intro_seq@ig_1_lamar_drive_male") && unk_0x3DA2EED4204CE591("mp_intro_seq@ig_1_lamar_drive_radio"))
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
	if (!unk_0x94E72F17611BCD3C(uParam0->f_3, 10))
	{
		unk_0x3BC6D217451D6BB7(iVar0);
		if (unk_0x149162179DBAEDB0(iVar0))
		{
			if (!unk_0x746960881FB19A89(uParam0->f_36))
			{
				uParam0->f_36 = unk_0xA00B5D954AD320BF(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, 0);
				unk_0x4A1AC49BA4A747F7(uParam0->f_36, 1);
				unk_0xC204B4E5503A54EA(uParam0->f_36, 1);
				unk_0x407020DF5CAB33D3(uParam0->f_36, false);
				unk_0xA50AD6983D49A772(uParam0->f_36, unk_0x859AF9B2709EF054(unk_0x9F92518438215DD0()));
				unk_0x08B4E5756419497B(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				func_358(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0x746960881FB19A89(uParam0->f_36))
		{
			return 0;
		}
		unk_0x0880E86251A44B7F(iVar0);
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 10);
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
	
	unk_0x0880E86251A44B7F(func_244());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_245(uParam0, iVar0);
		iVar0++;
	}
	if (unk_0x746960881FB19A89(uParam0->f_91))
	{
		unk_0x7763EDCBED8A5840(&(uParam0->f_91));
	}
}

void func_232(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xEDCFF0FC6297F270(unk_0xCFC72E446B0B3AD7());
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 1);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 1);
		func_238(1);
		unk_0x2C65B46CAD8BDA04();
		unk_0x2D600F28499293DD();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x71F866C9C77F9B9F())
			{
				unk_0xC318E8D9E0AA1394(0);
			}
			if (!func_147())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_237(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_238(0);
		unk_0x1B4F451D66F090A7();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x431DA04416622A80();
		}
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		func_237(0, iParam3, iParam2);
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && !func_233(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
		}
		Global_68243 = 0;
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
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_234()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

bool func_235(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_236(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
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
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_237(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xF8386AB49CD1A1B8() != iParam0 && uParam2)
		{
			unk_0xC9B8731F7E02AD92(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_238(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 13);
	}
}

void func_239(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0x0BA451447C3B1A8D(uParam0->f_104[iVar0]))
		{
			unk_0xBA3586BB63B045BD(uParam0->f_104[iVar0]);
			unk_0x717851935436D1B0(uParam0->f_104[iVar0], func_240(iVar0), 0, 0, 64);
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
	return func_243(unk_0xCFC72E446B0B3AD7());
}

int func_243(int iParam0)
{
	if (unk_0xB6A50C909A8FABC3(unk_0x4E6043D225B9C75F(iParam0)) == joaat("mp_f_freemode_01"))
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
	unk_0x0880E86251A44B7F(func_246(iParam1));
	if (unk_0x746960881FB19A89(uParam0->f_49[iParam1]))
	{
		if (unk_0xFC38B241541883D3(uParam0->f_49[iParam1], 0))
		{
		}
		unk_0x0D927E909BF72F28(uParam0->f_49[iParam1]);
		unk_0xCD3EBB4EAE50293F(&(uParam0->f_49[iParam1]));
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
	Global_1318715 = 0;
	if (unk_0x5E3461E729DA646E(Global_1318713))
	{
		unk_0x48F299599202B77A(Global_1318713, "SET_BIG_LOGO_VISIBLE");
		unk_0x4BD4D58838D3F8E5(1);
		unk_0x63E5FA5DEE979BD6(0);
		unk_0x7E86CE5F658823DB();
		unk_0x76D57BAF1F432EA7(&Global_1318713);
	}
}

void func_248(var uParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0x746960881FB19A89(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			unk_0xAB5ECB7EFE6A4784(&uVar0);
		}
		if (unk_0x746960881FB19A89(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			unk_0xAB5ECB7EFE6A4784(&uVar0);
		}
		iVar1++;
	}
	unk_0x0880E86251A44B7F(joaat("cheetah"));
	unk_0x0880E86251A44B7F(joaat("monroe"));
	unk_0x0880E86251A44B7F(joaat("entityxf"));
	unk_0x0880E86251A44B7F(joaat("feltzer2"));
	unk_0x6AC537DA214AB66E(100, "FM_Intro_uber");
	unk_0x6AC537DA214AB66E(101, "FM_Intro_uber");
	unk_0x6AC537DA214AB66E(102, "FM_Intro_uber");
	unk_0x6AC537DA214AB66E(103, "FM_Intro_uber");
	unk_0x6AC537DA214AB66E(104, "FM_Intro_uber");
	unk_0xE29F0AC6C728DD9C("mp_intro_seq@");
}

void func_249(var uParam0)
{
	if (unk_0x746960881FB19A89(uParam0->f_49[2]))
	{
		if (unk_0xFC38B241541883D3(uParam0->f_49[2], 0))
		{
			unk_0x53F6B63C3853545F(uParam0->f_49[2]);
		}
	}
	if (unk_0x746960881FB19A89(uParam0->f_49[4]))
	{
		if (unk_0xFC38B241541883D3(uParam0->f_49[4], 0))
		{
			unk_0x53F6B63C3853545F(uParam0->f_49[4]);
		}
	}
}

void func_250(var uParam0)
{
	if (unk_0x746960881FB19A89(uParam0->f_49[2]))
	{
		if (unk_0xFC38B241541883D3(uParam0->f_49[2], 0))
		{
			unk_0x66258686DD0DE921(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_251()
{
	if (unk_0x00726F0BBC787F61())
	{
		return 0;
	}
	if (!unk_0x5E3461E729DA646E(Global_1318713))
	{
		Global_1318713 = unk_0xC97D787CE7726A2F("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_252(var uParam0, char* sParam1, char* sParam2, var uParam3, struct<3> Param4, struct<3> Param7)
{
	if (unk_0x746960881FB19A89(uParam3))
	{
		if (unk_0x0BA451447C3B1A8D(uParam3))
		{
		}
		if (!unk_0x5329DB72517417AE(uParam0->f_8))
		{
			uParam0->f_8 = unk_0x9DC0C451516E13AF("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = unk_0x8E83718430E22797(Param4, Param7, 2);
		unk_0x2DDE6F600C12637C(uParam0->f_9, uParam3, 0);
		unk_0x7293A816EC05CF5F(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		unk_0x45826D2663F7FD9C(uParam0->f_8, 1);
		unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 1, 0);
	}
}

void func_253(var uParam0)
{
	if (!unk_0x94E72F17611BCD3C(uParam0->f_3, 3))
	{
		unk_0xDA54EE33CF6EAE73("CONTRAILS");
		if (func_241(uParam0))
		{
			unk_0x6F7788683BA3F14E("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0x6F7788683BA3F14E("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0x3E477C98C0B83EB5())
		{
			if (uParam0->f_295)
			{
				if (func_241(uParam0))
				{
					unk_0xBE56ABEE2783E472("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0xBE56ABEE2783E472("MP_Male_Character", 0, 1);
				}
			}
			func_254();
		}
		if (unk_0x8C177CD087379EBE())
		{
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 3);
		}
	}
}

void func_254()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0xBE56ABEE2783E472(func_240(iVar0), 0, 1);
		iVar0++;
	}
}

int func_255(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!unk_0x94E72F17611BCD3C(uParam0->f_3, 2))
	{
		unk_0x3BC6D217451D6BB7(joaat("p_cs_mp_jet_01_s"));
		unk_0x3BC6D217451D6BB7(joaat("mp_m_freemode_01"));
		unk_0x3BC6D217451D6BB7(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			unk_0x21ED45FD62BE6E8D();
		}
		if (((unk_0x149162179DBAEDB0(joaat("p_cs_mp_jet_01_s")) && unk_0x149162179DBAEDB0(joaat("mp_m_freemode_01"))) && unk_0x149162179DBAEDB0(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || unk_0x3749C5550F0953F2()))
		{
			uParam0->f_33 = unk_0xA7DA1E6D4C99864B(joaat("p_cs_mp_jet_01_s"), Var1, 0, 0, 0);
			unk_0xA7335B336910A0CC(uParam0->f_33, 3000);
			unk_0x185D18DA9BC98757(uParam0->f_33, 0);
			unk_0x407020DF5CAB33D3(uParam0->f_33, false);
			if (uParam0->f_294)
			{
				uParam0->f_120 = unk_0x14B5563C7C3321EA("scr_mp_intro_plane_exhaust", uParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = unk_0x14B5563C7C3321EA("scr_mp_intro_plane_exhaust", uParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
					uParam0->f_104[iVar0] = unk_0xA00B5D954AD320BF(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = unk_0xA00B5D954AD320BF(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				if (func_257(uParam0, iVar0))
				{
					if (!unk_0x0BA451447C3B1A8D(unk_0x4E6043D225B9C75F(unk_0x7225A5A7A532BC7C(uParam0->f_112[iVar0]))))
					{
					}
					unk_0x6487F2F88D44AEA2(unk_0x4E6043D225B9C75F(unk_0x7225A5A7A532BC7C(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					unk_0xBA3586BB63B045BD(uParam0->f_104[iVar0]);
				}
				else
				{
					func_256(uParam0, iVar0);
				}
				iVar0++;
			}
			unk_0x0880E86251A44B7F(joaat("p_cs_mp_jet_01_s"));
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 2);
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
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 1);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 2);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 3);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 4);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 5);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 6);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 7);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 1);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 2);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 3);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 4);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 5);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 6);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 7);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 1);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 2);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 3);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 4);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 5);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 6);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 7);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 1);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 2);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 3);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 4);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 5);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 6);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 7);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 1);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 2);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 3);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 4);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 5);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 6);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 7);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 1);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 2);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 3);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 4);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 5);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 6);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 7);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xB27BF64B02C0107E(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 0);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 1);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 2);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 3);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 4);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 5);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 6);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 7);
			unk_0xEB561D54613EF2E6(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_257(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_12(unk_0x7225A5A7A532BC7C(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, int iParam1)
{
	if (func_257(uParam0, iParam1))
	{
		return func_243(unk_0x7225A5A7A532BC7C(uParam0->f_112[iParam1]));
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
		iVar2 = unk_0x7225A5A7A532BC7C(iVar1);
		if (func_12(iVar2, 0, 1))
		{
			if (unk_0xCFC72E446B0B3AD7() != iVar2)
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
	if (unk_0x94E72F17611BCD3C(uParam0->f_3, 9))
	{
		return 1;
	}
	unk_0x3BC6D217451D6BB7(iVar0);
	unk_0x3BC6D217451D6BB7(iVar1);
	unk_0x8E6E37300A0A2B22(5, "FMINTRO");
	unk_0x8E6E37300A0A2B22(6, "FMINTRO");
	unk_0x8E6E37300A0A2B22(7, "FMINTRO");
	unk_0xDA293E5084610B09("mp_intro_seq@");
	if (((((unk_0x149162179DBAEDB0(iVar0) && unk_0x149162179DBAEDB0(iVar1)) && unk_0x381FCADDEA0C040B(5, "FMINTRO")) && unk_0x381FCADDEA0C040B(6, "FMINTRO")) && unk_0x381FCADDEA0C040B(7, "FMINTRO")) && unk_0x3DA2EED4204CE591("mp_intro_seq@"))
	{
		if (!unk_0x746960881FB19A89(uParam0->f_34))
		{
			unk_0xFC90BEDEE248C76D(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = unk_0xB0694AD0A3BB8936(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0);
			unk_0xC360E3C17C23186B(uParam0->f_34, 1);
			unk_0xC7C9C824705A3C60(uParam0->f_34, 0);
			unk_0x08B4E5756419497B(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!unk_0x746960881FB19A89(uParam0->f_35))
		{
			if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xA00B5D954AD320BF(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, 0);
				unk_0x4073360CA020BB84(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
				unk_0x4A1AC49BA4A747F7(uParam0->f_35, 1);
				unk_0xC204B4E5503A54EA(uParam0->f_34, 1);
				unk_0xC204B4E5503A54EA(uParam0->f_35, 1);
				unk_0xA50AD6983D49A772(uParam0->f_35, unk_0x859AF9B2709EF054(unk_0x9F92518438215DD0()));
				unk_0x08B4E5756419497B(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0x746960881FB19A89(uParam0->f_34) || !unk_0x746960881FB19A89(uParam0->f_35))
	{
		return 0;
	}
	unk_0x0880E86251A44B7F(iVar0);
	unk_0x0880E86251A44B7F(iVar1);
	unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 9);
	return 1;
}

void func_262(var uParam0)
{
	int iVar0;
	
	if (!unk_0x94E72F17611BCD3C(uParam0->f_3, 0))
	{
		func_272();
		func_270();
		if (func_264(uParam0))
		{
			if (func_263(uParam0))
			{
				if (!unk_0x5329DB72517417AE(uParam0->f_7))
				{
					uParam0->f_7 = unk_0x9DC0C451516E13AF("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				unk_0xD137F1896B8B6A2E(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0x0880E86251A44B7F(func_246(iVar0));
					iVar0++;
				}
				unk_0x0880E86251A44B7F(func_244());
				unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 0);
			}
		}
	}
}

int func_263(var uParam0)
{
	int iVar0;
	
	iVar0 = func_244();
	if (!unk_0x746960881FB19A89(uParam0->f_91))
	{
		if (unk_0x746960881FB19A89(uParam0->f_49[2]))
		{
			if (unk_0x23EA0079E2840B6D(iVar0))
			{
				if (unk_0x149162179DBAEDB0(iVar0))
				{
					if (unk_0x3DA2EED4204CE591("MP_INTRO_SEQ@"))
					{
						if (!unk_0x0BA451447C3B1A8D(uParam0->f_49[2]))
						{
							uParam0->f_10 = unk_0x8E83718430E22797(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DDE6F600C12637C(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0xA00B5D954AD320BF(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, 0);
							unk_0x4A1AC49BA4A747F7(uParam0->f_91, 1);
							unk_0x6C4954C76B25F972(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							unk_0x25821CAAB3B8EF73(uParam0->f_10, 1);
							unk_0xD9B13F0A69759C12(uParam0->f_91, true);
							unk_0x4220BD8C5CDBF540(uParam0->f_91, false, 0);
							unk_0x014E6B439CFE3432(uParam0->f_91, joaat("gadget_parachute"));
							unk_0xB27BF64B02C0107E(uParam0->f_91, 0, 1, 1, 0);
							unk_0xB27BF64B02C0107E(uParam0->f_91, 1, 0, 0, 0);
							unk_0xB27BF64B02C0107E(uParam0->f_91, 2, 0, 2, 0);
							unk_0xB27BF64B02C0107E(uParam0->f_91, 3, 0, 2, 0);
							unk_0xB27BF64B02C0107E(uParam0->f_91, 4, 1, 0, 0);
							unk_0xB27BF64B02C0107E(uParam0->f_91, 5, 0, 0, 0);
							unk_0xB27BF64B02C0107E(uParam0->f_91, 6, 0, 0, 0);
							unk_0xB27BF64B02C0107E(uParam0->f_91, 7, 0, 0, 0);
							unk_0xB27BF64B02C0107E(uParam0->f_91, 8, 0, 0, 0);
							unk_0xB27BF64B02C0107E(uParam0->f_91, 9, 0, 0, 0);
							unk_0xB27BF64B02C0107E(uParam0->f_91, 10, 0, 0, 0);
							unk_0xB27BF64B02C0107E(uParam0->f_91, 11, 0, 0, 0);
							unk_0xEB561D54613EF2E6(uParam0->f_91, 0);
							unk_0xEB561D54613EF2E6(uParam0->f_91, 1);
							unk_0xEB561D54613EF2E6(uParam0->f_91, 2);
							unk_0xEB561D54613EF2E6(uParam0->f_91, 3);
							unk_0xEB561D54613EF2E6(uParam0->f_91, 4);
							unk_0xEB561D54613EF2E6(uParam0->f_91, 5);
							unk_0xEB561D54613EF2E6(uParam0->f_91, 6);
							unk_0xEB561D54613EF2E6(uParam0->f_91, 7);
							unk_0xEB561D54613EF2E6(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!unk_0x746960881FB19A89(uParam0->f_91))
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
	
	if (!unk_0x94E72F17611BCD3C(uParam0->f_2, 31))
	{
		func_272();
		iVar5 = 0;
		while (iVar5 < 8)
		{
			func_269(iVar5, &Var1, &fVar4);
			if (!func_268(Var1, 0f, 0f, 0f))
			{
				if (!unk_0x746960881FB19A89(uParam0->f_49[iVar5]))
				{
					iVar0 = func_246(iVar5);
					if (unk_0x23EA0079E2840B6D(iVar0))
					{
						if (unk_0x149162179DBAEDB0(iVar0))
						{
							uParam0->f_49[iVar5] = unk_0xB0694AD0A3BB8936(iVar0, Var1, fVar4, 0, 0);
							unk_0x185D18DA9BC98757(uParam0->f_49[iVar5], 1);
							unk_0x4595ADB79DB507B7(uParam0->f_49[iVar5], 0f);
							unk_0x891096CB00F14680(uParam0->f_49[iVar5], 0);
							if (iVar5 == 2)
							{
								unk_0x1FE4B6BC95E3B9AD(uParam0->f_49[iVar5], 4, 0, 1);
								unk_0x66258686DD0DE921(uParam0->f_49[iVar5], 4, 0, 1f);
							}
							func_267(uParam0, iVar5);
							func_266(uParam0, iVar5);
							unk_0x0880E86251A44B7F(iVar0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 8)
		{
			if (!unk_0x746960881FB19A89(uParam0->f_49[iVar5]))
			{
				return 0;
			}
			if (!unk_0x94E72F17611BCD3C(uParam0->f_2, iVar5))
			{
				if (func_265(uParam0, iVar5))
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_2), iVar5);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xFC38B241541883D3(uParam0->f_49[iVar5], 0))
			{
				if (!unk_0xBF8CD329C3A6CF33(uParam0->f_49[iVar5]))
				{
					return 0;
				}
			}
			iVar5++;
		}
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_265(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0xFC38B241541883D3(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x2C1B23216A36AE4C(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 0, 1, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 2, 1, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 3, 1, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 5, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 7, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 10, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 14, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 15, 4, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xFC38B241541883D3(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x2C1B23216A36AE4C(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x88B205B70CF73BF1(uParam0->f_49[iParam1], 22, 1);
					unk_0x5C7436C87A3920CE(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0xFC38B241541883D3(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x2C1B23216A36AE4C(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 4, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 14, 5, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x88B205B70CF73BF1(uParam0->f_49[iParam1], 22, 1);
					unk_0x5C7436C87A3920CE(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0xFC38B241541883D3(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x2C1B23216A36AE4C(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 23, 11, 0);
					unk_0x88B205B70CF73BF1(uParam0->f_49[iParam1], 22, 1);
					unk_0x5C7436C87A3920CE(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xFC38B241541883D3(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x2C1B23216A36AE4C(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 7, 1, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 11, 3, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 12, 2, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 13, 2, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 16, 4, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0x88B205B70CF73BF1(uParam0->f_49[iParam1], 22, 1);
					unk_0x5C7436C87A3920CE(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0xFC38B241541883D3(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x2C1B23216A36AE4C(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 3, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 6, 2, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 10, 3, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 15, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0x88B205B70CF73BF1(uParam0->f_49[iParam1], 22, 1);
					unk_0x5C7436C87A3920CE(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0xFC38B241541883D3(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x2C1B23216A36AE4C(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 1, 1, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 8, 0, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x3E9FFBB0E33D344F(uParam0->f_49[iParam1], 23, 0, 0);
					unk_0x88B205B70CF73BF1(uParam0->f_49[iParam1], 22, 1);
					unk_0x5C7436C87A3920CE(uParam0->f_49[iParam1], 0);
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
			unk_0xCC6111FBD13C5A22(uParam0->f_49[iParam1], 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 0, 1);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 1, 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 2, 1);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 3, 1);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 4, 1);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 5, 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 7, 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 10, 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0xCC6111FBD13C5A22(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0xCC6111FBD13C5A22(uParam0->f_49[iParam1], 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 0, 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0xCC6111FBD13C5A22(uParam0->f_49[iParam1], 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0xCC6111FBD13C5A22(uParam0->f_49[iParam1], 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 1, 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 2, 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 4, 1);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 7, 1);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0xCC6111FBD13C5A22(uParam0->f_49[iParam1], 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 0, 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 1, 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 2, 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 3, 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 4, 1);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 6, 2);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 10, 3);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0xCC6111FBD13C5A22(uParam0->f_49[iParam1], 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 1, 1);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 4, 1);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 8, 0);
			unk_0xA907BFA67A97A447(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_267(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x0F8D3599CAFC9EEE(uParam0->f_49[iParam1], 83, 134);
			unk_0x32C2810FAE38E8CD(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0x0F8D3599CAFC9EEE(uParam0->f_49[iParam1], 0, 0);
			unk_0x32C2810FAE38E8CD(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0x0F8D3599CAFC9EEE(uParam0->f_49[iParam1], 49, 0);
			unk_0x32C2810FAE38E8CD(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0x0F8D3599CAFC9EEE(uParam0->f_49[iParam1], 0, 0);
			unk_0x32C2810FAE38E8CD(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0x0F8D3599CAFC9EEE(uParam0->f_49[iParam1], 43, 5);
			unk_0x32C2810FAE38E8CD(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0x0F8D3599CAFC9EEE(uParam0->f_49[iParam1], 3, 3);
			unk_0x32C2810FAE38E8CD(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0x0F8D3599CAFC9EEE(uParam0->f_49[iParam1], 35, 0);
			unk_0x32C2810FAE38E8CD(uParam0->f_49[iParam1], 0, 156);
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
	unk_0x3BC6D217451D6BB7(func_244());
	unk_0xDA293E5084610B09(func_271());
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
		unk_0x3BC6D217451D6BB7(func_246(iVar0));
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
		if (!unk_0x94E72F17611BCD3C(uVar1, iVar0))
		{
			func_193(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_275(var uParam0, int iParam1, struct<3> Param2, float fParam5, var uParam6, bool bParam7)
{
	if (unk_0xFC38B241541883D3(uParam0->f_58[iParam1], 0) && !unk_0x3E0478C40AB5B38D(uParam0->f_74[iParam1]))
	{
		unk_0xD9B13F0A69759C12(uParam0->f_58[iParam1], false);
		unk_0x4220BD8C5CDBF540(uParam0->f_58[iParam1], true, 0);
		unk_0xFA51DC22F6E34F6E(uParam0->f_58[iParam1], Param2, 1, 0, 0, 1);
		unk_0x03D97EDECF2E1859(uParam0->f_58[iParam1], fParam5);
		unk_0x77C765087051EDD6(uParam0->f_58[iParam1]);
		unk_0x407153DCFFCB4657(uParam0->f_58[iParam1]);
		if (bParam7)
		{
			unk_0xBBB86C3DA83A56F3(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			unk_0xBF3459C0ACC7B82F(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			unk_0xBBB86C3DA83A56F3(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			unk_0xBF3459C0ACC7B82F(uParam0->f_58[iParam1], 10f);
		}
		unk_0xE8105B7E3908547D(uParam0->f_74[iParam1], 1);
		unk_0x407020DF5CAB33D3(uParam0->f_58[iParam1], true);
		unk_0x407020DF5CAB33D3(uParam0->f_74[iParam1], true);
		unk_0xEDB9A377CD8B7F03(uParam6, iParam1);
	}
}

void func_276(var uParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10)
{
	if (!unk_0x5329DB72517417AE(uParam0->f_8))
	{
		uParam0->f_8 = unk_0x9DC0C451516E13AF("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = unk_0x8E83718430E22797(Param3, Param6, 2);
	unk_0x7293A816EC05CF5F(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	unk_0x47E1E12B5E2888D4(uParam0->f_9, fParam9);
	unk_0x367643B597A08F4E(uParam0->f_9, iParam10);
	unk_0x45826D2663F7FD9C(uParam0->f_8, 1);
	unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 1, 0);
}

void func_277(var uParam0)
{
	unk_0x0880E86251A44B7F(joaat("frogger"));
	unk_0x6AC537DA214AB66E(8, "FMIntro");
	if (unk_0x746960881FB19A89(uParam0->f_48))
	{
		unk_0xCD3EBB4EAE50293F(&(uParam0->f_48));
	}
}

int func_278(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (unk_0x94E72F17611BCD3C(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_280();
		if (!unk_0x746960881FB19A89(uParam0->f_92[0]))
		{
			if (unk_0x149162179DBAEDB0(joaat("cheetah")))
			{
				uParam0->f_92[0] = unk_0xB0694AD0A3BB8936(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0);
				unk_0xC7C9C824705A3C60(uParam0->f_92[0], 0);
				unk_0x5C7436C87A3920CE(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x746960881FB19A89(uParam0->f_92[1]))
		{
			if (unk_0x149162179DBAEDB0(joaat("entityxf")))
			{
				uParam0->f_92[1] = unk_0xB0694AD0A3BB8936(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0);
				unk_0xC7C9C824705A3C60(uParam0->f_92[1], 0);
				unk_0xDAD4024FD9391D31(uParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				unk_0xDFA36C740458266A(uParam0->f_92[1], 8);
				unk_0x5C7436C87A3920CE(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x746960881FB19A89(uParam0->f_92[2]))
		{
			if (unk_0x149162179DBAEDB0(joaat("monroe")))
			{
				uParam0->f_92[2] = unk_0xB0694AD0A3BB8936(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0);
				unk_0xC7C9C824705A3C60(uParam0->f_92[2], 0);
				unk_0xDAD4024FD9391D31(uParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				unk_0xDFA36C740458266A(uParam0->f_92[2], 2);
				unk_0x5C7436C87A3920CE(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x746960881FB19A89(uParam0->f_92[3]))
		{
			if (unk_0x149162179DBAEDB0(joaat("cheetah")))
			{
				uParam0->f_92[3] = unk_0xB0694AD0A3BB8936(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0);
				unk_0xC7C9C824705A3C60(uParam0->f_92[3], 0);
				unk_0xDAD4024FD9391D31(uParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				unk_0xDFA36C740458266A(uParam0->f_92[3], 15);
				unk_0x5C7436C87A3920CE(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x746960881FB19A89(uParam0->f_92[4]))
		{
			if (unk_0x149162179DBAEDB0(joaat("feltzer2")))
			{
				uParam0->f_92[4] = unk_0xB0694AD0A3BB8936(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0);
				unk_0xC7C9C824705A3C60(uParam0->f_92[4], 0);
				unk_0xDAD4024FD9391D31(uParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				unk_0x0F8D3599CAFC9EEE(uParam0->f_92[4], 0, 0);
				unk_0x32C2810FAE38E8CD(uParam0->f_92[4], 0, 156);
				unk_0xCC6111FBD13C5A22(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0xFC38B241541883D3(uParam0->f_92[4], 0))
		{
			if (!unk_0x94E72F17611BCD3C(uParam0->f_3, 1))
			{
				if (unk_0x2C1B23216A36AE4C(uParam0->f_92[4]) > 0)
				{
					unk_0x88B205B70CF73BF1(uParam0->f_92[4], 22, 1);
					unk_0x5C7436C87A3920CE(uParam0->f_92[4], 0);
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0x149162179DBAEDB0(func_225()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0x746960881FB19A89(uParam0->f_98[iVar1]))
				{
					if (unk_0x746960881FB19A89(uParam0->f_92[iVar1]))
					{
						if (unk_0xFC38B241541883D3(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = unk_0xAD7526C9AA33EE39(uParam0->f_92[iVar1], 4, func_225(), -1, 0, false);
							unk_0x4A1AC49BA4A747F7(uParam0->f_98[iVar1], 1);
							unk_0x6FD45FA39DD18625(uParam0->f_92[iVar1], 1, 1);
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
			unk_0x0880E86251A44B7F(joaat("cheetah"));
			unk_0x0880E86251A44B7F(joaat("monroe"));
			unk_0x0880E86251A44B7F(joaat("entityxf"));
			unk_0x0880E86251A44B7F(joaat("feltzer2"));
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_279()
{
	func_280();
	if (unk_0x149162179DBAEDB0(func_225()))
	{
		if (unk_0x149162179DBAEDB0(joaat("cheetah")))
		{
			if (unk_0x149162179DBAEDB0(joaat("monroe")))
			{
				if (unk_0x149162179DBAEDB0(joaat("entityxf")))
				{
					if (unk_0x149162179DBAEDB0(joaat("feltzer2")))
					{
						if (unk_0x381FCADDEA0C040B(100, "FM_Intro_uber"))
						{
							if (unk_0x381FCADDEA0C040B(101, "FM_Intro_uber"))
							{
								if (unk_0x381FCADDEA0C040B(102, "FM_Intro_uber"))
								{
									if (unk_0x381FCADDEA0C040B(103, "FM_Intro_uber"))
									{
										if (unk_0x381FCADDEA0C040B(104, "FM_Intro_uber"))
										{
											if (unk_0x3DA2EED4204CE591("mp_intro_seq@"))
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
	unk_0x3BC6D217451D6BB7(joaat("cheetah"));
	unk_0x3BC6D217451D6BB7(joaat("monroe"));
	unk_0x3BC6D217451D6BB7(joaat("entityxf"));
	unk_0x3BC6D217451D6BB7(joaat("feltzer2"));
	unk_0x3BC6D217451D6BB7(func_225());
	unk_0x8E6E37300A0A2B22(100, "FM_Intro_uber");
	unk_0x8E6E37300A0A2B22(101, "FM_Intro_uber");
	unk_0x8E6E37300A0A2B22(102, "FM_Intro_uber");
	unk_0x8E6E37300A0A2B22(103, "FM_Intro_uber");
	unk_0x8E6E37300A0A2B22(104, "FM_Intro_uber");
	unk_0xDA293E5084610B09("mp_intro_seq@");
}

int func_281(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (unk_0x94E72F17611BCD3C(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0x3BC6D217451D6BB7(joaat("asterope"));
		unk_0x3BC6D217451D6BB7(joaat("sentinel"));
		unk_0x3BC6D217451D6BB7(func_225());
		if ((unk_0x149162179DBAEDB0(joaat("asterope")) && unk_0x149162179DBAEDB0(joaat("sentinel"))) && unk_0x149162179DBAEDB0(func_225()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0x746960881FB19A89(uParam0->f_58[iVar0]))
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
					uParam0->f_58[iVar0] = unk_0xB0694AD0A3BB8936(iVar1, Var2, fVar5, 0, 0);
					unk_0xDFA36C740458266A(uParam0->f_58[iVar0], iVar0);
					unk_0xC204B4E5503A54EA(uParam0->f_58[iVar0], 1);
					unk_0x4F089107CDB61F75(uParam0->f_58[iVar0], 2);
					unk_0xD9B13F0A69759C12(uParam0->f_58[iVar0], true);
				}
				if (unk_0x746960881FB19A89(uParam0->f_58[iVar0]))
				{
					if (!unk_0x746960881FB19A89(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = unk_0xAD7526C9AA33EE39(uParam0->f_58[iVar0], 4, func_225(), -1, 0, false);
						unk_0xC204B4E5503A54EA(uParam0->f_74[iVar0], 1);
						unk_0x4A1AC49BA4A747F7(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0x746960881FB19A89(uParam0->f_58[iVar0]) || !unk_0x746960881FB19A89(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x0880E86251A44B7F(joaat("asterope"));
		unk_0x0880E86251A44B7F(joaat("sentinel"));
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 4);
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
		if ((uParam0->f_13 + iVar0) + iParam2) <= unk_0x17103F66FBB44C3C()
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
	
	if (unk_0x94E72F17611BCD3C(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	unk_0x3BC6D217451D6BB7(iVar0);
	unk_0x8E6E37300A0A2B22(8, "FMIntro");
	if (unk_0x149162179DBAEDB0(iVar0) && unk_0x381FCADDEA0C040B(8, "FMIntro"))
	{
		if (!unk_0x746960881FB19A89(uParam0->f_48))
		{
			uParam0->f_48 = unk_0xB0694AD0A3BB8936(iVar0, unk_0xE620033F9C28F1E1(8, 0f, "FMIntro"), 0f, 0, 0);
			unk_0x62F337D16CFC3C6E(uParam0->f_48, 8, "FMIntro", 1);
			unk_0xD172502A99767BFE(uParam0->f_48, 5000f);
			unk_0xBDE3D6A0084825C6(uParam0->f_48);
			unk_0x407020DF5CAB33D3(uParam0->f_48, false);
			unk_0x0880E86251A44B7F(iVar0);
		}
	}
	if (!unk_0x746960881FB19A89(uParam0->f_48))
	{
		return 0;
	}
	unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 8);
	return 1;
}

void func_284(var uParam0, int iParam1)
{
	if (func_282(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (unk_0x17103F66FBB44C3C() - func_207(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_285(var uParam0)
{
	uParam0->f_13 = unk_0x17103F66FBB44C3C();
}

Vector3 func_286(struct<3> Param0)
{
	return (-unk_0x0BADBFA3B172435F(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), (unk_0xD0FFB162F40A139C(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), unk_0x0BADBFA3B172435F(Param0.f_0);
}

int func_287()
{
	return Global_1315832;
}

void func_288()
{
	unk_0x0843F97559A8728B(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	unk_0x0843F97559A8728B(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
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
	unk_0x35611EEE7A1FFEDB(1);
	unk_0xDA31FF1629FE9693();
	func_232(1, 1, 1, 0);
	func_291();
	func_186(12, 1, -1);
	func_187(0);
	unk_0xC658188535CE7FAF(1, -1);
	unk_0xB3B57AEE7B7BA0E2(0);
	unk_0xC48BE7195D873776(0);
	func_292(1);
	func_238(1);
	Global_2422166.f_3037 = 1;
	if (bParam0)
	{
		if (!unk_0x3E5B62F75695AF89())
		{
			unk_0xFF8914300FF5C56D(1, iParam1);
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
	while (iVar0 < Global_96013)
	{
		unk_0xC15351F18B67BEDB(iVar0, iParam0);
		func_293(iVar0);
		iVar0++;
	}
}

void func_293(int iParam0)
{
	Global_96013[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_96013[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_96013[iParam0 /*28*/].f_4), "", 64);
	Global_96013[iParam0 /*28*/].f_23 = 0;
	Global_96013[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_96013[iParam0 /*28*/].f_27 = 0;
	Global_96013[iParam0 /*28*/].f_20 = 0;
	Global_96013[iParam0 /*28*/].f_22 = 0;
}

void func_294()
{
	Global_1312571 = 1;
	StringCopy(&(Global_1312571.f_1), unk_0xC2E9075570B5D2B9(), 24);
	Global_1312571.f_7 = unk_0x398F092142D37E17(&(Global_1312571.f_1));
}

int func_295()
{
	if (unk_0x2E9CF5C574019636())
	{
		func_297(0);
		unk_0x5D576186DEADA334();
		return 1;
	}
	if (func_296() == 3)
	{
		func_297(2);
		unk_0x1AC0C92BCDA8477F(250f);
	}
	if (unk_0x93B2C560F9F432C4() >= 250f)
	{
		unk_0x1AC0C92BCDA8477F(250f);
	}
	if (unk_0x2D098CFD0F52AB63() == 0)
	{
		unk_0x1AC0C92BCDA8477F(250f);
	}
	if (unk_0x93B2C560F9F432C4() <= 0f)
	{
		func_297(0);
		return 1;
	}
	return 0;
}

int func_296()
{
	return Global_1312467.f_19;
}

void func_297(int iParam0)
{
	if (Global_1312467.f_19 != iParam0)
	{
		Global_1312467.f_19 = iParam0;
	}
}

void func_298(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_302(iParam0, &iVar1);
	if (!unk_0x6B08EC9A88700FBB("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x301EDC03B634F8DC(iVar1))
			{
				return;
			}
			if (unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == iVar1)
			{
				func_301(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x301EDC03B634F8DC(iVar1))
			{
				return;
			}
			if (func_299(iParam0))
			{
				func_301(iParam0, 0);
			}
		}
		unk_0x74D262F6967FA63E(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_299(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_300(iParam0) };
	if (unk_0x94E72F17611BCD3C(Global_30782[Var0.f_1], Var0.f_0))
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
		unk_0xEDB9A377CD8B7F03(&(Global_30782[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_30782[Var0.f_1]), Var0.f_0);
	}
}

var func_302(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_303(iParam0) };
	*iParam1 = unk_0xD443D4CF892AD418(Var0, Var0.f_3);
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
	return Global_2435859;
}

bool func_306()
{
	return Global_2435126;
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
	Global_1315832 = iParam0;
}

void func_309(int iParam0)
{
	var uVar0;
	
	uVar0 = func_310();
	Global_1315831 = iParam0;
}

var func_310()
{
	return Global_1315831;
}

void func_311(bool bParam0)
{
	int iVar0;
	
	func_313(&Global_17018);
	unk_0xA18036D53D82E096(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0x660891EFA1D7A964();
			func_312(0);
			if (unk_0x746960881FB19A89(Global_1318685))
			{
				if (unk_0xAD2C236C4A4B83C9(Global_1318685, 0))
				{
					if (!unk_0x34E74FF8690AA4B1(Global_1318685))
					{
						unk_0x336AE92FD68DEF98(Global_1318685, 0, 0);
					}
					unk_0x7763EDCBED8A5840(&Global_1318685);
				}
			}
		}
	}
}

void func_312(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2437035 = 0;
	}
	Global_1312467.f_18 = iParam0;
}

void func_313(var uParam0)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0x5329DB72517417AE(uParam0->f_9))
	{
		if (unk_0x8E3093821480140B(uParam0->f_9))
		{
			func_314(0);
		}
		unk_0x0CF4B2266E47C15F(uParam0->f_9, 0);
	}
	if (!Global_35923)
	{
		unk_0xAB692B364BE900EC(1);
		unk_0xC7A0DCE047211B6B(0f);
		unk_0xE370C3D7626B060B(0f);
	}
	Global_2404554.f_486 = 0f;
	unk_0x42DDE752BB6A4CBA(0, 0, 0, 1, 0, 0);
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
		if (unk_0xDBB7D2017F71C1CB())
		{
			return;
		}
	}
	if (func_318() == 0 || unk_0xC8557993A78C1B3E())
	{
		func_317(1);
		unk_0xE8D54444121BA43A(0);
		unk_0xE8D54444121BA43A(0);
	}
}

void func_317(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_318()
{
	return Global_1312467.f_20;
}

void func_319(int iParam0)
{
	if ((func_318() == 1 || unk_0xC8557993A78C1B3E()) || iParam0)
	{
		func_317(0);
		unk_0xE8D54444121BA43A(1);
		unk_0xE8D54444121BA43A(1);
		unk_0xE7FF3D1932286D34();
	}
}

void func_320(bool bParam0)
{
	if (bParam0)
	{
		unk_0x3526390BC2669AA5();
		unk_0x0C7ABBEBED1B10D4(-1);
		unk_0xF3AAD57AB8A32308(1);
		unk_0x4DF87C2E071DFCD5(1);
		unk_0x147A0C994A99D356(1f);
		unk_0x8B491DE5A6DFC139(3);
		unk_0x38A28C408560125E(3);
	}
	else
	{
		unk_0xCF023D488D3EAE4D(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		unk_0x0C7ABBEBED1B10D4(0);
		unk_0xF3AAD57AB8A32308(0);
		unk_0x4DF87C2E071DFCD5(0);
		unk_0x147A0C994A99D356(0f);
		unk_0x8B491DE5A6DFC139(0);
		unk_0x38A28C408560125E(0);
	}
}

void func_321(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_289();
	func_199(1);
	func_187(1);
	func_186(12, 1, -1);
	func_328();
	unk_0xAC852201A4726FF0(0);
	if (bParam0)
	{
		unk_0x083968C3C14AB23C(unk_0xCFC72E446B0B3AD7(), iParam6);
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
	func_322(unk_0xCFC72E446B0B3AD7(), 0, iVar0, 1);
	if (bParam5)
	{
		if (unk_0x96FA982607C41F92(unk_0x9F92518438215DD0()))
		{
			unk_0x65C96FBBC1844180(unk_0x9F92518438215DD0(), 0);
		}
	}
}

void func_322(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	var uVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (unk_0x5BB79C0A5EB6A6A3())
		{
			unk_0x0E294D1F9E68FE58(0);
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		uVar0 = iParam2;
		unk_0xC70D4A06E38B2711(iParam0, bParam1, uVar0);
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
		if (unk_0xCB29E1C3D086FBAE(iParam0) && unk_0x378E80A2B7D7C8DF(iParam0))
		{
			uVar23 = unk_0x4E6043D225B9C75F(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x4B69FB3A5B09A1BA())
				{
					unk_0xEE9DD5051799E43F(1);
				}
				else
				{
					unk_0x407020DF5CAB33D3(uVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x4B69FB3A5B09A1BA() && !bVar18)
					{
						unk_0xEE9DD5051799E43F(0);
					}
					Global_2414035[iParam0 /*254*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_325(uVar23) && !unk_0xEDF5D32C98985A1B(uVar23))
				{
					if (!bVar21)
					{
						unk_0x4220BD8C5CDBF540(uVar23, true, 0);
					}
				}
				if (!unk_0xBB5C52611DD71292(uVar23))
				{
					if (!bVar20)
					{
						unk_0xD9B13F0A69759C12(uVar23, false);
					}
					unk_0x185D18DA9BC98757(uVar23, 1);
				}
				else if (!bVar20)
				{
					unk_0xD9B13F0A69759C12(iVar23, false);
				}
				unk_0x0CFE85F88BE373C8(iVar23, true);
				unk_0xC243E2F8392527C0(iParam0, 0);
				unk_0xBA3586BB63B045BD(iVar23);
				unk_0x29C0F4A5219281BA(iVar23, 1);
				func_324();
				func_323();
				if (unk_0x1F2747B7BCA7311C())
				{
				}
				if (unk_0x1032ED345FD7DD26())
				{
				}
				Global_2414035[iParam0 /*254*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_325(iVar23) && !unk_0xEDF5D32C98985A1B(iVar23))
				{
					if (!bVar21)
					{
						unk_0x4220BD8C5CDBF540(iVar23, !bVar14, 0);
					}
					if (!unk_0xBB5C52611DD71292(iVar23))
					{
						if (!bVar20)
						{
							unk_0xD9B13F0A69759C12(iVar23, bVar15);
						}
						if (!bVar15)
						{
							unk_0x185D18DA9BC98757(iVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xC243E2F8392527C0(iParam0, 0);
				}
				else
				{
					unk_0xC243E2F8392527C0(iParam0, 1);
				}
				unk_0x0CFE85F88BE373C8(iVar23, bVar16);
				if (bVar2)
				{
					if (!unk_0xE11A81C5773CB579(iVar23) && !unk_0x827151D7B70CB853(iVar23, 0))
					{
						unk_0x71628E52718BD195(iVar23);
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
			unk_0xC70D4A06E38B2711(iParam0, bParam1, iVar24);
		}
	}
}

void func_323()
{
	struct<2> Var0;
	
	Global_2422166.f_676 = 0;
	Global_2422166.f_677 = 0;
	Global_2422166.f_678 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404554.f_1381 = { Var0 };
}

void func_324()
{
	Global_2404554.f_543 = 0;
	Global_2404554.f_1422 = 0;
	Global_2404554.f_423 = 0;
	Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_204 = 0;
}

int func_325(int iParam0)
{
	int iVar0;
	
	if (unk_0x827151D7B70CB853(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xE962BD784DD0E442(iParam0, -1794415470);
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
	return Global_1312467.f_18;
}

void func_328()
{
	Global_17098.f_5 = 1;
}

void func_329(int iParam0)
{
	unk_0xE69F90D298F4217D(unk_0x4E6043D225B9C75F(iParam0), 346, 1);
}

void func_330(var uParam0)
{
	if (!unk_0x94E72F17611BCD3C(uParam0->f_3, 12))
	{
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1685657)
			{
				Global_1685657 = 1;
				Global_1685658 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (unk_0x5E3461E729DA646E(Global_1685656))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if ((unk_0xA77D66EDA4D3BE88() == 9 || unk_0xA77D66EDA4D3BE88() == 10) || unk_0xA77D66EDA4D3BE88() == 8)
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
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 33, -3390))
							{
								func_331("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 33, -2940))
								{
									func_335("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_334("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_332("techdir", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 33, -450))
							{
								func_331("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_335("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_334("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_332("assartdir", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_331("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if ((unk_0xA77D66EDA4D3BE88() == 9 || unk_0xA77D66EDA4D3BE88() == 10) || unk_0xA77D66EDA4D3BE88() == 8)
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
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 36, -4740))
							{
								func_331("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 36, -3810))
								{
									func_335("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_334("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_332("leadprog", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 36, -600))
							{
								func_331("leadprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if ((unk_0xA77D66EDA4D3BE88() == 9 || unk_0xA77D66EDA4D3BE88() == 10) || unk_0xA77D66EDA4D3BE88() == 8)
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
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 37, -1350))
							{
								func_331("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_335("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_334("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_332("prog", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 38, -4320))
							{
								func_331("prog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 38, -3240))
								{
									if ((unk_0xA77D66EDA4D3BE88() == 9 || unk_0xA77D66EDA4D3BE88() == 10) || unk_0xA77D66EDA4D3BE88() == 8)
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
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 38, -870))
							{
								func_331("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_335("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_334("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_332("audio", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 39, -1620))
							{
								func_331("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_335("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_334("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_332("scrlead", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 40, -1470))
							{
								func_331("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_335("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_334("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_332("script1", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 41, -1200))
							{
								func_331("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_335("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_334("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_332("script2", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 42, -1320))
							{
								func_331("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_335("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_334("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_334("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_332("visdes", 0.05f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 43, -1320))
							{
								func_331("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_335("uides", 40f, 20f, "right", 0f, 0.3f);
									func_334("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_332("uides", 0f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 45, -1650))
							{
								func_331("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_335("concre", 0f, 20f, "left", 0f, 0.3f);
									func_334("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_333("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_332("concre", 0f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 46, -1950))
							{
								func_331("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_335("devass", 0f, 400f, "right", 0f, 0f);
									func_334("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_332("devass", 0f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_331("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_335("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_334("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_334("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_332("qasup", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 48, -1320))
							{
								func_331("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_335("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_334("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_332("senta", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 49, -5070))
							{
								func_331("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 49, -3750))
								{
									func_335("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_334("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_332("asspro", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 49, -720))
							{
								func_331("asspro", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (unk_0xC42238EA2EBA3C42() && unk_0x7D9E747E28B50929() > 2468)
									{
										func_335("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_334("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_333("animdir", "ROB NELSON", 200f, "|", 1);
										func_332("animdir", 0.16f);
										unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_335("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_334("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_333("animdir", "ROB NELSON", 90f, "|", 1);
									func_332("animdir", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (unk_0xC42238EA2EBA3C42() && unk_0x7D9E747E28B50929() > 6123)
								{
									func_331("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xC42238EA2EBA3C42() && unk_0x7D9E747E28B50929() > 1898)
							{
								func_331("animdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (unk_0xC42238EA2EBA3C42() && unk_0x5F2D9C17ACA8C463())
									{
										func_335("producer", 65f, 55f, "right", 0f, 0f);
										func_334("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_333("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_332("producer", 0f);
										unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xC42238EA2EBA3C42() && unk_0x7D9E747E28B50929() > 2452)
								{
									func_335("producer", 0f, 100f, "left", 0.3f, 0f);
									func_334("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_333("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_332("producer", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (unk_0xC42238EA2EBA3C42() && unk_0x5F2D9C17ACA8C463())
								{
									func_331("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xC42238EA2EBA3C42() && unk_0x5F2D9C17ACA8C463())
							{
								func_331("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (unk_0xC42238EA2EBA3C42() && unk_0x7D9E747E28B50929() > 13265)
									{
										func_335("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_334("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_333("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_332("vpcre", 0.16f);
										unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xC42238EA2EBA3C42() && unk_0x7D9E747E28B50929() > 6921)
								{
									func_335("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_334("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_333("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_332("vpcre", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (unk_0xC42238EA2EBA3C42() && unk_0x7D9E747E28B50929() > 16955)
								{
									func_331("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xC42238EA2EBA3C42() && unk_0x7D9E747E28B50929() > 10513)
							{
								func_331("vpcre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!unk_0x94E72F17611BCD3C(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (unk_0xC42238EA2EBA3C42() && unk_0x7D9E747E28B50929() > 18077)
									{
										Global_1685658 = 0;
										func_335("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_334("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_333("execpro", "SAM HOUSER", 165f, "|", 1);
										func_332("execpro", 0.16f);
										unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xC42238EA2EBA3C42() && unk_0x7D9E747E28B50929() > 12358)
								{
									Global_1685658 = 0;
									func_335("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_334("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_333("execpro", "SAM HOUSER", 190f, "|", 1);
									func_332("execpro", 0.16f);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (unk_0xC42238EA2EBA3C42() && unk_0x7D9E747E28B50929() > 21785)
								{
									func_331("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xC42238EA2EBA3C42() && unk_0x7D9E747E28B50929() > 15333)
							{
								func_331("execpro", 0.16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1685658)
				{
					unk_0x10243718C63A4D3E(Global_1685656, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_331(char* sParam0, float fParam1)
{
	unk_0x48F299599202B77A(Global_1685656, "HIDE");
	unk_0x0F79C8080022554A("STRING");
	unk_0x7FAFF3E791AF486A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
	unk_0xC4F81CF078CCB564(fParam1);
	unk_0x7E86CE5F658823DB();
}

void func_332(char* sParam0, float fParam1)
{
	unk_0x48F299599202B77A(Global_1685656, "SHOW_CREDIT_BLOCK");
	unk_0x0F79C8080022554A("STRING");
	unk_0x7FAFF3E791AF486A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
	unk_0xC4F81CF078CCB564(fParam1);
	unk_0x7E86CE5F658823DB();
}

void func_333(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0x48F299599202B77A(Global_1685656, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0x0F79C8080022554A("STRING");
	unk_0x7FAFF3E791AF486A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
	unk_0x0F79C8080022554A("STRING");
	unk_0x7FAFF3E791AF486A(sParam1);
	unk_0xE6EC84BF3A7A64B6();
	unk_0xC4F81CF078CCB564(fParam2);
	unk_0x0F79C8080022554A("STRING");
	unk_0x7FAFF3E791AF486A(sParam3);
	unk_0xE6EC84BF3A7A64B6();
	unk_0x63E5FA5DEE979BD6(iParam4);
	unk_0x7E86CE5F658823DB();
}

void func_334(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0x48F299599202B77A(Global_1685656, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0x0F79C8080022554A("STRING");
	unk_0x7FAFF3E791AF486A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
	unk_0x0F79C8080022554A("STRING");
	unk_0x7FAFF3E791AF486A(sParam1);
	unk_0xE6EC84BF3A7A64B6();
	unk_0xC4F81CF078CCB564(fParam2);
	unk_0x0F79C8080022554A("STRING");
	unk_0x7FAFF3E791AF486A(sParam3);
	unk_0xE6EC84BF3A7A64B6();
	unk_0x63E5FA5DEE979BD6(iParam4);
	unk_0x7E86CE5F658823DB();
}

void func_335(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0x48F299599202B77A(Global_1685656, "SETUP_CREDIT_BLOCK");
	unk_0x0F79C8080022554A("STRING");
	unk_0x7FAFF3E791AF486A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
	unk_0xC4F81CF078CCB564(fParam1);
	unk_0xC4F81CF078CCB564(fParam2);
	unk_0x0F79C8080022554A("STRING");
	unk_0x7FAFF3E791AF486A(sParam3);
	unk_0xE6EC84BF3A7A64B6();
	unk_0xC4F81CF078CCB564(fParam4);
	unk_0xC4F81CF078CCB564(fParam5);
	unk_0x7E86CE5F658823DB();
}

void func_336(var uParam0)
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (unk_0x746960881FB19A89(uParam0->f_34))
		{
			if (unk_0xFC38B241541883D3(uParam0->f_34, 0))
			{
				unk_0x4BAE121315CD7A86(unk_0x20CBCBD58A2C73B4(uParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_337()
{
	var uVar0;
	
	if (unk_0x62FC9AA71A0BB8DB(Local_561.f_3))
	{
		switch (Local_561.f_2)
		{
			case 2:
				if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_4, 1))
				{
					if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
					{
						if (func_352(Local_561.f_3))
						{
							if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
							{
								if (unk_0xE962BD784DD0E442(unk_0x9F92518438215DD0(), -1794415470) != 1 && unk_0xE962BD784DD0E442(unk_0x9F92518438215DD0(), -1794415470) != 0)
								{
									unk_0x4073360CA020BB84(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_561.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_4, 2))
							{
								if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_561.f_3)))
								{
									unk_0xEDB9A377CD8B7F03(&(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_4), 2);
									func_351(1);
								}
								else
								{
									unk_0x8F9D4AA83F37F6E2(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0);
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
						if (unk_0x94E72F17611BCD3C(uLocal_744, 26))
						{
							if (unk_0xE962BD784DD0E442(unk_0x3CD0885BEAA1EC4B(Local_561.f_4), -1273030092) != 1 && unk_0xE962BD784DD0E442(unk_0x3CD0885BEAA1EC4B(Local_561.f_4), -1273030092) != 0)
							{
								unk_0x2B0CA599BAD90FB6(unk_0x3CD0885BEAA1EC4B(Local_561.f_4), unk_0x1349078BE884A8E7(Local_561.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!unk_0x94E72F17611BCD3C(uLocal_744, 27))
				{
					if (!unk_0x2E9CF5C574019636() && !unk_0x351E8373AE3D741D())
					{
						if (!func_107())
						{
							if (!unk_0xC8557993A78C1B3E())
							{
								unk_0xC6EA7B53F52F1DF9(800);
							}
						}
					}
					else if (unk_0x2E9CF5C574019636())
					{
						unk_0xEDB9A377CD8B7F03(&uLocal_744, 27);
					}
				}
				else if (!unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 4))
				{
					if (func_344(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0))
					{
						unk_0x8F9D4AA83F37F6E2(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0);
						unk_0x6EAAF037567A12E2();
						unk_0x975D05EBF3CF46C0();
						unk_0x5EF916489F3787FC(0);
						unk_0x203B2685C1715644(0, 1065353216);
						unk_0xEDB9A377CD8B7F03(&(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_350(Local_561.f_4))
				{
					if (!unk_0x94E72F17611BCD3C(uLocal_744, 29))
					{
						if (func_352(Local_561.f_3))
						{
							unk_0xCCB857BE6ED3A633(unk_0x3CD0885BEAA1EC4B(Local_561.f_4), unk_0x1349078BE884A8E7(Local_561.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							unk_0xF391B7BD1F131C3F(800);
							unk_0xEDB9A377CD8B7F03(&uLocal_744, 29);
						}
					}
					else if (!unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 5))
					{
						if (unk_0xE962BD784DD0E442(unk_0x3CD0885BEAA1EC4B(Local_561.f_4), -272084098) == 7)
						{
							unk_0xEDB9A377CD8B7F03(&(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						if (unk_0xE962BD784DD0E442(unk_0x9F92518438215DD0(), -828834893) != 1 && unk_0xE962BD784DD0E442(unk_0x9F92518438215DD0(), -828834893) != 0)
						{
							unk_0xF811299AF81DB581(unk_0x9F92518438215DD0(), 0, 0);
						}
					}
					else if (!unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 6))
					{
						unk_0xEDB9A377CD8B7F03(&(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3), 6);
						unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_732), 4);
						unk_0xF76EE56D3E7DAF1B(&(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_4), 2);
						func_322(unk_0xCFC72E446B0B3AD7(), 1, 0, 1);
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
							unk_0xC0CAC7B212F95C56(200, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_350(Local_561.f_4))
				{
					if (func_352(Local_561.f_3))
					{
						if (unk_0xE962BD784DD0E442(unk_0x3CD0885BEAA1EC4B(Local_561.f_4), -258271821) != 1 && unk_0xE962BD784DD0E442(unk_0x3CD0885BEAA1EC4B(Local_561.f_4), -258271821) != 0)
						{
							unk_0xE8105B7E3908547D(unk_0x3CD0885BEAA1EC4B(Local_561.f_4), 1);
							unk_0xAFFE01EF7078CAD9(unk_0x3CD0885BEAA1EC4B(Local_561.f_4), unk_0x1349078BE884A8E7(Local_561.f_3), 12f, 786599);
							func_339(&(Local_561.f_3));
							func_339(&(Local_561.f_4));
						}
					}
				}
				break;
		}
		if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_4, 1))
		{
			unk_0xA1D66B742793EE32(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!unk_0x94E72F17611BCD3C(uLocal_744, 26))
			{
				unk_0xEDB9A377CD8B7F03(&uLocal_744, 26);
			}
		}
		if (!unk_0x94E72F17611BCD3C(uLocal_744, 28))
		{
			if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_4, 2))
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
						unk_0xEDB9A377CD8B7F03(&uLocal_744, 28);
					}
				}
			}
		}
		if (!unk_0x94E72F17611BCD3C(uLocal_744, 30))
		{
			if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 5))
			{
				if (func_159(&uLocal_568, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					unk_0xEDB9A377CD8B7F03(&uLocal_744, 30);
				}
			}
		}
		if (!unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 6))
		{
			func_338();
		}
		if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_4, 2))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
				{
				}
			}
		}
	}
}

void func_338()
{
	Global_2454301.f_258 = 1;
}

void func_339(var uParam0)
{
	var uVar0;
	
	if (unk_0x62FC9AA71A0BB8DB(*uParam0))
	{
		uVar0 = unk_0x6394B7AC14B39864(*uParam0);
		unk_0x13446D908F119EB2(&uVar0);
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
	Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_4 = iVar1;
	Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_3 = (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_341(iVar1, 0);
	}
}

void func_343()
{
	unk_0xC805A7010638FA82(0, 22, 1);
	unk_0xC805A7010638FA82(0, 36, 1);
	unk_0xC805A7010638FA82(0, 32, 1);
	unk_0xC805A7010638FA82(0, 34, 1);
	unk_0xC805A7010638FA82(0, 35, 1);
	unk_0xC805A7010638FA82(0, 33, 1);
	unk_0xC805A7010638FA82(0, 31, 1);
	unk_0xC805A7010638FA82(0, 30, 1);
	unk_0xC805A7010638FA82(0, 44, 1);
	unk_0xC805A7010638FA82(0, 141, 1);
	unk_0xC805A7010638FA82(0, 140, 1);
	unk_0xC805A7010638FA82(0, 263, 1);
	unk_0xC805A7010638FA82(0, 264, 1);
	unk_0xC805A7010638FA82(0, 143, 1);
	unk_0xC805A7010638FA82(0, 24, 1);
	unk_0xC805A7010638FA82(0, 257, 1);
	unk_0xC805A7010638FA82(0, 263, 1);
	unk_0xC805A7010638FA82(0, 264, 1);
	unk_0xC805A7010638FA82(0, 143, 1);
	unk_0xC805A7010638FA82(0, 262, 1);
	unk_0xC805A7010638FA82(0, 261, 1);
	unk_0xC805A7010638FA82(0, 37, 1);
	unk_0xC805A7010638FA82(0, 25, 1);
	unk_0xC805A7010638FA82(0, 26, 1);
}

int func_344(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11)
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	
	Global_17098.f_6 = 1;
	if (unk_0x2D8FCFBC4E01FF7C() && !bParam9)
	{
		if (Global_2422166.f_676)
		{
			func_349(0, bParam9);
		}
		return 0;
	}
	if ((unk_0x1032ED345FD7DD26() && !bParam9) && !unk_0x1F2747B7BCA7311C())
	{
		return 0;
	}
	if (!func_348())
	{
		if (func_347(unk_0xCFC72E446B0B3AD7(), 1))
		{
			if (((bParam9 && func_12(unk_0xCFC72E446B0B3AD7(), 1, 0)) && unk_0x2D8FCFBC4E01FF7C()) && Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_219 == 1)
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
	if (!Global_2422166.f_676 && !bParam11)
	{
		Var0 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0) };
		if ((unk_0xE3DAC530D2CCDAE3((Var0.f_0 - Param0.f_0)) < 0.2f && unk_0xE3DAC530D2CCDAE3((Var0.f_1 - Param0.f_1)) < 0.2f) && unk_0xE3DAC530D2CCDAE3((Var0.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar3 = (fParam3 - unk_0xE691E4EA6B4440C6(unk_0x9F92518438215DD0()));
			if (fVar3 > 180f)
			{
				fVar3 = (fVar3 + -360f);
			}
			if (fVar3 < -180f)
			{
				fVar3 = (fVar3 + 360f);
			}
			if (unk_0xE3DAC530D2CCDAE3(fVar3) < 1f)
			{
				Global_2422166.f_676 = 0;
				Global_2422166.f_677 = 0;
				if (unk_0x1F2747B7BCA7311C())
				{
					unk_0x69DC364780BD1795();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2422166.f_678 || !Param0.f_1 == Global_2422166.f_678.f_1) || !Param0.f_2 == Global_2422166.f_678.f_2) || !fParam3 == Global_2422166.f_681)
	{
		if (Global_2422166.f_676 == 1)
		{
			if (unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Global_2422166.f_682) < func_346())
			{
				return 0;
			}
			unk_0x69DC364780BD1795();
			Global_2422166.f_677 = 1;
		}
		else
		{
			Global_2422166.f_677 = 0;
		}
		Global_2422166.f_678 = { Param0 };
		Global_2422166.f_681 = fParam3;
		Global_2422166.f_676 = 0;
	}
	if (!Global_2422166.f_676 && !unk_0x1F2747B7BCA7311C())
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
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			func_345();
			if (!unk_0xEF129BB3DF809F9E(unk_0x9F92518438215DD0(), &(Global_2404554.f_412)))
			{
				Global_2404554.f_412 = 0;
			}
		}
		if (bParam9)
		{
			if (bParam4)
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					uVar4 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
					unk_0xFA51DC22F6E34F6E(uVar4, Param0, 0, 1, 1, 1);
					unk_0x03D97EDECF2E1859(uVar4, fParam3);
				}
				else
				{
					unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Param0, 0, 0, 0, 1);
					unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), fParam3);
				}
			}
			else
			{
				unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Param0, 0, 0, 0, 1);
				unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), fParam3);
			}
			func_349(bParam6, bParam9);
			return 1;
		}
		else
		{
			unk_0x198BDC6BF12F2D84();
			unk_0x523241BE6872DB3B(unk_0xCFC72E446B0B3AD7(), Param0, fParam3, bParam4, iParam10, 0);
		}
		Global_2422166.f_682 = unk_0x6A8628B6E9F055B3();
		Global_2422166.f_676 = 1;
	}
	if (Global_2422166.f_676)
	{
		Global_17098.f_6 = 1;
		Global_2422166.f_682 = unk_0x6A8628B6E9F055B3();
		if (bParam9)
		{
			if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Global_2422166.f_678) < 2f)
			{
				if (unk_0x1F2747B7BCA7311C())
				{
					unk_0x69DC364780BD1795();
				}
				func_349(bParam6, bParam9);
				return 1;
			}
		}
		if (!unk_0x1F2747B7BCA7311C())
		{
			func_349(bParam6, bParam9);
			return 1;
		}
	}
	return 0;
}

void func_345()
{
	Global_2404554.f_1380 = unk_0x147076C287537800();
}

int func_346()
{
	if (unk_0x2E9CF5C574019636())
	{
		return 10000;
	}
	return 1000;
}

int func_347(int iParam0, bool bParam1)
{
	if (Global_2414035[iParam0 /*254*/].f_219 == 99)
	{
		return 0;
	}
	if (bParam1)
	{
		if (Global_2414035[iParam0 /*254*/].f_219 == 11)
		{
			return 0;
		}
	}
	return 1;
}

bool func_348()
{
	return Global_1315874;
}

void func_349(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x203B2685C1715644(0f, 1065353216);
		unk_0x5EF916489F3787FC(0f);
	}
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0x78977FAFD85647FF(unk_0x9F92518438215DD0());
	}
	if (!bParam1)
	{
		unk_0x198BDC6BF12F2D84();
	}
	if (unk_0x1F2747B7BCA7311C())
	{
		unk_0x69DC364780BD1795();
	}
	func_323();
}

int func_350(var uParam0)
{
	if (unk_0x53C457DC61CBEBCA(uParam0))
	{
		return unk_0x3E0478C40AB5B38D(unk_0x3CD0885BEAA1EC4B(uParam0));
	}
	return 1;
}

void func_351(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 15))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 15);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 15))
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 15);
	}
}

int func_352(var uParam0)
{
	if (unk_0x53C457DC61CBEBCA(uParam0))
	{
		return !func_353(unk_0x1349078BE884A8E7(uParam0));
	}
	return 0;
}

int func_353(var uParam0)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (unk_0x0BA451447C3B1A8D(uParam0))
		{
			return 1;
		}
		else if (!unk_0xFC38B241541883D3(uParam0, 0))
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
	Global_90014.f_153[iParam0] = 1;
	Global_90014.f_152 = 1;
}

void func_356(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_90014.f_9[iParam0] = 1;
	}
	else
	{
		Global_90014.f_9[iParam0] = 0;
	}
}

void func_357(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_90014.f_8 = 1;
	}
	else
	{
		Global_90014.f_8 = 0;
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
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(iParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(iParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(iParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(iParam2, 1);
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
			if (!Global_1573682 && !func_364(unk_0xCFC72E446B0B3AD7(), 2))
			{
				unk_0x20BCECAA3CCE96D0("MinigameTransitionIn", 0, 1);
				func_315(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_364(int iParam0, int iParam1)
{
	return unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_205, iParam1);
}

bool func_365()
{
	return Global_2422166.f_2;
}

void func_366(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (bLocal_750)
		{
			if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 2))
			{
				if (!unk_0x94E72F17611BCD3C(uLocal_744, 31))
				{
					func_30(119, 1, -1, 1);
					func_30(115, 1, -1, 1);
				}
				func_617(1);
				bVar0 = true;
			}
		}
		else if (unk_0x94E72F17611BCD3C(Local_733[unk_0x9725084D4DFE8258() /*5*/].f_3, 1))
		{
			if (!unk_0x94E72F17611BCD3C(uLocal_744, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_197(&Local_87, 0, bParam0);
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (Global_2422166.f_3037)
		{
			func_613(0, 1);
		}
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		func_351(0);
	}
	unk_0xD643E324F7E6A17B(Local_87.f_122, 0);
	unk_0x973CDBEE91574C6A(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	unk_0x973CDBEE91574C6A(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_732), 4);
	func_85(0);
	func_54(0);
	func_612();
	func_611(iLocal_86, 0);
	func_178(&(Global_2422166.f_3285));
	Global_2422166.f_3283 = 0;
	Global_2422166.f_3282 = 0;
	Global_2422166.f_3284 = 0;
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 244, 1);
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 243, 1);
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 242, 1);
	}
	if (bVar0)
	{
		func_369(0, 0, 0, 0);
	}
	else
	{
		unk_0x35611EEE7A1FFEDB(1);
		func_369(0, 0, 3, 1);
	}
	unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_732), 0);
	func_357(0);
	func_356(4, 0);
	func_356(1, 0);
	func_356(0, 0);
	func_356(2, 0);
	func_356(3, 0);
	func_354(iLocal_86, 0);
	func_343();
	func_33();
	if (unk_0x2E6E8D325977B3EC(Global_90014.f_198[iLocal_86]))
	{
		unk_0xD8EEE815F0120FCE(Global_90014.f_198[iLocal_86], 0);
	}
	if (unk_0x2E6E8D325977B3EC(uLocal_747))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_747);
	}
	if (unk_0x4B69FB3A5B09A1BA())
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
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Param0.f_0)) >= 1000)
		{
			unk_0x6F54BDDC77517DAA();
		}
	}
	unk_0xE60DEFFB2A853900();
}

void func_368(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 5);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 5);
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
	int iVar6;
	int iVar7;
	struct<6> Var8;
	struct<6> Var14;
	int iVar20;
	char* sVar21;
	struct<2> Var22;
	bool bVar24;
	
	iVar0 = unk_0xCFC72E446B0B3AD7();
	iVar1 = Global_1582869[iVar0 /*332*/];
	func_610();
	func_606();
	unk_0x710BAA2912E282AE(0);
	Global_973716 = 0;
	unk_0xF3B5E2CB72FADE09(0);
	Global_786481 = 0;
	Global_786481.f_1 = 0;
	Global_1573549 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	func_605(0);
	Global_1573538 = 0;
	Global_1573537 = 0;
	Global_1573558 = 0;
	Global_1573700 = 0;
	Global_1573706 = 0;
	Global_1573282 = 0;
	Global_1574148 = 1;
	Global_1573673 = 0;
	Global_1573550 = -1;
	func_604();
	func_603(0);
	unk_0xF76EE56D3E7DAF1B(&(Global_2359301.f_1), 5);
	func_602();
	func_601();
	func_600();
	func_599();
	func_598();
	if (unk_0x4B69FB3A5B09A1BA())
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
			Global_1600662[iVar0 /*32*/].f_22 = 0;
			Global_1600662[iVar0 /*32*/].f_22.f_1 = 0;
		}
	}
	func_591();
	if (Global_1603097 != 6)
	{
		if (func_12(unk_0xCFC72E446B0B3AD7(), 1, 1))
		{
			if (unk_0x6AE68BD60866A815(unk_0x9F92518438215DD0()))
			{
				unk_0xA1A69EBF56C72E4A(unk_0x9F92518438215DD0(), 1);
			}
		}
	}
	Global_1572908 = 0;
	if (Global_1676946.f_9 == 4)
	{
		if (func_590(unk_0xCFC72E446B0B3AD7()) || func_589(unk_0xCFC72E446B0B3AD7()))
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
	Global_1603097.f_57802 = 0;
	Global_1676906.f_4 = 0;
	unk_0x757570D9A978DDB8(unk_0xCFC72E446B0B3AD7(), 1);
	StringCopy(&(Global_1603097.f_57153), "", 32);
	unk_0x5AE3660DC80129B3();
	unk_0xAB10BEEBB0614A3E(18);
	if (bParam3 && !func_583())
	{
		unk_0x10663E41E1571A19();
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1600511[iVar3] = 0;
		Global_1600478[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_2428922.f_5242), 3);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_2428922.f_5242), 3);
	}
	if (func_365() || (iVar0 != -1 && Global_1582869[iVar0 /*332*/].f_311))
	{
		func_582();
		func_581(1, 1);
		func_594(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1600662[iVar0 /*32*/].f_22 = 0;
			Global_1600662[iVar0 /*32*/].f_22.f_1 = 0;
		}
		func_580(1);
		if (func_579())
		{
			func_578();
		}
		if (!func_15(unk_0xCFC72E446B0B3AD7()))
		{
			func_576(4);
		}
		func_593();
		func_575(0);
		func_574();
		Global_1574141 = 0;
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
			Global_2428922.f_5533 = 0;
			Global_2428922.f_5534 = 0;
			Global_2428922.f_5532 = 0;
			Global_2428922.f_5531 = 0;
		}
	}
	else
	{
		func_568(unk_0xCFC72E446B0B3AD7(), 0);
	}
	func_567((Global_1676946.f_9 != 4 && !func_573()));
	if (func_569())
	{
		Global_2428922.f_5622 = 1;
	}
	else
	{
		Global_2428922.f_5622 = 0;
	}
	if (!func_566())
	{
		Global_1676971.f_1153 = 0;
	}
	if (!func_573() && !func_566())
	{
		func_581(1, Global_1676946.f_9 != 4);
		func_594(1, 1, 0);
		func_565(0);
		func_564();
		Global_1574143 = 0;
		if (iVar0 != -1)
		{
			Global_1600662[iVar0 /*32*/].f_22 = 0;
			Global_1600662[iVar0 /*32*/].f_22.f_1 = 0;
		}
	}
	func_561(1, -1);
	if (func_560())
	{
		func_559();
	}
	if (unk_0x11D7DF356299D4F0())
	{
		unk_0x5436C84E9D8E85FF();
	}
	if (!func_583() && !func_573())
	{
		func_555();
	}
	Global_1603097.f_57798 = 0;
	func_554();
	Global_1573531 = -1;
	Global_1600554 = -1;
	Global_1600548 = -1;
	Global_1600550 = -1;
	Global_1573536 = 0;
	Global_1600549 = 0;
	Global_1573684 = 0;
	Global_1573676 = 0;
	Global_1600555 = 0;
	func_553(0);
	func_552();
	Global_1582869[iVar0 /*332*/].f_311 = 0;
	Global_1600546 = 0f;
	Global_1600547 = 0f;
	Global_1573685 = 0;
	Global_1573686 = -1;
	Global_973958 = 0;
	Global_1573674 = 0;
	Global_1573283 = 0;
	func_551();
	unk_0x24AA6E1D28FB8283("WantedMusicDisabled", 0);
	unk_0x24AA6E1D28FB8283("DisableFlightMusic", 0);
	func_550(1);
	if (func_549())
	{
		func_548();
	}
	if (func_547())
	{
		if (func_545(unk_0xCFC72E446B0B3AD7()))
		{
			if (unk_0x9CCE0A8F5DC8CD54() < 2)
			{
				func_544();
				func_543(1);
			}
			else
			{
				func_542();
			}
			if (Global_1676946.f_9 != -1)
			{
				func_541();
			}
		}
		else if (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] == 0)
		{
			if (Global_1676946.f_9 != -1)
			{
				func_541();
			}
		}
	}
	bVar4 = func_16(iVar0);
	Global_1582869[iVar0 /*332*/].f_175 = 0;
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
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1676946.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_534())
		{
			func_533(0, iVar6);
		}
	}
	unk_0xE4C8539CB477820E(0);
	if (unk_0x4B69FB3A5B09A1BA())
	{
		switch (Global_1676946.f_9)
		{
			case 1:
				if (!bVar4)
				{
					func_531();
					func_530();
				}
				break;
			
			case 6:
				Global_1574141 = 0;
				if (!bVar4)
				{
					func_531();
				}
				func_530();
				Global_1676946 = 0;
				Global_1676946.f_22 = { 0f, 0f, 0f };
				Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_12 = 0;
				StringCopy(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_213), "", 24);
				Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_210 = { 0f, 0f, 0f };
				break;
			
			case 2:
				func_529(0);
				if (!func_528())
				{
					func_527(Global_1676946.f_16);
				}
				iVar5 = Global_1582869[iVar0 /*332*/].f_11;
				if (iVar5 != func_123())
				{
					if (unk_0xCB29E1C3D086FBAE(iVar5))
					{
						Global_2428922.f_5243 = { func_71(iVar5) };
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
				if ((iVar7 && func_528()) && unk_0xFD5830093F5D6BD4() == 1)
				{
					Global_2428922.f_5243 = { func_526() };
				}
				if (Global_1603097.f_19 > 1)
				{
					func_525(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_84.f_28);
				}
				break;
			
			case 3:
				func_529(0);
				iVar2 = 1;
				func_524();
				iVar5 = Global_1582869[iVar0 /*332*/].f_11;
				if (iVar5 != func_123())
				{
					if (unk_0xCB29E1C3D086FBAE(iVar5))
					{
						Global_2428922.f_5243 = { func_71(iVar5) };
					}
				}
				if (Global_1603097.f_19 > 1)
				{
					func_525(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_84.f_28);
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
					Global_2428922.f_5533 = 0;
					Global_2428922.f_5534 = 0;
					Global_2428922.f_5532 = 0;
					Global_2428922.f_5531 = 0;
				}
				if (func_590(unk_0xCFC72E446B0B3AD7()) || func_589(unk_0xCFC72E446B0B3AD7()))
				{
					Global_786435.f_34++;
				}
				if (!unk_0x94E72F17611BCD3C(Global_1603097.f_11, 22))
				{
					if (!unk_0x94E72F17611BCD3C(Global_1603097.f_11, 15))
					{
						func_521(Global_1603097.f_57774);
					}
					else
					{
						func_520(Global_1603097.f_72634, Global_1603097.f_72635);
					}
					if (Global_1676946.f_13 > -1)
					{
						unk_0xC861B765753DC070(Global_1676946.f_13, Global_1676946.f_14, 0);
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
						Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_84.f_28 = func_514();
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
				if (!func_528())
				{
					func_527(Global_1676946.f_16);
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
		Global_1574141 = 0;
	}
	if (iVar2 || func_589(unk_0xCFC72E446B0B3AD7()))
	{
		if ((func_493(unk_0xCFC72E446B0B3AD7()) || func_590(unk_0xCFC72E446B0B3AD7())) || func_589(unk_0xCFC72E446B0B3AD7()))
		{
			if (Global_1685637 > 0)
			{
				Global_2428922.f_1.f_2823.f_13 = Global_1685637;
				Global_2428922.f_1.f_2823 = { Global_1685637.f_1 };
			}
		}
		else
		{
			func_492();
		}
	}
	Global_2428922.f_1.f_840 = 0;
	unk_0xF76EE56D3E7DAF1B(&Global_1573287, 0);
	func_491(0);
	Global_1573541 = 0;
	Global_1573669 = -1;
	Global_1600477 = 0;
	Global_1312438 = 0;
	Global_1676946.f_1 = 0;
	Global_1676946.f_2 = 0;
	if (func_490() == 0)
	{
		if (Global_1676946.f_9 == -1 && bVar4 == 0)
		{
			func_482(0);
		}
		else
		{
			Global_1676946.f_9 = -1;
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
	if (!unk_0x11D7DF356299D4F0())
	{
		unk_0xF25DB378E76E8BB2(1);
	}
	if (func_490() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if ((((!func_476(Global_1582869[iVar0 /*332*/]) && !func_583()) && !bVar4) && !func_348()) && !func_573())
			{
				func_475(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_474();
	Global_1676946.f_1 = 0;
	if (!func_547())
	{
		func_473();
	}
	if (Global_1582869[iVar0 /*332*/] != -1)
	{
		iParam2 = iParam2;
		if (func_472(Global_1582869[iVar0 /*332*/]))
		{
			if (unk_0x6518D9FF7C996D2B())
			{
				iVar20 = func_459();
				func_456(1203, -1);
				func_451(joaat("mpply_mgame_cheat_end"), iVar20);
				if (iVar20 > 0)
				{
					func_451(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		unk_0xF130D7A066CB39BB(unk_0xCFC72E446B0B3AD7());
	}
	func_449();
	if (Global_1676946 == 0)
	{
		if (!bVar4)
		{
			Global_1582869[iVar0 /*332*/].f_11 = -1;
			Global_1582869[iVar0 /*332*/].f_12 = 0;
		}
	}
	if (bVar4)
	{
		func_475(0);
		Global_1582869[iVar0 /*332*/].f_12 = 1;
		Global_1582869[iVar0 /*332*/].f_11 = func_448(unk_0xCFC72E446B0B3AD7());
		unk_0xD5F473BB3DD00B64(0);
		func_445(0, 0, 1);
		if (func_444())
		{
			func_442();
		}
	}
	if ((Global_1582869[iVar0 /*332*/] < 10 && Global_1582869[iVar0 /*332*/] != -1) && !func_348())
	{
		if (!unk_0x9E9AFDBF482248F6(&(Global_1582869[iVar0 /*332*/].f_129)) && Global_1582869[iVar0 /*332*/] != 5)
		{
			func_439(&(Global_1582869[iVar0 /*332*/].f_129));
		}
	}
	Global_1582869[iVar0 /*332*/] = -1;
	Global_1582869[iVar0 /*332*/].f_39.f_2 = -1;
	Global_1582869[iVar0 /*332*/].f_39.f_16 = -1;
	Global_1582869[iVar0 /*332*/].f_39.f_1 = -1;
	Global_1603097 = 0;
	if (!bVar4)
	{
		func_438(0);
	}
	Global_1582869[iVar0 /*332*/].f_39.f_18 = 0;
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0x8516D2494EB4AD1B() /*332*/].f_309), 0);
	unk_0x8ADA4659A64D9BF3(0, 0);
	if (iVar1 != 6)
	{
		unk_0x2C65B46CAD8BDA04();
		Global_2435870 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1582869[iVar0 /*332*/].f_129), sVar21, 24);
		StringCopy(&(Global_1582869[iVar0 /*332*/].f_135), sVar21, 24);
		func_437();
	}
	StringCopy(&(Global_1593494[iVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1582869[iVar0 /*332*/].f_149), sVar21, 64);
	Global_1600662[iVar0 /*32*/].f_19 = { Var22 };
	Global_1573679 = 0;
	Global_1573680 = 0;
	Global_1573295 = -1;
	Global_1676893 = 1;
	bVar24 = false;
	func_436();
	func_435();
	func_434();
	if (func_433())
	{
		func_432();
	}
	if (func_431() && unk_0x11D7DF356299D4F0())
	{
		func_430();
		func_322(unk_0xCFC72E446B0B3AD7(), 0, 57348, 1);
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
		if (!Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_12 && !func_566())
		{
			if (unk_0x11D7DF356299D4F0())
			{
				if (func_444())
				{
					func_419();
				}
				else
				{
					if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
					{
						Global_2428922.f_2841.f_195 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0) };
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
				if (Global_2428922.f_2841.f_4 == 2)
				{
					Global_2428922.f_2841.f_4 = 1;
				}
				if (func_235(unk_0xCFC72E446B0B3AD7(), 0))
				{
					func_413();
				}
				func_412();
				Global_2428922.f_2841 = 0;
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
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x4F0283431254A343())
		{
			if (!unk_0x9BFC762F15A9BED6())
			{
				if (!func_400())
				{
					if (!bVar24)
					{
						if (func_15(unk_0xCFC72E446B0B3AD7()))
						{
							unk_0xCBEB9F27190A464A();
							unk_0x5776A236BD20DE3E();
						}
					}
				}
			}
		}
	}
	if (!func_348())
	{
		StringCopy(&(Global_1603097.f_57168), "", 64);
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
		else if ((((!func_573() && !func_569()) && !func_566()) && Global_1676946.f_9 != 9) && Global_1676946.f_9 != 4)
		{
			func_518(0, 1);
		}
	}
	unk_0x845977C673188B47();
	func_389();
	func_388(1);
	if ((((bParam0 && !func_387()) && !func_573()) && !Global_262145.f_4832) && !func_385())
	{
		unk_0xD0EA79EFA8DF468B();
	}
	unk_0x2250E32CE864C09F(5, 1);
	unk_0x2250E32CE864C09F(3, 1);
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
	if (!Global_1685190 == iParam0)
	{
		Global_1685190 = iParam0;
	}
}

void func_372(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_374(iParam0, iParam1))
	{
		iVar0 = func_373();
		Global_2435039[iVar0] = iParam0;
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
		if (Global_2435039[iVar1] == 0)
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
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	unk_0xEDB9A377CD8B7F03(&(Global_965784.f_8), 22);
}

bool func_376()
{
	return unk_0x94E72F17611BCD3C(Global_965784.f_8, 21);
}

void func_377(var uParam0, int iParam1)
{
	func_383(uParam0, iParam1);
	func_378(iParam1);
}

void func_378(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	uVar0 = func_382(iParam0);
	uVar1 = unk_0xF10205C2D28EABD5(uVar0);
	if (func_379())
	{
		if (unk_0x94E72F17611BCD3C(uVar1, 1))
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
	var uVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	uVar1 = func_384(iParam1);
	uVar2 = unk_0xF10205C2D28EABD5(uVar1);
	if (unk_0x94E72F17611BCD3C(uVar2, 1))
	{
		func_456(1198, iParam1);
		func_451(joaat("mpply_dm_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xF76EE56D3E7DAF1B(&uVar2, 1);
		bVar0 = true;
	}
	if (unk_0x94E72F17611BCD3C(uVar2, 2))
	{
		func_456(1200, iParam1);
		func_451(joaat("mpply_race_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xF76EE56D3E7DAF1B(&uVar2, 2);
		bVar0 = true;
	}
	if (unk_0x94E72F17611BCD3C(uVar2, 3))
	{
		func_456(1110, iParam1);
		func_451(joaat("mpply_mc_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xF76EE56D3E7DAF1B(&uVar2, 3);
		bVar0 = true;
	}
	if (unk_0x94E72F17611BCD3C(uVar2, 4))
	{
		func_456(1202, iParam1);
		func_451(joaat("mpply_mgame_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xF76EE56D3E7DAF1B(&uVar2, 4);
		bVar0 = true;
	}
	if (unk_0x94E72F17611BCD3C(uVar2, 5))
	{
		func_456(1913, iParam1);
		func_451(joaat("mpply_cap_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xF76EE56D3E7DAF1B(&uVar2, 5);
		bVar0 = true;
	}
	if (unk_0x94E72F17611BCD3C(uVar2, 6))
	{
		func_456(1915, iParam1);
		func_451(joaat("mpply_sur_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xF76EE56D3E7DAF1B(&uVar2, 6);
		bVar0 = true;
	}
	if (unk_0x94E72F17611BCD3C(uVar2, 7))
	{
		func_456(1917, iParam1);
		func_451(joaat("mpply_lts_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xF76EE56D3E7DAF1B(&uVar2, 7);
		bVar0 = true;
	}
	if (unk_0x94E72F17611BCD3C(uVar2, 8))
	{
		func_456(1919, iParam1);
		func_451(joaat("mpply_para_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xF76EE56D3E7DAF1B(&uVar2, 8);
		bVar0 = true;
	}
	if (unk_0x94E72F17611BCD3C(uVar2, 9))
	{
		func_456(2693, iParam1);
		func_451(joaat("mpply_heist_cheat_start"), 2);
		func_451(joaat("mpply_activity_started"), 1);
		unk_0xF76EE56D3E7DAF1B(&uVar2, 9);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		unk_0x9CFAE5E3EC6F8B5B(uVar2, iParam1);
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
	if (func_590(unk_0xCFC72E446B0B3AD7()) || func_589(unk_0xCFC72E446B0B3AD7()))
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
	return unk_0x94E72F17611BCD3C(Global_1315806, 4);
}

bool func_387()
{
	return Global_1573682;
}

void func_388(int iParam0)
{
	Global_2428922.f_5530 = iParam0;
}

void func_389()
{
	unk_0xF72219EF3DF47F66(6);
	unk_0xB1E35D138037D248(1f);
	unk_0xDF569D00AB746851(1);
}

void func_390()
{
	Global_2428162.f_26.f_39 = 0;
}

void func_391()
{
	Global_1676946.f_6 = 0;
}

void func_392()
{
	struct<3> Var0;
	struct<2> Var3;
	int iVar5;
	
	if (!func_398(func_399(), Var0))
	{
		Var3.f_0 = 201;
		Var3.f_1 = unk_0xCFC72E446B0B3AD7();
		iVar5 = func_397(1, 1);
		if (!iVar5 == 0)
		{
			func_394();
			func_393(0);
			unk_0x0EA5A5773B9C09AE(1, &Var3, 2, iVar5);
		}
	}
}

void func_393(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2422166.f_3032 = unk_0x6A8628B6E9F055B3();
	}
	Global_2422166.f_2916 = iParam0;
}

void func_394()
{
	func_396();
	func_395();
}

void func_395()
{
	struct<72> Var0;
	
	if (func_53(unk_0xCFC72E446B0B3AD7()))
	{
		Var0.f_6 = 32;
		Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_121 = { Var0 };
	}
}

void func_396()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2422166.f_2916.f_79 };
	Var0.f_95 = { Global_2422166.f_2916.f_95 };
	Global_2422166.f_2916 = { Var0 };
}

var func_397(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7225A5A7A532BC7C(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xCFC72E446B0B3AD7() || iParam0)
			{
				if (bParam1)
				{
					unk_0xEDB9A377CD8B7F03(&uVar0, iVar1);
				}
				else if (!func_235(iVar2, 0))
				{
					unk_0xEDB9A377CD8B7F03(&uVar0, iVar1);
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
	return Global_2413283[unk_0xCFC72E446B0B3AD7() /*10*/];
}

bool func_400()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 18);
}

void func_401(bool bParam0)
{
	struct<57> Var0;
	int iVar57;
	
	Global_2428922.f_1.f_2796 = 0;
	Global_2428922.f_1.f_2797 = 0;
	Global_2428922.f_1.f_2819 = 0;
	Global_2428922.f_1.f_2803 = 0;
	Global_2428922.f_1.f_2804 = 0;
	Global_2428922.f_1.f_2807 = 0;
	Global_2428922.f_1.f_2808 = 0;
	Global_2428922.f_1.f_2806 = -1;
	Global_2428922.f_1.f_2809 = -1;
	Global_2428922.f_1.f_2811 = 0;
	Global_2428922.f_1.f_2812 = 0;
	Global_2428922.f_1.f_2813 = 0;
	Global_2428922.f_1.f_2814 = 0;
	Global_2428922.f_1.f_2815 = 0;
	Global_2428922.f_1.f_2816 = 0;
	Global_2428922.f_1.f_2820 = -1;
	if (bParam0)
	{
		Global_2428922.f_1.f_2817 = -1;
		Global_2428922.f_1.f_2818 = -1;
	}
	Global_2428922.f_1.f_2839 = 0;
	func_402();
	Var0.f_33 = 2;
	Var0.f_36 = 7;
	iVar57 = 0;
	while (iVar57 <= 31)
	{
		Global_2428922.f_1.f_843[iVar57 /*57*/] = { Var0 };
		iVar57++;
	}
	Global_2425478.f_20 = -1;
}

void func_402()
{
	Global_2425478.f_19 = 0;
}

void func_403()
{
	Global_2428162.f_565 = 0;
}

void func_404()
{
	Global_2428162.f_566 = 0;
	func_405();
}

void func_405()
{
	int iVar0;
	
	iVar0 = unk_0xCFC72E446B0B3AD7();
	if (iVar0 >= 0)
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar0 /*332*/].f_84.f_32), 6);
	}
}

void func_406()
{
	Global_2428162 = 0;
	Global_2428162.f_2 = 0;
}

bool func_407()
{
	return Global_2428162.f_565;
}

bool func_408()
{
	return Global_1685628;
}

bool func_409()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 1);
}

bool func_410()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 16);
}

void func_411()
{
	unk_0xF76EE56D3E7DAF1B(&Global_2428162, 21);
}

void func_412()
{
	Global_2428922.f_2841.f_34 = 1;
}

void func_413()
{
	Global_2428922.f_1.f_2822 = 1;
}

void func_414()
{
	Global_2428162.f_698 = 1;
}

void func_415()
{
	Global_2428922.f_1.f_2821 = 1;
}

void func_416()
{
	unk_0xEDB9A377CD8B7F03(&Global_2428162, 21);
}

void func_417(int iParam0)
{
	Global_2428922.f_1.f_836 = iParam0;
	Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_209 = iParam0;
}

void func_418()
{
	struct<24> Var0;
	
	Var0 = 18;
	Var0.f_20 = -1;
	Global_2425502 = { Var0 };
}

void func_419()
{
	Global_2428922.f_2841.f_1 = 1;
}

void func_420()
{
	Global_2428922.f_2841.f_1 = 0;
}

bool func_421()
{
	return Global_2428162.f_590;
}

bool func_422()
{
	return Global_2428162.f_580;
}

bool func_423()
{
	return Global_2428162.f_567;
}

bool func_424()
{
	return Global_2428162.f_576;
}

bool func_425()
{
	return unk_0x94E72F17611BCD3C(Global_2428162.f_2, 15);
}

bool func_426()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 20);
}

bool func_427()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 2);
}

void func_428()
{
	Global_2428922.f_2841.f_34 = 0;
}

bool func_429()
{
	return unk_0x94E72F17611BCD3C(Global_965784.f_8, 8);
}

void func_430()
{
	Global_2428162.f_595 = 0;
}

var func_431()
{
	return Global_2428162.f_595;
}

void func_432()
{
	Global_2428162.f_625 = 0;
}

bool func_433()
{
	return Global_2428162.f_625;
}

void func_434()
{
	Global_2428922.f_1.f_837 = 0;
	Global_2428922.f_1.f_839 = 0;
}

void func_435()
{
	unk_0xF76EE56D3E7DAF1B(&Global_2428162, 4);
}

void func_436()
{
	unk_0xF76EE56D3E7DAF1B(&Global_2428162, 28);
}

void func_437()
{
	int iVar0;
	
	iVar0 = unk_0xCFC72E446B0B3AD7();
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar0 /*332*/].f_13.f_1), 4);
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar0 /*332*/].f_13.f_1), 5);
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar0 /*332*/].f_13.f_1), 7);
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar0 /*332*/].f_13.f_1), 8);
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar0 /*332*/].f_13.f_1), 9);
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar0 /*332*/].f_13.f_1), 10);
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar0 /*332*/].f_13.f_1), 11);
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar0 /*332*/].f_13.f_1), 12);
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar0 /*332*/].f_13.f_1), 13);
}

void func_438(int iParam0)
{
	unk_0xD5F473BB3DD00B64(iParam0);
}

void func_439(var uParam0)
{
	var uVar0;
	
	if ((!func_441() && func_440(120, -1)) && !func_348())
	{
		unk_0xD3130FACC173C305(uParam0, &uVar0, 13);
		if (unk_0x6E4DB7298A183787(&uVar0, 13))
		{
			if (unk_0x9E1C8024B80AA59C(&uVar0))
			{
			}
		}
	}
}

int func_440(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2474108[iParam0 /*6*/][func_25(iParam1)];
	if (unk_0xF02F9C69623F2904(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_441()
{
	int iVar0;
	
	iVar0 = unk_0xCFC72E446B0B3AD7();
	if ((Global_1582869[iVar0 /*332*/].f_39.f_2 == 63 || Global_1582869[iVar0 /*332*/].f_39.f_2 == 62) || Global_1582869[iVar0 /*332*/].f_39.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_442()
{
	unk_0xEDB9A377CD8B7F03(&(Global_965784.f_8), 8);
	func_443();
}

void func_443()
{
	Global_2428162.f_750 = 1;
}

bool func_444()
{
	return Global_2428922.f_2841.f_2;
}

void func_445(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0BA451447C3B1A8D(iParam1))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x746960881FB19A89(iParam1))
		{
			if (unk_0x2FCB242469087013(iParam1))
			{
				if (!unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), unk_0xF44355ABE87F03BB(iParam1)))
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
				func_447();
			}
			else if (!unk_0x94E72F17611BCD3C(Global_2359301.f_66, 1))
			{
				if (unk_0x94E72F17611BCD3C(Global_2359301.f_66, 2))
				{
					iVar1 = 0;
					while (iVar1 < 7)
					{
						unk_0x9B07D76BC9C0E62A(iVar1, Global_2359301.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xEDB9A377CD8B7F03(&(Global_2359301.f_66), 1);
			}
		}
		if (func_235(unk_0xCFC72E446B0B3AD7(), 0))
		{
			unk_0x389EBA62AB2C1E9F(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7E7AB3D6ACC5DF30(iParam0, iParam1);
		}
		unk_0x4E7C4AACE24BA9AA(iParam0, iParam1);
		func_446(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_446(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC715C0FD7A589EA7(iVar0, iParam1, 1);
	}
}

void func_447()
{
	int iVar0;
	
	if (!unk_0x471A3A2B612EA542())
	{
		if (!unk_0x94E72F17611BCD3C(Global_2359301.f_66, 2))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				Global_2359301.f_58[iVar0] = unk_0xB49A1BEB8771FD4C(iVar0);
				iVar0++;
			}
			unk_0xEDB9A377CD8B7F03(&(Global_2359301.f_66), 2);
			unk_0xEDB9A377CD8B7F03(&(Global_2359301.f_66), 0);
		}
	}
}

var func_448(int iParam0)
{
	return Global_1582869[iParam0 /*332*/].f_84.f_2;
}

void func_449()
{
	if (func_450())
	{
		unk_0x35611EEE7A1FFEDB(1);
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
		unk_0xC46BDC34976E9532(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1335485 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1335488 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1335489 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1335490 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1335491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1335492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1335493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1335494 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1335495 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1335496 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1335497 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1335498 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1335499 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1335500 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1335501 = iParam1;
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
		unk_0xC46BDC34976E9532(iVar0, iParam1, 1);
	}
}

int func_454(int iParam0)
{
	if (Global_1335484)
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
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
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

void func_457(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 779:
			Global_1335551[func_25(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1335557[func_25(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1335563[func_25(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1335569[func_25(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1335527[func_25(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1335533[func_25(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1335539[func_25(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1335545[func_25(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1335503[func_25(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1335509[func_25(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1335515[func_25(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1335521[func_25(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1335575[func_25(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1335581[func_25(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1335587[func_25(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335593[func_25(iParam2)] = iParam1;
			break;
		
		case 1294:
			Global_1335599[func_25(iParam2)] = iParam1;
			break;
		
		case 631:
			Global_1335605[func_25(iParam2)] = iParam1;
			break;
		
		case 1269:
			Global_1335611[func_25(iParam2)] = iParam1;
			break;
		
		case 1866:
			Global_2476789[0 /*6*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2476789[1 /*6*/][func_25(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335617[func_25(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335623[func_25(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335629[func_25(iParam2)] = iParam1;
			break;
		
		case 1227:
			Global_1335635[func_25(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_458(int iParam0)
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 779:
			case 780:
			case 781:
			case 782:
			case 769:
			case 770:
			case 771:
			case 772:
			case 759:
			case 760:
			case 761:
			case 762:
			case 749:
			case 750:
			case 751:
			case 752:
			case 1294:
			case 631:
			case 1269:
			case 756:
			case 757:
			case 758:
			case 1227:
			case 1866:
			case 2255:
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
	if (Global_2435752 == 0)
	{
		return 0;
	}
	if (func_471())
	{
		if (unk_0x11D7DF356299D4F0())
		{
			Global_2435132 = 1;
		}
	}
	Global_2435752 = 0;
	if (Global_1318732)
	{
		iVar0 = 1;
	}
	if (Global_2435132)
	{
		iVar0 = 1;
	}
	if (Global_2435131)
	{
		iVar0 = 1;
	}
	if (func_470(Global_96386.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2435062)
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
	if (Global_1318756 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_348())
	{
		iVar0 = 0;
	}
	if (Global_2435193)
	{
		iVar0 = 2;
	}
	if (!func_466())
	{
		if (Global_1603097.f_57800 == 0)
		{
			iVar0 = 0;
		}
	}
	if (func_235(unk_0xCFC72E446B0B3AD7(), 0))
	{
		iVar0 = 0;
	}
	if (func_464())
	{
		iVar0 = 0;
	}
	Global_2435193 = 0;
	Global_2435131 = 0;
	Global_2435132 = 0;
	Global_1318732 = 0;
	Global_2435062 = 0;
	func_462(&(Global_96386.f_1), 32);
	func_461(512);
	func_460(128);
	return iVar0;
}

void func_460(int iParam0)
{
	Global_96443 = (Global_96443 - (Global_96443 && iParam0));
}

void func_461(int iParam0)
{
	Global_96444 = (Global_96444 - (Global_96444 && iParam0));
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
	if (((Global_1573704 || Global_1573675) || func_235(unk_0xCFC72E446B0B3AD7(), 0)) || func_465())
	{
		return 1;
	}
	return 0;
}

bool func_465()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_18, 14);
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
	return Global_2428922.f_1.f_2817;
}

bool func_468(int iParam0)
{
	return (Global_96443 && iParam0) != 0;
}

bool func_469(int iParam0)
{
	return (Global_96444 && iParam0) != 0;
}

bool func_470(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_471()
{
	return unk_0x94E72F17611BCD3C(Global_1312425, 0);
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
	if (unk_0xB4289912C78431FE(unk_0x121F684DF076CFE3(unk_0xCFC72E446B0B3AD7()), "MissionType"))
	{
		unk_0xC035E552C70F99A6(unk_0x121F684DF076CFE3(unk_0xCFC72E446B0B3AD7()), "MissionType");
	}
	if (unk_0xB4289912C78431FE(unk_0x121F684DF076CFE3(unk_0xCFC72E446B0B3AD7()), "MatchId"))
	{
		unk_0xC035E552C70F99A6(unk_0x121F684DF076CFE3(unk_0xCFC72E446B0B3AD7()), "MatchId");
	}
	if (unk_0xB4289912C78431FE(unk_0x121F684DF076CFE3(unk_0xCFC72E446B0B3AD7()), "TeamId"))
	{
		unk_0xC035E552C70F99A6(unk_0x121F684DF076CFE3(unk_0xCFC72E446B0B3AD7()), "TeamId");
	}
}

void func_474()
{
	Global_2428162.f_571 = 0;
	unk_0x18CFEE9F9C664234();
}

void func_475(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_35)
		{
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_35 = 1;
		}
	}
	else if (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_35)
	{
		Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_35 = 0;
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
	Global_2428162.f_711 = 0;
}

bool func_478()
{
	return Global_2428162.f_711;
}

void func_479()
{
	Global_2428162.f_715 = 0;
}

bool func_480()
{
	return Global_2428162.f_715;
}

void func_481()
{
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_84.f_32), 1);
}

int func_482(int iParam0)
{
	int iVar0;
	
	if (func_465())
	{
		return 1;
	}
	if (func_487())
	{
		return 1;
	}
	if (unk_0x9E9AFDBF482248F6(&(Global_1603097.f_57448)))
	{
		return 1;
	}
	if (func_486())
	{
		return 1;
	}
	func_485();
	unk_0xC4001F54218A2EA0();
	iVar0 = unk_0xD93D1BEC8A98F771();
	if (iParam0 == 0)
	{
		Global_1676906++;
		unk_0x2FE459E9AD3580E6(iVar0, "quit", Global_1676906);
		unk_0x2FE459E9AD3580E6(iVar0, "quitd", 1);
		unk_0x2FE459E9AD3580E6(iVar0, "ply", Global_1676906.f_2);
		unk_0x2FE459E9AD3580E6(iVar0, "lp", unk_0xC5F007216781AC50());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1676931.f_1++;
		unk_0x2FE459E9AD3580E6(iVar0, "quit", Global_1676931.f_1);
		unk_0x2FE459E9AD3580E6(iVar0, "quitd", 1);
		unk_0x2FE459E9AD3580E6(iVar0, "ply", Global_1676931.f_4);
		unk_0x2FE459E9AD3580E6(iVar0, "lp", unk_0xC5F007216781AC50());
	}
	if (iParam0 == 0)
	{
		if (unk_0x3AB65361F276CE7A(&(Global_1603097.f_57448), 0f, func_484(iParam0)))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (unk_0x3AB65361F276CE7A(&(Global_965784.f_42), 0f, func_484(iParam0)))
		{
		}
	}
	func_483();
	func_485();
	unk_0x086F8A22548CA3C1();
	return 1;
}

void func_483()
{
	Global_1676906 = 0;
	Global_1676906.f_2 = 0;
	Global_1676906.f_8 = 0;
	Global_1676906.f_3 = 0;
	Global_1676906.f_6 = 0;
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
	if (unk_0xD93D1BEC8A98F771() != 0)
	{
		unk_0xA7FED408D802E61F();
	}
}

int func_486()
{
	if (unk_0xD3F8C362BA358936())
	{
		return 1;
	}
	else if (unk_0xD28CAA3AC403852A())
	{
		return 1;
	}
	else if (unk_0xE11D6528F1916C20())
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
	if (unk_0x7F7C75BD0BC3CD70() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_489()
{
	return Global_2435198;
}

bool func_490()
{
	return Global_2428162.f_607;
}

void func_491(bool bParam0)
{
	if (bParam0)
	{
		Global_1312452 = 1;
	}
	else
	{
		Global_1312452 = 0;
	}
}

void func_492()
{
	Global_2428922.f_1.f_2823.f_13 = 0;
	Global_2428922.f_1.f_2823 = 0;
	Global_2428922.f_1.f_2823.f_1 = 0;
	Global_2428922.f_1.f_2823.f_2 = 0;
	Global_2428922.f_1.f_2823.f_3 = 0;
	Global_2428922.f_1.f_2823.f_4 = 0;
	Global_2428922.f_1.f_2823.f_5 = 0;
	Global_2428922.f_1.f_2823.f_6 = 0;
	Global_2428922.f_1.f_2823.f_7 = 0;
	Global_2428922.f_1.f_2823.f_8 = 0;
	Global_2428922.f_1.f_2823.f_9 = 0;
	Global_2428922.f_1.f_2823.f_10 = 0;
	Global_2428922.f_1.f_2823.f_11 = 0;
	Global_2428922.f_1.f_2823.f_12 = 0;
}

bool func_493(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 1;
}

void func_494()
{
	Global_2428162.f_590 = 1;
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
	Global_1676946.f_9 = iParam0;
	switch (Global_1676946.f_9)
	{
		case 1:
			Global_1676946 = 0;
			Global_1676946.f_22 = { 0f, 0f, 0f };
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_12 = 0;
			break;
		
		case 2:
			Global_1676946 = 1;
			Global_1676946.f_22 = { Param1 };
			Global_1676946.f_16 = { Param4 };
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_12 = 0;
			break;
		
		case 3:
			if (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] == 0 || Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] == 1)
			{
				func_506(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_84.f_28);
			}
			func_505();
			Global_1676946 = 1;
			Global_1676946.f_22 = { Param1 };
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_12 = 0;
			break;
		
		case 4:
			func_504();
			func_505();
			Global_1676946 = 1;
			if (func_589(unk_0xCFC72E446B0B3AD7()) || func_590(unk_0xCFC72E446B0B3AD7()))
			{
				func_503(1);
			}
			if ((func_502() || func_523()) && func_517())
			{
				Global_1676946.f_16 = { func_516() };
				Param4 = { Global_1676946.f_16 };
				Global_1676946.f_22 = { func_501() };
			}
			else if (func_502() || func_523())
			{
				if (func_500())
				{
					Global_1676946.f_22 = { func_499() };
				}
				else
				{
					Global_1676946.f_22 = { Param1 };
				}
			}
			else
			{
				Global_1676946.f_22 = { Param1 };
			}
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_12 = 1;
			break;
		
		case 5:
			func_504();
			func_498();
			func_505();
			if (func_589(unk_0xCFC72E446B0B3AD7()) || func_590(unk_0xCFC72E446B0B3AD7()))
			{
				func_503(1);
			}
			Global_1676946 = 1;
			Global_1676946.f_22 = { Param1 };
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_12 = 1;
			break;
		
		case 8:
			Global_1676946 = 0;
			Global_1676946.f_22 = { Param1 };
			Global_1676946.f_16 = { Param4 };
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_12 = 0;
			break;
		
		case 9:
			func_505();
			Global_1676946 = 1;
			Global_1676946.f_22 = { Param1 };
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_12 = 1;
			break;
		
		case 10:
			Global_1676946 = 0;
			Global_1676946.f_22 = { 0f, 0f, 0f };
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_12 = 0;
			break;
	}
	func_497();
	func_496();
	func_417(Global_1676946.f_9);
	Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_210 = { Global_1676946.f_22 };
	Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_213 = { Param4 };
}

void func_496()
{
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_18), 23);
}

void func_497()
{
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_18), 12);
}

void func_498()
{
	Global_1676946.f_4 = 1;
}

Vector3 func_499()
{
	return Global_2428162.f_26.f_491;
}

int func_500()
{
	if ((Global_2428162.f_26.f_491 != 0f || Global_2428162.f_26.f_491.f_1 != 0f) || Global_2428162.f_26.f_491.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_501()
{
	return Global_2428162.f_26.f_494;
}

var func_502()
{
	return Global_2428162.f_26.f_49;
}

void func_503(int iParam0)
{
	Global_2428922.f_5529 = iParam0;
}

void func_504()
{
	Global_1676946.f_3 = 1;
}

void func_505()
{
	Global_1676946.f_7 = 1;
}

void func_506(var uParam0)
{
	Global_1676946.f_10 = uParam0;
}

void func_507()
{
	Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_5 = 0;
}

void func_508()
{
	Global_1676946.f_10 = -1;
}

void func_509()
{
	Global_1676946.f_4 = 0;
}

void func_510()
{
	Global_1676946.f_3 = 0;
}

void func_511()
{
	Global_2428922.f_2841.f_2 = 1;
}

void func_512()
{
	Global_2428162.f_26.f_47 = 0;
}

void func_513()
{
	Global_2428162.f_26.f_41 = -1;
}

int func_514()
{
	return Global_2428162.f_26.f_41;
}

void func_515(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0x9E9AFDBF482248F6(&uParam0))
	{
		return;
	}
	if (!Global_2398379)
	{
		return;
	}
	if (!unk_0x6B08EC9A88700FBB(&uParam0, &(Global_2398379.f_1)))
	{
		return;
	}
	Global_2398445 = 1;
}

struct<6> func_516()
{
	return Global_2428162.f_26.f_11;
}

bool func_517()
{
	return Global_2428162.f_26.f_51;
}

void func_518(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (unk_0xC01FE2A017C0B083())
				{
					unk_0xA42DDD689BE49289();
				}
			}
			break;
		
		case 1:
			unk_0xC861B765753DC070(6, 0, 0);
			break;
		
		case 2:
			unk_0xC861B765753DC070(12, 0, 0);
			break;
		
		case 3:
			unk_0xC861B765753DC070(21, 0, 0);
			break;
		
		case 4:
			unk_0xC861B765753DC070(0, 0, 0);
			break;
		
		default:
			break;
	}
}

int func_519()
{
	return Global_1676946.f_12;
}

void func_520(var uParam0, var uParam1)
{
	Global_1676946.f_13 = uParam0;
	Global_1676946.f_14 = uParam1;
}

void func_521(var uParam0)
{
	Global_1676946.f_12 = uParam0;
}

void func_522()
{
	Global_2428162.f_26.f_48 = 1;
}

bool func_523()
{
	return Global_2428162.f_26.f_47;
}

void func_524()
{
	if (unk_0x9E9AFDBF482248F6(&(Global_2391050.f_4.f_3)))
	{
		return;
	}
	if (!unk_0x9E9AFDBF482248F6(&(Global_2397679.f_3)))
	{
		if (unk_0x6B08EC9A88700FBB(&(Global_2397679.f_3), &(Global_2391050.f_4.f_3)))
		{
			Global_1311838 = 0;
		}
		else
		{
			Global_1311838 = 1;
		}
	}
	Global_1311839 = 0;
	Global_1311839.f_1 = { Global_2391050.f_4.f_3 };
}

void func_525(var uParam0)
{
	Global_1676946.f_5 = 1;
	Global_1676946.f_11 = uParam0;
}

struct<13> func_526()
{
	struct<13> Var0;
	
	unk_0x9D55C42E0CACC35B(&Var0, 13);
	return Var0;
}

void func_527(struct<6> Param0)
{
	if (unk_0x9E9AFDBF482248F6(&Param0))
	{
		return;
	}
	Global_1311839 = 1;
	Global_1311839.f_1 = { Param0 };
}

bool func_528()
{
	return Global_2428162.f_9;
}

void func_529(int iParam0)
{
	if (unk_0x4B69FB3A5B09A1BA())
	{
		unk_0x17E4D0D51EE19434(iParam0);
		unk_0x40463A5001564D8A(0);
	}
}

void func_530()
{
	Global_973957 = -1;
}

void func_531()
{
	func_532(-1f);
}

void func_532(float fParam0)
{
	if (unk_0x4B69FB3A5B09A1BA())
	{
		unk_0x17E4D0D51EE19434(fParam0);
		unk_0x40463A5001564D8A(0);
	}
}

void func_533(int iParam0, int iParam1)
{
	unk_0x5924720A4EA8CAC6(iParam0);
	unk_0x984E99DFF3BD41C3(iParam0);
	if (unk_0x82CA905A2E9D5F54())
	{
		unk_0x2F64BD819C0BFCAC(iParam1);
	}
}

bool func_534()
{
	return Global_2428162.f_616;
}

void func_535()
{
	if (unk_0x94E72F17611BCD3C(Global_2359301, 24))
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2359301, 24);
	}
}

void func_536()
{
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_18), 14);
}

bool func_537()
{
	return Global_2428162.f_703;
}

int func_538()
{
	return Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_173;
}

void func_539(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573542 == 0)
		{
			Global_1573542 = 1;
		}
	}
	else if (Global_1573542 == 1)
	{
		Global_1573542 = 0;
	}
}

void func_540()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2428922.f_1.f_843[iVar0 /*57*/].f_44 = 0;
		Global_2428922.f_1.f_843[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_541()
{
	int iVar0;
	
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
	if (unk_0x9E9AFDBF482248F6(&(Global_1603097.f_57448)))
	{
		return 1;
	}
	func_485();
	unk_0xC4001F54218A2EA0();
	iVar0 = unk_0xD93D1BEC8A98F771();
	Global_1676906.f_2++;
	if (Global_1676906.f_2 < 1)
	{
		Global_1676906.f_2 = 1;
	}
	unk_0x2FE459E9AD3580E6(iVar0, "quit", Global_1676906);
	unk_0x2FE459E9AD3580E6(iVar0, "ply", Global_1676906.f_2);
	unk_0x2FE459E9AD3580E6(iVar0, "plyd", 1);
	unk_0x2FE459E9AD3580E6(iVar0, "lp", unk_0xC5F007216781AC50());
	if (unk_0x3AB65361F276CE7A(&(Global_1603097.f_57448), -1f, func_484(0)))
	{
	}
	func_483();
	func_485();
	unk_0x086F8A22548CA3C1();
	return 1;
}

void func_542()
{
	Global_2428162.f_714 = 1;
}

void func_543(bool bParam0)
{
	if (bParam0)
	{
		unk_0xC859F5D2812D0909();
	}
	else
	{
		unk_0x70E56249F4E3BCA1();
	}
}

void func_544()
{
	Global_2428162.f_713 = 1;
}

int func_545(int iParam0)
{
	switch (Global_1312449)
	{
		case 0:
			if (!func_546(iParam0))
			{
				if (Global_1582869[iParam0 /*332*/] == 2 || Global_1582869[iParam0 /*332*/] == 8)
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
	return Global_1582869[iParam0 /*332*/].f_173 != 0;
}

bool func_547()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 2);
}

void func_548()
{
	Global_2428162.f_713 = 0;
}

bool func_549()
{
	return Global_2428162.f_713;
}

void func_550(int iParam0)
{
	unk_0x0CFDF5C48961D6EC("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	unk_0x0CFDF5C48961D6EC("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	unk_0x0CFDF5C48961D6EC("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_551()
{
	Global_1676946.f_12 = -1;
	Global_1676946.f_13 = -1;
	Global_1676946.f_14 = -1;
}

void func_552()
{
	Global_1600552 = 0;
}

void func_553(bool bParam0)
{
	if (bParam0)
	{
		Global_1573685 = 1;
	}
	else
	{
		Global_1573685 = 0;
	}
}

void func_554()
{
	Global_1600553 = -1;
	Global_1600556 = 0;
}

void func_555()
{
	Global_2446533.f_271 = 0;
	func_558(3782, 0, -1, 1);
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (func_556())
		{
			unk_0xB27BF64B02C0107E(unk_0x9F92518438215DD0(), 5, 0, 0, 0);
		}
	}
}

bool func_556()
{
	return func_557(unk_0x9F92518438215DD0());
}

int func_557(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x27F7C2FB848CD525(uParam0, 5);
	iVar1 = -1;
	switch (unk_0xB6A50C909A8FABC3(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0xE99AC99883C22786(uParam0, 5, iVar0, unk_0xEB3E23B43A745CA1(uParam0, 5));
			if (unk_0x1B4B3F390E20C4EA(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0xE99AC99883C22786(uParam0, 5, iVar0, unk_0xEB3E23B43A745CA1(uParam0, 5));
			if (unk_0x1B4B3F390E20C4EA(iVar1, joaat("PARACHUTE"), 0))
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
		uVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		uVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		uVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_559()
{
	Global_2428162.f_714 = 0;
}

bool func_560()
{
	return Global_2428162.f_714;
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
		unk_0xDEAFB44F1BAAE861(15);
		Global_17236.f_7207 = 0;
	}
	unk_0xBB6C2F8B689F7802(0f);
	if (Global_17236.f_4886[iVar0])
	{
		unk_0x84FBD0BE7CDBEEA2(9, 0);
		Global_17236.f_4886[iVar0] = 0;
	}
	if (Global_17236.f_4879[iVar0])
	{
		unk_0x4B48A2F5324596EE("CommonMenu");
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

void func_562(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x5E3461E729DA646E(*uParam0))
		{
			unk_0x76D57BAF1F432EA7(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
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
		if (unk_0x4B69FB3A5B09A1BA() && unk_0xD28DD58204E8F9D1())
		{
			iParam2 = unk_0x0546CFC4D5D5EAB4();
		}
	}
	StringCopy(&cVar0, unk_0xC2E9075570B5D2B9(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x398F092142D37E17(&cVar0);
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
	struct<36> Var0;
	int iVar36;
	var uVar37;
	
	Var0 = -1;
	Var0.f_21 = -1082130432;
	Var0.f_22 = 3;
	if (Global_2428162.f_545.f_9 == 0)
	{
		Global_1676971.f_1153 = 0;
	}
	iVar36 = 0;
	while (iVar36 <= 31)
	{
		uVar37 = Global_1676971[iVar36 /*36*/].f_3;
		Global_1676971[iVar36 /*36*/] = { Var0 };
		if (func_566())
		{
			Global_1676971[iVar36 /*36*/].f_3 = uVar37;
		}
		Global_1676971[iVar36 /*36*/].f_1 = func_123();
		Global_1676971[iVar36 /*36*/] = -1;
		Global_1676971[iVar36 /*36*/].f_2 = -1;
		iVar36++;
	}
	if ((!func_566() && !func_573()) && iParam0)
	{
		Global_1676971.f_1155 = 0;
		Global_1676971.f_1156 = 0;
	}
}

bool func_566()
{
	return unk_0x94E72F17611BCD3C(Global_2428162.f_545.f_1, 0);
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
	if (unk_0xB4289912C78431FE(unk_0x121F684DF076CFE3(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x70BD1F58B07BE0C1(unk_0x121F684DF076CFE3(iParam0), "MPBitset");
	}
	unk_0xF76EE56D3E7DAF1B(&iVar0, iParam1);
	unk_0x865ACDDED75C1CC2(unk_0x121F684DF076CFE3(iParam0), "MPBitset", iVar0);
}

bool func_569()
{
	return Global_1676946.f_3;
}

bool func_570()
{
	return Global_2434606.f_7;
}

bool func_571()
{
	return unk_0x94E72F17611BCD3C(Global_2428162.f_26.f_3, 8);
}

void func_572()
{
	Global_2428162.f_26.f_49 = 0;
}

bool func_573()
{
	return unk_0x94E72F17611BCD3C(Global_2428162.f_26.f_3, 0);
}

void func_574()
{
	unk_0xF76EE56D3E7DAF1B(&(Global_965784.f_8), 8);
}

void func_575(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_13.f_1), 0);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_13.f_1), 0);
	}
}

void func_576(int iParam0)
{
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (((Global_2428922.f_3153 != 0 && Global_2428922.f_3153.f_1 != 0) && Global_2428922.f_3153.f_2 != 0) && Global_2428922.f_3153.f_3 != 0)
		{
			unk_0x9AF59D9675B909F8(Global_2428922.f_3153, Global_2428922.f_3153.f_1, Global_2428922.f_3153.f_2, Global_2428922.f_3153.f_3, iParam0);
		}
	}
	func_577();
}

void func_577()
{
	Global_2428922.f_3153 = 0;
	Global_2428922.f_3153.f_1 = 0;
	Global_2428922.f_3153.f_2 = 0;
	Global_2428922.f_3153.f_3 = 0;
}

void func_578()
{
	Global_2428922.f_1.f_2799 = 1;
}

bool func_579()
{
	return unk_0x94E72F17611BCD3C(Global_2428922.f_1.f_2807, 12);
}

void func_580(int iParam0)
{
	if (!func_573() || iParam0)
	{
		Global_1574140 = 0;
		Global_1574139 = 0;
	}
}

void func_581(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;
	
	Global_2428162.f_26 = -1;
	Global_2428162.f_26.f_55 = -1;
	Global_2428162.f_26.f_1 = -1;
	Global_2428162.f_26.f_4 = 0;
	Global_2428162.f_26.f_2 = 0;
	Global_2428162.f_26.f_3 = 0;
	Global_2428162.f_26.f_40 = -1;
	Global_2428162.f_26.f_5 = { Var0 };
	Global_2428162.f_26.f_53 = 0;
	Global_2428162.f_26.f_129 = 0;
	Global_2428162.f_26.f_344 = 0;
	Global_2428162.f_26.f_54 = 0;
	Global_2428162.f_26.f_130 = 0;
	Global_2428162.f_26.f_345 = 0;
	Global_2428162.f_26.f_518 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2428162.f_26.f_476[iVar6] = 0;
		iVar6++;
	}
	Global_2428162.f_26.f_52 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2428162.f_26.f_56[iVar6] = 0;
		iVar6++;
	}
	Global_2428162.f_26.f_128 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2428162.f_26.f_131[iVar6] = 0;
		iVar6++;
	}
	Global_2428162.f_26.f_343 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2428162.f_26.f_346[iVar6] = 0;
		Global_2428162.f_26.f_361[iVar6] = 0;
		Global_2428162.f_26.f_391[iVar6 /*6*/] = { Var0 };
		Global_2428162.f_26.f_376[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2428162.f_26.f_42[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2428162.f_26.f_497 = 0;
			Global_2428162.f_26.f_498 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2428162.f_26.f_505[iVar6] = -1;
				Global_2428162.f_26.f_511[iVar6] = -1;
				iVar6++;
			}
			Global_2428162.f_26.f_47 = 0;
			Global_2428162.f_26.f_11 = { Var0 };
			Global_2428162.f_26.f_51 = 0;
			Global_2428162.f_26.f_491 = { 0f, 0f, 0f };
			Global_2428162.f_26.f_494 = { 0f, 0f, 0f };
			Global_2428162.f_26.f_50 = 0;
			Global_2428162.f_26.f_49 = 0;
		}
	}
}

void func_582()
{
	Global_2434606.f_8 = 0;
	Global_2434606.f_7 = 0;
}

bool func_583()
{
	return Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] == 5;
}

void func_584()
{
	Global_1685703.f_1774 = 0;
}

void func_585()
{
	Global_2428162.f_707 = 0;
}

bool func_586()
{
	return Global_2428162.f_707;
}

void func_587()
{
	Global_14558 = 0;
	func_588();
}

void func_588()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
	}
}

bool func_589(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 7;
}

bool func_590(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 2;
}

void func_591()
{
	Global_2428162.f_574 = 0;
}

void func_592()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_3 = -1;
	iVar10 = unk_0xCFC72E446B0B3AD7();
	if (iVar10 != -1)
	{
		Global_1600662[iVar10 /*32*/].f_22 = { Var0 };
	}
}

void func_593()
{
	Global_1676946.f_7 = 0;
}

void func_594(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2428162.f_545.f_3 = { Var0 };
	Global_2428162.f_545 = 0;
	Global_2428162.f_545.f_1 = 0;
	Global_2428162.f_545.f_11 = 0;
	if (bParam0)
	{
		Global_2428162.f_545.f_2 = 0;
		Global_2428162.f_545.f_12 = 0;
		Global_2428162.f_545.f_13 = 0;
		if (bParam1)
		{
			Global_2428162.f_545.f_9 = 0;
			Global_2428162.f_545.f_10 = 0;
		}
		if (iParam2 && !unk_0x11D7DF356299D4F0())
		{
			Global_1676971.f_1155 = 0;
			Global_1676971.f_1156 = 0;
		}
		if (unk_0xCFC72E446B0B3AD7() != -1)
		{
			Global_1600662[unk_0xCFC72E446B0B3AD7() /*32*/].f_22.f_1 = 0;
		}
	}
}

void func_595()
{
	Global_2428162.f_545.f_11 = 0;
}

bool func_596()
{
	return Global_2428162.f_545.f_11;
}

void func_597()
{
	unk_0xF76EE56D3E7DAF1B(&(Global_1600662[unk_0xCFC72E446B0B3AD7() /*32*/].f_18), 3);
}

void func_598()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1574151[iVar0] = 0;
		iVar0++;
	}
}

void func_599()
{
	int iVar0;
	
	iVar0 = unk_0xCFC72E446B0B3AD7();
	if (iVar0 != -1)
	{
		Global_1600662[iVar0 /*32*/].f_22.f_4 = 0;
	}
}

void func_600()
{
	Global_2435165 = 0;
	Global_2435166 = 0;
	Global_2435167 = 0;
	Global_2435168 = 0;
}

void func_601()
{
	Global_2428162.f_26.f_48 = 0;
}

void func_602()
{
	Global_2428162.f_26.f_50 = 0;
}

void func_603(int iParam0)
{
	if (unk_0x708CE249B4F97BF8())
	{
		unk_0xDE68A1B98AE7C918(iParam0);
	}
}

void func_604()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!unk_0x9E9AFDBF482248F6(&(Global_1573338[iVar0 /*6*/])))
		{
			StringCopy(&(Global_1573338[iVar0 /*6*/]), "", 24);
		}
		iVar0++;
	}
}

void func_605(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8516D2494EB4AD1B();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!unk_0x94E72F17611BCD3C(Global_1582869[iVar0 /*332*/].f_180, 0))
			{
				unk_0xEDB9A377CD8B7F03(&(Global_1582869[iVar0 /*332*/].f_180), 0);
			}
		}
		else if (unk_0x94E72F17611BCD3C(Global_1582869[iVar0 /*332*/].f_180, 0))
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar0 /*332*/].f_180), 0);
		}
	}
}

void func_606()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_609(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1694032.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_608();
	func_607();
	Global_1694032 = 0;
}

void func_607()
{
	Global_1694032.f_4 = 0;
}

void func_608()
{
	Global_1694032.f_3 = 0;
}

void func_609(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1694032.f_5[iParam0 /*53*/] = { Var0 };
}

void func_610()
{
	unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_18), 20);
}

void func_611(int iParam0, bool bParam1)
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

void func_612()
{
	unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_732), 3);
}

void func_613(bool bParam0, int iParam1)
{
	func_203();
	if (bParam0)
	{
		func_292(1);
		unk_0x35611EEE7A1FFEDB(1);
	}
	unk_0xDA31FF1629FE9693();
	func_198();
	unk_0x3DB0D11E9B7FB2DC(0);
	func_232(0, 1, 1, 0);
	func_616();
	func_186(12, 0, -1);
	func_187(1);
	unk_0xC658188535CE7FAF(0, -1);
	unk_0xB3B57AEE7B7BA0E2(1);
	unk_0xC48BE7195D873776(1);
	func_615();
	unk_0xAC852201A4726FF0(1);
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x3E5B62F75695AF89())
		{
			unk_0xFF8914300FF5C56D(0, 0);
		}
	}
	func_238(0);
	if (((func_107() == 0 && func_614() == 0) && iParam1) && !func_233(unk_0xCFC72E446B0B3AD7()))
	{
		func_322(unk_0xCFC72E446B0B3AD7(), 1, 0, 1);
	}
	Global_2422166.f_3037 = 0;
}

bool func_614()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 7);
}

void func_615()
{
	Global_17098.f_5 = 0;
}

void func_616()
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

void func_617(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312448)
	{
		if (!func_650())
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				Global_1573723[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_648(unk_0xCFC72E446B0B3AD7(), bParam0);
	iVar2 = func_646(iVar1, bParam0);
	if (!func_645(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			Global_1573723[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1573723[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 145)
	{
		iVar3 = func_644(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_642(iVar4))
			{
				func_633(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_626(func_628(59, 0), 0);
	func_625(func_628(22, 0), func_628(73, 0));
	if (func_650())
	{
		if (func_440(77, -1))
		{
			func_624(1);
			func_623(1);
		}
	}
	if (func_622() || func_621())
	{
		func_30(77, 1, -1, 1);
		if (unk_0x4B69FB3A5B09A1BA())
		{
			func_618(28, 1, 0);
			func_618(29, 1, 0);
			func_618(30, 1, 0);
			func_618(31, 1, 0);
			func_618(32, 1, 0);
			func_618(33, 1, 0);
			func_618(34, 1, 0);
			func_618(35, 1, 0);
			func_618(36, 1, 0);
			func_618(37, 1, 0);
			func_618(38, 1, 0);
		}
	}
	if (func_628(21, 0))
	{
		unk_0x197A9A5DC0378A78(0);
	}
	Global_973959 = 0;
}

void func_618(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 0, 0))
		{
			if (iParam2 && Global_90014.f_17[iParam0])
			{
				if (func_620(iParam0) == 3 && !func_22(iParam0))
				{
					func_619(iParam0);
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

void func_619(int iParam0)
{
	if (Global_90014.f_17[iParam0])
	{
		func_58(iParam0, 10, 1);
		func_58(iParam0, 19, 1);
	}
}

int func_620(int iParam0)
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

bool func_621()
{
	return Global_1315888;
}

bool func_622()
{
	return Global_1315890;
}

void func_623(bool bParam0)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	func_618(28, bParam0, 0);
	func_618(30, bParam0, 0);
	func_618(31, bParam0, 0);
	func_618(33, bParam0, 0);
	func_618(34, bParam0, 0);
	func_618(38, bParam0, 0);
}

void func_624(bool bParam0)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	func_618(29, bParam0, 0);
	func_618(32, bParam0, 0);
	func_618(36, bParam0, 0);
	func_618(35, bParam0, 0);
	func_618(37, bParam0, 0);
}

void func_625(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_618(0, bParam0, 1);
	func_618(1, bParam0, 1);
	func_618(2, bParam0, 1);
	func_618(3, bParam0, 1);
	func_618(4, bParam0, 1);
	func_618(5, bParam0, 1);
	func_618(6, bParam0, 1);
	func_618(7, bParam0, bVar0);
	func_618(8, bParam0, 1);
	func_618(9, bParam0, 1);
	func_618(10, bParam0, 1);
	func_618(11, bParam0, 1);
	func_618(12, bParam0, bVar0);
	func_618(13, bParam0, 1);
	func_618(21, bParam0, 1);
	func_618(14, bParam0, 1);
	func_618(15, bParam0, 1);
	func_618(16, bParam0, 1);
	func_618(17, bParam0, 1);
	func_618(18, bParam0, 1);
	func_618(19, bParam0, 1);
	func_618(20, bParam0, 1);
	func_618(22, bParam0, 1);
	func_618(23, bParam0, 1);
	func_618(24, bParam0, 1);
	func_618(25, bParam0, 1);
	func_618(26, bParam0, 1);
	func_618(27, bParam0, 1);
	func_356(1, !bParam1);
	if (!bVar0)
	{
		func_619(12);
	}
}

void func_626(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	uVar0 = func_627(0);
	func_618(39, bParam0, 0);
	func_618(40, bParam0, 0);
	func_618(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_618(43, bParam0, 0);
		func_618(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(39))
		{
			func_619(39);
		}
		if (!func_22(40))
		{
			func_619(40);
		}
		if (!func_22(41))
		{
			func_619(41);
		}
		if (!func_22(42))
		{
			func_619(42);
		}
		if (!func_22(43))
		{
			func_619(43);
		}
	}
}

int func_627(bool bParam0)
{
	var uVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0x94E72F17611BCD3C(Global_2446533.f_1615, 26))
		{
			uVar0 = func_24(1183, -1, 0);
			if (!unk_0x94E72F17611BCD3C(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_440(122, -1);
}

bool func_628(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6024 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_630(unk_0xCFC72E446B0B3AD7(), 85))
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
		if (Global_262145.f_4828 == 1)
		{
			return 1;
		}
	}
	if (func_622() || func_621())
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
			if (func_629())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0x94E72F17611BCD3C(Global_1573723[iVar1], iVar0);
}

int func_629()
{
	var uVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (unk_0x94E72F17611BCD3C(Global_2446533.f_1620, 23))
	{
		return 1;
	}
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	uVar0 = Global_1335599[func_25(-1)];
	if (unk_0x94E72F17611BCD3C(uVar0, 7))
	{
		unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_1620), 23);
		return 1;
	}
	return 0;
}

bool func_630(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_650())
	{
		return 0;
	}
	if (func_632())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_631(iParam1);
	iVar1 = uVar0;
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_308, iVar1);
}

int func_631(int iParam0)
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

bool func_632()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_128, 3);
}

void func_633(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_641(-1))
			{
				if (!func_650())
				{
					return;
				}
			}
			if (!func_641(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_640() && !func_639())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_638())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_641(-1))
				{
					if (!func_634())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0xEDB9A377CD8B7F03(&(Global_1573723[iVar1]), iVar0);
	}
}

int func_634()
{
	var uVar0;
	
	if (func_637(unk_0xCFC72E446B0B3AD7()))
	{
		return 1;
	}
	uVar0 = Global_1335599[func_25(-1)];
	if (unk_0x94E72F17611BCD3C(uVar0, 2))
	{
		func_635(1);
		return 1;
	}
	return 0;
}

void func_635(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 25))
		{
			func_636(unk_0xCFC72E446B0B3AD7(), 12);
			unk_0xEDB9A377CD8B7F03(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 25);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 25))
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124), 25);
	}
}

void func_636(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_631(iParam1);
	iVar1 = uVar0;
	unk_0xEDB9A377CD8B7F03(&(Global_1582869[iParam0 /*332*/].f_308), iVar1);
}

bool func_637(int iParam0)
{
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_124, 25);
}

int func_638()
{
	var uVar0;
	
	if (unk_0x94E72F17611BCD3C(Global_2446533.f_1620, 6))
	{
		return 1;
	}
	uVar0 = Global_1335599[func_25(-1)];
	if (unk_0x94E72F17611BCD3C(uVar0, 0))
	{
		if (!unk_0x94E72F17611BCD3C(Global_2446533.f_1620, 6))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_1620), 6);
		}
		return 1;
	}
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	return 0;
}

bool func_639()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_128, 7);
}

int func_640()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	return func_440(121, -1);
}

bool func_641(int iParam0)
{
	return func_440(123, iParam0);
}

int func_642(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_622())
	{
		return 1;
	}
	if (func_621())
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
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			uVar0 = func_24(func_643(iParam0), -1, 0);
			if (unk_0x94E72F17611BCD3C(uVar0, iVar1))
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

int func_643(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1192;
		
		case 1:
			return 1193;
		
		case 2:
			return 1194;
		
		case 3:
			return 1195;
		
		case 4:
			return 1196;
		
		default:
	}
	return 1192;
}

int func_644(int iParam0)
{
	if (func_622())
	{
		return 1;
	}
	if (func_621())
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
			if (!func_641(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
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
		case 135:
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

int func_645(int iParam0)
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	return func_440(119, iParam0);
}

int func_646(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_647(iParam0, 0);
}

int func_647(int iParam0, int iParam1)
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
		if (Global_270816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270816[iVar3] < iParam0)
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

int func_648(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_649(iParam0);
}

int func_649(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xCFC72E446B0B3AD7())
			{
				return Global_1335605[func_25(-1)];
			}
			else if (func_53(iParam0))
			{
				return Global_1582869[iParam0 /*332*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_25(-1)];
	}
	return 0;
}

int func_650()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_622())
	{
		return 1;
	}
	if (func_621())
	{
		return 1;
	}
	return func_440(120, -1);
}

int func_651()
{
	bool bVar0;
	
	func_656(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 1;
		}
	}
	if (func_423())
	{
		return 1;
	}
	if (Global_2437036)
	{
		return 1;
	}
	if (func_655())
	{
		return 1;
	}
	if (func_654(157))
	{
		if (!func_653())
		{
			return 1;
		}
	}
	if (func_654(155))
	{
		return 1;
	}
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 1;
	}
	if (func_652() != 0)
	{
		if (unk_0x7B47A371E2D93C2C(func_652()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_652()
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

bool func_653()
{
	return Global_2428162.f_572;
}

int func_654(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_655()
{
	return Global_2435128;
}

void func_656(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2E567DCD11FE0296(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_657(iVar0);
					break;
				
				case 2:
					unk_0x2E567DCD11FE0296(1, iVar0, &Var4, 3);
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

void func_657(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4E6043D225B9C75F(Var0.f_1);
			if (unk_0x746960881FB19A89(uVar3))
			{
				if (unk_0x827151D7B70CB853(iVar3, 0))
				{
					uVar4 = unk_0x1161215F69587BDA(iVar3, 0);
					if (unk_0x4A4FC7B76BEF1AC9(uVar4, Var0.f_2) && unk_0xD28DD58204E8F9D1())
					{
						if (func_658(uVar4, &bVar5))
						{
							unk_0xB3216D41373DA6C7(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9187463EB4918A4D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_658(int iParam0, var uParam1)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(iParam0))
		{
			if (unk_0x1F298C7D5F6EEDBF(iParam0))
			{
				unk_0x336AE92FD68DEF98(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xAD2C236C4A4B83C9(iParam0, 0))
		{
			if (unk_0x88A3865085DFB7AD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_659()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_660(struct<17> Param0, var uParam17, var uParam18, var uParam19)
{
	var uVar0;
	
	unk_0x097416E6C5CBD31B(2, 0, Param0.f_16);
	func_665(0, -1, 0);
	unk_0xA32DB9C55050112C(&Local_561, 7);
	unk_0x85862F9356411B89(&Local_733, 11);
	Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] = 16;
	if (bLocal_752)
	{
		if (!unk_0x2E9CF5C574019636() && !unk_0x351E8373AE3D741D())
		{
			unk_0xC6EA7B53F52F1DF9(800);
		}
		if (!unk_0x4F0283431254A343())
		{
			if (!unk_0x9BFC762F15A9BED6())
			{
				uVar0 = unk_0xCFC72E446B0B3AD7() + 32;
				unk_0xCC24CEF3DA5DD1A8(1, uVar0);
				func_190(1);
			}
		}
	}
	unk_0xD5DF0B4E41426D41(1);
	unk_0x2D0DCDC2641217B9(1);
	if (!func_664())
	{
		func_366(0);
	}
	unk_0xE5556978B2858C53(0);
	func_611(iLocal_86, 1);
	func_368(1);
	if (!bLocal_752)
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			func_322(unk_0xCFC72E446B0B3AD7(), 1, 0, 1);
		}
	}
	Global_2446533.f_1615 = 0;
	unk_0x0843F97559A8728B(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, 0, 0);
	func_663();
	func_661();
	Local_733[unk_0x9725084D4DFE8258() /*5*/] = 0;
}

void func_661()
{
	unk_0x5924720A4EA8CAC6(1);
	func_662(1, -1);
	unk_0x984E99DFF3BD41C3(1);
	if (func_440(133, -1))
	{
		func_30(133, 0, -1, 1);
	}
	Global_2428162.f_616 = 1;
}

void func_662(int iParam0, int iParam1)
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
			unk_0x90F6A5D06F082C52(0, iParam1);
			break;
		
		default:
			uVar1 = func_382(iParam1);
			iVar0 = unk_0xF10205C2D28EABD5(uVar1);
			if (unk_0x94E72F17611BCD3C(iVar0, iParam0))
			{
				unk_0xF76EE56D3E7DAF1B(&iVar0, iParam0);
				unk_0x90F6A5D06F082C52(iVar0, iParam1);
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

void func_663()
{
	unk_0xF87DA7F5BA8C7D0F(&uLocal_746);
	unk_0xF811299AF81DB581(0, 0, 0);
	unk_0xE06445687CB36C85(0, 17.0693f, -1115.935f, 28.7968f, 0);
	unk_0x3179CCC77CBAB31F(uLocal_746);
}

int func_664()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 0;
		}
		if (unk_0xA3E98C97E459BD8E())
		{
			return 1;
		}
		if (func_423())
		{
			return 0;
		}
		if (func_654(155))
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

int func_665(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x56448188B27B0D1C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_666();
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
				if (!unk_0x4B69FB3A5B09A1BA())
				{
					if (!bParam2)
					{
						func_666();
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
						func_666();
					}
					else
					{
						return 0;
					}
				}
				if (func_654(155))
				{
					if (!bParam2)
					{
						func_666();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB659F73755907B0D())
			{
				if (!bParam2)
				{
					func_666();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x56448188B27B0D1C();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			if (!bParam2)
			{
				func_666();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB659F73755907B0D())
	{
		if (!bParam2)
		{
			func_666();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_666()
{
	unk_0xE60DEFFB2A853900();
}

