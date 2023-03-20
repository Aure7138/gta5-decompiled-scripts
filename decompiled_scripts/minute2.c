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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	struct<3> Local_22 = { 0, 0, 0 } ;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = -1;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 1000;
	var uLocal_46 = 1000;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	struct<61> Local_96 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_157[4] = { 0, 0, 0, 0 };
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166[4] = { 0, 0, 0, 0 };
	int iLocal_171 = 0;
	var uLocal_172[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_183 = 0;
	int iLocal_184[4] = { 0, 0, 0, 0 };
	var uLocal_189[4] = { 0, 0, 0, 0 };
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_225[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_241 = 15;
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
	var uLocal_287 = 15;
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
	var uLocal_303[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_319[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_335 = 15;
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
	var uLocal_381 = 15;
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
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 16;
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
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	float fLocal_573 = 0f;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	var uLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	struct<3> Local_630[3];
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	struct<3> Local_646[55];
	float fLocal_812 = 0f;
	float fLocal_813 = 0f;
	float fLocal_814 = 0f;
	float fLocal_815 = 0f;
	float fLocal_816 = 0f;
	float fLocal_817 = 0f;
	float fLocal_818 = 0f;
	float fLocal_819 = 0f;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	var uLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	int iLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880 = 0;
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	int iLocal_886 = 0;
	int iLocal_887 = 0;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	struct<3> Local_896 = { 0, 0, 0 } ;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	int iLocal_918 = 0;
	int iLocal_919 = 0;
	int iLocal_920 = 0;
	int iLocal_921 = 0;
	int iLocal_922 = 0;
	char* sLocal_923 = NULL;
	int iLocal_924 = 0;
	int iLocal_925 = 0;
	int iLocal_926 = 0;
	int iLocal_927 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	uLocal_92 = func_562(56);
	uLocal_93 = func_562(57);
	uLocal_94 = func_562(59);
	iLocal_95 = joaat("pranger");
	fLocal_573 = 12f;
	Local_96 = { ScriptParam_0 };
	func_560(&Local_96);
	unk_0x5DB716F779D8C70F(1);
	if (unk_0x524AF15206846700(19))
	{
		func_559("Force cleanup [TERMINATING]");
		func_541(1);
		func_537();
	}
	if (func_536())
	{
		Global_69734 = 1;
		iLocal_91 = 0;
		while (!func_533(&Local_96))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_532(&Local_96, 0, 1);
		Global_69734 = 0;
	}
	func_530(56, 2, 0);
	func_530(57, 2, 0);
	if (unk_0xD2CFFE76B625AE55(Local_96.f_35[0]))
	{
		unk_0x37B592C0F74990D2(Local_96.f_35[0], 1);
	}
	func_528();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x14CA049761F06FFB("SF_AAW", 0);
		func_512(Local_96.f_9, 0, 0, 0, 0, 0);
		if (func_511(unk_0x27D769C59BC9D030()))
		{
			unk_0xDAE452D7515031D9(unk_0x4D29100D094E5511());
		}
		if (iLocal_927 != 1 && iLocal_927 != 0)
		{
			if (iLocal_927 != 16)
			{
				func_510();
			}
			if (!func_509())
			{
				func_506();
			}
			if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
			{
				func_505(&(uLocal_189[iLocal_574]));
			}
		}
		func_504();
		func_503();
		func_502();
		switch (iLocal_927)
		{
			case 0:
				func_434();
				break;
			
			case 1:
				func_428();
				break;
			
			case 2:
				func_427();
				break;
			
			case 3:
				func_423();
				break;
			
			case 5:
				func_421();
				break;
			
			case 6:
				func_412();
				break;
			
			case 7:
				func_347();
				break;
			
			case 8:
				func_278();
				break;
			
			case 15:
				func_233();
				break;
			
			case 17:
				func_19();
				break;
			
			case 16:
				func_3();
				break;
		}
		if (iLocal_927 != 16)
		{
			func_2();
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
}

void func_3()
{
	switch (iLocal_925)
	{
		case 0:
			unk_0x68BD4F826EFDDC53("MM2_FAIL");
			func_18();
			unk_0x8ACEB4FC9E9EE225();
			unk_0x5BD150B52CE8D356(1);
			func_16();
			if (!unk_0x75CB9E30BA492FF0(sLocal_923))
			{
				func_14(sLocal_923, 1);
			}
			else
			{
				func_541(1);
			}
			iLocal_925 = 1;
			break;
		
		case 1:
			if (func_13())
			{
				func_4();
				func_537();
			}
			break;
	}
}

void func_4()
{
	func_10();
	iLocal_574 = 0;
	unk_0x8ACEB4FC9E9EE225();
	iLocal_926 = 0;
	func_505(&(iLocal_184[0]));
	func_505(&(iLocal_184[1]));
	func_505(&(iLocal_184[2]));
	func_505(&(uLocal_189[0]));
	func_505(&(uLocal_189[1]));
	func_505(&(uLocal_189[2]));
	func_505(&iLocal_194);
	func_505(&iLocal_195);
	func_505(&iLocal_196);
	func_9(&(Local_96.f_28[0]));
	func_9(&(Local_96.f_28[1]));
	func_9(&(uLocal_166[0]));
	func_9(&(uLocal_166[1]));
	func_9(&(uLocal_166[2]));
	func_9(&(uLocal_172[0]));
	func_9(&(uLocal_172[1]));
	func_9(&iLocal_171);
	func_9(&uLocal_183);
	func_8(&uLocal_164);
	func_8(&(uLocal_157[0]));
	func_8(&(uLocal_157[1]));
	func_8(&(uLocal_157[2]));
	func_8(&iLocal_162);
	func_8(&iLocal_163);
	func_7(&uLocal_406);
	if (func_5(Local_96.f_35[0]))
	{
	}
	unk_0x5C439465C03F116C(Local_96.f_35[0]);
	func_8(&(Local_96.f_35[0]));
	iLocal_822 = 0;
	iLocal_823 = 0;
	iLocal_835 = 0;
	iLocal_836 = 0;
	iLocal_587 = 0;
	iLocal_588 = 0;
	iLocal_837 = 0;
	iLocal_838 = 0;
	iLocal_839 = 0;
	iLocal_825 = 0;
	iLocal_826 = 0;
	iLocal_831 = 0;
	iLocal_840 = 0;
	iLocal_841 = 0;
	iLocal_842 = 0;
	iLocal_824 = 0;
	iLocal_590 = 0;
	iLocal_845 = 0;
	iLocal_846 = 0;
	iLocal_581 = 0;
	iLocal_849 = 0;
	iLocal_593 = 0;
	iLocal_595 = 0;
	iLocal_850 = 0;
	iLocal_851 = 0;
	iLocal_598 = 0;
	iLocal_855 = 0;
	iLocal_600 = 0;
	iLocal_601 = 0;
	iLocal_856 = 0;
	iLocal_858 = 0;
	iLocal_859 = 0;
	iLocal_860 = 0;
	fLocal_819 = 0f;
	iLocal_603 = 0;
	iLocal_861 = 0;
	iLocal_862 = 0;
	iLocal_609 = 0;
	iLocal_608 = 0;
	iLocal_612 = 0;
	iLocal_863 = 0;
	iLocal_864 = 0;
	iLocal_865 = 0;
	iLocal_866 = 0;
	iLocal_867 = 0;
	iLocal_868 = 0;
	iLocal_869 = 0;
	iLocal_614 = 0;
	iLocal_870 = 0;
	iLocal_871 = 0;
	iLocal_580 = 0;
	iLocal_872 = 0;
	iLocal_873 = 0;
	iLocal_874 = 0;
	iLocal_875 = 0;
	iLocal_876 = 0;
	iLocal_882 = 0;
	iLocal_883 = 0;
	iLocal_616 = 0;
	iLocal_618 = 0;
	iLocal_884 = 0;
	iLocal_882 = 0;
	iLocal_883 = 0;
	iLocal_884 = 0;
	iLocal_885 = 0;
	iLocal_886 = 0;
	iLocal_887 = 0;
	iLocal_888 = 0;
	iLocal_891 = 0;
	iLocal_919 = 0;
	iLocal_921 = 0;
	iLocal_903 = 0;
	iLocal_904 = 0;
	iLocal_905 = 0;
	iLocal_906 = 0;
	iLocal_907 = 0;
	iLocal_908 = 0;
	iLocal_909 = 0;
	iLocal_910 = 0;
	iLocal_911 = 0;
	iLocal_912 = 0;
	iLocal_913 = 0;
	iLocal_857 = 0;
	iLocal_914 = 0;
	iLocal_915 = 0;
	iLocal_918 = 0;
	iLocal_852 = 0;
	iLocal_853 = 0;
	iLocal_854 = 0;
	iLocal_924 = 0;
	unk_0x433C209504FBC7EE(&uLocal_199);
	unk_0x433C209504FBC7EE(&uLocal_200);
	unk_0x433C209504FBC7EE(&uLocal_201);
	unk_0x433C209504FBC7EE(&uLocal_202);
	unk_0x433C209504FBC7EE(&uLocal_203);
	unk_0x433C209504FBC7EE(&uLocal_204);
	unk_0x433C209504FBC7EE(&uLocal_205);
	unk_0x433C209504FBC7EE(&uLocal_206);
}

int func_5(int iParam0)
{
	if (func_6(iParam0))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
		{
			if (!unk_0xFA7888B344869306(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (unk_0x738E93147C5CBA85(*uParam0))
		{
			unk_0xE223D49B3EFFD3E3(*uParam0, 1, 1);
		}
		unk_0x7C0FE14555841C1E(uParam0);
	}
}

void func_8(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(*iParam0))
	{
		if (!unk_0xE24B37600DCB21FC(*iParam0))
		{
			unk_0xAF3355298F537BB0(*iParam0, 1, 0);
		}
		if (func_5(*iParam0))
		{
			if (unk_0xE24B37600DCB21FC(*iParam0) && unk_0xFF65D7BC656BA68E(*iParam0, 1))
			{
				if (func_6(unk_0x27D769C59BC9D030()))
				{
					if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), *iParam0, 0))
					{
						unk_0x9846B4D56971A958(iParam0);
						return;
					}
				}
				unk_0xF6E128C391C16F7C(iParam0);
			}
		}
		else
		{
			if (func_6(unk_0x27D769C59BC9D030()))
			{
				if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), *iParam0, 0))
				{
					unk_0x9846B4D56971A958(iParam0);
					return;
				}
			}
			unk_0xF6E128C391C16F7C(iParam0);
		}
	}
}

void func_9(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(*iParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(*iParam0, 0))
		{
			unk_0xD6FF698E7BC1C003(*iParam0, 0);
		}
		if (!unk_0xE24B37600DCB21FC(*iParam0))
		{
			unk_0xAF3355298F537BB0(*iParam0, 1, 0);
		}
		unk_0xF6ADC11BDB5ECA41(iParam0);
	}
}

void func_10()
{
	unk_0x0049DE0B34213B12(joaat("emperor2"));
	unk_0x0049DE0B34213B12(joaat("surfer2"));
	unk_0x0049DE0B34213B12(joaat("bison"));
	unk_0x0049DE0B34213B12(joaat("tornado3"));
	unk_0x0049DE0B34213B12(joaat("stanier"));
	unk_0x0049DE0B34213B12(joaat("mesa"));
	func_12(&(uLocal_225[0]), 1, 0, 1);
	func_12(&(uLocal_225[1]), 1, 0, 1);
	func_12(&(uLocal_225[2]), 1, 0, 1);
	func_12(&(uLocal_225[3]), 1, 0, 1);
	func_12(&(uLocal_225[4]), 1, 0, 1);
	func_12(&(uLocal_225[5]), 1, 0, 1);
	func_12(&(uLocal_225[6]), 1, 0, 1);
	func_12(&(uLocal_225[7]), 1, 0, 1);
	func_12(&(uLocal_225[8]), 1, 0, 1);
	func_12(&(uLocal_225[9]), 1, 0, 1);
	func_12(&(uLocal_225[10]), 1, 0, 1);
	func_11(&(uLocal_209[0]));
	func_11(&(uLocal_209[1]));
	func_11(&(uLocal_209[2]));
	func_11(&(uLocal_209[3]));
	func_11(&(uLocal_209[4]));
	func_11(&(uLocal_209[5]));
	func_11(&(uLocal_209[6]));
	func_11(&(uLocal_209[7]));
	func_11(&(uLocal_209[8]));
	func_11(&(uLocal_209[9]));
	func_11(&(uLocal_209[10]));
	func_12(&(uLocal_319[0]), 1, 0, 1);
	func_12(&(uLocal_319[1]), 1, 0, 1);
	func_12(&(uLocal_319[2]), 1, 0, 1);
	func_12(&(uLocal_319[3]), 1, 0, 1);
	func_12(&(uLocal_319[4]), 1, 0, 1);
	func_12(&(uLocal_319[5]), 1, 0, 1);
	func_12(&(uLocal_319[6]), 1, 0, 1);
	func_12(&(uLocal_319[7]), 1, 0, 1);
	func_12(&(uLocal_319[8]), 1, 0, 1);
	func_12(&(uLocal_319[9]), 1, 0, 1);
	func_12(&(uLocal_319[10]), 1, 0, 1);
	func_11(&(uLocal_303[0]));
	func_11(&(uLocal_303[1]));
	func_11(&(uLocal_303[2]));
	func_11(&(uLocal_303[3]));
	func_11(&(uLocal_303[4]));
	func_11(&(uLocal_303[5]));
	func_11(&(uLocal_303[6]));
	func_11(&(uLocal_303[7]));
	func_11(&(uLocal_303[8]));
	func_11(&(uLocal_303[9]));
	func_11(&(uLocal_303[10]));
}

void func_11(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		unk_0x2006A8C1BA2AFE80(*uParam0, 0);
		if (unk_0xE24B37600DCB21FC(*uParam0) && unk_0xFF65D7BC656BA68E(*uParam0, 1))
		{
			unk_0x9846B4D56971A958(uParam0);
		}
	}
}

void func_12(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (!unk_0xE4F7206742848BAF(*uParam0))
		{
			unk_0xD6FF698E7BC1C003(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEC500F39EFE9D522(*uParam0);
			}
			unk_0x94DC76C688E7D222(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xA8ED9F72DC442242(*uParam0, 0);
			}
		}
		unk_0x7E8F7C1D05860F53(uParam0);
	}
}

int func_13()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91278 == 7 || Global_91278 == 8)
	{
		return 1;
	}
	return 0;
}

void func_14(char* sParam0, bool bParam1)
{
	func_15(sParam0);
	func_541(bParam1);
}

void func_15(char* sParam0)
{
	if (!unk_0x75CB9E30BA492FF0(sParam0))
	{
		if (unk_0x1DA63F254F38C8A7(sParam0) <= 16)
		{
			StringCopy(&Global_69721, sParam0, 16);
			StringCopy(&Global_69725, "", 16);
			if (unk_0x49279CC117071237())
			{
				unk_0xFD60997054FB930F();
			}
		}
	}
}

void func_16()
{
	Global_14578 = 0;
	func_17();
}

void func_17()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
	}
}

void func_18()
{
	func_505(&(iLocal_184[0]));
	func_505(&(iLocal_184[1]));
	func_505(&(iLocal_184[2]));
	func_505(&(iLocal_184[3]));
	func_505(&(uLocal_189[0]));
	func_505(&(uLocal_189[1]));
	func_505(&(uLocal_189[2]));
	func_505(&(uLocal_189[3]));
	func_505(&iLocal_194);
	func_505(&iLocal_195);
	func_505(&iLocal_196);
	func_505(&iLocal_197);
}

void func_19()
{
	if (!func_232())
	{
		if ((!iLocal_886 && func_5(Local_96.f_35[0])) && func_231(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 1) < 35f)
		{
			if (unk_0xA0F74982C6AAA9D4() > iLocal_599 + 3000)
			{
				if (func_219(&uLocal_408, "MIN2AU", "MIN2_DRIVOFF", 7, 0, 0, 0))
				{
					iLocal_886 = 1;
				}
			}
		}
	}
	if (func_5(Local_96.f_35[0]))
	{
		if (func_231(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 1) > 150f || unk_0xA0F74982C6AAA9D4() > iLocal_599 + 20000)
		{
			func_20();
		}
	}
}

void func_20()
{
	func_21(93, 1);
	func_537();
}

void func_21(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_217();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_100241[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_100241[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_100241[iVar0 /*10*/].f_6)
	{
		return;
	}
	func_188(iVar0, 0);
	unk_0x26545538B51562AD(&Global_69737, 1);
	if (Global_100241[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		func_187(&(Global_100241[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 0, 0);
			unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 0);
			unk_0x7D2EAD19B9630AC7(5000);
		}
	}
	func_175(iVar0, 1, 0, 0);
	func_174(0, 0);
	MemCopy(&uVar1, {func_172(iVar0)}, 4);
	func_169(&uVar1, func_170());
	func_49();
	if (unk_0xF426A5DE932B3BEE(Global_101154.f_8706.f_25, 3))
	{
		func_48();
	}
	func_30();
	if (iParam0 == 210 || iParam0 == 211)
	{
		func_24(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		func_24(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		func_24(iParam0, 0, 0);
	}
	func_22();
}

int func_22()
{
	if (func_23(0))
	{
		return 0;
	}
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return 0;
	}
	Global_91317.f_10++;
	return 1;
}

bool func_23(bool bParam0)
{
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
}

void func_24(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_28((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = iParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_25();
	}
}

void func_25()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 = (fVar1 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100891++;
					fVar2 = (fVar2 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100892++;
					fVar3 = (fVar3 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100893++;
					fVar4 = (fVar4 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100894++;
					fVar5 = (fVar5 + (Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100895++;
					fVar6 = (fVar6 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100896++;
					fVar7 = (fVar7 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || (Global_100877 * 10 / Global_100894) < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!unk_0xF426A5DE932B3BEE(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					unk_0x1C7E45166E04C12C(joaat("num_rndevents_completed"), Global_100877, 0);
					unk_0x26545538B51562AD(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	unk_0xE2A8B026FA4DDFFF(joaat("num_missions_completed"), Global_100890, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_missions_available"), Global_100873, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_minigames_completed"), Global_100891, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_minigames_available"), Global_100874, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_oddjobs_completed"), Global_100892, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_oddjobs_available"), Global_100875, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndpeople_completed"), Global_100893, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndpeople_available"), Global_100876, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndevents_available"), Global_100880, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_misc_completed"), (Global_100896 + Global_100895), 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_misc_available"), (Global_100879 + Global_100878), 1);
	Global_100897 = (Global_100890 * 100 / Global_100873);
	Global_100899 = ((Global_100892 + Global_100891) * 100 / (Global_100875 + Global_100874));
	Global_100898 = ((Global_100893 + iVar9) * 100 / (Global_100876 + Global_100880));
	Global_100900 = ((Global_100895 + Global_100896) * 100 / (Global_100878 + Global_100879));
	unk_0x349899F07A0A435F(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_story_missions"), Global_100897, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_ambient_missions"), Global_100898, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101154.f_8884.f_3853))
	{
		func_27(13, unk_0xF34EE736CF047844(Global_101154.f_8884.f_3853));
	}
	if (!unk_0x1AB59BFCD46AAD2F())
	{
		if (!Global_69489)
		{
			if (func_26() == 2 == 0 && !unk_0x0E063DDE8855EC52())
			{
				if (unk_0x878E45E8C4AA7963())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_22();
				}
			}
		}
	}
}

int func_26()
{
	return Global_25120;
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x4ED42D8FD5CFED41(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x4BF394A19129A9AD(iParam0, iParam1);
	}
	return 0;
}

int func_28(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x0093FE57B4BFD543((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC5B2C78271F9ACBC((iParam0 - 0)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x0093FE57B4BFD543((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC5B2C78271F9ACBC((iParam0 - 192)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x0093FE57B4BFD543((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC5B2C78271F9ACBC((iParam0 - 513)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x0093FE57B4BFD543((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC5B2C78271F9ACBC((iParam0 - 705)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x86AA01B00A711C0B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC5B2C78271F9ACBC((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x86AA01B00A711C0B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC5B2C78271F9ACBC((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD69CE51110B42B5E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC5B2C78271F9ACBC((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD69CE51110B42B5E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC5B2C78271F9ACBC((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD69CE51110B42B5E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC5B2C78271F9ACBC((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xD69CE51110B42B5E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC5B2C78271F9ACBC((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD69CE51110B42B5E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC5B2C78271F9ACBC((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_29()
{
	return Global_1312747;
}

void func_30()
{
	func_47();
	func_39();
	func_35();
	func_34();
	func_33();
	func_32();
	Global_91315 = 0;
	Global_85786 = -1;
	unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 17);
	Global_91313 = 0;
	unk_0xB12859ABFCB19EB5(0);
	unk_0xE0F2B328632171D0(0);
	unk_0xFB56942BE14F95CB(1);
	unk_0x1630072C8625779F(1);
	unk_0x9270D18AFCBDACEC(1);
	func_31(0);
}

void func_31(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&(Global_91278.f_20), 13);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 13);
	}
}

void func_32()
{
	Global_69729 = { 0f, 0f, 0f };
	Global_69732 = 0f;
	Global_91278.f_21 = 145;
}

void func_33()
{
	StringCopy(&Global_69721, "", 16);
	StringCopy(&Global_69725, "", 16);
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_91278.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_35()
{
	Global_91278 = 13;
	Global_91278.f_1 = -1;
	Global_91278.f_2 = 0;
	Global_91278.f_30 = 0f;
	unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 25);
	Global_91312 = 0;
	func_38(0);
	func_37();
	func_36();
	Global_91278.f_18 = -1;
	Global_91278.f_19 = -1;
}

void func_36()
{
	unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 22);
	unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 8);
}

void func_37()
{
	if (Global_91278.f_16 != 0)
	{
		unk_0xBBDCA990E9FC1AE1(&(Global_91278.f_16));
		Global_91278.f_16 = 0;
	}
	if (Global_91278.f_17 != 0)
	{
		unk_0xBBDCA990E9FC1AE1(&(Global_91278.f_17));
		Global_91278.f_17 = 0;
	}
}

void func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_36260 = 1;
	}
	else
	{
		Global_36260 = 0;
	}
}

void func_39()
{
	func_40(&Global_95496);
}

void func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_46(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_45(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
		func_45(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_1665[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_1665[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1665[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1762[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_44(&(uParam0->f_2305));
	func_42(&(uParam0->f_2311));
	func_41(&(uParam0->f_2401));
}

void func_41(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_42(var uParam0)
{
	func_43(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_43(var uParam0)
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

void func_44(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_45(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_27), "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

void func_46(var uParam0)
{
	*uParam0 = -15;
}

void func_47()
{
	StringCopy(&Global_93083, "", 32);
	func_40(&Global_93091);
}

void func_48()
{
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	unk_0x26545538B51562AD(&Global_2283, 25);
	unk_0x26545538B51562AD(&Global_2284, 11);
}

void func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_88980[iVar0];
		if (unk_0xD2CFFE76B625AE55(iVar1) && !unk_0xE4F7206742848BAF(iVar1))
		{
			iVar3 = func_166(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_165(iVar1, 14, iVar2))
				{
					func_50(iVar1, 14, iVar2);
				}
				if (Global_101154.f_1826.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_101154.f_1826.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_50(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (unk_0xE4F7206742848BAF(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = unk_0x946C63BD9EF05437(iParam0);
	Global_69311[1 /*14*/] = { func_100(iVar0, iParam1, iParam2) };
	if (!unk_0xF426A5DE932B3BEE(Global_69311[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_165(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { func_96(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_50(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { func_93(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_50(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		unk_0xC1D863DB811A860C(iParam0, Global_69311[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { func_96(iVar0, 0) };
		Global_69311[1 /*14*/] = { func_100(iVar0, iParam1, uVar30[iParam1]) };
		if (unk_0x474B3C26E202616D(iParam0, func_92(iParam1)) > 0 && unk_0xF344F658A7AAC33B(iParam0, func_92(iParam1), Global_69311[1 /*14*/].f_3) > 0)
		{
			unk_0x5D927D8655264D6C(iParam0, func_92(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, 0);
		}
	}
	if (func_91(iParam0, iVar0, &iVar46, 0))
	{
		func_53(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_51(iParam0, iVar0, &iVar46))
	{
		func_53(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_52(iParam1);
	if (Global_101154.f_1826.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_165(iParam0, Global_101154.f_1826.f_539[iVar0 /*65*/].f_64, Global_101154.f_1826.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_62;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_63 = -99;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	int iVar10;
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (unk_0xE4F7206742848BAF(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_69310++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x946C63BD9EF05437(iParam0);
	if (iParam5 == 0)
	{
		Global_69311[1 /*14*/] = { func_100(iVar10, iParam1, iParam2) };
		if (!func_90(iParam3))
		{
			Global_69310 = (Global_69310 - 1);
			return 0;
		}
		func_83(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_81(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_81(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_76(iParam0, 1);
			if (!func_75(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = func_76(iParam0, 0);
			if (!func_74(iVar10, 14, iVar8) && !func_70(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_76(iParam0, 2);
			}
		}
		unk_0xFB3B0074392F6686(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_69354 };
		}
		else
		{
			uVar11 = { func_96(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_69311[1 /*14*/] = { func_100(iVar10, iVar0, uVar11[iVar0]) };
				if (unk_0xF426A5DE932B3BEE(Global_69311[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_69370 };
						}
						else
						{
							uVar27 = { func_93(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_69311[1 /*14*/] = { func_100(iVar10, 14, uVar27[iVar1]) };
							func_69(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
							func_83(14);
							if (Global_69310 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_61(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_60(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x5D927D8655264D6C(iParam0, func_92(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, unk_0x8EDDCCA11A9F2980(iParam0, func_92(iVar0)));
						}
						else
						{
							unk_0x5D927D8655264D6C(iParam0, func_92(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
						}
						func_83(iVar0);
						if (Global_69310 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_61(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69311[1 /*14*/] = { func_100(iVar10, iVar0, func_59(iParam0, iVar0, -1)) };
				if (unk_0xF426A5DE932B3BEE(Global_69311[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_91(iParam0, iVar10, &iVar4, 1))
							{
								func_53(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { func_96(iVar10, 0) };
						func_53(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { func_100(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (func_57(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_53(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_100(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (func_57(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_53(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_100(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (func_57(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_53(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_100(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (func_57(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_53(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_100(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (func_57(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_53(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { func_93(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69311[1 /*14*/] = { func_100(iVar10, 14, uVar67[iVar1]) };
			func_69(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			func_83(14);
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_61(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_69(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
		func_83(iParam1);
		if (Global_69310 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_61(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x5D927D8655264D6C(iParam0, func_92(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, unk_0x8EDDCCA11A9F2980(iParam0, func_92(iParam1)));
		}
		else
		{
			unk_0x5D927D8655264D6C(iParam0, func_92(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
		}
		if (Global_69310 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_61(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_54(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69310 == 1)
	{
		if (func_91(iParam0, iVar10, &iVar4, 0))
		{
			func_53(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_51(iParam0, iVar10, &iVar4))
		{
			func_53(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_69310 = (Global_69310 - 1);
	return 1;
}

void func_54(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_56(iParam0, 12, iVar0))
	{
		if (func_55(iParam0, iParam1, iParam2))
		{
			iVar1 = func_52(iParam0);
			if (iParam1 == 3)
			{
				Global_101154.f_1826.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_101154.f_1826.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_56(int iParam0, int iParam1, int iParam2)
{
	Global_69311[1 /*14*/] = { func_100(iParam0, iParam1, iParam2) };
	return unk_0xF426A5DE932B3BEE(Global_69311[1 /*14*/].f_6, 2);
}

int func_57(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_93(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_58(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_75(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_74(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_70(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_75(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_74(iParam0, iParam2, iParam3))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
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
					return 0;
				}
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_70(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_75(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_74(iParam0, iParam2, iParam3))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_70(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_59(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_165(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_165(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_76(iParam0, iParam2);
			}
		}
		else
		{
			return func_81(iParam0, iParam1);
		}
	}
	return -99;
}

int func_60(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_52(iParam0);
		Global_101154.f_1826.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_101154.f_1826.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_81(iParam0, 1);
				iVar0 = func_68(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_81(iParam0, 2);
				iVar0 = func_68(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_60(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_67(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_66(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_65(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_65(iParam0, 3, 135, 150))
									{
										iVar0 = func_64(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_65(iParam0, 3, 209, 222))
									{
										iVar0 = func_64(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_65(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_64(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_64(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_64(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_64(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_65(iParam0, 3, 176, 191) && !func_65(iParam0, 3, 227, 242))
									{
										iVar0 = func_64(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_81(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_81(iParam0, 11);
								iVar5 = func_63(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_81(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_62(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_81(iParam0, 8);
								iVar8 = func_81(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_63(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_63(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_81(iParam0, 11);
								iVar0 = func_63(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_64(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_64(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_56(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_81(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_52(iParam0);
		Global_101154.f_1826.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_101154.f_1826.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		unk_0xC1D863DB811A860C(iParam0, iParam1);
	}
	else
	{
		unk_0x2F228A16D7B61C5F(iParam0, iParam1, iParam2, iParam3, unk_0x0E063DDE8855EC52());
	}
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						return (unk_0xF85281061FECBFF7(func_71(iParam0, iParam2, 14, 3), joaat("HAT"), 1) || unk_0xF85281061FECBFF7(func_71(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0xF85281061FECBFF7(func_71(iParam0, iParam2, 1, 3), joaat("HAT"), 0) || unk_0xF85281061FECBFF7(func_71(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						return (unk_0xF85281061FECBFF7(func_71(iParam0, iParam2, 14, 4), joaat("HAT"), 1) || unk_0xF85281061FECBFF7(func_71(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0xF85281061FECBFF7(func_71(iParam0, iParam2, 1, 4), joaat("HAT"), 0) || unk_0xF85281061FECBFF7(func_71(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x588D8B0DDDAB55A2(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_73(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0xE6037C03B43E9AE7(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0x880ACDB17971EE98(iVar17, &Var0);
			if (!unk_0x80EC20FBCB429863(Var0.f_0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0xAC1CC1837466CC86(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_72(iParam0, func_92(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69432.f_26[iParam2] && iParam1 == Global_69432[iParam2]) && Global_69432.f_13[iParam2] != 0)
		{
			return Global_69432.f_13[iParam2];
		}
		iVar41 = unk_0xE6037C03B43E9AE7(iParam3, 6, -1, 0, -1, func_92(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0xD46B5FE0A90F977C(iVar38, &Var21);
			if (!unk_0x80EC20FBCB429863(Var21.f_0))
			{
				if (iVar39 == iVar40)
				{
					Global_69432.f_13[iParam2] = Var21.f_1;
					Global_69432[iParam2] = iParam1;
					Global_69432.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_72(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					uVar0 = func_71(iParam0, iParam2, 1, 3);
					if (unk_0xF85281061FECBFF7(uVar0, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					uVar1 = func_71(iParam0, iParam2, 1, 4);
					if (unk_0xF85281061FECBFF7(uVar1, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					return unk_0xF85281061FECBFF7(func_71(iParam0, iParam2, 14, 3), joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					return unk_0xF85281061FECBFF7(func_71(iParam0, iParam2, 14, 4), joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE4F7206742848BAF(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xA0ED5DF8C72F1600(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_80(iParam1);
	}
	iVar1 = unk_0x1061092D9407E81F(iParam0, iParam1);
	return func_77(iParam0, iVar0, iVar1, iParam1);
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_80(iParam3);
	}
	iVar0 = unk_0x946C63BD9EF05437(iParam0);
	iVar1 = unk_0x1463DBBCCB07A9D8(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_79(unk_0x946C63BD9EF05437(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_79(unk_0x946C63BD9EF05437(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x125B1765DEEECA45(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x2D459CD7009DE1D0(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_78(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_80(iParam3);
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x946C63BD9EF05437(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x588D8B0DDDAB55A2(&Var0);
		iVar18 = 0;
		iVar19 = unk_0xE6037C03B43E9AE7(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x880ACDB17971EE98(iVar17, &Var0);
			if (!unk_0x80EC20FBCB429863(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_73(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0xAC1CC1837466CC86(&Var20);
		iVar38 = 0;
		iVar39 = unk_0xE6037C03B43E9AE7(iParam3, 6, -1, 0, -1, func_92(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xD46B5FE0A90F977C(iVar37, &Var20);
			if (!unk_0x80EC20FBCB429863(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_72(iParam0, func_92(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xE4F7206742848BAF(iParam0))
	{
		return -99;
	}
	iVar0 = func_92(iParam1);
	iVar1 = unk_0x8E6EAC2226EC1711(iParam0, iVar0);
	iVar2 = unk_0x11865ADDF8F270CA(iParam0, iVar0);
	return func_82(iParam0, iVar1, iVar2, iParam1);
}

int func_82(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_92(iParam3);
	iVar1 = unk_0x474B3C26E202616D(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0xF344F658A7AAC33B(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_83(int iParam0)
{
	if (unk_0xF426A5DE932B3BEE(Global_69311[1 /*14*/].f_6, 1) && !unk_0xF426A5DE932B3BEE(Global_69311[1 /*14*/].f_6, 6))
	{
		func_89(iParam0, Global_69311[1 /*14*/].f_5, Global_69311[1 /*14*/].f_2, 2, Global_69311[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0xF426A5DE932B3BEE(Global_69311[1 /*14*/].f_6, 1) && unk_0xF426A5DE932B3BEE(Global_69311[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_84(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_84(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_84(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_84(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_88(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_87(iVar2, iVar0, 0);
		unk_0x26545538B51562AD(&iVar3, iVar1);
		func_85(iVar2, iVar3, iVar0, 1);
	}
}

void func_85(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_86(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
}

int func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_86(iParam1)];
	if (unk_0xD0D748C6C14C0E92(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_88(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 3949;
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_2560780)
		{
			iVar0 = unk_0x501A5938D611FF6D(uParam0);
		}
		else
		{
			iVar0 = unk_0x76DDC315BAEA63BB(uParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x501A5938D611FF6D(uParam0);
	}
	else
	{
		iVar0 = unk_0x76DDC315BAEA63BB(uParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1751;
					break;
				
				case 1:
					*uParam2 = 1752;
					break;
				
				case 2:
					*uParam2 = 1753;
					break;
				
				case 3:
					*uParam2 = 1754;
					break;
				
				case 4:
					*uParam2 = 1755;
					break;
				
				case 5:
					*uParam2 = 1756;
					break;
				
				case 6:
					*uParam2 = 1763;
					break;
				
				case 7:
					*uParam2 = 1764;
					break;
				
				case 8:
					*uParam2 = 1765;
					break;
				
				case 9:
					*uParam2 = 1766;
					break;
				
				case 10:
					*uParam2 = 1767;
					break;
				
				case 11:
					*uParam2 = 1768;
					break;
				
				case 12:
					*uParam2 = 1769;
					break;
				
				case 13:
					*uParam2 = 1777;
					break;
				
				case 14:
					*uParam2 = 1778;
					break;
				
				case 15:
					*uParam2 = 1879;
					break;
				
				case 16:
					*uParam2 = 1880;
					break;
				
				case 17:
					*uParam2 = 1911;
					break;
				
				case 18:
					*uParam2 = 1925;
					break;
				
				case 19:
					*uParam2 = 1926;
					break;
				
				case 20:
					*uParam2 = 1927;
					break;
				
				case 21:
					*uParam2 = 1928;
					break;
				
				case 22:
					*uParam2 = 1929;
					break;
				
				case 23:
					*uParam2 = 2033;
					break;
				
				case 24:
					*uParam2 = 2034;
					break;
				
				case 25:
					*uParam2 = 2060;
					break;
				
				case 26:
					*uParam2 = 2061;
					break;
				
				case 27:
					*uParam2 = 2062;
					break;
				
				case 28:
					*uParam2 = 2063;
					break;
				
				case 29:
					*uParam2 = 2064;
					break;
				
				case 30:
					*uParam2 = 2065;
					break;
				
				case 31:
					*uParam2 = 2066;
					break;
				
				case 32:
					*uParam2 = 2067;
					break;
				
				case 33:
					*uParam2 = 2068;
					break;
				
				case 34:
					*uParam2 = 2069;
					break;
				
				case 35:
					*uParam2 = 2316;
					break;
				
				case 36:
					*uParam2 = 2317;
					break;
				
				case 37:
					*uParam2 = 2367;
					break;
				
				case 38:
					*uParam2 = 2368;
					break;
				
				case 39:
					*uParam2 = 2369;
					break;
				
				case 40:
					*uParam2 = 2370;
					break;
				
				case 41:
					*uParam2 = 2429;
					break;
				
				case 42:
					*uParam2 = 2430;
					break;
				
				case 43:
					*uParam2 = 2431;
					break;
				
				case 44:
					*uParam2 = 2432;
					break;
				
				case 45:
					*uParam2 = 2433;
					break;
				
				case 46:
					*uParam2 = 2434;
					break;
				
				case 47:
					*uParam2 = 2435;
					break;
				
				case 48:
					*uParam2 = 2436;
					break;
				
				case 49:
					*uParam2 = 2437;
					break;
				
				case 50:
					*uParam2 = 2438;
					break;
				
				case 51:
					*uParam2 = 2567;
					break;
				
				case 52:
					*uParam2 = 2568;
					break;
				
				case 53:
					*uParam2 = 2569;
					break;
				
				case 54:
					*uParam2 = 2570;
					break;
				
				case 55:
					*uParam2 = 2571;
					break;
				
				case 56:
					*uParam2 = 2572;
					break;
				
				case 57:
					*uParam2 = 2573;
					break;
				
				case 58:
					*uParam2 = 2574;
					break;
				
				case 59:
					*uParam2 = 2575;
					break;
				
				case 60:
					*uParam2 = 2576;
					break;
				
				case 61:
					*uParam2 = 2577;
					break;
				
				case 62:
					*uParam2 = 3174;
					break;
				
				case 63:
					*uParam2 = 3175;
					break;
				
				case 64:
					*uParam2 = 3176;
					break;
				
				case 65:
					*uParam2 = 3177;
					break;
				
				case 66:
					*uParam2 = 3178;
					break;
				
				case 67:
					*uParam2 = 3179;
					break;
				
				case 68:
					*uParam2 = 3249;
					break;
				
				case 69:
					*uParam2 = 3250;
					break;
				
				case 70:
					*uParam2 = 3251;
					break;
				
				case 71:
					*uParam2 = 3252;
					break;
				
				case 72:
					*uParam2 = 3253;
					break;
				
				case 73:
					*uParam2 = 3254;
					break;
				
				case 74:
					*uParam2 = 3255;
					break;
				
				case 75:
					*uParam2 = 3256;
					break;
				
				case 76:
					*uParam2 = 3257;
					break;
				
				case 77:
					*uParam2 = 3258;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1757;
					break;
				
				case 1:
					*uParam2 = 1758;
					break;
				
				case 2:
					*uParam2 = 1759;
					break;
				
				case 3:
					*uParam2 = 1760;
					break;
				
				case 4:
					*uParam2 = 1761;
					break;
				
				case 5:
					*uParam2 = 1762;
					break;
				
				case 6:
					*uParam2 = 1770;
					break;
				
				case 7:
					*uParam2 = 1771;
					break;
				
				case 8:
					*uParam2 = 1772;
					break;
				
				case 9:
					*uParam2 = 1773;
					break;
				
				case 10:
					*uParam2 = 1774;
					break;
				
				case 11:
					*uParam2 = 1775;
					break;
				
				case 12:
					*uParam2 = 1776;
					break;
				
				case 13:
					*uParam2 = 1779;
					break;
				
				case 14:
					*uParam2 = 1780;
					break;
				
				case 15:
					*uParam2 = 1881;
					break;
				
				case 16:
					*uParam2 = 1882;
					break;
				
				case 17:
					*uParam2 = 1912;
					break;
				
				case 18:
					*uParam2 = 1930;
					break;
				
				case 19:
					*uParam2 = 1931;
					break;
				
				case 20:
					*uParam2 = 1932;
					break;
				
				case 21:
					*uParam2 = 1933;
					break;
				
				case 22:
					*uParam2 = 1934;
					break;
				
				case 23:
					*uParam2 = 2035;
					break;
				
				case 24:
					*uParam2 = 2036;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2318;
					break;
				
				case 36:
					*uParam2 = 2319;
					break;
				
				case 37:
					*uParam2 = 2371;
					break;
				
				case 38:
					*uParam2 = 2372;
					break;
				
				case 39:
					*uParam2 = 2373;
					break;
				
				case 40:
					*uParam2 = 2374;
					break;
				
				case 41:
					*uParam2 = 2439;
					break;
				
				case 42:
					*uParam2 = 2440;
					break;
				
				case 43:
					*uParam2 = 2441;
					break;
				
				case 44:
					*uParam2 = 2442;
					break;
				
				case 45:
					*uParam2 = 2443;
					break;
				
				case 46:
					*uParam2 = 2444;
					break;
				
				case 47:
					*uParam2 = 2445;
					break;
				
				case 48:
					*uParam2 = 2446;
					break;
				
				case 49:
					*uParam2 = 2447;
					break;
				
				case 50:
					*uParam2 = 2448;
					break;
				
				case 51:
					*uParam2 = 2578;
					break;
				
				case 52:
					*uParam2 = 2579;
					break;
				
				case 53:
					*uParam2 = 2580;
					break;
				
				case 54:
					*uParam2 = 2581;
					break;
				
				case 55:
					*uParam2 = 2582;
					break;
				
				case 56:
					*uParam2 = 2583;
					break;
				
				case 57:
					*uParam2 = 2584;
					break;
				
				case 58:
					*uParam2 = 2585;
					break;
				
				case 59:
					*uParam2 = 2586;
					break;
				
				case 60:
					*uParam2 = 2587;
					break;
				
				case 61:
					*uParam2 = 2588;
					break;
				
				case 62:
					*uParam2 = 3180;
					break;
				
				case 63:
					*uParam2 = 3181;
					break;
				
				case 64:
					*uParam2 = 3182;
					break;
				
				case 65:
					*uParam2 = 3183;
					break;
				
				case 66:
					*uParam2 = 3184;
					break;
				
				case 67:
					*uParam2 = 3185;
					break;
				
				case 68:
					*uParam2 = 3259;
					break;
				
				case 69:
					*uParam2 = 3260;
					break;
				
				case 70:
					*uParam2 = 3261;
					break;
				
				case 71:
					*uParam2 = 3262;
					break;
				
				case 72:
					*uParam2 = 3263;
					break;
				
				case 73:
					*uParam2 = 3264;
					break;
				
				case 74:
					*uParam2 = 3265;
					break;
				
				case 75:
					*uParam2 = 3266;
					break;
				
				case 76:
					*uParam2 = 3267;
					break;
				
				case 77:
					*uParam2 = 3268;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 3949;
}

int func_89(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x26545538B51562AD(&(Global_101154.f_1826[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF17F4B0641AB2DE1(&(Global_101154.f_1826[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xF426A5DE932B3BEE(Global_101154.f_1826[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_90(int iParam0)
{
	if (!unk_0xF426A5DE932B3BEE(Global_69311[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xF426A5DE932B3BEE(Global_69311[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xF426A5DE932B3BEE(Global_69311[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_91(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_52(iParam1);
	if (Global_101154.f_1826.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_165(iParam0, Global_101154.f_1826.f_539[iVar0 /*65*/].f_61, Global_101154.f_1826.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_59;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_60 = -99;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

struct<10> func_93(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_95(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_95(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_95(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_95(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_95(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_95(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_95(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_95(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_95(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_95(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_95(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_95(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_95(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_95(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_95(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_95(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_95(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_95(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_95(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_95(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_95(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_95(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_95(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_95(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_95(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_95(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_95(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_95(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_95(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_95(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_95(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_95(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_95(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_95(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_95(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_95(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_95(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_95(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_95(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_95(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_95(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_95(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_95(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_95(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_95(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_95(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_95(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_95(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_95(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_95(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_95(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_95(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_95(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_95(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_95(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_95(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_95(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_95(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_95(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_95(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_95(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_95(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_95(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_95(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_95(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_95(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_95(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_95(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_95(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_95(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_95(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_95(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_95(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_95(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_95(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_95(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_95(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_95(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_95(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_95(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_95(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_95(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_94(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x514D672EE096FB3D(iParam2, &Var1);
		if (!unk_0x80EC20FBCB429863(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0x7987A88FA80AD264(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_79(iParam1, Var16.f_0, 14, iVar0);
					}
					else if (Var16.f_1 != -1)
					{
						(*iParam0)[Var16.f_2] = Var16.f_1;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_95(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<16> func_96(int iParam0, int iParam1)
{
	int iVar0;
	struct<16> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_101154.f_7775.f_99.f_58[120])
					{
						func_99(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_99(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_99(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_99(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_99(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_99(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_99(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[0], Global_101154.f_1826.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_99(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_99(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_99(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_99(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_99(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_99(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_99(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_99(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_99(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_99(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_99(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_99(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_99(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_99(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_99(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_99(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_99(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_99(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_99(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_99(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_99(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_99(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_99(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_99(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_99(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_99(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_99(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_99(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_99(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_99(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_99(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_99(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_99(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_99(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_99(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_99(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_99(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_99(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_99(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_99(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_99(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_99(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_99(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_99(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_99(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_99(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_99(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_97(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_99(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_99(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_99(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[1], Global_101154.f_1826.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_99(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_99(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_99(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_99(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_99(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_99(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_99(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_99(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_99(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_99(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_99(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_99(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_99(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_99(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_99(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_99(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_99(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_99(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_99(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_99(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_99(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_99(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_99(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_99(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_99(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_99(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_99(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_99(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_99(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_99(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_99(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_99(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_99(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_99(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_99(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_99(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_99(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_99(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_99(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_99(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_99(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_99(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_99(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_99(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_97(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_99(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_99(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_99(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_99(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_99(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[2], Global_101154.f_1826.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_99(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_99(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_99(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_99(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_99(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_99(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_99(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_99(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_99(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_99(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_99(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_99(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_99(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_99(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_99(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_99(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_99(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_99(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_99(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_99(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_99(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_99(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_99(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_99(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_99(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_99(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_99(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_99(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_99(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_99(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_99(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_99(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_99(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_99(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_99(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_99(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_99(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_99(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_99(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_99(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_99(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_99(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_99(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_97(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_99(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_99(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_99(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_99(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_99(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_99(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_99(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_99(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_99(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_99(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_99(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_99(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_99(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_99(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_99(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_99(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_99(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_99(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_99(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_99(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_99(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_99(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_99(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_99(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_99(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_99(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_97(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_99(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_99(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_99(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_99(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_99(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_99(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_99(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_99(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_99(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_99(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_99(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_99(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_99(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_99(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_99(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_99(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_99(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_99(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_99(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_99(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_99(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_99(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_99(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_99(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_99(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_99(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_99(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_99(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_97(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_97(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	int iVar19;
	
	(*iParam0)[0] = 0;
	(*iParam0)[2] = -99;
	(*iParam0)[3] = 0;
	(*iParam0)[4] = 0;
	(*iParam0)[6] = 0;
	(*iParam0)[5] = 0;
	(*iParam0)[8] = 0;
	(*iParam0)[9] = 0;
	(*iParam0)[10] = 0;
	(*iParam0)[1] = 0;
	(*iParam0)[7] = 0;
	(*iParam0)[11] = 0;
	(*iParam0)[13] = -99;
	(*iParam0)[14] = -99;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*iParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x49F78716F50C5C28(iVar0, 0);
	unk_0xCA7A7671A8BA2299((iParam2 - iParam3), &Var1);
	if (!unk_0x80EC20FBCB429863(Var1.f_0))
	{
		iVar19 = 0;
		while (iVar19 < Var1.f_4)
		{
			if (unk_0x548C49DA22A760B1(Var1.f_1, iVar19, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						(*iParam0)[func_98(Var16.f_2)] = Var16.f_0;
					}
					else
					{
						(*iParam0)[func_98(Var16.f_2)] = func_79(iParam1, Var16.f_0, func_98(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*iParam0)[func_98(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar19++;
		}
		if (Var1.f_3 == 0)
		{
			(*iParam0)[13] = -99;
		}
		else
		{
			(*iParam0)[13] = Var1.f_1;
		}
	}
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[2] = iParam2;
	(*iParam0)[3] = iParam3;
	(*iParam0)[4] = iParam4;
	(*iParam0)[6] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[8] = iParam7;
	(*iParam0)[9] = iParam8;
	(*iParam0)[10] = iParam9;
	(*iParam0)[1] = iParam10;
	(*iParam0)[7] = iParam11;
	(*iParam0)[11] = iParam12;
	(*iParam0)[13] = iParam13;
	(*iParam0)[14] = -99;
}

struct<14> func_100(int iParam0, int iParam1, int iParam2)
{
	func_164();
	if (iParam0 == joaat("player_zero"))
	{
		func_146(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_127(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_101(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_101(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_126(iParam1);
			break;
		
		case 2:
			func_125(iParam1);
			break;
		
		case 3:
			func_122(iParam1);
			break;
		
		case 4:
			func_121(iParam1);
			break;
		
		case 6:
			func_120(iParam1);
			break;
		
		case 5:
			func_119(iParam1);
			break;
		
		case 8:
			func_118(iParam1);
			break;
		
		case 9:
			func_117(iParam1);
			break;
		
		case 10:
			func_116(iParam1);
			break;
		
		case 1:
			func_115(iParam1);
			break;
		
		case 7:
			func_114(iParam1);
			break;
		
		case 11:
			func_113(iParam1);
			break;
		
		case 12:
			func_112(iParam1);
			break;
		
		case 13:
			func_111(iParam1);
			break;
		
		case 14:
			func_102(iParam1);
			break;
	}
}

void func_102(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 155);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_103(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_109(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x70ABFF261710305D(sParam3) != unk_0x70ABFF261710305D("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x26545538B51562AD(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x26545538B51562AD(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x26545538B51562AD(&(uParam0->f_6), 5);
		}
		unk_0x26545538B51562AD(&(uParam0->f_6), 1);
		unk_0x26545538B51562AD(&(uParam0->f_6), 2);
		unk_0x26545538B51562AD(&(uParam0->f_6), 6);
		if (func_108(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0xF85281061FECBFF7(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0x26545538B51562AD(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_107(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xF17F4B0641AB2DE1(&(uParam0->f_6), 2);
			}
			if (!func_107(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x26545538B51562AD(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_107(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xF17F4B0641AB2DE1(&(uParam0->f_6), 2);
			}
			if (!func_107(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x26545538B51562AD(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_107(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xF17F4B0641AB2DE1(&(uParam0->f_6), 2);
			}
			if (!func_107(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x26545538B51562AD(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x26545538B51562AD(&(uParam0->f_6), 0);
		unk_0x26545538B51562AD(&(uParam0->f_6), 5);
		if (func_89(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x26545538B51562AD(&(uParam0->f_6), 1);
		}
		if (func_89(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x26545538B51562AD(&(uParam0->f_6), 2);
		}
		if (!func_89(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x26545538B51562AD(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x26545538B51562AD(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_108(14))
			{
				return;
			}
			iVar0 = func_87(func_106(iParam1, uParam0->f_2), Global_69309, 0);
			if (unk_0xF426A5DE932B3BEE(iVar0, uParam0->f_1))
			{
				unk_0x26545538B51562AD(&(uParam0->f_6), 1);
			}
			iVar0 = func_87(func_105(iParam1, uParam0->f_2), Global_69309, 0);
			if (unk_0xF426A5DE932B3BEE(iVar0, uParam0->f_1))
			{
				unk_0x26545538B51562AD(&(uParam0->f_6), 2);
			}
			if (func_104(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_87(iVar1, Global_69309, 0);
				if (!unk_0xF426A5DE932B3BEE(iVar0, uParam0->f_1))
				{
					unk_0x26545538B51562AD(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x26545538B51562AD(&(uParam0->f_6), 1);
			unk_0x26545538B51562AD(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x26545538B51562AD(&(uParam0->f_6), 1);
			unk_0x26545538B51562AD(&(uParam0->f_6), 2);
		}
	}
}

bool func_104(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 971;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 972;
					break;
				
				case 3:
					*uParam2 = 1422;
					break;
				
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 9:
					*uParam2 = 1431;
					break;
				
				case 10:
					*uParam2 = 1433;
					break;
				
				case 1:
					*uParam2 = 1004;
					break;
				
				case 7:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
				
				case 12:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 973;
					break;
				
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 9:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 974;
					break;
				
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 7:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	}
	return *uParam2 != 971;
}

int func_105(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 920;
					break;
				
				case 3:
					return 1407;
					break;
				
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 9:
					return 1416;
					break;
				
				case 10:
					return 1418;
					break;
				
				case 1:
					return 952;
					break;
				
				case 7:
					return 1419;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
				
				case 12:
					return 971;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 921;
					break;
				
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 9:
					return 1417;
					break;
				
				case 7:
					return 1420;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 922;
					break;
				
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 7:
					return 1421;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 968;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 969;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 970;
					break;
			}
			break;
	}
	return 928;
}

int func_106(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 868;
					break;
				
				case 3:
					return 1392;
					break;
				
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 9:
					return 1401;
					break;
				
				case 10:
					return 1403;
					break;
				
				case 1:
					return 900;
					break;
				
				case 7:
					return 1404;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
				
				case 12:
					return 919;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 869;
					break;
				
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 9:
					return 1402;
					break;
				
				case 7:
					return 1405;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 870;
					break;
				
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 7:
					return 1406;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 916;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 917;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 918;
					break;
			}
			break;
	}
	return 876;
}

int func_107(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_88(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_87(iVar2, iVar0, 0);
		return unk_0xF426A5DE932B3BEE(iVar3, iVar1);
	}
	return 0;
}

bool func_108(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_110(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_69311[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x49F78716F50C5C28(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xCA7A7671A8BA2299(iVar17, &Var2);
			if (!unk_0x80EC20FBCB429863(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_103(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_103(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x588D8B0DDDAB55A2(&Var20);
		iVar39 = 0;
		iVar40 = unk_0xE6037C03B43E9AE7(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0x880ACDB17971EE98(iVar38, &Var20);
			if (!unk_0x80EC20FBCB429863(Var20.f_0))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20.f_0;
					func_103(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0xF85281061FECBFF7(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0xAC1CC1837466CC86(&Var41);
		iVar59 = 0;
		iVar60 = unk_0xE6037C03B43E9AE7(iVar1, 6, -1, 0, -1, func_92(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0xD46B5FE0A90F977C(iVar58, &Var41);
			if (!unk_0x80EC20FBCB429863(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_103(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0xF85281061FECBFF7(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_111(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_110(iVar10, iParam0, 9);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_112(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 48);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_113(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 1);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_114(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 1);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_115(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 6);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_116(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_110(iVar10, iParam0, 33);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_117(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_110(iVar10, iParam0, 17);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_118(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_110(iVar10, iParam0, 18);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_119(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_110(iVar10, iParam0, 7);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_120(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_110(iVar10, iParam0, 84);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_121(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_110(iVar10, iParam0, 104);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_122(int iParam0)
{
	if (iParam0 < 136)
	{
		func_124(iParam0);
	}
	else
	{
		func_123(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_110(3, iParam0, 242);
	}
}

void func_123(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_124(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_125(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 9);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_126(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_110(iVar10, iParam0, 7);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_127(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_145(iParam1);
			break;
		
		case 2:
			func_144(iParam1);
			break;
		
		case 3:
			func_140(iParam1);
			break;
		
		case 4:
			func_139(iParam1);
			break;
		
		case 6:
			func_138(iParam1);
			break;
		
		case 5:
			func_137(iParam1);
			break;
		
		case 8:
			func_136(iParam1);
			break;
		
		case 9:
			func_135(iParam1);
			break;
		
		case 10:
			func_134(iParam1);
			break;
		
		case 1:
			func_133(iParam1);
			break;
		
		case 7:
			func_132(iParam1);
			break;
		
		case 11:
			func_131(iParam1);
			break;
		
		case 12:
			func_130(iParam1);
			break;
		
		case 13:
			func_129(iParam1);
			break;
		
		case 14:
			func_128(iParam1);
			break;
	}
}

void func_128(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 175);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_129(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 9);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_130(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 47);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_131(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_110(iVar10, iParam0, 63);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_132(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 1);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_133(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 5);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_134(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 53);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_135(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 12);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_136(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 77);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_137(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_110(iVar10, iParam0, 7);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_138(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_110(iVar10, iParam0, 134);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_139(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_110(iVar10, iParam0, 117);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_140(int iParam0)
{
	if (iParam0 < 107)
	{
		func_143(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_142(iParam0);
	}
	else
	{
		func_141(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_110(3, iParam0, 318);
	}
}

void func_141(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_142(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_143(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_144(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_110(iVar10, iParam0, 21);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_145(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_110(iVar10, iParam0, 10);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_146(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_163(iParam1);
			break;
		
		case 2:
			func_162(iParam1);
			break;
		
		case 3:
			func_159(iParam1);
			break;
		
		case 4:
			func_158(iParam1);
			break;
		
		case 6:
			func_157(iParam1);
			break;
		
		case 5:
			func_156(iParam1);
			break;
		
		case 8:
			func_155(iParam1);
			break;
		
		case 9:
			func_154(iParam1);
			break;
		
		case 10:
			func_153(iParam1);
			break;
		
		case 1:
			func_152(iParam1);
			break;
		
		case 7:
			func_151(iParam1);
			break;
		
		case 11:
			func_150(iParam1);
			break;
		
		case 12:
			func_149(iParam1);
			break;
		
		case 13:
			func_148(iParam1);
			break;
		
		case 14:
			func_147(iParam1);
			break;
	}
}

void func_147(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_110(iVar10, iParam0, 113);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_148(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_110(iVar10, iParam0, 10);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_149(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 53);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_150(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 45);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_151(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 1);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_152(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 5);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_153(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_110(iVar10, iParam0, 48);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_154(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_110(iVar10, iParam0, 20);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_155(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_110(iVar10, iParam0, 24);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_156(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_110(iVar10, iParam0, 14);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_157(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_110(iVar10, iParam0, 99);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_158(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 113);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_159(int iParam0)
{
	if (iParam0 < 60)
	{
		func_161(iParam0);
	}
	else
	{
		func_160(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_110(3, iParam0, 181);
	}
}

void func_160(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_161(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_162(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_110(iVar10, iParam0, 6);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_163(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_110(iVar10, iParam0, 7);
			return;
			break;
	}
	func_103(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_164()
{
	Global_69311[0 /*14*/].f_1 = -1;
	Global_69311[0 /*14*/].f_2 = -1;
	Global_69311[0 /*14*/].f_5 = -1;
	Global_69311[0 /*14*/].f_3 = -1;
	Global_69311[0 /*14*/].f_4 = -1;
	Global_69311[0 /*14*/].f_7 = 0;
	Global_69311[0 /*14*/].f_6 = 0;
	Global_69311[0 /*14*/].f_13 = -1;
	Global_69311[0 /*14*/].f_12 = 0;
	Global_69311[0 /*14*/] = 0;
	StringCopy(&(Global_69311[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (unk_0xE4F7206742848BAF(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x946C63BD9EF05437(iParam0);
	Global_69311[1 /*14*/] = { func_100(iVar0, iParam1, iParam2) };
	if (!unk_0xF426A5DE932B3BEE(Global_69311[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_96(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_165(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { func_93(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_165(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_69311[2 /*14*/] = { func_100(iVar0, 14, iVar4) };
									if (Global_69311[2 /*14*/].f_12 == iVar3)
									{
										if (func_165(iParam0, 14, iVar4))
										{
											if (!func_57(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_69311[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_81(iParam0, iVar2);
						Global_69311[2 /*14*/] = { func_100(iVar0, iVar2, iVar1) };
						if (!func_57(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_69311[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { func_93(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_165(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xA0ED5DF8C72F1600(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_3 && (unk_0x1061092D9407E81F(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_4 || Global_69311[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_69311[1 /*14*/].f_3 == unk_0x8E6EAC2226EC1711(iParam0, func_92(iParam1)) && Global_69311[1 /*14*/].f_4 == unk_0x11865ADDF8F270CA(iParam0, func_92(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_167(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_167(int iParam0)
{
	if (func_168(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_168(int iParam0)
{
	return iParam0 < 3;
}

void func_169(var uParam0, int iParam1)
{
	unk_0x783BA542276957DC(joaat("sp_last_mission_name"), uParam0, 1);
	if (unk_0xF426A5DE932B3BEE(iParam1, 0))
	{
		unk_0x783BA542276957DC(joaat("sp0_last_mission_name"), uParam0, 1);
	}
	if (unk_0xF426A5DE932B3BEE(iParam1, 1))
	{
		unk_0x783BA542276957DC(joaat("sp1_last_mission_name"), uParam0, 1);
	}
	if (unk_0xF426A5DE932B3BEE(iParam1, 2))
	{
		unk_0x783BA542276957DC(joaat("sp2_last_mission_name"), uParam0, 1);
	}
}

int func_170()
{
	func_171();
	switch (Global_101154.f_1826.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_171()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_167(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_166(unk_0x27D769C59BC9D030());
			if (func_168(iVar0) && (!func_108(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_168(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

struct<2> func_172(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_173(iParam0) };
	if (unk_0x75CB9E30BA492FF0(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_173(int iParam0)
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

void func_174(int iParam0, int iParam1)
{
	Global_69757 = iParam1;
	if (Global_55743)
	{
		return;
	}
	if (Global_55770)
	{
		Global_55770 = 0;
		return;
	}
	if (unk_0xD32535FA4397160F(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_55743)
		{
		}
		Global_55769 = iParam0;
		Global_55743 = 1;
		Global_55754 = 1;
	}
}

void func_175(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 32, 1);
		unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 250, 1);
	}
	unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), true, 0);
	unk_0xE71148ED586F1ED1(1f);
	unk_0x193107EFB9C9FD44(5);
	unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 0);
	unk_0x640715600B7D533A(unk_0x4D29100D094E5511(), 1f);
	unk_0xAF521115BA9B9A74(unk_0x4D29100D094E5511(), 1f);
	unk_0x3DFCFAD590F85BF7(1);
	unk_0x83DB85FD25128C55(1);
	unk_0x253830D462669824(0, 0);
	unk_0x59B57A061D8D4885(1f);
	func_186();
	func_185(1, 1);
	func_184();
	func_182();
	func_181(30000);
	if (iParam1 == 1)
	{
		func_176(iParam0, iParam2, iParam3);
	}
	unk_0x0F0476353304C917(0, 0);
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar32;
	
	if (iParam0 != -1)
	{
		func_178(iParam0, &Var0);
		MemCopy(&uVar32, {func_173(iParam0)}, 4);
		unk_0x07B7705D7B23A4CA(&uVar32, 0, Global_91315, 0);
		func_177(&uVar32, Var0.f_3, Global_91315, iParam1, iParam2);
	}
}

void func_177(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (unk_0x75CB9E30BA492FF0(&Global_88681))
	{
		return;
	}
	if (unk_0x4A997F738952113D(uParam0, &Global_88681, 0, -1) != 0)
	{
		return;
	}
	unk_0x3E945AE78BE77CD8(uParam0, uParam1, uParam2, uParam3, uParam4, Global_85788);
	StringCopy(&Global_88681, "", 64);
}

void func_178(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_179(uParam1, "Abigail1", func_172(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 1:
			func_179(uParam1, "Abigail2", func_172(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 2:
			func_179(uParam1, "Barry1", func_172(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 3:
			func_179(uParam1, "Barry2", func_172(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 4:
			func_179(uParam1, "Barry3", func_172(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 5:
			func_179(uParam1, "Barry3A", func_172(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 6:
			func_179(uParam1, "Barry3C", func_172(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 7:
			func_179(uParam1, "Barry4", func_172(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_180(iParam0), 0, 0);
			break;
		
		case 8:
			func_179(uParam1, "Dreyfuss1", func_172(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 9:
			func_179(uParam1, "Epsilon1", func_172(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 10:
			func_179(uParam1, "Epsilon2", func_172(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 11:
			func_179(uParam1, "Epsilon3", func_172(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 12:
			func_179(uParam1, "Epsilon4", func_172(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 13:
			func_179(uParam1, "Epsilon5", func_172(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 14:
			func_179(uParam1, "Epsilon6", func_172(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 15:
			func_179(uParam1, "Epsilon7", func_172(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 16:
			func_179(uParam1, "Epsilon8", func_172(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 17:
			func_179(uParam1, "Extreme1", func_172(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 18:
			func_179(uParam1, "Extreme2", func_172(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 19:
			func_179(uParam1, "Extreme3", func_172(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 20:
			func_179(uParam1, "Extreme4", func_172(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 21:
			func_179(uParam1, "Fanatic1", func_172(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_180(iParam0), 1, 0);
			break;
		
		case 22:
			func_179(uParam1, "Fanatic2", func_172(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_180(iParam0), 1, 0);
			break;
		
		case 23:
			func_179(uParam1, "Fanatic3", func_172(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_180(iParam0), 0, 1);
			break;
		
		case 24:
			func_179(uParam1, "Hao1", func_172(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_180(iParam0), 0, 1);
			break;
		
		case 25:
			func_179(uParam1, "Hunting1", func_172(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 26:
			func_179(uParam1, "Hunting2", func_172(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 27:
			func_179(uParam1, "Josh1", func_172(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 28:
			func_179(uParam1, "Josh2", func_172(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 29:
			func_179(uParam1, "Josh3", func_172(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 30:
			func_179(uParam1, "Josh4", func_172(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 31:
			func_179(uParam1, "Maude1", func_172(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 32:
			func_179(uParam1, "Minute1", func_172(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 33:
			func_179(uParam1, "Minute2", func_172(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 34:
			func_179(uParam1, "Minute3", func_172(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 35:
			func_179(uParam1, "MrsPhilips1", func_172(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 36:
			func_179(uParam1, "MrsPhilips2", func_172(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 37:
			func_179(uParam1, "Nigel1", func_172(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 38:
			func_179(uParam1, "Nigel1A", func_172(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 39:
			func_179(uParam1, "Nigel1B", func_172(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 40:
			func_179(uParam1, "Nigel1C", func_172(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 41:
			func_179(uParam1, "Nigel1D", func_172(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 42:
			func_179(uParam1, "Nigel2", func_172(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 43:
			func_179(uParam1, "Nigel3", func_172(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 44:
			func_179(uParam1, "Omega1", func_172(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 45:
			func_179(uParam1, "Omega2", func_172(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 46:
			func_179(uParam1, "Paparazzo1", func_172(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 47:
			func_179(uParam1, "Paparazzo2", func_172(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 48:
			func_179(uParam1, "Paparazzo3", func_172(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 49:
			func_179(uParam1, "Paparazzo3A", func_172(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 50:
			func_179(uParam1, "Paparazzo3B", func_172(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 51:
			func_179(uParam1, "Paparazzo4", func_172(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 52:
			func_179(uParam1, "Rampage1", func_172(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 54:
			func_179(uParam1, "Rampage3", func_172(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 55:
			func_179(uParam1, "Rampage4", func_172(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 56:
			func_179(uParam1, "Rampage5", func_172(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 53:
			func_179(uParam1, "Rampage2", func_172(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 57:
			func_179(uParam1, "TheLastOne", func_172(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 58:
			func_179(uParam1, "Tonya1", func_172(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 59:
			func_179(uParam1, "Tonya2", func_172(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 60:
			func_179(uParam1, "Tonya3", func_172(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 61:
			func_179(uParam1, "Tonya4", func_172(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 62:
			func_179(uParam1, "Tonya5", func_172(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
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

void func_181(int iParam0)
{
	Global_36262 = (unk_0xA0F74982C6AAA9D4() + iParam0);
}

void func_182()
{
	if (Global_88923)
	{
		func_171();
		unk_0x5665D3BF66653DD2(func_183(Global_101154.f_1826.f_539.f_3549));
	}
	else
	{
		unk_0x5665D3BF66653DD2("");
	}
}

char* func_183(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

void func_184()
{
	char cVar0[24];
	
	if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
	{
		unk_0x4392DD4CF5597D9C(StackVal, 0, 0, 0);
	}
	else if (unk_0x3E00A1016DB5AFEF() || unk_0x748A964A12412EBB())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0xA5064174B9213E3A(0, &cVar0);
	}
}

void func_185(int iParam0, int iParam1)
{
	Global_88918 = iParam0;
	Global_88919 = iParam1;
}

void func_186()
{
	if (Global_69743 != 6)
	{
	}
	if (Global_69748)
	{
		unk_0xFEA003123EAA8CFB(15);
		Global_69748 = 0;
		Global_17257.f_7862 = 0;
	}
	Global_69743 = 6;
	Global_69745 = -1;
	Global_69744 = -1;
}

void func_187(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35673)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
}

void func_188(int iParam0, bool bParam1)
{
	struct<26> Var0;
	int iVar32;
	bool bVar33;
	int iVar34;
	struct<6> Var35;
	int iVar67;
	int iVar68;
	struct<6> Var69;
	int iVar101;
	int iVar102;
	
	func_178(iParam0, &Var0);
	if (!unk_0xC1C5B83BB6719C6C(&(Var0.f_16), ""))
	{
		while (!func_216(&(Var0.f_16)))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (Var0.f_22 != 0)
	{
		func_215(Var0.f_22, 0);
	}
	func_206(iParam0, Global_69758);
	if (!bParam1)
	{
		iVar32 = func_205(iParam0);
		if (iVar32 != 0)
		{
			if (!unk_0x16626D9631ABD17A(iVar32))
			{
				unk_0x81B90631FC427B1D(iVar32);
			}
		}
	}
	if (Var0.f_24 != -1)
	{
		bVar33 = true;
		if (Var0.f_5 != 4)
		{
			iVar34 = 0;
			while (iVar34 < 63)
			{
				iVar67 = iVar34;
				if (iVar67 != iParam0)
				{
					func_178(iVar67, &Var35);
					if (Var35.f_5 == Var0.f_5)
					{
						if (!unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iVar67 /*6*/], 3))
						{
							bVar33 = false;
						}
						if (!unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iVar67 /*6*/], 0))
						{
							func_193(iVar67);
						}
					}
				}
				iVar34++;
			}
		}
		if (bVar33)
		{
			func_193(Var0.f_24);
		}
	}
	else if (Var0.f_25 != 4)
	{
		iVar68 = 0;
		while (iVar68 < 63)
		{
			iVar101 = iVar68;
			if (iVar101 != iParam0)
			{
				func_178(iVar101, &Var69);
				if (Var69.f_5 == Var0.f_25)
				{
					func_193(iVar101);
				}
			}
			iVar68++;
		}
	}
	if (!unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iParam0 /*6*/], 3))
	{
		unk_0x26545538B51562AD(&(Global_101154.f_17264[iParam0 /*6*/]), 3);
		Global_100241[iParam0 /*10*/].f_5 = 1;
		func_190(iParam0);
		iVar102 = func_189(iParam0);
		if (iVar102 != 322)
		{
			func_24(iVar102, 0, 0);
		}
	}
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 109;
			break;
		
		case 1:
			return 322;
			break;
		
		case 2:
			return 69;
			break;
		
		case 3:
			return 70;
			break;
		
		case 4:
			return 322;
			break;
		
		case 5:
			return 71;
			break;
		
		case 6:
			return 71;
			break;
		
		case 7:
			return 72;
			break;
		
		case 8:
			return 68;
			break;
		
		case 9:
			return 73;
			break;
		
		case 10:
			return 74;
			break;
		
		case 11:
			return 75;
			break;
		
		case 12:
			return 76;
			break;
		
		case 13:
			return 77;
			break;
		
		case 14:
			return 78;
			break;
		
		case 15:
			return 79;
			break;
		
		case 16:
			return 80;
			break;
		
		case 17:
			return 81;
			break;
		
		case 18:
			return 82;
			break;
		
		case 19:
			return 83;
			break;
		
		case 20:
			return 84;
			break;
		
		case 21:
			return 85;
			break;
		
		case 22:
			return 86;
			break;
		
		case 23:
			return 87;
			break;
		
		case 24:
			return 106;
			break;
		
		case 25:
			return 178;
			break;
		
		case 26:
			return 179;
			break;
		
		case 27:
			return 88;
			break;
		
		case 28:
			return 89;
			break;
		
		case 29:
			return 90;
			break;
		
		case 30:
			return 91;
			break;
		
		case 31:
			return 107;
			break;
		
		case 32:
			return 92;
			break;
		
		case 33:
			return 93;
			break;
		
		case 34:
			return 94;
			break;
		
		case 35:
			return 110;
			break;
		
		case 36:
			return 111;
			break;
		
		case 37:
			return 95;
			break;
		
		case 38:
			return 96;
			break;
		
		case 39:
			return 97;
			break;
		
		case 40:
			return 98;
			break;
		
		case 41:
			return 99;
			break;
		
		case 42:
			return 100;
			break;
		
		case 43:
			return 101;
			break;
		
		case 44:
			return 66;
			break;
		
		case 45:
			return 67;
			break;
		
		case 46:
			return 102;
			break;
		
		case 47:
			return 103;
			break;
		
		case 48:
			return 322;
			break;
		
		case 49:
			return 104;
			break;
		
		case 50:
			return 104;
			break;
		
		case 51:
			return 105;
			break;
		
		case 52:
			return 194;
			break;
		
		case 53:
			return 195;
			break;
		
		case 54:
			return 196;
			break;
		
		case 55:
			return 197;
			break;
		
		case 56:
			return 198;
			break;
		
		case 57:
			return 108;
			break;
		
		case 58:
			return 208;
			break;
		
		case 59:
			return 209;
			break;
		
		case 60:
			return 210;
			break;
		
		case 61:
			return 211;
			break;
		
		case 62:
			return 212;
			break;
	}
	return 322;
}

void func_190(int iParam0)
{
	func_192(iParam0, 1);
	Global_101154.f_17264[iParam0 /*6*/].f_3 = func_191();
	Global_101154.f_17264.f_380++;
}

int func_191()
{
	return (Global_101154.f_8706.f_21 + Global_101154.f_17264.f_380);
}

void func_192(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 55;
	if (bParam1)
	{
		iVar1 = uParam0;
		if (iVar1 == 46)
		{
			iVar0 = 35;
		}
		else if (iVar1 == 49)
		{
			iVar0 = 36;
		}
		else if (iVar1 == 50)
		{
			iVar0 = 37;
		}
		else if (iVar1 == 8)
		{
			iVar0 = 38;
		}
		else if (iVar1 == 16)
		{
			iVar0 = 39;
		}
		else if (iVar1 == 38)
		{
			iVar0 = 40;
		}
		else if (iVar1 == 39)
		{
			iVar0 = 41;
		}
		else if (iVar1 == 40)
		{
			iVar0 = 42;
		}
		else if (iVar1 == 41)
		{
			iVar0 = 43;
		}
		else if (iVar1 == 42)
		{
			iVar0 = 44;
		}
		else if (iVar1 == 43)
		{
			iVar0 = 45;
		}
		else if (iVar1 == 20)
		{
			iVar0 = 46;
		}
	}
	else
	{
		iVar2 = uParam0;
		if (iVar2 == 53)
		{
			iVar0 = 0;
		}
		else if (iVar2 == 1)
		{
			iVar0 = 1;
		}
		else if (iVar2 == 2)
		{
			iVar0 = 2;
		}
		else if (iVar2 == 17)
		{
			iVar0 = 3;
		}
		else if (iVar2 == 19)
		{
			iVar0 = 4;
		}
		else if (iVar2 == 43)
		{
			iVar0 = 5;
		}
		else if (iVar2 == 44)
		{
			iVar0 = 6;
		}
		else if (iVar2 == 63)
		{
			iVar0 = 8;
		}
		else if (iVar2 == 12)
		{
			iVar0 = 9;
		}
		else if (iVar2 == 13)
		{
			iVar0 = 10;
		}
		else if (iVar2 == 64)
		{
			iVar0 = 11;
		}
		else if (iVar2 == 20)
		{
			iVar0 = 12;
		}
		else if (iVar2 == 30)
		{
			iVar0 = 13;
		}
		else if (iVar2 == 31)
		{
			iVar0 = 14;
		}
		else if (iVar2 == 41)
		{
			iVar0 = 15;
		}
		else if (iVar2 == 38)
		{
			iVar0 = 16;
		}
		else if (iVar2 == 9)
		{
			iVar0 = 18;
		}
		else if (iVar2 == 59)
		{
			iVar0 = 19;
		}
		else if (iVar2 == 45)
		{
			iVar0 = 20;
		}
		else if (iVar2 == 10)
		{
			iVar0 = 21;
		}
		else if (iVar2 == 14)
		{
			iVar0 = 22;
		}
		else if (iVar2 == 16)
		{
			iVar0 = 24;
		}
		else if (iVar2 == 39)
		{
			iVar0 = 25;
		}
		else if (iVar2 == 46)
		{
			iVar0 = 26;
		}
		else if (iVar2 == 60)
		{
			iVar0 = 27;
		}
		else if (iVar2 == 22)
		{
			iVar0 = 28;
		}
		else if (iVar2 == 48)
		{
			iVar0 = 30;
		}
		else if (iVar2 == 61)
		{
			iVar0 = 31;
		}
		else if (iVar2 == 49)
		{
			iVar0 = 32;
		}
		else if (iVar2 == 27)
		{
			iVar0 = 34;
		}
		else if (iVar2 == 3)
		{
			iVar0 = 47;
		}
		else if (iVar2 == 4)
		{
			iVar0 = 48;
		}
		else if (iVar2 == 5)
		{
			iVar0 = 49;
		}
		else if (iVar2 == 6)
		{
			iVar0 = 50;
		}
		else if (iVar2 == 7)
		{
			iVar0 = 51;
		}
		else if (iVar2 == 58)
		{
			iVar0 = 53;
		}
		else if (iVar2 == 90)
		{
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75)
		{
			iVar0 = 17;
		}
		else if (iVar2 == 93)
		{
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70)
		{
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85)
		{
			iVar0 = 33;
		}
	}
	if (iVar0 != 55)
	{
		Global_101154.f_25089.f_472 = iVar0;
	}
}

void func_193(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return;
	}
	func_194(iParam0);
	unk_0x26545538B51562AD(&(Global_101154.f_17264[iParam0 /*6*/]), 0);
}

void func_194(int iParam0)
{
	switch (iParam0)
	{
		case 30:
			func_198(22, 1, 0, 1, 0);
			break;
		
		case 15:
			func_195(37, 0);
			break;
		
		default:
			break;
	}
}

void func_195(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_197(iParam0, 0))
		{
			func_196(iParam0, 1, 0);
			func_196(iParam0, 2, 0);
			func_196(iParam0, 3, 0);
			func_196(iParam0, 4, 0);
			func_196(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_196(iParam0, 0, 0);
	}
}

void func_196(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x26545538B51562AD(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

bool func_197(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF426A5DE932B3BEE(Global_101154.f_18807[iParam0], iParam1);
}

void func_198(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_69489)
		{
			Global_2428492.f_74.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_101154.f_5951.f_227[iParam0] = iParam1;
		}
		Global_32679[iParam0] = iParam2;
		Global_32878[iParam0] = 1;
		func_201(iParam0, bParam3, iParam4, 0);
		func_199(iParam0, iParam1);
	}
}

void func_199(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0x4210B4468718F7FA("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0x4210B4468718F7FA("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x9AAFC1509AF6C2C8("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x9AAFC1509AF6C2C8("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_200(0, 0);
			}
			else
			{
				func_200(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0x4210B4468718F7FA("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0x4210B4468718F7FA("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xCEAD363208603499("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0xE2AA080D37C384D4("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0xE2AA080D37C384D4("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0xE2AA080D37C384D4("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0xE2AA080D37C384D4("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_200(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x26545538B51562AD(&Global_99794, iParam0);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_99794, iParam0);
	}
	Global_99793 = 1;
}

bool func_201(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;
	
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_204(&Var3, iParam0);
	if (func_202())
	{
		iVar1 = Global_101154.f_5951.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2428492.f_74.f_227[iParam0];
	}
	iVar2 = Global_33077[iParam0];
	if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !bParam3)
	{
	}
	else
	{
		bVar99 = true;
		if (unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) != unk_0x70ABFF261710305D("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32679[iParam0] && unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
				}
				if (!unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()) || unk_0x8265D96B5808A45B(unk_0x27D769C59BC9D030()))
				{
					if (!unk_0x3934E959DB2478D3())
					{
						bVar99 = false;
					}
				}
			}
		}
		if (unk_0x9A7F0D797C57AC34() && (!unk_0x5D293E404CA20AA5() || unk_0x00798D768A589710() != 5))
		{
			bVar99 = false;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0xD54126A841C7B0C2(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x6EF6FEAF532E4684(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34273[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x70ABFF261710305D(&(Var3.f_8[1 /*8*/])) != unk_0x70ABFF261710305D("") && unk_0x70ABFF261710305D(&(Var3.f_8[1 /*8*/])) != unk_0x70ABFF261710305D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBDA20BD415464BD5(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x79EE50983E41D399(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D("") && unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D("REMOVE_ALL_STATES")) && unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBDA20BD415464BD5(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x79EE50983E41D399(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x70ABFF261710305D(&(Var3.f_8[0 /*8*/])) != unk_0x70ABFF261710305D(""))
						{
							if (!unk_0xBDA20BD415464BD5(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xAE50B46D4D30305D(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x70ABFF261710305D(&(Var3.f_34)) != unk_0x70ABFF261710305D(""))
						{
							if (!unk_0xBDA20BD415464BD5(&(Var3.f_34)))
							{
								unk_0xAE50B46D4D30305D(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x70ABFF261710305D(&(Var3.f_34)) != unk_0x70ABFF261710305D(""))
						{
							if (unk_0xBDA20BD415464BD5(&(Var3.f_34)))
							{
								unk_0x79EE50983E41D399(&(Var3.f_34));
							}
						}
						if (unk_0x70ABFF261710305D(&(Var3.f_8[0 /*8*/])) != unk_0x70ABFF261710305D("") && unk_0x70ABFF261710305D(&(Var3.f_8[0 /*8*/])) != unk_0x70ABFF261710305D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBDA20BD415464BD5(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x79EE50983E41D399(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D("") && unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D("REMOVE_ALL_STATES")) && unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBDA20BD415464BD5(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x79EE50983E41D399(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x70ABFF261710305D(&(Var3.f_8[1 /*8*/])) != unk_0x70ABFF261710305D(""))
						{
							if (!unk_0xBDA20BD415464BD5(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xAE50B46D4D30305D(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x70ABFF261710305D(&(Var3.f_34)) != unk_0x70ABFF261710305D(""))
						{
							if (unk_0xBDA20BD415464BD5(&(Var3.f_34)))
							{
								unk_0x79EE50983E41D399(&(Var3.f_34));
							}
						}
						if (unk_0x70ABFF261710305D(&(Var3.f_8[0 /*8*/])) != unk_0x70ABFF261710305D("") && unk_0x70ABFF261710305D(&(Var3.f_8[0 /*8*/])) != unk_0x70ABFF261710305D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBDA20BD415464BD5(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x79EE50983E41D399(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x70ABFF261710305D(&(Var3.f_8[1 /*8*/])) != unk_0x70ABFF261710305D("") && unk_0x70ABFF261710305D(&(Var3.f_8[1 /*8*/])) != unk_0x70ABFF261710305D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBDA20BD415464BD5(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x79EE50983E41D399(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D("") && unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D("REMOVE_ALL_STATES"))
						{
							if (!unk_0xBDA20BD415464BD5(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xAE50B46D4D30305D(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34074[iParam0] = 1;
					Global_34273[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = unk_0x695481387D3FCB8D(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (unk_0x70ABFF261710305D(&(Var3.f_50)) != unk_0x70ABFF261710305D(""))
						{
							if (unk_0xC15BD08CEEC19256(iVar100, &(Var3.f_50)))
							{
								unk_0x5317BD914F83696F(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x70ABFF261710305D(&(Var3.f_8[1 /*8*/])) != unk_0x70ABFF261710305D(""))
							{
								if (unk_0xC15BD08CEEC19256(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x5317BD914F83696F(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D("") && unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D("REMOVE_ALL_STATES")) && unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC15BD08CEEC19256(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x5317BD914F83696F(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x70ABFF261710305D(&(Var3.f_8[0 /*8*/])) != unk_0x70ABFF261710305D(""))
							{
								if (!unk_0xC15BD08CEEC19256(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xE93C9D22AB95676F(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x70ABFF261710305D(&(Var3.f_8[0 /*8*/])) != unk_0x70ABFF261710305D(""))
							{
								if (unk_0xC15BD08CEEC19256(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x5317BD914F83696F(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D("") && unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D("REMOVE_ALL_STATES")) && unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC15BD08CEEC19256(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x5317BD914F83696F(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x70ABFF261710305D(&(Var3.f_8[1 /*8*/])) != unk_0x70ABFF261710305D(""))
							{
								if (!unk_0xC15BD08CEEC19256(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xE93C9D22AB95676F(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x70ABFF261710305D(&(Var3.f_8[0 /*8*/])) != unk_0x70ABFF261710305D(""))
							{
								if (unk_0xC15BD08CEEC19256(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x5317BD914F83696F(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x70ABFF261710305D(&(Var3.f_8[1 /*8*/])) != unk_0x70ABFF261710305D(""))
							{
								if (unk_0xC15BD08CEEC19256(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x5317BD914F83696F(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D("") && unk_0x70ABFF261710305D(&(Var3.f_8[2 /*8*/])) != unk_0x70ABFF261710305D("REMOVE_ALL_STATES"))
							{
								if (!unk_0xC15BD08CEEC19256(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xE93C9D22AB95676F(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0x397384EC0E21E11E(iVar100);
						}
					}
					Global_34273[iParam0] = 1;
					Global_34074[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x676D4CD42E0837CA(Var3, unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), 1) < 250f)
					{
						uVar98 = unk_0xE933B0ADEB3E80F7(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0x7078A05B99628DFC(uVar98))
						{
							if (iVar1 == 0)
							{
								unk_0x323370FC49529A13(uVar98, 3);
								Global_34273[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xDBF8EC026B0DA8F8(uVar98) != 6 && unk_0xDBF8EC026B0DA8F8(uVar98) != 7) && unk_0xDBF8EC026B0DA8F8(uVar98) != 8)
								{
									unk_0x323370FC49529A13(uVar98, 10);
									Global_34273[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x90BE3D4A8CA18006(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0xF17F4B0641AB2DE1(&(Global_32425[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x7A0541D3CF368247(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x26545538B51562AD(&(Global_32425[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_32878[iParam0] = 0;
				Global_33077[iParam0] = iVar1;
				if (!func_202())
				{
					if (!Global_33674[iParam0])
					{
						Global_33674[iParam0] = 1;
						Global_33873++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_202()
{
	if ((func_26() == -1 || func_26() == 999) && !func_203() == 0)
	{
		return 1;
	}
	return 0;
}

int func_203()
{
	return Global_25121;
}

int func_204(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 46:
			return 42;
			break;
		
		case 47:
			return 43;
			break;
		
		case 49:
			return 44;
			break;
		
		case 50:
			return 45;
			break;
		
		case 8:
			if (unk_0xF426A5DE932B3BEE(Global_101154.f_17264.f_382, 0))
			{
				return 46;
			}
			break;
		
		case 16:
			return 47;
			break;
		
		case 38:
			return 48;
			break;
		
		case 39:
			return 49;
			break;
		
		case 40:
			return 50;
			break;
		
		case 41:
			return 51;
			break;
		
		case 42:
			return 52;
			break;
		
		case 43:
			if (Global_101154.f_7775.f_99.f_58[101])
			{
				return 53;
			}
			else
			{
				return 54;
			}
			break;
		
		case 20:
			return 55;
			break;
	}
	return 0;
}

void func_206(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 46:
			func_207(4, bParam1);
			break;
		
		case 16:
			func_207(6, bParam1);
			break;
		
		case 37:
			func_207(17, bParam1);
			break;
		
		case 31:
			func_207(16, bParam1);
			break;
	}
}

void func_207(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_214(iParam0))
		{
			unk_0x26545538B51562AD(&(Global_101154.f_30959), iVar0);
			if (!bParam1)
			{
				func_212(func_213(iParam0));
				if (!func_211(68))
				{
					func_208("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

void func_208(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_209(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_209(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xC1C5B83BB6719C6C(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xC1C5B83BB6719C6C(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = (unk_0xA0F74982C6AAA9D4() + iParam3);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = ((unk_0xA0F74982C6AAA9D4() + iParam3) + iParam4);
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_210();
	}
}

void func_210()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xF426A5DE932B3BEE(Global_101154.f_24935.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_212(var uParam0)
{
	unk_0x5411F6B456B04A6B("");
	unk_0x41CB076130ACB996("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", uParam0);
}

char* func_213(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_STOMIC";
			break;
		
		case 1:
			return "CM_STOFRA";
			break;
		
		case 2:
			return "CM_STOTRE";
			break;
		
		case 3:
			return "CM_STOAMA";
			break;
		
		case 4:
			return "CM_STOBEV";
			break;
		
		case 5:
			return "CM_STOBRA";
			break;
		
		case 6:
			return "CM_STOCHR";
			break;
		
		case 7:
			return "CM_STODAV";
			break;
		
		case 8:
			return "CM_STODEV";
			break;
		
		case 9:
			return "CM_STODRF";
			break;
		
		case 10:
			return "CM_STOFAB";
			break;
		
		case 11:
			return "CM_STOFLO";
			break;
		
		case 12:
			return "CM_STOJIM";
			break;
		
		case 13:
			return "CM_STOLAM";
			break;
		
		case 14:
			return "CM_STOLAZ";
			break;
		
		case 15:
			return "CM_STOLES";
			break;
		
		case 16:
			return "CM_STOMAU";
			break;
		
		case 17:
			return "CM_STOTHO";
			break;
		
		case 18:
			return "CM_STONER";
			break;
		
		case 19:
			return "CM_STOPAT";
			break;
		
		case 20:
			return "CM_STOSIM";
			break;
		
		case 21:
			return "CM_STOSOL";
			break;
		
		case 22:
			return "CM_STOSTE";
			break;
		
		case 23:
			return "CM_STOSTR";
			break;
		
		case 24:
			return "CM_STOTAN";
			break;
		
		case 25:
			return "CM_STOTAO";
			break;
		
		case 26:
			return "CM_STOTRA";
			break;
		
		case 27:
			return "CM_STOWAD";
			break;
	}
	return "ERROR!";
}

int func_214(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 28)
	{
		return unk_0xF426A5DE932B3BEE(Global_101154.f_30959, iParam0);
	}
	return 0;
}

void func_215(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101154.f_7303[iParam0] = 1;
	Global_101154.f_7303.f_236[iParam0] = (unk_0xA0F74982C6AAA9D4() + iParam1);
}

int func_216(char* sParam0)
{
	int iVar0;
	
	iVar0 = 1424;
	if (!unk_0x981A9FE62D42A035(sParam0))
	{
		return 1;
	}
	if (unk_0xC1C5B83BB6719C6C(sParam0, "controller_Races"))
	{
		if (unk_0xD32535FA4397160F(joaat("controller_races")) > 0)
		{
			return 1;
		}
		iVar0 = 128;
	}
	unk_0xA51826E3518111A3(sParam0);
	if (unk_0x9A8E9A1E029E9A5A(sParam0))
	{
		unk_0xE81651AD79516E48(sParam0, iVar0);
		unk_0xABAEB0389A1F036F(sParam0);
		return 1;
	}
	return 0;
}

int func_217()
{
	return func_218(unk_0x3AA961419D971CB2(), 0);
}

int func_218(char* sParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x70ABFF261710305D(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_178(iVar0, &uVar1);
		if (unk_0x70ABFF261710305D(uVar1) == iVar33)
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

bool func_219(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_230(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_220(sParam2, iParam3, 0);
}

int func_220(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x94DA6AACA7F07289(0);
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
					func_229();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1BF2632AED6B5924())
		{
			return 0;
		}
		if (func_228(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_227();
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
			unk_0xF17F4B0641AB2DE1(&Global_2283, 20);
			unk_0xF17F4B0641AB2DE1(&Global_2284, 17);
			unk_0xF17F4B0641AB2DE1(&Global_2285, 0);
			if (bParam2)
			{
				func_225();
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
			if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
			{
				if (unk_0x1FEDE585C0F25C08(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (func_224())
				{
					return 0;
				}
				if (unk_0x431C14C947878B67(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x225B3357C492A629(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x397ABA0C937BB0B4(unk_0x27D769C59BC9D030(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69489)
				{
					if (unk_0xA8ED23ED7AA60A97(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511()))
					{
						return 0;
					}
					if (unk_0xB0821632434D6AED(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x37C10326493962AC(unk_0x4D29100D094E5511()))
					{
						return 0;
					}
				}
			}
			if (func_223())
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
				if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
				{
					return 0;
				}
			}
			func_222();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_221();
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
		func_229();
	}
	return 0;
}

void func_221()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x94DA6AACA7F07289(0);
	Global_15712 = 1;
}

void func_222()
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
	unk_0xF17F4B0641AB2DE1(&Global_2284, 16);
}

int func_223()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar1, 1);
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x32B2DBD1EB9EECE3() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xCDA4E7364CE84AA7(unk_0x27D769C59BC9D030(), 78, 1))
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

void func_225()
{
	if (func_108(14))
	{
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[2 /*29*/])
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
		Global_14413 = func_226();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

int func_226()
{
	func_171();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_227()
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

bool func_228(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

void func_229()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if ((unk_0x0EFEEF8E6B0B4E34() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(1);
		Global_15712 = 6;
		return;
	}
}

void func_230(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

float func_231(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	if (!unk_0x2006A8C1BA2AFE80(iParam1, 0))
	{
		Var3 = { unk_0xA8CFDE65C45F813B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xA8CFDE65C45F813B(iParam1, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Var3, iParam2);
}

int func_232()
{
	if (Global_15712 != 0 || unk_0x1BF2632AED6B5924())
	{
		return 1;
	}
	return 0;
}

void func_233()
{
	if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) == 0)
	{
		iLocal_868 = 0;
		iLocal_869 = 0;
		func_266();
		if (unk_0xDD5B7E23D882DABD(Local_96.f_28[0], Local_96.f_35[0]) && unk_0xDD5B7E23D882DABD(Local_96.f_28[1], Local_96.f_35[0]))
		{
			unk_0x37B592C0F74990D2(Local_96.f_35[0], 10);
			if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0) || unk_0xA0F74982C6AAA9D4() > iLocal_615 + 30000)
			{
				if (!func_232())
				{
					unk_0xA0342EB4AE1476FC(5f, 12f, 0);
					unk_0x34EB68F89DCC1D05(unk_0xD7C4E2CB0B216852(Local_96.f_35[0], 200f, 0f, 50f), unk_0xD7C4E2CB0B216852(Local_96.f_35[0], -200f, 0f, -50f), 400f, 0, 1, 1);
					func_238();
					iLocal_927 = 17;
				}
			}
			else if (iLocal_876 == 0)
			{
				if (func_237(&uLocal_408, "MIN2AU", "MIN2_JJ8", "MIN2_JJ8_1", 8, 0, 0))
				{
					iLocal_876 = 1;
				}
			}
			else if (iLocal_916 == 0)
			{
				if (!func_232())
				{
					func_236("MIN2_47", 7500, 0);
					iLocal_605 = unk_0xA0F74982C6AAA9D4();
					iLocal_916 = 1;
				}
			}
			else if (!func_235("MIN2_47", 0, 0))
			{
				if (iLocal_600 < 6)
				{
					if (unk_0xA0F74982C6AAA9D4() > iLocal_605 + 9000)
					{
						if (!func_232())
						{
							if (func_219(&uLocal_408, "MIN2AU", "MIN2_BYE", 7, 0, 0, 0))
							{
								iLocal_600++;
								iLocal_605 = unk_0xA0F74982C6AAA9D4();
							}
						}
					}
				}
			}
		}
		if (func_511(Local_96.f_28[1]))
		{
			if (!unk_0x9A4E2270C2271219(Local_96.f_28[1], 0))
			{
				if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 0)
				{
					unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 1073741824, 1, 0);
				}
			}
		}
		if (func_511(Local_96.f_28[0]))
		{
			if (!unk_0x9A4E2270C2271219(Local_96.f_28[0], 0))
			{
				if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 0)
				{
					unk_0x835BBE043A81D6DD(Local_96.f_28[0], Local_96.f_35[0], 60000, 0, 1073741824, 1, 0);
				}
			}
		}
	}
	else
	{
		iLocal_868 = 1;
		if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
		{
			if (!unk_0x7B4654D62B7E0E9E(iLocal_194))
			{
				iLocal_194 = func_234(Local_96.f_35[0], 1, 5);
			}
		}
		else
		{
			if (iLocal_869 == 0)
			{
				func_236("MIN2_COPS", 7500, 0);
				iLocal_869 = 1;
			}
			func_505(&iLocal_194);
		}
	}
}

int func_234(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_6(uParam0))
	{
		iVar0 = unk_0xABF4388EB11AD060(uParam0);
		unk_0xD1B211F2EB392B46(iVar0, iParam1);
		unk_0x1FDCAFA848ABB8FA(iVar0, iParam2);
		unk_0xC5B4E9487339A2BB(iVar0, 1f);
	}
	return iVar0;
}

bool func_235(char* sParam0, int iParam1, int iParam2)
{
	unk_0x907B9289657244FB(sParam0);
	if (iParam1 == 1)
	{
		unk_0x2B088D6251C2080D(iParam2);
	}
	return unk_0x07B8D9CA22BFDA75();
}

void func_236(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xA1F5C1FF1B6B5069(sParam0);
	unk_0xB1547516FF59A048(iParam1, 1);
}

bool func_237(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_230(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_220(sParam2, iParam4, 0);
}

void func_238()
{
	int iVar0;
	var uVar1;
	
	func_505(&(uLocal_189[iLocal_574]));
	func_505(&iLocal_194);
	if (func_5(Local_96.f_35[0]))
	{
		if (func_511(Local_96.f_28[0]))
		{
			func_265(&uLocal_408, 6, Local_96.f_28[1], "JOSEF", 0, 1);
			if (iLocal_876 == 0)
			{
				func_219(&uLocal_408, "MIN2AU", "MIN2_JJ8", 8, 0, 0, 0);
			}
			func_239(2, 1, 500, 0, 0);
			unk_0x2F3C014D9C5C487D(Local_96.f_28[0], 1);
			unk_0x2F3C014D9C5C487D(Local_96.f_28[1], 1);
		}
	}
	iLocal_599 = unk_0xA0F74982C6AAA9D4();
	while (iLocal_581 < 2)
	{
		unk_0x14CA049761F06FFB("SF_AAW", 0);
		if (func_5(Local_96.f_35[0]))
		{
			if (func_511(Local_96.f_28[0]))
			{
				if (iLocal_581 == 0)
				{
					if (unk_0xA0F74982C6AAA9D4() > (iLocal_599 + iVar0))
					{
						unk_0xA0342EB4AE1476FC(3f, 3f, 0);
						iLocal_581 = 1;
					}
				}
				if (iLocal_581 == 1)
				{
					if (unk_0xA0F74982C6AAA9D4() > (iLocal_599 + iVar0 + 500))
					{
						if (func_5(Local_96.f_35[0]))
						{
							if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
							{
								func_219(&uLocal_408, "MIN2AU", "MIN2_PUSH", 7, 0, 0, 0);
							}
							else
							{
								func_237(&uLocal_408, "MIN2AU", "MIN2_JJ8", "MIN2_JJ8_2", 7, 0, 0);
							}
							unk_0x7CC4EA4FED507D94(Local_96.f_35[0], 1);
							unk_0x33A0CEA494F4C2A3(&uVar1);
							unk_0x2F4E6A5807842BEF(0, Local_96.f_35[0]);
							if (unk_0x98CEDC9398D49BB8(Local_96.f_35[0], 599.2107f, 2814.524f, 37.92305f, 592.2786f, 2918.858f, 67.9005f, 110f, 0, 1, 0))
							{
								unk_0x395AA67734CB52F2(0, Local_96.f_35[0], 657.2675f, 2820.99f, 40.319f, 16f, 0, joaat("pranger"), 786468, 10f, 200f);
								unk_0x395AA67734CB52F2(0, Local_96.f_35[0], 662.5688f, 2702.095f, 39.7719f, 20f, 0, joaat("pranger"), 786468, 10f, 200f);
								unk_0xF55CF905F405E357(0, Local_96.f_35[0], 100f, 786468);
							}
							else if (unk_0x98CEDC9398D49BB8(Local_96.f_35[0], 535.598f, 2706.873f, 40.61375f, 529.4959f, 2810.597f, 50.72031f, 36f, 0, 1, 0))
							{
								unk_0x395AA67734CB52F2(0, Local_96.f_35[0], 538.209f, 2696.493f, 41.2063f, 16f, 0, joaat("pranger"), 786468, 10f, 200f);
								unk_0xF55CF905F405E357(0, Local_96.f_35[0], 100f, 786468);
							}
							else
							{
								unk_0xF55CF905F405E357(0, Local_96.f_35[0], 100f, 786468);
							}
							unk_0x33F83FC0F5F458E3(uVar1);
							unk_0x8B8674266D533E9F(Local_96.f_28[0], uVar1);
							iLocal_581 = 2;
						}
					}
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_5(Local_96.f_35[0]))
	{
		unk_0x37B592C0F74990D2(Local_96.f_35[0], 2);
	}
}

void func_239(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_240(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xD0D748C6C14C0E92(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xE2A8B026FA4DDFFF(iVar1, iVar0, 1);
	}
}

int func_240(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_264();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_263(99, 1);
					func_262(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_262(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_262(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_248(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_247(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_262(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_247(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_262(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_262(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_262(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x45755F80A3E63D8B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_247(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_246(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_263(95, iParam3);
					break;
				
				case 1:
					func_263(97, iParam3);
					break;
				
				case 2:
					func_263(96, iParam3);
					break;
			}
			func_263(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_243(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_243(iVar1);
	}
	iVar5 = (Global_52923[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52923[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52923[iVar2] = 2147483647;
				}
				else
				{
					Global_52923[iVar2] = (Global_52923[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_262(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_262(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_262(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52923[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52923[iVar2];
			Global_52923[iVar2] = (Global_52923[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101154.f_25089.f_233[iVar2 /*69*/]++;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_1++;
		if (Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_242(iParam0);
	if (Global_35711 == 15)
	{
		func_241(0);
	}
	return 1;
}

void func_241(bool bParam0)
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
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!bParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_242(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xE2A8B026FA4DDFFF(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xE2A8B026FA4DDFFF(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xE2A8B026FA4DDFFF(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_243(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x0E063DDE8855EC52())
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0) || unk_0xF426A5DE932B3BEE(Global_2097152[func_245() /*10375*/].f_7704.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_25089.f_471), iParam0);
		unk_0xF17F4B0641AB2DE1(&(Global_2097152[func_245() /*10375*/].f_7704.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5411F6B456B04A6B("COUP_RED");
		unk_0x2B088D6251C2080D(func_244(iParam0));
		unk_0xE8386CF1E84A5B3D(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_245()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_246(int iParam0)
{
	func_263(93, iParam0);
	func_263(29, iParam0);
	func_263(30, iParam0);
}

bool func_247(int iParam0)
{
	if (!unk_0x0E063DDE8855EC52())
	{
		return unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0);
	}
	return unk_0xF426A5DE932B3BEE(Global_2097152[func_245() /*10375*/].f_7704.f_10, iParam0);
}

int func_248(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xB0B3AFA733DD5B94(27))
	{
		return 0;
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD0D748C6C14C0E92(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xE2A8B026FA4DDFFF(joaat("num_cash_spent"), iVar1, 1);
		func_27(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_249(27, 1);
	return 1;
}

int func_249(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_250(iParam0, iParam1);
}

int func_250(int iParam0, int iParam1)
{
	if (func_108(14) && !func_261(iParam0))
	{
		return 0;
	}
	if (unk_0xB0B3AFA733DD5B94(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return 0;
	}
	if (func_260(&Global_2563627))
	{
		if (func_258(&Global_2563627, iParam0))
		{
			return 0;
		}
		if (func_251(&Global_2563627, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xD6FCD24FAC19ACBA(iParam0))
		{
			return 0;
		}
		if (unk_0xB0B3AFA733DD5B94(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_251(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xB0B3AFA733DD5B94(iParam1))
	{
		return 0;
	}
	if (func_108(14) && !func_261(iParam1))
	{
		return 0;
	}
	if (func_258(uParam0, iParam1))
	{
		return 0;
	}
	if (func_257(uParam0) < 0f)
	{
		func_256(uParam0, 0);
	}
	func_254(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_252(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_252(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xB0B3AFA733DD5B94(iParam1))
	{
		return 0;
	}
	if (func_108(14) && !func_261(iParam1))
	{
		return 0;
	}
	if (func_258(uParam0, iParam1))
	{
		return 0;
	}
	if (func_257(uParam0) < 0f)
	{
		func_256(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_253(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_253(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_254(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_255(uParam0, iVar0);
		iVar0++;
	}
	func_256(uParam0, (Global_2563626 - 0.5f));
}

void func_255(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_256(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_257(var uParam0)
{
	return uParam0->f_72;
}

bool func_258(var uParam0, int iParam1)
{
	return func_259(uParam0, iParam1) != -1;
}

int func_259(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_260(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_262(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD0D748C6C14C0E92(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE2A8B026FA4DDFFF(iParam0, iVar0, 1);
}

void func_263(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x0E063DDE8855EC52())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		unk_0xD0D748C6C14C0E92(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE2A8B026FA4DDFFF(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_264()
{
	int iVar0;
	
	if (unk_0xB3081451628A5D6C())
	{
		unk_0xD0D748C6C14C0E92(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		unk_0xD0D748C6C14C0E92(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		unk_0xD0D748C6C14C0E92(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

void func_265(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69489)
	{
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 0);
			}
			else
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 1);
			}
		}
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 0);
			}
			else
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 1);
			}
		}
	}
}

void func_266()
{
	struct<6> Var0;
	
	if (((func_6(Local_96.f_35[0]) && unk_0x7B4654D62B7E0E9E(iLocal_194)) && unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
	{
		if (!unk_0xF40DABEAD014F84B(Local_96.f_28[0], unk_0x27D769C59BC9D030()))
		{
			unk_0x85FD30B510E7C05E(Local_96.f_28[0], unk_0x27D769C59BC9D030(), -1, 0, 2);
		}
		if (!unk_0xF40DABEAD014F84B(Local_96.f_28[1], unk_0x27D769C59BC9D030()))
		{
			unk_0x85FD30B510E7C05E(Local_96.f_28[1], unk_0x27D769C59BC9D030(), -1, 0, 2);
		}
	}
	if (unk_0x7B4654D62B7E0E9E(uLocal_189[iLocal_574]))
	{
		if (!iLocal_885)
		{
			if (iLocal_593 != 0)
			{
				if (!func_232())
				{
					if (!func_235("MIN2_06", 0, 0))
					{
						if (func_219(&uLocal_408, "MIN2AU", "MIN2_CAR3", 7, 0, 0, 0))
						{
							iLocal_885 = 1;
						}
					}
					else if (func_219(&uLocal_408, "MIN2AU", "MIN2_CAR3", 7, 1, 0, 0))
					{
						iLocal_885 = 1;
					}
				}
				else
				{
					iLocal_885 = 1;
				}
			}
		}
	}
	if (((func_6(Local_96.f_35[0]) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
	{
		if (!func_232() && unk_0x7B4654D62B7E0E9E(uLocal_189[iLocal_574]))
		{
			if (iLocal_580 >= 4)
			{
				if (iLocal_899 == 0)
				{
					Local_896 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
					iLocal_899 = 1;
				}
				else if (iLocal_899 < 4)
				{
					if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 267.2497f, 2852.167f, 42.6129f, 1) > (unk_0x676D4CD42E0837CA(Local_896, 267.2497f, 2852.167f, 42.6129f, 1) + 200f))
					{
						if (!func_277())
						{
							if (func_219(&uLocal_408, "MIN2AU", "MIN2_WRONG", 7, 0, 0, 0))
							{
								iLocal_899++;
								Local_896 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
							}
						}
						else if (func_219(&uLocal_408, "MIN2AU", "MIN2_WRONG", 7, 1, 0, 0))
						{
							iLocal_899++;
							Local_896 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
						}
					}
				}
				if (unk_0xA0F74982C6AAA9D4() > iLocal_620 + 9000)
				{
					if (iLocal_619 < 3)
					{
						if (unk_0xECC01072E61D2F3A(Local_96.f_35[0]) < 0.1f)
						{
							if (!func_277())
							{
								if (func_219(&uLocal_408, "MIN2AU", "MIN2_STOP", 7, 0, 0, 0))
								{
									iLocal_619++;
									iLocal_620 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(2000, 4000));
								}
							}
							else if (func_219(&uLocal_408, "MIN2AU", "MIN2_STOP", 7, 1, 0, 0))
							{
								iLocal_619++;
								iLocal_620 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(2000, 4000));
							}
						}
					}
				}
			}
			if (unk_0xA0F74982C6AAA9D4() > iLocal_622 + 15000)
			{
				if (iLocal_621 < 6)
				{
					if (unk_0xF6E7E32D0D604675(Local_96.f_35[0]))
					{
					}
				}
			}
		}
	}
	else if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
	{
		iLocal_620 = unk_0xA0F74982C6AAA9D4() + 5000;
	}
	if (iLocal_927 == 5)
	{
		if (iLocal_826 == 1)
		{
			if (iLocal_852 == 0)
			{
				if (func_511(uLocal_166[0]))
				{
					if (func_276(unk_0x27D769C59BC9D030(), uLocal_166[0], 50f, 1) && func_276(Local_96.f_28[0], uLocal_166[0], 20f, 1))
					{
						if (func_219(&uLocal_408, "MIN2AU", "MIN2_CC1", 7, 0, 0, 0))
						{
							unk_0xF01E9C7FDA2976B1("DisableAbortConversationForRagdoll", 1);
							iLocal_889 = 1;
							iLocal_852 = 1;
						}
					}
				}
			}
			else if (unk_0x77F1B7F6C32990D6(uLocal_166[0], unk_0x27D769C59BC9D030(), 1) && unk_0x6AE62C1DA604CA92(uLocal_166[0], joaat("weapon_stungun"), 0))
			{
				if (func_276(unk_0x27D769C59BC9D030(), Local_96.f_28[0], 30f, 1))
				{
					if (iLocal_612 < 5)
					{
						if (unk_0xA0F74982C6AAA9D4() > iLocal_613 + 7000)
						{
							if (!func_232())
							{
								if (func_219(&uLocal_408, "MIN2AU", "MIN2_STUN", 7, 0, 0, 0))
								{
									iLocal_612++;
									iLocal_613 = unk_0xA0F74982C6AAA9D4();
								}
							}
						}
					}
				}
				unk_0x1393E54C663BBD20(uLocal_166[0]);
				unk_0xEFDDBE1D72250E1B(uLocal_166[0]);
			}
		}
	}
	else
	{
		if (func_231(Local_96.f_35[0], unk_0x27D769C59BC9D030(), 1) < 30f)
		{
			if (unk_0x7B4654D62B7E0E9E(iLocal_194) && !func_235("MIN2_19", 0, 0))
			{
				func_275();
				if (unk_0xA0F74982C6AAA9D4() > iLocal_594 + 7000)
				{
					if (iLocal_593 == 0)
					{
						if (iLocal_580 >= 4)
						{
							if (!func_232())
							{
								if (iLocal_595 == 0)
								{
									if ((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && iLocal_927 < 8)
									{
										if (func_237(&uLocal_408, "MIN2AU", "MIN2_CAR", "MIN2_CAR_2", 7, 0, 0))
										{
											iLocal_593 = 1;
											iLocal_594 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(2000, 4000));
										}
									}
								}
							}
						}
					}
					else if (iLocal_593 == 1)
					{
						if (!func_232())
						{
							if (unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
							{
								if (func_237(&uLocal_408, "MIN2AU", "MIN2_CAR", "MIN2_CAR_3", 7, 0, 0))
								{
									iLocal_593 = 2;
									iLocal_594 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(2000, 4000));
								}
							}
						}
					}
					else if (iLocal_593 < 5)
					{
						if (!func_232())
						{
							if (unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
							{
								if (func_219(&uLocal_408, "MIN2AU", "MIN2_CAR2", 7, 0, 0, 0))
								{
									iLocal_885 = 0;
									iLocal_593++;
									iLocal_594 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(2000, 4000));
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_927 == 8)
		{
			if (iLocal_838 == 1)
			{
				if (iLocal_854 == 0)
				{
					if (func_511(iLocal_171))
					{
						if (func_276(unk_0x27D769C59BC9D030(), iLocal_171, 50f, 1) && func_276(Local_96.f_28[1], iLocal_171, 20f, 1))
						{
							func_265(&uLocal_408, 4, iLocal_171, "IMMIGRANTMALE", 0, 1);
							if (func_219(&uLocal_408, "MIN2AU", "MIN2_CC2", 7, 0, 0, 0))
							{
								unk_0xF01E9C7FDA2976B1("DisableAbortConversationForRagdoll", 1);
								iLocal_890 = 1;
								iLocal_854 = 1;
							}
						}
					}
				}
				else if (unk_0x77F1B7F6C32990D6(iLocal_171, unk_0x27D769C59BC9D030(), 1) && unk_0x6AE62C1DA604CA92(iLocal_171, joaat("weapon_stungun"), 0))
				{
					if (func_276(unk_0x27D769C59BC9D030(), Local_96.f_28[0], 30f, 1))
					{
						if (iLocal_612 < 5)
						{
							if (unk_0xA0F74982C6AAA9D4() > iLocal_613 + 7000)
							{
								if (!func_232())
								{
									if (func_219(&uLocal_408, "MIN2AU", "MIN2_STUN", 7, 0, 0, 0))
									{
										iLocal_612++;
										iLocal_613 = unk_0xA0F74982C6AAA9D4();
									}
								}
							}
						}
					}
					unk_0x1393E54C663BBD20(iLocal_171);
					unk_0xEFDDBE1D72250E1B(iLocal_171);
				}
			}
			if (iLocal_826 == 1)
			{
				if (iLocal_853 == 0)
				{
					if (func_511(uLocal_166[iLocal_574]))
					{
						if (func_276(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 50f, 1) && func_276(Local_96.f_28[0], uLocal_166[iLocal_574], 20f, 1))
						{
							func_265(&uLocal_408, 5, uLocal_166[iLocal_574], "IMMIGRANTMALE2", 0, 1);
							if (func_219(&uLocal_408, "MIN2AU", "MIN2_CC3", 7, 0, 0, 0))
							{
								unk_0xF01E9C7FDA2976B1("DisableAbortConversationForRagdoll", 1);
								iLocal_889 = 1;
								iLocal_853 = 1;
							}
						}
					}
				}
				else if (unk_0x77F1B7F6C32990D6(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 1) && unk_0x6AE62C1DA604CA92(uLocal_166[iLocal_574], joaat("weapon_stungun"), 0))
				{
					if (func_276(unk_0x27D769C59BC9D030(), Local_96.f_28[0], 30f, 1))
					{
						if (iLocal_612 < 5)
						{
							if (unk_0xA0F74982C6AAA9D4() > iLocal_613 + 7000)
							{
								if (!func_232())
								{
									if (func_219(&uLocal_408, "MIN2AU", "MIN2_STUN", 7, 0, 0, 0))
									{
										iLocal_612++;
										iLocal_613 = unk_0xA0F74982C6AAA9D4();
									}
								}
							}
						}
					}
					unk_0x1393E54C663BBD20(uLocal_166[iLocal_574]);
					unk_0xEFDDBE1D72250E1B(uLocal_166[iLocal_574]);
				}
			}
			if (unk_0xD2CFFE76B625AE55(iLocal_171))
			{
				if (unk_0xD2CFFE76B625AE55(uLocal_166[1]))
				{
					if (unk_0x7047948B09B46E3F(iLocal_171) || unk_0x7047948B09B46E3F(uLocal_166[1]))
					{
						if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
						{
							if (func_231(Local_96.f_35[0], unk_0x27D769C59BC9D030(), 1) < 30f)
							{
								if (unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
								{
									if (unk_0xA0F74982C6AAA9D4() > iLocal_594 + 9000)
									{
										if (iLocal_593 == 0)
										{
											if (!func_232())
											{
												if (func_237(&uLocal_408, "MIN2AU", "MIN2_CAR", "MIN2_CAR_1", 7, 0, 0))
												{
													iLocal_593 = 1;
													iLocal_594 = unk_0xA0F74982C6AAA9D4();
												}
											}
										}
										else if (iLocal_593 == 1)
										{
											if (!func_232())
											{
												if (func_237(&uLocal_408, "MIN2AU", "MIN2_CAR", "MIN2_CAR_2", 7, 0, 0))
												{
													iLocal_593 = 2;
													iLocal_594 = unk_0xA0F74982C6AAA9D4();
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
		if (!func_235("MIN2_01", 0, 0))
		{
			if (iLocal_927 == 2 || iLocal_927 == 3)
			{
				iLocal_579 = unk_0xA0F74982C6AAA9D4();
				if (iLocal_579 > iLocal_578 + 7000)
				{
					if (iLocal_580 < 1)
					{
						if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
						{
							if (unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_stungun"), 0))
							{
								if (func_219(&uLocal_408, "MIN2AU", "MIN2_JJ5b", 7, 0, 0, 0))
								{
									unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), joaat("weapon_stungun"), 1);
									iLocal_580 = 1;
								}
							}
							else if (func_219(&uLocal_408, "MIN2AU", "MIN2_JJ5", 7, 0, 0, 0))
							{
								unk_0xAC9A80BE63D6295F(unk_0x27D769C59BC9D030(), joaat("weapon_stungun"), 1, 1, 1);
								unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), joaat("weapon_stungun"), 1);
								iLocal_580 = 1;
							}
						}
					}
				}
			}
			if (iLocal_927 == 3)
			{
				if (!func_232())
				{
					if (iLocal_850 == 0)
					{
						iLocal_850 = 1;
					}
					if (iLocal_580 < 2)
					{
						if (func_5(Local_96.f_35[0]))
						{
							if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
							{
								if (func_219(&uLocal_408, "MIN2AU", "MIN2_JJ1", 5, 0, 0, 0))
								{
									iLocal_580 = 2;
								}
							}
						}
					}
					else if (!iLocal_882)
					{
						if ((((((func_5(Local_96.f_35[0]) && func_511(uLocal_166[0])) && !func_276(Local_96.f_35[0], uLocal_166[0], 50f, 1)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0)) && !func_235("MIN2_48", 0, 0))
						{
							if (func_219(&uLocal_408, "MIN2AU", "MIN2_JJ4", 5, 0, 0, 0))
							{
								iLocal_882 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_927 == 6)
		{
			if (unk_0x7B4654D62B7E0E9E(uLocal_189[iLocal_574]))
			{
				iLocal_579 = unk_0xA0F74982C6AAA9D4();
				if (iLocal_579 > iLocal_578 + 100)
				{
					if (iLocal_580 < 3)
					{
						if (iLocal_843 == 0)
						{
							if (func_219(&uLocal_408, "MIN2AU", "MIN2_JJ6", 5, 1, 0, 0))
							{
								iLocal_580 = 3;
							}
						}
					}
				}
			}
		}
		if (iLocal_927 == 6)
		{
			if (iLocal_580 == 3)
			{
				if (iLocal_833 == 1)
				{
					if (!func_232())
					{
						if (func_5(Local_96.f_35[0]))
						{
							if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
							{
								if (iLocal_843 == 0)
								{
									if (func_511(uLocal_166[0]))
									{
										if (func_511(Local_96.f_28[0]))
										{
											unk_0x85FD30B510E7C05E(uLocal_166[0], Local_96.f_28[0], -1, 0, 2);
										}
									}
									if (func_219(&uLocal_408, "MIN2AU", "MIN2_IMM1", 5, 0, 0, 0))
									{
										iLocal_580 = 4;
									}
								}
							}
						}
					}
				}
			}
			else if (iLocal_580 == 4)
			{
				if (unk_0xC2AE0A979757C34A(uLocal_401))
				{
					Var0 = { func_274() };
					if (unk_0xC1C5B83BB6719C6C(&Var0, "MIN2_IMM1_7") && unk_0xB3BBF60126795AAD(uLocal_401) < 0.54f)
					{
						func_272();
					}
					else if (unk_0xB3BBF60126795AAD(uLocal_401) >= 0.54f)
					{
						if (!iLocal_873)
						{
							func_271(&uLocal_408, "MIN2AU", "MIN2_IMM1", "MIN2_IMM1_9", 7, 0, 0);
							iLocal_873 = 1;
						}
					}
				}
				if (func_270(unk_0x27D769C59BC9D030(), 267.2497f, 2852.167f, 42.6129f, 1) < 70f)
				{
					func_272();
				}
			}
			else if (iLocal_580 == 5)
			{
				if (func_270(unk_0x27D769C59BC9D030(), 267.2497f, 2852.167f, 42.6129f, 1) < 70f)
				{
					func_272();
				}
			}
		}
		if (iLocal_927 == 11)
		{
			if (unk_0x7B4654D62B7E0E9E(uLocal_189[iLocal_574]))
			{
				iLocal_579 = unk_0xA0F74982C6AAA9D4();
				if (iLocal_579 > iLocal_578 + 7000)
				{
					if (iLocal_580 <= 5)
					{
						if (func_219(&uLocal_408, "MIN2AU", "MIN2_JJ7", 5, 0, 0, 0))
						{
							iLocal_580 = 5;
						}
					}
				}
			}
		}
		if (iLocal_927 == 12)
		{
			if (unk_0xA0F74982C6AAA9D4() > iLocal_576 + 7000)
			{
				if (iLocal_580 < 6)
				{
					if (iLocal_833 == 1)
					{
						if (!func_232())
						{
							if (func_219(&uLocal_408, "MIN2AU", "MIN2_JJ2", 5, 0, 0, 0))
							{
								iLocal_580 = 6;
							}
						}
					}
				}
			}
		}
		if (iLocal_927 == 15)
		{
			if (iLocal_832 == 1)
			{
				iLocal_579 = unk_0xA0F74982C6AAA9D4();
				if (iLocal_579 > iLocal_578 + 7000)
				{
					if (iLocal_580 < 7)
					{
						iLocal_580 = 7;
					}
				}
			}
		}
	}
	if (iLocal_927 == 3)
	{
		if (unk_0x1C48F76B3D032074(uLocal_166[0], uLocal_157[0], 0))
		{
			if (func_269(unk_0x27D769C59BC9D030(), uLocal_166[0]) < 30f)
			{
				if (iLocal_623 == 0)
				{
					if (!unk_0xBD5D1DC3ADCC7F23(uLocal_166[0]))
					{
						func_267(uLocal_166[0], "MIN2_ACAA_01", "MANUEL", 0);
					}
					else
					{
						iLocal_623 = 1;
						iLocal_624 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(2000, 4000));
					}
				}
				else if (iLocal_623 == 1)
				{
					if (unk_0xA0F74982C6AAA9D4() > iLocal_624 + 4000)
					{
						if (!unk_0xBD5D1DC3ADCC7F23(uLocal_166[0]))
						{
							func_267(uLocal_166[0], "MIN2_ACAA_02", "MANUEL", 0);
						}
						else
						{
							iLocal_623 = 2;
							iLocal_624 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(2000, 4000));
						}
					}
				}
				else if (iLocal_623 == 2)
				{
					if (unk_0xA0F74982C6AAA9D4() > iLocal_624 + 4000)
					{
						if (!unk_0xBD5D1DC3ADCC7F23(uLocal_166[0]))
						{
							func_267(uLocal_166[0], "MIN2_ACAA_03", "MANUEL", 0);
						}
						else
						{
							iLocal_623 = 3;
						}
					}
				}
			}
		}
	}
}

void func_267(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x1D6AFE0F8AC2F140(uParam0, sParam1, sParam2, func_268(iParam3), 0);
}

int func_268(int iParam0)
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

float func_269(int iParam0, int iParam1)
{
	return func_231(iParam0, iParam1, 1);
}

float func_270(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Param1, iParam4);
}

int func_271(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_230(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 1;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_220(sParam2, iParam4, 0);
}

void func_272()
{
	Global_14578 = 0;
	func_273();
}

void func_273()
{
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0xF022734652B12EB3();
		Global_16723 = 0;
		unk_0x94DA6AACA7F07289(1);
		Global_15712 = 6;
		return;
	}
}

struct<6> func_274()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x351E0C865946978E();
		iVar6 = (iVar6 + Global_16722);
		if (iVar6 > -1)
		{
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_275()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
	{
		iVar0 = unk_0xF67151DFE5F974F3(unk_0x27D769C59BC9D030());
		if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
		{
			iVar1 = unk_0x9297C590C99228DC(iVar0, 0);
			if (!unk_0xE4F7206742848BAF(iVar1))
			{
				if (iVar1 != unk_0x27D769C59BC9D030())
				{
					if (unk_0xE24B37600DCB21FC(iVar1))
					{
						if (!unk_0xFB6EC5803E0147E0(iVar1, unk_0x27D769C59BC9D030()))
						{
							unk_0x85FD30B510E7C05E(iVar1, unk_0x27D769C59BC9D030(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

bool func_276(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(iParam0, iParam3), unk_0xA8CFDE65C45F813B(iParam1, iParam3)) <= (fParam2 * fParam2);
}

int func_277()
{
	if ((((((((func_235("MIN2_COPS", 0, 0) || func_235("MIN2_47", 0, 0)) || func_235("MIN2_48", 0, 0)) || func_235("MIN2_31", 0, 0)) || func_235("MIN2_01", 0, 0)) || func_235("MIN2_49", 0, 0)) || func_235("MIN2_06", 0, 0)) || func_235("MIN2_08", 0, 0)) || func_235("MIN2_33", 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_278()
{
	unk_0x66EEFE13E1BFC898(2);
	if (iLocal_863 == 0)
	{
		if (unk_0xA0F74982C6AAA9D4() > iLocal_589 + 5000)
		{
			unk_0x68BD4F826EFDDC53("MM2_START_STA");
			iLocal_863 = 1;
		}
	}
	if (func_511(Local_96.f_28[0]))
	{
		if (func_511(Local_96.f_28[1]))
		{
			if (iLocal_837 == 1)
			{
				if (iLocal_838 == 0)
				{
					if (func_5(Local_96.f_35[0]))
					{
						if ((!func_276(iLocal_171, Local_96.f_28[0], 10f, 1) && !func_276(iLocal_171, Local_96.f_28[1], 10f, 1)) && !func_276(iLocal_171, unk_0x27D769C59BC9D030(), 10f, 1))
						{
							if (!unk_0xA8ED23ED7AA60A97(iLocal_171))
							{
								iLocal_611 = 0;
								if (!unk_0xBD036012AF60D938(iLocal_171))
								{
									iLocal_866 = 0;
									if (unk_0xF0422198A211181C(iLocal_171))
									{
										iLocal_867 = 1;
										unk_0x38F6653421072183(iLocal_171, 1000, 2000, 1, 1, 1, 0);
									}
								}
								else if (iLocal_867 == 1)
								{
									if (iLocal_866 == 0 && unk_0xA7EEDB617B2F8DF1(iLocal_171))
									{
										unk_0x46E196EF4358E599(1, 787);
										unk_0x143BE02A1DE009D0(iLocal_171);
										iLocal_867 = 0;
										iLocal_866 = 1;
										if (func_276(iLocal_171, unk_0x27D769C59BC9D030(), 40f, 1))
										{
											if (!func_232())
											{
												func_265(&uLocal_408, 4, iLocal_171, "IMMIGRANTMALE", 0, 1);
												func_219(&uLocal_408, "MIN2AU", "MIN2_INJ2", 7, 1, 0, 0);
											}
										}
									}
								}
							}
							else
							{
								iLocal_611++;
								if (iLocal_611 > 60)
								{
									unk_0x51F79AC13D2AD286(iLocal_171, 0);
								}
							}
						}
						if ((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
						{
							if (!unk_0xA8ED23ED7AA60A97(iLocal_171))
							{
								iLocal_611 = 0;
								if (!unk_0xBD036012AF60D938(iLocal_171))
								{
									iLocal_866 = 0;
									if (unk_0xF0422198A211181C(iLocal_171))
									{
										iLocal_867 = 1;
										unk_0x38F6653421072183(iLocal_171, 1000, 2000, 1, 1, 1, 0);
									}
								}
								else if (iLocal_867 == 1)
								{
									if (iLocal_866 == 0 && unk_0xA7EEDB617B2F8DF1(iLocal_171))
									{
										unk_0x46E196EF4358E599(1, 787);
										unk_0x143BE02A1DE009D0(iLocal_171);
										iLocal_867 = 0;
										iLocal_866 = 1;
										if (func_276(iLocal_171, unk_0x27D769C59BC9D030(), 40f, 1))
										{
											if (!func_232())
											{
												func_265(&uLocal_408, 4, iLocal_171, "IMMIGRANTMALE2", 0, 1);
												func_219(&uLocal_408, "MIN2AU", "MIN2_INJ2", 7, 1, 0, 0);
											}
										}
									}
								}
							}
							else
							{
								iLocal_611++;
								if (iLocal_611 > 60)
								{
									unk_0x51F79AC13D2AD286(iLocal_171, 0);
								}
							}
						}
					}
				}
			}
			if (iLocal_825 == 1)
			{
				if (iLocal_826 == 0)
				{
					if (func_5(Local_96.f_35[0]))
					{
						if ((!func_276(uLocal_166[iLocal_574], Local_96.f_28[0], 10f, 1) && !func_276(uLocal_166[iLocal_574], Local_96.f_28[1], 10f, 1)) && !func_276(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 10f, 1))
						{
							if (!unk_0xA8ED23ED7AA60A97(uLocal_166[iLocal_574]))
							{
								iLocal_610 = 0;
								if (!unk_0xBD036012AF60D938(uLocal_166[iLocal_574]))
								{
									iLocal_864 = 0;
									if (unk_0xF0422198A211181C(uLocal_166[iLocal_574]))
									{
										iLocal_865 = 1;
										unk_0x38F6653421072183(uLocal_166[iLocal_574], 1000, 2000, 1, 1, 1, 0);
									}
								}
								else if (iLocal_865 == 1)
								{
									if (iLocal_864 == 0 && unk_0xA7EEDB617B2F8DF1(uLocal_166[iLocal_574]))
									{
										unk_0x46E196EF4358E599(1, 787);
										unk_0x143BE02A1DE009D0(uLocal_166[iLocal_574]);
										iLocal_865 = 0;
										iLocal_864 = 1;
										if (func_276(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 40f, 1))
										{
											if (!func_232())
											{
												func_265(&uLocal_408, 5, uLocal_166[iLocal_574], "IMMIGRANTMALE2", 0, 1);
												func_219(&uLocal_408, "MIN2AU", "MIN2_INJ3", 7, 1, 0, 0);
											}
										}
									}
								}
							}
							else
							{
								iLocal_610++;
								if (iLocal_610 > 60)
								{
									unk_0x51F79AC13D2AD286(uLocal_166[iLocal_574], 0);
								}
							}
						}
						if ((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
						{
							if (!unk_0xA8ED23ED7AA60A97(uLocal_166[iLocal_574]))
							{
								iLocal_610 = 0;
								if (!unk_0xBD036012AF60D938(uLocal_166[iLocal_574]))
								{
									iLocal_864 = 0;
									if (unk_0xF0422198A211181C(uLocal_166[iLocal_574]))
									{
										iLocal_865 = 1;
										unk_0x38F6653421072183(uLocal_166[iLocal_574], 1000, 2000, 1, 1, 1, 0);
									}
								}
								else if (iLocal_865 == 1)
								{
									if (iLocal_864 == 0 && unk_0xA7EEDB617B2F8DF1(uLocal_166[iLocal_574]))
									{
										unk_0x46E196EF4358E599(1, 787);
										unk_0x143BE02A1DE009D0(uLocal_166[iLocal_574]);
										iLocal_865 = 0;
										iLocal_864 = 1;
										if (func_276(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 40f, 1))
										{
											if (!func_232())
											{
												func_265(&uLocal_408, 5, uLocal_166[iLocal_574], "IMMIGRANTMALE2", 0, 1);
												func_219(&uLocal_408, "MIN2AU", "MIN2_INJ3", 7, 1, 0, 0);
											}
										}
									}
								}
							}
							else
							{
								iLocal_610++;
								if (iLocal_610 > 60)
								{
									unk_0x51F79AC13D2AD286(uLocal_166[iLocal_574], 0);
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_825 == 1 && iLocal_837 == 1)
	{
		if (iLocal_861 == 0)
		{
			unk_0xA0342EB4AE1476FC(3f, 8f, 0);
			unk_0x68BD4F826EFDDC53("MM2_STOP");
			func_346(1, 781);
			iLocal_861 = 1;
		}
	}
	if (func_536())
	{
		func_345();
	}
	if (iLocal_849 == 1)
	{
		if (iLocal_825 == 0 || iLocal_837 == 0)
		{
			if (!func_232())
			{
				if (unk_0xA0F74982C6AAA9D4() > iLocal_592 + 1500)
				{
					if (func_219(&uLocal_408, "MIN2AU", "MIN2_SURR_10", 6, 0, 0, 0))
					{
						iLocal_849 = 0;
					}
				}
			}
		}
	}
	if (iLocal_823 == 0)
	{
		if (((iLocal_825 == 1 && iLocal_837 == 1) && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 1) && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 0)
		{
			func_344();
		}
	}
	else if (func_511(Local_96.f_28[0]))
	{
		if (!unk_0x9A4E2270C2271219(Local_96.f_28[0], 1))
		{
			if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 0)
			{
				unk_0x835BBE043A81D6DD(Local_96.f_28[0], Local_96.f_35[0], 60000, 0, 1f, 1, 0);
			}
		}
	}
	if (iLocal_835 == 0)
	{
		if (iLocal_825 == 1 && iLocal_837 == 1)
		{
			if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 0)
			{
				func_342();
			}
		}
	}
	else if (func_511(Local_96.f_28[1]))
	{
		if (!unk_0x9A4E2270C2271219(Local_96.f_28[1], 0))
		{
			if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 0)
			{
				unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 1073741824, 1, 0);
			}
		}
	}
	if (iLocal_825 == 0 || iLocal_837 == 0)
	{
		func_317();
	}
	else if (iLocal_601 < 3)
	{
		func_315(&uLocal_36, 0, 0);
		iLocal_601 = 3;
	}
	func_314();
	func_266();
	func_313();
	if (iLocal_826 == 1)
	{
		if (iLocal_823 == 0)
		{
			func_309();
		}
		else if (!iLocal_884)
		{
			if (!func_232())
			{
				if (!func_235("MIN2_31", 0, 0))
				{
					if (((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0)) && !func_276(unk_0x27D769C59BC9D030(), iLocal_171, 100f, 1))
					{
						if (func_6(uLocal_166[0]))
						{
							func_265(&uLocal_408, 3, uLocal_166[0], "MANUEL", 0, 1);
						}
						if (func_6(uLocal_166[1]))
						{
							func_265(&uLocal_408, 5, uLocal_166[1], "IMMIGRANTMALE2", 0, 1);
						}
						if (func_219(&uLocal_408, "MIN2AU", "MIN2_CHATB2", 7, 0, 0, 0))
						{
							iLocal_884 = 1;
						}
					}
				}
			}
		}
	}
	else
	{
		func_306();
	}
	if (iLocal_838 == 1)
	{
		if (iLocal_835 == 0)
		{
			func_303();
		}
		else if (!iLocal_884)
		{
			if (!func_232())
			{
				if (!func_235("MIN2_31", 0, 0))
				{
					if (((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0)) && !func_276(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 100f, 1))
					{
						if (func_6(iLocal_171))
						{
							func_265(&uLocal_408, 4, iLocal_171, "IMMIGRANTMALE2", 0, 1);
						}
						if (func_6(uLocal_166[0]))
						{
							func_265(&uLocal_408, 3, uLocal_166[0], "MANUEL", 0, 1);
						}
						if (func_219(&uLocal_408, "MIN2AU", "MIN2_CHATB1", 7, 0, 0, 0))
						{
							iLocal_884 = 1;
						}
					}
				}
			}
		}
	}
	else
	{
		func_280();
	}
	if (func_511(uLocal_166[1]))
	{
		if ((!unk_0x9A4E2270C2271219(uLocal_166[1], 0) && !unk_0xBD036012AF60D938(uLocal_166[1])) && unk_0x4C3235E6E203703D(uLocal_166[1]) > 150)
		{
			unk_0x51F79AC13D2AD286(uLocal_166[1], 150);
		}
		if (iLocal_825 == 1)
		{
			if (iLocal_826 == 0)
			{
				if ((unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -1817882002) == 1 || unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -258271821) == 1) || unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -235832601) == 1)
				{
					unk_0xF156AA2A744B309E(uLocal_166[iLocal_574]);
				}
			}
		}
		if (func_5(uLocal_157[iLocal_574]))
		{
			if (unk_0x1C48F76B3D032074(uLocal_166[iLocal_574], uLocal_157[iLocal_574], 0))
			{
				if (unk_0x7B4654D62B7E0E9E(iLocal_184[iLocal_574]))
				{
					func_279(iLocal_184[iLocal_574], uLocal_166[iLocal_574], 300f, 0.8f, 0);
					if (!func_232())
					{
						if (func_5(Local_96.f_35[0]))
						{
							if (func_511(Local_96.f_28[0]))
							{
								if (unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
								{
									if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
									{
										if (!func_276(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 180f, 1))
										{
											if (iLocal_607 < 3)
											{
												if (unk_0xA0F74982C6AAA9D4() > iLocal_606 + 7000)
												{
													if (!func_232())
													{
														if (func_219(&uLocal_408, "MIN2AU", "MIN2_CATCH2", 7, 0, 0, 0))
														{
															iLocal_607++;
															iLocal_606 = unk_0xA0F74982C6AAA9D4();
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
			}
		}
	}
	if (func_511(iLocal_171))
	{
		if ((!unk_0x9A4E2270C2271219(iLocal_171, 0) && !unk_0xBD036012AF60D938(iLocal_171)) && unk_0x4C3235E6E203703D(iLocal_171) > 150)
		{
			unk_0x51F79AC13D2AD286(iLocal_171, 150);
		}
		if (iLocal_837 == 1)
		{
			if (iLocal_838 == 0)
			{
				if ((unk_0x810AFFABCBF31E2D(iLocal_171, -1817882002) == 1 || unk_0x810AFFABCBF31E2D(iLocal_171, -258271821) == 1) || unk_0x810AFFABCBF31E2D(iLocal_171, -235832601) == 1)
				{
					unk_0xF156AA2A744B309E(iLocal_171);
				}
			}
		}
		if (func_5(iLocal_162))
		{
			if (unk_0x1C48F76B3D032074(iLocal_171, iLocal_162, 0))
			{
				if (unk_0x7B4654D62B7E0E9E(iLocal_197))
				{
					func_279(iLocal_197, iLocal_171, 300f, 0.8f, 0);
					if (!func_232())
					{
						if (func_5(Local_96.f_35[0]))
						{
							if (func_511(Local_96.f_28[0]))
							{
								if (unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
								{
									if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
									{
										if (!func_276(unk_0x27D769C59BC9D030(), iLocal_171, 180f, 1))
										{
											if (iLocal_607 < 3)
											{
												if (unk_0xA0F74982C6AAA9D4() > iLocal_606 + 7000)
												{
													if (!func_232())
													{
														if (func_219(&uLocal_408, "MIN2AU", "MIN2_CATCH2", 7, 0, 0, 0))
														{
															iLocal_607++;
															iLocal_606 = unk_0xA0F74982C6AAA9D4();
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
			}
		}
	}
	if (iLocal_618 != 5 && unk_0xA0F74982C6AAA9D4() > iLocal_589 + 20000)
	{
		iLocal_618 = 5;
	}
	if (!func_232())
	{
		if (iLocal_618 == 0)
		{
			if ((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
			{
				if (func_219(&uLocal_408, "MIN2AU", "MIN2_CHAT1", 7, 0, 0, 0))
				{
					iLocal_618 = unk_0x3A5708FEE1B560A9(1, 5);
				}
			}
		}
		else if (iLocal_618 == 1)
		{
			if ((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
			{
				if (!func_276(unk_0x27D769C59BC9D030(), iLocal_171, 50f, 1) && !func_276(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 50f, 1))
				{
					if (func_6(uLocal_166[0]))
					{
						func_265(&uLocal_408, 3, uLocal_166[0], "MANUEL", 0, 1);
					}
					if (func_219(&uLocal_408, "MIN2AU", "MIN2_CHAT2", 7, 0, 0, 0))
					{
						iLocal_618 = 5;
					}
				}
			}
		}
		else if (iLocal_618 == 2)
		{
			if ((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
			{
				if (!func_276(unk_0x27D769C59BC9D030(), iLocal_171, 50f, 1) && !func_276(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 50f, 1))
				{
					if (func_6(uLocal_166[0]))
					{
						func_265(&uLocal_408, 3, uLocal_166[0], "MANUEL", 0, 1);
					}
					if (func_219(&uLocal_408, "MIN2AU", "MIN2_CHAT5", 7, 0, 0, 0))
					{
						iLocal_618 = 5;
					}
				}
			}
		}
		else if (iLocal_618 == 3)
		{
			if ((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
			{
				if (!func_276(unk_0x27D769C59BC9D030(), iLocal_171, 50f, 1) && !func_276(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 50f, 1))
				{
					if (func_6(uLocal_166[0]))
					{
						func_265(&uLocal_408, 3, uLocal_166[0], "MANUEL", 0, 1);
					}
					if (func_219(&uLocal_408, "MIN2AU", "MIN2_CHAT4", 7, 0, 0, 0))
					{
						iLocal_618 = 5;
					}
				}
			}
		}
		else if (iLocal_618 == 4)
		{
			if ((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
			{
				if (!func_276(unk_0x27D769C59BC9D030(), iLocal_171, 50f, 1) && !func_276(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 50f, 1))
				{
					if (func_6(uLocal_166[0]))
					{
						func_265(&uLocal_408, 3, uLocal_166[0], "MANUEL", 0, 1);
					}
					if (func_219(&uLocal_408, "MIN2AU", "MIN2_CHAT3", 7, 0, 0, 0))
					{
						iLocal_618 = 5;
					}
				}
			}
		}
	}
	if (func_511(uLocal_166[1]))
	{
		if ((iLocal_889 && func_232()) && !unk_0xBD036012AF60D938(uLocal_166[1]))
		{
			unk_0xF01E9C7FDA2976B1("DisableAbortConversationForRagdoll", 0);
			iLocal_889 = 0;
		}
	}
	if (func_511(iLocal_171))
	{
		if ((iLocal_890 && func_232()) && !unk_0xBD036012AF60D938(iLocal_171))
		{
			unk_0xF01E9C7FDA2976B1("DisableAbortConversationForRagdoll", 0);
			iLocal_890 = 0;
		}
	}
	if (iLocal_823 == 1 && iLocal_835 == 1)
	{
		unk_0xF01E9C7FDA2976B1("DisableAbortConversationForRagdoll", 0);
		iLocal_889 = 0;
		iLocal_890 = 0;
		iLocal_615 = unk_0xA0F74982C6AAA9D4();
		iLocal_615 = iLocal_615;
		iLocal_927 = 15;
	}
}

void func_279(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x7B4654D62B7E0E9E(iParam0))
	{
		if ((unk_0xD2CFFE76B625AE55(iParam1) && unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030())) && !unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
		{
			if (unk_0x8F8858152A9B9959(iParam1))
			{
				if (unk_0x0B4DDB992C7BCF57(unk_0x35E488C304B2E03E(iParam1), 0))
				{
					fVar1 = unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), unk_0xA8CFDE65C45F813B(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xCB3AA991DE0DE3A6(iParam0, 1);
						unk_0xB412D79FA1018FF0(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xCB3AA991DE0DE3A6(iParam0, 0);
						unk_0xB412D79FA1018FF0(iParam0, 255);
					}
				}
			}
			else if (unk_0x54F37403E01EFD97(iParam1))
			{
				if (!unk_0xE4F7206742848BAF(unk_0x97EA5EA3E7FE8500(iParam1)))
				{
					fVar1 = unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), unk_0xA8CFDE65C45F813B(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xCB3AA991DE0DE3A6(iParam0, 1);
						unk_0xB412D79FA1018FF0(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xCB3AA991DE0DE3A6(iParam0, 0);
						unk_0xB412D79FA1018FF0(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_280()
{
	if (func_511(iLocal_171))
	{
		fLocal_813 = func_231(Local_96.f_28[1], iLocal_171, 1);
		if (iLocal_837 == 0)
		{
			if (fLocal_813 < 9f)
			{
				if (iLocal_828 == 0)
				{
					unk_0x79BC35B5729FAC2E(Local_96.f_28[1], iLocal_171, 0, 0f, 0f, 0f, 10f, 100, 0, -753768974);
					if (unk_0x40CB4787F2506675(iLocal_171))
					{
						unk_0x1AD2FE409C8C06B3(iLocal_171, 2);
					}
					iLocal_828 = 1;
				}
			}
			else if (iLocal_828 == 1)
			{
				unk_0xF156AA2A744B309E(Local_96.f_28[1]);
				iLocal_828 = 0;
			}
		}
		else if (fLocal_813 >= 40f)
		{
			unk_0xF156AA2A744B309E(Local_96.f_28[1]);
		}
		if (iLocal_837 == 0)
		{
			if (fLocal_813 > 220f)
			{
				if (iLocal_834 == 0)
				{
					if (func_5(Local_96.f_35[0]))
					{
						if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
						{
							if (iLocal_574 == 0)
							{
								if (unk_0xA0F74982C6AAA9D4() > iLocal_604 + 12000)
								{
									if (iLocal_903 == 0)
									{
										iLocal_903 = 1;
									}
								}
							}
							else if (iLocal_825 == 0 && iLocal_837 == 0)
							{
								if (iLocal_915 == 0)
								{
									iLocal_915 = 1;
								}
							}
							else if (iLocal_903 == 0)
							{
								iLocal_903 = 1;
							}
						}
					}
					iLocal_834 = 1;
				}
				else if (fLocal_813 > 300f)
				{
					if (iLocal_574 == 0)
					{
						sLocal_923 = "MIN2_43";
					}
					else if (iLocal_825 == 0 && iLocal_837 == 0)
					{
						sLocal_923 = "MIN2_35";
					}
					else
					{
						sLocal_923 = "MIN2_23";
					}
					iLocal_927 = 16;
				}
			}
			else
			{
				iLocal_834 = 0;
			}
		}
		if (iLocal_837 == 0)
		{
			if (unk_0x6AE62C1DA604CA92(iLocal_171, joaat("weapon_stungun"), 0))
			{
				func_301();
			}
		}
		if (iLocal_837 == 0)
		{
			if (func_511(iLocal_171))
			{
				if (!unk_0x1C48F76B3D032074(iLocal_171, iLocal_162, 0))
				{
					if (iLocal_845 == 0)
					{
						func_301();
					}
				}
			}
		}
		if (iLocal_837 == 1)
		{
			if (unk_0x6AE62C1DA604CA92(iLocal_171, joaat("weapon_stungun"), 0))
			{
				if (unk_0x77F1B7F6C32990D6(iLocal_171, Local_96.f_28[1], 0))
				{
					if (!unk_0x9A4E2270C2271219(Local_96.f_28[1], 0))
					{
						iLocal_588++;
					}
				}
				if (unk_0x77F1B7F6C32990D6(iLocal_171, Local_96.f_28[0], 0))
				{
					if (!unk_0x9A4E2270C2271219(Local_96.f_28[0], 0))
					{
						iLocal_588++;
					}
				}
				if (unk_0x77F1B7F6C32990D6(iLocal_171, unk_0x27D769C59BC9D030(), 0))
				{
					if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
					{
						iLocal_588++;
					}
				}
				unk_0x01BA9E75C85C1D2F(iLocal_171);
			}
			if (iLocal_838 == 0)
			{
				iLocal_585 = unk_0xA0F74982C6AAA9D4();
				if (iLocal_585 > iLocal_586 + 4000)
				{
					unk_0xF7B3552987613A6B(iLocal_171, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					if (func_282(iLocal_171, 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (iLocal_588 == 0)
						{
							iLocal_588++;
						}
						func_281();
					}
					if (unk_0x77F1B7F6C32990D6(iLocal_171, unk_0x27D769C59BC9D030(), 0))
					{
						fLocal_815 = func_231(unk_0x27D769C59BC9D030(), iLocal_171, 1);
						if (fLocal_815 < 9f)
						{
							if (iLocal_588 > 0)
							{
								func_281();
							}
						}
					}
				}
				if (!unk_0x9A4E2270C2271219(Local_96.f_28[1], 0))
				{
					if (fLocal_813 < 7f)
					{
						if (iLocal_588 > 0)
						{
							func_281();
						}
					}
				}
			}
		}
	}
}

void func_281()
{
	unk_0xF156AA2A744B309E(iLocal_171);
	if (unk_0x810AFFABCBF31E2D(iLocal_171, 242628503) != 1)
	{
		if (unk_0x810AFFABCBF31E2D(iLocal_171, -1794415470) != 1 && unk_0x810AFFABCBF31E2D(iLocal_171, -1794415470) != 0)
		{
			unk_0x835BBE043A81D6DD(iLocal_171, Local_96.f_35[0], 60000, 2, 1f, 1, 0);
		}
	}
	iLocal_838 = 1;
}

int func_282(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_6(unk_0x27D769C59BC9D030()) && func_6(iParam0))
	{
		if (unk_0x77F1B7F6C32990D6(iParam0, unk_0x27D769C59BC9D030(), 1))
		{
			return 1;
		}
		if (func_296(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x1D01F222CF5E89FA(unk_0x27D769C59BC9D030(), 6))
		{
			if (unk_0x1FEDE585C0F25C08(unk_0x27D769C59BC9D030()))
			{
				Var0 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) - unk_0xA8CFDE65C45F813B(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_295(unk_0x27D769C59BC9D030(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_283(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_283(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_6(unk_0x27D769C59BC9D030()) && func_6(iParam0))
	{
		if (func_294(iParam0) || unk_0x3FB18423318A562B(unk_0x4D29100D094E5511(), iParam0))
		{
			if (unk_0x1D01F222CF5E89FA(unk_0x27D769C59BC9D030(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_284(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_284(int iParam0, float fParam1)
{
	return func_285(iParam0, unk_0x27D769C59BC9D030(), fParam1, 1, 250, 7);
}

bool func_285(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_293(iParam0, iParam1);
	if (!func_6(iParam0) || !func_6(iParam1))
	{
		if (iVar4 != -1)
		{
			func_292(&(Local_49[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_289(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_288();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_49[iVar4 /*4*/].f_1 = iParam0;
		Local_49[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x52AB056B2AF7BB53(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_286(&(Local_49[iVar4 /*4*/]), Var1, iParam1, &(Local_49[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xA0F74982C6AAA9D4() - Local_49[iVar4 /*4*/].f_3) < iParam4);
}

int func_286(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_6(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_287(iParam4, iParam7) };
		*uParam0 = unk_0xE98636CD6C8CB7F8(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xF196E47C22823C63(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x54F37403E01EFD97(iVar7))
	{
		func_6(iVar7);
		if (unk_0x97EA5EA3E7FE8500(iVar7) == iParam4)
		{
			if (bLocal_90)
			{
				unk_0x90686E8E74E1F89E(Param1, unk_0xA8CFDE65C45F813B(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0xA0F74982C6AAA9D4();
			return 1;
		}
		return 0;
	}
	if (unk_0x8F8858152A9B9959(iVar7))
	{
		func_6(iVar7);
		if (unk_0x9A4E2270C2271219(iParam4, 0))
		{
			if (unk_0x35E488C304B2E03E(iVar7) == unk_0xD9FFE8E1642C81E2(iParam4, 0))
			{
				if (bLocal_90)
				{
					unk_0x90686E8E74E1F89E(Param1, unk_0xA8CFDE65C45F813B(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0xA0F74982C6AAA9D4();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_287(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x3A5708FEE1B560A9(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xA8CFDE65C45F813B(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x52AB056B2AF7BB53(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x52AB056B2AF7BB53(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x52AB056B2AF7BB53(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x52AB056B2AF7BB53(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x52AB056B2AF7BB53(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x52AB056B2AF7BB53(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xA8CFDE65C45F813B(iParam0, 1);
}

int func_288()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49.f_0)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_289(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_291(unk_0xA8CFDE65C45F813B(iParam1, 1) - unk_0xA8CFDE65C45F813B(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xE7669FB0FEEAD3DD(iParam0) };
	}
	else
	{
		Var3 = { func_291(unk_0x52AB056B2AF7BB53(iParam0, 31086, 0f, 5f, 0f) - unk_0x52AB056B2AF7BB53(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_290(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_290(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_291(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_292(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_293(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49.f_0)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_294(int iParam0)
{
	if (unk_0xC542D24D363306EC(unk_0x4D29100D094E5511(), iParam0) && unk_0x1D01F222CF5E89FA(unk_0x27D769C59BC9D030(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_295(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xE7669FB0FEEAD3DD(iParam0) };
	Var3 = { unk_0xA8CFDE65C45F813B(iParam1, 1) - unk_0xA8CFDE65C45F813B(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_296(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_6(unk_0x27D769C59BC9D030()) && func_6(iParam0))
	{
		unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_300(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_297(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x32A33034ED29B524(unk_0x27D769C59BC9D030()))
			{
				if (unk_0x7C2070521268C99E(unk_0x27D769C59BC9D030()))
				{
					if (unk_0xFFA15D908A6FDCD4(unk_0xA8CFDE65C45F813B(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_300(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_297(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_297(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xA8CFDE65C45F813B(uParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x9EE518BD3F590933(unk_0xA8CFDE65C45F813B(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x9EE518BD3F590933(unk_0xA8CFDE65C45F813B(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x9EE518BD3F590933(unk_0xA8CFDE65C45F813B(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x9EE518BD3F590933(unk_0xA8CFDE65C45F813B(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_298(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_298(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x92C13FDA105016D1(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_298(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x4978AB631CEE55BD(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x4978AB631CEE55BD(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x4978AB631CEE55BD(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x4978AB631CEE55BD(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x4978AB631CEE55BD(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_299(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_299(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_291(Param1 - unk_0xA8CFDE65C45F813B(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xE7669FB0FEEAD3DD(iParam0) };
	}
	else
	{
		Var3 = { func_291(unk_0x52AB056B2AF7BB53(iParam0, 31086, 0f, 5f, 0f) - unk_0x52AB056B2AF7BB53(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_290(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_300(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x7C2070521268C99E(unk_0x27D769C59BC9D030()))
		{
			if (unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xFFA15D908A6FDCD4(unk_0xA8CFDE65C45F813B(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

void func_301()
{
	unk_0xA0342EB4AE1476FC(3f, 0f, 0);
	if (unk_0x6AE62C1DA604CA92(iLocal_171, joaat("weapon_stungun"), 0))
	{
		iLocal_603++;
		if (iLocal_603 > 2)
		{
			func_302(782);
		}
	}
	unk_0xF156AA2A744B309E(iLocal_171);
	if (unk_0x40CB4787F2506675(iLocal_171))
	{
		unk_0x1AD2FE409C8C06B3(iLocal_171, 2);
		unk_0xB053D88278BC2E02(iLocal_171);
	}
	if (unk_0x7B4654D62B7E0E9E(iLocal_197))
	{
		unk_0xC5B4E9487339A2BB(iLocal_197, 0.7f);
	}
	unk_0xF7B3552987613A6B(iLocal_171, 0, 0, 0, 1, 0, 0, 0, 0);
	unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 0, 0);
	unk_0x560D2F1EE11E8AE2(iLocal_171, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
	unk_0x73C1A9AD53AC8AD8(unk_0xD7C4E2CB0B216852(Local_96.f_28[1], -20f, 0f, 0f), 97, &uLocal_640, 1, 1077936128, 0);
	iLocal_586 = unk_0xA0F74982C6AAA9D4();
	if (func_6(iLocal_162))
	{
		if (unk_0x7E16166EB69398DB(iLocal_162))
		{
			unk_0x6F199D2803D51520(iLocal_162);
		}
	}
	func_219(&uLocal_408, "MIN2AU", "MIN2_SURR_8", 6, 0, 0, 0);
	if (iLocal_825 == 0)
	{
		iLocal_592 = unk_0xA0F74982C6AAA9D4();
		iLocal_849 = 1;
	}
	iLocal_837 = 1;
}

void func_302(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55750 = 0;
	if (!Global_55974[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67844)
	{
		if (Global_67845[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67845[iVar1 /*9*/].f_1 = 1;
			Global_67845[iVar1 /*9*/].f_2 = 0f;
			if (Global_67845[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_303()
{
	if (func_511(iLocal_171))
	{
		if (unk_0xDD5B7E23D882DABD(iLocal_171, Local_96.f_35[0]))
		{
			func_305();
			return;
		}
		if (iLocal_835 == 0)
		{
			fLocal_814 = func_231(Local_96.f_35[0], iLocal_171, 1);
			if (fLocal_814 < 40f || func_276(unk_0x27D769C59BC9D030(), iLocal_171, 40f, 1))
			{
				if (iLocal_608 == 0)
				{
					if ((unk_0xBD036012AF60D938(iLocal_171) || unk_0x8D1E4231095B313B(iLocal_171)) || unk_0x87500AE0A3B98541(iLocal_171, 0))
					{
						iLocal_626 = unk_0xA0F74982C6AAA9D4();
					}
					if (func_276(iLocal_171, Local_96.f_35[0], 4.5f, 1) || unk_0xA0F74982C6AAA9D4() > iLocal_626 + 2500)
					{
						unk_0x560D2F1EE11E8AE2(iLocal_171, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
						if (unk_0xF4954568C87BA772(iLocal_171, "rcmminute2", "arrest_walk", 3))
						{
							unk_0x1B1FB642178B8CEE(iLocal_171, "rcmminute2", "arrest_walk", -2f);
							unk_0x878D12AEFBF5BAF0(iLocal_171, "rcmminute2", "handsup_exit", 2f, -4f, -1, 48, 0.3f, 0, 0, 0);
						}
						if (func_276(iLocal_171, Local_96.f_35[0], 3f, 1) && unk_0x1C48F76B3D032074(iLocal_171, Local_96.f_35[0], 1))
						{
							func_304();
						}
						if (iLocal_839 == 0)
						{
							if (unk_0x810AFFABCBF31E2D(iLocal_171, 242628503) != 1)
							{
								if (unk_0x810AFFABCBF31E2D(iLocal_171, -1794415470) != 1 && unk_0x810AFFABCBF31E2D(iLocal_171, -1794415470) != 0)
								{
									unk_0x835BBE043A81D6DD(iLocal_171, Local_96.f_35[0], 60000, 2, 1f, 1, 0);
								}
							}
							iLocal_839 = 1;
						}
						else if (unk_0x810AFFABCBF31E2D(iLocal_171, 242628503) != 1)
						{
							if (unk_0x810AFFABCBF31E2D(iLocal_171, -1794415470) != 1 && unk_0x810AFFABCBF31E2D(iLocal_171, -1794415470) != 0)
							{
								unk_0x835BBE043A81D6DD(iLocal_171, Local_96.f_35[0], 60000, 2, 1f, 1, 0);
							}
						}
					}
					else if (unk_0x8D1E4231095B313B(iLocal_171))
					{
						if (iLocal_921 == 0)
						{
							if (unk_0xF4954568C87BA772(iLocal_171, "rcmminute2", "arrest_walk", 3))
							{
								unk_0x1B1FB642178B8CEE(iLocal_171, "rcmminute2", "arrest_walk", -8f);
							}
							iLocal_922 = unk_0xA0F74982C6AAA9D4();
							iLocal_921 = 1;
						}
						else if (unk_0xA0F74982C6AAA9D4() > iLocal_922 + 3100)
						{
							if (!unk_0xBD036012AF60D938(iLocal_171))
							{
								if (!unk_0xF4954568C87BA772(iLocal_171, "rcmminute2", "arrest_walk", 3))
								{
									if (!unk_0xDA95459038DD8A59(unk_0x27D769C59BC9D030()))
									{
										unk_0x878D12AEFBF5BAF0(iLocal_171, "rcmminute2", "arrest_walk", 1.4f, -8f, -1, 65585, 0f, 0, 0, 0);
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0xBD036012AF60D938(iLocal_171) && !unk_0x87500AE0A3B98541(iLocal_171, joaat("weapon_stungun")))
						{
							if (!unk_0xF4954568C87BA772(iLocal_171, "rcmminute2", "arrest_walk", 3))
							{
								if (!unk_0xDA95459038DD8A59(unk_0x27D769C59BC9D030()))
								{
									unk_0x878D12AEFBF5BAF0(iLocal_171, "rcmminute2", "arrest_walk", 1.4f, -8f, -1, 65585, 0f, 0, 0, 0);
								}
							}
						}
						iLocal_921 = 0;
					}
					if (unk_0x1C48F76B3D032074(iLocal_171, Local_96.f_35[0], 0))
					{
						if (!unk_0x9A4E2270C2271219(Local_96.f_28[1], 0))
						{
							if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 0)
							{
								unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 1.2f, 1, 0);
							}
						}
					}
				}
				else if (iLocal_608 == 1)
				{
					if (fLocal_814 < 20f || func_276(unk_0x27D769C59BC9D030(), iLocal_171, 20f, 1))
					{
						if (!unk_0xF4954568C87BA772(iLocal_171, "rcmminute2", "kneeling_arrest_get_up", 3))
						{
							unk_0x878D12AEFBF5BAF0(iLocal_171, "rcmminute2", "kneeling_arrest_get_up", 16f, -2f, -1, 0, 0f, 0, 0, 0);
							iLocal_608 = 2;
						}
					}
				}
				else if (iLocal_608 == 2)
				{
					if (!unk_0xF4954568C87BA772(iLocal_171, "rcmminute2", "kneeling_arrest_get_up", 3))
					{
						unk_0x878D12AEFBF5BAF0(iLocal_171, "rcmminute2", "arrest_walk", 2f, -8f, -1, 65585, 0f, 0, 0, 0);
						unk_0x835BBE043A81D6DD(iLocal_171, Local_96.f_35[0], 60000, 2, 1.4f, 1, 0);
						iLocal_608 = 0;
					}
				}
			}
			else if (!unk_0xBD036012AF60D938(iLocal_171) && !unk_0x87500AE0A3B98541(iLocal_171, joaat("weapon_stungun")))
			{
				if (!unk_0xF4954568C87BA772(iLocal_171, "rcmminute2", "kneeling_arrest_idle", 3))
				{
					unk_0xF156AA2A744B309E(iLocal_171);
					unk_0x878D12AEFBF5BAF0(iLocal_171, "rcmminute2", "kneeling_arrest_idle", 2f, -16f, -1, 1, 0f, 0, 0, 0);
					if (iLocal_608 != 1)
					{
						func_304();
					}
					iLocal_608 = 1;
				}
			}
		}
	}
}

void func_304()
{
	Global_14578 = 0;
	func_229();
}

void func_305()
{
	if (func_511(iLocal_171))
	{
		if (iLocal_823 == 0)
		{
			if (!unk_0xDD5B7E23D882DABD(Local_96.f_28[1], Local_96.f_35[0]))
			{
				unk_0x76743E423ACEE0E6(iLocal_171);
				unk_0x8A3D3E40973625F0(iLocal_171, 0, 0);
				uLocal_400 = unk_0x239E9E07DB537DC9(0f, 0f, 0f, 0f, 0f, 0f, 2);
				unk_0x21092DBB624E6BC2(uLocal_400, Local_96.f_35[0], unk_0x1060AD708DD56BC7(Local_96.f_35[0], "seat_pside_r"));
				unk_0x98E2FD5DA7CF97D3(iLocal_171, uLocal_400, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1148846080, 0);
				unk_0x113D3B13A8AE40CF(uLocal_400, 2f);
			}
			else
			{
				unk_0xF156AA2A744B309E(iLocal_171);
				unk_0x433C209504FBC7EE(&uLocal_203);
				unk_0x433C209504FBC7EE(&uLocal_204);
				unk_0x433C209504FBC7EE(&uLocal_205);
				unk_0x433C209504FBC7EE(&uLocal_206);
				iLocal_887 = 1;
			}
			iLocal_614 = 2;
		}
		else
		{
			unk_0xF156AA2A744B309E(iLocal_171);
			unk_0x433C209504FBC7EE(&uLocal_203);
			unk_0x433C209504FBC7EE(&uLocal_204);
			unk_0x433C209504FBC7EE(&uLocal_205);
			unk_0x433C209504FBC7EE(&uLocal_206);
		}
		unk_0xFFD8329ED7A8E20C(iLocal_171, 0);
		unk_0x71065DDFF8D7744C(iLocal_171, unk_0xF384805745D7A349(unk_0x27D769C59BC9D030()));
		unk_0xA8ED9F72DC442242(iLocal_171, 1);
	}
	if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 0)
	{
		unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 1073741824, 1, 0);
	}
	if (iLocal_574 == 1)
	{
		if (iLocal_825 == 1)
		{
			if (iLocal_823 == 0)
			{
				if (func_511(uLocal_166[iLocal_574]))
				{
					if (func_269(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030()) > 70f)
					{
						if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 1))
						{
							func_236("MIN2_31", 7500, 0);
						}
						else
						{
							if (iLocal_910 == 0)
							{
								func_236("MIN2_19", 7500, 0);
								iLocal_910 = 1;
							}
							if (unk_0x7B4654D62B7E0E9E(iLocal_184[iLocal_574]))
							{
								func_505(&(iLocal_184[iLocal_574]));
							}
							if (unk_0x7B4654D62B7E0E9E(iLocal_197))
							{
								func_505(&iLocal_197);
							}
							if (!unk_0x7B4654D62B7E0E9E(iLocal_194))
							{
								iLocal_194 = func_234(Local_96.f_35[0], 1, 5);
							}
							iLocal_856 = 1;
						}
					}
				}
			}
		}
	}
	iLocal_835 = 1;
	unk_0x7440EFC435CB25D1(Local_96.f_28[1]);
	iLocal_594 = unk_0xA0F74982C6AAA9D4();
}

void func_306()
{
	if (func_511(uLocal_166[1]))
	{
		fLocal_812 = func_231(Local_96.f_28[0], uLocal_166[1], 1);
		if (iLocal_825 == 0)
		{
			if (fLocal_812 < 9f)
			{
				if (iLocal_827 == 0)
				{
					unk_0x79BC35B5729FAC2E(Local_96.f_28[0], uLocal_166[1], 0, 0f, 0f, 0f, 9f, 100, 0, -753768974);
					if (unk_0x40CB4787F2506675(uLocal_166[1]))
					{
						unk_0x1AD2FE409C8C06B3(uLocal_166[1], 2);
					}
					iLocal_827 = 1;
				}
			}
			else if (iLocal_827 == 1)
			{
				unk_0xF156AA2A744B309E(Local_96.f_28[0]);
				iLocal_827 = 0;
			}
		}
		else if (fLocal_812 >= 40f)
		{
			unk_0xF156AA2A744B309E(Local_96.f_28[0]);
		}
		if (iLocal_825 == 0)
		{
			if (fLocal_812 > 220f)
			{
				if (iLocal_829 == 0)
				{
					if (func_5(Local_96.f_35[0]))
					{
						if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
						{
							if (iLocal_574 == 0)
							{
								if (unk_0xA0F74982C6AAA9D4() > iLocal_604 + 12000)
								{
									if (iLocal_903 == 0)
									{
										iLocal_903 = 1;
									}
								}
							}
							else if (iLocal_825 == 0 && iLocal_837 == 0)
							{
								if (iLocal_915 == 0)
								{
									iLocal_915 = 1;
								}
							}
							else if (unk_0xA0F74982C6AAA9D4() > iLocal_604 + 12000)
							{
								if (iLocal_903 == 0)
								{
									iLocal_903 = 1;
								}
							}
						}
					}
					iLocal_829 = 1;
				}
				else if (fLocal_812 > 300f)
				{
					if (iLocal_574 == 0)
					{
						sLocal_923 = "MIN2_43";
					}
					else if (iLocal_825 == 0 && iLocal_837 == 0)
					{
						sLocal_923 = "MIN2_35";
					}
					else
					{
						sLocal_923 = "MIN2_23";
					}
					iLocal_927 = 16;
				}
			}
			else
			{
				iLocal_829 = 0;
			}
		}
		if (iLocal_825 == 0)
		{
			if (unk_0x6AE62C1DA604CA92(uLocal_166[1], joaat("weapon_stungun"), 0))
			{
				func_308();
			}
		}
		if (iLocal_825 == 0)
		{
			if (func_5(uLocal_157[1]))
			{
				if (!unk_0x1C48F76B3D032074(uLocal_166[1], uLocal_157[1], 0))
				{
					if (iLocal_846 == 0)
					{
						func_308();
					}
				}
			}
		}
		if (iLocal_825 == 1)
		{
			if (unk_0x6AE62C1DA604CA92(uLocal_166[iLocal_574], joaat("weapon_stungun"), 0))
			{
				if (unk_0x77F1B7F6C32990D6(uLocal_166[iLocal_574], Local_96.f_28[1], 0))
				{
					if (!unk_0x9A4E2270C2271219(Local_96.f_28[1], 0))
					{
						iLocal_587++;
					}
				}
				if (unk_0x77F1B7F6C32990D6(uLocal_166[iLocal_574], Local_96.f_28[0], 0))
				{
					if (!unk_0x9A4E2270C2271219(Local_96.f_28[0], 0))
					{
						iLocal_587++;
					}
				}
				if (unk_0x77F1B7F6C32990D6(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 0))
				{
					if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
					{
						iLocal_587++;
					}
				}
				unk_0x01BA9E75C85C1D2F(uLocal_166[iLocal_574]);
			}
			if (iLocal_826 == 0)
			{
				iLocal_583 = unk_0xA0F74982C6AAA9D4();
				if (iLocal_583 > iLocal_584 + 4000)
				{
					unk_0xF7B3552987613A6B(uLocal_166[1], 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					if (func_282(uLocal_166[iLocal_574], 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (iLocal_587 == 0)
						{
							iLocal_587++;
						}
						func_307();
					}
					if (unk_0x77F1B7F6C32990D6(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 0))
					{
						fLocal_815 = func_231(unk_0x27D769C59BC9D030(), uLocal_166[1], 1);
						if (fLocal_815 < 9f)
						{
							if (iLocal_587 > 0)
							{
								func_307();
							}
						}
					}
				}
				if (!unk_0x9A4E2270C2271219(Local_96.f_28[0], 0))
				{
					if (fLocal_812 < 7f)
					{
						if (iLocal_587 > 0)
						{
							func_307();
						}
					}
				}
			}
		}
	}
}

void func_307()
{
	unk_0xF156AA2A744B309E(uLocal_166[iLocal_574]);
	if (unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], 242628503) != 1)
	{
		if (unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -1794415470) != 0)
		{
			unk_0x835BBE043A81D6DD(uLocal_166[iLocal_574], Local_96.f_35[0], 60000, 2, 1f, 1, 0);
		}
	}
	iLocal_826 = 1;
}

void func_308()
{
	unk_0xA0342EB4AE1476FC(3f, 0f, 0);
	if (unk_0x6AE62C1DA604CA92(uLocal_166[iLocal_574], joaat("weapon_stungun"), 0))
	{
		iLocal_603++;
		if (iLocal_603 > 2)
		{
			func_302(782);
		}
	}
	unk_0xF156AA2A744B309E(uLocal_166[iLocal_574]);
	Local_630[iLocal_574 /*3*/] = { unk_0xA8CFDE65C45F813B(uLocal_166[iLocal_574], 1) };
	if (unk_0x9A4E2270C2271219(uLocal_166[iLocal_574], 0))
	{
		unk_0x1AD2FE409C8C06B3(uLocal_166[iLocal_574], 2);
		unk_0xB053D88278BC2E02(uLocal_166[iLocal_574]);
	}
	if (unk_0x7B4654D62B7E0E9E(iLocal_184[iLocal_574]))
	{
		unk_0xC5B4E9487339A2BB(iLocal_184[iLocal_574], 0.7f);
	}
	unk_0xF7B3552987613A6B(uLocal_166[iLocal_574], 0, 0, 0, 1, 0, 0, 0, 0);
	unk_0x7ED3655E5924C6F4(Local_96.f_28[0], 0, 0);
	if (iLocal_574 == 0)
	{
		unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 0, 0);
	}
	unk_0x560D2F1EE11E8AE2(uLocal_166[iLocal_574], "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
	unk_0x73C1A9AD53AC8AD8(unk_0xD7C4E2CB0B216852(Local_96.f_28[0], -20f, 0f, 0f), 129, &uLocal_640, 1, 1077936128, 0);
	iLocal_584 = unk_0xA0F74982C6AAA9D4();
	if (func_6(uLocal_157[iLocal_574]))
	{
		if (unk_0x7E16166EB69398DB(uLocal_157[iLocal_574]))
		{
			unk_0x6F199D2803D51520(uLocal_157[iLocal_574]);
		}
	}
	if (iLocal_574 == 0)
	{
		func_265(&uLocal_408, 3, uLocal_166[0], "MANUEL", 0, 1);
		if (iLocal_603 != 0)
		{
			func_219(&uLocal_408, "MIN2AU", "MIN2_SURR_7", 6, 0, 0, 0);
		}
		else
		{
			func_219(&uLocal_408, "MIN2AU", "MIN2_RAM", 6, 0, 0, 0);
		}
		func_346(0, 780);
	}
	if (iLocal_574 == 1)
	{
		func_265(&uLocal_408, 4, iLocal_171, "IMMIGRANTMALE", 0, 1);
		func_219(&uLocal_408, "MIN2AU", "MIN2_SURR_9", 6, 0, 0, 0);
		if (iLocal_837 == 0)
		{
			iLocal_592 = unk_0xA0F74982C6AAA9D4();
			iLocal_849 = 1;
		}
	}
	iLocal_825 = 1;
}

void func_309()
{
	if (func_511(uLocal_166[iLocal_574]))
	{
		if (unk_0xDD5B7E23D882DABD(uLocal_166[iLocal_574], Local_96.f_35[0]))
		{
			func_311();
			return;
		}
		if (iLocal_823 == 0)
		{
			fLocal_814 = func_231(Local_96.f_35[0], uLocal_166[iLocal_574], 1);
			if (fLocal_814 < 40f || func_276(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 40f, 1))
			{
				if (iLocal_609 == 0)
				{
					if ((unk_0xBD036012AF60D938(uLocal_166[iLocal_574]) || unk_0x8D1E4231095B313B(uLocal_166[iLocal_574])) || unk_0x87500AE0A3B98541(uLocal_166[iLocal_574], 0))
					{
						iLocal_625 = unk_0xA0F74982C6AAA9D4();
					}
					if (func_276(uLocal_166[iLocal_574], Local_96.f_35[0], 4.5f, 1) || unk_0xA0F74982C6AAA9D4() > iLocal_625 + 2500)
					{
						unk_0x560D2F1EE11E8AE2(uLocal_166[iLocal_574], "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
						if (unk_0xF4954568C87BA772(uLocal_166[iLocal_574], "rcmminute2", "arrest_walk", 3))
						{
							unk_0x1B1FB642178B8CEE(uLocal_166[iLocal_574], "rcmminute2", "arrest_walk", -2f);
							unk_0x878D12AEFBF5BAF0(uLocal_166[iLocal_574], "rcmminute2", "handsup_exit", 2f, -4f, -1, 48, 0.3f, 0, 0, 0);
						}
						if (func_276(uLocal_166[iLocal_574], Local_96.f_35[0], 3f, 1) && unk_0x1C48F76B3D032074(uLocal_166[iLocal_574], Local_96.f_35[0], 1))
						{
							func_304();
						}
						if (iLocal_831 == 0)
						{
							if (unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], 242628503) != 1)
							{
								if (unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -1794415470) != 0)
								{
									unk_0x835BBE043A81D6DD(uLocal_166[iLocal_574], Local_96.f_35[0], 60000, 2, 1f, 1, 0);
								}
							}
							iLocal_831 = 1;
						}
						else if (unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], 242628503) != 1)
						{
							if (unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -1794415470) != 0)
							{
								unk_0x835BBE043A81D6DD(uLocal_166[iLocal_574], Local_96.f_35[0], 60000, 2, 1f, 1, 0);
							}
						}
					}
					else
					{
						unk_0x560D2F1EE11E8AE2(uLocal_166[iLocal_574], "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
						if (unk_0x8D1E4231095B313B(uLocal_166[iLocal_574]))
						{
							if (iLocal_919 == 0)
							{
								if (unk_0xF4954568C87BA772(uLocal_166[iLocal_574], "rcmminute2", "arrest_walk", 3))
								{
									unk_0x1B1FB642178B8CEE(uLocal_166[iLocal_574], "rcmminute2", "arrest_walk", -8f);
								}
								iLocal_920 = unk_0xA0F74982C6AAA9D4();
								iLocal_919 = 1;
							}
							else if (unk_0xA0F74982C6AAA9D4() > iLocal_920 + 3100)
							{
								if (!unk_0xBD036012AF60D938(uLocal_166[iLocal_574]))
								{
									if (!unk_0xF4954568C87BA772(uLocal_166[iLocal_574], "rcmminute2", "arrest_walk", 3))
									{
										if (!unk_0xDA95459038DD8A59(unk_0x27D769C59BC9D030()))
										{
											unk_0x878D12AEFBF5BAF0(uLocal_166[iLocal_574], "rcmminute2", "arrest_walk", 1.4f, -8f, -1, 65585, 0f, 0, 0, 0);
										}
									}
								}
							}
						}
						else
						{
							if (!unk_0xBD036012AF60D938(uLocal_166[iLocal_574]) && !unk_0x87500AE0A3B98541(uLocal_166[iLocal_574], joaat("weapon_stungun")))
							{
								if (!unk_0xF4954568C87BA772(uLocal_166[iLocal_574], "rcmminute2", "arrest_walk", 3))
								{
									if (!unk_0xDA95459038DD8A59(unk_0x27D769C59BC9D030()))
									{
										unk_0x878D12AEFBF5BAF0(uLocal_166[iLocal_574], "rcmminute2", "arrest_walk", 1.4f, -8f, -1, 65585, 0f, 0, 0, 0);
									}
								}
							}
							iLocal_919 = 0;
						}
					}
					if (unk_0xDD5B7E23D882DABD(uLocal_166[iLocal_574], Local_96.f_35[0]))
					{
						iLocal_405 = 1000;
					}
					if (unk_0x1C48F76B3D032074(uLocal_166[iLocal_574], Local_96.f_35[0], 1))
					{
						iLocal_405++;
						if (iLocal_574 != 0 || iLocal_405 > 80)
						{
							if (!unk_0x9A4E2270C2271219(Local_96.f_28[0], 1))
							{
								if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 0)
								{
									if (iLocal_574 == 0)
									{
										if (func_276(Local_96.f_28[0], Local_96.f_35[0], 15f, 1))
										{
											unk_0x835BBE043A81D6DD(Local_96.f_28[0], Local_96.f_35[0], 60000, 0, 1f, 1, 0);
										}
										else
										{
											unk_0x835BBE043A81D6DD(Local_96.f_28[0], Local_96.f_35[0], 60000, 0, 2f, 1, 0);
										}
									}
									else
									{
										unk_0x835BBE043A81D6DD(Local_96.f_28[0], Local_96.f_35[0], 60000, 0, 1f, 1, 0);
									}
								}
							}
						}
						if ((iLocal_405 > 20 && iLocal_574 == 0) && !unk_0xE4F7206742848BAF(Local_96.f_28[1]))
						{
							if (!unk_0x9A4E2270C2271219(Local_96.f_28[1], 1))
							{
								if (func_310())
								{
									if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 0)
									{
										if (func_276(Local_96.f_28[1], Local_96.f_35[0], 10f, 1))
										{
											unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 1f, 1, 0);
										}
										else
										{
											unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 2f, 1, 0);
										}
									}
								}
								else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 713668775) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 713668775) != 0)
								{
									unk_0xE4A57337AE998385(Local_96.f_28[1], unk_0xD7C4E2CB0B216852(Local_96.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (unk_0x4D6B971C8AEE130C(Local_96.f_35[0]) - 90f));
								}
							}
						}
					}
				}
				else if (iLocal_609 == 1)
				{
					if (fLocal_814 < 20f || func_276(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 20f, 1))
					{
						if (!unk_0xF4954568C87BA772(uLocal_166[iLocal_574], "rcmminute2", "kneeling_arrest_get_up", 3))
						{
							unk_0x878D12AEFBF5BAF0(uLocal_166[iLocal_574], "rcmminute2", "kneeling_arrest_get_up", 16f, -2f, -1, 0, 0f, 0, 0, 0);
							iLocal_609 = 2;
						}
					}
				}
				else if (iLocal_609 == 2)
				{
					if (!unk_0xF4954568C87BA772(uLocal_166[iLocal_574], "rcmminute2", "kneeling_arrest_get_up", 3))
					{
						unk_0x878D12AEFBF5BAF0(uLocal_166[iLocal_574], "rcmminute2", "arrest_walk", 2f, -8f, -1, 65585, 0f, 0, 0, 0);
						unk_0x835BBE043A81D6DD(uLocal_166[iLocal_574], Local_96.f_35[0], 60000, 2, 1.2f, 1, 0);
						iLocal_609 = 0;
					}
				}
			}
			else if (!unk_0xBD036012AF60D938(uLocal_166[iLocal_574]) && !unk_0x87500AE0A3B98541(uLocal_166[iLocal_574], joaat("weapon_stungun")))
			{
				if (!unk_0xF4954568C87BA772(uLocal_166[iLocal_574], "rcmminute2", "kneeling_arrest_idle", 3))
				{
					unk_0xF156AA2A744B309E(uLocal_166[iLocal_574]);
					unk_0x878D12AEFBF5BAF0(uLocal_166[iLocal_574], "rcmminute2", "kneeling_arrest_idle", 2f, -16f, -1, 1, 0f, 0, 0, 0);
					if (iLocal_609 != 1)
					{
						func_304();
					}
					iLocal_609 = 1;
				}
			}
		}
	}
}

int func_310()
{
	if (unk_0xC2AE0A979757C34A(uLocal_398) && unk_0xB3BBF60126795AAD(uLocal_398) > 0.35f)
	{
		iLocal_924 = 1;
	}
	if ((iLocal_927 >= 7 || unk_0xC2AE0A979757C34A(uLocal_402)) || unk_0xC2AE0A979757C34A(uLocal_403))
	{
		iLocal_924 = 1;
	}
	return iLocal_924;
}

void func_311()
{
	if (iLocal_574 < 2)
	{
		if (func_511(uLocal_166[iLocal_574]))
		{
			if (iLocal_835 == 0)
			{
				Local_630[iLocal_574 /*3*/] = { unk_0xA8CFDE65C45F813B(uLocal_166[iLocal_574], 1) };
			}
			else
			{
				unk_0xF156AA2A744B309E(uLocal_166[iLocal_574]);
				unk_0x433C209504FBC7EE(&uLocal_199);
				unk_0x433C209504FBC7EE(&uLocal_200);
				unk_0x433C209504FBC7EE(&uLocal_201);
				unk_0x433C209504FBC7EE(&uLocal_202);
			}
			unk_0xFFD8329ED7A8E20C(uLocal_166[iLocal_574], 0);
			unk_0x71065DDFF8D7744C(uLocal_166[iLocal_574], unk_0xF384805745D7A349(unk_0x27D769C59BC9D030()));
		}
	}
	func_505(&iLocal_195);
	if (iLocal_574 == 0)
	{
		unk_0x76743E423ACEE0E6(uLocal_166[iLocal_574]);
		unk_0x8A3D3E40973625F0(uLocal_166[iLocal_574], 0, 0);
		uLocal_398 = unk_0x239E9E07DB537DC9(0f, 0f, 0f, 0f, 0f, 0f, 2);
		unk_0xEFED6B9FF91F059D(uLocal_398, 1);
		unk_0x21092DBB624E6BC2(uLocal_398, Local_96.f_35[0], unk_0x1060AD708DD56BC7(Local_96.f_35[0], "seat_pside_r"));
		unk_0x98E2FD5DA7CF97D3(uLocal_166[iLocal_574], uLocal_398, "missminuteman_2ig_1", "entertrunk_manuel", 4f, -4f, 4, 83, 1148846080, 0);
		unk_0x113D3B13A8AE40CF(uLocal_398, 2f);
		unk_0xA8ED9F72DC442242(uLocal_166[iLocal_574], 1);
	}
	if (iLocal_574 == 1)
	{
		if (iLocal_835 == 0)
		{
			if (!unk_0xDD5B7E23D882DABD(Local_96.f_28[1], Local_96.f_35[0]))
			{
				unk_0x76743E423ACEE0E6(uLocal_166[iLocal_574]);
				unk_0x8A3D3E40973625F0(uLocal_166[iLocal_574], 0, 0);
				uLocal_400 = unk_0x239E9E07DB537DC9(0f, 0f, 0f, 0f, 0f, 0f, 2);
				unk_0xEFED6B9FF91F059D(uLocal_400, 1);
				unk_0x21092DBB624E6BC2(uLocal_400, Local_96.f_35[0], unk_0x1060AD708DD56BC7(Local_96.f_35[0], "seat_pside_r"));
				unk_0x98E2FD5DA7CF97D3(uLocal_166[iLocal_574], uLocal_400, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1148846080, 0);
				unk_0x113D3B13A8AE40CF(uLocal_400, 2f);
			}
			else
			{
				unk_0xF156AA2A744B309E(uLocal_166[iLocal_574]);
				unk_0x433C209504FBC7EE(&uLocal_199);
				unk_0x433C209504FBC7EE(&uLocal_200);
				unk_0x433C209504FBC7EE(&uLocal_201);
				unk_0x433C209504FBC7EE(&uLocal_202);
				iLocal_887 = 1;
			}
			iLocal_614 = 1;
		}
		unk_0xA8ED9F72DC442242(uLocal_166[iLocal_574], 1);
	}
	if (iLocal_843 == 0)
	{
		if (!unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
		{
			if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 0)
			{
				if (iLocal_574 == 0)
				{
					unk_0x835BBE043A81D6DD(Local_96.f_28[0], Local_96.f_35[0], 60000, 0, 2f, 1, 0);
				}
				else
				{
					unk_0x835BBE043A81D6DD(Local_96.f_28[0], Local_96.f_35[0], 60000, 0, 1f, 1, 0);
				}
			}
		}
	}
	if (iLocal_927 == 3 || iLocal_927 == 5)
	{
		if (!unk_0x9A4E2270C2271219(Local_96.f_28[1], 0))
		{
			if (func_310())
			{
				if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 0)
				{
					if (func_276(Local_96.f_28[1], Local_96.f_35[0], 10f, 1))
					{
						unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 1f, 1, 0);
					}
					else
					{
						unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 2f, 1, 0);
					}
				}
			}
			else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 713668775) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 713668775) != 0)
			{
				unk_0xE4A57337AE998385(Local_96.f_28[1], unk_0xD7C4E2CB0B216852(Local_96.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (unk_0x4D6B971C8AEE130C(Local_96.f_35[0]) - 90f));
			}
		}
	}
	if (iLocal_574 == 0)
	{
		iLocal_827 = 0;
		iLocal_828 = 0;
		iLocal_825 = 0;
		iLocal_826 = 0;
		iLocal_820 = 0;
		iLocal_821 = 0;
		iLocal_824 = 0;
		iLocal_830 = 0;
		iLocal_831 = 0;
		iLocal_833 = 0;
		iLocal_587 = 0;
		iLocal_836 = 0;
	}
	if (iLocal_574 == 0)
	{
		unk_0x7440EFC435CB25D1(Local_96.f_28[1]);
		unk_0x7440EFC435CB25D1(Local_96.f_28[0]);
		iLocal_822 = 1;
	}
	if (iLocal_574 == 1)
	{
		unk_0x7440EFC435CB25D1(Local_96.f_28[0]);
		iLocal_823 = 1;
		if (iLocal_837 == 1)
		{
			if (iLocal_835 == 0)
			{
				if (func_511(iLocal_171))
				{
					if (func_269(iLocal_171, unk_0x27D769C59BC9D030()) > 70f)
					{
						if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 1))
						{
							func_236("MIN2_31", 7500, 0);
						}
						else
						{
							if (iLocal_910 == 0)
							{
								func_236("MIN2_19", 7500, 0);
								iLocal_910 = 1;
							}
							if (unk_0x7B4654D62B7E0E9E(iLocal_184[iLocal_574]))
							{
								func_505(&(iLocal_184[iLocal_574]));
							}
							if (unk_0x7B4654D62B7E0E9E(iLocal_197))
							{
								func_505(&iLocal_197);
							}
							if (!unk_0x7B4654D62B7E0E9E(iLocal_194))
							{
								iLocal_194 = func_234(Local_96.f_35[0], 1, 5);
							}
							iLocal_856 = 1;
						}
						func_219(&uLocal_408, "MIN2AU", "MIN2_SURR_12", 6, 1, 0, 0);
					}
				}
			}
		}
	}
	if (iLocal_574 == 2)
	{
		func_312(&uLocal_408, 5);
	}
	if (iLocal_574 == 0)
	{
		iLocal_574++;
	}
	iLocal_594 = unk_0xA0F74982C6AAA9D4();
}

void func_312(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_313()
{
	if (func_511(uLocal_172[0]))
	{
		if (func_269(uLocal_172[0], unk_0x27D769C59BC9D030()) < 15f)
		{
			unk_0x85FD30B510E7C05E(uLocal_172[0], unk_0x27D769C59BC9D030(), -1, 0, 2);
		}
	}
	if (iLocal_590 == 0)
	{
		if (func_511(uLocal_172[0]))
		{
			unk_0x33A0CEA494F4C2A3(&uLocal_207);
			unk_0x878D12AEFBF5BAF0(0, "rcmminute2lean", "exit", 1f, -8f, -1, 0, 0f, 0, 0, 0);
			unk_0x878D12AEFBF5BAF0(0, "rcmminute2", "intro_90_r", 8f, -8f, -1, 0, 0f, 0, 0, 0);
			unk_0x878D12AEFBF5BAF0(0, "rcmminute2", "loop_90_r", 8f, -8f, -1, 0, 0f, 0, 0, 0);
			unk_0x878D12AEFBF5BAF0(0, "rcmminute2", "outro_90_r", 8f, -8f, -1, 0, 0f, 0, 0, 0);
			unk_0x33F83FC0F5F458E3(uLocal_207);
			unk_0xF156AA2A744B309E(uLocal_172[0]);
			unk_0x8B8674266D533E9F(uLocal_172[0], uLocal_207);
		}
		if (unk_0xCBB243DDC0D132D1())
		{
			if (func_219(&uLocal_408, "MIN2AU", "MIN2_CEM", 7, 0, 0, 0))
			{
				unk_0xA0342EB4AE1476FC(2f, 4f, 0);
				iLocal_590 = 1;
			}
		}
		else
		{
			iLocal_590 = 1;
		}
	}
	if (unk_0xA0F74982C6AAA9D4() > iLocal_589 + 100)
	{
		if (iLocal_590 == 1)
		{
			if (func_511(uLocal_166[iLocal_574]))
			{
				unk_0x85FD30B510E7C05E(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), -1, 0, 2);
			}
			iLocal_590 = 2;
		}
	}
	if (unk_0xA0F74982C6AAA9D4() > iLocal_589 + 200)
	{
		if (iLocal_590 == 2)
		{
			if (func_511(uLocal_166[iLocal_574]))
			{
				if (func_5(uLocal_157[iLocal_574]))
				{
					if (!unk_0x7E16166EB69398DB(uLocal_157[iLocal_574]))
					{
						unk_0x5809312A3DC0ED0D(uLocal_157[iLocal_574], 101, "Min2DB1", 1);
						unk_0xDE09FFB26E05B1EC(uLocal_157[iLocal_574], 1000f);
						if (unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) < 6f)
						{
							fLocal_818 = 0.82f;
						}
						if (unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) >= 6f && unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) < 8f)
						{
							fLocal_818 = 0.91f;
						}
						if (unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) >= 8f && unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) < 10f)
						{
							fLocal_818 = 1f;
						}
						if (unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) >= 10f && unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) < 12f)
						{
							fLocal_818 = 1.2f;
						}
						if (unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) >= 12f && unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) < 14f)
						{
							fLocal_818 = 1.3f;
						}
						if (unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) >= 14f && unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) < 16f)
						{
							fLocal_818 = 1.35f;
						}
						if (unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) >= 16f && unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) < 18f)
						{
							fLocal_818 = 1.4f;
						}
						if (unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) >= 18f)
						{
							fLocal_818 = 1.5f;
						}
						unk_0x9301AAD27B1B527B(uLocal_157[iLocal_574], fLocal_818);
					}
				}
				if (func_5(iLocal_162))
				{
					if (!unk_0x7E16166EB69398DB(iLocal_162))
					{
						unk_0x5809312A3DC0ED0D(iLocal_162, 102, "Min2DB2", 1);
						unk_0xDE09FFB26E05B1EC(iLocal_162, 1100f);
						unk_0x9301AAD27B1B527B(iLocal_162, fLocal_818);
					}
				}
			}
			iLocal_590 = 5;
		}
	}
	if (unk_0xA0F74982C6AAA9D4() > iLocal_589 + 3400)
	{
		if (iLocal_590 == 5)
		{
			if (func_511(iLocal_171))
			{
				if (unk_0x810AFFABCBF31E2D(iLocal_171, 242628503) != 1)
				{
					unk_0x8B8674266D533E9F(iLocal_171, uLocal_203);
				}
			}
			if (func_511(uLocal_166[iLocal_574]))
			{
				if (unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], 242628503) != 1)
				{
					unk_0x8B8674266D533E9F(uLocal_166[iLocal_574], uLocal_199);
				}
			}
			iLocal_590 = 6;
		}
	}
	if (func_511(uLocal_166[iLocal_574]))
	{
		if (func_511(iLocal_171))
		{
			if (iLocal_590 == 10)
			{
				iLocal_589 = (iLocal_589 - 10000);
				iLocal_590 = 11;
			}
		}
	}
}

void func_314()
{
	if (unk_0x62C3C410FFEFF6CF(263.6694f, 2854.146f, 43.9398f, 15f, joaat("prop_facgate_03_l"), 0))
	{
		unk_0xA2D570F4DBAB7E26(joaat("prop_facgate_03_l"), 263.6694f, 2854.146f, 43.9398f, 1, 0.85f, 0);
	}
	if (unk_0x62C3C410FFEFF6CF(268.127f, 2845.054f, 44.08966f, 15f, joaat("prop_facgate_03_ld_l"), 0))
	{
		unk_0xA2D570F4DBAB7E26(joaat("prop_facgate_03_ld_l"), 268.127f, 2845.054f, 44.08966f, 1, -0.85f, 0);
	}
	if (unk_0x62C3C410FFEFF6CF(346.19f, 2859.69f, 43.63f, 15f, joaat("prop_fnclink_06gate3"), 0))
	{
		unk_0xA2D570F4DBAB7E26(joaat("prop_fnclink_06gate3"), 346.19f, 2859.69f, 43.63f, 1, 1.2f, 0);
	}
}

void func_315(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x0E063DDE8855EC52())
	{
		if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4429, 26))
		{
			return;
		}
	}
	if (unk_0x2FC8076880D60BD4())
	{
		unk_0x2776343F9772A0A9(iParam2);
		unk_0xBE273B45F8B9F771("FocusIn");
		unk_0x354EC40268FD2071("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xEC04D6F4A1ED71ED("FocusOut", 0, 0);
			unk_0x954BCDB8FDB0AC0F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xE736AA7B4B2691FB(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x0275404839C0A19A(sVar0))
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x0275404839C0A19A(uParam0->f_3))
	{
		if (func_316(uParam0->f_3))
		{
			unk_0x5BD150B52CE8D356(1);
		}
	}
	if (!unk_0x0275404839C0A19A(sVar0))
	{
		if (func_316(sVar0))
		{
			unk_0x5BD150B52CE8D356(1);
		}
	}
}

bool func_316(char* sParam0)
{
	unk_0x66F753896FC4EEC3(sParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

void func_317()
{
	float fVar0;
	
	if (iLocal_574 == 0)
	{
		if (iLocal_825 == 0)
		{
			if (func_511(uLocal_166[iLocal_574]))
			{
				func_319(&uLocal_36, uLocal_166[iLocal_574], 0, 0, 1, 1, 1);
			}
		}
		else
		{
			func_315(&uLocal_36, 0, 0);
		}
	}
	else if (iLocal_574 == 1)
	{
		if (iLocal_601 == 0)
		{
			if (iLocal_837 == 0)
			{
				if (func_511(iLocal_171))
				{
					func_319(&uLocal_36, iLocal_171, 0, 0, 1, 1, 1);
				}
			}
			else
			{
				func_315(&uLocal_36, 0, 0);
				iLocal_602 = unk_0xA0F74982C6AAA9D4();
				iLocal_601 = 1;
			}
		}
		else if (iLocal_601 == 1)
		{
			if (unk_0xA0F74982C6AAA9D4() > iLocal_602 + 5)
			{
				if (iLocal_825 == 0)
				{
					if (func_511(uLocal_166[iLocal_574]))
					{
						func_319(&uLocal_36, uLocal_166[iLocal_574], 0, 0, 1, 1, 1);
					}
				}
				else
				{
					func_315(&uLocal_36, 0, 0);
					iLocal_601 = 2;
				}
			}
		}
	}
	else if (iLocal_601 < 3)
	{
		func_315(&uLocal_36, 0, 0);
		iLocal_601 = 3;
	}
	if (iLocal_574 == 0)
	{
		if (iLocal_836 == 1)
		{
			if (func_511(uLocal_166[iLocal_574]))
			{
				if (func_5(uLocal_157[iLocal_574]))
				{
					if (unk_0x1C48F76B3D032074(uLocal_166[iLocal_574], uLocal_157[iLocal_574], 0))
					{
						if (unk_0x7B4654D62B7E0E9E(iLocal_184[iLocal_574]))
						{
							unk_0xC5B4E9487339A2BB(iLocal_184[iLocal_574], 1f);
						}
						if (unk_0xA0F74982C6AAA9D4() > iLocal_604 + 15000)
						{
							if (func_231(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 1) > 100f)
							{
								unk_0x9459094F36F0BFDC(uLocal_166[iLocal_574], 20f);
							}
							else
							{
								unk_0x9459094F36F0BFDC(uLocal_166[iLocal_574], 25f);
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_574 == 1)
	{
		if (iLocal_836 == 1)
		{
			if (func_511(uLocal_166[iLocal_574]))
			{
				if (func_5(uLocal_157[iLocal_574]))
				{
					if (unk_0x1C48F76B3D032074(uLocal_166[iLocal_574], uLocal_157[iLocal_574], 0))
					{
						if (iLocal_860 == 1)
						{
							if (unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -258271821) != 1)
							{
								unk_0xF55CF905F405E357(uLocal_166[iLocal_574], uLocal_157[iLocal_574], 24f, 786468);
							}
						}
						else if (iLocal_859 == 1)
						{
							if (func_5(iLocal_162) && func_276(iLocal_171, uLocal_166[iLocal_574], 20f, 1))
							{
								fVar0 = -1f;
							}
							else
							{
								fVar0 = 22f;
							}
							if (!iLocal_891)
							{
								if (unk_0x63B52896FA93CA2E(uLocal_157[iLocal_574]) > 30)
								{
									unk_0x347457A360E454FB(uLocal_166[iLocal_574], uLocal_157[iLocal_574], "Min2_Bike02", 786468, 32, 8, -1, fVar0, 0, 1073741824);
									iLocal_891 = 1;
								}
							}
							else if (!unk_0x3AAD3BDAC622B4F1(uLocal_157[iLocal_574]))
							{
								unk_0x347457A360E454FB(uLocal_166[iLocal_574], uLocal_157[iLocal_574], "Min2_Bike02", 786468, 32, 8, -1, fVar0, 0, 1073741824);
							}
							else
							{
								func_318(fVar0);
							}
						}
						if (iLocal_841 == 0)
						{
							unk_0x64708EB51448F86F(uLocal_166[iLocal_574], 1);
							if (unk_0x7B4654D62B7E0E9E(iLocal_184[iLocal_574]))
							{
								unk_0xC5B4E9487339A2BB(iLocal_184[iLocal_574], 1f);
							}
							iLocal_841 = 1;
						}
					}
				}
			}
			if (func_511(iLocal_171))
			{
				if (func_5(iLocal_162))
				{
					if (unk_0x1C48F76B3D032074(iLocal_171, iLocal_162, 0))
					{
						if (iLocal_860 == 1)
						{
							if (!unk_0x1C48F76B3D032074(uLocal_166[iLocal_574], uLocal_157[iLocal_574], 0) || !func_276(iLocal_171, uLocal_166[iLocal_574], 29f, 1))
							{
								if (unk_0x810AFFABCBF31E2D(iLocal_171, -258271821) != 1)
								{
									unk_0xF55CF905F405E357(iLocal_171, iLocal_162, 24f, 786468);
									iLocal_858 = 0;
								}
							}
						}
						else
						{
							if (iLocal_859 == 0)
							{
								if (unk_0x98CEDC9398D49BB8(iLocal_171, 350.9472f, 2857.253f, 39.28188f, 379.0718f, 2857.876f, 50.55812f, 21.25f, 0, 1, 0))
								{
									if (func_511(uLocal_166[iLocal_574]))
									{
										if (func_5(uLocal_157[iLocal_574]))
										{
											unk_0x347457A360E454FB(uLocal_166[iLocal_574], uLocal_157[iLocal_574], "Min2_Bike02", 262144, 28, 0, -1, -1f, 0, 1073741824);
											unk_0x347457A360E454FB(iLocal_171, iLocal_162, "Min2_Bike02", 262144, 27, 0, -1, -1f, 0, 1073741824);
										}
									}
									iLocal_859 = 1;
								}
							}
							if ((((func_5(uLocal_157[iLocal_574]) && func_511(uLocal_166[iLocal_574])) && unk_0x1C48F76B3D032074(uLocal_166[iLocal_574], uLocal_157[iLocal_574], 0)) && func_276(iLocal_171, uLocal_166[iLocal_574], 22f, 1)) && unk_0x63B52896FA93CA2E(uLocal_157[iLocal_574]) > 29)
							{
								if (iLocal_858 == 0)
								{
									unk_0x32055D255A5648A0(iLocal_171, iLocal_162, uLocal_157[iLocal_574], -1, 40f, 262144, fLocal_573, 20, 1101004800);
									iLocal_858 = 1;
								}
							}
							else if (!unk_0x3AAD3BDAC622B4F1(iLocal_162))
							{
								unk_0x347457A360E454FB(iLocal_171, iLocal_162, "Min2_Bike02", 262144, 0, 8, -1, -1f, 0, 1073741824);
								iLocal_858 = 0;
							}
						}
						if (iLocal_842 == 0)
						{
							unk_0x64708EB51448F86F(iLocal_171, 1);
							if (unk_0x7B4654D62B7E0E9E(iLocal_197))
							{
								unk_0xC5B4E9487339A2BB(iLocal_197, 1f);
							}
							iLocal_842 = 1;
						}
					}
				}
			}
			if (unk_0x98CEDC9398D49BB8(iLocal_171, 1300.489f, 1099.818f, 101.6563f, 1307.388f, 1002.332f, 113.9629f, 21.25f, 0, 1, 0) || unk_0x98CEDC9398D49BB8(uLocal_166[iLocal_574], 1300.489f, 1099.818f, 101.6563f, 1307.388f, 1002.332f, 113.9629f, 21.25f, 0, 1, 0))
			{
				iLocal_860 = 1;
			}
		}
	}
	if (iLocal_574 == 0)
	{
		if (iLocal_825 == 0)
		{
			if (func_511(uLocal_166[iLocal_574]))
			{
				unk_0xD6FF698E7BC1C003(uLocal_166[iLocal_574], 1);
			}
		}
	}
	else if (iLocal_574 == 1)
	{
		if (iLocal_825 == 0)
		{
			if (func_511(uLocal_166[iLocal_574]))
			{
				unk_0xD6FF698E7BC1C003(uLocal_166[iLocal_574], 1);
			}
		}
		if (iLocal_837 == 0)
		{
			if (func_511(iLocal_171))
			{
				unk_0xD6FF698E7BC1C003(iLocal_171, 1);
			}
		}
	}
}

void func_318(float fParam0)
{
	if (fParam0 == -1f)
	{
		unk_0x3A3FF0970AAA1D1A(uLocal_157[iLocal_574]);
	}
	else if (unk_0xECC01072E61D2F3A(uLocal_157[iLocal_574]) > fParam0)
	{
		unk_0xE525AF786105DD38(uLocal_157[iLocal_574], fParam0);
	}
	else
	{
		unk_0x3A3FF0970AAA1D1A(uLocal_157[iLocal_574]);
	}
}

void func_319(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_320(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_320(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_321(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_321(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
	{
		func_315(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_322(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_322(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x2FC8076880D60BD4())
	{
		if (unk_0xA0F74982C6AAA9D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x0275404839C0A19A(iVar0))
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_316(iVar0))
	{
		func_341();
	}
	if (func_340(iParam1) && unk_0x55D0FF0532D6A513(iParam1))
	{
		iVar1 = 0;
		if (unk_0x54F37403E01EFD97(iParam1))
		{
			unk_0xF94147623DF44CA7(unk_0x97EA5EA3E7FE8500(iParam1));
			unk_0x011F73254F92FBB7(unk_0x97EA5EA3E7FE8500(iParam1), 1);
			if (unk_0xCBE708DF56FAA8AC(unk_0x97EA5EA3E7FE8500(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8F8858152A9B9959(iParam1))
		{
			unk_0xDB3DE7E1A7B673FA(unk_0x35E488C304B2E03E(iParam1));
			if (unk_0xC45666EE8C73F3BA(unk_0x35E488C304B2E03E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xEB9962C184DA6150(iParam1))
		{
			unk_0x2A22125F53415A48(unk_0xF85370D360C5C95C(iParam1));
			if (unk_0x85CDF51DD7146421(unk_0xF85370D360C5C95C(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x2FC8076880D60BD4())
		{
			if (func_335(uParam0, bParam7, bParam9, 0))
			{
				func_331(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_327(iVar0))
				{
					if ((unk_0x0275404839C0A19A(uParam0->f_3) && !unk_0x0275404839C0A19A(iVar0)) && unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
					{
						if ((iVar1 && !unk_0x46768B1495288824()) && uParam8)
						{
							if (!func_316(iVar0))
							{
								func_326(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xC1C5B83BB6719C6C("CMN_HINT", iVar0))
								{
									func_325(1);
								}
							}
						}
					}
				}
			}
			else if (func_327(iVar0))
			{
				if (unk_0x0275404839C0A19A(uParam0->f_3) && !unk_0x0275404839C0A19A(iVar0))
				{
					if (((unk_0x4FB9EE3D0706477D(iParam1) && iVar1) && !unk_0x46768B1495288824()) && uParam8)
					{
						if (!func_316(iVar0))
						{
							func_326(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xC1C5B83BB6719C6C("CMN_HINT", iVar0))
							{
								func_325(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x0275404839C0A19A(sParam5))
			{
				if (func_316(sParam5))
				{
					unk_0x5BD150B52CE8D356(1);
				}
			}
			if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
			{
				if (unk_0x804F37BBE1FFE251(unk_0x27D769C59BC9D030()))
				{
					if (unk_0xD7DDFCF6557D9296(3) == 3 || unk_0xD7DDFCF6557D9296(3) == 4)
					{
						func_315(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5723DA3F8C10C270(unk_0x27D769C59BC9D030()))
				{
					if (unk_0xD7DDFCF6557D9296(6) == 3 || unk_0xD7DDFCF6557D9296(6) == 4)
					{
						func_315(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xDF29E1AF81C00A22(unk_0x27D769C59BC9D030()))
				{
					if (unk_0xD7DDFCF6557D9296(4) == 3 || unk_0xD7DDFCF6557D9296(4) == 4)
					{
						func_315(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD88A50C7359222FC(unk_0x27D769C59BC9D030()))
				{
					if (unk_0xD7DDFCF6557D9296(5) == 3 || unk_0xD7DDFCF6557D9296(5) == 4)
					{
						func_315(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x40CB4787F2506675(unk_0x27D769C59BC9D030()))
				{
					if (unk_0xD7DDFCF6557D9296(2) == 3 || unk_0xD7DDFCF6557D9296(2) == 4)
					{
						func_315(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0D1F37E8DD733194() == 3 || unk_0x0D1F37E8DD733194() == 4)
				{
					func_315(uParam0, iVar0, 1);
				}
			}
			if (!func_335(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_324(uParam0))
				{
					func_323(uParam0);
				}
			}
		}
	}
	else
	{
		func_315(uParam0, iVar0, 0);
	}
}

void func_323(var uParam0)
{
	if (func_340(unk_0x27D769C59BC9D030()))
	{
		unk_0x7440EFC435CB25D1(unk_0x27D769C59BC9D030());
	}
	if (unk_0x2FC8076880D60BD4())
	{
		unk_0xE736AA7B4B2691FB(1);
		unk_0x2776343F9772A0A9(0);
		unk_0x354EC40268FD2071("HINT_CAM_SCENE");
		unk_0xBE273B45F8B9F771("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xEC04D6F4A1ED71ED("FocusOut", 0, 0);
			unk_0x954BCDB8FDB0AC0F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_324(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xA0F74982C6AAA9D4()
		{
			return 1;
		}
	}
	return 0;
}

int func_325(bool bParam0)
{
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101154.f_8739.f_100++;
			}
			return Global_101154.f_8739.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101154.f_8739.f_101++;
			}
			return Global_101154.f_8739.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101154.f_8739.f_102++;
			}
			return Global_101154.f_8739.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_326(char* sParam0, int iParam1)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	unk_0x9785EE0D78241684(0, 0, 1, iParam1);
}

int func_327(char* sParam0)
{
	if (!func_328(1, 1, 0))
	{
		if ((!unk_0x75CB9E30BA492FF0(sParam0) && func_316(sParam0)) || func_316("CMN_HINT"))
		{
			unk_0x5BD150B52CE8D356(1);
		}
		return 0;
	}
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (func_325(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_325(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_325(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_328(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x5D293E404CA20AA5())
	{
		return 0;
	}
	if (func_330(0))
	{
		return 0;
	}
	if (func_329())
	{
		return 0;
	}
	if (unk_0xDEDA6095A64A34C2())
	{
		return 0;
	}
	if (Global_68058)
	{
		return 0;
	}
	if (unk_0xD32535FA4397160F(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52930)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
		{
			if (unk_0x804F37BBE1FFE251(unk_0x27D769C59BC9D030()))
			{
				if (unk_0xD7DDFCF6557D9296(3) == 3 || unk_0xD7DDFCF6557D9296(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5723DA3F8C10C270(unk_0x27D769C59BC9D030()))
			{
				if (unk_0xD7DDFCF6557D9296(6) == 3 || unk_0xD7DDFCF6557D9296(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xDF29E1AF81C00A22(unk_0x27D769C59BC9D030()))
			{
				if (unk_0xD7DDFCF6557D9296(4) == 3 || unk_0xD7DDFCF6557D9296(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD88A50C7359222FC(unk_0x27D769C59BC9D030()))
			{
				if (unk_0xD7DDFCF6557D9296(5) == 3 || unk_0xD7DDFCF6557D9296(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x40CB4787F2506675(unk_0x27D769C59BC9D030()))
			{
				if (unk_0xD7DDFCF6557D9296(2) == 3 || unk_0xD7DDFCF6557D9296(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0D1F37E8DD733194() == 3 || unk_0x0D1F37E8DD733194() == 4)
			{
				return 0;
			}
			if (unk_0xAC2BD8E798D43B27())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_329()
{
	return unk_0xA0F74982C6AAA9D4() <= Global_17257.f_5745 + 100;
}

int func_330(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_331(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x2006A8C1BA2AFE80(iParam1, 0))
	{
		func_315(uParam0, 0, 0);
	}
	if (func_334(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x54F37403E01EFD97(iParam1))
		{
			iVar0 = unk_0x97EA5EA3E7FE8500(iParam1);
			if (!unk_0x9A4E2270C2271219(iVar0, 0))
			{
				if (unk_0x30D6008994E431E8(iVar0))
				{
					if (!func_332())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xF8E2BA35959FB71C(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xE736AA7B4B2691FB(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xEE40B5E30309799D(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x85FD30B510E7C05E(unk_0x27D769C59BC9D030(), iParam1, -1, iVar3, iVar4);
	unk_0xEC04D6F4A1ED71ED("FocusIn", 0, 0);
	unk_0xF8B012FD1C255840("HINT_CAM_SCENE");
	unk_0x954BCDB8FDB0AC0F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xA0F74982C6AAA9D4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_332()
{
	return func_333(unk_0x4D29100D094E5511());
}

int func_333(int iParam0)
{
	if (unk_0x946C63BD9EF05437(unk_0xC834A7C58DEB59B4(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_334(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_335(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xA0F74982C6AAA9D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
				{
					if (func_339(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_338(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_338(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_339(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_324(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xA0F74982C6AAA9D4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
					{
						if (!func_339(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_338(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_338(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_339(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
				{
					if (!func_339(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_338(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_338(bParam1, bParam2, bParam3) || unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) || unk_0xE4A4201018E7FD55(unk_0x27D769C59BC9D030(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_339(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xA0F74982C6AAA9D4() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
					{
						if (func_337(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_336(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) || func_336(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) || unk_0xE4A4201018E7FD55(unk_0x27D769C59BC9D030(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_337(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_324(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_328(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_341();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_336(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_328(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		if (!unk_0x102415F9164597E2(unk_0x4D29100D094E5511()))
		{
			unk_0xCFF471245AFEEDCE(0, 140, 1);
			unk_0xCFF471245AFEEDCE(0, 80, 1);
			if (unk_0x7E5B5D3856851E03(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_337(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_328(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xCFF471245AFEEDCE(0, 80, 1);
		if (unk_0x1C3F8A712337F651())
		{
			if (unk_0x7E5B5D3856851E03(0, 80))
			{
				unk_0xE736AA7B4B2691FB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_338(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_328(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		if (!unk_0x102415F9164597E2(unk_0x4D29100D094E5511()))
		{
			unk_0xCFF471245AFEEDCE(0, 140, 1);
			unk_0xCFF471245AFEEDCE(0, 80, 1);
			if (unk_0xC522B453AD5C9D05(0, 80) && unk_0xA0F74982C6AAA9D4() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_339(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_328(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xCFF471245AFEEDCE(0, 80, 1);
		if (unk_0x1C3F8A712337F651())
		{
			if (unk_0xC522B453AD5C9D05(0, 80) && unk_0xA0F74982C6AAA9D4() > Global_116)
			{
				unk_0xE736AA7B4B2691FB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_340(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (unk_0x8F8858152A9B9959(iParam0))
		{
			if (unk_0x0B4DDB992C7BCF57(unk_0x35E488C304B2E03E(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x54F37403E01EFD97(iParam0))
		{
			if (!unk_0xE4F7206742848BAF(unk_0x97EA5EA3E7FE8500(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xEB9962C184DA6150(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_341()
{
	unk_0x26545538B51562AD(&Global_2284, 4);
}

void func_342()
{
	float fVar0;
	
	if (iLocal_927 == 8 || iLocal_927 == 10)
	{
		if (iLocal_837 == 1)
		{
			if (unk_0xDD5B7E23D882DABD(Local_96.f_28[1], Local_96.f_35[0]))
			{
				if (iLocal_821 == 0)
				{
					if (unk_0xECC01072E61D2F3A(Local_96.f_35[0]) < 0.1f)
					{
						if (func_231(Local_96.f_28[1], iLocal_171, 1) < 40f)
						{
							if ((unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1227113341) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1227113341) != 0) && !func_343())
							{
								unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 1, 0);
								unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 2, 0);
								unk_0x85FD30B510E7C05E(Local_96.f_28[1], iLocal_171, -1, 0, 2);
								unk_0x9B6F077214CEDE77(Local_96.f_28[1], iLocal_171, 20000, 1056964608, 1073741824, 1073741824, 0);
								if (iLocal_628 != 1)
								{
									func_272();
								}
								iLocal_628 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_821 = 1;
			}
			if (iLocal_821 == 1)
			{
				if (!func_232())
				{
					if (iLocal_628 == 1)
					{
						if (func_219(&uLocal_408, "MIN2AU", "MIN2_SURR_3", 9, 0, 0, 0))
						{
							iLocal_628 = 2;
						}
					}
				}
				if (iLocal_838 == 0)
				{
					if (func_231(Local_96.f_28[1], iLocal_171, 1) < 6f && func_285(Local_96.f_28[1], iLocal_171, 1126825984, 1, 250, 7))
					{
						if (!unk_0x87500AE0A3B98541(iLocal_171, 0) || unk_0x8D1E4231095B313B(iLocal_171))
						{
							if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 780511057) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 780511057) != 0)
							{
								unk_0xF7CC6FE06DC847BB(Local_96.f_28[1], iLocal_171, 67108864, 16);
							}
						}
						else if (unk_0x57ADE64D2E3798F0(Local_96.f_28[1]))
						{
							if ((unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -828834893) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -828834893) != 0) && !func_343())
							{
								unk_0x550B00F01FC4ADF0(Local_96.f_28[1], 0, 0);
							}
						}
						else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1630799643) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1630799643) != 0)
						{
							unk_0xA32477EFFEE42B03(Local_96.f_28[1], iLocal_171, -1, 0);
						}
					}
					else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 780511057) == 1)
					{
						if (func_231(Local_96.f_28[1], iLocal_171, 1) > 9f)
						{
							if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1227113341) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1227113341) != 0)
							{
								unk_0x9B6F077214CEDE77(Local_96.f_28[1], iLocal_171, 20000, 1056964608, 1073741824, 1073741824, 0);
							}
						}
					}
					else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1227113341) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1227113341) != 0)
					{
						unk_0x9B6F077214CEDE77(Local_96.f_28[1], iLocal_171, 20000, 1056964608, 1073741824, 1073741824, 0);
					}
					if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1435919172) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1435919172) != 0)
					{
						unk_0x9B6F077214CEDE77(Local_96.f_28[1], iLocal_171, 20000, 1056964608, 1073741824, 1073741824, 0);
					}
				}
				else
				{
					if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 780511057) == 1)
					{
						unk_0xF156AA2A744B309E(Local_96.f_28[1]);
					}
					if (func_231(Local_96.f_28[1], iLocal_171, 1) < 3f)
					{
						if (func_231(Local_96.f_28[1], iLocal_171, 1) < 1.4f)
						{
							if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1758697641) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1758697641) != 0)
							{
								unk_0x64C7D187A71A95A7(Local_96.f_28[1], unk_0xD7C4E2CB0B216852(Local_96.f_28[1], 0f, -4.5f, 0f), iLocal_171, 2f, 0, 2.5f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							}
						}
						else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1630799643) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1630799643) != 0)
						{
							unk_0xA32477EFFEE42B03(Local_96.f_28[1], iLocal_171, -1, 0);
						}
					}
					else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1207174364) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1207174364) != 0)
					{
						if (func_231(Local_96.f_28[1], iLocal_171, 1) < 9f)
						{
							fVar0 = 1f;
						}
						else
						{
							fVar0 = 2f;
						}
						unk_0x15E390D34C74EB99(Local_96.f_28[1], iLocal_171, iLocal_171, fVar0, 0, 2f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
				}
			}
		}
	}
	else if (iLocal_825 == 1)
	{
		if (unk_0xDD5B7E23D882DABD(Local_96.f_28[1], Local_96.f_35[0]))
		{
			if (unk_0xECC01072E61D2F3A(Local_96.f_35[0]) < 0.1f)
			{
				if (func_231(Local_96.f_28[1], uLocal_166[iLocal_574], 1) < 40f)
				{
					if (iLocal_820 == 1)
					{
						if (unk_0xA0F74982C6AAA9D4() > iLocal_591 + 400)
						{
							unk_0x85FD30B510E7C05E(Local_96.f_28[1], uLocal_166[iLocal_574], -1, 0, 2);
							if ((unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1227113341) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1227113341) != 0) && !func_343())
							{
								unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 1, 0);
								unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 2, 0);
								unk_0x9B6F077214CEDE77(Local_96.f_28[1], uLocal_166[iLocal_574], -1, 1056964608, 1073741824, 1073741824, 0);
								if (iLocal_627 != 1)
								{
									func_272();
								}
								iLocal_627 = 1;
								iLocal_821 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_821 == 1)
		{
			if (iLocal_826 == 0)
			{
				if (!func_232())
				{
					if (iLocal_627 == 1)
					{
						if (func_219(&uLocal_408, "MIN2AU", "MIN2_SURR_1", 9, 0, 0, 0))
						{
							iLocal_627 = 2;
						}
					}
				}
				if (func_231(Local_96.f_28[1], uLocal_166[iLocal_574], 1) < 9f && func_285(Local_96.f_28[1], uLocal_166[iLocal_574], 1126825984, 1, 250, 7))
				{
					if (!unk_0x87500AE0A3B98541(uLocal_166[iLocal_574], 0) || unk_0x8D1E4231095B313B(uLocal_166[iLocal_574]))
					{
						if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 780511057) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 780511057) != 0)
						{
							unk_0xF7CC6FE06DC847BB(Local_96.f_28[1], uLocal_166[iLocal_574], 67108864, 16);
						}
					}
					else if (unk_0x57ADE64D2E3798F0(Local_96.f_28[1]))
					{
						if (((unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -828834893) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -828834893) != 0) && unk_0xECC01072E61D2F3A(Local_96.f_35[0]) < 0.1f) && !func_343())
						{
							unk_0x550B00F01FC4ADF0(Local_96.f_28[1], 1200, 0);
						}
					}
					else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1630799643) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1630799643) != 0)
					{
						unk_0xA32477EFFEE42B03(Local_96.f_28[1], uLocal_166[iLocal_574], -1, 0);
					}
				}
				else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 780511057) == 1)
				{
					if (func_231(Local_96.f_28[1], uLocal_166[iLocal_574], 1) > 11f)
					{
						if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1227113341) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1227113341) != 0)
						{
							unk_0x9B6F077214CEDE77(Local_96.f_28[1], uLocal_166[iLocal_574], 60000, 1056964608, 1073741824, 1073741824, 0);
						}
					}
				}
				else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1227113341) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1227113341) != 0)
				{
					unk_0x9B6F077214CEDE77(Local_96.f_28[1], uLocal_166[iLocal_574], 60000, 1056964608, 1073741824, 1073741824, 0);
				}
				if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1435919172) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1435919172) != 0)
				{
					unk_0x9B6F077214CEDE77(Local_96.f_28[1], uLocal_166[iLocal_574], 20000, 1056964608, 1073741824, 1073741824, 0);
				}
			}
			else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 0)
			{
				if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 780511057) == 1)
				{
					unk_0xF156AA2A744B309E(Local_96.f_28[1]);
				}
				if (func_231(Local_96.f_28[1], uLocal_166[iLocal_574], 1) < 3.5f || unk_0x1C48F76B3D032074(uLocal_166[0], Local_96.f_35[0], 1))
				{
					if (func_231(Local_96.f_28[1], uLocal_166[iLocal_574], 1) < 1.4f)
					{
						if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1758697641) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1758697641) != 0)
						{
							unk_0x64C7D187A71A95A7(Local_96.f_28[1], unk_0xD7C4E2CB0B216852(Local_96.f_28[1], 0f, -4.5f, 0f), uLocal_166[iLocal_574], 2f, 0, 2.5f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						}
					}
					else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1630799643) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 1630799643) != 0)
					{
						unk_0xA32477EFFEE42B03(Local_96.f_28[1], uLocal_166[iLocal_574], -1, 0);
					}
				}
				else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1207174364) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1207174364) != 0)
				{
					if (func_231(Local_96.f_28[1], uLocal_166[iLocal_574], 1) < 9f)
					{
						fVar0 = 1f;
					}
					else
					{
						fVar0 = 2f;
					}
					unk_0x15E390D34C74EB99(Local_96.f_28[1], uLocal_166[iLocal_574], uLocal_166[iLocal_574], fVar0, 0, 2.7f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
}

int func_343()
{
	if (!unk_0xDD5B7E23D882DABD(unk_0x27D769C59BC9D030(), Local_96.f_35[0]) && unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), unk_0xEAE1E838D30BBB88(Local_96.f_35[0], 14), 1.5f, 1.5f, 1.5f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_344()
{
	float fVar0;
	float fVar1;
	
	if (iLocal_927 == 8 || iLocal_927 == 10)
	{
		fVar0 = 2.2f;
		fVar1 = 3.5f;
	}
	else
	{
		fVar0 = 4.5f;
		fVar1 = 6f;
	}
	if (iLocal_825 == 1)
	{
		if (unk_0xDD5B7E23D882DABD(Local_96.f_28[0], Local_96.f_35[0]))
		{
			if (unk_0xECC01072E61D2F3A(Local_96.f_35[0]) < 0.1f)
			{
				if (func_231(Local_96.f_28[0], uLocal_166[iLocal_574], 1) < 40f)
				{
					iLocal_591 = unk_0xA0F74982C6AAA9D4();
					if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 1227113341) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 1227113341) != 0)
					{
						unk_0x7ED3655E5924C6F4(Local_96.f_28[0], 1, 0);
						unk_0x7ED3655E5924C6F4(Local_96.f_28[0], 2, 0);
						unk_0x85FD30B510E7C05E(Local_96.f_28[0], uLocal_166[iLocal_574], -1, 0, 2);
						unk_0x9B6F077214CEDE77(Local_96.f_28[0], uLocal_166[iLocal_574], 20000, 1056964608, 1073741824, 1073741824, 0);
						if (iLocal_574 != 0)
						{
							if (iLocal_629 != 1)
							{
								func_272();
							}
							iLocal_629 = 1;
						}
						iLocal_820 = 1;
					}
				}
			}
		}
		if (iLocal_820 == 1)
		{
			if (!func_232())
			{
				if (iLocal_629 == 1)
				{
					if (func_219(&uLocal_408, "MIN2AU", "MIN2_SURR_5", 9, 0, 0, 0))
					{
						iLocal_629 = 2;
					}
				}
			}
			if (iLocal_826 == 0)
			{
				if (func_231(Local_96.f_28[0], uLocal_166[iLocal_574], 1) < 6f && func_285(Local_96.f_28[0], uLocal_166[iLocal_574], 1126825984, 1, 250, 7))
				{
					if (!unk_0x87500AE0A3B98541(uLocal_166[iLocal_574], 0) || unk_0x8D1E4231095B313B(uLocal_166[iLocal_574]))
					{
						if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 780511057) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 780511057) != 0)
						{
							iLocal_591 = unk_0xA0F74982C6AAA9D4();
							unk_0xF7CC6FE06DC847BB(Local_96.f_28[0], uLocal_166[iLocal_574], 67108864, 16);
						}
					}
					else if (unk_0x57ADE64D2E3798F0(Local_96.f_28[0]))
					{
						if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -828834893) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -828834893) != 0)
						{
							unk_0x550B00F01FC4ADF0(Local_96.f_28[0], 0, 0);
						}
					}
					else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 1630799643) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 1630799643) != 0)
					{
						iLocal_591 = unk_0xA0F74982C6AAA9D4();
						unk_0xA32477EFFEE42B03(Local_96.f_28[0], uLocal_166[iLocal_574], -1, 0);
					}
				}
				else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 780511057) == 1)
				{
					if (func_231(Local_96.f_28[0], uLocal_166[iLocal_574], 1) > 9f)
					{
						if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 1227113341) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 1227113341) != 0)
						{
							unk_0x9B6F077214CEDE77(Local_96.f_28[0], uLocal_166[iLocal_574], 20000, 1056964608, 1073741824, 1073741824, 0);
						}
					}
				}
				else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 1227113341) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 1227113341) != 0)
				{
					unk_0x9B6F077214CEDE77(Local_96.f_28[0], uLocal_166[iLocal_574], 20000, 1056964608, 1073741824, 1073741824, 0);
				}
				if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 1435919172) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 1435919172) != 0)
				{
					unk_0x9B6F077214CEDE77(Local_96.f_28[0], uLocal_166[iLocal_574], 20000, 1056964608, 1073741824, 1073741824, 0);
				}
			}
			else
			{
				if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 780511057) == 1)
				{
					unk_0xF156AA2A744B309E(Local_96.f_28[0]);
				}
				if (func_231(Local_96.f_28[0], uLocal_166[iLocal_574], 1) < fVar1)
				{
					if (func_231(Local_96.f_28[0], uLocal_166[iLocal_574], 1) < 1.6f)
					{
						if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1758697641) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1758697641) != 0)
						{
							unk_0x64C7D187A71A95A7(Local_96.f_28[0], unk_0xD7C4E2CB0B216852(Local_96.f_28[0], 0f, -4.5f, 0f), uLocal_166[iLocal_574], 2f, 0, 2.5f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						}
					}
					else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 1630799643) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 1630799643) != 0)
					{
						unk_0xA32477EFFEE42B03(Local_96.f_28[0], uLocal_166[iLocal_574], -1, 0);
					}
				}
				else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1207174364) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1207174364) != 0)
				{
					unk_0x15E390D34C74EB99(Local_96.f_28[0], uLocal_166[iLocal_574], uLocal_166[iLocal_574], 1f, 0, fVar0, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
}

void func_345()
{
	if (unk_0x7E16166EB69398DB(Local_96.f_35[0]))
	{
		if ((((unk_0x5FCAE3F8AEC656AF(0, 71) || unk_0x5FCAE3F8AEC656AF(0, 72)) || unk_0x5FCAE3F8AEC656AF(0, 278)) || unk_0x5FCAE3F8AEC656AF(0, 279)) || unk_0xA0F74982C6AAA9D4() > iLocal_596 + 3500)
		{
			if (unk_0x7E16166EB69398DB(Local_96.f_35[0]))
			{
				unk_0x6F199D2803D51520(Local_96.f_35[0]);
				unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
				unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), true, 0);
			}
		}
	}
}

void func_346(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55757)
	{
	}
	Global_55757 = 0;
	if (bParam0)
	{
		Global_55758 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67845[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_67845[iVar0 /*9*/] > 0)
			{
				if (Global_67845[iVar0 /*9*/] == iParam1)
				{
					Global_67845[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_347()
{
	if (iLocal_863 == 0)
	{
		if (unk_0xA0F74982C6AAA9D4() > iLocal_589 + 5000)
		{
			unk_0x68BD4F826EFDDC53("MM2_START_STA");
			iLocal_863 = 1;
		}
	}
	func_505(&(uLocal_189[iLocal_574]));
	func_314();
	func_266();
	func_313();
	if (unk_0xA0F74982C6AAA9D4() > iLocal_589 + 2000)
	{
		if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
		{
			if (!unk_0x7B4654D62B7E0E9E(iLocal_184[iLocal_574]))
			{
				iLocal_184[iLocal_574] = func_411(uLocal_166[iLocal_574], 1, 0, 5);
				if (!unk_0x9A4E2270C2271219(uLocal_166[iLocal_574], 0))
				{
					unk_0xC5B4E9487339A2BB(iLocal_184[iLocal_574], 0.7f);
				}
				else
				{
					unk_0xC5B4E9487339A2BB(iLocal_184[iLocal_574], 1f);
				}
				if (iLocal_913 == 0)
				{
					iLocal_913 = 1;
					if (iLocal_574 == 0)
					{
						func_237(&uLocal_408, "MIN2AU", "MIN2_JOSEF", "MIN2_JOSEF_4", 5, 0, 0);
						unk_0xA0342EB4AE1476FC(3f, 8f, 1);
					}
					else if (iLocal_574 == 1)
					{
						func_265(&uLocal_408, 4, iLocal_171, "IMMIGRANTMALE", 0, 1);
						func_219(&uLocal_408, "MIN2AU", "MIN2_SURR_15", 6, 1, 0, 0);
					}
					else if (iLocal_574 == 2)
					{
					}
				}
				if (iLocal_856 == 1)
				{
					if (iLocal_857 == 0)
					{
						func_236("MIN2_31", 7000, 0);
						iLocal_857 = 1;
					}
				}
			}
			if (!unk_0x7B4654D62B7E0E9E(iLocal_197))
			{
				iLocal_197 = func_411(iLocal_171, 1, 0, 5);
				if (!unk_0x9A4E2270C2271219(iLocal_171, 0))
				{
					unk_0xC5B4E9487339A2BB(iLocal_197, 0.7f);
				}
				else
				{
					unk_0xC5B4E9487339A2BB(iLocal_197, 1f);
				}
			}
		}
		else if (!unk_0x7B4654D62B7E0E9E(iLocal_184[iLocal_574]))
		{
			if (iLocal_856 == 0)
			{
				if (iLocal_844 == 0)
				{
					if (iLocal_914 == 0)
					{
						func_236("MIN2_39", 7000, 0);
						iLocal_914 = 1;
					}
					iLocal_844 = 1;
				}
			}
		}
	}
	if (unk_0xA0F74982C6AAA9D4() > iLocal_589 + 5000)
	{
		func_410();
		func_409();
		func_349(2, "Dirt bike chase", 1, 0, 0, 1);
		func_348(781, 0);
		iLocal_927 = 8;
	}
}

void func_348(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55759 = iParam0;
	if (!Global_55757)
	{
		Global_55757 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_67845[iVar0 /*9*/] == iParam0)
			{
				Global_67845[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_349(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!unk_0xC1C5B83BB6719C6C("FinaleC2", unk_0x3AA961419D971CB2()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_91315)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91315)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_241(1);
		if (iParam0 <= Global_91315)
		{
		}
		iVar1 = func_407(unk_0x3AA961419D971CB2(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_101154.f_7775.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_405(iVar1);
			cVar3 = { Global_82399[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_101154.f_7775.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x07B7705D7B23A4CA(&cVar3, iVar2, Global_91315, iParam0);
		}
		else
		{
			iVar5 = func_218(unk_0x3AA961419D971CB2(), 1);
			if (iVar5 != -1)
			{
				Global_101154.f_17264[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_173(iVar5)}, 4);
				unk_0x07B7705D7B23A4CA(&uVar6, 0, Global_91315, iParam0);
			}
			else
			{
				iVar10 = func_404(&(Global_91278.f_3));
				if (iVar10 > -1)
				{
					Global_101154.f_29511.f_4[iVar10] = 0;
				}
			}
		}
		Global_85789 = iParam2;
		Global_91315 = iParam0;
		func_350(iParam0, sParam1, iParam4, iParam5);
		if (unk_0xC1C5B83BB6719C6C(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91315)
	{
	}
}

void func_350(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_351(&Global_95496, unk_0x3AA961419D971CB2(), iParam0, uParam1, iParam3, iParam2);
}

void func_351(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_226();
	uParam0->f_1 = func_393();
	unk_0xF0A0648DE7C2A0BE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		func_380(&(uParam0->f_2305), 0);
		func_379(unk_0x27D769C59BC9D030());
		func_373(unk_0x27D769C59BC9D030(), 0);
		unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_101154.f_1826.f_539.f_294[iVar1];
		if (iVar1 == func_372())
		{
			func_368(unk_0x27D769C59BC9D030(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91068[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91068[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91068[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91068[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91068[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91068[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91068[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91068[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91068[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91068[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_101154.f_1826.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_101154.f_1826.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_101154.f_25089.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52923[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_101154.f_1826.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_101154.f_1826.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101154.f_1826[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xD0D748C6C14C0E92(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0xD0D748C6C14C0E92(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0xD0D748C6C14C0E92(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_353(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_352(&(uParam0->f_2401));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_352(var uParam0)
{
	*uParam0 = Global_87460;
	uParam0->f_1 = Global_87461;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_353(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x27D769C59BC9D030();
	}
	if (unk_0xD2CFFE76B625AE55(iParam2))
	{
		uParam1->f_5 = func_166(iParam2);
	}
	if (func_365(iParam2, &iVar0, iParam3, iParam5))
	{
		func_354(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xD2CFFE76B625AE55(iVar0))
	{
		if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
		{
			if (unk_0x753C14DD45ABE554(iVar0, joaat("skylift")) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iVar0, 0))
			{
				func_354(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_354(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x0B4DDB992C7BCF57(iParam2, 0))
	{
		func_356(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_355(iParam2))
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

int func_355(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91278.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_356(var uParam0, int iParam1, int iParam2)
{
	func_362(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_359(iParam1, 145, 0);
	uParam0->f_11 = func_358(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_357(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xA8CFDE65C45F813B(iParam1, 1) };
		uParam0->f_6 = unk_0x4D6B971C8AEE130C(iParam1);
		uParam0->f_3 = { unk_0x73A52F9295BA1599(iParam1) };
		if (unk_0x98CEDC9398D49BB8(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69224 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_357(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[iVar0]))
		{
			if (iParam0 == Global_68319.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_358(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 145;
	}
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_359(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 0;
	}
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88952[iVar0])
				{
					if (iParam2 == 0 || unk_0x946C63BD9EF05437(iParam0) == func_360(iParam1, iParam2))
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

int func_360(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_168(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_361(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_361(int iParam0, var uParam1, int iParam2)
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
			if (Global_101154.f_7775.f_99.f_58[128] && !Global_101154.f_7775.f_99.f_58[131])
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
					if (Global_101154.f_7775.f_99.f_58[119])
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
			else if (Global_101154.f_7775.f_99.f_58[118])
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

void func_362(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0x946C63BD9EF05437(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x9111F14F8ABAE773(iParam0), 16);
		*uParam1 = unk_0xC960169422AD5363(iParam0);
		unk_0x923073D63782E037(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xC780DEE9C0D887BF(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x0C8CAFCFEDEEF36D(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xEF90EF7B0A4543EE(iParam0);
		uParam1->f_67 = unk_0xC3362AC1471926AA(iParam0);
		uParam1->f_69 = unk_0xA2A724EEE80F007F(iParam0);
		uParam1->f_70 = unk_0x977E90DD5881BA08(iParam0);
		unk_0x477102A8963B16B4(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x486F923523D0F4DB(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8A455A983374FA6C(iParam0, 2))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 28);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 3))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 29);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 30);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 1))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x1BCE164A254176FA(iParam0, 0))
		{
			uParam1->f_68 = unk_0xD3A88CAE99C338A3(iParam0);
		}
		if (unk_0xEC6E5897335290DD(uParam1->f_66))
		{
			if (unk_0x7D5667109E828021(iParam0))
			{
				switch (unk_0xDBA4852736CE4FDB(iParam0))
				{
					case 2:
					case 0:
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 23);
						unk_0x26545538B51562AD(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 23);
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x26545538B51562AD(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x480DA4A4EBDCE31C(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 9);
		}
		if (unk_0x6509ED7AD3D989FE(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 10);
		}
		if (unk_0xFD1E4AF84D93E688(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 13);
			unk_0x3E4DACD1434531DD(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE00D5F67AE8F1A68(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 12);
		}
		func_364(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3D866A165E63B4FE(iParam0, iVar0 + 1))
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), func_363(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3E70A6BAFEE797B2(iParam0, 0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 11);
		}
		if (unk_0xE8E046017EE675F2(iParam0, "IgnoredByQuickSave") && unk_0xF47B23D65F733C81(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 27);
		}
	}
}

int func_363(int iParam0)
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

int func_364(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0B4DDB992C7BCF57(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x41EEFFCF5FB2A6E4(*iParam0) == 0)
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
			if (unk_0x56F45DEAAF97E44B(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xC90889BF6C7006D1(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x0334928DD9F6AEB8(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x0334928DD9F6AEB8(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_365(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (!unk_0xE4F7206742848BAF(iParam0))
		{
			if (iParam0 == unk_0x27D769C59BC9D030())
			{
				*uParam1 = unk_0x070841EC2D20AB5A();
			}
			else
			{
				*uParam1 = unk_0xD9FFE8E1642C81E2(iParam0, 1);
			}
			if (unk_0xD2CFFE76B625AE55(*uParam1))
			{
				if (unk_0x0B4DDB992C7BCF57(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(*uParam1, 1), unk_0xA8CFDE65C45F813B(iParam0, 1), 1) < 100f)
					{
						if (unk_0x753C14DD45ABE554(*uParam1, joaat("taxi")))
						{
							if (unk_0x9297C590C99228DC(*uParam1, -1) != iParam0 && unk_0x9297C590C99228DC(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_366(*uParam1, func_226(), 1))
						{
							sVar0 = unk_0x3AA961419D971CB2();
							if (!unk_0xC1C5B83BB6719C6C(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x9A4E2270C2271219(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xE8E046017EE675F2(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xF47B23D65F733C81(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x753C14DD45ABE554(*uParam1, joaat("blimp")))
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

int func_366(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0) || !unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_367(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xF426A5DE932B3BEE(Global_101154.f_5919[iVar9], 0))
		{
			if (unk_0x005659B4CDF2566C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_367(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_368(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		iVar0 = func_166(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_371(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_370(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_168(iVar0))
		{
			uParam1->f_59 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x0E063DDE8855EC52() && unk_0x946C63BD9EF05437(iParam0) == unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			if (func_369(161, -1))
			{
				uParam1->f_59 = func_87(2043, Global_69309, 0);
			}
			else
			{
				uParam1->f_59 = func_87(745, Global_69309, 0);
			}
			uParam1->f_60 = func_87(746, Global_69309, 0);
			uParam1->f_61 = func_87(747, Global_69309, 0);
		}
		if (unk_0x0E063DDE8855EC52() && iParam0 == unk_0x27D769C59BC9D030())
		{
			if (func_369(161, -1))
			{
				uParam1->f_59 = func_87(2043, Global_69309, 0);
			}
			else
			{
				uParam1->f_59 = func_87(745, Global_69309, 0);
			}
		}
	}
}

int func_369(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2490231[iParam0 /*5*/][func_86(iParam1)];
	if (unk_0xA4169622221F92AC(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_370(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_166(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA0ED5DF8C72F1600(iParam0, iParam1);
		*uParam3 = unk_0x1061092D9407E81F(iParam0, iParam1);
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
				if (unk_0xCE9521447147FEB0(iParam0) && unk_0x43BF0C9BA19003AD(iParam0) != -1)
				{
					*uParam2 = unk_0x43BF0C9BA19003AD(iParam0);
					*uParam3 = unk_0xC9033D969FB3E3C6(iParam0);
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

void func_371(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_166(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x8E6EAC2226EC1711(iParam0, iParam1);
		*uParam3 = unk_0x11865ADDF8F270CA(iParam0, iParam1);
		*uParam4 = unk_0x8EDDCCA11A9F2980(iParam0, iParam1);
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

int func_372()
{
	func_171();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_373(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_166(iParam0);
	if (func_168(iVar0) && !unk_0xE4F7206742848BAF(iParam0))
	{
		if (iParam0 == unk_0x27D769C59BC9D030())
		{
			func_374(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x2B8F9384E1F00638(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xEE6AE7A090902579();
					if (Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101154.f_1826.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xC5B79244BD0EFDF7(unk_0x4D29100D094E5511(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0xE2A8B026FA4DDFFF(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xE2A8B026FA4DDFFF(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xE2A8B026FA4DDFFF(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_374(int iParam0, var uParam1)
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
	
	if (!unk_0xE4F7206742848BAF(iParam0))
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
			iVar3 = func_378(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x4411BBC9BC706B88(iParam0, func_378(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xB88FDA5AF9B0C71D(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x26545538B51562AD(&(Var4.f_2), (20 + unk_0xB1E4CC11662FA842(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0xD480BB70577C9F2A(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_376(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x533B5E3EE659E0D8(iParam0, Var4.f_0, iVar2))
						{
							unk_0x26545538B51562AD(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_376(Var4.f_0, iVar1);
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
		iVar8 = unk_0x5F329C28EE128D99();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x91156000A6A01C12(iVar7, &Var9) && !func_375(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x80EC20FBCB429863(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0xB88FDA5AF9B0C71D(iParam0, Var4.f_0);
					if (unk_0x9F1B20B487FAE1CF(iParam0, Var4.f_0, 0))
					{
						unk_0x26545538B51562AD(&(Var4.f_2), (20 + unk_0xB1E4CC11662FA842(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x26545538B51562AD(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xD480BB70577C9F2A(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x10717D9B27CF5851(iVar7))
					{
						if (unk_0xD1F2F7720C352D2F(iVar7, iVar1, &Var48))
						{
							if (unk_0x533B5E3EE659E0D8(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x26545538B51562AD(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x9F1B20B487FAE1CF(iParam0, Var4.f_0, 0))
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

int func_375(int iParam0)
{
	if (unk_0x0E063DDE8855EC52())
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

int func_376(int iParam0, int iParam1)
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
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
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
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
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
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
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
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_377(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x10717D9B27CF5851(iVar1))
					{
						if (unk_0xD1F2F7720C352D2F(iVar1, iParam1, &Var41))
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

int func_377(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x5F329C28EE128D99();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x91156000A6A01C12(iVar0, uParam1))
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

int func_378(int iParam0)
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

void func_379(int iParam0)
{
	int iVar0;
	
	iVar0 = func_166(iParam0);
	if (func_168(iVar0) && !unk_0xE4F7206742848BAF(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = unk_0x0D9232E9B5AC5D23(iParam0);
	}
}

void func_380(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
	uParam0->f_3 = unk_0x4D6B971C8AEE130C(unk_0x27D769C59BC9D030());
	uParam0->f_5 = unk_0xF4660FE190F693DA(unk_0x27D769C59BC9D030());
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		uParam0->f_4 = unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511());
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
	else if (unk_0xD32535FA4397160F(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xF426A5DE932B3BEE(Global_69737, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xF426A5DE932B3BEE(Global_69737, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xF426A5DE932B3BEE(Global_69737, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xF426A5DE932B3BEE(Global_69737, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030()) == unk_0x695481387D3FCB8D(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_383(&iVar0))
		{
			if (func_382(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_226();
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
		else if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_381(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_381(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x76D34DF1CE9FE002(Param0))
	{
		iVar0 = unk_0x695481387D3FCB8D(Param4, sParam3);
		if (!unk_0xBFF8C08B5EEF0974(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0xA22E9C9DBD350349(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_382(int iParam0, var uParam1, var uParam2)
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
	return !func_334(*uParam1, 0f, 0f, 0f, 0);
}

int func_383(var uParam0)
{
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0) && !unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (func_392())
		{
			*uParam0 = func_388(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), 5, -1, 0, 1, -1);
			if (func_387(*uParam0) && !func_384(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_384(int iParam0)
{
	return func_385(iParam0, 0, 1);
}

int func_385(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xF426A5DE932B3BEE(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (unk_0x0E063DDE8855EC52())
	{
		if (func_26() == 0)
		{
			return unk_0xF426A5DE932B3BEE(func_87(func_386(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xF426A5DE932B3BEE(Global_101154.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_386(int iParam0)
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
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

int func_387(int iParam0)
{
	return func_385(iParam0, 5, 1);
}

int func_388(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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
		if (iParam3 == 5 || iParam3 == func_391(iVar0))
		{
			if (!bParam5 || func_390(iVar0))
			{
				fVar1 = unk_0x676D4CD42E0837CA(Param0, func_389(iVar0, 0), 1);
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

Vector3 func_389(int iParam0, bool bParam1)
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

int func_390(int iParam0)
{
	return func_385(iParam0, 0, 0);
}

int func_391(int iParam0)
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

bool func_392()
{
	return Global_91330.f_296 > 0;
}

var func_393()
{
	var uVar0;
	
	func_403(&uVar0, unk_0x2FADF5E93AB8D64B());
	func_402(&uVar0, unk_0x51C7DC141C5D0E6B());
	func_401(&uVar0, unk_0xEFEADD7EBD01C0A6());
	func_396(&uVar0, unk_0x388418AD39C0F4DE());
	func_395(&uVar0, unk_0xE3911478C9FE04B2());
	func_394(&uVar0, unk_0x8FB5B60BC869990E());
	return uVar0;
}

void func_394(var uParam0, int iParam1)
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

void func_395(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_396(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_400(*uParam0);
	iVar1 = func_398(*uParam0);
	if (iParam1 < 1 || iParam1 > func_397(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_397(int iParam0, int iParam1)
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

var func_398(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_399(unk_0xF426A5DE932B3BEE(iParam0, 31), -1, 1)) + 2011;
}

int func_399(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_400(var uParam0)
{
	return uParam0 & 15;
}

void func_401(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_402(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_403(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_404(char* sParam0)
{
	if (unk_0xC1C5B83BB6719C6C("BailBond1", uParam0))
	{
		return 0;
	}
	else if (unk_0xC1C5B83BB6719C6C("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xC1C5B83BB6719C6C("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xC1C5B83BB6719C6C("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

int func_405(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_406(Global_101154.f_7775.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_406(Global_101154.f_7775.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_406(Global_101154.f_7775.f_99.f_205[11]);
			break;
		
		case 90:
			return func_406(Global_101154.f_7775.f_99.f_205[7]);
			break;
		
		case 93:
			return func_406(Global_101154.f_7775.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_406(int iParam0)
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

int func_407(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x70ABFF261710305D(sParam0);
	iVar1 = func_408(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_408(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_82399[iVar0 /*34*/].f_6 == iParam0)
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

void func_409()
{
	if (iLocal_574 == 0)
	{
		if (func_5(uLocal_157[iLocal_574]))
		{
			if (func_511(uLocal_166[iLocal_574]))
			{
				unk_0x33A0CEA494F4C2A3(&uLocal_198);
				unk_0x85FD30B510E7C05E(0, unk_0x27D769C59BC9D030(), -1, 2048, 2);
				unk_0x395AA67734CB52F2(0, uLocal_157[iLocal_574], 161.1383f, 4417.466f, 74.7775f, 10f, 0, joaat("blazer"), 786468, 30f, 2f);
				unk_0x395AA67734CB52F2(0, uLocal_157[iLocal_574], 17.4915f, 4453.201f, 58.9788f, 20f, 0, joaat("blazer"), 786468, 20f, 2f);
				unk_0x395AA67734CB52F2(0, uLocal_157[iLocal_574], -91.1074f, 4301.092f, 45.41f, 25f, 0, joaat("blazer"), 786468, 20f, 2f);
				unk_0x395AA67734CB52F2(0, uLocal_157[iLocal_574], -223.0806f, 4012.289f, 36.0401f, 25f, 0, joaat("blazer"), 786468, 20f, 2f);
				unk_0x395AA67734CB52F2(0, uLocal_157[iLocal_574], -194.4012f, 3733.113f, 42.2381f, 25f, 0, joaat("blazer"), 786468, 20f, 2f);
				unk_0x395AA67734CB52F2(0, uLocal_157[iLocal_574], 89.5701f, 3582.797f, 38.791f, 25f, 0, joaat("blazer"), 786468, 20f, 2f);
				unk_0x395AA67734CB52F2(0, uLocal_157[iLocal_574], 326.0252f, 3438.876f, 35.3116f, 25f, 0, joaat("blazer"), 786468, 25f, 2f);
				unk_0xF55CF905F405E357(0, uLocal_157[iLocal_574], 22f, 786468);
				unk_0x33F83FC0F5F458E3(uLocal_198);
				unk_0x8B8674266D533E9F(uLocal_166[iLocal_574], uLocal_198);
			}
		}
	}
	if (iLocal_574 == 1)
	{
		if (func_511(uLocal_166[iLocal_574]))
		{
			if (iLocal_846 == 0)
			{
				if (func_5(uLocal_157[iLocal_574]))
				{
					if (!unk_0x7E16166EB69398DB(uLocal_157[iLocal_574]))
					{
						unk_0x5809312A3DC0ED0D(uLocal_157[iLocal_574], 101, "Min2DB1", 1);
						unk_0x75C3321388DDC4F1(uLocal_157[iLocal_574], "MINUTE_02_SCENE_SCRAMBLER_BIKE", 0);
					}
				}
			}
		}
		if (func_511(iLocal_171))
		{
			if (iLocal_845 == 0)
			{
				if (func_5(iLocal_162))
				{
					if (!unk_0x7E16166EB69398DB(iLocal_162))
					{
						unk_0x5809312A3DC0ED0D(iLocal_162, 102, "Min2DB2", 1);
						unk_0x75C3321388DDC4F1(iLocal_162, "MINUTE_02_SCENE_SCRAMBLER_BIKE", 0);
					}
				}
			}
		}
	}
	iLocal_576 = unk_0xA0F74982C6AAA9D4();
	iLocal_836 = 1;
}

void func_410()
{
	if (iLocal_840 == 0)
	{
		unk_0x33A0CEA494F4C2A3(&uLocal_199);
		if (func_5(uLocal_157[iLocal_574]))
		{
			unk_0x347457A360E454FB(0, uLocal_157[iLocal_574], "Min2_Bike02", 786468, 28, 0, -1, -1f, 0, 1073741824);
			unk_0x395AA67734CB52F2(0, uLocal_157[iLocal_574], Local_646[44 /*3*/], 24f, 0, joaat("sanchez"), 786468, 20f, 5f);
			unk_0x395AA67734CB52F2(0, uLocal_157[iLocal_574], Local_646[45 /*3*/], 24f, 0, joaat("sanchez"), 786468, 20f, 5f);
			unk_0x395AA67734CB52F2(0, uLocal_157[iLocal_574], Local_646[46 /*3*/], 24f, 0, joaat("sanchez"), 786468, 20f, 5f);
			unk_0xF55CF905F405E357(0, uLocal_157[iLocal_574], 24f, 786468);
		}
		unk_0x33F83FC0F5F458E3(uLocal_199);
		unk_0x33A0CEA494F4C2A3(&uLocal_203);
		unk_0x85FD30B510E7C05E(0, unk_0x27D769C59BC9D030(), -1, 0, 2);
		if (func_5(iLocal_162))
		{
			if (func_5(uLocal_157[iLocal_574]))
			{
				unk_0x32055D255A5648A0(0, iLocal_162, uLocal_157[iLocal_574], -1, 40f, 262144, fLocal_573, 20, 1101004800);
			}
		}
		unk_0x33F83FC0F5F458E3(uLocal_203);
		iLocal_840 = 1;
	}
}

int func_411(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_6(iParam0))
		{
			iVar0 = unk_0xABF4388EB11AD060(iParam0);
			unk_0xD1B211F2EB392B46(iVar0, iParam2);
			unk_0x1FDCAFA848ABB8FA(iVar0, iParam3);
			unk_0xC5B4E9487339A2BB(iVar0, 0.7f);
			if (!bParam1)
			{
				unk_0xC5B4E9487339A2BB(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

void func_412()
{
	if (func_270(unk_0x27D769C59BC9D030(), 267.2497f, 2852.167f, 42.6129f, 1) < 200f)
	{
		unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()), 0);
	}
	if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) == 0)
	{
		if (func_420(unk_0x27D769C59BC9D030(), 267.2497f, 2852.167f, 42.6129f, 250f))
		{
			if (iLocal_868 == 1)
			{
				func_419();
				func_418();
			}
			iLocal_868 = 0;
			iLocal_869 = 0;
			func_416();
			func_413();
			func_314();
		}
		if (unk_0x7B4654D62B7E0E9E(uLocal_189[iLocal_574]))
		{
			if (unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), 267.2497f, 2852.167f, 42.6129f, 6f, 6f, 2f, 1, 1, 0))
			{
			}
			if (iLocal_855 == 0)
			{
				func_10();
				func_349(1, "Driving to the cement factory", 0, 0, 0, 1);
				iLocal_855 = 1;
			}
			if (func_420(unk_0x27D769C59BC9D030(), 267.2497f, 2852.167f, 42.6129f, 240f))
			{
				func_410();
			}
		}
		else if (iLocal_855 == 0)
		{
		}
		func_266();
		if (iLocal_824 == 1)
		{
			func_410();
			iLocal_589 = unk_0xA0F74982C6AAA9D4();
			unk_0x68BD4F826EFDDC53("MM2_START_FORA");
			iLocal_927 = 7;
		}
		if (func_511(Local_96.f_28[1]))
		{
			unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 1, 1);
			unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 2, 1);
			if (!unk_0x9A4E2270C2271219(Local_96.f_28[1], 0) && !unk_0xC2AE0A979757C34A(uLocal_401))
			{
				if (func_310())
				{
					if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 0)
					{
						if (func_276(Local_96.f_28[1], Local_96.f_35[0], 10f, 1))
						{
							unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 1f, 1, 0);
						}
						else
						{
							unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 2f, 1, 0);
						}
					}
				}
				else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 713668775) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 713668775) != 0)
				{
					unk_0xE4A57337AE998385(Local_96.f_28[1], unk_0xD7C4E2CB0B216852(Local_96.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (unk_0x4D6B971C8AEE130C(Local_96.f_35[0]) - 90f));
				}
			}
		}
		if (func_511(Local_96.f_28[0]))
		{
			unk_0x7ED3655E5924C6F4(Local_96.f_28[0], 1, 1);
			unk_0x7ED3655E5924C6F4(Local_96.f_28[0], 2, 1);
			if (!unk_0x9A4E2270C2271219(Local_96.f_28[0], 1))
			{
				if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 0)
				{
					unk_0x835BBE043A81D6DD(Local_96.f_28[0], Local_96.f_35[0], 60000, 0, 1073741824, 1, 0);
				}
			}
		}
		if (!func_232())
		{
			if (!iLocal_882 && iLocal_873)
			{
				if (!func_420(unk_0x27D769C59BC9D030(), 267.2497f, 2852.167f, 42.6129f, 200f))
				{
					if ((((func_5(Local_96.f_35[0]) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0)) && !func_235("MIN2_48", 0, 0))
					{
						if (func_219(&uLocal_408, "MIN2AU", "MIN2_JJ4", 5, 0, 0, 0))
						{
							iLocal_882 = 1;
						}
					}
				}
			}
			if (!unk_0xC2AE0A979757C34A(uLocal_401))
			{
				if (!iLocal_893)
				{
					if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
					{
						if (unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) > 10f)
						{
							if (!unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && func_276(Local_96.f_28[0], Local_96.f_35[0], 40f, 1))
							{
								if ((((!func_235("MIN2_29", 0, 0) && !func_235("MIN2_32", 0, 0)) && !func_235("MIN2_33", 0, 0)) && !func_235("MIN2_49", 0, 0)) && !func_235("MIN2_06", 0, 0))
								{
									func_219(&uLocal_408, "MIN2AU", "MIN2_NOJOE", 5, 0, 0, 0);
								}
								else
								{
									func_219(&uLocal_408, "MIN2AU", "MIN2_NOJOE", 5, 1, 0, 0);
								}
								iLocal_893 = 1;
							}
							if (!unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0) && func_276(Local_96.f_28[1], Local_96.f_35[0], 40f, 1))
							{
								if ((((!func_235("MIN2_29", 0, 0) && !func_235("MIN2_32", 0, 0)) && !func_235("MIN2_33", 0, 0)) && !func_235("MIN2_49", 0, 0)) && !func_235("MIN2_06", 0, 0))
								{
									func_219(&uLocal_408, "MIN2AU", "MIN2_NOJOSEF", 5, 0, 0, 0);
								}
								else
								{
									func_219(&uLocal_408, "MIN2AU", "MIN2_NOJOSEF", 5, 1, 0, 0);
								}
								iLocal_893 = 1;
							}
						}
					}
				}
				else if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
				{
					if (iLocal_894 < 3 && unk_0xA0F74982C6AAA9D4() > iLocal_895 + 6000)
					{
						if ((((!func_235("MIN2_29", 0, 0) && !func_235("MIN2_32", 0, 0)) && !func_235("MIN2_33", 0, 0)) && !func_235("MIN2_49", 0, 0)) && !func_235("MIN2_06", 0, 0))
						{
							if ((!unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && !func_276(Local_96.f_28[0], Local_96.f_35[0], 50f, 1))
							{
								func_219(&uLocal_408, "MIN2AU", "MIN2_GOBACK2", 5, 0, 0, 0);
								iLocal_894++;
								iLocal_895 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(0, 2000));
							}
							if ((!unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0)) && !func_276(Local_96.f_28[1], Local_96.f_35[0], 50f, 1))
							{
								func_219(&uLocal_408, "MIN2AU", "MIN2_GOBACK1", 5, 0, 0, 0);
								iLocal_894++;
								iLocal_895 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(0, 2000));
							}
						}
					}
				}
			}
		}
	}
	else
	{
		iLocal_868 = 1;
		func_9(&(uLocal_166[1]));
		func_9(&iLocal_171);
		func_9(&(uLocal_172[0]));
		func_8(&(uLocal_157[1]));
		func_8(&iLocal_162);
		func_8(&iLocal_163);
		if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
		{
			if (!unk_0x7B4654D62B7E0E9E(iLocal_194))
			{
				iLocal_194 = func_234(Local_96.f_35[0], 1, 5);
			}
		}
		else
		{
			if (iLocal_869 == 0)
			{
				func_236("MIN2_COPS", 7500, 0);
				iLocal_869 = 1;
			}
			func_505(&iLocal_194);
		}
	}
}

void func_413()
{
	if (func_5(uLocal_157[iLocal_574]))
	{
		if (!unk_0xD2CFFE76B625AE55(uLocal_166[iLocal_574]))
		{
			if (iLocal_574 == 0)
			{
				func_414(&(uLocal_166[iLocal_574]), 59, uLocal_157[iLocal_574], -1, 1);
				unk_0x3D33012BA0FA30D4(uLocal_166[iLocal_574], 1f);
				unk_0x787A8A952EBA4D6F(uLocal_166[iLocal_574], 1f);
				unk_0x85FD30B510E7C05E(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), -1, 0, 2);
			}
			if (iLocal_574 == 1)
			{
				uLocal_166[iLocal_574] = unk_0x9961770283FB23FE(uLocal_157[iLocal_574], 26, joaat("s_m_m_migrant_01"), -1, 1, 1);
				unk_0x5D927D8655264D6C(uLocal_166[iLocal_574], 0, 0, 1, 0);
				unk_0x5D927D8655264D6C(uLocal_166[iLocal_574], 3, 1, 0, 0);
				unk_0x5D927D8655264D6C(uLocal_166[iLocal_574], 4, 0, 0, 0);
				unk_0x5D927D8655264D6C(uLocal_166[iLocal_574], 6, 1, 0, 0);
				unk_0x5D927D8655264D6C(uLocal_166[iLocal_574], 8, 1, 0, 0);
				if (func_5(iLocal_162))
				{
					iLocal_171 = unk_0x9961770283FB23FE(iLocal_162, 26, joaat("s_m_m_migrant_01"), -1, 1, 1);
					unk_0x5D927D8655264D6C(iLocal_171, 0, 1, 0, 0);
					unk_0x5D927D8655264D6C(iLocal_171, 3, 1, 1, 0);
					unk_0x5D927D8655264D6C(iLocal_171, 4, 0, 0, 0);
					unk_0x5D927D8655264D6C(iLocal_171, 6, 1, 0, 0);
					unk_0x5D927D8655264D6C(iLocal_171, 8, 1, 0, 0);
					unk_0x98F6ED6E1345DBB0(iLocal_171, 1, 0);
					unk_0x56F64CC9254C2E4F(iLocal_171, 281, 1);
					unk_0x56F64CC9254C2E4F(iLocal_171, 32, 0);
					unk_0x56F64CC9254C2E4F(iLocal_171, 29, 0);
					unk_0x56F64CC9254C2E4F(iLocal_171, 116, 0);
					unk_0x56F64CC9254C2E4F(iLocal_171, 170, 1);
					unk_0xF802E0DD127B3DE9(iLocal_171, 2f);
					if (unk_0x40CB4787F2506675(iLocal_171))
					{
						unk_0x1AD2FE409C8C06B3(iLocal_171, 0);
					}
					unk_0xA82663A60582A7D7(iLocal_171, 0);
					unk_0xB0E2B335371D29B1(iLocal_171, joaat("empty"));
					unk_0xA8ED9F72DC442242(iLocal_171, 1);
					unk_0x51F79AC13D2AD286(iLocal_171, 300);
					unk_0x94DC76C688E7D222(iLocal_171, 1);
					unk_0x56F64CC9254C2E4F(iLocal_171, 118, 0);
					unk_0x56F64CC9254C2E4F(iLocal_171, 208, 1);
					if (unk_0x40CB4787F2506675(uLocal_166[iLocal_574]))
					{
						unk_0x1AD2FE409C8C06B3(uLocal_166[iLocal_574], 0);
					}
				}
				unk_0x0049DE0B34213B12(joaat("s_m_m_migrant_01"));
			}
			unk_0x98F6ED6E1345DBB0(uLocal_166[iLocal_574], 1, 0);
			unk_0x7ED3655E5924C6F4(uLocal_166[iLocal_574], 20, 1);
			unk_0x56F64CC9254C2E4F(uLocal_166[iLocal_574], 281, 1);
			unk_0x56F64CC9254C2E4F(uLocal_166[iLocal_574], 32, 0);
			unk_0x56F64CC9254C2E4F(uLocal_166[iLocal_574], 29, 0);
			unk_0x56F64CC9254C2E4F(uLocal_166[iLocal_574], 116, 0);
			unk_0x56F64CC9254C2E4F(uLocal_166[iLocal_574], 170, 1);
			unk_0xF802E0DD127B3DE9(uLocal_166[iLocal_574], 2f);
			unk_0xB0E2B335371D29B1(uLocal_166[iLocal_574], joaat("empty"));
			unk_0xA8ED9F72DC442242(uLocal_166[iLocal_574], 1);
			unk_0x51F79AC13D2AD286(uLocal_166[iLocal_574], 300);
			unk_0x94DC76C688E7D222(uLocal_166[iLocal_574], 1);
			unk_0x56F64CC9254C2E4F(uLocal_166[iLocal_574], 118, 0);
			unk_0x56F64CC9254C2E4F(uLocal_166[iLocal_574], 208, 1);
		}
	}
	if (func_511(uLocal_166[iLocal_574]))
	{
		if (iLocal_574 == 0)
		{
			if (func_269(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030()) < 500f)
			{
				iLocal_824 = 1;
			}
		}
		else
		{
			if ((unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 313.4914f, 2974.187f, 17.27065f, 354.2191f, 2772.717f, 84.74885f, 122.25f, 0, 1, 0) || func_296(uLocal_166[iLocal_574], 1, 0, 0, 0)) || func_296(iLocal_171, 1, 0, 0, 0))
			{
				iLocal_824 = 1;
				iLocal_590 = 10;
			}
			if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 268.0726f, 2861.26f, 37.14352f, 274.735f, 2847.247f, 66.00835f, 15.75f, 0, 1, 0) || unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 281.032f, 2884.984f, 37.30743f, 304.8129f, 2837.81f, 73.93606f, 57.5f, 0, 1, 0))
			{
				iLocal_824 = 1;
			}
		}
	}
}

int func_414(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_168(iParam1))
	{
		iVar0 = func_562(iParam1);
		unk_0x97C59C4E8349D15F(iVar0);
		if (unk_0x875098323FCA8FE6(iVar0))
		{
			if (unk_0xD2CFFE76B625AE55(*uParam0))
			{
				unk_0xF6ADC11BDB5ECA41(uParam0);
			}
			if (unk_0xD2CFFE76B625AE55(uParam2) && unk_0x0B4DDB992C7BCF57(iParam2, 0))
			{
				*iParam0 = unk_0x9961770283FB23FE(iParam2, 26, iVar0, iParam3, 0, 0);
				unk_0x1F0017B996C78B72(*iParam0);
				func_415(*iParam0, iParam1);
				if (bParam4)
				{
					unk_0x0049DE0B34213B12(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_415(var uParam0, int iParam1)
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
	Global_87445[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_416()
{
	if (iLocal_574 == 0)
	{
		if (!unk_0xD2CFFE76B625AE55(uLocal_157[iLocal_574]))
		{
			uLocal_157[iLocal_574] = unk_0x4E76306EE6AE7596(joaat("blazer"), 246.4836f, 4493.23f, 66.0521f, 90.3329f, 1, 1);
			unk_0xFC5D934CEF290A3E(uLocal_157[iLocal_574], 2);
			unk_0x2CBC4FD55924CEE9(uLocal_157[iLocal_574], 1);
			unk_0x9B3E806EC535DBC3(uLocal_157[iLocal_574], 14f);
			unk_0x0049DE0B34213B12(joaat("blazer"));
		}
	}
	if (iLocal_574 == 1)
	{
		if (func_5(uLocal_157[0]))
		{
			func_11(&(uLocal_157[0]));
		}
		if (!unk_0xD2CFFE76B625AE55(uLocal_157[iLocal_574]))
		{
			if (func_536() && func_417() == 2)
			{
				uLocal_157[iLocal_574] = unk_0x4E76306EE6AE7596(joaat("sanchez"), 303.0419f, 2892.954f, 42.5927f, 209.59f, 1, 1);
			}
			else
			{
				uLocal_157[iLocal_574] = unk_0x4E76306EE6AE7596(joaat("sanchez"), 303.0419f, 2892.954f, 42.5927f, 209.59f, 1, 1);
			}
			unk_0xFC5D934CEF290A3E(uLocal_157[iLocal_574], 2);
			unk_0x2CBC4FD55924CEE9(uLocal_157[iLocal_574], 1);
			unk_0x8BE1AEC303A057F7(uLocal_157[iLocal_574], 1, 1, 0);
			unk_0x9B3E806EC535DBC3(uLocal_157[iLocal_574], 14f);
		}
		if (!unk_0xD2CFFE76B625AE55(iLocal_162))
		{
			if (func_536() && func_417() == 2)
			{
				iLocal_162 = unk_0x4E76306EE6AE7596(joaat("sanchez"), 297.1f, 2895.498f, 42.5893f, 214.25f, 1, 1);
			}
			else
			{
				iLocal_162 = unk_0x4E76306EE6AE7596(joaat("sanchez"), 297.1f, 2895.498f, 42.5893f, 214.25f, 1, 1);
			}
			unk_0xFC5D934CEF290A3E(uLocal_157[iLocal_574], 1);
			unk_0x2CBC4FD55924CEE9(iLocal_162, 1);
			unk_0x8BE1AEC303A057F7(iLocal_162, 1, 1, 0);
			unk_0x9B3E806EC535DBC3(iLocal_162, 14f);
			unk_0x0049DE0B34213B12(joaat("sanchez"));
		}
		if (!unk_0xD2CFFE76B625AE55(iLocal_163))
		{
			iLocal_163 = unk_0x4E76306EE6AE7596(joaat("speedo"), 290.8079f, 2859.289f, 42.6421f, 313.9074f, 1, 1);
			unk_0x166C39D9F6B273E0(iLocal_163, 2, 0, 0);
			unk_0x166C39D9F6B273E0(iLocal_163, 3, 0, 0);
			unk_0xFC5D934CEF290A3E(iLocal_163, 1);
			unk_0x9B3E806EC535DBC3(iLocal_163, 15f);
			unk_0x0049DE0B34213B12(joaat("speedo"));
		}
		if (!unk_0xD2CFFE76B625AE55(uLocal_172[0]))
		{
			uLocal_172[0] = unk_0x91D233CD0204A37F(26, joaat("s_m_m_gaffer_01"), 289.681f, 2860.004f, 42.6421f, 66.4056f, 1, 1);
			unk_0x5D927D8655264D6C(uLocal_172[0], 0, 0, 1, 0);
			unk_0x5D927D8655264D6C(uLocal_172[0], 2, 0, 0, 0);
			unk_0x5D927D8655264D6C(uLocal_172[0], 8, 0, 0, 0);
			unk_0x5D927D8655264D6C(uLocal_172[0], 9, 0, 0, 0);
			unk_0x5D927D8655264D6C(uLocal_172[0], 0, 0, 1, 0);
			unk_0x5D927D8655264D6C(uLocal_172[0], 3, 0, 1, 0);
			unk_0x5D927D8655264D6C(uLocal_172[0], 4, 1, 0, 0);
			unk_0x878D12AEFBF5BAF0(uLocal_172[0], "rcmminute2lean", "idle_c", 8f, -2f, -1, 1, 0f, 0, 0, 0);
			unk_0x7ED3655E5924C6F4(uLocal_172[0], 17, 1);
			unk_0x0049DE0B34213B12(joaat("s_m_m_gaffer_01"));
		}
	}
}

int func_417()
{
	if (!Global_91278 == 10 && !Global_91278 == 9)
	{
		return 0;
	}
	return Global_91278.f_2;
}

void func_418()
{
	while (((((((!unk_0x875098323FCA8FE6(joaat("speedo")) || !unk_0x875098323FCA8FE6(joaat("s_m_m_gaffer_01"))) || !unk_0x875098323FCA8FE6(joaat("sanchez"))) || !unk_0x875098323FCA8FE6(joaat("s_m_m_migrant_01"))) || !unk_0xEBB7C2AE703AC573(269, "Min2Rolling")) || !unk_0xEBB7C2AE703AC573(101, "Min2DB1")) || !unk_0xEBB7C2AE703AC573(102, "Min2DB2")) || !unk_0xCE92500E70EEA516("Min2_Bike02"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_419()
{
	unk_0x73FC038FEC1E71CF("Min2_Bike02");
	unk_0xA252A3A0F6CD48EC(269, "Min2Rolling");
	unk_0xA252A3A0F6CD48EC(101, "Min2DB1");
	unk_0xA252A3A0F6CD48EC(102, "Min2DB2");
	unk_0x97C59C4E8349D15F(joaat("speedo"));
	unk_0x97C59C4E8349D15F(joaat("s_m_m_gaffer_01"));
	unk_0x97C59C4E8349D15F(joaat("sanchez"));
	unk_0x97C59C4E8349D15F(joaat("s_m_m_migrant_01"));
}

bool func_420(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_421()
{
	func_342();
	func_309();
	func_422();
	func_266();
	if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 0)
	{
		func_344();
	}
	if (iLocal_822 == 1)
	{
		iLocal_868 = 1;
		unk_0xA0342EB4AE1476FC(5f, 5f, 1);
		iLocal_927 = 6;
	}
}

void func_422()
{
	if (iLocal_574 == 0)
	{
		if (func_511(uLocal_166[iLocal_574]))
		{
			if (func_269(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574]) > 240f)
			{
				if (iLocal_903 == 0)
				{
					if (unk_0xA0F74982C6AAA9D4() > iLocal_604 + 12000)
					{
						iLocal_903 = 1;
					}
				}
				else if (fLocal_812 > 300f)
				{
					sLocal_923 = "MIN2_43";
					iLocal_927 = 16;
				}
			}
		}
	}
}

void func_423()
{
	unk_0x66EEFE13E1BFC898(2);
	if (func_511(uLocal_166[0]))
	{
		if ((!unk_0x9A4E2270C2271219(uLocal_166[0], 0) && !unk_0xBD036012AF60D938(uLocal_166[0])) && unk_0x4C3235E6E203703D(uLocal_166[0]) > 150)
		{
			unk_0x51F79AC13D2AD286(uLocal_166[0], 150);
		}
		if ((iLocal_889 && func_232()) && !unk_0xBD036012AF60D938(uLocal_166[iLocal_574]))
		{
			unk_0xF01E9C7FDA2976B1("DisableAbortConversationForRagdoll", 0);
			iLocal_889 = 0;
		}
		func_426();
		if (func_511(Local_96.f_28[0]))
		{
			if (func_511(Local_96.f_28[1]))
			{
				if (iLocal_825 == 1)
				{
					if (iLocal_826 == 0)
					{
						if (func_6(uLocal_157[0]))
						{
							if (unk_0x84AEB07678DD6163(uLocal_157[0]))
							{
								unk_0x8BE1AEC303A057F7(uLocal_157[0], 0, 1, 0);
							}
						}
						if ((unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -1817882002) == 1 || unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -258271821) == 1) || unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], -235832601) == 1)
						{
							unk_0xF156AA2A744B309E(uLocal_166[iLocal_574]);
						}
						if (func_5(Local_96.f_35[0]))
						{
							if ((!func_276(uLocal_166[iLocal_574], Local_96.f_28[0], 10f, 1) && !func_276(uLocal_166[iLocal_574], Local_96.f_28[1], 10f, 1)) && !func_276(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 10f, 1))
							{
								if (!func_232())
								{
									if (!func_276(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 100f, 1))
									{
										if (iLocal_918 == 0)
										{
											func_236("MIN2_48", 7500, 0);
											iLocal_918 = 1;
										}
									}
								}
								if (!unk_0xA8ED23ED7AA60A97(uLocal_166[iLocal_574]))
								{
									iLocal_610 = 0;
									if (!unk_0xBD036012AF60D938(uLocal_166[iLocal_574]))
									{
										iLocal_864 = 0;
										if (unk_0xF0422198A211181C(uLocal_166[iLocal_574]))
										{
											iLocal_865 = 1;
											unk_0x38F6653421072183(uLocal_166[iLocal_574], 1000, 2000, 1, 1, 1, 0);
										}
									}
									else if (iLocal_865 == 1)
									{
										if (iLocal_864 == 0 && unk_0xA7EEDB617B2F8DF1(uLocal_166[iLocal_574]))
										{
											unk_0x46E196EF4358E599(1, 787);
											unk_0x143BE02A1DE009D0(uLocal_166[iLocal_574]);
											iLocal_865 = 0;
											iLocal_864 = 1;
											if (func_276(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 40f, 1))
											{
												if (!func_232())
												{
													func_265(&uLocal_408, 3, uLocal_166[0], "MANUEL", 0, 1);
													func_219(&uLocal_408, "MIN2AU", "MIN2_INJ1", 7, 1, 0, 0);
												}
											}
										}
									}
								}
								else
								{
									iLocal_610++;
									if (iLocal_610 > 20)
									{
										unk_0x51F79AC13D2AD286(uLocal_166[iLocal_574], 0);
									}
								}
							}
							if ((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
							{
								if (!unk_0xA8ED23ED7AA60A97(uLocal_166[iLocal_574]))
								{
									iLocal_610 = 0;
									if (!unk_0xBD036012AF60D938(uLocal_166[iLocal_574]))
									{
										iLocal_864 = 0;
										if (unk_0xF0422198A211181C(uLocal_166[iLocal_574]))
										{
											iLocal_865 = 1;
											unk_0x38F6653421072183(uLocal_166[iLocal_574], 1000, 2000, 1, 1, 1, 0);
										}
									}
									else if (iLocal_865 == 1)
									{
										if (iLocal_864 == 0 && unk_0xA7EEDB617B2F8DF1(uLocal_166[iLocal_574]))
										{
											unk_0x46E196EF4358E599(1, 787);
											unk_0x143BE02A1DE009D0(uLocal_166[iLocal_574]);
											iLocal_865 = 0;
											iLocal_864 = 1;
											if (func_276(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 40f, 1))
											{
												if (!func_232())
												{
													func_265(&uLocal_408, 3, uLocal_166[0], "MANUEL", 0, 1);
													func_219(&uLocal_408, "MIN2AU", "MIN2_INJ1", 7, 1, 0, 0);
												}
											}
										}
									}
								}
								else
								{
									iLocal_610++;
									if (iLocal_610 > 20)
									{
										unk_0x51F79AC13D2AD286(uLocal_166[iLocal_574], 0);
									}
								}
							}
						}
					}
				}
			}
		}
		if (func_5(uLocal_157[iLocal_574]))
		{
			if (unk_0x1C48F76B3D032074(uLocal_166[iLocal_574], uLocal_157[iLocal_574], 0))
			{
				if (unk_0x7B4654D62B7E0E9E(iLocal_184[iLocal_574]))
				{
					func_279(iLocal_184[iLocal_574], uLocal_166[iLocal_574], 300f, 0.8f, 0);
				}
			}
			if (iLocal_825 == 0)
			{
				if (unk_0xA0F74982C6AAA9D4() > iLocal_604 + 9000)
				{
					if (!func_232())
					{
						if (func_5(Local_96.f_35[0]))
						{
							if (func_511(Local_96.f_28[0]))
							{
								if (unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
								{
									if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
									{
										if (!func_276(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 180f, 1))
										{
											if (iLocal_607 < 3)
											{
												if (unk_0xA0F74982C6AAA9D4() > iLocal_606 + 6000)
												{
													if (!func_232())
													{
														if (func_219(&uLocal_408, "MIN2AU", "MIN2_CATCH1", 7, 0, 0, 0))
														{
															iLocal_607++;
															iLocal_606 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(0, 2000));
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
					if (unk_0x810AFFABCBF31E2D(uLocal_166[iLocal_574], 242628503) != 1)
					{
						unk_0x8B8674266D533E9F(uLocal_166[iLocal_574], uLocal_198);
					}
				}
			}
			else if (!func_235("MIN2_48", 0, 0))
			{
				if (!iLocal_883)
				{
					if (!func_232())
					{
						if ((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
						{
							if (!func_276(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 20f, 1))
							{
								if (func_219(&uLocal_408, "MIN2AU", "MIN2_GOBACK", 7, 0, 0, 0))
								{
									unk_0xA0342EB4AE1476FC(3f, 7f, 1);
									iLocal_883 = 1;
								}
							}
						}
					}
				}
				else if (!func_232())
				{
					if (iLocal_616 < 4)
					{
						if (unk_0xA0F74982C6AAA9D4() > iLocal_617 + 6000)
						{
							if ((unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
							{
								if (!func_276(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 40f, 1))
								{
									if (iLocal_616 < 4)
									{
										if (func_219(&uLocal_408, "MIN2AU", "MIN2_REMIND", 7, 0, 0, 0))
										{
											iLocal_616++;
											iLocal_617 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(0, 2000));
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
	func_344();
	func_342();
	func_317();
	func_424();
	func_266();
	func_422();
	if (unk_0xA0F74982C6AAA9D4() > iLocal_604 + 20000)
	{
		if (func_511(uLocal_166[0]))
		{
			if (unk_0xBF99E4112970270F(uLocal_166[0]) || unk_0x9A4E2270C2271219(uLocal_166[0], 0))
			{
				unk_0x0062D9D41655E62A(0.5f);
			}
		}
	}
	else
	{
		unk_0x0062D9D41655E62A(0f);
	}
	if (iLocal_826 == 1)
	{
		unk_0xF01E9C7FDA2976B1("DisableAbortConversationForRagdoll", 0);
		iLocal_889 = 0;
		iLocal_607 = 0;
		iLocal_927 = 5;
	}
}

void func_424()
{
	struct<6> Var0;
	
	if (func_511(uLocal_166[iLocal_574]))
	{
		fLocal_812 = func_231(Local_96.f_28[0], uLocal_166[iLocal_574], 1);
		if (iLocal_927 == 8 || iLocal_927 == 10)
		{
			fLocal_813 = func_231(Local_96.f_28[1], iLocal_171, 1);
		}
		else
		{
			fLocal_813 = func_231(Local_96.f_28[1], uLocal_166[iLocal_574], 1);
		}
		if (iLocal_830 == 0)
		{
			if (iLocal_825 == 0)
			{
				if (unk_0xA0F74982C6AAA9D4() > iLocal_576 + 20000)
				{
					if (fLocal_812 < 50f)
					{
						if (iLocal_574 == 0)
						{
							Var0 = { func_425() };
							if (unk_0xC1C5B83BB6719C6C(&Var0, "MIN2_JJ1") || unk_0xC1C5B83BB6719C6C(&Var0, "MIN2_JJ4"))
							{
								func_272();
							}
							if (!func_232())
							{
								if (func_219(&uLocal_408, "MIN2AU", "MIN2_JOSEF_2", 6, 0, 0, 0))
								{
									iLocal_830 = 1;
								}
							}
						}
						if (iLocal_574 == 1)
						{
							if (!func_232())
							{
								iLocal_830 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_825 == 0)
		{
			if (fLocal_812 > 200f)
			{
				if (iLocal_829 == 0)
				{
					if (func_5(Local_96.f_35[0]))
					{
						if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
						{
							if (iLocal_574 == 0)
							{
								if (unk_0xA0F74982C6AAA9D4() > iLocal_604 + 12000)
								{
									if (iLocal_903 == 0)
									{
										iLocal_903 = 1;
									}
								}
							}
							else if (iLocal_825 == 0 && iLocal_837 == 0)
							{
								if (iLocal_915 == 0)
								{
									iLocal_915 = 1;
								}
							}
							else if (unk_0xA0F74982C6AAA9D4() > iLocal_604 + 12000)
							{
								if (iLocal_903 == 0)
								{
									iLocal_903 = 1;
								}
							}
						}
					}
					iLocal_829 = 1;
				}
				else if (fLocal_812 > 300f)
				{
					if (iLocal_574 == 0)
					{
						sLocal_923 = "MIN2_43";
					}
					else if (iLocal_825 == 0 && iLocal_837 == 0)
					{
						sLocal_923 = "MIN2_35";
					}
					else
					{
						sLocal_923 = "MIN2_23";
					}
					iLocal_927 = 16;
				}
			}
			else
			{
				iLocal_829 = 0;
			}
		}
		if (iLocal_825 == 0)
		{
			if (fLocal_812 < 9f && unk_0x9A4E2270C2271219(uLocal_166[iLocal_574], 0))
			{
				if (iLocal_827 == 0)
				{
					unk_0x79BC35B5729FAC2E(Local_96.f_28[0], uLocal_166[iLocal_574], 0, 0f, 0f, 0f, 10f, 100, 0, -753768974);
					if (unk_0x40CB4787F2506675(uLocal_166[iLocal_574]))
					{
						unk_0x1AD2FE409C8C06B3(uLocal_166[iLocal_574], 2);
					}
					iLocal_827 = 1;
				}
			}
			else if ((iLocal_827 == 1 || unk_0x810AFFABCBF31E2D(Local_96.f_28[0], 780511057) == 1) || unk_0x55AE67E25C3C8024(Local_96.f_28[0], uLocal_166[iLocal_574]))
			{
				unk_0xF156AA2A744B309E(Local_96.f_28[0]);
				iLocal_827 = 0;
			}
		}
		else if (fLocal_812 >= 40f)
		{
			unk_0xF156AA2A744B309E(Local_96.f_28[0]);
		}
		if (iLocal_927 == 8 || iLocal_927 == 10)
		{
		}
		else if (iLocal_825 == 0)
		{
			if (fLocal_813 < 9f && unk_0x9A4E2270C2271219(uLocal_166[iLocal_574], 0))
			{
				if (iLocal_828 == 0)
				{
					unk_0x79BC35B5729FAC2E(Local_96.f_28[1], uLocal_166[iLocal_574], 0, 0f, 0f, 0f, 10f, 100, 0, -753768974);
					iLocal_828 = 1;
				}
			}
			else if ((iLocal_828 == 1 || unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 780511057) == 1) || unk_0x55AE67E25C3C8024(Local_96.f_28[1], uLocal_166[iLocal_574]))
			{
				unk_0xF156AA2A744B309E(Local_96.f_28[1]);
				iLocal_828 = 0;
			}
		}
		else if (fLocal_813 >= 40f)
		{
			unk_0xF156AA2A744B309E(Local_96.f_28[1]);
		}
		if (iLocal_825 == 0)
		{
			if (unk_0x6AE62C1DA604CA92(uLocal_166[iLocal_574], joaat("weapon_stungun"), 0) || unk_0x77F1B7F6C32990D6(uLocal_157[iLocal_574], Local_96.f_35[0], 1))
			{
				func_308();
			}
		}
		if (iLocal_927 == 8 || iLocal_927 == 10)
		{
			if (iLocal_837 == 0)
			{
				if (unk_0x6AE62C1DA604CA92(iLocal_171, joaat("weapon_stungun"), 0))
				{
					func_301();
				}
			}
		}
		if (iLocal_825 == 0)
		{
			if (func_5(uLocal_157[iLocal_574]))
			{
				if (unk_0xA0F74982C6AAA9D4() > iLocal_604 + 15000)
				{
					if (!unk_0x1C48F76B3D032074(uLocal_166[iLocal_574], uLocal_157[iLocal_574], 0))
					{
						if (iLocal_846 == 0)
						{
							func_308();
						}
					}
				}
			}
		}
		if (iLocal_825 == 1)
		{
			if (unk_0x6AE62C1DA604CA92(uLocal_166[iLocal_574], joaat("weapon_stungun"), 0))
			{
				if (unk_0x77F1B7F6C32990D6(uLocal_166[iLocal_574], Local_96.f_28[1], 0))
				{
					if (!unk_0x9A4E2270C2271219(Local_96.f_28[1], 0))
					{
						iLocal_587++;
					}
				}
				if (unk_0x77F1B7F6C32990D6(uLocal_166[iLocal_574], Local_96.f_28[0], 0))
				{
					if (!unk_0x9A4E2270C2271219(Local_96.f_28[0], 0))
					{
						iLocal_587++;
					}
				}
				if (unk_0x77F1B7F6C32990D6(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 0))
				{
					if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
					{
						iLocal_587++;
					}
				}
				unk_0x01BA9E75C85C1D2F(uLocal_166[iLocal_574]);
			}
			if (iLocal_826 == 0)
			{
				iLocal_583 = unk_0xA0F74982C6AAA9D4();
				if (iLocal_583 > iLocal_584 + 4000)
				{
					unk_0xF7B3552987613A6B(uLocal_166[iLocal_574], 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					if (func_282(uLocal_166[iLocal_574], 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (iLocal_587 == 0)
						{
							iLocal_587++;
						}
						func_307();
					}
					if (unk_0x77F1B7F6C32990D6(uLocal_166[iLocal_574], unk_0x27D769C59BC9D030(), 0))
					{
						fLocal_815 = func_231(unk_0x27D769C59BC9D030(), uLocal_166[iLocal_574], 1);
						if (fLocal_815 < 9f)
						{
							if (iLocal_587 > 0)
							{
								func_307();
							}
						}
					}
				}
				if (!unk_0x9A4E2270C2271219(Local_96.f_28[0], 0))
				{
					if (fLocal_812 < 7f)
					{
						if (iLocal_587 > 0)
						{
							func_307();
						}
					}
				}
				if (!unk_0x9A4E2270C2271219(Local_96.f_28[1], 0))
				{
					if (fLocal_813 < 7f)
					{
						if (iLocal_587 > 0)
						{
							func_307();
						}
					}
				}
			}
		}
		if (iLocal_927 == 8 || iLocal_927 == 10)
		{
			if (iLocal_837 == 1)
			{
				if (iLocal_838 == 0)
				{
					if (unk_0xA0F74982C6AAA9D4() > iLocal_576 + 4000)
					{
						unk_0xF7B3552987613A6B(iLocal_171, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
					{
						if (unk_0x77F1B7F6C32990D6(iLocal_171, unk_0x27D769C59BC9D030(), 0))
						{
							fLocal_815 = func_231(unk_0x27D769C59BC9D030(), iLocal_171, 1);
							if (fLocal_815 < 9f)
							{
								func_281();
							}
						}
					}
					if (!unk_0x9A4E2270C2271219(Local_96.f_28[1], 0))
					{
						if (fLocal_813 < 7f)
						{
							func_281();
						}
					}
				}
			}
		}
	}
}

struct<6> func_425()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

void func_426()
{
	if (!unk_0x159730DB57D995D0("MINUTE_02_SCENE"))
	{
		if (func_6(uLocal_157[0]))
		{
			unk_0x75C3321388DDC4F1(uLocal_157[0], "MINUTE_02_SCENE_QUAD_BIKE", 0);
		}
		unk_0xF8B012FD1C255840("MINUTE_02_SCENE");
	}
}

void func_427()
{
	func_416();
	func_413();
	func_266();
	if (iLocal_824 == 1)
	{
		func_409();
		func_348(780, 0);
		unk_0xA0342EB4AE1476FC(5f, 4f, 0);
		iLocal_927 = 3;
	}
}

void func_428()
{
	func_432();
	func_430();
	func_429();
	if (iLocal_912 == 0)
	{
		func_236("MIN2_01", 7000, 0);
		iLocal_912 = 1;
	}
	iLocal_604 = unk_0xA0F74982C6AAA9D4();
	iLocal_927 = 2;
}

void func_429()
{
	if (func_5(Local_96.f_35[0]))
	{
		unk_0xB56F2A6AD009D74D(Local_96.f_35[0], 0.5f, 1000, 0, 0, 0, -1);
		if (!unk_0xD2CFFE76B625AE55(Local_96.f_28[0]))
		{
			func_414(&(Local_96.f_28[0]), 56, Local_96.f_35[0], 0, 1);
		}
		else if (func_511(Local_96.f_28[0]))
		{
			if (!unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
			{
				unk_0xBD875C7680C64C56(Local_96.f_28[0], Local_96.f_35[0], 0);
			}
		}
		if (func_511(Local_96.f_28[0]))
		{
			unk_0x71065DDFF8D7744C(Local_96.f_28[0], unk_0xF384805745D7A349(unk_0x27D769C59BC9D030()));
			unk_0x7ED3655E5924C6F4(Local_96.f_28[0], 2, 1);
			unk_0x7ED3655E5924C6F4(Local_96.f_28[0], 13, 1);
			unk_0x7ED3655E5924C6F4(Local_96.f_28[0], 25, 1);
			unk_0x7ED3655E5924C6F4(Local_96.f_28[0], 0, 0);
			unk_0x7ED3655E5924C6F4(Local_96.f_28[0], 23, 1);
			unk_0xAFC569EFBB254203(Local_96.f_28[0], 0);
			unk_0x2A3F4ACD0DB18011(Local_96.f_28[0], 0);
			unk_0xAC9A80BE63D6295F(Local_96.f_28[0], joaat("weapon_stungun"), -1, 1, 1);
			unk_0xDAF499362B4CEDC5(Local_96.f_28[0], 100);
			unk_0x56F64CC9254C2E4F(Local_96.f_28[0], 32, 0);
			unk_0x56F64CC9254C2E4F(Local_96.f_28[0], 29, 0);
			unk_0x56F64CC9254C2E4F(Local_96.f_28[0], 116, 0);
			unk_0x56F64CC9254C2E4F(Local_96.f_28[0], 170, 1);
			unk_0xB0E2B335371D29B1(Local_96.f_28[0], joaat("empty"));
			unk_0xFFD8329ED7A8E20C(Local_96.f_28[0], 0);
			unk_0xA8ED9F72DC442242(Local_96.f_28[0], 1);
			unk_0x042CFDB2A4591841(Local_96.f_28[0], 1);
			unk_0xDE9DAB22C39E49CF(Local_96.f_28[0], 2);
		}
		if (!unk_0xD2CFFE76B625AE55(Local_96.f_28[1]))
		{
			func_414(&(Local_96.f_28[1]), 57, Local_96.f_35[0], 2, 1);
		}
		else if (func_511(Local_96.f_28[1]))
		{
			if (!unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
			{
				unk_0xBD875C7680C64C56(Local_96.f_28[1], Local_96.f_35[0], 2);
			}
		}
		if (func_511(Local_96.f_28[1]))
		{
			unk_0x71065DDFF8D7744C(Local_96.f_28[1], unk_0xF384805745D7A349(unk_0x27D769C59BC9D030()));
			unk_0xAC9A80BE63D6295F(Local_96.f_28[1], joaat("weapon_stungun"), -1, 1, 1);
			unk_0xDAF499362B4CEDC5(Local_96.f_28[1], 100);
			unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 2, 1);
			unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 13, 1);
			unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 25, 1);
			unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 0, 0);
			unk_0x7ED3655E5924C6F4(Local_96.f_28[1], 23, 1);
			unk_0xAFC569EFBB254203(Local_96.f_28[1], 0);
			unk_0x2A3F4ACD0DB18011(Local_96.f_28[1], 0);
			unk_0x56F64CC9254C2E4F(Local_96.f_28[1], 32, 0);
			unk_0x56F64CC9254C2E4F(Local_96.f_28[1], 29, 0);
			unk_0x56F64CC9254C2E4F(Local_96.f_28[1], 116, 0);
			unk_0x56F64CC9254C2E4F(Local_96.f_28[1], 170, 1);
			unk_0xB0E2B335371D29B1(Local_96.f_28[1], joaat("empty"));
			unk_0xFFD8329ED7A8E20C(Local_96.f_28[1], 0);
			unk_0xA8ED9F72DC442242(Local_96.f_28[1], 1);
			unk_0x042CFDB2A4591841(Local_96.f_28[1], 1);
			unk_0x2F4E6A5807842BEF(Local_96.f_28[1], Local_96.f_35[0]);
			unk_0xDE9DAB22C39E49CF(Local_96.f_28[1], 2);
		}
	}
	func_265(&uLocal_408, 2, unk_0x27D769C59BC9D030(), "TREVOR", 0, 1);
	func_265(&uLocal_408, 6, Local_96.f_28[1], "JOSEF", 0, 1);
	func_265(&uLocal_408, 7, Local_96.f_28[0], "JOE", 0, 1);
}

void func_430()
{
	if (!unk_0xD2CFFE76B625AE55(Local_96.f_35[0]))
	{
		Local_96.f_35[0] = unk_0x4E76306EE6AE7596(joaat("pranger"), 20.8f, 4532.65f, 104.66f, 284.7f, 1, 1);
	}
	if (func_5(Local_96.f_35[0]))
	{
		if (func_511(unk_0x27D769C59BC9D030()))
		{
			func_431(Local_96.f_35[0], 1);
			unk_0x7C898812896A5304(joaat("pranger"), 1);
			unk_0x28F46AE29FA4808C(Local_96.f_35[0], 5, 0);
			unk_0x83D5F5F7A5D5B8E0(Local_96.f_35[0]);
			unk_0x9B3E806EC535DBC3(Local_96.f_35[0], 14f);
			unk_0x1B7FCBF5F0A9F480(Local_96.f_35[0], 1);
			if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
			{
				unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 0);
				unk_0xBD875C7680C64C56(unk_0x27D769C59BC9D030(), Local_96.f_35[0], -1);
			}
			unk_0x217A83259AE119F4(Local_96.f_35[0]);
		}
	}
	unk_0x0049DE0B34213B12(joaat("pranger"));
}

void func_431(var uParam0, int iParam1)
{
	Global_91278.f_22[iParam1] = uParam0;
}

void func_432()
{
	while ((((((((((!unk_0x875098323FCA8FE6(joaat("pranger")) || !unk_0x875098323FCA8FE6(joaat("blazer"))) || !unk_0x875098323FCA8FE6(joaat("prop_passport_01"))) || !func_433(59)) || !unk_0xE59B2DB198441382("MOVE_M@BAIL_BOND_NOT_TAZERED")) || !unk_0xE59B2DB198441382("MOVE_M@BAIL_BOND_TAZERED")) || !unk_0x482101C9B3483958("rcmminute2")) || !unk_0x482101C9B3483958("rcmminute2lean")) || !unk_0x482101C9B3483958("missminuteman_2ig_1")) || !unk_0x911CCA58116D31F0(0)) || !unk_0x911CCA58116D31F0(6))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_433(int iParam0)
{
	if (!func_168(iParam0))
	{
		return unk_0x875098323FCA8FE6(func_562(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_434()
{
	int iVar0;
	
	if (func_536() == 1 && iLocal_848 == 0)
	{
		if (func_501(&(Local_96.f_28[0]), 56, 38.2818f, 4537.57f, 95.4783f, 252.9034f, 1) && func_501(&(Local_96.f_28[1]), 57, 33.843f, 4537.395f, 95.9413f, 309.8384f, 1))
		{
			unk_0x2F228A16D7B61C5F(Local_96.f_28[0], 1, 0, 0, false);
			unk_0x2F228A16D7B61C5F(Local_96.f_28[1], 0, 0, 0, false);
			unk_0x2F228A16D7B61C5F(Local_96.f_28[1], 1, 0, 0, false);
			iVar0 = func_417();
			if (Global_85788 == 1)
			{
				iVar0++;
			}
			if (iVar0 == 0)
			{
				func_500();
			}
			else if (iVar0 == 1)
			{
				func_499();
			}
			else if (iVar0 == 2)
			{
				func_496();
			}
			else if (iVar0 > 2)
			{
				func_488();
			}
		}
	}
	else
	{
		func_435();
	}
}

void func_435()
{
	int iVar0;
	
	if (unk_0x95921D2FB0B6ACDD())
	{
		unk_0xEBCFA81EA7447178("Joe", 1, 0, 0, 0);
		unk_0xEBCFA81EA7447178("Josef", 0, 0, 0, 0);
		unk_0xEBCFA81EA7447178("Josef", 1, 0, 0, 0);
	}
	switch (iLocal_926)
	{
		case 0:
			if (unk_0xDFCB321F1D24137F() && !iLocal_892)
			{
				if (func_487(1, 0, 1, 0))
				{
					iLocal_575 = unk_0xA0F74982C6AAA9D4() + 1000;
					iLocal_892 = 1;
				}
			}
			if (iLocal_575 < unk_0xA0F74982C6AAA9D4())
			{
				if (!unk_0xD2CFFE76B625AE55(Local_96.f_35[0]))
				{
					Local_96.f_35[0] = unk_0x4E76306EE6AE7596(joaat("pranger"), 20.8f, 4532.65f, 104.66f, 284.7f, 1, 1);
				}
				if (func_501(&(Local_96.f_28[0]), 56, 38.2818f, 4537.57f, 95.4783f, 252.9034f, 1) && func_501(&(Local_96.f_28[1]), 57, 33.843f, 4537.395f, 95.9413f, 309.8384f, 1))
				{
					unk_0x2F228A16D7B61C5F(Local_96.f_28[0], 1, 0, 0, false);
					unk_0x2F228A16D7B61C5F(Local_96.f_28[1], 0, 0, 0, false);
					unk_0x2F228A16D7B61C5F(Local_96.f_28[1], 1, 0, 0, false);
					iLocal_926 = 1;
				}
			}
			break;
		
		case 1:
			func_486("mmb_2_rcm", 0);
			if (func_481(1, 1093140480, 0))
			{
				if (func_5(Local_96.f_35[0]))
				{
					unk_0x90F1D412CA4CF490(Local_96.f_35[0], "MMB_Parked_car", 0, joaat("pranger"), 0);
				}
				if (func_511(Local_96.f_28[1]))
				{
					unk_0x90F1D412CA4CF490(Local_96.f_28[1], "Josef", 0, joaat("ig_josef"), 0);
				}
				if (func_511(Local_96.f_28[0]))
				{
					unk_0x90F1D412CA4CF490(Local_96.f_28[0], "Joe", 0, joaat("ig_joeminuteman"), 0);
				}
				iLocal_877 = 0;
				iLocal_878 = 0;
				iLocal_879 = 0;
				iLocal_880 = 0;
				iLocal_881 = 0;
				unk_0x8D1A4408D797A1F3(1);
				func_480();
				unk_0xBC7FB8D910011C75(0);
				unk_0x98E9C976B38F9039(joaat("pranger"));
				unk_0x4EDE34FBADD967A6(0);
				func_474(14.70134f, 4530.018f, 102.5625f, 27.26711f, 4533.092f, 107.864f, 11.25f, -0.3602f, 4523.248f, 107.0955f, 256.1712f, 1, 1, 1, 0, 0);
				if (unk_0xD2CFFE76B625AE55(unk_0x070841EC2D20AB5A()))
				{
					iVar0 = unk_0x946C63BD9EF05437(unk_0x070841EC2D20AB5A());
				}
				if (((!unk_0xDBFA5C79D9B3D622(iVar0) && !unk_0xEC6E5897335290DD(iVar0)) && !unk_0xD3AE48D8EB7DCBE6(iVar0)) && !unk_0x5BFC131B92C92E97(iVar0))
				{
					func_448(0f, 0f, 0f, 0f, 1, 2);
				}
				unk_0xEFA71310CAEBAE1F(18f, 4527f, 105f, 150f, 1, 0, 0, 0);
				func_444(18f, 4527f, 105f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_926 = 2;
			}
			break;
		
		case 2:
			if (((iLocal_877 && iLocal_878) && iLocal_879) && iLocal_881)
			{
				iLocal_926 = 3;
			}
			if (unk_0x260AD5C1BAEF7765(0))
			{
				unk_0x0B28AEB595CB09AF(0f);
				unk_0x4523FDDB9926E1D8(0f, 1065353216);
				iLocal_881 = 1;
			}
			if (unk_0x1F12913CC4103895("Trevor", 0))
			{
				unk_0x51439342AACB44DE();
				if (func_5(Local_96.f_35[0]))
				{
					if (func_511(unk_0x27D769C59BC9D030()))
					{
						unk_0xBD875C7680C64C56(unk_0x27D769C59BC9D030(), Local_96.f_35[0], -1);
						unk_0x8A3D3E40973625F0(unk_0x27D769C59BC9D030(), 0, 0);
						iLocal_877 = 1;
					}
				}
			}
			if (unk_0x1F12913CC4103895("Josef", joaat("ig_josef")))
			{
				if (func_5(Local_96.f_35[0]))
				{
					if (func_511(Local_96.f_28[1]))
					{
						unk_0xBD875C7680C64C56(Local_96.f_28[1], Local_96.f_35[0], 2);
						unk_0x8A3D3E40973625F0(Local_96.f_28[1], 0, 0);
						iLocal_878 = 1;
					}
				}
			}
			if (unk_0x1F12913CC4103895("Joe", joaat("ig_joeminuteman")))
			{
				if (func_5(Local_96.f_35[0]))
				{
					if (func_511(Local_96.f_28[0]))
					{
						unk_0xBD875C7680C64C56(Local_96.f_28[0], Local_96.f_35[0], 0);
						unk_0x8A3D3E40973625F0(Local_96.f_28[0], 0, 0);
						iLocal_879 = 1;
					}
				}
			}
			if (unk_0x1F12913CC4103895("MMB_Parked_car", joaat("pranger")))
			{
				iLocal_880 = 1;
			}
			iLocal_880 = iLocal_880;
			if (!unk_0xD2CFFE76B625AE55(Local_96.f_35[0]))
			{
				if (unk_0xD2CFFE76B625AE55(unk_0x7F2F5CBBB87D2D4B("MMB_Parked_car", 0)))
				{
					Local_96.f_35[0] = unk_0x35E488C304B2E03E(unk_0x7F2F5CBBB87D2D4B("MMB_Parked_car", 0));
				}
			}
			break;
		
		case 3:
			if (func_5(Local_96.f_35[0]))
			{
				unk_0x3AE146F24A3AEEE0(Local_96.f_35[0], 0, 1);
				unk_0x3AE146F24A3AEEE0(Local_96.f_35[0], 3, 1);
				unk_0x3AE146F24A3AEEE0(Local_96.f_35[0], 1, 1);
			}
			if (iLocal_912 == 0)
			{
				func_236("MIN2_01", 7000, 0);
				iLocal_912 = 1;
			}
			unk_0x0B28AEB595CB09AF(0f);
			unk_0x4523FDDB9926E1D8(0f, 1065353216);
			func_436(1, 1, 1, 1);
			func_532(&Local_96, 0, 1);
			if (unk_0xDFCB321F1D24137F())
			{
				func_487(0, 0, 1, 0);
			}
			iLocal_927 = 1;
			break;
	}
}

void func_436(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = unk_0xB927AFB90873B8C1();
	unk_0x5D707E54C2359852(uVar0, 0);
	unk_0x9F805E4A6F671CEE(uVar0, iParam3, 0);
	func_437(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x83DB85FD25128C55(1);
		unk_0x3DFCFAD590F85BF7(1);
	}
	unk_0x5BD150B52CE8D356(1);
	if (iParam0 == 1)
	{
		unk_0x253830D462669824(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_48 != 0 && iLocal_48 != joaat("object")) && iLocal_48 != joaat("gadget_parachute"))
		{
			if (func_6(unk_0x27D769C59BC9D030()))
			{
				if (unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), iLocal_48, 0))
				{
					unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), iLocal_48, 0);
				}
			}
		}
	}
	if (func_511(unk_0x27D769C59BC9D030()))
	{
		unk_0x35E648675FC36FAE(unk_0x27D769C59BC9D030(), 0, 0);
	}
}

void func_437(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x0952A7BA90103950(unk_0x4D29100D094E5511());
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 1);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 1);
		func_443(1);
		unk_0xD14C6D196E70C6B0();
		unk_0x7CC7CFD7BFFAAC4C();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x0EFEEF8E6B0B4E34())
			{
				unk_0x94DA6AACA7F07289(0);
			}
			if (!func_223())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_487(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_443(0);
		unk_0xFF2A2F3774F8F7B6();
		Global_55755 = 0;
		if (bParam1)
		{
			unk_0x2E6328B1B95241F5();
		}
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 0);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 0);
		func_487(0, iParam3, iParam2, 0);
		if (unk_0x0E063DDE8855EC52())
		{
			if (((!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_441(unk_0x4D29100D094E5511())) && !func_439(unk_0x4D29100D094E5511(), 0)) && !func_438())
			{
				unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
			}
		}
		else if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_441(unk_0x4D29100D094E5511()))
		{
			unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
		}
		Global_69487 = 0;
	}
}

bool func_438()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 14);
}

bool func_439(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_440(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_440(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_441(int iParam0)
{
	if (func_439(iParam0, 0))
	{
		return 1;
	}
	if (func_442())
	{
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return 1;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_442()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
}

void func_443(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 13);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 13);
	}
}

void func_444(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	var uVar0;
	
	uVar0 = unk_0xB927AFB90873B8C1();
	if (unk_0x2DB75A8F096AB1F1(uVar0))
	{
		func_447(0);
		if (bParam9)
		{
			unk_0x6E070B4B131F4DBC(unk_0xB927AFB90873B8C1(), 1);
		}
		if (bParam8)
		{
			switch (func_226())
			{
				case 0:
					if (func_165(unk_0x27D769C59BC9D030(), 8, 15))
					{
						func_53(unk_0x27D769C59BC9D030(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_165(unk_0x27D769C59BC9D030(), 9, 6))
					{
						func_53(unk_0x27D769C59BC9D030(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_165(unk_0x27D769C59BC9D030(), 8, 1) || func_165(unk_0x27D769C59BC9D030(), 8, 10))
					{
						func_53(unk_0x27D769C59BC9D030(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_165(unk_0x27D769C59BC9D030(), 8, 4))
					{
						func_53(unk_0x27D769C59BC9D030(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			unk_0x90CDF5C9FC20A5BF(func_446(unk_0xB927AFB90873B8C1()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			unk_0xBEE458FA951B0113(Param0, 30f, 0);
		}
		if (bParam10)
		{
			unk_0x78856C91417B033E(Param0, 30f);
		}
		unk_0x8474F03FCE36E004(Param0, 30f, 0);
		unk_0x97FFE53522693832(iVar0, 0, 0);
		unk_0x774840DEC1F0175E(iVar0, 0);
		unk_0x5D707E54C2359852(iVar0, 1);
		if (bParam12)
		{
			unk_0x83DB85FD25128C55(0);
			unk_0x3DFCFAD590F85BF7(0);
		}
		unk_0x8ACEB4FC9E9EE225();
		if (iParam11 == 1)
		{
			unk_0x5BD150B52CE8D356(1);
		}
		if (iParam3 == 1)
		{
			unk_0x253830D462669824(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_48 = 0;
			if (func_6(unk_0x27D769C59BC9D030()))
			{
				iLocal_48 = unk_0x64C8B8C233A429DC(unk_0x27D769C59BC9D030());
				unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			func_445(500, 0);
		}
	}
}

void func_445(int iParam0, bool bParam1)
{
	if (unk_0x3934E959DB2478D3() || unk_0xA07829C3F763B9B6())
	{
		if (!unk_0xF1384D7CDC020749())
		{
			unk_0x4AD174B0D4656163(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0xCBB243DDC0D132D1())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

Vector3 func_446(int iParam0)
{
	return unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(uParam0), 0);
}

void func_447(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB927AFB90873B8C1();
	if (!unk_0xE319A8D4D9264966(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0x9F805E4A6F671CEE(iVar0, bParam0, 16);
		unk_0x9F805E4A6F671CEE(iVar0, bParam0, 32);
	}
	func_437(1, 1, 0, 0);
}

void func_448(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xD2CFFE76B625AE55(Global_93091.f_4))
	{
		if (unk_0x0B4DDB992C7BCF57(Global_93091.f_4, 0))
		{
			if (func_473(24) != Global_93091.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_470(unk_0xA8CFDE65C45F813B(Global_93091.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_449(Global_93091.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_449(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[25]) && unk_0x0B4DDB992C7BCF57(Global_68319.f_484[25], 0))
			{
				if (Global_68319.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x51A640907BDD41BB(iParam0) || unk_0x946C63BD9EF05437(iParam0) == joaat("bus")) || unk_0x946C63BD9EF05437(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_469(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_362(iParam0, &Var0);
		if (func_334(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
			fParam4 = unk_0x4D6B971C8AEE130C(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) != joaat("vehicle_gen_controller"))
			{
				Global_69307 = unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2());
			}
		}
		func_466(iParam5, &Var0, Param1, fParam4, func_358(iParam0));
		func_450(iParam5, iParam0, 0);
	}
}

void func_450(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_465(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 12) && !unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68319.f_555[0 /*21*/].f_4 != unk_0x946C63BD9EF05437(iParam1))
		{
			return;
		}
	}
	if (Global_69226 != -1 && Global_69226 != iParam0)
	{
		return;
	}
	if (unk_0xD2CFFE76B625AE55(iParam1))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam1, 0))
		{
			if (!unk_0xE24B37600DCB21FC(iParam1))
			{
				unk_0xAF3355298F537BB0(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_101154.f_18807.f_4801 = func_393();
			}
			if (iParam1 != Global_68319.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_473(iParam0);
					if ((unk_0xD2CFFE76B625AE55(iVar0) && unk_0x0B4DDB992C7BCF57(iVar0, 0)) && iParam1 != iVar0)
					{
						func_451(iVar0, 145);
					}
				}
				Global_69225 = iParam1;
				Global_69226 = iParam0;
				Global_69227 = iParam2;
			}
		}
	}
}

void func_451(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_452(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x9297C590C99228DC(iParam0, -1);
		if (!unk_0xD2CFFE76B625AE55(iVar0))
		{
			iVar0 = unk_0x8704B0F200BD412D(iParam0, -1);
		}
		if (unk_0xD2CFFE76B625AE55(iVar0) && !unk_0xE4F7206742848BAF(iVar0))
		{
			if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x946C63BD9EF05437(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x75CB9E30BA492FF0(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xC1C5B83BB6719C6C(unk_0x9111F14F8ABAE773(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
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
		if (unk_0x946C63BD9EF05437(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x75CB9E30BA492FF0(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xC1C5B83BB6719C6C(unk_0x9111F14F8ABAE773(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_362(iParam0, &(Global_101154.f_18807.f_5510));
}

int func_452(int iParam0)
{
	if ((((((((((!unk_0xD2CFFE76B625AE55(iParam0) || !unk_0x0B4DDB992C7BCF57(iParam0, 0)) || func_366(iParam0, 0, 0)) || func_366(iParam0, 1, 0)) || func_366(iParam0, 2, 0)) || func_358(iParam0) != 145) || func_464(iParam0)) || func_463(iParam0)) || func_462(iParam0)) || func_461(iParam0)) || !func_453(unk_0x946C63BD9EF05437(iParam0)))
	{
		if (func_463(iParam0))
		{
		}
		if (func_463(iParam0))
		{
		}
		if (func_366(iParam0, 0, 0))
		{
		}
		if (func_366(iParam0, 1, 0))
		{
		}
		if (func_366(iParam0, 2, 0))
		{
		}
		if (func_358(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_453(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_454(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xD3AE48D8EB7DCBE6(iParam0) || unk_0xEC6E5897335290DD(iParam0)) || unk_0xDBFA5C79D9B3D622(iParam0)) || unk_0x5BFC131B92C92E97(iParam0))
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

int func_454(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xCCCEEEDD3FD9AA24(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x0E063DDE8855EC52())) || (iParam0 == joaat("buffalo3") && !unk_0x0E063DDE8855EC52())) || (iParam0 == joaat("gauntlet2") && !unk_0x0E063DDE8855EC52())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x0E063DDE8855EC52())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_460())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF91F65A88EC73320())
		{
			if (unk_0xB1B63407FCB8DC25(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x80EC20FBCB429863(Var1.f_0))
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
		if ((((!func_459() && !func_458()) && !func_457()) && !func_456()) && !func_460())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xD0333FE560420AC5() || unk_0xDFCB321F1D24137F()) || unk_0x748A964A12412EBB())
		{
		}
		else if (!func_457())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_455(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_455(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x9CC4C10F8D665832();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_456()
{
	return 0;
}

int func_457()
{
	return 1;
}

int func_458()
{
	return 1;
}

int func_459()
{
	if (unk_0xA29E536967D6DF2E(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_460()
{
	int iVar0;
	
	if (unk_0xB3081451628A5D6C())
	{
		if (unk_0xF8B1AB221BA632B5())
		{
			if (unk_0x4C5F5AF635DED95E())
			{
				unk_0xD0D748C6C14C0E92(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x26545538B51562AD(&iVar0, 2);
				unk_0x26545538B51562AD(&iVar0, 4);
				unk_0x26545538B51562AD(&iVar0, 6);
				unk_0x26545538B51562AD(&Global_25, 2);
				unk_0x26545538B51562AD(&Global_25, 4);
				unk_0x26545538B51562AD(&Global_25, 6);
				unk_0xE2A8B026FA4DDFFF(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x755BFB74ADDC1524())
				{
					iVar0 = unk_0xC06A80AF9911D7A8(866);
					unk_0x26545538B51562AD(&iVar0, 0);
					unk_0xD020BAA9D2E33978(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return 1;
	}
	else if (Global_138274 == 3)
	{
		return 0;
	}
	if (unk_0x755BFB74ADDC1524())
	{
		if (unk_0xF426A5DE932B3BEE(unk_0xC06A80AF9911D7A8(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_461(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x946C63BD9EF05437(iParam0);
	sVar1 = unk_0x9111F14F8ABAE773(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xC1C5B83BB6719C6C(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_454(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_462(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_463(int iParam0)
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]) && unk_0x0B4DDB992C7BCF57(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && unk_0x946C63BD9EF05437(Global_88942[iVar0]) == unk_0x946C63BD9EF05437(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_464(int iParam0)
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_465(var uParam0, int iParam1)
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
			uParam0->f_4 = func_360(0, 1);
			uParam0->f_12 = 0;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_360(0, 1);
			uParam0->f_12 = 0;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_360(1, 1);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_360(1, 2);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 19);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_360(1, 1);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_360(1, 2);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 19);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_360(2, 1);
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_360(2, 1);
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_360(2, 1);
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
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
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 27);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
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
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 27);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
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
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 27);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 11);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 11);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x26545538B51562AD(&(uParam0->f_9), 9);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x26545538B51562AD(&(uParam0->f_9), 9);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
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
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
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
			if (func_460())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_460())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xF426A5DE932B3BEE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101154.f_18807.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_334(Global_101154.f_18807.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101154.f_18807.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101154.f_18807.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101154.f_18807.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xF426A5DE932B3BEE(uParam0->f_9, 19))
	{
		if (!func_334(Global_101154.f_1826.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101154.f_1826.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xF426A5DE932B3BEE(uParam0->f_9, 20))
	{
		if (!func_334(Global_101154.f_1826.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101154.f_1826.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_466(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_465(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 10))
		{
			func_468(iParam0);
			func_467(uParam1, &(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 11))
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_195(iParam0, 1);
		}
	}
}

void func_467(var uParam0, var uParam1)
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

void func_468(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_465(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_139[iParam0]))
		{
			unk_0xAF3355298F537BB0(Global_68319.f_139[iParam0], 1, 1);
			unk_0x9846B4D56971A958(&(Global_68319.f_139[iParam0]));
			Global_68319.f_139[iParam0] = 0;
		}
		if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			func_195(iParam0, 0);
		}
	}
}

void func_469(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_468(iParam0);
	func_195(iParam0, 0);
}

int func_470(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_471(Param0, iParam3, 1);
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

int func_471(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_86649[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86649[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_472(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x676D4CD42E0837CA(Param0, Global_86649[iVar0 /*10*/].f_3, 1);
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

bool func_472(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_101154.f_5919[iParam0], 0);
}

int func_473(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68319.f_139[iParam0];
}

void func_474(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_475(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_475(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x070841EC2D20AB5A();
	if (unk_0xD2CFFE76B625AE55(iVar0))
	{
		if (!unk_0xE24B37600DCB21FC(iVar0))
		{
			unk_0xAF3355298F537BB0(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
		{
			if (bParam18)
			{
				func_479(iVar0);
			}
			if (unk_0x98CEDC9398D49BB8(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0xA8CFDE65C45F813B(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_477(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
			{
				if (unk_0x753C14DD45ABE554(iVar0, joaat("taxi")))
				{
					if (unk_0x9297C590C99228DC(iVar0, -1) != unk_0x27D769C59BC9D030() && unk_0x9297C590C99228DC(iVar0, -1) != 0)
					{
						if (unk_0x676D4CD42E0837CA(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0xA8CFDE65C45F813B(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_366(iVar0, func_226(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_476(Param11))
				{
					if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
					{
						iVar13 = unk_0x946C63BD9EF05437(iVar0);
						unk_0xCEFEA701AC431C75(iVar0, &Var4, &Var7);
						if (unk_0xDBFA5C79D9B3D622(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0xC972AA2C9F94741D(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0xFBDCF3D5834B58D8(iVar0, fParam10);
						unk_0x4EEE9D9427E70F4E(iVar0, Param7, 1, 0, 0, 1);
						unk_0xFA3ED0FFF3FD8F34(iVar0);
						if (bParam17)
						{
							unk_0x8BE1AEC303A057F7(iVar0, 0, 1, 0);
							unk_0x48C585788C05DB37(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xE24B37600DCB21FC(iVar0) || !unk_0xFF65D7BC656BA68E(iVar0, 1))
						{
							unk_0xAF3355298F537BB0(iVar0, 1, 1);
						}
						if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iVar0, 0))
						{
							unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), unk_0xA8CFDE65C45F813B(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0xF6E128C391C16F7C(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x31D69BBC7F83114D(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xD2CFFE76B625AE55(iVar0))
				{
					if (unk_0xE24B37600DCB21FC(iVar0))
					{
						unk_0x9846B4D56971A958(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xE24B37600DCB21FC(iVar0))
			{
				unk_0xAF3355298F537BB0(iVar0, 1, 0);
			}
			iVar14 = unk_0x9297C590C99228DC(iVar0, -1);
			if (unk_0xD2CFFE76B625AE55(iVar14) && !unk_0xE4F7206742848BAF(iVar14))
			{
				unk_0x4EEE9D9427E70F4E(iVar14, unk_0xA8CFDE65C45F813B(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0xAAD0C2C6698FC5AA(unk_0x946C63BD9EF05437(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0x9297C590C99228DC(iVar0, 0);
				if (unk_0xD2CFFE76B625AE55(iVar14) && !unk_0xE4F7206742848BAF(iVar14))
				{
					unk_0x4EEE9D9427E70F4E(iVar14, unk_0xA8CFDE65C45F813B(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0x9297C590C99228DC(iVar0, 1);
				if (unk_0xD2CFFE76B625AE55(iVar14) && !unk_0xE4F7206742848BAF(iVar14))
				{
					unk_0x4EEE9D9427E70F4E(iVar14, unk_0xA8CFDE65C45F813B(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0x9297C590C99228DC(iVar0, 2);
				if (unk_0xD2CFFE76B625AE55(iVar14) && !unk_0xE4F7206742848BAF(iVar14))
				{
					unk_0x4EEE9D9427E70F4E(iVar14, unk_0xA8CFDE65C45F813B(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0xF6E128C391C16F7C(&iVar0);
		}
	}
}

int func_476(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_477(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_291(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x3DE83953A8E7C5D3(unk_0x946C63BD9EF05437(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0xD7C4E2CB0B216852(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0xD7C4E2CB0B216852(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0xD7C4E2CB0B216852(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0xD7C4E2CB0B216852(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_478(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_478(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_478(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_478(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_478(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_478(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_478(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_478(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_478(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_478(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_478(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_478(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_478(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_478(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_478(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_478(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_478(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

void func_479(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
		{
			if (unk_0xB23CB7DBBE38B63C(iParam0) <= 200f)
			{
				unk_0x38B4190AFCA07B12(iParam0, 500f);
			}
			if (unk_0x6749AD8E7CB79ADE(iParam0) <= 700f)
			{
				unk_0x38B4190AFCA07B12(iParam0, 900f);
			}
			if (unk_0x4C3235E6E203703D(iParam0) < 200)
			{
				unk_0x38B4190AFCA07B12(iParam0, 500f);
			}
		}
	}
}

void func_480()
{
	int iVar0;
	
	iVar0 = func_217();
	if (iVar0 == -1)
	{
		return;
	}
	Global_100241[iVar0 /*10*/] = 1;
}

int func_481(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		if ((!unk_0x5723DA3F8C10C270(unk_0x27D769C59BC9D030()) && !unk_0x804F37BBE1FFE251(unk_0x27D769C59BC9D030())) && !unk_0xDF29E1AF81C00A22(unk_0x27D769C59BC9D030()))
		{
			if (!func_485(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), iParam1, 1, 1056964608, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_484(unk_0x27D769C59BC9D030(), -828834893))
				{
					unk_0x550B00F01FC4ADF0(unk_0x27D769C59BC9D030(), 0, 0);
				}
			}
			if (unk_0x0BAF34551BADE6DC(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_483();
	if (func_232())
	{
		func_304();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_482())
		{
			return 0;
		}
	}
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	return 1;
}

bool func_482()
{
	bool bVar0;
	
	bVar0 = unk_0xAA28218C604F91A5();
	if (!Global_69488)
	{
		if (!bVar0)
		{
			Global_69488 = 1;
		}
	}
	return bVar0;
}

void func_483()
{
	unk_0xCFF471245AFEEDCE(0, 21, 1);
	unk_0xCFF471245AFEEDCE(0, 37, 1);
	unk_0xCFF471245AFEEDCE(0, 25, 1);
	unk_0xCFF471245AFEEDCE(0, 141, 1);
	unk_0xCFF471245AFEEDCE(0, 140, 1);
	unk_0xCFF471245AFEEDCE(0, 24, 1);
	unk_0xCFF471245AFEEDCE(0, 257, 1);
	unk_0xCFF471245AFEEDCE(0, 22, 1);
	unk_0xCFF471245AFEEDCE(0, 23, 1);
}

int func_484(int iParam0, int iParam1)
{
	if (func_511(uParam0))
	{
		if (unk_0x810AFFABCBF31E2D(uParam0, iParam1) == 1 || unk_0x810AFFABCBF31E2D(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_485(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xCFF471245AFEEDCE(0, 71, 1);
	unk_0xCFF471245AFEEDCE(0, 72, 1);
	unk_0xCFF471245AFEEDCE(0, 76, 1);
	unk_0xCFF471245AFEEDCE(0, 73, 1);
	unk_0xCFF471245AFEEDCE(0, 59, 1);
	unk_0xCFF471245AFEEDCE(0, 60, 1);
	if (bParam5)
	{
		unk_0xCFF471245AFEEDCE(0, 75, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 80, 1);
	if (!bParam6)
	{
		unk_0xCFF471245AFEEDCE(0, 69, 1);
		unk_0xCFF471245AFEEDCE(0, 70, 1);
		unk_0xCFF471245AFEEDCE(0, 68, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 74, 1);
	unk_0xCFF471245AFEEDCE(0, 86, 1);
	unk_0xCFF471245AFEEDCE(0, 81, 1);
	unk_0xCFF471245AFEEDCE(0, 82, 1);
	unk_0xCFF471245AFEEDCE(0, 138, 1);
	unk_0xCFF471245AFEEDCE(0, 136, 1);
	unk_0xCFF471245AFEEDCE(0, 114, 1);
	unk_0xCFF471245AFEEDCE(0, 107, 1);
	unk_0xCFF471245AFEEDCE(0, 110, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 87, 1);
	unk_0xCFF471245AFEEDCE(0, 88, 1);
	unk_0xCFF471245AFEEDCE(0, 113, 1);
	unk_0xCFF471245AFEEDCE(0, 115, 1);
	unk_0xCFF471245AFEEDCE(0, 116, 1);
	unk_0xCFF471245AFEEDCE(0, 117, 1);
	unk_0xCFF471245AFEEDCE(0, 118, 1);
	unk_0xCFF471245AFEEDCE(0, 119, 1);
	unk_0xCFF471245AFEEDCE(0, 131, 1);
	unk_0xCFF471245AFEEDCE(0, 132, 1);
	unk_0xCFF471245AFEEDCE(0, 123, 1);
	unk_0xCFF471245AFEEDCE(0, 126, 1);
	unk_0xCFF471245AFEEDCE(0, 129, 1);
	unk_0xCFF471245AFEEDCE(0, 130, 1);
	unk_0xCFF471245AFEEDCE(0, 133, 1);
	unk_0xCFF471245AFEEDCE(0, 134, 1);
	unk_0xD2707D96EC4B48D3();
	if ((unk_0xA0F74982C6AAA9D4() - Global_29) > 500)
	{
		unk_0x29D71D9710F2540E(uParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xA0F74982C6AAA9D4();
	if (!unk_0x2006A8C1BA2AFE80(uParam0, 0))
	{
		if (unk_0x43698C98CC255554(unk_0xECC01072E61D2F3A(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_486(char* sParam0, bool bParam1)
{
	func_447(bParam1);
	unk_0xE592C68A352C5B0A(sParam0, 8);
}

int func_487(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0xE9F84F88F70445CA() != iParam0 && iParam2)
		{
			unk_0x4959DFBF16606CE5(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_488()
{
	func_495(349.8519f, 2662.769f, 43.6822f, 137.3727f, 1, 0);
	func_494(1, 1, 1);
	unk_0x68BD4F826EFDDC53("MM2_STOP");
	iLocal_848 = 1;
	func_4();
	func_528();
	func_432();
	func_430();
	func_429();
	func_493();
	func_416();
	func_413();
	func_492();
	func_419();
	func_418();
	func_416();
	func_413();
	func_490(0, -1, 1);
	if (func_5(Local_96.f_35[0]))
	{
		if (func_511(Local_96.f_28[0]))
		{
			if (func_511(Local_96.f_28[1]))
			{
				if (!unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
				{
					unk_0xBD875C7680C64C56(Local_96.f_28[0], Local_96.f_35[0], 0);
				}
				unk_0xBD875C7680C64C56(Local_96.f_28[1], Local_96.f_35[0], 1);
			}
		}
		if (!unk_0xD2CFFE76B625AE55(uLocal_166[1]))
		{
			uLocal_166[1] = unk_0x91D233CD0204A37F(26, joaat("s_m_m_migrant_01"), unk_0xD7C4E2CB0B216852(Local_96.f_35[0], 0f, 0f, 10f), 0f, 1, 1);
			unk_0x5D927D8655264D6C(uLocal_166[1], 0, 0, 1, 0);
			unk_0x5D927D8655264D6C(uLocal_166[1], 3, 1, 0, 0);
			unk_0x5D927D8655264D6C(uLocal_166[1], 4, 0, 0, 0);
			unk_0x5D927D8655264D6C(uLocal_166[1], 6, 1, 0, 0);
			unk_0x5D927D8655264D6C(uLocal_166[1], 8, 1, 0, 0);
		}
		if (func_511(uLocal_166[1]))
		{
			uLocal_400 = unk_0x239E9E07DB537DC9(0f, 0f, 0f, 0f, 0f, 0f, 2);
			unk_0xEFED6B9FF91F059D(uLocal_400, 1);
			unk_0x21092DBB624E6BC2(uLocal_400, Local_96.f_35[0], unk_0x1060AD708DD56BC7(Local_96.f_35[0], "seat_pside_r"));
			unk_0x98E2FD5DA7CF97D3(uLocal_166[1], uLocal_400, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1148846080, 0);
			unk_0x221689C0DCB71BAA(uLocal_400, 0.99f);
			unk_0xFFD8329ED7A8E20C(uLocal_166[1], 0);
			unk_0x71065DDFF8D7744C(uLocal_166[1], unk_0xF384805745D7A349(unk_0x27D769C59BC9D030()));
			iLocal_614 = 1;
		}
		if (func_511(iLocal_171))
		{
			if (!unk_0x1C48F76B3D032074(iLocal_171, Local_96.f_35[0], 0))
			{
				unk_0xBD875C7680C64C56(iLocal_171, Local_96.f_35[0], 2);
				unk_0xFFD8329ED7A8E20C(iLocal_171, 0);
				unk_0x71065DDFF8D7744C(iLocal_171, unk_0xF384805745D7A349(unk_0x27D769C59BC9D030()));
			}
		}
	}
	func_505(&(uLocal_189[0]));
	func_505(&(uLocal_189[1]));
	unk_0x4EEE9D9427E70F4E(Local_96.f_35[0], 696.1606f, 2704.901f, 39.4572f, 1, 0, 0, 1);
	unk_0xFBDCF3D5834B58D8(Local_96.f_35[0], 92.8104f);
	unk_0x0B28AEB595CB09AF(0f);
	unk_0x4523FDDB9926E1D8(0f, 1065353216);
	func_489(unk_0x27D769C59BC9D030(), 698.7277f, 2708f, 39.3397f, 91.2899f, 0, 1);
	func_238();
	iLocal_599 = (unk_0xA0F74982C6AAA9D4() - 17000);
	iLocal_927 = 17;
	if (!unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_stungun"), 0))
	{
		unk_0xAC9A80BE63D6295F(unk_0x27D769C59BC9D030(), joaat("weapon_stungun"), 1, 1, 1);
	}
	unk_0x0B28AEB595CB09AF(0f);
	unk_0x4523FDDB9926E1D8(0f, 1065353216);
	func_445(800, 0);
}

int func_489(int iParam0, struct<3> Param1, float fParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_6(uParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0xF1F1EBE69E9A0DE7(Param1, &fVar1, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0x4EEE9D9427E70F4E(uParam0, Param1, 1, 0, 0, iParam6);
		unk_0xFBDCF3D5834B58D8(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_490(int iParam0, int iParam1, int iParam2)
{
	if (func_536() && func_491())
	{
		while (Global_91273 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x42B9806B3EED4C70(0);
		if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
		{
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				unk_0x029678E81E95BAF2(unk_0x27D769C59BC9D030());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				if (unk_0xD2CFFE76B625AE55(iParam0))
				{
					if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
					{
						if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iParam0, 0))
						{
							unk_0xBD875C7680C64C56(unk_0x27D769C59BC9D030(), iParam0, iParam1);
							unk_0x4523FDDB9926E1D8(0f, 1065353216);
							unk_0x0B28AEB595CB09AF(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
			{
				unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), true, 0);
			}
		}
		unk_0xEAFB18BDF651DD1C();
		func_31(0);
	}
}

bool func_491()
{
	return unk_0xF426A5DE932B3BEE(Global_91278.f_20, 13);
}

void func_492()
{
	if (func_5(Local_96.f_35[0]))
	{
		if (func_511(Local_96.f_28[0]))
		{
			if (func_511(Local_96.f_28[1]))
			{
				if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
				{
					unk_0xA62C2DE6090B87D5(unk_0x27D769C59BC9D030(), Local_96.f_35[0], -1);
				}
				if (!unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
				{
					unk_0xA62C2DE6090B87D5(Local_96.f_28[0], Local_96.f_35[0], 0);
				}
				if (!unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
				{
					unk_0xA62C2DE6090B87D5(Local_96.f_28[1], Local_96.f_35[0], 1);
				}
			}
		}
	}
	func_311();
	if (unk_0xC2AE0A979757C34A(uLocal_398))
	{
		unk_0x221689C0DCB71BAA(uLocal_398, 0.9f);
	}
	iLocal_574 = 1;
	unk_0x4EEE9D9427E70F4E(Local_96.f_35[0], 227.15f, 2950.612f, 41.8969f, 1, 0, 0, 1);
	unk_0xFBDCF3D5834B58D8(Local_96.f_35[0], 186.9743f);
	unk_0x0B28AEB595CB09AF(0f);
	unk_0x4523FDDB9926E1D8(0f, 1065353216);
	iLocal_927 = 6;
	func_419();
	func_418();
	iLocal_843 = 1;
}

void func_493()
{
	func_505(&(uLocal_189[iLocal_574]));
	if (func_5(Local_96.f_35[0]))
	{
		if (func_511(Local_96.f_28[0]))
		{
			if (func_511(Local_96.f_28[1]))
			{
				if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
				{
					unk_0xA62C2DE6090B87D5(unk_0x27D769C59BC9D030(), Local_96.f_35[0], -1);
				}
				if (!unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
				{
					unk_0xA62C2DE6090B87D5(Local_96.f_28[0], Local_96.f_35[0], 0);
				}
				if (!unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
				{
					unk_0xA62C2DE6090B87D5(Local_96.f_28[1], Local_96.f_35[0], 1);
				}
			}
		}
	}
	unk_0x4EEE9D9427E70F4E(Local_96.f_35[0], 132.1798f, 4453.142f, 79.8101f, 1, 0, 0, 1);
	unk_0xFBDCF3D5834B58D8(Local_96.f_35[0], 227.5366f);
	unk_0x0B28AEB595CB09AF(0f);
	unk_0x4523FDDB9926E1D8(0f, 1065353216);
}

void func_494(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0xB1FDEE75A71D93F5())
	{
		while (bVar0)
		{
			bVar0 = unk_0xB1FDEE75A71D93F5();
			if (unk_0x67FB99B1361E144E())
			{
				unk_0x6D84AAC1F334DEE9(0);
			}
			if (unk_0xAA28218C604F91A5())
			{
				unk_0x18159512D699D089();
			}
			if (unk_0xB1FDEE75A71D93F5() && !unk_0x67FB99B1361E144E())
			{
				bVar0 = false;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (bParam0)
		{
			func_436(iParam1, iParam2, 1, 1);
		}
	}
}

void func_495(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_536())
	{
		unk_0xF160EBCA8FFA0E2A(0);
		unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 2);
		unk_0x42B9806B3EED4C70(1);
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), false, 0);
		}
		Global_91274 = { Param0 };
		Global_91277 = fParam3;
		Global_91273 = 1;
		if (iParam4 == 1)
		{
			unk_0x26545538B51562AD(&(Global_91278.f_20), 14);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x26545538B51562AD(&(Global_91278.f_20), 24);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 24);
		}
		func_31(1);
	}
}

void func_496()
{
	func_495(277.413f, 2856.941f, 42.6421f, 300.9114f, 1, 0);
	func_498(0, 0);
	func_528();
	func_432();
	func_430();
	func_429();
	func_493();
	func_416();
	func_413();
	func_492();
	func_419();
	func_418();
	func_416();
	func_413();
	iLocal_843 = 0;
	func_490(Local_96.f_35[0], -1, 1);
	if (func_5(uLocal_157[iLocal_574]))
	{
		if (!unk_0x7E16166EB69398DB(uLocal_157[iLocal_574]))
		{
			unk_0x5809312A3DC0ED0D(uLocal_157[iLocal_574], 101, "Min2DB1", 1);
			unk_0xDE09FFB26E05B1EC(uLocal_157[iLocal_574], 400f);
			unk_0x9301AAD27B1B527B(uLocal_157[iLocal_574], 1.1f);
		}
	}
	if (func_5(iLocal_162))
	{
		if (!unk_0x7E16166EB69398DB(iLocal_162))
		{
			unk_0x5809312A3DC0ED0D(iLocal_162, 102, "Min2DB2", 1);
			unk_0xDE09FFB26E05B1EC(iLocal_162, 500f);
			unk_0x9301AAD27B1B527B(iLocal_162, 1.1f);
		}
	}
	if (func_5(Local_96.f_35[0]))
	{
		unk_0x4EEE9D9427E70F4E(Local_96.f_35[0], 277.413f, 2856.941f, 42.6421f, 1, 0, 0, 1);
		unk_0xFBDCF3D5834B58D8(Local_96.f_35[0], 300.9114f);
		unk_0x5809312A3DC0ED0D(Local_96.f_35[0], 269, "Min2Rolling", 1);
		unk_0x9301AAD27B1B527B(Local_96.f_35[0], 1f);
		iLocal_596 = unk_0xA0F74982C6AAA9D4();
	}
	iLocal_927 = 6;
	func_265(&uLocal_408, 3, uLocal_166[0], "MANUEL", 0, 1);
	if (!unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_stungun"), 0))
	{
		unk_0xAC9A80BE63D6295F(unk_0x27D769C59BC9D030(), joaat("weapon_stungun"), 1, 1, 1);
	}
	unk_0x4EDE34FBADD967A6(800);
	unk_0x0B28AEB595CB09AF(0f);
	unk_0x4523FDDB9926E1D8(0f, 1065353216);
	unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), true, 0);
	if (unk_0x3934E959DB2478D3())
	{
		if (!unk_0xF1384D7CDC020749())
		{
			func_445(800, 0);
		}
	}
	unk_0x68BD4F826EFDDC53("MM2_RESTART1");
	iLocal_862 = 1;
	func_497(1, 1, 1);
}

void func_497(int iParam0, int iParam1, int iParam2)
{
	func_436(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0x4523FDDB9926E1D8(0f, 1065353216);
		unk_0x0B28AEB595CB09AF(0f);
	}
	if (iParam1 == 1)
	{
		func_445(500, 0);
	}
}

void func_498(int iParam0, bool bParam1)
{
	if (unk_0xCBB243DDC0D132D1())
	{
		if (!unk_0xA07829C3F763B9B6())
		{
			unk_0x4E63F662FDE672C3(iParam0);
			if (bParam1)
			{
				while (!unk_0x3934E959DB2478D3())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
}

void func_499()
{
	func_495(13.7719f, 3617.92f, 39.2074f, 242.9842f, 1, 0);
	func_498(0, 0);
	func_528();
	func_432();
	func_430();
	func_429();
	func_493();
	func_416();
	func_413();
	func_492();
	func_419();
	func_418();
	func_490(Local_96.f_35[0], -1, 1);
	iLocal_843 = 0;
	if (func_5(Local_96.f_35[0]))
	{
		unk_0x4EEE9D9427E70F4E(Local_96.f_35[0], 13.7719f, 3617.92f, 39.2074f, 1, 0, 0, 1);
		unk_0xFBDCF3D5834B58D8(Local_96.f_35[0], 242.9842f);
	}
	iLocal_927 = 6;
	func_265(&uLocal_408, 3, uLocal_166[0], "MANUEL", 0, 1);
	iLocal_580 = 2;
	if (!unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_stungun"), 0))
	{
		unk_0xAC9A80BE63D6295F(unk_0x27D769C59BC9D030(), joaat("weapon_stungun"), 1, 1, 1);
	}
	unk_0x4EDE34FBADD967A6(500);
	unk_0x0B28AEB595CB09AF(0f);
	unk_0x4523FDDB9926E1D8(0f, 1065353216);
	unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), true, 0);
	if (unk_0x3934E959DB2478D3())
	{
		if (!unk_0xF1384D7CDC020749())
		{
			func_445(800, 0);
		}
	}
	func_497(1, 1, 1);
}

void func_500()
{
	func_495(20.8f, 4532.65f, 104.66f, 284.7f, 1, 0);
	func_498(0, 0);
	func_528();
	func_432();
	func_430();
	func_429();
	iLocal_927 = 2;
	func_490(Local_96.f_35[0], -1, 1);
	unk_0x0B28AEB595CB09AF(0f);
	unk_0x4523FDDB9926E1D8(0f, 1065353216);
	unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), true, 0);
	if (unk_0x3934E959DB2478D3())
	{
		if (!unk_0xF1384D7CDC020749())
		{
			func_445(800, 0);
		}
	}
	if (iLocal_912 == 0)
	{
		func_236("MIN2_01", 7000, 0);
		iLocal_912 = 1;
	}
	iLocal_604 = unk_0xA0F74982C6AAA9D4();
	func_497(1, 1, 1);
}

int func_501(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_168(iParam1))
	{
		iVar0 = func_562(iParam1);
		unk_0x97C59C4E8349D15F(iVar0);
		if (unk_0x875098323FCA8FE6(iVar0))
		{
			if (unk_0xD2CFFE76B625AE55(*uParam0))
			{
				unk_0xF6ADC11BDB5ECA41(uParam0);
			}
			*iParam0 = unk_0x91D233CD0204A37F(26, iVar0, Param2, fParam5, 0, 0);
			unk_0x1F0017B996C78B72(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x8E6EAC2226EC1711(*iParam0, 3) == 0)
				{
					unk_0x5D927D8655264D6C(*iParam0, 5, 2, 0, 0);
				}
			}
			func_415(*iParam0, iParam1);
			if (bParam6)
			{
				unk_0x0049DE0B34213B12(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

void func_502()
{
	if (func_511(uLocal_166[0]))
	{
		if (!unk_0x9A4E2270C2271219(uLocal_166[0], 0))
		{
			if (unk_0x810AFFABCBF31E2D(uLocal_166[0], -1794415470) == 1)
			{
				unk_0xC908FA7A5EBB2825(uLocal_166[0], 129, 1);
			}
		}
	}
	if (func_511(uLocal_166[1]))
	{
		if (!unk_0x9A4E2270C2271219(uLocal_166[1], 0))
		{
			if (unk_0x810AFFABCBF31E2D(uLocal_166[1], -1794415470) == 1)
			{
				unk_0xC908FA7A5EBB2825(uLocal_166[1], 129, 1);
			}
		}
	}
	if (func_511(iLocal_171))
	{
		if (!unk_0x9A4E2270C2271219(iLocal_171, 0))
		{
			if (unk_0x810AFFABCBF31E2D(iLocal_171, -1794415470) == 1)
			{
				unk_0xC908FA7A5EBB2825(iLocal_171, 129, 1);
			}
		}
	}
}

void func_503()
{
	int iVar0;
	
	if (unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_stungun"), 0))
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			if (!iLocal_874)
			{
				unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar0, 1);
				if (iVar0 != joaat("weapon_stungun"))
				{
					unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), joaat("weapon_stungun"), 1);
				}
				iLocal_874 = 1;
			}
		}
		else
		{
			iLocal_874 = 0;
		}
	}
}

void func_504()
{
	struct<6> Var0;
	
	Var0 = { func_274() };
	if (unk_0xC1C5B83BB6719C6C(&Var0, "MIN2_IMM1_3") && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
	{
		unk_0x83D5F5F7A5D5B8E0(Local_96.f_35[0]);
		if (!unk_0xD2CFFE76B625AE55(uLocal_406))
		{
			iLocal_406 = unk_0x8FC46BABCF818990(joaat("prop_passport_01"), unk_0xD7C4E2CB0B216852(Local_96.f_35[0], 0f, 0f, 20f), 1, 1, 0);
		}
		iLocal_871 = iLocal_871;
		if (!unk_0xC2AE0A979757C34A(uLocal_401))
		{
			uLocal_401 = unk_0x239E9E07DB537DC9(0f, 0f, 0f, 0f, 0f, 0f, 2);
			unk_0xEFED6B9FF91F059D(uLocal_401, 1);
			unk_0x76743E423ACEE0E6(iLocal_406);
			unk_0x76743E423ACEE0E6(Local_96.f_28[1]);
			unk_0x76743E423ACEE0E6(uLocal_166[0]);
			unk_0x21092DBB624E6BC2(uLocal_401, Local_96.f_35[0], unk_0x1060AD708DD56BC7(Local_96.f_35[0], "seat_pside_l"));
			unk_0x4DCC07E3B4ADC9CD(iLocal_406, uLocal_401, "passport_prop", "missminuteman_2ig_3", 1000f, -4f, 0, 1148846080);
			unk_0x98E2FD5DA7CF97D3(Local_96.f_28[1], uLocal_401, "missminuteman_2ig_3", "passport_josef", 2f, -2f, 4, 83, 1148846080, 0);
			unk_0x98E2FD5DA7CF97D3(uLocal_166[0], uLocal_401, "missminuteman_2ig_3", "passport_manuel", 1f, -4f, 4, 83, 1148846080, 0);
			unk_0x8A3D3E40973625F0(Local_96.f_28[1], 0, 0);
		}
		iLocal_870 = 1;
	}
	if (unk_0xC2AE0A979757C34A(uLocal_399) && unk_0xB3BBF60126795AAD(uLocal_399) == 1f)
	{
		unk_0x76743E423ACEE0E6(uLocal_166[0]);
		uLocal_403 = unk_0x239E9E07DB537DC9(unk_0x7CECDDECF10DF2AA(Local_96.f_35[0], unk_0xA8CFDE65C45F813B(uLocal_166[0], 1)), 0f, 0f, 270f, 2);
		unk_0xEFED6B9FF91F059D(uLocal_403, 0);
		unk_0x83F6408A7221E25B(uLocal_403, 1);
		unk_0x76743E423ACEE0E6(uLocal_166[0]);
		unk_0x21092DBB624E6BC2(uLocal_403, Local_96.f_35[0], -1);
		unk_0x94DC76C688E7D222(uLocal_166[0], 1);
		unk_0x98E2FD5DA7CF97D3(uLocal_166[0], uLocal_403, "missminuteman_2ig_1", "trunk_manuel", 4f, -4f, 4, 83, 1148846080, 0);
	}
	if (unk_0xC2AE0A979757C34A(uLocal_398))
	{
		if (unk_0xB3BBF60126795AAD(uLocal_398) == 1f)
		{
			unk_0x76743E423ACEE0E6(uLocal_166[0]);
			uLocal_402 = unk_0x239E9E07DB537DC9(unk_0x7CECDDECF10DF2AA(Local_96.f_35[0], unk_0xA8CFDE65C45F813B(uLocal_166[0], 1)), 0f, 0f, 270f, 2);
			unk_0xEFED6B9FF91F059D(uLocal_402, 0);
			unk_0x83F6408A7221E25B(uLocal_402, 1);
			unk_0x113D3B13A8AE40CF(uLocal_402, 1.6f);
			unk_0x21092DBB624E6BC2(uLocal_402, Local_96.f_35[0], -1);
			unk_0x98E2FD5DA7CF97D3(uLocal_166[0], uLocal_402, "missminuteman_2ig_1", "trunk_manuel", 1000f, -4f, 4, 83, 1148846080, 0);
		}
	}
	else if (iLocal_870 == 1)
	{
		if (unk_0xC2AE0A979757C34A(uLocal_401))
		{
			if (unk_0xD2CFFE76B625AE55(iLocal_406))
			{
				if (iLocal_872 == 0)
				{
					if (unk_0xB3BBF60126795AAD(uLocal_401) >= 0.544f)
					{
						unk_0x2A5264C35FD91CE4(-1, "PASSPORT", iLocal_406, "MINUTE_02_SOUNDSET", 0, 0);
						iLocal_872 = 1;
					}
				}
			}
			if (unk_0xB3BBF60126795AAD(uLocal_401) >= 0.562f)
			{
				if (unk_0xD2CFFE76B625AE55(iLocal_406))
				{
					unk_0xF02BC5112BB376BE(iLocal_406, 0.125f, 1);
					unk_0xE7CD799CF8963ACB(iLocal_406);
				}
			}
		}
		if (!iLocal_875)
		{
			if (!unk_0xC2AE0A979757C34A(uLocal_401) || unk_0xB3BBF60126795AAD(uLocal_401) == 1f)
			{
				unk_0x76743E423ACEE0E6(uLocal_166[0]);
				uLocal_399 = unk_0x239E9E07DB537DC9(0f, 0f, 0f, 0f, 0f, 0f, 2);
				unk_0xEFED6B9FF91F059D(uLocal_399, 1);
				unk_0x21092DBB624E6BC2(uLocal_399, Local_96.f_35[0], unk_0x1060AD708DD56BC7(Local_96.f_35[0], "seat_pside_r"));
				unk_0x98E2FD5DA7CF97D3(uLocal_166[0], uLocal_399, "missminuteman_2ig_1", "entertrunk_manuel", 4f, -4f, 4, 83, 1148846080, 0);
				unk_0x221689C0DCB71BAA(uLocal_399, 1f);
				unk_0xA8ED9F72DC442242(uLocal_166[0], 1);
				unk_0x8A3D3E40973625F0(Local_96.f_28[1], 0, 0);
				unk_0xBD875C7680C64C56(Local_96.f_28[1], Local_96.f_35[0], 1);
				unk_0x878D12AEFBF5BAF0(Local_96.f_28[1], "missminuteman_2ig_3", "passport_josef", 4f, -2f, -1, 0, 0.99f, 0, 0, 0);
				iLocal_875 = 1;
			}
		}
	}
	if (iLocal_887 && !iLocal_888)
	{
		if (iLocal_614 == 1)
		{
			if (func_6(Local_96.f_35[0]))
			{
				if (!unk_0xDD5B7E23D882DABD(Local_96.f_28[1], Local_96.f_35[0]))
				{
					unk_0x76743E423ACEE0E6(uLocal_166[iLocal_574]);
					unk_0x8A3D3E40973625F0(uLocal_166[iLocal_574], 0, 0);
					uLocal_400 = unk_0x239E9E07DB537DC9(0f, 0f, 0f, 0f, 0f, 0f, 2);
					unk_0xEFED6B9FF91F059D(uLocal_400, 1);
					unk_0x21092DBB624E6BC2(uLocal_400, Local_96.f_35[0], unk_0x1060AD708DD56BC7(Local_96.f_35[0], "seat_pside_r"));
					unk_0x98E2FD5DA7CF97D3(uLocal_166[iLocal_574], uLocal_400, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1148846080, 0);
					unk_0x113D3B13A8AE40CF(uLocal_400, 1.4f);
					iLocal_888 = 1;
				}
			}
		}
		if (iLocal_614 == 2)
		{
			if (func_6(Local_96.f_35[0]))
			{
				if (!unk_0xDD5B7E23D882DABD(Local_96.f_28[1], Local_96.f_35[0]))
				{
					unk_0x76743E423ACEE0E6(iLocal_171);
					unk_0x8A3D3E40973625F0(iLocal_171, 0, 0);
					uLocal_400 = unk_0x239E9E07DB537DC9(0f, 0f, 0f, 0f, 0f, 0f, 2);
					unk_0x21092DBB624E6BC2(uLocal_400, Local_96.f_35[0], unk_0x1060AD708DD56BC7(Local_96.f_35[0], "seat_pside_r"));
					unk_0x98E2FD5DA7CF97D3(iLocal_171, uLocal_400, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1148846080, 0);
					unk_0x113D3B13A8AE40CF(uLocal_400, 1.4f);
					iLocal_888 = 1;
				}
			}
		}
	}
	if (unk_0xC2AE0A979757C34A(uLocal_400))
	{
		if (unk_0xB3BBF60126795AAD(uLocal_400) == 1f)
		{
			if (iLocal_614 == 1)
			{
				unk_0x76743E423ACEE0E6(uLocal_166[1]);
				uLocal_404 = unk_0x239E9E07DB537DC9(unk_0x7CECDDECF10DF2AA(Local_96.f_35[0], unk_0xA8CFDE65C45F813B(uLocal_166[1], 1)), 0f, 0f, 90f, 2);
				unk_0xEFED6B9FF91F059D(uLocal_404, 0);
				unk_0x83F6408A7221E25B(uLocal_404, 1);
				unk_0x113D3B13A8AE40CF(uLocal_404, 1.6f);
				unk_0x21092DBB624E6BC2(uLocal_404, Local_96.f_35[0], -1);
				unk_0x94DC76C688E7D222(uLocal_166[1], 1);
				unk_0x98E2FD5DA7CF97D3(uLocal_166[1], uLocal_404, "missminuteman_2ig_1", "trunk_josef", 1000f, -4f, 4, 83, 1148846080, 0);
			}
			else if (iLocal_614 == 2)
			{
				unk_0x76743E423ACEE0E6(iLocal_171);
				uLocal_404 = unk_0x239E9E07DB537DC9(unk_0x7CECDDECF10DF2AA(Local_96.f_35[0], unk_0xA8CFDE65C45F813B(iLocal_171, 1)), 0f, 0f, 90f, 2);
				unk_0xEFED6B9FF91F059D(uLocal_404, 0);
				unk_0x83F6408A7221E25B(uLocal_404, 1);
				unk_0x113D3B13A8AE40CF(uLocal_404, 1.6f);
				unk_0x21092DBB624E6BC2(uLocal_404, Local_96.f_35[0], -1);
				unk_0x94DC76C688E7D222(iLocal_171, 1);
				unk_0x98E2FD5DA7CF97D3(iLocal_171, uLocal_404, "missminuteman_2ig_1", "trunk_josef", 1000f, -4f, 4, 83, 1148846080, 0);
			}
		}
	}
}

void func_505(int iParam0)
{
	if (unk_0x7B4654D62B7E0E9E(*iParam0))
	{
		unk_0xAB27F3DE6390C749(*iParam0, 0);
		unk_0x9403D0F4C7711241(iParam0);
	}
}

void func_506()
{
	if ((iLocal_927 != 15 && iLocal_927 != 17) && iLocal_927 != 16)
	{
		if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
		{
			func_505(&iLocal_194);
		}
		else if (!unk_0x7B4654D62B7E0E9E(iLocal_194))
		{
			iLocal_194 = func_234(Local_96.f_35[0], 1, 5);
		}
		if (unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
		{
			func_505(&iLocal_195);
		}
		else if (!unk_0x7B4654D62B7E0E9E(iLocal_195))
		{
			iLocal_195 = func_411(Local_96.f_28[0], 1, 1, 5);
			unk_0xC5B4E9487339A2BB(iLocal_195, 0.7f);
			unk_0x1FDCAFA848ABB8FA(iLocal_195, 3);
		}
		if (unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
		{
			func_505(&iLocal_196);
		}
		else if (!unk_0x7B4654D62B7E0E9E(iLocal_196))
		{
			iLocal_196 = func_411(Local_96.f_28[1], 1, 1, 5);
			unk_0xC5B4E9487339A2BB(iLocal_196, 0.7f);
			unk_0x1FDCAFA848ABB8FA(iLocal_196, 3);
		}
	}
	if (((iLocal_927 == 1 || iLocal_927 == 2) || iLocal_927 == 6) || iLocal_927 == 11)
	{
		iLocal_844 = 0;
		func_505(&(iLocal_184[0]));
		func_505(&(iLocal_184[1]));
		func_505(&(iLocal_184[2]));
		if (unk_0xD2CFFE76B625AE55(uLocal_166[0]))
		{
			if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
			{
				iLocal_902 = 0;
				if (func_508())
				{
					iLocal_900 = 0;
					iLocal_901 = 0;
					if (iLocal_833 == 0)
					{
						iLocal_833 = 1;
					}
					if (!unk_0x7B4654D62B7E0E9E(uLocal_189[iLocal_574]))
					{
						if (iLocal_574 == 0)
						{
							if (iLocal_904 == 0)
							{
								iLocal_904 = 1;
							}
						}
						if (iLocal_574 == 1)
						{
							if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) == 0)
							{
								if (iLocal_905 == 0)
								{
									if (iLocal_862 == 0)
									{
										func_236("MIN2_06", 7000, 0);
										iLocal_905 = 1;
									}
								}
							}
						}
						if (iLocal_574 == 2)
						{
							if (iLocal_906 == 0)
							{
								func_236("MIN2_08", 7000, 0);
								iLocal_906 = 1;
							}
						}
						if (iLocal_574 == 0)
						{
						}
						else if (iLocal_574 == 1)
						{
							uLocal_189[iLocal_574] = func_507(267.2497f, 2852.167f, 42.6129f, 5, 1);
						}
						else
						{
							Local_630[iLocal_574 /*3*/] = { unk_0xA8CFDE65C45F813B(uLocal_166[iLocal_574], 1) };
							uLocal_189[iLocal_574] = func_507(Local_630[iLocal_574 /*3*/], 5, 1);
						}
						iLocal_578 = unk_0xA0F74982C6AAA9D4();
					}
				}
				else
				{
					func_505(&(uLocal_189[iLocal_574]));
					if (unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
					{
						iLocal_901 = 0;
					}
					else if (!iLocal_901)
					{
						if (!unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 1))
						{
							if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 0)
							{
								unk_0x835BBE043A81D6DD(Local_96.f_28[0], Local_96.f_35[0], 60000, 0, 1073741824, 1, 0);
							}
						}
						iLocal_901 = 1;
						if (unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
						{
							if (iLocal_907 == 0)
							{
								func_236("MIN2_33", 7000, 0);
								iLocal_907 = 1;
							}
						}
						else if (iLocal_908 == 0)
						{
							func_236("MIN2_29", 7000, 0);
							iLocal_908 = 1;
						}
					}
					if (unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
					{
						iLocal_900 = 0;
					}
					else if (!iLocal_900)
					{
						if (func_310())
						{
							if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 0)
							{
								if (func_276(Local_96.f_28[1], Local_96.f_35[0], 10f, 1))
								{
									unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 1f, 1, 0);
								}
								else
								{
									unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 2f, 1, 0);
								}
							}
						}
						else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 713668775) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 713668775) != 0)
						{
							unk_0xE4A57337AE998385(Local_96.f_28[1], unk_0xD7C4E2CB0B216852(Local_96.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (unk_0x4D6B971C8AEE130C(Local_96.f_35[0]) - 90f));
						}
						iLocal_900 = 1;
						if (unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
						{
							if (iLocal_909 == 0)
							{
								func_236("MIN2_32", 7000, 0);
								iLocal_909 = 1;
							}
						}
						else if (iLocal_908 == 0)
						{
							func_236("MIN2_29", 7000, 0);
							iLocal_908 = 1;
						}
					}
				}
			}
			else
			{
				iLocal_900 = 0;
				iLocal_901 = 0;
				func_505(&(uLocal_189[iLocal_574]));
				if (!iLocal_902)
				{
					if (iLocal_910 == 0)
					{
						func_236("MIN2_19", 7000, 0);
						iLocal_910 = 1;
					}
					iLocal_902 = 1;
					iLocal_594 = unk_0xA0F74982C6AAA9D4();
				}
			}
		}
	}
	if (iLocal_927 == 15)
	{
		iLocal_844 = 0;
		func_505(&(iLocal_184[2]));
		func_505(&(iLocal_184[1]));
		func_505(&iLocal_197);
		if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
		{
			func_505(&iLocal_194);
			iLocal_902 = 0;
			if (unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
			{
				func_505(&iLocal_195);
				func_505(&iLocal_196);
				iLocal_900 = 0;
				iLocal_901 = 0;
				if (!unk_0x7B4654D62B7E0E9E(uLocal_189[iLocal_574]))
				{
					iLocal_832 = 1;
					iLocal_578 = unk_0xA0F74982C6AAA9D4();
				}
			}
			else
			{
				func_505(&(uLocal_189[iLocal_574]));
				if (unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
				{
					func_505(&iLocal_195);
					iLocal_901 = 0;
				}
				else if (!unk_0x7B4654D62B7E0E9E(iLocal_195) && !iLocal_901)
				{
					if (unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[0], -1794415470) != 0)
					{
						unk_0x835BBE043A81D6DD(Local_96.f_28[0], Local_96.f_35[0], 60000, 0, 1073741824, 1, 0);
					}
					iLocal_195 = func_411(Local_96.f_28[0], 1, 1, 5);
					unk_0xC5B4E9487339A2BB(iLocal_195, 0.7f);
					iLocal_901 = 1;
					if (unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
					{
						if (iLocal_907 == 0)
						{
							func_236("MIN2_33", 7000, 0);
							iLocal_907 = 1;
						}
					}
					else if (iLocal_908 == 0)
					{
						func_236("MIN2_29", 7000, 0);
						iLocal_908 = 1;
					}
				}
				if (unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
				{
					func_505(&iLocal_196);
					iLocal_900 = 0;
				}
				else if (!unk_0x7B4654D62B7E0E9E(iLocal_196) && !iLocal_900)
				{
					if (func_310())
					{
						if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], -1794415470) != 0)
						{
							if (func_276(Local_96.f_28[1], Local_96.f_35[0], 10f, 1))
							{
								unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 1f, 1, 0);
							}
							else
							{
								unk_0x835BBE043A81D6DD(Local_96.f_28[1], Local_96.f_35[0], 60000, 1, 2f, 1, 0);
							}
						}
					}
					else if (unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 713668775) != 1 && unk_0x810AFFABCBF31E2D(Local_96.f_28[1], 713668775) != 0)
					{
						unk_0xE4A57337AE998385(Local_96.f_28[1], unk_0xD7C4E2CB0B216852(Local_96.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (unk_0x4D6B971C8AEE130C(Local_96.f_35[0]) - 90f));
					}
					iLocal_196 = func_411(Local_96.f_28[1], 1, 1, 5);
					unk_0xC5B4E9487339A2BB(iLocal_196, 0.7f);
					iLocal_900 = 1;
					if (unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
					{
						if (iLocal_909 == 0)
						{
							func_236("MIN2_32", 7000, 0);
							iLocal_909 = 1;
						}
					}
					else if (iLocal_908 == 0)
					{
						func_236("MIN2_29", 7000, 0);
						iLocal_908 = 1;
					}
				}
			}
		}
		else
		{
			iLocal_900 = 0;
			iLocal_901 = 0;
			func_505(&iLocal_195);
			func_505(&iLocal_196);
			func_505(&(uLocal_189[iLocal_574]));
		}
	}
	if ((iLocal_927 == 3 || iLocal_927 == 8) || iLocal_927 == 12)
	{
		iLocal_900 = 0;
		iLocal_901 = 0;
		if (iLocal_574 == 0)
		{
			if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
			{
				iLocal_902 = 0;
			}
			else if ((unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0)) && iLocal_825 == 0)
			{
				func_505(&(iLocal_184[iLocal_574]));
				func_505(&iLocal_197);
				func_505(&(uLocal_189[iLocal_574]));
				if (!iLocal_902)
				{
					if (iLocal_910 == 0)
					{
						func_236("MIN2_19", 7000, 0);
						iLocal_910 = 1;
					}
					iLocal_902 = 1;
					iLocal_594 = unk_0xA0F74982C6AAA9D4();
					iLocal_844 = 1;
				}
			}
			iLocal_577 = unk_0xA0F74982C6AAA9D4();
			if (iLocal_577 > iLocal_576)
			{
				func_505(&(uLocal_189[iLocal_574]));
				if (func_5(Local_96.f_35[0]))
				{
					if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
					{
						if (!unk_0x7B4654D62B7E0E9E(iLocal_184[iLocal_574]))
						{
							iLocal_184[iLocal_574] = func_411(uLocal_166[iLocal_574], 1, 0, 5);
							if (iLocal_912 == 0)
							{
								func_236("MIN2_01", 7000, 0);
								iLocal_912 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
			{
				iLocal_902 = 0;
			}
			else if (((unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0)) && iLocal_825 == 0) && iLocal_837 == 0)
			{
				func_505(&(iLocal_184[iLocal_574]));
				func_505(&iLocal_197);
				func_505(&(uLocal_189[iLocal_574]));
				if (!iLocal_902)
				{
					if (iLocal_910 == 0)
					{
						func_236("MIN2_19", 7000, 0);
						iLocal_910 = 1;
					}
					iLocal_902 = 1;
					iLocal_594 = unk_0xA0F74982C6AAA9D4();
					iLocal_844 = 1;
				}
			}
			if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
			{
				iLocal_902 = 0;
			}
			else if ((unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0)) && func_269(unk_0x27D769C59BC9D030(), Local_96.f_28[1]) > 90f)
			{
				func_505(&(iLocal_184[iLocal_574]));
				func_505(&iLocal_197);
				if (!iLocal_902)
				{
					if (iLocal_911 == 0)
					{
						iLocal_911 = 1;
					}
					iLocal_902 = 1;
					iLocal_594 = unk_0xA0F74982C6AAA9D4();
					unk_0xD1B211F2EB392B46(iLocal_194, 1);
					iLocal_844 = 1;
				}
			}
			iLocal_577 = unk_0xA0F74982C6AAA9D4();
			if (iLocal_577 > iLocal_576)
			{
				func_505(&(uLocal_189[iLocal_574]));
				if (iLocal_823 == 0)
				{
					if (func_5(Local_96.f_35[0]))
					{
						if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
						{
							if (!unk_0x7B4654D62B7E0E9E(iLocal_184[iLocal_574]))
							{
								iLocal_184[iLocal_574] = func_411(uLocal_166[iLocal_574], 1, 0, 5);
								if (!unk_0x9A4E2270C2271219(uLocal_166[iLocal_574], 0))
								{
									unk_0xC5B4E9487339A2BB(iLocal_184[iLocal_574], 0.7f);
								}
								else
								{
									unk_0xC5B4E9487339A2BB(iLocal_184[iLocal_574], 1f);
								}
								if (iLocal_913 == 0)
								{
									iLocal_913 = 1;
									if (iLocal_574 == 0)
									{
										func_219(&uLocal_408, "MIN2AU", "MIN2_JOSEF_4", 6, 0, 0, 0);
									}
									else if (iLocal_574 == 1)
									{
										func_265(&uLocal_408, 4, iLocal_171, "IMMIGRANTMALE", 0, 1);
										func_219(&uLocal_408, "MIN2AU", "MIN2_SURR_15", 6, 1, 0, 0);
									}
									else if (iLocal_574 == 2)
									{
									}
								}
								if (iLocal_856 == 1)
								{
									if (iLocal_857 == 0)
									{
										func_236("MIN2_31", 7000, 0);
										iLocal_857 = 1;
									}
								}
							}
						}
						else if (!unk_0x7B4654D62B7E0E9E(iLocal_184[iLocal_574]))
						{
							if (iLocal_856 == 0)
							{
								if (iLocal_844 == 0)
								{
									if (iLocal_914 == 0)
									{
										func_236("MIN2_39", 7000, 0);
										iLocal_914 = 1;
									}
									iLocal_844 = 1;
								}
							}
						}
					}
				}
				else
				{
					func_505(&(iLocal_184[iLocal_574]));
				}
				if (iLocal_574 == 1)
				{
					if (iLocal_835 == 0)
					{
						if (func_5(Local_96.f_35[0]))
						{
							if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
							{
								if (!unk_0x7B4654D62B7E0E9E(iLocal_197))
								{
									iLocal_197 = func_411(iLocal_171, 1, 0, 5);
									if (!unk_0x9A4E2270C2271219(iLocal_171, 0))
									{
										unk_0xC5B4E9487339A2BB(iLocal_197, 0.7f);
									}
									else
									{
										unk_0xC5B4E9487339A2BB(iLocal_197, 1f);
									}
									if (iLocal_856 == 1)
									{
										if (iLocal_857 == 0)
										{
											func_236("MIN2_31", 7000, 0);
											iLocal_857 = 1;
										}
									}
								}
							}
						}
					}
					else
					{
						func_505(&iLocal_197);
					}
				}
			}
		}
	}
}

int func_507(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x43B8950858CAD66F(Param0);
	unk_0x1FDCAFA848ABB8FA(iVar0, iParam3);
	unk_0xC5B4E9487339A2BB(iVar0, 1f);
	unk_0xAB27F3DE6390C749(iVar0, iParam4);
	return iVar0;
}

int func_508()
{
	if (unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0) && unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0))
	{
		return 1;
	}
	if (unk_0xC2AE0A979757C34A(uLocal_401))
	{
		return 1;
	}
	return 0;
}

int func_509()
{
	if (iLocal_927 == 3 || iLocal_927 == 5)
	{
		if (!func_276(unk_0x27D769C59BC9D030(), Local_96.f_28[0], 150f, 1) && !func_276(unk_0x27D769C59BC9D030(), Local_96.f_28[1], 150f, 1))
		{
			if (iLocal_917 == 0)
			{
				func_236("MIN2_49", 7500, 0);
				iLocal_917 = 1;
			}
			return 1;
		}
	}
	return 0;
}

void func_510()
{
	if (!func_511(Local_96.f_28[0]) && !func_511(Local_96.f_28[1]))
	{
		sLocal_923 = "MIN2_45";
		iLocal_927 = 16;
		return;
	}
	if (!func_511(Local_96.f_28[1]))
	{
		sLocal_923 = "MIN2_16";
		iLocal_927 = 16;
		return;
	}
	else
	{
		unk_0xF016C821DF3F713B(Local_96.f_28[1]);
	}
	if (!func_511(Local_96.f_28[0]))
	{
		sLocal_923 = "MIN2_25";
		iLocal_927 = 16;
		return;
	}
	else
	{
		unk_0xF016C821DF3F713B(Local_96.f_28[0]);
	}
	if (unk_0xD2CFFE76B625AE55(uLocal_166[0]))
	{
		if (!func_511(uLocal_166[0]))
		{
			sLocal_923 = "MIN2_44";
			iLocal_927 = 16;
			return;
		}
		else
		{
			unk_0xF016C821DF3F713B(uLocal_166[0]);
			if (!unk_0xBF99E4112970270F(uLocal_166[0]) && !unk_0x9A4E2270C2271219(uLocal_166[0], 0))
			{
				unk_0x0062D9D41655E62A(0f);
			}
		}
	}
	if (unk_0xD2CFFE76B625AE55(uLocal_166[1]))
	{
		if (!func_511(uLocal_166[1]))
		{
			sLocal_923 = "MIN2_15";
			iLocal_927 = 16;
			return;
		}
		else
		{
			unk_0xF016C821DF3F713B(uLocal_166[1]);
			if (!unk_0xBF99E4112970270F(uLocal_166[1]) && !unk_0x9A4E2270C2271219(uLocal_166[1], 0))
			{
				unk_0x0062D9D41655E62A(0f);
			}
		}
	}
	if (unk_0xD2CFFE76B625AE55(iLocal_171))
	{
		if (!func_511(iLocal_171))
		{
			sLocal_923 = "MIN2_15";
			iLocal_927 = 16;
			return;
		}
		else
		{
			unk_0xF016C821DF3F713B(iLocal_171);
			if (!unk_0xBF99E4112970270F(iLocal_171) && !unk_0x9A4E2270C2271219(iLocal_171, 0))
			{
				unk_0x0062D9D41655E62A(0f);
			}
		}
	}
	if (func_269(unk_0x27D769C59BC9D030(), Local_96.f_28[0]) > 200f)
	{
		if (func_269(unk_0x27D769C59BC9D030(), Local_96.f_28[1]) > 200f)
		{
			sLocal_923 = "MIN2_36";
			iLocal_927 = 16;
			return;
		}
	}
	if ((iLocal_927 != 8 && iLocal_927 != 15) && iLocal_927 != 17)
	{
		if (func_269(unk_0x27D769C59BC9D030(), Local_96.f_28[1]) > 210f)
		{
			sLocal_923 = "MIN2_40";
			iLocal_927 = 16;
			return;
		}
		if (func_269(unk_0x27D769C59BC9D030(), Local_96.f_28[0]) > 210f)
		{
			sLocal_923 = "MIN2_41";
			iLocal_927 = 16;
			return;
		}
	}
	if (iLocal_927 == 8)
	{
		if (func_269(unk_0x27D769C59BC9D030(), Local_96.f_28[1]) > 250f && iLocal_608 == 0)
		{
			sLocal_923 = "MIN2_40";
			iLocal_927 = 16;
			return;
		}
		if (func_269(unk_0x27D769C59BC9D030(), Local_96.f_28[0]) > 250f && iLocal_609 == 0)
		{
			sLocal_923 = "MIN2_41";
			iLocal_927 = 16;
			return;
		}
	}
	if (!func_5(Local_96.f_35[0]))
	{
		sLocal_923 = "MIN2_17";
		iLocal_927 = 16;
		return;
	}
	else
	{
		if (unk_0xE06C11511DE39267(Local_96.f_35[0], 0, 12000))
		{
			sLocal_923 = "MIN2_17";
			iLocal_927 = 16;
			return;
		}
		if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
		{
			if ((unk_0xE06C11511DE39267(Local_96.f_35[0], 1, 20000) || unk_0xE06C11511DE39267(Local_96.f_35[0], 2, 30000)) || unk_0xE06C11511DE39267(Local_96.f_35[0], 3, 30000))
			{
				sLocal_923 = "MIN2_17";
				iLocal_927 = 16;
				return;
			}
		}
		if (!unk_0x0B4DDB992C7BCF57(Local_96.f_35[0], 0))
		{
			sLocal_923 = "MIN2_17";
			iLocal_927 = 16;
			return;
		}
		if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0))
		{
			if (iLocal_595 == 0)
			{
				if (unk_0x77F1B7F6C32990D6(Local_96.f_35[0], unk_0x27D769C59BC9D030(), 1))
				{
					if (!func_232())
					{
						if (func_237(&uLocal_408, "MIN2AU", "MIN2_SHCAR", "MIN2_SHCAR_1", 9, 0, 0))
						{
							unk_0x1393E54C663BBD20(Local_96.f_35[0]);
							iLocal_595 = 1;
						}
					}
				}
			}
			else if (iLocal_595 == 1)
			{
				if (!func_232())
				{
					unk_0x1393E54C663BBD20(Local_96.f_35[0]);
					iLocal_595 = 2;
				}
			}
			else if (iLocal_595 == 2)
			{
				if (!func_232())
				{
					if (unk_0x77F1B7F6C32990D6(Local_96.f_35[0], unk_0x27D769C59BC9D030(), 1))
					{
						if (func_237(&uLocal_408, "MIN2AU", "MIN2_SHCAR", "MIN2_SHCAR_2", 9, 0, 0))
						{
							unk_0x1393E54C663BBD20(Local_96.f_35[0]);
							iLocal_595 = 3;
						}
					}
				}
			}
			else if (iLocal_595 == 3)
			{
				if (!func_232())
				{
					unk_0x1393E54C663BBD20(Local_96.f_35[0]);
					iLocal_595 = 4;
				}
			}
			else if (iLocal_595 == 4)
			{
				if (!func_232())
				{
					if (unk_0x77F1B7F6C32990D6(Local_96.f_35[0], unk_0x27D769C59BC9D030(), 1))
					{
						unk_0x1393E54C663BBD20(Local_96.f_35[0]);
						iLocal_595 = 5;
					}
				}
			}
			else if (iLocal_595 == 5)
			{
			}
		}
		else
		{
			unk_0x1393E54C663BBD20(Local_96.f_35[0]);
		}
		if (func_511(Local_96.f_28[1]))
		{
			if (func_511(Local_96.f_28[0]))
			{
				if ((!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_96.f_35[0], 0) || !unk_0x1C48F76B3D032074(Local_96.f_28[1], Local_96.f_35[0], 0)) || !unk_0x1C48F76B3D032074(Local_96.f_28[0], Local_96.f_35[0], 0))
				{
					unk_0xB1E9C02E102DE8DA(Local_96.f_35[0], 1);
					if (func_5(uLocal_157[0]))
					{
						unk_0xB1E9C02E102DE8DA(uLocal_157[0], 1);
					}
					if (func_5(uLocal_157[1]))
					{
						unk_0xB1E9C02E102DE8DA(uLocal_157[1], 1);
					}
					if (func_5(iLocal_162))
					{
						unk_0xB1E9C02E102DE8DA(iLocal_162, 1);
					}
				}
			}
		}
	}
}

int func_511(int iParam0)
{
	if (func_6(iParam0))
	{
		if (!unk_0xE4F7206742848BAF(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_512(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_69743 != 6)
	{
		if (Global_69745 == -1)
		{
			if (func_523(1, Param0))
			{
				if (Global_69746 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_69745 = unk_0xA0F74982C6AAA9D4();
					Local_22 = { unk_0x706F97DFCDA9784F(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + unk_0xFF104D8C26C113A2());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_523(0, Param0))
			{
				Global_69745 = (unk_0xA0F74982C6AAA9D4() - 9000);
			}
			unk_0x28981D48C12CB95E(7);
			unk_0x28981D48C12CB95E(6);
			unk_0x28981D48C12CB95E(8);
			unk_0x28981D48C12CB95E(9);
			iVar1 = (unk_0xA0F74982C6AAA9D4() - Global_69745);
			if (iVar1 < 9000 && !unk_0x3934E959DB2478D3())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_69743)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				unk_0xCAC481F47E89A9DD(82, 66);
				unk_0x0D229AABC4054103(1);
				unk_0x402543D4DFEA2C21(2);
				iVar12 = func_226();
				if (Global_69746 == 1 && Global_69744 == 62)
				{
					iVar12 = Global_101154.f_1826.f_539.f_3550;
				}
				switch (iVar12)
				{
					case 0:
						unk_0x188B46661C05B1DA(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						unk_0x188B46661C05B1DA(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						unk_0x188B46661C05B1DA(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				unk_0x09FBFA08412B6B1C(iVar8, iVar9, iVar10, iVar2);
				unk_0x488CB743AC8003C3();
				Var4 = { func_514(Global_69744, Global_69746, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				unk_0xE20858AA8B5A607E(fVar6, fVar7, 0f, 0.01f);
				unk_0xFFA0132BAEE84558(0.67f, 0.67f);
				if (!unk_0xADE9BBB8055E9BBF() && !unk_0xA9AA004B07D79AB6())
				{
					fLocal_26 = 0.14f;
				}
				else
				{
					fLocal_26 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_513(&Var4) > fLocal_26)
					{
						if (unk_0x669A85DE4590FF03(15))
						{
							unk_0x353594586E54859C(15, Local_22.f_0, (Local_22.f_1 + fLocal_25));
							Global_69748 = 1;
						}
					}
				}
				unk_0x16073B7747C188AC(&Var4);
				unk_0x03BB339EA038BF3F(fVar6, fVar7, 0);
				unk_0xDAAA6512AF15CB42();
				if (Global_69747 == 1)
				{
					func_186();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_186();
				fLocal_21 = 0f;
			}
		}
	}
}

float func_513(var uParam0)
{
	unk_0xA56937B322E371D6(uParam0);
	return unk_0x96CEDAB660C8AD63(1);
}

struct<2> func_514(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_522(iParam0) };
			break;
		
		case 7:
			Var0 = { func_172(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_521(iParam2) };
					break;
				
				case 8:
					Var0 = { func_520(iParam2) };
					break;
				
				case 7:
					Var0 = { func_519(iParam2) };
					break;
				
				case 10:
					Var0 = { func_518(iParam2) };
					break;
				
				case 5:
					Var0 = { func_517(iParam2) };
					break;
				
				case 4:
					Var0 = { func_516(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_515(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_515(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_516(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x75CB9E30BA492FF0(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_517(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x75CB9E30BA492FF0(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_518(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x75CB9E30BA492FF0(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_519(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x75CB9E30BA492FF0(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_520(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x75CB9E30BA492FF0(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_521(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x75CB9E30BA492FF0(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_522(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_82399[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_101154.f_7775.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_523(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_525(0) || Global_69758) || Global_69747 == 1) || !unk_0xCBB243DDC0D132D1())
	{
		return 0;
	}
	switch (Global_69743)
	{
		case 0:
			if (unk_0xC1C5B83BB6719C6C(&uParam1, "NONE") || unk_0x75CB9E30BA492FF0(&uParam1))
			{
				Global_69743 = 3;
			}
			else
			{
				Global_69743 = 1;
			}
			break;
		
		case 1:
			if (unk_0xAA28218C604F91A5())
			{
				Global_69743 = 2;
			}
			break;
		
		case 2:
			if (unk_0x67FB99B1361E144E())
			{
				Global_69743 = 4;
				return 1;
			}
			else if (!unk_0xB1FDEE75A71D93F5())
			{
				Global_69743 = 3;
			}
			break;
		
		case 3:
			if (unk_0x67FB99B1361E144E())
			{
			}
			else
			{
				Global_69743 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x67FB99B1361E144E())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_69743 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x67FB99B1361E144E() || func_330(0)) || func_524(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_524(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_525(int iParam0)
{
	if (Global_35711 == 15)
	{
		return 0;
	}
	if (func_526(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_526(int iParam0)
{
	return func_527(iParam0, Global_35711);
}

int func_527(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_528()
{
	unk_0x696F8E0D51625508(Vector(43.747f, 4214.055f, -199.286f) - Vector(10f, 10f, 10f), Vector(43.747f, 4214.055f, -199.286f) + Vector(10f, 10f, 10f), 1, 1);
	unk_0x7C898812896A5304(joaat("sanchez"), 1);
	unk_0x7C898812896A5304(joaat("blazer"), 1);
	unk_0x7C898812896A5304(joaat("pranger"), 1);
	unk_0x97C59C4E8349D15F(joaat("pranger"));
	unk_0x97C59C4E8349D15F(joaat("prop_passport_01"));
	if (func_5(Local_96.f_35[0]))
	{
		iLocal_582 = unk_0x4C3235E6E203703D(Local_96.f_35[0]);
		fLocal_816 = unk_0x6749AD8E7CB79ADE(Local_96.f_35[0]);
		fLocal_817 = unk_0xB23CB7DBBE38B63C(Local_96.f_35[0]);
		unk_0x51F79AC13D2AD286(Local_96.f_35[0], iLocal_582 * 3);
		unk_0x3926A2D202D1C474(Local_96.f_35[0], (fLocal_816 * 3f));
		unk_0x38B4190AFCA07B12(Local_96.f_35[0], (fLocal_817 * 3f));
		unk_0xB537FCB837C7D735(Local_96.f_35[0], 0);
		unk_0x185480333425A565(Local_96.f_35[0], 0);
	}
	unk_0x88172B3983EC5071("rcmminute2");
	unk_0x88172B3983EC5071("rcmminute2lean");
	unk_0x88172B3983EC5071("missminuteman_2ig_1");
	unk_0x88172B3983EC5071("missminuteman_2ig_3");
	unk_0x8378AB3CED5FF44A("MIN2", 0);
	unk_0x8378AB3CED5FF44A("MIN2AU", 6);
	func_529(59);
	func_529(57);
	func_529(56);
	unk_0x97C59C4E8349D15F(joaat("blazer"));
	unk_0x41D6B0C62443EFBB(joaat("pranger"), 3);
	unk_0x945FF27138DBEABD("MOVE_M@BAIL_BOND_NOT_TAZERED");
	unk_0x945FF27138DBEABD("MOVE_M@BAIL_BOND_TAZERED");
	unk_0xE71148ED586F1ED1(0.1f);
	uLocal_407 = unk_0x84496C593C3C7F04(341.1107f, 2846.797f, 40.6462f, 350.961f, 2871.472f, 43.8518f, 0, 1, 1, 1);
	unk_0x46FA2CC6615D6359("WORLD_VEHICLE_DRIVE_SOLO", 0);
	unk_0x46FA2CC6615D6359("WORLD_VEHICLE_CONSTRUCTION_SOLO", 0);
	unk_0x46FA2CC6615D6359("WORLD_VEHICLE_CONSTRUCTION_PASSENGERS", 0);
	Local_646[0 /*3*/] = { 327.3949f, 2850.544f, 42.436f };
	Local_646[1 /*3*/] = { 327.0572f, 2841.203f, 42.7507f };
	Local_646[2 /*3*/] = { 337.6567f, 2821.313f, 41.1778f };
	Local_646[3 /*3*/] = { 350.404f, 2797.253f, 47.3014f };
	Local_646[4 /*3*/] = { 373.3039f, 2757.923f, 42.0141f };
	Local_646[5 /*3*/] = { 393.3462f, 2725.506f, 41.9263f };
	Local_646[6 /*3*/] = { 416.6357f, 2697.79f, 42.4937f };
	Local_646[7 /*3*/] = { 444.9309f, 2689.155f, 42.5934f };
	Local_646[8 /*3*/] = { 474.5866f, 2679.499f, 42.2943f };
	Local_646[9 /*3*/] = { 636.1514f, 2696.975f, 39.9808f };
	Local_646[10 /*3*/] = { 831.222f, 2695.574f, 39.5328f };
	Local_646[11 /*3*/] = { 880.9315f, 2708.053f, 39.805f };
	Local_646[12 /*3*/] = { 915.5502f, 2715.868f, 39.6578f };
	Local_646[13 /*3*/] = { 949.9031f, 2732.258f, 39.3729f };
	Local_646[14 /*3*/] = { 979.2463f, 2748.764f, 37.0951f };
	Local_646[15 /*3*/] = { 1007.865f, 2761.744f, 35.0162f };
	Local_646[16 /*3*/] = { 1039.265f, 2779.234f, 33.8708f };
	Local_646[17 /*3*/] = { 1070.02f, 2810.376f, 35.6906f };
	Local_646[18 /*3*/] = { 1097.616f, 2838.89f, 37.2296f };
	Local_646[19 /*3*/] = { 1121.26f, 2844.513f, 37.2992f };
	Local_646[20 /*3*/] = { 1149.222f, 2836.694f, 37.1993f };
	Local_646[21 /*3*/] = { 1203.216f, 2801.934f, 36.86f };
	Local_646[22 /*3*/] = { 1253.402f, 2767.166f, 37.4919f };
	Local_646[23 /*3*/] = { 1283.368f, 2741.513f, 36.651f };
	Local_646[24 /*3*/] = { 1297.205f, 2715.333f, 36.7748f };
	Local_646[25 /*3*/] = { 1303.824f, 2693.499f, 36.6285f };
	Local_646[26 /*3*/] = { 1312.923f, 2659.902f, 36.6804f };
	Local_646[27 /*3*/] = { 1323.725f, 2622.272f, 36.6871f };
	Local_646[28 /*3*/] = { 1337.268f, 2595.036f, 36.618f };
	Local_646[29 /*3*/] = { 1359.421f, 2571.568f, 36.9024f };
	Local_646[30 /*3*/] = { 1478.068f, 2269.079f, 71.6347f };
	Local_646[31 /*3*/] = { 1506.971f, 1874.889f, 106.8773f };
	Local_646[32 /*3*/] = { 1501.885f, 1618.599f, 111.4967f };
	Local_646[33 /*3*/] = { 1474.662f, 1583.423f, 109.2177f };
	Local_646[34 /*3*/] = { 1447.224f, 1574.739f, 107.665f };
	Local_646[35 /*3*/] = { 1421.365f, 1570.722f, 107.0452f };
	Local_646[36 /*3*/] = { 1393.586f, 1566.862f, 106.198f };
	Local_646[37 /*3*/] = { 1363.652f, 1552.682f, 104.8892f };
	Local_646[38 /*3*/] = { 1344.757f, 1535.922f, 102.401f };
	Local_646[39 /*3*/] = { 1323.565f, 1507.205f, 98.09f };
	Local_646[40 /*3*/] = { 1305.183f, 1461.427f, 98.0123f };
	Local_646[41 /*3*/] = { 1294.047f, 1395.442f, 100.773f };
	Local_646[42 /*3*/] = { 1287.989f, 1316.504f, 105.952f };
	Local_646[43 /*3*/] = { 1238.227f, 705.9078f, 100.6087f };
	Local_646[44 /*3*/] = { 1652.565f, 3487.954f, 35.5959f };
	Local_646[45 /*3*/] = { 2518.179f, 4145.933f, 37.7126f };
	Local_646[46 /*3*/] = { 2731.314f, 4390.35f, 47.4449f };
	unk_0x73FC038FEC1E71CF("Min2_Traffic01");
	unk_0x73FC038FEC1E71CF("Min2_Traffic02");
}

void func_529(int iParam0)
{
	if (!func_168(iParam0))
	{
		unk_0x97C59C4E8349D15F(func_562(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

void func_530(int iParam0, int iParam1, bool bParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_225();
		if (iParam1 == 4)
		{
			Global_101154.f_32575[iParam0 /*29*/].f_12[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[2] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69489)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_531();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_531();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_531();
			}
		}
	}
}

void func_531()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xC754513C760635E8(&(Global_101154.f_32575[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		unk_0x5411F6B456B04A6B("");
		StringCopy(&cVar16, unk_0xC754513C760635E8(&(Global_2893[1 /*6*/])), 64);
		sVar32 = unk_0xC754513C760635E8("CELL_253");
		unk_0xE8386CF1E84A5B3D(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x5411F6B456B04A6B("CELL_255");
		unk_0x2B088D6251C2080D(&(Global_2893[1 /*6*/]));
		unk_0xE8386CF1E84A5B3D(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xF17F4B0641AB2DE1(&Global_2283, 0);
}

void func_532(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_6(uParam0->f_28[iVar0]))
		{
			unk_0xF7B3552987613A6B(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_6(uParam0->f_35[iVar0]))
		{
			unk_0xF7B3552987613A6B(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_6(uParam0->f_41[iVar0]))
		{
			unk_0xF7B3552987613A6B(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xF7B3552987613A6B(unk_0x27D769C59BC9D030(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), iParam1);
		if (bParam2)
		{
			unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_533(var uParam0)
{
	int iVar0[1];
	int iVar2;
	
	iVar0[0] = iLocal_95;
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 1;
			uParam0->f_15 = 7f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "MMB_2_RCM", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				unk_0x97C59C4E8349D15F(iVar0[iVar2]);
				iVar2++;
			}
			iLocal_91 = 1;
			return 0;
			break;
		
		case 1:
			if (!func_535(&iVar0))
			{
				return 0;
			}
			iLocal_91 = 2;
			return 0;
			break;
		
		case 2:
			func_534(&(uParam0->f_35[0]), iVar0[0], 20.8f, 4532.65f, 104.66f, 284.7f);
			if (unk_0xD2CFFE76B625AE55(uParam0->f_35[0]))
			{
				unk_0x37B592C0F74990D2(uParam0->f_35[0], 2);
				unk_0x28F46AE29FA4808C(uParam0->f_35[0], 5, 0);
				unk_0x9B3E806EC535DBC3(uParam0->f_35[0], 14f);
				unk_0x7C898812896A5304(iVar0[0], 1);
			}
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				unk_0x0049DE0B34213B12(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_534(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_8(uParam0);
	*uParam0 = unk_0x4E76306EE6AE7596(uParam1, Param2, fParam5, 1, 1);
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		unk_0xFA3ED0FFF3FD8F34(*uParam0);
		unk_0x51F79AC13D2AD286(*uParam0, 1000);
	}
}

int func_535(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!unk_0x875098323FCA8FE6((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_536()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return 1;
	}
	return 0;
}

void func_537()
{
	func_480();
	func_540(59);
	unk_0x66EEFE13E1BFC898(0);
	unk_0x68BD4F826EFDDC53("MM2_FAIL");
	unk_0x490E5086E14B644E();
	unk_0x0049DE0B34213B12(joaat("sanchez"));
	unk_0x0049DE0B34213B12(joaat("pranger"));
	unk_0x0049DE0B34213B12(joaat("blazer"));
	unk_0x0049DE0B34213B12(joaat("s_m_m_migrant_01"));
	unk_0x0049DE0B34213B12(joaat("speedo"));
	unk_0x0049DE0B34213B12(joaat("s_m_m_gaffer_01"));
	unk_0x0049DE0B34213B12(joaat("p_amb_phone_01"));
	unk_0x0049DE0B34213B12(joaat("s_m_y_construct_01"));
	unk_0x7C898812896A5304(joaat("pranger"), 0);
	unk_0x7C898812896A5304(joaat("sanchez"), 0);
	unk_0x7C898812896A5304(joaat("blazer"), 0);
	unk_0xE71148ED586F1ED1(1f);
	unk_0xF01E9C7FDA2976B1("DisableAbortConversationForRagdoll", 0);
	unk_0x3CE75187603652E2(uLocal_407, 0);
	func_539();
	func_304();
	if (func_538())
	{
	}
	func_12(&(Local_96.f_28[1]), 1, 0, 1);
	func_12(&(Local_96.f_28[0]), 1, 0, 1);
	unk_0x46FA2CC6615D6359("WORLD_VEHICLE_DRIVE_SOLO", 1);
	unk_0x46FA2CC6615D6359("WORLD_VEHICLE_CONSTRUCTION_SOLO", 1);
	unk_0x46FA2CC6615D6359("WORLD_VEHICLE_CONSTRUCTION_PASSENGERS", 1);
	unk_0x440E2095CD95D710(Vector(43.747f, 4214.055f, -199.286f) - Vector(10f, 10f, 10f), Vector(43.747f, 4214.055f, -199.286f) + Vector(10f, 10f, 10f), 1);
	unk_0x7C3AA2D27E16E2AD();
}

int func_538()
{
	int iVar0;
	
	iVar0 = func_217();
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_100241[iVar0 /*10*/].f_4)
	{
		return 0;
	}
	Global_100241[iVar0 /*10*/].f_4 = 0;
	unk_0x85DF15590BBEBCCD(0, 1);
	unk_0x85DF15590BBEBCCD(3, 1);
	unk_0x85DF15590BBEBCCD(2, 1);
	if (!func_23(0))
	{
		if (Global_100241[iVar0 /*10*/].f_5 && Global_100241[iVar0 /*10*/].f_6)
		{
			Global_100241[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_100241[iVar0 /*10*/].f_6 && !Global_100241[iVar0 /*10*/].f_5)
		{
			Global_100241[iVar0 /*10*/].f_6 = 1;
		}
	}
	return 1;
}

void func_539()
{
	if (unk_0x159730DB57D995D0("MINUTE_02_SCENE"))
	{
		unk_0x354EC40268FD2071("MINUTE_02_SCENE");
	}
}

void func_540(int iParam0)
{
	if (!func_168(iParam0))
	{
		unk_0x0049DE0B34213B12(func_562(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

void func_541(bool bParam0)
{
	int iVar0;
	
	func_558();
	if (!func_557())
	{
		iVar0 = func_217();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_100241[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_100241[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_100241[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_85786 == Global_91315)
		{
			Global_101154.f_17264[iVar0 /*6*/].f_4++;
		}
		Global_85786 = Global_91315;
		if (bParam0)
		{
			func_176(iVar0, 1, 0);
			func_542(unk_0x3AA961419D971CB2(), iVar0);
		}
		else
		{
			if (Global_100241[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				func_187(&(Global_100241[iVar0 /*10*/].f_9));
			}
			func_175(iVar0, 1, 1, 0);
		}
		Global_100241[iVar0 /*10*/].f_6 = 1;
	}
}

void func_542(char* sParam0, int iParam1)
{
	if (Global_91278 != 12)
	{
		if (func_543(sParam0, 6, iParam1))
		{
			Global_91278.f_1 = iParam1;
		}
	}
}

int func_543(char* sParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<32> Var1;
	int iVar33;
	
	func_35();
	func_556();
	Global_91278 = 0;
	StringCopy(&(Global_91278.f_3), sParam0, 32);
	Global_91278.f_11 = iParam1;
	unk_0xB12859ABFCB19EB5(1);
	unk_0x1630072C8625779F(0);
	unk_0x9270D18AFCBDACEC(0);
	func_554(1);
	func_552(1);
	func_549(0);
	func_548(1);
	unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 9);
	unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 6);
	unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 20);
	unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 21);
	unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 5);
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
		{
			if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
			{
				uVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
				if (unk_0x71A741FE7CE9D57A(uVar0))
				{
					unk_0x26545538B51562AD(&(Global_91278.f_20), 5);
				}
			}
		}
	}
	unk_0x5BD150B52CE8D356(1);
	unk_0x8ACEB4FC9E9EE225();
	func_547(0);
	func_38(1);
	Global_91278.f_2 = Global_91315;
	if (func_546())
	{
		if (func_545())
		{
			if (Global_91315 >= func_544())
			{
				if (!unk_0xF426A5DE932B3BEE(Global_82399[iParam2 /*34*/].f_15, 16))
				{
					if (Global_101154.f_7775.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_85787 = 1;
					}
				}
			}
		}
		else if (Global_91278.f_11 == 6)
		{
			func_178(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_101154.f_17264[iParam2 /*6*/].f_4 >= 2)
				{
					Global_85787 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_404(unk_0x3AA961419D971CB2());
			if (iVar33 > -1)
			{
				if (Global_101154.f_29511.f_4[iVar33] >= 2)
				{
					Global_85787 = 1;
				}
			}
		}
	}
	return 1;
}

int func_544()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_407(&(Global_91278.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_545()
{
	if ((((Global_91278.f_11 == 0 || Global_91278.f_11 == 1) || Global_91278.f_11 == 2) || Global_91278.f_11 == 3) || Global_91278.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_546()
{
	if ((((Global_91278.f_11 == 0 || Global_91278.f_11 == 1) || Global_91278.f_11 == 2) || Global_91278.f_11 == 6) || Global_91278.f_11 == 3)
	{
		return 1;
	}
	if (Global_91278.f_11 == 5)
	{
		if (func_404(&(Global_91278.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_547(int iParam0)
{
	unk_0x3DFCFAD590F85BF7(iParam0);
	unk_0x83DB85FD25128C55(iParam0);
}

void func_548(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x7CC7CFD7BFFAAC4C();
		unk_0x26545538B51562AD(&(Global_91278.f_20), 3);
	}
	else if (unk_0xF426A5DE932B3BEE(Global_91278.f_20, 3))
	{
		unk_0xFF2A2F3774F8F7B6();
		unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 3);
	}
}

void func_549(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0xF426A5DE932B3BEE(Global_91278.f_20, 4))
		{
			func_551();
			unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 4);
		}
	}
	else
	{
		func_550();
		unk_0x26545538B51562AD(&(Global_91278.f_20), 4);
	}
}

void func_550()
{
	Global_17118.f_5 = 1;
}

void func_551()
{
	Global_17118.f_5 = 0;
}

void func_552(bool bParam0)
{
	if (bParam0)
	{
		func_553();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x26545538B51562AD(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_330(0))
		{
			func_554(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_553()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_554(int iParam0)
{
	if (Global_14571)
	{
		func_555(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 30);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 30);
	}
	if (!func_223())
	{
		Global_14413.f_1 = 3;
	}
}

void func_555(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_330(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x38AAAA167C55B731(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xF10089C8CCEFDB7A(Global_14350);
		}
		else
		{
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
}

void func_556()
{
	Global_85787 = 0;
	Global_85788 = 0;
}

int func_557()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return 0;
	}
	return 1;
}

void func_558()
{
	Global_91313 = 1;
	if (unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1))
	{
		if (unk_0x75CB9E30BA492FF0(&Global_69721))
		{
			switch (func_226())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
	}
	else if (!unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0x75CB9E30BA492FF0(&Global_69721))
		{
			switch (func_226())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
		unk_0x26545538B51562AD(&(Global_91278.f_20), 25);
	}
}

void func_559(char* sParam0)
{
	if (!unk_0x75CB9E30BA492FF0(sParam0))
	{
	}
}

void func_560(var uParam0)
{
	func_561(&(uParam0->f_28));
	func_561(&(uParam0->f_35));
	func_561(&(uParam0->f_41));
}

void func_561(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0xD2CFFE76B625AE55((*uParam0)[iVar0]))
		{
			unk_0xAF3355298F537BB0((*uParam0)[iVar0], 0, 1);
		}
		iVar0++;
	}
}

int func_562(int iParam0)
{
	if (!func_168(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

