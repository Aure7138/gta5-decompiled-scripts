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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
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
	char[] cLocal_49[8] = 0;
	char[] cLocal_50[8] = 0;
	char[] cLocal_51[8] = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<2> Local_55[4];
	struct<10> Local_64[8];
	struct<5> Local_145[4];
	struct<3> Local_166 = { 0, 0, 0 } ;
	struct<2> Local_169[9];
	struct<6> Local_188 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_194 = 0;
	var uLocal_195 = 1092616192;
	var uLocal_196 = 1101004800;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 3;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
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
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	struct<3> Local_411 = { 0, 0, 0 } ;
	float fLocal_414 = 0f;
	int iLocal_415 = 0;
	struct<3> Local_416 = { 0, 0, 0 } ;
	float fLocal_419 = 0f;
	int iLocal_420 = 0;
	struct<3> Local_421 = { 0, 0, 0 } ;
	float fLocal_424 = 0f;
	int iLocal_425 = 0;
	struct<3> Local_426 = { 0, 0, 0 } ;
	float fLocal_429 = 0f;
	struct<3> Local_430 = { 0, 0, 0 } ;
	struct<3> Local_433 = { 0, 0, 0 } ;
	struct<3> Local_436 = { 0, 0, 0 } ;
	int iLocal_439 = 0;
	struct<3> Local_440 = { 0, 0, 0 } ;
	float fLocal_443 = 0f;
	var uLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	bool bLocal_455 = 0;
	int iLocal_456 = 0;
	bool bLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	var uLocal_460 = 30;
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
	var uLocal_568 = 0;
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
	var uLocal_611 = 10;
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
	var uLocal_662 = 10;
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
	var uLocal_733 = 20;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 20;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 30;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 5;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 7;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 5;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 3;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 16;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 10;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 5;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 5;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 8;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 12;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 12;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 12;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 9;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 9;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 12;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 12;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 12;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 9;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 9;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 12;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 12;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 12;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 9;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 9;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 12;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 12;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 12;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 9;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 9;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 12;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 12;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 12;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 9;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 9;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 12;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 12;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 12;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 9;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 9;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 12;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 12;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 12;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 9;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 9;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 12;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 12;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 12;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 9;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 9;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	int iLocal_2102 = 0;
	int iLocal_2103 = 0;
	int iLocal_2104 = 0;
	int iLocal_2105 = 0;
	int iLocal_2106 = 0;
	int iLocal_2107 = 0;
	int iLocal_2108 = 0;
	float fLocal_2109 = 0f;
	int iLocal_2110 = 0;
	int iLocal_2111 = 0;
	int iLocal_2112 = 0;
	var uLocal_2113[2] = { 0, 0 };
	int iLocal_2116 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_46 = unk_0x5354F72E0D8D7E53();
	uLocal_47 = unk_0x526A9A6B1B39C5F0();
	cLocal_49 = "REACTION@MALE_STAND@BIG_VARIATIONS@IDLE_B";
	cLocal_50 = "cellphone@str";
	cLocal_51 = "missheistdocksprep1ig_1";
	Local_52 = { -343.3761f, -2633.535f, 5.00103f };
	iLocal_396 = -1;
	Local_411 = { 327.263f, -2968.799f, -3f };
	fLocal_414 = 358.5f;
	iLocal_415 = joaat("prop_dock_crane_02_ld");
	Local_416 = { 305.053f, -2971.395f, 4.99f };
	fLocal_419 = 90f;
	iLocal_420 = joaat("prop_dock_crane_02_cab");
	Local_421 = { 0f, 0f, 19.907f };
	fLocal_424 = 0f;
	iLocal_425 = joaat("prop_dock_crane_02_hook");
	Local_426 = { -0.005f, -22.139f, -15f };
	fLocal_429 = 0f;
	Local_433 = { -0.005f, -22.139f, 32.825f };
	Local_436 = { 0f, 0f, 0.68f };
	Local_440 = { Vector(-1.499111f, 1.993344f, -9.107174f) - Vector(-2.452997f, 0.364908f, -9.052903f) };
	fLocal_2109 = 3f;
	if (unk_0x7D9C4B359376D38A(3))
	{
		unk_0x8810DC630928B398("DHP1_FAIL");
		func_326();
		func_324();
		if (unk_0x6C97EEC6339FB45C())
		{
			unk_0x45BC176150D0E5AF(0, 0, 0, 0);
		}
		func_321();
	}
	unk_0xBC03901A15107317(1);
	func_316();
	while (true)
	{
		unk_0x48D75120C879E65E("M_ThePortOfLSHeistPrep1", 0);
		func_315(&uLocal_460);
		func_313(&uLocal_1445);
		func_312();
		func_285();
		if (!iLocal_2107)
		{
			func_269();
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_2103)
	{
		case 0:
			func_220();
			break;
		
		case 1:
			func_187();
			break;
		
		case 2:
			func_8();
			break;
		
		case 3:
			func_2();
			break;
	}
}

void func_2()
{
	switch (iLocal_2104)
	{
		case 0:
			if (unk_0x3E9CABD07B829173())
			{
				unk_0x59C3AC31C7544A28(800);
			}
			unk_0xBB9A3C553EECB180(180f);
			iLocal_2104++;
			break;
		
		case 1:
			if (unk_0x9F7B586A14398C40())
			{
				func_3();
			}
			break;
	}
}

void func_3()
{
	func_4(0, 0);
	func_321();
}

void func_4(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55905)
	{
		Global_55905 = iParam1;
	}
	if (bParam0)
	{
		if ((func_7(0) && Global_71102.f_1 == 1) && func_6(Global_71102))
		{
		}
		else
		{
			Global_55903 = 1;
		}
	}
	if (Global_104555.f_9055 || func_7(0))
	{
		iVar0 = func_5();
		iVar1 = Global_83730[iVar0 /*5*/];
		uVar2 = Global_71125.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_104555.f_9055)
			{
			}
			return;
		}
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 4);
		unk_0x872F1C1F8587CCC7(&Global_71104, 1);
		Global_71120 = uVar2;
		Global_71121 = unk_0x53C562FD2B9E3AB0();
	}
}

int func_5()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_6(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_8()
{
	switch (iLocal_2104)
	{
		case 0:
			if (unk_0x3E9CABD07B829173())
			{
				unk_0x59C3AC31C7544A28(800);
			}
			func_102(2, "STAGE 2: Drop off sub", 1, 0, 0, 1);
			if (func_101(Local_55[0 /*2*/]))
			{
				unk_0xD38F266C132F2897(Local_55[0 /*2*/], 0, 0, 0, 1, 0, 0, 0, 0);
			}
			unk_0xE8BB5655518854A8(Local_55[0 /*2*/], 0);
			unk_0xE8BB5655518854A8(Local_55[1 /*2*/], 0);
			unk_0xFB4AD069EFD0869A(1);
			unk_0x14668C8AF6336210(288.0967f, -3133.249f, 0f, 301.0605f, -2969.622f, 11.47017f);
			unk_0xAC62CE49044A35B9(Local_55[0 /*2*/], 0);
			unk_0xCF5EB2CB1B30F02C(Local_55[0 /*2*/], 0);
			unk_0x1267474D9A69CA37(0f, 10f, 4);
			iLocal_453 = 0;
			iLocal_454 = 0;
			iLocal_2104++;
			break;
		
		case 1:
			if (func_101(unk_0xFC1458A37D98B502()) && func_101(Local_55[0 /*2*/]))
			{
				if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(Local_55[0 /*2*/], 1), 1) > 400f && !unk_0x841ED61760A7D07B(Local_55[0 /*2*/]))
				{
					func_87(9);
				}
			}
			if (func_86(unk_0xFC1458A37D98B502(), 324.7653f, -2974.495f, -1.5f, 1) > 150f)
			{
				func_85(&(Local_169[7 /*2*/]), 0);
				func_85(&(Local_169[8 /*2*/]), 0);
				func_85(&(Local_169[6 /*2*/]), 0);
				func_83(&uLocal_460, joaat("prop_dock_crane_02_ld"));
				func_83(&uLocal_460, joaat("prop_dock_crane_02_cab"));
				func_83(&uLocal_460, joaat("prop_dock_crane_02_hook"));
			}
			if (!iLocal_453 && func_86(unk_0xFC1458A37D98B502(), Local_52, 1) < 200f)
			{
				func_82(&uLocal_460, joaat("bison"));
				iLocal_454 = 1;
				iLocal_453 = 1;
			}
			else if (iLocal_453)
			{
				if (func_86(unk_0xFC1458A37D98B502(), Local_52, 1) > 220f)
				{
					func_83(&uLocal_460, joaat("bison"));
					iLocal_454 = 0;
					iLocal_453 = 0;
					if (unk_0x6ADD12BF4D6D2587(Local_55[3 /*2*/]))
					{
						unk_0xC91FE17AD7353B70(&(Local_55[3 /*2*/]));
					}
				}
				else if (func_86(unk_0xFC1458A37D98B502(), Local_52, 1) < 200f)
				{
					if (iLocal_454 && unk_0x9A0B2ED5055D3F0B(joaat("bison")))
					{
						if (!unk_0x6ADD12BF4D6D2587(Local_55[3 /*2*/]))
						{
							Local_55[3 /*2*/] = unk_0xEA60F3B426BB095B(joaat("bison"), -317.0741f, -2594.14f, 5.0004f, 316.2352f, 1, 1, 0);
							unk_0xCF5EB2CB1B30F02C(Local_55[3 /*2*/], 0);
						}
						iLocal_454 = 0;
					}
				}
			}
			if (unk_0x5D67DB68EF61B3E1(Local_55[1 /*2*/], unk_0xC733212BF9066BDF()) || ((unk_0x0F3033474C49912D(Local_55[2 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, 1, 0) && unk_0x0F3033474C49912D(Local_64[3 /*10*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, 1, 0)) && unk_0x0F3033474C49912D(Local_55[0 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, 1, 0)))
			{
				if (func_101(Local_55[1 /*2*/]))
				{
					unk_0x647769D85836ED6C(Local_55[1 /*2*/], 0.5f);
				}
				if (unk_0xA6DECE14FC9A8C51(Local_188.f_5))
				{
					unk_0x103AA766DC1F5AAF(Local_188.f_5, 1);
				}
				if (unk_0xA6DECE14FC9A8C51(uLocal_378))
				{
					unk_0xE30CF11C0EE14316(&uLocal_378);
				}
				if (iLocal_390)
				{
					unk_0x84CDD933AFA470D2();
					iLocal_390 = 0;
				}
				if (func_42(&Local_188, Local_52, 0.1f, 0.1f, 2f, 1, Local_64[3 /*10*/], 0, 0, unk_0xC733212BF9066BDF(), "dkp1_tk2", "DKP1_ABFLD", "", "", "", "DKP1_TRUCK", "DKP1_TRUCKBK", 0, 1, 1, -1) || (unk_0xA6DECE14FC9A8C51(Local_188.f_5) && unk_0x0F3033474C49912D(unk_0xC733212BF9066BDF(), -340.1324f, -2630.243f, 5.001461f, -346.5508f, -2636.808f, 12.68896f, 14.9375f, 0, 1, 0)))
				{
					unk_0x3CDDC4760DBA4651();
					func_40(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 7f, -1, 1056964608, 0, 1, 0);
					unk_0xCF5EB2CB1B30F02C(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0);
					unk_0xCF5EB2CB1B30F02C(Local_55[0 /*2*/], 0);
					unk_0x4BEFCD5DAE410A90(Local_55[0 /*2*/], 10);
					func_36(&Local_188, 1, 0);
					unk_0xFB4AD069EFD0869A(0);
					unk_0x14668C8AF6336210(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_452 = unk_0x53C562FD2B9E3AB0();
					iLocal_392 = 0;
					iLocal_2104++;
				}
			}
			else if (!unk_0x5D67DB68EF61B3E1(Local_55[1 /*2*/], unk_0xC733212BF9066BDF()))
			{
				func_35(&Local_188);
				if (!unk_0xA6DECE14FC9A8C51(uLocal_378))
				{
					uLocal_378 = func_32(Local_55[0 /*2*/], 0, 0);
				}
				if (!iLocal_390 && func_30())
				{
					func_29("DKP1_ATTACH", 7500, 1);
					iLocal_390 = 1;
				}
			}
			break;
		
		case 2:
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (func_12(&uLocal_213, "DHP1AUD", "DHP1_END", 7, 0, 0, 0))
				{
					unk_0xE9B3D12A64CC7C1A(Local_64[3 /*10*/], 1);
					unk_0x60C06BFD037BB7CF(Local_64[3 /*10*/], unk_0xFC1458A37D98B502(), -1, 2048, 2);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
					unk_0x6931076730A4AC5D(&uLocal_379);
					unk_0x16416C5B54FDBCBB(0, 0, 0);
					unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, 3f, 1f, 1073741824, 0);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), -1);
					unk_0x1B16DD5C115FE009(uLocal_379);
					unk_0xAB30B1CF01A198C1(Local_64[3 /*10*/], uLocal_379);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
					iLocal_2104++;
				}
			}
			else if ((!iLocal_387 && func_30()) && (unk_0x53C562FD2B9E3AB0() - iLocal_452) > 3000)
			{
				func_29("dkp1_EXIT", 7500, 1);
				unk_0x1267474D9A69CA37(10f, 5f, 4);
				iLocal_387 = 1;
			}
			break;
		
		case 3:
			if (!func_11())
			{
				if (func_101(Local_55[3 /*2*/]))
				{
					unk_0xB8E08BD5B184DF4E(Local_64[3 /*10*/]);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
					unk_0x6931076730A4AC5D(&uLocal_379);
					unk_0x6F8C8278B7C06889(0, Local_55[3 /*2*/], -1, -1, 2f, 1, 0);
					unk_0x2931C350CED41AD3(0, Local_55[3 /*2*/], -189.8985f, -2622.707f, 5.0001f, 14, 30f, 786468, 5f, 1f, 1);
					unk_0xD2C269DBF147B406(0, Local_55[3 /*2*/], unk_0xFC1458A37D98B502(), 8, 30f, 786468, 1000f, 10f, 1);
					unk_0x1B16DD5C115FE009(uLocal_379);
					unk_0xAB30B1CF01A198C1(Local_64[3 /*10*/], uLocal_379);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
				}
				else
				{
					unk_0xB8E08BD5B184DF4E(Local_64[3 /*10*/]);
					unk_0xFC5999E8B820470E(Local_64[3 /*10*/], Local_52, 300f, -1, 0, 0);
				}
				iLocal_452 = unk_0x53C562FD2B9E3AB0();
				iLocal_2104++;
			}
			break;
		
		case 4:
			if (func_10(Local_64[3 /*10*/], unk_0xFC1458A37D98B502(), 1) > 70f || (unk_0x53C562FD2B9E3AB0() - iLocal_452) > 20000)
			{
				func_9(&(Local_64[3 /*10*/]), 1, 0, 1);
				func_3();
			}
			break;
	}
}

void func_9(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(*uParam0))
		{
			unk_0xCFF0CD14B439821D(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x2CEA76A7F93740C6(*uParam0);
			}
			unk_0xE9B3D12A64CC7C1A(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x771A86309E0CA47B(*uParam0, 0);
			}
		}
		unk_0x486F346ADFE56674(uParam0);
	}
}

float func_10(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		Var0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		Var3 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB3328BA8976B416C(iParam1, 0) };
	}
	return unk_0xBE3C4023003180FC(Var0, Var3, iParam2);
}

int func_11()
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

bool func_12(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_28(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_13(sParam2, iParam3, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xB31CEFB00C146C91(0);
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
					func_27();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_26(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_25();
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
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam2)
			{
				func_18();
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
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_17())
				{
					return 0;
				}
				if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
					if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
				}
			}
			if (func_16())
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
				if (unk_0xC80D31E4B587871C(Global_2323, 9))
				{
					return 0;
				}
			}
			func_15();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_14();
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
		func_27();
	}
	return 0;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB31CEFB00C146C91(0);
	Global_15756 = 1;
}

void func_15()
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
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 16);
}

int func_16()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
	{
		iVar0 = 0;
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x689303135DD1F2F5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1))
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

