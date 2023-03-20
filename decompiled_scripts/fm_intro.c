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
	if (unk_0x1DAD7CE53BEE7710())
	{
		func_670(ScriptParam_0);
	}
	while (true)
	{
		func_669();
		if (func_661())
		{
			func_367(1);
		}
		if (func_364(0))
		{
			Local_733[unk_0x044A481E863E2F6B() /*5*/] = 3;
		}
		if (func_363(unk_0x044A481E863E2F6B()) > -1)
		{
			unk_0x53F4483D5741E8F9(unk_0x1788E93557766241());
		}
		switch (func_362(unk_0x044A481E863E2F6B()))
		{
			case 0:
				if (!unk_0x889D01384B54BCE3(uLocal_744, 10))
				{
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 10);
					}
				}
				unk_0x95AB598E6554985B("FMINT", 0);
				if (func_361() && unk_0xB1ED4163AEBBDE95("FMINT", 0))
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
						Local_733[unk_0x044A481E863E2F6B() /*5*/] = 2;
						if (bLocal_752)
						{
							Local_733[unk_0x044A481E863E2F6B() /*5*/].f_2 = -2;
						}
						else
						{
							Local_733[unk_0x044A481E863E2F6B() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_360() == 4)
				{
					Local_733[unk_0x044A481E863E2F6B() /*5*/] = 4;
				}
				if (func_360() == 6 && Local_733[unk_0x044A481E863E2F6B() /*5*/] < 4)
				{
					Local_733[unk_0x044A481E863E2F6B() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_338();
				func_20();
				if (func_360() == 4)
				{
					Local_733[unk_0x044A481E863E2F6B() /*5*/] = 4;
				}
				if (func_360() == 6 && Local_733[unk_0x044A481E863E2F6B() /*5*/] < 4)
				{
					Local_733[unk_0x044A481E863E2F6B() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_733[unk_0x044A481E863E2F6B() /*5*/] = 5;
				break;
			
			case 5:
				func_18(&(Local_561.f_5));
				if (func_17(&(Local_561.f_5)))
				{
					Local_733[unk_0x044A481E863E2F6B() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_10(iLocal_85);
				Local_733[unk_0x044A481E863E2F6B() /*5*/] = 6;
			
			case 6:
				func_367(0);
				break;
		}
		if (unk_0xE9849174628A9C50())
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
		if (unk_0x889D01384B54BCE3(Local_561.f_1, 1))
		{
			return 1;
		}
	}
	else if (unk_0x889D01384B54BCE3(Local_561.f_1, 2))
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
	if (unk_0xE9849174628A9C50())
	{
		if (!unk_0x889D01384B54BCE3(Local_561.f_1, 3))
		{
			if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_4, 0))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_561.f_1), 3);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_561.f_1, 4))
		{
			if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_4, 2))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_561.f_1), 4);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_561.f_1, 5))
		{
			if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 3))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_561.f_1), 5);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_561.f_1, 6))
		{
			if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 4))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_561.f_1), 6);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_561.f_1, 7))
		{
			if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 5))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_561.f_1), 7);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_561.f_1, 8))
		{
			if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 6))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_561.f_1), 8);
			}
		}
		switch (Local_561.f_2)
		{
			case 0:
				if (unk_0x889D01384B54BCE3(Local_561.f_1, 3))
				{
					if (func_4(&(Local_561.f_3), &(Local_561.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_568))
					{
						unk_0x6EBB9B0E214CCF0F(unk_0x8CB435AA1E25DA51(Local_561.f_3), 1, 0);
						Local_561.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0x889D01384B54BCE3(Local_561.f_1, 4))
				{
					Local_561.f_2 = 1;
				}
				break;
			
			case 1:
				if (unk_0x889D01384B54BCE3(Local_561.f_1, 5))
				{
					Local_561.f_2 = 3;
				}
				break;
			
			case 3:
				if (unk_0x889D01384B54BCE3(Local_561.f_1, 6))
				{
					Local_561.f_2 = 4;
				}
				break;
			
			case 4:
				if (unk_0x889D01384B54BCE3(Local_561.f_1, 7))
				{
					Local_561.f_2 = 5;
				}
				break;
			
			case 5:
				if (unk_0x889D01384B54BCE3(Local_561.f_1, 8))
				{
					Local_561.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam5, var uParam6)
{
	if (func_7(Global_2446992.f_735) && func_7(Global_2446992.f_736))
	{
		if (!unk_0x86CB59A6776A7C27(*uParam0))
		{
			if (func_6(uParam0, Global_2446992.f_735, Param2, fParam5, 1, 1, 1, 0, 1, 1))
			{
				unk_0x1D2E32E53AFA201A(unk_0x8CB435AA1E25DA51(*uParam0), 1);
			}
		}
		if (!unk_0x86CB59A6776A7C27(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2446992.f_736, -1, 1, 1, 1))
			{
				unk_0x2C4E82CF88213975(unk_0x7A16A8A755F44481(*uParam1), 1);
				unk_0xEA054561294AEC10(Global_2446992.f_735);
				unk_0xEA054561294AEC10(Global_2446992.f_736);
				unk_0x940C6B8BF42B190B(unk_0x8CB435AA1E25DA51(*uParam0), 0);
				unk_0xCBCAAB1D0AE4D49A(unk_0x7A16A8A755F44481(*uParam1), 1);
				func_359(uParam6, 8, unk_0x7A16A8A755F44481(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!unk_0x86CB59A6776A7C27(*uParam0) || !unk_0x86CB59A6776A7C27(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x2013F7257D076F89(1))
	{
		return 0;
	}
	if (!unk_0x86CB59A6776A7C27(uParam1))
	{
		return 0;
	}
	if (!unk_0xECFECDAD51A6184F(unk_0x8CB435AA1E25DA51(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x6F85672CC2397A57(unk_0x793482A351850A4F(unk_0x8CB435AA1E25DA51(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		unk_0x940C6B8BF42B190B(unk_0x7A16A8A755F44481(*uParam0), iParam7);
		if (unk_0xF5F2A2EAFEFB36D2(unk_0x7A16A8A755F44481(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x59262222326E6883(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x6B2CA196CD4C58D1(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x597CB55BA0825820(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x9BB6F54E415071A1(iParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = unk_0x16645C5D9329E9F2(uVar0);
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		unk_0x940C6B8BF42B190B(uVar0, iParam10);
		if (unk_0xF5F2A2EAFEFB36D2(iVar0))
		{
			if (bParam8)
			{
				unk_0x59262222326E6883(*uParam0, 1);
			}
			else
			{
				unk_0x59262222326E6883(*uParam0, 0);
			}
		}
		unk_0x4852ECC2C24A1A6C(iVar0, iParam9);
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
	unk_0x939DA7EBCC6588FF(iParam0);
	return unk_0x5494F37F35C1D7D7(iParam0);
}

void func_8()
{
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar0)))
		{
			if (bLocal_750)
			{
				if (!unk_0x889D01384B54BCE3(Local_561.f_1, 2))
				{
					if (unk_0x889D01384B54BCE3(Local_733[iVar0 /*5*/].f_3, 2))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_561.f_1), 2);
					}
				}
			}
			else if (!unk_0x889D01384B54BCE3(Local_561.f_1, 1))
			{
				if (unk_0x889D01384B54BCE3(Local_733[iVar0 /*5*/].f_3, 1))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_561.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_10(int iParam0)
{
	if (!func_13(unk_0x1788E93557766241(), 1))
	{
		return;
	}
	if (!func_11(unk_0x1788E93557766241()) == iParam0)
	{
		return;
	}
}

int func_11(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2414327[iParam0 /*255*/].f_1;
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x38FA37FE3518BA38(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2AF80829930084FD(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422491.f_3[iVar0])
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
	if (Global_1583725[iParam0 /*334*/] == -1)
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
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_13.f_1, 0);
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= 1000)
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
		if (unk_0xE9849174628A9C50())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1DAD7CE53BEE7710() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x519586565311459B();
			}
			else
			{
				*uParam0 = unk_0x4EAB1171B13C220B();
			}
		}
		else
		{
			*uParam0 = unk_0x09560C7DE2A384BD();
		}
		uParam0->f_1 = 1;
	}
}

void func_20()
{
	switch (func_363(unk_0x044A481E863E2F6B()))
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
				unk_0xD0E2BFCE93AE3ABD(&(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3), 2);
				Local_733[unk_0x044A481E863E2F6B() /*5*/].f_2 = 99;
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
		return unk_0x889D01384B54BCE3(Global_90094.f_1272[iParam0], iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_28() == 0)
		{
			return unk_0x889D01384B54BCE3(func_24(func_27(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_668[iParam0], iParam1);
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
	uVar0 = Global_2455246[iParam0 /*5*/][func_25(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
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
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
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
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		default:
			break;
	}
	return 3025;
}

int func_28()
{
	return Global_24446;
}

void func_29()
{
	int iVar0;
	
	if (func_182())
	{
		if (func_12(unk_0x1788E93557766241(), 1, 1))
		{
			func_181(0);
		}
	}
	if (!func_180(&uLocal_386))
	{
		func_19(&uLocal_386, 0, 0);
	}
	if (!unk_0x889D01384B54BCE3(uLocal_744, 21))
	{
		unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 21);
	}
	if (!unk_0x889D01384B54BCE3(uLocal_744, 3))
	{
		if (!func_180(&uLocal_384))
		{
			func_19(&uLocal_384, 0, 0);
		}
		else if (unk_0x889D01384B54BCE3(uLocal_744, 21))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
				{
					if (func_179(&uLocal_384, 3000, 0))
					{
						unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 3);
					}
				}
			}
		}
		if (func_179(&uLocal_384, 40000, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 3);
		}
	}
	else if (!unk_0x889D01384B54BCE3(uLocal_744, 16))
	{
		if (!unk_0x11A809BBE3889742())
		{
			if (!unk_0x2B0FFD431FD5A9FA())
			{
				unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 16);
				func_178(&uLocal_384);
			}
		}
	}
	if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_4, 2))
	{
		if (!func_180(&uLocal_390))
		{
			func_19(&uLocal_390, 0, 0);
		}
		else if (!unk_0x889D01384B54BCE3(uLocal_745, 1))
		{
			if (func_179(&uLocal_390, 10000, 0))
			{
				unk_0xD0E2BFCE93AE3ABD(&uLocal_745, 1);
				func_178(&uLocal_390);
			}
		}
		else if (unk_0x889D01384B54BCE3(uLocal_744, 19))
		{
			if (!unk_0x889D01384B54BCE3(uLocal_744, 18))
			{
				if (!func_176() || func_179(&uLocal_384, 5000, 0))
				{
					func_175(0);
					unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 18);
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 244, 0);
						unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 243, 0);
						unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 242, 0);
					}
				}
			}
		}
	}
	if (unk_0x889D01384B54BCE3(uLocal_744, 18))
	{
		if (!unk_0x889D01384B54BCE3(uLocal_744, 2))
		{
			if (unk_0x83B393DE31BAC8F0())
			{
				iVar0 = 0;
				unk_0xD0E2BFCE93AE3ABD(&iVar0, 3);
				unk_0xD0E2BFCE93AE3ABD(&iVar0, 4);
				unk_0xD0E2BFCE93AE3ABD(&iVar0, 5);
				if (func_86(&uLocal_396, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_85(1);
					unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 2);
					if (!unk_0x889D01384B54BCE3(uLocal_744, 20))
					{
						func_76(19, 3, 1);
						unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 20);
					}
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						unk_0xCAD0280A6E9FC35C(unk_0xA16EC202D9D35357(), 1, 1);
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
					if (!unk_0x889D01384B54BCE3(uLocal_744, 12))
					{
						if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
						{
							unk_0xCAD0280A6E9FC35C(unk_0xA16EC202D9D35357(), 0, 1);
							unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 244, 1);
							unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 243, 1);
							unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 242, 1);
						}
						unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 12);
						func_19(&uLocal_388, 0, 0);
						func_19(&uLocal_392, 0, 0);
					}
				}
			}
		}
		if (unk_0x889D01384B54BCE3(uLocal_744, 12))
		{
			if (!unk_0x889D01384B54BCE3(uLocal_744, 17))
			{
				if (!unk_0x2B0FFD431FD5A9FA())
				{
					func_68();
					unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 17);
					func_178(&uLocal_384);
				}
			}
			else if (!func_176())
			{
				if (!unk_0x889D01384B54BCE3(uLocal_744, 23))
				{
					if (func_179(&uLocal_392, 4500, 0))
					{
						unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 23);
						unk_0xD0E2BFCE93AE3ABD(&(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3), 3);
					}
				}
				if (func_179(&uLocal_388, 15000, 0))
				{
					if (!unk_0x889D01384B54BCE3(uLocal_744, 22))
					{
						unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 22);
					}
				}
				if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0)
				{
					if (unk_0x889D01384B54BCE3(uLocal_744, 14))
					{
						unk_0x29DB79DD4D939B38(&uLocal_744, 14);
					}
					if (!func_22(iLocal_86))
					{
						if (unk_0x889D01384B54BCE3(uLocal_744, 13))
						{
							unk_0x29DB79DD4D939B38(&uLocal_744, 13);
						}
						if (unk_0x889D01384B54BCE3(uLocal_744, 25) || (!unk_0x889D01384B54BCE3(uLocal_744, 25) && !unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0)))
						{
							if (!unk_0x889D01384B54BCE3(uLocal_744, 0))
							{
								if (unk_0x889D01384B54BCE3(uLocal_744, 15))
								{
									unk_0x29DB79DD4D939B38(&uLocal_744, 15);
								}
								if (unk_0x5660C8AFDD9C1721(Global_90094.f_198[iLocal_86]))
								{
									func_62("GET_AMMU", 0);
									unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 0);
									unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 25);
									if (unk_0x5660C8AFDD9C1721(Global_90094.f_198[iLocal_86]))
									{
										if (!unk_0x889D01384B54BCE3(Global_2446992.f_734, 2))
										{
											unk_0xF1D09F0F8B016765(Global_90094.f_198[iLocal_86], 1);
										}
										func_355(iLocal_86, 1);
									}
								}
							}
							else if (unk_0x889D01384B54BCE3(Global_2446992.f_734, 2))
							{
								if (unk_0x5660C8AFDD9C1721(Global_90094.f_198[iLocal_86]))
								{
									if (!unk_0x889D01384B54BCE3(uLocal_744, 15))
									{
										unk_0xF1D09F0F8B016765(Global_90094.f_198[iLocal_86], 0);
										unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 15);
									}
								}
							}
							else if (unk_0x5660C8AFDD9C1721(Global_90094.f_198[iLocal_86]))
							{
								if (unk_0x889D01384B54BCE3(uLocal_744, 15))
								{
									unk_0xF1D09F0F8B016765(Global_90094.f_198[iLocal_86], 1);
									unk_0x29DB79DD4D939B38(&uLocal_744, 15);
								}
							}
						}
					}
					else
					{
						if (unk_0x889D01384B54BCE3(uLocal_744, 0))
						{
							unk_0x29DB79DD4D939B38(&uLocal_744, 0);
						}
						if (!unk_0x889D01384B54BCE3(uLocal_744, 13))
						{
							func_62("GET_GUN", 0);
							func_61(1);
							unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 13);
						}
					}
				}
				else if (!unk_0x889D01384B54BCE3(uLocal_744, 14))
				{
					unk_0xFD1E0AEC770DAF2E(1);
					if (unk_0x889D01384B54BCE3(uLocal_744, 0))
					{
						unk_0x29DB79DD4D939B38(&uLocal_744, 0);
					}
					if (unk_0x889D01384B54BCE3(uLocal_744, 13))
					{
						unk_0x29DB79DD4D939B38(&uLocal_744, 13);
					}
					if (unk_0x5660C8AFDD9C1721(Global_90094.f_198[iLocal_86]))
					{
						unk_0xF1D09F0F8B016765(Global_90094.f_198[iLocal_86], 0);
						unk_0x864CE7B9AD07DDDE(Global_90094.f_198[iLocal_86], 0);
						func_355(iLocal_86, 0);
					}
					func_62("LOSE_COP", 0);
					unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 14);
				}
			}
		}
	}
	else if (func_179(&uLocal_386, 300000, 0))
	{
		unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 18);
	}
	if (!unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 0))
	{
		if (((unk_0xFA89F1C1D4B99EBD(unk_0xA16EC202D9D35357(), joaat("weapon_pistol"), 0) || unk_0xFA89F1C1D4B99EBD(unk_0xA16EC202D9D35357(), joaat("weapon_combatpistol"), 0)) || unk_0xFA89F1C1D4B99EBD(unk_0xA16EC202D9D35357(), joaat("weapon_appistol"), 0)) || unk_0xFA89F1C1D4B99EBD(unk_0xA16EC202D9D35357(), joaat("weapon_microsmg"), 0))
		{
			if (func_59())
			{
				func_54(1);
				unk_0xD0E2BFCE93AE3ABD(&(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3), 0);
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
	else if (!unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 1))
	{
		if (!func_40())
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3), 1);
			func_33();
			func_32("FM_IHELP_AMMU", -1);
			if (!unk_0x889D01384B54BCE3(uLocal_744, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
				unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 31);
			}
			func_178(&uLocal_384);
			if (bLocal_750)
			{
				if (bLocal_751)
				{
					Local_733[unk_0x044A481E863E2F6B() /*5*/].f_2 = 3;
				}
				else
				{
					Local_733[unk_0x044A481E863E2F6B() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_733[unk_0x044A481E863E2F6B() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_31())
	{
		iVar0 = Global_2471573[iParam0 /*5*/][func_25(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xA65D74B65C28C5D7(iVar0, iParam1, iParam3);
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
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

void func_33()
{
	if (!func_39())
	{
		return;
	}
	if (!unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635()) == Global_1312577.f_7)
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
	
	bVar0 = unk_0x1DAD7CE53BEE7710();
	Global_1312577 = 12;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x519586565311459B();
		Global_1312577.f_9 = unk_0x519586565311459B();
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
		unk_0x0945E066A4F6A0E3(&(Global_1312577.f_10));
		func_37();
		unk_0x88A8396804C29D3A();
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
			unk_0x53B64327E3305DCB(Global_1312577.f_34);
			return;
		
		case 2:
			unk_0x53B64327E3305DCB(Global_1312577.f_34);
			unk_0x53B64327E3305DCB(Global_1312577.f_35);
			return;
		
		case 3:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0x61329A2F1E63248B(Global_1312577.f_38);
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0x61329A2F1E63248B(Global_1312577.f_38);
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x9FBED7BEC6BDE9B6(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x9FBED7BEC6BDE9B6(&(Global_1312577.f_14));
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
	unk_0xA5FA652414A5B56F(&(Global_1312577.f_10));
	func_37();
	return unk_0x516C4E27C3C5FFAD();
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
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		iVar0 = func_51(unk_0x1788E93557766241());
		if (iVar0 < iParam0)
		{
			if (func_50())
			{
				func_43(1734805203, (iParam0 - iVar0), &uVar1, 0, 0);
			}
			else
			{
				unk_0x1D381F39045E63E6((iParam0 - iVar0));
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
		if (!unk_0xC9345B47FCA589CF(func_26()) || unk_0x4E4D77A008D3DA63())
		{
			Global_2538376 = 1;
			return 0;
		}
		if (Global_2436286)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2538377 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2537915[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0xC9C87AEBA01C419B(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x625C87495B033820(iVar3))
		{
			*uParam0 = func_49(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2537915[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2538373 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2538375 = 1;
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_48(1, iParam4);
			Global_2538375 = 0;
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
			unk_0xD0E2BFCE93AE3ABD(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_121.f_71), 0);
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
				unk_0xBDF871285913783C();
			}
		}
		else if (!bVar0)
		{
			unk_0xE4B5006C2633FD81(Global_2537915[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2537915[iParam0 /*69*/] = { Var1 };
	}
}

int func_47(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2537915[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_48(int iParam0, var uParam1)
{
	Global_2437461 = uParam1;
	Global_2437460 = iParam0;
}

int func_49(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2537915[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_50())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2537915[iVar0 /*69*/].f_2 = 1;
			Global_2537915[iVar0 /*69*/].f_1 = uParam5;
			Global_2537915[iVar0 /*69*/].f_3 = uParam1;
			Global_2537915[iVar0 /*69*/].f_4 = uParam2;
			Global_2537915[iVar0 /*69*/].f_7 = uParam3;
			Global_2537915[iVar0 /*69*/].f_5 = 0;
			Global_2537915[iVar0 /*69*/] = iParam0;
			Global_2537915[iVar0 /*69*/].f_6 = iParam4;
			Global_2537915[iVar0 /*69*/].f_65 = uParam8;
			Global_2537915[iVar0 /*69*/].f_64 = uParam7;
			Global_2537915[iVar0 /*69*/].f_68 = 0;
			Global_2538373 = 0;
			if (bParam6)
			{
				Global_2537915[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_50()
{
	if (unk_0xF6BAF9F0C2863FFE())
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
		if (iParam0 == unk_0x1788E93557766241())
		{
			return unk_0xDBED60E4A98E4A0B(-1);
		}
		else if (func_53(iParam0))
		{
			return Global_1583725[iParam0 /*334*/].f_188.f_3;
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
		return unk_0x889D01384B54BCE3(Global_2422491.f_1, iParam0);
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
		unk_0x29DB79DD4D939B38(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0x29DB79DD4D939B38(&uVar0, iParam1);
			func_57(func_27(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
}

void func_58(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0xD0E2BFCE93AE3ABD(&uVar0, iParam1);
			func_57(func_27(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_668[iParam0]), iParam1);
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
		if (!unk_0x889D01384B54BCE3(Global_1681280, 19))
		{
			unk_0xD0E2BFCE93AE3ABD(&Global_1681280, 19);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1681280, 19))
	{
		unk_0x29DB79DD4D939B38(&Global_1681280, 19);
	}
}

void func_62(char* sParam0, bool bParam1)
{
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 23)
	{
		return;
	}
	if (func_66(sParam0))
	{
		return;
	}
	func_34();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x7E5A426328F6E635(), 24);
	Global_1312577.f_7 = unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_65();
	func_64(bParam1);
	func_63();
}

void func_63()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1312577.f_39), 1);
}

void func_64(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1312577.f_39), 0);
		return;
	}
	unk_0x29DB79DD4D939B38(&(Global_1312577.f_39), 0);
}

void func_65()
{
	Global_1312577.f_8 = unk_0xBBFAF6DED9DAD29D(unk_0x519586565311459B(), 86400000);
	Global_1312577.f_9 = unk_0x519586565311459B();
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
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	return unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_10));
}

bool func_67(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	return unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_14));
}

void func_68()
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { func_71(unk_0x1788E93557766241()) };
	bVar13 = unk_0x620D8FF311E738AE();
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
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 0, iParam1);
}

int func_70(var uParam0)
{
	if (unk_0x1162FE3C5A637040())
	{
		if (unk_0x70443014BEB6B15D() && unk_0x9A6FFB0772343488(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_71(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBE9A3F2CD3728669(iParam0, &Var0, 13);
	return Var0;
}

bool func_72()
{
	return func_73();
}

bool func_73()
{
	return Global_1321250.f_40 == 3;
}

int func_74()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
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
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
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
			Global_97439.f_29795[iParam0 /*29*/].f_12[0] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_12[1] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_12[2] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[0] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[1] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_97439.f_29795[iParam0 /*29*/].f_12[iParam1] == 1 && Global_97439.f_29795[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_97439.f_29795[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68325)
			{
				if (iParam1 != 4)
				{
					if (Global_14394 != iParam1)
					{
						Global_2923[iParam1 /*4*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
						Global_2940[iParam1] = 1;
						Global_2945[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14394)
					{
					}
					else
					{
						Global_2874[1 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
						Global_2874[1 /*6*/].f_5 = iParam1;
						func_77();
					}
				}
				else
				{
					Global_2874[1 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
					Global_2874[1 /*6*/].f_5 = iParam1;
					func_77();
				}
			}
			else
			{
				Global_2874[1 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
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
	
	StringCopy(&cVar0, unk_0x69C910B9EE514763(&(Global_97439.f_29795[Global_2950 /*29*/].f_7)), 64);
	if (Global_2969 == 0)
	{
		unk_0xA6CE1BB0BF7AE715("");
		StringCopy(&cVar16, unk_0x69C910B9EE514763(&(Global_2874[1 /*6*/])), 64);
		sVar32 = unk_0x69C910B9EE514763("CELL_253");
		unk_0xB2BB3F163B7B2B4C(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xA6CE1BB0BF7AE715("CELL_255");
		unk_0x4498E0CBD76B2D72(&(Global_2874[1 /*6*/]));
		unk_0xB2BB3F163B7B2B4C(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x29DB79DD4D939B38(&Global_2264, 0);
}

void func_78()
{
	if (func_84(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
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
		if (Global_68325)
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
	return Global_97439.f_1729.f_539.f_3213;
}

void func_80()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_83(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_82(unk_0xA16EC202D9D35357());
			if (func_81(iVar0) && (!func_84(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_81(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_81(int iParam0)
{
	return iParam0 < 3;
}

int func_82(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(uParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_84(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_85(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 17);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2265, 17);
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
	
	if (unk_0x06771AF7795B3ECF(sParam2))
	{
		return 0;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(sParam3))
	{
		return 0;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635());
	iVar1 = func_171(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x06771AF7795B3ECF(sParam7))
	{
		iVar2 = unk_0xB793F1A0B6CC4AE1(sParam7);
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
	Global_1321250.f_40.f_1 = iParam0;
	Global_1321250.f_40.f_2 = iParam1;
	Global_1321250.f_40.f_3 = iParam2;
	StringCopy(&(Global_1321250.f_40.f_4), sParam3, 16);
	Global_1321250.f_40.f_8 = iParam4;
	Global_1321250.f_40.f_9 = iParam5;
	Global_1321250.f_40.f_14 = uParam6;
	func_89(iParam4);
	func_161();
	Global_1321250.f_40.f_13 = unk_0xBBFAF6DED9DAD29D(unk_0x519586565311459B(), 7000);
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
	Global_1321250.f_40.f_10 = 0;
}

void func_91()
{
	Global_1321250.f_40.f_10 = 1;
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
	return iParam0 > Global_1321250.f_40.f_8;
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
	Global_1321250.f_40.f_11 = unk_0xBBFAF6DED9DAD29D(unk_0x519586565311459B(), iParam0);
	Global_1321250.f_40.f_12 = 1;
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
		sVar2 = unk_0xF3E5891C26514A74(iVar0);
		iVar1 = func_117(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xD5B32A5135C9642C(unk_0x519586565311459B(), Global_1321250.f_40.f_13))
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
	if (!unk_0x06771AF7795B3ECF(sParam8))
	{
		iVar6++;
		if (!unk_0x06771AF7795B3ECF(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x9BA82E09A986BA4B(sVar4, " "))
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
		if (unk_0x889D01384B54BCE3(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x889D01384B54BCE3(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x06771AF7795B3ECF(sVar2))
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
	if (unk_0x889D01384B54BCE3(uParam4, 0))
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
	Global_1321250.f_57 = 0;
	Global_1321250.f_57.f_1 = 0;
}

void func_99()
{
	Global_1321250.f_40 = 3;
}

void func_100()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2264, 8);
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
			unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 0);
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
	if (unk_0x9BA82E09A986BA4B(sParam14, sParam15))
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
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (unk_0x0F5E43D893E5D0E1(unk_0xA16EC202D9D35357()))
			{
				return 0;
			}
		}
		if (Global_2542611 == 1)
		{
			return 0;
		}
		if (unk_0x16CDA1894CFE0781(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x16CDA1894CFE0781(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_112() == 0)
	{
		func_110();
		return 0;
	}
	func_109(Global_2542610);
	StringCopy(&(Global_2541361[Global_2542610 /*104*/]), sParam1, 64);
	Global_2541361[Global_2542610 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2541361[Global_2542610 /*104*/].f_24 = iParam2;
	}
	Global_2541361[Global_2542610 /*104*/].f_25 = iParam7;
	Global_2541361[Global_2542610 /*104*/].f_26 = uParam8;
	Global_2541361[Global_2542610 /*104*/].f_29 = uParam9;
	Global_2541361[Global_2542610 /*104*/].f_30 = uParam12;
	Global_2541361[Global_2542610 /*104*/].f_31 = uParam11;
	Global_2541361[Global_2542610 /*104*/].f_28 = 0;
	Global_2541361[Global_2542610 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2541361[Global_2542610 /*104*/].f_33), sParam4, 64);
	Global_2541361[Global_2542610 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2541361[Global_2542610 /*104*/].f_50), sParam5, 64);
	Global_2541361[Global_2542610 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2541361[Global_2542610 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2541361[Global_2542610 /*104*/].f_83), sParam15, 64);
	func_78();
	switch (iParam16)
	{
		case 3:
			Global_2541361[Global_2542610 /*104*/].f_99[Global_14394] = 1;
			break;
		
		case 0:
			Global_2541361[Global_2542610 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2541361[Global_2542610 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2541361[Global_2542610 /*104*/].f_99[1] = 1;
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
				Global_2542611 = 1;
				break;
			
			case 0:
				Global_2542611 = 1;
				break;
			
			case 2:
				Global_2542611 = 1;
				break;
			
			case 1:
				Global_2542611 = 1;
				break;
			}
	}
	Global_16762[Global_2542610] = 0;
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
				unk_0xC2E1777941B4536E(-1, "Text_Arrive_Tone", &Global_14383, 1);
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
	int iVar8;
	
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
								if (unk_0x889D01384B54BCE3(Global_2265, 3))
								{
									iVar2 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14556 = 0;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_105(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar2);
								unk_0xD3DF251F2DF3B257();
							}
							if (Global_2435552)
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
									if (Global_97439.f_12395[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97439.f_12395[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97439.f_12395[iVar3 /*104*/].f_99[Global_14394] == 1)
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
								if (Global_68325)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2541361[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2541361[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2541361[iVar4 /*104*/].f_99[Global_14394] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_104(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14394)
									{
										case 0:
											iVar6 = Global_35970;
											break;
										
										case 1:
											iVar6 = Global_35971;
											break;
										
										case 2:
											iVar6 = Global_35972;
											break;
										
										default:
											break;
									}
									func_104(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_104(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_105(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(Global_2270);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_105(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar7);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 3))
								{
									iVar8 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14556 = 0;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_105(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar8);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 8)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_105(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(42);
								unk_0xD3DF251F2DF3B257();
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
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x06771AF7795B3ECF(sParam7))
	{
		func_105(sParam7);
	}
	if (!unk_0x06771AF7795B3ECF(sParam8))
	{
		func_105(sParam8);
	}
	if (!unk_0x06771AF7795B3ECF(sParam9))
	{
		func_105(sParam9);
	}
	if (!unk_0x06771AF7795B3ECF(sParam10))
	{
		func_105(sParam10);
	}
	if (!unk_0x06771AF7795B3ECF(sParam11))
	{
		func_105(sParam11);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_105(char* sParam0)
{
	unk_0xEBC0B3BDAD1250BE(sParam0);
	unk_0x9F94C7B5E8C04AB3();
}

void func_106(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD3DF251F2DF3B257();
}

bool func_107()
{
	return Global_1315891;
}

void func_108(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_97439.f_12305[iParam0 /*20*/].f_8;
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
	
	uVar0 = unk_0x4952CA33C6DB5AD4();
	uVar1 = unk_0x26ADBF0B08315387();
	uVar2 = unk_0xBE59E3811BD4FDD7();
	uVar3 = unk_0xA3730885141EEA96();
	uVar4 = unk_0x1EFE4ED658D22AF3() + 1;
	uVar5 = unk_0x4C29EAF01B84254C();
	Global_2541361[iParam0 /*104*/].f_18 = uVar0;
	Global_2541361[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2541361[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2541361[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2541361[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2541361[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2542610 = 11;
	Global_2541361[Global_2542610 /*104*/].f_18 = -1;
	Global_2541361[Global_2542610 /*104*/].f_18.f_1 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_2 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_3 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_111(Global_2541361[iVar2 /*104*/].f_18, Global_2541361[Global_2542610 /*104*/].f_18))
		{
			Global_2542610 = iVar2;
		}
		iVar2++;
	}
	Global_2541361[Global_2542610 /*104*/].f_24 = 1;
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
		if (Global_2541361[iVar2 /*104*/].f_24 == 0)
		{
			Global_2542610 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2542610 = 11;
	Global_2541361[Global_2542610 /*104*/].f_18 = -1;
	Global_2541361[Global_2542610 /*104*/].f_18.f_1 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_2 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_3 = 0;
	Global_2541361[Global_2542610 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2541361[iVar2 /*104*/].f_24 == 0 || Global_2541361[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_111(Global_2541361[iVar2 /*104*/].f_18, Global_2541361[Global_2542610 /*104*/].f_18))
			{
				Global_2542610 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2542610 == 11)
	{
		return 0;
	}
	Global_2541361[Global_2542610 /*104*/].f_99[0] = 0;
	Global_2541361[Global_2542610 /*104*/].f_99[1] = 0;
	Global_2541361[Global_2542610 /*104*/].f_99[2] = 0;
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
			unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 0);
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
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return sLocal_17;
	}
	if (unk_0x9BA82E09A986BA4B(sParam0, sLocal_17))
	{
		return sLocal_17;
	}
	func_115(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x69C910B9EE514763(sParam0);
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
	Global_1337286[iVar0 /*5*/].f_4 = 1;
	return Global_1337286[iVar0 /*5*/].f_2;
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
	if (Global_1337449)
	{
		if (iParam0 == Global_1337449.f_1)
		{
			return;
		}
	}
	if (func_119(iParam0))
	{
		return;
	}
	if (Global_1337487 >= 32)
	{
		return;
	}
	Global_1337454[Global_1337487] = iParam0;
	Global_1337487++;
	if (bParam1)
	{
	}
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1337487)
	{
		if (Global_1337454[iVar0] == iParam0)
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
	if (Global_1337447 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1337447)
	{
		if (Global_1337286[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA18877A025EABCF1(Global_1337286[iVar0 /*5*/].f_2) && unk_0x1285CB0DD714CE61(Global_1337286[iVar0 /*5*/].f_2))
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
	
	if (iParam0 >= Global_1337447)
	{
		return;
	}
	if (unk_0xA18877A025EABCF1(Global_1337286[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1337286[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xE60D88CF3EF91AA6(Global_1337286[iParam0 /*5*/].f_2), 64);
			unk_0x5F0F8D01B163177A(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x8138315499FE0236(Global_1337286[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1337447)
	{
		Global_1337286[iVar32 /*5*/] = { Global_1337286[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_122(&(Global_1337286[iVar32 /*5*/]));
	Global_1337447 = (Global_1337447 - 1);
}

void func_122(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_123();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1DAD7CE53BEE7710())
	{
		uParam0->f_3 = unk_0x519586565311459B();
	}
}

int func_123()
{
	return -1;
}

void func_124()
{
	Global_1321250.f_40.f_9 = 4;
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
		sVar2 = unk_0xF3E5891C26514A74(iVar0);
		iVar1 = func_117(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xD5B32A5135C9642C(unk_0x519586565311459B(), Global_1321250.f_40.f_13))
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
	if (!unk_0x06771AF7795B3ECF(sParam8))
	{
		iVar6++;
		if (!unk_0x06771AF7795B3ECF(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x9BA82E09A986BA4B(sVar4, " "))
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
		if (unk_0x889D01384B54BCE3(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x889D01384B54BCE3(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x06771AF7795B3ECF(sVar2))
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
	if (unk_0x889D01384B54BCE3(uParam4, 0))
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
	Global_1321250.f_40.f_9 = 3;
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
	
	unk_0x29DB79DD4D939B38(&Global_2264, 10);
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
			Global_2874[3 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 1);
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 7);
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
	if (unk_0x9BA82E09A986BA4B(sParam14, sParam15))
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
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (unk_0x0F5E43D893E5D0E1(unk_0xA16EC202D9D35357()))
			{
				return 0;
			}
		}
		if (Global_97439.f_12305[Global_14394 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x16CDA1894CFE0781(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x16CDA1894CFE0781(joaat("apptextmessage")) > 0)
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
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/]), sParam1, 64);
	Global_97439.f_12395[Global_16760 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_97439.f_12395[Global_16760 /*104*/].f_24 = iParam2;
	}
	Global_97439.f_12395[Global_16760 /*104*/].f_25 = iParam7;
	Global_97439.f_12395[Global_16760 /*104*/].f_26 = uParam8;
	Global_97439.f_12395[Global_16760 /*104*/].f_29 = uParam9;
	Global_97439.f_12395[Global_16760 /*104*/].f_30 = uParam12;
	Global_97439.f_12395[Global_16760 /*104*/].f_31 = uParam11;
	Global_97439.f_12395[Global_16760 /*104*/].f_28 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/].f_33), sParam4, 64);
	Global_97439.f_12395[Global_16760 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/].f_50), sParam5, 64);
	Global_97439.f_12395[Global_16760 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_97439.f_12395[Global_16760 /*104*/].f_83), sParam15, 64);
	if (unk_0x889D01384B54BCE3(Global_2264, 10))
	{
		Global_97439.f_12395[Global_16760 /*104*/].f_99[0] = 1;
		Global_97439.f_12395[Global_16760 /*104*/].f_99[1] = 1;
		Global_97439.f_12395[Global_16760 /*104*/].f_99[2] = 1;
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
				Global_97439.f_12395[Global_16760 /*104*/].f_99[Global_14394] = 1;
				break;
			
			case 0:
				Global_97439.f_12395[Global_16760 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_97439.f_12395[Global_16760 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_97439.f_12395[Global_16760 /*104*/].f_99[1] = 1;
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
		if (unk_0x889D01384B54BCE3(Global_2264, 10))
		{
			Global_97439.f_12305[0 /*20*/].f_17 = 1;
			Global_97439.f_12305[1 /*20*/].f_17 = 1;
			Global_97439.f_12305[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_97439.f_12305[Global_14394 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_97439.f_12305[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_97439.f_12305[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_97439.f_12305[1 /*20*/].f_17 = 1;
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
				unk_0xC2E1777941B4536E(-1, "Text_Arrive_Tone", &Global_14383, 1);
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
	
	uVar0 = unk_0x4952CA33C6DB5AD4();
	uVar1 = unk_0x26ADBF0B08315387();
	uVar2 = unk_0xBE59E3811BD4FDD7();
	uVar3 = unk_0xA3730885141EEA96();
	uVar4 = unk_0x1EFE4ED658D22AF3() + 1;
	uVar5 = unk_0x4C29EAF01B84254C();
	Global_97439.f_12395[iParam0 /*104*/].f_18 = uVar0;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_97439.f_12395[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_132()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68325)
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
	Global_97439.f_12395[Global_16760 /*104*/].f_18 = -1;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_133(Global_97439.f_12395[iVar2 /*104*/].f_18, Global_97439.f_12395[Global_16760 /*104*/].f_18))
		{
			Global_16760 = iVar2;
		}
		iVar2++;
	}
	Global_97439.f_12395[Global_16760 /*104*/].f_24 = 1;
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
	
	if (Global_68325)
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
		if (Global_97439.f_12395[iVar2 /*104*/].f_24 == 0)
		{
			Global_16760 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16760 = 34;
	Global_97439.f_12395[Global_16760 /*104*/].f_18 = -1;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_1 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_2 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_3 = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_97439.f_12395[iVar2 /*104*/].f_24 == 0 || Global_97439.f_12395[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_133(Global_97439.f_12395[iVar2 /*104*/].f_18, Global_97439.f_12395[Global_16760 /*104*/].f_18))
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
	Global_97439.f_12395[Global_16760 /*104*/].f_99[0] = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_99[1] = 0;
	Global_97439.f_12395[Global_16760 /*104*/].f_99[2] = 0;
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
	unk_0x29DB79DD4D939B38(&Global_2264, 10);
	iVar0 = 3;
	if (func_130(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2971 = iParam10;
			Global_2874[3 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
			Global_2951 = iParam0;
			StringCopy(&Global_2952, sParam5, 64);
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 1);
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 7);
		}
		return 1;
	}
	return 0;
}

int func_136(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
	}
	if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
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
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x889D01384B54BCE3(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x889D01384B54BCE3(uParam4, 4))
	{
		bVar0 = func_153(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_143(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x889D01384B54BCE3(uParam4, 3))
		{
			func_142(1);
		}
		if (unk_0x889D01384B54BCE3(uParam4, 5))
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
	Global_2453438 = 0;
}

void func_139()
{
	Global_1321250.f_57 = 1;
	Global_1321250.f_57.f_1 = 0;
}

void func_140()
{
	Global_1321250.f_40.f_9 = 1;
}

void func_141(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2266, 0);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2266, 0);
	}
}

void func_142(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 20);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 20);
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
					unk_0x0D68C13151B68364(0);
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
		if (unk_0xD47B332729054512())
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
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
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
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_148())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
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
	unk_0x0D68C13151B68364(0);
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
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
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
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_151()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
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
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
	}
	if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
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
	Global_1321250.f_40.f_9 = 2;
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
	Global_1321250.f_55 = Global_1321250.f_40.f_1;
	Global_1321250.f_55.f_1 = Global_1321250.f_40.f_10;
}

void func_161()
{
	Global_1321250.f_40 = 1;
}

bool func_162()
{
	return Global_1321250.f_40 == 1;
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	if (!func_164(iParam0))
	{
		return 0;
	}
	if (Global_1321250.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1321250.f_40.f_3 != iParam2)
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
	if (!Global_1321250.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_165()
{
	if (Global_1321250.f_40 == 0)
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
	if (Global_1690013 || func_168())
	{
		return 0;
	}
	if (!unk_0x889D01384B54BCE3(uParam0, 6))
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
	return unk_0xD5B32A5135C9642C(unk_0x519586565311459B(), Global_1336115);
}

int func_168()
{
	if (Global_2533200.f_796 > -1)
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
	return unk_0xB793F1A0B6CC4AE1(&cVar0);
}

bool func_172()
{
	return Global_2451624.f_1;
}

int func_173()
{
	if (Global_1321438.f_2)
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
	Global_2453885.f_1060 = iParam0;
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
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
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
	if (unk_0x1DAD7CE53BEE7710() && !bParam2)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0)) >= iParam1)
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
		if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 8))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 8);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 8))
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 8);
	}
}

bool func_182()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 8);
}

void func_183()
{
	unk_0x5FE2A83120E8127F(800);
	if (!bLocal_752 || bLocal_753)
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
		}
	}
	if (!bLocal_753)
	{
		Local_733[unk_0x044A481E863E2F6B() /*5*/].f_2 = 0;
	}
	else
	{
		Local_733[unk_0x044A481E863E2F6B() /*5*/].f_2 = 3;
	}
}

void func_184()
{
	if (func_188(&Local_87, &(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_4)))
	{
		Local_733[unk_0x044A481E863E2F6B() /*5*/].f_2 = -1;
	}
	func_185(&Local_87);
}

void func_185(var uParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x2B0FFD431FD5A9FA();
	switch (iLocal_748)
	{
		case 0:
			if (unk_0x889D01384B54BCE3(*uParam0, 18))
			{
				if (!func_180(&uLocal_754))
				{
					func_19(&uLocal_754, 0, 0);
				}
				if (!bVar0)
				{
					if (!unk_0x11A809BBE3889742())
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
				if (!unk_0x11A809BBE3889742())
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
				if (!unk_0x11A809BBE3889742())
				{
					func_69("HLP_RNK1", 9000);
					func_187(1);
					Global_2446992.f_1694 = 1;
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
				if (!unk_0x11A809BBE3889742())
				{
					func_175(0);
					if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
					{
						func_69("HLP_CASHXBX", 9000);
					}
					else if (unk_0x75C4BB2E54262038() || unk_0x660675ADB09E441F())
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
			if (!unk_0x889D01384B54BCE3(uLocal_745, 2))
			{
				unk_0xD0E2BFCE93AE3ABD(&uLocal_745, 2);
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
				Global_1327587.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_1327587.f_947), iParam0);
			}
			else
			{
				unk_0x29DB79DD4D939B38(&(Global_1327587.f_947), iParam0);
			}
			break;
	}
}

void func_187(int iParam0)
{
	Global_2446992.f_4372 = iParam0;
}

int func_188(var uParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	bool bVar8;
	
	if (!unk_0x889D01384B54BCE3(*uParam0, 13))
	{
		if (unk_0xBAB691F99A2A7346(unk_0xD721A2BDAE723D79()))
		{
			Var5 = { unk_0x285CC833B48D7B54(unk_0xD721A2BDAE723D79()) };
			if ((Var5.f_0 != 0f || Var5.f_1 != 0f) || Var5.f_2 != 0f)
			{
				unk_0x114CD354F838F63E(Var5, 0f, 0f, 0f);
				if (!unk_0x889D01384B54BCE3(*uParam0, 14))
				{
					unk_0xD0E2BFCE93AE3ABD(uParam0, 14);
				}
			}
		}
	}
	else if (unk_0x889D01384B54BCE3(*uParam0, 14))
	{
		unk_0x2D78CBCC9150BF79();
		unk_0x29DB79DD4D939B38(uParam0, 14);
	}
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 337, 1);
	}
	func_337(uParam0);
	unk_0xE2E62721D64127C1(1f);
	func_331(uParam0);
	func_330(unk_0x1788E93557766241());
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (unk_0x16CDA1894CFE0781(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (unk_0x16CDA1894CFE0781(joaat("freemode")) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2446992.f_1693)
				{
					Global_2446992.f_1693 = 1;
					unk_0x5EFEFC8C6AA1CB2E(0);
				}
				if (!func_182())
				{
					func_181(1);
				}
				if (!unk_0xF4C685E933068D23() && !unk_0xE9A5FF67266655B2())
				{
					unk_0x271524E4281048DC(800);
				}
				if (!func_180(&(uParam0->f_15)))
				{
					func_19(&(uParam0->f_15), 0, 0);
				}
				unk_0x7559DFAB61B017F2(&Global_1690464);
				Global_1690465 = 0;
				Global_1690467 = 0;
				Global_1690466 = 0;
				Global_1690468 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0xF4C685E933068D23())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_322(0, 0, 0, 1, 1, 1, 0);
					unk_0xE7B867B325BAC131(1, 0);
					func_358(1);
					unk_0x471A08531DD2B5A0(1);
					unk_0x5797632EDD3478EA("EXTRASUNNY");
					unk_0x74B5BEE69AA4B3E9(19, 0, 0);
					unk_0x2C1702F89B3C9179(1);
					func_321(0);
					unk_0x4FB2D19B4D370969(0);
					func_315(1, 0);
					func_307(1, 1);
					if (unk_0x16CDA1894CFE0781(joaat("fm_intro")) < 1 || !func_306())
					{
						if (uParam0->f_292)
						{
							if (func_305() == 0)
							{
								unk_0xA9E9AAEA2567CEB7("GTAO_INTRO_MALE");
								unk_0x543FF27BE43FC311(1);
							}
						}
					}
					func_298(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					unk_0x29DB79DD4D939B38(uParam0, 0);
					unk_0x29DB79DD4D939B38(uParam0, 1);
					unk_0x29DB79DD4D939B38(uParam0, 2);
					unk_0x29DB79DD4D939B38(uParam0, 9);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 7);
					uParam0->f_122 = unk_0x4210B2DCFC2838AC(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				unk_0x939DA7EBCC6588FF(joaat("frogger"));
				if (unk_0x5494F37F35C1D7D7(joaat("frogger")))
				{
					if (!uParam0->f_292 || unk_0xEFDA9065E9841E24())
					{
						if (func_295())
						{
							unk_0x743797F5DD013D58(0);
							func_290(1, 1);
							unk_0x584BB792123988BF(0);
							unk_0xFD1E0AEC770DAF2E(1);
							if (!func_174())
							{
								func_289();
							}
							func_187(0);
							func_288();
							unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Global_1312552, 1, 0, 0, 1);
							unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 1);
							unk_0x6A23C3306A8CF21B(unk_0xA16EC202D9D35357(), false, 0);
							unk_0xCC68D69AF0F39112(0);
							if (unk_0x5660C8AFDD9C1721(unk_0x8D619EEDE8B83C4F()))
							{
								unk_0xBE97A5A41C1F5C4C(unk_0x8D619EEDE8B83C4F(), 0f);
							}
							unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), true);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0xB4B5BF5882A555F9())
				{
					if (!unk_0x889D01384B54BCE3(*uParam0, 4))
					{
						if (func_287() == 64 || func_287() == 65)
						{
							unk_0x2D78CBCC9150BF79();
							unk_0x1232944746AEB20F(754.2219f, 1226.831f, 356.5081f, func_286(-14.367f, 0f, 157.3524f), 100f, 0);
							func_178(&(uParam0->f_17));
							func_19(&(uParam0->f_17), 0, 0);
							unk_0xD0E2BFCE93AE3ABD(uParam0, 4);
						}
					}
					else if (unk_0x67583D67393F934F("FM_INTRO_START") && (unk_0xDC7784B8DE7B58D5() || func_179(&(uParam0->f_17), 5000, 0)))
					{
						if (!unk_0x889D01384B54BCE3(*uParam0, 24))
						{
							if (unk_0x889D01384B54BCE3(*uParam0, 7))
							{
								unk_0x495459882382D113("FM_INTRO_START");
								unk_0xD0E2BFCE93AE3ABD(uParam0, 24);
								unk_0xD0E2BFCE93AE3ABD(uParam0, 21);
							}
						}
						else if (unk_0x4BCE624CFBBB5AC1() > 0)
						{
							unk_0x099E9F2D6F93D420();
							unk_0xA5FAF7451C6B15E1(6);
							if (!unk_0xBAB691F99A2A7346(uParam0->f_7))
							{
								uParam0->f_7 = unk_0xC45922BBDAA0638F("DEFAULT_SCRIPTED_CAMERA", 0);
								unk_0xC8CEF95C63B283EC(uParam0->f_7, 1);
							}
							unk_0x73448A1FA24E23FE(uParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							unk_0x73448A1FA24E23FE(uParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							unk_0x47FDCDDCBDC99BBB(uParam0->f_7, "HAND_SHAKE", 0.15f);
							unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 1, 0);
							func_285(uParam0);
							unk_0xD0E2BFCE93AE3ABD(uParam0, 11);
							if (uParam0->f_292)
							{
								unk_0x0622B89763230E2B(9, 9, 9, 9);
								unk_0x8703D89CE06ED3A9();
							}
							unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), true);
							if (unk_0xF4C685E933068D23())
							{
								unk_0x5FE2A83120E8127F(800);
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
					unk_0xFD1E0AEC770DAF2E(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!unk_0x889D01384B54BCE3(*uParam0, 2))
				{
					unk_0xFD1E0AEC770DAF2E(1);
					func_69("FMIC_INTRO2", -1);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 2);
				}
				unk_0x73448A1FA24E23FE(uParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				unk_0x73448A1FA24E23FE(uParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				unk_0x0622B89763230E2B(9, 13, 9, 13);
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
				if (!unk_0x889D01384B54BCE3(*uParam0, 10))
				{
					func_280();
					unk_0xD0E2BFCE93AE3ABD(uParam0, 10);
				}
				unk_0x73448A1FA24E23FE(uParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				unk_0x73448A1FA24E23FE(uParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (unk_0xECFECDAD51A6184F(uParam0->f_48, 0))
				{
					unk_0xD987E39BC7E93BD4(uParam0->f_48);
					unk_0x423D1EBE54B18555(uParam0->f_48, true);
					unk_0xEBE442695B64536B(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0xECFECDAD51A6184F(uParam0->f_48, 0))
				{
					unk_0xEBE442695B64536B(uParam0->f_48);
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
								if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
								{
									unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), true);
								}
								fVar0 = 5000f;
								if (unk_0xECFECDAD51A6184F(uParam0->f_92[0], 0))
								{
									unk_0x7278B2F5A4AF38A7(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									unk_0x4A94E9823FACFC05(uParam0->f_92[0], fVar0);
								}
								if (unk_0xECFECDAD51A6184F(uParam0->f_92[1], 0))
								{
									unk_0x7278B2F5A4AF38A7(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									unk_0x4A94E9823FACFC05(uParam0->f_92[1], fVar0);
								}
								if (unk_0xECFECDAD51A6184F(uParam0->f_92[2], 0))
								{
									unk_0x7278B2F5A4AF38A7(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									unk_0x4A94E9823FACFC05(uParam0->f_92[2], fVar0);
								}
								if (unk_0xECFECDAD51A6184F(uParam0->f_92[3], 0))
								{
									unk_0x7278B2F5A4AF38A7(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									unk_0x4A94E9823FACFC05(uParam0->f_92[3], fVar0);
								}
								if (unk_0xECFECDAD51A6184F(uParam0->f_92[4], 0))
								{
									unk_0x7278B2F5A4AF38A7(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									unk_0x4A94E9823FACFC05(uParam0->f_92[4], fVar0);
								}
								unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
								unk_0x5FE2A83120E8127F(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					unk_0x74B5BEE69AA4B3E9(16, 0, 0);
					func_277(uParam0);
					func_276(uParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					unk_0x05F0ADDBF1E7785B(uParam0->f_7, 1);
					unk_0x50766A07EEFF0261(uParam0->f_7);
					unk_0x27A62B1C26941E13(uParam0->f_7, 0);
					unk_0x3EF2F05E6EA65602("MP_INTRO_RACE_SCENE");
					unk_0x0622B89763230E2B(9, 12, 9, 12);
					func_274(uParam0, 14);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				if (!unk_0x889D01384B54BCE3(*uParam0, 5))
				{
					func_69("FMIC_RACE1", -1);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 5);
				}
				func_284(uParam0, 14);
				if (func_282(uParam0, 14, 0))
				{
					uParam0->f_32 = unk_0x7B6124E1230469E9(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
					if (uParam0->f_32 != 0)
					{
						unk_0xA17109B5C97ADD34(uParam0->f_32);
					}
					func_273(uParam0, 23539f, 0);
					unk_0x74B5BEE69AA4B3E9(16, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_274(uParam0, 15);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				if (!unk_0x889D01384B54BCE3(uParam0->f_3, 0))
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
					unk_0x74B5BEE69AA4B3E9(16, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_252(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_274(uParam0, 16);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				if (!unk_0x889D01384B54BCE3(uParam0->f_3, 0))
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
					unk_0x74B5BEE69AA4B3E9(16, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x3FE6A7FDB9B13D87(uParam0->f_9, 0.7f);
					func_274(uParam0, 17);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				if (!unk_0x889D01384B54BCE3(*uParam0, 6))
				{
					unk_0xD0E2BFCE93AE3ABD(uParam0, 6);
					func_69("FMIC_RACE2", -1);
				}
				if (!unk_0x889D01384B54BCE3(uParam0->f_3, 0))
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
					unk_0x74B5BEE69AA4B3E9(16, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 18);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				if (!unk_0x889D01384B54BCE3(uParam0->f_3, 0))
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
					unk_0x74B5BEE69AA4B3E9(16, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					if (unk_0x538DF9E5B1DF01EB(uParam0->f_92[2]))
					{
						unk_0x2F2948A2506AA404(&(uParam0->f_92[2]));
					}
					if (unk_0x538DF9E5B1DF01EB(uParam0->f_92[3]))
					{
						unk_0x2F2948A2506AA404(&(uParam0->f_92[3]));
					}
					if (unk_0x538DF9E5B1DF01EB(uParam0->f_92[4]))
					{
						unk_0x2F2948A2506AA404(&(uParam0->f_92[4]));
					}
					func_276(uParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 19);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				if (!unk_0x889D01384B54BCE3(uParam0->f_3, 0))
				{
					func_262(uParam0);
				}
				else
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (unk_0x02E23868217F22CC(uParam0->f_32))
							{
								if (!unk_0xE44A580B551C3645(uParam0->f_91))
								{
									unk_0xC6FBEE7F1DA83E3F(uParam0->f_91, uParam0->f_32, unk_0xB793F1A0B6CC4AE1("GtaMloRoom001"));
								}
								unk_0x4F5F5BF0722DFDC2("SE_MP_GARAGE_L_RADIO", 0);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!unk_0xE44A580B551C3645(uParam0->f_49[iVar4]))
									{
										unk_0xC6FBEE7F1DA83E3F(uParam0->f_49[iVar4], uParam0->f_32, unk_0xB793F1A0B6CC4AE1("GtaMloRoom001"));
									}
									iVar4++;
								}
								unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 6);
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
				if (func_282(uParam0, 19, 0) && unk_0x889D01384B54BCE3(uParam0->f_3, 0))
				{
					if (unk_0x889D01384B54BCE3(*uParam0, 12))
					{
						unk_0x29DB79DD4D939B38(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_282(uParam0, 19, -4968))
				{
					if (!unk_0x889D01384B54BCE3(*uParam0, 12))
					{
						unk_0xFD1E0AEC770DAF2E(1);
						unk_0xD0E2BFCE93AE3ABD(uParam0, 12);
					}
				}
				else if (func_282(uParam0, 19, -5618))
				{
					if (!unk_0x889D01384B54BCE3(*uParam0, 30))
					{
						unk_0xDF3B1A0343547226("MP_intro_logo", 0, 0);
						unk_0xD0E2BFCE93AE3ABD(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_250(uParam0);
				func_249(uParam0);
				if (unk_0x889D01384B54BCE3(uParam0->f_3, 0))
				{
					if (!unk_0xBAB691F99A2A7346(uParam0->f_7))
					{
						uParam0->f_7 = unk_0xC45922BBDAA0638F("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					unk_0xC8CEF95C63B283EC(uParam0->f_7, 1);
					unk_0x73448A1FA24E23FE(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					unk_0x73448A1FA24E23FE(uParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					unk_0x47FDCDDCBDC99BBB(uParam0->f_7, "HAND_SHAKE", 0.1f);
					unk_0x2CE536D1B0006B95(uParam0->f_32, unk_0xB793F1A0B6CC4AE1("GtaMloRoom001"));
					unk_0x4F5F5BF0722DFDC2("SE_MP_GARAGE_L_RADIO", 0);
					unk_0xA5FAF7451C6B15E1(0);
					unk_0x9ACE46E3A6C225BC(uParam0->f_10, 0f);
					if (!unk_0x2DE0B96E966FD817(uParam0->f_91))
					{
						unk_0x30D76463BF50C618(uParam0->f_91, 0, 0);
					}
					if (unk_0x4CBFDAD06D630F7C("MP_INTRO_RACE_SCENE"))
					{
						unk_0x124843CE93F39C27("MP_INTRO_RACE_SCENE");
					}
					unk_0x0622B89763230E2B(9, 13, 9, 13);
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
					unk_0x73448A1FA24E23FE(uParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					unk_0x73448A1FA24E23FE(uParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					unk_0x9ACE46E3A6C225BC(uParam0->f_10, 0f);
					if (!unk_0x2DE0B96E966FD817(uParam0->f_91))
					{
						unk_0x30D76463BF50C618(uParam0->f_91, 0, 0);
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
				unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				unk_0xD0E2BFCE93AE3ABD(uParam0, 13);
				unk_0x73448A1FA24E23FE(uParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				unk_0x73448A1FA24E23FE(uParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				unk_0x74B5BEE69AA4B3E9(18, 0, 0);
				func_245(uParam0, 2);
				func_245(uParam0, 7);
				unk_0xEA054561294AEC10(func_244());
				if (unk_0x538DF9E5B1DF01EB(uParam0->f_91))
				{
					unk_0x51A89CCC8A5317D0(&(uParam0->f_91));
				}
				unk_0xD0E2BFCE93AE3ABD(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_250(uParam0);
				func_249(uParam0);
				if (!unk_0x889D01384B54BCE3(*uParam0, 8))
				{
					unk_0xD0E2BFCE93AE3ABD(uParam0, 8);
				}
				if (func_261(uParam0) && func_255(uParam0))
				{
					func_253(uParam0);
				}
				func_284(uParam0, 28);
				if ((unk_0x67583D67393F934F("FM_INTRO_DRIVE_START") && unk_0x889D01384B54BCE3(uParam0->f_3, 3)) && func_282(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
					{
						if (func_241(uParam0))
						{
							unk_0x574BF3D848332F6A(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							unk_0x574BF3D848332F6A(unk_0xA16EC202D9D35357(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x574BF3D848332F6A(unk_0xA16EC202D9D35357(), "MP_Male_Character", 0, 0, 0);
							unk_0x574BF3D848332F6A(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_241(uParam0))
				{
					unk_0x574BF3D848332F6A(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					unk_0x574BF3D848332F6A(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!unk_0xE44A580B551C3645(uParam0->f_35))
				{
					unk_0x574BF3D848332F6A(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0xE44A580B551C3645(uParam0->f_34))
				{
					unk_0x574BF3D848332F6A(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0xE44A580B551C3645(uParam0->f_33))
				{
					unk_0x423D1EBE54B18555(uParam0->f_33, true);
					unk_0x574BF3D848332F6A(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_239(uParam0);
				unk_0x4E9988D53AD8872A("CONTRAILS", 0);
				unk_0x0622B89763230E2B(9, 9, 9, 9);
				func_69("FMIC_TENN", -1);
				unk_0xEA4B8437C8E2CA24(4);
				func_232(1, 1, 1, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0xEC35DAD55FA4EEF2())
				{
					if (uParam0->f_32 != 0)
					{
						unk_0xDB1DF8A68B9A5A9D(uParam0->f_32);
					}
					func_231(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (unk_0x09560C7DE2A384BD() - uParam0->f_13);
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
						if (unk_0xE06B94F2BD99223C("MP_Female_Character", 0))
						{
							if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
							{
								if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
								{
									if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
									{
										unk_0xA34C986DDC3D92F1(unk_0xA16EC202D9D35357(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (unk_0xE06B94F2BD99223C("MP_Male_Character", 0))
					{
						if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
						{
							if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
							{
								if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
								{
									unk_0xA34C986DDC3D92F1(unk_0xA16EC202D9D35357(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (unk_0xE06B94F2BD99223C("LAMAR", 0))
				{
					if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
					{
						if (!unk_0x2DE0B96E966FD817(uParam0->f_35))
						{
							if (!unk_0x202EF5D8203705EF(uParam0->f_35, 0))
							{
								unk_0xA34C986DDC3D92F1(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								unk_0x30D76463BF50C618(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (unk_0xE06B94F2BD99223C("MP_Lamar_Car", 0))
				{
					if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
					{
						unk_0x6EBB9B0E214CCF0F(uParam0->f_34, 1, 1);
						unk_0x6C43BF7625967266(uParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						unk_0x34639238667C4381(uParam0->f_34, -106.11f);
						func_230(uParam0, 3099.997f);
						unk_0xA5CC79C83111E834(uParam0->f_34, 1);
					}
				}
				if (unk_0xE97661B388D4DA3B(0))
				{
					unk_0x74B5BEE69AA4B3E9(21, 0, 0);
					func_274(uParam0, 33);
					func_276(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (unk_0x889D01384B54BCE3(*uParam0, 29))
				{
					if (unk_0xE64D690D4638CD42() || unk_0x7CA8D900E987DFB5() > 3254)
					{
						unk_0x29DB79DD4D939B38(uParam0, 29);
					}
				}
				if ((func_229(uParam0) && func_228(uParam0)) && !unk_0xEC35DAD55FA4EEF2())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (unk_0x09560C7DE2A384BD() - uParam0->f_13);
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
					unk_0x7172D3D2AD530FD4();
					unk_0x87378FFD9C18F6B8();
					if (unk_0x889D01384B54BCE3(*uParam0, 7))
					{
						unk_0x495459882382D113("FM_INTRO_DRIVE_START");
						unk_0xD0E2BFCE93AE3ABD(uParam0, 21);
					}
					if (!unk_0xFBC54F55FB66B239())
					{
						unk_0x1EA63162D74B4324(0);
					}
					if (!unk_0x889D01384B54BCE3(*uParam1, 1))
					{
						unk_0xD0E2BFCE93AE3ABD(uParam1, 1);
					}
					func_227(uParam0);
					func_226(uParam0);
					func_232(0, 1, 1, 0);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					unk_0x29DB79DD4D939B38(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x09560C7DE2A384BD() - (uParam0->f_26 + unk_0x7CA8D900E987DFB5()));
					}
					if (!unk_0x889D01384B54BCE3(*uParam0, 22))
					{
						if (unk_0x7B3B1BE0918A85C4() == 1)
						{
							unk_0x74B5BEE69AA4B3E9(19, 59, 0);
							unk_0xD0E2BFCE93AE3ABD(uParam0, 22);
						}
					}
					if (func_224(uParam0))
					{
						if (unk_0x7B3B1BE0918A85C4() == 2)
						{
							if (!unk_0x889D01384B54BCE3(*uParam0, 18))
							{
								unk_0xD0E2BFCE93AE3ABD(uParam0, 18);
							}
							if (unk_0x7CA8D900E987DFB5() > 23146)
							{
								if (!unk_0x889D01384B54BCE3(*uParam0, 27))
								{
									unk_0x465DC33550A13251("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xD0E2BFCE93AE3ABD(uParam0, 27);
								}
								if (!unk_0x889D01384B54BCE3(*uParam0, 28))
								{
									unk_0x465DC33550A13251("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xD0E2BFCE93AE3ABD(uParam0, 28);
								}
							}
							unk_0x0AB502AB80B777D7(4950f);
							if (unk_0x889D01384B54BCE3(*uParam0, 22))
							{
								unk_0x74B5BEE69AA4B3E9(21, 0, 0);
								unk_0x29DB79DD4D939B38(uParam0, 22);
							}
							if (unk_0x7CA8D900E987DFB5() > 23254)
							{
								func_223(uParam0);
							}
						}
					}
					if (unk_0x7B3B1BE0918A85C4() > 2)
					{
						func_226(uParam0);
						if (!unk_0x889D01384B54BCE3(*uParam0, 22))
						{
							unk_0x74B5BEE69AA4B3E9(21, 0, 0);
							unk_0xD0E2BFCE93AE3ABD(uParam0, 22);
						}
						if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
						{
							unk_0x55BDACDFE3F7BE6D(uParam0->f_34);
							unk_0x1143B1E42EAAE947(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = unk_0x7CA8D900E987DFB5();
				}
				break;
			
			case 33:
				if (func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 1))
					{
						if (func_282(uParam0, 33, -5450))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 1);
							}
						}
					}
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 2))
					{
						if (func_282(uParam0, 33, -5450))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 1))
					{
						if (func_282(uParam0, 33, -5450))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					unk_0x3EF2F05E6EA65602("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 33);
				func_221(uParam0);
				if (func_282(uParam0, 33, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 2))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 2);
						}
					}
				}
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					if (!unk_0xE44A580B551C3645(uParam0->f_34))
					{
						unk_0xA3CCB6D1FDD0DF5D(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x47DDFF70FB12A8C3(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0xFDD170140EFC9F4C(uParam0->f_7, 33.3479f);
						unk_0x47FDCDDCBDC99BBB(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xC8CEF95C63B283EC(uParam0->f_7, 1);
						if (!unk_0xE44A580B551C3645(uParam0->f_35))
						{
							unk_0x423D1EBE54B18555(uParam0->f_35, false);
						}
						if (!unk_0xE44A580B551C3645(uParam0->f_36))
						{
							unk_0x423D1EBE54B18555(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x65AD48D7B4CEA391(uParam0->f_11, uParam0->f_34, unk_0xF8AE6180328ED522(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x65AD48D7B4CEA391(uParam0->f_12, uParam0->f_34, unk_0xF8AE6180328ED522(uParam0->f_34, "seat_pside_f"));
							unk_0x10D8E64E13BD715C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x9ACE46E3A6C225BC(uParam0->f_11, 0.129f);
							unk_0x9ACE46E3A6C225BC(uParam0->f_12, 0.129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x65AD48D7B4CEA391(uParam0->f_12, uParam0->f_34, 0);
							unk_0x10D8E64E13BD715C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x9ACE46E3A6C225BC(uParam0->f_11, 0.145f);
							unk_0x9ACE46E3A6C225BC(uParam0->f_12, 0.145f);
						}
						unk_0x30D76463BF50C618(uParam0->f_36, 0, 0);
						unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 0, 0);
					}
					func_274(uParam0, 34);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 34);
				func_221(uParam0);
				if (func_282(uParam0, 34, 0))
				{
					func_230(uParam0, 18966.65f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 3))
					{
						if (func_282(uParam0, 34, 1100))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 3);
							}
						}
					}
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 4))
					{
						if (func_282(uParam0, 34, 1100))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 3))
					{
						if (func_282(uParam0, 34, 1000))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0xE44A580B551C3645(uParam0->f_35))
					{
						unk_0x423D1EBE54B18555(uParam0->f_35, true);
					}
					if (!unk_0xE44A580B551C3645(uParam0->f_36))
					{
						unk_0x423D1EBE54B18555(uParam0->f_36, false);
					}
					if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(uParam0->f_34))
					{
						unk_0xA34C986DDC3D92F1(unk_0xA16EC202D9D35357(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 0, 0);
					}
					func_274(uParam0, 35);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 35);
				func_221(uParam0);
				if (func_282(uParam0, 35, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 5))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 4))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 4);
						}
					}
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 5))
					{
						if (func_282(uParam0, 36, -3750))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					if (!unk_0xE44A580B551C3645(uParam0->f_34))
					{
						unk_0xA3CCB6D1FDD0DF5D(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x47DDFF70FB12A8C3(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0xFDD170140EFC9F4C(uParam0->f_7, 33.3479f);
						unk_0x47FDCDDCBDC99BBB(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xC8CEF95C63B283EC(uParam0->f_7, 1);
						if (!unk_0xE44A580B551C3645(uParam0->f_35))
						{
							unk_0x423D1EBE54B18555(uParam0->f_35, false);
						}
						if (!unk_0xE44A580B551C3645(uParam0->f_36))
						{
							unk_0x423D1EBE54B18555(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x65AD48D7B4CEA391(uParam0->f_11, uParam0->f_34, unk_0xF8AE6180328ED522(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x65AD48D7B4CEA391(uParam0->f_12, uParam0->f_34, unk_0xF8AE6180328ED522(uParam0->f_34, "seat_pside_f"));
							unk_0x10D8E64E13BD715C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x9ACE46E3A6C225BC(uParam0->f_11, 0.363f);
							unk_0x9ACE46E3A6C225BC(uParam0->f_12, 0.363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x65AD48D7B4CEA391(uParam0->f_12, uParam0->f_34, 0);
							unk_0x10D8E64E13BD715C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x9ACE46E3A6C225BC(uParam0->f_11, 0.298f);
							unk_0x9ACE46E3A6C225BC(uParam0->f_12, 0.298f);
						}
						unk_0x30D76463BF50C618(uParam0->f_36, 0, 0);
						unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 0, 0);
					}
					func_274(uParam0, 36);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 36);
				func_221(uParam0);
				if (func_282(uParam0, 36, 0))
				{
					func_230(uParam0, 42700.96f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 6))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 6))
					{
						if (func_282(uParam0, 36, 1000))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0xE44A580B551C3645(uParam0->f_35))
					{
						unk_0x423D1EBE54B18555(uParam0->f_35, true);
					}
					if (!unk_0xE44A580B551C3645(uParam0->f_36))
					{
						unk_0x423D1EBE54B18555(uParam0->f_36, false);
					}
					if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(uParam0->f_34))
					{
						unk_0xA34C986DDC3D92F1(unk_0xA16EC202D9D35357(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 0, 0);
					}
					func_274(uParam0, 37);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 37);
				func_221(uParam0);
				if (func_282(uParam0, 37, 0))
				{
					func_230(uParam0, 51033.28f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 7))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 7);
						}
					}
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 8))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 9))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 7))
					{
						if (func_282(uParam0, 37, 2500))
						{
							if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 38);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 38);
				func_221(uParam0);
				if (func_282(uParam0, 38, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 8))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 9))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 9);
						}
					}
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 31))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_241(uParam0))
				{
					if (!unk_0x889D01384B54BCE3(uParam0->f_1, 31))
					{
						if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 31);
						}
					}
				}
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					if (!unk_0xE44A580B551C3645(uParam0->f_34))
					{
						unk_0xA3CCB6D1FDD0DF5D(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x47DDFF70FB12A8C3(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0xFDD170140EFC9F4C(uParam0->f_7, 33.3479f);
						unk_0x47FDCDDCBDC99BBB(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xC8CEF95C63B283EC(uParam0->f_7, 1);
						if (!unk_0xE44A580B551C3645(uParam0->f_35))
						{
							unk_0x423D1EBE54B18555(uParam0->f_35, false);
						}
						if (!unk_0xE44A580B551C3645(uParam0->f_36))
						{
							unk_0x423D1EBE54B18555(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x65AD48D7B4CEA391(uParam0->f_11, uParam0->f_34, unk_0xF8AE6180328ED522(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x65AD48D7B4CEA391(uParam0->f_12, uParam0->f_34, unk_0xF8AE6180328ED522(uParam0->f_34, "seat_pside_f"));
							unk_0x10D8E64E13BD715C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x9ACE46E3A6C225BC(uParam0->f_11, 0.811f);
							unk_0x9ACE46E3A6C225BC(uParam0->f_12, 0.811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x65AD48D7B4CEA391(uParam0->f_12, uParam0->f_34, 0);
							unk_0x10D8E64E13BD715C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x9ACE46E3A6C225BC(uParam0->f_11, 0.791f);
							unk_0x9ACE46E3A6C225BC(uParam0->f_12, 0.791f);
						}
						unk_0x30D76463BF50C618(uParam0->f_36, 0, 0);
						unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 0, 0);
					}
					func_274(uParam0, 39);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 39);
				func_221(uParam0);
				if (func_282(uParam0, 39, 0))
				{
					func_230(uParam0, 85050f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!unk_0x889D01384B54BCE3(uParam0->f_1, 31))
				{
					if (func_222(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), 31);
					}
				}
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x0622B89763230E2B(9, 12, 9, 12);
					if (!unk_0xE44A580B551C3645(uParam0->f_35))
					{
						unk_0x423D1EBE54B18555(uParam0->f_35, true);
					}
					if (!unk_0xE44A580B551C3645(uParam0->f_36))
					{
						unk_0x423D1EBE54B18555(uParam0->f_36, false);
					}
					if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(uParam0->f_34))
					{
						unk_0xA34C986DDC3D92F1(unk_0xA16EC202D9D35357(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 0, 0);
					}
					func_274(uParam0, 40);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 40);
				if (func_221(uParam0) && func_282(uParam0, 40, 0))
				{
					func_230(uParam0, 116366.5f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					unk_0x74B5BEE69AA4B3E9(0, 0, 0);
					func_276(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_274(uParam0, 41);
					unk_0x6B7EEC4822875983("CONTRAILS", 0);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 41);
				if (func_282(uParam0, 41, 0))
				{
					unk_0x99C107CA128E7473(1);
					func_230(uParam0, 127166.5f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_220(uParam0);
					func_276(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 42);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 42);
				if (func_282(uParam0, 42, 0))
				{
					unk_0x99C107CA128E7473(0);
					func_230(uParam0, 170800f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 43);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 43);
				if (func_282(uParam0, 43, 0))
				{
					unk_0x0622B89763230E2B(9, 12, 9, 12);
					func_230(uParam0, 191799.8f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 44);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 44);
				if (func_282(uParam0, 44, 0))
				{
					func_230(uParam0, 196633.1f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 45);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 45);
				if (func_282(uParam0, 45, 0))
				{
					func_230(uParam0, 201466.5f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 46);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 46);
				if (func_282(uParam0, 46, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_219(uParam0);
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					if (!unk_0xE44A580B551C3645(uParam0->f_34))
					{
						unk_0xA3CCB6D1FDD0DF5D(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x47DDFF70FB12A8C3(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0xFDD170140EFC9F4C(uParam0->f_7, 33.3479f);
						unk_0x47FDCDDCBDC99BBB(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xC8CEF95C63B283EC(uParam0->f_7, 1);
						if (!unk_0xE44A580B551C3645(uParam0->f_35))
						{
							unk_0x423D1EBE54B18555(uParam0->f_35, false);
						}
						if (!unk_0xE44A580B551C3645(uParam0->f_36))
						{
							unk_0x423D1EBE54B18555(uParam0->f_36, true);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x65AD48D7B4CEA391(uParam0->f_11, uParam0->f_34, unk_0xF8AE6180328ED522(uParam0->f_34, "seat_dside_f"));
						if (func_241(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x65AD48D7B4CEA391(uParam0->f_12, uParam0->f_34, unk_0xF8AE6180328ED522(uParam0->f_34, "seat_pside_f"));
							unk_0x10D8E64E13BD715C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x9ACE46E3A6C225BC(uParam0->f_11, 0.726f);
							unk_0x9ACE46E3A6C225BC(uParam0->f_12, 0.74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x65AD48D7B4CEA391(uParam0->f_12, uParam0->f_34, 0);
							unk_0x10D8E64E13BD715C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x9ACE46E3A6C225BC(uParam0->f_11, 0.726f);
							unk_0x9ACE46E3A6C225BC(uParam0->f_12, 0.815f);
						}
						unk_0x30D76463BF50C618(uParam0->f_36, 0, 0);
						unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 0, 0);
					}
					func_274(uParam0, 47);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 47);
				if (func_282(uParam0, 47, 0))
				{
					func_230(uParam0, 213066.4f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_219(uParam0);
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0xE44A580B551C3645(uParam0->f_35))
					{
						unk_0x423D1EBE54B18555(uParam0->f_35, true);
					}
					if (!unk_0xE44A580B551C3645(uParam0->f_36))
					{
						unk_0x423D1EBE54B18555(uParam0->f_36, false);
					}
					if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(uParam0->f_34))
					{
						unk_0xA34C986DDC3D92F1(unk_0xA16EC202D9D35357(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 0, 0);
					}
					func_274(uParam0, 48);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 48);
				if (func_282(uParam0, 48, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 3);
					func_218(uParam0, 10177.75f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_219(uParam0);
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_274(uParam0, 49);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				func_284(uParam0, 49);
				if (unk_0x67583D67393F934F("FM_INTRO_DRIVE_END") && func_282(uParam0, 49, 0))
				{
					func_216(uParam0, 4500f);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_219(uParam0);
				if (!unk_0x83B393DE31BAC8F0())
				{
					if (!unk_0x0FFB470AFBDA3DCD())
					{
						unk_0x5FE2A83120E8127F(250);
					}
				}
				if (unk_0x889D01384B54BCE3(*uParam0, 15))
				{
					func_276(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						unk_0x162D800D610A60B8();
						unk_0x29DB79DD4D939B38(uParam0, 11);
					}
					func_274(uParam0, 50);
					unk_0x29DB79DD4D939B38(uParam0, 15);
				}
				if (!unk_0x889D01384B54BCE3(*uParam0, 20))
				{
					if (func_241(uParam0))
					{
						unk_0x752468956AA26EF0("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0x752468956AA26EF0("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (unk_0x5EA36FD8E318DCED())
						{
							if (func_241(uParam0))
							{
								unk_0x8AF482A10ABC5CE0("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0x8AF482A10ABC5CE0("MP_1", 0, 1);
							}
						}
					}
					if (unk_0x74F469BC7D5F3A5D())
					{
						unk_0xD0E2BFCE93AE3ABD(uParam0, 20);
					}
				}
				func_284(uParam0, 50);
				if (!unk_0xE44A580B551C3645(uParam0->f_34))
				{
					if (unk_0x6475D37A1CED9761(uParam0->f_34))
					{
						if (unk_0x5AF66EDEBFA76B9B(uParam0->f_34) < 1f)
						{
							unk_0xE714A11BBA71908F(uParam0->f_34);
						}
					}
				}
				if (func_282(uParam0, 50, 0) && unk_0x889D01384B54BCE3(*uParam0, 20))
				{
					if (unk_0x889D01384B54BCE3(*uParam0, 21))
					{
						unk_0x495459882382D113("FM_INTRO_DRIVE_END");
						unk_0x29DB79DD4D939B38(uParam0, 21);
					}
					unk_0xE714A11BBA71908F(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
					{
						if (func_241(uParam0))
						{
							unk_0x574BF3D848332F6A(unk_0xA16EC202D9D35357(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x574BF3D848332F6A(unk_0xA16EC202D9D35357(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0xE44A580B551C3645(uParam0->f_35))
				{
					unk_0x574BF3D848332F6A(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0xE44A580B551C3645(uParam0->f_34))
				{
					unk_0x574BF3D848332F6A(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0xD0E2BFCE93AE3ABD(uParam0, 13);
				if (unk_0x4CBFDAD06D630F7C("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0x124843CE93F39C27("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0xEA4B8437C8E2CA24(4);
				func_232(1, 1, 1, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0xEC35DAD55FA4EEF2())
				{
					unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (unk_0x09560C7DE2A384BD() - uParam0->f_13);
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
						if (!unk_0x889D01384B54BCE3(*uParam0, 23))
						{
							if (unk_0xE06B94F2BD99223C("MP_Female_Character", 0))
							{
								if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
								{
									unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), unk_0x3C616B96B92181C5(Var1.f_0, Var1.f_1));
									unk_0x20D6E0EA145DF751(0);
									unk_0x60365B850FB7354F(0, 1065353216);
									unk_0xD0E2BFCE93AE3ABD(uParam0, 23);
								}
							}
						}
					}
					else if (!unk_0x889D01384B54BCE3(*uParam0, 23))
					{
						if (unk_0xE06B94F2BD99223C("MP_1", 0))
						{
							if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
							{
								unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), unk_0x3C616B96B92181C5(Var1.f_0, Var1.f_1));
								unk_0x20D6E0EA145DF751(0);
								unk_0x60365B850FB7354F(0, 1065353216);
								unk_0xD0E2BFCE93AE3ABD(uParam0, 23);
							}
						}
					}
				}
				if (unk_0xE06B94F2BD99223C("LAMAR", 0))
				{
					if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
					{
						if (!unk_0x2DE0B96E966FD817(uParam0->f_35))
						{
							if (!unk_0x202EF5D8203705EF(uParam0->f_35, 0))
							{
								unk_0xA34C986DDC3D92F1(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (unk_0xE06B94F2BD99223C("MP_Lamar_Car", 0))
				{
					if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
					{
						unk_0xAC894C93914464C2(uParam0->f_34);
					}
				}
				if (unk_0xE97661B388D4DA3B(0))
				{
					func_214(1);
					unk_0x20D6E0EA145DF751(0);
					unk_0x60365B850FB7354F(0, 1065353216);
				}
				if (!func_213(unk_0x1788E93557766241()))
				{
					func_212(1);
				}
				if (unk_0xEC35DAD55FA4EEF2())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x09560C7DE2A384BD() - (uParam0->f_30 + unk_0x7CA8D900E987DFB5()));
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
							if (unk_0x538DF9E5B1DF01EB(uParam0->f_36))
							{
								unk_0x51A89CCC8A5317D0(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					unk_0x7172D3D2AD530FD4();
					unk_0x87378FFD9C18F6B8();
					if (!unk_0xFBC54F55FB66B239())
					{
						unk_0x1EA63162D74B4324(0);
					}
					func_232(0, 1, 1, 0);
					unk_0x29DB79DD4D939B38(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0xEC35DAD55FA4EEF2())
				{
					unk_0x536B44EF8A82123A();
				}
				else if (!unk_0x889D01384B54BCE3(*uParam0, 17))
				{
					if (unk_0xF4C685E933068D23())
					{
						unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
						unk_0xD0E2BFCE93AE3ABD(uParam0, 13);
						unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), true);
						if (uParam0->f_292)
						{
							unk_0x162D800D610A60B8();
							unk_0x29DB79DD4D939B38(uParam0, 11);
						}
						func_178(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						unk_0xD0E2BFCE93AE3ABD(uParam0, 17);
					}
					else if (!unk_0xE9A5FF67266655B2())
					{
						unk_0x271524E4281048DC(250);
					}
				}
				else if (func_179(&(uParam0->f_17), 10000, 0))
				{
					if (func_210(uParam0))
					{
						func_277(uParam0);
						func_226(uParam0);
						if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
						{
							unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), false);
							if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
							{
								unk_0x6A23C3306A8CF21B(unk_0xA16EC202D9D35357(), true, 0);
								unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), 61.3164f);
							}
						}
						if (!unk_0x2DE0B96E966FD817(uParam0->f_35))
						{
							if (!unk_0x202EF5D8203705EF(uParam0->f_35, 0))
							{
								if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
								{
									unk_0xA34C986DDC3D92F1(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_214(1);
						if (!func_213(unk_0x1788E93557766241()))
						{
							func_212(1);
						}
						func_232(0, 1, 1, 0);
						unk_0x74B5BEE69AA4B3E9(0, 0, 0);
						if (unk_0x889D01384B54BCE3(*uParam0, 21))
						{
							unk_0x495459882382D113("FM_INTRO_DRIVE_END");
							unk_0x29DB79DD4D939B38(uParam0, 21);
						}
						unk_0xD0E2BFCE93AE3ABD(uParam0, 1);
						unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0xEC35DAD55FA4EEF2())
				{
					unk_0x536B44EF8A82123A();
				}
				else if (!unk_0x889D01384B54BCE3(*uParam0, 17))
				{
					if (unk_0xF4C685E933068D23())
					{
						unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
						unk_0xD0E2BFCE93AE3ABD(uParam0, 13);
						unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), true);
						if (uParam0->f_292)
						{
							unk_0x162D800D610A60B8();
							unk_0x29DB79DD4D939B38(uParam0, 11);
						}
						func_178(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						unk_0xD0E2BFCE93AE3ABD(uParam0, 17);
					}
					else if (!unk_0xE9A5FF67266655B2())
					{
						unk_0x271524E4281048DC(250);
					}
				}
				else if (func_179(&(uParam0->f_17), 10000, 0))
				{
					if (func_261(uParam0))
					{
						func_277(uParam0);
						func_226(uParam0);
						if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
						{
							unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), false);
							if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
							{
								unk_0x6A23C3306A8CF21B(unk_0xA16EC202D9D35357(), true, 0);
								unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), 61.3164f);
								if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
								{
									unk_0xA34C986DDC3D92F1(unk_0xA16EC202D9D35357(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!unk_0x2DE0B96E966FD817(uParam0->f_35))
						{
							if (!unk_0x202EF5D8203705EF(uParam0->f_35, 0))
							{
								if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
								{
									unk_0xA34C986DDC3D92F1(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_213(unk_0x1788E93557766241()))
						{
						}
						func_232(0, 1, 1, 0);
						if (unk_0x889D01384B54BCE3(*uParam0, 21))
						{
							unk_0x495459882382D113("FM_INTRO_DRIVE_END");
							unk_0x29DB79DD4D939B38(uParam0, 21);
						}
						unk_0x5FE2A83120E8127F(250);
						unk_0x74B5BEE69AA4B3E9(0, 0, 0);
						unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 3);
						uParam0->f_13 = (unk_0x09560C7DE2A384BD() - func_207(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_218(uParam0, 10177.75f);
						unk_0xD0E2BFCE93AE3ABD(uParam0, 15);
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
					unk_0x162D800D610A60B8();
					unk_0x29DB79DD4D939B38(uParam0, 11);
				}
				if (!unk_0x2DE0B96E966FD817(uParam0->f_35))
				{
					unk_0xA06765CC8C24CED7(uParam0->f_35, -1);
					unk_0x2686393074E14730(uParam0->f_35, 1);
				}
				unk_0x5EFEFC8C6AA1CB2E(1);
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
				uParam0->f_289 = unk_0xBBDA792448DB5A89((unk_0x09560C7DE2A384BD() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = unk_0xBBDA792448DB5A89(func_215(uParam0));
			}
			uParam0->f_290 = func_195(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && unk_0x889D01384B54BCE3(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				unk_0xA0426B655B18AF0D(uParam0->f_289);
			}
			else
			{
				unk_0xA0426B655B18AF0D(uParam0->f_290);
			}
		}
		func_192(uParam0);
		if (unk_0x889D01384B54BCE3(*uParam0, 12))
		{
			if (func_251())
			{
				func_191();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
				{
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), false, 60);
				}
			}
			func_189(uParam0);
			unk_0xFEAD2C330EC1D9AA();
			unk_0x8A5A9834DB717F2D(9);
			unk_0x8A5A9834DB717F2D(7);
			unk_0x8A5A9834DB717F2D(18);
			unk_0x8A5A9834DB717F2D(6);
			unk_0x8A5A9834DB717F2D(3);
			unk_0x8A5A9834DB717F2D(13);
			unk_0x8A5A9834DB717F2D(4);
		}
		if (Global_2446992.f_1694)
		{
			unk_0x7D98754083C1D605(2, 187, 1);
		}
	}
	return 0;
}

void func_189(var uParam0)
{
	var uVar0;
	
	if (!unk_0x889D01384B54BCE3(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!unk_0x31EF25060710376C())
			{
				if (!unk_0x1B0EC10E05C58A18())
				{
					uVar0 = unk_0x1788E93557766241() + 32;
					unk_0xB927E5BD5044F6F1(1, uVar0);
					func_190(1);
					unk_0xD0E2BFCE93AE3ABD(uParam0, 9);
				}
			}
			else
			{
				func_190(1);
				unk_0xD0E2BFCE93AE3ABD(uParam0, 9);
			}
		}
	}
}

void func_190(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 18))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 18);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 18))
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 18);
	}
}

void func_191()
{
	unk_0x27BDF28219C810BA(Global_1318702, 255, 255, 255, 255, 0);
	if (Global_1318704 == 0)
	{
		unk_0xB067107D878E9585(Global_1318702, "SET_BIG_LOGO_VISIBLE");
		unk_0x26221D1D76579618(1);
		unk_0xF34EF2C628F5B47B(1);
		unk_0xD3DF251F2DF3B257();
		Global_1318704 = 1;
	}
}

void func_192(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_58[uParam0->f_90]))
	{
		if (unk_0xE44A580B551C3645(uParam0->f_58[uParam0->f_90]))
		{
		}
		Var0 = { unk_0xBF8499F46AD9093A(uParam0->f_58[uParam0->f_90], 1) };
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
	
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_58[iParam1]))
	{
		if (unk_0xE44A580B551C3645(uParam0->f_58[iParam1]))
		{
		}
		func_194(iParam1, &Var0, &fVar3);
		unk_0x6C43BF7625967266(uParam0->f_58[iParam1], Var0, 1, 0, 0, 1);
		unk_0x34639238667C4381(uParam0->f_58[iParam1], fVar3);
		unk_0x3CC3106305C40A28(uParam0->f_58[iParam1], true);
		unk_0x9350E8544DFB199B(uParam0->f_58[iParam1]);
		unk_0x6A23C3306A8CF21B(uParam0->f_58[iParam1], false, 0);
		unk_0x423D1EBE54B18555(uParam0->f_58[iParam1], false);
	}
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_74[iParam1]))
	{
		if (unk_0xE44A580B551C3645(uParam0->f_74[iParam1]))
		{
		}
		unk_0x423D1EBE54B18555(uParam0->f_74[iParam1], false);
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
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0x7CA8D900E987DFB5()));
			if (unk_0x7B3B1BE0918A85C4() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / unk_0xBBDA792448DB5A89(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0x7CA8D900E987DFB5()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_196(var uParam0)
{
	if (unk_0x889D01384B54BCE3(*uParam0, 29))
	{
		unk_0x7C594B87621795CD(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		unk_0x7C594B87621795CD(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_197(var uParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x889D01384B54BCE3(*uParam0, 0))
	{
		if (unk_0xEC35DAD55FA4EEF2())
		{
			unk_0x1EA63162D74B4324(0);
		}
		unk_0x471A08531DD2B5A0(0);
		if (uParam0->f_292)
		{
			unk_0x543FF27BE43FC311(0);
			unk_0x162D800D610A60B8();
			unk_0x29DB79DD4D939B38(uParam0, 11);
		}
		if (unk_0x889D01384B54BCE3(*uParam0, 14))
		{
			unk_0x2D78CBCC9150BF79();
			unk_0x29DB79DD4D939B38(uParam0, 14);
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
		unk_0x8C4265EEC0D6FD1A();
		if (bParam2)
		{
			if (unk_0x538DF9E5B1DF01EB(uParam0->f_34))
			{
				unk_0x3A3C5A6572B3C611(&(uParam0->f_34));
			}
			if (unk_0x538DF9E5B1DF01EB(uParam0->f_35))
			{
				unk_0x6B3DDEE91652BE59(&(uParam0->f_35));
			}
		}
		if (unk_0x538DF9E5B1DF01EB(uParam0->f_36))
		{
			unk_0x51A89CCC8A5317D0(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			func_358(0);
		}
		func_203();
		func_198();
		func_232(0, 1, 1, 0);
		unk_0xE160463F782E4C83(0, -1);
		unk_0x435923F2389CD0AD(1);
		if (unk_0x1DAD7CE53BEE7710())
		{
			if (unk_0xBDA58D5914C57881())
			{
				unk_0x111BB4A7273397DD(0, 1);
			}
		}
		if (unk_0x889D01384B54BCE3(*uParam0, 21))
		{
			unk_0x495459882382D113("FM_INTRO_DRIVE_END");
			unk_0x29DB79DD4D939B38(uParam0, 21);
		}
		unk_0x2C1702F89B3C9179(0);
		func_321(1);
		if (unk_0x889D01384B54BCE3(*uParam0, 26))
		{
			func_315(1, 0);
			unk_0x29DB79DD4D939B38(uParam0, 26);
		}
		Global_2422491.f_3126 = 0;
		if (!unk_0xB4B5BF5882A555F9())
		{
			unk_0x7F22F64B3B82715F(0);
		}
		unk_0x4FB2D19B4D370969(1);
		if (bParam1)
		{
		}
		func_175(0);
		func_187(1);
		Global_2446992.f_1694 = 0;
		Global_2446992.f_1693 = 0;
		if (unk_0x4CBFDAD06D630F7C("MP_INTRO_RACE_SCENE"))
		{
			unk_0x124843CE93F39C27("MP_INTRO_RACE_SCENE");
		}
		if (unk_0x4CBFDAD06D630F7C("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0x124843CE93F39C27("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_298(14, 1);
		unk_0xCC68D69AF0F39112(5);
		unk_0x6B7EEC4822875983("CONTRAILS", 0);
		unk_0xA0B5A2A31FD758CC(5, "FMINTRO");
		unk_0xA0B5A2A31FD758CC(6, "FMINTRO");
		unk_0xA0B5A2A31FD758CC(7, "FMINTRO");
		unk_0xB845ECB6BD2996BD("mp_intro_seq@");
		unk_0xB845ECB6BD2996BD("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0xB845ECB6BD2996BD("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0xB845ECB6BD2996BD("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0x5660C8AFDD9C1721(unk_0x8D619EEDE8B83C4F()))
		{
			unk_0xBE97A5A41C1F5C4C(unk_0x8D619EEDE8B83C4F(), 0.7f);
		}
		unk_0xB85E61CA47A3FCFA(0);
		unk_0x20D6E0EA145DF751(0);
		unk_0x60365B850FB7354F(0, 1065353216);
		if (unk_0x1DAD7CE53BEE7710())
		{
			unk_0x2107A8F4DF8377BA();
			unk_0x5EFEFC8C6AA1CB2E(1);
		}
		unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 0);
		unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), false);
		if (!unk_0x83B393DE31BAC8F0() && !unk_0x0FFB470AFBDA3DCD())
		{
			unk_0x5FE2A83120E8127F(800);
		}
		unk_0xD0E2BFCE93AE3ABD(uParam0, 0);
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
			unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
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
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
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
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
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
	unk_0xC116CE577D8DDF3C(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	unk_0xC116CE577D8DDF3C(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
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
	unk_0x939DA7EBCC6588FF(iVar0);
	unk_0x939DA7EBCC6588FF(iVar1);
	if (unk_0x5494F37F35C1D7D7(iVar0) && unk_0x5494F37F35C1D7D7(iVar1))
	{
		if (!unk_0x538DF9E5B1DF01EB(uParam0->f_34))
		{
			uParam0->f_34 = unk_0x9BB6F54E415071A1(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0);
			unk_0x37A3926529CA6459(uParam0->f_34, 1);
			unk_0xBAE0E085DFB45D18(uParam0->f_34, 0);
			unk_0x67565210B706E956(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			unk_0x1143B1E42EAAE947(uParam0->f_34, 2);
		}
		else if (!unk_0x538DF9E5B1DF01EB(uParam0->f_35))
		{
			if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0x6F9DE0DE8363ADF1(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, 0);
				unk_0x2C4E82CF88213975(uParam0->f_35, 1);
				unk_0xE31C4C317516E7A7(uParam0->f_34, 1);
				unk_0xE31C4C317516E7A7(uParam0->f_35, 1);
				unk_0xA9465591B42213AE(uParam0->f_35, unk_0x2C741960D7BA6D23(unk_0xA16EC202D9D35357()));
				unk_0x67565210B706E956(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0x538DF9E5B1DF01EB(uParam0->f_34) || !unk_0x538DF9E5B1DF01EB(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_211(var uParam0, int iParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_58[iParam1]))
	{
		unk_0x2F2948A2506AA404(&(uParam0->f_58[iParam1]));
	}
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_74[iParam1]))
	{
		unk_0x51A89CCC8A5317D0(&(uParam0->f_74[iParam1]));
	}
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 22);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128), 22);
	}
}

bool func_213(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_128, 22);
}

void func_214(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 4);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 4);
	}
}

int func_215(var uParam0)
{
	if (uParam0->f_6 < 31)
	{
		return unk_0x4BCE624CFBBB5AC1();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + unk_0x7CA8D900E987DFB5());
	}
	return (uParam0->f_28 + unk_0x4BCE624CFBBB5AC1());
}

void func_216(var uParam0, float fParam1)
{
	func_217(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_217(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0xECFECDAD51A6184F(uParam0, 0))
	{
		if (bParam4)
		{
			unk_0xE714A11BBA71908F(uParam0);
			unk_0x7278B2F5A4AF38A7(uParam0, iParam1, sParam2, 1);
		}
		else if (!unk_0x6475D37A1CED9761(uParam0))
		{
			unk_0x7278B2F5A4AF38A7(uParam0, iParam1, sParam2, 1);
			unk_0xD3A8C59CA2F72FB1(uParam0, 1);
		}
		else
		{
			iVar0 = unk_0x2557EE7A679BCFA9(iParam1, sParam2);
			if (unk_0xA8908B618EED09ED(uParam0) != iVar0)
			{
				unk_0x7278B2F5A4AF38A7(uParam0, iParam1, sParam2, 1);
				unk_0xD3A8C59CA2F72FB1(uParam0, 1);
			}
		}
		unk_0x4A94E9823FACFC05(uParam0, (fParam3 - unk_0xE9FFDE40B6BC6341(uParam0)));
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
		iVar0 = unk_0xB793F1A0B6CC4AE1("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0x46C6225A57CA6969(iVar1))
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
		if (unk_0x538DF9E5B1DF01EB(uParam0->f_37[iVar0]))
		{
			unk_0x51A89CCC8A5317D0(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0xEA054561294AEC10(joaat("g_m_y_mexgoon_02"));
	unk_0xB845ECB6BD2996BD("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0xB845ECB6BD2996BD("amb@world_human_hang_out_street@male_a@base");
}

int func_221(var uParam0)
{
	int iVar0;
	
	if (unk_0x889D01384B54BCE3(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0x939DA7EBCC6588FF(joaat("g_m_y_mexgoon_02"));
		unk_0x3D28909AF30D70F4("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x3D28909AF30D70F4("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0x5494F37F35C1D7D7(joaat("g_m_y_mexgoon_02")) && unk_0x6C47E32491756A1A("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0x6C47E32491756A1A("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0x538DF9E5B1DF01EB(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = unk_0x6F9DE0DE8363ADF1(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, 0);
					unk_0xE31C4C317516E7A7(uParam0->f_37[iVar0], 1);
					unk_0x2C4E82CF88213975(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							unk_0xDD107997C480601E(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							unk_0xDD107997C480601E(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							unk_0xDD107997C480601E(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							unk_0xDD107997C480601E(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							unk_0xDD107997C480601E(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							unk_0x6C43BF7625967266(uParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							unk_0x34639238667C4381(uParam0->f_37[iVar0], 76.8852f);
							unk_0x39272B2594E03395(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0x3CC3106305C40A28(uParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0xDD107997C480601E(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							unk_0x6C43BF7625967266(uParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							unk_0x34639238667C4381(uParam0->f_37[iVar0], 87.5786f);
							unk_0x39272B2594E03395(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0x3CC3106305C40A28(uParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0xDD107997C480601E(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							unk_0xDD107997C480601E(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0x538DF9E5B1DF01EB(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0xEA054561294AEC10(joaat("g_m_y_mexgoon_02"));
		unk_0xB845ECB6BD2996BD("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0xB845ECB6BD2996BD("amb@world_human_hang_out_street@male_a@base");
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 5);
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
	
	if (!unk_0x889D01384B54BCE3(*uParam0, 25))
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
			if (!unk_0x2DE0B96E966FD817(uParam0->f_98[iVar0]) && unk_0xECFECDAD51A6184F(uParam0->f_92[iVar0], 0))
			{
				unk_0x3CC3106305C40A28(uParam0->f_92[iVar0], false);
				unk_0x213AEEC6A495123F(uParam0->f_92[iVar0], 10f);
				unk_0x9909D1FE2BA25A9B(uParam0->f_98[iVar0], uParam0->f_92[iVar0], Var1, 5f, 0, unk_0xA609E58449080951(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0xD0E2BFCE93AE3ABD(uParam0, 25);
	}
}

int func_224(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (unk_0x889D01384B54BCE3(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = joaat("shamal");
	unk_0x939DA7EBCC6588FF(iVar5);
	unk_0x939DA7EBCC6588FF(func_225());
	if (unk_0x5494F37F35C1D7D7(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x538DF9E5B1DF01EB(uParam0->f_92[iVar0]))
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
				uParam0->f_92[iVar0] = unk_0x9BB6F54E415071A1(iVar5, Var1, fVar4, 0, 0);
				unk_0xAC894C93914464C2(uParam0->f_92[iVar0]);
				unk_0x3CC3106305C40A28(uParam0->f_92[iVar0], true);
				unk_0x1143B1E42EAAE947(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0x538DF9E5B1DF01EB(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0x5494F37F35C1D7D7(func_225()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x538DF9E5B1DF01EB(uParam0->f_98[iVar0]))
			{
				if (unk_0x538DF9E5B1DF01EB(uParam0->f_92[iVar0]))
				{
					if (unk_0xECFECDAD51A6184F(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = unk_0x793482A351850A4F(uParam0->f_92[iVar0], 4, func_225(), -1, 0, false);
						unk_0x2C4E82CF88213975(uParam0->f_98[iVar0], 1);
						unk_0x6EBB9B0E214CCF0F(uParam0->f_92[iVar0], 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0xEA054561294AEC10(iVar5);
	unk_0xEA054561294AEC10(func_225());
	unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 11);
	return 1;
}

int func_225()
{
	return unk_0xA609E58449080951(unk_0xA16EC202D9D35357());
}

void func_226(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x538DF9E5B1DF01EB(uParam0->f_92[iVar0]))
		{
			unk_0x2F2948A2506AA404(&(uParam0->f_92[iVar0]));
		}
		if (unk_0x538DF9E5B1DF01EB(uParam0->f_98[iVar0]))
		{
			unk_0x51A89CCC8A5317D0(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0xEA054561294AEC10(joaat("shamal"));
	unk_0xEA054561294AEC10(func_225());
}

void func_227(var uParam0)
{
	int iVar0;
	
	if (unk_0x889D01384B54BCE3(uParam0->f_3, 2))
	{
		unk_0xEA054561294AEC10(joaat("p_cs_mp_jet_01_s"));
		if (unk_0x538DF9E5B1DF01EB(uParam0->f_33))
		{
			unk_0xD4C90F16EBBFE620(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (unk_0xC9C004EF71A36FBC(uParam0->f_120))
			{
				unk_0xE104D635B785BA8F(uParam0->f_120, 0);
			}
			if (unk_0xC9C004EF71A36FBC(uParam0->f_121))
			{
				unk_0xE104D635B785BA8F(uParam0->f_121, 0);
			}
			if (unk_0xEA01082BB3EA9C37())
			{
				unk_0x465D89CA94CBF67D();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0x538DF9E5B1DF01EB(uParam0->f_104[iVar0]))
			{
				unk_0x51A89CCC8A5317D0(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0x29DB79DD4D939B38(&(uParam0->f_3), 2);
	}
}

int func_228(var uParam0)
{
	if (func_241(uParam0))
	{
		unk_0x3D28909AF30D70F4("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x3D28909AF30D70F4("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x6C47E32491756A1A("mp_intro_seq@ig_1_lamar_drive_female") && unk_0x6C47E32491756A1A("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0x3D28909AF30D70F4("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0x3D28909AF30D70F4("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x6C47E32491756A1A("mp_intro_seq@ig_1_lamar_drive_male") && unk_0x6C47E32491756A1A("mp_intro_seq@ig_1_lamar_drive_radio"))
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
	if (!unk_0x889D01384B54BCE3(uParam0->f_3, 10))
	{
		unk_0x939DA7EBCC6588FF(iVar0);
		if (unk_0x5494F37F35C1D7D7(iVar0))
		{
			if (!unk_0x538DF9E5B1DF01EB(uParam0->f_36))
			{
				uParam0->f_36 = unk_0x6F9DE0DE8363ADF1(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, 0);
				unk_0x2C4E82CF88213975(uParam0->f_36, 1);
				unk_0xE31C4C317516E7A7(uParam0->f_36, 1);
				unk_0x423D1EBE54B18555(uParam0->f_36, false);
				unk_0xA9465591B42213AE(uParam0->f_36, unk_0x2C741960D7BA6D23(unk_0xA16EC202D9D35357()));
				unk_0x67565210B706E956(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				func_359(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0x538DF9E5B1DF01EB(uParam0->f_36))
		{
			return 0;
		}
		unk_0xEA054561294AEC10(iVar0);
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 10);
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
	
	unk_0xEA054561294AEC10(func_244());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_245(uParam0, iVar0);
		iVar0++;
	}
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_91))
	{
		unk_0x51A89CCC8A5317D0(&(uParam0->f_91));
	}
}

void func_232(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x31F1896E6453B935(unk_0x1788E93557766241());
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 1);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 1);
		func_238(1);
		unk_0xB0F2C1CA020DA7DA();
		unk_0xADD1FEC2646B4ECF();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xBE029393332523D7())
			{
				unk_0x0D68C13151B68364(0);
			}
			if (!func_147())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_237(1, iParam3, iParam2);
		Global_54764 = 1;
		Global_67069 = 1;
		Global_68323 = 1;
	}
	else
	{
		func_238(0);
		unk_0x5C6ECA43D8ACED5D();
		Global_54764 = 0;
		if (bParam1)
		{
			unk_0xAB5770BCC9EDAC2C();
		}
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 0);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 0);
		func_237(0, iParam3, iParam2);
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && !func_233(unk_0x1788E93557766241()))
		{
			unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 0);
		}
		Global_68323 = 0;
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
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_234()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

bool func_235(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_236(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
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
	if (Global_1315869[iVar1] == 1)
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

int func_237(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x24547C720F3E6709() != iParam0 && uParam2)
		{
			unk_0x3EA9937AF099576F(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_238(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 13);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 13);
	}
}

void func_239(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0xE44A580B551C3645(uParam0->f_104[iVar0]))
		{
			unk_0xEDD99DCB19EC7C49(uParam0->f_104[iVar0]);
			unk_0x574BF3D848332F6A(uParam0->f_104[iVar0], func_240(iVar0), 0, 0, 64);
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
	return func_243(unk_0x1788E93557766241());
}

int func_243(int iParam0)
{
	if (unk_0xA609E58449080951(unk_0xFF34D923BFB5E9FB(iParam0)) == joaat("mp_f_freemode_01"))
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
	unk_0xEA054561294AEC10(func_246(iParam1));
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_49[iParam1]))
	{
		if (unk_0xECFECDAD51A6184F(uParam0->f_49[iParam1], 0))
		{
		}
		unk_0x8011B614CFD1CC74(uParam0->f_49[iParam1]);
		unk_0x2F2948A2506AA404(&(uParam0->f_49[iParam1]));
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
	Global_1318704 = 0;
	if (unk_0xC8378A96673BCC40(Global_1318702))
	{
		unk_0xB067107D878E9585(Global_1318702, "SET_BIG_LOGO_VISIBLE");
		unk_0x26221D1D76579618(1);
		unk_0xF34EF2C628F5B47B(0);
		unk_0xD3DF251F2DF3B257();
		unk_0x7559DFAB61B017F2(&Global_1318702);
	}
}

void func_248(var uParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0x538DF9E5B1DF01EB(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			unk_0xD5FE44FF1732DF73(&uVar0);
		}
		if (unk_0x538DF9E5B1DF01EB(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			unk_0xD5FE44FF1732DF73(&uVar0);
		}
		iVar1++;
	}
	unk_0xEA054561294AEC10(joaat("cheetah"));
	unk_0xEA054561294AEC10(joaat("monroe"));
	unk_0xEA054561294AEC10(joaat("entityxf"));
	unk_0xEA054561294AEC10(joaat("feltzer2"));
	unk_0xA0B5A2A31FD758CC(100, "FM_Intro_uber");
	unk_0xA0B5A2A31FD758CC(101, "FM_Intro_uber");
	unk_0xA0B5A2A31FD758CC(102, "FM_Intro_uber");
	unk_0xA0B5A2A31FD758CC(103, "FM_Intro_uber");
	unk_0xA0B5A2A31FD758CC(104, "FM_Intro_uber");
	unk_0xB845ECB6BD2996BD("mp_intro_seq@");
}

void func_249(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_49[2]))
	{
		if (unk_0xECFECDAD51A6184F(uParam0->f_49[2], 0))
		{
			unk_0x55BDACDFE3F7BE6D(uParam0->f_49[2]);
		}
	}
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_49[4]))
	{
		if (unk_0xECFECDAD51A6184F(uParam0->f_49[4], 0))
		{
			unk_0x55BDACDFE3F7BE6D(uParam0->f_49[4]);
		}
	}
}

void func_250(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_49[2]))
	{
		if (unk_0xECFECDAD51A6184F(uParam0->f_49[2], 0))
		{
			unk_0x77220A18AB2A489D(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_251()
{
	if (unk_0x483AFCB525654BFC())
	{
		return 0;
	}
	if (!unk_0xC8378A96673BCC40(Global_1318702))
	{
		Global_1318702 = unk_0x36ECDA4DD9A3F08D("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_252(var uParam0, char* sParam1, char* sParam2, var uParam3, struct<3> Param4, struct<3> Param7)
{
	if (unk_0x538DF9E5B1DF01EB(uParam3))
	{
		if (unk_0xE44A580B551C3645(uParam3))
		{
		}
		if (!unk_0xBAB691F99A2A7346(uParam0->f_8))
		{
			uParam0->f_8 = unk_0xC45922BBDAA0638F("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = unk_0x7D9AB6E493591276(Param4, Param7, 2);
		unk_0x65AD48D7B4CEA391(uParam0->f_9, uParam3, 0);
		unk_0xC2A228A4CCC7B3B0(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		unk_0xC8CEF95C63B283EC(uParam0->f_8, 1);
		unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 1, 0);
	}
}

void func_253(var uParam0)
{
	if (!unk_0x889D01384B54BCE3(uParam0->f_3, 3))
	{
		unk_0x69723D1DAAE90D7F("CONTRAILS");
		if (func_241(uParam0))
		{
			unk_0xF0B0E3CDFDE57E49("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0xF0B0E3CDFDE57E49("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0x5EA36FD8E318DCED())
		{
			if (uParam0->f_295)
			{
				if (func_241(uParam0))
				{
					unk_0x8AF482A10ABC5CE0("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0x8AF482A10ABC5CE0("MP_Male_Character", 0, 1);
				}
			}
			func_254();
		}
		if (unk_0x74F469BC7D5F3A5D())
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 3);
		}
	}
}

void func_254()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0x8AF482A10ABC5CE0(func_240(iVar0), 0, 1);
		iVar0++;
	}
}

int func_255(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!unk_0x889D01384B54BCE3(uParam0->f_3, 2))
	{
		unk_0x939DA7EBCC6588FF(joaat("p_cs_mp_jet_01_s"));
		unk_0x939DA7EBCC6588FF(joaat("mp_m_freemode_01"));
		unk_0x939DA7EBCC6588FF(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			unk_0xE8C49E8D4B533F7D();
		}
		if (((unk_0x5494F37F35C1D7D7(joaat("p_cs_mp_jet_01_s")) && unk_0x5494F37F35C1D7D7(joaat("mp_m_freemode_01"))) && unk_0x5494F37F35C1D7D7(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || unk_0xEA01082BB3EA9C37()))
		{
			uParam0->f_33 = unk_0x8AC4394F3C9173EE(joaat("p_cs_mp_jet_01_s"), Var1, 0, 0, 0);
			unk_0x4BE0FD78EDE6DDE2(uParam0->f_33, 3000);
			unk_0x940C6B8BF42B190B(uParam0->f_33, 0);
			unk_0x423D1EBE54B18555(uParam0->f_33, false);
			if (uParam0->f_294)
			{
				uParam0->f_120 = unk_0xA61A77F0B90645BB("scr_mp_intro_plane_exhaust", uParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = unk_0xA61A77F0B90645BB("scr_mp_intro_plane_exhaust", uParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
					uParam0->f_104[iVar0] = unk_0x6F9DE0DE8363ADF1(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = unk_0x6F9DE0DE8363ADF1(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				if (func_257(uParam0, iVar0))
				{
					if (!unk_0xE44A580B551C3645(unk_0xFF34D923BFB5E9FB(unk_0x42C0B50857BF923B(uParam0->f_112[iVar0]))))
					{
					}
					unk_0x6A40D5383E4B1D9D(unk_0xFF34D923BFB5E9FB(unk_0x42C0B50857BF923B(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					unk_0xEDD99DCB19EC7C49(uParam0->f_104[iVar0]);
				}
				else
				{
					func_256(uParam0, iVar0);
				}
				iVar0++;
			}
			unk_0xEA054561294AEC10(joaat("p_cs_mp_jet_01_s"));
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 2);
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
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 1);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 2);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 3);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 4);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 5);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 6);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 7);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 1);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 2);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 3);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 4);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 5);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 6);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 7);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 1);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 2);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 3);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 4);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 5);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 6);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 7);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 1);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 2);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 3);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 4);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 5);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 6);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 7);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 1);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 2);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 3);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 4);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 5);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 6);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 7);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 1);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 2);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 3);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 4);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 5);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 6);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 7);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 0);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 1);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 2);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 3);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 4);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 5);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 6);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 7);
			unk_0x0DA93A4A4E57A0AC(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_257(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_12(unk_0x42C0B50857BF923B(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, int iParam1)
{
	if (func_257(uParam0, iParam1))
	{
		return func_243(unk_0x42C0B50857BF923B(uParam0->f_112[iParam1]));
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
		iVar2 = unk_0x42C0B50857BF923B(iVar1);
		if (func_12(iVar2, 0, 1))
		{
			if (unk_0x1788E93557766241() != iVar2)
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
	if (unk_0x889D01384B54BCE3(uParam0->f_3, 9))
	{
		return 1;
	}
	unk_0x939DA7EBCC6588FF(iVar0);
	unk_0x939DA7EBCC6588FF(iVar1);
	unk_0xDF529DC50AE6BC93(5, "FMINTRO");
	unk_0xDF529DC50AE6BC93(6, "FMINTRO");
	unk_0xDF529DC50AE6BC93(7, "FMINTRO");
	unk_0x3D28909AF30D70F4("mp_intro_seq@");
	if (((((unk_0x5494F37F35C1D7D7(iVar0) && unk_0x5494F37F35C1D7D7(iVar1)) && unk_0x0C73411A25059A28(5, "FMINTRO")) && unk_0x0C73411A25059A28(6, "FMINTRO")) && unk_0x0C73411A25059A28(7, "FMINTRO")) && unk_0x6C47E32491756A1A("mp_intro_seq@"))
	{
		if (!unk_0x538DF9E5B1DF01EB(uParam0->f_34))
		{
			unk_0x84710FE7666EBF7B(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = unk_0x9BB6F54E415071A1(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0);
			unk_0x37A3926529CA6459(uParam0->f_34, 1);
			unk_0xBAE0E085DFB45D18(uParam0->f_34, 0);
			unk_0x67565210B706E956(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!unk_0x538DF9E5B1DF01EB(uParam0->f_35))
		{
			if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0x6F9DE0DE8363ADF1(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, 0);
				unk_0xA34C986DDC3D92F1(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
				unk_0x2C4E82CF88213975(uParam0->f_35, 1);
				unk_0xE31C4C317516E7A7(uParam0->f_34, 1);
				unk_0xE31C4C317516E7A7(uParam0->f_35, 1);
				unk_0xA9465591B42213AE(uParam0->f_35, unk_0x2C741960D7BA6D23(unk_0xA16EC202D9D35357()));
				unk_0x67565210B706E956(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0x538DF9E5B1DF01EB(uParam0->f_34) || !unk_0x538DF9E5B1DF01EB(uParam0->f_35))
	{
		return 0;
	}
	unk_0xEA054561294AEC10(iVar0);
	unk_0xEA054561294AEC10(iVar1);
	unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 9);
	return 1;
}

void func_262(var uParam0)
{
	int iVar0;
	
	if (!unk_0x889D01384B54BCE3(uParam0->f_3, 0))
	{
		func_272();
		func_270();
		if (func_264(uParam0))
		{
			if (func_263(uParam0))
			{
				if (!unk_0xBAB691F99A2A7346(uParam0->f_7))
				{
					uParam0->f_7 = unk_0xC45922BBDAA0638F("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				unk_0x73448A1FA24E23FE(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0xEA054561294AEC10(func_246(iVar0));
					iVar0++;
				}
				unk_0xEA054561294AEC10(func_244());
				unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 0);
			}
		}
	}
}

int func_263(var uParam0)
{
	int iVar0;
	
	iVar0 = func_244();
	if (!unk_0x538DF9E5B1DF01EB(uParam0->f_91))
	{
		if (unk_0x538DF9E5B1DF01EB(uParam0->f_49[2]))
		{
			if (unk_0x46C6225A57CA6969(iVar0))
			{
				if (unk_0x5494F37F35C1D7D7(iVar0))
				{
					if (unk_0x6C47E32491756A1A("MP_INTRO_SEQ@"))
					{
						if (!unk_0xE44A580B551C3645(uParam0->f_49[2]))
						{
							uParam0->f_10 = unk_0x7D9AB6E493591276(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x65AD48D7B4CEA391(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0x6F9DE0DE8363ADF1(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, 0);
							unk_0x2C4E82CF88213975(uParam0->f_91, 1);
							unk_0x10D8E64E13BD715C(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							unk_0x3E26976B7A367C36(uParam0->f_10, 1);
							unk_0x3CC3106305C40A28(uParam0->f_91, true);
							unk_0x6A23C3306A8CF21B(uParam0->f_91, false, 0);
							unk_0x3E3552EF770E2B2A(uParam0->f_91, joaat("gadget_parachute"));
							unk_0x42544C0CC4949BD5(uParam0->f_91, 0, 1, 1, 0);
							unk_0x42544C0CC4949BD5(uParam0->f_91, 1, 0, 0, 0);
							unk_0x42544C0CC4949BD5(uParam0->f_91, 2, 0, 2, 0);
							unk_0x42544C0CC4949BD5(uParam0->f_91, 3, 0, 2, 0);
							unk_0x42544C0CC4949BD5(uParam0->f_91, 4, 1, 0, 0);
							unk_0x42544C0CC4949BD5(uParam0->f_91, 5, 0, 0, 0);
							unk_0x42544C0CC4949BD5(uParam0->f_91, 6, 0, 0, 0);
							unk_0x42544C0CC4949BD5(uParam0->f_91, 7, 0, 0, 0);
							unk_0x42544C0CC4949BD5(uParam0->f_91, 8, 0, 0, 0);
							unk_0x42544C0CC4949BD5(uParam0->f_91, 9, 0, 0, 0);
							unk_0x42544C0CC4949BD5(uParam0->f_91, 10, 0, 0, 0);
							unk_0x42544C0CC4949BD5(uParam0->f_91, 11, 0, 0, 0);
							unk_0x0DA93A4A4E57A0AC(uParam0->f_91, 0);
							unk_0x0DA93A4A4E57A0AC(uParam0->f_91, 1);
							unk_0x0DA93A4A4E57A0AC(uParam0->f_91, 2);
							unk_0x0DA93A4A4E57A0AC(uParam0->f_91, 3);
							unk_0x0DA93A4A4E57A0AC(uParam0->f_91, 4);
							unk_0x0DA93A4A4E57A0AC(uParam0->f_91, 5);
							unk_0x0DA93A4A4E57A0AC(uParam0->f_91, 6);
							unk_0x0DA93A4A4E57A0AC(uParam0->f_91, 7);
							unk_0x0DA93A4A4E57A0AC(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!unk_0x538DF9E5B1DF01EB(uParam0->f_91))
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
	
	if (!unk_0x889D01384B54BCE3(uParam0->f_2, 31))
	{
		func_272();
		iVar5 = 0;
		while (iVar5 < 8)
		{
			func_269(iVar5, &Var1, &fVar4);
			if (!func_268(Var1, 0f, 0f, 0f, 0))
			{
				if (!unk_0x538DF9E5B1DF01EB(uParam0->f_49[iVar5]))
				{
					iVar0 = func_246(iVar5);
					if (unk_0x46C6225A57CA6969(iVar0))
					{
						if (unk_0x5494F37F35C1D7D7(iVar0))
						{
							uParam0->f_49[iVar5] = unk_0x9BB6F54E415071A1(iVar0, Var1, fVar4, 0, 0);
							unk_0x940C6B8BF42B190B(uParam0->f_49[iVar5], 1);
							unk_0xD826AAC32D2F161D(uParam0->f_49[iVar5], 0f);
							unk_0x3984DED2762CADC3(uParam0->f_49[iVar5], 0);
							if (iVar5 == 2)
							{
								unk_0x38A205E419E42642(uParam0->f_49[iVar5], 4, 0, 1);
								unk_0x77220A18AB2A489D(uParam0->f_49[iVar5], 4, 0, 1f);
							}
							func_267(uParam0, iVar5);
							func_266(uParam0, iVar5);
							unk_0xEA054561294AEC10(iVar0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 8)
		{
			if (!unk_0x538DF9E5B1DF01EB(uParam0->f_49[iVar5]))
			{
				return 0;
			}
			if (!unk_0x889D01384B54BCE3(uParam0->f_2, iVar5))
			{
				if (func_265(uParam0, iVar5))
				{
					unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_2), iVar5);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xECFECDAD51A6184F(uParam0->f_49[iVar5], 0))
			{
				if (!unk_0xBA9E9EDFF7D77B86(uParam0->f_49[iVar5]))
				{
					return 0;
				}
			}
			iVar5++;
		}
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_265(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0xECFECDAD51A6184F(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x1496C675F4DE04ED(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 0, 1, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 2, 1, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 3, 1, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 5, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 7, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 10, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 14, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 15, 4, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xECFECDAD51A6184F(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x1496C675F4DE04ED(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0xE78BBCD9C6B5C963(uParam0->f_49[iParam1], 22, 1);
					unk_0xB4226393A1696ACE(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0xECFECDAD51A6184F(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x1496C675F4DE04ED(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 4, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 14, 5, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0xE78BBCD9C6B5C963(uParam0->f_49[iParam1], 22, 1);
					unk_0xB4226393A1696ACE(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0xECFECDAD51A6184F(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x1496C675F4DE04ED(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 23, 11, 0);
					unk_0xE78BBCD9C6B5C963(uParam0->f_49[iParam1], 22, 1);
					unk_0xB4226393A1696ACE(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xECFECDAD51A6184F(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x1496C675F4DE04ED(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 7, 1, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 11, 3, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 12, 2, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 13, 2, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 16, 4, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0xE78BBCD9C6B5C963(uParam0->f_49[iParam1], 22, 1);
					unk_0xB4226393A1696ACE(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0xECFECDAD51A6184F(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x1496C675F4DE04ED(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 3, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 6, 2, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 10, 3, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 15, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0xE78BBCD9C6B5C963(uParam0->f_49[iParam1], 22, 1);
					unk_0xB4226393A1696ACE(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0xECFECDAD51A6184F(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x1496C675F4DE04ED(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 1, 1, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 8, 0, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x85AB5576B5457AED(uParam0->f_49[iParam1], 23, 0, 0);
					unk_0xE78BBCD9C6B5C963(uParam0->f_49[iParam1], 22, 1);
					unk_0xB4226393A1696ACE(uParam0->f_49[iParam1], 0);
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
			unk_0x975833792D47DC73(uParam0->f_49[iParam1], 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 0, 1);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 1, 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 2, 1);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 3, 1);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 4, 1);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 5, 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 7, 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 10, 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0x975833792D47DC73(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0x975833792D47DC73(uParam0->f_49[iParam1], 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 0, 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0x975833792D47DC73(uParam0->f_49[iParam1], 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0x975833792D47DC73(uParam0->f_49[iParam1], 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 1, 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 2, 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 4, 1);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 7, 1);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0x975833792D47DC73(uParam0->f_49[iParam1], 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 0, 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 1, 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 2, 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 3, 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 4, 1);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 6, 2);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 10, 3);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0x975833792D47DC73(uParam0->f_49[iParam1], 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 1, 1);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 4, 1);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 8, 0);
			unk_0xFB9C239E9BDEFA87(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_267(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xEEE37CF92B9966DA(uParam0->f_49[iParam1], 83, 134);
			unk_0x780A5DADA769490D(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0xEEE37CF92B9966DA(uParam0->f_49[iParam1], 0, 0);
			unk_0x780A5DADA769490D(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0xEEE37CF92B9966DA(uParam0->f_49[iParam1], 49, 0);
			unk_0x780A5DADA769490D(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0xEEE37CF92B9966DA(uParam0->f_49[iParam1], 0, 0);
			unk_0x780A5DADA769490D(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0xEEE37CF92B9966DA(uParam0->f_49[iParam1], 43, 5);
			unk_0x780A5DADA769490D(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0xEEE37CF92B9966DA(uParam0->f_49[iParam1], 3, 3);
			unk_0x780A5DADA769490D(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0xEEE37CF92B9966DA(uParam0->f_49[iParam1], 35, 0);
			unk_0x780A5DADA769490D(uParam0->f_49[iParam1], 0, 156);
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
	unk_0x939DA7EBCC6588FF(func_244());
	unk_0x3D28909AF30D70F4(func_271());
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
		unk_0x939DA7EBCC6588FF(func_246(iVar0));
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
		if (!unk_0x889D01384B54BCE3(uVar1, iVar0))
		{
			func_193(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_275(var uParam0, int iParam1, struct<3> Param2, float fParam5, var uParam6, bool bParam7)
{
	if (unk_0xECFECDAD51A6184F(uParam0->f_58[iParam1], 0) && !unk_0x2DE0B96E966FD817(uParam0->f_74[iParam1]))
	{
		unk_0x3CC3106305C40A28(uParam0->f_58[iParam1], false);
		unk_0x6A23C3306A8CF21B(uParam0->f_58[iParam1], true, 0);
		unk_0x6C43BF7625967266(uParam0->f_58[iParam1], Param2, 1, 0, 0, 1);
		unk_0x34639238667C4381(uParam0->f_58[iParam1], fParam5);
		unk_0xAC894C93914464C2(uParam0->f_58[iParam1]);
		unk_0x9350E8544DFB199B(uParam0->f_58[iParam1]);
		if (bParam7)
		{
			unk_0xEA63F3EA64C8860A(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			unk_0x213AEEC6A495123F(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			unk_0xEA63F3EA64C8860A(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			unk_0x213AEEC6A495123F(uParam0->f_58[iParam1], 10f);
		}
		unk_0x2686393074E14730(uParam0->f_74[iParam1], 1);
		unk_0x423D1EBE54B18555(uParam0->f_58[iParam1], true);
		unk_0x423D1EBE54B18555(uParam0->f_74[iParam1], true);
		unk_0xD0E2BFCE93AE3ABD(uParam6, iParam1);
	}
}

void func_276(var uParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10)
{
	if (!unk_0xBAB691F99A2A7346(uParam0->f_8))
	{
		uParam0->f_8 = unk_0xC45922BBDAA0638F("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = unk_0x7D9AB6E493591276(Param3, Param6, 2);
	unk_0xC2A228A4CCC7B3B0(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	unk_0x9ACE46E3A6C225BC(uParam0->f_9, fParam9);
	unk_0x3FE6A7FDB9B13D87(uParam0->f_9, iParam10);
	unk_0xC8CEF95C63B283EC(uParam0->f_8, 1);
	unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 1, 0);
}

void func_277(var uParam0)
{
	unk_0xEA054561294AEC10(joaat("frogger"));
	unk_0xA0B5A2A31FD758CC(8, "FMIntro");
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_48))
	{
		unk_0x2F2948A2506AA404(&(uParam0->f_48));
	}
}

int func_278(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (unk_0x889D01384B54BCE3(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_280();
		if (!unk_0x538DF9E5B1DF01EB(uParam0->f_92[0]))
		{
			if (unk_0x5494F37F35C1D7D7(joaat("cheetah")))
			{
				uParam0->f_92[0] = unk_0x9BB6F54E415071A1(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0);
				unk_0xBAE0E085DFB45D18(uParam0->f_92[0], 0);
				unk_0xB4226393A1696ACE(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x538DF9E5B1DF01EB(uParam0->f_92[1]))
		{
			if (unk_0x5494F37F35C1D7D7(joaat("entityxf")))
			{
				uParam0->f_92[1] = unk_0x9BB6F54E415071A1(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0);
				unk_0xBAE0E085DFB45D18(uParam0->f_92[1], 0);
				unk_0xFBD00B8DE708BF8E(uParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				unk_0x716275F05FAE278C(uParam0->f_92[1], 8);
				unk_0xB4226393A1696ACE(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x538DF9E5B1DF01EB(uParam0->f_92[2]))
		{
			if (unk_0x5494F37F35C1D7D7(joaat("monroe")))
			{
				uParam0->f_92[2] = unk_0x9BB6F54E415071A1(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0);
				unk_0xBAE0E085DFB45D18(uParam0->f_92[2], 0);
				unk_0xFBD00B8DE708BF8E(uParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				unk_0x716275F05FAE278C(uParam0->f_92[2], 2);
				unk_0xB4226393A1696ACE(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x538DF9E5B1DF01EB(uParam0->f_92[3]))
		{
			if (unk_0x5494F37F35C1D7D7(joaat("cheetah")))
			{
				uParam0->f_92[3] = unk_0x9BB6F54E415071A1(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0);
				unk_0xBAE0E085DFB45D18(uParam0->f_92[3], 0);
				unk_0xFBD00B8DE708BF8E(uParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				unk_0x716275F05FAE278C(uParam0->f_92[3], 15);
				unk_0xB4226393A1696ACE(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x538DF9E5B1DF01EB(uParam0->f_92[4]))
		{
			if (unk_0x5494F37F35C1D7D7(joaat("feltzer2")))
			{
				uParam0->f_92[4] = unk_0x9BB6F54E415071A1(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0);
				unk_0xBAE0E085DFB45D18(uParam0->f_92[4], 0);
				unk_0xFBD00B8DE708BF8E(uParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				unk_0xEEE37CF92B9966DA(uParam0->f_92[4], 0, 0);
				unk_0x780A5DADA769490D(uParam0->f_92[4], 0, 156);
				unk_0x975833792D47DC73(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0xECFECDAD51A6184F(uParam0->f_92[4], 0))
		{
			if (!unk_0x889D01384B54BCE3(uParam0->f_3, 1))
			{
				if (unk_0x1496C675F4DE04ED(uParam0->f_92[4]) > 0)
				{
					unk_0xE78BBCD9C6B5C963(uParam0->f_92[4], 22, 1);
					unk_0xB4226393A1696ACE(uParam0->f_92[4], 0);
					unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0x5494F37F35C1D7D7(func_225()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0x538DF9E5B1DF01EB(uParam0->f_98[iVar1]))
				{
					if (unk_0x538DF9E5B1DF01EB(uParam0->f_92[iVar1]))
					{
						if (unk_0xECFECDAD51A6184F(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = unk_0x793482A351850A4F(uParam0->f_92[iVar1], 4, func_225(), -1, 0, false);
							unk_0x2C4E82CF88213975(uParam0->f_98[iVar1], 1);
							unk_0x6EBB9B0E214CCF0F(uParam0->f_92[iVar1], 1, 1);
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
			unk_0xEA054561294AEC10(joaat("cheetah"));
			unk_0xEA054561294AEC10(joaat("monroe"));
			unk_0xEA054561294AEC10(joaat("entityxf"));
			unk_0xEA054561294AEC10(joaat("feltzer2"));
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_279()
{
	func_280();
	if (unk_0x5494F37F35C1D7D7(func_225()))
	{
		if (unk_0x5494F37F35C1D7D7(joaat("cheetah")))
		{
			if (unk_0x5494F37F35C1D7D7(joaat("monroe")))
			{
				if (unk_0x5494F37F35C1D7D7(joaat("entityxf")))
				{
					if (unk_0x5494F37F35C1D7D7(joaat("feltzer2")))
					{
						if (unk_0x0C73411A25059A28(100, "FM_Intro_uber"))
						{
							if (unk_0x0C73411A25059A28(101, "FM_Intro_uber"))
							{
								if (unk_0x0C73411A25059A28(102, "FM_Intro_uber"))
								{
									if (unk_0x0C73411A25059A28(103, "FM_Intro_uber"))
									{
										if (unk_0x0C73411A25059A28(104, "FM_Intro_uber"))
										{
											if (unk_0x6C47E32491756A1A("mp_intro_seq@"))
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
	unk_0x939DA7EBCC6588FF(joaat("cheetah"));
	unk_0x939DA7EBCC6588FF(joaat("monroe"));
	unk_0x939DA7EBCC6588FF(joaat("entityxf"));
	unk_0x939DA7EBCC6588FF(joaat("feltzer2"));
	unk_0x939DA7EBCC6588FF(func_225());
	unk_0xDF529DC50AE6BC93(100, "FM_Intro_uber");
	unk_0xDF529DC50AE6BC93(101, "FM_Intro_uber");
	unk_0xDF529DC50AE6BC93(102, "FM_Intro_uber");
	unk_0xDF529DC50AE6BC93(103, "FM_Intro_uber");
	unk_0xDF529DC50AE6BC93(104, "FM_Intro_uber");
	unk_0x3D28909AF30D70F4("mp_intro_seq@");
}

int func_281(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (unk_0x889D01384B54BCE3(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0x939DA7EBCC6588FF(joaat("asterope"));
		unk_0x939DA7EBCC6588FF(joaat("sentinel"));
		unk_0x939DA7EBCC6588FF(func_225());
		if ((unk_0x5494F37F35C1D7D7(joaat("asterope")) && unk_0x5494F37F35C1D7D7(joaat("sentinel"))) && unk_0x5494F37F35C1D7D7(func_225()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0x538DF9E5B1DF01EB(uParam0->f_58[iVar0]))
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
					uParam0->f_58[iVar0] = unk_0x9BB6F54E415071A1(iVar1, Var2, fVar5, 0, 0);
					unk_0x716275F05FAE278C(uParam0->f_58[iVar0], iVar0);
					unk_0xE31C4C317516E7A7(uParam0->f_58[iVar0], 1);
					unk_0x1143B1E42EAAE947(uParam0->f_58[iVar0], 2);
					unk_0x3CC3106305C40A28(uParam0->f_58[iVar0], true);
				}
				if (unk_0x538DF9E5B1DF01EB(uParam0->f_58[iVar0]))
				{
					if (!unk_0x538DF9E5B1DF01EB(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = unk_0x793482A351850A4F(uParam0->f_58[iVar0], 4, func_225(), -1, 0, false);
						unk_0xE31C4C317516E7A7(uParam0->f_74[iVar0], 1);
						unk_0x2C4E82CF88213975(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0x538DF9E5B1DF01EB(uParam0->f_58[iVar0]) || !unk_0x538DF9E5B1DF01EB(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0xEA054561294AEC10(joaat("asterope"));
		unk_0xEA054561294AEC10(joaat("sentinel"));
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 4);
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
		if ((uParam0->f_13 + iVar0) + iParam2) <= unk_0x09560C7DE2A384BD()
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
	
	if (unk_0x889D01384B54BCE3(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	unk_0x939DA7EBCC6588FF(iVar0);
	unk_0xDF529DC50AE6BC93(8, "FMIntro");
	if (unk_0x5494F37F35C1D7D7(iVar0) && unk_0x0C73411A25059A28(8, "FMIntro"))
	{
		if (!unk_0x538DF9E5B1DF01EB(uParam0->f_48))
		{
			uParam0->f_48 = unk_0x9BB6F54E415071A1(iVar0, unk_0x2F4C08C7BBD2C91F(8, 0f, "FMIntro"), 0f, 0, 0);
			unk_0x7278B2F5A4AF38A7(uParam0->f_48, 8, "FMIntro", 1);
			unk_0x4A94E9823FACFC05(uParam0->f_48, 5000f);
			unk_0xDA42B3694A77189E(uParam0->f_48);
			unk_0x423D1EBE54B18555(uParam0->f_48, false);
			unk_0xEA054561294AEC10(iVar0);
		}
	}
	if (!unk_0x538DF9E5B1DF01EB(uParam0->f_48))
	{
		return 0;
	}
	unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 8);
	return 1;
}

void func_284(var uParam0, int iParam1)
{
	if (func_282(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (unk_0x09560C7DE2A384BD() - func_207(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_285(var uParam0)
{
	uParam0->f_13 = unk_0x09560C7DE2A384BD();
}

Vector3 func_286(struct<3> Param0)
{
	return (-unk_0x0BADBFA3B172435F(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), (unk_0xD0FFB162F40A139C(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), unk_0x0BADBFA3B172435F(Param0.f_0);
}

int func_287()
{
	return Global_1315824;
}

void func_288()
{
	unk_0x01C9658D4C7F66D5(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	unk_0x01C9658D4C7F66D5(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
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
	unk_0xFD1E0AEC770DAF2E(1);
	unk_0xEDC11454B9658FE1();
	func_232(1, 1, 1, 0);
	func_291();
	func_186(12, 1, -1);
	func_187(0);
	unk_0xE160463F782E4C83(1, -1);
	unk_0xA0ED52A12ED3E5E5(0);
	unk_0x6853F2DD1CFD3CA2(0);
	func_292(1);
	func_238(1);
	Global_2422491.f_3126 = 1;
	if (bParam0)
	{
		if (!unk_0xBDA58D5914C57881())
		{
			unk_0x111BB4A7273397DD(1, iParam1);
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
	while (iVar0 < Global_96093)
	{
		unk_0x0A0906BD8781AB7B(iVar0, iParam0);
		func_293(iVar0);
		iVar0++;
	}
}

void func_293(int iParam0)
{
	Global_96093[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_96093[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_96093[iParam0 /*28*/].f_4), "", 64);
	Global_96093[iParam0 /*28*/].f_23 = 0;
	Global_96093[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_96093[iParam0 /*28*/].f_27 = 0;
	Global_96093[iParam0 /*28*/].f_20 = 0;
	Global_96093[iParam0 /*28*/].f_22 = 0;
}

void func_294()
{
	Global_1312569 = 1;
	StringCopy(&(Global_1312569.f_1), unk_0x7E5A426328F6E635(), 24);
	Global_1312569.f_7 = unk_0xB793F1A0B6CC4AE1(&(Global_1312569.f_1));
}

int func_295()
{
	if (unk_0xF4C685E933068D23())
	{
		func_297(0);
		unk_0x043EFD684DC72B0E();
		return 1;
	}
	if (func_296() == 3)
	{
		func_297(2);
		unk_0x2CA122235558EF53(250f);
	}
	if (unk_0x5FAE4E88A97B0375() >= 250f)
	{
		unk_0x2CA122235558EF53(250f);
	}
	if (unk_0xC223CBD360E6584F() == 0)
	{
		unk_0x2CA122235558EF53(250f);
	}
	if (unk_0x5FAE4E88A97B0375() <= 0f)
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
	if (!unk_0x9BA82E09A986BA4B("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x94ECD62AF4ECC7DC(iVar1))
			{
				return;
			}
			if (unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == iVar1)
			{
				func_301(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x94ECD62AF4ECC7DC(iVar1))
			{
				return;
			}
			if (func_299(iParam0))
			{
				func_301(iParam0, 0);
			}
		}
		unk_0x36CF615FADBA1CB4(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_299(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_300(iParam0) };
	if (unk_0x889D01384B54BCE3(Global_30784[Var0.f_1], Var0.f_0))
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
		unk_0xD0E2BFCE93AE3ABD(&(Global_30784[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_30784[Var0.f_1]), Var0.f_0);
	}
}

var func_302(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_303(iParam0) };
	*iParam1 = unk_0x7B6124E1230469E9(Var0, Var0.f_3);
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
	return Global_2436288;
}

bool func_306()
{
	return Global_2435554;
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
	Global_1315824 = iParam0;
}

void func_309(int iParam0)
{
	var uVar0;
	
	uVar0 = func_310();
	Global_1315823 = iParam0;
}

var func_310()
{
	return Global_1315823;
}

void func_311(bool bParam0)
{
	int iVar0;
	
	func_313(&Global_17019);
	unk_0x584BB792123988BF(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0x5B9AF9DA22F807EB();
			func_312(0);
			if (unk_0x538DF9E5B1DF01EB(Global_1318675))
			{
				if (unk_0xD8233CB95CB48A7C(Global_1318675, 0))
				{
					if (!unk_0x22349EC06EA5B08B(Global_1318675))
					{
						unk_0x7B9576B4E099FB1F(Global_1318675, 0, 0);
					}
					unk_0x51A89CCC8A5317D0(&Global_1318675);
				}
			}
		}
	}
}

void func_312(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2437385 = 0;
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
	if (unk_0xBAB691F99A2A7346(uParam0->f_9))
	{
		if (unk_0x3C20CCC55C33AC27(uParam0->f_9))
		{
			func_314(0);
		}
		unk_0x27A62B1C26941E13(uParam0->f_9, 0);
	}
	if (!Global_35931)
	{
		unk_0x32B9BE5C33D72403(1);
		unk_0xA1D3E8BBFB4D4920(0f);
		unk_0x10B8CEB2B722BF40(0f);
	}
	Global_2404570.f_523 = 0f;
	unk_0x00B28313F1FACD2D(0, 0, 0, 1, 0, 0);
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
		if (unk_0xF141B42E7F4B5225())
		{
			return;
		}
	}
	if (func_318() == 0 || unk_0x2B0FFD431FD5A9FA())
	{
		func_317(1);
		unk_0x7D831457C487078A(0);
		unk_0x7D831457C487078A(0);
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
	Global_2436524 = 1;
}

void func_320(int iParam0)
{
	if ((func_318() == 1 || unk_0x2B0FFD431FD5A9FA()) || iParam0)
	{
		func_317(0);
		unk_0x7D831457C487078A(1);
		unk_0x7D831457C487078A(1);
		unk_0xE9FD45E1F7FBEE81();
	}
}

void func_321(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5B1ADD2B2027BABF();
		unk_0x210E942031098025(-1);
		unk_0x6C6F63C36716D8C7(1);
		unk_0x0EB14FC197FFDC10(1);
		unk_0x0D2C6B9B89E344E4(1f);
		unk_0x1B9EBC1F5FB259AC(3);
		unk_0x61B0E3F51FCC20C8(3);
	}
	else
	{
		unk_0xC7210908156431E0(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		unk_0x210E942031098025(0);
		unk_0x6C6F63C36716D8C7(0);
		unk_0x0EB14FC197FFDC10(0);
		unk_0x0D2C6B9B89E344E4(0f);
		unk_0x1B9EBC1F5FB259AC(0);
		unk_0x61B0E3F51FCC20C8(0);
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
	unk_0x435923F2389CD0AD(0);
	if (bParam0)
	{
		unk_0x72CFCB1707154E9F(unk_0x1788E93557766241(), iParam6);
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
	func_323(unk_0x1788E93557766241(), 0, iVar0, 1);
	if (bParam5)
	{
		if (unk_0x03C806A12329A320(unk_0xA16EC202D9D35357()))
		{
			unk_0x7C8D5BBFB6F2CD4B(unk_0xA16EC202D9D35357(), 0);
		}
	}
}

void func_323(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	var uVar24;
	int iVar25;
	
	if (bParam1)
	{
		if (unk_0x6A132B76AB7C7138())
		{
			unk_0xD2238E59B5C4A250(0);
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		uVar0 = iParam2;
		unk_0xC92B5D880C803814(iParam0, bParam1, uVar0);
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
		if (!func_327())
		{
			bVar23 = false;
			if (bParam1 == 1)
			{
				bVar23 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar23 = true;
			}
			if (bVar9 == 1)
			{
				bVar23 = true;
			}
			if (bVar23)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x38FA37FE3518BA38(iParam0) && unk_0x2AF80829930084FD(iParam0))
		{
			uVar24 = unk_0xFF34D923BFB5E9FB(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x1DAD7CE53BEE7710())
				{
					unk_0x738AEBA425C3D093(1);
				}
				else
				{
					unk_0x423D1EBE54B18555(uVar24, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x1DAD7CE53BEE7710() && !bVar18)
					{
						unk_0x738AEBA425C3D093(0);
					}
					Global_2414327[iParam0 /*255*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_326(uVar24) && !unk_0x3FE69FBCE43341D9(uVar24))
				{
					if (!bVar21)
					{
						unk_0x6A23C3306A8CF21B(uVar24, true, 0);
					}
				}
				if (!unk_0x5A6F774C8E17AA21(uVar24))
				{
					if (!bVar20)
					{
						unk_0x3CC3106305C40A28(uVar24, false);
					}
					unk_0x940C6B8BF42B190B(uVar24, 1);
				}
				else if (!bVar20)
				{
					unk_0x3CC3106305C40A28(iVar24, false);
				}
				unk_0xA8BC819B54F5B824(iVar24, true);
				unk_0x68068FC275E8AC83(iParam0, 0);
				unk_0xEDD99DCB19EC7C49(iVar24);
				unk_0x551186C5C186D1DC(iVar24, 1);
				func_325();
				func_324();
				if (unk_0xA5B13BF6970E2A56())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xA84F80DD9F675CED())
				{
				}
				Global_2414327[iParam0 /*255*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_326(iVar24) && !unk_0x3FE69FBCE43341D9(iVar24))
				{
					if (!bVar21)
					{
						unk_0x6A23C3306A8CF21B(iVar24, !bVar14, 0);
					}
					if (!unk_0x5A6F774C8E17AA21(iVar24))
					{
						if (!bVar20)
						{
							unk_0x3CC3106305C40A28(iVar24, bVar15);
						}
						if (!bVar15)
						{
							unk_0x940C6B8BF42B190B(iVar24, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x68068FC275E8AC83(iParam0, 0);
				}
				else
				{
					unk_0x68068FC275E8AC83(iParam0, 1);
				}
				unk_0xA8BC819B54F5B824(iVar24, bVar16);
				if (bVar2)
				{
					if (!unk_0xF10879F2BBA41065(iVar24) && !unk_0x202EF5D8203705EF(iVar24, 0))
					{
						unk_0x9AB8F163FA160890(iVar24);
					}
				}
			}
			iVar25 = 0;
			if (bVar1)
			{
				iVar25 |= 2;
			}
			if (bVar2)
			{
				iVar25 |= 4;
			}
			if (bVar3)
			{
				iVar25 |= 8;
			}
			if (bVar4)
			{
				iVar25 |= 16;
			}
			if (bVar5)
			{
				iVar25 |= 32;
			}
			if (bVar6)
			{
				iVar25 |= 64;
			}
			if (bVar7)
			{
				iVar25 |= 128;
			}
			if (bVar8)
			{
				iVar25 |= 256;
			}
			if (bVar9)
			{
				iVar25 |= 512;
			}
			if (bVar10)
			{
				iVar25 |= 1024;
			}
			if (bVar11)
			{
				iVar25 |= 2048;
			}
			if (bVar12)
			{
				iVar25 |= 4096;
			}
			unk_0xC92B5D880C803814(iParam0, bParam1, iVar25);
		}
	}
}

void func_324()
{
	struct<2> Var0;
	
	Global_2422491.f_689 = 0;
	Global_2422491.f_690 = 0;
	Global_2422491.f_691 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404570.f_1419 = { Var0 };
}

void func_325()
{
	Global_2404570.f_580 = 0;
	Global_2404570.f_1460 = 0;
	Global_2404570.f_453 = 0;
	Global_2414327[unk_0x1788E93557766241() /*255*/].f_204 = 0;
}

int func_326(int iParam0)
{
	int iVar0;
	
	if (unk_0x202EF5D8203705EF(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x221AC1EF116F6053(iParam0, -1794415470);
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
	unk_0x117411595F7E531A(unk_0xFF34D923BFB5E9FB(iParam0), 346, 1);
}

void func_331(var uParam0)
{
	if (!unk_0x889D01384B54BCE3(uParam0->f_3, 12))
	{
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1690465)
			{
				Global_1690465 = 1;
				Global_1690466 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (unk_0xC8378A96673BCC40(Global_1690464))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if ((unk_0x9BB5B38BEC8FE00F() == 9 || unk_0x9BB5B38BEC8FE00F() == 10) || unk_0x9BB5B38BEC8FE00F() == 8)
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
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 33, -3390))
							{
								func_332("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 33, -2940))
								{
									func_336("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_335("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_334("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_333("techdir", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 33, -450))
							{
								func_332("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_336("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_335("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_334("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_333("assartdir", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_332("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if ((unk_0x9BB5B38BEC8FE00F() == 9 || unk_0x9BB5B38BEC8FE00F() == 10) || unk_0x9BB5B38BEC8FE00F() == 8)
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
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 36, -4740))
							{
								func_332("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 36, -3810))
								{
									func_336("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_335("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_333("leadprog", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 36, -600))
							{
								func_332("leadprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if ((unk_0x9BB5B38BEC8FE00F() == 9 || unk_0x9BB5B38BEC8FE00F() == 10) || unk_0x9BB5B38BEC8FE00F() == 8)
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
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 37, -1350))
							{
								func_332("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_336("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_335("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_334("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_333("prog", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 38, -4320))
							{
								func_332("prog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 38, -3240))
								{
									if ((unk_0x9BB5B38BEC8FE00F() == 9 || unk_0x9BB5B38BEC8FE00F() == 10) || unk_0x9BB5B38BEC8FE00F() == 8)
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
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 38, -870))
							{
								func_332("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_336("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_335("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_333("audio", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 39, -1620))
							{
								func_332("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_336("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_335("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_334("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_333("scrlead", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 40, -1470))
							{
								func_332("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_336("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_335("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_334("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_333("script1", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 41, -1200))
							{
								func_332("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_336("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_335("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_334("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_333("script2", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 42, -1320))
							{
								func_332("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_336("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_335("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_335("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_333("visdes", 0.05f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 43, -1320))
							{
								func_332("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_336("uides", 40f, 20f, "right", 0f, 0.3f);
									func_335("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_334("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_333("uides", 0f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 45, -1650))
							{
								func_332("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_336("concre", 0f, 20f, "left", 0f, 0.3f);
									func_335("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_334("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_334("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_333("concre", 0f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 46, -1950))
							{
								func_332("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_336("devass", 0f, 400f, "right", 0f, 0f);
									func_335("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_334("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_333("devass", 0f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_332("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_336("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_335("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_335("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_333("qasup", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 48, -1320))
							{
								func_332("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_336("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_335("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_334("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_333("senta", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 49, -5070))
							{
								func_332("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (func_282(uParam0, 49, -3750))
								{
									func_336("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_335("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_334("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_333("asspro", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_282(uParam0, 49, -720))
							{
								func_332("asspro", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (unk_0xEC35DAD55FA4EEF2() && unk_0x7CA8D900E987DFB5() > 2468)
									{
										func_336("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_335("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_334("animdir", "ROB NELSON", 200f, "|", 1);
										func_333("animdir", 0.16f);
										unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_336("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_335("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_334("animdir", "ROB NELSON", 90f, "|", 1);
									func_333("animdir", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (unk_0xEC35DAD55FA4EEF2() && unk_0x7CA8D900E987DFB5() > 6123)
								{
									func_332("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xEC35DAD55FA4EEF2() && unk_0x7CA8D900E987DFB5() > 1898)
							{
								func_332("animdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (unk_0xEC35DAD55FA4EEF2() && unk_0xE64D690D4638CD42())
									{
										func_336("producer", 65f, 55f, "right", 0f, 0f);
										func_335("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_334("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_333("producer", 0f);
										unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xEC35DAD55FA4EEF2() && unk_0x7CA8D900E987DFB5() > 2452)
								{
									func_336("producer", 0f, 100f, "left", 0.3f, 0f);
									func_335("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_334("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_333("producer", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (unk_0xEC35DAD55FA4EEF2() && unk_0xE64D690D4638CD42())
								{
									func_332("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xEC35DAD55FA4EEF2() && unk_0xE64D690D4638CD42())
							{
								func_332("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (unk_0xEC35DAD55FA4EEF2() && unk_0x7CA8D900E987DFB5() > 13265)
									{
										func_336("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_335("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_334("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_333("vpcre", 0.16f);
										unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xEC35DAD55FA4EEF2() && unk_0x7CA8D900E987DFB5() > 6921)
								{
									func_336("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_335("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_334("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_333("vpcre", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (unk_0xEC35DAD55FA4EEF2() && unk_0x7CA8D900E987DFB5() > 16955)
								{
									func_332("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xEC35DAD55FA4EEF2() && unk_0x7CA8D900E987DFB5() > 10513)
							{
								func_332("vpcre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!unk_0x889D01384B54BCE3(uParam0->f_4, uParam0->f_5))
							{
								if (func_241(uParam0))
								{
									if (unk_0xEC35DAD55FA4EEF2() && unk_0x7CA8D900E987DFB5() > 18077)
									{
										Global_1690466 = 0;
										func_336("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_335("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_334("execpro", "SAM HOUSER", 165f, "|", 1);
										func_333("execpro", 0.16f);
										unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xEC35DAD55FA4EEF2() && unk_0x7CA8D900E987DFB5() > 12358)
								{
									Global_1690466 = 0;
									func_336("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_335("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_334("execpro", "SAM HOUSER", 190f, "|", 1);
									func_333("execpro", 0.16f);
									unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_241(uParam0))
							{
								if (unk_0xEC35DAD55FA4EEF2() && unk_0x7CA8D900E987DFB5() > 21785)
								{
									func_332("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xEC35DAD55FA4EEF2() && unk_0x7CA8D900E987DFB5() > 15333)
							{
								func_332("execpro", 0.16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1690466)
				{
					unk_0x27BDF28219C810BA(Global_1690464, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_332(char* sParam0, float fParam1)
{
	unk_0xB067107D878E9585(Global_1690464, "HIDE");
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(sParam0);
	unk_0x9F94C7B5E8C04AB3();
	unk_0x50050D925C27B388(fParam1);
	unk_0xD3DF251F2DF3B257();
}

void func_333(char* sParam0, float fParam1)
{
	unk_0xB067107D878E9585(Global_1690464, "SHOW_CREDIT_BLOCK");
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(sParam0);
	unk_0x9F94C7B5E8C04AB3();
	unk_0x50050D925C27B388(fParam1);
	unk_0xD3DF251F2DF3B257();
}

void func_334(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0xB067107D878E9585(Global_1690464, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(sParam0);
	unk_0x9F94C7B5E8C04AB3();
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(sParam1);
	unk_0x9F94C7B5E8C04AB3();
	unk_0x50050D925C27B388(fParam2);
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(sParam3);
	unk_0x9F94C7B5E8C04AB3();
	unk_0xF34EF2C628F5B47B(iParam4);
	unk_0xD3DF251F2DF3B257();
}

void func_335(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0xB067107D878E9585(Global_1690464, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(sParam0);
	unk_0x9F94C7B5E8C04AB3();
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(sParam1);
	unk_0x9F94C7B5E8C04AB3();
	unk_0x50050D925C27B388(fParam2);
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(sParam3);
	unk_0x9F94C7B5E8C04AB3();
	unk_0xF34EF2C628F5B47B(iParam4);
	unk_0xD3DF251F2DF3B257();
}

void func_336(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0xB067107D878E9585(Global_1690464, "SETUP_CREDIT_BLOCK");
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(sParam0);
	unk_0x9F94C7B5E8C04AB3();
	unk_0x50050D925C27B388(fParam1);
	unk_0x50050D925C27B388(fParam2);
	unk_0xEBC0B3BDAD1250BE("STRING");
	unk_0x94E086BCAE8856C1(sParam3);
	unk_0x9F94C7B5E8C04AB3();
	unk_0x50050D925C27B388(fParam4);
	unk_0x50050D925C27B388(fParam5);
	unk_0xD3DF251F2DF3B257();
}

void func_337(var uParam0)
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (unk_0x538DF9E5B1DF01EB(uParam0->f_34))
		{
			if (unk_0xECFECDAD51A6184F(uParam0->f_34, 0))
			{
				unk_0x9FEF1B9A29BCE63C(unk_0xA783C6007920169C(uParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_338()
{
	var uVar0;
	
	if (unk_0xCB5D8B19B62A3B89(Local_561.f_3))
	{
		switch (Local_561.f_2)
		{
			case 2:
				if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_4, 1))
				{
					if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
					{
						if (func_353(Local_561.f_3))
						{
							if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
							{
								if (unk_0x221AC1EF116F6053(unk_0xA16EC202D9D35357(), -1794415470) != 1 && unk_0x221AC1EF116F6053(unk_0xA16EC202D9D35357(), -1794415470) != 0)
								{
									unk_0xA34C986DDC3D92F1(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_561.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_4, 2))
							{
								if (unk_0xD9275EB8FA656B5C(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_561.f_3)))
								{
									unk_0xD0E2BFCE93AE3ABD(&(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_4), 2);
									func_352(1);
								}
								else
								{
									unk_0x597CB55BA0825820(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0);
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
						if (unk_0x889D01384B54BCE3(uLocal_744, 26))
						{
							if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_561.f_4), -1273030092) != 1 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_561.f_4), -1273030092) != 0)
							{
								unk_0x933DC7D168CD6A71(unk_0x7A16A8A755F44481(Local_561.f_4), unk_0x8CB435AA1E25DA51(Local_561.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!unk_0x889D01384B54BCE3(uLocal_744, 27))
				{
					if (!unk_0xF4C685E933068D23() && !unk_0xE9A5FF67266655B2())
					{
						if (!func_107())
						{
							if (!unk_0x2B0FFD431FD5A9FA())
							{
								unk_0x271524E4281048DC(800);
							}
						}
					}
					else if (unk_0xF4C685E933068D23())
					{
						unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 27);
					}
				}
				else if (!unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 4))
				{
					if (func_345(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0))
					{
						unk_0x597CB55BA0825820(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0);
						unk_0x7172D3D2AD530FD4();
						unk_0x87378FFD9C18F6B8();
						unk_0x20D6E0EA145DF751(0);
						unk_0x60365B850FB7354F(0, 1065353216);
						unk_0xD0E2BFCE93AE3ABD(&(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_351(Local_561.f_4))
				{
					if (!unk_0x889D01384B54BCE3(uLocal_744, 29))
					{
						if (func_353(Local_561.f_3))
						{
							unk_0x3B47A0C2EA52BEBB(unk_0x7A16A8A755F44481(Local_561.f_4), unk_0x8CB435AA1E25DA51(Local_561.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							unk_0x5FE2A83120E8127F(800);
							unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 29);
						}
					}
					else if (!unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 5))
					{
						if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_561.f_4), -272084098) == 7)
						{
							unk_0xD0E2BFCE93AE3ABD(&(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if (unk_0x221AC1EF116F6053(unk_0xA16EC202D9D35357(), -828834893) != 1 && unk_0x221AC1EF116F6053(unk_0xA16EC202D9D35357(), -828834893) != 0)
						{
							unk_0xBB5AA994E06B28E2(unk_0xA16EC202D9D35357(), 0, 0);
						}
					}
					else if (!unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 6))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3), 6);
						unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_734), 4);
						unk_0x29DB79DD4D939B38(&(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_4), 2);
						func_323(unk_0x1788E93557766241(), 1, 0, 1);
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
							unk_0x90B63609DC17FEA6(200, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_351(Local_561.f_4))
				{
					if (func_353(Local_561.f_3))
					{
						if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_561.f_4), -258271821) != 1 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_561.f_4), -258271821) != 0)
						{
							unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_561.f_4), 1);
							unk_0x2B79CD6A5064FB19(unk_0x7A16A8A755F44481(Local_561.f_4), unk_0x8CB435AA1E25DA51(Local_561.f_3), 12f, 786599);
							func_340(&(Local_561.f_3));
							func_340(&(Local_561.f_4));
						}
					}
				}
				break;
		}
		if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_4, 1))
		{
			unk_0xEADE4FBDA54F2BFB(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!unk_0x889D01384B54BCE3(uLocal_744, 26))
			{
				unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 26);
			}
		}
		if (!unk_0x889D01384B54BCE3(uLocal_744, 28))
		{
			if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_4, 2))
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
						unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 28);
					}
				}
			}
		}
		if (!unk_0x889D01384B54BCE3(uLocal_744, 30))
		{
			if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 5))
			{
				if (func_159(&uLocal_568, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					unk_0xD0E2BFCE93AE3ABD(&uLocal_744, 30);
				}
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 6))
		{
			func_339();
		}
		if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_4, 2))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
				{
				}
			}
		}
	}
}

void func_339()
{
	Global_2454959.f_258 = 1;
}

void func_340(var uParam0)
{
	var uVar0;
	
	if (unk_0xCB5D8B19B62A3B89(*uParam0))
	{
		uVar0 = unk_0xD65CB1FBC5B5BA6A(*uParam0);
		unk_0x5317ED1B1D4BC2F3(&uVar0);
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
	Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_4 = iVar1;
	Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_3 = (Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_342(iVar1, 0);
	}
}

void func_344()
{
	unk_0x7D98754083C1D605(0, 22, 1);
	unk_0x7D98754083C1D605(0, 36, 1);
	unk_0x7D98754083C1D605(0, 32, 1);
	unk_0x7D98754083C1D605(0, 34, 1);
	unk_0x7D98754083C1D605(0, 35, 1);
	unk_0x7D98754083C1D605(0, 33, 1);
	unk_0x7D98754083C1D605(0, 31, 1);
	unk_0x7D98754083C1D605(0, 30, 1);
	unk_0x7D98754083C1D605(0, 44, 1);
	unk_0x7D98754083C1D605(0, 141, 1);
	unk_0x7D98754083C1D605(0, 140, 1);
	unk_0x7D98754083C1D605(0, 263, 1);
	unk_0x7D98754083C1D605(0, 264, 1);
	unk_0x7D98754083C1D605(0, 143, 1);
	unk_0x7D98754083C1D605(0, 24, 1);
	unk_0x7D98754083C1D605(0, 257, 1);
	unk_0x7D98754083C1D605(0, 263, 1);
	unk_0x7D98754083C1D605(0, 264, 1);
	unk_0x7D98754083C1D605(0, 143, 1);
	unk_0x7D98754083C1D605(0, 262, 1);
	unk_0x7D98754083C1D605(0, 261, 1);
	unk_0x7D98754083C1D605(0, 37, 1);
	unk_0x7D98754083C1D605(0, 25, 1);
	unk_0x7D98754083C1D605(0, 26, 1);
}

int func_345(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11)
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	
	Global_17099.f_6 = 1;
	if (unk_0xB4B5BF5882A555F9() && !bParam9)
	{
		if (Global_2422491.f_689)
		{
			func_350(0, bParam9);
		}
		return 0;
	}
	if ((unk_0xA84F80DD9F675CED() && !bParam9) && !unk_0xA5B13BF6970E2A56())
	{
		return 0;
	}
	if (!func_349())
	{
		if (func_348(unk_0x1788E93557766241(), 1))
		{
			if (((bParam9 && func_12(unk_0x1788E93557766241(), 1, 0)) && unk_0xB4B5BF5882A555F9()) && Global_2414327[unk_0x1788E93557766241() /*255*/].f_219 == 1)
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
	if (!Global_2422491.f_689 && !bParam11)
	{
		Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
		if ((unk_0x3545D662A0A53653((Var0.f_0 - Param0.f_0)) < 0.2f && unk_0x3545D662A0A53653((Var0.f_1 - Param0.f_1)) < 0.2f) && unk_0x3545D662A0A53653((Var0.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar3 = (fParam3 - unk_0xD1613577C809E98B(unk_0xA16EC202D9D35357()));
			if (fVar3 > 180f)
			{
				fVar3 = (fVar3 + -360f);
			}
			if (fVar3 < -180f)
			{
				fVar3 = (fVar3 + 360f);
			}
			if (unk_0x3545D662A0A53653(fVar3) < 1f)
			{
				Global_2422491.f_689 = 0;
				Global_2422491.f_690 = 0;
				if (unk_0xA5B13BF6970E2A56())
				{
					unk_0xE8E0852036FFE69E();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2422491.f_691 || !Param0.f_1 == Global_2422491.f_691.f_1) || !Param0.f_2 == Global_2422491.f_691.f_2) || !fParam3 == Global_2422491.f_694)
	{
		if (Global_2422491.f_689 == 1)
		{
			if (unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Global_2422491.f_695) < func_347())
			{
				return 0;
			}
			unk_0xE8E0852036FFE69E();
			Global_2422491.f_690 = 1;
		}
		else
		{
			Global_2422491.f_690 = 0;
		}
		Global_2422491.f_691 = { Param0 };
		Global_2422491.f_694 = fParam3;
		Global_2422491.f_689 = 0;
	}
	if (!Global_2422491.f_689 && !unk_0xA5B13BF6970E2A56())
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
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			func_346();
			if (!unk_0xF5EA77D251876B2E(unk_0xA16EC202D9D35357(), &(Global_2404570.f_442)))
			{
				Global_2404570.f_442 = 0;
			}
		}
		if (bParam9)
		{
			if (bParam4)
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					uVar4 = unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357());
					unk_0x6C43BF7625967266(uVar4, Param0, 0, 1, 1, 1);
					unk_0x34639238667C4381(uVar4, fParam3);
				}
				else
				{
					unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Param0, 0, 0, 0, 1);
					unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), fParam3);
				}
			}
			else
			{
				unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Param0, 0, 0, 0, 1);
				unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), fParam3);
			}
			func_350(bParam6, bParam9);
			return 1;
		}
		else
		{
			unk_0x2D78CBCC9150BF79();
			unk_0xA9FA204C9758F636(unk_0x1788E93557766241(), Param0, fParam3, bParam4, iParam10, 0);
		}
		Global_2422491.f_695 = unk_0x519586565311459B();
		Global_2422491.f_689 = 1;
	}
	if (Global_2422491.f_689)
	{
		Global_17099.f_6 = 1;
		Global_2422491.f_695 = unk_0x519586565311459B();
		if (bParam9)
		{
			if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Global_2422491.f_691) < 2f)
			{
				if (unk_0xA5B13BF6970E2A56())
				{
					unk_0xE8E0852036FFE69E();
				}
				func_350(bParam6, bParam9);
				return 1;
			}
		}
		if (!unk_0xA5B13BF6970E2A56())
		{
			func_350(bParam6, bParam9);
			return 1;
		}
	}
	return 0;
}

void func_346()
{
	Global_2404570.f_1418 = unk_0xD114A40C0BC7A580();
}

int func_347()
{
	if (unk_0xF4C685E933068D23())
	{
		return 10000;
	}
	return 1000;
}

int func_348(int iParam0, bool bParam1)
{
	if (Global_2414327[iParam0 /*255*/].f_219 == 99)
	{
		return 0;
	}
	if (bParam1)
	{
		if (Global_2414327[iParam0 /*255*/].f_219 == 11)
		{
			return 0;
		}
	}
	return 1;
}

bool func_349()
{
	return Global_1315866;
}

void func_350(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x60365B850FB7354F(0f, 1065353216);
		unk_0x20D6E0EA145DF751(0f);
	}
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0x272B2ACB08C1F84B(unk_0xA16EC202D9D35357());
	}
	if (!bParam1)
	{
		unk_0x2D78CBCC9150BF79();
	}
	if (unk_0xA5B13BF6970E2A56())
	{
		unk_0xE8E0852036FFE69E();
	}
	func_324();
}

int func_351(var uParam0)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		return unk_0x2DE0B96E966FD817(unk_0x7A16A8A755F44481(uParam0));
	}
	return 1;
}

void func_352(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 15))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 15);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 15))
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 15);
	}
}

int func_353(var uParam0)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		return !func_354(unk_0x8CB435AA1E25DA51(uParam0));
	}
	return 0;
}

int func_354(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (unk_0xE44A580B551C3645(uParam0))
		{
			return 1;
		}
		else if (!unk_0xECFECDAD51A6184F(uParam0, 0))
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
	Global_90094.f_153[iParam0] = 1;
	Global_90094.f_152 = 1;
}

void func_357(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_90094.f_9[iParam0] = 1;
	}
	else
	{
		Global_90094.f_9[iParam0] = 0;
	}
}

void func_358(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_90094.f_8 = 1;
	}
	else
	{
		Global_90094.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 44)
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
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
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
			if (!Global_1573684 && !func_365(unk_0x1788E93557766241(), 2))
			{
				unk_0xDF3B1A0343547226("MinigameTransitionIn", 0, 1);
				func_315(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_365(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_205, iParam1);
}

bool func_366()
{
	return Global_2422491.f_2;
}

void func_367(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (bLocal_750)
		{
			if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 2))
			{
				if (!unk_0x889D01384B54BCE3(uLocal_744, 31))
				{
					func_30(119, 1, -1, 1);
					func_30(115, 1, -1, 1);
				}
				func_627(1);
				bVar0 = true;
			}
		}
		else if (unk_0x889D01384B54BCE3(Local_733[unk_0x044A481E863E2F6B() /*5*/].f_3, 1))
		{
			if (!unk_0x889D01384B54BCE3(uLocal_744, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_197(&Local_87, 0, bParam0);
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (Global_2422491.f_3126)
		{
			func_623(0, 1);
		}
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		func_352(0);
	}
	unk_0xA2D4DD3AE5BD39B4(Local_87.f_122, 0);
	unk_0xC116CE577D8DDF3C(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	unk_0xC116CE577D8DDF3C(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	unk_0x29DB79DD4D939B38(&(Global_2446992.f_734), 4);
	func_85(0);
	func_54(0);
	func_622();
	func_621(iLocal_86, 0);
	func_178(&(Global_2422491.f_3375));
	Global_2422491.f_3373 = 0;
	Global_2422491.f_3372 = 0;
	Global_2422491.f_3374 = 0;
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 244, 1);
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 243, 1);
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 242, 1);
	}
	if (bVar0)
	{
		func_370(0, 0, 0, 0);
	}
	else
	{
		unk_0xFD1E0AEC770DAF2E(1);
		func_370(0, 0, 3, 1);
	}
	unk_0x29DB79DD4D939B38(&(Global_2446992.f_734), 0);
	func_358(0);
	func_357(4, 0);
	func_357(1, 0);
	func_357(0, 0);
	func_357(2, 0);
	func_357(3, 0);
	func_355(iLocal_86, 0);
	func_344();
	func_33();
	if (unk_0x5660C8AFDD9C1721(Global_90094.f_198[iLocal_86]))
	{
		unk_0xF1D09F0F8B016765(Global_90094.f_198[iLocal_86], 0);
	}
	if (unk_0x5660C8AFDD9C1721(uLocal_747))
	{
		unk_0xB6FB9702660D84F6(&uLocal_747);
	}
	if (unk_0x1DAD7CE53BEE7710())
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
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Param0.f_0)) >= 1000)
		{
			unk_0xFC61D7B819393DB6();
		}
	}
	unk_0x82706E6C897B0FA1();
}

void func_369(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 5);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 5);
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
	
	iVar0 = unk_0x1788E93557766241();
	iVar1 = Global_1583725[iVar0 /*334*/];
	func_620();
	func_616();
	unk_0xDB619BFF28663F84(0);
	Global_973716 = 0;
	unk_0x3FC913FB6B052A1F(0);
	Global_786481 = 0;
	Global_786481.f_1 = 0;
	Global_1573550 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	func_615(0);
	Global_1573539 = 0;
	Global_1573538 = 0;
	Global_1573560 = 0;
	Global_1573702 = 0;
	Global_1573708 = 0;
	Global_1573283 = 0;
	Global_1574176 = 1;
	Global_1573675 = 0;
	Global_1573551 = -1;
	func_614();
	func_613(0);
	unk_0x29DB79DD4D939B38(&(Global_2359301.f_1), 5);
	func_612();
	func_611();
	func_610();
	func_609();
	func_608();
	if (unk_0x1DAD7CE53BEE7710())
	{
		func_607();
	}
	if (func_606())
	{
		func_605();
		func_604(1, 1, 1);
		func_603();
		func_602();
		if (iVar0 != -1)
		{
			Global_1601582[iVar0 /*32*/].f_22 = 0;
			Global_1601582[iVar0 /*32*/].f_22.f_1 = 0;
		}
	}
	func_601();
	if (Global_1604248 != 6)
	{
		if (func_12(unk_0x1788E93557766241(), 1, 1))
		{
			if (unk_0xAAEAB57B2121A155(unk_0xA16EC202D9D35357()))
			{
				unk_0xE1E9BC2552E721F9(unk_0xA16EC202D9D35357(), 1);
			}
		}
	}
	Global_1572908 = 0;
	if (Global_1681434.f_9 == 4)
	{
		if (func_600(unk_0x1788E93557766241()) || func_599(unk_0x1788E93557766241()))
		{
			Global_1572908 = 1;
		}
	}
	func_597();
	if (func_596())
	{
		func_595();
	}
	func_594();
	Global_1604248.f_58888 = 0;
	Global_1681394.f_4 = 0;
	unk_0xA16AD51E47717D01(unk_0x1788E93557766241(), 1);
	StringCopy(&(Global_1604248.f_58239), "", 32);
	unk_0x4B97E990CAFEB8CF();
	unk_0x8A5A9834DB717F2D(18);
	if (bParam3 && !func_593())
	{
		unk_0x6C5CE54692FA7CB8();
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1601431[iVar3] = 0;
		Global_1601398[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_2429337.f_5251), 3);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_2429337.f_5251), 3);
	}
	if (func_366() || (iVar0 != -1 && Global_1583725[iVar0 /*334*/].f_312))
	{
		func_592();
		func_591(1, 1);
		func_604(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1601582[iVar0 /*32*/].f_22 = 0;
			Global_1601582[iVar0 /*32*/].f_22.f_1 = 0;
		}
		func_590(1);
		if (func_589())
		{
			func_588();
		}
		if (!func_15(unk_0x1788E93557766241()))
		{
			func_586(4);
		}
		func_603();
		func_585(0);
		func_584();
		Global_1574169 = 0;
	}
	if (!func_583())
	{
		func_582();
		if (func_581())
		{
			if (func_580())
			{
				func_592();
			}
		}
		func_590(1);
		if (!func_579())
		{
			Global_2429337.f_5542 = 0;
			Global_2429337.f_5543 = 0;
			Global_2429337.f_5541 = 0;
			Global_2429337.f_5540 = 0;
		}
	}
	else
	{
		func_578(unk_0x1788E93557766241(), 0);
	}
	func_577((Global_1681434.f_9 != 4 && !func_583()));
	if (func_579())
	{
		Global_2429337.f_5631 = 1;
	}
	else
	{
		Global_2429337.f_5631 = 0;
	}
	if (!func_576())
	{
		Global_1681459.f_1473 = 0;
	}
	if (!func_583() && !func_576())
	{
		func_591(1, Global_1681434.f_9 != 4);
		func_604(1, 1, 0);
		func_575(0);
		func_574();
		Global_1574171 = 0;
		if (iVar0 != -1)
		{
			Global_1601582[iVar0 /*32*/].f_22 = 0;
			Global_1601582[iVar0 /*32*/].f_22.f_1 = 0;
		}
	}
	func_571(1, -1);
	if (func_570())
	{
		func_569();
	}
	if (unk_0x7A75BEF6DA1EDF3D())
	{
		unk_0x04329874265637E8();
	}
	if (!func_593() && !func_583())
	{
		func_565();
	}
	Global_1604248.f_58884 = 0;
	func_564();
	Global_1573532 = -1;
	Global_1601474 = -1;
	Global_1601468 = -1;
	Global_1601470 = -1;
	Global_1573537 = 0;
	Global_1601469 = 0;
	Global_1573686 = 0;
	Global_1573678 = 0;
	Global_1601475 = 0;
	func_563(0);
	func_562();
	Global_1583725[iVar0 /*334*/].f_312 = 0;
	Global_1601466 = 0f;
	Global_1601467 = 0f;
	Global_1573687 = 0;
	Global_1573688 = -1;
	Global_973958 = 0;
	Global_1573676 = 0;
	Global_1573284 = 0;
	func_561();
	unk_0x08E9BC7825B63619("WantedMusicDisabled", 0);
	unk_0x08E9BC7825B63619("DisableFlightMusic", 0);
	func_560(1);
	if (func_559())
	{
		func_558();
	}
	if (func_557())
	{
		if (func_555(unk_0x1788E93557766241()))
		{
			if (unk_0x2E8B9FEEE576BA13() < 2)
			{
				func_554();
				func_553(1);
			}
			else
			{
				func_552();
			}
			if (Global_1681434.f_9 != -1)
			{
				func_551();
			}
		}
		else if (Global_1583725[unk_0x1788E93557766241() /*334*/] == 0)
		{
			if (Global_1681434.f_9 != -1)
			{
				func_551();
			}
		}
	}
	bVar4 = func_16(iVar0);
	Global_1583725[iVar0 /*334*/].f_175 = 0;
	if (bVar4 && !func_576())
	{
		func_550();
	}
	if (!bVar4)
	{
		func_549(0);
	}
	if ((func_548() != 35 && func_548() != 34) && !func_547())
	{
		Global_1572864 = { 0f, 0f, 0f };
	}
	func_546();
	func_545();
	func_553(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1681434.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_544())
		{
			func_543(0, iVar6);
		}
	}
	unk_0x261B4CFE611972E1(0);
	if (unk_0x1DAD7CE53BEE7710())
	{
		switch (Global_1681434.f_9)
		{
			case 1:
				if (!bVar4)
				{
					func_541();
					func_540();
				}
				break;
			
			case 6:
				Global_1574169 = 0;
				if (!bVar4)
				{
					func_541();
				}
				func_540();
				Global_1681434 = 0;
				Global_1681434.f_22 = { 0f, 0f, 0f };
				Global_1583725[unk_0x1788E93557766241() /*334*/].f_12 = 0;
				StringCopy(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_213), "", 24);
				Global_2414327[unk_0x1788E93557766241() /*255*/].f_210 = { 0f, 0f, 0f };
				break;
			
			case 2:
				func_539(0);
				if (!func_538())
				{
					func_537(Global_1681434.f_16);
				}
				iVar5 = Global_1583725[iVar0 /*334*/].f_11;
				if (iVar5 != func_123())
				{
					if (unk_0x38FA37FE3518BA38(iVar5))
					{
						Global_2429337.f_5252 = { func_71(iVar5) };
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
				if ((iVar7 && func_538()) && unk_0x1BCC42769F2B1858() == 1)
				{
					Global_2429337.f_5252 = { func_536() };
				}
				if ((Global_1604248.f_19 > 1 && !func_535(Global_1604248.f_58247)) && !func_534(Global_1604248.f_58247))
				{
					func_533(Global_1583725[unk_0x1788E93557766241() /*334*/].f_84.f_28);
				}
				else
				{
					func_532();
				}
				break;
			
			case 3:
				func_539(0);
				iVar2 = 1;
				func_531();
				iVar5 = Global_1583725[iVar0 /*334*/].f_11;
				if (iVar5 != func_123())
				{
					if (unk_0x38FA37FE3518BA38(iVar5))
					{
						Global_2429337.f_5252 = { func_71(iVar5) };
					}
				}
				if ((Global_1604248.f_19 > 1 && !func_535(Global_1604248.f_58247)) && !func_534(Global_1604248.f_58247))
				{
					func_533(Global_1583725[unk_0x1788E93557766241() /*334*/].f_84.f_28);
				}
				else
				{
					func_532();
				}
				break;
			
			case 4:
				func_539(0);
				iVar2 = 1;
				if (func_530())
				{
					func_529();
				}
				else
				{
					Global_2429337.f_5542 = 0;
					Global_2429337.f_5543 = 0;
					Global_2429337.f_5541 = 0;
					Global_2429337.f_5540 = 0;
				}
				if (func_600(unk_0x1788E93557766241()) || func_599(unk_0x1788E93557766241()))
				{
					Global_786435.f_34++;
				}
				if (!unk_0x889D01384B54BCE3(Global_1604248.f_11, 22))
				{
					if (!unk_0x889D01384B54BCE3(Global_1604248.f_11, 15))
					{
						func_528(Global_1604248.f_58860);
					}
					else
					{
						func_527(Global_1604248.f_73758, Global_1604248.f_73759);
					}
					if (Global_1681434.f_13 > -1)
					{
						unk_0x74B5BEE69AA4B3E9(Global_1681434.f_13, Global_1681434.f_14, 0);
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
						Global_1583725[unk_0x1788E93557766241() /*334*/].f_84.f_28 = func_521();
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
				func_539(0);
				iVar2 = 1;
				func_531();
				break;
			
			case 8:
				if (!func_538())
				{
					func_537(Global_1681434.f_16);
				}
				break;
			
			case 9:
				func_539(0);
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
		Global_1574169 = 0;
	}
	if (iVar2 || func_599(unk_0x1788E93557766241()))
	{
		if ((func_500(unk_0x1788E93557766241()) || func_600(unk_0x1788E93557766241())) || func_599(unk_0x1788E93557766241()))
		{
			if (Global_1690445 > 0)
			{
				Global_2429337.f_1.f_2823.f_13 = Global_1690445;
				Global_2429337.f_1.f_2823 = { Global_1690445.f_1 };
			}
		}
		else
		{
			func_499();
		}
	}
	Global_2429337.f_1.f_840 = 0;
	unk_0x29DB79DD4D939B38(&Global_1573288, 0);
	func_498(0);
	Global_1573542 = 0;
	Global_1573671 = -1;
	Global_1601397 = 0;
	Global_1312436 = 0;
	Global_1681434.f_1 = 0;
	Global_1681434.f_2 = 0;
	if (func_497() == 0)
	{
		if (Global_1681434.f_9 == -1 && bVar4 == 0)
		{
			func_489(0);
		}
		else
		{
			Global_1681434.f_9 = -1;
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
	if (!unk_0x7A75BEF6DA1EDF3D())
	{
		unk_0x45EB41D7681A89ED(1);
	}
	if (func_497() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if ((((!func_483(Global_1583725[iVar0 /*334*/]) && !func_593()) && !bVar4) && !func_349()) && !func_583())
			{
				func_482(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_481();
	Global_1681434.f_1 = 0;
	if (!func_557())
	{
		func_480();
	}
	if (Global_1583725[iVar0 /*334*/] != -1)
	{
		iParam2 = iParam2;
		if (func_479(Global_1583725[iVar0 /*334*/]))
		{
			if (unk_0x54CE0989F263D8A3())
			{
				iVar20 = func_461(0);
				func_458(1206, -1);
				func_453(joaat("mpply_mgame_cheat_end"), iVar20);
				if (iVar20 > 0)
				{
					func_453(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		unk_0xBE2BE1CD0E7892F9(unk_0x1788E93557766241());
	}
	func_451();
	if (Global_1681434 == 0)
	{
		if (!bVar4)
		{
			Global_1583725[iVar0 /*334*/].f_11 = -1;
			Global_1583725[iVar0 /*334*/].f_12 = 0;
		}
	}
	if (bVar4)
	{
		func_482(0);
		Global_1583725[iVar0 /*334*/].f_12 = 1;
		Global_1583725[iVar0 /*334*/].f_11 = func_450(unk_0x1788E93557766241());
		unk_0x7BED12BA17D9BF33(0);
		func_447(0, 0, 1);
		if (func_446())
		{
			func_444();
		}
	}
	if ((Global_1583725[iVar0 /*334*/] < 10 && Global_1583725[iVar0 /*334*/] != -1) && !func_349())
	{
		if (!unk_0x06771AF7795B3ECF(&(Global_1583725[iVar0 /*334*/].f_129)) && Global_1583725[iVar0 /*334*/] != 5)
		{
			func_441(&(Global_1583725[iVar0 /*334*/].f_129));
		}
	}
	Global_1583725[iVar0 /*334*/] = -1;
	Global_1583725[iVar0 /*334*/].f_39.f_2 = -1;
	Global_1583725[iVar0 /*334*/].f_39.f_16 = -1;
	Global_1583725[iVar0 /*334*/].f_39.f_1 = -1;
	Global_1604248 = 0;
	if (!bVar4)
	{
		func_440(0);
	}
	Global_1583725[iVar0 /*334*/].f_39.f_18 = 0;
	unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x065E5245E0BD74E4() /*334*/].f_310), 0);
	unk_0x1025C668D9C45E9D(0, 0);
	if (iVar1 != 6)
	{
		unk_0xB0F2C1CA020DA7DA();
		Global_2436299 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1583725[iVar0 /*334*/].f_129), sVar21, 24);
		StringCopy(&(Global_1583725[iVar0 /*334*/].f_135), sVar21, 24);
		func_439();
	}
	StringCopy(&(Global_1594414[iVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1583725[iVar0 /*334*/].f_149), sVar21, 64);
	Global_1601582[iVar0 /*32*/].f_19 = { Var22 };
	Global_1573681 = 0;
	Global_1573682 = 0;
	Global_1573296 = -1;
	Global_1681381 = 1;
	bVar24 = false;
	func_438();
	func_437();
	func_436();
	if (func_435())
	{
		func_434();
	}
	if (func_433() && unk_0x7A75BEF6DA1EDF3D())
	{
		func_432();
		func_323(unk_0x1788E93557766241(), 0, 57348, 1);
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
		if (!Global_1583725[unk_0x1788E93557766241() /*334*/].f_12 && !func_576())
		{
			if (unk_0x7A75BEF6DA1EDF3D())
			{
				if (func_446())
				{
					func_421();
				}
				else
				{
					if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
					{
						Global_2429337.f_2841.f_195 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
					}
					func_420();
					func_603();
					func_419(6);
					func_540();
					if (bVar4)
					{
						func_585(0);
					}
				}
				func_418();
				func_417();
				func_416();
				if (Global_2429337.f_2841.f_4 == 2)
				{
					Global_2429337.f_2841.f_4 = 1;
				}
				if (func_235(unk_0x1788E93557766241(), 0))
				{
					func_415();
				}
				func_414();
				Global_2429337.f_2841 = 0;
			}
			else
			{
				func_413();
				func_430();
			}
		}
		else
		{
			if (!func_579() && !func_576())
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
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x31EF25060710376C())
		{
			if (!unk_0x1B0EC10E05C58A18())
			{
				if (!func_402())
				{
					if (!bVar24)
					{
						if (func_15(unk_0x1788E93557766241()))
						{
							unk_0x6930AFF3E7789D8A();
							unk_0x01D93BDF9352B81B();
						}
					}
				}
			}
		}
	}
	if (!func_349())
	{
		StringCopy(&(Global_1604248.f_58254), "", 64);
	}
	if (!func_576())
	{
		func_394();
	}
	func_393();
	if (!func_583() && !func_579())
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
		if (func_557())
		{
		}
		else if ((((!func_583() && !func_579()) && !func_576()) && Global_1681434.f_9 != 9) && Global_1681434.f_9 != 4)
		{
			func_525(0, 1);
		}
	}
	unk_0x8C4265EEC0D6FD1A();
	if (!func_391(unk_0x1788E93557766241()))
	{
		func_390();
	}
	func_389(1);
	if ((((bParam0 && !func_388()) && !func_583()) && !Global_262145.f_4835) && !func_386())
	{
		unk_0x8B13EDE6164A545E();
	}
	unk_0x24469800558B4973(5, 1);
	unk_0x24469800558B4973(3, 1);
	func_378(&uVar0, -1);
	if ((func_28() == 0 && !func_107()) && !func_583())
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
	if (!Global_1689998 == iParam0)
	{
		Global_1689998 = iParam0;
	}
}

void func_373(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_375(iParam0, iParam1))
	{
		iVar0 = func_374();
		Global_2435463[iVar0] = iParam0;
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
		if (Global_2435463[iVar1] == 0)
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
	if (Global_1315879)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315891) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	unk_0xD0E2BFCE93AE3ABD(&(Global_965784.f_8), 22);
}

bool func_377()
{
	return unk_0x889D01384B54BCE3(Global_965784.f_8, 21);
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
	uVar1 = unk_0x7058289E8DD601D6(uVar0);
	if (func_380())
	{
		if (unk_0x889D01384B54BCE3(uVar1, 1))
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
	uVar2 = unk_0x7058289E8DD601D6(uVar1);
	if (unk_0x889D01384B54BCE3(uVar2, 1))
	{
		func_458(1201, iParam1);
		func_453(joaat("mpply_dm_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0x29DB79DD4D939B38(&uVar2, 1);
		bVar0 = true;
	}
	if (unk_0x889D01384B54BCE3(uVar2, 2))
	{
		func_458(1203, iParam1);
		func_453(joaat("mpply_race_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0x29DB79DD4D939B38(&uVar2, 2);
		bVar0 = true;
	}
	if (unk_0x889D01384B54BCE3(uVar2, 3))
	{
		func_458(1113, iParam1);
		func_453(joaat("mpply_mc_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0x29DB79DD4D939B38(&uVar2, 3);
		bVar0 = true;
	}
	if (unk_0x889D01384B54BCE3(uVar2, 4))
	{
		func_458(1205, iParam1);
		func_453(joaat("mpply_mgame_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0x29DB79DD4D939B38(&uVar2, 4);
		bVar0 = true;
	}
	if (unk_0x889D01384B54BCE3(uVar2, 5))
	{
		func_458(1916, iParam1);
		func_453(joaat("mpply_cap_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0x29DB79DD4D939B38(&uVar2, 5);
		bVar0 = true;
	}
	if (unk_0x889D01384B54BCE3(uVar2, 6))
	{
		func_458(1918, iParam1);
		func_453(joaat("mpply_sur_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0x29DB79DD4D939B38(&uVar2, 6);
		bVar0 = true;
	}
	if (unk_0x889D01384B54BCE3(uVar2, 7))
	{
		func_458(1920, iParam1);
		func_453(joaat("mpply_lts_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0x29DB79DD4D939B38(&uVar2, 7);
		bVar0 = true;
	}
	if (unk_0x889D01384B54BCE3(uVar2, 8))
	{
		func_458(1922, iParam1);
		func_453(joaat("mpply_para_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0x29DB79DD4D939B38(&uVar2, 8);
		bVar0 = true;
	}
	if (unk_0x889D01384B54BCE3(uVar2, 9))
	{
		func_458(2743, iParam1);
		func_453(joaat("mpply_heist_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0x29DB79DD4D939B38(&uVar2, 9);
		bVar0 = true;
	}
	if (unk_0x889D01384B54BCE3(uVar2, 26))
	{
		func_458(1924, iParam1);
		func_453(joaat("mpply_fmevn_cheat_start"), 2);
		func_453(joaat("mpply_activity_started"), 1);
		unk_0x29DB79DD4D939B38(&uVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		unk_0xD7E6FF46C7CE81D1(uVar2, iParam1);
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
	if (func_600(unk_0x1788E93557766241()) || func_599(unk_0x1788E93557766241()))
	{
		if (func_387() || func_579())
		{
			return 1;
		}
	}
	return 0;
}

bool func_387()
{
	return unk_0x889D01384B54BCE3(Global_1315798, 4);
}

bool func_388()
{
	return Global_1573684;
}

void func_389(int iParam0)
{
	Global_2429337.f_5539 = iParam0;
}

void func_390()
{
	unk_0xCC68D69AF0F39112(6);
	unk_0xABC4F2A6D7D56CF4(1f);
	unk_0x22FC4AE6C40E4E0B(1);
}

int func_391(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1602607[iVar0 /*12*/] != -1;
	}
	return 0;
}

void func_392()
{
	Global_2428577.f_26.f_39 = 0;
}

void func_393()
{
	Global_1681434.f_6 = 0;
}

void func_394()
{
	struct<3> Var0;
	struct<2> Var3;
	int iVar5;
	
	if (!func_400(func_401(), Var0))
	{
		Var3.f_0 = 202;
		Var3.f_1 = unk_0x1788E93557766241();
		iVar5 = func_399(1, 1);
		if (!iVar5 == 0)
		{
			func_396();
			func_395(0);
			unk_0xD311A006D41D0704(1, &Var3, 2, iVar5);
		}
	}
}

void func_395(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2422491.f_3121 = unk_0x519586565311459B();
	}
	Global_2422491.f_3005 = iParam0;
}

void func_396()
{
	func_398();
	func_397();
}

void func_397()
{
	struct<72> Var0;
	
	if (func_53(unk_0x1788E93557766241()))
	{
		Var0.f_6 = 32;
		Global_2414327[unk_0x1788E93557766241() /*255*/].f_121 = { Var0 };
	}
}

void func_398()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2422491.f_3005.f_79 };
	Var0.f_95 = { Global_2422491.f_3005.f_95 };
	Global_2422491.f_3005 = { Var0 };
}

var func_399(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x42C0B50857BF923B(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1788E93557766241() || iParam0)
			{
				if (bParam1)
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar1);
				}
				else if (!func_235(iVar2, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar1);
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
	return Global_2413575[unk_0x1788E93557766241() /*10*/];
}

bool func_402()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 18);
}

void func_403(bool bParam0)
{
	struct<57> Var0;
	int iVar57;
	
	Global_2429337.f_1.f_2796 = 0;
	Global_2429337.f_1.f_2797 = 0;
	Global_2429337.f_1.f_2819 = 0;
	Global_2429337.f_1.f_2803 = 0;
	Global_2429337.f_1.f_2804 = 0;
	Global_2429337.f_1.f_2807 = 0;
	Global_2429337.f_1.f_2808 = 0;
	Global_2429337.f_1.f_2806 = -1;
	Global_2429337.f_1.f_2809 = -1;
	Global_2429337.f_1.f_2811 = 0;
	Global_2429337.f_1.f_2812 = 0;
	Global_2429337.f_1.f_2813 = 0;
	Global_2429337.f_1.f_2814 = 0;
	Global_2429337.f_1.f_2815 = 0;
	Global_2429337.f_1.f_2816 = 0;
	Global_2429337.f_1.f_2820 = -1;
	if (bParam0)
	{
		Global_2429337.f_1.f_2817 = -1;
		Global_2429337.f_1.f_2818 = -1;
	}
	Global_2429337.f_1.f_2839 = 0;
	func_404();
	Var0.f_33 = 2;
	Var0.f_36 = 7;
	iVar57 = 0;
	while (iVar57 <= 31)
	{
		Global_2429337.f_1.f_843[iVar57 /*57*/] = { Var0 };
		iVar57++;
	}
	Global_2425893.f_20 = -1;
}

void func_404()
{
	Global_2425893.f_19 = 0;
}

void func_405()
{
	Global_2428577.f_565 = 0;
}

void func_406()
{
	Global_2428577.f_566 = 0;
	func_407();
}

void func_407()
{
	int iVar0;
	
	iVar0 = unk_0x1788E93557766241();
	if (iVar0 >= 0)
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[iVar0 /*334*/].f_84.f_32), 6);
	}
}

void func_408()
{
	Global_2428577 = 0;
	Global_2428577.f_2 = 0;
}

bool func_409()
{
	return Global_2428577.f_565;
}

bool func_410()
{
	return Global_1690436;
}

bool func_411()
{
	return unk_0x889D01384B54BCE3(Global_2428577, 1);
}

bool func_412()
{
	return unk_0x889D01384B54BCE3(Global_2428577, 16);
}

void func_413()
{
	unk_0x29DB79DD4D939B38(&Global_2428577, 21);
}

void func_414()
{
	Global_2429337.f_2841.f_34 = 1;
}

void func_415()
{
	Global_2429337.f_1.f_2822 = 1;
}

void func_416()
{
	Global_2428577.f_698 = 1;
}

void func_417()
{
	Global_2429337.f_1.f_2821 = 1;
}

void func_418()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2428577, 21);
}

void func_419(int iParam0)
{
	Global_2429337.f_1.f_836 = iParam0;
	Global_2414327[unk_0x1788E93557766241() /*255*/].f_209 = iParam0;
}

void func_420()
{
	struct<24> Var0;
	
	Var0 = 18;
	Var0.f_20 = -1;
	Global_2425917 = { Var0 };
}

void func_421()
{
	Global_2429337.f_2841.f_1 = 1;
}

void func_422()
{
	Global_2429337.f_2841.f_1 = 0;
}

bool func_423()
{
	return Global_2428577.f_590;
}

bool func_424()
{
	return Global_2428577.f_580;
}

bool func_425()
{
	return Global_2428577.f_567;
}

bool func_426()
{
	return Global_2428577.f_576;
}

bool func_427()
{
	return unk_0x889D01384B54BCE3(Global_2428577.f_2, 15);
}

bool func_428()
{
	return unk_0x889D01384B54BCE3(Global_2428577, 20);
}

bool func_429()
{
	return unk_0x889D01384B54BCE3(Global_2428577, 2);
}

void func_430()
{
	Global_2429337.f_2841.f_34 = 0;
}

bool func_431()
{
	return unk_0x889D01384B54BCE3(Global_965784.f_8, 8);
}

void func_432()
{
	Global_2428577.f_595 = 0;
}

var func_433()
{
	return Global_2428577.f_595;
}

void func_434()
{
	Global_2428577.f_625 = 0;
}

bool func_435()
{
	return Global_2428577.f_625;
}

void func_436()
{
	Global_2429337.f_1.f_837 = 0;
	Global_2429337.f_1.f_839 = 0;
}

void func_437()
{
	unk_0x29DB79DD4D939B38(&Global_2428577, 4);
}

void func_438()
{
	unk_0x29DB79DD4D939B38(&Global_2428577, 28);
}

void func_439()
{
	int iVar0;
	
	iVar0 = unk_0x1788E93557766241();
	unk_0x29DB79DD4D939B38(&(Global_1583725[iVar0 /*334*/].f_13.f_1), 4);
	unk_0x29DB79DD4D939B38(&(Global_1583725[iVar0 /*334*/].f_13.f_1), 5);
	unk_0x29DB79DD4D939B38(&(Global_1583725[iVar0 /*334*/].f_13.f_1), 7);
	unk_0x29DB79DD4D939B38(&(Global_1583725[iVar0 /*334*/].f_13.f_1), 8);
	unk_0x29DB79DD4D939B38(&(Global_1583725[iVar0 /*334*/].f_13.f_1), 9);
	unk_0x29DB79DD4D939B38(&(Global_1583725[iVar0 /*334*/].f_13.f_1), 10);
	unk_0x29DB79DD4D939B38(&(Global_1583725[iVar0 /*334*/].f_13.f_1), 11);
	unk_0x29DB79DD4D939B38(&(Global_1583725[iVar0 /*334*/].f_13.f_1), 12);
	unk_0x29DB79DD4D939B38(&(Global_1583725[iVar0 /*334*/].f_13.f_1), 13);
}

void func_440(int iParam0)
{
	unk_0x7BED12BA17D9BF33(iParam0);
}

void func_441(var uParam0)
{
	var uVar0;
	
	if ((!func_443() && func_442(120, -1)) && !func_349())
	{
		unk_0x5CF7087C79115A9C(uParam0, &uVar0, 13);
		if (unk_0x6812E31A0CF4755C(&uVar0, 13))
		{
			if (unk_0x765DD998E5AD03DC(&uVar0))
			{
			}
		}
	}
}

int func_442(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2471573[iParam0 /*5*/][func_25(iParam1)];
	if (unk_0xD7A6AA341268D26A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_443()
{
	int iVar0;
	
	iVar0 = unk_0x1788E93557766241();
	if ((Global_1583725[iVar0 /*334*/].f_39.f_2 == 63 || Global_1583725[iVar0 /*334*/].f_39.f_2 == 62) || Global_1583725[iVar0 /*334*/].f_39.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_444()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_965784.f_8), 8);
	func_445();
}

void func_445()
{
	Global_2428577.f_750 = 1;
}

bool func_446()
{
	return Global_2429337.f_2841.f_2;
}

void func_447(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE44A580B551C3645(iParam1))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x538DF9E5B1DF01EB(iParam1))
		{
			if (unk_0x2303B9FE7CF81971(iParam1))
			{
				if (!unk_0x6871380D51134D0D(unk_0x1788E93557766241(), unk_0x5D6FBED3ADADE26A(iParam1)))
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
			else if (!unk_0x889D01384B54BCE3(Global_2359301.f_66, 1))
			{
				if (unk_0x889D01384B54BCE3(Global_2359301.f_66, 2))
				{
					iVar1 = 0;
					while (iVar1 < 7)
					{
						unk_0x59EC72010020AABE(iVar1, Global_2359301.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xD0E2BFCE93AE3ABD(&(Global_2359301.f_66), 1);
			}
		}
		if (func_235(unk_0x1788E93557766241(), 0))
		{
			unk_0xD75F2FC4A3C58C24(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x8A46C2F6860C633C(iParam0, iParam1);
		}
		unk_0x4B04404620FEF52D(iParam0, iParam1);
		func_448(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_448(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xA65D74B65C28C5D7(iVar0, iParam1, 1);
	}
}

void func_449()
{
	int iVar0;
	
	if (!unk_0xD3E5533313BF12B6())
	{
		if (!unk_0x889D01384B54BCE3(Global_2359301.f_66, 2))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				Global_2359301.f_58[iVar0] = unk_0x95AD511976EEFC6B(iVar0);
				iVar0++;
			}
			unk_0xD0E2BFCE93AE3ABD(&(Global_2359301.f_66), 2);
			unk_0xD0E2BFCE93AE3ABD(&(Global_2359301.f_66), 0);
		}
	}
}

var func_450(int iParam0)
{
	return Global_1583725[iParam0 /*334*/].f_84.f_2;
}

void func_451()
{
	if (func_452())
	{
		unk_0xFD1E0AEC770DAF2E(1);
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
		unk_0x680350124CC21957(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1336371 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1336373 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1336373 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1336374 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1336375 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1336376 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1336377 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1336378 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1336379 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1336380 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1336381 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1336382 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1336383 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1336384 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1336385 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1336386 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1336387 = iParam1;
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
		unk_0x680350124CC21957(iVar0, iParam1, 1);
	}
}

int func_456(int iParam0)
{
	if (Global_1336370)
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
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
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
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1336437[func_25(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1336443[func_25(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1336449[func_25(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1336455[func_25(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1336413[func_25(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1336419[func_25(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1336425[func_25(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1336431[func_25(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1336389[func_25(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1336395[func_25(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1336401[func_25(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1336407[func_25(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1336461[func_25(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1336467[func_25(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1336473[func_25(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1336479[func_25(iParam2)] = iParam1;
			break;
		
		case 1297:
			Global_1336485[func_25(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1336491[func_25(iParam2)] = iParam1;
			break;
		
		case 1272:
			Global_1336497[func_25(iParam2)] = iParam1;
			break;
		
		case 1869:
			Global_2473821[0 /*6*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2260:
			Global_2473821[1 /*6*/][func_25(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1336503[func_25(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1336509[func_25(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1336515[func_25(iParam2)] = iParam1;
			break;
		
		case 1230:
			Global_1336521[func_25(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_460(int iParam0)
{
	if (Global_1336370)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1297:
			case 634:
			case 1272:
			case 759:
			case 760:
			case 761:
			case 1230:
			case 1869:
			case 2260:
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
	if (Global_2436182 == 0)
	{
		return 0;
	}
	if (func_478())
	{
		if (unk_0x7A75BEF6DA1EDF3D() || (func_477() || func_473()))
		{
			Global_2435560 = 1;
		}
	}
	Global_2436182 = 0;
	if (Global_1318721)
	{
		iVar0 = 1;
	}
	if (Global_2435560)
	{
		iVar0 = 1;
	}
	if (Global_2435559)
	{
		iVar0 = 1;
	}
	if (func_472(Global_96467.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2435486)
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
	if (Global_1318745 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_349())
	{
		iVar0 = 0;
	}
	if (Global_2435623)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_468())
		{
			if (Global_1604248.f_58886 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_235(unk_0x1788E93557766241(), 0))
	{
		iVar0 = 0;
	}
	if (func_466())
	{
		iVar0 = 0;
	}
	if ((Global_2435560 || Global_2435559) || Global_1318721)
	{
		if (func_473())
		{
			iVar0 = 0;
		}
	}
	Global_2435623 = 0;
	Global_2435559 = 0;
	Global_2435560 = 0;
	Global_1318721 = 0;
	Global_2435486 = 0;
	func_464(&(Global_96467.f_1), 32);
	func_463(512);
	func_462(128);
	return iVar0;
}

void func_462(int iParam0)
{
	Global_96524 = (Global_96524 - (Global_96524 && iParam0));
}

void func_463(int iParam0)
{
	Global_96525 = (Global_96525 - (Global_96525 && iParam0));
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
	if (((Global_1573706 || Global_1573677) || func_235(unk_0x1788E93557766241(), 0)) || func_467())
	{
		return 1;
	}
	return 0;
}

bool func_467()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18, 14);
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
	return Global_2429337.f_1.f_2817;
}

bool func_470(int iParam0)
{
	return (Global_96524 && iParam0) != 0;
}

bool func_471(int iParam0)
{
	return (Global_96525 && iParam0) != 0;
}

bool func_472(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_473()
{
	if (func_476(Global_2437331))
	{
		return 0;
	}
	if (func_474(unk_0x1788E93557766241(), 146))
	{
		return 1;
	}
	return 0;
}

int func_474(int iParam0, int iParam1)
{
	if (Global_1602607[iParam0 /*12*/] == iParam1)
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
		return unk_0x889D01384B54BCE3(Global_1602607[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

int func_476(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_9042)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_9044)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_9041)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_9045)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_9046)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_9047)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_9043)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_9048)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_9049)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_9050)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_9051)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_477()
{
	if (func_476(Global_2437331))
	{
		return 0;
	}
	if (func_475(unk_0x1788E93557766241()))
	{
		return 1;
	}
	return 0;
}

bool func_478()
{
	return unk_0x889D01384B54BCE3(Global_1312423, 0);
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
	if (unk_0x53D28141CF743B83(unk_0xE42F65BB42C609AA(unk_0x1788E93557766241()), "MissionType"))
	{
		unk_0x46AEC73E8E96E8E5(unk_0xE42F65BB42C609AA(unk_0x1788E93557766241()), "MissionType");
	}
	if (unk_0x53D28141CF743B83(unk_0xE42F65BB42C609AA(unk_0x1788E93557766241()), "MatchId"))
	{
		unk_0x46AEC73E8E96E8E5(unk_0xE42F65BB42C609AA(unk_0x1788E93557766241()), "MatchId");
	}
	if (unk_0x53D28141CF743B83(unk_0xE42F65BB42C609AA(unk_0x1788E93557766241()), "TeamId"))
	{
		unk_0x46AEC73E8E96E8E5(unk_0xE42F65BB42C609AA(unk_0x1788E93557766241()), "TeamId");
	}
}

void func_481()
{
	Global_2428577.f_571 = 0;
	unk_0xA336BCFDD380F63E();
}

void func_482(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1583725[unk_0x1788E93557766241() /*334*/].f_35)
		{
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_35 = 1;
		}
	}
	else if (Global_1583725[unk_0x1788E93557766241() /*334*/].f_35)
	{
		Global_1583725[unk_0x1788E93557766241() /*334*/].f_35 = 0;
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
	Global_2428577.f_711 = 0;
}

bool func_485()
{
	return Global_2428577.f_711;
}

void func_486()
{
	Global_2428577.f_715 = 0;
}

bool func_487()
{
	return Global_2428577.f_715;
}

void func_488()
{
	unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_84.f_32), 1);
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
	if (unk_0x06771AF7795B3ECF(&(Global_1604248.f_58534)))
	{
		return 1;
	}
	if (func_493())
	{
		return 1;
	}
	func_492();
	unk_0xCD50F5CC8EB9CD34();
	iVar0 = unk_0xEF4192C98571132D();
	if (iParam0 == 0)
	{
		Global_1681394++;
		unk_0x9BA5D72F5CCBAB5B(iVar0, "quit", Global_1681394);
		unk_0x9BA5D72F5CCBAB5B(iVar0, "quitd", 1);
		unk_0x9BA5D72F5CCBAB5B(iVar0, "ply", Global_1681394.f_2);
		unk_0x9BA5D72F5CCBAB5B(iVar0, "lp", unk_0x5C7391B560C251C7());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1681419.f_1++;
		unk_0x9BA5D72F5CCBAB5B(iVar0, "quit", Global_1681419.f_1);
		unk_0x9BA5D72F5CCBAB5B(iVar0, "quitd", 1);
		unk_0x9BA5D72F5CCBAB5B(iVar0, "ply", Global_1681419.f_4);
		unk_0x9BA5D72F5CCBAB5B(iVar0, "lp", unk_0x5C7391B560C251C7());
	}
	if (iParam0 == 0)
	{
		if (unk_0x002DF2800B0A9E76(&(Global_1604248.f_58534), 0f, func_491(iParam0)))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (unk_0x002DF2800B0A9E76(&(Global_965784.f_42), 0f, func_491(iParam0)))
		{
		}
	}
	func_490();
	func_492();
	unk_0x12C7F3E4DDB79E93();
	return 1;
}

void func_490()
{
	Global_1681394 = 0;
	Global_1681394.f_2 = 0;
	Global_1681394.f_8 = 0;
	Global_1681394.f_3 = 0;
	Global_1681394.f_6 = 0;
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
	if (unk_0xEF4192C98571132D() != 0)
	{
		unk_0x2F698EF7465EAD63();
	}
}

int func_493()
{
	if (unk_0xCF2CECF28900F755())
	{
		return 1;
	}
	else if (unk_0x57626C402F58B179())
	{
		return 1;
	}
	else if (unk_0x7C9A64C089AF7696())
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
	if (unk_0xECA1708601B2AF8E() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_496()
{
	return Global_2435628;
}

bool func_497()
{
	return Global_2428577.f_607;
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
	Global_2429337.f_1.f_2823.f_13 = 0;
	Global_2429337.f_1.f_2823 = 0;
	Global_2429337.f_1.f_2823.f_1 = 0;
	Global_2429337.f_1.f_2823.f_2 = 0;
	Global_2429337.f_1.f_2823.f_3 = 0;
	Global_2429337.f_1.f_2823.f_4 = 0;
	Global_2429337.f_1.f_2823.f_5 = 0;
	Global_2429337.f_1.f_2823.f_6 = 0;
	Global_2429337.f_1.f_2823.f_7 = 0;
	Global_2429337.f_1.f_2823.f_8 = 0;
	Global_2429337.f_1.f_2823.f_9 = 0;
	Global_2429337.f_1.f_2823.f_10 = 0;
	Global_2429337.f_1.f_2823.f_11 = 0;
	Global_2429337.f_1.f_2823.f_12 = 0;
}

bool func_500(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 1;
}

void func_501()
{
	Global_2428577.f_590 = 1;
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
	func_603();
	Global_1681434.f_9 = iParam0;
	switch (Global_1681434.f_9)
	{
		case 1:
			Global_1681434 = 0;
			Global_1681434.f_22 = { 0f, 0f, 0f };
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_12 = 0;
			break;
		
		case 2:
			Global_1681434 = 1;
			Global_1681434.f_22 = { Param1 };
			Global_1681434.f_16 = { Param4 };
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_12 = 0;
			break;
		
		case 3:
			if (Global_1583725[unk_0x1788E93557766241() /*334*/] == 0 || Global_1583725[unk_0x1788E93557766241() /*334*/] == 1)
			{
				func_513(Global_1583725[unk_0x1788E93557766241() /*334*/].f_84.f_28);
			}
			func_512();
			Global_1681434 = 1;
			Global_1681434.f_22 = { Param1 };
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_12 = 0;
			break;
		
		case 4:
			func_511();
			func_512();
			Global_1681434 = 1;
			if (func_599(unk_0x1788E93557766241()) || func_600(unk_0x1788E93557766241()))
			{
				func_510(1);
			}
			if ((func_509() || func_530()) && func_524())
			{
				Global_1681434.f_16 = { func_523() };
				Param4 = { Global_1681434.f_16 };
				Global_1681434.f_22 = { func_508() };
			}
			else if (func_509() || func_530())
			{
				if (func_507())
				{
					Global_1681434.f_22 = { func_506() };
				}
				else
				{
					Global_1681434.f_22 = { Param1 };
				}
			}
			else
			{
				Global_1681434.f_22 = { Param1 };
			}
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_12 = 1;
			break;
		
		case 5:
			func_511();
			func_505();
			func_512();
			if (func_599(unk_0x1788E93557766241()) || func_600(unk_0x1788E93557766241()))
			{
				func_510(1);
			}
			Global_1681434 = 1;
			Global_1681434.f_22 = { Param1 };
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_12 = 1;
			break;
		
		case 8:
			Global_1681434 = 0;
			Global_1681434.f_22 = { Param1 };
			Global_1681434.f_16 = { Param4 };
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_12 = 0;
			break;
		
		case 9:
			func_512();
			Global_1681434 = 1;
			Global_1681434.f_22 = { Param1 };
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_12 = 1;
			break;
		
		case 10:
			Global_1681434 = 0;
			Global_1681434.f_22 = { 0f, 0f, 0f };
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_12 = 0;
			break;
	}
	func_504();
	func_503();
	func_419(Global_1681434.f_9);
	Global_2414327[unk_0x1788E93557766241() /*255*/].f_210 = { Global_1681434.f_22 };
	Global_2414327[unk_0x1788E93557766241() /*255*/].f_213 = { Param4 };
}

void func_503()
{
	unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18), 23);
}

void func_504()
{
	unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18), 12);
}

void func_505()
{
	Global_1681434.f_4 = 1;
}

Vector3 func_506()
{
	return Global_2428577.f_26.f_491;
}

int func_507()
{
	if ((Global_2428577.f_26.f_491 != 0f || Global_2428577.f_26.f_491.f_1 != 0f) || Global_2428577.f_26.f_491.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_508()
{
	return Global_2428577.f_26.f_494;
}

var func_509()
{
	return Global_2428577.f_26.f_49;
}

void func_510(int iParam0)
{
	Global_2429337.f_5538 = iParam0;
}

void func_511()
{
	Global_1681434.f_3 = 1;
}

void func_512()
{
	Global_1681434.f_7 = 1;
}

void func_513(var uParam0)
{
	Global_1681434.f_10 = uParam0;
}

void func_514()
{
	Global_1583725[unk_0x1788E93557766241() /*334*/].f_5 = 0;
}

void func_515()
{
	Global_1681434.f_10 = -1;
}

void func_516()
{
	Global_1681434.f_4 = 0;
}

void func_517()
{
	Global_1681434.f_3 = 0;
}

void func_518()
{
	Global_2429337.f_2841.f_2 = 1;
}

void func_519()
{
	Global_2428577.f_26.f_47 = 0;
}

void func_520()
{
	Global_2428577.f_26.f_41 = -1;
}

int func_521()
{
	return Global_2428577.f_26.f_41;
}

void func_522(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0x06771AF7795B3ECF(&uParam0))
	{
		return;
	}
	if (!Global_2398395)
	{
		return;
	}
	if (!unk_0x9BA82E09A986BA4B(&uParam0, &(Global_2398395.f_1)))
	{
		return;
	}
	Global_2398461 = 1;
}

struct<6> func_523()
{
	return Global_2428577.f_26.f_11;
}

bool func_524()
{
	return Global_2428577.f_26.f_51;
}

void func_525(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (unk_0x75FDF805732D54C6())
				{
					unk_0x2CC0D9C8C20EA474();
				}
			}
			break;
		
		case 1:
			unk_0x74B5BEE69AA4B3E9(6, 0, 0);
			break;
		
		case 2:
			unk_0x74B5BEE69AA4B3E9(12, 0, 0);
			break;
		
		case 3:
			unk_0x74B5BEE69AA4B3E9(21, 0, 0);
			break;
		
		case 4:
			unk_0x74B5BEE69AA4B3E9(0, 0, 0);
			break;
		
		default:
			break;
	}
}

int func_526()
{
	return Global_1681434.f_12;
}

void func_527(var uParam0, var uParam1)
{
	Global_1681434.f_13 = uParam0;
	Global_1681434.f_14 = uParam1;
}

void func_528(var uParam0)
{
	Global_1681434.f_12 = uParam0;
}

void func_529()
{
	Global_2428577.f_26.f_48 = 1;
}

bool func_530()
{
	return Global_2428577.f_26.f_47;
}

void func_531()
{
	if (unk_0x06771AF7795B3ECF(&(Global_2391053.f_4.f_3)))
	{
		return;
	}
	if (!unk_0x06771AF7795B3ECF(&(Global_2397695.f_3)))
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_2397695.f_3), &(Global_2391053.f_4.f_3)))
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
	Global_1681434.f_5 = 0;
	Global_1681434.f_11 = -1;
}

void func_533(var uParam0)
{
	Global_1681434.f_5 = 1;
	Global_1681434.f_11 = uParam0;
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
		if (iParam0 == Global_262145.f_7262[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_535(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7270[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<13> func_536()
{
	struct<13> Var0;
	
	unk_0x5F6C6C0B1A1FCF43(&Var0, 13);
	return Var0;
}

void func_537(struct<6> Param0)
{
	if (unk_0x06771AF7795B3ECF(&Param0))
	{
		return;
	}
	Global_1311839 = 1;
	Global_1311839.f_1 = { Param0 };
}

bool func_538()
{
	return Global_2428577.f_9;
}

void func_539(int iParam0)
{
	if (unk_0x1DAD7CE53BEE7710())
	{
		unk_0x6F47F27FF551BAB2(iParam0);
		unk_0x5533D21CDB735DF0(0);
	}
}

void func_540()
{
	Global_973957 = -1;
}

void func_541()
{
	func_542(-1f);
}

void func_542(float fParam0)
{
	if (unk_0x1DAD7CE53BEE7710())
	{
		unk_0x6F47F27FF551BAB2(fParam0);
		unk_0x5533D21CDB735DF0(0);
	}
}

void func_543(int iParam0, int iParam1)
{
	unk_0xA54710CE1A10C42E(iParam0);
	unk_0x5554E463A08D6340(iParam0);
	if (unk_0x874FA7EB46D9C02A())
	{
		unk_0x3972E1BF9B195A47(iParam1);
	}
}

bool func_544()
{
	return Global_2428577.f_616;
}

void func_545()
{
	if (unk_0x889D01384B54BCE3(Global_2359301, 24))
	{
		unk_0x29DB79DD4D939B38(&Global_2359301, 24);
	}
}

void func_546()
{
	unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18), 14);
}

bool func_547()
{
	return Global_2428577.f_703;
}

int func_548()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/].f_173;
}

void func_549(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573543 == 0)
		{
			Global_1573543 = 1;
		}
	}
	else if (Global_1573543 == 1)
	{
		Global_1573543 = 0;
	}
}

void func_550()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2429337.f_1.f_843[iVar0 /*57*/].f_44 = 0;
		Global_2429337.f_1.f_843[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_551()
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
	if (unk_0x06771AF7795B3ECF(&(Global_1604248.f_58534)))
	{
		return 1;
	}
	func_492();
	unk_0xCD50F5CC8EB9CD34();
	iVar0 = unk_0xEF4192C98571132D();
	Global_1681394.f_2++;
	if (Global_1681394.f_2 < 1)
	{
		Global_1681394.f_2 = 1;
	}
	unk_0x9BA5D72F5CCBAB5B(iVar0, "quit", Global_1681394);
	unk_0x9BA5D72F5CCBAB5B(iVar0, "ply", Global_1681394.f_2);
	unk_0x9BA5D72F5CCBAB5B(iVar0, "plyd", 1);
	unk_0x9BA5D72F5CCBAB5B(iVar0, "lp", unk_0x5C7391B560C251C7());
	if (unk_0x002DF2800B0A9E76(&(Global_1604248.f_58534), -1f, func_491(0)))
	{
	}
	func_490();
	func_492();
	unk_0x12C7F3E4DDB79E93();
	return 1;
}

void func_552()
{
	Global_2428577.f_714 = 1;
}

void func_553(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5A9CD25AB8C158C2();
	}
	else
	{
		unk_0x519B37BEE180B021();
	}
}

void func_554()
{
	Global_2428577.f_713 = 1;
}

int func_555(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_556(iParam0))
			{
				if (Global_1583725[iParam0 /*334*/] == 2 || Global_1583725[iParam0 /*334*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_556(int iParam0)
{
	return Global_1583725[iParam0 /*334*/].f_173 != 0;
}

bool func_557()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 2);
}

void func_558()
{
	Global_2428577.f_713 = 0;
}

bool func_559()
{
	return Global_2428577.f_713;
}

void func_560(int iParam0)
{
	unk_0x4F5F5BF0722DFDC2("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	unk_0x4F5F5BF0722DFDC2("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	unk_0x4F5F5BF0722DFDC2("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_561()
{
	Global_1681434.f_12 = -1;
	Global_1681434.f_13 = -1;
	Global_1681434.f_14 = -1;
}

void func_562()
{
	Global_1601472 = 0;
}

void func_563(bool bParam0)
{
	if (bParam0)
	{
		Global_1573687 = 1;
	}
	else
	{
		Global_1573687 = 0;
	}
}

void func_564()
{
	Global_1601473 = -1;
	Global_1601476 = 0;
}

void func_565()
{
	Global_2446992.f_273 = 0;
	func_568(3782, 0, -1, 1);
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (func_566())
		{
			unk_0x42544C0CC4949BD5(unk_0xA16EC202D9D35357(), 5, 0, 0, 0);
		}
	}
}

bool func_566()
{
	return func_567(unk_0xA16EC202D9D35357());
}

int func_567(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x95AD4DE218A9F9E5(uParam0, 5);
	iVar1 = -1;
	switch (unk_0xA609E58449080951(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x51ACEC7238AE9673(uParam0, 5, iVar0, unk_0xBF8959A81F71BB84(uParam0, 5));
			if (unk_0xFC16329269277970(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x51ACEC7238AE9673(uParam0, 5, iVar0, unk_0xBF8959A81F71BB84(uParam0, 5));
			if (unk_0xFC16329269277970(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_568(int iParam0, int iParam1, int iParam2, int iParam3)
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
		uVar2 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_569()
{
	Global_2428577.f_714 = 0;
}

bool func_570()
{
	return Global_2428577.f_714;
}

void func_571(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_573(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17238.f_7207)
	{
		unk_0x2F2EE906A0CF46A3(15);
		Global_17238.f_7207 = 0;
	}
	unk_0x1F4FE6D0BB9E338B(0f);
	if (Global_17238.f_4886[iVar0])
	{
		unk_0x3D3D5DB8C3B816AF(9, 0);
		Global_17238.f_4886[iVar0] = 0;
	}
	if (Global_17238.f_4879[iVar0])
	{
		unk_0x4A79FCCDF915C20B("CommonMenu");
		Global_17238.f_4879[iVar0] = 0;
	}
	if (bParam0)
	{
		func_572(&(Global_17238.f_4918[iVar0 /*10*/]));
		Global_17238.f_4979[iVar0] = 0;
	}
	else
	{
		Global_17238.f_4979[iVar0] = 0;
	}
}

void func_572(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xC8378A96673BCC40(*uParam0))
		{
			unk_0x7559DFAB61B017F2(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_573(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x1DAD7CE53BEE7710() && unk_0x93C72DAC35C5D38C())
		{
			iParam2 = unk_0x2302EAFD9CA5D9DC();
		}
	}
	StringCopy(&cVar0, unk_0x7E5A426328F6E635(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xB793F1A0B6CC4AE1(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17238.f_4979[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17238.f_4979[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17238.f_4979[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_574()
{
}

void func_575(int iParam0)
{
	struct<46> Var0;
	int iVar46;
	var uVar47;
	
	Var0 = -1;
	Var0.f_21 = -1082130432;
	Var0.f_22 = 3;
	Var0.f_45 = -1;
	if (Global_2428577.f_545.f_9 == 0)
	{
		Global_1681459.f_1473 = 0;
	}
	iVar46 = 0;
	while (iVar46 <= 31)
	{
		uVar47 = Global_1681459[iVar46 /*46*/].f_3;
		Global_1681459[iVar46 /*46*/] = { Var0 };
		if (func_576())
		{
			Global_1681459[iVar46 /*46*/].f_3 = uVar47;
		}
		Global_1681459[iVar46 /*46*/].f_1 = func_123();
		Global_1681459[iVar46 /*46*/] = -1;
		Global_1681459[iVar46 /*46*/].f_2 = -1;
		iVar46++;
	}
	if ((!func_576() && !func_583()) && iParam0)
	{
		Global_1681459.f_1475 = 0;
		Global_1681459.f_1476 = 0;
	}
}

bool func_576()
{
	return unk_0x889D01384B54BCE3(Global_2428577.f_545.f_1, 0);
}

void func_577(bool bParam0)
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

void func_578(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x53D28141CF743B83(unk_0xE42F65BB42C609AA(iParam0), "MPBitset"))
	{
		iVar0 = unk_0xD0997DAAAB203234(unk_0xE42F65BB42C609AA(iParam0), "MPBitset");
	}
	unk_0x29DB79DD4D939B38(&iVar0, iParam1);
	unk_0x0AB30E4FF0AE0C22(unk_0xE42F65BB42C609AA(iParam0), "MPBitset", iVar0);
}

bool func_579()
{
	return Global_1681434.f_3;
}

bool func_580()
{
	return Global_2435030.f_7;
}

bool func_581()
{
	return unk_0x889D01384B54BCE3(Global_2428577.f_26.f_3, 8);
}

void func_582()
{
	Global_2428577.f_26.f_49 = 0;
}

bool func_583()
{
	return unk_0x889D01384B54BCE3(Global_2428577.f_26.f_3, 0);
}

void func_584()
{
	unk_0x29DB79DD4D939B38(&(Global_965784.f_8), 8);
}

void func_585(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_13.f_1), 0);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_13.f_1), 0);
	}
}

void func_586(int iParam0)
{
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (((Global_2429337.f_3161 != 0 && Global_2429337.f_3161.f_1 != 0) && Global_2429337.f_3161.f_2 != 0) && Global_2429337.f_3161.f_3 != 0)
		{
			unk_0xA554DAA939B6EA96(Global_2429337.f_3161, Global_2429337.f_3161.f_1, Global_2429337.f_3161.f_2, Global_2429337.f_3161.f_3, iParam0);
		}
	}
	func_587();
}

void func_587()
{
	Global_2429337.f_3161 = 0;
	Global_2429337.f_3161.f_1 = 0;
	Global_2429337.f_3161.f_2 = 0;
	Global_2429337.f_3161.f_3 = 0;
}

void func_588()
{
	Global_2429337.f_1.f_2799 = 1;
}

bool func_589()
{
	return unk_0x889D01384B54BCE3(Global_2429337.f_1.f_2807, 12);
}

void func_590(int iParam0)
{
	if (!func_583() || iParam0)
	{
		Global_1574168 = 0;
		Global_1574167 = 0;
	}
}

void func_591(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;
	
	Global_2428577.f_26 = -1;
	Global_2428577.f_26.f_55 = -1;
	Global_2428577.f_26.f_1 = -1;
	Global_2428577.f_26.f_4 = 0;
	Global_2428577.f_26.f_2 = 0;
	Global_2428577.f_26.f_3 = 0;
	Global_2428577.f_26.f_40 = -1;
	Global_2428577.f_26.f_5 = { Var0 };
	Global_2428577.f_26.f_53 = 0;
	Global_2428577.f_26.f_129 = 0;
	Global_2428577.f_26.f_344 = 0;
	Global_2428577.f_26.f_54 = 0;
	Global_2428577.f_26.f_130 = 0;
	Global_2428577.f_26.f_345 = 0;
	Global_2428577.f_26.f_518 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2428577.f_26.f_476[iVar6] = 0;
		iVar6++;
	}
	Global_2428577.f_26.f_52 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2428577.f_26.f_56[iVar6] = 0;
		iVar6++;
	}
	Global_2428577.f_26.f_128 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2428577.f_26.f_131[iVar6] = 0;
		iVar6++;
	}
	Global_2428577.f_26.f_343 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2428577.f_26.f_346[iVar6] = 0;
		Global_2428577.f_26.f_361[iVar6] = 0;
		Global_2428577.f_26.f_391[iVar6 /*6*/] = { Var0 };
		Global_2428577.f_26.f_376[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2428577.f_26.f_42[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2428577.f_26.f_497 = 0;
			Global_2428577.f_26.f_498 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2428577.f_26.f_505[iVar6] = -1;
				Global_2428577.f_26.f_511[iVar6] = -1;
				iVar6++;
			}
			Global_2428577.f_26.f_47 = 0;
			Global_2428577.f_26.f_11 = { Var0 };
			Global_2428577.f_26.f_51 = 0;
			Global_2428577.f_26.f_491 = { 0f, 0f, 0f };
			Global_2428577.f_26.f_494 = { 0f, 0f, 0f };
			Global_2428577.f_26.f_50 = 0;
			Global_2428577.f_26.f_49 = 0;
		}
	}
}

void func_592()
{
	Global_2435030.f_8 = 0;
	Global_2435030.f_7 = 0;
}

bool func_593()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/] == 5;
}

void func_594()
{
	Global_1690511.f_1774 = 0;
}

void func_595()
{
	Global_2428577.f_707 = 0;
}

bool func_596()
{
	return Global_2428577.f_707;
}

void func_597()
{
	Global_14559 = 0;
	func_598();
}

void func_598()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
	}
}

bool func_599(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 7;
}

bool func_600(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 2;
}

void func_601()
{
	Global_2428577.f_574 = 0;
}

void func_602()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_3 = -1;
	iVar10 = unk_0x1788E93557766241();
	if (iVar10 != -1)
	{
		Global_1601582[iVar10 /*32*/].f_22 = { Var0 };
	}
}

void func_603()
{
	Global_1681434.f_7 = 0;
}

void func_604(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2428577.f_545.f_3 = { Var0 };
	Global_2428577.f_545 = 0;
	Global_2428577.f_545.f_1 = 0;
	Global_2428577.f_545.f_11 = 0;
	if (bParam0)
	{
		Global_2428577.f_545.f_2 = 0;
		Global_2428577.f_545.f_12 = 0;
		Global_2428577.f_545.f_13 = 0;
		Global_2394649 = 0;
		if (bParam1)
		{
			Global_2428577.f_545.f_9 = 0;
			Global_2428577.f_545.f_10 = 0;
		}
		if (iParam2 && !unk_0x7A75BEF6DA1EDF3D())
		{
			Global_1681459.f_1475 = 0;
			Global_1681459.f_1476 = 0;
		}
		if (unk_0x1788E93557766241() != -1)
		{
			Global_1601582[unk_0x1788E93557766241() /*32*/].f_22.f_1 = 0;
		}
	}
}

void func_605()
{
	Global_2428577.f_545.f_11 = 0;
}

bool func_606()
{
	return Global_2428577.f_545.f_11;
}

void func_607()
{
	unk_0x29DB79DD4D939B38(&(Global_1601582[unk_0x1788E93557766241() /*32*/].f_18), 3);
}

void func_608()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1574179[iVar0] = 0;
		iVar0++;
	}
}

void func_609()
{
	int iVar0;
	
	iVar0 = unk_0x1788E93557766241();
	if (iVar0 != -1)
	{
		Global_1601582[iVar0 /*32*/].f_22.f_4 = 0;
	}
}

void func_610()
{
	Global_2435595 = 0;
	Global_2435596 = 0;
	Global_2435597 = 0;
	Global_2435598 = 0;
}

void func_611()
{
	Global_2428577.f_26.f_48 = 0;
}

void func_612()
{
	Global_2428577.f_26.f_50 = 0;
}

void func_613(int iParam0)
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		unk_0xD57C4CB6210C5FBA(iParam0);
	}
}

void func_614()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!unk_0x06771AF7795B3ECF(&(Global_1573339[iVar0 /*6*/])))
		{
			StringCopy(&(Global_1573339[iVar0 /*6*/]), "", 24);
		}
		iVar0++;
	}
}

void func_615(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x065E5245E0BD74E4();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_180, 0))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[iVar0 /*334*/].f_180), 0);
			}
		}
		else if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_180, 0))
		{
			unk_0x29DB79DD4D939B38(&(Global_1583725[iVar0 /*334*/].f_180), 0);
		}
	}
}

void func_616()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_619(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1698841.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_618();
	func_617();
	Global_1698841 = 0;
}

void func_617()
{
	Global_1698841.f_4 = 0;
}

void func_618()
{
	Global_1698841.f_3 = 0;
}

void func_619(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1698841.f_5[iParam0 /*53*/] = { Var0 };
}

void func_620()
{
	unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18), 20);
}

void func_621(int iParam0, bool bParam1)
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

void func_622()
{
	unk_0x29DB79DD4D939B38(&(Global_2446992.f_734), 3);
}

void func_623(bool bParam0, int iParam1)
{
	func_203();
	if (bParam0)
	{
		func_292(1);
		unk_0xFD1E0AEC770DAF2E(1);
	}
	unk_0xEDC11454B9658FE1();
	func_198();
	unk_0x1B49D4AAC1175D49(0);
	func_232(0, 1, 1, 0);
	func_626();
	func_186(12, 0, -1);
	func_187(1);
	unk_0xE160463F782E4C83(0, -1);
	unk_0xA0ED52A12ED3E5E5(1);
	unk_0x6853F2DD1CFD3CA2(1);
	func_625();
	unk_0x435923F2389CD0AD(1);
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0xBDA58D5914C57881())
		{
			unk_0x111BB4A7273397DD(0, 0);
		}
	}
	func_238(0);
	if (((func_107() == 0 && func_624() == 0) && iParam1) && !func_233(unk_0x1788E93557766241()))
	{
		func_323(unk_0x1788E93557766241(), 1, 0, 1);
	}
	Global_2422491.f_3126 = 0;
}

bool func_624()
{
	return unk_0x889D01384B54BCE3(Global_2428577, 7);
}

void func_625()
{
	Global_17099.f_5 = 0;
}

void func_626()
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

void func_627(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312446)
	{
		if (!func_660())
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				Global_1573725[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_658(unk_0x1788E93557766241(), bParam0);
	iVar2 = func_656(iVar1, bParam0);
	if (!func_655(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			Global_1573725[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1573725[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 146)
	{
		iVar3 = func_654(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_652(iVar4))
			{
				func_643(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_636(func_638(59, 0), 0);
	func_635(func_638(22, 0), func_638(73, 0));
	if (func_660())
	{
		if (func_442(77, -1))
		{
			func_634(1);
			func_633(1);
		}
	}
	if (func_632() || func_631())
	{
		func_30(77, 1, -1, 1);
		if (unk_0x1DAD7CE53BEE7710())
		{
			func_628(28, 1, 0);
			func_628(29, 1, 0);
			func_628(30, 1, 0);
			func_628(31, 1, 0);
			func_628(32, 1, 0);
			func_628(33, 1, 0);
			func_628(34, 1, 0);
			func_628(35, 1, 0);
			func_628(36, 1, 0);
			func_628(37, 1, 0);
			func_628(38, 1, 0);
		}
	}
	if (func_638(21, 0))
	{
		unk_0xCCA8FC7E3B390CC1(0);
	}
	Global_973959 = 0;
}

void func_628(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 0, 0))
		{
			if (iParam2 && Global_90094.f_17[iParam0])
			{
				if (func_630(iParam0) == 3 && !func_22(iParam0))
				{
					func_629(iParam0);
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

void func_629(int iParam0)
{
	if (Global_90094.f_17[iParam0])
	{
		func_58(iParam0, 10, 1);
		func_58(iParam0, 19, 1);
	}
}

int func_630(int iParam0)
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

bool func_631()
{
	return Global_1315879;
}

bool func_632()
{
	return Global_1315881;
}

void func_633(bool bParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	func_628(28, bParam0, 0);
	func_628(30, bParam0, 0);
	func_628(31, bParam0, 0);
	func_628(33, bParam0, 0);
	func_628(34, bParam0, 0);
	func_628(38, bParam0, 0);
}

void func_634(bool bParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	func_628(29, bParam0, 0);
	func_628(32, bParam0, 0);
	func_628(36, bParam0, 0);
	func_628(35, bParam0, 0);
	func_628(37, bParam0, 0);
}

void func_635(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_628(0, bParam0, 1);
	func_628(1, bParam0, 1);
	func_628(2, bParam0, 1);
	func_628(3, bParam0, 1);
	func_628(4, bParam0, 1);
	func_628(5, bParam0, 1);
	func_628(6, bParam0, 1);
	func_628(7, bParam0, bVar0);
	func_628(8, bParam0, 1);
	func_628(9, bParam0, 1);
	func_628(10, bParam0, 1);
	func_628(11, bParam0, 1);
	func_628(12, bParam0, bVar0);
	func_628(13, bParam0, 1);
	func_628(21, bParam0, 1);
	func_628(14, bParam0, 1);
	func_628(15, bParam0, 1);
	func_628(16, bParam0, 1);
	func_628(17, bParam0, 1);
	func_628(18, bParam0, 1);
	func_628(19, bParam0, 1);
	func_628(20, bParam0, 1);
	func_628(22, bParam0, 1);
	func_628(23, bParam0, 1);
	func_628(24, bParam0, 1);
	func_628(25, bParam0, 1);
	func_628(26, bParam0, 1);
	func_628(27, bParam0, 1);
	func_357(1, !bParam1);
	if (!bVar0)
	{
		func_629(12);
	}
}

void func_636(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	uVar0 = func_637(0);
	func_628(39, bParam0, 0);
	func_628(40, bParam0, 0);
	func_628(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_628(43, bParam0, 0);
		func_628(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(39))
		{
			func_629(39);
		}
		if (!func_22(40))
		{
			func_629(40);
		}
		if (!func_22(41))
		{
			func_629(41);
		}
		if (!func_22(42))
		{
			func_629(42);
		}
		if (!func_22(43))
		{
			func_629(43);
		}
	}
}

int func_637(bool bParam0)
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (func_632())
	{
		return 1;
	}
	if (func_631())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0x889D01384B54BCE3(Global_2446992.f_1617, 26))
		{
			uVar0 = func_24(1186, -1, 0);
			if (!unk_0x889D01384B54BCE3(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_442(122, -1);
}

bool func_638(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6027 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_640(unk_0x1788E93557766241(), 85))
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
		if (Global_262145.f_4831 == 1)
		{
			return 1;
		}
	}
	if (func_632() || func_631())
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
			if (func_639())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0x889D01384B54BCE3(Global_1573725[iVar1], iVar0);
}

int func_639()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1622, 23))
	{
		return 1;
	}
	if (func_632())
	{
		return 1;
	}
	if (func_631())
	{
		return 1;
	}
	uVar0 = Global_1336485[func_25(-1)];
	if (unk_0x889D01384B54BCE3(uVar0, 7))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_1622), 23);
		return 1;
	}
	return 0;
}

bool func_640(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_660())
	{
		return 0;
	}
	if (func_642())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_641(iParam1);
	iVar1 = uVar0;
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_309, iVar1);
}

int func_641(int iParam0)
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

bool func_642()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 3);
}

void func_643(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_651(-1))
			{
				if (!func_660())
				{
					return;
				}
			}
			if (!func_651(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_650() && !func_649())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_648())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_651(-1))
				{
					if (!func_644())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573725[iVar1]), iVar0);
	}
}

int func_644()
{
	var uVar0;
	
	if (func_647(unk_0x1788E93557766241()))
	{
		return 1;
	}
	uVar0 = Global_1336485[func_25(-1)];
	if (unk_0x889D01384B54BCE3(uVar0, 2))
	{
		func_645(1);
		return 1;
	}
	return 0;
}

void func_645(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 25))
		{
			func_646(unk_0x1788E93557766241(), 12);
			unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 25);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 25))
	{
		unk_0x29DB79DD4D939B38(&(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124), 25);
	}
}

void func_646(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_641(iParam1);
	iVar1 = uVar0;
	unk_0xD0E2BFCE93AE3ABD(&(Global_1583725[iParam0 /*334*/].f_309), iVar1);
}

bool func_647(int iParam0)
{
	if (func_632())
	{
		return 1;
	}
	if (func_631())
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_124, 25);
}

int func_648()
{
	var uVar0;
	
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1622, 6))
	{
		return 1;
	}
	uVar0 = Global_1336485[func_25(-1)];
	if (unk_0x889D01384B54BCE3(uVar0, 0))
	{
		if (!unk_0x889D01384B54BCE3(Global_2446992.f_1622, 6))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_1622), 6);
		}
		return 1;
	}
	if (func_632())
	{
		return 1;
	}
	if (func_631())
	{
		return 1;
	}
	return 0;
}

bool func_649()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 7);
}

int func_650()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_632())
	{
		return 1;
	}
	if (func_631())
	{
		return 1;
	}
	return func_442(121, -1);
}

bool func_651(int iParam0)
{
	return func_442(123, iParam0);
}

int func_652(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_632())
	{
		return 1;
	}
	if (func_631())
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
		case 135:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			uVar0 = func_24(func_653(iParam0), -1, 0);
			if (unk_0x889D01384B54BCE3(uVar0, iVar1))
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

int func_653(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1195;
		
		case 1:
			return 1196;
		
		case 2:
			return 1197;
		
		case 3:
			return 1198;
		
		case 4:
			return 1199;
		
		default:
	}
	return 1195;
}

int func_654(int iParam0)
{
	if (func_632())
	{
		return 1;
	}
	if (func_631())
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
			if (!func_651(-1))
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

int func_655(int iParam0)
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_632())
	{
		return 1;
	}
	if (func_631())
	{
		return 1;
	}
	return func_442(119, iParam0);
}

int func_656(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_657(iParam0, 0);
}

int func_657(int iParam0, int iParam1)
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
		if (Global_271370[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_271370[iVar3] < iParam0)
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

int func_658(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_659(iParam0);
}

int func_659(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1788E93557766241())
			{
				return Global_1336491[func_25(-1)];
			}
			else if (func_53(iParam0))
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1336491[func_25(-1)];
	}
	return 0;
}

int func_660()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_632())
	{
		return 1;
	}
	if (func_631())
	{
		return 1;
	}
	return func_442(120, -1);
}

int func_661()
{
	bool bVar0;
	
	func_666(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315866 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 1;
		}
	}
	if (func_425())
	{
		return 1;
	}
	if (Global_2437386)
	{
		return 1;
	}
	if (func_665())
	{
		return 1;
	}
	if (func_664(157))
	{
		if (!func_663())
		{
			return 1;
		}
	}
	if (func_664(155))
	{
		return 1;
	}
	if (!unk_0x54CE0989F263D8A3())
	{
		return 1;
	}
	if (func_662() != 0)
	{
		if (unk_0x16CDA1894CFE0781(func_662()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_662()
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

bool func_663()
{
	return Global_2428577.f_572;
}

int func_664(int iParam0)
{
	if (unk_0xA519E4AC66148E87(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_665()
{
	return Global_2435556;
}

void func_666(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2C15B7979450724C(1))
	{
		iVar1 = unk_0x8B6CEAB2AD1BD1CD(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6A4B863200ABAA44(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 307:
					func_667(iVar0);
					break;
				
				case 2:
					unk_0x6A4B863200ABAA44(1, iVar0, &Var4, 3);
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

void func_667(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xFF34D923BFB5E9FB(Var0.f_1);
			if (unk_0x538DF9E5B1DF01EB(uVar3))
			{
				if (unk_0x202EF5D8203705EF(iVar3, 0))
				{
					uVar4 = unk_0x6ADAC08D70C79DE5(iVar3, 0);
					if (unk_0xA7FB2A2F471A969B(uVar4, Var0.f_2) && unk_0x93C72DAC35C5D38C())
					{
						if (func_668(uVar4, &bVar5))
						{
							unk_0x2FC1F6BC6D0D9D77(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x3A3C5A6572B3C611(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_668(int iParam0, var uParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0x22349EC06EA5B08B(iParam0))
		{
			if (unk_0xFD9706CAB35EA810(iParam0))
			{
				unk_0x7B9576B4E099FB1F(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xD8233CB95CB48A7C(iParam0, 0))
		{
			if (unk_0xC7402AE8FD6AACA2(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_669()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_670(struct<17> Param0, var uParam17, var uParam18, var uParam19)
{
	var uVar0;
	
	unk_0x3005435C0CFEEE94(2, 0, Param0.f_16);
	func_675(0, -1, 0);
	unk_0x241F80BF72379478(&Local_561, 7);
	unk_0x51FC2B81A21C009A(&Local_733, 11);
	Global_1583725[unk_0x1788E93557766241() /*334*/] = 16;
	if (bLocal_752)
	{
		if (!unk_0xF4C685E933068D23() && !unk_0xE9A5FF67266655B2())
		{
			unk_0x271524E4281048DC(800);
		}
		if (!unk_0x31EF25060710376C())
		{
			if (!unk_0x1B0EC10E05C58A18())
			{
				uVar0 = unk_0x1788E93557766241() + 32;
				unk_0xB927E5BD5044F6F1(1, uVar0);
				func_190(1);
			}
		}
	}
	unk_0x1EB75D4128DBB6C4(1);
	unk_0x29AA9A92BCC0F8E3(1);
	if (!func_674())
	{
		func_367(0);
	}
	unk_0xFF9F94FD851C212A(0);
	func_621(iLocal_86, 1);
	func_369(1);
	if (!bLocal_752)
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			func_323(unk_0x1788E93557766241(), 1, 0, 1);
		}
	}
	Global_2446992.f_1617 = 0;
	unk_0x01C9658D4C7F66D5(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, 0, 0);
	func_673();
	func_671();
	Local_733[unk_0x044A481E863E2F6B() /*5*/] = 0;
}

void func_671()
{
	unk_0xA54710CE1A10C42E(1);
	func_672(1, -1);
	unk_0x5554E463A08D6340(1);
	if (func_442(133, -1))
	{
		func_30(133, 0, -1, 1);
	}
	Global_2428577.f_616 = 1;
}

void func_672(int iParam0, int iParam1)
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
			unk_0x41D2076864DFF8D7(0, iParam1);
			break;
		
		default:
			uVar1 = func_383(iParam1);
			iVar0 = unk_0x7058289E8DD601D6(uVar1);
			if (unk_0x889D01384B54BCE3(iVar0, iParam0))
			{
				unk_0x29DB79DD4D939B38(&iVar0, iParam0);
				unk_0x41D2076864DFF8D7(iVar0, iParam1);
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

void func_673()
{
	unk_0x6D98AA46076A68BE(&uLocal_746);
	unk_0xBB5AA994E06B28E2(0, 0, 0);
	unk_0x5BAF25119CA70A04(0, 17.0693f, -1115.935f, 28.7968f, 0);
	unk_0x963BB7C99350D827(uLocal_746);
}

int func_674()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 0;
		}
		if (unk_0x5D0D85F8A1CCEE45())
		{
			return 1;
		}
		if (func_425())
		{
			return 0;
		}
		if (func_664(155))
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

int func_675(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x92078BBBAEFC7998();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_676();
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
				if (!unk_0x1DAD7CE53BEE7710())
				{
					if (!bParam2)
					{
						func_676();
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
						func_676();
					}
					else
					{
						return 0;
					}
				}
				if (func_664(155))
				{
					if (!bParam2)
					{
						func_676();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x0987AD2F87AA4427())
			{
				if (!bParam2)
				{
					func_676();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x92078BBBAEFC7998();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			if (!bParam2)
			{
				func_676();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x0987AD2F87AA4427())
	{
		if (!bParam2)
		{
			func_676();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_676()
{
	unk_0x82706E6C897B0FA1();
}

