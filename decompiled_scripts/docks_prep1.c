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
	var uLocal_1239 = 15;
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
	var uLocal_1334 = 10;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
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
	var uLocal_1385 = 5;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
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
	var uLocal_1411 = 5;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
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
	var uLocal_1440 = 8;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
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
	var uLocal_1458 = 12;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 12;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 12;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 9;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 9;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
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
	var uLocal_1540 = 12;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 12;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 12;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 9;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 9;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
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
	var uLocal_1622 = 12;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 12;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 12;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 9;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 9;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
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
	var uLocal_1704 = 12;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 12;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 12;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 9;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 9;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
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
	var uLocal_1786 = 12;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 12;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 12;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 9;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 9;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
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
	var uLocal_1868 = 12;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 12;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 12;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 9;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 9;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
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
	var uLocal_1950 = 12;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 12;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 12;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 9;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 9;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
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
	var uLocal_2032 = 12;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 12;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 12;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 9;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 9;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
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
	int iLocal_2097 = 0;
	int iLocal_2098 = 0;
	int iLocal_2099 = 0;
	int iLocal_2100 = 0;
	int iLocal_2101 = 0;
	int iLocal_2102 = 0;
	int iLocal_2103 = 0;
	float fLocal_2104 = 0f;
	int iLocal_2105 = 0;
	int iLocal_2106 = 0;
	int iLocal_2107 = 0;
	var uLocal_2108[2] = { 0, 0 };
	int iLocal_2111 = 0;
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
	uLocal_46 = unk_0xCFFCC3E6689F1F45();
	uLocal_47 = unk_0xA655262EB9B9A8C4();
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
	fLocal_2104 = 3f;
	if (unk_0x24862A9CDC8F8874(3))
	{
		unk_0x233432976E597324("DHP1_FAIL");
		func_310();
		func_308();
		if (unk_0x57CF017E37442A64())
		{
			unk_0x964746959DBA39F2(0, 0, 0, 0);
		}
		func_305();
	}
	unk_0x5B0FC38A6C315E32(1);
	func_300();
	while (true)
	{
		unk_0xBB5777EE55D3B041("M_ThePortOfLSHeistPrep1", 0);
		func_299(&uLocal_460);
		func_297(&uLocal_1440);
		func_296();
		func_269();
		if (!iLocal_2102)
		{
			func_253();
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_2098)
	{
		case 0:
			func_206();
			break;
		
		case 1:
			func_173();
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
	switch (iLocal_2099)
	{
		case 0:
			if (unk_0xD5DFCA69ACAA20E3())
			{
				unk_0x31E6EB2040318451(800);
			}
			unk_0x8C67D2FDE360FBCA(180f);
			iLocal_2099++;
			break;
		
		case 1:
			if (unk_0xB66DD474AA9E764E())
			{
				func_3();
			}
			break;
	}
}

void func_3()
{
	func_4(0, 0);
	func_305();
}

void func_4(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55661)
	{
		Global_55661 = iParam1;
	}
	if (bParam0)
	{
		if ((func_7(0) && Global_69563.f_1 == 1) && func_6(Global_69563))
		{
		}
		else
		{
			Global_55659 = 1;
		}
	}
	if (Global_100976.f_7719 || func_7(0))
	{
		iVar0 = func_5();
		iVar1 = Global_82191[iVar0 /*5*/];
		uVar2 = Global_69586.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_100976.f_7719)
			{
			}
			return;
		}
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 4);
		unk_0x59A0729D503ED758(&Global_69565, 1);
		Global_69581 = uVar2;
		Global_69582 = unk_0x693EBB4F13506457();
	}
}

int func_5()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 2))
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
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

void func_8()
{
	switch (iLocal_2099)
	{
		case 0:
			if (unk_0xD5DFCA69ACAA20E3())
			{
				unk_0x31E6EB2040318451(800);
			}
			func_101(2, "STAGE 2: Drop off sub", 1, 0, 0, 1);
			if (func_100(Local_55[0 /*2*/]))
			{
				unk_0x916DBBB1A4A313B5(Local_55[0 /*2*/], 0, 0, 0, 1, 0, 0, 0, 0);
			}
			unk_0x7203A71F4A3F15CC(Local_55[0 /*2*/], 0);
			unk_0x7203A71F4A3F15CC(Local_55[1 /*2*/], 0);
			unk_0x4AA0E9C309975AB8(1);
			unk_0x1A4FB8258959E0F9(288.0967f, -3133.249f, 0f, 301.0605f, -2969.622f, 11.47017f);
			unk_0x6C3FCAFEEF537750(Local_55[0 /*2*/], 0);
			unk_0x8B8B003FB9DE3D8C(Local_55[0 /*2*/], 0);
			unk_0xD810132681A9B83C(0f, 10f, 4);
			iLocal_453 = 0;
			iLocal_454 = 0;
			iLocal_2099++;
			break;
		
		case 1:
			if (func_100(unk_0xC8B93D94F8954288()) && func_100(Local_55[0 /*2*/]))
			{
				if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(Local_55[0 /*2*/], 1), 1) > 400f && !unk_0xE77F5DDBC2E96204(Local_55[0 /*2*/]))
				{
					func_86(9);
				}
			}
			if (func_85(unk_0xC8B93D94F8954288(), 324.7653f, -2974.495f, -1.5f, 1) > 150f)
			{
				func_84(&(Local_169[7 /*2*/]), 0);
				func_84(&(Local_169[8 /*2*/]), 0);
				func_84(&(Local_169[6 /*2*/]), 0);
				func_82(&uLocal_460, joaat("prop_dock_crane_02_ld"));
				func_82(&uLocal_460, joaat("prop_dock_crane_02_cab"));
				func_82(&uLocal_460, joaat("prop_dock_crane_02_hook"));
			}
			if (!iLocal_453 && func_85(unk_0xC8B93D94F8954288(), Local_52, 1) < 200f)
			{
				func_81(&uLocal_460, joaat("bison"));
				iLocal_454 = 1;
				iLocal_453 = 1;
			}
			else if (iLocal_453)
			{
				if (func_85(unk_0xC8B93D94F8954288(), Local_52, 1) > 220f)
				{
					func_82(&uLocal_460, joaat("bison"));
					iLocal_454 = 0;
					iLocal_453 = 0;
					if (unk_0x95CCECA3948CFE7B(Local_55[3 /*2*/]))
					{
						unk_0x95F5F15D238A7F1C(&(Local_55[3 /*2*/]));
					}
				}
				else if (func_85(unk_0xC8B93D94F8954288(), Local_52, 1) < 200f)
				{
					if (iLocal_454 && unk_0x0845149A26DABBA5(joaat("bison")))
					{
						if (!unk_0x95CCECA3948CFE7B(Local_55[3 /*2*/]))
						{
							Local_55[3 /*2*/] = unk_0xD53B4DCC7B2C8551(joaat("bison"), -317.0741f, -2594.14f, 5.0004f, 316.2352f, 1, 1);
							unk_0x8B8B003FB9DE3D8C(Local_55[3 /*2*/], 0);
						}
						iLocal_454 = 0;
					}
				}
			}
			if (unk_0x57BA797A9A91EF93(Local_55[1 /*2*/], unk_0x974516F979AD07BC()) || ((unk_0x8DF850DA069BF37C(Local_55[2 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, 1, 0) && unk_0x8DF850DA069BF37C(Local_64[3 /*10*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, 1, 0)) && unk_0x8DF850DA069BF37C(Local_55[0 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, 1, 0)))
			{
				if (func_100(Local_55[1 /*2*/]))
				{
					unk_0x75F9B50AB7ABFD28(Local_55[1 /*2*/], 0.5f);
				}
				if (unk_0x6B4865E08E90ACC5(Local_188.f_5))
				{
					unk_0x81ABAAC291399373(Local_188.f_5, 1);
				}
				if (unk_0x6B4865E08E90ACC5(uLocal_378))
				{
					unk_0x5356E82C1E5E0C44(&uLocal_378);
				}
				if (iLocal_390)
				{
					unk_0x7846F09C04C34C46();
					iLocal_390 = 0;
				}
				if (func_41(&Local_188, Local_52, 0.1f, 0.1f, 2f, 1, Local_64[3 /*10*/], 0, 0, unk_0x974516F979AD07BC(), "dkp1_tk2", "DKP1_ABFLD", "", "", "", "DKP1_TRUCK", "DKP1_TRUCKBK", 0, 1, 1, -1) || (unk_0x6B4865E08E90ACC5(Local_188.f_5) && unk_0x8DF850DA069BF37C(unk_0x974516F979AD07BC(), -340.1324f, -2630.243f, 5.001461f, -346.5508f, -2636.808f, 12.68896f, 14.9375f, 0, 1, 0)))
				{
					unk_0x80D8D1CE9B26E9A3();
					func_40(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 7f, -1, 1056964608, 0, 1, 0);
					unk_0x8B8B003FB9DE3D8C(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0);
					unk_0x8B8B003FB9DE3D8C(Local_55[0 /*2*/], 0);
					unk_0x0782F0CAEA719452(Local_55[0 /*2*/], 10);
					func_36(&Local_188, 1, 0);
					unk_0x4AA0E9C309975AB8(0);
					unk_0x1A4FB8258959E0F9(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_452 = unk_0x693EBB4F13506457();
					iLocal_392 = 0;
					iLocal_2099++;
				}
			}
			else if (!unk_0x57BA797A9A91EF93(Local_55[1 /*2*/], unk_0x974516F979AD07BC()))
			{
				func_35(&Local_188);
				if (!unk_0x6B4865E08E90ACC5(uLocal_378))
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
			if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				if (func_12(&uLocal_213, "DHP1AUD", "DHP1_END", 7, 0, 0, 0))
				{
					unk_0xF1A02DDEC7E15D6E(Local_64[3 /*10*/], 1);
					unk_0xE48D9147BC1F4CD7(Local_64[3 /*10*/], unk_0xC8B93D94F8954288(), -1, 2048, 2);
					unk_0xA9351C9309E03069(&uLocal_379);
					unk_0x3E2E609450787FFE(&uLocal_379);
					unk_0xE5F6BE3F8E937ACE(0, 0, 0);
					unk_0x1510D3A1E178AAEF(0, unk_0xC8B93D94F8954288(), -1, 3f, 1f, 1073741824, 0);
					unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), -1);
					unk_0x939BC11172AA1303(uLocal_379);
					unk_0xBFE865E3B513451B(Local_64[3 /*10*/], uLocal_379);
					unk_0xA9351C9309E03069(&uLocal_379);
					iLocal_2099++;
				}
			}
			else if ((!iLocal_387 && func_30()) && (unk_0x693EBB4F13506457() - iLocal_452) > 3000)
			{
				func_29("dkp1_EXIT", 7500, 1);
				unk_0xD810132681A9B83C(10f, 5f, 4);
				iLocal_387 = 1;
			}
			break;
		
		case 3:
			if (!func_11())
			{
				if (func_100(Local_55[3 /*2*/]))
				{
					unk_0x5124C5FA52D2AF3E(Local_64[3 /*10*/]);
					unk_0xA9351C9309E03069(&uLocal_379);
					unk_0x3E2E609450787FFE(&uLocal_379);
					unk_0x9CEFBE395E148A32(0, Local_55[3 /*2*/], -1, -1, 2f, 1, 0);
					unk_0x52521828021B7DC5(0, Local_55[3 /*2*/], -189.8985f, -2622.707f, 5.0001f, 14, 30f, 786468, 5f, 1f, 1);
					unk_0xC2E4F4B0B73CFE01(0, Local_55[3 /*2*/], unk_0xC8B93D94F8954288(), 8, 30f, 786468, 1000f, 10f, 1);
					unk_0x939BC11172AA1303(uLocal_379);
					unk_0xBFE865E3B513451B(Local_64[3 /*10*/], uLocal_379);
					unk_0xA9351C9309E03069(&uLocal_379);
				}
				else
				{
					unk_0x5124C5FA52D2AF3E(Local_64[3 /*10*/]);
					unk_0xFF45E8546235908A(Local_64[3 /*10*/], Local_52, 300f, -1, 0, 0);
				}
				iLocal_452 = unk_0x693EBB4F13506457();
				iLocal_2099++;
			}
			break;
		
		case 4:
			if (func_10(Local_64[3 /*10*/], unk_0xC8B93D94F8954288(), 1) > 70f || (unk_0x693EBB4F13506457() - iLocal_452) > 20000)
			{
				func_9(&(Local_64[3 /*10*/]), 1, 0, 1);
				func_3();
			}
			break;
	}
}

void func_9(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0x2DC9BA2299B45EA6(*uParam0))
		{
			unk_0x05BE583DF8C6A617(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEC466B3D55749458(*uParam0);
			}
			unk_0xF1A02DDEC7E15D6E(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xAAD662D7E0D59F4C(*uParam0, 0);
			}
		}
		unk_0x459A6F82E024C891(uParam0);
	}
}

float func_10(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	if (!unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Var3, iParam2);
}