void func_18()
{
	if (func_24(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
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
		Global_14453 = func_19();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

int func_19()
{
	func_20();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_23(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_22(unk_0xFC1458A37D98B502());
			if (func_21(iVar0) && (!func_24(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_21(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_24(int iParam0)
{
	return Global_35861 == iParam0;
}

void func_25()
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

bool func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

void func_27()
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if ((unk_0x0DBDCC9C5537E157() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xB31CEFB00C146C91(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(1);
		Global_15756 = 6;
		return;
	}
}

void func_28(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_29(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

int func_30()
{
	if (unk_0x23F2F89E3D1CB7C4())
	{
		return 0;
	}
	if (unk_0x248C9865A96D3EA4())
	{
		if (func_11() && !func_31())
		{
			return 0;
		}
	}
	return 1;
}

int func_31()
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0, bool bParam1, bool bParam2)
{
	return func_33(iParam0, !bParam1, bParam2);
}

int func_33(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(uVar0, func_34(unk_0x3A711520F83BAE98(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDB6E56C09E5CF0AA(uVar0, bParam1);
		}
		else
		{
			unk_0x0C71C8E276E3EC54(uVar0, 2);
		}
	}
	else if (unk_0x52C56492660097C7(iParam0))
	{
		unk_0xA5D25D3F884FF516(uVar0, func_34(unk_0x3A711520F83BAE98(), 0.7f, 0.7f));
		unk_0xDB6E56C09E5CF0AA(uVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(uVar0, func_34(unk_0x3A711520F83BAE98(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_34(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_35(var uParam0)
{
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_5))
	{
		unk_0xE30CF11C0EE14316(&(uParam0->f_5));
	}
}

void func_36(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xC80D31E4B587871C(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_35(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
		}
		func_39(iVar0, uParam0);
		func_38(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), iVar0);
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xA6DECE14FC9A8C51(*uParam0))
	{
		unk_0xE30CF11C0EE14316(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
		{
			unk_0x4ACB9D202CFF8727(uParam0->f_17[iVar0], 1);
			unk_0xEB2D96E7D3F4906C(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 32, 1);
				unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()) && uParam0->f_17[iVar0] != unk_0xFC1458A37D98B502())
				{
					unk_0x88235B448509228B(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xC80D31E4B587871C(uParam0->f_13, 29))
			{
				unk_0xD0A6028E561242DA(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 1);
		unk_0xEB2D96E7D3F4906C(unk_0xFC1458A37D98B502(), 1);
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (bParam2)
		{
			unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_37()
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

void func_38(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 19);
			break;
	}
}

void func_39(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_13), 16);
			break;
	}
}

int func_40(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x4FB260623DD93924(0, 71, 1);
	unk_0x4FB260623DD93924(0, 72, 1);
	unk_0x4FB260623DD93924(0, 76, 1);
	unk_0x4FB260623DD93924(0, 73, 1);
	unk_0x4FB260623DD93924(0, 59, 1);
	unk_0x4FB260623DD93924(0, 60, 1);
	if (bParam5)
	{
		unk_0x4FB260623DD93924(0, 75, 1);
	}
	unk_0x4FB260623DD93924(0, 80, 1);
	if (!bParam6)
	{
		unk_0x4FB260623DD93924(0, 69, 1);
		unk_0x4FB260623DD93924(0, 70, 1);
		unk_0x4FB260623DD93924(0, 68, 1);
	}
	unk_0x4FB260623DD93924(0, 74, 1);
	unk_0x4FB260623DD93924(0, 86, 1);
	unk_0x4FB260623DD93924(0, 81, 1);
	unk_0x4FB260623DD93924(0, 82, 1);
	unk_0x4FB260623DD93924(0, 138, 1);
	unk_0x4FB260623DD93924(0, 136, 1);
	unk_0x4FB260623DD93924(0, 114, 1);
	unk_0x4FB260623DD93924(0, 107, 1);
	unk_0x4FB260623DD93924(0, 110, 1);
	unk_0x4FB260623DD93924(0, 89, 1);
	unk_0x4FB260623DD93924(0, 89, 1);
	unk_0x4FB260623DD93924(0, 87, 1);
	unk_0x4FB260623DD93924(0, 88, 1);
	unk_0x4FB260623DD93924(0, 113, 1);
	unk_0x4FB260623DD93924(0, 115, 1);
	unk_0x4FB260623DD93924(0, 116, 1);
	unk_0x4FB260623DD93924(0, 117, 1);
	unk_0x4FB260623DD93924(0, 118, 1);
	unk_0x4FB260623DD93924(0, 119, 1);
	unk_0x4FB260623DD93924(0, 131, 1);
	unk_0x4FB260623DD93924(0, 132, 1);
	unk_0x4FB260623DD93924(0, 123, 1);
	unk_0x4FB260623DD93924(0, 126, 1);
	unk_0x4FB260623DD93924(0, 129, 1);
	unk_0x4FB260623DD93924(0, 130, 1);
	unk_0x4FB260623DD93924(0, 133, 1);
	unk_0x4FB260623DD93924(0, 134, 1);
	unk_0x39FCF612EAC7971C();
	func_41(iParam0);
	if ((unk_0x53C562FD2B9E3AB0() - Global_29) > 500)
	{
		unk_0xA1AA40A93CA0F40D(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x53C562FD2B9E3AB0();
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xE97272C977DEADD3(unk_0x90D5DFB054818BA7(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_41(int iParam0)
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xE746585056D841A7(iParam0))
		{
			if (unk_0xB8B664A5307FB39B(iParam0))
			{
				unk_0x463DA544A329DE36(iParam0, 0);
			}
		}
	}
}

int func_42(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)
{
	return func_43(uParam0, Param1, Param4, func_81(), func_81(), iParam7, 5, iParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

int func_43(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_80(uParam0);
	func_79(uParam0);
	func_78();
	if (func_62(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_61(sParam20);
		func_61(sParam21);
		func_61(sParam22);
		func_61(sParam23);
		if (unk_0x9F7B586A14398C40())
		{
			bVar1 = false;
			if (unk_0xB8DE76287EDC4957(iParam18, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam18, 0))
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 3);
					if (!unk_0xC80D31E4B587871C(uParam0->f_13, 9))
					{
						unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 4);
					}
					if (unk_0xC80D31E4B587871C(uParam0->f_13, 23))
					{
						unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 23);
					}
					unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_59(uParam0, iParam29))
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 3);
					if (!unk_0xC80D31E4B587871C(uParam0->f_13, 9))
					{
						unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 4);
					}
					unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_61(sParam24);
				func_61(sParam27);
				func_61("MORE_SEATS");
				if (bParam26 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					if (unk_0xA6DECE14FC9A8C51(uParam0->f_5))
					{
						unk_0xE30CF11C0EE14316(&(uParam0->f_5));
						func_61(sParam19);
					}
					if (unk_0xA6DECE14FC9A8C51(*uParam0))
					{
						unk_0xE30CF11C0EE14316(uParam0);
					}
					if ((!func_57(uParam0, 1) && !func_56(uParam0)) && !unk_0xC80D31E4B587871C(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_55(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[0]))
							{
								func_53(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 0);
						unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xC80D31E4B587871C(uParam0->f_13, 0))
					{
						func_61("LOSE_WANTED");
						unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 0);
						unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 1);
					}
					if (unk_0xC80D31E4B587871C(uParam0->f_13, 1))
					{
						if (!func_57(uParam0, 1))
						{
							if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[0]))
							{
								func_53(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0xA6DECE14FC9A8C51(uParam0->f_5))
					{
						if (unk_0xA6DECE14FC9A8C51(*uParam0))
						{
							unk_0xE30CF11C0EE14316(uParam0);
						}
						uParam0->f_5 = func_52(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0x4B4040A0EC7DBA81(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_51(uParam0->f_5, uParam0);
						}
					}
					else if (!func_50(Var3, unk_0x67247AA13B7486A3(uParam0->f_5), 0.1f, 0))
					{
						unk_0x645FF8D8B599FD84(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_51(uParam0->f_5, uParam0);
						}
					}
					if (!func_57(uParam0, 2))
					{
						if (!unk_0xC80D31E4B587871C(uParam0->f_13, 2))
						{
							func_55(uParam0, sParam19, 0);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xC80D31E4B587871C(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
									if (!unk_0xA8D0477084E86A92(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0xA8D0477084E86A92(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar2], func_37()) || !func_48(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_45(uParam0))
							{
								func_61(sParam19);
								func_61(sParam24);
								func_61(sParam20);
								func_61(sParam21);
								func_61(sParam22);
								func_61(sParam23);
								func_61("LOSE_WANTED");
								func_61("MORE_SEATS");
								func_61(sParam27);
								func_36(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x6ADD12BF4D6D2587(iParam18))
			{
				if ((bParam26 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) && (!unk_0xC80D31E4B587871C(uParam0->f_13, 9) && !unk_0xC80D31E4B587871C(uParam0->f_13, 22)))
				{
					func_61(sParam24);
					func_61(sParam27);
					if (unk_0xA6DECE14FC9A8C51(uParam0->f_5) || unk_0xA6DECE14FC9A8C51(*uParam0))
					{
						unk_0xE30CF11C0EE14316(&(uParam0->f_5));
						unk_0xE30CF11C0EE14316(uParam0);
						func_61(sParam19);
					}
					if ((!func_57(uParam0, 1) && !func_56(uParam0)) && !unk_0xC80D31E4B587871C(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_55(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[0]))
							{
								func_53(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 0);
						unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xC80D31E4B587871C(uParam0->f_13, 0))
					{
						func_61("LOSE_WANTED");
						unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 0);
						unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 1);
					}
					if (unk_0xC80D31E4B587871C(uParam0->f_13, 1))
					{
						if (!func_57(uParam0, 1))
						{
							if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[0]))
							{
								func_53(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xB8DE76287EDC4957(iParam18, 0))
					{
						if (!unk_0xA6DECE14FC9A8C51(*uParam0))
						{
							if (unk_0xA6DECE14FC9A8C51(uParam0->f_5))
							{
								unk_0xE30CF11C0EE14316(&(uParam0->f_5));
								func_61(sParam19);
							}
							*uParam0 = func_44(iParam18, 0, 0);
							unk_0x3ED68ABD7299EAA3(*uParam0, 2);
							if (!unk_0xC80D31E4B587871C(uParam0->f_13, 4))
							{
								func_51(*uParam0, uParam0);
							}
						}
						if (!func_57(uParam0, 2))
						{
							if (!unk_0xC80D31E4B587871C(uParam0->f_13, 3))
							{
								func_55(uParam0, sParam24, 0);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 3);
								unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 4);
							}
							else if (unk_0xC80D31E4B587871C(uParam0->f_13, 9))
							{
								if (!unk_0x8C1C362CA8299475(sParam27))
								{
									if (!unk_0xC80D31E4B587871C(uParam0->f_13, 4))
									{
										func_55(uParam0, sParam27, 0);
										unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xC80D31E4B587871C(uParam0->f_13, 4))
								{
									func_55(uParam0, sParam24, 0);
									unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 4);
								}
								if (!unk_0xC80D31E4B587871C(uParam0->f_13, 23))
								{
									if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[0]))
									{
										func_53(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xA6DECE14FC9A8C51(uParam0->f_5))
				{
					unk_0xE30CF11C0EE14316(&(uParam0->f_5));
					func_61(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_57(uParam0, 2))
						{
							if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
							{
								if (!unk_0xC80D31E4B587871C(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x63A6486593EC7EC3(0, iVar8);
									if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar9]))
									{
										func_53(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_55(uParam0, "MORE_SEATS", 0);
									unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xC80D31E4B587871C(uParam0->f_13, 3))
							{
								func_55(uParam0, sParam24, 0);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 3);
								unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 4);
							}
							else if (!unk_0xC80D31E4B587871C(uParam0->f_13, 4))
							{
								if (unk_0xC80D31E4B587871C(uParam0->f_13, 9))
								{
									func_55(uParam0, sParam27, 0);
									unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_57(uParam0, 2))
					{
						if (!unk_0xC80D31E4B587871C(uParam0->f_13, 3))
						{
							func_55(uParam0, sParam24, 0);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 3);
							unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 4);
						}
						else if (unk_0xC80D31E4B587871C(uParam0->f_13, 9))
						{
							if (!unk_0x8C1C362CA8299475(sParam27))
							{
								if (!unk_0xC80D31E4B587871C(uParam0->f_13, 4))
								{
									func_55(uParam0, sParam27, 0);
									unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xC80D31E4B587871C(uParam0->f_13, 4))
							{
								func_55(uParam0, sParam24, 0);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xC80D31E4B587871C(uParam0->f_13, 0))
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 0);
		}
		func_61(sParam19);
		func_61(sParam24);
		func_61(sParam27);
		func_61(sParam24);
		func_61("LOSE_WANTED");
		if (unk_0xA6DECE14FC9A8C51(uParam0->f_5))
		{
			unk_0xE30CF11C0EE14316(&(uParam0->f_5));
		}
		if (unk_0xA6DECE14FC9A8C51(*uParam0))
		{
			unk_0xE30CF11C0EE14316(uParam0);
		}
	}
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 11);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 12);
	return 0;
}

int func_44(int iParam0, bool bParam1, bool bParam2)
{
	return func_33(iParam0, !bParam1, bParam2);
}

int func_45(var uParam0)
{
	if (unk_0xC80D31E4B587871C(uParam0->f_13, 12))
	{
		if (func_47(unk_0xFC1458A37D98B502()))
		{
			if (func_46(1, 0, 1) || unk_0xC80D31E4B587871C(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_46(1, 0, 1) || unk_0xC80D31E4B587871C(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x586321DCB7FEB6F8())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
		{
			return 0;
		}
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (bParam0)
		{
			if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != unk_0xFC1458A37D98B502())
				{
					return 0;
				}
			}
		}
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0x56BEE1F269FB3626(iVar0) < 0.95f || unk_0x56BEE1F269FB3626(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!unk_0x217D75C7503660EC(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		fVar0 = unk_0x90D5DFB054818BA7(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) && iParam1)
		{
			if (func_49(unk_0xFC1458A37D98B502(), iParam0))
			{
				unk_0xB2442651179CF706(func_37(), 50f);
				return 1;
			}
		}
		else if (unk_0x4759A34EB65CCA39(iParam0, func_37()))
		{
			unk_0xB2442651179CF706(func_37(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x1ED974E122CB5C47(iParam0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iParam1))
				{
					if (unk_0xAAA8D20859E2D36D(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_50(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xE97272C977DEADD3((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE97272C977DEADD3((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE97272C977DEADD3((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE97272C977DEADD3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE97272C977DEADD3((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_51(var uParam0, var uParam1)
{
	if (unk_0xA6DECE14FC9A8C51(uParam0))
	{
		if (unk_0xA6DECE14FC9A8C51(uParam1->f_6))
		{
			unk_0xAAAC88CC20771601(uParam1->f_6, 0);
		}
		unk_0xF906FCF8A11CBA9A(0);
		unk_0x981B8A90686AD23E();
		uParam1->f_6 = uParam0;
		unk_0xAAAC88CC20771601(uParam0, 1);
	}
}

var func_52(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x6F4378873333A0C2(Param0);
	unk_0xA5D25D3F884FF516(uVar0, func_34(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(uVar0, iParam3);
	return uVar0;
}

void func_53(var uParam0, char* sParam1, int iParam2)
{
	unk_0x74D45BB07BD51F8B(uParam0, sParam1, func_54(iParam2), 1);
}

int func_54(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_55(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x8C1C362CA8299475(sParam1))
		{
			if (!unk_0x74C475EB8E73D398(sParam1, ""))
			{
				func_29(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x53C562FD2B9E3AB0();
}

int func_56(var uParam0)
{
	if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_16))
	{
		if (unk_0x33B1D0D0C92D4F18(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_57(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x248C9865A96D3EA4())
	{
		if (unk_0x23F2F89E3D1CB7C4())
		{
			return 1;
		}
		if (func_58(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x248C9865A96D3EA4())
	{
		if (func_11() && !func_31())
		{
			return 1;
		}
	}
	return 0;
}

int func_58(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x53C562FD2B9E3AB0();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_59(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_60(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x95EC8AE7E4F33F6E(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x0CAAAC6B57530706(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x0CAAAC6B57530706(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_61(char* sParam0)
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		unk_0x166954C5648772B6(sParam0);
	}
}

int func_62(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
		{
			if (!unk_0xC80D31E4B587871C(uParam0->f_13, 29) && !unk_0xC80D31E4B587871C(uParam0->f_13, 28))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					unk_0xD0A6028E561242DA(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xC80D31E4B587871C(uParam0->f_13, 29) && unk_0xC80D31E4B587871C(uParam0->f_13, 28))
		{
			if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
			{
				unk_0xD0A6028E561242DA(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x6ADD12BF4D6D2587(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 50f, 0, iVar25);
			if (unk_0xB8DE76287EDC4957(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0xB8DE76287EDC4957(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0) || !bParam17)
					{
						if (func_60(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
								{
									unk_0x5C57ECBE59C08573(uParam0->f_17[iVar0], 1f);
									if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()))
									{
										unk_0x88235B448509228B(uParam0->f_17[iVar0]);
									}
									if (unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470) == 7 && !func_77(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0]))
										{
											unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], 1);
											unk_0x6F8C8278B7C06889(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					if (!unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
					}
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()))
					{
						if (func_75(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_37());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_13, 26))
	{
		if ((!func_74(uParam0) && unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502())) && !unk_0x6ADD12BF4D6D2587(iParam10))
		{
			iVar13 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(iVar13, 0))
			{
				if (!unk_0xC80D31E4B587871C(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_57(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x63A6486593EC7EC3(0, iVar26);
						if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar27]))
						{
							func_53(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_55(uParam0, "MORE_SEATS", 0);
						unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 13);
			func_61("MORE_SEATS");
		}
		if (!unk_0x6ADD12BF4D6D2587(iParam10))
		{
			if ((!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[0]) || !unk_0x3AB6A1A9084FB0A4(uParam0->f_17[1])) || !unk_0x3AB6A1A9084FB0A4(uParam0->f_17[2]))
			{
				if (!unk_0xC80D31E4B587871C(uParam0->f_13, 31))
				{
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) && !func_57(uParam0, 2))
					{
						iVar13 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (func_73(iVar13, uParam0))
						{
							func_55(uParam0, "CMN_VEHSUIT", 0);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 31);
					func_61("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xB8DE76287EDC4957(iParam10, 0))
		{
			if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iParam10))
			{
				if (unk_0xE8C126B7ADBB9D63(0, 75))
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xC80D31E4B587871C(uParam0->f_13, 21))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()))
					{
						unk_0xFF96DC2FA12B7785(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0xFF96DC2FA12B7785(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
					{
						iVar13 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (unk_0xB8DE76287EDC4957(iVar13, 0))
						{
							if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()))
							{
								if (!func_74(uParam0) && unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
								{
									if (!func_72(uParam0->f_17[iVar0]))
									{
										unk_0x88235B448509228B(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x191BE1BC8F26F3C1(iVar13, 0))
						{
							if (unk_0xAAA8D20859E2D36D(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0x0BA31FF7931F3DD3(iVar13) && !unk_0x5E0BEAAD15B888F3(iVar13))
								{
									Var28 = { unk_0xB3328BA8976B416C(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()))
					{
						if (unk_0x1ED974E122CB5C47(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0xDFD115BB10FE46A9(uParam0->f_17[iVar0], 0);
							if (!unk_0x191BE1BC8F26F3C1(iVar13, 0))
							{
								if (unk_0xB8DE76287EDC4957(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iVar13))
										{
											if (unk_0x90D5DFB054818BA7(iVar13) > 5f)
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
									{
										iVar31 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
									}
									if (unk_0xB8DE76287EDC4957(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x90D5DFB054818BA7(iVar13) > 5f)
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x4F8A35D7CBC17327(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()))
					{
						iVar32 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
						if (unk_0x6ADD12BF4D6D2587(iVar32))
						{
							if (func_60(iVar32, uParam0, 0))
							{
								if (func_71(iVar0, uParam0) || !unk_0xC80D31E4B587871C(uParam0->f_13, 27))
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], iVar0);
									func_38(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_71(iVar0, uParam0))
							{
								if (unk_0x82FF3DFBC3965CC0(iVar32) == joaat("sentinel2"))
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], 2);
								}
								func_70(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()) && !func_69(uParam0->f_17[iVar0], iParam10)) && !func_68(uParam0->f_17[iVar0], iParam10))
					{
						if (func_75(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()))
							{
								if (((!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0xE4A3B62790C25748(uParam0->f_17[iVar0])) && !unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
									}
									unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_37());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x53C562FD2B9E3AB0();
								uParam0->f_1[iVar0] = func_44(uParam0->f_17[iVar0], 0, 0);
								unk_0x3ED68ABD7299EAA3(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_51(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
					{
						if (((func_48(uParam0->f_17[iVar0], 1) || func_69(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xB8DE76287EDC4957(iParam10, 0) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0)))
						{
							if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
							{
								unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
								func_61(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_51(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xB8DE76287EDC4957(iParam10, 0))
					{
						if (!unk_0xAAA8D20859E2D36D(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xC80D31E4B587871C(uParam0->f_13, 11)) && !((bParam17 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0)))
							{
								if (unk_0x1ED974E122CB5C47(uParam0->f_17[iVar0]))
								{
									if (!unk_0xA8D0477084E86A92(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_48(uParam0->f_17[iVar0], 1))
										{
											if (func_47(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x16416C5B54FDBCBB(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()))
									{
										if ((((!unk_0xE4A3B62790C25748(uParam0->f_17[iVar0]) && !unk_0x9F887157983E8EFC(uParam0->f_17[iVar0])) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0])) && !unk_0x6B4C37F2EEC636CC(iParam10))
										{
											unk_0x88235B448509228B(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_77(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xE4A3B62790C25748(uParam0->f_17[iVar0]) && !unk_0xE4A3B62790C25748(unk_0xFC1458A37D98B502())) && !func_67(uParam0->f_17[iVar0], 2f)) && !unk_0x9F887157983E8EFC(uParam0->f_17[iVar0])) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0x6B4C37F2EEC636CC(iParam10))
										{
											unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], 1);
											if (unk_0xC80D31E4B587871C(uParam0->f_13, 10))
											{
												unk_0x5C57ECBE59C08573(uParam0->f_17[iVar0], 1f);
											}
											unk_0x6F8C8278B7C06889(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x07224EEE13A1B6AE(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_44(uParam0->f_17[iVar0], 0, 0);
										unk_0x3ED68ABD7299EAA3(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()))
							{
								if (func_75(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
										}
										unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], 0);
										unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_37());
									}
								}
							}
						}
						else if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iParam10))
						{
							if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()))
							{
								if (!unk_0xC80D31E4B587871C(uParam0->f_13, 21))
								{
									unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_37());
								}
							}
							else if (unk_0xC80D31E4B587871C(uParam0->f_13, 21))
							{
								unk_0x88235B448509228B(uParam0->f_17[iVar0]);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_37()) && !unk_0x6B4C37F2EEC636CC(iParam10))
						{
							unk_0x88235B448509228B(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
					func_61(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_57(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
						{
							if (func_72(uParam0->f_17[iVar0]) || unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], unk_0xFC1458A37D98B502(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
					{
						if (!unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], unk_0xFC1458A37D98B502(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_72(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x53C562FD2B9E3AB0();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xC80D31E4B587871C(uParam0->f_13, 5))
							{
								func_55(uParam0, sParam7, 0);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_66(iVar0, uParam0))
									{
										if (!unk_0x8C1C362CA8299475(uVar19[iVar0]))
										{
											if (!unk_0x74C475EB8E73D398(uVar19[iVar0], ""))
											{
												func_64(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_63(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_66(iVar0, uParam0))
										{
											func_55(uParam0, uVar15[iVar0], 0);
											func_63(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
					func_61(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_61("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_63(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 16);
			break;
	}
}

void func_64(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x8C1C362CA8299475(sParam1))
		{
			if (!unk_0x74C475EB8E73D398(sParam1, ""))
			{
				func_65(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x53C562FD2B9E3AB0();
}

void func_65(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0xA6D2B267C377D7B2(uParam1);
	unk_0x4D0B431E65A53BFC(iParam2, 1);
}

int func_66(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 14);
		
		case 1:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 15);
		
		case 2:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_67(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0x90D5DFB054818BA7(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x4759A34EB65CCA39(iParam0, func_37()))
		{
			iVar0 = unk_0x0191A52225EFA665(iParam0);
			if (unk_0xB8DE76287EDC4957(iParam1, 0))
			{
				if (unk_0x21B6FFFD04C9FF3A(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			if (unk_0xB8DE76287EDC4957(iParam1, 0))
			{
				if (unk_0xAAA8D20859E2D36D(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_70(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x872F1C1F8587CCC7(&(uParam1->f_13), 19);
			break;
	}
}

int func_71(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 17);
		
		case 1:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 18);
		
		case 2:
			return unk_0xC80D31E4B587871C(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				iVar1 = unk_0xC6757F745366DB47(iParam0);
				if (unk_0xB8DE76287EDC4957(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x21B6FFFD04C9FF3A(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_73(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("bus") || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x317536BCEA8FA6B0(iParam0, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0x317536BCEA8FA6B0(iParam0, 1, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0x317536BCEA8FA6B0(iParam0, 2, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74(var uParam0)
{
	int iVar0;
	
	if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_60(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_75(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam1))
	{
		if (unk_0x1ED974E122CB5C47(iParam1))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam1, 0);
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iVar0))
					{
						if (func_74(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (func_60(iVar0, uParam0, 0))
					{
						if (unk_0xB8DE76287EDC4957(iVar0, 0))
						{
							if (func_76(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	float fVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		fVar0 = unk_0x90D5DFB054818BA7(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam1, 0))
		{
			iVar0 = unk_0xC6757F745366DB47(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_78()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		iVar0 = unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502());
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			iVar1 = unk_0x317536BCEA8FA6B0(iVar0, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar1))
			{
				if (iVar1 != unk_0xFC1458A37D98B502())
				{
					if (unk_0x9761C10D57B68069(iVar1))
					{
						if (!unk_0xABF985A1AF8C953F(iVar1, unk_0xFC1458A37D98B502()))
						{
							unk_0x60C06BFD037BB7CF(iVar1, unk_0xFC1458A37D98B502(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_79(var uParam0)
{
	int iVar0;
	
	if (!unk_0xC80D31E4B587871C(uParam0->f_13, 25))
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
				{
					unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 32, 0);
					unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 305, 1);
					unk_0xAE01EF4BC84AFE7C(uParam0->f_17[iVar0], 268, 1);
					unk_0x07224EEE13A1B6AE(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 25);
	}
}

void func_80(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_17[iVar0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
			{
				if (unk_0x1ED974E122CB5C47(uParam0->f_17[iVar0]))
				{
					unk_0x4ACB9D202CFF8727(uParam0->f_17[iVar0], 0);
					unk_0xEB2D96E7D3F4906C(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
			{
				unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 0);
				unk_0xEB2D96E7D3F4906C(unk_0xFC1458A37D98B502(), 0);
			}
		}
	}
}

Vector3 func_81()
{
	struct<3> Var0;
	
	return Var0;
}

int func_82(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x6FF834D85E2DD4C6(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x53C562FD2B9E3AB0();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_83(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					unk_0x14776E43F90DD454(iParam1);
					func_84(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_982 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_84(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_85(var uParam0, bool bParam1)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (unk_0x6049C20F5D5C185B(*uParam0))
		{
			unk_0x6B7C10B19928914F(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x3A703774620FDB42(uParam0);
		}
		else
		{
			unk_0x3B426B73C7C1DBB0(*uParam0);
		}
	}
}

float func_86(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		Var0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	return unk_0xBE3C4023003180FC(Var0, Param1, iParam4);
}

void func_87(int iParam0)
{
	char* sVar0;
	
	unk_0x8810DC630928B398("DHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 1:
			sVar0 = "dkp1_fdes1";
			break;
		
		case 4:
			sVar0 = "dkp1_fstuck1";
			break;
		
		case 5:
			sVar0 = "DKP1_FLOST1";
			break;
		
		case 2:
			sVar0 = "dkp1_fdes2";
			break;
		
		case 3:
			sVar0 = "dkp1_fstuck2";
			break;
		
		case 7:
			sVar0 = "dkp1_ffloyd";
			break;
		
		case 8:
			sVar0 = "DKP1_FFCAR";
			break;
		
		case 9:
			sVar0 = "dkp1_FABD";
			break;
		
		case 10:
			sVar0 = "DKP1_FABS";
			break;
		
		case 11:
			sVar0 = "DKP1_FABF";
			break;
		
		case 6:
			sVar0 = "cmn_tdied";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	func_92(sVar0);
	while (!func_91())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_90())
	{
		func_326();
	}
	else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1298.369f, -3062.1f, -71.22691f, 790.9125f, -3068.998f, 63.91419f, 250f, 0, 0, 0))
	{
		func_88(787.0854f, -2973.872f, 5.0585f, 256.91f);
	}
	func_321();
	unk_0x96A3D9A8A4C7AFD4();
}

void func_88(struct<3> Param0, float fParam3)
{
	if (func_89(Global_71096, 0f, 0f, 0f, 0))
	{
		Global_71096 = { Param0 };
		Global_71099 = fParam3;
	}
}

bool func_89(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_90()
{
	if (Global_92833 == 7)
	{
		return 1;
	}
	return 0;
}

int func_91()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_92833 == 7 || Global_92833 == 8)
	{
		return 1;
	}
	return 0;
}

void func_92(char* sParam0)
{
	func_100(sParam0);
	func_93(0);
}

void func_93(int iParam0)
{
	int iVar0;
	
	if (Global_104555.f_9055 || func_7(0))
	{
		iVar0 = func_5();
		if (!func_94(iVar0))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
		Global_92869 = iParam0;
	}
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_99();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xFFC4F532496D6427(5000);
	}
	iVar0 = Global_83730[iParam0 /*5*/];
	iVar1 = Global_71125.f_109[iVar0 /*4*/];
	func_98(iVar1, 1);
	unk_0xEC27A5F45CFF069F(unk_0x9EB17624F44A8DA4());
	unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	func_95(&(Global_104555.f_2353.f_539), iVar1);
	if (Global_87153 == Global_92870)
	{
		Global_104555.f_9055.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xC80D31E4B587871C(Global_83766[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0xC623E2691C004001(0);
		}
	}
	Global_104555.f_9055.f_330[iVar1 /*6*/].f_2++;
	Global_87153 = Global_92870;
	if (iParam0 == -1)
	{
		if (Global_104555.f_9055)
		{
		}
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_83730[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_83730[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_95(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_104555.f_18503[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_97(Global_104555.f_18503[iVar0], &Var2, &fVar5))
			{
				Global_104555.f_18503[iVar0] = 318;
				func_96(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90368[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_9 = 0f;
				Global_90368[iVar0 /*29*/].f_12 = 0f;
				Global_90368[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_10 = 0f;
				Global_90368[iVar0 /*29*/].f_13 = 0f;
				Global_90368[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_11 = 0f;
				Global_90368[iVar0 /*29*/].f_14 = 0f;
				Global_90368[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_26 = 0f;
				Global_90368[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_27 = 0f;
				Global_90368[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_96(var uParam0)
{
	*uParam0 = -15;
}

int func_97(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_97(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_97(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_98(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86963[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86963[iParam0 /*2*/] = 0;
	}
}

void func_99()
{
	Global_92868 = 1;
	if (unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_19())
			{
				case 0:
					StringCopy(&Global_71088, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71088, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71088, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71092, "", 16);
		}
		Global_92868 = 0;
	}
	else if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_19())
			{
				case 0:
					StringCopy(&Global_71088, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71088, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71088, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71092, "", 16);
		}
		Global_92868 = 0;
		unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 25);
	}
}

void func_100(char* sParam0)
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		if (unk_0x96AAAC172E3B9680(sParam0) <= 16)
		{
			StringCopy(&Global_71088, sParam0, 16);
			StringCopy(&Global_71092, "", 16);
			if (unk_0x2D8BD7F773A1EA2C())
			{
				unk_0xBA895E5C4D5B8B12();
			}
		}
	}
}

int func_101(int iParam0)
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x8A3FF8E81B40BB75(iParam0))
		{
			if (unk_0xB8DE76287EDC4957(unk_0x79A6CD762DCCABE4(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x52C56492660097C7(iParam0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0x07F64790D10D1DB5(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_102(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!unk_0x74C475EB8E73D398("FinaleC2", unk_0x436287B7DB306165()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_92870)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_92870)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_186(1);
		if (iParam0 <= Global_92870)
		{
		}
		iVar1 = func_184(unk_0x436287B7DB306165(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_104555.f_9055.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_182(iVar1);
			cVar3 = { Global_83766[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_104555.f_9055.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0xEBDD0888F628D3FB(&cVar3, uVar2, Global_92870, iParam0);
		}
		else
		{
			iVar5 = func_177(unk_0x436287B7DB306165(), 1);
			if (iVar5 != -1)
			{
				Global_104555.f_18544[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_176(iVar5)}, 4);
				unk_0xEBDD0888F628D3FB(&uVar6, 0, Global_92870, iParam0);
			}
			else
			{
				iVar10 = func_175(&(Global_92833.f_3));
				if (iVar10 > -1)
				{
					Global_104555.f_24956.f_4[iVar10] = 0;
				}
			}
		}
		Global_87156 = iParam2;
		Global_92870 = iParam0;
		func_103(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x74C475EB8E73D398(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_92870)
	{
	}
}

void func_103(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_104(&Global_98118, unk_0x436287B7DB306165(), iParam0, uParam1, iParam3, iParam2);
}

void func_104(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_19();
	uParam0->f_1 = func_164();
	unk_0xFEA5CA2D657FCB82(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_139(&(uParam0->f_2869), 0);
		func_138(unk_0xFC1458A37D98B502());
		func_131(unk_0xFC1458A37D98B502(), 0);
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_104555.f_2353.f_539.f_294[iVar1];
		if (iVar1 == func_130())
		{
			func_123(unk_0xFC1458A37D98B502(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_92623[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_92623[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_92623[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_92623[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_92623[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_92623[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_92623[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_92623[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_92623[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_92623[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_104555.f_2353.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_104555.f_2353.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_104555.f_20534.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53077[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_104555.f_2353.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_104555.f_2353.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_104555.f_2353[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xFA3CE529DBB66C85(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0xFA3CE529DBB66C85(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0xFA3CE529DBB66C85(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_106(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_105(&(uParam0->f_2965));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_105(var uParam0)
{
	*uParam0 = Global_88827;
	uParam0->f_1 = Global_88828;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_106(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xFC1458A37D98B502();
	}
	if (unk_0x6ADD12BF4D6D2587(iParam2))
	{
		uParam1->f_5 = func_22(iParam2);
	}
	if (func_120(iParam2, &iVar0, iParam3, iParam5))
	{
		func_107(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("skylift")) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
			{
				func_107(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_107(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xB8DE76287EDC4957(iParam2, 0))
	{
		func_109(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_108(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_92833.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_109(var uParam0, int iParam1, int iParam2)
{
	func_115(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_112(iParam1, 145, 0);
	uParam0->f_11 = func_111(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_110(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		uParam0->f_6 = unk_0xF0371FE6E2BF9599(iParam1);
		uParam0->f_3 = { unk_0x8FD9FCCB6E4BD999(iParam1) };
		if (unk_0x0F3033474C49912D(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_70583 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]))
		{
			if (iParam0 == Global_69678.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_111(int iParam0)
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 145;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				return Global_90319[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_112(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90319[iVar0])
				{
					if (iParam2 == 0 || unk_0x82FF3DFBC3965CC0(iParam0) == func_113(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_113(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_21(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_114(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_114(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104555.f_9055.f_99.f_58[128] && !Global_104555.f_9055.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_104555.f_9055.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_104555.f_9055.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_115(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_119(uParam1);
		uParam1->f_66 = unk_0x82FF3DFBC3965CC0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xF2D2D6860D636A58(iParam0), 16);
		*uParam1 = unk_0xBB95820E68A4EB0D(iParam0);
		unk_0xAEC96F2E5A91C606(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x0DA0B030029E4E6E(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x7869E6E4E193E666(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x55F371CF3DB9BFA1(iParam0);
		uParam1->f_67 = unk_0x7E3C3BFAB9ADD960(iParam0);
		uParam1->f_69 = unk_0x0260F35A831D6738(iParam0);
		uParam1->f_70 = unk_0x37956F2B588E40E6(iParam0);
		unk_0xFBAEDCD645F4B3F7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x063C5BF33FA1D85E(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x378B727FB0126407(iParam0, 2))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
		}
		if (unk_0x378B727FB0126407(iParam0, 3))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
		}
		if (unk_0x378B727FB0126407(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
		}
		if (unk_0x378B727FB0126407(iParam0, 1))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_118(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			uParam1->f_68 = unk_0xBFAC036AADDA5F9F(iParam0);
		}
		if (unk_0x849A8CFD71854E02(uParam1->f_66))
		{
			if (unk_0xEF8C0B8E0D7402FE(iParam0))
			{
				switch (unk_0xCD44B25535473ABE(iParam0))
				{
					case 3:
					case 0:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x84EE59E8804FCC8C(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 9);
		}
		if (unk_0xE7F7942A19E7A681(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 10);
		}
		if (unk_0x47833BA8B6BB150B(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 13);
			unk_0x91A0B42E2753BEF7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x11C2F368CD69AADB(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 12);
		}
		func_117(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_116(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3F7A17ABD44B7297(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 11);
		}
		if (unk_0xB80A4DA4C06A76F1(iParam0, "IgnoredByQuickSave") && unk_0xD5736BCB654EA8FC(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 27);
		}
	}
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_117(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x55F6AB4050FE1F69(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xF928889F6E5C7677(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_119(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_120(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			if (iParam0 == unk_0xFC1458A37D98B502())
			{
				*uParam1 = unk_0xC733212BF9066BDF();
			}
			else
			{
				*uParam1 = unk_0xDFD115BB10FE46A9(iParam0, 1);
			}
			if (unk_0x6ADD12BF4D6D2587(*uParam1))
			{
				if (unk_0xB8DE76287EDC4957(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(*uParam1, 1), unk_0xB3328BA8976B416C(iParam0, 1), 1) < 100f)
					{
						if (unk_0xB0DA749C8A7CCBBF(*uParam1, joaat("taxi")))
						{
							if (unk_0x317536BCEA8FA6B0(*uParam1, -1, 0) != iParam0 && unk_0x317536BCEA8FA6B0(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_121(*uParam1, func_19(), 1))
						{
							sVar0 = unk_0x436287B7DB306165();
							if (!unk_0x74C475EB8E73D398(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x88DDBE9908752BF0(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xB80A4DA4C06A76F1(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xD5736BCB654EA8FC(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xB0DA749C8A7CCBBF(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_121(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_122(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xC80D31E4B587871C(Global_104555.f_7199[iVar9], 0))
		{
			if (unk_0x7840B5C83A85E7C6(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_122(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_123(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_22(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_129(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_128(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_21(iVar0))
		{
			uParam1->f_59 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x3A711520F83BAE98() && unk_0x82FF3DFBC3965CC0(iParam0) == unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			if (func_127(161, -1))
			{
				uParam1->f_59 = func_124(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_124(749, Global_70668, 0);
			}
			uParam1->f_60 = func_124(750, Global_70668, 0);
			uParam1->f_61 = func_124(751, Global_70668, 0);
		}
		if (unk_0x3A711520F83BAE98() && iParam0 == unk_0xFC1458A37D98B502())
		{
			if (func_127(161, -1))
			{
				uParam1->f_59 = func_124(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_124(749, Global_70668, 0);
			}
		}
	}
}

int func_124(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2523060[iParam0 /*3*/][func_125(iParam1)];
	if (unk_0xFA3CE529DBB66C85(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_125(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_126();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

var func_126()
{
	return Global_1312736;
}

int func_127(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_125(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x742D2DEFFDC66EB8(iParam0, iParam1);
		*uParam3 = unk_0xC563C871267881C4(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x97610277C0BBC6FC(iParam0) && unk_0x928EC8A04257C833(iParam0) != -1)
				{
					*uParam2 = unk_0x928EC8A04257C833(iParam0);
					*uParam3 = unk_0xDA2D990A7F8DFA7E(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_129(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x4CDD2D1D66ED1DE4(iParam0, iParam1);
		*uParam3 = unk_0xDCC2BD4C56470D10(iParam0, iParam1);
		*uParam4 = unk_0x6AC6F0502D04B9F9(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_130()
{
	func_20();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_131(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_22(iParam0);
	if (func_21(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam0 == unk_0xFC1458A37D98B502())
		{
			func_132(iParam0, &(Global_104555.f_2353.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_104555.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0xB29211B2B4084E43(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x7F23DDBA3ACA51BC();
					if (Global_104555.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_104555.f_2353.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x8475A4404BC86972(unk_0x9EB17624F44A8DA4(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0xBFFF62F75445099D(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xBFFF62F75445099D(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xBFFF62F75445099D(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_132(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_137(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xB50B73D3F4DD1613(iParam0, func_137(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x5088CF774DF6D935(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x3CC6ABB1D2EC7E28(iParam0, Var4.f_0);
					Var4.f_4 = unk_0x483852B06034011D(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6407D3750DB405F3(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_135(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4.f_0, iVar2))
						{
							unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_135(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x359D12B4F89DA5D6();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0xD10DDFA63A9D9BDA(iVar9, &Var11) && !func_134(Var11.f_1)) && iVar72 < 50)
			{
				if (!unk_0x42683C90F2D005ED(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x5088CF774DF6D935(iParam0, Var4.f_0);
					if (unk_0xA8388473C755363D(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x3CC6ABB1D2EC7E28(iParam0, Var4.f_0);
						Var4.f_4 = unk_0x483852B06034011D(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6407D3750DB405F3(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x16DE9AAC68A15A81(iVar9))
					{
						if (unk_0x768809DD20D4F552(iVar9, iVar1, &Var50))
						{
							if (!func_133(Var50.f_3))
							{
								if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4.f_0, Var50.f_3))
								{
									unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xA8388473C755363D(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_134(int iParam0)
{
	if (unk_0x3A711520F83BAE98())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_136(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x16DE9AAC68A15A81(iVar1))
					{
						if (unk_0x768809DD20D4F552(iVar1, iVar2, &Var43))
						{
							if (!func_133(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_136(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x359D12B4F89DA5D6();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xD10DDFA63A9D9BDA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_137(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (func_21(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		Global_104555.f_2353.f_539.f_294[iVar0] = unk_0x8027E7B955FF320D(iParam0);
	}
}

void func_139(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	uParam0->f_3 = unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502());
	uParam0->f_5 = unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502());
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		uParam0->f_4 = unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x8F38E94BBF3404CD(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xC0765AFBFA616644(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_142(&iVar0))
		{
			if (func_141(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_19();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_140(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_140(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD42907FA80A6F327(Param0))
	{
		iVar0 = unk_0xC0765AFBFA616644(Param4, sParam3);
		if (!unk_0x2C2E1E35924B9FF2(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x54EA77341255C23C(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_141(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_89(*uParam1, 0f, 0f, 0f, 0);
}

int func_142(var uParam0)
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_163())
		{
			*uParam0 = func_148(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 6, -1, 0, 1, -1);
			if (func_147(*uParam0) && !func_143(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_143(int iParam0)
{
	return func_144(iParam0, 0, 1);
}

int func_144(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_146() == 0)
		{
			return unk_0xC80D31E4B587871C(func_124(func_145(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_145(int iParam0)
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
			return 7013;
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
	return 7872;
}

int func_146()
{
	return Global_25233;
}

int func_147(int iParam0)
{
	return func_144(iParam0, 5, 1);
}

int func_148(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 47)
	{
		if (iParam3 == 6 || iParam3 == func_162(iVar0))
		{
			if (!bParam5 || func_161(iVar0))
			{
				fVar1 = unk_0xBE3C4023003180FC(Param0, func_149(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_149(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_160(Global_94374);
			break;
		
		case 46:
			if (Global_1595538 != func_159())
			{
				if (func_158(Global_1595538))
				{
					return func_151(2, 2);
				}
				else if (func_150(Global_1595538))
				{
					return func_151(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_150(int iParam0)
{
	if (iParam0 != func_159())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_151(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595538 != func_159())
	{
		if (iParam1 == 3)
		{
			if (func_152(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 4))
			{
				if (func_152(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 5))
			{
				if (func_152(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_152(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_157(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_157(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_155(iParam0) };
	}
	else
	{
		Var12 = { func_154(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_153(Var18, -Var0.f_3.f_2) };
	Var18 = { func_153(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_153(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_154(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_155(int iParam0)
{
	return func_156(iParam0);
}

struct<6> func_156(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_157(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_158(int iParam0)
{
	if (iParam0 != func_159())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_159()
{
	return -1;
}

Vector3 func_160(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_161(int iParam0)
{
	return func_144(iParam0, 0, 0);
}

int func_162(int iParam0)
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

bool func_163()
{
	return Global_92885.f_315 > 0;
}

var func_164()
{
	var uVar0;
	
	func_174(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_173(&uVar0, unk_0x95327550F0F2BE7C());
	func_172(&uVar0, unk_0x674C9438180770FE());
	func_167(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_166(&uVar0, unk_0xEAF455949B108589());
	func_165(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_165(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_166(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_167(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_171(*uParam0);
	iVar1 = func_169(*uParam0);
	if (iParam1 < 1 || iParam1 > func_168(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_168(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_169(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_170(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_170(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_171(var uParam0)
{
	return uParam0 & 15;
}

void func_172(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_173(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_174(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_175(char* sParam0)
{
	if (unk_0x74C475EB8E73D398("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x74C475EB8E73D398("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x74C475EB8E73D398("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x74C475EB8E73D398("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_176(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_177(char* sParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x8B948C59217A295D(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_178(iVar0, &uVar1);
		if (unk_0x8B948C59217A295D(uVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_178(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_179(uParam1, "Abigail1", func_181(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 1:
			func_179(uParam1, "Abigail2", func_181(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 2:
			func_179(uParam1, "Barry1", func_181(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 3:
			func_179(uParam1, "Barry2", func_181(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 4:
			func_179(uParam1, "Barry3", func_181(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 5:
			func_179(uParam1, "Barry3A", func_181(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 6:
			func_179(uParam1, "Barry3C", func_181(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 7:
			func_179(uParam1, "Barry4", func_181(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_180(iParam0), 0, 0);
			break;
		
		case 8:
			func_179(uParam1, "Dreyfuss1", func_181(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 9:
			func_179(uParam1, "Epsilon1", func_181(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 10:
			func_179(uParam1, "Epsilon2", func_181(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 11:
			func_179(uParam1, "Epsilon3", func_181(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 12:
			func_179(uParam1, "Epsilon4", func_181(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 13:
			func_179(uParam1, "Epsilon5", func_181(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 14:
			func_179(uParam1, "Epsilon6", func_181(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 15:
			func_179(uParam1, "Epsilon7", func_181(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 16:
			func_179(uParam1, "Epsilon8", func_181(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 17:
			func_179(uParam1, "Extreme1", func_181(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 18:
			func_179(uParam1, "Extreme2", func_181(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 19:
			func_179(uParam1, "Extreme3", func_181(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 20:
			func_179(uParam1, "Extreme4", func_181(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 21:
			func_179(uParam1, "Fanatic1", func_181(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_180(iParam0), 1, 0);
			break;
		
		case 22:
			func_179(uParam1, "Fanatic2", func_181(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_180(iParam0), 1, 0);
			break;
		
		case 23:
			func_179(uParam1, "Fanatic3", func_181(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_180(iParam0), 0, 1);
			break;
		
		case 24:
			func_179(uParam1, "Hao1", func_181(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_180(iParam0), 0, 1);
			break;
		
		case 25:
			func_179(uParam1, "Hunting1", func_181(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 26:
			func_179(uParam1, "Hunting2", func_181(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 27:
			func_179(uParam1, "Josh1", func_181(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 28:
			func_179(uParam1, "Josh2", func_181(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 29:
			func_179(uParam1, "Josh3", func_181(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 30:
			func_179(uParam1, "Josh4", func_181(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 31:
			func_179(uParam1, "Maude1", func_181(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 32:
			func_179(uParam1, "Minute1", func_181(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 33:
			func_179(uParam1, "Minute2", func_181(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 34:
			func_179(uParam1, "Minute3", func_181(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 35:
			func_179(uParam1, "MrsPhilips1", func_181(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 36:
			func_179(uParam1, "MrsPhilips2", func_181(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 37:
			func_179(uParam1, "Nigel1", func_181(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 38:
			func_179(uParam1, "Nigel1A", func_181(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 39:
			func_179(uParam1, "Nigel1B", func_181(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 40:
			func_179(uParam1, "Nigel1C", func_181(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 41:
			func_179(uParam1, "Nigel1D", func_181(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 42:
			func_179(uParam1, "Nigel2", func_181(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 43:
			func_179(uParam1, "Nigel3", func_181(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 44:
			func_179(uParam1, "Omega1", func_181(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 45:
			func_179(uParam1, "Omega2", func_181(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 46:
			func_179(uParam1, "Paparazzo1", func_181(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 47:
			func_179(uParam1, "Paparazzo2", func_181(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 48:
			func_179(uParam1, "Paparazzo3", func_181(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 49:
			func_179(uParam1, "Paparazzo3A", func_181(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 50:
			func_179(uParam1, "Paparazzo3B", func_181(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 51:
			func_179(uParam1, "Paparazzo4", func_181(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 52:
			func_179(uParam1, "Rampage1", func_181(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 54:
			func_179(uParam1, "Rampage3", func_181(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 55:
			func_179(uParam1, "Rampage4", func_181(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 56:
			func_179(uParam1, "Rampage5", func_181(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 53:
			func_179(uParam1, "Rampage2", func_181(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 57:
			func_179(uParam1, "TheLastOne", func_181(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 58:
			func_179(uParam1, "Tonya1", func_181(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 59:
			func_179(uParam1, "Tonya2", func_181(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 60:
			func_179(uParam1, "Tonya3", func_181(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 61:
			func_179(uParam1, "Tonya4", func_181(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 62:
			func_179(uParam1, "Tonya5", func_181(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_179(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_181(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_176(iParam0) };
	if (unk_0xAB019B170BF1309C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_183(Global_104555.f_9055.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_183(Global_104555.f_9055.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_183(Global_104555.f_9055.f_99.f_205[11]);
			break;
		
		case 90:
			return func_183(Global_104555.f_9055.f_99.f_205[7]);
			break;
		
		case 93:
			return func_183(Global_104555.f_9055.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_184(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x8B948C59217A295D(sParam0);
	iVar1 = func_185(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_185(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_83766[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_186(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53085[iVar0 /*3*/][0] = Global_104555.f_20534[iVar0];
		Global_53085.f_31[iVar0 /*3*/][0] = Global_104555.f_20534.f_11[iVar0];
		Global_53085.f_62[iVar0 /*3*/][0] = Global_104555.f_20534.f_22[iVar0];
		Global_53085.f_93[iVar0 /*3*/][0] = Global_104555.f_20534.f_33[iVar0];
		Global_53085.f_124[iVar0 /*3*/][0] = Global_104555.f_20534.f_44[iVar0];
		Global_53085.f_155[iVar0 /*3*/][0] = Global_104555.f_20534.f_55[iVar0];
		Global_53085.f_186[iVar0 /*3*/][0] = Global_104555.f_20534.f_66[iVar0];
		Global_53085.f_217[iVar0 /*3*/][0] = Global_104555.f_20534.f_77[iVar0];
		Global_53085.f_248[iVar0 /*3*/][0] = Global_104555.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53085[iVar0 /*3*/][1] = Global_104555.f_20534[iVar0];
			Global_53085.f_31[iVar0 /*3*/][1] = Global_104555.f_20534.f_11[iVar0];
			Global_53085.f_62[iVar0 /*3*/][1] = Global_104555.f_20534.f_22[iVar0];
			Global_53085.f_93[iVar0 /*3*/][1] = Global_104555.f_20534.f_33[iVar0];
			Global_53085.f_124[iVar0 /*3*/][1] = Global_104555.f_20534.f_44[iVar0];
			Global_53085.f_155[iVar0 /*3*/][1] = Global_104555.f_20534.f_55[iVar0];
			Global_53085.f_186[iVar0 /*3*/][1] = Global_104555.f_20534.f_66[iVar0];
			Global_53085.f_217[iVar0 /*3*/][1] = Global_104555.f_20534.f_77[iVar0];
			Global_53085.f_248[iVar0 /*3*/][1] = Global_104555.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_187()
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_2104)
	{
		case 0:
			func_219(&uLocal_460, "PORT_OF_LS_PREP_1");
			if (unk_0x3E9CABD07B829173())
			{
				unk_0x59C3AC31C7544A28(800);
			}
			func_217(&Local_188, 324.7653f, -2974.495f, -1f, 0.1f, 0.1f, 2f, 1, Local_55[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1);
			if (unk_0x9A0B2ED5055D3F0B(joaat("packer")) && unk_0x9A0B2ED5055D3F0B(joaat("armytrailer")))
			{
				func_102(1, "STAGE 1: Get to crane", 0, 0, 0, 1);
				func_216(587, 0);
				func_215(&uLocal_213, 1, 0, "FLOYD", 0, 1);
				func_214(6, 0);
				Local_55[2 /*2*/] = unk_0xEA60F3B426BB095B(joaat("packer"), 298.2343f, -2942.77f, 5.0003f, 0f, 1, 1, 0);
				unk_0xCF5EB2CB1B30F02C(Local_55[2 /*2*/], 0);
				unk_0x438D30A195B65156(Local_55[2 /*2*/], 1);
				unk_0x207466E78DA21033(Local_55[2 /*2*/], 0);
				unk_0x4D7D93C6E0C1063B(Local_55[2 /*2*/], 0);
				Local_55[1 /*2*/] = unk_0xEA60F3B426BB095B(joaat("armytrailer"), 298.27f, -2951.27f, 7.86f, 0f, 1, 1, 0);
				unk_0x7A23B5BE4EB8A66F(Local_55[2 /*2*/], Local_55[1 /*2*/], 0.5f);
				unk_0x17167CAC18366E8F(Local_55[1 /*2*/]);
				unk_0x4D7D93C6E0C1063B(Local_55[1 /*2*/], 0);
				unk_0x438D30A195B65156(Local_55[1 /*2*/], 1);
				iLocal_383 = 0;
				unk_0xCB389937EDB1519A(289.0847f, -2980.382f, 9.24156f, 320.426f, -2931.6f, 4f, 0, 1, 1, 1);
				iLocal_392 = 1;
				unk_0x1B5A255BF0D63005("OnlyAllowScriptTriggerPoliceScanner", 0);
				iLocal_2104++;
			}
			break;
		
		case 1:
			if (func_213())
			{
				func_212(&uLocal_460, cLocal_49);
				func_212(&uLocal_460, cLocal_50);
				iLocal_396 = -1;
				iLocal_397 = 0;
				iLocal_2104++;
			}
			break;
		
		case 2:
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_55[0 /*2*/], 0))
			{
				switch (iLocal_397)
				{
					case 0:
						if (!unk_0xF491DD47B88AA84E())
						{
							if (iLocal_396 == -1)
							{
								iLocal_396 = unk_0x53C562FD2B9E3AB0() + 5000;
							}
							if (unk_0x53C562FD2B9E3AB0() > iLocal_396)
							{
								func_211("DKP1_SUBTURN", -1);
								iLocal_397++;
							}
						}
						break;
					
					case 1:
						if (!unk_0xF491DD47B88AA84E())
						{
							func_211("SUB_HELP", -1);
							iLocal_397++;
						}
						break;
				}
			}
			else
			{
				if (iLocal_397 == 0)
				{
					iLocal_396 = -1;
				}
				if (unk_0xF491DD47B88AA84E())
				{
					if (func_210("DKP1_SUBTURN") || func_210("SUB_HELP"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
				}
			}
			if (unk_0xB6579D6FEB63269C(Local_55[0 /*2*/], 3, 10000))
			{
				func_87(1);
			}
			if (func_86(unk_0xFC1458A37D98B502(), 324.7653f, -2974.495f, -1.5f, 1) < 150f)
			{
				if (unk_0x8028488F650E6677("DOCKS_HEIST_PREP_1_LIFT_SUB", 0))
				{
					bLocal_457 = true;
				}
				func_85(&(Local_169[2 /*2*/]), 0);
				func_83(&uLocal_460, joaat("prop_sub_release"));
			}
			else
			{
				unk_0x8E7C072C41DF97BF();
				bLocal_457 = false;
			}
			if (func_101(Local_64[6 /*10*/]))
			{
				if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || unk_0xA6FA9E5D08F067AD(Local_64[6 /*10*/])) || func_10(unk_0xFC1458A37D98B502(), Local_64[6 /*10*/], 1) > 100f)
				{
					unk_0xB8E08BD5B184DF4E(Local_64[6 /*10*/]);
					func_9(&(Local_64[6 /*10*/]), 1, 0, 1);
				}
			}
			if (func_101(Local_64[7 /*10*/]))
			{
				if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || unk_0xA6FA9E5D08F067AD(Local_64[7 /*10*/])) || func_10(unk_0xFC1458A37D98B502(), Local_64[7 /*10*/], 1) > 100f)
				{
					unk_0xB8E08BD5B184DF4E(Local_64[7 /*10*/]);
					func_9(&(Local_64[7 /*10*/]), 1, 0, 1);
				}
			}
			if (func_101(Local_64[4 /*10*/]))
			{
				if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || unk_0xA6FA9E5D08F067AD(Local_64[4 /*10*/])) || func_10(unk_0xFC1458A37D98B502(), Local_64[4 /*10*/], 1) > 100f)
				{
					unk_0xB8E08BD5B184DF4E(Local_64[4 /*10*/]);
					func_9(&(Local_64[4 /*10*/]), 1, 0, 1);
				}
			}
			if (func_101(Local_64[5 /*10*/]))
			{
				if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || unk_0xA6FA9E5D08F067AD(Local_64[5 /*10*/])) || func_10(unk_0xFC1458A37D98B502(), Local_64[5 /*10*/], 1) > 100f)
				{
					unk_0xB8E08BD5B184DF4E(Local_64[5 /*10*/]);
					func_9(&(Local_64[5 /*10*/]), 1, 0, 1);
				}
			}
			if (func_217(&Local_188, 324.7653f, -2974.495f, -1.5f, 0.1f, 0.1f, 2f, 0, Local_55[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1) || ((unk_0xA6DECE14FC9A8C51(Local_188.f_5) && unk_0x0F3033474C49912D(Local_55[0 /*2*/], 312.8557f, -2974.003f, 1.19166f, 339.1654f, -2974.348f, -6.70078f, 15f, 0, 1, 0)) && func_209(unk_0xFC1458A37D98B502(), Local_55[0 /*2*/])))
			{
				if (func_101(Local_55[2 /*2*/]) && func_101(Local_55[1 /*2*/]))
				{
					func_208(&Local_188, 0);
					func_207(6, 0);
					unk_0x8810DC630928B398("DHP1_STOP");
					func_206(0, -1);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), 0, 256);
					iLocal_452 = unk_0x53C562FD2B9E3AB0();
					iLocal_2104++;
				}
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0 && unk_0xA6DECE14FC9A8C51(Local_188.f_5))
			{
				unk_0xBDD6765E5846A7DE(6, 324.7653f, -2974.495f, -3.5f, 0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 5f, 255, 255, 0, 65, 0, 0, 2, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			if (func_76(Local_55[0 /*2*/]) || (unk_0x53C562FD2B9E3AB0() - iLocal_452) > 3500)
			{
				uLocal_444 = unk_0x5AC38B4D80D4E352(26379945, 341.6419f, -2965.525f, 4.037704f, 17.06695f, 0.473599f, 112.4448f, 34f, 0, 2);
				unk_0x7849794435F39D49(uLocal_444, 1);
				unk_0x7E4FCDC8BAD0CF6D(uLocal_444, "HAND_SHAKE", 0.4f);
				unk_0xA6DE0FBA9218D7F0(uLocal_444, 341.6419f, -2965.525f, 4.037704f, -4.346406f, 0.473595f, 112.4448f, 34f, 6000, 1, 1, 2);
				func_202(0, 340.6675f, -2964.01f, 1.4937f, 1, 0, 1, 3000, 0, 1);
				func_82(&uLocal_460, joaat("prop_tarp_strap"));
				unk_0xBD8D47FDC6902B2D(Local_55[0 /*2*/], Local_411, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(Local_55[0 /*2*/], fLocal_414);
				iLocal_452 = unk_0x53C562FD2B9E3AB0();
				iLocal_410 = 0;
				unk_0x1267474D9A69CA37(8f, 0f, 4);
				iLocal_2104++;
			}
			else
			{
				func_40(Local_55[0 /*2*/], 7f, 1, 1056964608, 0, 1, 0);
			}
			break;
		
		case 4:
			if (func_192())
			{
				iLocal_2104++;
			}
			break;
		
		case 5:
			if (unk_0xA3DDC3767EC660CD() && unk_0x9A0B2ED5055D3F0B(joaat("prop_tarp_strap")))
			{
				unk_0x4982ECE0928DA13D(Local_55[2 /*2*/], "DockHeist_truck", 0, 0, 0);
				unk_0x4982ECE0928DA13D(Local_55[0 /*2*/], "submarine", 0, joaat("submersible"), 0);
				unk_0x4982ECE0928DA13D(Local_55[1 /*2*/], "dockheist_trailer", 0, joaat("armytrailer"), 0);
				unk_0x4982ECE0928DA13D(0, "sub_cover", 2, joaat("prop_sub_cover_01"), 0);
				unk_0x4982ECE0928DA13D(0, "Floyd", 2, joaat("ig_floyd"), 0);
				unk_0x6A39A6ADDC38ABE4("Trevor", unk_0xFC1458A37D98B502(), 0);
				unk_0xBAB8785EE2F06BBE(Local_55[2 /*2*/], 1);
				unk_0xCF5EB2CB1B30F02C(Local_55[2 /*2*/], 1);
				func_191(0);
				unk_0x0662098C9EF126B4(4);
				unk_0x45BC176150D0E5AF(0, 0, 1, 0);
				unk_0xD0BFA95B279C174F(0);
				iLocal_2104++;
			}
			break;
		
		case 6:
			if (unk_0xA8113D347D14630F())
			{
				if (unk_0xAB84FBE3AB3FFAD3("PO1_08_sub_waterplane"))
				{
					unk_0x990A0EC8D6FEA4BB("PO1_08_sub_waterplane");
				}
			}
			if (unk_0x65E1868AA01313FF(0))
			{
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				unk_0x9B47B379EE749C38(1);
				unk_0x4255E93FCCDE108E(1);
				unk_0x61635C0A7950C875();
			}
			if (!unk_0x6ADD12BF4D6D2587(Local_64[3 /*10*/]))
			{
				if (unk_0x6ADD12BF4D6D2587(unk_0xA78D8DA2425CB3DB("Floyd", 0)))
				{
					Local_64[3 /*10*/] = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("Floyd", 0));
					func_215(&uLocal_213, 1, Local_64[3 /*10*/], "FLOYD", 0, 1);
					unk_0xCE93FCB8A8D8DF0B(Local_64[3 /*10*/], iLocal_394);
				}
			}
			if (unk_0xBBC745B9F75E27D0("Trevor", 0))
			{
				iLocal_446 = 1;
			}
			if (unk_0xBBC745B9F75E27D0("Floyd", 0))
			{
				iLocal_447 = 1;
			}
			if (unk_0xBBC745B9F75E27D0("DockHeist_truck", 0))
			{
				unk_0x1C5DD2800ABDC1C7(Local_55[2 /*2*/], 1, 0, 0);
				unk_0x6147908AB85766AA(Local_55[2 /*2*/], 1);
				iLocal_448 = 1;
			}
			if (unk_0xBBC745B9F75E27D0("DockHeist_trailer", 0))
			{
				unk_0x1C5DD2800ABDC1C7(Local_55[1 /*2*/], 1, 0, 0);
				iLocal_451 = 1;
			}
			if (unk_0xBBC745B9F75E27D0("submarine", 0))
			{
				iLocal_449 = 1;
			}
			if (unk_0xBBC745B9F75E27D0("sub_cover", 0))
			{
				iLocal_450 = 1;
			}
			else if (!unk_0x6ADD12BF4D6D2587(Local_169[4 /*2*/]))
			{
				if (unk_0x6ADD12BF4D6D2587(unk_0xA78D8DA2425CB3DB("sub_cover", joaat("prop_sub_cover_01"))))
				{
					Local_169[4 /*2*/] = unk_0xE5D69D5333979D8B(unk_0xA78D8DA2425CB3DB("sub_cover", joaat("prop_sub_cover_01")));
				}
			}
			if (unk_0x82FD93A4386F02A1(Local_55[2 /*2*/], &iVar0, &uVar1))
			{
				if (iVar0 == 0)
				{
					if (unk_0xE57A999388F7FD02() >= 14200)
					{
						unk_0xBAB8785EE2F06BBE(Local_55[2 /*2*/], 3);
					}
				}
			}
			if (((((iLocal_446 && iLocal_447) && iLocal_448) && iLocal_449) && iLocal_450) && iLocal_451)
			{
				if (unk_0x9F7B586A14398C40() || unk_0xF0D051E82D0DB8C2(Local_64[3 /*10*/]))
				{
					unk_0xBB0358802AA14401(Local_64[3 /*10*/], Local_55[2 /*2*/], 0);
					unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), Local_55[2 /*2*/], -1);
					unk_0xAD690A179F5200F2(Local_55[0 /*2*/], Local_55[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
					unk_0xCF5EB2CB1B30F02C(Local_55[0 /*2*/], 0);
					unk_0x6147908AB85766AA(Local_55[0 /*2*/], 1);
					unk_0x4BEFCD5DAE410A90(Local_55[0 /*2*/], 10);
					unk_0xA15269351F50F113(Local_55[0 /*2*/], 0, 1, 0);
					unk_0xBAB8785EE2F06BBE(Local_55[0 /*2*/], 1);
					unk_0x47E2FD029BB8567C(Local_55[0 /*2*/], 0);
					unk_0xA9D382E7BA095148(Local_169[4 /*2*/], Local_55[1 /*2*/], -1, Local_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					Local_169[5 /*2*/] = unk_0x5E35CF35E65D69B9(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 1, 1, 0);
					unk_0xA9D382E7BA095148(Local_169[5 /*2*/], Local_55[1 /*2*/], -1, Local_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					func_190(1, 0, 0, 3000, 0);
					func_189(&uLocal_460);
					iLocal_2104++;
				}
			}
			break;
		
		case 7:
			func_188(2);
			iLocal_2104 = 0;
			break;
	}
	if (unk_0xA6DECE14FC9A8C51(Local_188.f_5))
	{
		unk_0xAAAC88CC20771601(Local_188.f_5, 0);
	}
	if (func_101(unk_0xFC1458A37D98B502()) && func_101(Local_55[0 /*2*/]))
	{
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 324.7653f, -2974.495f, -1f, 1) > 2500f)
		{
			func_87(9);
		}
	}
}

int func_188(int iParam0)
{
	if (iLocal_2102 == 0)
	{
		iLocal_2105 = iParam0;
		iLocal_2102 = 1;
		return 1;
	}
	return 0;
}

void func_189(var uParam0)
{
	if (uParam0->f_860)
	{
		if (uParam0->f_860.f_1)
		{
			unk_0x74FDC371ED12544B();
			func_84(&(uParam0->f_860));
		}
		else
		{
			uParam0->f_860.f_2 = 1;
			uParam0->f_982 = 1;
		}
	}
}

void func_190(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x9B47B379EE749C38(1);
	unk_0x4255E93FCCDE108E(1);
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), iParam0, iParam4);
	unk_0x3458550DF8E9B453(bParam1, iParam2, iParam3, 1, 0, 0);
	if (!bParam1)
	{
		unk_0x4779448854314440(0);
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x47E2FD029BB8567C(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1);
	}
}

void func_191(int iParam0)
{
	iLocal_446 = iParam0;
	iLocal_447 = iParam0;
	iLocal_448 = iParam0;
	iLocal_450 = iParam0;
	iLocal_449 = iParam0;
	iLocal_451 = iParam0;
}

int func_192()
{
	float fVar0;
	
	switch (iLocal_410)
	{
		case 0:
			func_201();
			unk_0xBD8D47FDC6902B2D(Local_55[0 /*2*/], Local_411, 1, 0, 0, 1);
			unk_0x48ED7B2293A96722(Local_55[0 /*2*/], fLocal_414);
			unk_0xEDC33A771FAEB393(Local_55[0 /*2*/], 1);
			uLocal_380 = unk_0x1E3116EEB28D5F17("scr_pls_sub_water_drips", Local_55[0 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			unk_0x377398EA9C594825(uLocal_380, "flow", 1f, 0);
			unk_0x393584863A2F304E("dhp1_mcs_1", 8);
			if (bLocal_457)
			{
				unk_0x4929A4FD75F576BD();
			}
			if (unk_0x674C9438180770FE() >= 20 || unk_0x674C9438180770FE() <= 7)
			{
				unk_0xBC469A15B0FBB2B3("PO1_08_sub_waterplane");
			}
			func_199(&uLocal_460, 298.9806f, -2977.643f, 6.101f, Vector(7.886f, -2964.665f, 298.5479f) - Vector(6.101f, -2977.643f, 298.9806f), 3000f, 0);
			iLocal_410++;
			break;
		
		case 1:
			Local_430 = { unk_0xB3328BA8976B416C(Local_169[8 /*2*/], 1) };
			if (Local_430.f_2 <= 1f)
			{
				unk_0xEDC33A771FAEB393(Local_55[0 /*2*/], 0);
				unk_0xA6DE0FBA9218D7F0(uLocal_444, 310.0923f, -2949.529f, 10.9528f, -20.2654f, 2.7992f, -141.6393f, 25.6f, 0, 1, 1, 2);
				unk_0xA6DE0FBA9218D7F0(uLocal_444, 308.3542f, -2950.972f, 10.8434f, 0.0544f, 2.7992f, -137.3849f, 25.6f, 12500, 1, 1, 2);
				unk_0xA9D382E7BA095148(Local_55[0 /*2*/], Local_169[8 /*2*/], -1, 2.47f, 0f, -1.96f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				iLocal_410++;
			}
			else
			{
				func_198(1, 2f);
			}
			break;
		
		case 2:
			Local_430 = { unk_0xB3328BA8976B416C(Local_169[8 /*2*/], 1) };
			if (Local_430.f_2 >= 12.5f)
			{
				unk_0xA6DE0FBA9218D7F0(uLocal_444, 356.9992f, -2984.961f, 117.2741f, -68.2497f, -0.1106f, 66.9743f, 20f, 0, 1, 1, 2);
				unk_0xA6DE0FBA9218D7F0(uLocal_444, 361.4758f, -2966.824f, 117.2872f, -66.6976f, -0.1106f, 84.372f, 20f, 10000, 1, 1, 2);
				fLocal_443 = unk_0xC528907DC884E3DE(uLocal_444);
				unk_0x7A5CBE84E165CD64(uLocal_444, 1.8f);
				iLocal_410++;
			}
			else
			{
				func_198(0, 1f);
			}
			break;
		
		case 3:
			if (fLocal_424 >= 40f)
			{
				unk_0xA6DE0FBA9218D7F0(uLocal_444, 289.8129f, -2944.046f, 5.5715f, 17.075f, 0.1698f, -109.4507f, 38.3f, 0, 1, 1, 2);
				unk_0xA6DE0FBA9218D7F0(uLocal_444, 290.8941f, -2941.987f, 5.5781f, 22.5176f, 0.1698f, -128.6537f, 38.3f, 7000, 1, 1, 2);
				unk_0x7A5CBE84E165CD64(uLocal_444, fLocal_443);
				fLocal_424 = 80f;
				unk_0x6B7C10B19928914F(Local_169[7 /*2*/], 1, 1);
				unk_0xA9D382E7BA095148(Local_169[7 /*2*/], Local_169[6 /*2*/], -1, Local_421, 0f, 0f, fLocal_424, 0, 0, 0, 0, 2, 1);
				unk_0xAA93B7B448E10E40(Local_169[8 /*2*/], unk_0x3F90543934DCD7E6(Local_169[7 /*2*/], Local_426), 0, 0, 1);
				iLocal_2110 = unk_0x53C562FD2B9E3AB0();
				iLocal_410++;
			}
			else
			{
				func_197(1, 5.5f);
			}
			break;
		
		case 4:
			if (fLocal_424 >= 108f)
			{
				unk_0x79B05894D06FFAF8(1f);
				unk_0xA6DE0FBA9218D7F0(uLocal_444, 300.0253f, -2973.253f, 5.7369f, 10.5662f, 0.1117f, 4.0913f, 22.7929f, 0, 1, 1, 2);
				unk_0xA6DE0FBA9218D7F0(uLocal_444, 300.0292f, -2973.294f, 6.1746f, 5.2629f, 0.1117f, 4.0913f, 22.7929f, 8000, 1, 1, 2);
				unk_0x2D506790E8BD950D(uLocal_444, 0.25f);
				unk_0x6B7C10B19928914F(Local_169[7 /*2*/], 1, 1);
				unk_0xA9D382E7BA095148(Local_169[7 /*2*/], Local_169[6 /*2*/], -1, Local_421, 0f, 0f, fLocal_424, 0, 0, 0, 0, 2, 1);
				unk_0xAA93B7B448E10E40(Local_169[8 /*2*/], unk_0x3F90543934DCD7E6(Local_169[7 /*2*/], Local_426), 0, 0, 1);
				if (unk_0xE0B0126B4689CB72(uLocal_380))
				{
					unk_0x990DE45B7A2B6426(uLocal_380, 0);
				}
				iLocal_410++;
			}
			else
			{
				fVar0 = (1f - func_196((unk_0xBBDA792448DB5A89((unk_0x53C562FD2B9E3AB0() - iLocal_2110 + 1500)) / 3000f), 0f, 1f));
				unk_0x377398EA9C594825(uLocal_380, "flow", fVar0, 0);
				func_197(1, 5.5f);
			}
			break;
		
		case 5:
			unk_0x79B05894D06FFAF8(1f);
			Local_430 = { unk_0xB3328BA8976B416C(Local_169[8 /*2*/], 1) };
			if (Local_430.f_2 <= 11f)
			{
				unk_0x6B7C10B19928914F(Local_55[0 /*2*/], 1, 1);
				iLocal_410++;
			}
			else
			{
				func_198(1, 1f);
			}
			break;
		
		case 6:
			if (unk_0x9A3C64A7BB4588B3(Local_55[0 /*2*/]))
			{
				iLocal_2110 = unk_0x53C562FD2B9E3AB0() + 1000;
				iLocal_410++;
			}
			break;
		
		case 7:
			if (unk_0x53C562FD2B9E3AB0() > iLocal_2110)
			{
				unk_0xEDC33A771FAEB393(Local_169[8 /*2*/], 1);
				iLocal_410++;
			}
			else
			{
				func_197(0, 4f);
				func_198(0, 1f);
			}
			break;
		
		case 8:
			func_195(&uLocal_460);
			return 1;
			break;
	}
	if (unk_0x9F7B586A14398C40())
	{
		if (iLocal_410 > 0 && iLocal_410 < 5)
		{
			if (func_193(1000))
			{
				unk_0xAE83ED4C9081AE6F(800);
			}
		}
	}
	else if (unk_0x3E9CABD07B829173())
	{
		if (unk_0xE0B0126B4689CB72(uLocal_380))
		{
			unk_0x990DE45B7A2B6426(uLocal_380, 0);
		}
		unk_0x2A3035DE2B139D39(unk_0xB3328BA8976B416C(Local_55[0 /*2*/], 1), 30f);
		iLocal_2108 = 2;
		iLocal_2107 = 1;
	}
	return 0;
}

int func_193(int iParam0)
{
	if (unk_0x9F7B586A14398C40())
	{
		if ((unk_0x53C562FD2B9E3AB0() - Global_28) > iParam0)
		{
			Global_27 = unk_0x53C562FD2B9E3AB0();
		}
		Global_28 = unk_0x53C562FD2B9E3AB0();
		if ((unk_0x53C562FD2B9E3AB0() - Global_27) > iParam0)
		{
			if (func_194())
			{
				Global_27 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
	}
	return 0;
}

int func_194()
{
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (unk_0xE8C126B7ADBB9D63(0, 18) || unk_0xE8C126B7ADBB9D63(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_195(var uParam0)
{
	if (unk_0x40189ECE75CF9724())
	{
		unk_0x81BCCFFE3F019672();
		func_84(&(uParam0->f_868));
	}
}

float func_196(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_197(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		fLocal_424 = (fLocal_424 + (fParam1 * unk_0x0000000050597EE2()));
	}
	else
	{
		fLocal_424 = (fLocal_424 - (fParam1 * unk_0x0000000050597EE2()));
	}
	unk_0x6B7C10B19928914F(Local_169[7 /*2*/], 1, 1);
	unk_0xA9D382E7BA095148(Local_169[7 /*2*/], Local_169[6 /*2*/], -1, Local_421, 0f, 0f, fLocal_424, 0, 0, 0, 0, 2, 1);
	unk_0xAA93B7B448E10E40(Local_169[8 /*2*/], unk_0x3F90543934DCD7E6(Local_169[7 /*2*/], Local_426), 0, 0, 1);
}

void func_198(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		Local_426.f_2 = (Local_426.f_2 - (fParam1 * unk_0x0000000050597EE2()));
	}
	else
	{
		Local_426.f_2 = (Local_426.f_2 + (fParam1 * unk_0x0000000050597EE2()));
	}
	unk_0xAA93B7B448E10E40(Local_169[8 /*2*/], unk_0x3F90543934DCD7E6(Local_169[7 /*2*/], Local_426), 0, 0, 1);
}

int func_199(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8)
{
	if (func_200(Param1) || func_200(Param4))
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if ((func_89(uParam0->f_868.f_4, Param1, 0) && func_89(uParam0->f_868.f_7, Param4, 0)) && uParam0->f_868.f_10 == fParam7)
		{
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1)
			{
				uParam0->f_982 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		unk_0xDCBF71199890F355(Param1, Param4, fParam7, iParam8);
		uParam0->f_868 = 1;
		uParam0->f_868.f_3 = unk_0x53C562FD2B9E3AB0();
		uParam0->f_868.f_4 = { Param1 };
		uParam0->f_868.f_7 = { Param4 };
		uParam0->f_868.f_10 = fParam7;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_200(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_201()
{
	if (iLocal_383)
	{
		unk_0x125B8EDEAD208C21(&(Local_145[0 /*5*/]));
		unk_0x125B8EDEAD208C21(&(Local_145[1 /*5*/]));
		unk_0x125B8EDEAD208C21(&(Local_145[2 /*5*/]));
		unk_0x125B8EDEAD208C21(&(Local_145[3 /*5*/]));
		iLocal_383 = 0;
	}
}

void func_202(int iParam0, struct<3> Param1, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)
{
	unk_0x9B47B379EE749C38(0);
	unk_0x4255E93FCCDE108E(0);
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), iParam0, iParam8);
	unk_0x84CDD933AFA470D2();
	unk_0x3E80C2F7BC665259(1);
	unk_0x3458550DF8E9B453(iParam4, iParam5, iParam7, 1, 0, 0);
	if (bParam6)
	{
		unk_0xA896149A4DE38DEA(Param1, 500f, 0);
	}
	unk_0x49779D62887BC4A2(Param1, 300f);
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x47E2FD029BB8567C(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0);
	}
	if (bParam9)
	{
		func_203(0);
	}
}

void func_203(int iParam0)
{
	if (Global_14615)
	{
		func_204(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0x872F1C1F8587CCC7(&Global_2324, 16);
	}
	if (unk_0x0DBDCC9C5537E157())
	{
		unk_0xB31CEFB00C146C91(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 30);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 30);
	}
	if (!func_16())
	{
		Global_14453.f_1 = 3;
	}
}

void func_204(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_205(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0x494F5FA1BF017D58(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x0D75BB9393CE608D(Global_14390);
		}
		else
		{
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
}

int func_205(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
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
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_206(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55911)
	{
	}
	Global_55911 = 0;
	if (bParam0)
	{
		Global_55912 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_56128[Global_67999[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67999[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_67999[iVar0 /*9*/] > 0)
			{
				if (Global_67999[iVar0 /*9*/] == iParam1)
				{
					Global_67999[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_207(int iParam0, bool bParam1)
{
	if (unk_0xC80D31E4B587871C(Global_25391, iParam0))
	{
		if (!bParam1)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_25391, iParam0);
			StringCopy(&(Global_25392[iParam0 /*6*/]), "NULL", 24);
			Global_25447[iParam0] = bParam1;
		}
	}
}

void func_208(var uParam0, bool bParam1)
{
	func_36(uParam0, bParam1, 0);
}

int func_209(int iParam0, int iParam1)
{
	if (unk_0x6ADD12BF4D6D2587(iParam0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1) && !unk_0x191BE1BC8F26F3C1(iParam1, 0))
		{
			if (unk_0xAAA8D20859E2D36D(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_210(char* sParam0)
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_211(char* sParam0, int iParam1)
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

void func_212(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (!unk_0xAB019B170BF1309C(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_273)
		{
			if (uParam0->f_273[iVar0 /*5*/])
			{
				if (unk_0x74C475EB8E73D398(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
				{
					if (uParam0->f_273[iVar0 /*5*/].f_1)
					{
						unk_0xFCCDDE0E48CF9588(sParam1);
						func_84(&(uParam0->f_273[iVar0 /*5*/]));
						return;
					}
					else
					{
						uParam0->f_273[iVar0 /*5*/].f_2 = 1;
						uParam0->f_982 = 1;
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

int func_213()
{
	if (!unk_0x6ADD12BF4D6D2587(Local_169[6 /*2*/]))
	{
		Local_169[6 /*2*/] = unk_0x5E35CF35E65D69B9(iLocal_415, Local_416, 1, 1, 0);
		unk_0xBD8D47FDC6902B2D(Local_169[6 /*2*/], Local_416, 1, 0, 0, 1);
		unk_0x48ED7B2293A96722(Local_169[6 /*2*/], fLocal_419);
		unk_0xEDC33A771FAEB393(Local_169[6 /*2*/], 1);
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_169[7 /*2*/]))
	{
		Local_169[7 /*2*/] = unk_0x5E35CF35E65D69B9(iLocal_420, unk_0x3F90543934DCD7E6(Local_169[6 /*2*/], Local_421), 1, 1, 0);
	}
	if (!unk_0x5D67DB68EF61B3E1(Local_169[7 /*2*/], Local_169[6 /*2*/]))
	{
		unk_0xA9D382E7BA095148(Local_169[7 /*2*/], Local_169[6 /*2*/], -1, Local_421, 0f, 0f, fLocal_424, 0, 0, 0, 0, 2, 1);
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_169[8 /*2*/]))
	{
		Local_169[8 /*2*/] = unk_0x5E35CF35E65D69B9(iLocal_425, unk_0x3F90543934DCD7E6(Local_169[7 /*2*/], Local_426), 1, 1, 0);
		unk_0xFBA991D3A851E195(Local_169[8 /*2*/], 0);
		unk_0xA9D382E7BA095148(Local_169[8 /*2*/], Local_169[7 /*2*/], -1, Local_426, 0f, 0f, fLocal_429, 0, 0, 0, 0, 2, 1);
		unk_0x6B7C10B19928914F(Local_169[8 /*2*/], 1, 0);
		unk_0xEDC33A771FAEB393(Local_169[8 /*2*/], 1);
	}
	if (!iLocal_384)
	{
		if (unk_0xEB5883460A471716(Local_169[7 /*2*/]) && unk_0xEB5883460A471716(Local_169[8 /*2*/]))
		{
			iLocal_439 = unk_0x58F1EB7F3E601A65(unk_0x3F90543934DCD7E6(Local_169[7 /*2*/], Local_433), 0f, 0f, 0f, 70f, 0, -1f, 4f, 1.4f, 0, 0, 1, 1f, 0, 0);
			unk_0x82ED74053AA96BE3(iLocal_439, 1);
			unk_0xB73444F9CF32C4F0(iLocal_439, 2);
			unk_0x12F9395B711FBB84(&iLocal_439, 0);
			unk_0xDD787996B4C13258(iLocal_439, Local_169[7 /*2*/], Local_169[8 /*2*/], unk_0x3F90543934DCD7E6(Local_169[7 /*2*/], Local_433), unk_0x3F90543934DCD7E6(Local_169[8 /*2*/], Local_436), 70f, 0, 0, 0, 0);
			iLocal_384 = 1;
			return 1;
		}
		if (!unk_0xEB5883460A471716(Local_169[7 /*2*/]))
		{
		}
		if (!unk_0xEB5883460A471716(Local_169[8 /*2*/]))
		{
		}
	}
	return 0;
}

void func_214(int iParam0, int iParam1)
{
	unk_0x872F1C1F8587CCC7(&Global_25391, iParam0);
	StringCopy(&(Global_25392[iParam0 /*6*/]), unk_0x436287B7DB306165(), 24);
	Global_25447[iParam0] = iParam1;
}

void func_215(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(iParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(iParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 1);
			}
		}
	}
}

void func_216(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55913 = iParam0;
	if (!Global_55911)
	{
		Global_55911 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_67999[iVar0 /*9*/] == iParam0)
			{
				Global_67999[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_217(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_43(uParam0, Param1, Param4, func_81(), func_81(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_218(), func_218(), func_218(), func_218(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

var func_218()
{
	var uVar0;
	
	return uVar0;
}

void func_219(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x74C475EB8E73D398(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				if (uParam0->f_737[iVar0 /*5*/].f_1)
				{
					unk_0x751FF861325F816B(sParam1);
					func_84(&(uParam0->f_737[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_737[iVar0 /*5*/].f_2 = 1;
					uParam0->f_982 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_220()
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_2104)
	{
		case 0:
			if (unk_0x3E9CABD07B829173())
			{
				unk_0x59C3AC31C7544A28(800);
			}
			if (func_101(Local_55[0 /*2*/]))
			{
				if (!unk_0xA6DECE14FC9A8C51(Local_55[0 /*2*/].f_1))
				{
					Local_55[0 /*2*/].f_1 = func_32(Local_55[0 /*2*/], 0, 0);
				}
				Local_166 = { unk_0x02D0BDA66FE1496D(Local_55[0 /*2*/]) };
			}
			if (unk_0x6ADD12BF4D6D2587(Local_169[2 /*2*/]) && !unk_0xA6DECE14FC9A8C51(uLocal_378))
			{
				uLocal_378 = func_268(Local_169[2 /*2*/]);
			}
			unk_0x62BD54E491535B76(uLocal_378, "SUBBTN_LABEL");
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0x8810DC630928B398("DHP1_VEHICLE_ARRIVE");
			}
			else
			{
				unk_0x8810DC630928B398("DHP1_START");
			}
			if (func_101(Local_64[4 /*10*/]))
			{
				unk_0x771A86309E0CA47B(Local_64[4 /*10*/], 1);
				unk_0x08B32ADD0F9764A2(Local_64[4 /*10*/], 0);
			}
			func_267(&uLocal_460, cLocal_51);
			func_267(&uLocal_460, "MISSHEISTDOCKSPREP1HOLD_CELLPHONE");
			func_266(&uLocal_460, "PORT_OF_LS_PREP_1");
			func_29("dkp1_sub", 7500, 1);
			iLocal_399 = 0;
			iLocal_400 = 0;
			iLocal_401 = 0;
			iLocal_403 = unk_0x53C562FD2B9E3AB0();
			iLocal_404 = 0;
			iLocal_388 = 0;
			iLocal_398 = 0;
			if (uLocal_2113[0] == -1)
			{
				uLocal_2113[0] = unk_0xD0CA83418A236CB4();
			}
			if (uLocal_2113[1] == -1)
			{
				uLocal_2113[1] = unk_0xD0CA83418A236CB4();
			}
			iLocal_2104++;
			break;
		
		case 1:
			if (iLocal_383)
			{
				if (((!unk_0xAD7686CEFD4B3390(&(Local_145[0 /*5*/])) && !unk_0xAD7686CEFD4B3390(&(Local_145[1 /*5*/]))) && !unk_0xAD7686CEFD4B3390(&(Local_145[2 /*5*/]))) && !unk_0xAD7686CEFD4B3390(&(Local_145[3 /*5*/])))
				{
					unk_0xE72A0C03FD344C5F(Local_169[0 /*2*/]);
					unk_0xE72A0C03FD344C5F(Local_169[1 /*2*/]);
					if (func_101(Local_55[0 /*2*/]))
					{
						unk_0x4A93BD072EEEA421(Local_55[0 /*2*/], Local_166);
					}
					if (unk_0xA6DECE14FC9A8C51(uLocal_378))
					{
						unk_0xE30CF11C0EE14316(&uLocal_378);
					}
					func_262(1);
					func_82(&uLocal_460, joaat("s_m_m_security_01"));
					func_267(&uLocal_460, cLocal_49);
					unk_0x8810DC630928B398("DHP1_RELEASED");
					unk_0x3E80C2F7BC665259(1);
					iLocal_452 = unk_0x53C562FD2B9E3AB0();
					iLocal_2104 = 4;
				}
				func_261();
				if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1249.106f, -3007.908f, 10.84327f, 1249.962f, -3007.837f, 8.31909f, 1.68f, 0, 1, 0) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) && !func_205(0))
				{
					if (unk_0xE8C126B7ADBB9D63(2, 51))
					{
						uLocal_444 = unk_0x5AC38B4D80D4E352(26379945, 1249.929f, -3010.267f, 9.590105f, 5.351202f, -1.57369f, 8.12499f, 21.33357f, 1, 2);
						unk_0xA6DE0FBA9218D7F0(uLocal_444, 1249.929f, -3010.267f, 9.590105f, 4.448765f, -1.5737f, 12.68005f, 21.33357f, 3500, 0, 1, 2);
						unk_0x7E4FCDC8BAD0CF6D(uLocal_444, "hand_shake", 0.3f);
						func_202(0, 1249.787f, -3008.016f, 8.52751f, 1, 0, 1, 3000, 0, 1);
						unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), 1);
						unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
						uLocal_381 = unk_0x8383F9C605E523B7(1250.01f, -3007.9f, 9.32f, 0f, 0f, 90f, 2);
						if (unk_0x16700A5CF29C1FC1(unk_0xFC1458A37D98B502()))
						{
							unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), uLocal_381, cLocal_51, "ig_1_stealth_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						else
						{
							unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), uLocal_381, cLocal_51, "ig_1_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
						unk_0x3E80C2F7BC665259(1);
						iVar0 = unk_0x87889570F3396ABD(1249.787f, -3008.016f, 8.52751f, 5f, 0, 4);
						if (func_101(iVar0))
						{
							unk_0xBD8D47FDC6902B2D(iVar0, 1250.333f, -3010.219f, 8.3191f, 1, 0, 0, 1);
							unk_0x48ED7B2293A96722(iVar0, 85.8086f);
							unk_0xACE486395AA1867D(iVar0, 1084227584);
						}
						unk_0x1267474D9A69CA37(4f, 0f, 4);
						unk_0x0662098C9EF126B4(4);
						iLocal_445 = 1;
						iLocal_2104++;
					}
					else if (!func_210("DKP1_BTN"))
					{
						func_260("DKP1_BTN");
					}
				}
				else if (func_210("DKP1_BTN"))
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xD56F740235B1E8F0(uLocal_381) || unk_0x463C4747B41E35A3(uLocal_381) == 1f)
			{
				unk_0x61635C0A7950C875();
				unk_0x23A4CE7F9EBB02D4(-1, "SUB_RELEASE", 1260.896f, -3006.556f, 23.4213f, "DOCKS_HEIST_PREP_1_SOUNDSET", 0, 0, 0);
				unk_0xA6DE0FBA9218D7F0(uLocal_444, 1249f, -3010.3f, 10.7f, 37.7f, 0f, -61.5f, 43.4f, 0, 1, 1, 2);
				unk_0xA6DE0FBA9218D7F0(uLocal_444, 1249f, -3010.3f, 10.7f, -20.1f, 0f, -48.2f, 43.4f, 1700, 2, 2, 2);
				unk_0x2D506790E8BD950D(uLocal_444, 0.1f);
				unk_0x891149BAD9BBBEF5(Local_145[0 /*5*/], Local_55[0 /*2*/]);
				unk_0x891149BAD9BBBEF5(Local_145[1 /*5*/], Local_55[0 /*2*/]);
				unk_0x891149BAD9BBBEF5(Local_145[2 /*5*/], Local_55[0 /*2*/]);
				unk_0x891149BAD9BBBEF5(Local_145[3 /*5*/], Local_55[0 /*2*/]);
				unk_0xE72A0C03FD344C5F(Local_169[0 /*2*/]);
				unk_0xE72A0C03FD344C5F(Local_169[1 /*2*/]);
				if (func_101(Local_55[0 /*2*/]))
				{
					unk_0x4A93BD072EEEA421(Local_55[0 /*2*/], Local_166);
					unk_0x764B52EA8B8FFFA3(Local_55[0 /*2*/]);
				}
				iLocal_452 = unk_0x53C562FD2B9E3AB0();
				unk_0x8810DC630928B398("DHP1_RELEASED");
				unk_0x3E80C2F7BC665259(1);
				iLocal_445 = 1;
				iLocal_2104++;
			}
			else if (unk_0xD56F740235B1E8F0(uLocal_381) && unk_0x463C4747B41E35A3(uLocal_381) >= 0.7f)
			{
				if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 713668775) != 1)
				{
					unk_0x380C1E7B7740D618(unk_0xFC1458A37D98B502(), 1252.594f, -3008.883f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
				}
			}
			break;
		
		case 3:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_452) > 1500)
			{
				if (iLocal_445)
				{
					unk_0xA6DE0FBA9218D7F0(uLocal_444, 1261.7f, -3013.3f, 21.7f, -62.7f, 0f, 29.5f, 40.4f, 0, 3, 3, 2);
					unk_0xA6DE0FBA9218D7F0(uLocal_444, 1259.9f, -3014.1f, 21.7f, -67.7f, 0f, 16.5f, 40.4f, 4000, 3, 3, 2);
					iLocal_445 = 0;
				}
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_452) > 5000 || unk_0xE8C126B7ADBB9D63(2, 201))
				{
					if (unk_0xA6DECE14FC9A8C51(uLocal_378))
					{
						unk_0xE30CF11C0EE14316(&uLocal_378);
					}
					func_262(1);
					func_82(&uLocal_460, joaat("s_m_m_security_01"));
					func_267(&uLocal_460, cLocal_49);
					unk_0xBB9A3C553EECB180(0f);
					unk_0x7C9705890EF6612E(0f, 1065353216);
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					func_190(1, 0, 0, 3000, 0);
					iLocal_452 = unk_0x53C562FD2B9E3AB0();
					iLocal_2104++;
				}
			}
			break;
		
		case 4:
			if (!func_259())
			{
				if (func_19() == 2)
				{
					if (!func_256(func_257(0), 0) && !func_256(func_257(1), 0))
					{
						func_255(12);
						iLocal_2104++;
					}
					else if (func_256(func_257(0), 0) && !func_256(func_257(1), 0))
					{
						func_215(&uLocal_213, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
						func_215(&uLocal_213, 1, func_257(0), "MICHAEL", 0, 1);
						if (func_252(&uLocal_213, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_2", 7, 0, 0))
						{
							func_255(12);
							iLocal_2104++;
						}
					}
					else if (!func_256(func_257(0), 0) && func_256(func_257(1), 0))
					{
						func_215(&uLocal_213, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
						func_215(&uLocal_213, 2, func_257(1), "FRANKLIN", 0, 1);
						if (func_252(&uLocal_213, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_3", 7, 0, 0))
						{
							func_255(12);
							iLocal_2104++;
						}
					}
					else
					{
						func_215(&uLocal_213, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
						func_215(&uLocal_213, 1, func_257(0), "MICHAEL", 0, 1);
						func_215(&uLocal_213, 2, func_257(1), "FRANKLIN", 0, 1);
						if (func_12(&uLocal_213, "DHP1AUD", "DHP1_BUD", 7, 0, 0, 0))
						{
							func_255(12);
							iLocal_2104++;
						}
					}
				}
				else if (func_30())
				{
					func_29("DKP1_SWTCH", 7500, 1);
				}
			}
			break;
		
		case 5:
			Var1 = { unk_0xB3328BA8976B416C(Local_55[0 /*2*/], 1) };
			if (unk_0x8AA8CAD184F4332C(Local_55[0 /*2*/]) > 0f || Var1.f_2 < -0.5f)
			{
				unk_0xAE27C7A0EBE2A588(Local_145[0 /*5*/]);
				unk_0xAE27C7A0EBE2A588(Local_145[1 /*5*/]);
				unk_0xAE27C7A0EBE2A588(Local_145[2 /*5*/]);
				unk_0xAE27C7A0EBE2A588(Local_145[3 /*5*/]);
				if (uLocal_2113[0] != -1)
				{
					unk_0x0B9D04994D02CC2F(uLocal_2113[0]);
				}
				if (uLocal_2113[1] != -1)
				{
					unk_0x0B9D04994D02CC2F(uLocal_2113[1]);
				}
			}
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_55[0 /*2*/], 0))
			{
				func_221(1218.237f, -3005.128f, 4.8658f, 359.5065f, 0, 145);
				if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
				{
					Local_64[6 /*10*/] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 1, 1);
					unk_0x9E058151726E58DE(Local_64[6 /*10*/], joaat("weapon_pistol"), -1, 0, 1);
					unk_0xAE01EF4BC84AFE7C(Local_64[6 /*10*/], 330, 1);
					unk_0x96BE6A861D01CDC5(Local_64[6 /*10*/], 1);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
					unk_0x6931076730A4AC5D(&uLocal_379);
					unk_0x380C1E7B7740D618(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2048, 2);
					unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
					unk_0x1B16DD5C115FE009(uLocal_379);
					unk_0xAB30B1CF01A198C1(Local_64[6 /*10*/], uLocal_379);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
					Local_64[7 /*10*/] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 1, 1);
					unk_0xAE01EF4BC84AFE7C(Local_64[7 /*10*/], 330, 1);
					unk_0x9E058151726E58DE(Local_64[7 /*10*/], joaat("weapon_pistol"), -1, 0, 1);
					unk_0x96BE6A861D01CDC5(Local_64[7 /*10*/], 1);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
					unk_0x6931076730A4AC5D(&uLocal_379);
					unk_0x380C1E7B7740D618(0, 1252.056f, -3006.94f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2048, 2);
					unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
					unk_0x1B16DD5C115FE009(uLocal_379);
					unk_0xAB30B1CF01A198C1(Local_64[7 /*10*/], uLocal_379);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
					func_83(&uLocal_460, joaat("s_m_m_security_01"));
				}
				else
				{
					Local_64[5 /*10*/] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_m_dockwork_01"), 1228.929f, -3015.008f, 8.31909f, 0f, 1, 1);
					unk_0x771A86309E0CA47B(Local_64[5 /*10*/], 1);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
					unk_0x6931076730A4AC5D(&uLocal_379);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2096, 2);
					unk_0x380C1E7B7740D618(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					unk_0x12C9D41D52A560D6(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
					unk_0x12C9D41D52A560D6(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
					unk_0xFC5999E8B820470E(0, 1252.876f, -3014.035f, 8.31909f, 300f, -1, 0, 0);
					unk_0x1B16DD5C115FE009(uLocal_379);
					unk_0xAB30B1CF01A198C1(Local_64[5 /*10*/], uLocal_379);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
					func_83(&uLocal_460, joaat("s_m_m_security_01"));
				}
				if (func_101(Local_64[4 /*10*/]))
				{
					unk_0xB8E08BD5B184DF4E(Local_64[4 /*10*/]);
					unk_0xBD8D47FDC6902B2D(Local_64[4 /*10*/], 1229.557f, -3002.882f, 8.31909f, 1, 0, 0, 1);
				}
				else
				{
					Local_64[4 /*10*/] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_m_dockwork_01"), 1229.557f, -3002.882f, 8.31909f, -99f, 1, 1);
				}
				unk_0x771A86309E0CA47B(Local_64[4 /*10*/], 1);
				unk_0x8BB5ECF21DDE505B(Local_64[4 /*10*/], 1);
				unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
				unk_0x6931076730A4AC5D(&uLocal_379);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2096, 2);
				unk_0x380C1E7B7740D618(0, 1252.994f, -3004.134f, 9.319f, 2f, 20000, 0.25f, 0, 40000f);
				unk_0x12C9D41D52A560D6(0, cLocal_49, "react_big_variations_f", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_49, "react_big_variations_h", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_49, "react_big_variations_f", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0xFC5999E8B820470E(0, 1252.994f, -3004.134f, 9.319f, 300f, -1, 0, 0);
				unk_0x1B16DD5C115FE009(uLocal_379);
				unk_0xAB30B1CF01A198C1(Local_64[4 /*10*/], uLocal_379);
				unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
				iLocal_456 = unk_0x53C562FD2B9E3AB0();
				iLocal_459 = 0;
				iLocal_458 = 0;
				unk_0x3E80C2F7BC665259(1);
				unk_0x8810DC630928B398("DHP1_SUB");
				if (unk_0xA6DECE14FC9A8C51(Local_55[0 /*2*/].f_1))
				{
					unk_0xE30CF11C0EE14316(&(Local_55[0 /*2*/].f_1));
				}
				unk_0x3A703774620FDB42(&(Local_169[3 /*2*/]));
				unk_0x3A703774620FDB42(&(Local_169[0 /*2*/]));
				unk_0x3A703774620FDB42(&(Local_169[1 /*2*/]));
				func_83(&uLocal_460, joaat("p_amb_phone_01"));
				func_83(&uLocal_460, joaat("s_m_m_dockwork_01"));
				func_83(&uLocal_460, joaat("prop_ld_test_01"));
				func_83(&uLocal_460, joaat("prop_sub_release"));
				func_212(&uLocal_460, cLocal_51);
				unk_0xD22D83D359390CC6("docksprep1");
				unk_0x1267474D9A69CA37(15f, 10f, 4);
				func_188(1);
				iLocal_2104 = 0;
			}
			else if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(Local_55[0 /*2*/], 1), 1) < 5f && !iLocal_388)
			{
				func_211("DKP1_CLIMB", -1);
				iLocal_388 = 1;
			}
			break;
	}
	if ((!iLocal_398 && func_101(Local_55[0 /*2*/])) && unk_0x0BA31FF7931F3DD3(Local_55[0 /*2*/]))
	{
		unk_0x7CC4363AEEF7EF34(-1, "SUB_SPLASH", Local_55[0 /*2*/], "DOCKS_HEIST_PREP_1_SOUNDSET", 0, 0);
		iLocal_398 = 1;
	}
	if (((!iLocal_383 && unk_0x6ADD12BF4D6D2587(Local_169[0 /*2*/])) && unk_0x6ADD12BF4D6D2587(Local_169[1 /*2*/])) && func_101(Local_55[0 /*2*/]))
	{
		if (unk_0xEB5883460A471716(Local_169[0 /*2*/]) && unk_0xEB5883460A471716(Local_169[1 /*2*/]))
		{
			unk_0xB5B93C916AD32009(Local_55[0 /*2*/]);
			Local_145[0 /*5*/] = unk_0x58F1EB7F3E601A65(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_2109, 1, fLocal_2109, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0xDD787996B4C13258(Local_145[0 /*5*/], Local_169[0 /*2*/], Local_55[0 /*2*/], unk_0x3F90543934DCD7E6(Local_169[0 /*2*/], 0f, 0f, 0f), unk_0x3F90543934DCD7E6(Local_55[0 /*2*/], 1.8f, 1.02f, 1.11f), fLocal_2109, 0, 0, 0, 0);
			Local_145[1 /*5*/] = unk_0x58F1EB7F3E601A65(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_2109, 1, fLocal_2109, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0xDD787996B4C13258(Local_145[1 /*5*/], Local_169[0 /*2*/], Local_55[0 /*2*/], unk_0x3F90543934DCD7E6(Local_169[0 /*2*/], 0f, 0f, 0f), unk_0x3F90543934DCD7E6(Local_55[0 /*2*/], -1.8f, 1.02f, 1.11f), fLocal_2109, 0, 0, 0, 0);
			Local_145[2 /*5*/] = unk_0x58F1EB7F3E601A65(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_2109, 1, fLocal_2109, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0xDD787996B4C13258(Local_145[2 /*5*/], Local_169[1 /*2*/], Local_55[0 /*2*/], unk_0x3F90543934DCD7E6(Local_169[1 /*2*/], 0f, 0f, 0f), unk_0x3F90543934DCD7E6(Local_55[0 /*2*/], 1.8f, -3.07f, 1.11f), fLocal_2109, 0, 0, 0, 0);
			Local_145[3 /*5*/] = unk_0x58F1EB7F3E601A65(1260.752f, -3004.994f, 22.68315f, 0f, 0f, 0f, fLocal_2109, 1, fLocal_2109, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0xDD787996B4C13258(Local_145[3 /*5*/], Local_169[1 /*2*/], Local_55[0 /*2*/], unk_0x3F90543934DCD7E6(Local_169[1 /*2*/], 0f, 0f, 0f), unk_0x3F90543934DCD7E6(Local_55[0 /*2*/], -1.8f, -3.07f, 1.11f), fLocal_2109, 0, 0, 0, 0);
			iLocal_383 = 1;
			iLocal_385 = 0;
			unk_0x764B52EA8B8FFFA3(Local_55[0 /*2*/]);
			unk_0x218AB919A4668C70(Local_55[0 /*2*/], 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
		}
	}
	else if (func_101(Local_55[0 /*2*/]))
	{
		if (!iLocal_385)
		{
			unk_0x764B52EA8B8FFFA3(Local_55[0 /*2*/]);
			iLocal_385 = 1;
		}
		unk_0xEDC33A771FAEB393(Local_55[0 /*2*/], 0);
		unk_0x218AB919A4668C70(Local_55[0 /*2*/], 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
	}
	if (!iLocal_386)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_169[3 /*2*/]))
		{
			if (unk_0xEB5883460A471716(Local_169[3 /*2*/]))
			{
				unk_0xA9D382E7BA095148(Local_169[3 /*2*/], Local_64[4 /*10*/], unk_0xDD09837E5235FE91(Local_64[4 /*10*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				iLocal_386 = 1;
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(Local_169[3 /*2*/]) && ((func_101(Local_64[4 /*10*/]) && unk_0xA6FA9E5D08F067AD(Local_64[4 /*10*/])) || !func_101(Local_64[4 /*10*/])))
	{
		if (func_101(Local_64[4 /*10*/]) && unk_0xA5F6598E13F98E08(Local_64[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
		{
			unk_0x7976C9958C60E354(Local_64[4 /*10*/], cLocal_50, "cellphone_call_listen_c", -1056964608);
		}
		if (unk_0x6049C20F5D5C185B(Local_169[3 /*2*/]))
		{
			unk_0x6B7C10B19928914F(Local_169[3 /*2*/], 1, 1);
		}
	}
	if (func_19() == 2)
	{
		if (func_101(Local_55[0 /*2*/]))
		{
			unk_0xCF5EB2CB1B30F02C(Local_55[0 /*2*/], 1);
		}
	}
	else if (func_101(Local_55[0 /*2*/]))
	{
		unk_0xCF5EB2CB1B30F02C(Local_55[0 /*2*/], 0);
	}
}

void func_221(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x6ADD12BF4D6D2587(Global_95149.f_4))
	{
		if (unk_0xB8DE76287EDC4957(Global_95149.f_4, 0))
		{
			if (func_251(24) != Global_95149.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_248(unk_0xB3328BA8976B416C(Global_95149.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_222(Global_95149.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_222(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[25]) && unk_0xB8DE76287EDC4957(Global_69678.f_484[25], 0))
			{
				if (Global_69678.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x8F1CCD9A61E026D8(iParam0) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("bus")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_247(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_115(iParam0, &Var0);
		if (func_89(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
			uParam4 = unk_0xF0371FE6E2BF9599(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) != joaat("vehicle_gen_controller"))
			{
				Global_70666 = unk_0x8B948C59217A295D(unk_0x436287B7DB306165());
			}
		}
		func_241(iParam5, &Var0, Param1, uParam4, func_111(iParam0));
		func_223(iParam5, iParam0, 0);
	}
}

void func_223(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_240(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 12) && !unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69678.f_555[0 /*21*/].f_4 != unk_0x82FF3DFBC3965CC0(iParam1))
		{
			return;
		}
	}
	if (Global_70585 != -1 && Global_70585 != iParam0)
	{
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(iParam1))
	{
		if (unk_0xB8DE76287EDC4957(iParam1, 0))
		{
			if (!unk_0x9761C10D57B68069(iParam1))
			{
				unk_0xDD29FF4BAB8AFF9C(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_104555.f_32429.f_4801 = func_164();
			}
			if (iParam1 != Global_69678.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_251(iParam0);
					if ((unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0)) && iParam1 != iVar0)
					{
						func_224(iVar0, 145);
					}
				}
				Global_70584 = iParam1;
				Global_70585 = iParam0;
				Global_70586 = iParam2;
			}
		}
	}
}

void func_224(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_225(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x317536BCEA8FA6B0(iParam0, -1, 0);
		if (!unk_0x6ADD12BF4D6D2587(iVar0))
		{
			iVar0 = unk_0x96D3C6B7ED86BE3A(iParam0, -1);
		}
		if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x3AB6A1A9084FB0A4(iVar0))
		{
			if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_104555.f_2353.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x82FF3DFBC3965CC0(iParam0) == Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xAB019B170BF1309C(&(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x74C475EB8E73D398(unk_0xF2D2D6860D636A58(iParam0), &(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104555.f_32429.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x82FF3DFBC3965CC0(iParam0) == Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xAB019B170BF1309C(&(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x74C475EB8E73D398(unk_0xF2D2D6860D636A58(iParam0), &(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104555.f_32429.f_5590 = iParam1;
	Global_70583 = iParam0;
	Global_104555.f_32429.f_5588 = 1;
	func_115(iParam0, &(Global_104555.f_32429.f_5510));
}

int func_225(int iParam0)
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_121(iParam0, 0, 0)) || func_121(iParam0, 1, 0)) || func_121(iParam0, 2, 0)) || func_111(iParam0) != 145) || func_239(iParam0)) || func_238(iParam0)) || func_237(iParam0)) || func_236(iParam0)) || !func_226(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_238(iParam0))
		{
		}
		if (func_238(iParam0))
		{
		}
		if (func_121(iParam0, 0, 0))
		{
		}
		if (func_121(iParam0, 1, 0))
		{
		}
		if (func_121(iParam0, 2, 0))
		{
		}
		if (func_111(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_226(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_227(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x428C7026AD2721BA(iParam0) || unk_0x849A8CFD71854E02(iParam0)) || unk_0xF9DDB1C0875FD9E0(iParam0)) || unk_0x3C4FA7AE145B3F72(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_227(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC8A14E3C7BE76201(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x3A711520F83BAE98()) || (iParam0 == joaat("buffalo3") && !unk_0x3A711520F83BAE98())) || (iParam0 == joaat("gauntlet2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blista3"))
	{
		if (!func_235())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF2653182352C7FB1())
		{
			if (unk_0x4F531CBC79B8645A(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x42683C90F2D005ED(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_234() && !func_233()) && !func_232()) && !func_231()) && !func_235())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_232())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_230(iParam0))
		{
			return 0;
		}
	}
	if (!func_228(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_228(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_229())
	{
		return 1;
	}
	unk_0xD424C225D6534505(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xBBA20694DE4179EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_229()
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_230(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2492197)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE3CCAFB1555348DF();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12250) && iVar1 < Global_262145.f_12251)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13548 && iVar1 < Global_262145.f_13560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13544 && iVar1 < Global_262145.f_13556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13545 && iVar1 < Global_262145.f_13557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13546 && iVar1 < Global_262145.f_13558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13547 && iVar1 < Global_262145.f_13559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13549 && iVar1 < Global_262145.f_13561)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13550 && iVar1 < Global_262145.f_13553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13551 && iVar1 < Global_262145.f_13554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13552 && iVar1 < Global_262145.f_13555)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16179 && iVar1 < Global_262145.f_16144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16174 && iVar1 < Global_262145.f_16139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16178 && iVar1 < Global_262145.f_16143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16177 && iVar1 < Global_262145.f_16142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16172 && iVar1 < Global_262145.f_16137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16175 && iVar1 < Global_262145.f_16140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16176 && iVar1 < Global_262145.f_16141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16173 && iVar1 < Global_262145.f_16138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16181 && iVar1 < Global_262145.f_16146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16182 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16180 && iVar1 < Global_262145.f_16145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16183 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16184 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16185 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16186 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16331 && iVar1 < Global_262145.f_16353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16332 && iVar1 < Global_262145.f_16354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16333 && iVar1 < Global_262145.f_16355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16334 && iVar1 < Global_262145.f_16356)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16335 && iVar1 < Global_262145.f_16357)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16336 && iVar1 < Global_262145.f_16358)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16338 && iVar1 < Global_262145.f_16359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16339 && iVar1 < Global_262145.f_16360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16340 && iVar1 < Global_262145.f_16361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16341 && iVar1 < Global_262145.f_16362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16342 && iVar1 < Global_262145.f_16363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16343 && iVar1 < Global_262145.f_16364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16344 && iVar1 < Global_262145.f_16365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16350 && iVar1 < Global_262145.f_16372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16347 && iVar1 < Global_262145.f_16368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16348 && iVar1 < Global_262145.f_16369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16349 && iVar1 < Global_262145.f_16370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16337 && iVar1 < Global_262145.f_16371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16351 && iVar1 < Global_262145.f_16373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16345 && iVar1 < Global_262145.f_16366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16346 && iVar1 < Global_262145.f_16367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16352 && iVar1 < Global_262145.f_16374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17980 && iVar1 < Global_262145.f_18056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17981 && iVar1 < Global_262145.f_18057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17982 && iVar1 < Global_262145.f_18058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17983 && iVar1 < Global_262145.f_18059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17984 && iVar1 < Global_262145.f_18060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17985 && iVar1 < Global_262145.f_18061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17986 && iVar1 < Global_262145.f_18062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17987 && iVar1 < Global_262145.f_18063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17988 && iVar1 < Global_262145.f_18064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17989 && iVar1 < Global_262145.f_18065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17990 && iVar1 < Global_262145.f_18066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17991 && iVar1 < Global_262145.f_18067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17992 && iVar1 < Global_262145.f_18068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17993 && iVar1 < Global_262145.f_18069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17994 && iVar1 < Global_262145.f_18070)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17995 && iVar1 < Global_262145.f_18071)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17996 && iVar1 < Global_262145.f_18072)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17997 && iVar1 < Global_262145.f_18073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17998 && iVar1 < Global_262145.f_18074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17999 && iVar1 < Global_262145.f_18075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18000 && iVar1 < Global_262145.f_18076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18001 && iVar1 < Global_262145.f_18077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18002 && iVar1 < Global_262145.f_18078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18003 && iVar1 < Global_262145.f_18079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18004 && iVar1 < Global_262145.f_18080)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19037 && iVar1 < Global_262145.f_19033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19038 && iVar1 < Global_262145.f_19034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19039 && iVar1 < Global_262145.f_19035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19040 && iVar1 < Global_262145.f_19036)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19916 && iVar1 < Global_262145.f_19924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19917 && iVar1 < Global_262145.f_19925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19918 && iVar1 < Global_262145.f_19926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19929)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20692 && iVar1 < Global_262145.f_20712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20704 && iVar1 < Global_262145.f_20724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20695 && iVar1 < Global_262145.f_20715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20705 && iVar1 < Global_262145.f_20725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20693 && iVar1 < Global_262145.f_20713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20709 && iVar1 < Global_262145.f_20729)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20707 && iVar1 < Global_262145.f_20727)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20708 && iVar1 < Global_262145.f_20728)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20703 && iVar1 < Global_262145.f_20723)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20710 && iVar1 < Global_262145.f_20730)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20706 && iVar1 < Global_262145.f_20726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20702 && iVar1 < Global_262145.f_20722)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20694 && iVar1 < Global_262145.f_20714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20696 && iVar1 < Global_262145.f_20716)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20697 && iVar1 < Global_262145.f_20717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20698 && iVar1 < Global_262145.f_20718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20699 && iVar1 < Global_262145.f_20719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20700 && iVar1 < Global_262145.f_20720)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20701 && iVar1 < Global_262145.f_20721)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21653 && iVar1 < Global_262145.f_21681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21654 && iVar1 < Global_262145.f_21682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21655 && iVar1 < Global_262145.f_21683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21656 && iVar1 < Global_262145.f_21684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21657 && iVar1 < Global_262145.f_21685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21658 && iVar1 < Global_262145.f_21686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21659 && iVar1 < Global_262145.f_21687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21660 && iVar1 < Global_262145.f_21688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21661 && iVar1 < Global_262145.f_21689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21662 && iVar1 < Global_262145.f_21690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21663 && iVar1 < Global_262145.f_21691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21664 && iVar1 < Global_262145.f_21692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21665 && iVar1 < Global_262145.f_21693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21666 && iVar1 < Global_262145.f_21694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21667 && iVar1 < Global_262145.f_21695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21668 && iVar1 < Global_262145.f_21696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21669 && iVar1 < Global_262145.f_21697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21670 && iVar1 < Global_262145.f_21698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21671 && iVar1 < Global_262145.f_21699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21672 && iVar1 < Global_262145.f_21700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21673 && iVar1 < Global_262145.f_21701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21674 && iVar1 < Global_262145.f_21702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21675 && iVar1 < Global_262145.f_21703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21676 && iVar1 < Global_262145.f_21704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21677 && iVar1 < Global_262145.f_21705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21678 && iVar1 < Global_262145.f_21706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21679 && iVar1 < Global_262145.f_21707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21680 && iVar1 < Global_262145.f_21708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_22787 && iVar1 < Global_262145.f_22803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_22788 && iVar1 < Global_262145.f_22804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_22792 && iVar1 < Global_262145.f_22808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_22795 && iVar1 < Global_262145.f_22811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_22800 && iVar1 < Global_262145.f_22816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_22794 && iVar1 < Global_262145.f_22810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_22786 && iVar1 < Global_262145.f_22802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_22793 && iVar1 < Global_262145.f_22809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_22799 && iVar1 < Global_262145.f_22815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_22798 && iVar1 < Global_262145.f_22814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_22789 && iVar1 < Global_262145.f_22805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_22791 && iVar1 < Global_262145.f_22807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_22801 && iVar1 < Global_262145.f_22817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_22797 && iVar1 < Global_262145.f_22813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_22790 && iVar1 < Global_262145.f_22806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_22796 && iVar1 < Global_262145.f_22812)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_231()
{
	return 0;
}

int func_232()
{
	return 1;
}

int func_233()
{
	return 1;
}

int func_234()
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_235()
{
	var uVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0x9881A219FD811741())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x872F1C1F8587CCC7(&uVar0, 2);
				unk_0x872F1C1F8587CCC7(&uVar0, 4);
				unk_0x872F1C1F8587CCC7(&uVar0, 6);
				unk_0x872F1C1F8587CCC7(&Global_25, 2);
				unk_0x872F1C1F8587CCC7(&Global_25, 4);
				unk_0x872F1C1F8587CCC7(&Global_25, 6);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x2E68557F22711FDA())
				{
					uVar0 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&uVar0, 0);
					unk_0xDDFB38BD8B59BBB9(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (unk_0x2E68557F22711FDA())
	{
		if (unk_0xC80D31E4B587871C(unk_0x496616BFA56C89EB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_227(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90339[iVar0]))
		{
			if (Global_90339[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_238(int iParam0)
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]) && unk_0xB8DE76287EDC4957(Global_90309[iVar0], 0))
			{
				if (Global_90309[iVar0] == iParam0 && unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == unk_0x82FF3DFBC3965CC0(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[24]))
	{
		if (iParam0 == Global_69678.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69678.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_240(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_113(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_113(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_113(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_113(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_113(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_113(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_113(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_113(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_113(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 11);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 11);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 9);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 9);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_235())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_235())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_104555.f_32429.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_89(Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_104555.f_32429.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_104555.f_32429.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_9, 19))
	{
		if (!func_89(Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_9, 20))
	{
		if (!func_89(Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_241(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_240(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
		{
			func_246(iParam0);
			func_245(uParam1, &(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 11))
			{
				Global_104555.f_32429.f_1864[Global_69678.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_104555.f_32429.f_1934[Global_69678.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_104555.f_32429.f_1864[Global_69678.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_104555.f_32429.f_1934[Global_69678.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_242(iParam0, 1);
		}
	}
}

void func_242(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_244(iParam0, 0))
		{
			func_243(iParam0, 1, 0);
			func_243(iParam0, 2, 0);
			func_243(iParam0, 3, 0);
			func_243(iParam0, 4, 0);
			func_243(iParam0, 0, 1);
			Global_69678[iParam0] = 1;
		}
	}
	else
	{
		func_243(iParam0, 0, 0);
	}
}

void func_243(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_32429[iParam0]), iParam1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_32429[iParam0]), iParam1);
	}
}

bool func_244(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_32429[iParam0], iParam1);
}

void func_245(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_246(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_240(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], 1, 1);
			unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
			Global_69678.f_139[iParam0] = 0;
		}
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			func_242(iParam0, 0);
		}
	}
}

void func_247(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_246(iParam0);
	func_242(iParam0, 0);
}

int func_248(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_249(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_249(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_88016[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88016[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_250(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xBE3C4023003180FC(Param0, Global_88016[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_250(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_104555.f_7199[iParam0], 0);
}

int func_251(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69678.f_139[iParam0];
}

bool func_252(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar11;
	
	func_28(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	func_254(2, &uVar0, &uVar11, sParam2, sParam3, sParam4, sParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_253(&uVar0, &uVar11, iParam6, 0);
}

int func_253(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam2 > Global_15758)
			{
				if (bParam3 == 0)
				{
					unk_0xB31CEFB00C146C91(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
				}
				else
				{
					func_27();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_26(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_25();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16752 = Global_16753;
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15375.f_370 = Global_16745;
		Global_15752 = Global_15753;
		Global_15754 = Global_15755;
		if (Global_16014 == 0)
		{
			Global_15910[0 /*6*/] = { Global_15936[0 /*6*/] };
			Global_15910[1 /*6*/] = { Global_15936[1 /*6*/] };
			Global_15962[0 /*6*/] = { Global_15988[0 /*6*/] };
			Global_15962[1 /*6*/] = { Global_15988[1 /*6*/] };
			Global_15923[0 /*6*/] = { Global_15949[0 /*6*/] };
			Global_15923[1 /*6*/] = { Global_15949[1 /*6*/] };
			Global_15975[0 /*6*/] = { Global_16001[0 /*6*/] };
			Global_15975[1 /*6*/] = { Global_16001[1 /*6*/] };
		}
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam3)
			{
				func_18();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_17())
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (Global_16014 == 0)
					{
						if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
						{
							return 0;
						}
						if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
						{
							return 0;
						}
						if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
						{
							return 0;
						}
						if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
						{
							return 0;
						}
					}
				}
			}
			if (func_16())
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
			}
			func_15();
			Global_15766 = bParam3;
		}
		Global_15758 = iParam2;
		if (Global_15752 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15752)
			{
				StringCopy(&(Global_15375.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15375.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14622 = 0;
		func_14();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15758 || iParam2 == Global_15758)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_27();
	}
	return 0;
}

void func_254(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_15753 = iParam0;
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_255(int iParam0)
{
	unk_0x872F1C1F8587CCC7(&Global_88833, iParam0);
}

int func_256(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_22(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_257(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xFC1458A37D98B502())
			{
				return 0;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_88831, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_257(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_19())
	{
		return unk_0xFC1458A37D98B502();
	}
	return Global_90456[func_258(iParam0)];
}

int func_258(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_259()
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

void func_260(char* sParam0)
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, 1, -1);
}

void func_261()
{
	int iVar0;
	bool bVar1;
	
	iLocal_382 = 0;
	while (iLocal_382 < Local_145.f_0)
	{
		if (!unk_0xAD7686CEFD4B3390(&(Local_145[iLocal_382 /*5*/])))
		{
			if (!Local_145[iLocal_382 /*5*/].f_4)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		iLocal_382++;
	}
	if (bVar1)
	{
		if (((((!unk_0xAD7686CEFD4B3390(&(Local_145[0 /*5*/])) && !unk_0xAD7686CEFD4B3390(&(Local_145[1 /*5*/]))) && (!Local_145[0 /*5*/].f_4 || !Local_145[1 /*5*/].f_4)) || ((!unk_0xAD7686CEFD4B3390(&(Local_145[2 /*5*/])) && !unk_0xAD7686CEFD4B3390(&(Local_145[3 /*5*/]))) && (!Local_145[2 /*5*/].f_4 || !Local_145[3 /*5*/].f_4))) || iVar0 == 3) && iVar0 < 4)
		{
			if (iLocal_2116 > 0)
			{
				if (uLocal_2113[(iLocal_2116 - 1)] != -1)
				{
					unk_0x0B9D04994D02CC2F(uLocal_2113[(iLocal_2116 - 1)]);
				}
			}
			if (uLocal_2113[iLocal_2116] != -1)
			{
				unk_0x23A4CE7F9EBB02D4(uLocal_2113[iLocal_2116], "DOCKS_HEIST_PREP_1_SUB_SWING", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
				iLocal_2116++;
			}
		}
		else if (iVar0 <= 2)
		{
			unk_0x23A4CE7F9EBB02D4(-1, "DOCKS_HEIST_PREP_1_SUB_TILT", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
		}
		iLocal_382 = 0;
		while (iLocal_382 < Local_145.f_0)
		{
			if (!unk_0xAD7686CEFD4B3390(&(Local_145[iLocal_382 /*5*/])))
			{
				if (!Local_145[iLocal_382 /*5*/].f_4)
				{
					unk_0x23A4CE7F9EBB02D4(-1, "DOCKS_HEIST_PREP_1_CABLE_SNAP", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
				}
				Local_145[iLocal_382 /*5*/].f_4 = 1;
			}
			iLocal_382++;
		}
		if (iVar0 >= 4)
		{
			if (uLocal_2113[0] != -1)
			{
				unk_0x0B9D04994D02CC2F(uLocal_2113[0]);
			}
			if (uLocal_2113[1] != -1)
			{
				unk_0x0B9D04994D02CC2F(uLocal_2113[1]);
			}
		}
	}
}

void func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_82(&uLocal_460, joaat("submersible"));
			func_82(&uLocal_460, joaat("prop_ld_test_01"));
			func_82(&uLocal_460, joaat("prop_sub_release"));
			func_82(&uLocal_460, joaat("s_m_m_dockwork_01"));
			func_267(&uLocal_460, cLocal_50);
			func_267(&uLocal_460, cLocal_51);
			func_265(&uLocal_460, "docksprep1");
			func_82(&uLocal_460, joaat("p_amb_phone_01"));
			func_264(&uLocal_460);
			func_266(&uLocal_460, "PORT_OF_LS_PREP_1");
			break;
		
		case 1:
			func_82(&uLocal_460, joaat("submersible"));
			func_82(&uLocal_460, joaat("packer"));
			func_82(&uLocal_460, joaat("armytrailer"));
			func_82(&uLocal_460, iLocal_415);
			func_82(&uLocal_460, iLocal_420);
			func_82(&uLocal_460, iLocal_425);
			func_263(&uLocal_460);
			func_264(&uLocal_460);
			break;
		
		case 2:
		case 3:
			func_82(&uLocal_460, joaat("submersible"));
			func_82(&uLocal_460, joaat("packer"));
			func_82(&uLocal_460, joaat("armytrailer"));
			func_82(&uLocal_460, joaat("prop_sub_cover_01"));
			func_82(&uLocal_460, joaat("prop_tarp_strap"));
			break;
	}
}

void func_263(var uParam0)
{
	uParam0->f_860.f_2 = 0;
	if (!uParam0->f_860.f_1)
	{
		if (!uParam0->f_860)
		{
			unk_0x36905B9EE07F38CC();
			uParam0->f_860 = 1;
		}
		uParam0->f_982 = 1;
	}
}

void func_264(var uParam0)
{
	uParam0->f_864.f_2 = 0;
	if (!uParam0->f_864.f_1)
	{
		if (!uParam0->f_864)
		{
			unk_0x394C84DBE13729A9();
			uParam0->f_864 = 1;
		}
		uParam0->f_982 = 1;
	}
}

int func_265(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x74C475EB8E73D398(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x307EAE14C924E2E7(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x53C562FD2B9E3AB0();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_266(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x74C475EB8E73D398(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x1CF95440F1970B4F(sParam1, 0, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x53C562FD2B9E3AB0();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_267(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (unk_0x74C475EB8E73D398(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x6450931B826B49D9(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = unk_0x53C562FD2B9E3AB0();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_268(int iParam0)
{
	return func_33(iParam0, 1, 0);
}

void func_269()
{
	int iVar0;
	
	iLocal_382 = 0;
	while (iLocal_382 <= (8 - 1))
	{
		if (unk_0x6ADD12BF4D6D2587(Local_64[iLocal_382 /*10*/]))
		{
			if (Local_64[iLocal_382 /*10*/] != Local_64[3 /*10*/])
			{
				if (iLocal_2103 == 0)
				{
					func_284(Local_64[iLocal_382 /*10*/], &(Local_64[iLocal_382 /*10*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
				}
				else if (unk_0xA6DECE14FC9A8C51(Local_64[iLocal_382 /*10*/].f_2))
				{
					unk_0xE30CF11C0EE14316(&(Local_64[iLocal_382 /*10*/].f_2));
				}
			}
			if (unk_0x3AB6A1A9084FB0A4(Local_64[iLocal_382 /*10*/]))
			{
				if (Local_64[iLocal_382 /*10*/] == Local_64[3 /*10*/])
				{
					func_87(7);
				}
				func_9(&(Local_64[iLocal_382 /*10*/]), 1, 0, 1);
			}
			else if (iLocal_2103 == 2 && Local_64[iLocal_382 /*10*/] == Local_64[3 /*10*/])
			{
				if (func_10(Local_64[3 /*10*/], unk_0xFC1458A37D98B502(), 1) > 300f)
				{
					func_87(11);
				}
			}
		}
		iLocal_382++;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (4 - 1))
	{
		if (unk_0x6ADD12BF4D6D2587(Local_55[iLocal_382 /*2*/]))
		{
			if (!unk_0xB8DE76287EDC4957(Local_55[iLocal_382 /*2*/], 0))
			{
				if (Local_55[iLocal_382 /*2*/] == Local_55[0 /*2*/])
				{
					func_87(1);
				}
				else if (Local_55[iLocal_382 /*2*/] == Local_55[2 /*2*/] || Local_55[iLocal_382 /*2*/] == Local_55[1 /*2*/])
				{
					func_87(2);
				}
				else if (iLocal_382 == 3)
				{
					func_87(8);
				}
				func_283(&(Local_55[iLocal_382 /*2*/]));
			}
			else if (iLocal_392)
			{
				if (Local_55[iLocal_382 /*2*/] == Local_55[0 /*2*/] || Local_55[iLocal_382 /*2*/] == Local_55[1 /*2*/])
				{
					if (iLocal_2103 == 2)
					{
						if (unk_0x8AA8CAD184F4332C(Local_55[iLocal_382 /*2*/]) > 0.5f)
						{
							func_87(5);
						}
					}
				}
				if (Local_55[iLocal_382 /*2*/] == Local_55[2 /*2*/] || Local_55[iLocal_382 /*2*/] == Local_55[1 /*2*/])
				{
					if (func_282(&(Local_55[iLocal_382 /*2*/])))
					{
						func_87(3);
						func_283(&(Local_55[iLocal_382 /*2*/]));
					}
				}
				if (Local_55[iLocal_382 /*2*/] == Local_55[0 /*2*/])
				{
					if (iLocal_2103 == 1 && iLocal_2104 < 3)
					{
						if (func_282(&(Local_55[iLocal_382 /*2*/])))
						{
							func_87(4);
							func_283(&(Local_55[iLocal_382 /*2*/]));
						}
					}
				}
			}
		}
		iLocal_382++;
	}
	if (func_101(Local_55[0 /*2*/]) && func_101(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(Local_55[0 /*2*/], 1), 1) > 750f)
		{
			func_87(10);
		}
		else if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(Local_55[0 /*2*/], 1), 1) > 700f)
		{
			if (!iLocal_389 && func_30())
			{
				func_29("DKP1_ABSUB", 7500, 1);
				iLocal_389 = 1;
			}
		}
		else
		{
			iLocal_389 = 0;
		}
	}
	if (func_101(unk_0xFC1458A37D98B502()))
	{
		func_275();
	}
	if (iLocal_2103 == 0 && iLocal_2104 > 0)
	{
		func_272();
	}
	if (iLocal_2103 == 0 || iLocal_2103 == 1)
	{
		if (func_101(Local_55[0 /*2*/]))
		{
			if (!iLocal_2111)
			{
				func_271(Local_55[0 /*2*/], 588);
				iLocal_2111 = 1;
			}
		}
		else if (iLocal_2111)
		{
			func_271(0, 588);
			iLocal_2111 = 0;
		}
	}
	else if (iLocal_2103 == 2)
	{
		if (func_101(Local_55[2 /*2*/]))
		{
			if (!iLocal_2112)
			{
				func_271(Local_55[2 /*2*/], 590);
				iLocal_2112 = 1;
			}
		}
		else if (iLocal_2112)
		{
			func_271(0, 590);
			iLocal_2112 = 0;
		}
	}
	if ((((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1240.402f, -2880.396f, 8.25003f, 1240.384f, -2924.513f, 40.81909f, 28.875f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1240.222f, -3035.469f, 16.02625f, 1240.409f, -2924.159f, 8.06909f, 28.875f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1240.464f, -3035.127f, 13.00698f, 1240.617f, -3057.122f, 16.97133f, 27.6875f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1240.537f, -2967.822f, 32.94558f, 1240.792f, -2943.657f, 10.00659f, 12.1875f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1261.525f, -3006.275f, 29.21641f, 1237.788f, -3006.826f, 12.87723f, 8.1875f, 0, 1, 0))
	{
		unk_0xD962590C2CBF44C4(unk_0x8B948C59217A295D("V_FakeBoatPO1SH2A"), 1240f, -2970f, 0, 0);
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1);
		}
		else
		{
			iVar0 = unk_0xFC1458A37D98B502();
		}
		if ((!unk_0x0ACC2116170FA204(iVar0) && !unk_0x0BA31FF7931F3DD3(iVar0)) && (!unk_0x6ADD12BF4D6D2587(Local_55[0 /*2*/]) || !unk_0x9A213A2345825783(iVar0, Local_55[0 /*2*/])))
		{
			if (!iLocal_391)
			{
				func_270(593);
				iLocal_391 = 1;
			}
		}
	}
	if (!iLocal_393)
	{
		if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
		{
			unk_0x1B5A255BF0D63005("OnlyAllowScriptTriggerPoliceScanner", 1);
			unk_0xBF7C231271431D6C("SCRIPTED_SCANNER_REPORT_DH_PREP_1_01", 0f);
			iLocal_393 = 1;
		}
	}
	if (unk_0x689303135DD1F2F5())
	{
		unk_0x8A635286DA3C1E5B(Local_55[0 /*2*/]);
	}
}

void func_270(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55904 = 0;
	if (!Global_56128[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67998)
	{
		if (Global_67999[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67999[iVar1 /*9*/].f_1 = 1;
			Global_67999[iVar1 /*9*/].f_2 = 0f;
			if (Global_67999[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_271(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55916 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (iParam1 == -1 || Global_67999[iVar0 /*9*/] == iParam1)
		{
			if (Global_67999[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67999[iVar0 /*9*/].f_6 = iParam0;
				Global_67999[iVar0 /*9*/].f_7 = 1;
				Global_67999[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_272()
{
	switch (iLocal_399)
	{
		case 0:
			if (func_101(Local_64[4 /*10*/]))
			{
				if (iLocal_404)
				{
					unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
					if (unk_0xC316B5E3E7ACF515("docksprep1"))
					{
						unk_0xFB02C50CC0E93FAA(Local_64[4 /*10*/], "docksprep1", 0, 8, -1);
					}
					else
					{
						unk_0x307EAE14C924E2E7("docksprep1");
					}
				}
			}
			iLocal_405 = 0;
			iLocal_399 = 1;
			break;
		
		case 1:
			if (!iLocal_404)
			{
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_403) > 2000 || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(Local_64[4 /*10*/], 1), 1) < 10f)
				{
					iLocal_404 = 1;
					iLocal_399 = 0;
				}
			}
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0))
			{
				if (func_101(Local_64[4 /*10*/]))
				{
					if (unk_0x46D8E79A1B95ACE2(Local_64[4 /*10*/], unk_0xFC1458A37D98B502()))
					{
						unk_0xB8E08BD5B184DF4E(Local_64[4 /*10*/]);
						unk_0x3D1231846F809DA4(Local_64[4 /*10*/]);
						func_215(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_399 = 2;
					}
					else if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(Local_64[4 /*10*/], 1), 1) < 12f && unk_0x8FD4F672BF0C88B6(unk_0x9EB17624F44A8DA4()) > 8.5f)
					{
						unk_0x3D1231846F809DA4(Local_64[4 /*10*/]);
						if (!func_274(Local_64[4 /*10*/], 1464580341, 1))
						{
							unk_0x7FC89099E65488E2(Local_64[4 /*10*/], unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 4000);
							unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(Local_64[4 /*10*/], 1), 1) < 12f && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (!func_274(Local_64[4 /*10*/], 1464580341, 1))
						{
							unk_0x7FC89099E65488E2(Local_64[4 /*10*/], unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 4000);
							unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (((unk_0x5B91403DE175DFBB(unk_0xFC1458A37D98B502()) && (unk_0x674C9438180770FE() >= 19 || unk_0x674C9438180770FE() < 6)) && func_10(unk_0xFC1458A37D98B502(), Local_64[4 /*10*/], 1) < 25f) && (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), Local_64[4 /*10*/]) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), Local_64[4 /*10*/])))
					{
						if (!func_274(Local_64[4 /*10*/], 1464580341, 1))
						{
							unk_0x7FC89099E65488E2(Local_64[4 /*10*/], unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 4000);
							unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(Local_64[4 /*10*/], 1), 1) < 12f && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (!func_274(Local_64[4 /*10*/], 1464580341, 1))
						{
							unk_0x7FC89099E65488E2(Local_64[4 /*10*/], unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 4000);
							unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
				}
				if (iLocal_2104 > 1)
				{
					if (func_101(Local_64[4 /*10*/]))
					{
						if (unk_0xE56ACE711345F330(Local_64[4 /*10*/], Local_55[0 /*2*/]))
						{
							unk_0x3D1231846F809DA4(Local_64[4 /*10*/]);
							func_215(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
							iLocal_399 = 3;
							iLocal_401 = 3;
							unk_0x957CEE967C939968(Local_64[4 /*10*/]);
							unk_0x380C1E7B7740D618(Local_64[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, -1, 0.25f, 0, -122.93f);
							iLocal_403 = unk_0x53C562FD2B9E3AB0();
							iLocal_404 = 0;
						}
					}
				}
			}
			if (func_101(Local_64[4 /*10*/]))
			{
				if (!unk_0x4B2B9484BBAA2F31(Local_64[4 /*10*/]))
				{
					if (iLocal_404)
					{
						if ((unk_0x78F50AA8F955BEFC(Local_64[4 /*10*/], 242628503) != 1 && unk_0x78F50AA8F955BEFC(Local_64[4 /*10*/], 713668775) != 1) && unk_0x78F50AA8F955BEFC(Local_64[4 /*10*/], 1464580341) != 1)
						{
							if (!unk_0xA5F6598E13F98E08(Local_64[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
							{
								unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							if (unk_0x0C88267282FD588F(Local_64[4 /*10*/], 1228.056f, -3000.427f, 8.4424f, 2f, 2f, 2f, 0, 1, 0))
							{
								if (unk_0xC316B5E3E7ACF515("docksprep1"))
								{
									unk_0xFB02C50CC0E93FAA(Local_64[4 /*10*/], "docksprep1", 0, 0, -1);
								}
							}
							else if (unk_0xC316B5E3E7ACF515("docksprep1"))
							{
								unk_0xFB02C50CC0E93FAA(Local_64[4 /*10*/], "docksprep1", 0, 8, -1);
							}
						}
					}
				}
				else
				{
					if ((unk_0x53C562FD2B9E3AB0() - iLocal_407) > 10000)
					{
						if (!unk_0x461A41710E6DC807(Local_64[4 /*10*/]))
						{
							if (unk_0x0C88267282FD588F(Local_64[4 /*10*/], 1251.625f, -3003.338f, 8.31909f, 2f, 2f, 2f, 0, 1, 0))
							{
								unk_0x9359D3FF09DB8DFA(Local_64[4 /*10*/], 0, 0);
							}
							else if (unk_0x0C88267282FD588F(Local_64[4 /*10*/], 1228.849f, -2986.284f, 8.31909f, 2f, 2f, 2f, 0, 1, 0))
							{
								unk_0x9359D3FF09DB8DFA(Local_64[4 /*10*/], 0, 0);
							}
						}
						else
						{
							iLocal_407 = unk_0x53C562FD2B9E3AB0();
							unk_0xBD2090DD1BACF8C6(Local_64[4 /*10*/], 1, -1, 3000);
						}
					}
					if (!unk_0x33B1D0D0C92D4F18(Local_64[4 /*10*/]) && (unk_0x53C562FD2B9E3AB0() - iLocal_408) > 4000)
					{
						func_273(Local_64[4 /*10*/], "Sol1_EFAA", "CONSTRUCTION2", 3);
						iLocal_408 = unk_0x53C562FD2B9E3AB0();
					}
				}
				if (((unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 122) || unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 123)) || unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 124)) || unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 116))
				{
					unk_0x3D1231846F809DA4(Local_64[4 /*10*/]);
					func_215(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 1;
					unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					unk_0x2955A31540EE0E4F(Local_64[4 /*10*/], -1, unk_0xFC1458A37D98B502(), -1, 1);
				}
				else if (unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 23))
				{
					unk_0x3D1231846F809DA4(Local_64[4 /*10*/]);
					func_215(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 2;
					unk_0xB8E08BD5B184DF4E(Local_64[4 /*10*/]);
					unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					unk_0xF21E6EBE8EFDCC28(Local_64[4 /*10*/], -1);
				}
				else if (unk_0xEBE499597C718EB8(Local_64[4 /*10*/], unk_0xFC1458A37D98B502(), 1))
				{
					unk_0x3D1231846F809DA4(Local_64[4 /*10*/]);
					unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					func_215(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 4;
				}
			}
			break;
		
		case 2:
			if (func_101(Local_64[4 /*10*/]))
			{
				if (!unk_0x013B3F0AF8FD2A6A(Local_64[4 /*10*/], unk_0xFC1458A37D98B502()))
				{
					unk_0x60C06BFD037BB7CF(Local_64[4 /*10*/], unk_0xFC1458A37D98B502(), -1, 3104, 2);
				}
			}
			switch (iLocal_400)
			{
				case 0:
					if (func_101(Local_64[4 /*10*/]))
					{
						if (func_12(&uLocal_213, "SOL1AUD", "SOL1_SEE3", 7, 0, 0, 0))
						{
							unk_0x6931076730A4AC5D(&uLocal_379);
							unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, 4f, 1073741824, 1073741824, 0);
							unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), -1);
							unk_0x1B16DD5C115FE009(uLocal_379);
							unk_0xAB30B1CF01A198C1(Local_64[4 /*10*/], uLocal_379);
							unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
							unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
							iLocal_402 = unk_0x53C562FD2B9E3AB0();
							iLocal_400 = 1;
						}
					}
					break;
				
				case 1:
					if ((unk_0x53C562FD2B9E3AB0() - iLocal_402) > 4000)
					{
						if (func_101(Local_64[4 /*10*/]))
						{
							if (func_12(&uLocal_213, "SOL1AUD", "SOL1_SEE4", 7, 0, 0, 0))
							{
								unk_0x6931076730A4AC5D(&uLocal_379);
								unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, 3f, 1f, 1073741824, 0);
								unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), -1);
								unk_0x1B16DD5C115FE009(uLocal_379);
								unk_0xAB30B1CF01A198C1(Local_64[4 /*10*/], uLocal_379);
								unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
								unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
								iLocal_402 = unk_0x53C562FD2B9E3AB0();
								iLocal_400 = 2;
							}
						}
					}
					break;
				
				case 2:
					if ((unk_0x53C562FD2B9E3AB0() - iLocal_402) > 8000)
					{
						if (func_101(Local_64[4 /*10*/]))
						{
							if (func_12(&uLocal_213, "SOL1AUD", "SOL1_COPS2", 7, 0, 0, 0))
							{
								iLocal_402 = unk_0x53C562FD2B9E3AB0();
								iLocal_401 = 4;
								iLocal_399 = 3;
							}
						}
					}
					break;
			}
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || !func_101(Local_64[4 /*10*/]))
			{
				iLocal_399 = 0;
			}
			unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iLocal_406, 1);
			if (func_101(Local_64[4 /*10*/]))
			{
				if ((unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 122) || unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 123)) || unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 124))
				{
					func_215(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 1;
					unk_0x2955A31540EE0E4F(Local_64[4 /*10*/], -1, unk_0xFC1458A37D98B502(), -1, 1);
					unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
				}
				else if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), Local_64[4 /*10*/]) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), Local_64[4 /*10*/]))
				{
					if (unk_0x684DC0C684AE74CA(iLocal_406) != joaat("GROUP_MELEE") && iLocal_406 != joaat("weapon_unarmed"))
					{
						func_215(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_399 = 3;
						iLocal_401 = 1;
						unk_0x957CEE967C939968(Local_64[4 /*10*/]);
						unk_0x2955A31540EE0E4F(Local_64[4 /*10*/], -1, unk_0xFC1458A37D98B502(), -1, 0);
					}
				}
				else if (unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 23))
				{
					func_215(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 2;
					unk_0xF21E6EBE8EFDCC28(Local_64[4 /*10*/], -1);
					unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
				}
				else if (unk_0xEBE499597C718EB8(Local_64[4 /*10*/], unk_0xFC1458A37D98B502(), 1))
				{
					func_215(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 4;
				}
			}
			break;
		
		case 3:
			switch (iLocal_401)
			{
				case 1:
					if (func_101(Local_64[4 /*10*/]))
					{
						if (func_12(&uLocal_213, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
						{
							iLocal_405 = 1;
							iLocal_401 = 4;
						}
					}
					else
					{
						iLocal_404 = 1;
						iLocal_399 = 0;
					}
					break;
				
				case 2:
					if (func_101(Local_64[4 /*10*/]))
					{
						if (func_12(&uLocal_213, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
						{
							iLocal_405 = 1;
							iLocal_401 = 4;
						}
					}
					else
					{
						iLocal_404 = 1;
						iLocal_399 = 0;
					}
					break;
				
				case 3:
					if (func_101(Local_64[4 /*10*/]))
					{
						if (unk_0x0C88267282FD588F(Local_64[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, 2f, 2f, 0, 1, 0))
						{
							if (func_12(&uLocal_213, "SOL1AUD", "SOL1_SUB1", 7, 0, 0, 0))
							{
								iLocal_405 = 1;
								iLocal_401 = 4;
							}
						}
						if (!unk_0xABF985A1AF8C953F(Local_64[4 /*10*/], Local_55[0 /*2*/]))
						{
							unk_0x60C06BFD037BB7CF(Local_64[4 /*10*/], Local_55[0 /*2*/], -1, 2096, 2);
						}
					}
					else
					{
						iLocal_404 = 1;
						iLocal_399 = 0;
					}
					break;
				
				case 4:
					if (func_101(Local_64[4 /*10*/]))
					{
						if (!unk_0x9F887157983E8EFC(Local_64[4 /*10*/]) && !unk_0x7CE28D2DD2AF0F42(Local_64[4 /*10*/]))
						{
							if (func_12(&uLocal_213, "SOL1AUD", "SOL1_COPSIN2", 7, 0, 0, 0))
							{
								unk_0xB8E08BD5B184DF4E(Local_64[4 /*10*/]);
								unk_0x6931076730A4AC5D(&uLocal_379);
								unk_0x12C9D41D52A560D6(0, cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
								if (iLocal_405)
								{
									unk_0x380C1E7B7740D618(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
								}
								else
								{
									unk_0x380C1E7B7740D618(0, 1228.775f, -2923.852f, 8.31909f, 1f, 20000, 0.25f, 0, 40000f);
									unk_0xB8B212AB85347F73(0, 1183.287f, -2947.87f, 4.8986f, 100f, 1077936128, 1086324736);
								}
								unk_0x1B16DD5C115FE009(uLocal_379);
								unk_0xAB30B1CF01A198C1(Local_64[4 /*10*/], uLocal_379);
								unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
								iLocal_402 = unk_0x53C562FD2B9E3AB0();
								unk_0x8810DC630928B398("DHP1_ATTACKED");
								iLocal_409 = 0;
								iLocal_401 = 5;
							}
						}
					}
					else
					{
						iLocal_404 = 1;
						iLocal_399 = 0;
					}
					break;
				
				case 5:
					if ((unk_0x53C562FD2B9E3AB0() - iLocal_402) > 8000)
					{
						if (!iLocal_409)
						{
							if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 1)
							{
								unk_0x1563F8C21480594F(unk_0x9EB17624F44A8DA4(), 1, 0);
								unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
								iLocal_409 = 1;
							}
						}
						if (func_101(Local_64[4 /*10*/]))
						{
							if (iLocal_405)
							{
								if (!unk_0xA6FA9E5D08F067AD(Local_64[4 /*10*/]))
								{
									unk_0xD68E88A8E0BE8697(Local_64[4 /*10*/], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
								}
							}
							else if (unk_0x78F50AA8F955BEFC(Local_64[4 /*10*/], 923520851) != 1)
							{
								unk_0xB8B212AB85347F73(Local_64[4 /*10*/], 1183.287f, -2947.87f, 4.8986f, 100f, 1077936128, 1086324736);
							}
						}
					}
					if (!iLocal_405)
					{
						unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iLocal_406, 1);
						if (func_101(Local_64[4 /*10*/]))
						{
							if ((unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 122) || unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 123)) || unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 124))
							{
								func_215(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_213, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
								{
									unk_0xB8E08BD5B184DF4E(Local_64[4 /*10*/]);
									unk_0x6931076730A4AC5D(&uLocal_379);
									unk_0x2955A31540EE0E4F(0, 3000, unk_0xFC1458A37D98B502(), -1, 0);
									unk_0x380C1E7B7740D618(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
									unk_0x1B16DD5C115FE009(uLocal_379);
									unk_0xAB30B1CF01A198C1(Local_64[4 /*10*/], uLocal_379);
									unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
									iLocal_402 = unk_0x53C562FD2B9E3AB0();
									iLocal_405 = 1;
								}
							}
							else if ((unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), Local_64[4 /*10*/]) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), Local_64[4 /*10*/])) && unk_0xCA3C40448996C9BA(Local_64[4 /*10*/], unk_0xFC1458A37D98B502(), 160f))
							{
								if (unk_0x684DC0C684AE74CA(iLocal_406) != joaat("GROUP_MELEE") && iLocal_406 != joaat("weapon_unarmed"))
								{
									func_215(&uLocal_213, 4, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
									if (func_12(&uLocal_213, "SOL1AUD", "SOL1_SCAR2", 7, 0, 0, 0))
									{
										unk_0xB8E08BD5B184DF4E(Local_64[4 /*10*/]);
										unk_0x6931076730A4AC5D(&uLocal_379);
										unk_0x2955A31540EE0E4F(0, 3000, unk_0xFC1458A37D98B502(), -1, 0);
										unk_0x380C1E7B7740D618(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
										unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
										unk_0x1B16DD5C115FE009(uLocal_379);
										unk_0xAB30B1CF01A198C1(Local_64[4 /*10*/], uLocal_379);
										unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
										iLocal_405 = 1;
										iLocal_402 = unk_0x53C562FD2B9E3AB0();
									}
								}
							}
							else if (unk_0x47B14B07B2FD8217(Local_64[4 /*10*/], 23))
							{
								func_215(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_213, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
								{
									unk_0xB8E08BD5B184DF4E(Local_64[4 /*10*/]);
									unk_0x6931076730A4AC5D(&uLocal_379);
									unk_0xF21E6EBE8EFDCC28(0, -1);
									unk_0x380C1E7B7740D618(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
									unk_0x1B16DD5C115FE009(uLocal_379);
									unk_0xAB30B1CF01A198C1(Local_64[4 /*10*/], uLocal_379);
									unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
									iLocal_405 = 1;
								}
							}
							else if (unk_0xEBE499597C718EB8(Local_64[4 /*10*/], unk_0xFC1458A37D98B502(), 1))
							{
								unk_0xB8E08BD5B184DF4E(Local_64[4 /*10*/]);
								unk_0x6931076730A4AC5D(&uLocal_379);
								unk_0x380C1E7B7740D618(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
								unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
								unk_0x1B16DD5C115FE009(uLocal_379);
								unk_0xAB30B1CF01A198C1(Local_64[4 /*10*/], uLocal_379);
								unk_0xFAA3EF7FF92E1F9E(&uLocal_379);
								iLocal_405 = 1;
								iLocal_402 = unk_0x53C562FD2B9E3AB0();
							}
						}
					}
					break;
			}
			break;
	}
}

void func_273(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xE44A9E63DC81244A(uParam0, sParam1, sParam2, func_54(iParam3), 0);
}

int func_274(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x78F50AA8F955BEFC(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_275()
{
	switch (iLocal_459)
	{
		case 0:
			switch (iLocal_458)
			{
				case 0:
					if (func_101(Local_55[0 /*2*/]))
					{
						if ((!unk_0x23F2F89E3D1CB7C4() && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_55[0 /*2*/], 0)) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
						{
							func_280();
							iLocal_456 = unk_0x53C562FD2B9E3AB0();
							iLocal_458 = 1;
						}
					}
					break;
				
				case 1:
					if ((unk_0x53C562FD2B9E3AB0() - iLocal_456) > 6000 && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_55[0 /*2*/], 0))
					{
						func_215(&uLocal_213, 1, 0, "FLOYD", 0, 1);
						if (func_12(&uLocal_213, "DHP1AUD", "DHP1_TSUB", 7, 0, 0, 0))
						{
							iLocal_458 = 2;
						}
					}
					break;
				
				case 2:
					if (func_11())
					{
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_55[0 /*2*/], 0))
						{
							if (func_31())
							{
								func_279(0);
							}
						}
						else if (!func_31())
						{
							func_279(1);
						}
					}
					else
					{
						iLocal_458 = 3;
					}
					break;
				
				case 3:
					iLocal_459 = 2;
					iLocal_458 = 0;
					iLocal_456 = unk_0x53C562FD2B9E3AB0();
					break;
			}
			break;
		
		case 2:
			switch (iLocal_458)
			{
				case 0:
					if ((!unk_0x23F2F89E3D1CB7C4() && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_55[0 /*2*/], 0)) && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 324.7653f, -2974.495f, -1f, 1) < 110f)
					{
						func_280();
						iLocal_458 = 1;
					}
					break;
				
				case 1:
					if (func_12(&uLocal_213, "DHP1AUD", "DHP1_APP", 7, 0, 0, 0))
					{
						iLocal_458 = 2;
					}
					break;
				
				case 2:
					if (func_11())
					{
					}
					else
					{
						iLocal_458 = 3;
					}
					break;
				
				case 3:
					iLocal_459 = 3;
					iLocal_458 = 0;
					iLocal_456 = unk_0x53C562FD2B9E3AB0();
					break;
			}
			break;
		
		case 3:
			if (func_101(Local_55[2 /*2*/]) && func_101(Local_64[3 /*10*/]))
			{
				switch (iLocal_458)
				{
					case 0:
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_55[2 /*2*/], 0) && unk_0xA8D0477084E86A92(Local_64[3 /*10*/], Local_55[2 /*2*/], 0))
						{
							if (func_11())
							{
								func_280();
							}
							else
							{
								iLocal_458 = 1;
							}
						}
						break;
					
					case 1:
						func_273(Local_64[3 /*10*/], "DHP1_AIAA", "FLOYD", 24);
						iLocal_458 = 2;
						break;
					
					case 2:
						if (!unk_0x33B1D0D0C92D4F18(Local_64[3 /*10*/]))
						{
							iLocal_458 = 3;
						}
						break;
					
					case 3:
						iLocal_459 = 4;
						iLocal_458 = 0;
						iLocal_456 = unk_0x53C562FD2B9E3AB0();
						break;
					}
			}
			break;
		
		case 4:
			if (func_101(Local_55[2 /*2*/]) && func_101(Local_64[3 /*10*/]))
			{
				switch (iLocal_458)
				{
					case 0:
						if (((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xA8D0477084E86A92(Local_64[3 /*10*/], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0)) && unk_0x5D67DB68EF61B3E1(Local_55[1 /*2*/], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))) && !unk_0x23F2F89E3D1CB7C4())
						{
							func_280();
							iLocal_456 = unk_0x53C562FD2B9E3AB0();
							iLocal_458 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x53C562FD2B9E3AB0() - iLocal_456) > 2000)
						{
							func_215(&uLocal_213, 1, Local_64[3 /*10*/], "FLOYD", 0, 1);
							if (func_12(&uLocal_213, "DHP1AUD", "DHP1_TRCK", 7, 0, 0, 0))
							{
								iLocal_458 = 2;
							}
						}
						break;
					
					case 2:
						if (func_11())
						{
							if ((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xA8D0477084E86A92(Local_64[3 /*10*/], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0)) && unk_0x5D67DB68EF61B3E1(Local_55[1 /*2*/], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
							{
								if (func_31())
								{
									func_279(0);
								}
							}
							else if (!func_31())
							{
								func_279(1);
							}
						}
						else
						{
							iLocal_458 = 3;
						}
						break;
					
					case 3:
						iLocal_459 = 5;
						iLocal_458 = 0;
						iLocal_456 = unk_0x53C562FD2B9E3AB0();
						break;
				}
				if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(Local_55[0 /*2*/], 1), -323.73f, -2613.702f, 5f, 1) < 60f)
				{
					func_278();
					iLocal_458 = 3;
				}
			}
			break;
		
		case 5:
			switch (iLocal_458)
			{
				case 0:
					if ((((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xA8D0477084E86A92(Local_64[3 /*10*/], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0)) && unk_0x5D67DB68EF61B3E1(Local_55[1 /*2*/], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))) && !unk_0x23F2F89E3D1CB7C4()) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -273.635f, -2558.818f, 4.751376f, -405.7218f, -2695.898f, 14.37495f, 51f, 0, 1, 0))
					{
						func_280();
						iLocal_458 = 1;
					}
					break;
				
				case 1:
					bLocal_455 = func_277();
					func_215(&uLocal_213, 1, Local_64[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_455)
					{
						if (func_276(&uLocal_213, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_1", 7, 0, 0))
						{
							iLocal_458 = 2;
						}
					}
					else if (func_276(&uLocal_213, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_2", 7, 0, 0))
					{
						iLocal_458 = 2;
					}
					break;
				
				case 2:
					if (!func_11())
					{
						iLocal_458 = 3;
					}
					break;
				
				case 3:
					iLocal_459 = 6;
					iLocal_458 = 0;
					iLocal_456 = unk_0x53C562FD2B9E3AB0();
					break;
			}
			break;
		
		case 6:
			switch (iLocal_458)
			{
				case 0:
					if ((((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xA8D0477084E86A92(Local_64[3 /*10*/], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0)) && unk_0x5D67DB68EF61B3E1(Local_55[1 /*2*/], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))) && !unk_0x23F2F89E3D1CB7C4()) && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(Local_55[0 /*2*/], 1), -323.73f, -2613.702f, 5f, 1) < 40f)
					{
						func_280();
						iLocal_458 = 1;
					}
					break;
				
				case 1:
					bLocal_455 = func_277();
					func_215(&uLocal_213, 1, Local_64[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_455)
					{
						if (func_276(&uLocal_213, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_1", 7, 0, 0))
						{
							iLocal_458 = 2;
						}
					}
					else if (func_276(&uLocal_213, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_2", 7, 0, 0))
					{
						iLocal_458 = 2;
					}
					break;
				
				case 2:
					if (!func_11())
					{
						iLocal_458 = 3;
					}
					break;
				
				case 3:
					break;
			}
			break;
	}
}

bool func_276(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_28(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_13(sParam2, iParam4, 0);
}

int func_277()
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_278()
{
	Global_14622 = 0;
	func_27();
}

void func_279(int iParam0)
{
	Global_16767 = iParam0;
}

void func_280()
{
	Global_14622 = 0;
	func_281();
}

void func_281()
{
	if (unk_0x42111BD51D233AAB())
	{
		unk_0x495EB1DD7306493A();
		Global_16767 = 0;
		unk_0xB31CEFB00C146C91(1);
		Global_15756 = 6;
		return;
	}
}

int func_282(var uParam0)
{
	if (unk_0xB8DE76287EDC4957(*uParam0, 0))
	{
		if (((unk_0xB6579D6FEB63269C(*uParam0, 0, 7000) || unk_0xB6579D6FEB63269C(*uParam0, 3, 30000)) || unk_0xB6579D6FEB63269C(*uParam0, 2, 30000)) || unk_0xB6579D6FEB63269C(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_283(var uParam0)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		unk_0x191BE1BC8F26F3C1(*uParam0, 0);
		if (unk_0x9761C10D57B68069(*uParam0) && unk_0xCB234F3DD6FF9368(*uParam0, 1))
		{
			unk_0x5380482A432E314E(uParam0);
		}
	}
}

int func_284(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x98EC0789D9F0703B();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x48253D71C3FC0054(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x36EE765E851207BF(iParam0, 1);
			}
			else
			{
				unk_0xDE82468C21A54EFA(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xFC583ECBA11F5D22(iParam0, iParam2);
			unk_0xC1D7C47530C3F5D1(iParam0, fParam6);
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				unk_0xF27F72CA15E148EE(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x0BAF2928041A6C65(iParam0, iParam9);
		}
		unk_0xA0BF5158BEAE8C9B(iParam0, iParam4);
		unk_0xD73FCB9663FBC508(iParam0, iParam5);
		*uParam1 = unk_0x0B2160EA38790943(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0C71C8E276E3EC54(*uParam1, iParam8);
				}
				if (!unk_0xAB019B170BF1309C(iParam7))
				{
					unk_0xDFC5BBDAEC7D6330("STRING");
					if (bParam10)
					{
						unk_0x854FACC4E5F40C82(iParam7);
					}
					else
					{
						unk_0xA6D2B267C377D7B2(iParam7);
					}
					unk_0x476C008681363650(*uParam1);
				}
				unk_0xF27F72CA15E148EE(*uParam1, 7);
			}
		}
		if (!unk_0xC80D31E4B587871C(uParam1->f_6, 2))
		{
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x88DDBE9908752BF0(iParam0, 0))
		{
			uParam1->f_1 = unk_0xB683B450B8E9F408(iParam0);
			if (!unk_0xC80D31E4B587871C(uParam1->f_6, 3))
			{
				if (unk_0xA6DECE14FC9A8C51(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0C71C8E276E3EC54(uParam1->f_1, iParam8);
					}
					if (!unk_0xAB019B170BF1309C(iParam7))
					{
						unk_0xDFC5BBDAEC7D6330("STRING");
						if (bParam10)
						{
							unk_0x854FACC4E5F40C82(iParam7);
						}
						else
						{
							unk_0xA6D2B267C377D7B2(iParam7);
						}
						unk_0x476C008681363650(uParam1->f_1);
					}
					unk_0xF27F72CA15E148EE(uParam1->f_1, 7);
					unk_0x872F1C1F8587CCC7(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xA6DECE14FC9A8C51(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xA6DECE14FC9A8C51(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_285()
{
	struct<3> Var0;
	var uVar3;
	
	if (iLocal_2107 == 1)
	{
		if (iLocal_2102 == 0)
		{
			if (!unk_0x3E9CABD07B829173())
			{
				if (!unk_0x2D0EF1D268F33F25())
				{
					unk_0xAE83ED4C9081AE6F(800);
				}
			}
			else
			{
				func_188(iLocal_2108);
			}
		}
		else if (iLocal_2102 == 3)
		{
			unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), 1, 0);
			func_303();
			if (unk_0x6C97EEC6339FB45C())
			{
				unk_0xA6C03E3E2533F8F3();
			}
			func_302(&uLocal_460);
			if (!func_301())
			{
				func_300(iLocal_2108, &Var0, &uVar3);
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Var0, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), uVar3);
				unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), 1);
				func_299(&uLocal_460, Var0, 50f, 0);
			}
			func_262(iLocal_2103);
			while (!func_297(&uLocal_460))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			switch (iLocal_2103)
			{
				case 0:
					func_295();
					break;
				
				case 1:
					func_294();
					break;
				
				case 2:
					func_290();
					break;
				
				case 3:
					func_286();
					break;
			}
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			unk_0x8810DC630928B398("DHP1_START");
			iLocal_2107 = 0;
			if (!func_301())
			{
				func_195(&uLocal_460);
			}
		}
	}
}

void func_286()
{
	if (!func_101(Local_55[0 /*2*/]))
	{
		Local_55[0 /*2*/] = unk_0xEA60F3B426BB095B(joaat("submersible"), -337.7228f, -2623.835f, 8.6595f, 135.24f, 1, 1, 0);
		unk_0xCF5EB2CB1B30F02C(Local_55[0 /*2*/], 0);
		unk_0xA15269351F50F113(Local_55[0 /*2*/], 0, 1, 0);
		unk_0xBAB8785EE2F06BBE(Local_55[0 /*2*/], 1);
		unk_0x47E2FD029BB8567C(Local_55[0 /*2*/], 1);
		unk_0xAC62CE49044A35B9(Local_55[0 /*2*/], 0);
	}
	if (!func_101(Local_55[2 /*2*/]))
	{
		Local_55[2 /*2*/] = unk_0xEA60F3B426BB095B(joaat("packer"), -337.7228f, -2627.038f, 5.001f, 134.9894f, 1, 1, 0);
		unk_0xCF5EB2CB1B30F02C(Local_55[2 /*2*/], 0);
		unk_0x207466E78DA21033(Local_55[2 /*2*/], 0);
		unk_0x4D7D93C6E0C1063B(Local_55[2 /*2*/], 0);
		unk_0x438D30A195B65156(Local_55[2 /*2*/], 1);
	}
	if (!func_101(Local_55[1 /*2*/]))
	{
		Local_55[1 /*2*/] = unk_0xEA60F3B426BB095B(joaat("armytrailer"), -331.728f, -2621.006f, 7.8828f, 135.24f, 1, 1, 0);
		unk_0x438D30A195B65156(Local_55[1 /*2*/], 1);
	}
	unk_0x7A23B5BE4EB8A66F(Local_55[2 /*2*/], Local_55[1 /*2*/], 0.5f);
	unk_0x17167CAC18366E8F(Local_55[1 /*2*/]);
	unk_0xAD690A179F5200F2(Local_55[0 /*2*/], Local_55[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!unk_0x6ADD12BF4D6D2587(Local_169[4 /*2*/]))
	{
		Local_169[4 /*2*/] = unk_0x5E35CF35E65D69B9(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, 1, 1, 0);
		unk_0xA9D382E7BA095148(Local_169[4 /*2*/], Local_55[1 /*2*/], -1, Local_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_169[5 /*2*/]))
	{
		Local_169[5 /*2*/] = unk_0x5E35CF35E65D69B9(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 1, 1, 0);
		unk_0xA9D382E7BA095148(Local_169[5 /*2*/], Local_55[1 /*2*/], -1, Local_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (func_301())
	{
		func_287(0, -1, 1);
	}
	else
	{
		unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), 0);
	}
}

void func_287(int iParam0, int iParam1, int iParam2)
{
	if (func_289() && func_301())
	{
		while (Global_92828 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x6ACDC20166AA3FAC(0);
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0xB485B73829833C84(unk_0xFC1458A37D98B502());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x6ADD12BF4D6D2587(iParam0))
				{
					if (unk_0xB8DE76287EDC4957(iParam0, 0))
					{
						if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam0, 0))
						{
							unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iParam0, iParam1);
							unk_0x7C9705890EF6612E(0f, 1065353216);
							unk_0xBB9A3C553EECB180(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), 1, 0);
			}
		}
		unk_0x10DF8268B3B64093();
		func_288(0);
	}
}

void func_288(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 13);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 13);
	}
}

int func_289()
{
	if (Global_92833 == 10 || Global_92833 == 9)
	{
		return 1;
	}
	return 0;
}

void func_290()
{
	if (!func_101(Local_55[0 /*2*/]))
	{
		Local_55[0 /*2*/] = unk_0xEA60F3B426BB095B(joaat("submersible"), 320.4211f, -2975.993f, -11.1896f, 2.5159f, 1, 1, 0);
		unk_0xE8BB5655518854A8(Local_55[0 /*2*/], 0);
		unk_0xA15269351F50F113(Local_55[0 /*2*/], 0, 1, 0);
		unk_0xBAB8785EE2F06BBE(Local_55[0 /*2*/], 1);
		unk_0x47E2FD029BB8567C(Local_55[0 /*2*/], 1);
		unk_0xAC62CE49044A35B9(Local_55[0 /*2*/], 0);
	}
	if (!func_101(Local_55[2 /*2*/]))
	{
		Local_55[2 /*2*/] = unk_0xEA60F3B426BB095B(joaat("packer"), 297.5948f, -2950.354f, 5.0008f, 359.1976f, 1, 1, 0);
		unk_0x207466E78DA21033(Local_55[2 /*2*/], 0);
		unk_0x4D7D93C6E0C1063B(Local_55[2 /*2*/], 0);
		unk_0x438D30A195B65156(Local_55[2 /*2*/], 1);
	}
	if (!func_101(Local_55[1 /*2*/]))
	{
		Local_55[1 /*2*/] = unk_0xEA60F3B426BB095B(joaat("armytrailer"), 297.2917f, -2970.246f, 4.8884f, 359.0483f, 1, 1, 0);
		unk_0xE8BB5655518854A8(Local_55[1 /*2*/], 0);
		unk_0x438D30A195B65156(Local_55[1 /*2*/], 1);
	}
	unk_0x7A23B5BE4EB8A66F(Local_55[2 /*2*/], Local_55[1 /*2*/], 0.5f);
	unk_0x17167CAC18366E8F(Local_55[1 /*2*/]);
	unk_0xAD690A179F5200F2(Local_55[0 /*2*/], Local_55[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!unk_0x6ADD12BF4D6D2587(Local_169[4 /*2*/]))
	{
		Local_169[4 /*2*/] = unk_0x5E35CF35E65D69B9(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, 1, 1, 0);
		unk_0xA9D382E7BA095148(Local_169[4 /*2*/], Local_55[1 /*2*/], -1, Local_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_169[5 /*2*/]))
	{
		Local_169[5 /*2*/] = unk_0x5E35CF35E65D69B9(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 1, 1, 0);
		unk_0xA9D382E7BA095148(Local_169[5 /*2*/], Local_55[1 /*2*/], -1, Local_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	while (!func_291(&(Local_64[3 /*10*/]), 32, Local_55[2 /*2*/], 0, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_301())
	{
		func_287(Local_55[2 /*2*/], -1, 1);
	}
	else
	{
		unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), 0);
		unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), Local_55[2 /*2*/], -1);
	}
	unk_0xCE93FCB8A8D8DF0B(Local_64[3 /*10*/], iLocal_394);
	unk_0x247EAA2E93D4A021(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 100f, 1, 0, 0, 0);
	iLocal_459 = 3;
	iLocal_458 = 0;
}

int func_291(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_21(iParam1))
	{
		iVar0 = func_293(iParam1);
		unk_0x6FF834D85E2DD4C6(iVar0);
		if (unk_0x9A0B2ED5055D3F0B(iVar0))
		{
			if (unk_0x6ADD12BF4D6D2587(*uParam0))
			{
				unk_0x68433819717660CF(uParam0);
			}
			if (unk_0x6ADD12BF4D6D2587(iParam2) && unk_0xB8DE76287EDC4957(iParam2, 0))
			{
				*uParam0 = unk_0x00D1A9572426E8DD(iParam2, 26, iVar0, iParam3, 0, 0);
				unk_0xE537629E02E8DA21(*uParam0);
				func_292(*uParam0, iParam1);
				if (bParam4)
				{
					unk_0x14776E43F90DD454(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_292(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_88812[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_293(int iParam0)
{
	if (!func_21(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_294()
{
	if (!unk_0x6ADD12BF4D6D2587(Local_55[0 /*2*/]))
	{
		Local_55[0 /*2*/] = unk_0xEA60F3B426BB095B(joaat("submersible"), 1272.398f, -2982.072f, -3.2414f, 201.5542f, 1, 1, 0);
		unk_0x47E2FD029BB8567C(Local_55[0 /*2*/], 1);
	}
	if (func_301())
	{
		func_287(Local_55[0 /*2*/], -1, 1);
	}
	else
	{
		unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), 0);
		unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), Local_55[0 /*2*/], -1);
	}
	unk_0x247EAA2E93D4A021(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 100f, 1, 0, 0, 0);
	iLocal_459 = 0;
	iLocal_458 = 0;
}

void func_295()
{
	if (!unk_0x6ADD12BF4D6D2587(Local_55[0 /*2*/]))
	{
		Local_55[0 /*2*/] = unk_0xEA60F3B426BB095B(joaat("submersible"), 1260.802f, -3006.417f, 18.3289f, 178.9076f, 1, 1, 0);
		func_296(Local_55[0 /*2*/], 0);
		unk_0xEDC33A771FAEB393(Local_55[0 /*2*/], 1);
		unk_0xCFF0CD14B439821D(Local_55[0 /*2*/], 1, 1);
		unk_0xFBA991D3A851E195(Local_55[0 /*2*/], 0);
		unk_0x47E2FD029BB8567C(Local_55[0 /*2*/], 1);
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_64[4 /*10*/]))
	{
		Local_64[4 /*10*/] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_m_dockwork_01"), 1229.322f, -3002.879f, 8.31861f, 270f, 1, 1);
		unk_0x12C9D41D52A560D6(Local_64[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
		unk_0xE17958D3FD0F9EE9(Local_64[4 /*10*/], 512, 0);
		unk_0xAE6EBBBBD8B9FB30(Local_64[4 /*10*/], 17, 1);
		unk_0xCE93FCB8A8D8DF0B(Local_64[4 /*10*/], iLocal_395);
		unk_0x771A86309E0CA47B(Local_64[4 /*10*/], 1);
		unk_0x0223236997E1A137(Local_64[4 /*10*/], 45f);
		unk_0x7EDC2382770DE785(Local_64[4 /*10*/], 50f);
		unk_0x2C18191093123E39(Local_64[4 /*10*/], -50f);
		unk_0x8BB5ECF21DDE505B(Local_64[4 /*10*/], 1);
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_169[0 /*2*/]))
	{
		Local_169[0 /*2*/] = unk_0x5E35CF35E65D69B9(joaat("prop_ld_test_01"), 1260.692f, -3008.286f, 23.73365f, 1, 1, 0);
		unk_0xEDC33A771FAEB393(Local_169[0 /*2*/], 1);
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_169[1 /*2*/]))
	{
		Local_169[1 /*2*/] = unk_0x5E35CF35E65D69B9(joaat("prop_ld_test_01"), 1260.752f, -3004.994f, 22.68315f, 1, 1, 0);
		unk_0xEDC33A771FAEB393(Local_169[1 /*2*/], 1);
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_169[2 /*2*/]))
	{
		Local_169[2 /*2*/] = unk_0x5E35CF35E65D69B9(joaat("prop_sub_release"), 1249.105f, -3007.968f, 9.68718f, 1, 1, 0);
		unk_0x59AF3B40AE222194(Local_169[2 /*2*/], 0f, 0f, 90f, 2, 1);
		unk_0xEDC33A771FAEB393(Local_169[2 /*2*/], 1);
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_169[3 /*2*/]))
	{
		Local_169[3 /*2*/] = unk_0x5E35CF35E65D69B9(joaat("p_amb_phone_01"), 1229.322f, -3002.879f, 8.31861f, 1, 1, 0);
	}
	iLocal_383 = 0;
	unk_0x307EAE14C924E2E7("docksprep1");
	while (!unk_0xC316B5E3E7ACF515("docksprep1"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x247EAA2E93D4A021(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 100f, 1, 0, 0, 0);
	if (func_301())
	{
		func_287(0, -1, 1);
	}
	else
	{
		unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), 0);
	}
	iLocal_403 = unk_0x53C562FD2B9E3AB0();
	iLocal_459 = 0;
	iLocal_458 = 0;
}

void func_296(var uParam0, int iParam1)
{
	Global_92833.f_22[iParam1] = uParam0;
}

int func_297(var uParam0)
{
	if (func_298(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_298(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_982)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0x9A0B2ED5055D3F0B((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0x14776E43F90DD454((uParam0[iVar1 /*5*/])->f_4);
						func_84(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (unk_0x3A801AA34DD821BE(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						unk_0xFCCDDE0E48CF9588(uParam0->f_273[iVar1 /*5*/].f_4);
						func_84(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (unk_0xC316B5E3E7ACF515(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						unk_0xD22D83D359390CC6(uParam0->f_374[iVar1 /*5*/].f_4);
						func_84(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (unk_0x34D11AB5BA7922C2(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						unk_0xA68F7B004463AB6F(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_84(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (unk_0x0840F461D7BD8859(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						unk_0x9E6ACDF1473CD846(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_84(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (unk_0x0A198E59F03B0E6F(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						unk_0x45452336A6C88BE0(uParam0->f_202[iVar1 /*7*/].f_4);
						func_84(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (unk_0xCAF0B12123EF5181(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						unk_0x3A3E253FC4F98014(uParam0->f_151[iVar1 /*5*/].f_4);
						func_84(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (unk_0x1CF95440F1970B4F(uParam0->f_737[iVar1 /*5*/].f_4, 0, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						unk_0x751FF861325F816B(uParam0->f_737[iVar1 /*5*/].f_4);
						func_84(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (unk_0x1A595E6882473810(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						unk_0xA1451353A1AED1A5(uParam0->f_763[iVar1 /*5*/].f_4);
						func_84(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!unk_0xAB019B170BF1309C(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0x3AC9DE226D51FED0(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_84(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0xF8B6FDE713ABE840(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x1A595E6882473810(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0x995AED34717079AE(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							unk_0xF8B6FDE713ABE840(uParam0->f_687[iVar1 /*7*/].f_5);
							func_84(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_84(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_879[iVar1 /*5*/])
			{
				if (!uParam0->f_879[iVar1 /*5*/].f_1)
				{
					if (unk_0x8CDB9C452110770E(uParam0->f_879[iVar1 /*5*/].f_4))
					{
						uParam0->f_879[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_879[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_879[iVar1 /*5*/].f_1)
					{
						unk_0x167625A321C2311F(uParam0->f_879[iVar1 /*5*/].f_4);
						func_84(&(uParam0->f_879[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_930[iVar1 /*5*/])
			{
				if (!uParam0->f_930[iVar1 /*5*/].f_1)
				{
					if (unk_0x7D72D5B7EDD9C62C(uParam0->f_930[iVar1 /*5*/].f_4))
					{
						uParam0->f_930[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_930[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_930[iVar1 /*5*/].f_1)
					{
						func_84(&(uParam0->f_930[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (unk_0x9F0887BCBFCF3C2F(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						unk_0xF40900F61CC88931(iVar1, 1);
						func_84(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_860)
		{
			if (!uParam0->f_860.f_1)
			{
				if (unk_0xFEDD99169EC73AA6())
				{
					uParam0->f_860.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_860.f_2)
			{
				if (uParam0->f_860.f_1)
				{
					unk_0x74FDC371ED12544B();
					func_84(&(uParam0->f_860));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_864)
		{
			if (!uParam0->f_864.f_1)
			{
				if (unk_0xBEA915D59A474B3B())
				{
					uParam0->f_864.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_864.f_2)
			{
				if (uParam0->f_864.f_1)
				{
					unk_0x92CFA7F2F9F762D8();
					func_84(&(uParam0->f_864));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_868 && unk_0x40189ECE75CF9724())
		{
			if (!uParam0->f_868.f_1)
			{
				if (unk_0x64D098EABB2F6F13())
				{
					uParam0->f_868.f_1 = 1;
					if (uParam0->f_983)
					{
						unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), 0);
						func_195(uParam0);
						uParam0->f_983 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_868.f_2)
			{
				unk_0x81BCCFFE3F019672();
				func_84(&(uParam0->f_868));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_956[iVar1 /*5*/])
			{
				if (!uParam0->f_956[iVar1 /*5*/].f_1)
				{
					if (unk_0xA51ADD51711B4A15(uParam0->f_956[iVar1 /*5*/].f_4))
					{
						uParam0->f_956[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_956[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_956[iVar1 /*5*/].f_1)
					{
						func_84(&(uParam0->f_956[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_982 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_299(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_200(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if (func_89(uParam0->f_868.f_4, Param1, 0) && uParam0->f_868.f_10 == fParam4)
		{
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1)
			{
				uParam0->f_982 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0x32C900DD9B686F75(Param1, fParam4, iParam5);
	uParam0->f_868 = 1;
	uParam0->f_868.f_3 = unk_0x53C562FD2B9E3AB0();
	uParam0->f_868.f_4 = { Param1 };
	uParam0->f_868.f_7 = { 0f, 0f, 0f };
	uParam0->f_868.f_10 = fParam4;
	uParam0->f_982 = 1;
	return 1;
}

void func_300(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1219.186f, -2977.9f, 4.8653f };
			*uParam2 = 178.1887f;
			break;
		
		case 1:
			*uParam1 = { 1272.398f, -2982.072f, -3.2414f };
			*uParam2 = 201.5542f;
			break;
		
		case 2:
			*uParam1 = { 297.5948f, -2950.354f, 5.0008f };
			*uParam2 = 359.1976f;
			break;
		
		case 3:
			*uParam1 = { -317.3936f, -2610.798f, 5.0003f };
			*uParam2 = 328.0017f;
			break;
	}
}

bool func_301()
{
	return unk_0xC80D31E4B587871C(Global_92833.f_20, 13);
}

void func_302(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_879[iVar0 /*5*/])
		{
			uParam0->f_879[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_930[iVar0 /*5*/])
		{
			uParam0->f_930[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_868)
	{
		uParam0->f_868.f_2 = 1;
	}
	if (uParam0->f_860)
	{
		uParam0->f_860.f_2 = 1;
	}
	if (uParam0->f_864)
	{
		uParam0->f_864.f_2 = 1;
	}
}

void func_303()
{
	if (unk_0x6C97EEC6339FB45C())
	{
		unk_0xCFA828389A0C5B6B();
		unk_0xA6C03E3E2533F8F3();
		while (unk_0x6C97EEC6339FB45C())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	func_201();
	if (func_101(Local_55[0 /*2*/]))
	{
		unk_0x4A93BD072EEEA421(Local_55[0 /*2*/], Local_166);
	}
	Global_89475.f_357 = 0;
	if (iLocal_384)
	{
		unk_0x125B8EDEAD208C21(&iLocal_439);
		iLocal_384 = 0;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (8 - 1))
	{
		func_311(&(Local_64[iLocal_382 /*10*/].f_2));
		if (unk_0x6ADD12BF4D6D2587(Local_64[iLocal_382 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_64[iLocal_382 /*10*/]))
		{
			if (unk_0x88DDBE9908752BF0(Local_64[iLocal_382 /*10*/], 0))
			{
				unk_0x2BF0EE8079E0436D(Local_64[iLocal_382 /*10*/], unk_0xB3328BA8976B416C(unk_0xDFD115BB10FE46A9(Local_64[iLocal_382 /*10*/], 0), 1) + Vector(0f, -2f, 0f));
			}
			func_310(&(Local_64[iLocal_382 /*10*/]));
		}
		iLocal_382++;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (4 - 1))
	{
		if (unk_0x6ADD12BF4D6D2587(Local_55[iLocal_382 /*2*/]))
		{
			func_309(Local_55[iLocal_382 /*2*/]);
			func_306(&(Local_55[iLocal_382 /*2*/]));
		}
		iLocal_382++;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (9 - 1))
	{
		if (unk_0x6ADD12BF4D6D2587(Local_169[iLocal_382 /*2*/]))
		{
			func_305(&(Local_169[iLocal_382 /*2*/]));
		}
		iLocal_382++;
	}
	if (unk_0xE0B0126B4689CB72(uLocal_380))
	{
		unk_0x990DE45B7A2B6426(uLocal_380, 0);
	}
	func_278();
	func_36(&Local_188, 1, 0);
	func_304(72);
	func_190(1, 0, 0, 3000, 0);
	unk_0x94BD6F0436473406(1f);
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), 1, 0);
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
		unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
		unk_0x247EAA2E93D4A021(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 300f, 1, 0, 0, 0);
	}
	unk_0x247EAA2E93D4A021(1219.186f, -2977.9f, 4.8653f, 300f, 1, 0, 0, 0);
	iLocal_403 = unk_0x53C562FD2B9E3AB0();
	iLocal_386 = 0;
	iLocal_404 = 0;
	iLocal_399 = 0;
	iLocal_400 = 0;
	iLocal_401 = 0;
	iLocal_458 = 0;
	iLocal_387 = 0;
	func_207(6, 0);
	if (unk_0xAB84FBE3AB3FFAD3("PO1_08_sub_waterplane"))
	{
		func_195(&uLocal_460);
		unk_0x990A0EC8D6FEA4BB("PO1_08_sub_waterplane");
	}
	unk_0x8E7C072C41DF97BF();
}

void func_304(int iParam0)
{
	if (Global_89900 != -1)
	{
		if (iParam0 == Global_89900)
		{
			Global_89904 = 1;
			return;
		}
	}
}

void func_305(var uParam0)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (unk_0x6049C20F5D5C185B(*uParam0))
		{
			unk_0x6B7C10B19928914F(*uParam0, 1, 1);
		}
		unk_0x452336926718D62A(uParam0);
	}
}

void func_306(var uParam0)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (!unk_0x9761C10D57B68069(*uParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*uParam0, 1, 0);
		}
		if (func_308(*uParam0))
		{
			if (unk_0x9761C10D57B68069(*uParam0) && unk_0xCB234F3DD6FF9368(*uParam0, 1))
			{
				if (func_307(unk_0xFC1458A37D98B502()))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *uParam0, 0))
					{
						unk_0x5380482A432E314E(uParam0);
						return;
					}
				}
				unk_0xC91FE17AD7353B70(uParam0);
			}
		}
		else
		{
			if (func_307(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *uParam0, 0))
				{
					unk_0x5380482A432E314E(uParam0);
					return;
				}
			}
			unk_0xC91FE17AD7353B70(uParam0);
		}
	}
}

int func_307(int iParam0)
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_308(int iParam0)
{
	if (func_307(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (!unk_0x6B4C37F2EEC636CC(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			iVar0 = unk_0x317536BCEA8FA6B0(iParam0, -1, 0);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iVar0))
				{
					unk_0x957CEE967C939968(iVar0);
				}
				else
				{
					unk_0x68433819717660CF(&iVar0);
				}
			}
			iVar2 = unk_0x95EC8AE7E4F33F6E(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!unk_0x8EE3A848975DDF21(iParam0, iVar1, 0))
				{
					iVar0 = unk_0x317536BCEA8FA6B0(iParam0, iVar1, 0);
					if (unk_0x6ADD12BF4D6D2587(iVar0))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iVar0))
						{
							unk_0x957CEE967C939968(iVar0);
						}
						else
						{
							unk_0x68433819717660CF(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_310(var uParam0)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(*uParam0, 0))
		{
			unk_0xCFF0CD14B439821D(*uParam0, 0, 1);
		}
		if (!unk_0x9761C10D57B68069(*uParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*uParam0, 1, 0);
		}
		unk_0x68433819717660CF(uParam0);
	}
}

void func_311(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA6DECE14FC9A8C51(*uParam0))
	{
		unk_0xE30CF11C0EE14316(uParam0);
		bVar0 = true;
	}
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_1))
	{
		unk_0xE30CF11C0EE14316(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_7))
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_7, 0))
		{
			if (unk_0x48253D71C3FC0054(uParam0->f_7))
			{
				unk_0x36EE765E851207BF(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_312()
{
	switch (iLocal_2102)
	{
		case 1:
			iLocal_2102 = 2;
			iLocal_2104 = -1;
			break;
		
		case 2:
			iLocal_2102 = 3;
			iLocal_2104 = 0;
			iLocal_2103 = iLocal_2105;
			break;
		
		case 3:
			iLocal_2105 = -1;
			iLocal_2102 = 0;
			break;
		
		case 0:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_2106) > 2500)
			{
				iLocal_2106 = unk_0x53C562FD2B9E3AB0();
			}
			break;
	}
}

void func_313(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x6C97EEC6339FB45C())
	{
		if (unk_0x8AD07B6FC24F47C4())
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!unk_0xAB019B170BF1309C(uParam0[iVar0 /*82*/]))
				{
					iVar1 = 0;
					while (iVar1 < 12)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] != -1 && (uParam0[iVar0 /*82*/])->f_17[iVar1] != -1)
						{
							unk_0xEDB61F1ADC509416(uParam0[iVar0 /*82*/], iVar1, (uParam0[iVar0 /*82*/])->f_17.f_13[iVar1], (uParam0[iVar0 /*82*/])->f_17[iVar1], (uParam0[iVar0 /*82*/])->f_16);
							(uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] = -1;
							(uParam0[iVar0 /*82*/])->f_17[iVar1] = -1;
						}
						iVar1++;
					}
					iVar2 = 0;
					while (iVar2 < 9)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_39[iVar2] != -1 && (uParam0[iVar0 /*82*/])->f_17.f_49[iVar2] != -1)
						{
							unk_0x7B9E2A8E7B7BA218(uParam0[iVar0 /*82*/], iVar2, (uParam0[iVar0 /*82*/])->f_17.f_39[iVar2], (uParam0[iVar0 /*82*/])->f_17.f_49[iVar2], (uParam0[iVar0 /*82*/])->f_16);
							(uParam0[iVar0 /*82*/])->f_17.f_39[iVar2] = -1;
							(uParam0[iVar0 /*82*/])->f_17.f_49[iVar2] = -1;
						}
						iVar2++;
					}
					StringCopy(uParam0[iVar0 /*82*/], "", 64);
					(uParam0[iVar0 /*82*/])->f_16 = 0;
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_314(uParam0);
	}
}

void func_314(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xAB019B170BF1309C(uParam0[iVar0 /*82*/]))
		{
			StringCopy(uParam0[iVar0 /*82*/], "", 64);
			(uParam0[iVar0 /*82*/])->f_16 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				(uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] = -1;
				(uParam0[iVar0 /*82*/])->f_17[iVar1] = -1;
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_315(var uParam0)
{
	func_298(uParam0);
}

void func_316()
{
	struct<3> Var0;
	var uVar3;
	
	if (func_289() || func_7(0))
	{
		if (func_289())
		{
			iLocal_2108 = func_320();
			if (Global_87155)
			{
				iLocal_2108++;
			}
			if (iLocal_2108 >= 3)
			{
				iLocal_2108 = 3;
			}
		}
		else if (func_7(0))
		{
			iLocal_2108 = 0;
		}
		if (func_289())
		{
			func_300(iLocal_2108, &Var0, &uVar3);
			func_319(Var0, uVar3, 1, 0);
		}
		unk_0xC1B1E9A034A63A62(0);
		iLocal_2107 = 1;
	}
	else
	{
		func_102(0, "STAGE 0: REACH SUB", 0, 0, 0, 1);
		iLocal_2103 = 0;
		func_262(0);
	}
	iLocal_2104 = 0;
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), 1, 0);
	}
	unk_0xA6F6C62F4EB5371B("EXTRASUNNY");
	unk_0x62FA5DC648CD2526(unk_0x9EB17624F44A8DA4(), 0);
	unk_0x9EA1BA1DD45771B3(iLocal_394);
	unk_0x9EA1BA1DD45771B3(iLocal_395);
	unk_0x4DE114E3C7F8B7C2("REL_BUDDY", &iLocal_394);
	unk_0x4DE114E3C7F8B7C2("rel_dock", &iLocal_395);
	unk_0xF96119FCCD4D1889(5, iLocal_395, joaat("player"));
	unk_0xF96119FCCD4D1889(1, joaat("player"), iLocal_394);
	unk_0xF96119FCCD4D1889(1, iLocal_394, joaat("player"));
	unk_0xF96119FCCD4D1889(1, iLocal_395, iLocal_395);
	if (!unk_0x6ADD12BF4D6D2587(Local_55[0 /*2*/]))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_89475[0]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_89475[0], 1, 1);
			Local_55[0 /*2*/] = Global_89475[0];
			func_296(Local_55[0 /*2*/], 0);
			unk_0x47E2FD029BB8567C(Local_55[0 /*2*/], 1);
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_64[4 /*10*/]))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_89475.f_9[0]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_89475.f_9[0], 1, 1);
			Local_64[4 /*10*/] = Global_89475.f_9[0];
			unk_0xCE93FCB8A8D8DF0B(Local_64[4 /*10*/], iLocal_395);
			unk_0xAE01EF4BC84AFE7C(Local_64[4 /*10*/], 208, 1);
			unk_0x0223236997E1A137(Local_64[4 /*10*/], 45f);
			unk_0x7EDC2382770DE785(Local_64[4 /*10*/], 50f);
			unk_0x2C18191093123E39(Local_64[4 /*10*/], -50f);
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_169[0 /*2*/]))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_89475.f_28[0]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_89475.f_28[0], 1, 1);
			Local_169[0 /*2*/] = Global_89475.f_28[0];
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_169[1 /*2*/]))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_89475.f_28[1]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_89475.f_28[1], 1, 1);
			Local_169[1 /*2*/] = Global_89475.f_28[1];
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_169[2 /*2*/]))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_89475.f_28[2]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_89475.f_28[2], 1, 1);
			Local_169[2 /*2*/] = Global_89475.f_28[2];
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_169[3 /*2*/]))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_89475.f_28[3]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_89475.f_28[3], 1, 1);
			Local_169[3 /*2*/] = Global_89475.f_28[3];
		}
	}
	if (Global_89475.f_357)
	{
		if (unk_0x2737A688C2E9D2C8(&(Global_89475.f_37[0])))
		{
			unk_0x02C2C9D60B3C5D49(Global_89475.f_37[0], 1, 1);
			Local_145[0 /*5*/] = Global_89475.f_37[0];
			Global_89475.f_37[0] = 0;
		}
		if (unk_0x2737A688C2E9D2C8(&(Global_89475.f_37[1])))
		{
			unk_0x02C2C9D60B3C5D49(Global_89475.f_37[1], 1, 1);
			Local_145[1 /*5*/] = Global_89475.f_37[1];
			Global_89475.f_37[1] = 0;
		}
		if (unk_0x2737A688C2E9D2C8(&(Global_89475.f_37[2])))
		{
			unk_0x02C2C9D60B3C5D49(Global_89475.f_37[2], 1, 1);
			Local_145[2 /*5*/] = Global_89475.f_37[2];
			Global_89475.f_37[2] = 0;
		}
		if (unk_0x2737A688C2E9D2C8(&(Global_89475.f_37[3])))
		{
			unk_0x02C2C9D60B3C5D49(Global_89475.f_37[3], 1, 1);
			Local_145[3 /*5*/] = Global_89475.f_37[3];
			Global_89475.f_37[3] = 0;
		}
		iLocal_383 = 1;
	}
	else
	{
		iLocal_383 = 0;
	}
	unk_0xBCBC53983EC3B1BA("DOCKP1", 0);
	while (!unk_0x9F0887BCBFCF3C2F(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_101(unk_0xFC1458A37D98B502()))
	{
		func_215(&uLocal_213, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
	}
	func_318(1);
	unk_0xC0EBC1452FCAB15C(2);
	unk_0x94BD6F0436473406(0.5f);
	func_317(72);
}

void func_317(int iParam0)
{
	Global_88833 = 0;
	switch (iParam0)
	{
		case 72:
			func_255(2);
			func_255(4);
			break;
		
		case 73:
			func_255(0);
			func_255(1);
			func_255(7);
			break;
		
		case 92:
			func_255(10);
			func_255(9);
			func_255(13);
			func_255(6);
			break;
		
		case 68:
			func_255(11);
			break;
		
		case 78:
			func_255(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_255(3);
			break;
		
		default:
			break;
	}
}

void func_318(bool bParam0)
{
	if (bParam0)
	{
		Global_15812 = 1;
	}
	else
	{
		Global_15812 = 0;
	}
}

void func_319(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_289())
	{
		unk_0x941BE77305BB5695(0);
		unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 2);
		unk_0x6ACDC20166AA3FAC(1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), 0, 0);
		}
		Global_92829 = { Param0 };
		Global_92832 = uParam3;
		Global_92828 = 1;
		if (iParam4 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 14);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 24);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 24);
		}
		func_288(1);
	}
}

int func_320()
{
	if (!Global_92833 == 10 && !Global_92833 == 9)
	{
		return 0;
	}
	return Global_92833.f_2;
}

void func_321()
{
	if (unk_0x6C97EEC6339FB45C())
	{
		unk_0xCFA828389A0C5B6B();
		unk_0xA6C03E3E2533F8F3();
	}
	if (func_101(unk_0xFC1458A37D98B502()))
	{
		if (func_101(Local_55[0 /*2*/]))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_55[0 /*2*/], 0))
			{
				unk_0x2BF0EE8079E0436D(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(Local_55[0 /*2*/], 1) + Vector(2f, 0f, 0f));
			}
		}
	}
	func_201();
	if (func_101(Local_55[0 /*2*/]))
	{
		unk_0x4A93BD072EEEA421(Local_55[0 /*2*/], Local_166);
	}
	Global_89475.f_357 = 0;
	if (iLocal_384)
	{
		unk_0x125B8EDEAD208C21(&iLocal_439);
		iLocal_384 = 0;
	}
	if (unk_0xE0B0126B4689CB72(uLocal_380))
	{
		unk_0x990DE45B7A2B6426(uLocal_380, 0);
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (8 - 1))
	{
		if (func_101(Local_64[iLocal_382 /*10*/]))
		{
			func_311(&(Local_64[iLocal_382 /*10*/].f_2));
			if (unk_0xA6DECE14FC9A8C51(Local_64[iLocal_382 /*10*/].f_1))
			{
				unk_0xE30CF11C0EE14316(&(Local_64[iLocal_382 /*10*/].f_1));
			}
			if (unk_0xC816B63289F7A279(Local_64[iLocal_382 /*10*/]))
			{
				unk_0x88235B448509228B(Local_64[iLocal_382 /*10*/]);
			}
			if (Local_64[iLocal_382 /*10*/] != unk_0xFC1458A37D98B502())
			{
				func_9(&(Local_64[iLocal_382 /*10*/]), 1, 0, 1);
			}
		}
		iLocal_382++;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (4 - 1))
	{
		if (unk_0xA6DECE14FC9A8C51(Local_55[iLocal_382 /*2*/].f_1))
		{
			unk_0xE30CF11C0EE14316(&(Local_55[iLocal_382 /*2*/].f_1));
		}
		if (func_101(Local_55[iLocal_382 /*2*/]))
		{
			if (iLocal_382 != 0)
			{
				func_283(&(Local_55[iLocal_382 /*2*/]));
			}
		}
		iLocal_382++;
	}
	func_323(0);
	iLocal_382 = 0;
	while (iLocal_382 <= (9 - 1))
	{
		if (unk_0x6ADD12BF4D6D2587(Local_169[iLocal_382 /*2*/]))
		{
			if (Local_169[iLocal_382 /*2*/] == Local_169[4 /*2*/] || Local_169[iLocal_382 /*2*/] == Local_169[5 /*2*/])
			{
				func_85(&(Local_169[iLocal_382 /*2*/]), 1);
			}
			else
			{
				func_305(&(Local_169[iLocal_382 /*2*/]));
			}
		}
		iLocal_382++;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), 1, 0);
	}
	unk_0x62FA5DC648CD2526(unk_0x9EB17624F44A8DA4(), 1);
	unk_0x087D097B0C8C07B9();
	unk_0x94BD6F0436473406(1f);
	unk_0xC0EBC1452FCAB15C(5);
	unk_0x9B47B379EE749C38(1);
	unk_0x4255E93FCCDE108E(1);
	func_318(0);
	func_208(&Local_188, 0);
	func_322();
	if (unk_0xAB84FBE3AB3FFAD3("PO1_08_sub_waterplane"))
	{
		unk_0x990A0EC8D6FEA4BB("PO1_08_sub_waterplane");
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_322()
{
	Global_88833 = 0;
}

void func_323(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_103611, unk_0x436287B7DB306165(), 24);
		Global_103605 = 1;
	}
	else
	{
		StringCopy(&Global_103611, "NULL", 24);
		Global_103605 = 0;
	}
}

void func_324()
{
	int iVar0;
	
	if (unk_0x3B6F9DF9C5FEB3A4("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_104555.f_9055 || func_7(0))
	{
		if (!func_325())
		{
			iVar0 = func_5();
			if (iVar0 != -1)
			{
				if (!func_94(iVar0))
				{
					return;
				}
				unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_99();
		}
	}
}

int func_325()
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

void func_326()
{
	func_88(787.0854f, -2973.872f, 5.0585f, 256.91f);
}

