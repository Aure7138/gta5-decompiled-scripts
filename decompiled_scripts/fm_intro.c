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
	var uLocal_56 = 10;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 2;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 8;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 8;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	struct<123> Local_90 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_213 = 16;
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
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 16;
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
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	struct<6> Local_564 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_570 = 0;
	var uLocal_571 = 16;
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
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	struct<5> Local_736[2];
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	bool bLocal_753 = 0;
	bool bLocal_754 = 0;
	bool bLocal_755 = 0;
	bool bLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
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
	iLocal_88 = 20;
	iLocal_89 = 33;
	bLocal_753 = true;
	bLocal_754 = true;
	bLocal_755 = true;
	bLocal_756 = true;
	if (unk_0xA86CA03D9749EEB3())
	{
		func_698(ScriptParam_0);
	}
	while (true)
	{
		func_697();
		if (func_689())
		{
			func_373(1);
		}
		if (func_370(0))
		{
			Local_736[unk_0x848AF823A8EA3C62() /*5*/] = 3;
		}
		if (func_369(unk_0x848AF823A8EA3C62()) > -1)
		{
			unk_0xF0B830D304A5232C(unk_0x0C1D3C552325765B());
		}
		switch (func_368(unk_0x848AF823A8EA3C62()))
		{
			case 0:
				if (!unk_0x08BA6DD398CA197C(uLocal_747, 10))
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						unk_0x88B0F0DC270164B7(&uLocal_747, 10);
					}
				}
				unk_0x7BCE93123FE81E45("FMINT", 0);
				if (func_367() && unk_0x15CD8FB3CF6BE10D("FMINT", 0))
				{
					if (func_366() > 0)
					{
						func_365(&uLocal_399, 1, 0, "Lamar", 0, 1);
						func_364(0);
						func_363(4, 1);
						func_363(1, 1);
						func_363(0, 1);
						func_363(2, 1);
						func_363(3, 0);
						func_361(iLocal_89, 1);
						Local_736[unk_0x848AF823A8EA3C62() /*5*/] = 2;
						if (bLocal_755)
						{
							Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_2 = -2;
						}
						else
						{
							Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_366() == 4)
				{
					Local_736[unk_0x848AF823A8EA3C62() /*5*/] = 4;
				}
				if (func_366() == 6 && Local_736[unk_0x848AF823A8EA3C62() /*5*/] < 4)
				{
					Local_736[unk_0x848AF823A8EA3C62() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_343();
				func_20();
				if (func_366() == 4)
				{
					Local_736[unk_0x848AF823A8EA3C62() /*5*/] = 4;
				}
				if (func_366() == 6 && Local_736[unk_0x848AF823A8EA3C62() /*5*/] < 4)
				{
					Local_736[unk_0x848AF823A8EA3C62() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_736[unk_0x848AF823A8EA3C62() /*5*/] = 5;
				break;
			
			case 5:
				func_18(&(Local_564.f_5));
				if (func_17(&(Local_564.f_5)))
				{
					Local_736[unk_0x848AF823A8EA3C62() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_10(iLocal_88);
				Local_736[unk_0x848AF823A8EA3C62() /*5*/] = 6;
			
			case 6:
				func_373(0);
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			switch (func_366())
			{
				case 0:
					Local_564.f_0 = 2;
					break;
				
				case 2:
					func_9();
					func_8();
					func_2();
					if (func_1())
					{
						Local_564.f_0 = 6;
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
	if (!bLocal_753)
	{
		if (unk_0x08BA6DD398CA197C(Local_564.f_1, 1))
		{
			return 1;
		}
	}
	else if (unk_0x08BA6DD398CA197C(Local_564.f_1, 2))
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
	if (unk_0xD9E8CA806A80203D())
	{
		if (!unk_0x08BA6DD398CA197C(Local_564.f_1, 3))
		{
			if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_4, 0))
			{
				unk_0x88B0F0DC270164B7(&(Local_564.f_1), 3);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_564.f_1, 4))
		{
			if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_4, 2))
			{
				unk_0x88B0F0DC270164B7(&(Local_564.f_1), 4);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_564.f_1, 5))
		{
			if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 3))
			{
				unk_0x88B0F0DC270164B7(&(Local_564.f_1), 5);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_564.f_1, 6))
		{
			if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 4))
			{
				unk_0x88B0F0DC270164B7(&(Local_564.f_1), 6);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_564.f_1, 7))
		{
			if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 5))
			{
				unk_0x88B0F0DC270164B7(&(Local_564.f_1), 7);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_564.f_1, 8))
		{
			if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 6))
			{
				unk_0x88B0F0DC270164B7(&(Local_564.f_1), 8);
			}
		}
		switch (Local_564.f_2)
		{
			case 0:
				if (unk_0x08BA6DD398CA197C(Local_564.f_1, 3))
				{
					if (func_4(&(Local_564.f_3), &(Local_564.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_571))
					{
						unk_0x6F40E1EE32FE6A5E(unk_0x15F0E6D5AC2852F1(Local_564.f_3), 1, 0, 0);
						Local_564.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0x08BA6DD398CA197C(Local_564.f_1, 4))
				{
					Local_564.f_2 = 1;
				}
				break;
			
			case 1:
				if (unk_0x08BA6DD398CA197C(Local_564.f_1, 5))
				{
					Local_564.f_2 = 3;
				}
				break;
			
			case 3:
				if (unk_0x08BA6DD398CA197C(Local_564.f_1, 6))
				{
					Local_564.f_2 = 4;
				}
				break;
			
			case 4:
				if (unk_0x08BA6DD398CA197C(Local_564.f_1, 7))
				{
					Local_564.f_2 = 5;
				}
				break;
			
			case 5:
				if (unk_0x08BA6DD398CA197C(Local_564.f_1, 8))
				{
					Local_564.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam5, var uParam6)
{
	if (func_7(Global_2482149.f_744) && func_7(Global_2482149.f_745))
	{
		if (!unk_0x0E091C9F3918F674(*uParam0))
		{
			if (func_6(uParam0, Global_2482149.f_744, Param2, fParam5, 1, 1, 1, 0, 1, 1, 0))
			{
				unk_0x5DAC607F3BD7200B(unk_0x15F0E6D5AC2852F1(*uParam0), 1);
			}
		}
		if (!unk_0x0E091C9F3918F674(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2482149.f_745, -1, 1, 1, 1))
			{
				unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(*uParam1), 1);
				unk_0x2C07692AA3545079(Global_2482149.f_744);
				unk_0x2C07692AA3545079(Global_2482149.f_745);
				unk_0xB16B53F6FE1ADDB6(unk_0x15F0E6D5AC2852F1(*uParam0), 0);
				unk_0x7EF0CC11828DB6AC(unk_0x564EAE6038A81C07(*uParam1), 1);
				func_365(uParam6, 8, unk_0x564EAE6038A81C07(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!unk_0x0E091C9F3918F674(*uParam0) || !unk_0x0E091C9F3918F674(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x0C863D3ED919983C(1))
	{
		return 0;
	}
	if (!unk_0x0E091C9F3918F674(uParam1))
	{
		return 0;
	}
	if (!unk_0x1F1B2B6E500380C5(unk_0x15F0E6D5AC2852F1(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9ED2AEF3CEBC2436(unk_0x667A2CFA1914073C(unk_0x15F0E6D5AC2852F1(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(unk_0x564EAE6038A81C07(*uParam0), iParam7);
		if (unk_0x6B8DF4084A1CD2DC(unk_0x564EAE6038A81C07(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0xD28B39973EB5D6B4(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xD74B8343DB9FEFD5(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xE044C77D0FC9DB66(iParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = unk_0xDD3500FFBBCB3F3B(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam10);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam8)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
			else
			{
				unk_0x748B0DC6DACDF341(*uParam0, 0);
			}
		}
		unk_0x4BA36C8825F6A05D(iVar0, iParam9);
		if (bParam12)
		{
			unk_0xFC40CBF7B90CA77C(iVar0);
			unk_0xF463117DBF0348D6(iVar0, 5, 5, 1f);
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
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
}

void func_8()
{
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
		{
			if (bLocal_753)
			{
				if (!unk_0x08BA6DD398CA197C(Local_564.f_1, 2))
				{
					if (unk_0x08BA6DD398CA197C(Local_736[iVar0 /*5*/].f_3, 2))
					{
						unk_0x88B0F0DC270164B7(&(Local_564.f_1), 2);
					}
				}
			}
			else if (!unk_0x08BA6DD398CA197C(Local_564.f_1, 1))
			{
				if (unk_0x08BA6DD398CA197C(Local_736[iVar0 /*5*/].f_3, 1))
				{
					unk_0x88B0F0DC270164B7(&(Local_564.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_10(int iParam0)
{
	if (!func_13(unk_0x0C1D3C552325765B(), 1))
	{
		return;
	}
	if (!func_11(unk_0x0C1D3C552325765B()) == iParam0)
	{
		return;
	}
}

int func_11(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2421327[iParam0 /*353*/].f_1;
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
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
	if (Global_1312443 != 0)
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
	if (Global_1588660[iParam0 /*532*/] == -1)
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
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= 1000)
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
		if (unk_0xD9E8CA806A80203D())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
		}
		uParam0->f_1 = 1;
	}
}

void func_20()
{
	switch (func_369(unk_0x848AF823A8EA3C62()))
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
	switch (iLocal_752)
	{
		case 0:
			if (!func_22(iLocal_89))
			{
				unk_0x88B0F0DC270164B7(&(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3), 2);
				Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_2 = 99;
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
		return unk_0x08BA6DD398CA197C(Global_91458.f_1308[iParam0], iParam1);
	}
	else if (unk_0xA86CA03D9749EEB3())
	{
		if (func_28() == 0)
		{
			return unk_0x08BA6DD398CA197C(func_24(func_27(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_101553.f_668[iParam0], iParam1);
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
	uVar0 = Global_2491469[iParam0 /*3*/][func_25(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
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
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

int func_26()
{
	return Global_1312731;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 4442;
			break;
		
		case 45:
			return 3776;
			break;
		
		default:
			break;
	}
	return 4617;
}

int func_28()
{
	return Global_25185;
}

void func_29()
{
	int iVar0;
	
	if (func_184())
	{
		if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
		{
			func_183(0);
		}
	}
	if (!func_182(&uLocal_389))
	{
		func_19(&uLocal_389, 0, 0);
	}
	if (!unk_0x08BA6DD398CA197C(uLocal_747, 21))
	{
		unk_0x88B0F0DC270164B7(&uLocal_747, 21);
	}
	if (!unk_0x08BA6DD398CA197C(uLocal_747, 3))
	{
		if (!func_182(&uLocal_387))
		{
			func_19(&uLocal_387, 0, 0);
		}
		else if (unk_0x08BA6DD398CA197C(uLocal_747, 21))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
				{
					if (func_181(&uLocal_387, 3000, 0))
					{
						unk_0x88B0F0DC270164B7(&uLocal_747, 3);
					}
				}
			}
		}
		if (func_181(&uLocal_387, 40000, 0))
		{
			unk_0x88B0F0DC270164B7(&uLocal_747, 3);
		}
	}
	else if (!unk_0x08BA6DD398CA197C(uLocal_747, 16))
	{
		if (!unk_0x598A9E990F05F82C())
		{
			if (!unk_0x84C71F36E7D97756())
			{
				unk_0x88B0F0DC270164B7(&uLocal_747, 16);
				func_180(&uLocal_387);
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_4, 2))
	{
		if (!func_182(&uLocal_393))
		{
			func_19(&uLocal_393, 0, 0);
		}
		else if (!unk_0x08BA6DD398CA197C(uLocal_748, 1))
		{
			if (func_181(&uLocal_393, 10000, 0))
			{
				unk_0x88B0F0DC270164B7(&uLocal_748, 1);
				func_180(&uLocal_393);
			}
		}
		else if (unk_0x08BA6DD398CA197C(uLocal_747, 19))
		{
			if (!unk_0x08BA6DD398CA197C(uLocal_747, 18))
			{
				if (!func_178() || func_181(&uLocal_387, 5000, 0))
				{
					func_177(0);
					unk_0x88B0F0DC270164B7(&uLocal_747, 18);
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 244, 0);
						unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 243, 0);
						unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 242, 0);
					}
				}
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(uLocal_747, 18))
	{
		if (!unk_0x08BA6DD398CA197C(uLocal_747, 2))
		{
			if (unk_0xB20CA7A3EE29687A())
			{
				iVar0 = 0;
				unk_0x88B0F0DC270164B7(&iVar0, 3);
				unk_0x88B0F0DC270164B7(&iVar0, 4);
				unk_0x88B0F0DC270164B7(&iVar0, 5);
				if (func_88(&uLocal_399, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_87(1);
					unk_0x88B0F0DC270164B7(&uLocal_747, 2);
					if (!unk_0x08BA6DD398CA197C(uLocal_747, 20))
					{
						func_78(19, 3, 1);
						unk_0x88B0F0DC270164B7(&uLocal_747, 20);
					}
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						unk_0xC29813E4A3FD0772(unk_0xA0081090911D13E5(), 1, 1);
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
					if (!unk_0x08BA6DD398CA197C(uLocal_747, 12))
					{
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							unk_0xC29813E4A3FD0772(unk_0xA0081090911D13E5(), 0, 1);
							unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 244, 1);
							unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 243, 1);
							unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 242, 1);
						}
						unk_0x88B0F0DC270164B7(&uLocal_747, 12);
						func_19(&uLocal_391, 0, 0);
						func_19(&uLocal_395, 0, 0);
					}
				}
			}
		}
		if (unk_0x08BA6DD398CA197C(uLocal_747, 12))
		{
			if (!unk_0x08BA6DD398CA197C(uLocal_747, 17))
			{
				if (!unk_0x84C71F36E7D97756())
				{
					func_70();
					unk_0x88B0F0DC270164B7(&uLocal_747, 17);
					func_180(&uLocal_387);
				}
			}
			else if (!func_178())
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_747, 23))
				{
					if (func_181(&uLocal_395, 4500, 0))
					{
						unk_0x88B0F0DC270164B7(&uLocal_747, 23);
						unk_0x88B0F0DC270164B7(&(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3), 3);
					}
				}
				if (func_181(&uLocal_391, 15000, 0))
				{
					if (!unk_0x08BA6DD398CA197C(uLocal_747, 22))
					{
						unk_0x88B0F0DC270164B7(&uLocal_747, 22);
					}
				}
				if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 0)
				{
					if (unk_0x08BA6DD398CA197C(uLocal_747, 14))
					{
						unk_0x09C86C0C5CA26B1E(&uLocal_747, 14);
					}
					if (!func_22(iLocal_89))
					{
						if (unk_0x08BA6DD398CA197C(uLocal_747, 13))
						{
							unk_0x09C86C0C5CA26B1E(&uLocal_747, 13);
						}
						if (unk_0x08BA6DD398CA197C(uLocal_747, 25) || (!unk_0x08BA6DD398CA197C(uLocal_747, 25) && !unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0)))
						{
							if (!unk_0x08BA6DD398CA197C(uLocal_747, 0))
							{
								if (unk_0x08BA6DD398CA197C(uLocal_747, 15))
								{
									unk_0x09C86C0C5CA26B1E(&uLocal_747, 15);
								}
								if (unk_0x16833EFAA58E63DB(Global_91458.f_207[iLocal_89]))
								{
									func_64("GET_AMMU", 0);
									unk_0x88B0F0DC270164B7(&uLocal_747, 0);
									unk_0x88B0F0DC270164B7(&uLocal_747, 25);
									if (unk_0x16833EFAA58E63DB(Global_91458.f_207[iLocal_89]))
									{
										if (!unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2))
										{
											unk_0x71E206F83114C3D2(Global_91458.f_207[iLocal_89], 1);
										}
										func_361(iLocal_89, 1);
									}
								}
							}
							else if (unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2))
							{
								if (unk_0x16833EFAA58E63DB(Global_91458.f_207[iLocal_89]))
								{
									if (!unk_0x08BA6DD398CA197C(uLocal_747, 15))
									{
										unk_0x71E206F83114C3D2(Global_91458.f_207[iLocal_89], 0);
										unk_0x88B0F0DC270164B7(&uLocal_747, 15);
									}
								}
							}
							else if (unk_0x16833EFAA58E63DB(Global_91458.f_207[iLocal_89]))
							{
								if (unk_0x08BA6DD398CA197C(uLocal_747, 15))
								{
									unk_0x71E206F83114C3D2(Global_91458.f_207[iLocal_89], 1);
									unk_0x09C86C0C5CA26B1E(&uLocal_747, 15);
								}
							}
						}
					}
					else
					{
						if (unk_0x08BA6DD398CA197C(uLocal_747, 0))
						{
							unk_0x09C86C0C5CA26B1E(&uLocal_747, 0);
						}
						if (!unk_0x08BA6DD398CA197C(uLocal_747, 13))
						{
							func_64("GET_GUN", 0);
							func_63(1);
							unk_0x88B0F0DC270164B7(&uLocal_747, 13);
						}
					}
				}
				else if (!unk_0x08BA6DD398CA197C(uLocal_747, 14))
				{
					unk_0x94724F7C938EBE34(1);
					if (unk_0x08BA6DD398CA197C(uLocal_747, 0))
					{
						unk_0x09C86C0C5CA26B1E(&uLocal_747, 0);
					}
					if (unk_0x08BA6DD398CA197C(uLocal_747, 13))
					{
						unk_0x09C86C0C5CA26B1E(&uLocal_747, 13);
					}
					if (unk_0x16833EFAA58E63DB(Global_91458.f_207[iLocal_89]))
					{
						unk_0x71E206F83114C3D2(Global_91458.f_207[iLocal_89], 0);
						unk_0x3AE9C8E8575D2576(Global_91458.f_207[iLocal_89], 0);
						func_361(iLocal_89, 0);
					}
					func_64("LOSE_COP", 0);
					unk_0x88B0F0DC270164B7(&uLocal_747, 14);
				}
			}
		}
	}
	else if (func_181(&uLocal_389, 300000, 0))
	{
		unk_0x88B0F0DC270164B7(&uLocal_747, 18);
	}
	if (!unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 0))
	{
		if (((unk_0x36B6788E20B0DAB6(unk_0xA0081090911D13E5(), joaat("weapon_pistol"), 0) || unk_0x36B6788E20B0DAB6(unk_0xA0081090911D13E5(), joaat("weapon_combatpistol"), 0)) || unk_0x36B6788E20B0DAB6(unk_0xA0081090911D13E5(), joaat("weapon_appistol"), 0)) || unk_0x36B6788E20B0DAB6(unk_0xA0081090911D13E5(), joaat("weapon_microsmg"), 0))
		{
			if (func_61())
			{
				func_56(1);
				unk_0x88B0F0DC270164B7(&(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3), 0);
				if (func_22(iLocal_89))
				{
				}
			}
		}
		else
		{
			func_42(400);
		}
	}
	else if (!unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 1))
	{
		if (!func_40())
		{
			unk_0x88B0F0DC270164B7(&(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3), 1);
			func_33();
			func_32("FM_IHELP_AMMU", -1);
			if (!unk_0x08BA6DD398CA197C(uLocal_747, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
				unk_0x88B0F0DC270164B7(&uLocal_747, 31);
			}
			func_180(&uLocal_387);
			if (bLocal_753)
			{
				if (bLocal_754)
				{
					Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_2 = 3;
				}
				else
				{
					Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_31())
	{
		iVar0 = Global_2506009[iParam0 /*3*/][func_25(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xA75D835C91B77269(iVar0, iParam1, iParam3);
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
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

void func_33()
{
	if (!func_39())
	{
		return;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == Global_1312571.f_9)
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
	
	bVar0 = unk_0xA86CA03D9749EEB3();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x4B50AAB32FBE0483();
		Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
	}
	StringCopy(&(Global_1312571.f_12), "", 16);
	StringCopy(&(Global_1312571.f_16), "", 64);
	StringCopy(&(Global_1312571.f_32), "", 64);
	Global_1312571.f_52 = 0;
	Global_1312571.f_53 = 0;
	Global_1312571.f_54 = 0;
	Global_1312571.f_55 = -1;
	Global_1312571.f_56 = 0;
	Global_1312571.f_59 = 0;
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
		unk_0x775C13C3833376FE(&(Global_1312571.f_12));
		func_37();
		unk_0x953FDEB57BB0D276();
	}
}

void func_37()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
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
	unk_0xD6B5839441DD3BED(&(Global_1312571.f_12));
	func_37();
	return unk_0x7A2AFC1B08BD3742();
}

int func_39()
{
	if (Global_1312571 == 20)
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
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		iVar0 = func_53(unk_0x0C1D3C552325765B());
		if (iVar0 < iParam0)
		{
			if (func_52())
			{
				func_43(1734805203, (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				unk_0x259FB6CFB8A55AFE((iParam0 - iVar0));
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
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
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
		if (!unk_0xFCE85827D6C3F47A(func_26()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_51(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_50(1, iParam4);
			Global_2573371 = 0;
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
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
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
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_47(&(Global_2572880[iParam0 /*73*/]));
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
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
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
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_50(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_51(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_52())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = uParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = uParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_52()
{
	if (unk_0x955B8C8F89CC3AC0())
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
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return unk_0x6F46EEAF5BB462EA(-1);
		}
		else if (func_55(iParam0))
		{
			return Global_1588660[iParam0 /*532*/].f_201.f_3;
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
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
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
		unk_0x09C86C0C5CA26B1E(&(Global_91458.f_1308[iParam0]), iParam1);
	}
	else if (unk_0xA86CA03D9749EEB3())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0x09C86C0C5CA26B1E(&uVar0, iParam1);
			func_59(func_27(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_101553.f_668[iParam0]), iParam1);
	}
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x88B0F0DC270164B7(&(Global_91458.f_1308[iParam0]), iParam1);
	}
	else if (unk_0xA86CA03D9749EEB3())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			unk_0x88B0F0DC270164B7(&uVar0, iParam1);
			func_59(func_27(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x88B0F0DC270164B7(&(Global_101553.f_668[iParam0]), iParam1);
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
		if (!unk_0x08BA6DD398CA197C(Global_1729707, 19))
		{
			unk_0x88B0F0DC270164B7(&Global_1729707, 19);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_1729707, 19))
	{
		unk_0x09C86C0C5CA26B1E(&Global_1729707, 19);
	}
}

void func_64(char* sParam0, bool bParam1)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return;
	}
	if (func_68(sParam0))
	{
		return;
	}
	func_34();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_67();
	func_66(bParam1);
	func_65();
}

void func_65()
{
	unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 1);
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_1312571.f_59), 0);
}

void func_67()
{
	Global_1312571.f_10 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 86400000);
	Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
}

bool func_68(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_69(sParam0);
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12));
}

bool func_69(char* sParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

void func_70()
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { func_73(unk_0x0C1D3C552325765B()) };
	bVar13 = unk_0x1EC72E271ABEC1BA();
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
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam1);
}

int func_72(var uParam0)
{
	if (unk_0xA264814CF83E3B89())
	{
		if (unk_0x46E4D0D0168391A1() && unk_0xC1B41A655437AD93(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_73(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

bool func_74()
{
	return func_75();
}

bool func_75()
{
	return Global_1336446.f_40 == 3;
}

int func_76()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
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
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
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
			Global_101553.f_32740[iParam0 /*29*/].f_12[0] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_12[1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_12[2] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[0] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101553.f_32740[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69617)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_79();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_79();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
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
	
	StringCopy(&cVar0, unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0x754E61FE98961B39("");
		StringCopy(&cVar16, unk_0xFFC9DE7E93AEAE21(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0xFFC9DE7E93AEAE21("CELL_253");
		unk_0xDAB775768F2B11B1(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x754E61FE98961B39("CELL_255");
		unk_0xBDE6EEC5F6BDC060(&(Global_2923[1 /*6*/]));
		unk_0xDAB775768F2B11B1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x09C86C0C5CA26B1E(&Global_2313, 0);
}

void func_80()
{
	if (func_86(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		if (Global_69617)
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
	return Global_101553.f_1991.f_539.f_3549;
}

void func_82()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_85(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_84(unk_0xA0081090911D13E5());
			if (func_83(iVar0) && (!func_86(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_83(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_83(int iParam0)
{
	return iParam0 < 3;
}

int func_84(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(uParam0);
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
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_86(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_87(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 17);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
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
	
	if (unk_0x509383441597090D(sParam2))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam3))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69());
	iVar1 = func_173(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x509383441597090D(sParam7))
	{
		iVar2 = unk_0x3BB8D1C5FAAB25B3(sParam7);
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
	Global_1336446.f_40.f_1 = iParam0;
	Global_1336446.f_40.f_2 = iParam1;
	Global_1336446.f_40.f_3 = iParam2;
	StringCopy(&(Global_1336446.f_40.f_4), sParam3, 16);
	Global_1336446.f_40.f_8 = iParam4;
	Global_1336446.f_40.f_9 = iParam5;
	Global_1336446.f_40.f_14 = uParam6;
	func_91(iParam4);
	func_163();
	Global_1336446.f_40.f_13 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 7000);
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
	Global_1336446.f_40.f_10 = 0;
}

void func_93()
{
	Global_1336446.f_40.f_10 = 1;
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
	return iParam0 > Global_1336446.f_40.f_8;
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
	Global_1336446.f_40.f_11 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam0);
	Global_1336446.f_40.f_12 = 1;
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
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_119(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
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
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
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
		if (unk_0x08BA6DD398CA197C(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
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
	if (unk_0x08BA6DD398CA197C(uParam4, 0))
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
	Global_1336446.f_57 = 0;
	Global_1336446.f_57.f_1 = 0;
}

void func_101()
{
	Global_1336446.f_40 = 3;
}

void func_102()
{
	unk_0x88B0F0DC270164B7(&Global_2313, 8);
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
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
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
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
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
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_2577906 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_114() == 0)
	{
		func_112();
		return 0;
	}
	func_111(Global_2577905);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/]), sParam1, 64);
	Global_2576656[Global_2577905 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2576656[Global_2577905 /*104*/].f_24 = iParam2;
	}
	Global_2576656[Global_2577905 /*104*/].f_25 = iParam7;
	Global_2576656[Global_2577905 /*104*/].f_26 = uParam8;
	Global_2576656[Global_2577905 /*104*/].f_29 = uParam9;
	Global_2576656[Global_2577905 /*104*/].f_30 = uParam12;
	Global_2576656[Global_2577905 /*104*/].f_31 = uParam11;
	Global_2576656[Global_2577905 /*104*/].f_28 = 0;
	Global_2576656[Global_2577905 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_33), sParam4, 64);
	Global_2576656[Global_2577905 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_50), sParam5, 64);
	Global_2576656[Global_2577905 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_83), sParam15, 64);
	func_80();
	switch (iParam16)
	{
		case 3:
			Global_2576656[Global_2577905 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2576656[Global_2577905 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2576656[Global_2577905 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2576656[Global_2577905 /*104*/].f_99[1] = 1;
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
				Global_2577906 = 1;
				break;
			
			case 0:
				Global_2577906 = 1;
				break;
			
			case 2:
				Global_2577906 = 1;
				break;
			
			case 1:
				Global_2577906 = 1;
				break;
			}
	}
	Global_16814[Global_2577905] = 0;
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
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
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
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_107(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
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
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
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
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
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
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
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
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_107(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_107(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_107(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_107(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_107(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
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
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(sParam7))
	{
		func_107(sParam7);
	}
	if (!unk_0x509383441597090D(sParam8))
	{
		func_107(sParam8);
	}
	if (!unk_0x509383441597090D(sParam9))
	{
		func_107(sParam9);
	}
	if (!unk_0x509383441597090D(sParam10))
	{
		func_107(sParam10);
	}
	if (!unk_0x509383441597090D(sParam11))
	{
		func_107(sParam11);
	}
	unk_0xE73340DA551C95E1();
}

void func_107(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

void func_108(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

bool func_109()
{
	return Global_1315229;
}

void func_110(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101553.f_12906[iParam0 /*20*/].f_8;
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
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_2576656[iParam0 /*104*/].f_18 = uVar0;
	Global_2576656[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2576656[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2576656[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2576656[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2576656[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_113(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
		{
			Global_2577905 = iVar2;
		}
		iVar2++;
	}
	Global_2576656[Global_2577905 /*104*/].f_24 = 1;
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
		if (Global_2576656[iVar2 /*104*/].f_24 == 0)
		{
			Global_2577905 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2576656[iVar2 /*104*/].f_24 == 0 || Global_2576656[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_113(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
			{
				Global_2577905 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2577905 == 11)
	{
		return 0;
	}
	Global_2576656[Global_2577905 /*104*/].f_99[0] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[1] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[2] = 0;
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
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
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
	if (unk_0x509383441597090D(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_117(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFFC9DE7E93AEAE21(sParam0);
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
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
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
	if (Global_1353298)
	{
		if (iParam0 == Global_1353298.f_1)
		{
			return;
		}
	}
	if (func_121(iParam0))
	{
		return;
	}
	if (Global_1353336 >= 32)
	{
		return;
	}
	Global_1353303[Global_1353336] = iParam0;
	Global_1353336++;
	if (bParam1)
	{
	}
}

int func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353336)
	{
		if (Global_1353303[iVar0] == iParam0)
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
	if (Global_1353296 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353296)
	{
		if (Global_1353135[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x8AFD1D34F9842BB9(Global_1353135[iVar0 /*5*/].f_2) && unk_0x70FC8DD858474636(Global_1353135[iVar0 /*5*/].f_2))
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
	
	if (iParam0 >= Global_1353296)
	{
		return;
	}
	if (unk_0x8AFD1D34F9842BB9(Global_1353135[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1353135[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x17F6632C0BD7F15A(Global_1353135[iParam0 /*5*/].f_2), 64);
			unk_0xCF5D3892606E7989(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB360DA2AE12FCC02(Global_1353135[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1353296)
	{
		Global_1353135[iVar32 /*5*/] = { Global_1353135[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_124(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_124(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_125();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

int func_125()
{
	return -1;
}

void func_126()
{
	Global_1336446.f_40.f_9 = 4;
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
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_119(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
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
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
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
		if (unk_0x08BA6DD398CA197C(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
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
	if (unk_0x08BA6DD398CA197C(uParam4, 0))
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
	Global_1336446.f_40.f_9 = 3;
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
	
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
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
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
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
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
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
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
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
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/]), sParam1, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_25 = iParam7;
	Global_101553.f_12996[Global_16812 /*104*/].f_26 = uParam8;
	Global_101553.f_12996[Global_16812 /*104*/].f_29 = uParam9;
	Global_101553.f_12996[Global_16812 /*104*/].f_30 = uParam12;
	Global_101553.f_12996[Global_16812 /*104*/].f_31 = uParam11;
	Global_101553.f_12996[Global_16812 /*104*/].f_28 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x08BA6DD398CA197C(Global_2313, 10))
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
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
				Global_101553.f_12996[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
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
		if (unk_0x08BA6DD398CA197C(Global_2313, 10))
		{
			Global_101553.f_12906[0 /*20*/].f_17 = 1;
			Global_101553.f_12906[1 /*20*/].f_17 = 1;
			Global_101553.f_12906[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101553.f_12906[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101553.f_12906[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101553.f_12906[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101553.f_12906[1 /*20*/].f_17 = 1;
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
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
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
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_101553.f_12996[iParam0 /*104*/].f_18 = uVar0;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
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
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_135(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_24 = 1;
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
	
	if (Global_69617)
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
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0 || Global_101553.f_12996[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_135(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
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
	Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 0;
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
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 3;
	if (func_132(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_138(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
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
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x08BA6DD398CA197C(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x08BA6DD398CA197C(uParam4, 4))
	{
		bVar0 = func_155(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_145(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x08BA6DD398CA197C(uParam4, 3))
		{
			func_144(1);
		}
		if (unk_0x08BA6DD398CA197C(uParam4, 5))
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
	Global_2489614 = 0;
}

void func_141()
{
	Global_1336446.f_57 = 1;
	Global_1336446.f_57.f_1 = 0;
}

void func_142()
{
	Global_1336446.f_40.f_9 = 1;
}

void func_143(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2315, 0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
	}
}

void func_144(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 20);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
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
					unk_0x588D9B1F6CF36C3C(0);
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
		if (unk_0xE80581DE0ACF1F8A())
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
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
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
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_150())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
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
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
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
	unk_0x588D9B1F6CF36C3C(0);
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
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
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
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
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
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

void func_153()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
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
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
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
	Global_1336446.f_40.f_9 = 2;
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
	Global_1336446.f_55 = Global_1336446.f_40.f_1;
	Global_1336446.f_55.f_1 = Global_1336446.f_40.f_10;
}

void func_163()
{
	Global_1336446.f_40 = 1;
}

bool func_164()
{
	return Global_1336446.f_40 == 1;
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	if (!func_166(iParam0))
	{
		return 0;
	}
	if (Global_1336446.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1336446.f_40.f_3 != iParam2)
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
	if (!Global_1336446.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_167()
{
	if (Global_1336446.f_40 == 0)
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
	if (Global_1312462.f_18 != 0)
	{
		return 0;
	}
	if (Global_1738544 || func_170())
	{
		return 0;
	}
	if (!unk_0x08BA6DD398CA197C(uParam0, 6))
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
	return unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1352032);
}

int func_170()
{
	if (Global_2567282.f_797 > -1)
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
	return unk_0x3BB8D1C5FAAB25B3(&cVar0);
}

bool func_174()
{
	return Global_2487434.f_1;
}

int func_175()
{
	if (Global_1336634.f_2)
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
	Global_2490101.f_1067 = iParam0;
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
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
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
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
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
		if (!unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 8))
		{
			unk_0x88B0F0DC270164B7(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 8);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 8))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 8);
	}
}

bool func_184()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 8);
}

void func_185()
{
	unk_0xA0303A6B8C99DD6A(800);
	if (!bLocal_755 || bLocal_756)
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
		}
	}
	if (!bLocal_756)
	{
		Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_2 = 0;
	}
	else
	{
		Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_2 = 3;
	}
}

void func_186()
{
	if (func_190(&Local_90, &(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_4)))
	{
		Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_2 = -1;
	}
	func_187(&Local_90);
}

void func_187(var uParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x84C71F36E7D97756();
	switch (iLocal_751)
	{
		case 0:
			if (unk_0x08BA6DD398CA197C(*uParam0, 18))
			{
				if (!func_182(&uLocal_757))
				{
					func_19(&uLocal_757, 0, 0);
				}
				if (!bVar0)
				{
					if (!unk_0x598A9E990F05F82C())
					{
						func_71("HLP_XP1", 9000);
						func_180(&uLocal_757);
						func_19(&uLocal_757, 0, 0);
						iLocal_751++;
					}
				}
				else if (func_181(&uLocal_757, 5000, 0))
				{
					iLocal_751++;
					func_180(&uLocal_757);
					func_19(&uLocal_757, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!unk_0x598A9E990F05F82C())
				{
					func_71("HLP_XP2", 9000);
					func_180(&uLocal_757);
					func_19(&uLocal_757, 0, 0);
					iLocal_751++;
				}
			}
			else if (func_181(&uLocal_757, 5000, 0))
			{
				iLocal_751++;
				func_180(&uLocal_757);
				func_19(&uLocal_757, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!unk_0x598A9E990F05F82C())
				{
					func_71("HLP_RNK1", 9000);
					func_189(1);
					Global_2482149.f_1713 = 1;
					func_188(1, 0, -1);
					func_180(&uLocal_757);
					func_19(&uLocal_757, 0, 0);
					iLocal_751++;
				}
			}
			else if (func_181(&uLocal_757, 5000, 0))
			{
				iLocal_751++;
				func_180(&uLocal_757);
				func_19(&uLocal_757, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!unk_0x598A9E990F05F82C())
				{
					func_177(0);
					if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
					{
						func_71("HLP_CASHXBX", 9000);
					}
					else if (unk_0xBECAD780226FC009() || unk_0xD95D58B9AAC86D55())
					{
						func_71("HLP_CASHPSN", 9000);
					}
					else
					{
						func_71("HLP_CASHGEN", 9000);
					}
					func_180(&uLocal_757);
					func_19(&uLocal_757, 0, 0);
					iLocal_751 = 99;
				}
			}
			else if (func_181(&uLocal_757, 5000, 0))
			{
				iLocal_751 = 99;
				func_180(&uLocal_757);
				func_19(&uLocal_757, 0, 0);
			}
			break;
		
		case 99:
			if (!unk_0x08BA6DD398CA197C(uLocal_748, 2))
			{
				unk_0x88B0F0DC270164B7(&uLocal_748, 2);
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
				Global_1342783.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x88B0F0DC270164B7(&(Global_1342783.f_980), iParam0);
			}
			else
			{
				unk_0x09C86C0C5CA26B1E(&(Global_1342783.f_980), iParam0);
			}
			break;
	}
}

void func_189(int iParam0)
{
	Global_2482149.f_4391 = iParam0;
}

int func_190(var uParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	bool bVar8;
	
	if (!unk_0x08BA6DD398CA197C(*uParam0, 13))
	{
		if (unk_0x0D2E3F017CBCB8A8(unk_0xCF05B25EAAD660C4()))
		{
			Var5 = { unk_0x9BB4C18693988436(unk_0xCF05B25EAAD660C4()) };
			if ((Var5.f_0 != 0f || Var5.f_1 != 0f) || Var5.f_2 != 0f)
			{
				unk_0x9A32D4A48E252BF5(Var5, 0f, 0f, 0f);
				if (!unk_0x08BA6DD398CA197C(*uParam0, 14))
				{
					unk_0x88B0F0DC270164B7(uParam0, 14);
				}
			}
		}
	}
	else if (unk_0x08BA6DD398CA197C(*uParam0, 14))
	{
		unk_0xE6A458183F9D98BB();
		unk_0x09C86C0C5CA26B1E(uParam0, 14);
	}
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		unk_0xF674E664795C8CB3(unk_0xA0081090911D13E5(), 337, 1);
	}
	func_342(uParam0);
	unk_0xE819B15556666449(1f);
	func_336(uParam0);
	func_335(unk_0x0C1D3C552325765B());
	if (!unk_0x08BA6DD398CA197C(*uParam0, 31))
	{
		if (uParam0->f_6 > 0)
		{
			uParam0->f_32 = unk_0x07BE5BF18FEF759E(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
			if (uParam0->f_32 != 0)
			{
				unk_0x493EEE1A031FD768(uParam0->f_32);
				unk_0x88B0F0DC270164B7(uParam0, 31);
			}
		}
	}
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (unk_0xA96867DD0A63C62C(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (unk_0xA96867DD0A63C62C(joaat("freemode")) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2482149.f_1712)
				{
					Global_2482149.f_1712 = 1;
					unk_0xED51F0C0B305BF08(0);
				}
				if (!func_184())
				{
					func_183(1);
				}
				if (!unk_0x2C22E7D1C80A53EF() && !unk_0x44F90FBF2C1E8021())
				{
					unk_0xF215E3B07B7990BC(800);
				}
				if (!func_182(&(uParam0->f_15)))
				{
					func_19(&(uParam0->f_15), 0, 0);
				}
				unk_0xA12A0D38735CCBF2(&Global_1738996);
				Global_1738997 = 0;
				Global_1738999 = 0;
				Global_1738998 = 0;
				Global_1739000 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0x2C22E7D1C80A53EF())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_327(0, 0, 0, 1, 1, 1, 0);
					unk_0xB83D8731C188F55F(1, 0);
					func_364(1);
					unk_0xF673E19DAC6909CE(1);
					unk_0x3937609D9943BA2A("EXTRASUNNY");
					unk_0xE696B2ED0A88B548(19, 0, 0);
					unk_0x7CC0A7FC363E51CB(1);
					func_326(0);
					unk_0x0745756DF15EC093(0);
					func_320(1, 0);
					func_310(1, 1);
					if (unk_0xA96867DD0A63C62C(joaat("fm_intro")) < 1 || !func_309())
					{
						if (uParam0->f_292)
						{
							if (func_308() == 0)
							{
								unk_0x64D9F230E29482F4("GTAO_INTRO_MALE");
								unk_0x3BED7F741AF1BC3B(1);
							}
						}
					}
					func_301(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					unk_0x09C86C0C5CA26B1E(uParam0, 0);
					unk_0x09C86C0C5CA26B1E(uParam0, 1);
					unk_0x09C86C0C5CA26B1E(uParam0, 2);
					unk_0x09C86C0C5CA26B1E(uParam0, 9);
					unk_0x88B0F0DC270164B7(uParam0, 7);
					uParam0->f_122 = unk_0x6A173E5A316F6DE8(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				unk_0x491067A8E906F22D(joaat("frogger"));
				if (unk_0x2C1B5A0D3E233FC3(joaat("frogger")))
				{
					if (!uParam0->f_292 || unk_0xCEE951E37A461E16())
					{
						if (func_298())
						{
							unk_0xA421BDE55BDAC058(0);
							func_293(1, 1);
							unk_0x5923E12E92A75CDD(0);
							unk_0x94724F7C938EBE34(1);
							if (!func_176())
							{
								func_292();
							}
							func_189(0);
							func_291();
							unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Global_1312546, 1, 0, 0, 1);
							unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 1);
							unk_0x591413670A1EF437(unk_0xA0081090911D13E5(), false, 0);
							unk_0xCF03D9C8A7F1577C(0);
							if (unk_0x16833EFAA58E63DB(unk_0x30317AA2F78B9688()))
							{
								unk_0xC40118229E47A3D7(unk_0x30317AA2F78B9688(), 0f);
							}
							unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), true);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0xC740F8182E7E9681())
				{
					if (!unk_0x08BA6DD398CA197C(*uParam0, 4))
					{
						if (func_290() == 64 || func_290() == 65)
						{
							unk_0xE6A458183F9D98BB();
							unk_0x34534A9EB2E27FA9(754.2219f, 1226.831f, 356.5081f, func_289(-14.367f, 0f, 157.3524f), 100f, 0);
							func_180(&(uParam0->f_17));
							func_19(&(uParam0->f_17), 0, 0);
							unk_0x88B0F0DC270164B7(uParam0, 4);
						}
					}
					else if (unk_0x27971883A8701E73("FM_INTRO_START") && (unk_0x66491EA3F355967D() || func_181(&(uParam0->f_17), 5000, 0)))
					{
						if (!unk_0x08BA6DD398CA197C(*uParam0, 24))
						{
							if (unk_0x08BA6DD398CA197C(*uParam0, 7))
							{
								unk_0xB49DAD10DC051295("FM_INTRO_START");
								unk_0x88B0F0DC270164B7(uParam0, 24);
								unk_0x88B0F0DC270164B7(uParam0, 21);
							}
						}
						else if (unk_0x81EC84CE8CCB60F8() > 0)
						{
							unk_0x2E1E57681BD2050A();
							unk_0x0062776E9EA8BF87(6);
							if (!unk_0x0D2E3F017CBCB8A8(uParam0->f_7))
							{
								uParam0->f_7 = unk_0x669DFEC6C5E8A812("DEFAULT_SCRIPTED_CAMERA", 0);
								unk_0x07553DAC96600443(uParam0->f_7, 1);
							}
							unk_0xD769455216FEB03D(uParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							unk_0xD769455216FEB03D(uParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							unk_0xE54CCCC537E33A2F(uParam0->f_7, "HAND_SHAKE", 0.15f);
							unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 1, 0);
							func_288(uParam0);
							unk_0x88B0F0DC270164B7(uParam0, 11);
							if (uParam0->f_292)
							{
								unk_0xCB6C0A1F9D504BB9(9, 9, 9, 9);
								unk_0xF80EEE19CD752043();
							}
							unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), true);
							if (unk_0x2C22E7D1C80A53EF())
							{
								unk_0xA0303A6B8C99DD6A(800);
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
					unk_0x94724F7C938EBE34(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!unk_0x08BA6DD398CA197C(*uParam0, 2))
				{
					unk_0x94724F7C938EBE34(1);
					func_71("FMIC_INTRO2", -1);
					unk_0x88B0F0DC270164B7(uParam0, 2);
				}
				unk_0xD769455216FEB03D(uParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				unk_0xD769455216FEB03D(uParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				unk_0xCB6C0A1F9D504BB9(9, 13, 9, 13);
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
				if (!unk_0x08BA6DD398CA197C(*uParam0, 10))
				{
					func_283();
					unk_0x88B0F0DC270164B7(uParam0, 10);
				}
				unk_0xD769455216FEB03D(uParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				unk_0xD769455216FEB03D(uParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (unk_0x1F1B2B6E500380C5(uParam0->f_48, 0))
				{
					unk_0x04A094CF81A4EDE3(uParam0->f_48);
					unk_0xEDBE0CD7C81FA37E(uParam0->f_48, true, 0);
					unk_0xE88D5F6F072B64A7(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0x1F1B2B6E500380C5(uParam0->f_48, 0))
				{
					unk_0xE88D5F6F072B64A7(uParam0->f_48);
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
								if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
								{
									unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), true);
								}
								fVar0 = 5000f;
								if (unk_0x1F1B2B6E500380C5(uParam0->f_92[0], 0))
								{
									unk_0x8466AAF2AE57F1B9(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									unk_0xDFB772A81EE119F9(uParam0->f_92[0], fVar0);
								}
								if (unk_0x1F1B2B6E500380C5(uParam0->f_92[1], 0))
								{
									unk_0x8466AAF2AE57F1B9(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									unk_0xDFB772A81EE119F9(uParam0->f_92[1], fVar0);
								}
								if (unk_0x1F1B2B6E500380C5(uParam0->f_92[2], 0))
								{
									unk_0x8466AAF2AE57F1B9(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									unk_0xDFB772A81EE119F9(uParam0->f_92[2], fVar0);
								}
								if (unk_0x1F1B2B6E500380C5(uParam0->f_92[3], 0))
								{
									unk_0x8466AAF2AE57F1B9(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									unk_0xDFB772A81EE119F9(uParam0->f_92[3], fVar0);
								}
								if (unk_0x1F1B2B6E500380C5(uParam0->f_92[4], 0))
								{
									unk_0x8466AAF2AE57F1B9(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									unk_0xDFB772A81EE119F9(uParam0->f_92[4], fVar0);
								}
								unk_0x88B0F0DC270164B7(uParam0, 15);
								unk_0xA0303A6B8C99DD6A(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					unk_0xE696B2ED0A88B548(16, 0, 0);
					func_280(uParam0);
					func_279(uParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					unk_0x8A33BD71F3FB5A6A(uParam0->f_7, 1);
					unk_0xB4A3E9E17CD4384A(uParam0->f_7);
					unk_0x50C86ABC13A071F8(uParam0->f_7, 0);
					unk_0xC94C39C53546E775("MP_INTRO_RACE_SCENE");
					unk_0xCB6C0A1F9D504BB9(9, 12, 9, 12);
					func_277(uParam0, 14);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				if (!unk_0x08BA6DD398CA197C(*uParam0, 5))
				{
					func_71("FMIC_RACE1", -1);
					unk_0x88B0F0DC270164B7(uParam0, 5);
				}
				func_287(uParam0, 14);
				if (func_285(uParam0, 14, 0))
				{
					func_276(uParam0, 23539f, 0);
					unk_0xE696B2ED0A88B548(16, 0, 0);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_277(uParam0, 15);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				if (!unk_0x08BA6DD398CA197C(uParam0->f_3, 0))
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
					unk_0xE696B2ED0A88B548(16, 0, 0);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_255(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_277(uParam0, 16);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				if (!unk_0x08BA6DD398CA197C(uParam0->f_3, 0))
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
					unk_0xE696B2ED0A88B548(16, 0, 0);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x6B1A3158AFCC9C01(uParam0->f_9, 0.7f);
					func_277(uParam0, 17);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				if (!unk_0x08BA6DD398CA197C(*uParam0, 6))
				{
					unk_0x88B0F0DC270164B7(uParam0, 6);
					func_71("FMIC_RACE2", -1);
				}
				if (!unk_0x08BA6DD398CA197C(uParam0->f_3, 0))
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
					unk_0xE696B2ED0A88B548(16, 0, 0);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 18);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				if (!unk_0x08BA6DD398CA197C(uParam0->f_3, 0))
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
					unk_0xE696B2ED0A88B548(16, 0, 0);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					if (unk_0xD3FACCDA4D66AEAD(uParam0->f_92[2]))
					{
						unk_0xEFA1F34A28EE763C(&(uParam0->f_92[2]));
					}
					if (unk_0xD3FACCDA4D66AEAD(uParam0->f_92[3]))
					{
						unk_0xEFA1F34A28EE763C(&(uParam0->f_92[3]));
					}
					if (unk_0xD3FACCDA4D66AEAD(uParam0->f_92[4]))
					{
						unk_0xEFA1F34A28EE763C(&(uParam0->f_92[4]));
					}
					func_279(uParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 19);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				if (!unk_0x08BA6DD398CA197C(uParam0->f_3, 0))
				{
					func_265(uParam0);
				}
				else
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (unk_0x319560E9F4C27299(uParam0->f_32))
							{
								if (!unk_0x912AD5A10E7633F0(uParam0->f_91, 0))
								{
									unk_0xFA64D091CB09FA9C(uParam0->f_91, uParam0->f_32, unk_0x3BB8D1C5FAAB25B3("GtaMloRoom001"));
								}
								unk_0x32508B8E93AAF2BE("SE_MP_GARAGE_L_RADIO", 0);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!unk_0x912AD5A10E7633F0(uParam0->f_49[iVar4], 0))
									{
										unk_0xFA64D091CB09FA9C(uParam0->f_49[iVar4], uParam0->f_32, unk_0x3BB8D1C5FAAB25B3("GtaMloRoom001"));
									}
									iVar4++;
								}
								unk_0x88B0F0DC270164B7(&(uParam0->f_3), 6);
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
				if (func_285(uParam0, 19, 0) && unk_0x08BA6DD398CA197C(uParam0->f_3, 0))
				{
					if (unk_0x08BA6DD398CA197C(*uParam0, 12))
					{
						unk_0x09C86C0C5CA26B1E(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_285(uParam0, 19, -4968))
				{
					if (!unk_0x08BA6DD398CA197C(*uParam0, 12))
					{
						unk_0x94724F7C938EBE34(1);
						unk_0x88B0F0DC270164B7(uParam0, 12);
					}
				}
				else if (func_285(uParam0, 19, -5618))
				{
					if (!unk_0x08BA6DD398CA197C(*uParam0, 30))
					{
						unk_0xFF4920BAFCB15F65("MP_intro_logo", 0, 0);
						unk_0x88B0F0DC270164B7(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_253(uParam0);
				func_252(uParam0);
				if (unk_0x08BA6DD398CA197C(uParam0->f_3, 0))
				{
					if (!unk_0x0D2E3F017CBCB8A8(uParam0->f_7))
					{
						uParam0->f_7 = unk_0x669DFEC6C5E8A812("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					unk_0x07553DAC96600443(uParam0->f_7, 1);
					unk_0xD769455216FEB03D(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					unk_0xD769455216FEB03D(uParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					unk_0xE54CCCC537E33A2F(uParam0->f_7, "HAND_SHAKE", 0.1f);
					unk_0xFC7F8BA9E54D9F71(uParam0->f_32, unk_0x3BB8D1C5FAAB25B3("GtaMloRoom001"));
					unk_0x32508B8E93AAF2BE("SE_MP_GARAGE_L_RADIO", 0);
					unk_0x0062776E9EA8BF87(0);
					unk_0xB1A2B8A065E00D0C(uParam0->f_10, 0f);
					if (!unk_0xEB361B4BD195A4D3(uParam0->f_91))
					{
						unk_0x2945E3CE39DA8591(uParam0->f_91, 0, 0);
					}
					if (unk_0x6DEB8F88FFE09057("MP_INTRO_RACE_SCENE"))
					{
						unk_0x7C1793252FA472B6("MP_INTRO_RACE_SCENE");
					}
					unk_0xCB6C0A1F9D504BB9(9, 13, 9, 13);
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
					unk_0xD769455216FEB03D(uParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					unk_0xD769455216FEB03D(uParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					unk_0xB1A2B8A065E00D0C(uParam0->f_10, 0f);
					if (!unk_0xEB361B4BD195A4D3(uParam0->f_91))
					{
						unk_0x2945E3CE39DA8591(uParam0->f_91, 0, 0);
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
				unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				unk_0x88B0F0DC270164B7(uParam0, 13);
				unk_0xD769455216FEB03D(uParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				unk_0xD769455216FEB03D(uParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				unk_0xE696B2ED0A88B548(18, 0, 0);
				func_248(uParam0, 2);
				func_248(uParam0, 7);
				unk_0x2C07692AA3545079(func_247());
				if (unk_0xD3FACCDA4D66AEAD(uParam0->f_91))
				{
					unk_0x4E82D83B086B5C93(&(uParam0->f_91));
				}
				unk_0x88B0F0DC270164B7(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_253(uParam0);
				func_252(uParam0);
				if (!unk_0x08BA6DD398CA197C(*uParam0, 8))
				{
					unk_0x88B0F0DC270164B7(uParam0, 8);
				}
				if (func_264(uParam0) && func_258(uParam0))
				{
					func_256(uParam0);
				}
				func_287(uParam0, 28);
				if ((unk_0x27971883A8701E73("FM_INTRO_DRIVE_START") && unk_0x08BA6DD398CA197C(uParam0->f_3, 3)) && func_285(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
					{
						if (func_244(uParam0))
						{
							unk_0x6BF154720AFAC26B(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							unk_0x6BF154720AFAC26B(unk_0xA0081090911D13E5(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x6BF154720AFAC26B(unk_0xA0081090911D13E5(), "MP_Male_Character", 0, 0, 0);
							unk_0x6BF154720AFAC26B(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_244(uParam0))
				{
					unk_0x6BF154720AFAC26B(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					unk_0x6BF154720AFAC26B(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!unk_0x912AD5A10E7633F0(uParam0->f_35, 0))
				{
					unk_0x6BF154720AFAC26B(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x912AD5A10E7633F0(uParam0->f_34, 0))
				{
					unk_0x6BF154720AFAC26B(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0x912AD5A10E7633F0(uParam0->f_33, 0))
				{
					unk_0xEDBE0CD7C81FA37E(uParam0->f_33, true, 0);
					unk_0x6BF154720AFAC26B(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_242(uParam0);
				unk_0xE9CD83E3D4F58EB7("CONTRAILS", 0);
				unk_0xCB6C0A1F9D504BB9(9, 9, 9, 9);
				func_71("FMIC_TENN", -1);
				unk_0xCD18C12FDC3FB874(4);
				func_234(1, 1, 1, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0x7C0379981B7E6E40())
				{
					if (uParam0->f_32 != 0)
					{
						unk_0xBC4C3BADA8503A20(uParam0->f_32);
					}
					func_233(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (unk_0xDF658EB6CA91DFBC() - uParam0->f_13);
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
						if (unk_0xF467E68A540B1B48("MP_Female_Character", 0))
						{
							if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
							{
								if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
								{
									if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
									{
										unk_0xA4FE049E1F729261(unk_0xA0081090911D13E5(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (unk_0xF467E68A540B1B48("MP_Male_Character", 0))
					{
						if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
						{
							if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
							{
								if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
								{
									unk_0xA4FE049E1F729261(unk_0xA0081090911D13E5(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (unk_0xF467E68A540B1B48("LAMAR", 0))
				{
					if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
					{
						if (!unk_0xEB361B4BD195A4D3(uParam0->f_35))
						{
							if (!unk_0x39FEE545B315414E(uParam0->f_35, 0))
							{
								unk_0xA4FE049E1F729261(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								unk_0x2945E3CE39DA8591(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (unk_0xF467E68A540B1B48("MP_Lamar_Car", 0))
				{
					if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
					{
						unk_0x6F40E1EE32FE6A5E(uParam0->f_34, 1, 1, 0);
						unk_0x27327EB62D93CDBA(uParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						unk_0x10BB9EA2ADBCF0F3(uParam0->f_34, -106.11f);
						func_232(uParam0, 3099.997f);
						unk_0x4877CFC15DCA5DED(uParam0->f_34, 1);
					}
				}
				if (unk_0x8D6FD7D962FDEB7F(0))
				{
					unk_0xE696B2ED0A88B548(21, 0, 0);
					func_277(uParam0, 33);
					func_279(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (unk_0x08BA6DD398CA197C(*uParam0, 29))
				{
					if (unk_0xF574829AAE4F6157() || unk_0x6990DC1A99A254AC() > 3254)
					{
						unk_0x09C86C0C5CA26B1E(uParam0, 29);
					}
				}
				if ((func_231(uParam0) && func_230(uParam0)) && !unk_0x7C0379981B7E6E40())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (unk_0xDF658EB6CA91DFBC() - uParam0->f_13);
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
					unk_0x84A51D29DB6F8864();
					unk_0x5A1AB77B8D08A174();
					if (unk_0x08BA6DD398CA197C(*uParam0, 7))
					{
						unk_0xB49DAD10DC051295("FM_INTRO_DRIVE_START");
						unk_0x88B0F0DC270164B7(uParam0, 21);
					}
					if (!unk_0x407BC09BBD9D4440())
					{
						unk_0x445ABC6551819877(0);
					}
					if (!unk_0x08BA6DD398CA197C(*uParam1, 1))
					{
						unk_0x88B0F0DC270164B7(uParam1, 1);
					}
					func_229(uParam0);
					func_228(uParam0);
					func_234(0, 1, 1, 0);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					unk_0x09C86C0C5CA26B1E(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0xDF658EB6CA91DFBC() - (uParam0->f_26 + unk_0x6990DC1A99A254AC()));
					}
					if (!unk_0x08BA6DD398CA197C(*uParam0, 22))
					{
						if (unk_0x07ECAE5066B48EA1() == 1)
						{
							unk_0xE696B2ED0A88B548(19, 59, 0);
							unk_0x88B0F0DC270164B7(uParam0, 22);
						}
					}
					if (func_226(uParam0))
					{
						if (unk_0x07ECAE5066B48EA1() == 2)
						{
							if (!unk_0x08BA6DD398CA197C(*uParam0, 18))
							{
								unk_0x88B0F0DC270164B7(uParam0, 18);
							}
							if (unk_0x6990DC1A99A254AC() > 23146)
							{
								if (!unk_0x08BA6DD398CA197C(*uParam0, 27))
								{
									unk_0x9B614DAFE05884CA("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0x88B0F0DC270164B7(uParam0, 27);
								}
								if (!unk_0x08BA6DD398CA197C(*uParam0, 28))
								{
									unk_0x9B614DAFE05884CA("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0x88B0F0DC270164B7(uParam0, 28);
								}
							}
							unk_0x2C7FA0DF791BD922(4950f);
							if (unk_0x08BA6DD398CA197C(*uParam0, 22))
							{
								unk_0xE696B2ED0A88B548(21, 0, 0);
								unk_0x09C86C0C5CA26B1E(uParam0, 22);
							}
							if (unk_0x6990DC1A99A254AC() > 23254)
							{
								func_225(uParam0);
							}
						}
					}
					if (unk_0x07ECAE5066B48EA1() > 2)
					{
						func_228(uParam0);
						if (!unk_0x08BA6DD398CA197C(*uParam0, 22))
						{
							unk_0xE696B2ED0A88B548(21, 0, 0);
							unk_0x88B0F0DC270164B7(uParam0, 22);
						}
						if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
						{
							unk_0x2B6521A64CBB67B6(uParam0->f_34);
							unk_0x028D0662CAA67D4F(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = unk_0x6990DC1A99A254AC();
				}
				break;
			
			case 33:
				if (func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 1))
					{
						if (func_285(uParam0, 33, -5450))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0x88B0F0DC270164B7(&(uParam0->f_1), 1);
							}
						}
					}
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 2))
					{
						if (func_285(uParam0, 33, -5450))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0x88B0F0DC270164B7(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 1))
					{
						if (func_285(uParam0, 33, -5450))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0x88B0F0DC270164B7(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					unk_0xC94C39C53546E775("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 33);
				func_223(uParam0);
				if (func_285(uParam0, 33, 0))
				{
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 2))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0x88B0F0DC270164B7(&(uParam0->f_1), 2);
						}
					}
				}
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					if (!unk_0x912AD5A10E7633F0(uParam0->f_34, 0))
					{
						unk_0xC65E66FE2F1B36F5(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x02A1B2E42F6521E6(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x033BAA756AF85975(uParam0->f_7, 33.3479f);
						unk_0xE54CCCC537E33A2F(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x07553DAC96600443(uParam0->f_7, 1);
						if (!unk_0x912AD5A10E7633F0(uParam0->f_35, 0))
						{
							unk_0xEDBE0CD7C81FA37E(uParam0->f_35, false, 0);
						}
						if (!unk_0x912AD5A10E7633F0(uParam0->f_36, 0))
						{
							unk_0xEDBE0CD7C81FA37E(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x890054289B8F80A8(uParam0->f_11, uParam0->f_34, unk_0x72759B1F07CD05E3(uParam0->f_34, "seat_dside_f"));
						if (func_244(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x890054289B8F80A8(uParam0->f_12, uParam0->f_34, unk_0x72759B1F07CD05E3(uParam0->f_34, "seat_pside_f"));
							unk_0xCAD643E9EAD85BD2(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xB1A2B8A065E00D0C(uParam0->f_11, 0.129f);
							unk_0xB1A2B8A065E00D0C(uParam0->f_12, 0.129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x890054289B8F80A8(uParam0->f_12, uParam0->f_34, 0);
							unk_0xCAD643E9EAD85BD2(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xB1A2B8A065E00D0C(uParam0->f_11, 0.145f);
							unk_0xB1A2B8A065E00D0C(uParam0->f_12, 0.145f);
						}
						unk_0x2945E3CE39DA8591(uParam0->f_36, 0, 0);
						unk_0x2945E3CE39DA8591(unk_0xA0081090911D13E5(), 0, 0);
					}
					func_277(uParam0, 34);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 34);
				func_223(uParam0);
				if (func_285(uParam0, 34, 0))
				{
					func_232(uParam0, 18966.65f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 3))
					{
						if (func_285(uParam0, 34, 1100))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0x88B0F0DC270164B7(&(uParam0->f_1), 3);
							}
						}
					}
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 4))
					{
						if (func_285(uParam0, 34, 1100))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0x88B0F0DC270164B7(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 3))
					{
						if (func_285(uParam0, 34, 1000))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0x88B0F0DC270164B7(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x912AD5A10E7633F0(uParam0->f_35, 0))
					{
						unk_0xEDBE0CD7C81FA37E(uParam0->f_35, true, 0);
					}
					if (!unk_0x912AD5A10E7633F0(uParam0->f_36, 0))
					{
						unk_0xEDBE0CD7C81FA37E(uParam0->f_36, false, 0);
					}
					if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0) && !unk_0x912AD5A10E7633F0(uParam0->f_34, 0))
					{
						unk_0xA4FE049E1F729261(unk_0xA0081090911D13E5(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x2945E3CE39DA8591(unk_0xA0081090911D13E5(), 0, 0);
					}
					func_277(uParam0, 35);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 35);
				func_223(uParam0);
				if (func_285(uParam0, 35, 0))
				{
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 5))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0x88B0F0DC270164B7(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 4))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0x88B0F0DC270164B7(&(uParam0->f_1), 4);
						}
					}
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 5))
					{
						if (func_285(uParam0, 36, -3750))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0x88B0F0DC270164B7(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					if (!unk_0x912AD5A10E7633F0(uParam0->f_34, 0))
					{
						unk_0xC65E66FE2F1B36F5(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x02A1B2E42F6521E6(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x033BAA756AF85975(uParam0->f_7, 33.3479f);
						unk_0xE54CCCC537E33A2F(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x07553DAC96600443(uParam0->f_7, 1);
						if (!unk_0x912AD5A10E7633F0(uParam0->f_35, 0))
						{
							unk_0xEDBE0CD7C81FA37E(uParam0->f_35, false, 0);
						}
						if (!unk_0x912AD5A10E7633F0(uParam0->f_36, 0))
						{
							unk_0xEDBE0CD7C81FA37E(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x890054289B8F80A8(uParam0->f_11, uParam0->f_34, unk_0x72759B1F07CD05E3(uParam0->f_34, "seat_dside_f"));
						if (func_244(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x890054289B8F80A8(uParam0->f_12, uParam0->f_34, unk_0x72759B1F07CD05E3(uParam0->f_34, "seat_pside_f"));
							unk_0xCAD643E9EAD85BD2(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xB1A2B8A065E00D0C(uParam0->f_11, 0.363f);
							unk_0xB1A2B8A065E00D0C(uParam0->f_12, 0.363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x890054289B8F80A8(uParam0->f_12, uParam0->f_34, 0);
							unk_0xCAD643E9EAD85BD2(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xB1A2B8A065E00D0C(uParam0->f_11, 0.298f);
							unk_0xB1A2B8A065E00D0C(uParam0->f_12, 0.298f);
						}
						unk_0x2945E3CE39DA8591(uParam0->f_36, 0, 0);
						unk_0x2945E3CE39DA8591(unk_0xA0081090911D13E5(), 0, 0);
					}
					func_277(uParam0, 36);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 36);
				func_223(uParam0);
				if (func_285(uParam0, 36, 0))
				{
					func_232(uParam0, 42700.96f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 6))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0x88B0F0DC270164B7(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 6))
					{
						if (func_285(uParam0, 36, 1000))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0x88B0F0DC270164B7(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x912AD5A10E7633F0(uParam0->f_35, 0))
					{
						unk_0xEDBE0CD7C81FA37E(uParam0->f_35, true, 0);
					}
					if (!unk_0x912AD5A10E7633F0(uParam0->f_36, 0))
					{
						unk_0xEDBE0CD7C81FA37E(uParam0->f_36, false, 0);
					}
					if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0) && !unk_0x912AD5A10E7633F0(uParam0->f_34, 0))
					{
						unk_0xA4FE049E1F729261(unk_0xA0081090911D13E5(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x2945E3CE39DA8591(unk_0xA0081090911D13E5(), 0, 0);
					}
					func_277(uParam0, 37);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 37);
				func_223(uParam0);
				if (func_285(uParam0, 37, 0))
				{
					func_232(uParam0, 51033.28f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 7))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0x88B0F0DC270164B7(&(uParam0->f_1), 7);
						}
					}
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 8))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0x88B0F0DC270164B7(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 9))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0x88B0F0DC270164B7(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 7))
					{
						if (func_285(uParam0, 37, 2500))
						{
							if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0x88B0F0DC270164B7(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 38);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 38);
				func_223(uParam0);
				if (func_285(uParam0, 38, 0))
				{
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 8))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0x88B0F0DC270164B7(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 9))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0x88B0F0DC270164B7(&(uParam0->f_1), 9);
						}
					}
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 31))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0x88B0F0DC270164B7(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_244(uParam0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 31))
					{
						if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0x88B0F0DC270164B7(&(uParam0->f_1), 31);
						}
					}
				}
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					if (!unk_0x912AD5A10E7633F0(uParam0->f_34, 0))
					{
						unk_0xC65E66FE2F1B36F5(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x02A1B2E42F6521E6(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x033BAA756AF85975(uParam0->f_7, 33.3479f);
						unk_0xE54CCCC537E33A2F(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x07553DAC96600443(uParam0->f_7, 1);
						if (!unk_0x912AD5A10E7633F0(uParam0->f_35, 0))
						{
							unk_0xEDBE0CD7C81FA37E(uParam0->f_35, false, 0);
						}
						if (!unk_0x912AD5A10E7633F0(uParam0->f_36, 0))
						{
							unk_0xEDBE0CD7C81FA37E(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x890054289B8F80A8(uParam0->f_11, uParam0->f_34, unk_0x72759B1F07CD05E3(uParam0->f_34, "seat_dside_f"));
						if (func_244(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x890054289B8F80A8(uParam0->f_12, uParam0->f_34, unk_0x72759B1F07CD05E3(uParam0->f_34, "seat_pside_f"));
							unk_0xCAD643E9EAD85BD2(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xB1A2B8A065E00D0C(uParam0->f_11, 0.811f);
							unk_0xB1A2B8A065E00D0C(uParam0->f_12, 0.811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x890054289B8F80A8(uParam0->f_12, uParam0->f_34, 0);
							unk_0xCAD643E9EAD85BD2(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xB1A2B8A065E00D0C(uParam0->f_11, 0.791f);
							unk_0xB1A2B8A065E00D0C(uParam0->f_12, 0.791f);
						}
						unk_0x2945E3CE39DA8591(uParam0->f_36, 0, 0);
						unk_0x2945E3CE39DA8591(unk_0xA0081090911D13E5(), 0, 0);
					}
					func_277(uParam0, 39);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 39);
				func_223(uParam0);
				if (func_285(uParam0, 39, 0))
				{
					func_232(uParam0, 85050f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 31))
				{
					if (func_224(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0x88B0F0DC270164B7(&(uParam0->f_1), 31);
					}
				}
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0xCB6C0A1F9D504BB9(9, 12, 9, 12);
					if (!unk_0x912AD5A10E7633F0(uParam0->f_35, 0))
					{
						unk_0xEDBE0CD7C81FA37E(uParam0->f_35, true, 0);
					}
					if (!unk_0x912AD5A10E7633F0(uParam0->f_36, 0))
					{
						unk_0xEDBE0CD7C81FA37E(uParam0->f_36, false, 0);
					}
					if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0) && !unk_0x912AD5A10E7633F0(uParam0->f_34, 0))
					{
						unk_0xA4FE049E1F729261(unk_0xA0081090911D13E5(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x2945E3CE39DA8591(unk_0xA0081090911D13E5(), 0, 0);
					}
					func_277(uParam0, 40);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 40);
				if (func_223(uParam0) && func_285(uParam0, 40, 0))
				{
					func_232(uParam0, 116366.5f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					unk_0xE696B2ED0A88B548(0, 0, 0);
					func_279(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_277(uParam0, 41);
					unk_0x427FBF2D4A21BA2A("CONTRAILS", 0);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 41);
				if (func_285(uParam0, 41, 0))
				{
					unk_0x07F9504AFB05BA5C(1);
					func_232(uParam0, 127166.5f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_222(uParam0);
					func_279(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 42);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 42);
				if (func_285(uParam0, 42, 0))
				{
					unk_0x07F9504AFB05BA5C(0);
					func_232(uParam0, 170800f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 43);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 43);
				if (func_285(uParam0, 43, 0))
				{
					unk_0xCB6C0A1F9D504BB9(9, 12, 9, 12);
					func_232(uParam0, 191799.8f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 44);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 44);
				if (func_285(uParam0, 44, 0))
				{
					func_232(uParam0, 196633.1f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 45);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 45);
				if (func_285(uParam0, 45, 0))
				{
					func_232(uParam0, 201466.5f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 46);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 46);
				if (func_285(uParam0, 46, 0))
				{
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_221(uParam0);
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					if (!unk_0x912AD5A10E7633F0(uParam0->f_34, 0))
					{
						unk_0xC65E66FE2F1B36F5(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x02A1B2E42F6521E6(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x033BAA756AF85975(uParam0->f_7, 33.3479f);
						unk_0xE54CCCC537E33A2F(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x07553DAC96600443(uParam0->f_7, 1);
						if (!unk_0x912AD5A10E7633F0(uParam0->f_35, 0))
						{
							unk_0xEDBE0CD7C81FA37E(uParam0->f_35, false, 0);
						}
						if (!unk_0x912AD5A10E7633F0(uParam0->f_36, 0))
						{
							unk_0xEDBE0CD7C81FA37E(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x890054289B8F80A8(uParam0->f_11, uParam0->f_34, unk_0x72759B1F07CD05E3(uParam0->f_34, "seat_dside_f"));
						if (func_244(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x890054289B8F80A8(uParam0->f_12, uParam0->f_34, unk_0x72759B1F07CD05E3(uParam0->f_34, "seat_pside_f"));
							unk_0xCAD643E9EAD85BD2(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xB1A2B8A065E00D0C(uParam0->f_11, 0.726f);
							unk_0xB1A2B8A065E00D0C(uParam0->f_12, 0.74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x890054289B8F80A8(uParam0->f_12, uParam0->f_34, 0);
							unk_0xCAD643E9EAD85BD2(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xB1A2B8A065E00D0C(uParam0->f_11, 0.726f);
							unk_0xB1A2B8A065E00D0C(uParam0->f_12, 0.815f);
						}
						unk_0x2945E3CE39DA8591(uParam0->f_36, 0, 0);
						unk_0x2945E3CE39DA8591(unk_0xA0081090911D13E5(), 0, 0);
					}
					func_277(uParam0, 47);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 47);
				if (func_285(uParam0, 47, 0))
				{
					func_232(uParam0, 213066.4f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_221(uParam0);
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x912AD5A10E7633F0(uParam0->f_35, 0))
					{
						unk_0xEDBE0CD7C81FA37E(uParam0->f_35, true, 0);
					}
					if (!unk_0x912AD5A10E7633F0(uParam0->f_36, 0))
					{
						unk_0xEDBE0CD7C81FA37E(uParam0->f_36, false, 0);
					}
					if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0) && !unk_0x912AD5A10E7633F0(uParam0->f_34, 0))
					{
						unk_0xA4FE049E1F729261(unk_0xA0081090911D13E5(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0x2945E3CE39DA8591(unk_0xA0081090911D13E5(), 0, 0);
					}
					func_277(uParam0, 48);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 48);
				if (func_285(uParam0, 48, 0))
				{
					unk_0x88B0F0DC270164B7(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 3);
					func_220(uParam0, 10177.75f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_221(uParam0);
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_277(uParam0, 49);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				func_287(uParam0, 49);
				if (unk_0x27971883A8701E73("FM_INTRO_DRIVE_END") && func_285(uParam0, 49, 0))
				{
					func_218(uParam0, 4500f);
					unk_0x88B0F0DC270164B7(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_221(uParam0);
				if (!unk_0xB20CA7A3EE29687A())
				{
					if (!unk_0x9AB98132476504BC())
					{
						unk_0xA0303A6B8C99DD6A(250);
					}
				}
				if (unk_0x08BA6DD398CA197C(*uParam0, 15))
				{
					func_279(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						unk_0x82BDD8095E75E06D();
						unk_0x09C86C0C5CA26B1E(uParam0, 11);
					}
					func_277(uParam0, 50);
					unk_0x09C86C0C5CA26B1E(uParam0, 15);
				}
				if (!unk_0x08BA6DD398CA197C(*uParam0, 20))
				{
					if (func_244(uParam0))
					{
						unk_0x6946239981A418D8("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0x6946239981A418D8("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (unk_0xCAC1D33299EA11C3())
						{
							if (func_244(uParam0))
							{
								unk_0xA626C1A83CE0A7A9("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0xA626C1A83CE0A7A9("MP_1", 0, 1);
							}
						}
					}
					if (unk_0xDF3F7A44D6400C56())
					{
						unk_0x88B0F0DC270164B7(uParam0, 20);
					}
				}
				func_287(uParam0, 50);
				if (!unk_0x912AD5A10E7633F0(uParam0->f_34, 0))
				{
					if (unk_0xC8FF9EAEF62B118C(uParam0->f_34))
					{
						if (unk_0x39053CCA2C4B5DA1(uParam0->f_34) < 1f)
						{
							unk_0x26B9AD2BE477CF10(uParam0->f_34);
						}
					}
				}
				if (func_285(uParam0, 50, 0) && unk_0x08BA6DD398CA197C(*uParam0, 20))
				{
					if (unk_0x08BA6DD398CA197C(*uParam0, 21))
					{
						unk_0xB49DAD10DC051295("FM_INTRO_DRIVE_END");
						unk_0x09C86C0C5CA26B1E(uParam0, 21);
					}
					unk_0x26B9AD2BE477CF10(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
					{
						if (func_244(uParam0))
						{
							unk_0x6BF154720AFAC26B(unk_0xA0081090911D13E5(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x6BF154720AFAC26B(unk_0xA0081090911D13E5(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0x912AD5A10E7633F0(uParam0->f_35, 0))
				{
					unk_0x6BF154720AFAC26B(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x912AD5A10E7633F0(uParam0->f_34, 0))
				{
					unk_0x6BF154720AFAC26B(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0x88B0F0DC270164B7(uParam0, 13);
				if (unk_0x6DEB8F88FFE09057("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0x7C1793252FA472B6("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0xCD18C12FDC3FB874(4);
				func_234(1, 1, 1, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0x7C0379981B7E6E40())
				{
					unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (unk_0xDF658EB6CA91DFBC() - uParam0->f_13);
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
						if (!unk_0x08BA6DD398CA197C(*uParam0, 23))
						{
							if (unk_0xF467E68A540B1B48("MP_Female_Character", 0))
							{
								if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
								{
									unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), unk_0xE92969F4247292EB(Var1.f_0, Var1.f_1));
									unk_0x8BDD755F07063522(0);
									unk_0x2A7D387AD73F1D15(0, 1065353216);
									unk_0x88B0F0DC270164B7(uParam0, 23);
								}
							}
						}
					}
					else if (!unk_0x08BA6DD398CA197C(*uParam0, 23))
					{
						if (unk_0xF467E68A540B1B48("MP_1", 0))
						{
							if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
							{
								unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), unk_0xE92969F4247292EB(Var1.f_0, Var1.f_1));
								unk_0x8BDD755F07063522(0);
								unk_0x2A7D387AD73F1D15(0, 1065353216);
								unk_0x88B0F0DC270164B7(uParam0, 23);
							}
						}
					}
				}
				if (unk_0xF467E68A540B1B48("LAMAR", 0))
				{
					if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
					{
						if (!unk_0xEB361B4BD195A4D3(uParam0->f_35))
						{
							if (!unk_0x39FEE545B315414E(uParam0->f_35, 0))
							{
								unk_0xA4FE049E1F729261(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (unk_0xF467E68A540B1B48("MP_Lamar_Car", 0))
				{
					if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
					{
						unk_0x74207974B5483203(uParam0->f_34);
					}
				}
				if (unk_0x8D6FD7D962FDEB7F(0))
				{
					func_216(1);
					unk_0x8BDD755F07063522(0);
					unk_0x2A7D387AD73F1D15(0, 1065353216);
				}
				if (!func_215(unk_0x0C1D3C552325765B()))
				{
					func_214(1);
				}
				if (unk_0x7C0379981B7E6E40())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0xDF658EB6CA91DFBC() - (uParam0->f_30 + unk_0x6990DC1A99A254AC()));
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
							if (unk_0xD3FACCDA4D66AEAD(uParam0->f_36))
							{
								unk_0x4E82D83B086B5C93(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					unk_0x84A51D29DB6F8864();
					unk_0x5A1AB77B8D08A174();
					if (!unk_0x407BC09BBD9D4440())
					{
						unk_0x445ABC6551819877(0);
					}
					func_234(0, 1, 1, 0);
					unk_0x09C86C0C5CA26B1E(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0x7C0379981B7E6E40())
				{
					unk_0x9656BB1F68387E70();
				}
				else if (!unk_0x08BA6DD398CA197C(*uParam0, 17))
				{
					if (unk_0x2C22E7D1C80A53EF())
					{
						unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
						unk_0x88B0F0DC270164B7(uParam0, 13);
						unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), true);
						if (uParam0->f_292)
						{
							unk_0x82BDD8095E75E06D();
							unk_0x09C86C0C5CA26B1E(uParam0, 11);
						}
						func_180(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						unk_0x88B0F0DC270164B7(uParam0, 17);
					}
					else if (!unk_0x44F90FBF2C1E8021())
					{
						unk_0xF215E3B07B7990BC(250);
					}
				}
				else if (func_181(&(uParam0->f_17), 10000, 0))
				{
					if (func_212(uParam0))
					{
						func_280(uParam0);
						func_228(uParam0);
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), false);
							if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
							{
								unk_0x591413670A1EF437(unk_0xA0081090911D13E5(), true, 0);
								unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), 61.3164f);
							}
						}
						if (!unk_0xEB361B4BD195A4D3(uParam0->f_35))
						{
							if (!unk_0x39FEE545B315414E(uParam0->f_35, 0))
							{
								if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
								{
									unk_0xA4FE049E1F729261(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_216(1);
						if (!func_215(unk_0x0C1D3C552325765B()))
						{
							func_214(1);
						}
						func_234(0, 1, 1, 0);
						unk_0xE696B2ED0A88B548(0, 0, 0);
						if (unk_0x08BA6DD398CA197C(*uParam0, 21))
						{
							unk_0xB49DAD10DC051295("FM_INTRO_DRIVE_END");
							unk_0x09C86C0C5CA26B1E(uParam0, 21);
						}
						unk_0x88B0F0DC270164B7(uParam0, 1);
						unk_0x88B0F0DC270164B7(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0x7C0379981B7E6E40())
				{
					unk_0x9656BB1F68387E70();
				}
				else if (!unk_0x08BA6DD398CA197C(*uParam0, 17))
				{
					if (unk_0x2C22E7D1C80A53EF())
					{
						unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
						unk_0x88B0F0DC270164B7(uParam0, 13);
						unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), true);
						if (uParam0->f_292)
						{
							unk_0x82BDD8095E75E06D();
							unk_0x09C86C0C5CA26B1E(uParam0, 11);
						}
						func_180(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						unk_0x88B0F0DC270164B7(uParam0, 17);
					}
					else if (!unk_0x44F90FBF2C1E8021())
					{
						unk_0xF215E3B07B7990BC(250);
					}
				}
				else if (func_181(&(uParam0->f_17), 10000, 0))
				{
					if (func_264(uParam0))
					{
						func_280(uParam0);
						func_228(uParam0);
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), false);
							if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
							{
								unk_0x591413670A1EF437(unk_0xA0081090911D13E5(), true, 0);
								unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), 61.3164f);
								if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
								{
									unk_0xA4FE049E1F729261(unk_0xA0081090911D13E5(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!unk_0xEB361B4BD195A4D3(uParam0->f_35))
						{
							if (!unk_0x39FEE545B315414E(uParam0->f_35, 0))
							{
								if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
								{
									unk_0xA4FE049E1F729261(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_215(unk_0x0C1D3C552325765B()))
						{
						}
						func_234(0, 1, 1, 0);
						if (unk_0x08BA6DD398CA197C(*uParam0, 21))
						{
							unk_0xB49DAD10DC051295("FM_INTRO_DRIVE_END");
							unk_0x09C86C0C5CA26B1E(uParam0, 21);
						}
						unk_0xA0303A6B8C99DD6A(250);
						unk_0xE696B2ED0A88B548(0, 0, 0);
						unk_0x88B0F0DC270164B7(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 3);
						uParam0->f_13 = (unk_0xDF658EB6CA91DFBC() - func_209(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_220(uParam0, 10177.75f);
						unk_0x88B0F0DC270164B7(uParam0, 15);
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
					unk_0x82BDD8095E75E06D();
					unk_0x09C86C0C5CA26B1E(uParam0, 11);
				}
				if (!unk_0xEB361B4BD195A4D3(uParam0->f_35))
				{
					unk_0x332BEDF7CCD4832D(uParam0->f_35, -1);
					unk_0x77637031DE326F70(uParam0->f_35, 1);
				}
				unk_0xED51F0C0B305BF08(1);
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
				uParam0->f_289 = unk_0xBBDA792448DB5A89((unk_0xDF658EB6CA91DFBC() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = unk_0xBBDA792448DB5A89(func_217(uParam0));
			}
			uParam0->f_290 = func_197(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && unk_0x08BA6DD398CA197C(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				unk_0x393927D6CA4C2A3E(uParam0->f_289);
			}
			else
			{
				unk_0x393927D6CA4C2A3E(uParam0->f_290);
			}
		}
		func_194(uParam0);
		if (unk_0x08BA6DD398CA197C(*uParam0, 12))
		{
			if (func_254())
			{
				func_193();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
				{
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), false, 60);
				}
			}
			func_191(uParam0);
			unk_0x9873DF493A2EBB18();
			unk_0x7ABD1B29E6C2963D(9);
			unk_0x7ABD1B29E6C2963D(7);
			unk_0x7ABD1B29E6C2963D(18);
			unk_0x7ABD1B29E6C2963D(6);
			unk_0x7ABD1B29E6C2963D(3);
			unk_0x7ABD1B29E6C2963D(13);
			unk_0x7ABD1B29E6C2963D(4);
		}
		if (Global_2482149.f_1713)
		{
			unk_0xFF61FA1A24898079(2, 187, 1);
		}
	}
	return 0;
}

void func_191(var uParam0)
{
	var uVar0;
	
	if (!unk_0x08BA6DD398CA197C(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!unk_0x8188FDE7090D3AF6())
			{
				if (!unk_0x7437A5536711AE6C())
				{
					uVar0 = unk_0x0C1D3C552325765B() + 32;
					unk_0xBE612A05D7409D87(1, uVar0);
					func_192(1);
					unk_0x88B0F0DC270164B7(uParam0, 9);
				}
			}
			else
			{
				func_192(1);
				unk_0x88B0F0DC270164B7(uParam0, 9);
			}
		}
	}
}

void func_192(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 18))
		{
			unk_0x88B0F0DC270164B7(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 18);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 18))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 18);
	}
}

void func_193()
{
	unk_0x0F83039847376F53(Global_1318036, 255, 255, 255, 255, 0);
	if (Global_1318038 == 0)
	{
		unk_0xB9D4F4DE7E7EC038(Global_1318036, "SET_BIG_LOGO_VISIBLE");
		unk_0x7CBFB9F4AF33C67E(1);
		unk_0x5CC02BB872FEF340(1);
		unk_0xE73340DA551C95E1();
		Global_1318038 = 1;
	}
}

void func_194(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_58[uParam0->f_90]))
	{
		if (unk_0x912AD5A10E7633F0(uParam0->f_58[uParam0->f_90], 0))
		{
		}
		Var0 = { unk_0xC59DF10B4FC39DF8(uParam0->f_58[uParam0->f_90], 1) };
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
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_58[iParam1]))
	{
		if (unk_0x912AD5A10E7633F0(uParam0->f_58[iParam1], 0))
		{
		}
		func_196(iParam1, &Var0, &fVar3);
		unk_0x27327EB62D93CDBA(uParam0->f_58[iParam1], Var0, 1, 0, 0, 1);
		unk_0x10BB9EA2ADBCF0F3(uParam0->f_58[iParam1], fVar3);
		unk_0xBB21B5C3111E5F85(uParam0->f_58[iParam1], true);
		unk_0xEEE264130F2EA9E2(uParam0->f_58[iParam1]);
		unk_0x591413670A1EF437(uParam0->f_58[iParam1], false, 0);
		unk_0xEDBE0CD7C81FA37E(uParam0->f_58[iParam1], false, 0);
	}
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_74[iParam1]))
	{
		if (unk_0x912AD5A10E7633F0(uParam0->f_74[iParam1], 0))
		{
		}
		unk_0xEDBE0CD7C81FA37E(uParam0->f_74[iParam1], false, 0);
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
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0x6990DC1A99A254AC()));
			if (unk_0x07ECAE5066B48EA1() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / unk_0xBBDA792448DB5A89(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = unk_0xBBDA792448DB5A89((uParam0->f_27 + unk_0x6990DC1A99A254AC()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_198(var uParam0)
{
	if (unk_0x08BA6DD398CA197C(*uParam0, 29))
	{
		unk_0x25EB9EFC7CE73AB5(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		unk_0x25EB9EFC7CE73AB5(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_199(var uParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x08BA6DD398CA197C(*uParam0, 0))
	{
		if (unk_0x7C0379981B7E6E40())
		{
			unk_0x445ABC6551819877(0);
		}
		unk_0xF673E19DAC6909CE(0);
		if (uParam0->f_292)
		{
			unk_0x3BED7F741AF1BC3B(0);
			unk_0x82BDD8095E75E06D();
			unk_0x09C86C0C5CA26B1E(uParam0, 11);
		}
		if (unk_0x08BA6DD398CA197C(*uParam0, 14))
		{
			unk_0xE6A458183F9D98BB();
			unk_0x09C86C0C5CA26B1E(uParam0, 14);
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
		unk_0x8E3DB58E9EDB1597();
		if (bParam2)
		{
			if (unk_0xD3FACCDA4D66AEAD(uParam0->f_34))
			{
				unk_0x615DE34FC732CF11(&(uParam0->f_34));
			}
			if (unk_0xD3FACCDA4D66AEAD(uParam0->f_35))
			{
				unk_0x0689C659BF2D3BF7(&(uParam0->f_35));
			}
		}
		if (unk_0xD3FACCDA4D66AEAD(uParam0->f_36))
		{
			unk_0x4E82D83B086B5C93(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			func_364(0);
		}
		func_205();
		func_200();
		func_234(0, 1, 1, 0);
		unk_0x00EC874B4D5FCE61(0, -1);
		unk_0x5A6B86444D23FCA8(1);
		if (unk_0xA86CA03D9749EEB3())
		{
			if (unk_0xA012E3A84A2B2F1A())
			{
				unk_0x3E2462666E08F4C9(0, 1);
			}
		}
		if (unk_0x08BA6DD398CA197C(*uParam0, 21))
		{
			unk_0xB49DAD10DC051295("FM_INTRO_DRIVE_END");
			unk_0x09C86C0C5CA26B1E(uParam0, 21);
		}
		unk_0x7CC0A7FC363E51CB(0);
		func_326(1);
		if (unk_0x08BA6DD398CA197C(*uParam0, 26))
		{
			func_320(1, 0);
			unk_0x09C86C0C5CA26B1E(uParam0, 26);
		}
		Global_2432628.f_3196 = 0;
		if (!unk_0xC740F8182E7E9681())
		{
			unk_0xCD7C19843C25A772(0);
		}
		unk_0x0745756DF15EC093(1);
		if (bParam1)
		{
		}
		func_177(0);
		func_189(1);
		Global_2482149.f_1713 = 0;
		Global_2482149.f_1712 = 0;
		if (unk_0x6DEB8F88FFE09057("MP_INTRO_RACE_SCENE"))
		{
			unk_0x7C1793252FA472B6("MP_INTRO_RACE_SCENE");
		}
		if (unk_0x6DEB8F88FFE09057("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0x7C1793252FA472B6("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_301(14, 1);
		unk_0xCF03D9C8A7F1577C(5);
		unk_0x427FBF2D4A21BA2A("CONTRAILS", 0);
		unk_0x11DDC8BDE5CBDCB5(5, "FMINTRO");
		unk_0x11DDC8BDE5CBDCB5(6, "FMINTRO");
		unk_0x11DDC8BDE5CBDCB5(7, "FMINTRO");
		unk_0x04269E768DDAF940("mp_intro_seq@");
		unk_0x04269E768DDAF940("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x04269E768DDAF940("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0x04269E768DDAF940("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0x16833EFAA58E63DB(unk_0x30317AA2F78B9688()))
		{
			unk_0xC40118229E47A3D7(unk_0x30317AA2F78B9688(), 0.7f);
		}
		unk_0x9CC9E62E6D67D295(0);
		unk_0x8BDD755F07063522(0);
		unk_0x2A7D387AD73F1D15(0, 1065353216);
		if (unk_0xA86CA03D9749EEB3())
		{
			unk_0xEB410F2073890250();
			unk_0xED51F0C0B305BF08(1);
		}
		unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
		unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), false);
		if (!unk_0xB20CA7A3EE29687A() && !unk_0x9AB98132476504BC())
		{
			unk_0xA0303A6B8C99DD6A(800);
		}
		unk_0x88B0F0DC270164B7(uParam0, 0);
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
			unk_0x88B0F0DC270164B7(&Global_2314, 16);
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
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
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
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
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
	if (!Global_1312563)
	{
		return;
	}
	func_206();
}

void func_206()
{
	Global_1312563 = 0;
	StringCopy(&(Global_1312563.f_1), "", 24);
	Global_1312563.f_7 = 0;
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
	unk_0x1757D2CC022D31AD(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	unk_0x1757D2CC022D31AD(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
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
	unk_0x491067A8E906F22D(iVar0);
	unk_0x491067A8E906F22D(iVar1);
	if (unk_0x2C1B5A0D3E233FC3(iVar0) && unk_0x2C1B5A0D3E233FC3(iVar1))
	{
		if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_34))
		{
			uParam0->f_34 = unk_0xE044C77D0FC9DB66(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0);
			unk_0x1A3D669FD1E4223C(uParam0->f_34, 1);
			unk_0xF3E3BC1FD7FDE221(uParam0->f_34, 0);
			unk_0xC2407AC016215F2D(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			unk_0x028D0662CAA67D4F(uParam0->f_34, 2);
		}
		else if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_35))
		{
			if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xF8418B3B87CFCCBF(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, 0);
				unk_0xFF5CE2ECB4FBD4A8(uParam0->f_35, 1);
				unk_0x39800A40136ECF37(uParam0->f_34, 1);
				unk_0x39800A40136ECF37(uParam0->f_35, 1);
				unk_0x65889F26F311FC55(uParam0->f_35, unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5()));
				unk_0xC2407AC016215F2D(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_34) || !unk_0xD3FACCDA4D66AEAD(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_213(var uParam0, int iParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_58[iParam1]))
	{
		unk_0xEFA1F34A28EE763C(&(uParam0->f_58[iParam1]));
	}
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_74[iParam1]))
	{
		unk_0x4E82D83B086B5C93(&(uParam0->f_74[iParam1]));
	}
}

void func_214(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_141), 22);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_141), 22);
	}
}

bool func_215(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_141, 22);
}

void func_216(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 4);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 4);
	}
}

int func_217(var uParam0)
{
	if (uParam0->f_6 < 31)
	{
		return unk_0x81EC84CE8CCB60F8();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + unk_0x6990DC1A99A254AC());
	}
	return (uParam0->f_28 + unk_0x81EC84CE8CCB60F8());
}

void func_218(var uParam0, float fParam1)
{
	func_219(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_219(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0x1F1B2B6E500380C5(uParam0, 0))
	{
		if (bParam4)
		{
			unk_0x26B9AD2BE477CF10(uParam0);
			unk_0x8466AAF2AE57F1B9(uParam0, iParam1, sParam2, 1);
		}
		else if (!unk_0xC8FF9EAEF62B118C(uParam0))
		{
			unk_0x8466AAF2AE57F1B9(uParam0, iParam1, sParam2, 1);
			unk_0x7D626F776988DACB(uParam0, 1);
		}
		else
		{
			iVar0 = unk_0xC47221AEE3FE706F(iParam1, sParam2);
			if (unk_0x2A743010DA8CA71B(uParam0) != iVar0)
			{
				unk_0x8466AAF2AE57F1B9(uParam0, iParam1, sParam2, 1);
				unk_0x7D626F776988DACB(uParam0, 1);
			}
		}
		unk_0xDFB772A81EE119F9(uParam0, (fParam3 - unk_0xA2A1A94778C2551E(uParam0)));
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
		iVar0 = unk_0x3BB8D1C5FAAB25B3("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0x3217B792F2F3BB7B(iVar1))
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
		if (unk_0xD3FACCDA4D66AEAD(uParam0->f_37[iVar0]))
		{
			unk_0x4E82D83B086B5C93(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0x2C07692AA3545079(joaat("g_m_y_mexgoon_02"));
	unk_0x04269E768DDAF940("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0x04269E768DDAF940("amb@world_human_hang_out_street@male_a@base");
}

int func_223(var uParam0)
{
	int iVar0;
	
	if (unk_0x08BA6DD398CA197C(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0x491067A8E906F22D(joaat("g_m_y_mexgoon_02"));
		unk_0xA9DC3948106CC3E4("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0xA9DC3948106CC3E4("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0x2C1B5A0D3E233FC3(joaat("g_m_y_mexgoon_02")) && unk_0xAD21C77209FD2024("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0xAD21C77209FD2024("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = unk_0xF8418B3B87CFCCBF(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, 0);
					unk_0x39800A40136ECF37(uParam0->f_37[iVar0], 1);
					unk_0xFF5CE2ECB4FBD4A8(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							unk_0x80D24BCACA9887CB(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							unk_0x80D24BCACA9887CB(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							unk_0x80D24BCACA9887CB(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							unk_0x80D24BCACA9887CB(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							unk_0x80D24BCACA9887CB(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							unk_0x27327EB62D93CDBA(uParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							unk_0x10BB9EA2ADBCF0F3(uParam0->f_37[iVar0], 76.8852f);
							unk_0x8942ADC0DB9F81E4(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0xBB21B5C3111E5F85(uParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0x80D24BCACA9887CB(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							unk_0x27327EB62D93CDBA(uParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							unk_0x10BB9EA2ADBCF0F3(uParam0->f_37[iVar0], 87.5786f);
							unk_0x8942ADC0DB9F81E4(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0xBB21B5C3111E5F85(uParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0x80D24BCACA9887CB(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							unk_0x80D24BCACA9887CB(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x2C07692AA3545079(joaat("g_m_y_mexgoon_02"));
		unk_0x04269E768DDAF940("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x04269E768DDAF940("amb@world_human_hang_out_street@male_a@base");
		unk_0x88B0F0DC270164B7(&(uParam0->f_3), 5);
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
	
	if (!unk_0x08BA6DD398CA197C(*uParam0, 25))
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
			if (!unk_0xEB361B4BD195A4D3(uParam0->f_98[iVar0]) && unk_0x1F1B2B6E500380C5(uParam0->f_92[iVar0], 0))
			{
				unk_0xBB21B5C3111E5F85(uParam0->f_92[iVar0], false);
				unk_0xF1F2951FCA900FD0(uParam0->f_92[iVar0], 10f);
				unk_0xA41BA6C0692C37D3(uParam0->f_98[iVar0], uParam0->f_92[iVar0], Var1, 5f, 0, unk_0x705BC1BB91F530B5(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0x88B0F0DC270164B7(uParam0, 25);
	}
}

int func_226(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (unk_0x08BA6DD398CA197C(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = joaat("shamal");
	unk_0x491067A8E906F22D(iVar5);
	unk_0x491067A8E906F22D(func_227());
	if (unk_0x2C1B5A0D3E233FC3(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_92[iVar0]))
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
				uParam0->f_92[iVar0] = unk_0xE044C77D0FC9DB66(iVar5, Var1, fVar4, 0, 0);
				unk_0x74207974B5483203(uParam0->f_92[iVar0]);
				unk_0xBB21B5C3111E5F85(uParam0->f_92[iVar0], true);
				unk_0x028D0662CAA67D4F(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0x2C1B5A0D3E233FC3(func_227()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_98[iVar0]))
			{
				if (unk_0xD3FACCDA4D66AEAD(uParam0->f_92[iVar0]))
				{
					if (unk_0x1F1B2B6E500380C5(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = unk_0x667A2CFA1914073C(uParam0->f_92[iVar0], 4, func_227(), -1, 0, false);
						unk_0xFF5CE2ECB4FBD4A8(uParam0->f_98[iVar0], 1);
						unk_0x6F40E1EE32FE6A5E(uParam0->f_92[iVar0], 1, 1, 0);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0x2C07692AA3545079(iVar5);
	unk_0x2C07692AA3545079(func_227());
	unk_0x88B0F0DC270164B7(&(uParam0->f_3), 11);
	return 1;
}

int func_227()
{
	return unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5());
}

void func_228(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xD3FACCDA4D66AEAD(uParam0->f_92[iVar0]))
		{
			unk_0xEFA1F34A28EE763C(&(uParam0->f_92[iVar0]));
		}
		if (unk_0xD3FACCDA4D66AEAD(uParam0->f_98[iVar0]))
		{
			unk_0x4E82D83B086B5C93(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0x2C07692AA3545079(joaat("shamal"));
	unk_0x2C07692AA3545079(func_227());
}

void func_229(var uParam0)
{
	int iVar0;
	
	if (unk_0x08BA6DD398CA197C(uParam0->f_3, 2))
	{
		unk_0x2C07692AA3545079(joaat("p_cs_mp_jet_01_s"));
		if (unk_0xD3FACCDA4D66AEAD(uParam0->f_33))
		{
			unk_0xE9755D24C3BFFBED(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (unk_0x8290003927BC6478(uParam0->f_120))
			{
				unk_0xD303611C64F7C003(uParam0->f_120, 0);
			}
			if (unk_0x8290003927BC6478(uParam0->f_121))
			{
				unk_0xD303611C64F7C003(uParam0->f_121, 0);
			}
			if (unk_0xA83726F584E77AA5())
			{
				unk_0x10314C97FA558501();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0xD3FACCDA4D66AEAD(uParam0->f_104[iVar0]))
			{
				unk_0x4E82D83B086B5C93(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0x09C86C0C5CA26B1E(&(uParam0->f_3), 2);
	}
}

int func_230(var uParam0)
{
	if (func_244(uParam0))
	{
		unk_0xA9DC3948106CC3E4("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0xA9DC3948106CC3E4("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xAD21C77209FD2024("mp_intro_seq@ig_1_lamar_drive_female") && unk_0xAD21C77209FD2024("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0xA9DC3948106CC3E4("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0xA9DC3948106CC3E4("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xAD21C77209FD2024("mp_intro_seq@ig_1_lamar_drive_male") && unk_0xAD21C77209FD2024("mp_intro_seq@ig_1_lamar_drive_radio"))
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
	if (!unk_0x08BA6DD398CA197C(uParam0->f_3, 10))
	{
		unk_0x491067A8E906F22D(iVar0);
		if (unk_0x2C1B5A0D3E233FC3(iVar0))
		{
			if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_36))
			{
				uParam0->f_36 = unk_0xF8418B3B87CFCCBF(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, 0);
				unk_0xFF5CE2ECB4FBD4A8(uParam0->f_36, 1);
				unk_0x39800A40136ECF37(uParam0->f_36, 1);
				unk_0xEDBE0CD7C81FA37E(uParam0->f_36, false, 0);
				unk_0x65889F26F311FC55(uParam0->f_36, unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5()));
				unk_0xC2407AC016215F2D(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				func_365(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_36))
		{
			return 0;
		}
		unk_0x2C07692AA3545079(iVar0);
		unk_0x88B0F0DC270164B7(&(uParam0->f_3), 10);
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
	
	unk_0x2C07692AA3545079(func_247());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_248(uParam0, iVar0);
		iVar0++;
	}
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_91))
	{
		unk_0x4E82D83B086B5C93(&(uParam0->f_91));
	}
}

void func_234(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x864EAABAADAAA1E3(unk_0x0C1D3C552325765B());
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 1);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 1);
		func_241(1);
		unk_0x3437639A811EF082();
		unk_0xB5B3F40B585C8D07();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xC6CB0C1523C73C77())
			{
				unk_0x588D9B1F6CF36C3C(0);
			}
			if (!func_149())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_240(1, iParam3, iParam2, 0);
		Global_55822 = 1;
		Global_68128 = 1;
		Global_69615 = 1;
	}
	else
	{
		func_241(0);
		unk_0x2D1364CCF7771349();
		Global_55822 = 0;
		if (bParam1)
		{
			unk_0xF100005CC9E0A614();
		}
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 0);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 0);
		func_240(0, iParam3, iParam2, 0);
		if (unk_0xA86CA03D9749EEB3())
		{
			if (((!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_238(unk_0x0C1D3C552325765B())) && !func_236(unk_0x0C1D3C552325765B(), 0)) && !func_235())
			{
				unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
			}
		}
		else if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_238(unk_0x0C1D3C552325765B()))
		{
			unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
		}
		Global_69615 = 0;
	}
}

bool func_235()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

bool func_236(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_237(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
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
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
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
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_239()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

int func_240(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xD0570FF450787B16() != iParam0 && uParam2)
		{
			unk_0x0898502403A5CFE2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_241(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 13);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 13);
	}
}

void func_242(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0x912AD5A10E7633F0(uParam0->f_104[iVar0], 0))
		{
			unk_0x61E5185648237702(uParam0->f_104[iVar0]);
			unk_0x6BF154720AFAC26B(uParam0->f_104[iVar0], func_243(iVar0), 0, 0, 64);
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
	return func_246(unk_0x0C1D3C552325765B());
}

int func_246(int iParam0)
{
	if (unk_0x705BC1BB91F530B5(unk_0x21F191D9AFF98B5E(iParam0)) == joaat("mp_f_freemode_01"))
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
	unk_0x2C07692AA3545079(func_249(iParam1));
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_49[iParam1]))
	{
		if (unk_0x1F1B2B6E500380C5(uParam0->f_49[iParam1], 0))
		{
		}
		unk_0x1B14F0E5AA20299D(uParam0->f_49[iParam1]);
		unk_0xEFA1F34A28EE763C(&(uParam0->f_49[iParam1]));
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
	Global_1318038 = 0;
	if (unk_0x1E3F61C2C1E29520(Global_1318036))
	{
		unk_0xB9D4F4DE7E7EC038(Global_1318036, "SET_BIG_LOGO_VISIBLE");
		unk_0x7CBFB9F4AF33C67E(1);
		unk_0x5CC02BB872FEF340(0);
		unk_0xE73340DA551C95E1();
		unk_0xA12A0D38735CCBF2(&Global_1318036);
	}
}

void func_251(var uParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0xD3FACCDA4D66AEAD(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			unk_0xFFB39FA225A945DB(&uVar0);
		}
		if (unk_0xD3FACCDA4D66AEAD(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			unk_0xFFB39FA225A945DB(&uVar0);
		}
		iVar1++;
	}
	unk_0x2C07692AA3545079(joaat("cheetah"));
	unk_0x2C07692AA3545079(joaat("monroe"));
	unk_0x2C07692AA3545079(joaat("entityxf"));
	unk_0x2C07692AA3545079(joaat("feltzer2"));
	unk_0x11DDC8BDE5CBDCB5(100, "FM_Intro_uber");
	unk_0x11DDC8BDE5CBDCB5(101, "FM_Intro_uber");
	unk_0x11DDC8BDE5CBDCB5(102, "FM_Intro_uber");
	unk_0x11DDC8BDE5CBDCB5(103, "FM_Intro_uber");
	unk_0x11DDC8BDE5CBDCB5(104, "FM_Intro_uber");
	unk_0x04269E768DDAF940("mp_intro_seq@");
}

void func_252(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_49[2]))
	{
		if (unk_0x1F1B2B6E500380C5(uParam0->f_49[2], 0))
		{
			unk_0x2B6521A64CBB67B6(uParam0->f_49[2]);
		}
	}
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_49[4]))
	{
		if (unk_0x1F1B2B6E500380C5(uParam0->f_49[4], 0))
		{
			unk_0x2B6521A64CBB67B6(uParam0->f_49[4]);
		}
	}
}

void func_253(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_49[2]))
	{
		if (unk_0x1F1B2B6E500380C5(uParam0->f_49[2], 0))
		{
			unk_0xF463117DBF0348D6(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_254()
{
	if (unk_0xDF6B1CC4584C36CE())
	{
		return 0;
	}
	if (!unk_0x1E3F61C2C1E29520(Global_1318036))
	{
		Global_1318036 = unk_0x474309DF4921072A("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_255(var uParam0, char* sParam1, char* sParam2, var uParam3, struct<3> Param4, struct<3> Param7)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam3))
	{
		if (unk_0x912AD5A10E7633F0(uParam3, 0))
		{
		}
		if (!unk_0x0D2E3F017CBCB8A8(uParam0->f_8))
		{
			uParam0->f_8 = unk_0x669DFEC6C5E8A812("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = unk_0x6194C3993E6BB2A5(Param4, Param7, 2);
		unk_0x890054289B8F80A8(uParam0->f_9, uParam3, 0);
		unk_0x7EB0D56EE8F8F8E8(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		unk_0x07553DAC96600443(uParam0->f_8, 1);
		unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 1, 0);
	}
}

void func_256(var uParam0)
{
	if (!unk_0x08BA6DD398CA197C(uParam0->f_3, 3))
	{
		unk_0x7A88E2D60CF9958D("CONTRAILS");
		if (func_244(uParam0))
		{
			unk_0xC9ED8FFB30E7C224("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0xC9ED8FFB30E7C224("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0xCAC1D33299EA11C3())
		{
			if (uParam0->f_295)
			{
				if (func_244(uParam0))
				{
					unk_0xA626C1A83CE0A7A9("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0xA626C1A83CE0A7A9("MP_Male_Character", 0, 1);
				}
			}
			func_257();
		}
		if (unk_0xDF3F7A44D6400C56())
		{
			unk_0x88B0F0DC270164B7(&(uParam0->f_3), 3);
		}
	}
}

void func_257()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0xA626C1A83CE0A7A9(func_243(iVar0), 0, 1);
		iVar0++;
	}
}

int func_258(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!unk_0x08BA6DD398CA197C(uParam0->f_3, 2))
	{
		unk_0x491067A8E906F22D(joaat("p_cs_mp_jet_01_s"));
		unk_0x491067A8E906F22D(joaat("mp_m_freemode_01"));
		unk_0x491067A8E906F22D(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			unk_0x9DFBA65465F4DEE5();
		}
		if (((unk_0x2C1B5A0D3E233FC3(joaat("p_cs_mp_jet_01_s")) && unk_0x2C1B5A0D3E233FC3(joaat("mp_m_freemode_01"))) && unk_0x2C1B5A0D3E233FC3(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || unk_0xA83726F584E77AA5()))
		{
			uParam0->f_33 = unk_0xE1C25770C2FB7AE3(joaat("p_cs_mp_jet_01_s"), Var1, 0, 0, 0);
			unk_0xB996664170D83289(uParam0->f_33, 3000);
			unk_0xB16B53F6FE1ADDB6(uParam0->f_33, 0);
			unk_0xEDBE0CD7C81FA37E(uParam0->f_33, false, 0);
			if (uParam0->f_294)
			{
				uParam0->f_120 = unk_0xB2B9DC57FF1CFE82("scr_mp_intro_plane_exhaust", uParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = unk_0xB2B9DC57FF1CFE82("scr_mp_intro_plane_exhaust", uParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
					uParam0->f_104[iVar0] = unk_0xF8418B3B87CFCCBF(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = unk_0xF8418B3B87CFCCBF(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				if (func_260(uParam0, iVar0))
				{
					if (!unk_0x912AD5A10E7633F0(unk_0x21F191D9AFF98B5E(unk_0x81C85E54237F8A2E(uParam0->f_112[iVar0])), 0))
					{
					}
					unk_0x623F7031F3898C86(unk_0x21F191D9AFF98B5E(unk_0x81C85E54237F8A2E(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					unk_0x61E5185648237702(uParam0->f_104[iVar0]);
				}
				else
				{
					func_259(uParam0, iVar0);
				}
				iVar0++;
			}
			unk_0x2C07692AA3545079(joaat("p_cs_mp_jet_01_s"));
			unk_0x88B0F0DC270164B7(&(uParam0->f_3), 2);
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
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 1);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 2);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 3);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 4);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 5);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 6);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 7);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 1);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 2);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 3);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 4);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 5);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 6);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 7);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 1);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 2);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 3);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 4);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 5);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 6);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 7);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 1);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 2);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 3);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 4);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 5);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 6);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 7);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 1);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 2);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 3);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 4);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 5);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 6);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 7);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 1);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 2);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 3);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 4);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 5);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 6);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 7);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xA27FDFE5C0EBB875(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 0);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 1);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 2);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 3);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 4);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 5);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 6);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 7);
			unk_0x2D4CE8A3F6D225E4(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_260(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_12(unk_0x81C85E54237F8A2E(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_261(var uParam0, int iParam1)
{
	if (func_260(uParam0, iParam1))
	{
		return func_246(unk_0x81C85E54237F8A2E(uParam0->f_112[iParam1]));
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
		iVar2 = unk_0x81C85E54237F8A2E(iVar1);
		if (func_12(iVar2, 0, 1))
		{
			if (unk_0x0C1D3C552325765B() != iVar2)
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
	if (unk_0x08BA6DD398CA197C(uParam0->f_3, 9))
	{
		return 1;
	}
	unk_0x491067A8E906F22D(iVar0);
	unk_0x491067A8E906F22D(iVar1);
	unk_0x77051FBD916D3170(5, "FMINTRO");
	unk_0x77051FBD916D3170(6, "FMINTRO");
	unk_0x77051FBD916D3170(7, "FMINTRO");
	unk_0xA9DC3948106CC3E4("mp_intro_seq@");
	if (((((unk_0x2C1B5A0D3E233FC3(iVar0) && unk_0x2C1B5A0D3E233FC3(iVar1)) && unk_0x48B13379A3313D29(5, "FMINTRO")) && unk_0x48B13379A3313D29(6, "FMINTRO")) && unk_0x48B13379A3313D29(7, "FMINTRO")) && unk_0xAD21C77209FD2024("mp_intro_seq@"))
	{
		if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_34))
		{
			unk_0x0B17BC5D018E224B(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = unk_0xE044C77D0FC9DB66(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0);
			unk_0x1A3D669FD1E4223C(uParam0->f_34, 1);
			unk_0xF3E3BC1FD7FDE221(uParam0->f_34, 0);
			unk_0xC2407AC016215F2D(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_35))
		{
			if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xF8418B3B87CFCCBF(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, 0);
				unk_0xA4FE049E1F729261(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
				unk_0xFF5CE2ECB4FBD4A8(uParam0->f_35, 1);
				unk_0x39800A40136ECF37(uParam0->f_34, 1);
				unk_0x39800A40136ECF37(uParam0->f_35, 1);
				unk_0x65889F26F311FC55(uParam0->f_35, unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5()));
				unk_0xC2407AC016215F2D(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_34) || !unk_0xD3FACCDA4D66AEAD(uParam0->f_35))
	{
		return 0;
	}
	unk_0x2C07692AA3545079(iVar0);
	unk_0x2C07692AA3545079(iVar1);
	unk_0x88B0F0DC270164B7(&(uParam0->f_3), 9);
	return 1;
}

void func_265(var uParam0)
{
	int iVar0;
	
	if (!unk_0x08BA6DD398CA197C(uParam0->f_3, 0))
	{
		func_275();
		func_273();
		if (func_267(uParam0))
		{
			if (func_266(uParam0))
			{
				if (!unk_0x0D2E3F017CBCB8A8(uParam0->f_7))
				{
					uParam0->f_7 = unk_0x669DFEC6C5E8A812("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				unk_0xD769455216FEB03D(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0x2C07692AA3545079(func_249(iVar0));
					iVar0++;
				}
				unk_0x2C07692AA3545079(func_247());
				unk_0x88B0F0DC270164B7(&(uParam0->f_3), 0);
			}
		}
	}
}

int func_266(var uParam0)
{
	int iVar0;
	
	iVar0 = func_247();
	if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_91))
	{
		if (unk_0xD3FACCDA4D66AEAD(uParam0->f_49[2]))
		{
			if (unk_0x3217B792F2F3BB7B(iVar0))
			{
				if (unk_0x2C1B5A0D3E233FC3(iVar0))
				{
					if (unk_0xAD21C77209FD2024("MP_INTRO_SEQ@"))
					{
						if (!unk_0x912AD5A10E7633F0(uParam0->f_49[2], 0))
						{
							uParam0->f_10 = unk_0x6194C3993E6BB2A5(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x890054289B8F80A8(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0xF8418B3B87CFCCBF(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, 0);
							unk_0xFF5CE2ECB4FBD4A8(uParam0->f_91, 1);
							unk_0xCAD643E9EAD85BD2(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							unk_0x530044AE9D695B53(uParam0->f_10, 1);
							unk_0xBB21B5C3111E5F85(uParam0->f_91, true);
							unk_0x591413670A1EF437(uParam0->f_91, false, 0);
							unk_0xB09984D51448364F(uParam0->f_91, joaat("gadget_parachute"));
							unk_0xA27FDFE5C0EBB875(uParam0->f_91, 0, 1, 1, 0);
							unk_0xA27FDFE5C0EBB875(uParam0->f_91, 1, 0, 0, 0);
							unk_0xA27FDFE5C0EBB875(uParam0->f_91, 2, 0, 2, 0);
							unk_0xA27FDFE5C0EBB875(uParam0->f_91, 3, 0, 2, 0);
							unk_0xA27FDFE5C0EBB875(uParam0->f_91, 4, 1, 0, 0);
							unk_0xA27FDFE5C0EBB875(uParam0->f_91, 5, 0, 0, 0);
							unk_0xA27FDFE5C0EBB875(uParam0->f_91, 6, 0, 0, 0);
							unk_0xA27FDFE5C0EBB875(uParam0->f_91, 7, 0, 0, 0);
							unk_0xA27FDFE5C0EBB875(uParam0->f_91, 8, 0, 0, 0);
							unk_0xA27FDFE5C0EBB875(uParam0->f_91, 9, 0, 0, 0);
							unk_0xA27FDFE5C0EBB875(uParam0->f_91, 10, 0, 0, 0);
							unk_0xA27FDFE5C0EBB875(uParam0->f_91, 11, 0, 0, 0);
							unk_0x2D4CE8A3F6D225E4(uParam0->f_91, 0);
							unk_0x2D4CE8A3F6D225E4(uParam0->f_91, 1);
							unk_0x2D4CE8A3F6D225E4(uParam0->f_91, 2);
							unk_0x2D4CE8A3F6D225E4(uParam0->f_91, 3);
							unk_0x2D4CE8A3F6D225E4(uParam0->f_91, 4);
							unk_0x2D4CE8A3F6D225E4(uParam0->f_91, 5);
							unk_0x2D4CE8A3F6D225E4(uParam0->f_91, 6);
							unk_0x2D4CE8A3F6D225E4(uParam0->f_91, 7);
							unk_0x2D4CE8A3F6D225E4(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_91))
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
	
	if (!unk_0x08BA6DD398CA197C(uParam0->f_2, 31))
	{
		func_275();
		iVar5 = 0;
		while (iVar5 < 8)
		{
			func_272(iVar5, &Var1, &fVar4);
			if (!func_271(Var1, 0f, 0f, 0f, 0))
			{
				if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_49[iVar5]))
				{
					iVar0 = func_249(iVar5);
					if (unk_0x3217B792F2F3BB7B(iVar0))
					{
						if (unk_0x2C1B5A0D3E233FC3(iVar0))
						{
							uParam0->f_49[iVar5] = unk_0xE044C77D0FC9DB66(iVar0, Var1, fVar4, 0, 0);
							unk_0xB16B53F6FE1ADDB6(uParam0->f_49[iVar5], 1);
							unk_0xA353FBC64C96C09F(uParam0->f_49[iVar5], 0f);
							unk_0x62F8A663774DA6EA(uParam0->f_49[iVar5], 0);
							if (iVar5 == 2)
							{
								unk_0x4102C3BEF39A262B(uParam0->f_49[iVar5], 4, 0, 1);
								unk_0xF463117DBF0348D6(uParam0->f_49[iVar5], 4, 0, 1f);
							}
							func_270(uParam0, iVar5);
							func_269(uParam0, iVar5);
							unk_0x2C07692AA3545079(iVar0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 8)
		{
			if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_49[iVar5]))
			{
				return 0;
			}
			if (!unk_0x08BA6DD398CA197C(uParam0->f_2, iVar5))
			{
				if (func_268(uParam0, iVar5))
				{
					unk_0x88B0F0DC270164B7(&(uParam0->f_2), iVar5);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x1F1B2B6E500380C5(uParam0->f_49[iVar5], 0))
			{
				if (!unk_0x3C085FB6217C3923(uParam0->f_49[iVar5]))
				{
					return 0;
				}
			}
			iVar5++;
		}
		unk_0x88B0F0DC270164B7(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_268(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0x1F1B2B6E500380C5(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x141913B932CAECD6(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 0, 1, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 2, 1, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 3, 1, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 5, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 7, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 10, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 14, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 15, 4, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x1F1B2B6E500380C5(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x141913B932CAECD6(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x6D0141CBE6B3B145(uParam0->f_49[iParam1], 22, 1);
					unk_0x0DD72E0CB1FCF511(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0x1F1B2B6E500380C5(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x141913B932CAECD6(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 4, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 14, 5, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x6D0141CBE6B3B145(uParam0->f_49[iParam1], 22, 1);
					unk_0x0DD72E0CB1FCF511(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0x1F1B2B6E500380C5(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x141913B932CAECD6(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 23, 11, 0);
					unk_0x6D0141CBE6B3B145(uParam0->f_49[iParam1], 22, 1);
					unk_0x0DD72E0CB1FCF511(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x1F1B2B6E500380C5(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x141913B932CAECD6(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 7, 1, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 11, 3, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 12, 2, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 13, 2, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 16, 4, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0x6D0141CBE6B3B145(uParam0->f_49[iParam1], 22, 1);
					unk_0x0DD72E0CB1FCF511(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0x1F1B2B6E500380C5(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x141913B932CAECD6(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 3, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 6, 2, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 10, 3, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 15, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0x6D0141CBE6B3B145(uParam0->f_49[iParam1], 22, 1);
					unk_0x0DD72E0CB1FCF511(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0x1F1B2B6E500380C5(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x141913B932CAECD6(uParam0->f_49[iParam1]) > 0)
				{
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 1, 1, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 8, 0, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0xF55EA971ECC0BCE5(uParam0->f_49[iParam1], 23, 0, 0);
					unk_0x6D0141CBE6B3B145(uParam0->f_49[iParam1], 22, 1);
					unk_0x0DD72E0CB1FCF511(uParam0->f_49[iParam1], 0);
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
			unk_0xE1A095B0BA3A0EA3(uParam0->f_49[iParam1], 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 0, 1);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 1, 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 2, 1);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 3, 1);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 4, 1);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 5, 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 7, 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 10, 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0xE1A095B0BA3A0EA3(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0xE1A095B0BA3A0EA3(uParam0->f_49[iParam1], 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 0, 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0xE1A095B0BA3A0EA3(uParam0->f_49[iParam1], 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0xE1A095B0BA3A0EA3(uParam0->f_49[iParam1], 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 1, 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 2, 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 4, 1);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 7, 1);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0xE1A095B0BA3A0EA3(uParam0->f_49[iParam1], 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 0, 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 1, 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 2, 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 3, 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 4, 1);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 6, 2);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 10, 3);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0xE1A095B0BA3A0EA3(uParam0->f_49[iParam1], 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 1, 1);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 4, 1);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 8, 0);
			unk_0xB23B3202A5F55884(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_270(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x728045E0733945FD(uParam0->f_49[iParam1], 83, 134);
			unk_0xE491F8C2C2A96483(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0x728045E0733945FD(uParam0->f_49[iParam1], 0, 0);
			unk_0xE491F8C2C2A96483(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0x728045E0733945FD(uParam0->f_49[iParam1], 49, 0);
			unk_0xE491F8C2C2A96483(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0x728045E0733945FD(uParam0->f_49[iParam1], 0, 0);
			unk_0xE491F8C2C2A96483(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0x728045E0733945FD(uParam0->f_49[iParam1], 43, 5);
			unk_0xE491F8C2C2A96483(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0x728045E0733945FD(uParam0->f_49[iParam1], 3, 3);
			unk_0xE491F8C2C2A96483(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0x728045E0733945FD(uParam0->f_49[iParam1], 35, 0);
			unk_0xE491F8C2C2A96483(uParam0->f_49[iParam1], 0, 156);
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
	unk_0x491067A8E906F22D(func_247());
	unk_0xA9DC3948106CC3E4(func_274());
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
		unk_0x491067A8E906F22D(func_249(iVar0));
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
		if (!unk_0x08BA6DD398CA197C(uVar1, iVar0))
		{
			func_195(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_278(var uParam0, int iParam1, struct<3> Param2, float fParam5, var uParam6, bool bParam7)
{
	if (unk_0x1F1B2B6E500380C5(uParam0->f_58[iParam1], 0) && !unk_0xEB361B4BD195A4D3(uParam0->f_74[iParam1]))
	{
		unk_0xBB21B5C3111E5F85(uParam0->f_58[iParam1], false);
		unk_0x591413670A1EF437(uParam0->f_58[iParam1], true, 0);
		unk_0x27327EB62D93CDBA(uParam0->f_58[iParam1], Param2, 1, 0, 0, 1);
		unk_0x10BB9EA2ADBCF0F3(uParam0->f_58[iParam1], fParam5);
		unk_0x74207974B5483203(uParam0->f_58[iParam1]);
		unk_0xEEE264130F2EA9E2(uParam0->f_58[iParam1]);
		if (bParam7)
		{
			unk_0x32A30468AF493A61(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			unk_0xF1F2951FCA900FD0(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			unk_0x32A30468AF493A61(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			unk_0xF1F2951FCA900FD0(uParam0->f_58[iParam1], 10f);
		}
		unk_0x77637031DE326F70(uParam0->f_74[iParam1], 1);
		unk_0xEDBE0CD7C81FA37E(uParam0->f_58[iParam1], true, 0);
		unk_0xEDBE0CD7C81FA37E(uParam0->f_74[iParam1], true, 0);
		unk_0x88B0F0DC270164B7(uParam6, iParam1);
	}
}

void func_279(var uParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10)
{
	if (!unk_0x0D2E3F017CBCB8A8(uParam0->f_8))
	{
		uParam0->f_8 = unk_0x669DFEC6C5E8A812("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = unk_0x6194C3993E6BB2A5(Param3, Param6, 2);
	unk_0x7EB0D56EE8F8F8E8(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	unk_0xB1A2B8A065E00D0C(uParam0->f_9, fParam9);
	unk_0x6B1A3158AFCC9C01(uParam0->f_9, iParam10);
	unk_0x07553DAC96600443(uParam0->f_8, 1);
	unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 1, 0);
}

void func_280(var uParam0)
{
	unk_0x2C07692AA3545079(joaat("frogger"));
	unk_0x11DDC8BDE5CBDCB5(8, "FMIntro");
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_48))
	{
		unk_0xEFA1F34A28EE763C(&(uParam0->f_48));
	}
}

int func_281(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (unk_0x08BA6DD398CA197C(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_283();
		if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_92[0]))
		{
			if (unk_0x2C1B5A0D3E233FC3(joaat("cheetah")))
			{
				uParam0->f_92[0] = unk_0xE044C77D0FC9DB66(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0);
				unk_0xF3E3BC1FD7FDE221(uParam0->f_92[0], 0);
				unk_0x0DD72E0CB1FCF511(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_92[1]))
		{
			if (unk_0x2C1B5A0D3E233FC3(joaat("entityxf")))
			{
				uParam0->f_92[1] = unk_0xE044C77D0FC9DB66(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0);
				unk_0xF3E3BC1FD7FDE221(uParam0->f_92[1], 0);
				unk_0xE603FC65DC1AD0FA(uParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				unk_0x15E5515C105AB6C8(uParam0->f_92[1], 8);
				unk_0x0DD72E0CB1FCF511(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_92[2]))
		{
			if (unk_0x2C1B5A0D3E233FC3(joaat("monroe")))
			{
				uParam0->f_92[2] = unk_0xE044C77D0FC9DB66(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0);
				unk_0xF3E3BC1FD7FDE221(uParam0->f_92[2], 0);
				unk_0xE603FC65DC1AD0FA(uParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				unk_0x15E5515C105AB6C8(uParam0->f_92[2], 2);
				unk_0x0DD72E0CB1FCF511(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_92[3]))
		{
			if (unk_0x2C1B5A0D3E233FC3(joaat("cheetah")))
			{
				uParam0->f_92[3] = unk_0xE044C77D0FC9DB66(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0);
				unk_0xF3E3BC1FD7FDE221(uParam0->f_92[3], 0);
				unk_0xE603FC65DC1AD0FA(uParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				unk_0x15E5515C105AB6C8(uParam0->f_92[3], 15);
				unk_0x0DD72E0CB1FCF511(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_92[4]))
		{
			if (unk_0x2C1B5A0D3E233FC3(joaat("feltzer2")))
			{
				uParam0->f_92[4] = unk_0xE044C77D0FC9DB66(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0);
				unk_0xF3E3BC1FD7FDE221(uParam0->f_92[4], 0);
				unk_0xE603FC65DC1AD0FA(uParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				unk_0x728045E0733945FD(uParam0->f_92[4], 0, 0);
				unk_0xE491F8C2C2A96483(uParam0->f_92[4], 0, 156);
				unk_0xE1A095B0BA3A0EA3(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0x1F1B2B6E500380C5(uParam0->f_92[4], 0))
		{
			if (!unk_0x08BA6DD398CA197C(uParam0->f_3, 1))
			{
				if (unk_0x141913B932CAECD6(uParam0->f_92[4]) > 0)
				{
					unk_0x6D0141CBE6B3B145(uParam0->f_92[4], 22, 1);
					unk_0x0DD72E0CB1FCF511(uParam0->f_92[4], 0);
					unk_0x88B0F0DC270164B7(&(uParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0x2C1B5A0D3E233FC3(func_227()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_98[iVar1]))
				{
					if (unk_0xD3FACCDA4D66AEAD(uParam0->f_92[iVar1]))
					{
						if (unk_0x1F1B2B6E500380C5(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = unk_0x667A2CFA1914073C(uParam0->f_92[iVar1], 4, func_227(), -1, 0, false);
							unk_0xFF5CE2ECB4FBD4A8(uParam0->f_98[iVar1], 1);
							unk_0x6F40E1EE32FE6A5E(uParam0->f_92[iVar1], 1, 1, 0);
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
			unk_0x2C07692AA3545079(joaat("cheetah"));
			unk_0x2C07692AA3545079(joaat("monroe"));
			unk_0x2C07692AA3545079(joaat("entityxf"));
			unk_0x2C07692AA3545079(joaat("feltzer2"));
			unk_0x88B0F0DC270164B7(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_282()
{
	func_283();
	if (unk_0x2C1B5A0D3E233FC3(func_227()))
	{
		if (unk_0x2C1B5A0D3E233FC3(joaat("cheetah")))
		{
			if (unk_0x2C1B5A0D3E233FC3(joaat("monroe")))
			{
				if (unk_0x2C1B5A0D3E233FC3(joaat("entityxf")))
				{
					if (unk_0x2C1B5A0D3E233FC3(joaat("feltzer2")))
					{
						if (unk_0x48B13379A3313D29(100, "FM_Intro_uber"))
						{
							if (unk_0x48B13379A3313D29(101, "FM_Intro_uber"))
							{
								if (unk_0x48B13379A3313D29(102, "FM_Intro_uber"))
								{
									if (unk_0x48B13379A3313D29(103, "FM_Intro_uber"))
									{
										if (unk_0x48B13379A3313D29(104, "FM_Intro_uber"))
										{
											if (unk_0xAD21C77209FD2024("mp_intro_seq@"))
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
	unk_0x491067A8E906F22D(joaat("cheetah"));
	unk_0x491067A8E906F22D(joaat("monroe"));
	unk_0x491067A8E906F22D(joaat("entityxf"));
	unk_0x491067A8E906F22D(joaat("feltzer2"));
	unk_0x491067A8E906F22D(func_227());
	unk_0x77051FBD916D3170(100, "FM_Intro_uber");
	unk_0x77051FBD916D3170(101, "FM_Intro_uber");
	unk_0x77051FBD916D3170(102, "FM_Intro_uber");
	unk_0x77051FBD916D3170(103, "FM_Intro_uber");
	unk_0x77051FBD916D3170(104, "FM_Intro_uber");
	unk_0xA9DC3948106CC3E4("mp_intro_seq@");
}

int func_284(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (unk_0x08BA6DD398CA197C(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0x491067A8E906F22D(joaat("asterope"));
		unk_0x491067A8E906F22D(joaat("sentinel"));
		unk_0x491067A8E906F22D(func_227());
		if ((unk_0x2C1B5A0D3E233FC3(joaat("asterope")) && unk_0x2C1B5A0D3E233FC3(joaat("sentinel"))) && unk_0x2C1B5A0D3E233FC3(func_227()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_58[iVar0]))
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
					uParam0->f_58[iVar0] = unk_0xE044C77D0FC9DB66(iVar1, Var2, fVar5, 0, 0);
					unk_0x15E5515C105AB6C8(uParam0->f_58[iVar0], iVar0);
					unk_0x39800A40136ECF37(uParam0->f_58[iVar0], 1);
					unk_0x028D0662CAA67D4F(uParam0->f_58[iVar0], 2);
					unk_0xBB21B5C3111E5F85(uParam0->f_58[iVar0], true);
				}
				if (unk_0xD3FACCDA4D66AEAD(uParam0->f_58[iVar0]))
				{
					if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = unk_0x667A2CFA1914073C(uParam0->f_58[iVar0], 4, func_227(), -1, 0, false);
						unk_0x39800A40136ECF37(uParam0->f_74[iVar0], 1);
						unk_0xFF5CE2ECB4FBD4A8(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_58[iVar0]) || !unk_0xD3FACCDA4D66AEAD(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x2C07692AA3545079(joaat("asterope"));
		unk_0x2C07692AA3545079(joaat("sentinel"));
		unk_0x88B0F0DC270164B7(&(uParam0->f_3), 4);
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
		if ((uParam0->f_13 + iVar0) + iParam2) <= unk_0xDF658EB6CA91DFBC()
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
	
	if (unk_0x08BA6DD398CA197C(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	unk_0x491067A8E906F22D(iVar0);
	unk_0x77051FBD916D3170(8, "FMIntro");
	if (unk_0x2C1B5A0D3E233FC3(iVar0) && unk_0x48B13379A3313D29(8, "FMIntro"))
	{
		if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_48))
		{
			uParam0->f_48 = unk_0xE044C77D0FC9DB66(iVar0, unk_0x6F15E3218CF5B8EE(8, 0f, "FMIntro"), 0f, 0, 0);
			unk_0x8466AAF2AE57F1B9(uParam0->f_48, 8, "FMIntro", 1);
			unk_0xDFB772A81EE119F9(uParam0->f_48, 5000f);
			unk_0x9766A9D3176764E9(uParam0->f_48);
			unk_0xEDBE0CD7C81FA37E(uParam0->f_48, false, 0);
			unk_0x2C07692AA3545079(iVar0);
		}
	}
	if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_48))
	{
		return 0;
	}
	unk_0x88B0F0DC270164B7(&(uParam0->f_3), 8);
	return 1;
}

void func_287(var uParam0, int iParam1)
{
	if (func_285(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (unk_0xDF658EB6CA91DFBC() - func_209(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_288(var uParam0)
{
	uParam0->f_13 = unk_0xDF658EB6CA91DFBC();
}

Vector3 func_289(struct<3> Param0)
{
	return (-unk_0x0BADBFA3B172435F(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), (unk_0xD0FFB162F40A139C(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), unk_0x0BADBFA3B172435F(Param0.f_0);
}

int func_290()
{
	return Global_1315164;
}

void func_291()
{
	unk_0xC4B3EC24D2EFC927(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	unk_0xC4B3EC24D2EFC927(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
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
	unk_0x94724F7C938EBE34(1);
	unk_0x715FC4B638D9A515();
	func_234(1, 1, 1, 0);
	func_294();
	func_188(12, 1, -1);
	func_189(0);
	unk_0x00EC874B4D5FCE61(1, -1);
	unk_0x627D428B266FEDCA(0);
	unk_0x943A052E20E9C2CE(0);
	func_295(1);
	func_241(1);
	Global_2432628.f_3196 = 1;
	if (bParam0)
	{
		if (!unk_0xA012E3A84A2B2F1A())
		{
			unk_0x3E2462666E08F4C9(1, iParam1);
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
	while (iVar0 < Global_100207)
	{
		unk_0x436DCF1E1ED3DA7A(iVar0, iParam0);
		func_296(iVar0);
		iVar0++;
	}
}

void func_296(int iParam0)
{
	Global_100207[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_100207[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_100207[iParam0 /*28*/].f_4), "", 64);
	Global_100207[iParam0 /*28*/].f_23 = 0;
	Global_100207[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_100207[iParam0 /*28*/].f_27 = 0;
	Global_100207[iParam0 /*28*/].f_20 = 0;
	Global_100207[iParam0 /*28*/].f_22 = 0;
}

void func_297()
{
	Global_1312563 = 1;
	StringCopy(&(Global_1312563.f_1), unk_0x367152330DB70D69(), 24);
	Global_1312563.f_7 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312563.f_1));
}

int func_298()
{
	if (unk_0x2C22E7D1C80A53EF())
	{
		func_300(0);
		unk_0x808EE6B1C469A92D();
		return 1;
	}
	if (func_299() == 3)
	{
		func_300(2);
		unk_0xD56CF2EE41614CF5(250f);
	}
	if (unk_0x87A94895B7496A8E() >= 250f)
	{
		unk_0xD56CF2EE41614CF5(250f);
	}
	if (unk_0x452FBE945385AA5F() == 0)
	{
		unk_0xD56CF2EE41614CF5(250f);
	}
	if (unk_0x87A94895B7496A8E() <= 0f)
	{
		func_300(0);
		return 1;
	}
	return 0;
}

int func_299()
{
	return Global_1312462.f_19;
}

void func_300(int iParam0)
{
	if (Global_1312462.f_19 != iParam0)
	{
		Global_1312462.f_19 = iParam0;
	}
}

void func_301(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_305(iParam0, &iVar1);
	if (!unk_0x28C1B9853548BD8E("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xEE57F76AC9F2B20C(iVar1))
			{
				return;
			}
			if (unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()) == iVar1)
			{
				func_304(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xEE57F76AC9F2B20C(iVar1))
			{
				return;
			}
			if (func_302(iParam0))
			{
				func_304(iParam0, 0);
			}
		}
		unk_0x11ABA5583C494FAD(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_302(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_303(iParam0) };
	if (unk_0x08BA6DD398CA197C(Global_31556[Var0.f_1], Var0.f_0))
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
	while (iVar1 < 4)
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
		unk_0x88B0F0DC270164B7(&(Global_31556[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_31556[Var0.f_1]), Var0.f_0);
	}
}

var func_305(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_306(iParam0) };
	*iParam1 = unk_0x07BE5BF18FEF759E(Var0, Var0.f_3);
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
			Var5 = { func_307(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_307(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_307(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_307(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_307(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_307(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_307(7) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049287[34 /*1908*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_307(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_307(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_307(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_307(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_307(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_307(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_307(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_307(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_307(43) };
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
			Var5 = { func_307(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_307(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_307(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_307(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_307(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_307(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_307(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_307(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_307(87) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_307(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_307(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_307(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_307(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_307(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_307(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_307(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_307(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_307(88) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_307(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_307(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_307(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_307(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_307(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_307(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_307(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_307(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_307(89) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_307(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_307(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_307(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_307(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_307(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_307(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_307(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_307(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_307(90) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_307(91) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_307(97) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_307(int iParam0)
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
	}
	return Var0;
}

int func_308()
{
	return Global_2452903;
}

bool func_309()
{
	return Global_2451775;
}

void func_310(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_316(bParam0);
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
	if (Global_1315229)
	{
		sVar1 = func_313(iParam0);
		iVar2 = unk_0x3BB8D1C5FAAB25B3(sVar1);
		func_312(&Global_2453978, 1, 0);
		unk_0x07E6E12AE28B9666(iVar2, 1, uVar0, iParam0, 0);
	}
	Global_1315164 = iParam0;
}

void func_312(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x4B50AAB32FBE0483();
		}
		else
		{
			*uParam0 = unk_0xB3FCCA0C64473451();
		}
	}
	else
	{
		*uParam0 = unk_0xDF658EB6CA91DFBC();
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
	Global_1315163 = iParam0;
}

var func_315()
{
	return Global_1315163;
}

void func_316(bool bParam0)
{
	int iVar0;
	
	func_318(&Global_17071);
	unk_0x5923E12E92A75CDD(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0x533B05BECE72D00A();
			func_317(0);
			if (unk_0xD3FACCDA4D66AEAD(Global_1318011))
			{
				if (unk_0x687CB62D355FD7FD(Global_1318011, 0))
				{
					if (!unk_0x18C670321BC98FDA(Global_1318011))
					{
						unk_0x7B17650F15A8876D(Global_1318011, 0, 0);
					}
					unk_0x4E82D83B086B5C93(&Global_1318011);
				}
			}
		}
	}
}

void func_317(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2453961 = 0;
	}
	Global_1312462.f_18 = iParam0;
}

void func_318(var uParam0)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0x0D2E3F017CBCB8A8(uParam0->f_9))
	{
		if (unk_0xC0A42281C0F88A94(uParam0->f_9))
		{
			func_319(0);
		}
		unk_0x50C86ABC13A071F8(uParam0->f_9, 0);
	}
	if (!Global_36872)
	{
		unk_0x684D46085CBC939C(1);
		unk_0x828E2FE4BF9B3DDF(0f);
		unk_0x5001EA127FDD8208(0f);
	}
	Global_2404993.f_567 = 0f;
	unk_0x2D5A415AD869CB5F(0, 0, 0, 1, 0, 0);
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
		if (unk_0x5A542D292370B45A())
		{
			return;
		}
	}
	if (func_323() == 0 || unk_0x84C71F36E7D97756())
	{
		func_322(1);
		unk_0x3E5CF2983CC5621D(0);
		unk_0x3E5CF2983CC5621D(0);
	}
}

void func_322(int iParam0)
{
	if (Global_1312462.f_20 != iParam0)
	{
		Global_1312462.f_20 = iParam0;
	}
}

int func_323()
{
	return Global_1312462.f_20;
}

void func_324()
{
	Global_2453277 = 1;
}

void func_325(int iParam0)
{
	if ((func_323() == 1 || unk_0x84C71F36E7D97756()) || iParam0)
	{
		func_322(0);
		unk_0x3E5CF2983CC5621D(1);
		unk_0x3E5CF2983CC5621D(1);
		unk_0x61230F41DCA1B2B3();
	}
}

void func_326(bool bParam0)
{
	if (bParam0)
	{
		unk_0xE1A329E99CE31246();
		unk_0xBED8BA76A59E95DB(-1);
		unk_0xBA8645AA453BAE5F(1);
		unk_0x535F8E422446AA19(1);
		unk_0x18FB7BCBEDA481BD(1f);
		unk_0x297E2D1CF4A0058E(3);
		unk_0x370A4E6949BE16BA(3);
	}
	else
	{
		unk_0xE4EC3FD6A99953E8(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		unk_0xBED8BA76A59E95DB(0);
		unk_0xBA8645AA453BAE5F(0);
		unk_0x535F8E422446AA19(0);
		unk_0x18FB7BCBEDA481BD(0f);
		unk_0x297E2D1CF4A0058E(0);
		unk_0x370A4E6949BE16BA(0);
	}
}

void func_327(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_292();
	func_201(1);
	func_189(1);
	func_188(12, 1, -1);
	func_334();
	unk_0x5A6B86444D23FCA8(0);
	if (bParam0)
	{
		unk_0xCCBEC30FCC197A6A(unk_0x0C1D3C552325765B(), iParam6);
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
	func_328(unk_0x0C1D3C552325765B(), 0, iVar0);
	if (bParam5)
	{
		if (unk_0xBB089326F4413ADC(unk_0xA0081090911D13E5()))
		{
			unk_0x7FAA9FA519662485(unk_0xA0081090911D13E5(), 0);
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
		if (unk_0x2C8EB7E5159312EE())
		{
			unk_0xACBEFB0A5F1CF619(0);
		}
	}
	if (!unk_0xA86CA03D9749EEB3())
	{
		uVar0 = iParam2;
		unk_0xFDEC0B505BCB00C0(iParam0, bParam1, uVar0);
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
		if (!func_332())
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
		if (unk_0xCB129F9A01D14082(iParam0) && unk_0xC0691D80D21C989D(iParam0))
		{
			uVar25 = unk_0x21F191D9AFF98B5E(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xA86CA03D9749EEB3())
				{
					unk_0x0B82F22B8E9EE07C(1);
				}
				else
				{
					unk_0xEDBE0CD7C81FA37E(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0xA86CA03D9749EEB3() && !bVar18)
					{
						unk_0x0B82F22B8E9EE07C(0);
					}
					Global_2421327[iParam0 /*353*/].f_243 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_331(uVar25) && !unk_0x73C9408E8EF10BD3(uVar25))
				{
					if (!bVar21)
					{
						unk_0x591413670A1EF437(uVar25, true, 0);
					}
				}
				if (!unk_0x884626CDE60D6728(uVar25))
				{
					if (!bVar20)
					{
						unk_0xBB21B5C3111E5F85(uVar25, false);
					}
					unk_0xB16B53F6FE1ADDB6(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xBB21B5C3111E5F85(iVar25, false);
				}
				unk_0xB43604F27F1EAE5F(iVar25, true);
				unk_0x8F2CF88C37D4A413(iParam0, 0);
				unk_0x61E5185648237702(iVar25);
				unk_0x9D36C5E0C178FB8D(iVar25, 1);
				func_330();
				func_329();
				if (unk_0x6273A79EFF10C4A9())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x9726BE1252F8F0B6())
				{
				}
				Global_2421327[iParam0 /*353*/].f_244 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_331(iVar25) && !unk_0x73C9408E8EF10BD3(iVar25))
				{
					if (!bVar21)
					{
						unk_0x591413670A1EF437(iVar25, !bVar14, 0);
					}
					if (!unk_0x884626CDE60D6728(iVar25))
					{
						if (!bVar20)
						{
							unk_0xBB21B5C3111E5F85(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xB16B53F6FE1ADDB6(iVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x8F2CF88C37D4A413(iParam0, 0);
				}
				else
				{
					unk_0x8F2CF88C37D4A413(iParam0, 1);
				}
				unk_0xB43604F27F1EAE5F(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x0BFA50301B965423(iVar25) && !unk_0x39FEE545B315414E(iVar25, 0))
					{
						unk_0xB0993C95A7DBF879(iVar25);
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
			unk_0xFDEC0B505BCB00C0(iParam0, bParam1, iVar26);
		}
	}
}

void func_329()
{
	struct<2> Var0;
	
	Global_2432628.f_730 = 0;
	Global_2432628.f_731 = 0;
	Global_2432628.f_732 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404993.f_2212 = { Var0 };
}

void func_330()
{
	Global_2404993.f_637 = 0;
	Global_2404993.f_2253 = 0;
	Global_2404993.f_494 = 0;
	Global_2404993.f_569 = 0;
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_207 = 0;
}

int func_331(int iParam0)
{
	int iVar0;
	
	if (unk_0x39FEE545B315414E(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x21178DF77817BF39(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_332()
{
	if (func_333() == 0)
	{
		return 1;
	}
	return 0;
}

int func_333()
{
	return Global_1312462.f_18;
}

void func_334()
{
	Global_17151.f_5 = 1;
}

void func_335(int iParam0)
{
	unk_0xF674E664795C8CB3(unk_0x21F191D9AFF98B5E(iParam0), 346, 1);
}

void func_336(var uParam0)
{
	if (!unk_0x08BA6DD398CA197C(uParam0->f_3, 12))
	{
		unk_0x88B0F0DC270164B7(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1738997)
			{
				Global_1738997 = 1;
				Global_1738998 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (unk_0x1E3F61C2C1E29520(Global_1738996))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if ((unk_0x70C239EC67257485() == 9 || unk_0x70C239EC67257485() == 10) || unk_0x70C239EC67257485() == 8)
									{
										func_341("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_341("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_340("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_339("artdir", "AARON GARBUT", 210f, "|", 1);
									func_338("artdir", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 33, -3390))
							{
								func_337("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (func_285(uParam0, 33, -2940))
								{
									func_341("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_340("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_339("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_338("techdir", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 33, -450))
							{
								func_337("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_341("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_340("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_339("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_338("assartdir", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_337("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if ((unk_0x70C239EC67257485() == 9 || unk_0x70C239EC67257485() == 10) || unk_0x70C239EC67257485() == 8)
									{
										func_341("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_341("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_340("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_339("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_338("asstecdir", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 36, -4740))
							{
								func_337("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (func_285(uParam0, 36, -3810))
								{
									func_341("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_340("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_339("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_338("leadprog", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 36, -600))
							{
								func_337("leadprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if ((unk_0x70C239EC67257485() == 9 || unk_0x70C239EC67257485() == 10) || unk_0x70C239EC67257485() == 8)
									{
										func_341("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_341("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_340("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_339("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_338("senprog", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 37, -1350))
							{
								func_337("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_341("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_340("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_339("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_338("prog", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 38, -4320))
							{
								func_337("prog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (func_285(uParam0, 38, -3240))
								{
									if ((unk_0x70C239EC67257485() == 9 || unk_0x70C239EC67257485() == 10) || unk_0x70C239EC67257485() == 8)
									{
										func_341("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_341("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_340("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_339("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_338("socclub", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 38, -870))
							{
								func_337("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_341("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_340("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_339("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_338("audio", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 39, -1620))
							{
								func_337("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_341("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_340("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_339("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_338("scrlead", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 40, -1470))
							{
								func_337("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_341("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_340("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_339("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_338("script1", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 41, -1200))
							{
								func_337("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_341("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_340("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_339("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_338("script2", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 42, -1320))
							{
								func_337("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_341("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_340("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_339("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_340("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_339("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_338("visdes", 0.05f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 43, -1320))
							{
								func_337("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_341("uides", 40f, 20f, "right", 0f, 0.3f);
									func_340("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_339("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_338("uides", 0f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 45, -1650))
							{
								func_337("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_341("concre", 0f, 20f, "left", 0f, 0.3f);
									func_340("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_339("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_339("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_338("concre", 0f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 46, -1950))
							{
								func_337("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_341("devass", 0f, 400f, "right", 0f, 0f);
									func_340("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_339("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_338("devass", 0f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_337("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_341("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_340("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_339("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_340("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_339("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_338("qasup", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 48, -1320))
							{
								func_337("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_341("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_340("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_339("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_338("senta", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 49, -5070))
							{
								func_337("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (func_285(uParam0, 49, -3750))
								{
									func_341("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_340("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_339("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_338("asspro", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_285(uParam0, 49, -720))
							{
								func_337("asspro", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (func_244(uParam0))
								{
									if (unk_0x7C0379981B7E6E40() && unk_0x6990DC1A99A254AC() > 2468)
									{
										func_341("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_340("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_339("animdir", "ROB NELSON", 200f, "|", 1);
										func_338("animdir", 0.16f);
										unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_341("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_340("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_339("animdir", "ROB NELSON", 90f, "|", 1);
									func_338("animdir", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_244(uParam0))
							{
								if (unk_0x7C0379981B7E6E40() && unk_0x6990DC1A99A254AC() > 6123)
								{
									func_337("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x7C0379981B7E6E40() && unk_0x6990DC1A99A254AC() > 1898)
							{
								func_337("animdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (func_244(uParam0))
								{
									if (unk_0x7C0379981B7E6E40() && unk_0xF574829AAE4F6157())
									{
										func_341("producer", 65f, 55f, "right", 0f, 0f);
										func_340("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_339("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_338("producer", 0f);
										unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x7C0379981B7E6E40() && unk_0x6990DC1A99A254AC() > 2452)
								{
									func_341("producer", 0f, 100f, "left", 0.3f, 0f);
									func_340("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_339("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_338("producer", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_244(uParam0))
							{
								if (unk_0x7C0379981B7E6E40() && unk_0xF574829AAE4F6157())
								{
									func_337("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x7C0379981B7E6E40() && unk_0xF574829AAE4F6157())
							{
								func_337("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (func_244(uParam0))
								{
									if (unk_0x7C0379981B7E6E40() && unk_0x6990DC1A99A254AC() > 13265)
									{
										func_341("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_340("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_339("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_338("vpcre", 0.16f);
										unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x7C0379981B7E6E40() && unk_0x6990DC1A99A254AC() > 6921)
								{
									func_341("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_340("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_339("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_338("vpcre", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_244(uParam0))
							{
								if (unk_0x7C0379981B7E6E40() && unk_0x6990DC1A99A254AC() > 16955)
								{
									func_337("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x7C0379981B7E6E40() && unk_0x6990DC1A99A254AC() > 10513)
							{
								func_337("vpcre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!unk_0x08BA6DD398CA197C(uParam0->f_4, uParam0->f_5))
							{
								if (func_244(uParam0))
								{
									if (unk_0x7C0379981B7E6E40() && unk_0x6990DC1A99A254AC() > 18077)
									{
										Global_1738998 = 0;
										func_341("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_340("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_339("execpro", "SAM HOUSER", 165f, "|", 1);
										func_338("execpro", 0.16f);
										unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x7C0379981B7E6E40() && unk_0x6990DC1A99A254AC() > 12358)
								{
									Global_1738998 = 0;
									func_341("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_340("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_339("execpro", "SAM HOUSER", 190f, "|", 1);
									func_338("execpro", 0.16f);
									unk_0x88B0F0DC270164B7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_244(uParam0))
							{
								if (unk_0x7C0379981B7E6E40() && unk_0x6990DC1A99A254AC() > 21785)
								{
									func_337("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x7C0379981B7E6E40() && unk_0x6990DC1A99A254AC() > 15333)
							{
								func_337("execpro", 0.16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1738998)
				{
					unk_0x0F83039847376F53(Global_1738996, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_337(char* sParam0, float fParam1)
{
	unk_0xB9D4F4DE7E7EC038(Global_1738996, "HIDE");
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(sParam0);
	unk_0x1E77BE8F4283FA05();
	unk_0x0FFE3C1DBBA72236(fParam1);
	unk_0xE73340DA551C95E1();
}

void func_338(char* sParam0, float fParam1)
{
	unk_0xB9D4F4DE7E7EC038(Global_1738996, "SHOW_CREDIT_BLOCK");
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(sParam0);
	unk_0x1E77BE8F4283FA05();
	unk_0x0FFE3C1DBBA72236(fParam1);
	unk_0xE73340DA551C95E1();
}

void func_339(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0xB9D4F4DE7E7EC038(Global_1738996, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(sParam0);
	unk_0x1E77BE8F4283FA05();
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(sParam1);
	unk_0x1E77BE8F4283FA05();
	unk_0x0FFE3C1DBBA72236(fParam2);
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(sParam3);
	unk_0x1E77BE8F4283FA05();
	unk_0x5CC02BB872FEF340(iParam4);
	unk_0xE73340DA551C95E1();
}

void func_340(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0xB9D4F4DE7E7EC038(Global_1738996, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(sParam0);
	unk_0x1E77BE8F4283FA05();
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(sParam1);
	unk_0x1E77BE8F4283FA05();
	unk_0x0FFE3C1DBBA72236(fParam2);
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(sParam3);
	unk_0x1E77BE8F4283FA05();
	unk_0x5CC02BB872FEF340(iParam4);
	unk_0xE73340DA551C95E1();
}

void func_341(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0xB9D4F4DE7E7EC038(Global_1738996, "SETUP_CREDIT_BLOCK");
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(sParam0);
	unk_0x1E77BE8F4283FA05();
	unk_0x0FFE3C1DBBA72236(fParam1);
	unk_0x0FFE3C1DBBA72236(fParam2);
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(sParam3);
	unk_0x1E77BE8F4283FA05();
	unk_0x0FFE3C1DBBA72236(fParam4);
	unk_0x0FFE3C1DBBA72236(fParam5);
	unk_0xE73340DA551C95E1();
}

void func_342(var uParam0)
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (unk_0xD3FACCDA4D66AEAD(uParam0->f_34))
		{
			if (unk_0x1F1B2B6E500380C5(uParam0->f_34, 0))
			{
				unk_0x1232E0A97E0A00F0(unk_0x2E01486DB8218E16(uParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_343()
{
	var uVar0;
	
	if (unk_0x3CF373660FCFAFCE(Local_564.f_3))
	{
		switch (Local_564.f_2)
		{
			case 2:
				if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_4, 1))
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (func_359(Local_564.f_3))
						{
							if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
							{
								if (unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), -1794415470) != 1 && unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), -1794415470) != 0)
								{
									unk_0xA4FE049E1F729261(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_564.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_4, 2))
							{
								if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_564.f_3)))
								{
									unk_0x88B0F0DC270164B7(&(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_4), 2);
									func_358(1);
								}
								else
								{
									unk_0xD74B8343DB9FEFD5(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_359(Local_564.f_3))
				{
					if (!func_357(Local_564.f_4))
					{
						if (unk_0x08BA6DD398CA197C(uLocal_747, 26))
						{
							if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_564.f_4), -1273030092) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_564.f_4), -1273030092) != 0)
							{
								unk_0x5DB5C19B077049E6(unk_0x564EAE6038A81C07(Local_564.f_4), unk_0x15F0E6D5AC2852F1(Local_564.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!unk_0x08BA6DD398CA197C(uLocal_747, 27))
				{
					if (!unk_0x2C22E7D1C80A53EF() && !unk_0x44F90FBF2C1E8021())
					{
						if (!func_109())
						{
							if (!unk_0x84C71F36E7D97756())
							{
								unk_0xF215E3B07B7990BC(800);
							}
						}
					}
					else if (unk_0x2C22E7D1C80A53EF())
					{
						unk_0x88B0F0DC270164B7(&uLocal_747, 27);
					}
				}
				else if (!unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 4))
				{
					if (func_350(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0))
					{
						unk_0xD74B8343DB9FEFD5(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0);
						unk_0x84A51D29DB6F8864();
						unk_0x5A1AB77B8D08A174();
						unk_0x8BDD755F07063522(0);
						unk_0x2A7D387AD73F1D15(0, 1065353216);
						unk_0x88B0F0DC270164B7(&(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_357(Local_564.f_4))
				{
					if (!unk_0x08BA6DD398CA197C(uLocal_747, 29))
					{
						if (func_359(Local_564.f_3))
						{
							unk_0x80A80036D1802B86(unk_0x564EAE6038A81C07(Local_564.f_4), unk_0x15F0E6D5AC2852F1(Local_564.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							unk_0xA0303A6B8C99DD6A(800);
							unk_0x88B0F0DC270164B7(&uLocal_747, 29);
						}
					}
					else if (!unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 5))
					{
						if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_564.f_4), -272084098) == 7)
						{
							unk_0x88B0F0DC270164B7(&(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
					{
						if (unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), -828834893) != 1 && unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), -828834893) != 0)
						{
							unk_0x8474D2383AC8AF53(unk_0xA0081090911D13E5(), 0, 0);
						}
					}
					else if (!unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 6))
					{
						unk_0x88B0F0DC270164B7(&(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3), 6);
						unk_0x88B0F0DC270164B7(&(Global_2482149.f_743), 4);
						unk_0x09C86C0C5CA26B1E(&(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_4), 2);
						func_328(unk_0x0C1D3C552325765B(), 1, 0);
						func_349();
						func_358(0);
						func_32("HLP_TAXI", -1);
						if (func_52())
						{
							func_43(-1834046564, 200, &uVar0, 0, 0, 0);
						}
						else
						{
							func_346(-200, 0);
							unk_0xB40CBAAAA449F496(200, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_357(Local_564.f_4))
				{
					if (func_359(Local_564.f_3))
					{
						if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_564.f_4), -258271821) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_564.f_4), -258271821) != 0)
						{
							unk_0x77637031DE326F70(unk_0x564EAE6038A81C07(Local_564.f_4), 1);
							unk_0x1F1428EF73399830(unk_0x564EAE6038A81C07(Local_564.f_4), unk_0x15F0E6D5AC2852F1(Local_564.f_3), 12f, 786599);
							func_345(&(Local_564.f_3));
							func_345(&(Local_564.f_4));
						}
					}
				}
				break;
		}
		if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_4, 1))
		{
			unk_0x33E1C85069157293(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!unk_0x08BA6DD398CA197C(uLocal_747, 26))
			{
				unk_0x88B0F0DC270164B7(&uLocal_747, 26);
			}
		}
		if (!unk_0x08BA6DD398CA197C(uLocal_747, 28))
		{
			if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_4, 2))
			{
				if (!func_182(&uLocal_397))
				{
					func_200();
					func_19(&uLocal_397, 0, 0);
				}
				else if (func_181(&uLocal_397, 5000, 0))
				{
					if (func_161(&uLocal_571, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						unk_0x88B0F0DC270164B7(&uLocal_747, 28);
					}
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(uLocal_747, 30))
		{
			if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 5))
			{
				if (func_161(&uLocal_571, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					unk_0x88B0F0DC270164B7(&uLocal_747, 30);
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 6))
		{
			func_344();
		}
		if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_4, 2))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
				{
				}
			}
		}
	}
}

void func_344()
{
	Global_2491182.f_258 = 1;
}

void func_345(var uParam0)
{
	var uVar0;
	
	if (unk_0x3CF373660FCFAFCE(*uParam0))
	{
		uVar0 = unk_0x63CE7A3848B84093(*uParam0);
		unk_0x811BE251B0B13760(&uVar0);
	}
}

void func_346(int iParam0, int iParam1)
{
	func_348(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_347(iParam0, 0);
	}
}

void func_347(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_348(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_4 = iVar1;
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_3 = (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_347(iVar1, 0);
	}
}

void func_349()
{
	unk_0xFF61FA1A24898079(0, 22, 1);
	unk_0xFF61FA1A24898079(0, 36, 1);
	unk_0xFF61FA1A24898079(0, 32, 1);
	unk_0xFF61FA1A24898079(0, 34, 1);
	unk_0xFF61FA1A24898079(0, 35, 1);
	unk_0xFF61FA1A24898079(0, 33, 1);
	unk_0xFF61FA1A24898079(0, 31, 1);
	unk_0xFF61FA1A24898079(0, 30, 1);
	unk_0xFF61FA1A24898079(0, 44, 1);
	unk_0xFF61FA1A24898079(0, 141, 1);
	unk_0xFF61FA1A24898079(0, 140, 1);
	unk_0xFF61FA1A24898079(0, 263, 1);
	unk_0xFF61FA1A24898079(0, 264, 1);
	unk_0xFF61FA1A24898079(0, 143, 1);
	unk_0xFF61FA1A24898079(0, 24, 1);
	unk_0xFF61FA1A24898079(0, 257, 1);
	unk_0xFF61FA1A24898079(0, 263, 1);
	unk_0xFF61FA1A24898079(0, 264, 1);
	unk_0xFF61FA1A24898079(0, 143, 1);
	unk_0xFF61FA1A24898079(0, 262, 1);
	unk_0xFF61FA1A24898079(0, 261, 1);
	unk_0xFF61FA1A24898079(0, 37, 1);
	unk_0xFF61FA1A24898079(0, 25, 1);
	unk_0xFF61FA1A24898079(0, 26, 1);
}

int func_350(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11)
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	
	Global_17151.f_6 = 1;
	if (unk_0xC740F8182E7E9681() && !bParam9)
	{
		if (Global_2432628.f_730)
		{
			func_355(0, bParam9);
		}
		return 0;
	}
	if ((unk_0x9726BE1252F8F0B6() && !bParam9) && !unk_0x6273A79EFF10C4A9())
	{
		return 0;
	}
	if (!func_354())
	{
		if (func_353(unk_0x0C1D3C552325765B(), 1))
		{
			if (((bParam9 && func_12(unk_0x0C1D3C552325765B(), 1, 0)) && unk_0xC740F8182E7E9681()) && Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_222 == 1)
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
	if (!Global_2432628.f_730 && !bParam11)
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
		if ((unk_0x7466327978A6A24C((Var0.f_0 - Param0.f_0)) < 0.2f && unk_0x7466327978A6A24C((Var0.f_1 - Param0.f_1)) < 0.2f) && unk_0x7466327978A6A24C((Var0.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar3 = (fParam3 - unk_0x5E6FDC4F3A8C8EDE(unk_0xA0081090911D13E5()));
			if (fVar3 > 180f)
			{
				fVar3 = (fVar3 + -360f);
			}
			if (fVar3 < -180f)
			{
				fVar3 = (fVar3 + 360f);
			}
			if (unk_0x7466327978A6A24C(fVar3) < 1f)
			{
				Global_2432628.f_730 = 0;
				Global_2432628.f_731 = 0;
				if (unk_0x6273A79EFF10C4A9())
				{
					unk_0x9455DC3C261571B3();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2432628.f_732 || !Param0.f_1 == Global_2432628.f_732.f_1) || !Param0.f_2 == Global_2432628.f_732.f_2) || !fParam3 == Global_2432628.f_735)
	{
		if (Global_2432628.f_730 == 1)
		{
			if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2432628.f_736) < func_352(0))
			{
				return 0;
			}
			unk_0x9455DC3C261571B3();
			Global_2432628.f_731 = 1;
		}
		else
		{
			Global_2432628.f_731 = 0;
		}
		Global_2432628.f_732 = { Param0 };
		Global_2432628.f_735 = fParam3;
		Global_2432628.f_730 = 0;
	}
	if (!Global_2432628.f_730 && !unk_0x6273A79EFF10C4A9())
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
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			if (!unk_0x08BA6DD398CA197C(Global_91458.f_1308[44], 16))
			{
				func_351();
			}
			if (!unk_0x4BB9C94E83A66B44(unk_0xA0081090911D13E5(), &(Global_2404993.f_483)))
			{
				Global_2404993.f_483 = 0;
			}
		}
		if (bParam9)
		{
			if (bParam4)
			{
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					uVar4 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
					unk_0x27327EB62D93CDBA(uVar4, Param0, 0, 1, 1, 1);
					unk_0x10BB9EA2ADBCF0F3(uVar4, fParam3);
				}
				else
				{
					unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Param0, 0, 0, 0, 1);
					unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), fParam3);
				}
			}
			else
			{
				unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Param0, 0, 0, 0, 1);
				unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), fParam3);
			}
			func_355(bParam6, bParam9);
			return 1;
		}
		else
		{
			unk_0xE6A458183F9D98BB();
			unk_0xBDD9262D515C03B5(unk_0x0C1D3C552325765B(), Param0, fParam3, bParam4, iParam10, 0);
		}
		Global_2432628.f_736 = unk_0x4B50AAB32FBE0483();
		Global_2432628.f_730 = 1;
	}
	if (Global_2432628.f_730)
	{
		Global_17151.f_6 = 1;
		Global_2432628.f_736 = unk_0x4B50AAB32FBE0483();
		if (bParam9)
		{
			if (unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Global_2432628.f_732) < 2f)
			{
				if (unk_0x6273A79EFF10C4A9())
				{
					unk_0x9455DC3C261571B3();
				}
				func_355(bParam6, bParam9);
				return 1;
			}
		}
		if (!unk_0x6273A79EFF10C4A9())
		{
			func_355(bParam6, bParam9);
			return 1;
		}
	}
	return 0;
}

void func_351()
{
	int iVar0;
	
	iVar0 = unk_0x6327B643497275A6();
	if (unk_0x57655292980A4BAD())
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2404993.f_2211)
	{
		if (!unk_0x8E326405D64D7F51())
		{
			Global_2404993.f_2211 = iVar0;
		}
	}
}

int func_352(bool bParam0)
{
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_353(int iParam0, bool bParam1)
{
	if (Global_2421327[iParam0 /*353*/].f_222 == 99)
	{
		return 0;
	}
	if (bParam1)
	{
		if (Global_2421327[iParam0 /*353*/].f_222 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_354()
{
	return Global_1315206;
}

void func_355(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x2A7D387AD73F1D15(0f, 1065353216);
		unk_0x8BDD755F07063522(0f);
	}
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xD3617D54AE7094CF(unk_0xA0081090911D13E5());
	}
	if (!bParam1)
	{
		unk_0xE6A458183F9D98BB();
	}
	if (unk_0x6273A79EFF10C4A9())
	{
		unk_0x9455DC3C261571B3();
	}
	func_329();
	if (!unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 14))
	{
		func_356();
	}
}

void func_356()
{
	Global_2489431.f_80 = 1;
}

int func_357(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return unk_0xEB361B4BD195A4D3(unk_0x564EAE6038A81C07(uParam0));
	}
	return 1;
}

void func_358(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 15))
		{
			unk_0x88B0F0DC270164B7(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 15);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 15))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 15);
	}
}

int func_359(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return !func_360(unk_0x15F0E6D5AC2852F1(uParam0));
	}
	return 0;
}

int func_360(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (unk_0x912AD5A10E7633F0(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1F1B2B6E500380C5(uParam0, 0))
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

void func_361(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 8, 0))
		{
			func_60(iParam0, 8, 0);
			func_362(iParam0);
		}
	}
	else if (func_23(iParam0, 8, 0))
	{
		func_58(iParam0, 8, 0);
		func_362(iParam0);
	}
}

void func_362(int iParam0)
{
	Global_91458.f_160[iParam0] = 1;
	Global_91458.f_159 = 1;
}

void func_363(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_91458.f_9[iParam0] = 1;
	}
	else
	{
		Global_91458.f_9[iParam0] = 0;
	}
}

void func_364(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_91458.f_8 = 1;
	}
	else
	{
		Global_91458.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 46)
	{
		func_362(iVar0);
		iVar0++;
	}
}

void func_365(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
			}
		}
	}
}

int func_366()
{
	return Local_564.f_0;
}

int func_367()
{
	return 1;
}

int func_368(int iParam0)
{
	return Local_736[iParam0 /*5*/];
}

int func_369(int iParam0)
{
	return Local_736[iParam0 /*5*/].f_2;
}

int func_370(bool bParam0)
{
	if (func_372())
	{
		if (bParam0)
		{
			if (!Global_1573843 && !func_371(unk_0x0C1D3C552325765B(), 2))
			{
				unk_0xFF4920BAFCB15F65("MinigameTransitionIn", 0, 1);
				func_320(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_371(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

bool func_372()
{
	return Global_2432628.f_2;
}

void func_373(bool bParam0)
{
	bool bVar0;
	
	if (unk_0xA86CA03D9749EEB3())
	{
		if (bLocal_753)
		{
			if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 2))
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_747, 31))
				{
					func_30(119, 1, -1, 1);
					func_30(115, 1, -1, 1);
				}
				func_654(1);
				bVar0 = true;
			}
		}
		else if (unk_0x08BA6DD398CA197C(Local_736[unk_0x848AF823A8EA3C62() /*5*/].f_3, 1))
		{
			if (!unk_0x08BA6DD398CA197C(uLocal_747, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_199(&Local_90, 0, bParam0);
	if (unk_0xA86CA03D9749EEB3())
	{
		if (Global_2432628.f_3196)
		{
			func_650(0, 1);
		}
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		func_358(0);
	}
	unk_0x322323456FCFAB4D(Local_90.f_122, 0);
	unk_0x1757D2CC022D31AD(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	unk_0x1757D2CC022D31AD(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_743), 4);
	func_87(0);
	func_56(0);
	func_649();
	func_648(iLocal_89, 0);
	func_180(&(Global_2432628.f_3446));
	Global_2432628.f_3444 = 0;
	Global_2432628.f_3443 = 0;
	Global_2432628.f_3445 = 0;
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 244, 1);
		unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 243, 1);
		unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 242, 1);
	}
	if (bVar0)
	{
		func_376(0, 0, 0, 0);
	}
	else
	{
		unk_0x94724F7C938EBE34(1);
		func_376(0, 0, 3, 1);
	}
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_743), 0);
	func_364(0);
	func_363(4, 0);
	func_363(1, 0);
	func_363(0, 0);
	func_363(2, 0);
	func_363(3, 0);
	func_361(iLocal_89, 0);
	func_349();
	func_33();
	if (unk_0x16833EFAA58E63DB(Global_91458.f_207[iLocal_89]))
	{
		unk_0x71E206F83114C3D2(Global_91458.f_207[iLocal_89], 0);
	}
	if (unk_0x16833EFAA58E63DB(uLocal_750))
	{
		unk_0x0B57C567D698C373(&uLocal_750);
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		func_375(0);
		func_183(0);
	}
	func_374(Local_564.f_5);
}

void func_374(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Param0.f_0)) >= 1000)
		{
			unk_0x5A84D21EFCBD53FD();
		}
	}
	unk_0x78C587487CD40B92();
}

void func_375(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 5);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 5);
	}
}

void func_376(int iParam0, int iParam1, int iParam2, bool bParam3)
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
	
	iVar0 = unk_0x0C1D3C552325765B();
	iVar1 = Global_1588660[iVar0 /*532*/];
	func_647();
	func_643();
	unk_0x7150EE02BA28F9B1(0);
	func_642();
	Global_977934 = 0;
	func_641();
	unk_0x87123A15A60B7969(0);
	func_640();
	Global_786481 = 0;
	Global_786481.f_1 = 0;
	Global_1573709 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	func_639(0);
	Global_1573698 = 0;
	Global_1573697 = 0;
	Global_1573719 = 0;
	Global_1573861 = 0;
	Global_1573867 = 0;
	Global_1573440 = 0;
	Global_1574373 = 1;
	Global_1573834 = 0;
	Global_1573710 = -1;
	func_638();
	func_637(0);
	unk_0x09C86C0C5CA26B1E(&(Global_2359301.f_1), 5);
	if (!func_636())
	{
		func_635();
	}
	func_634();
	func_633();
	func_632();
	func_631();
	func_630();
	if (unk_0xA86CA03D9749EEB3())
	{
		func_629();
	}
	if (func_628() || !func_627())
	{
		func_626();
		func_625(1, 1, 1);
		func_624();
		func_623();
		if (iVar0 != -1)
		{
			Global_1613455[iVar0 /*35*/].f_1 = 0;
			Global_1613455[iVar0 /*35*/].f_2 = 0;
			Global_1613455[iVar0 /*35*/] = 0;
		}
	}
	func_622();
	if (Global_1626500 != 6)
	{
		if (func_12(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (unk_0x42F7F3EE791EDE08(unk_0xA0081090911D13E5()))
			{
				unk_0xF152F4EB3CEAF22E(unk_0xA0081090911D13E5(), 1);
			}
		}
	}
	Global_1572909 = 0;
	if (Global_1729863.f_9 == 4)
	{
		if (func_621(unk_0x0C1D3C552325765B()) || func_620(unk_0x0C1D3C552325765B()))
		{
			Global_1572909 = 1;
		}
	}
	func_618();
	if (func_617())
	{
		func_616();
	}
	func_615();
	Global_1626500.f_84508 = 0;
	Global_1729823.f_4 = 0;
	unk_0xF1DFCE7980E1C284(unk_0x0C1D3C552325765B(), 1);
	StringCopy(&(Global_1626500.f_83859), "", 32);
	unk_0x6EDFAF353D332BBF();
	unk_0x7ABD1B29E6C2963D(18);
	if ((bParam3 && !func_614()) && !func_613())
	{
		unk_0xB477A2D8CA963C52();
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1612992[iVar3] = 0;
		Global_1612959[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		unk_0x88B0F0DC270164B7(&(Global_2443212.f_5521), 3);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2443212.f_5521), 3);
	}
	if (iVar0 != -1 && Global_2442442.f_547.f_10 != 0)
	{
		Global_1613455[unk_0x0C1D3C552325765B() /*35*/].f_2 = Global_2442442.f_547.f_10;
	}
	if (func_372() || (iVar0 != -1 && Global_1588660[iVar0 /*532*/].f_427))
	{
		func_612();
		func_611(1, 1);
		func_625(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1613455[iVar0 /*35*/].f_1 = 0;
			Global_1613455[iVar0 /*35*/].f_2 = 0;
			Global_1613455[iVar0 /*35*/] = 0;
		}
		func_610(1);
		if (func_609())
		{
			func_608();
		}
		if (!func_15(unk_0x0C1D3C552325765B()))
		{
			func_606(4);
		}
		func_624();
		func_605(0);
		func_604();
		Global_1574365 = 0;
	}
	if (!func_603())
	{
		func_602();
		if (func_601())
		{
			if (func_600())
			{
				func_612();
			}
		}
		func_610(1);
		if (!func_599())
		{
			Global_2443212.f_5840 = 0;
			Global_2443212.f_5841 = 0;
			Global_2443212.f_5839 = 0;
			Global_2443212.f_5838 = 0;
		}
	}
	else
	{
		func_598(unk_0x0C1D3C552325765B(), 0);
	}
	func_597((Global_1729863.f_9 != 4 && !func_603()));
	if (func_599())
	{
		Global_2443212.f_5930 = 1;
	}
	else
	{
		Global_2443212.f_5930 = 0;
	}
	if (!func_636())
	{
		Global_1729888.f_1569 = 0;
	}
	if (!func_603() && !func_636())
	{
		func_611(1, Global_1729863.f_9 != 4);
		func_625(1, 1, 0);
		func_596(0);
		func_595();
		Global_1574367 = 0;
		if (iVar0 != -1)
		{
			Global_1613455[iVar0 /*35*/].f_1 = 0;
			Global_1613455[iVar0 /*35*/].f_2 = 0;
			Global_1613455[iVar0 /*35*/] = 0;
		}
	}
	func_592(1, -1);
	if (func_591())
	{
		func_590();
	}
	if (unk_0x1504F110F2576375())
	{
		unk_0x603D2823AABEDD00();
	}
	if ((!func_614() && !func_603()) && !func_613())
	{
		func_586();
	}
	Global_1626500.f_84504 = 0;
	func_585();
	Global_1573691 = -1;
	Global_1613036 = -1;
	Global_1613030 = -1;
	Global_1613032 = -1;
	Global_1573696 = 0;
	Global_1613031 = 0;
	Global_1573845 = 0;
	Global_1573837 = 0;
	Global_1613037 = 0;
	func_584(0);
	func_583();
	Global_1588660[iVar0 /*532*/].f_427 = 0;
	Global_1613028 = 0f;
	Global_1613029 = 0f;
	Global_1573846 = 0;
	Global_1573847 = -1;
	func_582(0);
	Global_1573835 = 0;
	Global_1573441 = 0;
	func_581();
	unk_0x0756AF366187C194("WantedMusicDisabled", 0);
	unk_0x0756AF366187C194("DisableFlightMusic", 0);
	func_580(1);
	if (func_579())
	{
		func_578();
	}
	if (func_577())
	{
		if (func_575(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x6AC3C3A7CD358D90() < 2)
			{
				func_574();
				func_573(1);
			}
			else
			{
				func_572();
			}
			if (Global_1729863.f_9 != -1)
			{
				func_571();
			}
		}
		else if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 0)
		{
			if (Global_1729863.f_9 != -1)
			{
				func_571();
			}
		}
	}
	bVar4 = func_16(iVar0);
	Global_1588660[iVar0 /*532*/].f_188 = 0;
	if (bVar4 && !func_636())
	{
		func_570();
	}
	if (!bVar4)
	{
		func_569(0);
	}
	if ((func_568() != 36 && func_568() != 35) && !func_567())
	{
		Global_1572864 = { 0f, 0f, 0f };
	}
	func_566();
	func_565();
	func_573(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1729863.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_564())
		{
			func_563(0, iVar6);
		}
	}
	unk_0xDD2068A0E1CE0C56(0);
	if (unk_0xA86CA03D9749EEB3())
	{
		switch (Global_1729863.f_9)
		{
			case 1:
				if (!func_562() && func_559(0) > 0)
				{
					Global_1748027[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					func_557();
					func_556();
				}
				break;
			
			case 6:
				Global_1574365 = 0;
				if (!bVar4)
				{
					func_557();
				}
				func_556();
				Global_1729863 = 0;
				Global_1729863.f_22 = { 0f, 0f, 0f };
				Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_12 = 0;
				StringCopy(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_216), "", 24);
				Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_213 = { 0f, 0f, 0f };
				break;
			
			case 2:
				func_555(0);
				if (!func_554() || (func_554() && unk_0x509383441597090D(&(Global_2442442.f_18))))
				{
					func_553(Global_1729863.f_16);
					func_552(Global_1729863.f_16);
				}
				iVar5 = Global_1588660[iVar0 /*532*/].f_11;
				if (iVar5 != func_125())
				{
					if (unk_0xCB129F9A01D14082(iVar5))
					{
						Global_2443212.f_5522 = { func_73(iVar5) };
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
				if ((iVar7 && func_554()) && unk_0x8BCACDC751B3961A() == 1)
				{
					Global_2443212.f_5522 = { func_551() };
				}
				if (((Global_1626500.f_27 > 1 && !func_545()) && !func_544(Global_1626500.f_83867)) && !func_543(Global_1626500.f_83867))
				{
					func_542(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_94.f_28);
				}
				else
				{
					func_541();
				}
				break;
			
			case 3:
				func_555(0);
				iVar2 = 1;
				func_540();
				iVar5 = Global_1588660[iVar0 /*532*/].f_11;
				if (iVar5 != func_125())
				{
					if (unk_0xCB129F9A01D14082(iVar5))
					{
						Global_2443212.f_5522 = { func_73(iVar5) };
					}
				}
				if (((Global_1626500.f_27 > 1 && !func_545()) && !func_544(Global_1626500.f_83867)) && !func_543(Global_1626500.f_83867))
				{
					func_542(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_94.f_28);
				}
				else
				{
					func_541();
				}
				break;
			
			case 4:
				func_555(0);
				iVar2 = 1;
				if (func_539())
				{
					func_538();
				}
				else
				{
					Global_2443212.f_5840 = 0;
					Global_2443212.f_5841 = 0;
					Global_2443212.f_5839 = 0;
					Global_2443212.f_5838 = 0;
				}
				if (func_621(unk_0x0C1D3C552325765B()) || func_620(unk_0x0C1D3C552325765B()))
				{
					Global_786435.f_34++;
				}
				if (!unk_0x08BA6DD398CA197C(Global_1626500.f_12, 22))
				{
					if (!unk_0x08BA6DD398CA197C(Global_1626500.f_12, 15))
					{
						func_537(Global_1626500.f_84480);
					}
					else
					{
						func_536(Global_1626500.f_99352, Global_1626500.f_99353);
					}
					if (Global_1729863.f_13 > -1)
					{
						unk_0xE696B2ED0A88B548(Global_1729863.f_13, Global_1729863.f_14, 0);
					}
					else if (func_535() > -1)
					{
						func_534(func_535(), 0);
					}
				}
				if (func_533())
				{
					Var8 = { func_532() };
					func_531(Var8);
					if (func_530() != -1)
					{
						Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_94.f_28 = func_530();
					}
					func_529();
					func_528();
				}
				else
				{
					func_540();
				}
				if (!func_236(unk_0x0C1D3C552325765B(), 0))
				{
					unk_0x02FF16B6D311529D(0);
					func_525(0, 0, 1);
				}
				break;
			
			case 5:
				func_555(0);
				iVar2 = 1;
				func_540();
				break;
			
			case 8:
				if (!func_554())
				{
					func_553(Global_1729863.f_16);
				}
				break;
			
			case 9:
				func_555(0);
				iVar2 = 1;
				func_540();
				func_552(Global_1626500.f_84154);
				if (func_524())
				{
					func_523();
				}
				if (!func_236(unk_0x0C1D3C552325765B(), 0))
				{
					unk_0x02FF16B6D311529D(0);
					func_525(0, 0, 1);
				}
				break;
			
			case 10:
				func_506(10, 0f, 0f, 0f, Var14);
				func_505();
				break;
		}
	}
	else
	{
		Global_1574365 = 0;
	}
	if (iVar2 || func_620(unk_0x0C1D3C552325765B()))
	{
		if ((func_504(unk_0x0C1D3C552325765B()) || func_621(unk_0x0C1D3C552325765B())) || func_620(unk_0x0C1D3C552325765B()))
		{
			if (Global_1738977 > 0)
			{
				Global_2443212.f_1.f_2824.f_13 = Global_1738977;
				Global_2443212.f_1.f_2824 = { Global_1738977.f_1 };
			}
		}
		else
		{
			func_503();
		}
	}
	Global_2443212.f_1.f_841 = 0;
	unk_0x09C86C0C5CA26B1E(&Global_1573445, 0);
	func_502(0);
	Global_1573701 = 0;
	Global_1573830 = -1;
	Global_1612958 = 0;
	Global_1312432 = 0;
	Global_1729863.f_1 = 0;
	Global_1729863.f_2 = 0;
	if (func_501() == 0)
	{
		if (Global_1729863.f_9 == -1 && bVar4 == 0)
		{
			func_493(0);
		}
		else
		{
			Global_1729863.f_9 = -1;
		}
	}
	func_492();
	if (func_491())
	{
		func_490();
	}
	if (func_489())
	{
		func_488();
	}
	if (!unk_0x1504F110F2576375())
	{
		unk_0xFBDF13753A19A025(1);
	}
	if (func_501() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!func_487(Global_1588660[iVar0 /*532*/]) && !func_614()) && !bVar4) && !func_354()) && !func_603()) && !func_613())
			{
				func_486(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_485();
	Global_1729863.f_1 = 0;
	if (!func_577())
	{
		func_484();
	}
	if (Global_1588660[iVar0 /*532*/] != -1)
	{
		iParam2 = iParam2;
		if (func_483(Global_1588660[iVar0 /*532*/]))
		{
			if (unk_0x98C339BD475B043D())
			{
				iVar20 = func_466(0);
				func_463(1205, -1);
				func_458(joaat("mpply_mgame_cheat_end"), iVar20);
				if (iVar20 > 0)
				{
					func_458(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		unk_0xCDAC7F1B710886EF(unk_0x0C1D3C552325765B());
	}
	func_456();
	if (Global_1729863 == 0)
	{
		if (!bVar4)
		{
			Global_1588660[iVar0 /*532*/].f_11 = -1;
			Global_1588660[iVar0 /*532*/].f_12 = 0;
		}
	}
	if (bVar4)
	{
		func_486(0);
		Global_1588660[iVar0 /*532*/].f_12 = 1;
		Global_1588660[iVar0 /*532*/].f_11 = func_455(unk_0x0C1D3C552325765B());
		unk_0x02FF16B6D311529D(0);
		func_525(0, 0, 1);
		if (func_454())
		{
			func_452();
		}
	}
	if ((Global_1588660[iVar0 /*532*/] < 10 && Global_1588660[iVar0 /*532*/] != -1) && !func_354())
	{
		if ((!unk_0x509383441597090D(&(Global_1588660[iVar0 /*532*/].f_142)) && Global_1588660[iVar0 /*532*/] != 5) && Global_1588660[iVar0 /*532*/] != 148)
		{
			func_449(&(Global_1588660[iVar0 /*532*/].f_142));
		}
	}
	if (Global_1588660[iVar0 /*532*/] != 6)
	{
		Global_1729810 = 1;
	}
	Global_1588660[iVar0 /*532*/] = -1;
	Global_1588660[iVar0 /*532*/].f_39.f_2 = -1;
	Global_1588660[iVar0 /*532*/].f_39.f_16 = -1;
	Global_1588660[iVar0 /*532*/].f_39.f_1 = -1;
	Global_1626500 = 0;
	if (!bVar4)
	{
		func_448(0);
	}
	Global_1588660[iVar0 /*532*/].f_39.f_18 = 0;
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x1A9CF4D5D4E2F266() /*532*/].f_425), 0);
	unk_0x2D28C28AA9FAF41A(0, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		unk_0x3437639A811EF082();
		Global_2452919 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1588660[iVar0 /*532*/].f_142), sVar21, 24);
		StringCopy(&(Global_1588660[iVar0 /*532*/].f_148), sVar21, 24);
		func_447();
	}
	StringCopy(&(Global_1605685[iVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1588660[iVar0 /*532*/].f_162), sVar21, 64);
	Global_1613455[iVar0 /*35*/].f_30 = { Var22 };
	Global_1573840 = 0;
	Global_1573841 = 0;
	Global_1573453 = -1;
	bVar24 = false;
	func_446();
	func_445();
	func_444();
	if (func_443())
	{
		func_442();
	}
	if (func_441() && unk_0x1504F110F2576375())
	{
		func_440();
		func_328(unk_0x0C1D3C552325765B(), 0, 57348);
	}
	if (func_439())
	{
		func_438();
	}
	else if (func_437())
	{
		func_438();
	}
	else if (func_436())
	{
		func_438();
	}
	else if (func_435())
	{
		func_438();
	}
	else if (func_434())
	{
		func_438();
	}
	else if (func_501())
	{
		func_438();
	}
	else if (func_433() && func_432())
	{
		func_438();
	}
	else if (func_431())
	{
		func_438();
	}
	else
	{
		func_430();
		if (!Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_12 && !func_636())
		{
			if (unk_0x1504F110F2576375())
			{
				if (func_454())
				{
					func_429();
				}
				else
				{
					if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
					{
						Global_2443212.f_2842.f_197 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
					}
					func_428();
					func_624();
					func_427(6);
					func_556();
					if (bVar4)
					{
						func_605(0);
					}
				}
				func_426();
				func_425();
				func_424();
				if (Global_2443212.f_2842.f_4 == 2)
				{
					Global_2443212.f_2842.f_4 = 1;
				}
				if (func_236(unk_0x0C1D3C552325765B(), 0))
				{
					func_423();
				}
				func_422();
				Global_2443212.f_2842 = 0;
			}
			else
			{
				func_421();
				func_438();
			}
		}
		else
		{
			if (!func_599() && !func_636())
			{
			}
			func_421();
			func_438();
		}
	}
	if ((((((((((!func_439() && !func_420()) && !func_432()) && !func_433()) && !func_436()) && !func_437()) && !func_419()) && !func_434()) && !func_501()) && !func_435()) && !func_418())
	{
		if (!func_417())
		{
			func_416();
			func_414();
			func_413();
			func_411(1);
		}
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x8188FDE7090D3AF6())
		{
			if (!unk_0x7437A5536711AE6C())
			{
				if (!func_410())
				{
					if (!bVar24)
					{
						if (func_15(unk_0x0C1D3C552325765B()))
						{
							unk_0xBA257C434C60E241();
							unk_0x4FEC69CCB3051E90();
						}
					}
				}
			}
		}
	}
	if (!func_354())
	{
		StringCopy(&(Global_1626500.f_83874), "", 64);
	}
	if (func_409(116, &iVar25))
	{
		func_408(iVar25);
	}
	if (func_409(123, &iVar25))
	{
		func_408(iVar25);
	}
	if (!func_636())
	{
		func_400();
	}
	func_399();
	if (!func_603() && !func_599())
	{
		func_398();
	}
	func_377(bParam3);
}

void func_377(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_577())
		{
		}
		else if ((((!func_603() && !func_599()) && !func_636()) && Global_1729863.f_9 != 9) && Global_1729863.f_9 != 4)
		{
			func_534(0, 1);
		}
	}
	unk_0x8E3DB58E9EDB1597();
	if (!func_397(unk_0x0C1D3C552325765B()) && !Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_444)
	{
		func_396();
	}
	func_395(1);
	if ((((bParam0 && !func_394()) && !func_603()) && !Global_262145.f_4878) && !func_392())
	{
		unk_0xCAEB7B8DC74D3932();
	}
	unk_0x806DACE5511E6771(5, 1);
	unk_0x806DACE5511E6771(3, 1);
	func_384(&uVar0, -1);
	if ((func_28() == 0 && !func_109()) && !func_603())
	{
		if (func_383())
		{
			func_382();
		}
		else
		{
			func_379(28, 0);
		}
	}
	func_378(0);
}

void func_378(int iParam0)
{
	if (!Global_1738523 == iParam0)
	{
		Global_1738523 = iParam0;
	}
}

void func_379(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_381(iParam0, iParam1))
	{
		iVar0 = func_380();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_380()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2451682[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_381(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_382()
{
	unk_0x88B0F0DC270164B7(&(Global_969359.f_8), 22);
}

bool func_383()
{
	return unk_0x08BA6DD398CA197C(Global_969359.f_8, 21);
}

void func_384(var uParam0, int iParam1)
{
	func_390(uParam0, iParam1);
	func_385(iParam1);
}

void func_385(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	uVar0 = func_389(iParam0);
	uVar1 = unk_0x680A5FBB1F20F775(uVar0);
	if (func_386())
	{
		if (unk_0x08BA6DD398CA197C(uVar1, 1))
		{
			func_30(133, 1, -1, 1);
		}
	}
}

int func_386()
{
	if (func_388() && func_387(0))
	{
		return 1;
	}
	return 0;
}

var func_387(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_388()
{
	return func_387(func_26() + 1);
}

int func_389(int iParam0)
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

void func_390(var uParam0, int iParam1)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	uVar1 = func_391(iParam1);
	uVar2 = unk_0x680A5FBB1F20F775(uVar1);
	if (unk_0x08BA6DD398CA197C(uVar2, 1))
	{
		func_463(1200, iParam1);
		func_458(joaat("mpply_dm_cheat_start"), 2);
		func_458(joaat("mpply_activity_started"), 1);
		unk_0x09C86C0C5CA26B1E(&uVar2, 1);
		bVar0 = true;
	}
	if (unk_0x08BA6DD398CA197C(uVar2, 2))
	{
		func_463(1202, iParam1);
		func_458(joaat("mpply_race_cheat_start"), 2);
		func_458(joaat("mpply_activity_started"), 1);
		unk_0x09C86C0C5CA26B1E(&uVar2, 2);
		bVar0 = true;
	}
	if (unk_0x08BA6DD398CA197C(uVar2, 3))
	{
		func_463(1111, iParam1);
		func_458(joaat("mpply_mc_cheat_start"), 2);
		func_458(joaat("mpply_activity_started"), 1);
		unk_0x09C86C0C5CA26B1E(&uVar2, 3);
		bVar0 = true;
	}
	if (unk_0x08BA6DD398CA197C(uVar2, 4))
	{
		func_463(1204, iParam1);
		func_458(joaat("mpply_mgame_cheat_start"), 2);
		func_458(joaat("mpply_activity_started"), 1);
		unk_0x09C86C0C5CA26B1E(&uVar2, 4);
		bVar0 = true;
	}
	if (unk_0x08BA6DD398CA197C(uVar2, 5))
	{
		func_463(1915, iParam1);
		func_458(joaat("mpply_cap_cheat_start"), 2);
		func_458(joaat("mpply_activity_started"), 1);
		unk_0x09C86C0C5CA26B1E(&uVar2, 5);
		bVar0 = true;
	}
	if (unk_0x08BA6DD398CA197C(uVar2, 6))
	{
		func_463(1917, iParam1);
		func_458(joaat("mpply_sur_cheat_start"), 2);
		func_458(joaat("mpply_activity_started"), 1);
		unk_0x09C86C0C5CA26B1E(&uVar2, 6);
		bVar0 = true;
	}
	if (unk_0x08BA6DD398CA197C(uVar2, 7))
	{
		func_463(1919, iParam1);
		func_458(joaat("mpply_lts_cheat_start"), 2);
		func_458(joaat("mpply_activity_started"), 1);
		unk_0x09C86C0C5CA26B1E(&uVar2, 7);
		bVar0 = true;
	}
	if (unk_0x08BA6DD398CA197C(uVar2, 8))
	{
		func_463(1921, iParam1);
		func_458(joaat("mpply_para_cheat_start"), 2);
		func_458(joaat("mpply_activity_started"), 1);
		unk_0x09C86C0C5CA26B1E(&uVar2, 8);
		bVar0 = true;
	}
	if (unk_0x08BA6DD398CA197C(uVar2, 9))
	{
		func_463(4102, iParam1);
		func_458(joaat("mpply_heist_cheat_start"), 2);
		func_458(joaat("mpply_activity_started"), 1);
		unk_0x09C86C0C5CA26B1E(&uVar2, 9);
		bVar0 = true;
	}
	if (unk_0x08BA6DD398CA197C(uVar2, 26))
	{
		func_463(1923, iParam1);
		func_458(joaat("mpply_fmevn_cheat_start"), 2);
		func_458(joaat("mpply_activity_started"), 1);
		unk_0x09C86C0C5CA26B1E(&uVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		unk_0x9460FEB503073236(uVar2, iParam1);
	}
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

int func_392()
{
	if (func_621(unk_0x0C1D3C552325765B()) || func_620(unk_0x0C1D3C552325765B()))
	{
		if (func_393() || func_599())
		{
			return 1;
		}
	}
	return 0;
}

bool func_393()
{
	return unk_0x08BA6DD398CA197C(Global_1315135, 4);
}

bool func_394()
{
	return Global_1573843;
}

void func_395(int iParam0)
{
	Global_2443212.f_5837 = iParam0;
}

void func_396()
{
	unk_0xCF03D9C8A7F1577C(6);
	unk_0xACD6D334FD769B0C(1f);
	unk_0xE4C0529BFE536707(1);
}

int func_397(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/] != -1;
	}
	return 0;
}

void func_398()
{
	Global_2442442.f_28.f_39 = 0;
}

void func_399()
{
	Global_1729863.f_6 = 0;
}

void func_400()
{
	struct<3> Var0;
	struct<2> Var3;
	int iVar5;
	
	if (!func_406(func_407(), Var0))
	{
		Var3.f_0 = 246;
		Var3.f_1 = unk_0x0C1D3C552325765B();
		iVar5 = func_405(1, 1);
		if (!iVar5 == 0)
		{
			func_402();
			func_401(0);
			unk_0x8E36889D76C8D4FA(1, &Var3, 2, iVar5);
		}
	}
}

void func_401(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2432628.f_3191 = unk_0x4B50AAB32FBE0483();
	}
	Global_2432628.f_3075 = iParam0;
}

void func_402()
{
	func_404();
	func_403();
}

void func_403()
{
	struct<72> Var0;
	
	if (func_55(unk_0x0C1D3C552325765B()))
	{
		Var0.f_6 = 32;
		Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123 = { Var0 };
	}
}

void func_404()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2432628.f_3075.f_79 };
	Var0.f_95 = { Global_2432628.f_3075.f_95 };
	Global_2432628.f_3075 = { Var0 };
}

var func_405(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
			{
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
				else if (!func_236(iVar2, 0))
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_406(struct<3> Param0, struct<3> Param3)
{
	if ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_407()
{
	return Global_2420575[unk_0x0C1D3C552325765B() /*10*/];
}

void func_408(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2466266[iParam0 /*5*/].f_1 == -1 || Global_2466266[iParam0 /*5*/].f_2 == -1) || Global_2466266[iParam0 /*5*/].f_3 == -1) || Global_2466266[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	unk_0x5F279AE12616A8A3(Global_2466266[iParam0 /*5*/], Global_2466266[iParam0 /*5*/].f_1, Global_2466266[iParam0 /*5*/].f_2, Global_2466266[iParam0 /*5*/].f_3, Global_2466266[iParam0 /*5*/].f_4);
	Global_2466266[iParam0 /*5*/] = -1;
	Global_2466266[iParam0 /*5*/].f_1 = -1;
	Global_2466266[iParam0 /*5*/].f_2 = -1;
	Global_2466266[iParam0 /*5*/].f_3 = -1;
	Global_2466266[iParam0 /*5*/].f_4 = -1;
}

int func_409(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2466266[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_410()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 18);
}

void func_411(bool bParam0)
{
	struct<57> Var0;
	int iVar57;
	
	Global_2443212.f_1.f_2797 = 0;
	Global_2443212.f_1.f_2798 = 0;
	Global_2443212.f_1.f_2820 = 0;
	Global_2443212.f_1.f_2804 = 0;
	Global_2443212.f_1.f_2805 = 0;
	Global_2443212.f_1.f_2808 = 0;
	Global_2443212.f_1.f_2809 = 0;
	Global_2443212.f_1.f_2807 = -1;
	Global_2443212.f_1.f_2810 = -1;
	Global_2443212.f_1.f_2812 = 0;
	Global_2443212.f_1.f_2813 = 0;
	Global_2443212.f_1.f_2814 = 0;
	Global_2443212.f_1.f_2815 = 0;
	Global_2443212.f_1.f_2816 = 0;
	Global_2443212.f_1.f_2817 = 0;
	Global_2443212.f_1.f_2821 = -1;
	if (bParam0)
	{
		Global_2443212.f_1.f_2818 = -1;
		Global_2443212.f_1.f_2819 = -1;
	}
	Global_2443212.f_1.f_2840 = 0;
	func_412();
	Var0.f_33 = 2;
	Var0.f_36 = 7;
	iVar57 = 0;
	while (iVar57 <= 31)
	{
		Global_2443212.f_1.f_844[iVar57 /*57*/] = { Var0 };
		iVar57++;
	}
	Global_2439560.f_30 = -1;
}

void func_412()
{
	Global_2439560.f_29 = 0;
}

void func_413()
{
	Global_2442442.f_569 = 0;
}

void func_414()
{
	Global_2442442.f_570 = 0;
	func_415();
}

void func_415()
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (iVar0 >= 0)
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar0 /*532*/].f_94.f_32), 6);
	}
}

void func_416()
{
	Global_2442442 = 0;
	Global_2442442.f_2 = 0;
	Global_2442442.f_3 = 0;
}

bool func_417()
{
	return Global_2442442.f_569;
}

bool func_418()
{
	return Global_1738968;
}

bool func_419()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 1);
}

bool func_420()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 16);
}

void func_421()
{
	unk_0x09C86C0C5CA26B1E(&Global_2442442, 21);
}

void func_422()
{
	Global_2443212.f_2842.f_34 = 1;
}

void func_423()
{
	Global_2443212.f_1.f_2823 = 1;
}

void func_424()
{
	Global_2442442.f_703 = 1;
}

void func_425()
{
	Global_2443212.f_1.f_2822 = 1;
}

void func_426()
{
	unk_0x88B0F0DC270164B7(&Global_2442442, 21);
}

void func_427(int iParam0)
{
	Global_2443212.f_1.f_837 = iParam0;
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_212 = iParam0;
}

void func_428()
{
	struct<34> Var0;
	
	Var0 = 28;
	Var0.f_30 = -1;
	Global_2439594 = { Var0 };
}

void func_429()
{
	Global_2443212.f_2842.f_1 = 1;
}

void func_430()
{
	Global_2443212.f_2842.f_1 = 0;
}

bool func_431()
{
	return Global_2442442.f_594;
}

bool func_432()
{
	return Global_2442442.f_584;
}

bool func_433()
{
	return Global_2442442.f_571;
}

bool func_434()
{
	return Global_2442442.f_580;
}

bool func_435()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 15);
}

bool func_436()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 20);
}

bool func_437()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 2);
}

void func_438()
{
	Global_2443212.f_2842.f_34 = 0;
}

bool func_439()
{
	return unk_0x08BA6DD398CA197C(Global_969359.f_8, 8);
}

void func_440()
{
	Global_2442442.f_599 = 0;
}

var func_441()
{
	return Global_2442442.f_599;
}

void func_442()
{
	Global_2442442.f_629 = 0;
}

bool func_443()
{
	return Global_2442442.f_629;
}

void func_444()
{
	Global_2443212.f_1.f_838 = 0;
	Global_2443212.f_1.f_840 = 0;
}

void func_445()
{
	unk_0x09C86C0C5CA26B1E(&Global_2442442, 4);
}

void func_446()
{
	unk_0x09C86C0C5CA26B1E(&Global_2442442, 28);
}

void func_447()
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar0 /*532*/].f_13.f_1), 4);
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar0 /*532*/].f_13.f_1), 5);
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar0 /*532*/].f_13.f_1), 7);
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar0 /*532*/].f_13.f_1), 8);
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar0 /*532*/].f_13.f_1), 9);
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar0 /*532*/].f_13.f_1), 10);
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar0 /*532*/].f_13.f_1), 11);
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar0 /*532*/].f_13.f_1), 12);
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar0 /*532*/].f_13.f_1), 13);
}

void func_448(int iParam0)
{
	unk_0x02FF16B6D311529D(iParam0);
}

void func_449(var uParam0)
{
	var uVar0;
	
	if ((!func_451() && func_450(120, -1)) && !func_354())
	{
		unk_0x0A1C143212EFF423(uParam0, &uVar0, 13);
		if (unk_0xD478D67F6AAE84CA(&uVar0, 13))
		{
			if (unk_0x74A87F4BE7FE0199(&uVar0))
			{
			}
		}
	}
}

int func_450(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2506009[iParam0 /*3*/][func_25(iParam1)];
	if (unk_0x80FB5712A7C4B4B8(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_451()
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if ((Global_1588660[iVar0 /*532*/].f_39.f_2 == 63 || Global_1588660[iVar0 /*532*/].f_39.f_2 == 62) || Global_1588660[iVar0 /*532*/].f_39.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_452()
{
	unk_0x88B0F0DC270164B7(&(Global_969359.f_8), 8);
	func_453();
}

void func_453()
{
	Global_2442442.f_757 = 1;
}

bool func_454()
{
	return Global_2443212.f_2842.f_2;
}

var func_455(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_94.f_2;
}

void func_456()
{
	if (func_457())
	{
		unk_0x94724F7C938EBE34(1);
	}
}

bool func_457()
{
	return func_179("FM_RETRY_INV");
}

void func_458(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_462(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_461(iParam0))
	{
		func_460(iParam0, iVar0);
	}
	else
	{
		func_459(iParam0, iVar0);
	}
}

void func_459(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1352217 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1352220 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1352221 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1352222 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1352223 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1352224 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1352225 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1352226 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1352227 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1352228 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1352229 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1352230 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1352231 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1352232 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1352233 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_460(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, 1);
	}
}

int func_461(int iParam0)
{
	if (Global_1352216)
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

int func_462(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_463(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam1), 0);
	iVar0++;
	if (!func_465(iParam0))
	{
		func_59(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_464(iParam0, iVar0, iParam1, 1);
	}
}

void func_464(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_25(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_25(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_25(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_25(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_25(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_25(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_25(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_25(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_25(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_25(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_25(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_25(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_25(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_25(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_25(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_25(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_25(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_25(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_25(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_25(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_25(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_25(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_25(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_25(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_25(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_25(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_25(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_25(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_25(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_25(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_25(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_465(int iParam0)
{
	if (Global_1352216)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
				return 1;
				break;
			}
	}
	return 0;
}

int func_466(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2452799 == 0)
	{
		return 0;
	}
	if (func_482())
	{
		if (unk_0x1504F110F2576375() || (func_481() || func_477()))
		{
			Global_2451781 = 1;
		}
	}
	Global_2452799 = 0;
	if (Global_1318055)
	{
		iVar0 = 1;
	}
	if (Global_2451781)
	{
		iVar0 = 1;
	}
	if (Global_2451780)
	{
		iVar0 = 1;
	}
	if (func_476(Global_100581.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2451706)
	{
		iVar0 = 1;
	}
	if (func_475(512))
	{
		iVar0 = 1;
	}
	if (func_474(128))
	{
		iVar0 = 1;
	}
	if (Global_1318079 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_354())
	{
		iVar0 = 0;
	}
	if (Global_2452238)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_472())
		{
			if (Global_1626500.f_84506 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_236(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = 0;
	}
	if (func_471())
	{
		iVar0 = 0;
	}
	if ((Global_2451781 || Global_2451780) || Global_1318055)
	{
		if (func_477())
		{
			iVar0 = 0;
		}
	}
	Global_2452238 = 0;
	Global_2451780 = 0;
	Global_2451781 = 0;
	Global_1318055 = 0;
	Global_2451706 = 0;
	func_469(&(Global_100581.f_1), 32);
	func_468(512);
	func_467(128);
	return iVar0;
}

void func_467(int iParam0)
{
	Global_100638 = (Global_100638 - (Global_100638 && iParam0));
}

void func_468(int iParam0)
{
	Global_100639 = (Global_100639 - (Global_100639 && iParam0));
}

void func_469(var uParam0, int iParam1)
{
	func_470(uParam0, iParam1);
}

void func_470(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_471()
{
	if (((Global_1573865 || Global_1573836) || func_236(unk_0x0C1D3C552325765B(), 0)) || func_235())
	{
		return 1;
	}
	return 0;
}

int func_472()
{
	switch (func_473())
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

int func_473()
{
	return Global_2443212.f_1.f_2818;
}

bool func_474(int iParam0)
{
	return (Global_100638 && iParam0) != 0;
}

bool func_475(int iParam0)
{
	return (Global_100639 && iParam0) != 0;
}

bool func_476(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_477()
{
	if (func_480(Global_2453905))
	{
		return 0;
	}
	if (func_478(unk_0x0C1D3C552325765B(), 146))
	{
		return 1;
	}
	return 0;
}

int func_478(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/] == iParam1)
	{
		return func_479(iParam0);
	}
	return 0;
}

int func_479(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

int func_480(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_9831)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_9833)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_9830)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_9834)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_9835)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_9836)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_9832)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_9837)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_9838)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_9839)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_9840)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_481()
{
	if (func_480(Global_2453905))
	{
		return 0;
	}
	if (func_479(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

bool func_482()
{
	return unk_0x08BA6DD398CA197C(Global_1312419, 0);
}

int func_483(int iParam0)
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

void func_484()
{
	if (unk_0x4184E6D274FCBFF1(unk_0xF220C8EB1E04AAE8(unk_0x0C1D3C552325765B()), "MissionType"))
	{
		unk_0xC0950AA4244BE204(unk_0xF220C8EB1E04AAE8(unk_0x0C1D3C552325765B()), "MissionType");
	}
	if (unk_0x4184E6D274FCBFF1(unk_0xF220C8EB1E04AAE8(unk_0x0C1D3C552325765B()), "MatchId"))
	{
		unk_0xC0950AA4244BE204(unk_0xF220C8EB1E04AAE8(unk_0x0C1D3C552325765B()), "MatchId");
	}
	if (unk_0x4184E6D274FCBFF1(unk_0xF220C8EB1E04AAE8(unk_0x0C1D3C552325765B()), "TeamId"))
	{
		unk_0xC0950AA4244BE204(unk_0xF220C8EB1E04AAE8(unk_0x0C1D3C552325765B()), "TeamId");
	}
}

void func_485()
{
	Global_2442442.f_575 = 0;
	unk_0x696FBCAC7636A7DD();
}

void func_486(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_35)
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_35 = 1;
		}
	}
	else if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_35)
	{
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_35 = 0;
	}
}

int func_487(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_488()
{
	Global_2442442.f_717 = 0;
}

bool func_489()
{
	return Global_2442442.f_717;
}

void func_490()
{
	Global_2442442.f_721 = 0;
}

bool func_491()
{
	return Global_2442442.f_721;
}

void func_492()
{
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_94.f_32), 1);
}

int func_493(int iParam0)
{
	int iVar0;
	
	if (func_235())
	{
		return 1;
	}
	if (func_498())
	{
		return 1;
	}
	if (unk_0x509383441597090D(&(Global_1626500.f_84154)))
	{
		return 1;
	}
	if (func_497())
	{
		return 1;
	}
	func_496();
	unk_0x8978B074DD72DF22();
	iVar0 = unk_0x3B1556D715F2C85D();
	if (iParam0 == 0)
	{
		Global_1729823++;
		unk_0x5ED1FE95F4FC6A18(iVar0, "quit", Global_1729823);
		unk_0x5ED1FE95F4FC6A18(iVar0, "quitd", 1);
		unk_0x5ED1FE95F4FC6A18(iVar0, "ply", Global_1729823.f_2);
		unk_0x5ED1FE95F4FC6A18(iVar0, "lp", unk_0x39E54E7BC7452169());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1729848.f_1++;
		unk_0x5ED1FE95F4FC6A18(iVar0, "quit", Global_1729848.f_1);
		unk_0x5ED1FE95F4FC6A18(iVar0, "quitd", 1);
		unk_0x5ED1FE95F4FC6A18(iVar0, "ply", Global_1729848.f_4);
		unk_0x5ED1FE95F4FC6A18(iVar0, "lp", unk_0x39E54E7BC7452169());
	}
	if (iParam0 == 0)
	{
		if (unk_0x96A36AF9C091B433(&(Global_1626500.f_84154), 0f, func_495(iParam0)))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (unk_0x96A36AF9C091B433(&(Global_969359.f_42), 0f, func_495(iParam0)))
		{
		}
	}
	func_494();
	func_496();
	unk_0x44067BCEC68CECA1();
	return 1;
}

void func_494()
{
	Global_1729823 = 0;
	Global_1729823.f_2 = 0;
	Global_1729823.f_8 = 0;
	Global_1729823.f_3 = 0;
	Global_1729823.f_6 = 0;
}

char* func_495(int iParam0)
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

void func_496()
{
	if (unk_0x3B1556D715F2C85D() != 0)
	{
		unk_0x4177D875818DE411();
	}
}

int func_497()
{
	if (unk_0x9B324019DACBD409())
	{
		return 1;
	}
	else if (unk_0x1FECB4AE5F7268BD())
	{
		return 1;
	}
	else if (unk_0x175E5729A8CFC2B0())
	{
		return 1;
	}
	return 0;
}

int func_498()
{
	if (!func_499())
	{
		return 1;
	}
	return 0;
}

int func_499()
{
	if (func_500())
	{
		return 0;
	}
	if (unk_0x187CC7D5F9B002AA() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_500()
{
	return Global_2452243;
}

bool func_501()
{
	return Global_2442442.f_611;
}

void func_502(bool bParam0)
{
	if (bParam0)
	{
		Global_1312446 = 1;
	}
	else
	{
		Global_1312446 = 0;
	}
}

void func_503()
{
	Global_2443212.f_1.f_2824.f_13 = 0;
	Global_2443212.f_1.f_2824 = 0;
	Global_2443212.f_1.f_2824.f_1 = 0;
	Global_2443212.f_1.f_2824.f_2 = 0;
	Global_2443212.f_1.f_2824.f_3 = 0;
	Global_2443212.f_1.f_2824.f_4 = 0;
	Global_2443212.f_1.f_2824.f_5 = 0;
	Global_2443212.f_1.f_2824.f_6 = 0;
	Global_2443212.f_1.f_2824.f_7 = 0;
	Global_2443212.f_1.f_2824.f_8 = 0;
	Global_2443212.f_1.f_2824.f_9 = 0;
	Global_2443212.f_1.f_2824.f_10 = 0;
	Global_2443212.f_1.f_2824.f_11 = 0;
	Global_2443212.f_1.f_2824.f_12 = 0;
}

bool func_504(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 1;
}

void func_505()
{
	Global_2442442.f_594 = 1;
}

void func_506(int iParam0, struct<3> Param1, struct<6> Param4)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_522();
	func_521();
	func_520();
	func_519();
	func_518();
	func_624();
	Global_1729863.f_9 = iParam0;
	switch (Global_1729863.f_9)
	{
		case 1:
			Global_1729863 = 0;
			Global_1729863.f_22 = { 0f, 0f, 0f };
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_12 = 0;
			break;
		
		case 2:
			Global_1729863 = 1;
			Global_1729863.f_22 = { Param1 };
			Global_1729863.f_16 = { Param4 };
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_12 = 0;
			break;
		
		case 3:
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 0 || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 1)
			{
				func_517(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_94.f_28);
			}
			func_516();
			Global_1729863 = 1;
			Global_1729863.f_22 = { Param1 };
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_12 = 0;
			break;
		
		case 4:
			func_515();
			func_516();
			Global_1729863 = 1;
			if (func_620(unk_0x0C1D3C552325765B()) || func_621(unk_0x0C1D3C552325765B()))
			{
				func_514(1);
			}
			if ((func_513() || func_539()) && func_533())
			{
				Global_1729863.f_16 = { func_532() };
				Param4 = { Global_1729863.f_16 };
				Global_1729863.f_22 = { func_512() };
			}
			else if (func_513() || func_539())
			{
				if (func_511())
				{
					Global_1729863.f_22 = { func_510() };
				}
				else
				{
					Global_1729863.f_22 = { Param1 };
				}
			}
			else
			{
				Global_1729863.f_22 = { Param1 };
			}
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_12 = 1;
			break;
		
		case 5:
			func_515();
			func_509();
			func_516();
			if (func_620(unk_0x0C1D3C552325765B()) || func_621(unk_0x0C1D3C552325765B()))
			{
				func_514(1);
			}
			Global_1729863 = 1;
			Global_1729863.f_22 = { Param1 };
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_12 = 1;
			break;
		
		case 8:
			Global_1729863 = 0;
			Global_1729863.f_22 = { Param1 };
			Global_1729863.f_16 = { Param4 };
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_12 = 0;
			break;
		
		case 9:
			func_516();
			Global_1729863 = 1;
			Global_1729863.f_22 = { Param1 };
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_12 = 1;
			break;
		
		case 10:
			Global_1729863 = 0;
			Global_1729863.f_22 = { 0f, 0f, 0f };
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_12 = 0;
			break;
	}
	func_508();
	func_507();
	func_427(Global_1729863.f_9);
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_213 = { Global_1729863.f_22 };
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_216 = { Param4 };
}

void func_507()
{
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18), 23);
}

void func_508()
{
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18), 12);
}

void func_509()
{
	Global_1729863.f_4 = 1;
}

Vector3 func_510()
{
	return Global_2442442.f_28.f_491;
}

int func_511()
{
	if ((Global_2442442.f_28.f_491 != 0f || Global_2442442.f_28.f_491.f_1 != 0f) || Global_2442442.f_28.f_491.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_512()
{
	return Global_2442442.f_28.f_494;
}

var func_513()
{
	return Global_2442442.f_28.f_49;
}

void func_514(int iParam0)
{
	Global_2443212.f_5836 = iParam0;
}

void func_515()
{
	Global_1729863.f_3 = 1;
}

void func_516()
{
	Global_1729863.f_7 = 1;
}

void func_517(var uParam0)
{
	Global_1729863.f_10 = uParam0;
}

void func_518()
{
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_5 = 0;
}

void func_519()
{
	Global_1729863.f_10 = -1;
}

void func_520()
{
	Global_1729863.f_4 = 0;
}

void func_521()
{
	Global_1729863.f_3 = 0;
}

void func_522()
{
	Global_2443212.f_2842.f_2 = 1;
}

void func_523()
{
	Global_2442442.f_547.f_14 = 0;
}

bool func_524()
{
	return Global_2442442.f_547.f_14;
}

void func_525(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x912AD5A10E7633F0(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1))
		{
			if (unk_0x54F0AEFB11EA090A(iParam1))
			{
				if (!unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), unk_0xA43666ACD375E339(iParam1)))
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
				func_527();
			}
			else if (!unk_0x08BA6DD398CA197C(Global_2359301.f_66, 1))
			{
				if (unk_0x08BA6DD398CA197C(Global_2359301.f_66, 2))
				{
					iVar1 = 0;
					while (iVar1 < 7)
					{
						unk_0x08F3A8D800DC9D48(iVar1, Global_2359301.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x88B0F0DC270164B7(&(Global_2359301.f_66), 1);
			}
		}
		if (func_236(unk_0x0C1D3C552325765B(), 0))
		{
			unk_0x3754868039CBCDA6(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF2574D9F8B5159B8(iParam0, iParam1);
		}
		unk_0xF8A474BB9664C440(iParam0, iParam1);
		func_526(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_526(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xA75D835C91B77269(iVar0, iParam1, 1);
	}
}

void func_527()
{
	int iVar0;
	
	if (!unk_0x1FE227B71FE815EC())
	{
		if (!unk_0x08BA6DD398CA197C(Global_2359301.f_66, 2))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				Global_2359301.f_58[iVar0] = unk_0x819C3E64C255229B(iVar0);
				iVar0++;
			}
			unk_0x88B0F0DC270164B7(&(Global_2359301.f_66), 2);
			unk_0x88B0F0DC270164B7(&(Global_2359301.f_66), 0);
		}
	}
}

void func_528()
{
	Global_2442442.f_28.f_47 = 0;
}

void func_529()
{
	Global_2442442.f_28.f_41 = -1;
}

int func_530()
{
	return Global_2442442.f_28.f_41;
}

void func_531(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0x509383441597090D(&uParam0))
	{
		return;
	}
	if (!Global_2398818)
	{
		return;
	}
	if (!unk_0x28C1B9853548BD8E(&uParam0, &(Global_2398818.f_1)))
	{
		return;
	}
	Global_2398884 = 1;
}

struct<6> func_532()
{
	return Global_2442442.f_28.f_11;
}

bool func_533()
{
	return Global_2442442.f_28.f_51;
}

void func_534(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (unk_0x924533C269AA0190())
				{
					unk_0x6A053E57415F1C4F();
				}
			}
			break;
		
		case 1:
			unk_0xE696B2ED0A88B548(6, 0, 0);
			break;
		
		case 2:
			unk_0xE696B2ED0A88B548(12, 0, 0);
			break;
		
		case 3:
			unk_0xE696B2ED0A88B548(21, 0, 0);
			break;
		
		case 4:
			unk_0xE696B2ED0A88B548(0, 0, 0);
			break;
		
		default:
			break;
	}
}

int func_535()
{
	return Global_1729863.f_12;
}

void func_536(var uParam0, var uParam1)
{
	Global_1729863.f_13 = uParam0;
	Global_1729863.f_14 = uParam1;
}

void func_537(var uParam0)
{
	Global_1729863.f_12 = uParam0;
}

void func_538()
{
	Global_2442442.f_28.f_48 = 1;
}

bool func_539()
{
	return Global_2442442.f_28.f_47;
}

void func_540()
{
	if (unk_0x509383441597090D(&(Global_2391054.f_4.f_3)))
	{
		return;
	}
	if (!unk_0x509383441597090D(&(Global_2398116.f_3)))
	{
		if (unk_0x28C1B9853548BD8E(&(Global_2398116.f_3), &(Global_2391054.f_4.f_3)))
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

void func_541()
{
	Global_1729863.f_5 = 0;
	Global_1729863.f_11 = -1;
}

void func_542(var uParam0)
{
	Global_1729863.f_5 = 1;
	Global_1729863.f_11 = uParam0;
}

int func_543(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7907[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_544(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7743[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_545()
{
	if (unk_0x08BA6DD398CA197C(Global_1626500.f_18, 0))
	{
		return 1;
	}
	return ((((func_550(Global_1626500.f_83867) || func_549(Global_1626500.f_83867)) || func_548(Global_1626500.f_83867)) || func_547(Global_1626500.f_83867)) || func_546(Global_1626500.f_102390));
}

bool func_546(int iParam0)
{
	return iParam0 == 8;
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
		if (iParam0 == Global_262145.f_7986[iVar0])
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
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7929[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_549(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7810[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_550(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7751[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<13> func_551()
{
	struct<13> Var0;
	
	unk_0xAF68FD535DBD6441(&Var0, 13);
	return Var0;
}

void func_552(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	var uVar0;
	
	if (unk_0x509383441597090D(&uParam0))
	{
		return;
	}
	if (!Global_2391043)
	{
		return;
	}
	uVar0 = unk_0x3BB8D1C5FAAB25B3(&uParam0);
	Global_2391045 = uVar0;
	Global_2391046 = (unk_0xDF658EB6CA91DFBC() + 60000);
}

void func_553(struct<6> Param0)
{
	if (unk_0x509383441597090D(&Param0))
	{
		return;
	}
	Global_1311839 = 1;
	Global_1311839.f_1 = { Param0 };
}

bool func_554()
{
	return Global_2442442.f_10;
}

void func_555(int iParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		unk_0x2F0BC247C05B0D28(iParam0);
		unk_0xE563C5648E461B2E(0);
	}
}

void func_556()
{
	Global_978175 = -1;
}

void func_557()
{
	func_558(-1f);
}

void func_558(float fParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		unk_0x2F0BC247C05B0D28(fParam0);
		unk_0xE563C5648E461B2E(0);
	}
}

int func_559(int iParam0)
{
	int iVar0;
	
	if (Global_1748027[iParam0 /*8*/] == -1)
	{
		iVar0 = func_24(func_561(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_560(iParam0, 0);
			iVar0 = 0;
		}
		Global_1748027[iParam0 /*8*/] = iVar0;
	}
	return Global_1748027[iParam0 /*8*/];
}

void func_560(int iParam0, int iParam1)
{
	Global_1748027[iParam0 /*8*/] = iParam1;
	func_59(func_561(iParam0), iParam1, -1, 1, 0);
}

int func_561(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4443;
		
		default:
	}
	return 4443;
}

bool func_562()
{
	return Global_1626500.f_1 == 0;
}

void func_563(int iParam0, int iParam1)
{
	unk_0xA7BD7D3302D3F76C(iParam0);
	unk_0x5B1993E843D757DB(iParam0);
	if (unk_0x316E927686ECB233())
	{
		unk_0xB74536F6D4EBC285(iParam1);
	}
}

bool func_564()
{
	return Global_2442442.f_620;
}

void func_565()
{
	if (unk_0x08BA6DD398CA197C(Global_2359301, 24))
	{
		unk_0x09C86C0C5CA26B1E(&Global_2359301, 24);
	}
}

void func_566()
{
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18), 14);
}

bool func_567()
{
	return Global_2442442.f_708;
}

int func_568()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186;
}

void func_569(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573702 == 0)
		{
			Global_1573702 = 1;
		}
	}
	else if (Global_1573702 == 1)
	{
		Global_1573702 = 0;
	}
}

void func_570()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2443212.f_1.f_844[iVar0 /*57*/].f_44 = 0;
		Global_2443212.f_1.f_844[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_571()
{
	int iVar0;
	
	if (func_235())
	{
		return 1;
	}
	if (func_498())
	{
		return 1;
	}
	if (func_497())
	{
		return 1;
	}
	if (unk_0x509383441597090D(&(Global_1626500.f_84154)))
	{
		return 1;
	}
	func_496();
	unk_0x8978B074DD72DF22();
	iVar0 = unk_0x3B1556D715F2C85D();
	Global_1729823.f_2++;
	if (Global_1729823.f_2 < 1)
	{
		Global_1729823.f_2 = 1;
	}
	unk_0x5ED1FE95F4FC6A18(iVar0, "quit", Global_1729823);
	unk_0x5ED1FE95F4FC6A18(iVar0, "ply", Global_1729823.f_2);
	unk_0x5ED1FE95F4FC6A18(iVar0, "plyd", 1);
	unk_0x5ED1FE95F4FC6A18(iVar0, "lp", unk_0x39E54E7BC7452169());
	if (unk_0x96A36AF9C091B433(&(Global_1626500.f_84154), -1f, func_495(0)))
	{
	}
	func_494();
	func_496();
	unk_0x44067BCEC68CECA1();
	return 1;
}

void func_572()
{
	Global_2442442.f_720 = 1;
}

void func_573(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA4182C19FEEBD878();
	}
	else
	{
		unk_0x3B936EFC7615D59B();
	}
}

void func_574()
{
	Global_2442442.f_719 = 1;
}

int func_575(int iParam0)
{
	switch (Global_1312443)
	{
		case 0:
			if (!func_576(iParam0))
			{
				if (Global_1588660[iParam0 /*532*/] == 2 || Global_1588660[iParam0 /*532*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_576(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_186 != 0;
}

bool func_577()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 2);
}

void func_578()
{
	Global_2442442.f_719 = 0;
}

bool func_579()
{
	return Global_2442442.f_719;
}

void func_580(int iParam0)
{
	unk_0x32508B8E93AAF2BE("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	unk_0x32508B8E93AAF2BE("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	unk_0x32508B8E93AAF2BE("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_581()
{
	Global_1729863.f_12 = -1;
	Global_1729863.f_13 = -1;
	Global_1729863.f_14 = -1;
}

void func_582(int iParam0)
{
	Global_978176 = iParam0;
}

void func_583()
{
	Global_1613034 = 0;
	Global_1573833 = 4;
}

void func_584(bool bParam0)
{
	if (bParam0)
	{
		Global_1573846 = 1;
	}
	else
	{
		Global_1573846 = 0;
	}
}

void func_585()
{
	Global_1613035 = -1;
	Global_1613038 = 0;
}

void func_586()
{
	Global_2482149.f_273 = 0;
	func_589(3782, 0, -1, 1);
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (func_587())
		{
			unk_0xA27FDFE5C0EBB875(unk_0xA0081090911D13E5(), 5, 0, 0, 0);
		}
	}
}

bool func_587()
{
	return func_588(unk_0xA0081090911D13E5());
}

int func_588(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x0604A0F4F09283DF(uParam0, 5);
	iVar1 = -1;
	switch (unk_0x705BC1BB91F530B5(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x1CB19F5BE62B1507(uParam0, 5, iVar0, unk_0xE2E31A57FC3F8410(uParam0, 5));
			if (unk_0xE2ADF4B06E90B1E2(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x1CB19F5BE62B1507(uParam0, 5, iVar0, unk_0xE2E31A57FC3F8410(uParam0, 5));
			if (unk_0xE2ADF4B06E90B1E2(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_589(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		uVar13 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_590()
{
	Global_2442442.f_720 = 0;
}

bool func_591()
{
	return Global_2442442.f_720;
}

void func_592(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_594(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7894)
	{
		unk_0xC667A7C5CE24C569(15);
		Global_17290.f_7894 = 0;
	}
	unk_0xDA81B130FA38800A(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x89B76C6241C0104D(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0xB14EE32074164477("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0xB14EE32074164477("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_593(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_593(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x1E3F61C2C1E29520(*uParam0))
		{
			unk_0xA12A0D38735CCBF2(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_594(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0xA86CA03D9749EEB3() && unk_0x391BEA92ECF1B445())
		{
			iParam2 = unk_0x434A417780753DD9();
		}
	}
	StringCopy(&cVar0, unk_0x367152330DB70D69(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x3BB8D1C5FAAB25B3(&cVar0);
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

void func_595()
{
}

void func_596(int iParam0)
{
	struct<49> Var0;
	int iVar49;
	var uVar50;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_48 = -1;
	if (Global_2442442.f_547.f_9 == 0)
	{
		Global_1729888.f_1569 = 0;
	}
	iVar49 = 0;
	while (iVar49 <= 31)
	{
		uVar50 = Global_1729888[iVar49 /*49*/].f_3;
		Global_1729888[iVar49 /*49*/] = { Var0 };
		if (func_636())
		{
			Global_1729888[iVar49 /*49*/].f_3 = uVar50;
		}
		Global_1729888[iVar49 /*49*/].f_1 = func_125();
		Global_1729888[iVar49 /*49*/] = -1;
		Global_1729888[iVar49 /*49*/].f_2 = -1;
		iVar49++;
	}
	if ((!func_636() && !func_603()) && iParam0)
	{
		Global_1729888.f_1571 = 0;
		Global_1729888.f_1572 = 0;
	}
}

void func_597(bool bParam0)
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

void func_598(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x4184E6D274FCBFF1(unk_0xF220C8EB1E04AAE8(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x96FB4818617F93B9(unk_0xF220C8EB1E04AAE8(iParam0), "MPBitset");
	}
	unk_0x09C86C0C5CA26B1E(&iVar0, iParam1);
	unk_0xB6E7BA5C3025C547(unk_0xF220C8EB1E04AAE8(iParam0), "MPBitset", iVar0);
}

bool func_599()
{
	return Global_1729863.f_3;
}

bool func_600()
{
	return Global_2450148.f_7;
}

bool func_601()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_28.f_3, 8);
}

void func_602()
{
	Global_2442442.f_28.f_49 = 0;
}

bool func_603()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_28.f_3, 0);
}

void func_604()
{
	unk_0x09C86C0C5CA26B1E(&(Global_969359.f_8), 8);
}

void func_605(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_13.f_1), 0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_13.f_1), 0);
	}
}

void func_606(int iParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (((Global_2443212.f_3361 != 0 && Global_2443212.f_3361.f_1 != 0) && Global_2443212.f_3361.f_2 != 0) && Global_2443212.f_3361.f_3 != 0)
		{
			unk_0x57D1203C927445F3(Global_2443212.f_3361, Global_2443212.f_3361.f_1, Global_2443212.f_3361.f_2, Global_2443212.f_3361.f_3, iParam0);
		}
	}
	func_607();
}

void func_607()
{
	Global_2443212.f_3361 = 0;
	Global_2443212.f_3361.f_1 = 0;
	Global_2443212.f_3361.f_2 = 0;
	Global_2443212.f_3361.f_3 = 0;
}

void func_608()
{
	Global_2443212.f_1.f_2800 = 1;
}

bool func_609()
{
	return unk_0x08BA6DD398CA197C(Global_2443212.f_1.f_2808, 12);
}

void func_610(int iParam0)
{
	if (!func_603() || iParam0)
	{
		Global_1574364 = 0;
		Global_1574363 = 0;
	}
}

void func_611(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;
	
	Global_2442442.f_28 = -1;
	Global_2442442.f_28.f_55 = -1;
	Global_2442442.f_28.f_1 = -1;
	Global_2442442.f_28.f_4 = 0;
	Global_2442442.f_28.f_2 = 0;
	Global_2442442.f_28.f_3 = 0;
	Global_2442442.f_28.f_40 = -1;
	Global_2442442.f_28.f_5 = { Var0 };
	Global_2442442.f_28.f_53 = 0;
	Global_2442442.f_28.f_129 = 0;
	Global_2442442.f_28.f_344 = 0;
	Global_2442442.f_28.f_54 = 0;
	Global_2442442.f_28.f_130 = 0;
	Global_2442442.f_28.f_345 = 0;
	Global_2442442.f_28.f_518 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2442442.f_28.f_476[iVar6] = 0;
		iVar6++;
	}
	Global_2442442.f_28.f_52 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2442442.f_28.f_56[iVar6] = 0;
		iVar6++;
	}
	Global_2442442.f_28.f_128 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2442442.f_28.f_131[iVar6] = 0;
		iVar6++;
	}
	Global_2442442.f_28.f_343 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2442442.f_28.f_346[iVar6] = 0;
		Global_2442442.f_28.f_361[iVar6] = 0;
		Global_2442442.f_28.f_391[iVar6 /*6*/] = { Var0 };
		Global_2442442.f_28.f_376[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2442442.f_28.f_42[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2442442.f_28.f_497 = 0;
			Global_2442442.f_28.f_498 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2442442.f_28.f_505[iVar6] = -1;
				Global_2442442.f_28.f_511[iVar6] = -1;
				iVar6++;
			}
			Global_2442442.f_28.f_47 = 0;
			Global_2442442.f_28.f_11 = { Var0 };
			Global_2442442.f_28.f_51 = 0;
			Global_2442442.f_28.f_491 = { 0f, 0f, 0f };
			Global_2442442.f_28.f_494 = { 0f, 0f, 0f };
			Global_2442442.f_28.f_50 = 0;
			Global_2442442.f_28.f_49 = 0;
		}
	}
}

void func_612()
{
	Global_2450148.f_8 = 0;
	Global_2450148.f_7 = 0;
}

bool func_613()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148;
}

bool func_614()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 5;
}

void func_615()
{
	Global_1739043.f_1774 = 0;
}

void func_616()
{
	Global_2442442.f_713 = 0;
}

bool func_617()
{
	return Global_2442442.f_713;
}

void func_618()
{
	Global_14611 = 0;
	func_619();
}

void func_619()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
	}
}

bool func_620(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

bool func_621(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

void func_622()
{
	Global_2442442.f_578 = 0;
}

void func_623()
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_4 = -1;
	iVar13 = unk_0x0C1D3C552325765B();
	if (iVar13 != -1)
	{
		Global_1613455[iVar13 /*35*/] = { Var0 };
	}
}

void func_624()
{
	Global_1729863.f_7 = 0;
}

void func_625(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2442442.f_547.f_3 = { Var0 };
	Global_2442442.f_547 = 0;
	Global_2442442.f_547.f_1 = 0;
	Global_2442442.f_547.f_12 = 0;
	if (bParam0)
	{
		Global_2442442.f_547.f_2 = 0;
		Global_2442442.f_547.f_13 = 0;
		Global_2442442.f_547.f_14 = 0;
		Global_2394782 = 0;
		if (bParam1)
		{
			Global_2442442.f_547.f_9 = 0;
			Global_2442442.f_547.f_10 = 0;
			Global_2442442.f_547.f_11 = 0;
			Global_2442442.f_547.f_16 = -1;
		}
		if (iParam2 && !unk_0x1504F110F2576375())
		{
			Global_1729888.f_1571 = 0;
			Global_1729888.f_1572 = 0;
		}
		if (unk_0x0C1D3C552325765B() != -1)
		{
			Global_1613455[unk_0x0C1D3C552325765B() /*35*/].f_2 = 0;
			Global_1613455[unk_0x0C1D3C552325765B() /*35*/] = 0;
		}
	}
}

void func_626()
{
	Global_2442442.f_547.f_12 = 0;
}

bool func_627()
{
	return Global_2442442.f_547.f_9 > 0;
}

var func_628()
{
	return Global_2442442.f_547.f_12;
}

void func_629()
{
	unk_0x09C86C0C5CA26B1E(&(Global_1613455[unk_0x0C1D3C552325765B() /*35*/].f_28), 3);
}

void func_630()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1574376[iVar0] = 0;
		iVar0++;
	}
}

void func_631()
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (iVar0 != -1)
	{
		Global_1613455[iVar0 /*35*/].f_5 = 0;
	}
}

void func_632()
{
	Global_2452210 = 0;
	Global_2452211 = 0;
	Global_2452212 = 0;
	Global_2452213 = 0;
}

void func_633()
{
	Global_2442442.f_28.f_48 = 0;
}

void func_634()
{
	Global_2442442.f_28.f_50 = 0;
}

void func_635()
{
	if (unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) != Global_1352434)
	{
		unk_0x08F3A8D800DC9D48(unk_0xCCC8FE2C71D0E93E(), Global_1352434);
	}
}

bool func_636()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_547.f_1, 0);
}

void func_637(int iParam0)
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		unk_0x1F0A81F0E690AE0E(iParam0);
	}
}

void func_638()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!unk_0x509383441597090D(&(Global_1573498[iVar0 /*6*/])))
		{
			StringCopy(&(Global_1573498[iVar0 /*6*/]), "", 24);
		}
		iVar0++;
	}
}

void func_639(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1A9CF4D5D4E2F266();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!unk_0x08BA6DD398CA197C(Global_1588660[iVar0 /*532*/].f_193, 0))
			{
				unk_0x88B0F0DC270164B7(&(Global_1588660[iVar0 /*532*/].f_193), 0);
			}
		}
		else if (unk_0x08BA6DD398CA197C(Global_1588660[iVar0 /*532*/].f_193, 0))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar0 /*532*/].f_193), 0);
		}
	}
}

void func_640()
{
	unk_0x09C86C0C5CA26B1E(&(Global_2442442.f_2), 31);
}

void func_641()
{
	Global_2432628.f_1384.f_803 = func_125();
}

void func_642()
{
	Global_2442442.f_761 = 0;
}

void func_643()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_646(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1747376.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_645();
	func_644();
	Global_1747376 = 0;
}

void func_644()
{
	Global_1747376.f_4 = 0;
}

void func_645()
{
	Global_1747376.f_3 = 0;
}

void func_646(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1747376.f_5[iParam0 /*53*/] = { Var0 };
}

void func_647()
{
	unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18), 20);
}

void func_648(int iParam0, bool bParam1)
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

void func_649()
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_743), 3);
}

void func_650(bool bParam0, int iParam1)
{
	func_205();
	if (bParam0)
	{
		func_295(1);
		unk_0x94724F7C938EBE34(1);
	}
	unk_0x715FC4B638D9A515();
	func_200();
	unk_0xA1EA93263E8ED276(0);
	func_234(0, 1, 1, 0);
	func_653();
	func_188(12, 0, -1);
	func_189(1);
	unk_0x00EC874B4D5FCE61(0, -1);
	unk_0x627D428B266FEDCA(1);
	unk_0x943A052E20E9C2CE(1);
	func_652();
	unk_0x5A6B86444D23FCA8(1);
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0xA012E3A84A2B2F1A())
		{
			unk_0x3E2462666E08F4C9(0, 0);
		}
	}
	func_241(0);
	if (((func_109() == 0 && func_651() == 0) && iParam1) && !func_238(unk_0x0C1D3C552325765B()))
	{
		func_328(unk_0x0C1D3C552325765B(), 1, 0);
	}
	Global_2432628.f_3196 = 0;
}

bool func_651()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 7);
}

void func_652()
{
	Global_17151.f_5 = 0;
}

void func_653()
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

void func_654(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312442)
	{
		if (!func_688())
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				Global_1573912[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_686(unk_0x0C1D3C552325765B(), bParam0);
	iVar2 = func_684(iVar1, bParam0);
	if (!func_683(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			Global_1573912[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		Global_1573912[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 213)
	{
		iVar3 = func_682(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_680(iVar4))
			{
				func_671(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_665(func_666(59, 0, 0), 0);
	func_663(func_666(135, 0, 0), 1);
	func_662(func_666(22, 0, 0), func_666(73, 0, 0));
	if (func_688())
	{
		if (func_450(77, -1))
		{
			func_661(1);
			func_660(1);
		}
	}
	if (func_659() || func_658())
	{
		func_30(77, 1, -1, 1);
		if (unk_0xA86CA03D9749EEB3())
		{
			func_655(28, 1, 0);
			func_655(29, 1, 0);
			func_655(30, 1, 0);
			func_655(31, 1, 0);
			func_655(32, 1, 0);
			func_655(33, 1, 0);
			func_655(34, 1, 0);
			func_655(35, 1, 0);
			func_655(36, 1, 0);
			func_655(37, 1, 0);
			func_655(38, 1, 0);
		}
	}
	if (func_666(21, 0, 0))
	{
		unk_0x2671CB93EA1081C3(0);
	}
	Global_978177 = 0;
}

void func_655(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 0, 0))
		{
			if (iParam2 && Global_91458.f_18[iParam0])
			{
				if (func_657(iParam0) == 3 && !func_22(iParam0))
				{
					func_656(iParam0);
					func_60(iParam0, 0, 0);
					func_58(iParam0, 1, 0);
					func_362(iParam0);
				}
				else
				{
					func_60(iParam0, 1, 0);
					func_362(iParam0);
				}
			}
			else
			{
				func_60(iParam0, 0, 0);
				func_58(iParam0, 1, 0);
				func_362(iParam0);
			}
		}
		else
		{
			func_58(iParam0, 1, 0);
			func_362(iParam0);
		}
	}
	else if (func_23(iParam0, 0, 0))
	{
		func_58(iParam0, 0, 0);
		func_58(iParam0, 1, 0);
		func_362(iParam0);
	}
}

void func_656(int iParam0)
{
	if (Global_91458.f_18[iParam0])
	{
		func_60(iParam0, 10, 1);
		func_60(iParam0, 19, 1);
	}
}

int func_657(int iParam0)
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
	}
	return 6;
}

bool func_658()
{
	return Global_1315217;
}

bool func_659()
{
	return Global_1315219;
}

void func_660(bool bParam0)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	func_655(28, bParam0, 0);
	func_655(30, bParam0, 0);
	func_655(31, bParam0, 0);
	func_655(33, bParam0, 0);
	func_655(34, bParam0, 0);
	func_655(38, bParam0, 0);
}

void func_661(bool bParam0)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	func_655(29, bParam0, 0);
	func_655(32, bParam0, 0);
	func_655(36, bParam0, 0);
	func_655(35, bParam0, 0);
	func_655(37, bParam0, 0);
}

void func_662(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_655(0, bParam0, 1);
	func_655(1, bParam0, 1);
	func_655(2, bParam0, 1);
	func_655(3, bParam0, 1);
	func_655(4, bParam0, 1);
	func_655(5, bParam0, 1);
	func_655(6, bParam0, 1);
	func_655(7, bParam0, bVar0);
	func_655(8, bParam0, 1);
	func_655(9, bParam0, 1);
	func_655(10, bParam0, 1);
	func_655(11, bParam0, 1);
	func_655(12, bParam0, bVar0);
	func_655(13, bParam0, 1);
	func_655(21, bParam0, 1);
	func_655(14, bParam0, 1);
	func_655(15, bParam0, 1);
	func_655(16, bParam0, 1);
	func_655(17, bParam0, 1);
	func_655(18, bParam0, 1);
	func_655(19, bParam0, 1);
	func_655(20, bParam0, 1);
	func_655(22, bParam0, 1);
	func_655(23, bParam0, 1);
	func_655(24, bParam0, 1);
	func_655(25, bParam0, 1);
	func_655(26, bParam0, 1);
	func_655(27, bParam0, 1);
	func_363(1, !bParam1);
	if (!bVar0)
	{
		func_656(12);
	}
}

void func_663(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	uVar0 = func_664(0);
	if (Global_262145.f_63 == 1 && func_666(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_655(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(44))
		{
			func_656(44);
		}
	}
	if (bParam0)
	{
		if (func_559(0) > 1)
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_1642), 10);
		}
	}
}

int func_664(bool bParam0)
{
	var uVar0;
	
	if (Global_1312442)
	{
		return 1;
	}
	if (func_659())
	{
		return 1;
	}
	if (func_658())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2482149.f_1633, 26))
		{
			uVar0 = func_24(1184, -1, 0);
			if (!unk_0x08BA6DD398CA197C(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_450(122, -1);
}

void func_665(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	uVar0 = func_664(0);
	func_655(39, bParam0, 0);
	func_655(40, bParam0, 0);
	func_655(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_655(43, bParam0, 0);
		func_655(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(39))
		{
			func_656(39);
		}
		if (!func_22(40))
		{
			func_656(40);
		}
		if (!func_22(41))
		{
			func_656(41);
		}
		if (!func_22(42))
		{
			func_656(42);
		}
		if (!func_22(43))
		{
			func_656(43);
		}
	}
}

bool func_666(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6500 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_668(unk_0x0C1D3C552325765B(), 85))
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
		if (Global_262145.f_4874 == 1)
		{
			return 1;
		}
	}
	if (func_659() || func_658())
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
			if (func_667())
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
	return unk_0x08BA6DD398CA197C(Global_1573912[iVar1], iVar0);
}

int func_667()
{
	var uVar0;
	
	if (Global_1312442)
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_1638, 23))
	{
		return 1;
	}
	if (func_659())
	{
		return 1;
	}
	if (func_658())
	{
		return 1;
	}
	uVar0 = Global_1352331[func_25(-1)];
	if (unk_0x08BA6DD398CA197C(uVar0, 7))
	{
		unk_0x88B0F0DC270164B7(&(Global_2482149.f_1638), 23);
		return 1;
	}
	return 0;
}

bool func_668(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_688())
	{
		return 0;
	}
	if (func_670())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_669(iParam1);
	iVar1 = uVar0;
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_424, iVar1);
}

int func_669(int iParam0)
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

bool func_670()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_141, 3);
}

void func_671(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_679(-1))
			{
				if (!func_688())
				{
					return;
				}
			}
			if (!func_679(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_678() && !func_677())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_676())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_679(-1))
				{
					if (!func_672())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0x88B0F0DC270164B7(&(Global_1573912[iVar1]), iVar0);
	}
}

int func_672()
{
	var uVar0;
	
	if (func_675(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	uVar0 = Global_1352331[func_25(-1)];
	if (unk_0x08BA6DD398CA197C(uVar0, 2))
	{
		func_673(1);
		return 1;
	}
	return 0;
}

void func_673(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 25))
		{
			func_674(unk_0x0C1D3C552325765B(), 12);
			unk_0x88B0F0DC270164B7(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 25);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 25))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137), 25);
	}
}

void func_674(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_669(iParam1);
	iVar1 = uVar0;
	unk_0x88B0F0DC270164B7(&(Global_1588660[iParam0 /*532*/].f_424), iVar1);
}

bool func_675(int iParam0)
{
	if (func_659())
	{
		return 1;
	}
	if (func_658())
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 25);
}

int func_676()
{
	var uVar0;
	
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_1638, 6))
	{
		return 1;
	}
	uVar0 = Global_1352331[func_25(-1)];
	if (unk_0x08BA6DD398CA197C(uVar0, 0))
	{
		if (!unk_0x08BA6DD398CA197C(Global_2482149.f_1638, 6))
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_1638), 6);
		}
		return 1;
	}
	if (func_659())
	{
		return 1;
	}
	if (func_658())
	{
		return 1;
	}
	return 0;
}

bool func_677()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_141, 7);
}

int func_678()
{
	if (Global_1312442)
	{
		return 1;
	}
	if (func_659())
	{
		return 1;
	}
	if (func_658())
	{
		return 1;
	}
	return func_450(121, -1);
}

bool func_679(int iParam0)
{
	return func_450(123, iParam0);
}

int func_680(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_659())
	{
		return 1;
	}
	if (func_658())
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
			uVar0 = func_24(func_681(iParam0), -1, 0);
			if (unk_0x08BA6DD398CA197C(uVar0, iVar1))
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

int func_681(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1193;
		
		case 1:
			return 1194;
		
		case 2:
			return 1195;
		
		case 3:
			return 1196;
		
		case 4:
			return 1197;
		
		case 5:
			return 1199;
		
		case 6:
			return 3783;
		
		default:
	}
	return 1193;
}

int func_682(int iParam0)
{
	if (func_659())
	{
		return 1;
	}
	if (func_658())
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
			if (!func_679(-1))
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

int func_683(int iParam0)
{
	if (Global_1312442)
	{
		return 1;
	}
	if (func_659())
	{
		return 1;
	}
	if (func_658())
	{
		return 1;
	}
	return func_450(119, iParam0);
}

int func_684(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_685(iParam0, 0);
}

int func_685(int iParam0, int iParam1)
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
		if (Global_278713[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_278713[iVar3] < iParam0)
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

int func_686(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_687(iParam0);
}

int func_687(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_25(-1)];
			}
			else if (func_55(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_25(-1)];
	}
	return 0;
}

int func_688()
{
	if (Global_1312442)
	{
		return 1;
	}
	if (func_659())
	{
		return 1;
	}
	if (func_658())
	{
		return 1;
	}
	return func_450(120, -1);
}

int func_689()
{
	bool bVar0;
	var uVar1;
	
	func_694(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_433())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_693())
	{
		return 1;
	}
	if (func_692(157))
	{
		if (!func_691())
		{
			return 1;
		}
	}
	if (func_692(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_690() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_690()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_690()
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

bool func_691()
{
	return Global_2442442.f_576;
}

int func_692(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_693()
{
	return Global_2451777;
}

void func_694(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_695(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_695(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_696(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_696(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_697()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_698(struct<17> Param0, var uParam17, var uParam18, var uParam19)
{
	var uVar0;
	
	unk_0x786FDD765D4157F4(2, 0, Param0.f_16);
	func_703(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_564, 7);
	unk_0xCCA45C9E00D2BC01(&Local_736, 11);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/] = 16;
	if (bLocal_755)
	{
		if (!unk_0x2C22E7D1C80A53EF() && !unk_0x44F90FBF2C1E8021())
		{
			unk_0xF215E3B07B7990BC(800);
		}
		if (!unk_0x8188FDE7090D3AF6())
		{
			if (!unk_0x7437A5536711AE6C())
			{
				uVar0 = unk_0x0C1D3C552325765B() + 32;
				unk_0xBE612A05D7409D87(1, uVar0);
				func_192(1);
			}
		}
	}
	unk_0xF2797029E839595C(1);
	unk_0x23DFD22869618226(1);
	if (!func_702())
	{
		func_373(0);
	}
	unk_0x401559486BCA4D9B(0);
	func_648(iLocal_89, 1);
	func_375(1);
	if (!bLocal_755)
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			func_328(unk_0x0C1D3C552325765B(), 1, 0);
		}
	}
	Global_2482149.f_1633 = 0;
	unk_0xC4B3EC24D2EFC927(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, 0, 0);
	func_701();
	func_699();
	Local_736[unk_0x848AF823A8EA3C62() /*5*/] = 0;
}

void func_699()
{
	unk_0xA7BD7D3302D3F76C(1);
	func_700(1, -1);
	unk_0x5B1993E843D757DB(1);
	if (func_450(133, -1))
	{
		func_30(133, 0, -1, 1);
	}
	Global_2442442.f_620 = 1;
}

void func_700(int iParam0, int iParam1)
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
			unk_0x170331538F4BC9C4(0, iParam1);
			break;
		
		default:
			uVar1 = func_389(iParam1);
			iVar0 = unk_0x680A5FBB1F20F775(uVar1);
			if (unk_0x08BA6DD398CA197C(iVar0, iParam0))
			{
				unk_0x09C86C0C5CA26B1E(&iVar0, iParam0);
				unk_0x170331538F4BC9C4(iVar0, iParam1);
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

void func_701()
{
	unk_0x95C55738CAE00A20(&uLocal_749);
	unk_0x8474D2383AC8AF53(0, 0, 0);
	unk_0x94B0F86672C59B38(0, 17.0693f, -1115.935f, 28.7968f, 0);
	unk_0x70B222EEA46C37FA(uLocal_749);
}

int func_702()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 0;
		}
		if (unk_0x7DEEE0ED76EAAD72())
		{
			return 1;
		}
		if (func_433())
		{
			return 0;
		}
		if (func_692(155))
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

int func_703(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_704();
			}
			else
			{
				return 0;
			}
		}
		if (!func_354())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_704();
					}
					else
					{
						return 0;
					}
				}
				if (func_433())
				{
					if (!bParam2)
					{
						func_704();
					}
					else
					{
						return 0;
					}
				}
				if (func_692(155))
				{
					if (!bParam2)
					{
						func_704();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_704();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_704();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_704();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_704()
{
	unk_0x78C587487CD40B92();
}