int func_11()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_13(sParam2, iParam3, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xB518E9C8553B1D2B(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
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
		if (unk_0x2964A62922189B93())
		{
			return 0;
		}
		if (func_26(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_25();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
			if (bParam2)
			{
				func_18();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_17())
				{
					return 0;
				}
				if (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
					if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
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
				switch (Global_14413.f_1)
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
				{
					return 0;
				}
			}
			func_15();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_14();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB518E9C8553B1D2B(0);
	Global_15712 = 1;
}

void func_15()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x77621132305B133B(&Global_2284, 16);
}

int func_16()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xA4860063B4E6B963() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x0917C1C640BB7484(unk_0xC8B93D94F8954288(), 78, 1))
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
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_19();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

int func_19()
{
	func_20();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_23(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_22(unk_0xC8B93D94F8954288());
			if (func_21(iVar0) && (!func_24(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_21(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_24(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_25()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

void func_27()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

void func_28(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_29(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0xEE90E717A80AA597(iParam1, 1);
}

int func_30()
{
	if (unk_0xA3858ADDDBC3CB71())
	{
		return 0;
	}
	if (unk_0xA77673910115074B())
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
	if (Global_16723 == 1)
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
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x361E437CE4AD5532(iParam0);
	if (unk_0x18BDAFC0B20C2C9E(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_34(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDDD65F4720293225(uVar0, bParam1);
		}
		else
		{
			unk_0x32546F91F646B246(uVar0, 2);
		}
	}
	else if (unk_0x96209AADF56E8FE8(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_34(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
		unk_0xDDD65F4720293225(uVar0, bParam1);
	}
	else if (unk_0x09C656419AB67926(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_34(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
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
	if (unk_0x6B4865E08E90ACC5(uParam0->f_5))
	{
		unk_0x5356E82C1E5E0C44(&(uParam0->f_5));
	}
}

void func_36(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDCC86F723E82125E(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_35(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
		{
			unk_0x5356E82C1E5E0C44(&(uParam0->f_1[iVar0]));
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
			unk_0x77621132305B133B(&(uParam0->f_13), iVar0);
			unk_0x77621132305B133B(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x6B4865E08E90ACC5(*uParam0))
	{
		unk_0x5356E82C1E5E0C44(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
		{
			unk_0x8EB9A60FB4C37A34(uParam0->f_17[iVar0], 1);
			unk_0x4D2A04F490FBAE07(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0xC778754E36F3FFD6(uParam0->f_17[iVar0], 32, 1);
				unk_0xC778754E36F3FFD6(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0xC778754E36F3FFD6(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()) && uParam0->f_17[iVar0] != unk_0xC8B93D94F8954288())
				{
					unk_0x5980997C9ACA0572(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xDCC86F723E82125E(uParam0->f_13, 29))
			{
				unk_0xD5BE34D3F0B9AC0A(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		unk_0x8EB9A60FB4C37A34(unk_0xC8B93D94F8954288(), 1);
		unk_0x4D2A04F490FBAE07(unk_0xC8B93D94F8954288(), 1);
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (bParam2)
		{
			unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_37()
{
	return unk_0x471BC3ECFB439FD6(unk_0x1A96BAEAC664567A());
}

void func_38(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x77621132305B133B(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x77621132305B133B(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x77621132305B133B(&(uParam1->f_13), 19);
			break;
	}
}

void func_39(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x77621132305B133B(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x77621132305B133B(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x77621132305B133B(&(uParam1->f_13), 16);
			break;
	}
}

int func_40(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x2BE3C7FA4FCCA784(0, 71, 1);
	unk_0x2BE3C7FA4FCCA784(0, 72, 1);
	unk_0x2BE3C7FA4FCCA784(0, 76, 1);
	unk_0x2BE3C7FA4FCCA784(0, 73, 1);
	unk_0x2BE3C7FA4FCCA784(0, 59, 1);
	unk_0x2BE3C7FA4FCCA784(0, 60, 1);
	if (bParam5)
	{
		unk_0x2BE3C7FA4FCCA784(0, 75, 1);
	}
	unk_0x2BE3C7FA4FCCA784(0, 80, 1);
	if (!bParam6)
	{
		unk_0x2BE3C7FA4FCCA784(0, 69, 1);
		unk_0x2BE3C7FA4FCCA784(0, 70, 1);
		unk_0x2BE3C7FA4FCCA784(0, 68, 1);
	}
	unk_0x2BE3C7FA4FCCA784(0, 74, 1);
	unk_0x2BE3C7FA4FCCA784(0, 86, 1);
	unk_0x2BE3C7FA4FCCA784(0, 81, 1);
	unk_0x2BE3C7FA4FCCA784(0, 82, 1);
	unk_0x2BE3C7FA4FCCA784(0, 138, 1);
	unk_0x2BE3C7FA4FCCA784(0, 136, 1);
	unk_0x2BE3C7FA4FCCA784(0, 114, 1);
	unk_0x2BE3C7FA4FCCA784(0, 107, 1);
	unk_0x2BE3C7FA4FCCA784(0, 110, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 87, 1);
	unk_0x2BE3C7FA4FCCA784(0, 88, 1);
	unk_0x2BE3C7FA4FCCA784(0, 113, 1);
	unk_0x2BE3C7FA4FCCA784(0, 115, 1);
	unk_0x2BE3C7FA4FCCA784(0, 116, 1);
	unk_0x2BE3C7FA4FCCA784(0, 117, 1);
	unk_0x2BE3C7FA4FCCA784(0, 118, 1);
	unk_0x2BE3C7FA4FCCA784(0, 119, 1);
	unk_0x2BE3C7FA4FCCA784(0, 131, 1);
	unk_0x2BE3C7FA4FCCA784(0, 132, 1);
	unk_0x2BE3C7FA4FCCA784(0, 123, 1);
	unk_0x2BE3C7FA4FCCA784(0, 126, 1);
	unk_0x2BE3C7FA4FCCA784(0, 129, 1);
	unk_0x2BE3C7FA4FCCA784(0, 130, 1);
	unk_0x2BE3C7FA4FCCA784(0, 133, 1);
	unk_0x2BE3C7FA4FCCA784(0, 134, 1);
	unk_0xFDE2F5F10CE86C82();
	if ((unk_0x693EBB4F13506457() - Global_29) > 500)
	{
		unk_0x5C384485B80ABDBC(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x693EBB4F13506457();
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		if (unk_0xA3C5926D6E5619AE(unk_0x9BA9222C7124CA04(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_41(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)
{
	return func_42(uParam0, Param1, Param4, func_80(), func_80(), iParam7, 5, iParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

int func_42(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
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
	func_79(uParam0);
	func_78(uParam0);
	func_77();
	if (func_61(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_60(sParam20);
		func_60(sParam21);
		func_60(sParam22);
		func_60(sParam23);
		if (unk_0xB66DD474AA9E764E())
		{
			bVar1 = false;
			if (unk_0x5D42322C7DB888D0(iParam18, 0))
			{
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iParam18, 0))
				{
					unk_0x59A0729D503ED758(&(uParam0->f_13), 3);
					if (!unk_0xDCC86F723E82125E(uParam0->f_13, 9))
					{
						unk_0x77621132305B133B(&(uParam0->f_13), 4);
					}
					if (unk_0xDCC86F723E82125E(uParam0->f_13, 23))
					{
						unk_0x77621132305B133B(&(uParam0->f_13), 23);
					}
					unk_0x59A0729D503ED758(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_58(uParam0, iParam29))
				{
					unk_0x59A0729D503ED758(&(uParam0->f_13), 3);
					if (!unk_0xDCC86F723E82125E(uParam0->f_13, 9))
					{
						unk_0x77621132305B133B(&(uParam0->f_13), 4);
					}
					unk_0x59A0729D503ED758(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_60(sParam24);
				func_60(sParam27);
				func_60("MORE_SEATS");
				if (bParam26 && unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
				{
					if (unk_0x6B4865E08E90ACC5(uParam0->f_5))
					{
						unk_0x5356E82C1E5E0C44(&(uParam0->f_5));
						func_60(sParam19);
					}
					if (unk_0x6B4865E08E90ACC5(*uParam0))
					{
						unk_0x5356E82C1E5E0C44(uParam0);
					}
					if ((!func_56(uParam0, 1) && !func_55(uParam0)) && !unk_0xDCC86F723E82125E(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_54(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[0]))
							{
								func_52(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x59A0729D503ED758(&(uParam0->f_13), 0);
						unk_0x77621132305B133B(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xDCC86F723E82125E(uParam0->f_13, 0))
					{
						func_60("LOSE_WANTED");
						unk_0x77621132305B133B(&(uParam0->f_13), 0);
						unk_0x59A0729D503ED758(&(uParam0->f_13), 1);
					}
					if (unk_0xDCC86F723E82125E(uParam0->f_13, 1))
					{
						if (!func_56(uParam0, 1))
						{
							if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[0]))
							{
								func_52(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x77621132305B133B(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x6B4865E08E90ACC5(uParam0->f_5))
					{
						if (unk_0x6B4865E08E90ACC5(*uParam0))
						{
							unk_0x5356E82C1E5E0C44(uParam0);
						}
						uParam0->f_5 = func_51(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0x31FDDAFCCFEFA478(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_50(uParam0->f_5, uParam0);
						}
					}
					else if (!func_49(Var3, unk_0xEACB9E183BFE83FD(uParam0->f_5), 0.1f, 0))
					{
						unk_0xC569AF72BA6007D8(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_50(uParam0->f_5, uParam0);
						}
					}
					if (!func_56(uParam0, 2))
					{
						if (!unk_0xDCC86F723E82125E(uParam0->f_13, 2))
						{
							func_54(uParam0, sParam19, 0);
							unk_0x59A0729D503ED758(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xDCC86F723E82125E(uParam0->f_13, 13))
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
						unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
									if (!unk_0x0C7EC810080F0459(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x0C7EC810080F0459(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar2], func_37()) || !func_47(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_44(uParam0))
							{
								func_60(sParam19);
								func_60(sParam24);
								func_60(sParam20);
								func_60(sParam21);
								func_60(sParam22);
								func_60(sParam23);
								func_60("LOSE_WANTED");
								func_60("MORE_SEATS");
								func_60(sParam27);
								func_36(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x95CCECA3948CFE7B(iParam18))
			{
				if ((bParam26 && unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0)) && (!unk_0xDCC86F723E82125E(uParam0->f_13, 9) && !unk_0xDCC86F723E82125E(uParam0->f_13, 22)))
				{
					func_60(sParam24);
					func_60(sParam27);
					if (unk_0x6B4865E08E90ACC5(uParam0->f_5) || unk_0x6B4865E08E90ACC5(*uParam0))
					{
						unk_0x5356E82C1E5E0C44(&(uParam0->f_5));
						unk_0x5356E82C1E5E0C44(uParam0);
						func_60(sParam19);
					}
					if ((!func_56(uParam0, 1) && !func_55(uParam0)) && !unk_0xDCC86F723E82125E(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_54(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[0]))
							{
								func_52(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x59A0729D503ED758(&(uParam0->f_13), 0);
						unk_0x77621132305B133B(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xDCC86F723E82125E(uParam0->f_13, 0))
					{
						func_60("LOSE_WANTED");
						unk_0x77621132305B133B(&(uParam0->f_13), 0);
						unk_0x59A0729D503ED758(&(uParam0->f_13), 1);
					}
					if (unk_0xDCC86F723E82125E(uParam0->f_13, 1))
					{
						if (!func_56(uParam0, 1))
						{
							if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[0]))
							{
								func_52(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x77621132305B133B(&(uParam0->f_13), 1);
						}
					}
					if (unk_0x5D42322C7DB888D0(iParam18, 0))
					{
						if (!unk_0x6B4865E08E90ACC5(*uParam0))
						{
							if (unk_0x6B4865E08E90ACC5(uParam0->f_5))
							{
								unk_0x5356E82C1E5E0C44(&(uParam0->f_5));
								func_60(sParam19);
							}
							*uParam0 = func_43(iParam18, 0, 0);
							unk_0xB8D190382B0188FE(*uParam0, 2);
							if (!unk_0xDCC86F723E82125E(uParam0->f_13, 4))
							{
								func_50(*uParam0, uParam0);
							}
						}
						if (!func_56(uParam0, 2))
						{
							if (!unk_0xDCC86F723E82125E(uParam0->f_13, 3))
							{
								func_54(uParam0, sParam24, 0);
								unk_0x59A0729D503ED758(&(uParam0->f_13), 3);
								unk_0x77621132305B133B(&(uParam0->f_13), 4);
							}
							else if (unk_0xDCC86F723E82125E(uParam0->f_13, 9))
							{
								if (!unk_0x544AEDB4A15228FF(sParam27))
								{
									if (!unk_0xDCC86F723E82125E(uParam0->f_13, 4))
									{
										func_54(uParam0, sParam27, 0);
										unk_0x59A0729D503ED758(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xDCC86F723E82125E(uParam0->f_13, 4))
								{
									func_54(uParam0, sParam24, 0);
									unk_0x59A0729D503ED758(&(uParam0->f_13), 4);
								}
								if (!unk_0xDCC86F723E82125E(uParam0->f_13, 23))
								{
									if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[0]))
									{
										func_52(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x59A0729D503ED758(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x6B4865E08E90ACC5(uParam0->f_5))
				{
					unk_0x5356E82C1E5E0C44(&(uParam0->f_5));
					func_60(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_56(uParam0, 2))
						{
							if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
							{
								if (!unk_0xDCC86F723E82125E(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x531444754C426278(0, iVar8);
									if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar9]))
									{
										func_52(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_54(uParam0, "MORE_SEATS", 0);
									unk_0x59A0729D503ED758(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xDCC86F723E82125E(uParam0->f_13, 3))
							{
								func_54(uParam0, sParam24, 0);
								unk_0x59A0729D503ED758(&(uParam0->f_13), 3);
								unk_0x77621132305B133B(&(uParam0->f_13), 4);
							}
							else if (!unk_0xDCC86F723E82125E(uParam0->f_13, 4))
							{
								if (unk_0xDCC86F723E82125E(uParam0->f_13, 9))
								{
									func_54(uParam0, sParam27, 0);
									unk_0x59A0729D503ED758(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_56(uParam0, 2))
					{
						if (!unk_0xDCC86F723E82125E(uParam0->f_13, 3))
						{
							func_54(uParam0, sParam24, 0);
							unk_0x59A0729D503ED758(&(uParam0->f_13), 3);
							unk_0x77621132305B133B(&(uParam0->f_13), 4);
						}
						else if (unk_0xDCC86F723E82125E(uParam0->f_13, 9))
						{
							if (!unk_0x544AEDB4A15228FF(sParam27))
							{
								if (!unk_0xDCC86F723E82125E(uParam0->f_13, 4))
								{
									func_54(uParam0, sParam27, 0);
									unk_0x59A0729D503ED758(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xDCC86F723E82125E(uParam0->f_13, 4))
							{
								func_54(uParam0, sParam24, 0);
								unk_0x59A0729D503ED758(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xDCC86F723E82125E(uParam0->f_13, 0))
		{
			unk_0x77621132305B133B(&(uParam0->f_13), 0);
		}
		func_60(sParam19);
		func_60(sParam24);
		func_60(sParam27);
		func_60(sParam24);
		func_60("LOSE_WANTED");
		if (unk_0x6B4865E08E90ACC5(uParam0->f_5))
		{
			unk_0x5356E82C1E5E0C44(&(uParam0->f_5));
		}
		if (unk_0x6B4865E08E90ACC5(*uParam0))
		{
			unk_0x5356E82C1E5E0C44(uParam0);
		}
	}
	unk_0x77621132305B133B(&(uParam0->f_13), 11);
	unk_0x77621132305B133B(&(uParam0->f_13), 12);
	return 0;
}

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	return func_33(iParam0, !bParam1, bParam2);
}

int func_44(var uParam0)
{
	if (unk_0xDCC86F723E82125E(uParam0->f_13, 12))
	{
		if (func_46(unk_0xC8B93D94F8954288()))
		{
			if (func_45(1, 0, 1) || unk_0xDCC86F723E82125E(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_45(1, 0, 1) || unk_0xDCC86F723E82125E(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_45(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x6DAFE4284D2E6AD0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (bParam0)
		{
			if (unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				if (unk_0xC0ADAF0814175B68(iVar0, -1) != unk_0xC8B93D94F8954288())
				{
					return 0;
				}
			}
		}
		if (!unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x3E4CBCCFB5F133F1(iVar0) < 0.95f || unk_0x3E4CBCCFB5F133F1(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (!unk_0xBF43288C8D773F6A(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	float fVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		fVar0 = unk_0x9BA9222C7124CA04(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_47(int iParam0, int iParam1)
{
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()) && iParam1)
		{
			if (func_48(unk_0xC8B93D94F8954288(), iParam0))
			{
				unk_0x1030334E811628C4(func_37(), 50f);
				return 1;
			}
		}
		else if (unk_0xA863CAB6B7856A4B(iParam0, func_37()))
		{
			unk_0x1030334E811628C4(func_37(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x7F13E3D2383CF15F(iParam0))
		{
			iVar0 = unk_0x275BEBE583A163B5(iParam0, 0);
			if (unk_0x5D42322C7DB888D0(iVar0, 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(iParam1))
				{
					if (unk_0x465DC424E3211BBE(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_49(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xA3C5926D6E5619AE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_50(var uParam0, var uParam1)
{
	if (unk_0x6B4865E08E90ACC5(uParam0))
	{
		if (unk_0x6B4865E08E90ACC5(uParam1->f_6))
		{
			unk_0x706ABF1139F36482(uParam1->f_6, 0);
		}
		unk_0x3BFC6ABA90325F64(0);
		unk_0x6ECF8FAD9A800368();
		uParam1->f_6 = uParam0;
		unk_0x706ABF1139F36482(uParam0, 1);
	}
}

var func_51(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xDF811B9EAB020A4D(Param0);
	unk_0x3734DA1F207E7166(uVar0, func_34(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
	unk_0x706ABF1139F36482(uVar0, iParam3);
	return uVar0;
}

void func_52(var uParam0, char* sParam1, int iParam2)
{
	unk_0x7ABE44FB19CAE2E1(uParam0, sParam1, func_53(iParam2), 1);
}

int func_53(int iParam0)
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

void func_54(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x544AEDB4A15228FF(sParam1))
		{
			if (!unk_0xF8D041B05C3D1FD4(sParam1, ""))
			{
				func_29(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x693EBB4F13506457();
}

int func_55(var uParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(uParam0->f_16))
	{
		if (unk_0x0D211C48FB8578B7(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xA77673910115074B())
	{
		if (unk_0xA3858ADDDBC3CB71())
		{
			return 1;
		}
		if (func_57(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xA77673910115074B())
	{
		if (func_11() && !func_31())
		{
			return 1;
		}
	}
	return 0;
}

int func_57(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x693EBB4F13506457();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_58(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (func_59(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x95CCECA3948CFE7B(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x7EFD275DF858497F(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x29B4599EE2B11907(iParam0, 1))
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
				if (!unk_0x29B4599EE2B11907(iParam0, 1))
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

void func_60(char* sParam0)
{
	if (!unk_0x544AEDB4A15228FF(sParam0))
	{
		unk_0x74F83E6AF43012A7(sParam0);
	}
}

int func_61(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
		{
			if (!unk_0xDCC86F723E82125E(uParam0->f_13, 29) && !unk_0xDCC86F723E82125E(uParam0->f_13, 28))
			{
				if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
				{
					unk_0xD5BE34D3F0B9AC0A(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x59A0729D503ED758(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xDCC86F723E82125E(uParam0->f_13, 29) && unk_0xDCC86F723E82125E(uParam0->f_13, 28))
		{
			if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
			{
				unk_0xD5BE34D3F0B9AC0A(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x77621132305B133B(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x95CCECA3948CFE7B(uParam0->f_21))
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
			iVar24 = unk_0xFD4D1267977B7832(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 50f, 0, iVar25);
			if (unk_0x5D42322C7DB888D0(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x5D42322C7DB888D0(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
				{
					if (!unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0) || !bParam17)
					{
						if (func_59(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
								{
									unk_0x9EEBFF7C6634D175(uParam0->f_17[iVar0], 1f);
									if (unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()))
									{
										unk_0x5980997C9ACA0572(uParam0->f_17[iVar0]);
									}
									if (unk_0x090C65D5190A249D(uParam0->f_17[iVar0], -1794415470) == 7 && !func_76(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x770AAB67BDD9C729(uParam0->f_17[iVar0]) && !unk_0x5B4D7A11EBC299CE(uParam0->f_17[iVar0]))
										{
											unk_0xAAD662D7E0D59F4C(uParam0->f_17[iVar0], 1);
											unk_0x9CEFBE395E148A32(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x64CD20398FAC9617(uParam0->f_17[iVar0], iVar0);
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
			unk_0x77621132305B133B(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
				{
					if (!unk_0xC0AE63CA97F3FF6A(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x5124C5FA52D2AF3E(uParam0->f_17[iVar0]);
					}
					if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()))
					{
						if (func_74(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x13B202E60E04C733(uParam0->f_17[iVar0], func_37());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xDCC86F723E82125E(uParam0->f_13, 26))
	{
		if ((!func_73(uParam0) && unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288())) && !unk_0x95CCECA3948CFE7B(iParam10))
		{
			iVar13 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x5D42322C7DB888D0(iVar13, 0))
			{
				if (!unk_0xDCC86F723E82125E(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_56(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x531444754C426278(0, iVar26);
						if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar27]))
						{
							func_52(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_54(uParam0, "MORE_SEATS", 0);
						unk_0x59A0729D503ED758(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x77621132305B133B(&(uParam0->f_13), 13);
			func_60("MORE_SEATS");
		}
		if (!unk_0x95CCECA3948CFE7B(iParam10))
		{
			if ((!unk_0x2DC9BA2299B45EA6(uParam0->f_17[0]) || !unk_0x2DC9BA2299B45EA6(uParam0->f_17[1])) || !unk_0x2DC9BA2299B45EA6(uParam0->f_17[2]))
			{
				if (!unk_0xDCC86F723E82125E(uParam0->f_13, 31))
				{
					if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()) && !func_56(uParam0, 2))
					{
						iVar13 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
						if (func_72(iVar13, uParam0))
						{
							func_54(uParam0, "CMN_VEHSUIT", 0);
							unk_0x59A0729D503ED758(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
				{
					unk_0x77621132305B133B(&(uParam0->f_13), 31);
					func_60("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x5D42322C7DB888D0(iParam10, 0))
		{
			if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), iParam10))
			{
				if (unk_0x8D9008B8900A28D0(0, 75))
				{
					unk_0x59A0729D503ED758(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xDCC86F723E82125E(uParam0->f_13, 21))
			{
				unk_0x77621132305B133B(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x95CCECA3948CFE7B(uParam0->f_17[iVar0]))
			{
				if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
				{
					if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()))
					{
						unk_0x9880BAA7286E1072(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x9880BAA7286E1072(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
					{
						iVar13 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
						if (unk_0x5D42322C7DB888D0(iVar13, 0))
						{
							if (unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()))
							{
								if (!func_73(uParam0) && unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
								{
									if (!func_71(uParam0->f_17[iVar0]))
									{
										unk_0x5980997C9ACA0572(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0xB6900B8CB0ABBD2B(iVar13))
						{
							if (unk_0x465DC424E3211BBE(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xEE473B4B88D6F842(iVar13) && !unk_0xA4D2826AAFA337FD(iVar13))
								{
									Var28 = { unk_0x44C17CCB85A88A1F(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0xD4781E5070EB1F1C(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()))
					{
						if (unk_0x7F13E3D2383CF15F(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x275BEBE583A163B5(uParam0->f_17[iVar0], 0);
							if (!unk_0xB6900B8CB0ABBD2B(iVar13))
							{
								if (unk_0x5D42322C7DB888D0(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), iVar13))
										{
											if (unk_0x9BA9222C7124CA04(iVar13) > 5f)
											{
												unk_0xD4781E5070EB1F1C(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xD4781E5070EB1F1C(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
									{
										iVar31 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
									}
									if (unk_0x5D42322C7DB888D0(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x9BA9222C7124CA04(iVar13) > 5f)
											{
												unk_0xD4781E5070EB1F1C(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xD4781E5070EB1F1C(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()))
					{
						iVar32 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
						if (unk_0x95CCECA3948CFE7B(iVar32))
						{
							if (func_59(iVar32, uParam0, 0))
							{
								if (func_70(iVar0, uParam0) || !unk_0xDCC86F723E82125E(uParam0->f_13, 27))
								{
									unk_0x64CD20398FAC9617(uParam0->f_17[iVar0], iVar0);
									func_38(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x59A0729D503ED758(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_70(iVar0, uParam0))
							{
								if (unk_0x6D5BB810CC209E15(iVar32) == joaat("sentinel2"))
								{
									unk_0x64CD20398FAC9617(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x64CD20398FAC9617(uParam0->f_17[iVar0], 2);
								}
								func_69(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()) && !func_68(uParam0->f_17[iVar0], iParam10)) && !func_67(uParam0->f_17[iVar0], iParam10))
					{
						if (func_74(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()))
							{
								if (((!unk_0x770AAB67BDD9C729(uParam0->f_17[iVar0]) && !unk_0x5B4D7A11EBC299CE(uParam0->f_17[iVar0])) && !unk_0x911A26F8FA3BA28E(uParam0->f_17[iVar0])) && !unk_0xC0AE63CA97F3FF6A(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x090C65D5190A249D(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x5124C5FA52D2AF3E(uParam0->f_17[iVar0]);
									}
									unk_0x13B202E60E04C733(uParam0->f_17[iVar0], func_37());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x693EBB4F13506457();
								uParam0->f_1[iVar0] = func_43(uParam0->f_17[iVar0], 0, 0);
								unk_0xB8D190382B0188FE(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_50(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
					{
						if (((func_47(uParam0->f_17[iVar0], 1) || func_68(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x5D42322C7DB888D0(iParam10, 0) && !unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iParam10, 0)))
						{
							if (unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
							{
								unk_0x5356E82C1E5E0C44(&(uParam0->f_1[iVar0]));
								func_60(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_50(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x5D42322C7DB888D0(iParam10, 0))
					{
						if (!unk_0x465DC424E3211BBE(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x5534579797ACFD77(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xDCC86F723E82125E(uParam0->f_13, 11)) && !((bParam17 && unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0)) && !unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iParam10, 0)))
							{
								if (unk_0x7F13E3D2383CF15F(uParam0->f_17[iVar0]))
								{
									if (!unk_0x0C7EC810080F0459(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_47(uParam0->f_17[iVar0], 1))
										{
											if (func_46(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x090C65D5190A249D(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0xE5F6BE3F8E937ACE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()))
									{
										if ((((!unk_0x911A26F8FA3BA28E(uParam0->f_17[iVar0]) && !unk_0x770AAB67BDD9C729(uParam0->f_17[iVar0])) && !unk_0x5B4D7A11EBC299CE(uParam0->f_17[iVar0])) && !unk_0xC0AE63CA97F3FF6A(uParam0->f_17[iVar0])) && !unk_0x79E944054F6C9DCD(iParam10))
										{
											unk_0x5980997C9ACA0572(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x090C65D5190A249D(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_76(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x911A26F8FA3BA28E(uParam0->f_17[iVar0]) && !unk_0x911A26F8FA3BA28E(unk_0xC8B93D94F8954288())) && !func_66(uParam0->f_17[iVar0], 2f)) && !unk_0x770AAB67BDD9C729(uParam0->f_17[iVar0])) && !unk_0x5B4D7A11EBC299CE(uParam0->f_17[iVar0])) && !unk_0x79E944054F6C9DCD(iParam10))
										{
											unk_0xAAD662D7E0D59F4C(uParam0->f_17[iVar0], 1);
											if (unk_0xDCC86F723E82125E(uParam0->f_13, 10))
											{
												unk_0x9EEBFF7C6634D175(uParam0->f_17[iVar0], 1f);
											}
											unk_0x9CEFBE395E148A32(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x6AEF3997AED77246(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_43(uParam0->f_17[iVar0], 0, 0);
										unk_0xB8D190382B0188FE(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()))
							{
								if (func_74(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x770AAB67BDD9C729(uParam0->f_17[iVar0]) && !unk_0x5B4D7A11EBC299CE(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x090C65D5190A249D(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x5124C5FA52D2AF3E(uParam0->f_17[iVar0]);
										}
										unk_0xAAD662D7E0D59F4C(uParam0->f_17[iVar0], 0);
										unk_0x13B202E60E04C733(uParam0->f_17[iVar0], func_37());
									}
								}
							}
						}
						else if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), iParam10))
						{
							if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()))
							{
								if (!unk_0xDCC86F723E82125E(uParam0->f_13, 21))
								{
									unk_0x13B202E60E04C733(uParam0->f_17[iVar0], func_37());
								}
							}
							else if (unk_0xDCC86F723E82125E(uParam0->f_13, 21))
							{
								unk_0x5980997C9ACA0572(uParam0->f_17[iVar0]);
								unk_0x59A0729D503ED758(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_37()) && !unk_0x79E944054F6C9DCD(iParam10))
						{
							unk_0x5980997C9ACA0572(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
				{
					unk_0x5356E82C1E5E0C44(&(uParam0->f_1[iVar0]));
					func_60(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_56(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
						{
							if (func_71(uParam0->f_17[iVar0]) || unk_0x5534579797ACFD77(uParam0->f_17[iVar0], unk_0xC8B93D94F8954288(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
					{
						if (!unk_0x5534579797ACFD77(uParam0->f_17[iVar0], unk_0xC8B93D94F8954288(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_71(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x693EBB4F13506457();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xDCC86F723E82125E(uParam0->f_13, 5))
							{
								func_54(uParam0, sParam7, 0);
								unk_0x59A0729D503ED758(&(uParam0->f_13), 5);
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
									if (!func_65(iVar0, uParam0))
									{
										if (!unk_0x544AEDB4A15228FF(uVar19[iVar0]))
										{
											if (!unk_0xF8D041B05C3D1FD4(uVar19[iVar0], ""))
											{
												func_63(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_62(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_65(iVar0, uParam0))
										{
											func_54(uParam0, uVar15[iVar0], 0);
											func_62(iVar0, uParam0);
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
		unk_0x77621132305B133B(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
				{
					unk_0x5356E82C1E5E0C44(&(uParam0->f_1[iVar0]));
					func_60(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_60("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x59A0729D503ED758(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x59A0729D503ED758(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x59A0729D503ED758(&(uParam1->f_13), 16);
			break;
	}
}

void func_63(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x544AEDB4A15228FF(sParam1))
		{
			if (!unk_0xF8D041B05C3D1FD4(sParam1, ""))
			{
				func_64(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x693EBB4F13506457();
}

void func_64(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0xCE59E3E42586D52D(uParam1);
	unk_0xEE90E717A80AA597(iParam2, 1);
}

int func_65(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xDCC86F723E82125E(uParam1->f_13, 14);
		
		case 1:
			return unk_0xDCC86F723E82125E(uParam1->f_13, 15);
		
		case 2:
			return unk_0xDCC86F723E82125E(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_66(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x277ECDA23D8CCEB4(iParam0, 0))
	{
		iVar0 = unk_0x275BEBE583A163B5(iParam0, 0);
		if (!unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x9BA9222C7124CA04(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (!unk_0xA863CAB6B7856A4B(iParam0, func_37()))
		{
			iVar0 = unk_0x01D86C7BBF22D1B5(iParam0);
			if (unk_0x5D42322C7DB888D0(iParam1, 0))
			{
				if (unk_0x5534579797ACFD77(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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

int func_68(int iParam0, int iParam1)
{
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x95CCECA3948CFE7B(iParam1))
		{
			if (unk_0x5D42322C7DB888D0(iParam1, 0))
			{
				if (unk_0x465DC424E3211BBE(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_69(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x59A0729D503ED758(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x59A0729D503ED758(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x59A0729D503ED758(&(uParam1->f_13), 19);
			break;
	}
}

int func_70(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xDCC86F723E82125E(uParam1->f_13, 17);
		
		case 1:
			return unk_0xDCC86F723E82125E(uParam1->f_13, 18);
		
		case 2:
			return unk_0xDCC86F723E82125E(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		iVar0 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
		if (unk_0x5D42322C7DB888D0(iVar0, 0))
		{
			if (!unk_0x2DC9BA2299B45EA6(iParam0))
			{
				iVar1 = unk_0xBCEA8C5A6B3F7D71(iParam0);
				if (unk_0x5D42322C7DB888D0(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x5534579797ACFD77(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_72(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		if (unk_0x6D5BB810CC209E15(iParam0) == joaat("bus") || unk_0x6D5BB810CC209E15(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x2DC9BA2299B45EA6(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xC0ADAF0814175B68(iParam0, 0);
			if (!unk_0x2DC9BA2299B45EA6(iVar3))
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
			iVar4 = unk_0xC0ADAF0814175B68(iParam0, 1);
			if (!unk_0x2DC9BA2299B45EA6(iVar4))
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
			iVar5 = unk_0xC0ADAF0814175B68(iParam0, 2);
			if (!unk_0x2DC9BA2299B45EA6(iVar5))
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

int func_73(var uParam0)
{
	int iVar0;
	
	if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
	{
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (func_59(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_74(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam1))
	{
		if (unk_0x7F13E3D2383CF15F(iParam1))
		{
			iVar0 = unk_0x275BEBE583A163B5(iParam1, 0);
			if (!unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				if (unk_0x5D42322C7DB888D0(iVar0, 0))
				{
					if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), iVar0))
					{
						if (func_73(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
				if (unk_0x95CCECA3948CFE7B(iVar0))
				{
					if (func_59(iVar0, uParam0, 0))
					{
						if (unk_0x5D42322C7DB888D0(iVar0, 0))
						{
							if (func_75(iVar0))
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

int func_75(int iParam0)
{
	float fVar0;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		fVar0 = unk_0x9BA9222C7124CA04(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x5D42322C7DB888D0(iParam1, 0))
		{
			iVar0 = unk_0xBCEA8C5A6B3F7D71(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_77()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
	{
		iVar0 = unk_0x01D86C7BBF22D1B5(unk_0xC8B93D94F8954288());
		if (unk_0x5D42322C7DB888D0(iVar0, 0))
		{
			iVar1 = unk_0xC0ADAF0814175B68(iVar0, 0);
			if (!unk_0x2DC9BA2299B45EA6(iVar1))
			{
				if (iVar1 != unk_0xC8B93D94F8954288())
				{
					if (unk_0xD28A89C669EAD2E4(iVar1))
					{
						if (!unk_0xF0F36915A8ADB923(iVar1, unk_0xC8B93D94F8954288()))
						{
							unk_0xE48D9147BC1F4CD7(iVar1, unk_0xC8B93D94F8954288(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_78(var uParam0)
{
	int iVar0;
	
	if (!unk_0xDCC86F723E82125E(uParam0->f_13, 25))
	{
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x95CCECA3948CFE7B(uParam0->f_17[iVar0]))
			{
				if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
				{
					unk_0xC778754E36F3FFD6(uParam0->f_17[iVar0], 32, 0);
					unk_0xC778754E36F3FFD6(uParam0->f_17[iVar0], 305, 1);
					unk_0xC778754E36F3FFD6(uParam0->f_17[iVar0], 268, 1);
					unk_0x6AEF3997AED77246(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0 = (iVar0 + 1);
		}
		unk_0x59A0729D503ED758(&(uParam0->f_13), 25);
	}
}

void func_79(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x95CCECA3948CFE7B(uParam0->f_17[iVar0]))
		{
			if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
			{
				if (unk_0x7F13E3D2383CF15F(uParam0->f_17[iVar0]))
				{
					unk_0x8EB9A60FB4C37A34(uParam0->f_17[iVar0], 0);
					unk_0x4D2A04F490FBAE07(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
			{
				unk_0x8EB9A60FB4C37A34(unk_0xC8B93D94F8954288(), 0);
				unk_0x4D2A04F490FBAE07(unk_0xC8B93D94F8954288(), 0);
			}
		}
	}
}

Vector3 func_80()
{
	struct<3> Var0;
	
	return Var0;
}

int func_81(var uParam0, int iParam1)
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
					uParam0->f_977 = 1;
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
		unk_0x7567CEA8E6B5340B(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x693EBB4F13506457();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_82(var uParam0, int iParam1)
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
					unk_0x4BBD72565A0AF033(iParam1);
					func_83(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_977 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_83(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_84(var uParam0, bool bParam1)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (unk_0xE33A9405F8300B78(*uParam0))
		{
			unk_0xB81176DFD2611E8B(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xC2BB205CCEB68102(uParam0);
		}
		else
		{
			unk_0xFA8BA151FBE4A15B(*uParam0);
		}
	}
}

float func_85(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Param1, iParam4);
}

void func_86(int iParam0)
{
	char* sVar0;
	
	unk_0x233432976E597324("DHP1_FAIL");
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
	func_91(sVar0);
	while (!func_90())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_89())
	{
		func_310();
	}
	else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1298.369f, -3062.1f, -71.22691f, 790.9125f, -3068.998f, 63.91419f, 250f, 0, 0, 0))
	{
		func_87(787.0854f, -2973.872f, 5.0585f, 256.91f);
	}
	func_305();
	unk_0xA4E0D8FD51F2A6F7();
}

void func_87(struct<3> Param0, float fParam3)
{
	if (func_88(Global_69557, 0f, 0f, 0f, 0))
	{
		Global_69557 = { Param0 };
		Global_69560 = fParam3;
	}
}

bool func_88(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_89()
{
	if (Global_91106 == 7)
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91106 == 7 || Global_91106 == 8)
	{
		return 1;
	}
	return 0;
}

void func_91(char* sParam0)
{
	func_99(sParam0);
	func_92(0);
}

void func_92(int iParam0)
{
	int iVar0;
	
	if (Global_100976.f_7719 || func_7(0))
	{
		iVar0 = func_5();
		if (!func_93(iVar0))
		{
			return;
		}
		unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 5);
		Global_91142 = iParam0;
	}
}

int func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_98();
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		unk_0xE3BB289E1C1F168E(5000);
	}
	iVar0 = Global_82191[iParam0 /*5*/];
	iVar1 = Global_69586.f_109[iVar0 /*4*/];
	func_97(iVar1, 1);
	unk_0x56A28F32E01DD318(unk_0xA34E7C2A5118D638());
	unk_0x5E70D5A5F14A2E17(unk_0xA34E7C2A5118D638());
	func_94(&(Global_100976.f_1770.f_539), iVar1);
	if (Global_85614 == Global_91143)
	{
		Global_100976.f_7719.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xDCC86F723E82125E(Global_82227[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x0F976C80D8B6703E(0);
		}
	}
	Global_100976.f_7719.f_330[iVar1 /*6*/].f_2++;
	Global_85614 = Global_91143;
	if (iParam0 == -1)
	{
		if (Global_100976.f_7719)
		{
		}
		return 0;
	}
	if (unk_0xDCC86F723E82125E(Global_82191[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xDCC86F723E82125E(Global_82191[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_94(var uParam0, int iParam1)
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
		iVar1 = Global_100976.f_17167[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_96(Global_100976.f_17167[iVar0], &Var2, &fVar5))
			{
				Global_100976.f_17167[iVar0] = 318;
				func_95(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_88829[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_9 = 0f;
				Global_88829[iVar0 /*29*/].f_12 = 0f;
				Global_88829[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_10 = 0f;
				Global_88829[iVar0 /*29*/].f_13 = 0f;
				Global_88829[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_11 = 0f;
				Global_88829[iVar0 /*29*/].f_14 = 0f;
				Global_88829[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_26 = 0f;
				Global_88829[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_27 = 0f;
				Global_88829[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_95(var uParam0)
{
	*uParam0 = -15;
}

int func_96(int iParam0, var uParam1, float fParam2)
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
			return func_96(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_96(8, uParam1, fParam2);
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

void func_97(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85424[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85424[iParam0 /*2*/] = 0;
	}
}

void func_98()
{
	Global_91141 = 1;
	if (unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1))
	{
		if (unk_0xB8A06E7E729EED0A(&Global_69549))
		{
			switch (func_19())
			{
				case 0:
					StringCopy(&Global_69549, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69549, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69549, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69553, "", 16);
		}
		Global_91141 = 0;
	}
	else if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0xB8A06E7E729EED0A(&Global_69549))
		{
			switch (func_19())
			{
				case 0:
					StringCopy(&Global_69549, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69549, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69549, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69553, "", 16);
		}
		Global_91141 = 0;
		unk_0x59A0729D503ED758(&(Global_91106.f_20), 25);
	}
}

void func_99(char* sParam0)
{
	if (!unk_0xB8A06E7E729EED0A(sParam0))
	{
		if (unk_0x71F27A2B1B0287CD(sParam0) <= 16)
		{
			StringCopy(&Global_69549, sParam0, 16);
			StringCopy(&Global_69553, "", 16);
			if (unk_0xA0CEFA7178F5CDE5())
			{
				unk_0xF7588C28E8908E72();
			}
		}
	}
}

int func_100(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0x18BDAFC0B20C2C9E(iParam0))
		{
			if (unk_0x5D42322C7DB888D0(unk_0xE6E6D9800E15A76C(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x96209AADF56E8FE8(iParam0))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0x4D3C2AC8339BFB4F(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_101(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		if (!unk_0xF8D041B05C3D1FD4("FinaleC2", unk_0xC4E68AF0B559FAC4()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_91143)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91143)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_172(1);
		if (iParam0 <= Global_91143)
		{
		}
		iVar1 = func_170(unk_0xC4E68AF0B559FAC4(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_100976.f_7719.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_168(iVar1);
			cVar3 = { Global_82227[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_100976.f_7719.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x0EC76B17C2D30E27(&cVar3, uVar2, Global_91143, iParam0);
		}
		else
		{
			iVar5 = func_163(unk_0xC4E68AF0B559FAC4(), 1);
			if (iVar5 != -1)
			{
				Global_100976.f_17208[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_162(iVar5)}, 4);
				unk_0x0EC76B17C2D30E27(&uVar6, 0, Global_91143, iParam0);
			}
			else
			{
				iVar10 = func_161(&(Global_91106.f_3));
				if (iVar10 > -1)
				{
					Global_100976.f_29455.f_4[iVar10] = 0;
				}
			}
		}
		Global_85617 = iParam2;
		Global_91143 = iParam0;
		func_102(iParam0, sParam1, iParam4, iParam5);
		if (unk_0xF8D041B05C3D1FD4(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91143)
	{
	}
}

void func_102(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_103(&Global_95323, unk_0xC4E68AF0B559FAC4(), iParam0, uParam1, iParam3, iParam2);
}

void func_103(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_19();
	uParam0->f_1 = func_150();
	unk_0xAEDF42A60D36F56B(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		func_136(&(uParam0->f_2305), 0);
		func_135(unk_0xC8B93D94F8954288());
		func_129(unk_0xC8B93D94F8954288(), 0);
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_100976.f_1770.f_539.f_294[iVar1];
		if (iVar1 == func_128())
		{
			func_121(unk_0xC8B93D94F8954288(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_90896[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_90896[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_90896[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_90896[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_90896[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_90896[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_90896[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_90896[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_90896[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_90896[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_100976.f_1770.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_100976.f_1770.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_100976.f_25033.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52834[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_100976.f_1770.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_100976.f_1770.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_100976.f_1770.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_100976.f_1770.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_100976.f_1770.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_100976.f_1770[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x5F0618A5FDAD55C4(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0x5F0618A5FDAD55C4(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0x5F0618A5FDAD55C4(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_105(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_104(&(uParam0->f_2401));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_104(var uParam0)
{
	*uParam0 = Global_87288;
	uParam0->f_1 = Global_87289;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_105(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xC8B93D94F8954288();
	}
	if (unk_0x95CCECA3948CFE7B(iParam2))
	{
		uParam1->f_5 = func_22(iParam2);
	}
	if (func_118(iParam2, &iVar0, iParam3, iParam5))
	{
		func_106(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x95CCECA3948CFE7B(iVar0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x6B89D299CB2A726F(iVar0, joaat("skylift")) && unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iVar0, 0))
			{
				func_106(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_106(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x5D42322C7DB888D0(iParam2, 0))
	{
		func_108(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_107(iParam2))
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

int func_107(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91106.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_108(var uParam0, int iParam1, int iParam2)
{
	func_114(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_111(iParam1, 145, 0);
	uParam0->f_11 = func_110(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_109(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
		uParam0->f_6 = unk_0x59DD203239FBDCAD(iParam1);
		uParam0->f_3 = { unk_0x3A5C3B481EEBA95F(iParam1) };
		if (unk_0x8DF850DA069BF37C(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69091 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[iVar0]))
		{
			if (iParam0 == Global_68186.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_110(int iParam0)
{
	int iVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 145;
	}
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			if (Global_88770[iVar0] == iParam0)
			{
				return Global_88780[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			if (Global_88770[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88780[iVar0])
				{
					if (iParam2 == 0 || unk_0x6D5BB810CC209E15(iParam0) == func_112(iParam1, iParam2))
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

int func_112(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_21(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_113(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_113(int iParam0, var uParam1, int iParam2)
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
			if (Global_100976.f_7719.f_99.f_58[128] && !Global_100976.f_7719.f_99.f_58[131])
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
					if (Global_100976.f_7719.f_99.f_58[119])
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
			else if (Global_100976.f_7719.f_99.f_58[118])
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

void func_114(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		func_117(uParam1);
		uParam1->f_66 = unk_0x6D5BB810CC209E15(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC51A0D06D98180EB(iParam0), 16);
		*uParam1 = unk_0x65979062393E9301(iParam0);
		unk_0xDDA7228DE9EEDB37(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA968D095B4F299B6(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xD4344DD9CA88E065(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x9D206597121A7CCB(iParam0);
		uParam1->f_67 = unk_0x847A8FEE19DF1C6D(iParam0);
		uParam1->f_69 = unk_0xA57BDD31F092CE61(iParam0);
		uParam1->f_70 = unk_0xA6BAF129343F464F(iParam0);
		unk_0x06FD411B0A723EC9(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3B7BDBECE2C4BB25(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x890D2A0FC3456199(iParam0, 2))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 28);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 3))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 29);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 30);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 1))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xDFCA441625BB8A67(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0033BC594211C96E(iParam0);
		}
		if (unk_0xE924C2C283992918(uParam1->f_66))
		{
			if (unk_0x3D62C266C7E526AD(iParam0))
			{
				switch (unk_0xFF4BF4EFFE3F002D(iParam0))
				{
					case 2:
					case 0:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x59A0729D503ED758(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x77621132305B133B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x675A13D93AEAE680(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 9);
		}
		if (unk_0x4B05424C051859E9(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 10);
		}
		if (unk_0xEAF6FD6E4D109266(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 13);
			unk_0xE089902DB3FDA244(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xF518898EF441871E(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 12);
		}
		func_116(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDB066BBA59B7D1EC(iParam0, iVar0 + 1))
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), func_115(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x40132F2ACE5F8B93(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 11);
		}
		if (unk_0x3D32B80EFC48A92D(iParam0, "IgnoredByQuickSave") && unk_0xD903CC680ECAC86A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 27);
		}
	}
}

int func_115(int iParam0)
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

int func_116(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5D42322C7DB888D0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x35C1534E81F87E96(*iParam0) == 0)
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
			if (unk_0x1AF9344BCD6B878A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x342B167253E636DE(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_117(var uParam0)
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

int func_118(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam0))
		{
			if (iParam0 == unk_0xC8B93D94F8954288())
			{
				*uParam1 = unk_0x974516F979AD07BC();
			}
			else
			{
				*uParam1 = unk_0x275BEBE583A163B5(iParam0, 1);
			}
			if (unk_0x95CCECA3948CFE7B(*uParam1))
			{
				if (unk_0x5D42322C7DB888D0(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(*uParam1, 1), unk_0x44C17CCB85A88A1F(iParam0, 1), 1) < 100f)
					{
						if (unk_0x6B89D299CB2A726F(*uParam1, joaat("taxi")))
						{
							if (unk_0xC0ADAF0814175B68(*uParam1, -1) != iParam0 && unk_0xC0ADAF0814175B68(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_119(*uParam1, func_19(), 1))
						{
							sVar0 = unk_0xC4E68AF0B559FAC4();
							if (!unk_0xF8D041B05C3D1FD4(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x277ECDA23D8CCEB4(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x3D32B80EFC48A92D(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xD903CC680ECAC86A(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x6B89D299CB2A726F(*uParam1, joaat("blimp")))
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

int func_119(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_120(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xDCC86F723E82125E(Global_100976.f_5863[iVar9], 0))
		{
			if (unk_0x86C606C3A2B31739(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_120(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_121(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		iVar0 = func_22(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_127(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_126(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_21(iVar0))
		{
			uParam1->f_59 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0xBBAE3E0C60A8AD4B() && unk_0x6D5BB810CC209E15(iParam0) == unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			if (func_125(161, -1))
			{
				uParam1->f_59 = func_122(2040, Global_69176, 0);
			}
			else
			{
				uParam1->f_59 = func_122(742, Global_69176, 0);
			}
			uParam1->f_60 = func_122(743, Global_69176, 0);
			uParam1->f_61 = func_122(744, Global_69176, 0);
		}
		if (unk_0xBBAE3E0C60A8AD4B() && iParam0 == unk_0xC8B93D94F8954288())
		{
			if (func_125(161, -1))
			{
				uParam1->f_59 = func_122(2040, Global_69176, 0);
			}
			else
			{
				uParam1->f_59 = func_122(742, Global_69176, 0);
			}
		}
	}
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466774[iParam0 /*5*/][func_123(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_123(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_124();
		if (iVar1 > -1)
		{
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

var func_124()
{
	return Global_1312746;
}

int func_125(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486871[iParam0 /*5*/][func_123(iParam1)];
	if (unk_0xC7E465DF93CF8F2C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_126(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xFEBA5661B4F1602A(iParam0, iParam1);
		*uParam3 = unk_0x92A7B7367F7CD521(iParam0, iParam1);
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
				if (unk_0x01857CD66B677E58(iParam0) && unk_0x717460B5CC97C071(iParam0) != -1)
				{
					*uParam2 = unk_0x717460B5CC97C071(iParam0);
					*uParam3 = unk_0x8C6B46522DE9188B(iParam0);
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

void func_127(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x3A59BCC40A12FD28(iParam0, iParam1);
		*uParam3 = unk_0x268F3DC177BF5D38(iParam0, iParam1);
		*uParam4 = unk_0x8005AF704B3AAC41(iParam0, iParam1);
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

int func_128()
{
	func_20();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_129(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_22(iParam0);
	if (func_21(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (iParam0 == unk_0xC8B93D94F8954288())
		{
			func_130(iParam0, &(Global_100976.f_1770.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_100976.f_1770.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x68979DA3F0A45AD3(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xCF1225B677633282();
					if (Global_100976.f_1770.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_100976.f_1770.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xF47D44C23C049FFF(unk_0xA34E7C2A5118D638(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x071958EFED9481F5(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x071958EFED9481F5(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x071958EFED9481F5(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_130(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_134(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x84C891BE623471ED(iParam0, func_134(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xCE69853977E75052(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x59A0729D503ED758(&(Var4.f_2), (20 + unk_0x6C2E2852D6DF0F8F(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x7063369AF8640406(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_132(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x961525D327D920F6(iParam0, Var4.f_0, iVar2))
						{
							unk_0x59A0729D503ED758(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_132(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0xBF63A843F5FFBEF2();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0xE8067788A3D17AD6(iVar7, &Var9) && !func_131(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x06C32703437E5BC3(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0xCE69853977E75052(iParam0, Var4.f_0);
					if (unk_0xD6B965E92DB098CE(iParam0, Var4.f_0, 0))
					{
						unk_0x59A0729D503ED758(&(Var4.f_2), (20 + unk_0x6C2E2852D6DF0F8F(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x59A0729D503ED758(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x7063369AF8640406(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x54B3723DF8B16C85(iVar7))
					{
						if (unk_0x81718480430D1749(iVar7, iVar1, &Var48))
						{
							if (unk_0x961525D327D920F6(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x59A0729D503ED758(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xD6B965E92DB098CE(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_131(int iParam0)
{
	if (unk_0xBBAE3E0C60A8AD4B())
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
				return 1;
				break;
			}
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
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
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 7:
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
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
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
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
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
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
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
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
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
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_133(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x54B3723DF8B16C85(iVar1))
					{
						if (unk_0x81718480430D1749(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_133(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xBF63A843F5FFBEF2();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xE8067788A3D17AD6(iVar0, uParam1))
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

int func_134(int iParam0)
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

void func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (func_21(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		Global_100976.f_1770.f_539.f_294[iVar0] = unk_0x590AD2E91FB5951F(iParam0);
	}
}

void func_136(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
	uParam0->f_3 = unk_0x59DD203239FBDCAD(unk_0xC8B93D94F8954288());
	uParam0->f_5 = unk_0x2D8DDFACF37FA95F(unk_0xC8B93D94F8954288());
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		uParam0->f_4 = unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638());
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
	else if (unk_0xCBC8FFE55DC722B5(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xDCC86F723E82125E(Global_69565, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xDCC86F723E82125E(Global_69565, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xDCC86F723E82125E(Global_69565, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xDCC86F723E82125E(Global_69565, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x4C910D0CCCE65059(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_139(&iVar0))
		{
			if (func_138(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
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
		else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_137(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_137(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE836A83D85A0F1C3(Param0))
	{
		iVar0 = unk_0x4C910D0CCCE65059(Param4, sParam3);
		if (!unk_0x8F89BA1339F45476(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x69E41FB7F39924FA(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_138(int iParam0, var uParam1, var uParam2)
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
	}
	return !func_88(*uParam1, 0f, 0f, 0f, 0);
}

int func_139(var uParam0)
{
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (func_149())
		{
			*uParam0 = func_145(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 5, -1, 0, 1, -1);
			if (func_144(*uParam0) && !func_140(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_140(int iParam0)
{
	return func_141(iParam0, 0, 1);
}

int func_141(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xDCC86F723E82125E(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_143() == 0)
		{
			return unk_0xDCC86F723E82125E(func_122(func_142(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_142(int iParam0)
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
			return 3693;
			break;
		
		default:
			break;
	}
	return 3790;
}

int func_143()
{
	return Global_25115;
}

int func_144(int iParam0)
{
	return func_141(iParam0, 5, 1);
}

int func_145(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_148(iVar0))
		{
			if (!bParam5 || func_147(iVar0))
			{
				fVar1 = unk_0x4F982ED5336EA899(Param0, func_146(iVar0, 0), 1);
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

Vector3 func_146(int iParam0, bool bParam1)
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
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_147(int iParam0)
{
	return func_141(iParam0, 0, 0);
}

int func_148(int iParam0)
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

bool func_149()
{
	return Global_91158.f_296 > 0;
}

var func_150()
{
	var uVar0;
	
	func_160(&uVar0, unk_0x4C374828FD653ECC());
	func_159(&uVar0, unk_0x44AD07D9D178F321());
	func_158(&uVar0, unk_0x342FDFC48311CCCE());
	func_153(&uVar0, unk_0x818078CDB71D3E9C());
	func_152(&uVar0, unk_0x49D01BEA8D03E892());
	func_151(&uVar0, unk_0x90D477BB666B03DB());
	return uVar0;
}

void func_151(var uParam0, int iParam1)
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

void func_152(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_153(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_157(*uParam0);
	iVar1 = func_155(*uParam0);
	if (iParam1 < 1 || iParam1 > func_154(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_154(int iParam0, int iParam1)
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

var func_155(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_156(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
}

int func_156(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_157(var uParam0)
{
	return uParam0 & 15;
}

void func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_159(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_161(char* sParam0)
{
	if (unk_0xF8D041B05C3D1FD4("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0xF8D041B05C3D1FD4("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xF8D041B05C3D1FD4("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xF8D041B05C3D1FD4("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_162(int iParam0)
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

int func_163(char* sParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x7CBED6EFED40E7EB(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_164(iVar0, &uVar1);
		if (unk_0x7CBED6EFED40E7EB(uVar1) == iVar33)
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

void func_164(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_165(uParam1, "Abigail1", func_167(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 1:
			func_165(uParam1, "Abigail2", func_167(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 2:
			func_165(uParam1, "Barry1", func_167(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 3:
			func_165(uParam1, "Barry2", func_167(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 4:
			func_165(uParam1, "Barry3", func_167(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 5:
			func_165(uParam1, "Barry3A", func_167(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 6:
			func_165(uParam1, "Barry3C", func_167(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 7:
			func_165(uParam1, "Barry4", func_167(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_166(iParam0), 0, 0);
			break;
		
		case 8:
			func_165(uParam1, "Dreyfuss1", func_167(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 9:
			func_165(uParam1, "Epsilon1", func_167(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 10:
			func_165(uParam1, "Epsilon2", func_167(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 11:
			func_165(uParam1, "Epsilon3", func_167(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 12:
			func_165(uParam1, "Epsilon4", func_167(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 13:
			func_165(uParam1, "Epsilon5", func_167(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 14:
			func_165(uParam1, "Epsilon6", func_167(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 15:
			func_165(uParam1, "Epsilon7", func_167(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 16:
			func_165(uParam1, "Epsilon8", func_167(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 17:
			func_165(uParam1, "Extreme1", func_167(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 18:
			func_165(uParam1, "Extreme2", func_167(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 19:
			func_165(uParam1, "Extreme3", func_167(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 20:
			func_165(uParam1, "Extreme4", func_167(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 21:
			func_165(uParam1, "Fanatic1", func_167(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_166(iParam0), 1, 0);
			break;
		
		case 22:
			func_165(uParam1, "Fanatic2", func_167(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_166(iParam0), 1, 0);
			break;
		
		case 23:
			func_165(uParam1, "Fanatic3", func_167(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_166(iParam0), 0, 1);
			break;
		
		case 24:
			func_165(uParam1, "Hao1", func_167(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_166(iParam0), 0, 1);
			break;
		
		case 25:
			func_165(uParam1, "Hunting1", func_167(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 26:
			func_165(uParam1, "Hunting2", func_167(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 27:
			func_165(uParam1, "Josh1", func_167(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 28:
			func_165(uParam1, "Josh2", func_167(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 29:
			func_165(uParam1, "Josh3", func_167(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 30:
			func_165(uParam1, "Josh4", func_167(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 31:
			func_165(uParam1, "Maude1", func_167(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 32:
			func_165(uParam1, "Minute1", func_167(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 33:
			func_165(uParam1, "Minute2", func_167(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 34:
			func_165(uParam1, "Minute3", func_167(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 35:
			func_165(uParam1, "MrsPhilips1", func_167(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 36:
			func_165(uParam1, "MrsPhilips2", func_167(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 37:
			func_165(uParam1, "Nigel1", func_167(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 38:
			func_165(uParam1, "Nigel1A", func_167(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 39:
			func_165(uParam1, "Nigel1B", func_167(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_166(iParam0), 1, 1);
			break;
		
		case 40:
			func_165(uParam1, "Nigel1C", func_167(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_166(iParam0), 1, 1);
			break;
		
		case 41:
			func_165(uParam1, "Nigel1D", func_167(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_166(iParam0), 1, 1);
			break;
		
		case 42:
			func_165(uParam1, "Nigel2", func_167(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 43:
			func_165(uParam1, "Nigel3", func_167(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 44:
			func_165(uParam1, "Omega1", func_167(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 45:
			func_165(uParam1, "Omega2", func_167(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 46:
			func_165(uParam1, "Paparazzo1", func_167(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 47:
			func_165(uParam1, "Paparazzo2", func_167(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 48:
			func_165(uParam1, "Paparazzo3", func_167(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 49:
			func_165(uParam1, "Paparazzo3A", func_167(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 50:
			func_165(uParam1, "Paparazzo3B", func_167(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 51:
			func_165(uParam1, "Paparazzo4", func_167(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 52:
			func_165(uParam1, "Rampage1", func_167(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 54:
			func_165(uParam1, "Rampage3", func_167(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 55:
			func_165(uParam1, "Rampage4", func_167(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 56:
			func_165(uParam1, "Rampage5", func_167(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 53:
			func_165(uParam1, "Rampage2", func_167(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 57:
			func_165(uParam1, "TheLastOne", func_167(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 58:
			func_165(uParam1, "Tonya1", func_167(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 59:
			func_165(uParam1, "Tonya2", func_167(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 60:
			func_165(uParam1, "Tonya3", func_167(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 61:
			func_165(uParam1, "Tonya4", func_167(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 62:
			func_165(uParam1, "Tonya5", func_167(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_165(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_166(int iParam0)
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

struct<2> func_167(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_162(iParam0) };
	if (unk_0xB8A06E7E729EED0A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_169(Global_100976.f_7719.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_169(Global_100976.f_7719.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_169(Global_100976.f_7719.f_99.f_205[11]);
			break;
		
		case 90:
			return func_169(Global_100976.f_7719.f_99.f_205[7]);
			break;
		
		case 93:
			return func_169(Global_100976.f_7719.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_169(int iParam0)
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

int func_170(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x7CBED6EFED40E7EB(sParam0);
	iVar1 = func_171(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_171(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_82227[iVar0 /*34*/].f_6 == iParam0)
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

void func_172(bool bParam0)
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
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52842[iVar0 /*3*/][0] = Global_100976.f_25033[iVar0];
		Global_52842.f_31[iVar0 /*3*/][0] = Global_100976.f_25033.f_11[iVar0];
		Global_52842.f_62[iVar0 /*3*/][0] = Global_100976.f_25033.f_22[iVar0];
		Global_52842.f_93[iVar0 /*3*/][0] = Global_100976.f_25033.f_33[iVar0];
		Global_52842.f_124[iVar0 /*3*/][0] = Global_100976.f_25033.f_44[iVar0];
		Global_52842.f_155[iVar0 /*3*/][0] = Global_100976.f_25033.f_55[iVar0];
		Global_52842.f_186[iVar0 /*3*/][0] = Global_100976.f_25033.f_66[iVar0];
		Global_52842.f_217[iVar0 /*3*/][0] = Global_100976.f_25033.f_77[iVar0];
		Global_52842.f_248[iVar0 /*3*/][0] = Global_100976.f_25033.f_88[iVar0];
		if (!bParam0)
		{
			Global_52842[iVar0 /*3*/][1] = Global_100976.f_25033[iVar0];
			Global_52842.f_31[iVar0 /*3*/][1] = Global_100976.f_25033.f_11[iVar0];
			Global_52842.f_62[iVar0 /*3*/][1] = Global_100976.f_25033.f_22[iVar0];
			Global_52842.f_93[iVar0 /*3*/][1] = Global_100976.f_25033.f_33[iVar0];
			Global_52842.f_124[iVar0 /*3*/][1] = Global_100976.f_25033.f_44[iVar0];
			Global_52842.f_155[iVar0 /*3*/][1] = Global_100976.f_25033.f_55[iVar0];
			Global_52842.f_186[iVar0 /*3*/][1] = Global_100976.f_25033.f_66[iVar0];
			Global_52842.f_217[iVar0 /*3*/][1] = Global_100976.f_25033.f_77[iVar0];
			Global_52842.f_248[iVar0 /*3*/][1] = Global_100976.f_25033.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_173()
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_2099)
	{
		case 0:
			func_205(&uLocal_460, "PORT_OF_LS_PREP_1");
			if (unk_0xD5DFCA69ACAA20E3())
			{
				unk_0x31E6EB2040318451(800);
			}
			func_203(&Local_188, 324.7653f, -2974.495f, -1f, 0.1f, 0.1f, 2f, 1, Local_55[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1);
			if (unk_0x0845149A26DABBA5(joaat("packer")) && unk_0x0845149A26DABBA5(joaat("armytrailer")))
			{
				func_101(1, "STAGE 1: Get to crane", 0, 0, 0, 1);
				func_202(587, 0);
				func_201(&uLocal_213, 1, 0, "FLOYD", 0, 1);
				func_200(6, 0);
				Local_55[2 /*2*/] = unk_0xD53B4DCC7B2C8551(joaat("packer"), 298.2343f, -2942.77f, 5.0003f, 0f, 1, 1);
				unk_0x8B8B003FB9DE3D8C(Local_55[2 /*2*/], 0);
				unk_0x0CE9795408B4B974(Local_55[2 /*2*/], 1);
				unk_0xC690D7B0DE1C3FD5(Local_55[2 /*2*/], 0);
				unk_0x473F2FDD337B5EEC(Local_55[2 /*2*/], 0);
				Local_55[1 /*2*/] = unk_0xD53B4DCC7B2C8551(joaat("armytrailer"), 298.27f, -2951.27f, 7.86f, 0f, 1, 1);
				unk_0x042BE0D369784567(Local_55[2 /*2*/], Local_55[1 /*2*/], 0.5f);
				unk_0xF2F3B09DA25C868B(Local_55[1 /*2*/]);
				unk_0x473F2FDD337B5EEC(Local_55[1 /*2*/], 0);
				unk_0x0CE9795408B4B974(Local_55[1 /*2*/], 1);
				iLocal_383 = 0;
				unk_0x8738B068D97CDC64(289.0847f, -2980.382f, 9.24156f, 320.426f, -2931.6f, 4f, 0, 1, 1, 1);
				iLocal_392 = 1;
				unk_0x9F4C1977B00B9480("OnlyAllowScriptTriggerPoliceScanner", 0);
				iLocal_2099++;
			}
			break;
		
		case 1:
			if (func_199())
			{
				func_198(&uLocal_460, cLocal_49);
				func_198(&uLocal_460, cLocal_50);
				iLocal_396 = -1;
				iLocal_397 = 0;
				iLocal_2099++;
			}
			break;
		
		case 2:
			if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Local_55[0 /*2*/], 0))
			{
				switch (iLocal_397)
				{
					case 0:
						if (!unk_0xB45DF29A98EEAD5D())
						{
							if (iLocal_396 == -1)
							{
								iLocal_396 = unk_0x693EBB4F13506457() + 5000;
							}
							if (unk_0x693EBB4F13506457() > iLocal_396)
							{
								func_197("DKP1_SUBTURN", -1);
								iLocal_397++;
							}
						}
						break;
					
					case 1:
						if (!unk_0xB45DF29A98EEAD5D())
						{
							func_197("SUB_HELP", -1);
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
				if (unk_0xB45DF29A98EEAD5D())
				{
					if (func_196("DKP1_SUBTURN") || func_196("SUB_HELP"))
					{
						unk_0x9F4AA6F234E8A860(1);
					}
				}
			}
			if (unk_0x442EE710FCFD5D0D(Local_55[0 /*2*/], 3, 10000))
			{
				func_86(1);
			}
			if (func_85(unk_0xC8B93D94F8954288(), 324.7653f, -2974.495f, -1.5f, 1) < 150f)
			{
				if (unk_0x8BB5631CA898C6D4("DOCKS_HEIST_PREP_1_LIFT_SUB", 0))
				{
					bLocal_457 = true;
				}
				func_84(&(Local_169[2 /*2*/]), 0);
				func_82(&uLocal_460, joaat("prop_sub_release"));
			}
			else
			{
				unk_0x8F9EDB48A60C0C79();
				bLocal_457 = false;
			}
			if (func_100(Local_64[6 /*10*/]))
			{
				if ((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || unk_0x54BD36F7F4951C53(Local_64[6 /*10*/])) || func_10(unk_0xC8B93D94F8954288(), Local_64[6 /*10*/], 1) > 100f)
				{
					unk_0x5124C5FA52D2AF3E(Local_64[6 /*10*/]);
					func_9(&(Local_64[6 /*10*/]), 1, 0, 1);
				}
			}
			if (func_100(Local_64[7 /*10*/]))
			{
				if ((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || unk_0x54BD36F7F4951C53(Local_64[7 /*10*/])) || func_10(unk_0xC8B93D94F8954288(), Local_64[7 /*10*/], 1) > 100f)
				{
					unk_0x5124C5FA52D2AF3E(Local_64[7 /*10*/]);
					func_9(&(Local_64[7 /*10*/]), 1, 0, 1);
				}
			}
			if (func_100(Local_64[4 /*10*/]))
			{
				if ((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || unk_0x54BD36F7F4951C53(Local_64[4 /*10*/])) || func_10(unk_0xC8B93D94F8954288(), Local_64[4 /*10*/], 1) > 100f)
				{
					unk_0x5124C5FA52D2AF3E(Local_64[4 /*10*/]);
					func_9(&(Local_64[4 /*10*/]), 1, 0, 1);
				}
			}
			if (func_100(Local_64[5 /*10*/]))
			{
				if ((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || unk_0x54BD36F7F4951C53(Local_64[5 /*10*/])) || func_10(unk_0xC8B93D94F8954288(), Local_64[5 /*10*/], 1) > 100f)
				{
					unk_0x5124C5FA52D2AF3E(Local_64[5 /*10*/]);
					func_9(&(Local_64[5 /*10*/]), 1, 0, 1);
				}
			}
			if (func_203(&Local_188, 324.7653f, -2974.495f, -1.5f, 0.1f, 0.1f, 2f, 0, Local_55[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1) || ((unk_0x6B4865E08E90ACC5(Local_188.f_5) && unk_0x8DF850DA069BF37C(Local_55[0 /*2*/], 312.8557f, -2974.003f, 1.19166f, 339.1654f, -2974.348f, -6.70078f, 15f, 0, 1, 0)) && func_195(unk_0xC8B93D94F8954288(), Local_55[0 /*2*/])))
			{
				if (func_100(Local_55[2 /*2*/]) && func_100(Local_55[1 /*2*/]))
				{
					func_194(&Local_188, 0);
					func_193(6, 0);
					unk_0x233432976E597324("DHP1_STOP");
					func_192(0, -1);
					unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 256);
					iLocal_452 = unk_0x693EBB4F13506457();
					iLocal_2099++;
				}
			}
			else if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0 && unk_0x6B4865E08E90ACC5(Local_188.f_5))
			{
				unk_0x0CC43E3FF7E287A5(6, 324.7653f, -2974.495f, -3.5f, 0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 5f, 255, 255, 0, 65, 0, 0, 2, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			if (func_75(Local_55[0 /*2*/]) || (unk_0x693EBB4F13506457() - iLocal_452) > 3500)
			{
				uLocal_444 = unk_0x785B53D5654A2FFD(26379945, 341.6419f, -2965.525f, 4.037704f, 17.06695f, 0.473599f, 112.4448f, 34f, 0, 2);
				unk_0x7D1795B1E14EDFFD(uLocal_444, 1);
				unk_0xB61A035EB3575B09(uLocal_444, "HAND_SHAKE", 0.4f);
				unk_0xF24FE6EB928DD893(uLocal_444, 341.6419f, -2965.525f, 4.037704f, -4.346406f, 0.473595f, 112.4448f, 34f, 6000, 1, 1, 2);
				func_188(0, 340.6675f, -2964.01f, 1.4937f, 1, 0, 1, 3000, 0, 1);
				func_81(&uLocal_460, joaat("prop_tarp_strap"));
				unk_0xC76B5C68AB6DC7DF(Local_55[0 /*2*/], Local_411, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(Local_55[0 /*2*/], fLocal_414);
				iLocal_452 = unk_0x693EBB4F13506457();
				iLocal_410 = 0;
				unk_0xD810132681A9B83C(8f, 0f, 4);
				iLocal_2099++;
			}
			else
			{
				func_40(Local_55[0 /*2*/], 7f, 1, 1056964608, 0, 1, 0);
			}
			break;
		
		case 4:
			if (func_178())
			{
				iLocal_2099++;
			}
			break;
		
		case 5:
			if (unk_0xA65C064741F2CA67() && unk_0x0845149A26DABBA5(joaat("prop_tarp_strap")))
			{
				unk_0x5D713171D2C2E177(Local_55[2 /*2*/], "DockHeist_truck", 0, 0, 0);
				unk_0x5D713171D2C2E177(Local_55[0 /*2*/], "submarine", 0, joaat("submersible"), 0);
				unk_0x5D713171D2C2E177(Local_55[1 /*2*/], "dockheist_trailer", 0, joaat("armytrailer"), 0);
				unk_0x5D713171D2C2E177(0, "sub_cover", 2, joaat("prop_sub_cover_01"), 0);
				unk_0x5D713171D2C2E177(0, "Floyd", 2, joaat("ig_floyd"), 0);
				unk_0xF7B15A5F0A17B0E6("Trevor", unk_0xC8B93D94F8954288(), 0);
				unk_0xD8E33295AE325D41(Local_55[2 /*2*/], 1);
				unk_0x8B8B003FB9DE3D8C(Local_55[2 /*2*/], 1);
				func_177(0);
				unk_0x1FFBBAD42BF7E243(4);
				unk_0x964746959DBA39F2(0, 0, 1, 0);
				unk_0x8E6D4B516B44DE88(0);
				iLocal_2099++;
			}
			break;
		
		case 6:
			if (unk_0x308528B5CF35F306())
			{
				if (unk_0x748CA8A0F3783C60("PO1_08_sub_waterplane"))
				{
					unk_0x4030ACE8AD10EADA("PO1_08_sub_waterplane");
				}
			}
			if (unk_0xF490A05A3C6F92BC(0))
			{
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(0f, 1065353216);
				unk_0xB7709513BF7C1AC0(1);
				unk_0xB1DF6C0157E453DE(1);
				unk_0x2D4CF77D729552C0();
			}
			if (!unk_0x95CCECA3948CFE7B(Local_64[3 /*10*/]))
			{
				if (unk_0x95CCECA3948CFE7B(unk_0x3B56A7E9193FB661("Floyd", 0)))
				{
					Local_64[3 /*10*/] = unk_0x4D3C2AC8339BFB4F(unk_0x3B56A7E9193FB661("Floyd", 0));
					func_201(&uLocal_213, 1, Local_64[3 /*10*/], "FLOYD", 0, 1);
					unk_0xCBD60E398042F554(Local_64[3 /*10*/], iLocal_394);
				}
			}
			if (unk_0x669E4BAB086C2648("Trevor", 0))
			{
				iLocal_446 = 1;
			}
			if (unk_0x669E4BAB086C2648("Floyd", 0))
			{
				iLocal_447 = 1;
			}
			if (unk_0x669E4BAB086C2648("DockHeist_truck", 0))
			{
				unk_0x9D323E60C3A79E31(Local_55[2 /*2*/], 1, 0, 0);
				unk_0x4A6381DCF16569D3(Local_55[2 /*2*/], 1);
				iLocal_448 = 1;
			}
			if (unk_0x669E4BAB086C2648("DockHeist_trailer", 0))
			{
				unk_0x9D323E60C3A79E31(Local_55[1 /*2*/], 1, 0, 0);
				iLocal_451 = 1;
			}
			if (unk_0x669E4BAB086C2648("submarine", 0))
			{
				iLocal_449 = 1;
			}
			if (unk_0x669E4BAB086C2648("sub_cover", 0))
			{
				iLocal_450 = 1;
			}
			else if (!unk_0x95CCECA3948CFE7B(Local_169[4 /*2*/]))
			{
				if (unk_0x95CCECA3948CFE7B(unk_0x3B56A7E9193FB661("sub_cover", joaat("prop_sub_cover_01"))))
				{
					Local_169[4 /*2*/] = unk_0x9F549071D7D4F964(unk_0x3B56A7E9193FB661("sub_cover", joaat("prop_sub_cover_01")));
				}
			}
			if (unk_0xE420754CB6C39E43(Local_55[2 /*2*/], &iVar0, &uVar1))
			{
				if (iVar0 == 0)
				{
					if (unk_0xFE2EB5413118713A() >= 14200)
					{
						unk_0xD8E33295AE325D41(Local_55[2 /*2*/], 3);
					}
				}
			}
			if (((((iLocal_446 && iLocal_447) && iLocal_448) && iLocal_449) && iLocal_450) && iLocal_451)
			{
				if (unk_0xB66DD474AA9E764E() || unk_0x8D5BFC55CE180425(Local_64[3 /*10*/]))
				{
					unk_0x6D9DB313D50E9A0D(Local_64[3 /*10*/], Local_55[2 /*2*/], 0);
					unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), Local_55[2 /*2*/], -1);
					unk_0x0C6C8DBB96D3E47B(Local_55[0 /*2*/], Local_55[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
					unk_0x8B8B003FB9DE3D8C(Local_55[0 /*2*/], 0);
					unk_0x4A6381DCF16569D3(Local_55[0 /*2*/], 1);
					unk_0x0782F0CAEA719452(Local_55[0 /*2*/], 10);
					unk_0x57892FEA93664769(Local_55[0 /*2*/], 0, 1, 0);
					unk_0xD8E33295AE325D41(Local_55[0 /*2*/], 1);
					unk_0x7BFE4A3C0DBC90D4(Local_55[0 /*2*/], 0);
					unk_0xAD318582A32CA5D2(Local_169[4 /*2*/], Local_55[1 /*2*/], -1, Local_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					Local_169[5 /*2*/] = unk_0x7C62BC1EB194D985(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 1, 1, 0);
					unk_0xAD318582A32CA5D2(Local_169[5 /*2*/], Local_55[1 /*2*/], -1, Local_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					func_176(1, 0, 0, 3000, 0);
					func_175(&uLocal_460);
					iLocal_2099++;
				}
			}
			break;
		
		case 7:
			func_174(2);
			iLocal_2099 = 0;
			break;
	}
	if (unk_0x6B4865E08E90ACC5(Local_188.f_5))
	{
		unk_0x706ABF1139F36482(Local_188.f_5, 0);
	}
	if (func_100(unk_0xC8B93D94F8954288()) && func_100(Local_55[0 /*2*/]))
	{
		if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 324.7653f, -2974.495f, -1f, 1) > 2500f)
		{
			func_86(9);
		}
	}
}

int func_174(int iParam0)
{
	if (iLocal_2097 == 0)
	{
		iLocal_2100 = iParam0;
		iLocal_2097 = 1;
		return 1;
	}
	return 0;
}

void func_175(var uParam0)
{
	if (uParam0->f_855)
	{
		if (uParam0->f_855.f_1)
		{
			unk_0x946BF5DFB2A71B9E();
			func_83(&(uParam0->f_855));
		}
		else
		{
			uParam0->f_855.f_2 = 1;
			uParam0->f_977 = 1;
		}
	}
}

void func_176(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0xB7709513BF7C1AC0(1);
	unk_0xB1DF6C0157E453DE(1);
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), iParam0, iParam4);
	unk_0x2544549FDE4C3A7E(bParam1, iParam2, iParam3, 1, 0, 0);
	if (!bParam1)
	{
		unk_0x5269022A1D4CB9CC(0);
	}
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		unk_0x7BFE4A3C0DBC90D4(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 1);
	}
}

void func_177(int iParam0)
{
	iLocal_446 = iParam0;
	iLocal_447 = iParam0;
	iLocal_448 = iParam0;
	iLocal_450 = iParam0;
	iLocal_449 = iParam0;
	iLocal_451 = iParam0;
}

int func_178()
{
	float fVar0;
	
	switch (iLocal_410)
	{
		case 0:
			func_187();
			unk_0xC76B5C68AB6DC7DF(Local_55[0 /*2*/], Local_411, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(Local_55[0 /*2*/], fLocal_414);
			unk_0xB7A2078CD1C9A82F(Local_55[0 /*2*/], 1);
			uLocal_380 = unk_0x9312E3EA66F1F738("scr_pls_sub_water_drips", Local_55[0 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			unk_0x40A5D90E20031A3A(uLocal_380, "flow", 1f, 0);
			unk_0x0B3F3AB0A340D234("dhp1_mcs_1", 8);
			if (bLocal_457)
			{
				unk_0xD0E30C811D3BBC73();
			}
			if (unk_0x342FDFC48311CCCE() >= 20 || unk_0x342FDFC48311CCCE() <= 7)
			{
				unk_0xF0CDA0F80E93ED80("PO1_08_sub_waterplane");
			}
			func_185(&uLocal_460, 298.9806f, -2977.643f, 6.101f, Vector(7.886f, -2964.665f, 298.5479f) - Vector(6.101f, -2977.643f, 298.9806f), 3000f, 0);
			iLocal_410++;
			break;
		
		case 1:
			Local_430 = { unk_0x44C17CCB85A88A1F(Local_169[8 /*2*/], 1) };
			if (Local_430.f_2 <= 1f)
			{
				unk_0xB7A2078CD1C9A82F(Local_55[0 /*2*/], 0);
				unk_0xF24FE6EB928DD893(uLocal_444, 310.0923f, -2949.529f, 10.9528f, -20.2654f, 2.7992f, -141.6393f, 25.6f, 0, 1, 1, 2);
				unk_0xF24FE6EB928DD893(uLocal_444, 308.3542f, -2950.972f, 10.8434f, 0.0544f, 2.7992f, -137.3849f, 25.6f, 12500, 1, 1, 2);
				unk_0xAD318582A32CA5D2(Local_55[0 /*2*/], Local_169[8 /*2*/], -1, 2.47f, 0f, -1.96f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				iLocal_410++;
			}
			else
			{
				func_184(1, 2f);
			}
			break;
		
		case 2:
			Local_430 = { unk_0x44C17CCB85A88A1F(Local_169[8 /*2*/], 1) };
			if (Local_430.f_2 >= 12.5f)
			{
				unk_0xF24FE6EB928DD893(uLocal_444, 356.9992f, -2984.961f, 117.2741f, -68.2497f, -0.1106f, 66.9743f, 20f, 0, 1, 1, 2);
				unk_0xF24FE6EB928DD893(uLocal_444, 361.4758f, -2966.824f, 117.2872f, -66.6976f, -0.1106f, 84.372f, 20f, 10000, 1, 1, 2);
				fLocal_443 = unk_0x7B9ACB2D46F47DBC(uLocal_444);
				unk_0xBCE58DAD703266B5(uLocal_444, 1.8f);
				iLocal_410++;
			}
			else
			{
				func_184(0, 1f);
			}
			break;
		
		case 3:
			if (fLocal_424 >= 40f)
			{
				unk_0xF24FE6EB928DD893(uLocal_444, 289.8129f, -2944.046f, 5.5715f, 17.075f, 0.1698f, -109.4507f, 38.3f, 0, 1, 1, 2);
				unk_0xF24FE6EB928DD893(uLocal_444, 290.8941f, -2941.987f, 5.5781f, 22.5176f, 0.1698f, -128.6537f, 38.3f, 7000, 1, 1, 2);
				unk_0xBCE58DAD703266B5(uLocal_444, fLocal_443);
				fLocal_424 = 80f;
				unk_0xB81176DFD2611E8B(Local_169[7 /*2*/], 1, 1);
				unk_0xAD318582A32CA5D2(Local_169[7 /*2*/], Local_169[6 /*2*/], -1, Local_421, 0f, 0f, fLocal_424, 0, 0, 0, 0, 2, 1);
				unk_0x636EE5A38E3EB8FF(Local_169[8 /*2*/], unk_0xCC31DB73C65552D8(Local_169[7 /*2*/], Local_426), 0, 0, 1);
				iLocal_2105 = unk_0x693EBB4F13506457();
				iLocal_410++;
			}
			else
			{
				func_183(1, 5.5f);
			}
			break;
		
		case 4:
			if (fLocal_424 >= 108f)
			{
				unk_0x326BBFCE982DD05C(1f);
				unk_0xF24FE6EB928DD893(uLocal_444, 300.0253f, -2973.253f, 5.7369f, 10.5662f, 0.1117f, 4.0913f, 22.7929f, 0, 1, 1, 2);
				unk_0xF24FE6EB928DD893(uLocal_444, 300.0292f, -2973.294f, 6.1746f, 5.2629f, 0.1117f, 4.0913f, 22.7929f, 8000, 1, 1, 2);
				unk_0xBE191D8A04BC7DFF(uLocal_444, 0.25f);
				unk_0xB81176DFD2611E8B(Local_169[7 /*2*/], 1, 1);
				unk_0xAD318582A32CA5D2(Local_169[7 /*2*/], Local_169[6 /*2*/], -1, Local_421, 0f, 0f, fLocal_424, 0, 0, 0, 0, 2, 1);
				unk_0x636EE5A38E3EB8FF(Local_169[8 /*2*/], unk_0xCC31DB73C65552D8(Local_169[7 /*2*/], Local_426), 0, 0, 1);
				if (unk_0xCFB07F483F9F95C1(uLocal_380))
				{
					unk_0x939ED2D95F7BD8A8(uLocal_380, 0);
				}
				iLocal_410++;
			}
			else
			{
				fVar0 = (1f - func_182((unk_0xBBDA792448DB5A89((unk_0x693EBB4F13506457() - iLocal_2105 + 1500)) / 3000f), 0f, 1f));
				unk_0x40A5D90E20031A3A(uLocal_380, "flow", fVar0, 0);
				func_183(1, 5.5f);
			}
			break;
		
		case 5:
			unk_0x326BBFCE982DD05C(1f);
			Local_430 = { unk_0x44C17CCB85A88A1F(Local_169[8 /*2*/], 1) };
			if (Local_430.f_2 <= 11f)
			{
				unk_0xB81176DFD2611E8B(Local_55[0 /*2*/], 1, 1);
				iLocal_410++;
			}
			else
			{
				func_184(1, 1f);
			}
			break;
		
		case 6:
			if (unk_0x955A04DD5208F4B7(Local_55[0 /*2*/]))
			{
				iLocal_2105 = unk_0x693EBB4F13506457() + 1000;
				iLocal_410++;
			}
			break;
		
		case 7:
			if (unk_0x693EBB4F13506457() > iLocal_2105)
			{
				unk_0xB7A2078CD1C9A82F(Local_169[8 /*2*/], 1);
				iLocal_410++;
			}
			else
			{
				func_183(0, 4f);
				func_184(0, 1f);
			}
			break;
		
		case 8:
			func_181(&uLocal_460);
			return 1;
			break;
	}
	if (unk_0xB66DD474AA9E764E())
	{
		if (iLocal_410 > 0 && iLocal_410 < 5)
		{
			if (func_179(1000))
			{
				unk_0x00F9843B9C06C2E9(800);
			}
		}
	}
	else if (unk_0xD5DFCA69ACAA20E3())
	{
		if (unk_0xCFB07F483F9F95C1(uLocal_380))
		{
			unk_0x939ED2D95F7BD8A8(uLocal_380, 0);
		}
		unk_0x213270B65D2FC4D2(unk_0x44C17CCB85A88A1F(Local_55[0 /*2*/], 1), 30f);
		iLocal_2103 = 2;
		iLocal_2102 = 1;
	}
	return 0;
}

int func_179(int iParam0)
{
	if (unk_0xB66DD474AA9E764E())
	{
		if ((unk_0x693EBB4F13506457() - Global_28) > iParam0)
		{
			Global_27 = unk_0x693EBB4F13506457();
		}
		Global_28 = unk_0x693EBB4F13506457();
		if ((unk_0x693EBB4F13506457() - Global_27) > iParam0)
		{
			if (func_180())
			{
				Global_27 = unk_0x693EBB4F13506457();
				return 1;
			}
		}
	}
	return 0;
}

int func_180()
{
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (unk_0x8D9008B8900A28D0(0, 18) || unk_0x8D9008B8900A28D0(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_181(var uParam0)
{
	if (unk_0x2394B86AAC723FB8())
	{
		unk_0x11592AACD6BAEC7F();
		func_83(&(uParam0->f_863));
	}
}

float func_182(float fParam0, float fParam1, float fParam2)
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

void func_183(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		fLocal_424 = (fLocal_424 + (fParam1 * unk_0x0000000050597EE2()));
	}
	else
	{
		fLocal_424 = (fLocal_424 - (fParam1 * unk_0x0000000050597EE2()));
	}
	unk_0xB81176DFD2611E8B(Local_169[7 /*2*/], 1, 1);
	unk_0xAD318582A32CA5D2(Local_169[7 /*2*/], Local_169[6 /*2*/], -1, Local_421, 0f, 0f, fLocal_424, 0, 0, 0, 0, 2, 1);
	unk_0x636EE5A38E3EB8FF(Local_169[8 /*2*/], unk_0xCC31DB73C65552D8(Local_169[7 /*2*/], Local_426), 0, 0, 1);
}

void func_184(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		Local_426.f_2 = (Local_426.f_2 - (fParam1 * unk_0x0000000050597EE2()));
	}
	else
	{
		Local_426.f_2 = (Local_426.f_2 + (fParam1 * unk_0x0000000050597EE2()));
	}
	unk_0x636EE5A38E3EB8FF(Local_169[8 /*2*/], unk_0xCC31DB73C65552D8(Local_169[7 /*2*/], Local_426), 0, 0, 1);
}

int func_185(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8)
{
	if (func_186(Param1) || func_186(Param4))
	{
		return 0;
	}
	if (uParam0->f_863)
	{
		if ((func_88(uParam0->f_863.f_4, Param1, 0) && func_88(uParam0->f_863.f_7, Param4, 0)) && uParam0->f_863.f_10 == fParam7)
		{
			uParam0->f_863.f_2 = 0;
			if (!uParam0->f_863.f_1)
			{
				uParam0->f_977 = 1;
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
		unk_0xCC0E83FD998B9430(Param1, Param4, fParam7, iParam8);
		uParam0->f_863 = 1;
		uParam0->f_863.f_3 = unk_0x693EBB4F13506457();
		uParam0->f_863.f_4 = { Param1 };
		uParam0->f_863.f_7 = { Param4 };
		uParam0->f_863.f_10 = fParam7;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_186(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_187()
{
	if (iLocal_383)
	{
		unk_0x53E47E70BB9DD107(&(Local_145[0 /*5*/]));
		unk_0x53E47E70BB9DD107(&(Local_145[1 /*5*/]));
		unk_0x53E47E70BB9DD107(&(Local_145[2 /*5*/]));
		unk_0x53E47E70BB9DD107(&(Local_145[3 /*5*/]));
		iLocal_383 = 0;
	}
}

void func_188(int iParam0, struct<3> Param1, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)
{
	unk_0xB7709513BF7C1AC0(0);
	unk_0xB1DF6C0157E453DE(0);
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), iParam0, iParam8);
	unk_0x7846F09C04C34C46();
	unk_0x9F4AA6F234E8A860(1);
	unk_0x2544549FDE4C3A7E(iParam4, iParam5, iParam7, 1, 0, 0);
	if (bParam6)
	{
		unk_0xE3B85EB139EAACDD(Param1, 500f, 0);
	}
	unk_0x0184403F1C1A3769(Param1, 300f);
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		unk_0x7BFE4A3C0DBC90D4(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0);
	}
	if (bParam9)
	{
		func_189(0);
	}
}

void func_189(int iParam0)
{
	if (Global_14571)
	{
		func_190(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
	}
	if (!func_16())
	{
		Global_14413.f_1 = 3;
	}
}

void func_190(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_191(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

int func_191(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_192(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55667)
	{
	}
	Global_55667 = 0;
	if (bParam0)
	{
		Global_55668 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67754)
		{
			if (Global_55884[Global_67755[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67755[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67754)
		{
			if (Global_67755[iVar0 /*9*/] > 0)
			{
				if (Global_67755[iVar0 /*9*/] == iParam1)
				{
					Global_67755[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (unk_0xDCC86F723E82125E(Global_25272, iParam0))
	{
		if (!bParam1)
		{
			unk_0x77621132305B133B(&Global_25272, iParam0);
			StringCopy(&(Global_25273[iParam0 /*6*/]), "NULL", 24);
			Global_25328[iParam0] = bParam1;
		}
	}
}

void func_194(var uParam0, bool bParam1)
{
	func_36(uParam0, bParam1, 0);
}

int func_195(int iParam0, int iParam1)
{
	if (unk_0x95CCECA3948CFE7B(iParam0) && !unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		if (unk_0x95CCECA3948CFE7B(iParam1) && !unk_0xB6900B8CB0ABBD2B(iParam1))
		{
			if (unk_0x465DC424E3211BBE(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_196(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_197(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

void func_198(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (!unk_0xB8A06E7E729EED0A(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_273)
		{
			if (uParam0->f_273[iVar0 /*5*/])
			{
				if (unk_0xF8D041B05C3D1FD4(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
				{
					if (uParam0->f_273[iVar0 /*5*/].f_1)
					{
						unk_0x3ECF1E41E6ED71D8(sParam1);
						func_83(&(uParam0->f_273[iVar0 /*5*/]));
						return;
					}
					else
					{
						uParam0->f_273[iVar0 /*5*/].f_2 = 1;
						uParam0->f_977 = 1;
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

int func_199()
{
	if (!unk_0x95CCECA3948CFE7B(Local_169[6 /*2*/]))
	{
		Local_169[6 /*2*/] = unk_0x7C62BC1EB194D985(iLocal_415, Local_416, 1, 1, 0);
		unk_0xC76B5C68AB6DC7DF(Local_169[6 /*2*/], Local_416, 1, 0, 0, 1);
		unk_0x765E3FA65D011F03(Local_169[6 /*2*/], fLocal_419);
		unk_0xB7A2078CD1C9A82F(Local_169[6 /*2*/], 1);
	}
	if (!unk_0x95CCECA3948CFE7B(Local_169[7 /*2*/]))
	{
		Local_169[7 /*2*/] = unk_0x7C62BC1EB194D985(iLocal_420, unk_0xCC31DB73C65552D8(Local_169[6 /*2*/], Local_421), 1, 1, 0);
	}
	if (!unk_0x57BA797A9A91EF93(Local_169[7 /*2*/], Local_169[6 /*2*/]))
	{
		unk_0xAD318582A32CA5D2(Local_169[7 /*2*/], Local_169[6 /*2*/], -1, Local_421, 0f, 0f, fLocal_424, 0, 0, 0, 0, 2, 1);
	}
	if (!unk_0x95CCECA3948CFE7B(Local_169[8 /*2*/]))
	{
		Local_169[8 /*2*/] = unk_0x7C62BC1EB194D985(iLocal_425, unk_0xCC31DB73C65552D8(Local_169[7 /*2*/], Local_426), 1, 1, 0);
		unk_0x3907D4738A2C8ABD(Local_169[8 /*2*/], 0);
		unk_0xAD318582A32CA5D2(Local_169[8 /*2*/], Local_169[7 /*2*/], -1, Local_426, 0f, 0f, fLocal_429, 0, 0, 0, 0, 2, 1);
		unk_0xB81176DFD2611E8B(Local_169[8 /*2*/], 1, 0);
		unk_0xB7A2078CD1C9A82F(Local_169[8 /*2*/], 1);
	}
	if (!iLocal_384)
	{
		if (unk_0xDA402271D45DCB02(Local_169[7 /*2*/]) && unk_0xDA402271D45DCB02(Local_169[8 /*2*/]))
		{
			iLocal_439 = unk_0xC5D4419D4353C09D(unk_0xCC31DB73C65552D8(Local_169[7 /*2*/], Local_433), 0f, 0f, 0f, 70f, 0, -1f, 4f, 1.4f, 0, 0, 1, 1f, 0, 0);
			unk_0x94C568038F4CF996(iLocal_439, 1);
			unk_0x98DED382AD86AF7C(iLocal_439, 2);
			unk_0x373A5872FD032364(&iLocal_439, 0);
			unk_0x4440BC17AC167153(iLocal_439, Local_169[7 /*2*/], Local_169[8 /*2*/], unk_0xCC31DB73C65552D8(Local_169[7 /*2*/], Local_433), unk_0xCC31DB73C65552D8(Local_169[8 /*2*/], Local_436), 70f, 0, 0, 0, 0);
			iLocal_384 = 1;
			return 1;
		}
		if (!unk_0xDA402271D45DCB02(Local_169[7 /*2*/]))
		{
		}
		if (!unk_0xDA402271D45DCB02(Local_169[8 /*2*/]))
		{
		}
	}
	return 0;
}

void func_200(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&Global_25272, iParam0);
	StringCopy(&(Global_25273[iParam0 /*6*/]), unk_0xC4E68AF0B559FAC4(), 24);
	Global_25328[iParam0] = iParam1;
}

void func_201(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(iParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(iParam2, 1);
			}
		}
	}
}

void func_202(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55669 = iParam0;
	if (!Global_55667)
	{
		Global_55667 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67754)
		{
			if (Global_67755[iVar0 /*9*/] == iParam0)
			{
				Global_67755[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_203(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_42(uParam0, Param1, Param4, func_80(), func_80(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_204(), func_204(), func_204(), func_204(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

var func_204()
{
	var uVar0;
	
	return uVar0;
}

void func_205(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0xF8D041B05C3D1FD4(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				if (uParam0->f_737[iVar0 /*5*/].f_1)
				{
					unk_0xF636B80CA6E4C266(sParam1);
					func_83(&(uParam0->f_737[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_737[iVar0 /*5*/].f_2 = 1;
					uParam0->f_977 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_206()
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_2099)
	{
		case 0:
			if (unk_0xD5DFCA69ACAA20E3())
			{
				unk_0x31E6EB2040318451(800);
			}
			if (func_100(Local_55[0 /*2*/]))
			{
				if (!unk_0x6B4865E08E90ACC5(Local_55[0 /*2*/].f_1))
				{
					Local_55[0 /*2*/].f_1 = func_32(Local_55[0 /*2*/], 0, 0);
				}
				Local_166 = { unk_0x5E9E59F125B3E057(Local_55[0 /*2*/]) };
			}
			if (unk_0x95CCECA3948CFE7B(Local_169[2 /*2*/]) && !unk_0x6B4865E08E90ACC5(uLocal_378))
			{
				uLocal_378 = func_252(Local_169[2 /*2*/]);
			}
			unk_0x8755DAC584918BF9(uLocal_378, "SUBBTN_LABEL");
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				unk_0x233432976E597324("DHP1_VEHICLE_ARRIVE");
			}
			else
			{
				unk_0x233432976E597324("DHP1_START");
			}
			if (func_100(Local_64[4 /*10*/]))
			{
				unk_0xAAD662D7E0D59F4C(Local_64[4 /*10*/], 1);
				unk_0xF4A9FC6478009D20(Local_64[4 /*10*/], 0);
			}
			func_251(&uLocal_460, cLocal_51);
			func_251(&uLocal_460, "MISSHEISTDOCKSPREP1HOLD_CELLPHONE");
			func_250(&uLocal_460, "PORT_OF_LS_PREP_1");
			func_29("dkp1_sub", 7500, 1);
			iLocal_399 = 0;
			iLocal_400 = 0;
			iLocal_401 = 0;
			iLocal_403 = unk_0x693EBB4F13506457();
			iLocal_404 = 0;
			iLocal_388 = 0;
			iLocal_398 = 0;
			if (uLocal_2108[0] == -1)
			{
				uLocal_2108[0] = unk_0x83E9D86E63672B9A();
			}
			if (uLocal_2108[1] == -1)
			{
				uLocal_2108[1] = unk_0x83E9D86E63672B9A();
			}
			iLocal_2099++;
			break;
		
		case 1:
			if (iLocal_383)
			{
				if (((!unk_0xDDEB018ADCB62B19(&(Local_145[0 /*5*/])) && !unk_0xDDEB018ADCB62B19(&(Local_145[1 /*5*/]))) && !unk_0xDDEB018ADCB62B19(&(Local_145[2 /*5*/]))) && !unk_0xDDEB018ADCB62B19(&(Local_145[3 /*5*/])))
				{
					unk_0x88BA50644624C1C1(Local_169[0 /*2*/]);
					unk_0x88BA50644624C1C1(Local_169[1 /*2*/]);
					if (func_100(Local_55[0 /*2*/]))
					{
						unk_0xA4E0CDB5A634F43D(Local_55[0 /*2*/], Local_166);
					}
					if (unk_0x6B4865E08E90ACC5(uLocal_378))
					{
						unk_0x5356E82C1E5E0C44(&uLocal_378);
					}
					func_246(1);
					func_81(&uLocal_460, joaat("s_m_m_security_01"));
					func_251(&uLocal_460, cLocal_49);
					unk_0x233432976E597324("DHP1_RELEASED");
					unk_0x9F4AA6F234E8A860(1);
					iLocal_452 = unk_0x693EBB4F13506457();
					iLocal_2099 = 4;
				}
				func_245();
				if ((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1249.106f, -3007.908f, 10.84327f, 1249.962f, -3007.837f, 8.31909f, 1.68f, 0, 1, 0) && !unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1)) && !func_191(0))
				{
					if (unk_0x8D9008B8900A28D0(2, 51))
					{
						uLocal_444 = unk_0x785B53D5654A2FFD(26379945, 1249.929f, -3010.267f, 9.590105f, 5.351202f, -1.57369f, 8.12499f, 21.33357f, 1, 2);
						unk_0xF24FE6EB928DD893(uLocal_444, 1249.929f, -3010.267f, 9.590105f, 4.448765f, -1.5737f, 12.68005f, 21.33357f, 3500, 0, 1, 2);
						unk_0xB61A035EB3575B09(uLocal_444, "hand_shake", 0.3f);
						func_188(0, 1249.787f, -3008.016f, 8.52751f, 1, 0, 1, 3000, 0, 1);
						unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), joaat("weapon_unarmed"), 1);
						unk_0xBA73099E237C7E5E(unk_0xC8B93D94F8954288());
						uLocal_381 = unk_0x0B15BB6DFB729046(1250.01f, -3007.9f, 9.32f, 0f, 0f, 90f, 2);
						if (unk_0x271A74D807F62BC0(unk_0xC8B93D94F8954288()))
						{
							unk_0xA5666A46C1079EFE(unk_0xC8B93D94F8954288(), uLocal_381, cLocal_51, "ig_1_stealth_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						else
						{
							unk_0xA5666A46C1079EFE(unk_0xC8B93D94F8954288(), uLocal_381, cLocal_51, "ig_1_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						unk_0x01BAA21528B22625(unk_0xC8B93D94F8954288(), 0, 0);
						unk_0x9F4AA6F234E8A860(1);
						iVar0 = unk_0xFD4D1267977B7832(1249.787f, -3008.016f, 8.52751f, 5f, 0, 4);
						if (func_100(iVar0))
						{
							unk_0xC76B5C68AB6DC7DF(iVar0, 1250.333f, -3010.219f, 8.3191f, 1, 0, 0, 1);
							unk_0x765E3FA65D011F03(iVar0, 85.8086f);
							unk_0xF18809B65D87E197(iVar0);
						}
						unk_0xD810132681A9B83C(4f, 0f, 4);
						unk_0x1FFBBAD42BF7E243(4);
						iLocal_445 = 1;
						iLocal_2099++;
					}
					else if (!func_196("DKP1_BTN"))
					{
						func_244("DKP1_BTN");
					}
				}
				else if (func_196("DKP1_BTN"))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xBC6B93737FCDC466(uLocal_381) || unk_0x2091E42376999826(uLocal_381) == 1f)
			{
				unk_0x2D4CF77D729552C0();
				unk_0xE55275772E833643(-1, "SUB_RELEASE", 1260.896f, -3006.556f, 23.4213f, "DOCKS_HEIST_PREP_1_SOUNDSET", 0, 0, 0);
				unk_0xF24FE6EB928DD893(uLocal_444, 1249f, -3010.3f, 10.7f, 37.7f, 0f, -61.5f, 43.4f, 0, 1, 1, 2);
				unk_0xF24FE6EB928DD893(uLocal_444, 1249f, -3010.3f, 10.7f, -20.1f, 0f, -48.2f, 43.4f, 1700, 2, 2, 2);
				unk_0xBE191D8A04BC7DFF(uLocal_444, 0.1f);
				unk_0xF7596738B7B76709(Local_145[0 /*5*/], Local_55[0 /*2*/]);
				unk_0xF7596738B7B76709(Local_145[1 /*5*/], Local_55[0 /*2*/]);
				unk_0xF7596738B7B76709(Local_145[2 /*5*/], Local_55[0 /*2*/]);
				unk_0xF7596738B7B76709(Local_145[3 /*5*/], Local_55[0 /*2*/]);
				unk_0x88BA50644624C1C1(Local_169[0 /*2*/]);
				unk_0x88BA50644624C1C1(Local_169[1 /*2*/]);
				if (func_100(Local_55[0 /*2*/]))
				{
					unk_0xA4E0CDB5A634F43D(Local_55[0 /*2*/], Local_166);
					unk_0xE457AC24AF211ECC(Local_55[0 /*2*/]);
				}
				iLocal_452 = unk_0x693EBB4F13506457();
				unk_0x233432976E597324("DHP1_RELEASED");
				unk_0x9F4AA6F234E8A860(1);
				iLocal_445 = 1;
				iLocal_2099++;
			}
			else if (unk_0xBC6B93737FCDC466(uLocal_381) && unk_0x2091E42376999826(uLocal_381) >= 0.7f)
			{
				if (unk_0x090C65D5190A249D(unk_0xC8B93D94F8954288(), 713668775) != 1)
				{
					unk_0x81333BEA4837207C(unk_0xC8B93D94F8954288(), 1252.594f, -3008.883f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
				}
			}
			break;
		
		case 3:
			if ((unk_0x693EBB4F13506457() - iLocal_452) > 1500)
			{
				if (iLocal_445)
				{
					unk_0xF24FE6EB928DD893(uLocal_444, 1261.7f, -3013.3f, 21.7f, -62.7f, 0f, 29.5f, 40.4f, 0, 3, 3, 2);
					unk_0xF24FE6EB928DD893(uLocal_444, 1259.9f, -3014.1f, 21.7f, -67.7f, 0f, 16.5f, 40.4f, 4000, 3, 3, 2);
					iLocal_445 = 0;
				}
				if ((unk_0x693EBB4F13506457() - iLocal_452) > 5000 || unk_0x8D9008B8900A28D0(2, 201))
				{
					if (unk_0x6B4865E08E90ACC5(uLocal_378))
					{
						unk_0x5356E82C1E5E0C44(&uLocal_378);
					}
					func_246(1);
					func_81(&uLocal_460, joaat("s_m_m_security_01"));
					func_251(&uLocal_460, cLocal_49);
					unk_0x8C67D2FDE360FBCA(0f);
					unk_0x0F9FDCEB321235AB(0f, 1065353216);
					unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
					func_176(1, 0, 0, 3000, 0);
					iLocal_452 = unk_0x693EBB4F13506457();
					iLocal_2099++;
				}
			}
			break;
		
		case 4:
			if (!func_243())
			{
				if (func_19() == 2)
				{
					if (!func_240(func_241(0), 0) && !func_240(func_241(1), 0))
					{
						func_239(12);
						iLocal_2099++;
					}
					else if (func_240(func_241(0), 0) && !func_240(func_241(1), 0))
					{
						func_201(&uLocal_213, 0, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
						func_201(&uLocal_213, 1, func_241(0), "MICHAEL", 0, 1);
						if (func_236(&uLocal_213, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_2", 7, 0, 0))
						{
							func_239(12);
							iLocal_2099++;
						}
					}
					else if (!func_240(func_241(0), 0) && func_240(func_241(1), 0))
					{
						func_201(&uLocal_213, 0, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
						func_201(&uLocal_213, 2, func_241(1), "FRANKLIN", 0, 1);
						if (func_236(&uLocal_213, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_3", 7, 0, 0))
						{
							func_239(12);
							iLocal_2099++;
						}
					}
					else
					{
						func_201(&uLocal_213, 0, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
						func_201(&uLocal_213, 1, func_241(0), "MICHAEL", 0, 1);
						func_201(&uLocal_213, 2, func_241(1), "FRANKLIN", 0, 1);
						if (func_12(&uLocal_213, "DHP1AUD", "DHP1_BUD", 7, 0, 0, 0))
						{
							func_239(12);
							iLocal_2099++;
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
			Var1 = { unk_0x44C17CCB85A88A1F(Local_55[0 /*2*/], 1) };
			if (unk_0x2EDDE16C6CF5A81A(Local_55[0 /*2*/]) > 0f || Var1.f_2 < -0.5f)
			{
				unk_0xFF1491DA61F1B6C6(Local_145[0 /*5*/]);
				unk_0xFF1491DA61F1B6C6(Local_145[1 /*5*/]);
				unk_0xFF1491DA61F1B6C6(Local_145[2 /*5*/]);
				unk_0xFF1491DA61F1B6C6(Local_145[3 /*5*/]);
				if (uLocal_2108[0] != -1)
				{
					unk_0x7A2D5FC5F94932AA(uLocal_2108[0]);
				}
				if (uLocal_2108[1] != -1)
				{
					unk_0x7A2D5FC5F94932AA(uLocal_2108[1]);
				}
			}
			if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Local_55[0 /*2*/], 0))
			{
				func_207(1218.237f, -3005.128f, 4.8658f, 359.5065f, 0, 145);
				if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
				{
					Local_64[6 /*10*/] = unk_0x71DD988C1B903F5D(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 1, 1);
					unk_0x640290651A86938B(Local_64[6 /*10*/], joaat("weapon_pistol"), -1, 0, 1);
					unk_0xC778754E36F3FFD6(Local_64[6 /*10*/], 330, 1);
					unk_0x54B7E2FDCB9A874B(Local_64[6 /*10*/], 1);
					unk_0xA9351C9309E03069(&uLocal_379);
					unk_0x3E2E609450787FFE(&uLocal_379);
					unk_0x81333BEA4837207C(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), -1, 2048, 2);
					unk_0x45EF2026AF681474(0, unk_0xC8B93D94F8954288(), 0, 16);
					unk_0x939BC11172AA1303(uLocal_379);
					unk_0xBFE865E3B513451B(Local_64[6 /*10*/], uLocal_379);
					unk_0xA9351C9309E03069(&uLocal_379);
					Local_64[7 /*10*/] = unk_0x71DD988C1B903F5D(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 1, 1);
					unk_0xC778754E36F3FFD6(Local_64[7 /*10*/], 330, 1);
					unk_0x640290651A86938B(Local_64[7 /*10*/], joaat("weapon_pistol"), -1, 0, 1);
					unk_0x54B7E2FDCB9A874B(Local_64[7 /*10*/], 1);
					unk_0xA9351C9309E03069(&uLocal_379);
					unk_0x3E2E609450787FFE(&uLocal_379);
					unk_0x81333BEA4837207C(0, 1252.056f, -3006.94f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), -1, 2048, 2);
					unk_0x45EF2026AF681474(0, unk_0xC8B93D94F8954288(), 0, 16);
					unk_0x939BC11172AA1303(uLocal_379);
					unk_0xBFE865E3B513451B(Local_64[7 /*10*/], uLocal_379);
					unk_0xA9351C9309E03069(&uLocal_379);
					func_82(&uLocal_460, joaat("s_m_m_security_01"));
				}
				else
				{
					Local_64[5 /*10*/] = unk_0x71DD988C1B903F5D(26, joaat("s_m_m_dockwork_01"), 1228.929f, -3015.008f, 8.31909f, 0f, 1, 1);
					unk_0xAAD662D7E0D59F4C(Local_64[5 /*10*/], 1);
					unk_0xA9351C9309E03069(&uLocal_379);
					unk_0x3E2E609450787FFE(&uLocal_379);
					unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), -1, 2096, 2);
					unk_0x81333BEA4837207C(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					unk_0x5323F488E6A1B660(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
					unk_0x5323F488E6A1B660(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
					unk_0xFF45E8546235908A(0, 1252.876f, -3014.035f, 8.31909f, 300f, -1, 0, 0);
					unk_0x939BC11172AA1303(uLocal_379);
					unk_0xBFE865E3B513451B(Local_64[5 /*10*/], uLocal_379);
					unk_0xA9351C9309E03069(&uLocal_379);
					func_82(&uLocal_460, joaat("s_m_m_security_01"));
				}
				if (func_100(Local_64[4 /*10*/]))
				{
					unk_0x5124C5FA52D2AF3E(Local_64[4 /*10*/]);
					unk_0xC76B5C68AB6DC7DF(Local_64[4 /*10*/], 1229.557f, -3002.882f, 8.31909f, 1, 0, 0, 1);
				}
				else
				{
					Local_64[4 /*10*/] = unk_0x71DD988C1B903F5D(26, joaat("s_m_m_dockwork_01"), 1229.557f, -3002.882f, 8.31909f, -99f, 1, 1);
				}
				unk_0xAAD662D7E0D59F4C(Local_64[4 /*10*/], 1);
				unk_0x63E00E88AE3C86A3(Local_64[4 /*10*/], 1);
				unk_0xA9351C9309E03069(&uLocal_379);
				unk_0x3E2E609450787FFE(&uLocal_379);
				unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), -1, 2096, 2);
				unk_0x81333BEA4837207C(0, 1252.994f, -3004.134f, 9.319f, 2f, 20000, 0.25f, 0, 40000f);
				unk_0x5323F488E6A1B660(0, cLocal_49, "react_big_variations_f", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x5323F488E6A1B660(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x5323F488E6A1B660(0, cLocal_49, "react_big_variations_h", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x5323F488E6A1B660(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x5323F488E6A1B660(0, cLocal_49, "react_big_variations_f", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0xFF45E8546235908A(0, 1252.994f, -3004.134f, 9.319f, 300f, -1, 0, 0);
				unk_0x939BC11172AA1303(uLocal_379);
				unk_0xBFE865E3B513451B(Local_64[4 /*10*/], uLocal_379);
				unk_0xA9351C9309E03069(&uLocal_379);
				iLocal_456 = unk_0x693EBB4F13506457();
				iLocal_459 = 0;
				iLocal_458 = 0;
				unk_0x9F4AA6F234E8A860(1);
				unk_0x233432976E597324("DHP1_SUB");
				if (unk_0x6B4865E08E90ACC5(Local_55[0 /*2*/].f_1))
				{
					unk_0x5356E82C1E5E0C44(&(Local_55[0 /*2*/].f_1));
				}
				unk_0xC2BB205CCEB68102(&(Local_169[3 /*2*/]));
				unk_0xC2BB205CCEB68102(&(Local_169[0 /*2*/]));
				unk_0xC2BB205CCEB68102(&(Local_169[1 /*2*/]));
				func_82(&uLocal_460, joaat("p_amb_phone_01"));
				func_82(&uLocal_460, joaat("s_m_m_dockwork_01"));
				func_82(&uLocal_460, joaat("prop_ld_test_01"));
				func_82(&uLocal_460, joaat("prop_sub_release"));
				func_198(&uLocal_460, cLocal_51);
				unk_0xC83A0582E6D2E6F3("docksprep1");
				unk_0xD810132681A9B83C(15f, 10f, 4);
				func_174(1);
				iLocal_2099 = 0;
			}
			else if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(Local_55[0 /*2*/], 1), 1) < 5f && !iLocal_388)
			{
				func_197("DKP1_CLIMB", -1);
				iLocal_388 = 1;
			}
			break;
	}
	if ((!iLocal_398 && func_100(Local_55[0 /*2*/])) && unk_0xEE473B4B88D6F842(Local_55[0 /*2*/]))
	{
		unk_0x90EA80826C00FB10(-1, "SUB_SPLASH", Local_55[0 /*2*/], "DOCKS_HEIST_PREP_1_SOUNDSET", 0, 0);
		iLocal_398 = 1;
	}
	if (((!iLocal_383 && unk_0x95CCECA3948CFE7B(Local_169[0 /*2*/])) && unk_0x95CCECA3948CFE7B(Local_169[1 /*2*/])) && func_100(Local_55[0 /*2*/]))
	{
		if (unk_0xDA402271D45DCB02(Local_169[0 /*2*/]) && unk_0xDA402271D45DCB02(Local_169[1 /*2*/]))
		{
			unk_0x753B620BB931ED39(Local_55[0 /*2*/]);
			Local_145[0 /*5*/] = unk_0xC5D4419D4353C09D(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_2104, 1, fLocal_2104, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0x4440BC17AC167153(Local_145[0 /*5*/], Local_169[0 /*2*/], Local_55[0 /*2*/], unk_0xCC31DB73C65552D8(Local_169[0 /*2*/], 0f, 0f, 0f), unk_0xCC31DB73C65552D8(Local_55[0 /*2*/], 1.8f, 1.02f, 1.11f), fLocal_2104, 0, 0, 0, 0);
			Local_145[1 /*5*/] = unk_0xC5D4419D4353C09D(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_2104, 1, fLocal_2104, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0x4440BC17AC167153(Local_145[1 /*5*/], Local_169[0 /*2*/], Local_55[0 /*2*/], unk_0xCC31DB73C65552D8(Local_169[0 /*2*/], 0f, 0f, 0f), unk_0xCC31DB73C65552D8(Local_55[0 /*2*/], -1.8f, 1.02f, 1.11f), fLocal_2104, 0, 0, 0, 0);
			Local_145[2 /*5*/] = unk_0xC5D4419D4353C09D(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_2104, 1, fLocal_2104, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0x4440BC17AC167153(Local_145[2 /*5*/], Local_169[1 /*2*/], Local_55[0 /*2*/], unk_0xCC31DB73C65552D8(Local_169[1 /*2*/], 0f, 0f, 0f), unk_0xCC31DB73C65552D8(Local_55[0 /*2*/], 1.8f, -3.07f, 1.11f), fLocal_2104, 0, 0, 0, 0);
			Local_145[3 /*5*/] = unk_0xC5D4419D4353C09D(1260.752f, -3004.994f, 22.68315f, 0f, 0f, 0f, fLocal_2104, 1, fLocal_2104, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0x4440BC17AC167153(Local_145[3 /*5*/], Local_169[1 /*2*/], Local_55[0 /*2*/], unk_0xCC31DB73C65552D8(Local_169[1 /*2*/], 0f, 0f, 0f), unk_0xCC31DB73C65552D8(Local_55[0 /*2*/], -1.8f, -3.07f, 1.11f), fLocal_2104, 0, 0, 0, 0);
			iLocal_383 = 1;
			iLocal_385 = 0;
			unk_0xE457AC24AF211ECC(Local_55[0 /*2*/]);
			unk_0x826839BB9226283E(Local_55[0 /*2*/], 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
		}
	}
	else if (func_100(Local_55[0 /*2*/]))
	{
		if (!iLocal_385)
		{
			unk_0xE457AC24AF211ECC(Local_55[0 /*2*/]);
			iLocal_385 = 1;
		}
		unk_0xB7A2078CD1C9A82F(Local_55[0 /*2*/], 0);
		unk_0x826839BB9226283E(Local_55[0 /*2*/], 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
	}
	if (!iLocal_386)
	{
		if (unk_0x95CCECA3948CFE7B(Local_169[3 /*2*/]))
		{
			if (unk_0xDA402271D45DCB02(Local_169[3 /*2*/]))
			{
				unk_0xAD318582A32CA5D2(Local_169[3 /*2*/], Local_64[4 /*10*/], unk_0xF2122440C667309F(Local_64[4 /*10*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				iLocal_386 = 1;
			}
		}
	}
	if (unk_0x95CCECA3948CFE7B(Local_169[3 /*2*/]) && ((func_100(Local_64[4 /*10*/]) && unk_0x54BD36F7F4951C53(Local_64[4 /*10*/])) || !func_100(Local_64[4 /*10*/])))
	{
		if (func_100(Local_64[4 /*10*/]) && unk_0xCD61E9D5CABC7E35(Local_64[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
		{
			unk_0xE80E983DE27B676E(Local_64[4 /*10*/], cLocal_50, "cellphone_call_listen_c", -1056964608);
		}
		if (unk_0xE33A9405F8300B78(Local_169[3 /*2*/]))
		{
			unk_0xB81176DFD2611E8B(Local_169[3 /*2*/], 1, 1);
		}
	}
	if (func_19() == 2)
	{
		if (func_100(Local_55[0 /*2*/]))
		{
			unk_0x8B8B003FB9DE3D8C(Local_55[0 /*2*/], 1);
		}
	}
	else if (func_100(Local_55[0 /*2*/]))
	{
		unk_0x8B8B003FB9DE3D8C(Local_55[0 /*2*/], 0);
	}
}

void func_207(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x95CCECA3948CFE7B(Global_92918.f_4))
	{
		if (unk_0x5D42322C7DB888D0(Global_92918.f_4, 0))
		{
			if (func_235(24) != Global_92918.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_232(unk_0x44C17CCB85A88A1F(Global_92918.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_208(Global_92918.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_208(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[25]) && unk_0x5D42322C7DB888D0(Global_68186.f_484[25], 0))
			{
				if (Global_68186.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xA298102257816428(iParam0) || unk_0x6D5BB810CC209E15(iParam0) == joaat("bus")) || unk_0x6D5BB810CC209E15(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_231(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_114(iParam0, &Var0);
		if (func_88(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
			uParam4 = unk_0x59DD203239FBDCAD(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) != joaat("vehicle_gen_controller"))
			{
				Global_69174 = unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4());
			}
		}
		func_225(iParam5, &Var0, Param1, uParam4, func_110(iParam0));
		func_209(iParam5, iParam0, 0);
	}
}

void func_209(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_224(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 12) && !unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68186.f_555[0 /*21*/].f_4 != unk_0x6D5BB810CC209E15(iParam1))
		{
			return;
		}
	}
	if (Global_69093 != -1 && Global_69093 != iParam0)
	{
		return;
	}
	if (unk_0x95CCECA3948CFE7B(iParam1))
	{
		if (unk_0x5D42322C7DB888D0(iParam1, 0))
		{
			if (!unk_0xD28A89C669EAD2E4(iParam1))
			{
				unk_0xFD816D0E738EB817(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_100976.f_18751.f_4801 = func_150();
			}
			if (iParam1 != Global_68186.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_235(iParam0);
					if ((unk_0x95CCECA3948CFE7B(iVar0) && unk_0x5D42322C7DB888D0(iVar0, 0)) && iParam1 != iVar0)
					{
						func_210(iVar0, 145);
					}
				}
				Global_69092 = iParam1;
				Global_69093 = iParam0;
				Global_69094 = iParam2;
			}
		}
	}
}

void func_210(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_211(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xC0ADAF0814175B68(iParam0, -1);
		if (!unk_0x95CCECA3948CFE7B(iVar0))
		{
			iVar0 = unk_0xD58C042006468C27(iParam0, -1);
		}
		if (unk_0x95CCECA3948CFE7B(iVar0) && !unk_0x2DC9BA2299B45EA6(iVar0))
		{
			if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_100976.f_1770.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_100976.f_18751.f_5592[iVar1] = iVar2;
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
		if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_100976.f_18751.f_5590 = iParam1;
	Global_69091 = iParam0;
	Global_100976.f_18751.f_5588 = 1;
	func_114(iParam0, &(Global_100976.f_18751.f_5510));
}

int func_211(int iParam0)
{
	if ((((((((((!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0)) || func_119(iParam0, 0, 0)) || func_119(iParam0, 1, 0)) || func_119(iParam0, 2, 0)) || func_110(iParam0) != 145) || func_223(iParam0)) || func_222(iParam0)) || func_221(iParam0)) || func_220(iParam0)) || !func_212(unk_0x6D5BB810CC209E15(iParam0)))
	{
		if (func_222(iParam0))
		{
		}
		if (func_222(iParam0))
		{
		}
		if (func_119(iParam0, 0, 0))
		{
		}
		if (func_119(iParam0, 1, 0))
		{
		}
		if (func_119(iParam0, 2, 0))
		{
		}
		if (func_110(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_212(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_213(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x9DABB329596B1BD6(iParam0) || unk_0xE924C2C283992918(iParam0)) || unk_0xAF40E7422A6D9D80(iParam0)) || unk_0xC9E810FB9A83EF58(iParam0))
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

int func_213(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x465E33AAA0C48359(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("buffalo3") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("gauntlet2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_219())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x4BE9DEC2073C9C84())
		{
			if (unk_0x0486BD07D3026E5E(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x06C32703437E5BC3(Var1.f_0))
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
		if ((((!func_218() && !func_217()) && !func_216()) && !func_215()) && !func_219())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF7FE713C9F786F8C() || unk_0x68B0A67658F2D9C2()) || unk_0x62F8BA7ED89768FB())
		{
		}
		else if (!func_216())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_214(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2457144)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_4998 && !Global_262145.f_10806) && iVar1 < Global_262145.f_10807)
		{
			iVar0 = 0;
		}
	}
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11360 && iVar1 < Global_262145.f_11366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11356 && iVar1 < Global_262145.f_11362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11357 && iVar1 < Global_262145.f_11363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11358 && iVar1 < Global_262145.f_11364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11359 && iVar1 < Global_262145.f_11365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11361 && iVar1 < Global_262145.f_11367)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_215()
{
	return 0;
}

int func_216()
{
	return 1;
}

int func_217()
{
	return 1;
}

int func_218()
{
	if (unk_0x9F37711843A20114(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	var uVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x76C144FFABF149C3())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x59A0729D503ED758(&uVar0, 2);
				unk_0x59A0729D503ED758(&uVar0, 4);
				unk_0x59A0729D503ED758(&uVar0, 6);
				unk_0x59A0729D503ED758(&Global_25, 2);
				unk_0x59A0729D503ED758(&Global_25, 4);
				unk_0x59A0729D503ED758(&Global_25, 6);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					uVar0 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&uVar0, 0);
					unk_0x1F071A4E400AAE0A(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138040 == 2)
	{
		return 1;
	}
	else if (Global_138040 == 3)
	{
		return 0;
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		if (unk_0xDCC86F723E82125E(unk_0x11BD984A2A4EF9A7(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	sVar1 = unk_0xC51A0D06D98180EB(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xF8D041B05C3D1FD4(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_213(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88800[iVar0]))
		{
			if (Global_88800[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]) && unk_0x5D42322C7DB888D0(Global_88770[iVar0], 0))
			{
				if (Global_88770[iVar0] == iParam0 && unk_0x6D5BB810CC209E15(Global_88770[iVar0]) == unk_0x6D5BB810CC209E15(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_223(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[24]))
	{
		if (iParam0 == Global_68186.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68186.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_224(var uParam0, int iParam1)
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
			uParam0->f_4 = func_112(0, 1);
			uParam0->f_12 = 0;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_112(0, 1);
			uParam0->f_12 = 0;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_112(1, 1);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_112(1, 2);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 19);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_112(1, 1);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_112(1, 2);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 19);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_112(2, 1);
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_112(2, 1);
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_112(2, 1);
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 27);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 27);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 27);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 11);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 11);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 9);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 9);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
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
			if (func_219())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 1);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_219())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 1);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_100976.f_18751.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_88(Global_100976.f_18751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_100976.f_18751.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_100976.f_18751.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_100976.f_18751.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_9, 19))
	{
		if (!func_88(Global_100976.f_1770.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_100976.f_1770.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_100976.f_1770.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xDCC86F723E82125E(uParam0->f_9, 20))
	{
		if (!func_88(Global_100976.f_1770.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_100976.f_1770.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_100976.f_1770.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_225(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_224(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 10))
		{
			func_230(iParam0);
			func_229(uParam1, &(Global_100976.f_18751.f_69[Global_68186.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 11))
			{
				Global_100976.f_18751.f_1864[Global_68186.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_100976.f_18751.f_1934[Global_68186.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_100976.f_18751.f_1864[Global_68186.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_100976.f_18751.f_1934[Global_68186.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_100976.f_18751.f_1958[Global_68186.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_226(iParam0, 1);
		}
	}
}

void func_226(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_228(iParam0, 0))
		{
			func_227(iParam0, 1, 0);
			func_227(iParam0, 2, 0);
			func_227(iParam0, 3, 0);
			func_227(iParam0, 4, 0);
			func_227(iParam0, 0, 1);
			Global_68186[iParam0] = 1;
		}
	}
	else
	{
		func_227(iParam0, 0, 0);
	}
}

void func_227(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x59A0729D503ED758(&(Global_100976.f_18751[iParam0]), iParam1);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_100976.f_18751[iParam0]), iParam1);
	}
}

bool func_228(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xDCC86F723E82125E(Global_100976.f_18751[iParam0], iParam1);
}

void func_229(var uParam0, var uParam1)
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

void func_230(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_224(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_139[iParam0]))
		{
			unk_0xFD816D0E738EB817(Global_68186.f_139[iParam0], 1, 1);
			unk_0xEF84021B2AB5E334(&(Global_68186.f_139[iParam0]));
			Global_68186.f_139[iParam0] = 0;
		}
		if (unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 13))
		{
			func_226(iParam0, 0);
		}
	}
}

void func_231(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_230(iParam0);
	func_226(iParam0, 0);
}

int func_232(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_233(Param0, iParam3, 1);
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

int func_233(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_86477[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86477[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_234(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x4F982ED5336EA899(Param0, Global_86477[iVar0 /*10*/].f_3, 1);
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

bool func_234(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_100976.f_5863[iParam0], 0);
}

int func_235(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68186.f_139[iParam0];
}

bool func_236(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8)
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
	func_238(2, &uVar0, &uVar11, sParam2, sParam3, sParam4, sParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_237(&uVar0, &uVar11, iParam6, 0);
}

int func_237(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam2 > Global_15714)
			{
				if (bParam3 == 0)
				{
					unk_0xB518E9C8553B1D2B(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
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
		if (unk_0x2964A62922189B93())
		{
			return 0;
		}
		if (func_26(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_25();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16708 = Global_16709;
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15331.f_370 = Global_16701;
		Global_15708 = Global_15709;
		Global_15710 = Global_15711;
		if (Global_15970 == 0)
		{
			Global_15866[0 /*6*/] = { Global_15892[0 /*6*/] };
			Global_15866[1 /*6*/] = { Global_15892[1 /*6*/] };
			Global_15918[0 /*6*/] = { Global_15944[0 /*6*/] };
			Global_15918[1 /*6*/] = { Global_15944[1 /*6*/] };
			Global_15879[0 /*6*/] = { Global_15905[0 /*6*/] };
			Global_15879[1 /*6*/] = { Global_15905[1 /*6*/] };
			Global_15931[0 /*6*/] = { Global_15957[0 /*6*/] };
			Global_15931[1 /*6*/] = { Global_15957[1 /*6*/] };
		}
		if (Global_15718)
		{
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
			if (bParam3)
			{
				func_18();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_17())
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (Global_15970 == 0)
					{
						if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
						{
							return 0;
						}
						if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
						{
							return 0;
						}
						if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
						{
							return 0;
						}
						if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
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
				switch (Global_14413.f_1)
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
			Global_15722 = bParam3;
		}
		Global_15714 = iParam2;
		if (Global_15708 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15708)
			{
				StringCopy(&(Global_15331.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15331.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14578 = 0;
		func_14();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15714 || iParam2 == Global_15714)
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

void func_238(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_15709 = iParam0;
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16709 = 0;
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

void func_239(int iParam0)
{
	unk_0x59A0729D503ED758(&Global_87294, iParam0);
}

int func_240(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		iVar0 = func_22(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_241(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xC8B93D94F8954288())
			{
				return 0;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_87292, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_19())
	{
		return unk_0xC8B93D94F8954288();
	}
	return Global_88917[func_242(iParam0)];
}

int func_242(int iParam0)
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

int func_243()
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

void func_244(char* sParam0)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 1, 1, -1);
}

void func_245()
{
	int iVar0;
	bool bVar1;
	
	iLocal_382 = 0;
	while (iLocal_382 < Local_145.f_0)
	{
		if (!unk_0xDDEB018ADCB62B19(&(Local_145[iLocal_382 /*5*/])))
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
		if (((((!unk_0xDDEB018ADCB62B19(&(Local_145[0 /*5*/])) && !unk_0xDDEB018ADCB62B19(&(Local_145[1 /*5*/]))) && (!Local_145[0 /*5*/].f_4 || !Local_145[1 /*5*/].f_4)) || ((!unk_0xDDEB018ADCB62B19(&(Local_145[2 /*5*/])) && !unk_0xDDEB018ADCB62B19(&(Local_145[3 /*5*/]))) && (!Local_145[2 /*5*/].f_4 || !Local_145[3 /*5*/].f_4))) || iVar0 == 3) && iVar0 < 4)
		{
			if (iLocal_2111 > 0)
			{
				if (uLocal_2108[(iLocal_2111 - 1)] != -1)
				{
					unk_0x7A2D5FC5F94932AA(uLocal_2108[(iLocal_2111 - 1)]);
				}
			}
			if (uLocal_2108[iLocal_2111] != -1)
			{
				unk_0xE55275772E833643(uLocal_2108[iLocal_2111], "DOCKS_HEIST_PREP_1_SUB_SWING", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
				iLocal_2111++;
			}
		}
		else if (iVar0 <= 2)
		{
			unk_0xE55275772E833643(-1, "DOCKS_HEIST_PREP_1_SUB_TILT", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
		}
		iLocal_382 = 0;
		while (iLocal_382 < Local_145.f_0)
		{
			if (!unk_0xDDEB018ADCB62B19(&(Local_145[iLocal_382 /*5*/])))
			{
				if (!Local_145[iLocal_382 /*5*/].f_4)
				{
					unk_0xE55275772E833643(-1, "DOCKS_HEIST_PREP_1_CABLE_SNAP", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
				}
				Local_145[iLocal_382 /*5*/].f_4 = 1;
			}
			iLocal_382++;
		}
		if (iVar0 >= 4)
		{
			if (uLocal_2108[0] != -1)
			{
				unk_0x7A2D5FC5F94932AA(uLocal_2108[0]);
			}
			if (uLocal_2108[1] != -1)
			{
				unk_0x7A2D5FC5F94932AA(uLocal_2108[1]);
			}
		}
	}
}

void func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_81(&uLocal_460, joaat("submersible"));
			func_81(&uLocal_460, joaat("prop_ld_test_01"));
			func_81(&uLocal_460, joaat("prop_sub_release"));
			func_81(&uLocal_460, joaat("s_m_m_dockwork_01"));
			func_251(&uLocal_460, cLocal_50);
			func_251(&uLocal_460, cLocal_51);
			func_249(&uLocal_460, "docksprep1");
			func_81(&uLocal_460, joaat("p_amb_phone_01"));
			func_248(&uLocal_460);
			func_250(&uLocal_460, "PORT_OF_LS_PREP_1");
			break;
		
		case 1:
			func_81(&uLocal_460, joaat("submersible"));
			func_81(&uLocal_460, joaat("packer"));
			func_81(&uLocal_460, joaat("armytrailer"));
			func_81(&uLocal_460, iLocal_415);
			func_81(&uLocal_460, iLocal_420);
			func_81(&uLocal_460, iLocal_425);
			func_247(&uLocal_460);
			func_248(&uLocal_460);
			break;
		
		case 2:
		case 3:
			func_81(&uLocal_460, joaat("submersible"));
			func_81(&uLocal_460, joaat("packer"));
			func_81(&uLocal_460, joaat("armytrailer"));
			func_81(&uLocal_460, joaat("prop_sub_cover_01"));
			func_81(&uLocal_460, joaat("prop_tarp_strap"));
			break;
	}
}

void func_247(var uParam0)
{
	uParam0->f_855.f_2 = 0;
	if (!uParam0->f_855.f_1)
	{
		if (!uParam0->f_855)
		{
			unk_0x8CBF0FAEA6BA6D37();
			uParam0->f_855 = 1;
		}
		uParam0->f_977 = 1;
	}
}

void func_248(var uParam0)
{
	uParam0->f_859.f_2 = 0;
	if (!uParam0->f_859.f_1)
	{
		if (!uParam0->f_859)
		{
			unk_0x53B6708FAAD34C0E();
			uParam0->f_859 = 1;
		}
		uParam0->f_977 = 1;
	}
}

int func_249(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0xF8D041B05C3D1FD4(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
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
		unk_0x354516B1347786F1(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x693EBB4F13506457();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_250(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0xF8D041B05C3D1FD4(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
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
		unk_0xC4C141A321D45FD8(sParam1, 0);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x693EBB4F13506457();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_251(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (unk_0xF8D041B05C3D1FD4(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
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
		unk_0xC0E8B67A4385D37D(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = unk_0x693EBB4F13506457();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_252(int iParam0)
{
	return func_33(iParam0, 1, 0);
}

void func_253()
{
	int iVar0;
	
	iLocal_382 = 0;
	while (iLocal_382 <= (8 - 1))
	{
		if (unk_0x95CCECA3948CFE7B(Local_64[iLocal_382 /*10*/]))
		{
			if (Local_64[iLocal_382 /*10*/] != Local_64[3 /*10*/])
			{
				if (iLocal_2098 == 0)
				{
					func_268(Local_64[iLocal_382 /*10*/], &(Local_64[iLocal_382 /*10*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1);
				}
				else if (unk_0x6B4865E08E90ACC5(Local_64[iLocal_382 /*10*/].f_2))
				{
					unk_0x5356E82C1E5E0C44(&(Local_64[iLocal_382 /*10*/].f_2));
				}
			}
			if (unk_0x2DC9BA2299B45EA6(Local_64[iLocal_382 /*10*/]))
			{
				if (Local_64[iLocal_382 /*10*/] == Local_64[3 /*10*/])
				{
					func_86(7);
				}
				func_9(&(Local_64[iLocal_382 /*10*/]), 1, 0, 1);
			}
			else if (iLocal_2098 == 2 && Local_64[iLocal_382 /*10*/] == Local_64[3 /*10*/])
			{
				if (func_10(Local_64[3 /*10*/], unk_0xC8B93D94F8954288(), 1) > 300f)
				{
					func_86(11);
				}
			}
		}
		iLocal_382++;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (4 - 1))
	{
		if (unk_0x95CCECA3948CFE7B(Local_55[iLocal_382 /*2*/]))
		{
			if (!unk_0x5D42322C7DB888D0(Local_55[iLocal_382 /*2*/], 0))
			{
				if (Local_55[iLocal_382 /*2*/] == Local_55[0 /*2*/])
				{
					func_86(1);
				}
				else if (Local_55[iLocal_382 /*2*/] == Local_55[2 /*2*/] || Local_55[iLocal_382 /*2*/] == Local_55[1 /*2*/])
				{
					func_86(2);
				}
				else if (iLocal_382 == 3)
				{
					func_86(8);
				}
				func_267(&(Local_55[iLocal_382 /*2*/]));
			}
			else if (iLocal_392)
			{
				if (Local_55[iLocal_382 /*2*/] == Local_55[0 /*2*/] || Local_55[iLocal_382 /*2*/] == Local_55[1 /*2*/])
				{
					if (iLocal_2098 == 2)
					{
						if (unk_0x2EDDE16C6CF5A81A(Local_55[iLocal_382 /*2*/]) > 0.5f)
						{
							func_86(5);
						}
					}
				}
				if (Local_55[iLocal_382 /*2*/] == Local_55[2 /*2*/] || Local_55[iLocal_382 /*2*/] == Local_55[1 /*2*/])
				{
					if (func_266(&(Local_55[iLocal_382 /*2*/])))
					{
						func_86(3);
						func_267(&(Local_55[iLocal_382 /*2*/]));
					}
				}
				if (Local_55[iLocal_382 /*2*/] == Local_55[0 /*2*/])
				{
					if (iLocal_2098 == 1 && iLocal_2099 < 3)
					{
						if (func_266(&(Local_55[iLocal_382 /*2*/])))
						{
							func_86(4);
							func_267(&(Local_55[iLocal_382 /*2*/]));
						}
					}
				}
			}
		}
		iLocal_382++;
	}
	if (func_100(Local_55[0 /*2*/]) && func_100(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(Local_55[0 /*2*/], 1), 1) > 750f)
		{
			func_86(10);
		}
		else if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(Local_55[0 /*2*/], 1), 1) > 700f)
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
	if (func_100(unk_0xC8B93D94F8954288()))
	{
		func_259();
	}
	if (iLocal_2098 == 0 && iLocal_2099 > 0)
	{
		func_256();
	}
	if (iLocal_2098 == 0 || iLocal_2098 == 1)
	{
		if (func_100(Local_55[0 /*2*/]))
		{
			if (!iLocal_2106)
			{
				func_255(Local_55[0 /*2*/], 588);
				iLocal_2106 = 1;
			}
		}
		else if (iLocal_2106)
		{
			func_255(0, 588);
			iLocal_2106 = 0;
		}
	}
	else if (iLocal_2098 == 2)
	{
		if (func_100(Local_55[2 /*2*/]))
		{
			if (!iLocal_2107)
			{
				func_255(Local_55[2 /*2*/], 590);
				iLocal_2107 = 1;
			}
		}
		else if (iLocal_2107)
		{
			func_255(0, 590);
			iLocal_2107 = 0;
		}
	}
	if ((((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1240.402f, -2880.396f, 8.25003f, 1240.384f, -2924.513f, 40.81909f, 28.875f, 0, 1, 0) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1240.222f, -3035.469f, 16.02625f, 1240.409f, -2924.159f, 8.06909f, 28.875f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1240.464f, -3035.127f, 13.00698f, 1240.617f, -3057.122f, 16.97133f, 27.6875f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1240.537f, -2967.822f, 32.94558f, 1240.792f, -2943.657f, 10.00659f, 12.1875f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1261.525f, -3006.275f, 29.21641f, 1237.788f, -3006.826f, 12.87723f, 8.1875f, 0, 1, 0))
	{
		unk_0x79E983FC78AD8553(unk_0x7CBED6EFED40E7EB("V_FakeBoatPO1SH2A"), 1240f, -2970f, 0, 0);
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
		{
			iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 1);
		}
		else
		{
			iVar0 = unk_0xC8B93D94F8954288();
		}
		if ((!unk_0x25011B7D08ACD328(iVar0) && !unk_0xEE473B4B88D6F842(iVar0)) && (!unk_0x95CCECA3948CFE7B(Local_55[0 /*2*/]) || !unk_0xA499226F64D3A26A(iVar0, Local_55[0 /*2*/])))
		{
			if (!iLocal_391)
			{
				func_254(593);
				iLocal_391 = 1;
			}
		}
	}
	if (!iLocal_393)
	{
		if (unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
		{
			unk_0x9F4C1977B00B9480("OnlyAllowScriptTriggerPoliceScanner", 1);
			unk_0x6550E854B6D80CD9("SCRIPTED_SCANNER_REPORT_DH_PREP_1_01", 0f);
			iLocal_393 = 1;
		}
	}
	if (unk_0xA4860063B4E6B963())
	{
		unk_0xE2AB8ECEA2044CDD(Local_55[0 /*2*/]);
	}
}

void func_254(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55660 = 0;
	if (!Global_55884[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67754)
	{
		if (Global_67755[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67755[iVar1 /*9*/].f_1 = 1;
			Global_67755[iVar1 /*9*/].f_2 = 0f;
			if (Global_67755[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_255(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55672 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		if (iParam1 == -1 || Global_67755[iVar0 /*9*/] == iParam1)
		{
			if (Global_67755[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67755[iVar0 /*9*/].f_6 = iParam0;
				Global_67755[iVar0 /*9*/].f_7 = 1;
				Global_67755[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_256()
{
	switch (iLocal_399)
	{
		case 0:
			if (func_100(Local_64[4 /*10*/]))
			{
				if (iLocal_404)
				{
					unk_0x5323F488E6A1B660(Local_64[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
					if (unk_0xCB5C09DEC6D45DA8("docksprep1"))
					{
						unk_0xC69F770D3B4E67F8(Local_64[4 /*10*/], "docksprep1", 0, 8, -1);
					}
					else
					{
						unk_0x354516B1347786F1("docksprep1");
					}
				}
			}
			iLocal_405 = 0;
			iLocal_399 = 1;
			break;
		
		case 1:
			if (!iLocal_404)
			{
				if ((unk_0x693EBB4F13506457() - iLocal_403) > 2000 || unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(Local_64[4 /*10*/], 1), 1) < 10f)
				{
					iLocal_404 = 1;
					iLocal_399 = 0;
				}
			}
			if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0))
			{
				if (func_100(Local_64[4 /*10*/]))
				{
					if (unk_0x9AD5716183392F62(Local_64[4 /*10*/], unk_0xC8B93D94F8954288()))
					{
						unk_0x5124C5FA52D2AF3E(Local_64[4 /*10*/]);
						unk_0x5147F4FD3D9AB607(Local_64[4 /*10*/]);
						func_201(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_399 = 2;
					}
					else if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(Local_64[4 /*10*/], 1), 1) < 12f && unk_0x63B860B4D08A206F(unk_0xA34E7C2A5118D638()) > 8.5f)
					{
						unk_0x5147F4FD3D9AB607(Local_64[4 /*10*/]);
						if (!func_258(Local_64[4 /*10*/], 1464580341, 1))
						{
							unk_0x7FFE31040063EDAE(Local_64[4 /*10*/], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 4000);
							unk_0x5323F488E6A1B660(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(Local_64[4 /*10*/], 1), 1) < 12f && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						if (!func_258(Local_64[4 /*10*/], 1464580341, 1))
						{
							unk_0x7FFE31040063EDAE(Local_64[4 /*10*/], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 4000);
							unk_0x5323F488E6A1B660(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (((unk_0x590A66CE7A2DFD47(unk_0xC8B93D94F8954288()) && (unk_0x342FDFC48311CCCE() >= 19 || unk_0x342FDFC48311CCCE() < 6)) && func_10(unk_0xC8B93D94F8954288(), Local_64[4 /*10*/], 1) < 25f) && (unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), Local_64[4 /*10*/]) || unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), Local_64[4 /*10*/])))
					{
						if (!func_258(Local_64[4 /*10*/], 1464580341, 1))
						{
							unk_0x7FFE31040063EDAE(Local_64[4 /*10*/], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 4000);
							unk_0x5323F488E6A1B660(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(Local_64[4 /*10*/], 1), 1) < 12f && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						if (!func_258(Local_64[4 /*10*/], 1464580341, 1))
						{
							unk_0x7FFE31040063EDAE(Local_64[4 /*10*/], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 4000);
							unk_0x5323F488E6A1B660(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
				}
				if (iLocal_2099 > 1)
				{
					if (func_100(Local_64[4 /*10*/]))
					{
						if (unk_0x6F40F1AEF9770612(Local_64[4 /*10*/], Local_55[0 /*2*/]))
						{
							unk_0x5147F4FD3D9AB607(Local_64[4 /*10*/]);
							func_201(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
							iLocal_399 = 3;
							iLocal_401 = 3;
							unk_0xBA73099E237C7E5E(Local_64[4 /*10*/]);
							unk_0x81333BEA4837207C(Local_64[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, -1, 0.25f, 0, -122.93f);
							iLocal_403 = unk_0x693EBB4F13506457();
							iLocal_404 = 0;
						}
					}
				}
			}
			if (func_100(Local_64[4 /*10*/]))
			{
				if (!unk_0xEECE8DA9B85E4E10(Local_64[4 /*10*/]))
				{
					if (iLocal_404)
					{
						if ((unk_0x090C65D5190A249D(Local_64[4 /*10*/], 242628503) != 1 && unk_0x090C65D5190A249D(Local_64[4 /*10*/], 713668775) != 1) && unk_0x090C65D5190A249D(Local_64[4 /*10*/], 1464580341) != 1)
						{
							if (!unk_0xCD61E9D5CABC7E35(Local_64[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
							{
								unk_0x5323F488E6A1B660(Local_64[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							if (unk_0xA0C23498D8E0BB93(Local_64[4 /*10*/], 1228.056f, -3000.427f, 8.4424f, 2f, 2f, 2f, 0, 1, 0))
							{
								if (unk_0xCB5C09DEC6D45DA8("docksprep1"))
								{
									unk_0xC69F770D3B4E67F8(Local_64[4 /*10*/], "docksprep1", 0, 0, -1);
								}
							}
							else if (unk_0xCB5C09DEC6D45DA8("docksprep1"))
							{
								unk_0xC69F770D3B4E67F8(Local_64[4 /*10*/], "docksprep1", 0, 8, -1);
							}
						}
					}
				}
				else
				{
					if ((unk_0x693EBB4F13506457() - iLocal_407) > 10000)
					{
						if (!unk_0xFFACA82A6A232F25(Local_64[4 /*10*/]))
						{
							if (unk_0xA0C23498D8E0BB93(Local_64[4 /*10*/], 1251.625f, -3003.338f, 8.31909f, 2f, 2f, 2f, 0, 1, 0))
							{
								unk_0xD8B7ABC5819184A4(Local_64[4 /*10*/], 0, 0);
							}
							else if (unk_0xA0C23498D8E0BB93(Local_64[4 /*10*/], 1228.849f, -2986.284f, 8.31909f, 2f, 2f, 2f, 0, 1, 0))
							{
								unk_0xD8B7ABC5819184A4(Local_64[4 /*10*/], 0, 0);
							}
						}
						else
						{
							iLocal_407 = unk_0x693EBB4F13506457();
							unk_0x7E7CEC5559A2EDA2(Local_64[4 /*10*/], 1, -1, 3000);
						}
					}
					if (!unk_0x0D211C48FB8578B7(Local_64[4 /*10*/]) && (unk_0x693EBB4F13506457() - iLocal_408) > 4000)
					{
						func_257(Local_64[4 /*10*/], "Sol1_EFAA", "CONSTRUCTION2", 3);
						iLocal_408 = unk_0x693EBB4F13506457();
					}
				}
				if (((unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 122) || unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 123)) || unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 124)) || unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 116))
				{
					unk_0x5147F4FD3D9AB607(Local_64[4 /*10*/]);
					func_201(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 1;
					unk_0x5323F488E6A1B660(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					unk_0x80486019BE497773(Local_64[4 /*10*/], -1, unk_0xC8B93D94F8954288(), -1, 1);
				}
				else if (unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 23))
				{
					unk_0x5147F4FD3D9AB607(Local_64[4 /*10*/]);
					func_201(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 2;
					unk_0x5124C5FA52D2AF3E(Local_64[4 /*10*/]);
					unk_0x5323F488E6A1B660(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					unk_0x9F3B55DA0D0220DD(Local_64[4 /*10*/], -1);
				}
				else if (unk_0x87D4C731B013290A(Local_64[4 /*10*/], unk_0xC8B93D94F8954288(), 1))
				{
					unk_0x5147F4FD3D9AB607(Local_64[4 /*10*/]);
					unk_0x5323F488E6A1B660(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					func_201(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 4;
				}
			}
			break;
		
		case 2:
			if (func_100(Local_64[4 /*10*/]))
			{
				if (!unk_0x3B140346FC1C273F(Local_64[4 /*10*/], unk_0xC8B93D94F8954288()))
				{
					unk_0xE48D9147BC1F4CD7(Local_64[4 /*10*/], unk_0xC8B93D94F8954288(), -1, 3104, 2);
				}
			}
			switch (iLocal_400)
			{
				case 0:
					if (func_100(Local_64[4 /*10*/]))
					{
						if (func_12(&uLocal_213, "SOL1AUD", "SOL1_SEE3", 7, 0, 0, 0))
						{
							unk_0x3E2E609450787FFE(&uLocal_379);
							unk_0x1510D3A1E178AAEF(0, unk_0xC8B93D94F8954288(), -1, 4f, 1073741824, 1073741824, 0);
							unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), -1);
							unk_0x939BC11172AA1303(uLocal_379);
							unk_0xBFE865E3B513451B(Local_64[4 /*10*/], uLocal_379);
							unk_0xA9351C9309E03069(&uLocal_379);
							unk_0x5323F488E6A1B660(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
							iLocal_402 = unk_0x693EBB4F13506457();
							iLocal_400 = 1;
						}
					}
					break;
				
				case 1:
					if ((unk_0x693EBB4F13506457() - iLocal_402) > 4000)
					{
						if (func_100(Local_64[4 /*10*/]))
						{
							if (func_12(&uLocal_213, "SOL1AUD", "SOL1_SEE4", 7, 0, 0, 0))
							{
								unk_0x3E2E609450787FFE(&uLocal_379);
								unk_0x1510D3A1E178AAEF(0, unk_0xC8B93D94F8954288(), -1, 3f, 1f, 1073741824, 0);
								unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), -1);
								unk_0x939BC11172AA1303(uLocal_379);
								unk_0xBFE865E3B513451B(Local_64[4 /*10*/], uLocal_379);
								unk_0xA9351C9309E03069(&uLocal_379);
								unk_0x5323F488E6A1B660(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
								iLocal_402 = unk_0x693EBB4F13506457();
								iLocal_400 = 2;
							}
						}
					}
					break;
				
				case 2:
					if ((unk_0x693EBB4F13506457() - iLocal_402) > 8000)
					{
						if (func_100(Local_64[4 /*10*/]))
						{
							if (func_12(&uLocal_213, "SOL1AUD", "SOL1_COPS2", 7, 0, 0, 0))
							{
								iLocal_402 = unk_0x693EBB4F13506457();
								iLocal_401 = 4;
								iLocal_399 = 3;
							}
						}
					}
					break;
			}
			if (!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || !func_100(Local_64[4 /*10*/]))
			{
				iLocal_399 = 0;
			}
			unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iLocal_406, 1);
			if (func_100(Local_64[4 /*10*/]))
			{
				if ((unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 122) || unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 123)) || unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 124))
				{
					func_201(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 1;
					unk_0x80486019BE497773(Local_64[4 /*10*/], -1, unk_0xC8B93D94F8954288(), -1, 1);
					unk_0x5323F488E6A1B660(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
				}
				else if (unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), Local_64[4 /*10*/]) || unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), Local_64[4 /*10*/]))
				{
					if (unk_0x4BBE3C7CDE87CF44(iLocal_406) != joaat("GROUP_MELEE") && iLocal_406 != joaat("weapon_unarmed"))
					{
						func_201(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_399 = 3;
						iLocal_401 = 1;
						unk_0xBA73099E237C7E5E(Local_64[4 /*10*/]);
						unk_0x80486019BE497773(Local_64[4 /*10*/], -1, unk_0xC8B93D94F8954288(), -1, 0);
					}
				}
				else if (unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 23))
				{
					func_201(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 2;
					unk_0x9F3B55DA0D0220DD(Local_64[4 /*10*/], -1);
					unk_0x5323F488E6A1B660(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
				}
				else if (unk_0x87D4C731B013290A(Local_64[4 /*10*/], unk_0xC8B93D94F8954288(), 1))
				{
					func_201(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 4;
				}
			}
			break;
		
		case 3:
			switch (iLocal_401)
			{
				case 1:
					if (func_100(Local_64[4 /*10*/]))
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
					if (func_100(Local_64[4 /*10*/]))
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
					if (func_100(Local_64[4 /*10*/]))
					{
						if (unk_0xA0C23498D8E0BB93(Local_64[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, 2f, 2f, 0, 1, 0))
						{
							if (func_12(&uLocal_213, "SOL1AUD", "SOL1_SUB1", 7, 0, 0, 0))
							{
								iLocal_405 = 1;
								iLocal_401 = 4;
							}
						}
						if (!unk_0xF0F36915A8ADB923(Local_64[4 /*10*/], Local_55[0 /*2*/]))
						{
							unk_0xE48D9147BC1F4CD7(Local_64[4 /*10*/], Local_55[0 /*2*/], -1, 2096, 2);
						}
					}
					else
					{
						iLocal_404 = 1;
						iLocal_399 = 0;
					}
					break;
				
				case 4:
					if (func_100(Local_64[4 /*10*/]))
					{
						if (!unk_0x770AAB67BDD9C729(Local_64[4 /*10*/]) && !unk_0x5B4D7A11EBC299CE(Local_64[4 /*10*/]))
						{
							if (func_12(&uLocal_213, "SOL1AUD", "SOL1_COPSIN2", 7, 0, 0, 0))
							{
								unk_0x5124C5FA52D2AF3E(Local_64[4 /*10*/]);
								unk_0x3E2E609450787FFE(&uLocal_379);
								unk_0x5323F488E6A1B660(0, cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
								if (iLocal_405)
								{
									unk_0x81333BEA4837207C(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 200f, -1, 0, 0);
								}
								else
								{
									unk_0x81333BEA4837207C(0, 1228.775f, -2923.852f, 8.31909f, 1f, 20000, 0.25f, 0, 40000f);
									unk_0xAA4D081C98107E88(0, 1183.287f, -2947.87f, 4.8986f, 100f, 1077936128, 1086324736);
								}
								unk_0x939BC11172AA1303(uLocal_379);
								unk_0xBFE865E3B513451B(Local_64[4 /*10*/], uLocal_379);
								unk_0xA9351C9309E03069(&uLocal_379);
								iLocal_402 = unk_0x693EBB4F13506457();
								unk_0x233432976E597324("DHP1_ATTACKED");
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
					if ((unk_0x693EBB4F13506457() - iLocal_402) > 8000)
					{
						if (!iLocal_409)
						{
							if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) < 1)
							{
								unk_0x2C63BF89CC01C6D8(unk_0xA34E7C2A5118D638(), 1, 0);
								unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
								iLocal_409 = 1;
							}
						}
						if (func_100(Local_64[4 /*10*/]))
						{
							if (iLocal_405)
							{
								if (!unk_0x54BD36F7F4951C53(Local_64[4 /*10*/]))
								{
									unk_0x622E764F80DBF8B7(Local_64[4 /*10*/], unk_0xC8B93D94F8954288(), 200f, -1, 0, 0);
								}
							}
							else if (unk_0x090C65D5190A249D(Local_64[4 /*10*/], 923520851) != 1)
							{
								unk_0xAA4D081C98107E88(Local_64[4 /*10*/], 1183.287f, -2947.87f, 4.8986f, 100f, 1077936128, 1086324736);
							}
						}
					}
					if (!iLocal_405)
					{
						unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iLocal_406, 1);
						if (func_100(Local_64[4 /*10*/]))
						{
							if ((unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 122) || unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 123)) || unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 124))
							{
								func_201(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_213, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
								{
									unk_0x5124C5FA52D2AF3E(Local_64[4 /*10*/]);
									unk_0x3E2E609450787FFE(&uLocal_379);
									unk_0x80486019BE497773(0, 3000, unk_0xC8B93D94F8954288(), -1, 0);
									unk_0x81333BEA4837207C(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 200f, -1, 0, 0);
									unk_0x939BC11172AA1303(uLocal_379);
									unk_0xBFE865E3B513451B(Local_64[4 /*10*/], uLocal_379);
									unk_0xA9351C9309E03069(&uLocal_379);
									iLocal_402 = unk_0x693EBB4F13506457();
									iLocal_405 = 1;
								}
							}
							else if ((unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), Local_64[4 /*10*/]) || unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), Local_64[4 /*10*/])) && unk_0xAF9BF2C76079B4BF(Local_64[4 /*10*/], unk_0xC8B93D94F8954288(), 160f))
							{
								if (unk_0x4BBE3C7CDE87CF44(iLocal_406) != joaat("GROUP_MELEE") && iLocal_406 != joaat("weapon_unarmed"))
								{
									func_201(&uLocal_213, 4, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
									if (func_12(&uLocal_213, "SOL1AUD", "SOL1_SCAR2", 7, 0, 0, 0))
									{
										unk_0x5124C5FA52D2AF3E(Local_64[4 /*10*/]);
										unk_0x3E2E609450787FFE(&uLocal_379);
										unk_0x80486019BE497773(0, 3000, unk_0xC8B93D94F8954288(), -1, 0);
										unk_0x81333BEA4837207C(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
										unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 200f, -1, 0, 0);
										unk_0x939BC11172AA1303(uLocal_379);
										unk_0xBFE865E3B513451B(Local_64[4 /*10*/], uLocal_379);
										unk_0xA9351C9309E03069(&uLocal_379);
										iLocal_405 = 1;
										iLocal_402 = unk_0x693EBB4F13506457();
									}
								}
							}
							else if (unk_0xB7805A5BD5AE4AF1(Local_64[4 /*10*/], 23))
							{
								func_201(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_213, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
								{
									unk_0x5124C5FA52D2AF3E(Local_64[4 /*10*/]);
									unk_0x3E2E609450787FFE(&uLocal_379);
									unk_0x9F3B55DA0D0220DD(0, -1);
									unk_0x81333BEA4837207C(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 200f, -1, 0, 0);
									unk_0x939BC11172AA1303(uLocal_379);
									unk_0xBFE865E3B513451B(Local_64[4 /*10*/], uLocal_379);
									unk_0xA9351C9309E03069(&uLocal_379);
									iLocal_405 = 1;
								}
							}
							else if (unk_0x87D4C731B013290A(Local_64[4 /*10*/], unk_0xC8B93D94F8954288(), 1))
							{
								unk_0x5124C5FA52D2AF3E(Local_64[4 /*10*/]);
								unk_0x3E2E609450787FFE(&uLocal_379);
								unk_0x81333BEA4837207C(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
								unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 200f, -1, 0, 0);
								unk_0x939BC11172AA1303(uLocal_379);
								unk_0xBFE865E3B513451B(Local_64[4 /*10*/], uLocal_379);
								unk_0xA9351C9309E03069(&uLocal_379);
								iLocal_405 = 1;
								iLocal_402 = unk_0x693EBB4F13506457();
							}
						}
					}
					break;
			}
			break;
	}
}

void func_257(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x7033366221CC71C6(uParam0, sParam1, sParam2, func_53(iParam3), 0);
}

int func_258(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x090C65D5190A249D(uParam0, iParam1);
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

void func_259()
{
	switch (iLocal_459)
	{
		case 0:
			switch (iLocal_458)
			{
				case 0:
					if (func_100(Local_55[0 /*2*/]))
					{
						if ((!unk_0xA3858ADDDBC3CB71() && unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Local_55[0 /*2*/], 0)) && unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
						{
							func_264();
							iLocal_456 = unk_0x693EBB4F13506457();
							iLocal_458 = 1;
						}
					}
					break;
				
				case 1:
					if ((unk_0x693EBB4F13506457() - iLocal_456) > 6000 && unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Local_55[0 /*2*/], 0))
					{
						func_201(&uLocal_213, 1, 0, "FLOYD", 0, 1);
						if (func_12(&uLocal_213, "DHP1AUD", "DHP1_TSUB", 7, 0, 0, 0))
						{
							iLocal_458 = 2;
						}
					}
					break;
				
				case 2:
					if (func_11())
					{
						if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Local_55[0 /*2*/], 0))
						{
							if (func_31())
							{
								func_263(0);
							}
						}
						else if (!func_31())
						{
							func_263(1);
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
					iLocal_456 = unk_0x693EBB4F13506457();
					break;
			}
			break;
		
		case 2:
			switch (iLocal_458)
			{
				case 0:
					if ((!unk_0xA3858ADDDBC3CB71() && unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Local_55[0 /*2*/], 0)) && unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 324.7653f, -2974.495f, -1f, 1) < 110f)
					{
						func_264();
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
					iLocal_456 = unk_0x693EBB4F13506457();
					break;
			}
			break;
		
		case 3:
			if (func_100(Local_55[2 /*2*/]) && func_100(Local_64[3 /*10*/]))
			{
				switch (iLocal_458)
				{
					case 0:
						if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Local_55[2 /*2*/], 0) && unk_0x0C7EC810080F0459(Local_64[3 /*10*/], Local_55[2 /*2*/], 0))
						{
							if (func_11())
							{
								func_264();
							}
							else
							{
								iLocal_458 = 1;
							}
						}
						break;
					
					case 1:
						func_257(Local_64[3 /*10*/], "DHP1_AIAA", "FLOYD", 24);
						iLocal_458 = 2;
						break;
					
					case 2:
						if (!unk_0x0D211C48FB8578B7(Local_64[3 /*10*/]))
						{
							iLocal_458 = 3;
						}
						break;
					
					case 3:
						iLocal_459 = 4;
						iLocal_458 = 0;
						iLocal_456 = unk_0x693EBB4F13506457();
						break;
					}
			}
			break;
		
		case 4:
			if (func_100(Local_55[2 /*2*/]) && func_100(Local_64[3 /*10*/]))
			{
				switch (iLocal_458)
				{
					case 0:
						if (((unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0x0C7EC810080F0459(Local_64[3 /*10*/], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0)) && unk_0x57BA797A9A91EF93(Local_55[1 /*2*/], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0))) && !unk_0xA3858ADDDBC3CB71())
						{
							func_264();
							iLocal_456 = unk_0x693EBB4F13506457();
							iLocal_458 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x693EBB4F13506457() - iLocal_456) > 2000)
						{
							func_201(&uLocal_213, 1, Local_64[3 /*10*/], "FLOYD", 0, 1);
							if (func_12(&uLocal_213, "DHP1AUD", "DHP1_TRCK", 7, 0, 0, 0))
							{
								iLocal_458 = 2;
							}
						}
						break;
					
					case 2:
						if (func_11())
						{
							if ((unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0x0C7EC810080F0459(Local_64[3 /*10*/], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0)) && unk_0x57BA797A9A91EF93(Local_55[1 /*2*/], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
							{
								if (func_31())
								{
									func_263(0);
								}
							}
							else if (!func_31())
							{
								func_263(1);
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
						iLocal_456 = unk_0x693EBB4F13506457();
						break;
				}
				if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(Local_55[0 /*2*/], 1), -323.73f, -2613.702f, 5f, 1) < 60f)
				{
					func_262();
					iLocal_458 = 3;
				}
			}
			break;
		
		case 5:
			switch (iLocal_458)
			{
				case 0:
					if ((((unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0x0C7EC810080F0459(Local_64[3 /*10*/], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0)) && unk_0x57BA797A9A91EF93(Local_55[1 /*2*/], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0))) && !unk_0xA3858ADDDBC3CB71()) && unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -273.635f, -2558.818f, 4.751376f, -405.7218f, -2695.898f, 14.37495f, 51f, 0, 1, 0))
					{
						func_264();
						iLocal_458 = 1;
					}
					break;
				
				case 1:
					bLocal_455 = func_261();
					func_201(&uLocal_213, 1, Local_64[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_455)
					{
						if (func_260(&uLocal_213, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_1", 7, 0, 0))
						{
							iLocal_458 = 2;
						}
					}
					else if (func_260(&uLocal_213, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_2", 7, 0, 0))
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
					iLocal_456 = unk_0x693EBB4F13506457();
					break;
			}
			break;
		
		case 6:
			switch (iLocal_458)
			{
				case 0:
					if ((((unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0x0C7EC810080F0459(Local_64[3 /*10*/], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0)) && unk_0x57BA797A9A91EF93(Local_55[1 /*2*/], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0))) && !unk_0xA3858ADDDBC3CB71()) && unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(Local_55[0 /*2*/], 1), -323.73f, -2613.702f, 5f, 1) < 40f)
					{
						func_264();
						iLocal_458 = 1;
					}
					break;
				
				case 1:
					bLocal_455 = func_261();
					func_201(&uLocal_213, 1, Local_64[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_455)
					{
						if (func_260(&uLocal_213, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_1", 7, 0, 0))
						{
							iLocal_458 = 2;
						}
					}
					else if (func_260(&uLocal_213, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_2", 7, 0, 0))
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

bool func_260(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_28(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_13(sParam2, iParam4, 0);
}

int func_261()
{
	if (unk_0xDCC86F723E82125E(unk_0x531444754C426278(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_262()
{
	Global_14578 = 0;
	func_27();
}

void func_263(int iParam0)
{
	Global_16723 = iParam0;
}

void func_264()
{
	Global_14578 = 0;
	func_265();
}

void func_265()
{
	if (unk_0x2964A62922189B93())
	{
		unk_0xE9A2B98CC2F095D6();
		Global_16723 = 0;
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

int func_266(var uParam0)
{
	if (unk_0x5D42322C7DB888D0(*uParam0, 0))
	{
		if (((unk_0x442EE710FCFD5D0D(*uParam0, 0, 7000) || unk_0x442EE710FCFD5D0D(*uParam0, 3, 30000)) || unk_0x442EE710FCFD5D0D(*uParam0, 2, 30000)) || unk_0x442EE710FCFD5D0D(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_267(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		unk_0xB6900B8CB0ABBD2B(*uParam0);
		if (unk_0xD28A89C669EAD2E4(*uParam0) && unk_0x1F59F772AA90087D(*uParam0, 1))
		{
			unk_0xEF84021B2AB5E334(uParam0);
		}
	}
}

int func_268(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x1A96BAEAC664567A();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (!unk_0x4E12F93E42909E85(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xA474BF93C34BB50D(iParam0, 1);
			}
			else
			{
				unk_0xE5AC30DA51579B11(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xED313B3795FE8D4D(iParam0, iParam2);
			unk_0x1F446578F95908B9(iParam0, fParam6);
			if (unk_0x6B4865E08E90ACC5(*uParam1))
			{
				unk_0xEB19FBC5156AAE3A(*uParam1, 7);
			}
		}
		unk_0x95DC74EF0662E765(iParam0, iParam4);
		unk_0x18E370C407910F3E(iParam0, iParam5);
		*uParam1 = unk_0xF136BF62E6F0206F(iParam0);
		if (!unk_0xDCC86F723E82125E(uParam1->f_6, 2))
		{
			if (unk_0x6B4865E08E90ACC5(*uParam1))
			{
				if (!unk_0xB8A06E7E729EED0A(iParam7))
				{
					unk_0xF318DA2E8E4F4397("MCUSTBLIP");
					unk_0x2DED6C1306496257(iParam7);
					unk_0xA133FE69F7ED3360(*uParam1);
				}
				unk_0x59A0729D503ED758(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x277ECDA23D8CCEB4(iParam0, 0))
		{
			uParam1->f_1 = unk_0x92CDA8CE01B2853F(iParam0);
			if (!unk_0xDCC86F723E82125E(uParam1->f_6, 3))
			{
				if (unk_0x6B4865E08E90ACC5(uParam1->f_1))
				{
					unk_0xEB19FBC5156AAE3A(uParam1->f_1, 7);
					unk_0x59A0729D503ED758(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x6B4865E08E90ACC5(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x77621132305B133B(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_269()
{
	struct<3> Var0;
	var uVar3;
	
	if (iLocal_2102 == 1)
	{
		if (iLocal_2097 == 0)
		{
			if (!unk_0xD5DFCA69ACAA20E3())
			{
				if (!unk_0xE71FCE10773CF7B0())
				{
					unk_0x00F9843B9C06C2E9(800);
				}
			}
			else
			{
				func_174(iLocal_2103);
			}
		}
		else if (iLocal_2097 == 3)
		{
			unk_0x2544549FDE4C3A7E(false, 0, 3000, 1, 0, 0);
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
			func_287();
			if (unk_0x57CF017E37442A64())
			{
				unk_0xCDBEE0F3B4A74754();
			}
			func_286(&uLocal_460);
			if (!func_285())
			{
				func_284(iLocal_2103, &Var0, &uVar3);
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), Var0, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), uVar3);
				unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 1);
				func_283(&uLocal_460, Var0, 50f, 0);
			}
			func_246(iLocal_2098);
			while (!func_281(&uLocal_460))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			switch (iLocal_2098)
			{
				case 0:
					func_279();
					break;
				
				case 1:
					func_278();
					break;
				
				case 2:
					func_274();
					break;
				
				case 3:
					func_270();
					break;
			}
			unk_0x8C67D2FDE360FBCA(0f);
			unk_0x0F9FDCEB321235AB(0f, 1065353216);
			unk_0x233432976E597324("DHP1_START");
			iLocal_2102 = 0;
			if (!func_285())
			{
				func_181(&uLocal_460);
			}
		}
	}
}

void func_270()
{
	if (!func_100(Local_55[0 /*2*/]))
	{
		Local_55[0 /*2*/] = unk_0xD53B4DCC7B2C8551(joaat("submersible"), -337.7228f, -2623.835f, 8.6595f, 135.24f, 1, 1);
		unk_0x8B8B003FB9DE3D8C(Local_55[0 /*2*/], 0);
		unk_0x57892FEA93664769(Local_55[0 /*2*/], 0, 1, 0);
		unk_0xD8E33295AE325D41(Local_55[0 /*2*/], 1);
		unk_0x7BFE4A3C0DBC90D4(Local_55[0 /*2*/], 1);
		unk_0x6C3FCAFEEF537750(Local_55[0 /*2*/], 0);
	}
	if (!func_100(Local_55[2 /*2*/]))
	{
		Local_55[2 /*2*/] = unk_0xD53B4DCC7B2C8551(joaat("packer"), -337.7228f, -2627.038f, 5.001f, 134.9894f, 1, 1);
		unk_0x8B8B003FB9DE3D8C(Local_55[2 /*2*/], 0);
		unk_0xC690D7B0DE1C3FD5(Local_55[2 /*2*/], 0);
		unk_0x473F2FDD337B5EEC(Local_55[2 /*2*/], 0);
		unk_0x0CE9795408B4B974(Local_55[2 /*2*/], 1);
	}
	if (!func_100(Local_55[1 /*2*/]))
	{
		Local_55[1 /*2*/] = unk_0xD53B4DCC7B2C8551(joaat("armytrailer"), -331.728f, -2621.006f, 7.8828f, 135.24f, 1, 1);
		unk_0x0CE9795408B4B974(Local_55[1 /*2*/], 1);
	}
	unk_0x042BE0D369784567(Local_55[2 /*2*/], Local_55[1 /*2*/], 0.5f);
	unk_0xF2F3B09DA25C868B(Local_55[1 /*2*/]);
	unk_0x0C6C8DBB96D3E47B(Local_55[0 /*2*/], Local_55[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!unk_0x95CCECA3948CFE7B(Local_169[4 /*2*/]))
	{
		Local_169[4 /*2*/] = unk_0x7C62BC1EB194D985(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, 1, 1, 0);
		unk_0xAD318582A32CA5D2(Local_169[4 /*2*/], Local_55[1 /*2*/], -1, Local_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (!unk_0x95CCECA3948CFE7B(Local_169[5 /*2*/]))
	{
		Local_169[5 /*2*/] = unk_0x7C62BC1EB194D985(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 1, 1, 0);
		unk_0xAD318582A32CA5D2(Local_169[5 /*2*/], Local_55[1 /*2*/], -1, Local_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (func_285())
	{
		func_271(0, -1, 1);
	}
	else
	{
		unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 0);
	}
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	if (func_273() && func_285())
	{
		while (Global_91101 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x6F9EF355924EC498(0);
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				unk_0x33A1196C1AC59747(unk_0xC8B93D94F8954288());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x95CCECA3948CFE7B(iParam0))
				{
					if (unk_0x5D42322C7DB888D0(iParam0, 0))
					{
						if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iParam0, 0))
						{
							unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iParam0, iParam1);
							unk_0x0F9FDCEB321235AB(0f, 1065353216);
							unk_0x8C67D2FDE360FBCA(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
			}
		}
		unk_0x833155A2B2692695();
		func_272(0);
	}
}

void func_272(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&(Global_91106.f_20), 13);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_91106.f_20), 13);
	}
}

int func_273()
{
	if (Global_91106 == 10 || Global_91106 == 9)
	{
		return 1;
	}
	return 0;
}

void func_274()
{
	if (!func_100(Local_55[0 /*2*/]))
	{
		Local_55[0 /*2*/] = unk_0xD53B4DCC7B2C8551(joaat("submersible"), 320.4211f, -2975.993f, -11.1896f, 2.5159f, 1, 1);
		unk_0x7203A71F4A3F15CC(Local_55[0 /*2*/], 0);
		unk_0x57892FEA93664769(Local_55[0 /*2*/], 0, 1, 0);
		unk_0xD8E33295AE325D41(Local_55[0 /*2*/], 1);
		unk_0x7BFE4A3C0DBC90D4(Local_55[0 /*2*/], 1);
		unk_0x6C3FCAFEEF537750(Local_55[0 /*2*/], 0);
	}
	if (!func_100(Local_55[2 /*2*/]))
	{
		Local_55[2 /*2*/] = unk_0xD53B4DCC7B2C8551(joaat("packer"), 297.5948f, -2950.354f, 5.0008f, 359.1976f, 1, 1);
		unk_0xC690D7B0DE1C3FD5(Local_55[2 /*2*/], 0);
		unk_0x473F2FDD337B5EEC(Local_55[2 /*2*/], 0);
		unk_0x0CE9795408B4B974(Local_55[2 /*2*/], 1);
	}
	if (!func_100(Local_55[1 /*2*/]))
	{
		Local_55[1 /*2*/] = unk_0xD53B4DCC7B2C8551(joaat("armytrailer"), 297.2917f, -2970.246f, 4.8884f, 359.0483f, 1, 1);
		unk_0x7203A71F4A3F15CC(Local_55[1 /*2*/], 0);
		unk_0x0CE9795408B4B974(Local_55[1 /*2*/], 1);
	}
	unk_0x042BE0D369784567(Local_55[2 /*2*/], Local_55[1 /*2*/], 0.5f);
	unk_0xF2F3B09DA25C868B(Local_55[1 /*2*/]);
	unk_0x0C6C8DBB96D3E47B(Local_55[0 /*2*/], Local_55[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!unk_0x95CCECA3948CFE7B(Local_169[4 /*2*/]))
	{
		Local_169[4 /*2*/] = unk_0x7C62BC1EB194D985(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, 1, 1, 0);
		unk_0xAD318582A32CA5D2(Local_169[4 /*2*/], Local_55[1 /*2*/], -1, Local_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (!unk_0x95CCECA3948CFE7B(Local_169[5 /*2*/]))
	{
		Local_169[5 /*2*/] = unk_0x7C62BC1EB194D985(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 1, 1, 0);
		unk_0xAD318582A32CA5D2(Local_169[5 /*2*/], Local_55[1 /*2*/], -1, Local_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	while (!func_275(&(Local_64[3 /*10*/]), 32, Local_55[2 /*2*/], 0, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_285())
	{
		func_271(Local_55[2 /*2*/], -1, 1);
	}
	else
	{
		unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 0);
		unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), Local_55[2 /*2*/], -1);
	}
	unk_0xCBD60E398042F554(Local_64[3 /*10*/], iLocal_394);
	unk_0x98371F41D43CDFA9(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 100f, 1, 0, 0, 0);
	iLocal_459 = 3;
	iLocal_458 = 0;
}

int func_275(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_21(iParam1))
	{
		iVar0 = func_277(iParam1);
		unk_0x7567CEA8E6B5340B(iVar0);
		if (unk_0x0845149A26DABBA5(iVar0))
		{
			if (unk_0x95CCECA3948CFE7B(*uParam0))
			{
				unk_0x26B3B761603F5232(uParam0);
			}
			if (unk_0x95CCECA3948CFE7B(iParam2) && unk_0x5D42322C7DB888D0(iParam2, 0))
			{
				*uParam0 = unk_0xDEFAEEE1A4058454(iParam2, 26, iVar0, iParam3, 0, 0);
				unk_0x9AA5A07C66C84468(*uParam0);
				func_276(*uParam0, iParam1);
				if (bParam4)
				{
					unk_0x4BBD72565A0AF033(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_276(var uParam0, int iParam1)
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
	Global_87273[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_277(int iParam0)
{
	if (!func_21(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_278()
{
	if (!unk_0x95CCECA3948CFE7B(Local_55[0 /*2*/]))
	{
		Local_55[0 /*2*/] = unk_0xD53B4DCC7B2C8551(joaat("submersible"), 1272.398f, -2982.072f, -3.2414f, 201.5542f, 1, 1);
		unk_0x7BFE4A3C0DBC90D4(Local_55[0 /*2*/], 1);
	}
	if (func_285())
	{
		func_271(Local_55[0 /*2*/], -1, 1);
	}
	else
	{
		unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 0);
		unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), Local_55[0 /*2*/], -1);
	}
	unk_0x98371F41D43CDFA9(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 100f, 1, 0, 0, 0);
	iLocal_459 = 0;
	iLocal_458 = 0;
}

void func_279()
{
	if (!unk_0x95CCECA3948CFE7B(Local_55[0 /*2*/]))
	{
		Local_55[0 /*2*/] = unk_0xD53B4DCC7B2C8551(joaat("submersible"), 1260.802f, -3006.417f, 18.3289f, 178.9076f, 1, 1);
		func_280(Local_55[0 /*2*/], 0);
		unk_0xB7A2078CD1C9A82F(Local_55[0 /*2*/], 1);
		unk_0x05BE583DF8C6A617(Local_55[0 /*2*/], 1);
		unk_0x3907D4738A2C8ABD(Local_55[0 /*2*/], 0);
		unk_0x7BFE4A3C0DBC90D4(Local_55[0 /*2*/], 1);
	}
	if (!unk_0x95CCECA3948CFE7B(Local_64[4 /*10*/]))
	{
		Local_64[4 /*10*/] = unk_0x71DD988C1B903F5D(26, joaat("s_m_m_dockwork_01"), 1229.322f, -3002.879f, 8.31861f, 270f, 1, 1);
		unk_0x5323F488E6A1B660(Local_64[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
		unk_0xF36EA652E4A6CED0(Local_64[4 /*10*/], 512, 0);
		unk_0x1296D571B761D748(Local_64[4 /*10*/], 17, 1);
		unk_0xCBD60E398042F554(Local_64[4 /*10*/], iLocal_395);
		unk_0xAAD662D7E0D59F4C(Local_64[4 /*10*/], 1);
		unk_0x49E59201877239AF(Local_64[4 /*10*/], 45f);
		unk_0x62EB4E2296BF745E(Local_64[4 /*10*/], 50f);
		unk_0xE1B7F41F33EBF9A2(Local_64[4 /*10*/], -50f);
		unk_0x63E00E88AE3C86A3(Local_64[4 /*10*/], 1);
	}
	if (!unk_0x95CCECA3948CFE7B(Local_169[0 /*2*/]))
	{
		Local_169[0 /*2*/] = unk_0x7C62BC1EB194D985(joaat("prop_ld_test_01"), 1260.692f, -3008.286f, 23.73365f, 1, 1, 0);
		unk_0xB7A2078CD1C9A82F(Local_169[0 /*2*/], 1);
	}
	if (!unk_0x95CCECA3948CFE7B(Local_169[1 /*2*/]))
	{
		Local_169[1 /*2*/] = unk_0x7C62BC1EB194D985(joaat("prop_ld_test_01"), 1260.752f, -3004.994f, 22.68315f, 1, 1, 0);
		unk_0xB7A2078CD1C9A82F(Local_169[1 /*2*/], 1);
	}
	if (!unk_0x95CCECA3948CFE7B(Local_169[2 /*2*/]))
	{
		Local_169[2 /*2*/] = unk_0x7C62BC1EB194D985(joaat("prop_sub_release"), 1249.105f, -3007.968f, 9.68718f, 1, 1, 0);
		unk_0x68931E8B45B3CA92(Local_169[2 /*2*/], 0f, 0f, 90f, 2, 1);
		unk_0xB7A2078CD1C9A82F(Local_169[2 /*2*/], 1);
	}
	if (!unk_0x95CCECA3948CFE7B(Local_169[3 /*2*/]))
	{
		Local_169[3 /*2*/] = unk_0x7C62BC1EB194D985(joaat("p_amb_phone_01"), 1229.322f, -3002.879f, 8.31861f, 1, 1, 0);
	}
	iLocal_383 = 0;
	unk_0x354516B1347786F1("docksprep1");
	while (!unk_0xCB5C09DEC6D45DA8("docksprep1"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x98371F41D43CDFA9(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 100f, 1, 0, 0, 0);
	if (func_285())
	{
		func_271(0, -1, 1);
	}
	else
	{
		unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 0);
	}
	iLocal_403 = unk_0x693EBB4F13506457();
	iLocal_459 = 0;
	iLocal_458 = 0;
}

void func_280(var uParam0, int iParam1)
{
	Global_91106.f_22[iParam1] = uParam0;
}

int func_281(var uParam0)
{
	if (func_282(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_282(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_977)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0x0845149A26DABBA5((uParam0[iVar1 /*5*/])->f_4))
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
						unk_0x4BBD72565A0AF033((uParam0[iVar1 /*5*/])->f_4);
						func_83(uParam0[iVar1 /*5*/]);
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
					if (unk_0xF9B86DC1728F1339(uParam0->f_273[iVar1 /*5*/].f_4))
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
						unk_0x3ECF1E41E6ED71D8(uParam0->f_273[iVar1 /*5*/].f_4);
						func_83(&(uParam0->f_273[iVar1 /*5*/]));
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
					if (unk_0xCB5C09DEC6D45DA8(uParam0->f_374[iVar1 /*5*/].f_4))
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
						unk_0xC83A0582E6D2E6F3(uParam0->f_374[iVar1 /*5*/].f_4);
						func_83(&(uParam0->f_374[iVar1 /*5*/]));
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
					if (unk_0xF518F3C7FACD43B7(uParam0->f_656[iVar1 /*6*/].f_5))
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
						unk_0xEF145906684E3D72(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_83(&(uParam0->f_656[iVar1 /*6*/]));
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
					if (unk_0x953ED5E61AD54581(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
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
						unk_0x28ED861DB3DADA0B(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_83(&(uParam0->f_475[iVar1 /*6*/]));
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
					if (unk_0xC0212C3CDA6939B3(uParam0->f_202[iVar1 /*7*/].f_4))
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
						unk_0x73C549370012443A(uParam0->f_202[iVar1 /*7*/].f_4);
						func_83(&(uParam0->f_202[iVar1 /*7*/]));
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
					if (unk_0xC461DA4E85A8E98B(uParam0->f_151[iVar1 /*5*/].f_4))
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
						unk_0x80454CEB5BC7C46B(uParam0->f_151[iVar1 /*5*/].f_4);
						func_83(&(uParam0->f_151[iVar1 /*5*/]));
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
					if (unk_0xC4C141A321D45FD8(uParam0->f_737[iVar1 /*5*/].f_4, 0))
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
						unk_0xF636B80CA6E4C266(uParam0->f_737[iVar1 /*5*/].f_4);
						func_83(&(uParam0->f_737[iVar1 /*5*/]));
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
					if (unk_0x7E76461B9677E81C(uParam0->f_763[iVar1 /*5*/].f_4))
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
						unk_0xBB2FAA651AEDFE3A(uParam0->f_763[iVar1 /*5*/].f_4);
						func_83(&(uParam0->f_763[iVar1 /*5*/]));
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
			if (!unk_0xB8A06E7E729EED0A(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0x1FD67147DF5A1E33(uParam0->f_687[iVar1 /*7*/].f_5);
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
								func_83(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0xC3D26E3D0D0A3FF4(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x7E76461B9677E81C(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0xC96250B7C14CF8A2(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x693EBB4F13506457();
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
							unk_0xC3D26E3D0D0A3FF4(uParam0->f_687[iVar1 /*7*/].f_5);
							func_83(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_83(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_874[iVar1 /*5*/])
			{
				if (!uParam0->f_874[iVar1 /*5*/].f_1)
				{
					if (unk_0x4F03CE19D9C59905(uParam0->f_874[iVar1 /*5*/].f_4))
					{
						uParam0->f_874[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_874[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_874[iVar1 /*5*/].f_1)
					{
						unk_0x0BAE02B8B21542DD(uParam0->f_874[iVar1 /*5*/].f_4);
						func_83(&(uParam0->f_874[iVar1 /*5*/]));
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
			if (uParam0->f_925[iVar1 /*5*/])
			{
				if (!uParam0->f_925[iVar1 /*5*/].f_1)
				{
					if (unk_0x1DD568D9C3FD27FD(uParam0->f_925[iVar1 /*5*/].f_4))
					{
						uParam0->f_925[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_925[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_925[iVar1 /*5*/].f_1)
					{
						func_83(&(uParam0->f_925[iVar1 /*5*/]));
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
					if (unk_0xF0DCEBB4ADA5D981(iVar1))
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
						unk_0x48591CDE727D1F6A(iVar1, 1);
						func_83(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_855)
		{
			if (!uParam0->f_855.f_1)
			{
				if (unk_0xB6161F3A3EDA5AA1())
				{
					uParam0->f_855.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_855.f_2)
			{
				if (uParam0->f_855.f_1)
				{
					unk_0x946BF5DFB2A71B9E();
					func_83(&(uParam0->f_855));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_859)
		{
			if (!uParam0->f_859.f_1)
			{
				if (unk_0xB47269051FAA3F42())
				{
					uParam0->f_859.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_859.f_2)
			{
				if (uParam0->f_859.f_1)
				{
					unk_0x292040D00491C9AC();
					func_83(&(uParam0->f_859));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_863 && unk_0x2394B86AAC723FB8())
		{
			if (!uParam0->f_863.f_1)
			{
				if (unk_0xADC51AA62B8218E4())
				{
					uParam0->f_863.f_1 = 1;
					if (uParam0->f_978)
					{
						unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 0);
						func_181(uParam0);
						uParam0->f_978 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_863.f_2)
			{
				unk_0x11592AACD6BAEC7F();
				func_83(&(uParam0->f_863));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_951[iVar1 /*5*/])
			{
				if (!uParam0->f_951[iVar1 /*5*/].f_1)
				{
					if (unk_0x701C5CF3E1956924(uParam0->f_951[iVar1 /*5*/].f_4))
					{
						uParam0->f_951[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_951[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_951[iVar1 /*5*/].f_1)
					{
						func_83(&(uParam0->f_951[iVar1 /*5*/]));
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
			uParam0->f_977 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_283(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_186(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_863)
	{
		if (func_88(uParam0->f_863.f_4, Param1, 0) && uParam0->f_863.f_10 == fParam4)
		{
			uParam0->f_863.f_2 = 0;
			if (!uParam0->f_863.f_1)
			{
				uParam0->f_977 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0xB28872CD570B6AE9(Param1, fParam4, iParam5);
	uParam0->f_863 = 1;
	uParam0->f_863.f_3 = unk_0x693EBB4F13506457();
	uParam0->f_863.f_4 = { Param1 };
	uParam0->f_863.f_7 = { 0f, 0f, 0f };
	uParam0->f_863.f_10 = fParam4;
	uParam0->f_977 = 1;
	return 1;
}

void func_284(int iParam0, var uParam1, var uParam2)
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

bool func_285()
{
	return unk_0xDCC86F723E82125E(Global_91106.f_20, 13);
}

void func_286(var uParam0)
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
		if (uParam0->f_874[iVar0 /*5*/])
		{
			uParam0->f_874[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_925[iVar0 /*5*/])
		{
			uParam0->f_925[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_863)
	{
		uParam0->f_863.f_2 = 1;
	}
	if (uParam0->f_855)
	{
		uParam0->f_855.f_2 = 1;
	}
	if (uParam0->f_859)
	{
		uParam0->f_859.f_2 = 1;
	}
}

void func_287()
{
	if (unk_0x57CF017E37442A64())
	{
		unk_0xDC6BA6C31425836F();
		unk_0xCDBEE0F3B4A74754();
		while (unk_0x57CF017E37442A64())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	func_187();
	if (func_100(Local_55[0 /*2*/]))
	{
		unk_0xA4E0CDB5A634F43D(Local_55[0 /*2*/], Local_166);
	}
	Global_87936.f_357 = 0;
	if (iLocal_384)
	{
		unk_0x53E47E70BB9DD107(&iLocal_439);
		iLocal_384 = 0;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (8 - 1))
	{
		func_295(&(Local_64[iLocal_382 /*10*/].f_2));
		if (unk_0x95CCECA3948CFE7B(Local_64[iLocal_382 /*10*/]) && !unk_0x2DC9BA2299B45EA6(Local_64[iLocal_382 /*10*/]))
		{
			if (unk_0x277ECDA23D8CCEB4(Local_64[iLocal_382 /*10*/], 0))
			{
				unk_0x7F2BF91457BF2ABC(Local_64[iLocal_382 /*10*/], unk_0x44C17CCB85A88A1F(unk_0x275BEBE583A163B5(Local_64[iLocal_382 /*10*/], 0), 1) + Vector(0f, -2f, 0f));
			}
			func_294(&(Local_64[iLocal_382 /*10*/]));
		}
		iLocal_382++;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (4 - 1))
	{
		if (unk_0x95CCECA3948CFE7B(Local_55[iLocal_382 /*2*/]))
		{
			func_293(Local_55[iLocal_382 /*2*/]);
			func_290(&(Local_55[iLocal_382 /*2*/]));
		}
		iLocal_382++;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (9 - 1))
	{
		if (unk_0x95CCECA3948CFE7B(Local_169[iLocal_382 /*2*/]))
		{
			func_289(&(Local_169[iLocal_382 /*2*/]));
		}
		iLocal_382++;
	}
	if (unk_0xCFB07F483F9F95C1(uLocal_380))
	{
		unk_0x939ED2D95F7BD8A8(uLocal_380, 0);
	}
	func_262();
	func_36(&Local_188, 1, 0);
	func_288(72);
	func_176(1, 0, 0, 3000, 0);
	unk_0xFD62177C7242216E(1f);
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		unk_0xE6827001F6663087(unk_0xA34E7C2A5118D638());
		unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
		unk_0x98371F41D43CDFA9(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 300f, 1, 0, 0, 0);
	}
	unk_0x98371F41D43CDFA9(1219.186f, -2977.9f, 4.8653f, 300f, 1, 0, 0, 0);
	iLocal_403 = unk_0x693EBB4F13506457();
	iLocal_386 = 0;
	iLocal_404 = 0;
	iLocal_399 = 0;
	iLocal_400 = 0;
	iLocal_401 = 0;
	iLocal_458 = 0;
	iLocal_387 = 0;
	func_193(6, 0);
	if (unk_0x748CA8A0F3783C60("PO1_08_sub_waterplane"))
	{
		func_181(&uLocal_460);
		unk_0x4030ACE8AD10EADA("PO1_08_sub_waterplane");
	}
	unk_0x8F9EDB48A60C0C79();
}

void func_288(int iParam0)
{
	if (Global_88361 != -1)
	{
		if (iParam0 == Global_88361)
		{
			Global_88365 = 1;
			return;
		}
	}
}

void func_289(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (unk_0xE33A9405F8300B78(*uParam0))
		{
			unk_0xB81176DFD2611E8B(*uParam0, 1, 1);
		}
		unk_0xA278ECBE30D8AE4F(uParam0);
	}
}

void func_290(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(*uParam0))
		{
			unk_0xFD816D0E738EB817(*uParam0, 1, 0);
		}
		if (func_292(*uParam0))
		{
			if (unk_0xD28A89C669EAD2E4(*uParam0) && unk_0x1F59F772AA90087D(*uParam0, 1))
			{
				if (func_291(unk_0xC8B93D94F8954288()))
				{
					if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), *uParam0, 0))
					{
						unk_0xEF84021B2AB5E334(uParam0);
						return;
					}
				}
				unk_0x95F5F15D238A7F1C(uParam0);
			}
		}
		else
		{
			if (func_291(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), *uParam0, 0))
				{
					unk_0xEF84021B2AB5E334(uParam0);
					return;
				}
			}
			unk_0x95F5F15D238A7F1C(uParam0);
		}
	}
}

int func_291(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0)
{
	if (func_291(iParam0))
	{
		if (unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			if (!unk_0x79E944054F6C9DCD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_293(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			iVar0 = unk_0xC0ADAF0814175B68(iParam0, -1);
			if (unk_0x95CCECA3948CFE7B(iVar0))
			{
				if (!unk_0x2DC9BA2299B45EA6(iVar0))
				{
					unk_0xBA73099E237C7E5E(iVar0);
				}
				else
				{
					unk_0x26B3B761603F5232(&iVar0);
				}
			}
			iVar2 = unk_0x7EFD275DF858497F(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!unk_0x74CAAD9E721B315D(iParam0, iVar1))
				{
					iVar0 = unk_0xC0ADAF0814175B68(iParam0, iVar1);
					if (unk_0x95CCECA3948CFE7B(iVar0))
					{
						if (!unk_0x2DC9BA2299B45EA6(iVar0))
						{
							unk_0xBA73099E237C7E5E(iVar0);
						}
						else
						{
							unk_0x26B3B761603F5232(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_294(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(*uParam0))
		{
			unk_0x05BE583DF8C6A617(*uParam0, 0);
		}
		if (!unk_0xD28A89C669EAD2E4(*uParam0))
		{
			unk_0xFD816D0E738EB817(*uParam0, 1, 0);
		}
		unk_0x26B3B761603F5232(uParam0);
	}
}

void func_295(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x6B4865E08E90ACC5(*uParam0))
	{
		unk_0x5356E82C1E5E0C44(uParam0);
		bVar0 = true;
	}
	if (unk_0x6B4865E08E90ACC5(uParam0->f_1))
	{
		unk_0x5356E82C1E5E0C44(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x95CCECA3948CFE7B(uParam0->f_7))
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_7))
		{
			if (unk_0x4E12F93E42909E85(uParam0->f_7))
			{
				unk_0xA474BF93C34BB50D(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_296()
{
	switch (iLocal_2097)
	{
		case 1:
			iLocal_2097 = 2;
			iLocal_2099 = -1;
			break;
		
		case 2:
			iLocal_2097 = 3;
			iLocal_2099 = 0;
			iLocal_2098 = iLocal_2100;
			break;
		
		case 3:
			iLocal_2100 = -1;
			iLocal_2097 = 0;
			break;
		
		case 0:
			if ((unk_0x693EBB4F13506457() - iLocal_2101) > 2500)
			{
				iLocal_2101 = unk_0x693EBB4F13506457();
			}
			break;
	}
}

void func_297(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x57CF017E37442A64())
	{
		if (unk_0x35081E98CA82CBB4())
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!unk_0xB8A06E7E729EED0A(uParam0[iVar0 /*82*/]))
				{
					iVar1 = 0;
					while (iVar1 < 12)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] != -1 && (uParam0[iVar0 /*82*/])->f_17[iVar1] != -1)
						{
							unk_0x4C385591266379A9(uParam0[iVar0 /*82*/], iVar1, (uParam0[iVar0 /*82*/])->f_17.f_13[iVar1], (uParam0[iVar0 /*82*/])->f_17[iVar1], (uParam0[iVar0 /*82*/])->f_16);
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
							unk_0x131748CFDC209107(uParam0[iVar0 /*82*/], iVar2, (uParam0[iVar0 /*82*/])->f_17.f_39[iVar2], (uParam0[iVar0 /*82*/])->f_17.f_49[iVar2], (uParam0[iVar0 /*82*/])->f_16);
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
		func_298(uParam0);
	}
}

void func_298(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xB8A06E7E729EED0A(uParam0[iVar0 /*82*/]))
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

void func_299(var uParam0)
{
	func_282(uParam0);
}

void func_300()
{
	struct<3> Var0;
	var uVar3;
	
	if (func_273() || func_7(0))
	{
		if (func_273())
		{
			iLocal_2103 = func_304();
			if (Global_85616)
			{
				iLocal_2103++;
			}
			if (iLocal_2103 >= 3)
			{
				iLocal_2103 = 3;
			}
		}
		else if (func_7(0))
		{
			iLocal_2103 = 0;
		}
		if (func_273())
		{
			func_284(iLocal_2103, &Var0, &uVar3);
			func_303(Var0, uVar3, 1, 0);
		}
		unk_0xC1B1E9A034A63A62(0);
		iLocal_2102 = 1;
	}
	else
	{
		func_101(0, "STAGE 0: REACH SUB", 0, 0, 0, 1);
		iLocal_2098 = 0;
		func_246(0);
	}
	iLocal_2099 = 0;
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
	}
	unk_0x23A31CB3935D0652("EXTRASUNNY");
	unk_0x6FBE015148D1ABB0(unk_0xA34E7C2A5118D638(), 0);
	unk_0xC2389B725A8A1CD3(iLocal_394);
	unk_0xC2389B725A8A1CD3(iLocal_395);
	unk_0x4A606A8BE6924115("REL_BUDDY", &iLocal_394);
	unk_0x4A606A8BE6924115("rel_dock", &iLocal_395);
	unk_0x6CCF5F545348D54E(5, iLocal_395, joaat("player"));
	unk_0x6CCF5F545348D54E(1, joaat("player"), iLocal_394);
	unk_0x6CCF5F545348D54E(1, iLocal_394, joaat("player"));
	unk_0x6CCF5F545348D54E(1, iLocal_395, iLocal_395);
	if (!unk_0x95CCECA3948CFE7B(Local_55[0 /*2*/]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936[0]))
		{
			unk_0xFD816D0E738EB817(Global_87936[0], 1, 1);
			Local_55[0 /*2*/] = Global_87936[0];
			func_280(Local_55[0 /*2*/], 0);
			unk_0x7BFE4A3C0DBC90D4(Local_55[0 /*2*/], 1);
		}
	}
	if (!unk_0x95CCECA3948CFE7B(Local_64[4 /*10*/]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[0]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_9[0], 1, 1);
			Local_64[4 /*10*/] = Global_87936.f_9[0];
			unk_0xCBD60E398042F554(Local_64[4 /*10*/], iLocal_395);
			unk_0xC778754E36F3FFD6(Local_64[4 /*10*/], 208, 1);
			unk_0x49E59201877239AF(Local_64[4 /*10*/], 45f);
			unk_0x62EB4E2296BF745E(Local_64[4 /*10*/], 50f);
			unk_0xE1B7F41F33EBF9A2(Local_64[4 /*10*/], -50f);
		}
	}
	if (!unk_0x95CCECA3948CFE7B(Local_169[0 /*2*/]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_28[0]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_28[0], 1, 1);
			Local_169[0 /*2*/] = Global_87936.f_28[0];
		}
	}
	if (!unk_0x95CCECA3948CFE7B(Local_169[1 /*2*/]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_28[1]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_28[1], 1, 1);
			Local_169[1 /*2*/] = Global_87936.f_28[1];
		}
	}
	if (!unk_0x95CCECA3948CFE7B(Local_169[2 /*2*/]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_28[2]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_28[2], 1, 1);
			Local_169[2 /*2*/] = Global_87936.f_28[2];
		}
	}
	if (!unk_0x95CCECA3948CFE7B(Local_169[3 /*2*/]))
	{
		if (unk_0x95CCECA3948CFE7B(Global_87936.f_28[3]))
		{
			unk_0xFD816D0E738EB817(Global_87936.f_28[3], 1, 1);
			Local_169[3 /*2*/] = Global_87936.f_28[3];
		}
	}
	if (Global_87936.f_357)
	{
		if (unk_0x346E665948E10CA1(&(Global_87936.f_37[0])))
		{
			unk_0xB960F606CDB1D13A(Global_87936.f_37[0], 1, 1);
			Local_145[0 /*5*/] = Global_87936.f_37[0];
			Global_87936.f_37[0] = 0;
		}
		if (unk_0x346E665948E10CA1(&(Global_87936.f_37[1])))
		{
			unk_0xB960F606CDB1D13A(Global_87936.f_37[1], 1, 1);
			Local_145[1 /*5*/] = Global_87936.f_37[1];
			Global_87936.f_37[1] = 0;
		}
		if (unk_0x346E665948E10CA1(&(Global_87936.f_37[2])))
		{
			unk_0xB960F606CDB1D13A(Global_87936.f_37[2], 1, 1);
			Local_145[2 /*5*/] = Global_87936.f_37[2];
			Global_87936.f_37[2] = 0;
		}
		if (unk_0x346E665948E10CA1(&(Global_87936.f_37[3])))
		{
			unk_0xB960F606CDB1D13A(Global_87936.f_37[3], 1, 1);
			Local_145[3 /*5*/] = Global_87936.f_37[3];
			Global_87936.f_37[3] = 0;
		}
		iLocal_383 = 1;
	}
	else
	{
		iLocal_383 = 0;
	}
	unk_0xF3AC452C34BF0E13("DOCKP1", 0);
	while (!unk_0xF0DCEBB4ADA5D981(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_100(unk_0xC8B93D94F8954288()))
	{
		func_201(&uLocal_213, 0, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
	}
	func_302(1);
	unk_0x60B57BC5E51D2074(2);
	unk_0xFD62177C7242216E(0.5f);
	func_301(72);
}

void func_301(int iParam0)
{
	Global_87294 = 0;
	switch (iParam0)
	{
		case 72:
			func_239(2);
			func_239(4);
			break;
		
		case 73:
			func_239(0);
			func_239(1);
			func_239(7);
			break;
		
		case 92:
			func_239(10);
			func_239(9);
			func_239(13);
			func_239(6);
			break;
		
		case 68:
			func_239(11);
			break;
		
		case 78:
			func_239(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_239(3);
			break;
		
		default:
			break;
	}
}

void func_302(bool bParam0)
{
	if (bParam0)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
}

void func_303(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_273())
	{
		unk_0x6ECAEE4901F465A1(0);
		unk_0x77621132305B133B(&(Global_91106.f_20), 2);
		unk_0x6F9EF355924EC498(1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
		}
		Global_91102 = { Param0 };
		Global_91105 = uParam3;
		Global_91101 = 1;
		if (iParam4 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_91106.f_20), 14);
		}
		else
		{
			unk_0x77621132305B133B(&(Global_91106.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_91106.f_20), 24);
		}
		else
		{
			unk_0x77621132305B133B(&(Global_91106.f_20), 24);
		}
		func_272(1);
	}
}

int func_304()
{
	if (!Global_91106 == 10 && !Global_91106 == 9)
	{
		return 0;
	}
	return Global_91106.f_2;
}

void func_305()
{
	if (unk_0x57CF017E37442A64())
	{
		unk_0xDC6BA6C31425836F();
		unk_0xCDBEE0F3B4A74754();
	}
	if (func_100(unk_0xC8B93D94F8954288()))
	{
		if (func_100(Local_55[0 /*2*/]))
		{
			if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Local_55[0 /*2*/], 0))
			{
				unk_0x7F2BF91457BF2ABC(unk_0xC8B93D94F8954288(), unk_0x44C17CCB85A88A1F(Local_55[0 /*2*/], 1) + Vector(2f, 0f, 0f));
			}
		}
	}
	func_187();
	if (func_100(Local_55[0 /*2*/]))
	{
		unk_0xA4E0CDB5A634F43D(Local_55[0 /*2*/], Local_166);
	}
	Global_87936.f_357 = 0;
	if (iLocal_384)
	{
		unk_0x53E47E70BB9DD107(&iLocal_439);
		iLocal_384 = 0;
	}
	if (unk_0xCFB07F483F9F95C1(uLocal_380))
	{
		unk_0x939ED2D95F7BD8A8(uLocal_380, 0);
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (8 - 1))
	{
		if (func_100(Local_64[iLocal_382 /*10*/]))
		{
			func_295(&(Local_64[iLocal_382 /*10*/].f_2));
			if (unk_0x6B4865E08E90ACC5(Local_64[iLocal_382 /*10*/].f_1))
			{
				unk_0x5356E82C1E5E0C44(&(Local_64[iLocal_382 /*10*/].f_1));
			}
			if (unk_0x5BE4C4CB01F0877F(Local_64[iLocal_382 /*10*/]))
			{
				unk_0x5980997C9ACA0572(Local_64[iLocal_382 /*10*/]);
			}
			if (Local_64[iLocal_382 /*10*/] != unk_0xC8B93D94F8954288())
			{
				func_9(&(Local_64[iLocal_382 /*10*/]), 1, 0, 1);
			}
		}
		iLocal_382++;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (4 - 1))
	{
		if (unk_0x6B4865E08E90ACC5(Local_55[iLocal_382 /*2*/].f_1))
		{
			unk_0x5356E82C1E5E0C44(&(Local_55[iLocal_382 /*2*/].f_1));
		}
		if (func_100(Local_55[iLocal_382 /*2*/]))
		{
			if (iLocal_382 != 0)
			{
				func_267(&(Local_55[iLocal_382 /*2*/]));
			}
		}
		iLocal_382++;
	}
	func_307(0);
	iLocal_382 = 0;
	while (iLocal_382 <= (9 - 1))
	{
		if (unk_0x95CCECA3948CFE7B(Local_169[iLocal_382 /*2*/]))
		{
			if (Local_169[iLocal_382 /*2*/] == Local_169[4 /*2*/] || Local_169[iLocal_382 /*2*/] == Local_169[5 /*2*/])
			{
				func_84(&(Local_169[iLocal_382 /*2*/]), 1);
			}
			else
			{
				func_289(&(Local_169[iLocal_382 /*2*/]));
			}
		}
		iLocal_382++;
	}
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
	}
	unk_0x6FBE015148D1ABB0(unk_0xA34E7C2A5118D638(), 1);
	unk_0xC1C36EDF2DACDE51();
	unk_0xFD62177C7242216E(1f);
	unk_0x60B57BC5E51D2074(5);
	unk_0xB7709513BF7C1AC0(1);
	unk_0xB1DF6C0157E453DE(1);
	func_302(0);
	func_194(&Local_188, 0);
	func_306();
	if (unk_0x748CA8A0F3783C60("PO1_08_sub_waterplane"))
	{
		unk_0x4030ACE8AD10EADA("PO1_08_sub_waterplane");
	}
	unk_0xA4E0D8FD51F2A6F7();
}

void func_306()
{
	Global_87294 = 0;
}

void func_307(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_100032, unk_0xC4E68AF0B559FAC4(), 24);
		Global_100026 = 1;
	}
	else
	{
		StringCopy(&Global_100032, "NULL", 24);
		Global_100026 = 0;
	}
}

void func_308()
{
	int iVar0;
	
	if (unk_0xD838CD843F6FE18B("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_100976.f_7719 || func_7(0))
	{
		if (!func_309())
		{
			iVar0 = func_5();
			if (iVar0 != -1)
			{
				if (!func_93(iVar0))
				{
					return;
				}
				unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_98();
		}
	}
}

int func_309()
{
	if (((Global_91106 == 13 || Global_91106 == 10) || Global_91106 == 11) || Global_91106 == 12)
	{
		return 0;
	}
	return 1;
}

void func_310()
{
	func_87(787.0854f, -2973.872f, 5.0585f, 256.91f);
}

