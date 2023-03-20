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
	int iLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<61> Local_83 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	float fLocal_152 = 0f;
	float fLocal_153 = 0f;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	struct<3> Local_158 = { 0, 0, 0 } ;
	int iLocal_161 = 0;
	struct<3> Local_162[7];
	struct<3> Local_184[7];
	struct<3> Local_206 = { 0, 0, 0 } ;
	struct<3> Local_209 = { 0, 0, 0 } ;
	struct<3> Local_212 = { 0, 0, 0 } ;
	struct<3> Local_215 = { 0, 0, 0 } ;
	struct<3> Local_218 = { 0, 0, 0 } ;
	struct<3> Local_221 = { 0, 0, 0 } ;
	struct<3> Local_224 = { 0, 0, 0 } ;
	struct<3> Local_227 = { 0, 0, 0 } ;
	struct<3> Local_230 = { 0, 0, 0 } ;
	float fLocal_233[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_241[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_249 = 0f;
	float fLocal_250 = 0f;
	float fLocal_251 = 0f;
	float fLocal_252 = 0f;
	float fLocal_253 = 0f;
	float fLocal_254 = 0f;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	var uLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	char* sLocal_386 = NULL;
	int iLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 16;
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
	var uLocal_557 = -1;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 1000;
	var uLocal_565 = 1000;
	var uLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	var uLocal_570[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	var uLocal_580[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_588[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_596 = 0;
	var uLocal_597[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 2;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	int iLocal_615 = 0;
	var uLocal_616[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_624[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	var uLocal_634[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_642[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_650[7];
	float fLocal_672[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_680[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_688[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_696[7];
	float fLocal_718[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_726[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_734[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_742[7];
	float fLocal_764[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_772[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_780[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_788[7];
	float fLocal_810[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_818[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_826[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_834[7];
	float fLocal_856[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_864[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_872[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_880[7];
	float fLocal_902[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_910 = 0;
	int iLocal_911[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_919[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_927[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_935 = 0;
	int iLocal_936 = 0;
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
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
	uLocal_80 = func_494(60);
	uLocal_81 = func_494(14);
	fLocal_144 = 400f;
	fLocal_145 = 150f;
	fLocal_146 = 450f;
	fLocal_147 = 0.7f;
	fLocal_148 = 1f;
	fLocal_149 = 0.7f;
	iLocal_150 = 4;
	iLocal_151 = 525000;
	fLocal_152 = 34.75f;
	fLocal_153 = 50f;
	iLocal_154 = 25;
	iLocal_155 = 10;
	iLocal_156 = 25;
	iLocal_157 = 75;
	Local_158 = { -363.3094f, -82.3607f, 44.6577f };
	iLocal_161 = 157;
	iLocal_279 = 1;
	iLocal_299 = -1;
	Local_83 = { ScriptParam_0 };
	func_492(&Local_83);
	unk_0xD80ABA7495D14FDA(1);
	if (unk_0x4B4BD87E3D30C50D(19))
	{
		if (iLocal_311 == 1)
		{
			unk_0x3345CB85AB9EC035("EPS8_FAIL");
			func_491("Force cleanup [TERMINATING]");
			func_474(1);
			func_460();
		}
		else
		{
			func_491("Force cleanup [TERMINATING]");
			func_474(1);
			func_460();
		}
	}
	if (func_459())
	{
		Global_69562 = 1;
		iLocal_79 = 0;
		while (!func_455(&Local_83))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		Global_69562 = 0;
	}
	unk_0x54575489AE798654(func_454(), 0);
	unk_0xA5F70A8B83BDFA49(&(Global_99250.f_17192.f_382), 1);
	unk_0x72FAE653AFC04E97("Epsilon", &uLocal_388);
	unk_0x72FAE653AFC04E97("EpsilonCivilian", &uLocal_389);
	uLocal_945 = unk_0x2277155D92E898D2(-711.6323f, 42.0868f, 14.5077f, -663.5175f, 118.0403f, 86.0362f, 0, 1, 1, 1);
	uLocal_946 = unk_0x2277155D92E898D2(-657.5416f, 38.5153f, 38.7892f, -665.8512f, 52.9232f, 42.3853f, 0, 1, 1, 1);
	uLocal_947 = unk_0x2277155D92E898D2(Vector(45.2982f, -36.1436f, -413.4749f) - Vector(5f, 7f, 7f), Vector(45.2982f, -36.1436f, -413.4749f) + Vector(5f, 7f, 7f), 0, 1, 1, 1);
	func_453(&Local_83, 0, 1);
	uLocal_570[0] = Local_83.f_28[0];
	uLocal_570[2] = Local_83.f_28[1];
	uLocal_580[0] = Local_83.f_28[2];
	uLocal_588[0] = Local_83.f_28[3];
	Local_83.f_28[0] = 0;
	Local_83.f_28[1] = 0;
	Local_83.f_28[2] = 0;
	Local_83.f_28[3] = 0;
	func_447(1);
	while (true)
	{
		unk_0xAF2DED6A27928DEB();
		unk_0x185B194BB229460F("SF_Epsilon8", 0);
		unk_0x4EDE34FBADD967A6(0);
		func_431(Local_83.f_9, 0, 0, 0, 0, 0);
		if ((iLocal_568 != 0 && iLocal_568 != 1) && iLocal_568 != 2)
		{
			if (iLocal_568 != 10)
			{
				func_430();
			}
			func_425();
		}
		switch (iLocal_568)
		{
			case 0:
				func_417();
				break;
			
			case 1:
				func_342();
				break;
			
			case 2:
				func_333();
				break;
			
			case 3:
				func_328();
				break;
			
			case 4:
				func_305();
				break;
			
			case 5:
				func_301();
				break;
			
			case 6:
				func_300();
				break;
			
			case 7:
				func_289();
				break;
			
			case 8:
				func_53();
				break;
			
			case 10:
				func_3();
				break;
		}
		if (iLocal_568 != 10)
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
	switch (iLocal_569)
	{
		case 0:
			unk_0x3345CB85AB9EC035("EPS8_FAIL");
			if (iLocal_375 == 1)
			{
				func_25(0, 1, -iLocal_151, 0, 0);
			}
			func_23();
			unk_0xA1E3A2CCF985EE86();
			unk_0x4ACCE973F9C3CA3B(1);
			if (!unk_0x0AAC2160036975D9(sLocal_386))
			{
				func_21(sLocal_386, 1);
			}
			else
			{
				func_474(1);
			}
			iLocal_569 = 1;
			break;
		
		case 1:
			if (func_20())
			{
				func_4();
				func_460();
			}
			break;
	}
}

void func_4()
{
	func_19(&uLocal_555, 0);
	iLocal_567 = 0;
	fLocal_153 = 100f;
	unk_0xA1E3A2CCF985EE86();
	if (unk_0x1F2158D615BC4B25(uLocal_616[0]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[0], 0);
	}
	if (unk_0x1F2158D615BC4B25(uLocal_616[1]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[1], 0);
	}
	if (unk_0x1F2158D615BC4B25(uLocal_616[2]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[2], 0);
	}
	if (unk_0x1F2158D615BC4B25(uLocal_616[3]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[3], 0);
	}
	if (unk_0x1F2158D615BC4B25(uLocal_616[4]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[4], 0);
	}
	if (unk_0x1F2158D615BC4B25(uLocal_616[5]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[5], 0);
	}
	if (unk_0x1F2158D615BC4B25(uLocal_616[6]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[6], 0);
	}
	if (unk_0x1F2158D615BC4B25(uLocal_624[0]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_624[0], 0);
	}
	if (unk_0x1F2158D615BC4B25(uLocal_624[1]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_624[1], 0);
	}
	unk_0xFF4E0B6993FC09F7(uLocal_388);
	unk_0xFF4E0B6993FC09F7(uLocal_389);
	if (iLocal_370 == 0)
	{
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				unk_0x6F410A541F185BA5(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 0, &Local_230, 0);
				unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), Local_230, 1, 0, 0, 1);
			}
			else if (unk_0x1F2158D615BC4B25(iLocal_632))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(iLocal_632))
				{
					if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
					{
						unk_0x6F410A541F185BA5(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 0, &Local_230, 0);
						unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), Local_230, 1, 0, 0, 1);
					}
				}
			}
		}
	}
	unk_0x5F2AACB0122E1554(unk_0x77F050A399DB77ED(), 9, 0, 0, 0);
	func_18(&iLocal_596);
	func_18(&iLocal_578);
	func_18(&iLocal_579);
	func_15(&iLocal_615);
	func_15(&iLocal_633);
	func_14(&(uLocal_597[0]));
	func_14(&(uLocal_597[1]));
	func_14(&(uLocal_597[2]));
	func_14(&(uLocal_597[3]));
	if (unk_0x1F2158D615BC4B25(iLocal_632))
	{
		unk_0xAB08E0AE50DC39E0(iLocal_632);
		func_15(&iLocal_632);
	}
	iLocal_256 = 0;
	while (iLocal_256 < 7)
	{
		func_18(&(uLocal_580[iLocal_256]));
		func_18(&(uLocal_588[iLocal_256]));
		func_18(&(uLocal_570[iLocal_256]));
		func_15(&(uLocal_616[iLocal_256]));
		unk_0x4EDE34FBADD967A6(0);
		iLocal_256++;
	}
	func_11();
	func_5(0);
	iLocal_256 = 0;
	iLocal_311 = 0;
	iLocal_312 = 0;
	iLocal_314 = 0;
	iLocal_313 = 0;
	iLocal_315 = 0;
	iLocal_261 = 0;
	iLocal_257 = 0;
	iLocal_258 = 0;
	iLocal_270 = 0;
	iLocal_261 = 0;
	iLocal_262 = 0;
	iLocal_316[0] = 0;
	iLocal_316[1] = 0;
	iLocal_316[2] = 0;
	iLocal_316[3] = 0;
	iLocal_316[4] = 0;
	iLocal_316[5] = 0;
	iLocal_316[6] = 0;
	iLocal_341[0] = 0;
	iLocal_341[1] = 0;
	iLocal_341[2] = 0;
	iLocal_341[3] = 0;
	iLocal_341[4] = 0;
	iLocal_341[5] = 0;
	iLocal_341[6] = 0;
	iLocal_265 = 0;
	iLocal_324 = 0;
	iLocal_325 = 0;
	iLocal_326 = 0;
	iLocal_328 = 0;
	iLocal_272 = 0;
	iLocal_275 = 0;
	iLocal_330 = 0;
	iLocal_331 = 0;
	iLocal_332 = 0;
	iLocal_333 = 0;
	iLocal_334 = 0;
	iLocal_335 = 0;
	iLocal_336 = 0;
	iLocal_277 = 0;
	iLocal_337 = 0;
	iLocal_338 = 0;
	iLocal_339 = 0;
	iLocal_279 = 1;
	iLocal_340 = 0;
	iLocal_349 = 0;
	iLocal_350 = 0;
	iLocal_351 = 0;
	iLocal_352 = 0;
	iLocal_353 = 0;
	iLocal_280 = 0;
	iLocal_281 = 0;
	iLocal_354 = 0;
	iLocal_355 = 0;
	iLocal_356 = 0;
	iLocal_286 = 0;
	iLocal_283 = 0;
	iLocal_358 = 0;
	fLocal_146 = 450f;
	iLocal_360 = 0;
	iLocal_284 = 0;
	iLocal_361 = 0;
	iLocal_362 = 0;
	iLocal_363 = 0;
	iLocal_364 = 0;
	iLocal_288 = 0;
	iLocal_365 = 0;
	iLocal_366 = 0;
	iLocal_367 = 0;
	iLocal_368 = 0;
	iLocal_369 = 0;
	iLocal_285 = 0;
	iLocal_295 = 0;
	iLocal_297 = 0;
	iLocal_298 = 0;
	iLocal_371 = 0;
	iLocal_373 = 0;
	iLocal_372 = 0;
	iLocal_374 = 0;
	iLocal_299 = -1;
	iLocal_375 = 0;
	iLocal_300 = 0;
	iLocal_376 = 0;
	iLocal_303 = 0;
	iLocal_304 = 0;
	iLocal_377 = 0;
	iLocal_306 = 0;
	iLocal_383 = 0;
	iLocal_308 = 0;
	iLocal_384 = 0;
	iLocal_385 = 0;
	iLocal_387 = 0;
	if (unk_0x06F36936289C5EC8(uLocal_608))
	{
		unk_0x12A448112D057EB4(uLocal_608, 0);
		unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
		unk_0xFE65076A204F9258(uLocal_608, 0);
		if (unk_0x06F36936289C5EC8(uLocal_609))
		{
			unk_0x12A448112D057EB4(uLocal_609, 0);
			unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
			unk_0xFE65076A204F9258(uLocal_609, 0);
		}
		unk_0x1B40500A7841D6AB(1);
		unk_0x488AF65D7EDB6B4A(1);
		unk_0xABF261CA61470DE0(0, 1065353216);
		unk_0x8793DE27084C2CBD(0);
	}
	if (unk_0x0CB2A341EC5513A7("EPSILONISM_08_CHOPPER"))
	{
		unk_0xE0DB271DC0AEA972("EPSILONISM_08_CHOPPER");
	}
	unk_0xBA6758C5B23DAE05(1);
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x573691DB812DC8AA(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_9(0))
		{
			func_6(0);
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

void func_6(int iParam0)
{
	if (Global_14571)
	{
		func_8(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x573691DB812DC8AA(&Global_2284, 16);
	}
	if (unk_0xEA9C2A206A86B744())
	{
		unk_0xC9AB825AA4821BDA(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 30);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 30);
	}
	if (!func_7())
	{
		Global_14413.f_1 = 3;
	}
}

int func_7()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_8(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3E337B53281459DC(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x4317F0DBC6457B31(Global_14350);
		}
		else
		{
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
}

int func_9(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_11()
{
	unk_0xFB4F6722A032A0F0(joaat("taxi"));
	unk_0xFB4F6722A032A0F0(joaat("sadler"));
	unk_0xFB4F6722A032A0F0(joaat("habanero"));
	unk_0xFB4F6722A032A0F0(joaat("schafter2"));
	unk_0xFB4F6722A032A0F0(joaat("rumpo"));
	func_13(&(uLocal_642[0]), 1, 0, 1);
	func_13(&(uLocal_642[1]), 1, 0, 1);
	func_13(&(uLocal_642[2]), 1, 0, 1);
	func_13(&(uLocal_642[3]), 1, 0, 1);
	func_13(&(uLocal_642[4]), 1, 0, 1);
	func_13(&(uLocal_642[5]), 1, 0, 1);
	func_13(&(uLocal_642[6]), 1, 0, 1);
	func_12(&(uLocal_634[0]));
	func_12(&(uLocal_634[1]));
	func_12(&(uLocal_634[2]));
	func_12(&(uLocal_634[3]));
	func_12(&(uLocal_634[4]));
	func_12(&(uLocal_634[5]));
	func_12(&(uLocal_634[6]));
	func_13(&(uLocal_688[0]), 1, 0, 1);
	func_13(&(uLocal_688[1]), 1, 0, 1);
	func_13(&(uLocal_688[2]), 1, 0, 1);
	func_13(&(uLocal_688[3]), 1, 0, 1);
	func_13(&(uLocal_688[4]), 1, 0, 1);
	func_13(&(uLocal_688[5]), 1, 0, 1);
	func_13(&(uLocal_688[6]), 1, 0, 1);
	func_12(&(uLocal_680[0]));
	func_12(&(uLocal_680[1]));
	func_12(&(uLocal_680[2]));
	func_12(&(uLocal_680[3]));
	func_12(&(uLocal_680[4]));
	func_12(&(uLocal_680[5]));
	func_12(&(uLocal_680[6]));
	func_13(&(uLocal_734[0]), 1, 0, 1);
	func_13(&(uLocal_734[1]), 1, 0, 1);
	func_13(&(uLocal_734[2]), 1, 0, 1);
	func_13(&(uLocal_734[3]), 1, 0, 1);
	func_13(&(uLocal_734[4]), 1, 0, 1);
	func_13(&(uLocal_734[5]), 1, 0, 1);
	func_13(&(uLocal_734[6]), 1, 0, 1);
	func_12(&(uLocal_726[0]));
	func_12(&(uLocal_726[1]));
	func_12(&(uLocal_726[2]));
	func_12(&(uLocal_726[3]));
	func_12(&(uLocal_726[4]));
	func_12(&(uLocal_726[5]));
	func_12(&(uLocal_726[6]));
	func_13(&(uLocal_780[0]), 1, 0, 1);
	func_13(&(uLocal_780[1]), 1, 0, 1);
	func_13(&(uLocal_780[2]), 1, 0, 1);
	func_13(&(uLocal_780[3]), 1, 0, 1);
	func_13(&(uLocal_780[4]), 1, 0, 1);
	func_13(&(uLocal_780[5]), 1, 0, 1);
	func_13(&(uLocal_780[6]), 1, 0, 1);
	func_12(&(uLocal_772[0]));
	func_12(&(uLocal_772[1]));
	func_12(&(uLocal_772[2]));
	func_12(&(uLocal_772[3]));
	func_12(&(uLocal_772[4]));
	func_12(&(uLocal_772[5]));
	func_12(&(uLocal_772[6]));
	func_13(&(uLocal_826[0]), 1, 0, 1);
	func_13(&(uLocal_826[1]), 1, 0, 1);
	func_13(&(uLocal_826[2]), 1, 0, 1);
	func_13(&(uLocal_826[3]), 1, 0, 1);
	func_13(&(uLocal_826[4]), 1, 0, 1);
	func_13(&(uLocal_826[5]), 1, 0, 1);
	func_13(&(uLocal_826[6]), 1, 0, 1);
	func_12(&(uLocal_818[0]));
	func_12(&(uLocal_818[1]));
	func_12(&(uLocal_818[2]));
	func_12(&(uLocal_818[3]));
	func_12(&(uLocal_818[4]));
	func_12(&(uLocal_818[5]));
	func_12(&(uLocal_818[6]));
	func_13(&(uLocal_872[0]), 1, 0, 1);
	func_13(&(uLocal_872[1]), 1, 0, 1);
	func_13(&(uLocal_872[2]), 1, 0, 1);
	func_13(&(uLocal_872[3]), 1, 0, 1);
	func_13(&(uLocal_872[4]), 1, 0, 1);
	func_13(&(uLocal_872[5]), 1, 0, 1);
	func_13(&(uLocal_872[6]), 1, 0, 1);
	func_12(&(uLocal_864[0]));
	func_12(&(uLocal_864[1]));
	func_12(&(uLocal_864[2]));
	func_12(&(uLocal_864[3]));
	func_12(&(uLocal_864[4]));
	func_12(&(uLocal_864[5]));
	func_12(&(uLocal_864[6]));
}

void func_12(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		unk_0x0B6E83A9A7ED3EBA(*uParam0);
		if (unk_0x335346A332B62CA2(*uParam0) && unk_0x95CBA891BCA778AA(*uParam0, 1))
		{
			unk_0xB84D4C251623B60C(uParam0);
		}
	}
}

void func_13(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (!unk_0x1E80C02AC16B6622(*uParam0))
		{
			unk_0xA09672E91FA74DCA(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x5A499E160A1878DC(*uParam0);
			}
			unk_0x112CD899A3BEE719(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x9526D9575C237F2F(*uParam0, 0);
			}
		}
		unk_0xA29D53AF339F4CD0(uParam0);
	}
}

void func_14(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (unk_0x85C2713D803F1A4A(*uParam0))
		{
			unk_0xE8EBCCA6A3BE542B(*uParam0, 1, 1);
		}
		unk_0x7D779528B7C61C13(uParam0);
	}
}

void func_15(int iParam0)
{
	if (unk_0x1F2158D615BC4B25(*iParam0))
	{
		if (!unk_0x335346A332B62CA2(*iParam0))
		{
			unk_0x8D429A827A931AC9(*iParam0, 1, 0);
		}
		if (func_17(*iParam0))
		{
			if (unk_0x335346A332B62CA2(*iParam0) && unk_0x95CBA891BCA778AA(*iParam0, 1))
			{
				if (func_16(unk_0x77F050A399DB77ED()))
				{
					if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), *iParam0, 0))
					{
						unk_0xB84D4C251623B60C(iParam0);
						return;
					}
				}
				unk_0x18D40A0CF27AD6D3(iParam0);
			}
		}
		else
		{
			if (func_16(unk_0x77F050A399DB77ED()))
			{
				if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), *iParam0, 0))
				{
					unk_0xB84D4C251623B60C(iParam0);
					return;
				}
			}
			unk_0x18D40A0CF27AD6D3(iParam0);
		}
	}
}

int func_16(int iParam0)
{
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0)
{
	if (func_16(iParam0))
	{
		if (unk_0x968EA16107097324(iParam0, 0))
		{
			if (!unk_0x01CB02EE3F3F9481(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_18(int iParam0)
{
	if (unk_0x1F2158D615BC4B25(*iParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(*iParam0))
		{
			unk_0xA09672E91FA74DCA(*iParam0, 0);
		}
		if (!unk_0x335346A332B62CA2(*iParam0))
		{
			unk_0x8D429A827A931AC9(*iParam0, 1, 0);
		}
		unk_0xAB3098579170FA46(iParam0);
	}
}

void func_19(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_2 = unk_0x3EAC9995EC220C5A();
	}
	else
	{
		uParam0->f_2 = -1;
	}
}

int func_20()
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

void func_21(char* sParam0, bool bParam1)
{
	func_22(sParam0);
	func_474(bParam1);
}

void func_22(char* sParam0)
{
	if (!unk_0x0AAC2160036975D9(sParam0))
	{
		if (unk_0xEA58ADAD120FD97C(sParam0) <= 16)
		{
			StringCopy(&Global_69549, sParam0, 16);
			StringCopy(&Global_69553, "", 16);
			if (unk_0x2855A92E54CD64A3())
			{
				unk_0xE28EC0DBB37DA281();
			}
		}
	}
}

void func_23()
{
	func_24(&(iLocal_911[0]));
	func_24(&(iLocal_911[1]));
	func_24(&(iLocal_911[2]));
	func_24(&(iLocal_911[3]));
	func_24(&(iLocal_911[4]));
	func_24(&(iLocal_911[5]));
	func_24(&(iLocal_911[6]));
	func_24(&(iLocal_919[0]));
	func_24(&(iLocal_919[1]));
	func_24(&(iLocal_919[2]));
	func_24(&(iLocal_919[3]));
	func_24(&(iLocal_919[4]));
	func_24(&(iLocal_919[5]));
	func_24(&(iLocal_919[6]));
	func_24(&(iLocal_927[0]));
	func_24(&(iLocal_927[1]));
	func_24(&(iLocal_927[2]));
	func_24(&(iLocal_927[3]));
	func_24(&(iLocal_927[4]));
	func_24(&(iLocal_927[5]));
	func_24(&(iLocal_927[6]));
	func_24(&iLocal_935);
	func_24(&iLocal_936);
	func_24(&iLocal_937);
	func_24(&iLocal_938);
	func_24(&iLocal_939);
	func_24(&iLocal_940);
	func_24(&iLocal_941);
}

void func_24(int iParam0)
{
	if (unk_0xC3B073777B46C61A(*iParam0))
	{
		unk_0x49AFDB1662AE2A92(*iParam0, 0);
		unk_0x296CDA10C549A502(iParam0);
	}
}

void func_25(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_26(Global_99250.f_32503[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xBA16CA557222A92B(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x5716C8F12991E399(iVar1, iVar0, 1);
	}
}

int func_26(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_52();
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
					func_51(99, 1);
					func_50(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_50(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_50(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_34(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_33(5))
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
							func_50(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_33(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_50(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xD8D50BE3C4300244())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_33(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_32(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_51(95, iParam3);
					break;
				
				case 1:
					func_51(97, iParam3);
					break;
				
				case 2:
					func_51(96, iParam3);
					break;
			}
			func_51(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_29(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_29(iVar1);
	}
	iVar5 = (Global_52834[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52834[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52834[iVar2] = 2147483647;
				}
				else
				{
					Global_52834[iVar2] = (Global_52834[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_50(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_50(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_50(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52834[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52834[iVar2];
			Global_52834[iVar2] = (Global_52834[iVar2] - iParam3);
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
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_99250.f_25017.f_233[iVar2 /*69*/]++;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_1++;
		if (Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_28(iParam0);
	if (Global_35700 == 15)
	{
		func_27(0);
	}
	return 1;
}

void func_27(bool bParam0)
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
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52842[iVar0 /*3*/][0] = Global_99250.f_25017[iVar0];
		Global_52842.f_31[iVar0 /*3*/][0] = Global_99250.f_25017.f_11[iVar0];
		Global_52842.f_62[iVar0 /*3*/][0] = Global_99250.f_25017.f_22[iVar0];
		Global_52842.f_93[iVar0 /*3*/][0] = Global_99250.f_25017.f_33[iVar0];
		Global_52842.f_124[iVar0 /*3*/][0] = Global_99250.f_25017.f_44[iVar0];
		Global_52842.f_155[iVar0 /*3*/][0] = Global_99250.f_25017.f_55[iVar0];
		Global_52842.f_186[iVar0 /*3*/][0] = Global_99250.f_25017.f_66[iVar0];
		Global_52842.f_217[iVar0 /*3*/][0] = Global_99250.f_25017.f_77[iVar0];
		Global_52842.f_248[iVar0 /*3*/][0] = Global_99250.f_25017.f_88[iVar0];
		if (!bParam0)
		{
			Global_52842[iVar0 /*3*/][1] = Global_99250.f_25017[iVar0];
			Global_52842.f_31[iVar0 /*3*/][1] = Global_99250.f_25017.f_11[iVar0];
			Global_52842.f_62[iVar0 /*3*/][1] = Global_99250.f_25017.f_22[iVar0];
			Global_52842.f_93[iVar0 /*3*/][1] = Global_99250.f_25017.f_33[iVar0];
			Global_52842.f_124[iVar0 /*3*/][1] = Global_99250.f_25017.f_44[iVar0];
			Global_52842.f_155[iVar0 /*3*/][1] = Global_99250.f_25017.f_55[iVar0];
			Global_52842.f_186[iVar0 /*3*/][1] = Global_99250.f_25017.f_66[iVar0];
			Global_52842.f_217[iVar0 /*3*/][1] = Global_99250.f_25017.f_77[iVar0];
			Global_52842.f_248[iVar0 /*3*/][1] = Global_99250.f_25017.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52834[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x5716C8F12991E399(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x5716C8F12991E399(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x5716C8F12991E399(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_29(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x4C779B19E6DDCDA2())
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0) || unk_0xB56FEBC510E7E9DE(Global_2097152[func_31() /*10185*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		unk_0xA5F70A8B83BDFA49(&(Global_2097152[func_31() /*10185*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2B8B3581C4E63AD1("COUP_RED");
		unk_0x703D2B4B1C7E10B6(func_30(iParam0));
		unk_0xEF85B88DC049EA23(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_30(int iParam0)
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

int func_31()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_32(int iParam0)
{
	func_51(93, iParam0);
	func_51(29, iParam0);
	func_51(30, iParam0);
}

bool func_33(int iParam0)
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0);
	}
	return unk_0xB56FEBC510E7E9DE(Global_2097152[func_31() /*10185*/].f_7698.f_10, iParam0);
}

int func_34(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xEB1F5947DDF281A3(27))
	{
		return 0;
	}
	if (unk_0xBA16CA557222A92B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xBA16CA557222A92B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xBA16CA557222A92B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xBA16CA557222A92B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x5716C8F12991E399(joaat("num_cash_spent"), iVar1, 1);
		func_49(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_35(27, 1);
	return 1;
}

int func_35(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_36(iParam0, iParam1);
}

int func_36(int iParam0, int iParam1)
{
	if (func_48(14) && !func_47(iParam0))
	{
		return 0;
	}
	if (unk_0xEB1F5947DDF281A3(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25361 != 0 && !Global_69317)
	{
		return 0;
	}
	if (func_46(&Global_2558981))
	{
		if (func_44(&Global_2558981, iParam0))
		{
			return 0;
		}
		if (func_37(&Global_2558981, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x7F2415D4902EF64D(iParam0))
		{
			return 0;
		}
		if (unk_0xEB1F5947DDF281A3(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
	{
		return 0;
	}
	if (func_48(14) && !func_47(iParam1))
	{
		return 0;
	}
	if (func_44(uParam0, iParam1))
	{
		return 0;
	}
	if (func_43(uParam0) < 0f)
	{
		func_42(uParam0, 0);
	}
	func_40(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_38(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_38(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
	{
		return 0;
	}
	if (func_48(14) && !func_47(iParam1))
	{
		return 0;
	}
	if (func_44(uParam0, iParam1))
	{
		return 0;
	}
	if (func_43(uParam0) < 0f)
	{
		func_42(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_39(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_39(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_40(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_41(uParam0, iVar0);
		iVar0++;
	}
	func_42(uParam0, (Global_2558980 - 0.5f));
}

void func_41(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_42(var uParam0, float fParam1)
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

float func_43(var uParam0)
{
	return uParam0->f_72;
}

bool func_44(var uParam0, int iParam1)
{
	return func_45(uParam0, iParam1) != -1;
}

int func_45(var uParam0, int iParam1)
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

bool func_46(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_47(int iParam0)
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

bool func_48(int iParam0)
{
	return Global_35700 == iParam0;
}

int func_49(int iParam0, int iParam1)
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
	iVar0 = unk_0xDE96DC4582CFD56F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CB31CF925F17754(iParam0, iParam1);
	}
	return 0;
}

void func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xBA16CA557222A92B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x5716C8F12991E399(iParam0, iVar0, 1);
}

void func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0xBA16CA557222A92B(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x5716C8F12991E399(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_52()
{
	int iVar0;
	
	if (unk_0x9C77CB51883D12D1())
	{
		unk_0xBA16CA557222A92B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52834[0] == iVar0)
		{
			Global_52834[0] = iVar0;
		}
		unk_0xBA16CA557222A92B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52834[1] == iVar0)
		{
			Global_52834[1] = iVar0;
		}
		unk_0xBA16CA557222A92B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52834[2] == iVar0)
		{
			Global_52834[2] = iVar0;
		}
	}
}

void func_53()
{
	var uVar0;
	struct<3> Var1;
	
	func_288();
	func_287();
	if (iLocal_303 == 0)
	{
		if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 5000)
		{
			iLocal_303 = 1;
		}
	}
	else if (iLocal_303 == 1)
	{
		if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 12000)
		{
			iLocal_303 = 2;
		}
	}
	if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 9700)
	{
		if (iLocal_281 > 2 || iLocal_336 == 1)
		{
		}
	}
	if ((iLocal_262 == 3 && iLocal_270 == 2) && !func_286())
	{
		iLocal_376 = 1;
	}
	if (iLocal_258 > 10000 && iLocal_257 > 10000)
	{
		iLocal_258 = (iLocal_258 - 9000);
		iLocal_257 = (iLocal_257 - 9000);
	}
	if (iLocal_336 == 0)
	{
		if (iLocal_335 == 0)
		{
			if (func_17(iLocal_632))
			{
				if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
				{
					if (iLocal_258 != iLocal_257)
					{
						if (iLocal_314 == 0)
						{
							unk_0x746BA52A343DAF52(15f, 4f, 1);
							func_285("EPS8_12", 7500, 0);
						}
						iLocal_335 = 1;
					}
				}
			}
		}
	}
	else if (unk_0xC3B073777B46C61A(iLocal_941))
	{
		if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			if (func_284(unk_0x77F050A399DB77ED(), uLocal_597[3], 0) < 1f)
			{
				unk_0x296CDA10C549A502(&iLocal_941);
				unk_0x7D779528B7C61C13(&(uLocal_597[3]));
				func_25(0, 1, iLocal_151, 0, 0);
				iLocal_375 = 1;
				if (iLocal_258 != iLocal_257)
				{
					if (iLocal_335 == 0)
					{
						if (iLocal_314 == 0)
						{
							unk_0x746BA52A343DAF52(15f, 4f, 1);
							func_285("EPS8_12", 7500, 0);
						}
						iLocal_335 = 1;
					}
				}
			}
		}
	}
	if (func_16(iLocal_615) && func_16(iLocal_579))
	{
		Var1 = { unk_0xAF99169F0F5AE41D(iLocal_615, 1) };
		if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), unk_0x03C14E8A9400F2A9(iLocal_615, 0f, 0f, (Var1.f_2 - 200f)), unk_0x03C14E8A9400F2A9(iLocal_615, 500f, 0f, (Var1.f_2 + 200f)), 1000f, 0, 1, 0))
		{
			if (func_283(iLocal_579, iLocal_615, 2) && unk_0x9A2BADF8B8CE0E2A(iLocal_615, 1))
			{
				if (unk_0x49C650267EDFEBC6(iLocal_579, 242628503) != 1 || unk_0xE6BB50DD87FB4D2B(iLocal_579) > 0)
				{
					unk_0x2A6B9F9E71C479CF(&uVar0);
					unk_0x99D5D33027E2C921(0, iLocal_615);
					unk_0xFBE25F0677076CF9(0, unk_0x77F050A399DB77ED(), 0, 16);
					unk_0x44642CB08FA1637E(uVar0);
					unk_0xB8A8FA4B28E9F423(iLocal_579, uVar0);
					unk_0xAAD288E877AC833D(&uVar0);
				}
			}
		}
		else if (func_283(iLocal_579, iLocal_615, 1) && unk_0x9A2BADF8B8CE0E2A(iLocal_615, 2))
		{
			if (unk_0x49C650267EDFEBC6(iLocal_579, 242628503) != 1 || unk_0xE6BB50DD87FB4D2B(iLocal_579) > 0)
			{
				unk_0x2A6B9F9E71C479CF(&uVar0);
				unk_0x99D5D33027E2C921(0, iLocal_615);
				unk_0xFBE25F0677076CF9(0, unk_0x77F050A399DB77ED(), 0, 16);
				unk_0x44642CB08FA1637E(uVar0);
				unk_0xB8A8FA4B28E9F423(iLocal_579, uVar0);
				unk_0xAAD288E877AC833D(&uVar0);
			}
		}
	}
	func_281();
	func_279();
	func_277();
	if (iLocal_315 == 1)
	{
		func_274();
	}
	if (iLocal_373 == 0)
	{
		if (func_17(iLocal_615))
		{
			if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
			{
				if (unk_0x8C7E85A27DBA1793(unk_0x77F050A399DB77ED()) != joaat("weapon_stickybomb"))
				{
					if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 5000)
					{
						if (iLocal_372 == 0)
						{
							iLocal_372 = 1;
						}
					}
				}
				else if (iLocal_372 == 1)
				{
					iLocal_372 = 0;
				}
			}
			else if (iLocal_372 == 1)
			{
				iLocal_372 = 0;
			}
		}
	}
	if (iLocal_258 == iLocal_257 && unk_0x3EAC9995EC220C5A() > iLocal_290 + 8000)
	{
		iLocal_259 = unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590());
		if (iLocal_259 == 0)
		{
			iLocal_263 = unk_0x3EAC9995EC220C5A();
			if (iLocal_263 > iLocal_264 + 1200)
			{
				if (iLocal_265 == 0)
				{
					unk_0xFFC9C38C87B2174F(unk_0x8ACD527A7E574590());
					unk_0x4AAD01BBE039D160(0f);
					iLocal_332 = 0;
					iLocal_266 = unk_0x3EAC9995EC220C5A();
					iLocal_265 = 1;
				}
				else if (iLocal_265 == 1)
				{
					iLocal_267 = unk_0x3EAC9995EC220C5A();
					if (iLocal_267 > iLocal_266 + 2000)
					{
						if (!unk_0xEA9C2A206A86B744())
						{
							if (iLocal_336 == 0)
							{
								if (iLocal_333 == 0)
								{
									if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
									{
										unk_0x3345CB85AB9EC035("EPS8_ESCAPE");
										func_80();
									}
									else if (iLocal_332 == 0)
									{
										func_285("EPS8_06", 7500, 0);
										iLocal_332 = 1;
									}
								}
								else if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_615, 0))
								{
									unk_0x3345CB85AB9EC035("EPS8_ESCAPE");
									func_80();
								}
								else if (iLocal_332 == 0)
								{
									func_285("EPS8_20", 7500, 0);
									iLocal_332 = 1;
								}
							}
							else
							{
								unk_0x746BA52A343DAF52(15f, 4f, 1);
								func_80();
							}
						}
					}
				}
			}
		}
		else if (iLocal_314 == 0)
		{
			func_285("EPS8_03", 7500, 0);
			iLocal_314 = 1;
		}
	}
	func_54();
}

void func_54()
{
	int iVar0;
	
	if (((!func_79("EPS8_12", 0, 0) && !func_79("EPS8_16", 0, 0)) && !func_79("EPS8_11", 0, 0)) && !func_79("EPS8_25", 0, 0))
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (func_78(iLocal_578))
	{
		if (iLocal_281 == 0)
		{
			if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 1800)
			{
				if (!func_286())
				{
					if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH", "EPS8_CH_1", 6, iVar0, 0))
					{
						iLocal_281 = 1;
					}
				}
			}
		}
		else if (iLocal_281 == 1)
		{
			if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 3000)
			{
				if (!func_286())
				{
					if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH", "EPS8_CH_2", 6, iVar0, 0))
					{
						iLocal_281 = 2;
					}
				}
			}
		}
		else if (iLocal_281 == 2)
		{
			if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 5000)
			{
				if (iLocal_360 == 0)
				{
					if (func_56(iLocal_578))
					{
						if (!func_286())
						{
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_1", 6, iVar0, 0))
							{
								iLocal_281 = 3;
							}
						}
					}
				}
			}
		}
		else if (iLocal_281 == 3)
		{
			if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 10000)
			{
				if (iLocal_360 == 0)
				{
					if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
					{
						if (unk_0x2AA05370067DC5AC(iLocal_632) > 17f)
						{
							if (func_56(iLocal_578))
							{
								if (!func_286())
								{
									fLocal_251 = unk_0x7578EBD2DA3F8DD2(iLocal_632);
									if (fLocal_251 >= 315f || fLocal_251 < 45f)
									{
										if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_2", 6, iVar0, 0))
										{
											iLocal_281 = 4;
										}
									}
									if (fLocal_251 >= 45f && fLocal_251 < 135f)
									{
										if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_3", 6, iVar0, 0))
										{
											iLocal_281 = 4;
										}
									}
									if (fLocal_251 >= 135f && fLocal_251 < 225f)
									{
										if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_4", 6, iVar0, 0))
										{
											iLocal_281 = 4;
										}
									}
									if (fLocal_251 >= 225f && fLocal_251 < 315f)
									{
										if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_5", 6, iVar0, 0))
										{
											iLocal_281 = 4;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 8000)
		{
			if (iLocal_354 == 0)
			{
				if (!func_286())
				{
					iLocal_354 = 1;
				}
			}
			if (unk_0x0B6380E19682EA99(unk_0x77F050A399DB77ED(), 0))
			{
				if (iLocal_355 == 0)
				{
					if (func_55(unk_0x77F050A399DB77ED(), iLocal_615, 200f))
					{
						if (!func_286())
						{
							if (iLocal_360 == 0)
							{
								if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_6", 6, iVar0, 0))
								{
									iLocal_355 = 1;
								}
							}
						}
					}
				}
			}
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_579))
			{
				if (unk_0xCC580427ED36D7F8(unk_0x77F050A399DB77ED(), iLocal_579, 1))
				{
					if (iLocal_356 == 0)
					{
						if (!func_286())
						{
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_7", 6, iVar0, 0))
							{
								unk_0x1E7F0537BF0E8998(unk_0x77F050A399DB77ED());
								iLocal_356 = 1;
							}
						}
					}
				}
			}
			else if (iLocal_286 == 0)
			{
				iLocal_287 = unk_0x3EAC9995EC220C5A();
				iLocal_286 = 1;
			}
			else if (iLocal_286 == 1)
			{
				if (unk_0x3EAC9995EC220C5A() > iLocal_287 + 2400)
				{
					if (!func_286())
					{
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_8", 6, iVar0, 0))
						{
							iLocal_286 = 2;
						}
					}
				}
			}
		}
	}
	if (iLocal_257 > iLocal_258 + 2)
	{
		if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 8000)
		{
			if (unk_0xA3746E7F17F47DC2(0, 100) == 25)
			{
				if (iLocal_280 == 0)
				{
					if (!func_286())
					{
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH3", "EPS8_CH3_1", 6, iVar0, 0))
						{
							iLocal_280 = 1;
						}
					}
				}
				else if (iLocal_280 == 1)
				{
					if (!func_286())
					{
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH3", "EPS8_CH3_2", 6, iVar0, 0))
						{
							iLocal_280 = 2;
						}
					}
				}
				else if (iLocal_280 == 2)
				{
					if (!func_286())
					{
						iLocal_280 = 3;
					}
				}
				else if (iLocal_280 == 3)
				{
					if (!func_286())
					{
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH3", "EPS8_CH3_3", 6, iVar0, 0))
						{
							iLocal_280 = 4;
						}
					}
				}
				else if (iLocal_280 == 4)
				{
					if (!func_286())
					{
						iLocal_280 = 5;
					}
				}
				else if (iLocal_280 == 5)
				{
					if (!func_286())
					{
						iLocal_280 = 6;
					}
				}
				else if (iLocal_280 == 6)
				{
					if (!func_286())
					{
						iLocal_280 = 7;
					}
				}
				else if (iLocal_280 == 7)
				{
					if (!func_286())
					{
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH3", "EPS8_CH3_4", 6, iVar0, 0))
						{
							iLocal_280 = 8;
						}
					}
				}
			}
		}
	}
}

bool func_55(int iParam0, int iParam1, float fParam2)
{
	return unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(iParam0, 1), unk_0xAF99169F0F5AE41D(iParam1, 1)) <= (fParam2 * fParam2);
}

bool func_56(int iParam0)
{
	return func_57(unk_0xF8D66A34AF0C53A5(iParam0, 0), unk_0x77F050A399DB77ED(), 250, 7);
}

bool func_57(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_62(iParam0, iParam1);
	if (!func_16(iParam0) || !func_16(iParam1))
	{
		if (iVar0 != -1)
		{
			func_61(&(Local_37[iVar0 /*4*/]));
		}
		return 0;
	}
	if (iVar0 == -1)
	{
		iVar0 = func_60();
		if (iVar0 == -1)
		{
			return 0;
		}
		Local_37[iVar0 /*4*/].f_1 = iParam0;
		Local_37[iVar0 /*4*/].f_2 = iParam1;
	}
	uVar1 = func_58(&(Local_37[iVar0 /*4*/]), unk_0xAF99169F0F5AE41D(iParam0, 1), iParam1, &(Local_37[iVar0 /*4*/].f_3), iParam0, iParam3);
	return (uVar1 || (unk_0x3EAC9995EC220C5A() - Local_37[iVar0 /*4*/].f_3) < iParam2);
}

int func_58(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_16(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_59(iParam4, iParam7) };
		*uParam0 = unk_0x317C1E3F94E69BE1(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x8DF1E9C686542134(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x94195F7CA642F937(iVar7))
	{
		func_16(iVar7);
		if (unk_0xCBABEE38E5DAB356(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0x0A4EB3FDD9845EF8(Param1, unk_0xAF99169F0F5AE41D(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x3EAC9995EC220C5A();
			return 1;
		}
		return 0;
	}
	if (unk_0xDD21A3DB256904E7(iVar7))
	{
		func_16(iVar7);
		if (unk_0xB42592B9FFEB5EDE(iParam4, 0))
		{
			if (unk_0x2EF671D3645D271D(iVar7) == unk_0xF8D66A34AF0C53A5(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0x0A4EB3FDD9845EF8(Param1, unk_0xAF99169F0F5AE41D(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x3EAC9995EC220C5A();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xA3746E7F17F47DC2(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xAF99169F0F5AE41D(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x5C9D7C3DA25581D1(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x5C9D7C3DA25581D1(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x5C9D7C3DA25581D1(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x5C9D7C3DA25581D1(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x5C9D7C3DA25581D1(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x5C9D7C3DA25581D1(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xAF99169F0F5AE41D(iParam0, 1);
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_61(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_63(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_77(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_64(sParam2, iParam4, 0);
}

int func_64(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xC9AB825AA4821BDA(0);
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
					func_76();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1066B6347C40B301())
		{
			return 0;
		}
		if (func_75(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_74();
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
			unk_0xA5F70A8B83BDFA49(&Global_2283, 20);
			unk_0xA5F70A8B83BDFA49(&Global_2284, 17);
			unk_0xA5F70A8B83BDFA49(&Global_2285, 0);
			if (bParam2)
			{
				func_68();
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
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (func_67())
				{
					return 0;
				}
				if (unk_0x8408B4A4C23B6D99(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0x04CAC901929627FE(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xE89300623E310620(unk_0x77F050A399DB77ED(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xAB5BBCD9D3B6625D(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
					if (unk_0x7E0A8E0015B69AA4(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0xB32A2CF30C462699(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
				}
			}
			if (func_7())
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
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 9))
				{
					return 0;
				}
			}
			func_66();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_65();
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
		func_76();
	}
	return 0;
}

void func_65()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC9AB825AA4821BDA(0);
	Global_15712 = 1;
}

void func_66()
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
	unk_0xA5F70A8B83BDFA49(&Global_2284, 16);
}

int func_67()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar1, 1);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x294E2F2AFFA6421E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0xEE92F60CC00FFBD6(unk_0x77F050A399DB77ED(), 78, 1))
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

void func_68()
{
	if (func_48(14))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[2 /*29*/])
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
		Global_14413 = func_69();
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

int func_69()
{
	func_70();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_70()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_73(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_72(unk_0x77F050A399DB77ED());
			if (func_71(iVar0) && (!func_48(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_71(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_71(int iParam0)
{
	return iParam0 < 3;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_73(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_73(int iParam0)
{
	if (func_71(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_74()
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

bool func_75(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
}

void func_76()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if ((unk_0xEA9C2A206A86B744() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

void func_77(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_78(int iParam0)
{
	if (func_16(iParam0))
	{
		if (!unk_0x1E80C02AC16B6622(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_79(char* sParam0, int iParam1, int iParam2)
{
	unk_0x9C55668C318B45CE(sParam0);
	if (iParam1 == 1)
	{
		unk_0x703D2B4B1C7E10B6(iParam2);
	}
	return unk_0x911D2DB971FD2DC2();
}

void func_80()
{
	int iVar0;
	
	if (iLocal_311 == 1)
	{
		if (iLocal_295 == iLocal_257)
		{
			func_273(753);
		}
		unk_0x3345CB85AB9EC035("EPS8_PASS");
		Global_99250.f_17192.f_388 = 1;
	}
	else
	{
		unk_0x3345CB85AB9EC035("EPS8_PASS");
		Global_99250.f_17192.f_388 = 0;
	}
	unk_0xBA16CA557222A92B(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 20)
	{
		unk_0x5716C8F12991E399(joaat("num_epsilon_step"), 20, 1);
		func_49(23, 20);
	}
	func_35(23, 1);
	func_81(80, 1);
	iLocal_327 = 1;
	func_460();
}

void func_81(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_271();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_98337[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_98337[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_98337[iVar0 /*10*/].f_6)
	{
		return;
	}
	func_242(iVar0, 0);
	unk_0x573691DB812DC8AA(&Global_69565, 1);
	if (Global_98337[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		func_241(&(Global_98337[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			unk_0x3DF319A8C78275DD(unk_0x8ACD527A7E574590(), 0, 0);
			unk_0x32EB36CA60E96828(unk_0x8ACD527A7E574590(), 0);
			unk_0x1DB69211D646BE79(5000);
		}
	}
	func_229(iVar0, 1, 0, 0);
	func_228(0, 0);
	MemCopy(&uVar1, {func_226(iVar0)}, 4);
	func_224(&uVar1, func_225());
	func_108();
	if (unk_0xB56FEBC510E7E9DE(Global_99250.f_8634.f_25, 3))
	{
		func_107();
	}
	func_89();
	if (iParam0 == 210 || iParam0 == 211)
	{
		func_84(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		func_84(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		func_84(iParam0, 0, 0);
	}
	func_82();
}

int func_82()
{
	if (func_83(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_83(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

void func_84(int iParam0, int iParam1, int iParam2)
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
		func_87((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_99250.f_8812[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99250.f_8812[iParam0 /*12*/].f_6 == 11 || Global_99250.f_8812[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99250.f_8812[iParam0 /*12*/].f_5 = 1;
		Global_99250.f_8812[iParam0 /*12*/].f_10 = iParam1;
		Global_99250.f_8812[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_85();
	}
}

void func_85()
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
	Global_98986 = 0;
	Global_98987 = 0;
	Global_98988 = 0;
	Global_98989 = 0;
	Global_98990 = 0;
	Global_98991 = 0;
	Global_98992 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99250.f_8812.f_3853;
	Global_99250.f_8812.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99250.f_8812[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99250.f_8812[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98986++;
					fVar1 = (fVar1 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98987++;
					fVar2 = (fVar2 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98988++;
					fVar3 = (fVar3 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98989++;
					fVar4 = (fVar4 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98990++;
					fVar5 = (fVar5 + (Global_99250.f_8812[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98991++;
					fVar6 = (fVar6 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98992++;
					fVar7 = (fVar7 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98969 > 0)
	{
		if (Global_98986 == Global_98969)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98970 > 0)
	{
		if (Global_98987 == Global_98970)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98971 > 0)
	{
		if (Global_98988 == Global_98971)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98972 > 0)
	{
		if (Global_98989 == Global_98972)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98973 > 0)
	{
		if (((Global_98990 == Global_98973 || (Global_98973 * 10 / Global_98990) < 41) || Global_98990 > Global_98976) || Global_98990 == Global_98976)
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_8812.f_3856, 14))
			{
				if (Global_98990 == Global_98973)
				{
					unk_0x9E0BBE2E0E32750D(joaat("num_rndevents_completed"), Global_98973, 0);
					unk_0x573691DB812DC8AA(&(Global_99250.f_8812.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98974 > 0)
	{
		if (Global_98991 == Global_98974)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98975 > 0)
	{
		if (Global_98992 == Global_98975)
		{
			fVar7 = 5f;
		}
	}
	Global_99250.f_8812.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98990 > Global_98976 || Global_98990 == Global_98976)
	{
		iVar9 = Global_98976;
	}
	else
	{
		iVar9 = Global_98990;
	}
	unk_0x5716C8F12991E399(joaat("num_missions_completed"), Global_98986, 1);
	unk_0x5716C8F12991E399(joaat("num_missions_available"), Global_98969, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_completed"), Global_98987, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_available"), Global_98970, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_completed"), Global_98988, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_available"), Global_98971, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_completed"), Global_98989, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_available"), Global_98972, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_available"), Global_98976, 1);
	unk_0x5716C8F12991E399(joaat("num_misc_completed"), (Global_98992 + Global_98991), 1);
	unk_0x5716C8F12991E399(joaat("num_misc_available"), (Global_98975 + Global_98974), 1);
	Global_98993 = (Global_98986 * 100 / Global_98969);
	Global_98995 = ((Global_98988 + Global_98987) * 100 / (Global_98971 + Global_98970));
	Global_98994 = ((Global_98989 + iVar9) * 100 / (Global_98972 + Global_98976));
	Global_98996 = ((Global_98991 + Global_98992) * 100 / (Global_98974 + Global_98975));
	unk_0x46160091B23E8313(joaat("total_progress_made"), Global_99250.f_8812.f_3853, 1);
	unk_0x5716C8F12991E399(joaat("percent_story_missions"), Global_98993, 1);
	unk_0x5716C8F12991E399(joaat("percent_ambient_missions"), Global_98994, 1);
	unk_0x5716C8F12991E399(joaat("percent_oddjobs"), Global_98995, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853))
	{
		func_49(13, unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853));
	}
	if (!unk_0xB94B9782B4E786E9())
	{
		if (!Global_69317)
		{
			if (func_86() == 2 == 0 && !unk_0x4C779B19E6DDCDA2())
			{
				if (unk_0x01128ADE88E1C42B())
				{
					Global_98984 = 0;
				}
				if (!Global_55659)
				{
					func_82();
				}
			}
		}
	}
}

int func_86()
{
	return Global_25115;
}

int func_87(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_88();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x1F3B95F25F60E511((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEDF2A618D8A93F7D((iParam0 - 6029)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_88()
{
	return Global_1312746;
}

void func_89()
{
	func_106();
	func_98();
	func_94();
	func_93();
	func_92();
	func_91();
	Global_91143 = 0;
	Global_85614 = -1;
	unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 17);
	Global_91141 = 0;
	unk_0x69A565726CF5A560(0);
	unk_0x09F8090DDEB095B4(0);
	unk_0x63668AF351176C27(1);
	unk_0xF0B7E485D471876E(1);
	unk_0x49206398F0E9D073(1);
	func_90(0);
}

void func_90(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&(Global_91106.f_20), 13);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 13);
	}
}

void func_91()
{
	Global_69557 = { 0f, 0f, 0f };
	Global_69560 = 0f;
	Global_91106.f_21 = 145;
}

void func_92()
{
	StringCopy(&Global_69549, "", 16);
	StringCopy(&Global_69553, "", 16);
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_91106.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_94()
{
	Global_91106 = 13;
	Global_91106.f_1 = -1;
	Global_91106.f_2 = 0;
	Global_91106.f_30 = 0f;
	unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 25);
	Global_91140 = 0;
	func_97(0);
	func_96();
	func_95();
	Global_91106.f_18 = -1;
	Global_91106.f_19 = -1;
}

void func_95()
{
	unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 22);
	unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 8);
}

void func_96()
{
	if (Global_91106.f_16 != 0)
	{
		unk_0xD2E03CEA477E4E3D(&(Global_91106.f_16));
		Global_91106.f_16 = 0;
	}
	if (Global_91106.f_17 != 0)
	{
		unk_0xD2E03CEA477E4E3D(&(Global_91106.f_17));
		Global_91106.f_17 = 0;
	}
}

void func_97(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_36249 = 1;
	}
	else
	{
		Global_36249 = 0;
	}
}

void func_98()
{
	func_99(&Global_95315);
}

void func_99(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_105(&(uParam0->f_1));
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
		func_104(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
		func_104(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
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
	func_103(&(uParam0->f_2305));
	func_101(&(uParam0->f_2311));
	func_100(&(uParam0->f_2401));
}

void func_100(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_101(var uParam0)
{
	func_102(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_102(var uParam0)
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

void func_103(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_104(var uParam0)
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

void func_105(var uParam0)
{
	*uParam0 = -15;
}

void func_106()
{
	StringCopy(&Global_92902, "", 32);
	func_99(&Global_92910);
}

void func_107()
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
	unk_0x573691DB812DC8AA(&Global_2283, 25);
	unk_0x573691DB812DC8AA(&Global_2284, 11);
}

void func_108()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		uVar1 = Global_88808[iVar0];
		if (unk_0x1F2158D615BC4B25(uVar1) && !unk_0x1E80C02AC16B6622(iVar1))
		{
			iVar3 = func_72(iVar1);
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
				if (func_223(iVar1, 14, iVar2))
				{
					func_109(iVar1, 14, iVar2);
				}
				if (Global_99250.f_1754.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_99250.f_1754.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (unk_0x1E80C02AC16B6622(uParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = unk_0xDF1398076E26B0E4(iParam0);
	Global_69178[1 /*14*/] = { func_159(iVar0, iParam1, iParam2) };
	if (!unk_0xB56FEBC510E7E9DE(Global_69178[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_223(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { func_155(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_109(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { func_152(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_109(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		unk_0xC978BB8A69877F89(iParam0, Global_69178[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { func_155(iVar0, 0) };
		Global_69178[1 /*14*/] = { func_159(iVar0, iParam1, uVar30[iParam1]) };
		if (unk_0xE41B65EDA3260A72(iParam0, func_151(iParam1)) > 0 && unk_0x6F812DB834EA1E9B(iParam0, func_151(iParam1), Global_69178[1 /*14*/].f_3) > 0)
		{
			unk_0x5F2AACB0122E1554(iParam0, func_151(iParam1), Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4, 0);
		}
	}
	if (func_150(iParam0, iVar0, &iVar46, 0))
	{
		func_112(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_110(iParam0, iVar0, &iVar46))
	{
		func_112(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

int func_110(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_111(iParam1);
	if (Global_99250.f_1754.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_223(uParam0, Global_99250.f_1754.f_539[iVar0 /*65*/].f_64, Global_99250.f_1754.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_99250.f_1754.f_539[iVar0 /*65*/].f_62;
			Global_99250.f_1754.f_539[iVar0 /*65*/].f_63 = -99;
			Global_99250.f_1754.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_111(int iParam0)
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

int func_112(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	
	if (unk_0x1E80C02AC16B6622(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_69177++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0xDF1398076E26B0E4(iParam0);
	if (iParam5 == 0)
	{
		Global_69178[1 /*14*/] = { func_159(iVar10, iParam1, iParam2) };
		if (!func_149(iParam3))
		{
			Global_69177 = (Global_69177 - 1);
			return 0;
		}
		func_142(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_140(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_140(iParam0, 9);
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
			iVar7 = func_135(iParam0, 1);
			if (!func_134(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = func_135(iParam0, 0);
			if (!func_133(iVar10, 14, iVar8) && !func_129(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_135(iParam0, 2);
			}
		}
		unk_0x3131DD175ABDED2F(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_69221 };
		}
		else
		{
			uVar11 = { func_155(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_69178[1 /*14*/] = { func_159(iVar10, iVar0, uVar11[iVar0]) };
				if (unk_0xB56FEBC510E7E9DE(Global_69178[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_69237 };
						}
						else
						{
							uVar27 = { func_152(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_69178[1 /*14*/] = { func_159(iVar10, 14, uVar27[iVar1]) };
							func_128(iParam0, Global_69178[1 /*14*/].f_12, Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4);
							func_142(14);
							if (Global_69177 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_120(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_119(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x5F2AACB0122E1554(iParam0, func_151(iVar0), Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4, unk_0x1B1CA05B66B2441C(iParam0, func_151(iVar0)));
						}
						else
						{
							unk_0x5F2AACB0122E1554(iParam0, func_151(iVar0), Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4, iParam4);
						}
						func_142(iVar0);
						if (Global_69177 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_120(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69178[1 /*14*/] = { func_159(iVar10, iVar0, func_118(iParam0, iVar0, -1)) };
				if (unk_0xB56FEBC510E7E9DE(Global_69178[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_150(iParam0, iVar10, &iVar4, 1))
							{
								func_112(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { func_155(iVar10, 0) };
						func_112(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { func_159(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (func_116(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_112(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_159(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (func_116(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_112(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_159(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (func_116(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_112(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_159(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (func_116(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_112(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_159(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (func_116(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_112(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { func_152(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69178[1 /*14*/] = { func_159(iVar10, 14, uVar67[iVar1]) };
			func_128(iParam0, Global_69178[1 /*14*/].f_12, Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4);
			func_142(14);
			if (Global_69177 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_120(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_128(iParam0, Global_69178[1 /*14*/].f_12, Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4);
		func_142(iParam1);
		if (Global_69177 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_120(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x5F2AACB0122E1554(iParam0, func_151(iParam1), Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4, unk_0x1B1CA05B66B2441C(iParam0, func_151(iParam1)));
		}
		else
		{
			unk_0x5F2AACB0122E1554(iParam0, func_151(iParam1), Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4, iParam4);
		}
		if (Global_69177 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_120(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_113(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69177 == 1)
	{
		if (func_150(iParam0, iVar10, &iVar4, 0))
		{
			func_112(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_110(iParam0, iVar10, &iVar4))
		{
			func_112(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_69177 = (Global_69177 - 1);
	return 1;
}

void func_113(int iParam0, int iParam1, int iParam2)
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
	if (func_115(iParam0, 12, iVar0))
	{
		if (func_114(iParam0, iParam1, iParam2))
		{
			iVar1 = func_111(iParam0);
			if (iParam1 == 3)
			{
				Global_99250.f_1754.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_99250.f_1754.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_114(int iParam0, int iParam1, int iParam2)
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

bool func_115(int iParam0, int iParam1, int iParam2)
{
	Global_69178[1 /*14*/] = { func_159(iParam0, iParam1, iParam2) };
	return unk_0xB56FEBC510E7E9DE(Global_69178[1 /*14*/].f_6, 2);
}

int func_116(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_152(iParam0, (*uParam4)[13]) };
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
	if (func_117(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_134(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_133(iParam0, iParam2, iParam3))
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
		else if (func_129(iParam0, iParam2, iParam3))
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
		if (func_134(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_133(iParam0, iParam2, iParam3))
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
		else if (func_129(iParam0, iParam2, iParam3))
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
		if (func_134(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_133(iParam0, iParam2, iParam3))
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
		else if (func_129(iParam0, iParam2, iParam3))
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

int func_117(int iParam0, int iParam1, int iParam2)
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

int func_118(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x1E80C02AC16B6622(uParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_223(iParam0, iParam1, iVar0))
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
				if (func_223(iParam0, iParam1, iVar1))
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
				return func_135(iParam0, iParam2);
			}
		}
		else
		{
			return func_140(iParam0, iParam1);
		}
	}
	return -99;
}

int func_119(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_111(iParam0);
		Global_99250.f_1754.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_99250.f_1754.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_120(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				iVar1 = func_140(uParam0, 1);
				iVar0 = func_127(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_140(uParam0, 2);
				iVar0 = func_127(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_119(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_126(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_125(iParam1, iParam3, &iVar0))
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
									if (!func_124(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_124(uParam0, 3, 135, 150))
									{
										iVar0 = func_123(iParam1, 3, 135, 150);
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
									if (!func_124(uParam0, 3, 209, 222))
									{
										iVar0 = func_123(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_124(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_123(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_123(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_123(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_123(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_124(uParam0, 3, 176, 191) && !func_124(uParam0, 3, 227, 242))
									{
										iVar0 = func_123(iParam1, 3, 176, 191);
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
								iVar4 = func_140(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_140(uParam0, 11);
								iVar5 = func_122(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_140(uParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_121(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
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
								iVar7 = func_140(uParam0, 8);
								iVar8 = func_140(uParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_122(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_122(iParam1, iParam3, iVar8, 1);
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
								iVar9 = func_140(uParam0, 11);
								iVar0 = func_122(iParam1, -99, iVar9, 0);
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

int func_121(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
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

int func_122(int iParam0, int iParam1, int iParam2, int iParam3)
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
				iParam2 = func_123(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_123(iParam0, 11, 25, 40);
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

int func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_115(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_124(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_140(uParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1, int iParam2)
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

int func_126(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_111(iParam0);
		Global_99250.f_1754.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_99250.f_1754.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_127(int iParam0, int iParam1, int iParam2)
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

void func_128(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (iParam2 == -1)
	{
		unk_0xC978BB8A69877F89(uParam0, uParam1);
	}
	else
	{
		unk_0xF75D8E8F352DFCAB(iParam0, uParam1, iParam2, uParam3, unk_0x4C779B19E6DDCDA2());
	}
}

int func_129(int iParam0, int iParam1, int iParam2)
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
						return (unk_0x99A214601817F926(func_130(iParam0, iParam2, 14, 3), joaat("HAT"), 1) || unk_0x99A214601817F926(func_130(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0x99A214601817F926(func_130(iParam0, iParam2, 1, 3), joaat("HAT"), 0) || unk_0x99A214601817F926(func_130(iParam0, iParam2, 1, 3), -1842686353, 0));
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
						return (unk_0x99A214601817F926(func_130(iParam0, iParam2, 14, 4), joaat("HAT"), 1) || unk_0x99A214601817F926(func_130(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0x99A214601817F926(func_130(iParam0, iParam2, 1, 4), joaat("HAT"), 0) || unk_0x99A214601817F926(func_130(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x7A4BAB43523EE521(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_132(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0x95CB63A3CE2E9535(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0xC4025205E080C189(iVar17, &Var0);
			if (!unk_0xD5451DF6AA0E4BDB(Var0.f_0))
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
		unk_0x53D84A2C1A9F24B8(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_131(iParam0, func_151(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		iVar41 = unk_0x95CB63A3CE2E9535(iParam3, 6, -1, 0, -1, func_151(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0x403D32C1E63ABDA1(iVar38, &Var21);
			if (!unk_0xD5451DF6AA0E4BDB(Var21.f_0))
			{
				if (iVar39 == iVar40)
				{
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_131(int iParam0, int iParam1)
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

int func_132(int iParam0)
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

int func_133(int iParam0, int iParam1, int iParam2)
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
					uVar0 = func_130(iParam0, iParam2, 1, 3);
					if (unk_0x99A214601817F926(uVar0, joaat("HAT"), 0))
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
					uVar1 = func_130(iParam0, iParam2, 1, 4);
					if (unk_0x99A214601817F926(uVar1, joaat("HAT"), 0))
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

int func_134(int iParam0, int iParam1, int iParam2)
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
					return unk_0x99A214601817F926(func_130(iParam0, iParam2, 14, 3), joaat("GLASSES"), 1);
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
					return unk_0x99A214601817F926(func_130(iParam0, iParam2, 14, 4), joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1E80C02AC16B6622(uParam0))
	{
		return -99;
	}
	iVar0 = unk_0xB7A83E90E95B3E76(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_139(iParam1);
	}
	iVar1 = unk_0x7739EACC3B2657EC(iParam0, iParam1);
	return func_136(iParam0, iVar0, iVar1, iParam1);
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_139(iParam3);
	}
	iVar0 = unk_0xDF1398076E26B0E4(uParam0);
	iVar1 = unk_0x7C1B30F338CF8777(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_138(unk_0xDF1398076E26B0E4(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_138(unk_0xDF1398076E26B0E4(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xD1ECC5FA4103DABF(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x6A2935779C1E23DA(iParam0, iParam3, iVar4);
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
					iVar3 = (iVar3 + func_137(iParam0, iParam3));
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
	return func_139(iParam3);
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xDF1398076E26B0E4(uParam0);
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

int func_138(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x7A4BAB43523EE521(&Var0);
		iVar18 = 0;
		iVar19 = unk_0x95CB63A3CE2E9535(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xC4025205E080C189(iVar17, &Var0);
			if (!unk_0xD5451DF6AA0E4BDB(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_132(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x53D84A2C1A9F24B8(&Var20);
		iVar38 = 0;
		iVar39 = unk_0x95CB63A3CE2E9535(iParam3, 6, -1, 0, -1, func_151(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0x403D32C1E63ABDA1(iVar37, &Var20);
			if (!unk_0xD5451DF6AA0E4BDB(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_131(iParam0, func_151(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_139(int iParam0)
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

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x1E80C02AC16B6622(uParam0))
	{
		return -99;
	}
	iVar0 = func_151(iParam1);
	iVar1 = unk_0xB2833E96F49D3CDC(iParam0, iVar0);
	iVar2 = unk_0xD01703B8B3FC785F(iParam0, iVar0);
	return func_141(iParam0, iVar1, iVar2, iParam1);
}

int func_141(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_151(iParam3);
	iVar1 = unk_0xE41B65EDA3260A72(uParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x6F812DB834EA1E9B(iParam0, iVar0, iVar3);
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

void func_142(int iParam0)
{
	if (unk_0xB56FEBC510E7E9DE(Global_69178[1 /*14*/].f_6, 1) && !unk_0xB56FEBC510E7E9DE(Global_69178[1 /*14*/].f_6, 6))
	{
		func_148(iParam0, Global_69178[1 /*14*/].f_5, Global_69178[1 /*14*/].f_2, 2, Global_69178[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0xB56FEBC510E7E9DE(Global_69178[1 /*14*/].f_6, 1) && unk_0xB56FEBC510E7E9DE(Global_69178[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_143(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_143(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_143(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_143(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69176;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_147(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_146(iVar2, iVar0, 0);
		unk_0x573691DB812DC8AA(&iVar3, iVar1);
		func_144(iVar2, iVar3, iVar0, 1);
	}
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466327[iParam0 /*5*/][func_145(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, iParam1, iParam3);
	}
}

int func_145(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_88();
		if (iVar1 > -1)
		{
			Global_2466040 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466040 = 1;
		}
	}
	return iVar0;
}

int func_146(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466327[iParam0 /*5*/][func_145(iParam1)];
	if (unk_0xBA16CA557222A92B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_147(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 3741;
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_2556124)
		{
			iVar0 = unk_0xA33D6691C1FB01EB(uParam0);
		}
		else
		{
			iVar0 = unk_0x71316FAFA3DA4806(uParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xA33D6691C1FB01EB(uParam0);
	}
	else
	{
		iVar0 = unk_0x71316FAFA3DA4806(uParam0);
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
					*uParam2 = 1748;
					break;
				
				case 1:
					*uParam2 = 1749;
					break;
				
				case 2:
					*uParam2 = 1750;
					break;
				
				case 3:
					*uParam2 = 1751;
					break;
				
				case 4:
					*uParam2 = 1752;
					break;
				
				case 5:
					*uParam2 = 1753;
					break;
				
				case 6:
					*uParam2 = 1760;
					break;
				
				case 7:
					*uParam2 = 1761;
					break;
				
				case 8:
					*uParam2 = 1762;
					break;
				
				case 9:
					*uParam2 = 1763;
					break;
				
				case 10:
					*uParam2 = 1764;
					break;
				
				case 11:
					*uParam2 = 1765;
					break;
				
				case 12:
					*uParam2 = 1766;
					break;
				
				case 13:
					*uParam2 = 1774;
					break;
				
				case 14:
					*uParam2 = 1775;
					break;
				
				case 15:
					*uParam2 = 1876;
					break;
				
				case 16:
					*uParam2 = 1877;
					break;
				
				case 17:
					*uParam2 = 1908;
					break;
				
				case 18:
					*uParam2 = 1922;
					break;
				
				case 19:
					*uParam2 = 1923;
					break;
				
				case 20:
					*uParam2 = 1924;
					break;
				
				case 21:
					*uParam2 = 1925;
					break;
				
				case 22:
					*uParam2 = 1926;
					break;
				
				case 23:
					*uParam2 = 2030;
					break;
				
				case 24:
					*uParam2 = 2031;
					break;
				
				case 25:
					*uParam2 = 2057;
					break;
				
				case 26:
					*uParam2 = 2058;
					break;
				
				case 27:
					*uParam2 = 2059;
					break;
				
				case 28:
					*uParam2 = 2060;
					break;
				
				case 29:
					*uParam2 = 2061;
					break;
				
				case 30:
					*uParam2 = 2062;
					break;
				
				case 31:
					*uParam2 = 2063;
					break;
				
				case 32:
					*uParam2 = 2064;
					break;
				
				case 33:
					*uParam2 = 2065;
					break;
				
				case 34:
					*uParam2 = 2066;
					break;
				
				case 35:
					*uParam2 = 2313;
					break;
				
				case 36:
					*uParam2 = 2314;
					break;
				
				case 37:
					*uParam2 = 2362;
					break;
				
				case 38:
					*uParam2 = 2363;
					break;
				
				case 39:
					*uParam2 = 2364;
					break;
				
				case 40:
					*uParam2 = 2365;
					break;
				
				case 41:
					*uParam2 = 2424;
					break;
				
				case 42:
					*uParam2 = 2425;
					break;
				
				case 43:
					*uParam2 = 2426;
					break;
				
				case 44:
					*uParam2 = 2427;
					break;
				
				case 45:
					*uParam2 = 2428;
					break;
				
				case 46:
					*uParam2 = 2429;
					break;
				
				case 47:
					*uParam2 = 2430;
					break;
				
				case 48:
					*uParam2 = 2431;
					break;
				
				case 49:
					*uParam2 = 2432;
					break;
				
				case 50:
					*uParam2 = 2433;
					break;
				
				case 51:
					*uParam2 = 2562;
					break;
				
				case 52:
					*uParam2 = 2563;
					break;
				
				case 53:
					*uParam2 = 2564;
					break;
				
				case 54:
					*uParam2 = 2565;
					break;
				
				case 55:
					*uParam2 = 2566;
					break;
				
				case 56:
					*uParam2 = 2567;
					break;
				
				case 57:
					*uParam2 = 2568;
					break;
				
				case 58:
					*uParam2 = 2569;
					break;
				
				case 59:
					*uParam2 = 2570;
					break;
				
				case 60:
					*uParam2 = 2571;
					break;
				
				case 61:
					*uParam2 = 2572;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1754;
					break;
				
				case 1:
					*uParam2 = 1755;
					break;
				
				case 2:
					*uParam2 = 1756;
					break;
				
				case 3:
					*uParam2 = 1757;
					break;
				
				case 4:
					*uParam2 = 1758;
					break;
				
				case 5:
					*uParam2 = 1759;
					break;
				
				case 6:
					*uParam2 = 1767;
					break;
				
				case 7:
					*uParam2 = 1768;
					break;
				
				case 8:
					*uParam2 = 1769;
					break;
				
				case 9:
					*uParam2 = 1770;
					break;
				
				case 10:
					*uParam2 = 1771;
					break;
				
				case 11:
					*uParam2 = 1772;
					break;
				
				case 12:
					*uParam2 = 1773;
					break;
				
				case 13:
					*uParam2 = 1776;
					break;
				
				case 14:
					*uParam2 = 1777;
					break;
				
				case 15:
					*uParam2 = 1878;
					break;
				
				case 16:
					*uParam2 = 1879;
					break;
				
				case 17:
					*uParam2 = 1909;
					break;
				
				case 18:
					*uParam2 = 1927;
					break;
				
				case 19:
					*uParam2 = 1928;
					break;
				
				case 20:
					*uParam2 = 1929;
					break;
				
				case 21:
					*uParam2 = 1930;
					break;
				
				case 22:
					*uParam2 = 1931;
					break;
				
				case 23:
					*uParam2 = 2032;
					break;
				
				case 24:
					*uParam2 = 2033;
					break;
				
				case 25:
					*uParam2 = 2067;
					break;
				
				case 26:
					*uParam2 = 2068;
					break;
				
				case 27:
					*uParam2 = 2069;
					break;
				
				case 28:
					*uParam2 = 2070;
					break;
				
				case 29:
					*uParam2 = 2071;
					break;
				
				case 30:
					*uParam2 = 2072;
					break;
				
				case 31:
					*uParam2 = 2073;
					break;
				
				case 32:
					*uParam2 = 2074;
					break;
				
				case 33:
					*uParam2 = 2075;
					break;
				
				case 34:
					*uParam2 = 2076;
					break;
				
				case 35:
					*uParam2 = 2315;
					break;
				
				case 36:
					*uParam2 = 2316;
					break;
				
				case 37:
					*uParam2 = 2366;
					break;
				
				case 38:
					*uParam2 = 2367;
					break;
				
				case 39:
					*uParam2 = 2368;
					break;
				
				case 40:
					*uParam2 = 2369;
					break;
				
				case 41:
					*uParam2 = 2434;
					break;
				
				case 42:
					*uParam2 = 2435;
					break;
				
				case 43:
					*uParam2 = 2436;
					break;
				
				case 44:
					*uParam2 = 2437;
					break;
				
				case 45:
					*uParam2 = 2438;
					break;
				
				case 46:
					*uParam2 = 2439;
					break;
				
				case 47:
					*uParam2 = 2440;
					break;
				
				case 48:
					*uParam2 = 2441;
					break;
				
				case 49:
					*uParam2 = 2442;
					break;
				
				case 50:
					*uParam2 = 2443;
					break;
				
				case 51:
					*uParam2 = 2573;
					break;
				
				case 52:
					*uParam2 = 2574;
					break;
				
				case 53:
					*uParam2 = 2575;
					break;
				
				case 54:
					*uParam2 = 2576;
					break;
				
				case 55:
					*uParam2 = 2577;
					break;
				
				case 56:
					*uParam2 = 2578;
					break;
				
				case 57:
					*uParam2 = 2579;
					break;
				
				case 58:
					*uParam2 = 2580;
					break;
				
				case 59:
					*uParam2 = 2581;
					break;
				
				case 60:
					*uParam2 = 2582;
					break;
				
				case 61:
					*uParam2 = 2583;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 3741;
}

int func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_1754[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_1754[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xB56FEBC510E7E9DE(Global_99250.f_1754[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_149(int iParam0)
{
	if (!unk_0xB56FEBC510E7E9DE(Global_69178[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_69178[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xB56FEBC510E7E9DE(Global_69178[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_150(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_111(iParam1);
	if (Global_99250.f_1754.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_223(uParam0, Global_99250.f_1754.f_539[iVar0 /*65*/].f_61, Global_99250.f_1754.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_99250.f_1754.f_539[iVar0 /*65*/].f_59;
			Global_99250.f_1754.f_539[iVar0 /*65*/].f_60 = -99;
			Global_99250.f_1754.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_151(int iParam0)
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

struct<10> func_152(int iParam0, int iParam1)
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
					func_154(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_154(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_154(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_154(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_154(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_154(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_154(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_154(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_154(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_154(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_154(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_153(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_154(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_154(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_154(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_154(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_154(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_154(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_154(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_154(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_154(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_154(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_153(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_154(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_154(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_154(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_154(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_154(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_154(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_154(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_154(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_154(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_154(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_153(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_154(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_154(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_154(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_154(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_154(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_154(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_154(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_154(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_154(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_154(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_154(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_154(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_154(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_154(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_154(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_154(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_154(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_154(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_154(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_154(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_154(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_154(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_154(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_154(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_154(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_154(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_153(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_154(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_154(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_154(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_154(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_154(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_154(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_154(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_154(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_154(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_154(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_154(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_154(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_154(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_154(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_154(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_154(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_154(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_154(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_154(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_154(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_154(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_154(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_154(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_154(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_154(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_153(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_153(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x79234B4BE80207E6(iParam2, &Var1);
		if (!unk_0xD5451DF6AA0E4BDB(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0x9A0AEDE329E46AB4(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_138(iParam1, Var16.f_0, 14, iVar0);
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

void func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<16> func_155(int iParam0, int iParam1)
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
					if (Global_99250.f_7703.f_99.f_58[120])
					{
						func_158(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_158(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_158(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_158(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_158(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_158(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_158(&Var1, -99, -99, Global_99250.f_1754.f_539.f_196[0], Global_99250.f_1754.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_158(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_158(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_158(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_158(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_158(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_158(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_158(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_158(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_158(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_158(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_158(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_158(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_158(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_158(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_158(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_158(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_158(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_158(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_158(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_158(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_158(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_158(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_158(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_158(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_158(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_158(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_158(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_158(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_158(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_158(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_158(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_158(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_158(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_158(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_158(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_158(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_158(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_158(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_158(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_158(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_158(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_158(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_158(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_158(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_158(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_158(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_158(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_156(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_158(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_158(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_158(&Var1, -99, -99, Global_99250.f_1754.f_539.f_196[1], Global_99250.f_1754.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_158(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_158(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_158(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_158(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_158(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_158(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_158(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_158(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_158(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_158(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_158(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_158(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_158(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_158(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_158(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_158(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_158(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_158(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_158(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_158(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_158(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_158(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_158(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_158(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_158(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_158(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_158(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_158(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_158(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_158(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_158(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_158(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_158(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_158(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_158(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_158(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_158(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_158(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_158(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_158(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_158(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_158(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_158(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_158(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_156(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_158(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_158(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_158(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_158(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_158(&Var1, -99, -99, Global_99250.f_1754.f_539.f_196[2], Global_99250.f_1754.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_158(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_158(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_158(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_158(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_158(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_158(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_158(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_158(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_158(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_158(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_158(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_158(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_158(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_158(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_158(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_158(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_158(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_158(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_158(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_158(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_158(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_158(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_158(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_158(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_158(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_158(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_158(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_158(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_158(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_158(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_158(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_158(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_158(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_158(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_158(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_158(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_158(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_158(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_158(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_158(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_158(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_158(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_158(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_156(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_158(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_158(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_158(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_158(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_158(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_158(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_158(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_158(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_158(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_158(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_158(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_158(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_158(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_158(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_158(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_158(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_158(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_158(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_158(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_158(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_158(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_158(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_158(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_158(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_158(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_158(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_156(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_158(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_158(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_158(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_158(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_158(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_158(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_158(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_158(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_158(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_158(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_158(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_158(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_158(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_158(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_158(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_158(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_158(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_158(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_158(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_158(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_158(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_158(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_158(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_158(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_158(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_158(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_158(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_158(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_156(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_156(int iParam0, int iParam1, int iParam2, int iParam3)
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
	unk_0xAD5F4831DCFE18F7(iVar0, 0);
	unk_0xF682C64029C6AACF((iParam2 - iParam3), &Var1);
	if (!unk_0xD5451DF6AA0E4BDB(Var1.f_0))
	{
		iVar19 = 0;
		while (iVar19 < Var1.f_4)
		{
			if (unk_0x24EB6430BE37E102(Var1.f_1, iVar19, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						(*iParam0)[func_157(Var16.f_2)] = Var16.f_0;
					}
					else
					{
						(*iParam0)[func_157(Var16.f_2)] = func_138(iParam1, Var16.f_0, func_157(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*iParam0)[func_157(Var16.f_2)] = Var16.f_1;
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

int func_157(int iParam0)
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

void func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

struct<14> func_159(int iParam0, int iParam1, int iParam2)
{
	func_222();
	if (iParam0 == joaat("player_zero"))
	{
		func_204(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_185(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_160(iParam1, iParam2);
	}
	return Global_69178[0 /*14*/];
}

void func_160(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_184(iParam1);
			break;
		
		case 2:
			func_183(iParam1);
			break;
		
		case 3:
			func_180(iParam1);
			break;
		
		case 4:
			func_179(iParam1);
			break;
		
		case 6:
			func_178(iParam1);
			break;
		
		case 5:
			func_177(iParam1);
			break;
		
		case 8:
			func_176(iParam1);
			break;
		
		case 9:
			func_175(iParam1);
			break;
		
		case 10:
			func_174(iParam1);
			break;
		
		case 1:
			func_173(iParam1);
			break;
		
		case 7:
			func_172(iParam1);
			break;
		
		case 11:
			func_171(iParam1);
			break;
		
		case 12:
			func_170(iParam1);
			break;
		
		case 13:
			func_169(iParam1);
			break;
		
		case 14:
			func_161(iParam1);
			break;
	}
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
	iVar10 = 14;
	Global_69178[0 /*14*/].f_5 = 2;
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
			func_168(iVar10, iParam0, 155);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_162(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
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
	uParam0->f_12 = func_167(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x39BD4614CF899227(sParam3) != unk_0x39BD4614CF899227("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x573691DB812DC8AA(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x573691DB812DC8AA(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x573691DB812DC8AA(&(uParam0->f_6), 5);
		}
		unk_0x573691DB812DC8AA(&(uParam0->f_6), 1);
		unk_0x573691DB812DC8AA(&(uParam0->f_6), 2);
		unk_0x573691DB812DC8AA(&(uParam0->f_6), 6);
		if (func_48(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x99A214601817F926(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0x573691DB812DC8AA(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_166(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xA5F70A8B83BDFA49(&(uParam0->f_6), 2);
			}
			if (!func_166(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x573691DB812DC8AA(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_166(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xA5F70A8B83BDFA49(&(uParam0->f_6), 2);
			}
			if (!func_166(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x573691DB812DC8AA(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_166(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xA5F70A8B83BDFA49(&(uParam0->f_6), 2);
			}
			if (!func_166(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x573691DB812DC8AA(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x573691DB812DC8AA(&(uParam0->f_6), 0);
		unk_0x573691DB812DC8AA(&(uParam0->f_6), 5);
		if (func_148(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x573691DB812DC8AA(&(uParam0->f_6), 1);
		}
		if (func_148(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x573691DB812DC8AA(&(uParam0->f_6), 2);
		}
		if (!func_148(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x573691DB812DC8AA(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x573691DB812DC8AA(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_48(14))
			{
				return;
			}
			iVar0 = func_146(func_165(iParam1, uParam0->f_2), Global_69176, 0);
			if (unk_0xB56FEBC510E7E9DE(iVar0, uParam0->f_1))
			{
				unk_0x573691DB812DC8AA(&(uParam0->f_6), 1);
			}
			iVar0 = func_146(func_164(iParam1, uParam0->f_2), Global_69176, 0);
			if (unk_0xB56FEBC510E7E9DE(iVar0, uParam0->f_1))
			{
				unk_0x573691DB812DC8AA(&(uParam0->f_6), 2);
			}
			if (func_163(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_146(iVar1, Global_69176, 0);
				if (!unk_0xB56FEBC510E7E9DE(iVar0, uParam0->f_1))
				{
					unk_0x573691DB812DC8AA(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x573691DB812DC8AA(&(uParam0->f_6), 1);
			unk_0x573691DB812DC8AA(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x573691DB812DC8AA(&(uParam0->f_6), 1);
			unk_0x573691DB812DC8AA(&(uParam0->f_6), 2);
		}
	}
}

bool func_163(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 968;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 969;
					break;
				
				case 3:
					*uParam2 = 1419;
					break;
				
				case 4:
					*uParam2 = 985;
					break;
				
				case 6:
					*uParam2 = 993;
					break;
				
				case 8:
					*uParam2 = 1420;
					break;
				
				case 9:
					*uParam2 = 1428;
					break;
				
				case 10:
					*uParam2 = 1430;
					break;
				
				case 1:
					*uParam2 = 1001;
					break;
				
				case 7:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 977;
					break;
				
				case 14:
					*uParam2 = 1009;
					break;
				
				case 12:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 970;
					break;
				
				case 4:
					*uParam2 = 986;
					break;
				
				case 6:
					*uParam2 = 994;
					break;
				
				case 8:
					*uParam2 = 1421;
					break;
				
				case 9:
					*uParam2 = 1429;
					break;
				
				case 7:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 978;
					break;
				
				case 14:
					*uParam2 = 1010;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 971;
					break;
				
				case 4:
					*uParam2 = 987;
					break;
				
				case 6:
					*uParam2 = 995;
					break;
				
				case 8:
					*uParam2 = 1422;
					break;
				
				case 7:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 979;
					break;
				
				case 14:
					*uParam2 = 1011;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
	}
	return *uParam2 != 968;
}

int func_164(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 917;
					break;
				
				case 3:
					return 1404;
					break;
				
				case 4:
					return 933;
					break;
				
				case 6:
					return 941;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 9:
					return 1413;
					break;
				
				case 10:
					return 1415;
					break;
				
				case 1:
					return 949;
					break;
				
				case 7:
					return 1416;
					break;
				
				case 11:
					return 925;
					break;
				
				case 14:
					return 957;
					break;
				
				case 12:
					return 968;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 918;
					break;
				
				case 4:
					return 934;
					break;
				
				case 6:
					return 942;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 9:
					return 1414;
					break;
				
				case 7:
					return 1417;
					break;
				
				case 11:
					return 926;
					break;
				
				case 14:
					return 958;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 919;
					break;
				
				case 4:
					return 935;
					break;
				
				case 6:
					return 943;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 7:
					return 1418;
					break;
				
				case 11:
					return 927;
					break;
				
				case 14:
					return 959;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 965;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 966;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 967;
					break;
			}
			break;
	}
	return 925;
}

int func_165(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 865;
					break;
				
				case 3:
					return 1389;
					break;
				
				case 4:
					return 881;
					break;
				
				case 6:
					return 889;
					break;
				
				case 8:
					return 1390;
					break;
				
				case 9:
					return 1398;
					break;
				
				case 10:
					return 1400;
					break;
				
				case 1:
					return 897;
					break;
				
				case 7:
					return 1401;
					break;
				
				case 11:
					return 873;
					break;
				
				case 14:
					return 905;
					break;
				
				case 12:
					return 916;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 866;
					break;
				
				case 4:
					return 882;
					break;
				
				case 6:
					return 890;
					break;
				
				case 8:
					return 1391;
					break;
				
				case 9:
					return 1399;
					break;
				
				case 7:
					return 1402;
					break;
				
				case 11:
					return 874;
					break;
				
				case 14:
					return 906;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 867;
					break;
				
				case 4:
					return 883;
					break;
				
				case 6:
					return 891;
					break;
				
				case 8:
					return 1392;
					break;
				
				case 7:
					return 1403;
					break;
				
				case 11:
					return 875;
					break;
				
				case 14:
					return 907;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 913;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 914;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 915;
					break;
			}
			break;
	}
	return 873;
}

int func_166(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69176;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_147(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_146(iVar2, iVar0, 0);
		return unk_0xB56FEBC510E7E9DE(iVar3, iVar1);
	}
	return 0;
}

int func_167(int iParam0)
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

void func_168(int iParam0, int iParam1, int iParam2)
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
	uVar1 = Global_69178[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0xAD5F4831DCFE18F7(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xF682C64029C6AACF(iVar17, &Var2);
			if (!unk_0xD5451DF6AA0E4BDB(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_162(&(Global_69178[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_162(&(Global_69178[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x7A4BAB43523EE521(&Var20);
		iVar39 = 0;
		iVar40 = unk_0x95CB63A3CE2E9535(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0xC4025205E080C189(iVar38, &Var20);
			if (!unk_0xD5451DF6AA0E4BDB(Var20.f_0))
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
					func_162(&(Global_69178[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x99A214601817F926(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0x53D84A2C1A9F24B8(&Var41);
		iVar59 = 0;
		iVar60 = unk_0x95CB63A3CE2E9535(iVar1, 6, -1, 0, -1, func_151(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0x403D32C1E63ABDA1(iVar58, &Var41);
			if (!unk_0xD5451DF6AA0E4BDB(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_162(&(Global_69178[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x99A214601817F926(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_169(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
			func_168(iVar10, iParam0, 9);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_170(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
			func_168(iVar10, iParam0, 48);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_171(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_168(iVar10, iParam0, 1);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_172(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_168(iVar10, iParam0, 1);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_173(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
			func_168(iVar10, iParam0, 6);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_174(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
			func_168(iVar10, iParam0, 33);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_175(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
			func_168(iVar10, iParam0, 17);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_176(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
			func_168(iVar10, iParam0, 18);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_177(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
			func_168(iVar10, iParam0, 7);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_178(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
			func_168(iVar10, iParam0, 84);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_179(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
			func_168(iVar10, iParam0, 104);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_180(int iParam0)
{
	if (iParam0 < 136)
	{
		func_182(iParam0);
	}
	else
	{
		func_181(iParam0);
	}
	if (Global_69178[0 /*14*/].f_2 == -1)
	{
		func_168(3, iParam0, 242);
	}
}

void func_181(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_182(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_183(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
			func_168(iVar10, iParam0, 9);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_184(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 2;
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
			func_168(iVar10, iParam0, 7);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_185(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_203(iParam1);
			break;
		
		case 2:
			func_202(iParam1);
			break;
		
		case 3:
			func_198(iParam1);
			break;
		
		case 4:
			func_197(iParam1);
			break;
		
		case 6:
			func_196(iParam1);
			break;
		
		case 5:
			func_195(iParam1);
			break;
		
		case 8:
			func_194(iParam1);
			break;
		
		case 9:
			func_193(iParam1);
			break;
		
		case 10:
			func_192(iParam1);
			break;
		
		case 1:
			func_191(iParam1);
			break;
		
		case 7:
			func_190(iParam1);
			break;
		
		case 11:
			func_189(iParam1);
			break;
		
		case 12:
			func_188(iParam1);
			break;
		
		case 13:
			func_187(iParam1);
			break;
		
		case 14:
			func_186(iParam1);
			break;
	}
}

void func_186(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 175);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_187(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 9);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_188(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 47);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_189(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 63);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_190(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_168(iVar10, iParam0, 1);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_191(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 5);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_192(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 53);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_193(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 12);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_194(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 77);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_195(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 7);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_196(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 134);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_197(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 117);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_198(int iParam0)
{
	if (iParam0 < 107)
	{
		func_201(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_200(iParam0);
	}
	else
	{
		func_199(iParam0);
	}
	if (Global_69178[0 /*14*/].f_2 == -1)
	{
		func_168(3, iParam0, 318);
	}
}

void func_199(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_200(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_201(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_202(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 21);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_203(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 1;
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
			func_168(iVar10, iParam0, 10);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_204(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_221(iParam1);
			break;
		
		case 2:
			func_220(iParam1);
			break;
		
		case 3:
			func_217(iParam1);
			break;
		
		case 4:
			func_216(iParam1);
			break;
		
		case 6:
			func_215(iParam1);
			break;
		
		case 5:
			func_214(iParam1);
			break;
		
		case 8:
			func_213(iParam1);
			break;
		
		case 9:
			func_212(iParam1);
			break;
		
		case 10:
			func_211(iParam1);
			break;
		
		case 1:
			func_210(iParam1);
			break;
		
		case 7:
			func_209(iParam1);
			break;
		
		case 11:
			func_208(iParam1);
			break;
		
		case 12:
			func_207(iParam1);
			break;
		
		case 13:
			func_206(iParam1);
			break;
		
		case 14:
			func_205(iParam1);
			break;
	}
}

void func_205(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 113);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_206(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 10);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_207(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 53);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_208(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 45);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_209(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_168(iVar10, iParam0, 1);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_210(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 5);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_211(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 48);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_212(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 20);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_213(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 24);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_214(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 14);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_215(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 99);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_216(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 113);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_217(int iParam0)
{
	if (iParam0 < 60)
	{
		func_219(iParam0);
	}
	else
	{
		func_218(iParam0);
	}
	if (Global_69178[0 /*14*/].f_2 == -1)
	{
		func_168(3, iParam0, 181);
	}
}

void func_218(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_219(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_220(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 6);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_221(int iParam0)
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
	Global_69178[0 /*14*/].f_5 = 0;
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
			func_168(iVar10, iParam0, 7);
			return;
			break;
	}
	func_162(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_222()
{
	Global_69178[0 /*14*/].f_1 = -1;
	Global_69178[0 /*14*/].f_2 = -1;
	Global_69178[0 /*14*/].f_5 = -1;
	Global_69178[0 /*14*/].f_3 = -1;
	Global_69178[0 /*14*/].f_4 = -1;
	Global_69178[0 /*14*/].f_7 = 0;
	Global_69178[0 /*14*/].f_6 = 0;
	Global_69178[0 /*14*/].f_13 = -1;
	Global_69178[0 /*14*/].f_12 = 0;
	Global_69178[0 /*14*/] = 0;
	StringCopy(&(Global_69178[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_223(int iParam0, int iParam1, int iParam2)
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
	
	if (unk_0x1E80C02AC16B6622(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xDF1398076E26B0E4(iParam0);
	Global_69178[1 /*14*/] = { func_159(iVar0, iParam1, iParam2) };
	if (!unk_0xB56FEBC510E7E9DE(Global_69178[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_155(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_223(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { func_152(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_223(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_69178[2 /*14*/] = { func_159(iVar0, 14, iVar4) };
									if (Global_69178[2 /*14*/].f_12 == iVar3)
									{
										if (func_223(iParam0, 14, iVar4))
										{
											if (!func_116(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_69178[2 /*14*/])))
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
						iVar1 = func_140(iParam0, iVar2);
						Global_69178[2 /*14*/] = { func_159(iVar0, iVar2, iVar1) };
						if (!func_116(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_69178[2 /*14*/])))
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
		uVar32 = { func_152(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_223(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xB7A83E90E95B3E76(iParam0, Global_69178[1 /*14*/].f_12) == Global_69178[1 /*14*/].f_3 && (unk_0x7739EACC3B2657EC(iParam0, Global_69178[1 /*14*/].f_12) == Global_69178[1 /*14*/].f_4 || Global_69178[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_69178[1 /*14*/].f_3 == unk_0xB2833E96F49D3CDC(iParam0, func_151(iParam1)) && Global_69178[1 /*14*/].f_4 == unk_0xD01703B8B3FC785F(iParam0, func_151(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_224(var uParam0, int iParam1)
{
	unk_0x9C28C3BB5AAECB01(joaat("sp_last_mission_name"), uParam0, 1);
	if (unk_0xB56FEBC510E7E9DE(iParam1, 0))
	{
		unk_0x9C28C3BB5AAECB01(joaat("sp0_last_mission_name"), uParam0, 1);
	}
	if (unk_0xB56FEBC510E7E9DE(iParam1, 1))
	{
		unk_0x9C28C3BB5AAECB01(joaat("sp1_last_mission_name"), uParam0, 1);
	}
	if (unk_0xB56FEBC510E7E9DE(iParam1, 2))
	{
		unk_0x9C28C3BB5AAECB01(joaat("sp2_last_mission_name"), uParam0, 1);
	}
}

int func_225()
{
	func_70();
	switch (Global_99250.f_1754.f_539.f_3549)
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

struct<2> func_226(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_227(iParam0) };
	if (unk_0x0AAC2160036975D9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_227(int iParam0)
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

void func_228(int iParam0, int iParam1)
{
	Global_69585 = iParam1;
	if (Global_55653)
	{
		return;
	}
	if (Global_55680)
	{
		Global_55680 = 0;
		return;
	}
	if (unk_0xB1A77D5C890711F9(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_55653)
		{
		}
		Global_55679 = iParam0;
		Global_55653 = 1;
		Global_55664 = 1;
	}
}

void func_229(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 32, 1);
		unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 250, 1);
	}
	unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), true, 0);
	unk_0x4AAD01BBE039D160(1f);
	unk_0xCBC9707F3BE3D5C2(5);
	unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
	unk_0x9EFEFCDE6C8FC653(unk_0x8ACD527A7E574590(), 1f);
	unk_0xE7FCD2DA72A4F384(unk_0x8ACD527A7E574590(), 1f);
	unk_0x1B40500A7841D6AB(1);
	unk_0x488AF65D7EDB6B4A(1);
	unk_0xC434ECD612504B54(0, 0);
	unk_0xDBD9A13DC80137C1(1f);
	func_240();
	func_239(1, 1);
	func_238();
	func_236();
	func_235(30000);
	if (iParam1 == 1)
	{
		func_230(iParam0, iParam2, iParam3);
	}
	unk_0x275546117AF1F063(0, 0);
}

void func_230(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar32;
	
	if (iParam0 != -1)
	{
		func_232(iParam0, &Var0);
		MemCopy(&uVar32, {func_227(iParam0)}, 4);
		unk_0x1E1C9E07EE942B10(&uVar32, 0, Global_91143, 0);
		func_231(&uVar32, Var0.f_3, Global_91143, iParam1, iParam2);
	}
}

void func_231(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (unk_0x0AAC2160036975D9(&Global_88509))
	{
		return;
	}
	if (unk_0x5CD28EF9FEB4216C(uParam0, &Global_88509, 0, -1) != 0)
	{
		return;
	}
	unk_0x168C4059D0E3A455(uParam0, uParam1, uParam2, uParam3, uParam4, Global_85616);
	StringCopy(&Global_88509, "", 64);
}

void func_232(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_233(uParam1, "Abigail1", func_226(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_234(iParam0), 1, 0);
			break;
		
		case 1:
			func_233(uParam1, "Abigail2", func_226(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_234(iParam0), 1, 0);
			break;
		
		case 2:
			func_233(uParam1, "Barry1", func_226(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_234(iParam0), 1, 0);
			break;
		
		case 3:
			func_233(uParam1, "Barry2", func_226(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_234(iParam0), 1, 1);
			break;
		
		case 4:
			func_233(uParam1, "Barry3", func_226(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 5:
			func_233(uParam1, "Barry3A", func_226(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 6:
			func_233(uParam1, "Barry3C", func_226(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 7:
			func_233(uParam1, "Barry4", func_226(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_234(iParam0), 0, 0);
			break;
		
		case 8:
			func_233(uParam1, "Dreyfuss1", func_226(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 9:
			func_233(uParam1, "Epsilon1", func_226(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 10:
			func_233(uParam1, "Epsilon2", func_226(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_234(iParam0), 1, 0);
			break;
		
		case 11:
			func_233(uParam1, "Epsilon3", func_226(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 12:
			func_233(uParam1, "Epsilon4", func_226(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 13:
			func_233(uParam1, "Epsilon5", func_226(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_234(iParam0), 1, 0);
			break;
		
		case 14:
			func_233(uParam1, "Epsilon6", func_226(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 15:
			func_233(uParam1, "Epsilon7", func_226(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 16:
			func_233(uParam1, "Epsilon8", func_226(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_234(iParam0), 1, 0);
			break;
		
		case 17:
			func_233(uParam1, "Extreme1", func_226(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 18:
			func_233(uParam1, "Extreme2", func_226(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 19:
			func_233(uParam1, "Extreme3", func_226(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 20:
			func_233(uParam1, "Extreme4", func_226(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 21:
			func_233(uParam1, "Fanatic1", func_226(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_234(iParam0), 1, 0);
			break;
		
		case 22:
			func_233(uParam1, "Fanatic2", func_226(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_234(iParam0), 1, 0);
			break;
		
		case 23:
			func_233(uParam1, "Fanatic3", func_226(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_234(iParam0), 0, 1);
			break;
		
		case 24:
			func_233(uParam1, "Hao1", func_226(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_234(iParam0), 0, 1);
			break;
		
		case 25:
			func_233(uParam1, "Hunting1", func_226(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 26:
			func_233(uParam1, "Hunting2", func_226(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 27:
			func_233(uParam1, "Josh1", func_226(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_234(iParam0), 1, 0);
			break;
		
		case 28:
			func_233(uParam1, "Josh2", func_226(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_234(iParam0), 1, 1);
			break;
		
		case 29:
			func_233(uParam1, "Josh3", func_226(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_234(iParam0), 1, 1);
			break;
		
		case 30:
			func_233(uParam1, "Josh4", func_226(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_234(iParam0), 1, 0);
			break;
		
		case 31:
			func_233(uParam1, "Maude1", func_226(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 32:
			func_233(uParam1, "Minute1", func_226(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 33:
			func_233(uParam1, "Minute2", func_226(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 34:
			func_233(uParam1, "Minute3", func_226(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 35:
			func_233(uParam1, "MrsPhilips1", func_226(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 36:
			func_233(uParam1, "MrsPhilips2", func_226(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 37:
			func_233(uParam1, "Nigel1", func_226(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_234(iParam0), 1, 0);
			break;
		
		case 38:
			func_233(uParam1, "Nigel1A", func_226(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_234(iParam0), 1, 1);
			break;
		
		case 39:
			func_233(uParam1, "Nigel1B", func_226(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_234(iParam0), 1, 1);
			break;
		
		case 40:
			func_233(uParam1, "Nigel1C", func_226(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_234(iParam0), 1, 1);
			break;
		
		case 41:
			func_233(uParam1, "Nigel1D", func_226(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_234(iParam0), 1, 1);
			break;
		
		case 42:
			func_233(uParam1, "Nigel2", func_226(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_234(iParam0), 1, 1);
			break;
		
		case 43:
			func_233(uParam1, "Nigel3", func_226(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_234(iParam0), 1, 1);
			break;
		
		case 44:
			func_233(uParam1, "Omega1", func_226(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 45:
			func_233(uParam1, "Omega2", func_226(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 46:
			func_233(uParam1, "Paparazzo1", func_226(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 47:
			func_233(uParam1, "Paparazzo2", func_226(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 48:
			func_233(uParam1, "Paparazzo3", func_226(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 49:
			func_233(uParam1, "Paparazzo3A", func_226(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 50:
			func_233(uParam1, "Paparazzo3B", func_226(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 51:
			func_233(uParam1, "Paparazzo4", func_226(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 52:
			func_233(uParam1, "Rampage1", func_226(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 54:
			func_233(uParam1, "Rampage3", func_226(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_234(iParam0), 1, 0);
			break;
		
		case 55:
			func_233(uParam1, "Rampage4", func_226(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_234(iParam0), 1, 0);
			break;
		
		case 56:
			func_233(uParam1, "Rampage5", func_226(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_234(iParam0), 0, 0);
			break;
		
		case 53:
			func_233(uParam1, "Rampage2", func_226(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_234(iParam0), 1, 0);
			break;
		
		case 57:
			func_233(uParam1, "TheLastOne", func_226(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 58:
			func_233(uParam1, "Tonya1", func_226(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 59:
			func_233(uParam1, "Tonya2", func_226(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 60:
			func_233(uParam1, "Tonya3", func_226(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 61:
			func_233(uParam1, "Tonya4", func_226(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		case 62:
			func_233(uParam1, "Tonya5", func_226(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_234(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_233(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_234(int iParam0)
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

void func_235(int iParam0)
{
	Global_36251 = (unk_0x3EAC9995EC220C5A() + iParam0);
}

void func_236()
{
	if (Global_88751)
	{
		func_70();
		unk_0xB5338219E528B84F(func_237(Global_99250.f_1754.f_539.f_3549));
	}
	else
	{
		unk_0xB5338219E528B84F("");
	}
}

char* func_237(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

void func_238()
{
	char cVar0[24];
	
	if (unk_0x48318B6DD4499562() || unk_0xBB3DCD23C363D187())
	{
		unk_0x6AB8498FEFC03AD9(StackVal, 0, 0, 0);
	}
	else if (unk_0xF10A9EEADE6FD3EB() || unk_0xA24A81C5933F1B29())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x28C4EBB8F031876D(0, &cVar0);
	}
}

void func_239(int iParam0, int iParam1)
{
	Global_88746 = iParam0;
	Global_88747 = iParam1;
}

void func_240()
{
	if (Global_69571 != 6)
	{
	}
	if (Global_69576)
	{
		unk_0x2CFB33EDB2933AD4(15);
		Global_69576 = 0;
		Global_17257.f_7857 = 0;
	}
	Global_69571 = 6;
	Global_69573 = -1;
	Global_69572 = -1;
}

void func_241(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35662)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35661 = 0;
	Global_35663 = 0;
	Global_35700 = 15;
	Global_55656 = 0;
	Global_55657 = 0;
}

void func_242(int iParam0, bool bParam1)
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
	
	func_232(iParam0, &Var0);
	if (!unk_0x35D1CAD6ADAB6491(&(Var0.f_16), ""))
	{
		while (!func_270(&(Var0.f_16)))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (Var0.f_22 != 0)
	{
		func_269(Var0.f_22, 0);
	}
	func_260(iParam0, Global_69586);
	if (!bParam1)
	{
		iVar32 = func_259(iParam0);
		if (iVar32 != 0)
		{
			if (!unk_0xE14452524F76D452(iVar32))
			{
				unk_0xFB73D69070E537BD(iVar32);
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
					func_232(iVar67, &Var35);
					if (Var35.f_5 == Var0.f_5)
					{
						if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar67 /*6*/], 3))
						{
							bVar33 = false;
						}
						if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar67 /*6*/], 0))
						{
							func_247(iVar67);
						}
					}
				}
				iVar34++;
			}
		}
		if (bVar33)
		{
			func_247(Var0.f_24);
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
				func_232(iVar101, &Var69);
				if (Var69.f_5 == Var0.f_25)
				{
					func_247(iVar101);
				}
			}
			iVar68++;
		}
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iParam0 /*6*/], 3))
	{
		unk_0x573691DB812DC8AA(&(Global_99250.f_17192[iParam0 /*6*/]), 3);
		Global_98337[iParam0 /*10*/].f_5 = 1;
		func_244(iParam0);
		iVar102 = func_243(iParam0);
		if (iVar102 != 322)
		{
			func_84(iVar102, 0, 0);
		}
	}
}

int func_243(int iParam0)
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

void func_244(int iParam0)
{
	func_246(iParam0, 1);
	Global_99250.f_17192[iParam0 /*6*/].f_3 = func_245();
	Global_99250.f_17192.f_380++;
}

int func_245()
{
	return (Global_99250.f_8634.f_21 + Global_99250.f_17192.f_380);
}

void func_246(var uParam0, bool bParam1)
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
		Global_99250.f_25017.f_472 = iVar0;
	}
}

void func_247(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return;
	}
	func_248(iParam0);
	unk_0x573691DB812DC8AA(&(Global_99250.f_17192[iParam0 /*6*/]), 0);
}

void func_248(int iParam0)
{
	switch (iParam0)
	{
		case 30:
			func_252(22, 1, 0, 1, 0);
			break;
		
		case 15:
			func_249(37, 0);
			break;
		
		default:
			break;
	}
}

void func_249(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_251(iParam0, 0))
		{
			func_250(iParam0, 1, 0);
			func_250(iParam0, 2, 0);
			func_250(iParam0, 3, 0);
			func_250(iParam0, 4, 0);
			func_250(iParam0, 0, 1);
			Global_68186[iParam0] = 1;
		}
	}
	else
	{
		func_250(iParam0, 0, 0);
	}
}

void func_250(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x573691DB812DC8AA(&(Global_99250.f_18735[iParam0]), iParam1);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_18735[iParam0]), iParam1);
	}
}

bool func_251(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB56FEBC510E7E9DE(Global_99250.f_18735[iParam0], iParam1);
}

void func_252(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_69317)
		{
			Global_2426494.f_74.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_99250.f_5879.f_227[iParam0] = iParam1;
		}
		Global_32668[iParam0] = iParam2;
		Global_32867[iParam0] = 1;
		func_255(iParam0, bParam3, iParam4, 0);
		func_253(iParam0, iParam1);
	}
}

void func_253(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0xF2768246C37ECE4F("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0xF2768246C37ECE4F("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x5E433920A96A00C1("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x5E433920A96A00C1("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_254(0, 0);
			}
			else
			{
				func_254(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0xF2768246C37ECE4F("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0xF2768246C37ECE4F("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xA0ED5225A1964330("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x2084300F2D91A8E6("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x2084300F2D91A8E6("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x2084300F2D91A8E6("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x2084300F2D91A8E6("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_254(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x573691DB812DC8AA(&Global_97890, iParam0);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_97890, iParam0);
	}
	Global_97889 = 1;
}

bool func_255(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	func_258(&Var3, iParam0);
	if (func_256())
	{
		iVar1 = Global_99250.f_5879.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2426494.f_74.f_227[iParam0];
	}
	iVar2 = Global_33066[iParam0];
	if (unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !bParam3)
	{
	}
	else
	{
		bVar99 = true;
		if (unk_0x39BD4614CF899227(unk_0x664B47C58CE8A0A4()) != unk_0x39BD4614CF899227("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32668[iParam0] && unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
				}
				if (!unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) || unk_0xE030B3865A559522(unk_0x77F050A399DB77ED()))
				{
					if (!unk_0x2CC731F9E664299E())
					{
						bVar99 = false;
					}
				}
			}
		}
		if (unk_0x3CFF38F5196B193E() && (!unk_0xA153A26DF49EBCC0() || unk_0x9F0EFBAAF424E79A() != 5))
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
							unk_0xFE13B06380BD607C(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x523CCF1ADDF2EFE8(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34262[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x39BD4614CF899227(&(Var3.f_8[1 /*8*/])) != unk_0x39BD4614CF899227("") && unk_0x39BD4614CF899227(&(Var3.f_8[1 /*8*/])) != unk_0x39BD4614CF899227(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4DEBC98223AC90EF(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xEE3240EAE773A95A(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227("") && unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227("REMOVE_ALL_STATES")) && unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4DEBC98223AC90EF(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xEE3240EAE773A95A(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x39BD4614CF899227(&(Var3.f_8[0 /*8*/])) != unk_0x39BD4614CF899227(""))
						{
							if (!unk_0x4DEBC98223AC90EF(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x564E857358FF5719(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x39BD4614CF899227(&(Var3.f_34)) != unk_0x39BD4614CF899227(""))
						{
							if (!unk_0x4DEBC98223AC90EF(&(Var3.f_34)))
							{
								unk_0x564E857358FF5719(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x39BD4614CF899227(&(Var3.f_34)) != unk_0x39BD4614CF899227(""))
						{
							if (unk_0x4DEBC98223AC90EF(&(Var3.f_34)))
							{
								unk_0xEE3240EAE773A95A(&(Var3.f_34));
							}
						}
						if (unk_0x39BD4614CF899227(&(Var3.f_8[0 /*8*/])) != unk_0x39BD4614CF899227("") && unk_0x39BD4614CF899227(&(Var3.f_8[0 /*8*/])) != unk_0x39BD4614CF899227(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4DEBC98223AC90EF(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xEE3240EAE773A95A(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227("") && unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227("REMOVE_ALL_STATES")) && unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4DEBC98223AC90EF(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xEE3240EAE773A95A(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x39BD4614CF899227(&(Var3.f_8[1 /*8*/])) != unk_0x39BD4614CF899227(""))
						{
							if (!unk_0x4DEBC98223AC90EF(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x564E857358FF5719(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x39BD4614CF899227(&(Var3.f_34)) != unk_0x39BD4614CF899227(""))
						{
							if (unk_0x4DEBC98223AC90EF(&(Var3.f_34)))
							{
								unk_0xEE3240EAE773A95A(&(Var3.f_34));
							}
						}
						if (unk_0x39BD4614CF899227(&(Var3.f_8[0 /*8*/])) != unk_0x39BD4614CF899227("") && unk_0x39BD4614CF899227(&(Var3.f_8[0 /*8*/])) != unk_0x39BD4614CF899227(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4DEBC98223AC90EF(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xEE3240EAE773A95A(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x39BD4614CF899227(&(Var3.f_8[1 /*8*/])) != unk_0x39BD4614CF899227("") && unk_0x39BD4614CF899227(&(Var3.f_8[1 /*8*/])) != unk_0x39BD4614CF899227(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4DEBC98223AC90EF(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xEE3240EAE773A95A(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227("") && unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227("REMOVE_ALL_STATES"))
						{
							if (!unk_0x4DEBC98223AC90EF(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x564E857358FF5719(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34063[iParam0] = 1;
					Global_34262[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = unk_0x9794B606B17FAF25(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (unk_0x39BD4614CF899227(&(Var3.f_50)) != unk_0x39BD4614CF899227(""))
						{
							if (unk_0x7C9DDA3CF59E0676(iVar100, &(Var3.f_50)))
							{
								unk_0x365FBB7E1B037CE1(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x39BD4614CF899227(&(Var3.f_8[1 /*8*/])) != unk_0x39BD4614CF899227(""))
							{
								if (unk_0x7C9DDA3CF59E0676(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x365FBB7E1B037CE1(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227("") && unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227("REMOVE_ALL_STATES")) && unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x7C9DDA3CF59E0676(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x365FBB7E1B037CE1(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x39BD4614CF899227(&(Var3.f_8[0 /*8*/])) != unk_0x39BD4614CF899227(""))
							{
								if (!unk_0x7C9DDA3CF59E0676(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x3A95B9112BB16556(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x39BD4614CF899227(&(Var3.f_8[0 /*8*/])) != unk_0x39BD4614CF899227(""))
							{
								if (unk_0x7C9DDA3CF59E0676(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x365FBB7E1B037CE1(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227("") && unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227("REMOVE_ALL_STATES")) && unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x7C9DDA3CF59E0676(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x365FBB7E1B037CE1(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x39BD4614CF899227(&(Var3.f_8[1 /*8*/])) != unk_0x39BD4614CF899227(""))
							{
								if (!unk_0x7C9DDA3CF59E0676(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x3A95B9112BB16556(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x39BD4614CF899227(&(Var3.f_8[0 /*8*/])) != unk_0x39BD4614CF899227(""))
							{
								if (unk_0x7C9DDA3CF59E0676(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x365FBB7E1B037CE1(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x39BD4614CF899227(&(Var3.f_8[1 /*8*/])) != unk_0x39BD4614CF899227(""))
							{
								if (unk_0x7C9DDA3CF59E0676(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x365FBB7E1B037CE1(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227("") && unk_0x39BD4614CF899227(&(Var3.f_8[2 /*8*/])) != unk_0x39BD4614CF899227("REMOVE_ALL_STATES"))
							{
								if (!unk_0x7C9DDA3CF59E0676(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x3A95B9112BB16556(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0x536F0A80D4AF2455(iVar100);
						}
					}
					Global_34262[iParam0] = 1;
					Global_34063[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0xA2490B3CE6382FBB(Var3, unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), 1) < 250f)
					{
						uVar98 = unk_0x2AECD562BBAA5182(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0x298F7572DFFA3C48(uVar98))
						{
							if (iVar1 == 0)
							{
								unk_0x5D25F506F1E3AADA(uVar98, 3);
								Global_34262[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0x46981E897F03A016(uVar98) != 6 && unk_0x46981E897F03A016(uVar98) != 7) && unk_0x46981E897F03A016(uVar98) != 8)
								{
									unk_0x5D25F506F1E3AADA(uVar98, 10);
									Global_34262[iParam0] = 1;
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
						unk_0x2CD6C7BE921E4FCC(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0xA5F70A8B83BDFA49(&(Global_32414[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x65CCB4022B31D62E(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x573691DB812DC8AA(&(Global_32414[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_32867[iParam0] = 0;
				Global_33066[iParam0] = iVar1;
				if (!func_256())
				{
					if (!Global_33663[iParam0])
					{
						Global_33663[iParam0] = 1;
						Global_33862++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_256()
{
	if ((func_86() == -1 || func_86() == 999) && !func_257() == 0)
	{
		return 1;
	}
	return 0;
}

int func_257()
{
	return Global_25116;
}

int func_258(var uParam0, int iParam1)
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

int func_259(int iParam0)
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
			if (unk_0xB56FEBC510E7E9DE(Global_99250.f_17192.f_382, 0))
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
			if (Global_99250.f_7703.f_99.f_58[101])
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

void func_260(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 46:
			func_261(4, bParam1);
			break;
		
		case 16:
			func_261(6, bParam1);
			break;
		
		case 37:
			func_261(17, bParam1);
			break;
		
		case 31:
			func_261(16, bParam1);
			break;
	}
}

void func_261(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_268(iParam0))
		{
			unk_0x573691DB812DC8AA(&(Global_99250.f_30887), iVar0);
			if (!bParam1)
			{
				func_266(func_267(iParam0));
				if (!func_265(68))
				{
					func_262("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

void func_262(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_263(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_263(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35D1CAD6ADAB6491(sParam0, ""))
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
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0x35D1CAD6ADAB6491(&(Global_99250.f_24863[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99250.f_24863.f_145 < 9)
	{
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_4), sParam1, 16);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_8 = (unk_0x3EAC9995EC220C5A() + iParam3);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_9 = iParam5;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_11 = iParam6;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_12 = uParam2;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_13 = iParam7;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_14 = iParam8;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = ((unk_0x3EAC9995EC220C5A() + iParam3) + iParam4);
		}
		else
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = -1;
		}
		Global_99250.f_24863.f_145++;
		func_264();
	}
}

void func_264()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_99250.f_24863.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[0])
			{
				Global_99250.f_24863.f_146[0] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[1])
			{
				Global_99250.f_24863.f_146[1] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[2])
			{
				Global_99250.f_24863.f_146[2] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_265(int iParam0)
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
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_24863.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_266(var uParam0)
{
	unk_0x2B8B3581C4E63AD1("");
	unk_0x5651CD0A33E6EF8D("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", uParam0);
}

char* func_267(int iParam0)
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

int func_268(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 28)
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_30887, iParam0);
	}
	return 0;
}

void func_269(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_99250.f_7231[iParam0] = 1;
	Global_99250.f_7231.f_236[iParam0] = (unk_0x3EAC9995EC220C5A() + iParam1);
}

int func_270(char* sParam0)
{
	int iVar0;
	
	iVar0 = 1424;
	if (!unk_0x1CCBF2E5595B1D60(sParam0))
	{
		return 1;
	}
	if (unk_0x35D1CAD6ADAB6491(sParam0, "controller_Races"))
	{
		if (unk_0xB1A77D5C890711F9(joaat("controller_races")) > 0)
		{
			return 1;
		}
		iVar0 = 128;
	}
	unk_0x507887ECD0989471(sParam0);
	if (unk_0xF93DA38375EB3977(sParam0))
	{
		unk_0xE81651AD79516E48(sParam0, iVar0);
		unk_0x2C85BCB989483284(sParam0);
		return 1;
	}
	return 0;
}

int func_271()
{
	return func_272(unk_0x664B47C58CE8A0A4(), 0);
}

int func_272(char* sParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x39BD4614CF899227(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_232(iVar0, &uVar1);
		if (unk_0x39BD4614CF899227(uVar1) == iVar33)
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

void func_273(int iParam0)
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

void func_274()
{
	if (func_78(iLocal_578))
	{
		if (func_17(iLocal_615))
		{
			if (unk_0xE5FADE1166052251(iLocal_578, iLocal_615, 0))
			{
				if (func_16(iLocal_632))
				{
					if (unk_0xEAEB0319E5E34841(iLocal_578))
					{
						unk_0x71EE4656ECAC34AE(iLocal_578, 0, iLocal_632, 0f, 0f, 0f);
					}
				}
				if (iLocal_333 == 0)
				{
					Local_209 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
					iLocal_260 = unk_0xF2DB717A73826179((Local_209.f_2 + 20f));
					if (iLocal_260 == 0)
					{
					}
					if (iLocal_270 < 2)
					{
						if (iLocal_272 == 0)
						{
							if (iLocal_360 == 0)
							{
								if (iLocal_364 == 0)
								{
									if (func_16(iLocal_632))
									{
										unk_0x0A5F0471674CF679(iLocal_578, iLocal_615, iLocal_632, 0, 0f, 0f, 0f, 4, fLocal_153, 50f, -1f, -1, 40, -1082130432, 0);
									}
								}
							}
							else
							{
								unk_0x0A5F0471674CF679(iLocal_578, iLocal_615, 0, 0, unk_0xAF99169F0F5AE41D(iLocal_615, 1), 4, 0.1f, -1f, -1f, iLocal_260 + 100, 100, -1082130432, 0);
							}
							iLocal_273 = unk_0x3EAC9995EC220C5A();
							iLocal_272 = 1;
						}
						else if (iLocal_272 == 1)
						{
							if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 10000)
							{
								if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && func_284(unk_0x77F050A399DB77ED(), iLocal_615, 0) < 85f)
								{
									if (iLocal_279 < 25)
									{
										unk_0xEBCB31D6E4BC1DCC(Local_209, iLocal_279, &Local_221, 1, 1077936128, 0);
										if (func_276(unk_0x77F050A399DB77ED(), Local_221, 65f) && !func_276(unk_0x77F050A399DB77ED(), Local_221, 40f))
										{
											if (!unk_0x0B6E83A9A7ED3EBA(iLocal_579))
											{
												if (iLocal_360 == 0)
												{
												}
											}
											else if (iLocal_360 == 0)
											{
											}
											iLocal_273 = unk_0x3EAC9995EC220C5A();
											iLocal_272 = 2;
											iLocal_279 = 1;
										}
										else
										{
											iLocal_279++;
										}
									}
									else
									{
										if (!unk_0x0B6E83A9A7ED3EBA(iLocal_579))
										{
											if (iLocal_360 == 0)
											{
											}
										}
										else if (iLocal_360 == 0)
										{
										}
										iLocal_273 = unk_0x3EAC9995EC220C5A();
										iLocal_272 = 2;
										iLocal_279 = 1;
									}
								}
							}
						}
						else if (iLocal_272 == 2)
						{
							iLocal_274 = unk_0x3EAC9995EC220C5A();
							if ((iLocal_274 > iLocal_273 + 20000 || !func_55(unk_0x77F050A399DB77ED(), iLocal_615, 85f)) || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
							{
								iLocal_272 = 0;
							}
						}
						if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 8000)
						{
							if (iLocal_257 == iLocal_258 + 1 || iLocal_364 == 1)
							{
								iLocal_364 = 1;
								if (!unk_0xEA9C2A206A86B744())
								{
									if (iLocal_365 == 0)
									{
										if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
										{
											iLocal_365 = 1;
										}
									}
									if (iLocal_367 == 0)
									{
										if (func_275(&uLocal_390, "EPS8AU", "EPS8_HEL3", 7, 0, 0, 0))
										{
											iLocal_367 = 1;
										}
									}
									if (fLocal_146 > 300f)
									{
										fLocal_146 = (fLocal_146 - 0.1f);
									}
									if (fLocal_153 > 28f)
									{
										fLocal_153 = (fLocal_153 - 0.02f);
									}
								}
								if (iLocal_300 == 0)
								{
									if (iLocal_360 == 0)
									{
										if (func_16(iLocal_632))
										{
											unk_0x0A5F0471674CF679(iLocal_578, iLocal_615, iLocal_632, 0, 0f, 0f, 0f, 4, fLocal_153, 50f, -1f, -1, 40, -1082130432, 0);
										}
										unk_0x638E8CC91D04CA94(iLocal_578, fLocal_153);
										iLocal_300++;
									}
								}
								else
								{
									iLocal_300++;
									if (iLocal_300 > 30)
									{
										iLocal_300 = 0;
									}
								}
								if (iLocal_281 > 3)
								{
									if (func_56(iLocal_578))
									{
										iLocal_270 = 0;
										if (iLocal_360 == 1)
										{
											unk_0x0A5F0471674CF679(iLocal_578, iLocal_615, 0, unk_0x77F050A399DB77ED(), Local_209, 9, 200f, 2f, -1f, iLocal_260 + 10, 50, -1082130432, 0);
											if (iLocal_262 > 0)
											{
												if (!func_286())
												{
													if (iLocal_284 == 0)
													{
														if (func_63(&uLocal_390, "EPS8AU", "EPS8_HEL2", "EPS8_HEL2_1", 5, 0, 0))
														{
															iLocal_284 = 1;
														}
													}
													else if (iLocal_284 == 1)
													{
														if (func_63(&uLocal_390, "EPS8AU", "EPS8_HEL2", "EPS8_HEL2_2", 5, 0, 0))
														{
															iLocal_284 = 2;
														}
													}
												}
											}
										}
										iLocal_360 = 0;
										if (func_78(iLocal_579))
										{
											if (unk_0x49C650267EDFEBC6(iLocal_579, 780511057) != 1)
											{
												if (unk_0x49C650267EDFEBC6(iLocal_579, 242628503) != 1)
												{
													unk_0xFBE25F0677076CF9(iLocal_579, unk_0x77F050A399DB77ED(), 0, 16);
												}
											}
										}
									}
									else if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
									{
										if (iLocal_270 == 0)
										{
											iLocal_268 = unk_0x3EAC9995EC220C5A();
											iLocal_270 = 1;
										}
										else if (iLocal_270 == 1)
										{
											iLocal_269 = unk_0x3EAC9995EC220C5A();
											if (iLocal_269 > iLocal_268 + 4000)
											{
												if (func_78(iLocal_579))
												{
													unk_0xE2CB8488CFA42209(iLocal_579);
												}
												if (iLocal_360 == 0)
												{
													unk_0x0A5F0471674CF679(iLocal_578, iLocal_615, 0, 0, unk_0xAF99169F0F5AE41D(iLocal_615, 1), 4, 0.1f, -1f, -1f, -1, 100, -1082130432, 0);
												}
												iLocal_360 = 1;
											}
											if (!func_286())
											{
												if (iLocal_269 > iLocal_268 + 10000)
												{
													if (iLocal_262 == 0)
													{
														if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_9", 5, 0, 0))
														{
															iLocal_262 = 1;
														}
													}
												}
												if (iLocal_269 > iLocal_268 + 25000)
												{
													if (iLocal_262 == 1)
													{
														if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_10", 5, 0, 0))
														{
															iLocal_262 = 2;
														}
													}
												}
												if (iLocal_269 > (iLocal_268 + 40000))
												{
													if (iLocal_262 == 2)
													{
														if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_11", 5, 0, 0))
														{
															unk_0x746BA52A343DAF52(5f, 5f, 1);
															iLocal_262 = 3;
															iLocal_270 = 2;
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
					else
					{
						unk_0x0A5F0471674CF679(iLocal_578, iLocal_615, 0, 0, (Local_209.f_0 + 600f), (Local_209.f_1 + 600f), (Local_209.f_2 + 100f), 4, 200f, -1f, -1f, -1, 100, -1082130432, 0);
						unk_0x5817B24FA3E70BC6(iLocal_615, 0, 0);
						iLocal_373 = 1;
					}
				}
			}
		}
	}
}

bool func_275(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_77(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_64(sParam2, iParam3, 0);
}

bool func_276(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_277()
{
	if (iLocal_336 == 0)
	{
		if (iLocal_333 == 0)
		{
			if (iLocal_568 == 8)
			{
				func_24(&iLocal_935);
			}
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_632))
			{
				if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
				{
					if (!unk_0xC3B073777B46C61A(iLocal_938))
					{
						iLocal_938 = func_278(iLocal_632, 1, 5);
						if (iLocal_568 == 3)
						{
							if (unk_0xC3B073777B46C61A(iLocal_939))
							{
								func_24(&iLocal_939);
								if (iLocal_332 == 0)
								{
									func_285("EPS8_06", 7500, 0);
									iLocal_332 = 1;
								}
							}
						}
						else if (iLocal_568 == 4)
						{
							if (unk_0xC3B073777B46C61A(iLocal_935))
							{
								func_24(&iLocal_935);
								if (iLocal_332 == 0)
								{
									func_285("EPS8_06", 7500, 0);
									iLocal_332 = 1;
								}
							}
						}
					}
				}
				else
				{
					if (unk_0x2AA05370067DC5AC(unk_0x77F050A399DB77ED()) > 17f)
					{
						if (iLocal_330 == 1)
						{
							unk_0x42FCD0B0BBF90976(iLocal_632, 5, 0);
							iLocal_330 = 0;
						}
					}
					func_24(&iLocal_938);
					if (iLocal_568 == 3)
					{
						if (!unk_0xC3B073777B46C61A(iLocal_939))
						{
							iLocal_939 = func_278(uLocal_616[0], 1, 5);
							if (iLocal_358 == 0)
							{
								func_285("EPS8_05", 7500, 0);
								iLocal_358 = 1;
							}
						}
					}
					else if (iLocal_568 == 4)
					{
						if (!unk_0xC3B073777B46C61A(iLocal_935))
						{
							iLocal_935 = unk_0x1802011F6E339FFF(Local_158);
						}
					}
				}
			}
		}
		else
		{
			if (iLocal_568 == 8)
			{
				func_24(&iLocal_938);
			}
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_615))
			{
				if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_615, 0))
				{
					if (!unk_0xC3B073777B46C61A(iLocal_935))
					{
						iLocal_935 = unk_0x1802011F6E339FFF(Local_158);
					}
				}
				else
				{
					func_24(&iLocal_935);
				}
			}
		}
	}
	else
	{
		if (iLocal_568 == 8)
		{
			func_24(&iLocal_938);
		}
		if (iLocal_568 == 8)
		{
			func_24(&iLocal_935);
		}
	}
}

int func_278(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_16(iParam0))
	{
		iVar0 = unk_0xBAA49E1DC5584B87(iParam0);
		unk_0x0AA0CF6371DDEDCF(iVar0, iParam1);
		unk_0x18EA864BF4963320(iVar0, iParam2);
		unk_0x61CD4A0BA23CE782(iVar0, 1f);
	}
	return iVar0;
}

void func_279()
{
	if (func_16(iLocal_615))
	{
		if ((((unk_0x5F1BC2D8BAC011DB(iLocal_615) < 200f || unk_0x5E24ECD191C0BE51(iLocal_615) < 200f) || unk_0xE1C7424C6F1FDFDB(iLocal_615) < 200f) || unk_0x070BBD7287E8E744(iLocal_615) < 200) || unk_0xF9E5E5F3AC4B8008(iLocal_615) < 200f)
		{
			unk_0x0922093570730878(iLocal_615, 0, 1);
		}
	}
	if (!unk_0x0B6E83A9A7ED3EBA(uLocal_616[iLocal_256]))
	{
		if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), uLocal_616[iLocal_256], 0))
		{
			if (!unk_0x0B6E83A9A7ED3EBA(uLocal_580[iLocal_256]))
			{
				unk_0xB424F90D6E96BCF8(uLocal_580[iLocal_256], 1, 0);
			}
			if (!unk_0x0B6E83A9A7ED3EBA(uLocal_588[iLocal_256]))
			{
				unk_0xB424F90D6E96BCF8(uLocal_588[iLocal_256], 1, 0);
			}
			unk_0x79FC96D30AEDF69A(uLocal_616[iLocal_256], 0);
			unk_0xB84D4C251623B60C(&(uLocal_616[iLocal_256]));
		}
	}
	if (unk_0x1F2158D615BC4B25(uLocal_580[iLocal_256]))
	{
		if (!func_78(uLocal_580[iLocal_256]))
		{
			if (unk_0xC3B073777B46C61A(iLocal_911[iLocal_256]))
			{
				func_24(&(iLocal_911[iLocal_256]));
				iLocal_258++;
				iLocal_295++;
			}
		}
		else if (!func_55(uLocal_580[iLocal_256], unk_0x77F050A399DB77ED(), fLocal_144))
		{
			if (unk_0xC3B073777B46C61A(iLocal_911[iLocal_256]))
			{
				if (!unk_0xF74B69DFD85D7CCE(uLocal_580[iLocal_256]))
				{
					func_24(&(iLocal_911[iLocal_256]));
					func_18(&(uLocal_580[iLocal_256]));
					if (unk_0x1F2158D615BC4B25(uLocal_616[iLocal_256]))
					{
						if (!unk_0x0B6E83A9A7ED3EBA(uLocal_616[iLocal_256]))
						{
							if (!unk_0xF74B69DFD85D7CCE(uLocal_616[iLocal_256]))
							{
								func_15(&(uLocal_616[iLocal_256]));
							}
						}
					}
					iLocal_258++;
				}
			}
		}
		else if (unk_0xC3B073777B46C61A(iLocal_911[iLocal_256]))
		{
			if (iLocal_256 != 0)
			{
				if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -367.5617f, -107.3702f, 32.44559f, -356.0586f, -74.55742f, 50.42249f, 82.25f, 0, 1, 0))
				{
					if (unk_0xCA55F1A0D9ADE3AD(uLocal_580[iLocal_256], -361.7977f, -108.5845f, 67.12477f, -347.5992f, -65.6332f, 36.46431f, 174.75f, 0, 1, 0))
					{
						unk_0xB424F90D6E96BCF8(uLocal_580[iLocal_256], 1, 0);
						if (unk_0x49C650267EDFEBC6(uLocal_580[iLocal_256], 780511057) != 1)
						{
							unk_0xFBE25F0677076CF9(uLocal_580[iLocal_256], unk_0x77F050A399DB77ED(), 0, 16);
						}
						iLocal_341[iLocal_256] = 1;
					}
					else
					{
						unk_0xB424F90D6E96BCF8(uLocal_580[iLocal_256], 1, 1);
						if (!unk_0x0B6E83A9A7ED3EBA(uLocal_616[iLocal_256]))
						{
							if (unk_0x49C650267EDFEBC6(uLocal_580[iLocal_256], -1817882002) != 1)
							{
								if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(uLocal_580[iLocal_256], 1), Local_224, 1) < unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(uLocal_580[iLocal_256], 1), Local_227, 1))
								{
									unk_0xA0C5D1F0ABDB245E(uLocal_580[iLocal_256], uLocal_616[iLocal_256], Local_224, 50f, 0, unk_0xDF1398076E26B0E4(uLocal_616[iLocal_256]), 786468, 7f, 1f);
								}
								else
								{
									unk_0xA0C5D1F0ABDB245E(uLocal_580[iLocal_256], uLocal_616[iLocal_256], Local_227, 50f, 0, unk_0xDF1398076E26B0E4(uLocal_616[iLocal_256]), 786468, 7f, 1f);
								}
							}
						}
					}
				}
				else
				{
					unk_0xB424F90D6E96BCF8(uLocal_580[iLocal_256], 1, 1);
					if (iLocal_341[iLocal_256] == 1)
					{
						if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
						{
							if (!unk_0x0B6E83A9A7ED3EBA(uLocal_616[iLocal_256]))
							{
								if (unk_0xE5FADE1166052251(uLocal_580[iLocal_256], uLocal_616[iLocal_256], 0))
								{
									iLocal_341[iLocal_256] = 0;
								}
								else if (func_78(uLocal_580[iLocal_256]))
								{
									if (unk_0x49C650267EDFEBC6(uLocal_580[iLocal_256], -1794415470) != 1)
									{
										unk_0xFC7C68B6C728CFEC(uLocal_580[iLocal_256], uLocal_616[iLocal_256], 20000, -1, 2f, 1, 0);
									}
								}
							}
						}
					}
					else if (unk_0x49C650267EDFEBC6(uLocal_580[iLocal_256], 780511057) != 1)
					{
						unk_0xFBE25F0677076CF9(uLocal_580[iLocal_256], unk_0x77F050A399DB77ED(), 0, 16);
					}
				}
			}
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(uLocal_616[iLocal_256]))
				{
					if (unk_0xE5FADE1166052251(uLocal_580[iLocal_256], uLocal_616[iLocal_256], 0))
					{
					}
				}
			}
			if (unk_0xB2D1758C032223EA(uLocal_580[iLocal_256]))
			{
				unk_0x61CD4A0BA23CE782(iLocal_911[iLocal_256], fLocal_148);
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					if (iLocal_316[iLocal_256] == 0)
					{
						if (fLocal_249 <= 50f)
						{
							iLocal_316[iLocal_256] = 1;
						}
					}
					else if (fLocal_249 > 50f)
					{
						iLocal_316[iLocal_256] = 0;
					}
				}
			}
			else
			{
				unk_0x61CD4A0BA23CE782(iLocal_911[iLocal_256], fLocal_147);
			}
		}
	}
	if (unk_0x1F2158D615BC4B25(uLocal_588[iLocal_256]))
	{
		if (!func_78(uLocal_588[iLocal_256]))
		{
			if (unk_0xC3B073777B46C61A(iLocal_919[iLocal_256]))
			{
				func_24(&(iLocal_919[iLocal_256]));
				iLocal_258++;
				iLocal_295++;
			}
		}
		else if (!func_55(uLocal_588[iLocal_256], unk_0x77F050A399DB77ED(), fLocal_144))
		{
			if (unk_0xC3B073777B46C61A(iLocal_919[iLocal_256]))
			{
				if (!unk_0xF74B69DFD85D7CCE(uLocal_588[iLocal_256]))
				{
					func_24(&(iLocal_919[iLocal_256]));
					func_18(&(uLocal_588[iLocal_256]));
					iLocal_258++;
				}
			}
		}
		else
		{
			unk_0xE0E77BB84096208B(uLocal_588[iLocal_256], -753768974);
		}
	}
	if (iLocal_299 != -1)
	{
		if (!func_78(uLocal_570[iLocal_299]))
		{
			iLocal_299 = -1;
			iLocal_374 = 0;
		}
		else if (unk_0x49C650267EDFEBC6(uLocal_570[iLocal_299], -1273030092) != 1 && unk_0x49C650267EDFEBC6(uLocal_570[iLocal_299], -1273030092) != 0)
		{
			unk_0x277D239A78FD3309(uLocal_570[iLocal_299], iLocal_632, unk_0x77F050A399DB77ED(), 8, 40f, 786468, 100f, 30f, 1);
		}
	}
	if (unk_0x1F2158D615BC4B25(uLocal_570[iLocal_256]))
	{
		if (!func_78(uLocal_570[iLocal_256]))
		{
			if (unk_0xC3B073777B46C61A(iLocal_927[iLocal_256]))
			{
				func_24(&(iLocal_927[iLocal_256]));
				iLocal_258++;
				iLocal_295++;
			}
		}
		else if (!func_55(uLocal_570[iLocal_256], unk_0x77F050A399DB77ED(), fLocal_145))
		{
			if (!unk_0xE5FADE1166052251(uLocal_570[iLocal_256], iLocal_632, 0))
			{
				if (unk_0xC3B073777B46C61A(iLocal_927[iLocal_256]))
				{
					func_24(&(iLocal_927[iLocal_256]));
					if (iLocal_299 == iLocal_256)
					{
						iLocal_299 = -1;
						iLocal_374 = 0;
					}
					iLocal_258++;
				}
			}
		}
		else if (iLocal_256 != 5)
		{
			if (iLocal_374 == 0)
			{
				if (iLocal_336 == 0)
				{
					if (func_55(uLocal_570[iLocal_256], iLocal_632, 60f))
					{
						if (!func_55(unk_0x77F050A399DB77ED(), iLocal_632, 30f))
						{
							if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
							{
								if (unk_0x9A2BADF8B8CE0E2A(iLocal_632, -1))
								{
									iLocal_299 = iLocal_256;
									if (iLocal_328 == 1)
									{
										unk_0x8077CFA266F19DC6(-397.6181f, -63.27855f, 42.65886f, -345.0219f, -93.33459f, 49.65768f, 24.75f, 0, 1, 1);
									}
									unk_0xE2CB8488CFA42209(uLocal_570[iLocal_299]);
									unk_0x9526D9575C237F2F(uLocal_570[iLocal_299], 1);
									unk_0xB424F90D6E96BCF8(uLocal_570[iLocal_299], 1, 1);
									iLocal_374 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_256 == 1 || iLocal_256 == 4)
	{
		if (!func_78(iLocal_596))
		{
			if (unk_0xC3B073777B46C61A(iLocal_936))
			{
				func_24(&iLocal_936);
				func_280(&uLocal_390, 2);
				iLocal_258++;
				iLocal_295++;
			}
		}
		else if (!func_55(iLocal_596, unk_0x77F050A399DB77ED(), fLocal_145))
		{
			if (unk_0xC3B073777B46C61A(iLocal_936))
			{
				func_24(&iLocal_936);
				iLocal_258++;
			}
		}
	}
	if (iLocal_256 == 2 || iLocal_256 == 6)
	{
		if (!func_78(iLocal_578))
		{
			if (unk_0xC3B073777B46C61A(iLocal_937))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(iLocal_615))
				{
					unk_0x0922093570730878(iLocal_615, 0, 1);
					iLocal_373 = 1;
				}
				iLocal_264 = unk_0x3EAC9995EC220C5A();
				func_280(&uLocal_390, 3);
				func_24(&iLocal_937);
				iLocal_258++;
				iLocal_295++;
			}
		}
		else if (!func_55(iLocal_578, unk_0x77F050A399DB77ED(), fLocal_146) && unk_0x3EAC9995EC220C5A() > iLocal_290 + 15000)
		{
			if (unk_0xC3B073777B46C61A(iLocal_937))
			{
				if (!unk_0xF74B69DFD85D7CCE(iLocal_578))
				{
					iLocal_264 = unk_0x3EAC9995EC220C5A();
					func_280(&uLocal_390, 3);
					func_24(&iLocal_937);
					func_18(&iLocal_578);
					if (unk_0x1F2158D615BC4B25(iLocal_615))
					{
						if (!unk_0x0B6E83A9A7ED3EBA(iLocal_615))
						{
							if (!unk_0x0B6E83A9A7ED3EBA(iLocal_579))
							{
								if (unk_0xE5FADE1166052251(iLocal_579, iLocal_615, 0))
								{
									func_18(&iLocal_579);
								}
							}
							if (iLocal_333 == 0)
							{
								if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
								{
									if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_615, 0))
									{
										if (!unk_0xF74B69DFD85D7CCE(iLocal_615))
										{
											func_15(&iLocal_615);
										}
									}
								}
							}
						}
					}
					iLocal_258++;
				}
			}
		}
	}
	iLocal_256++;
	if (iLocal_256 == 7)
	{
		iLocal_256 = 0;
	}
}

void func_280(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_281()
{
	func_24(&iLocal_939);
	func_24(&iLocal_940);
	if (func_78(iLocal_596))
	{
		if (!unk_0xC3B073777B46C61A(iLocal_936))
		{
			if (func_55(iLocal_596, unk_0x77F050A399DB77ED(), fLocal_145))
			{
				if (!unk_0xB42592B9FFEB5EDE(iLocal_596, 0))
				{
					unk_0xB424F90D6E96BCF8(iLocal_596, 1, 0);
					iLocal_936 = func_282(iLocal_596, 1, 0, 3);
					unk_0x61CD4A0BA23CE782(iLocal_936, fLocal_147);
					unk_0xFBE25F0677076CF9(iLocal_596, unk_0x77F050A399DB77ED(), 0, 16);
					iLocal_257++;
				}
			}
		}
	}
	if (func_78(uLocal_580[iLocal_256]))
	{
		if (!unk_0xC3B073777B46C61A(iLocal_911[iLocal_256]))
		{
			if ((unk_0x1CC086F95707C553(uLocal_580[iLocal_256], unk_0x77F050A399DB77ED()) || unk_0x3EAC9995EC220C5A() > iLocal_290 + 20000) || !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -335.8581f, -97.34045f, 62.20868f, -403.0932f, -76.60052f, 25.80415f, 34f, 0, 1, 0))
			{
				iLocal_911[iLocal_256] = func_282(uLocal_580[iLocal_256], 1, 0, 5);
				unk_0x61CD4A0BA23CE782(iLocal_911[iLocal_256], fLocal_148);
				if (iLocal_256 == 0)
				{
					if (!unk_0x0B6E83A9A7ED3EBA(uLocal_616[0]))
					{
						if (unk_0x599C956FC6B86D98(uLocal_616[0]))
						{
							unk_0x3DC2DA662E9FC742(uLocal_616[0]);
						}
					}
				}
				if (!unk_0x0B6E83A9A7ED3EBA(uLocal_616[iLocal_256]))
				{
					if (iLocal_328 == 1)
					{
						if (iLocal_256 == 0)
						{
							if (!unk_0x3F18BD52B422B670(uLocal_616[iLocal_256]))
							{
								unk_0xB424F90D6E96BCF8(uLocal_580[iLocal_256], 1, 0);
								if (unk_0x1F2158D615BC4B25(uLocal_588[iLocal_256]))
								{
									if (!unk_0x0B6E83A9A7ED3EBA(uLocal_588[iLocal_256]))
									{
										if (!unk_0x1E80C02AC16B6622(uLocal_588[iLocal_256]))
										{
											unk_0xB424F90D6E96BCF8(uLocal_588[iLocal_256], 1, 0);
										}
									}
								}
							}
						}
					}
					unk_0xCDF4AE0BBEEF456C(uLocal_580[iLocal_256], uLocal_616[iLocal_256], unk_0x77F050A399DB77ED(), 0, 200f, 786468, -1082130432, 20, 1101004800);
				}
				else
				{
					unk_0xFBE25F0677076CF9(uLocal_580[iLocal_256], unk_0x77F050A399DB77ED(), 0, 16);
				}
				iLocal_257++;
			}
		}
	}
	if (func_78(uLocal_588[iLocal_256]))
	{
		if (!unk_0xC3B073777B46C61A(iLocal_919[iLocal_256]))
		{
			if ((unk_0x1CC086F95707C553(uLocal_588[iLocal_256], unk_0x77F050A399DB77ED()) || unk_0x3EAC9995EC220C5A() > iLocal_290 + 20100) || !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -335.8581f, -97.34045f, 62.20868f, -403.0932f, -76.60052f, 25.80415f, 34f, 0, 1, 0))
			{
				iLocal_919[iLocal_256] = func_282(uLocal_588[iLocal_256], 1, 0, 3);
				unk_0x61CD4A0BA23CE782(iLocal_919[iLocal_256], fLocal_147);
				unk_0xFBE25F0677076CF9(uLocal_588[iLocal_256], unk_0x77F050A399DB77ED(), 0, 16);
				iLocal_257++;
			}
		}
	}
	if (func_78(uLocal_570[iLocal_256]))
	{
		if (!unk_0xC3B073777B46C61A(iLocal_927[iLocal_256]))
		{
			if (unk_0x1CC086F95707C553(uLocal_570[iLocal_256], unk_0x77F050A399DB77ED()) || unk_0x3EAC9995EC220C5A() > iLocal_290 + 50)
			{
				if (!unk_0xB42592B9FFEB5EDE(uLocal_570[iLocal_256], 0))
				{
					if (func_55(uLocal_570[iLocal_256], unk_0x77F050A399DB77ED(), fLocal_145))
					{
						if (iLocal_256 == 5)
						{
							unk_0xB424F90D6E96BCF8(uLocal_570[iLocal_256], 1, 0);
						}
						iLocal_927[iLocal_256] = func_282(uLocal_570[iLocal_256], 1, 0, 3);
						unk_0x61CD4A0BA23CE782(iLocal_927[iLocal_256], fLocal_147);
						unk_0xFBE25F0677076CF9(uLocal_570[iLocal_256], unk_0x77F050A399DB77ED(), 0, 16);
						iLocal_257++;
					}
				}
			}
		}
	}
	if (iLocal_315 == 0)
	{
		if (unk_0x3EAC9995EC220C5A() > iLocal_290 + 300)
		{
			if (func_17(iLocal_615))
			{
				if (unk_0x599C956FC6B86D98(iLocal_615))
				{
					unk_0x3DC2DA662E9FC742(iLocal_615);
				}
				unk_0xB99FFA77B01C4714(iLocal_615, 1, 1, 0);
				if (!unk_0x0B6E83A9A7ED3EBA(iLocal_578))
				{
					if (!unk_0xC3B073777B46C61A(iLocal_937))
					{
						iLocal_937 = unk_0xBAA49E1DC5584B87(iLocal_578);
						if (unk_0xE5FADE1166052251(iLocal_578, iLocal_615, 0) && iLocal_333 == 0)
						{
							unk_0x61CD4A0BA23CE782(iLocal_937, fLocal_148);
							unk_0x18EA864BF4963320(iLocal_937, 7);
							unk_0x06E25D9668199664(iLocal_937, 353);
							unk_0x80553402FCEB9A9C(iLocal_937, 1);
						}
						else
						{
							unk_0x61CD4A0BA23CE782(iLocal_937, fLocal_147);
							unk_0x18EA864BF4963320(iLocal_937, 3);
							if (func_78(iLocal_578))
							{
								if (unk_0xE5FADE1166052251(iLocal_578, iLocal_615, 0))
								{
									unk_0x365CA2781A1728CB(iLocal_578, iLocal_615, 0);
								}
							}
							if (func_78(iLocal_596))
							{
								if (unk_0xE5FADE1166052251(iLocal_596, iLocal_615, 0))
								{
									unk_0x365CA2781A1728CB(iLocal_596, iLocal_615, 0);
								}
							}
							if (func_78(uLocal_570[5]))
							{
								if (unk_0xE5FADE1166052251(uLocal_570[5], iLocal_615, 0))
								{
									unk_0x365CA2781A1728CB(uLocal_570[5], iLocal_615, 0);
								}
							}
							if (func_78(iLocal_579))
							{
								if (unk_0xE5FADE1166052251(iLocal_579, iLocal_615, 0))
								{
									unk_0x365CA2781A1728CB(iLocal_579, iLocal_615, 0);
								}
							}
						}
						iLocal_257++;
					}
				}
				if (func_78(iLocal_579))
				{
					unk_0xFBE25F0677076CF9(iLocal_579, unk_0x77F050A399DB77ED(), 0, 16);
				}
			}
			iLocal_315 = 1;
		}
	}
	iLocal_256++;
	if (iLocal_256 == 7)
	{
		iLocal_256 = 0;
	}
}

int func_282(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_16(iParam0))
		{
			iVar0 = unk_0xBAA49E1DC5584B87(iParam0);
			unk_0x0AA0CF6371DDEDCF(iVar0, iParam2);
			unk_0x18EA864BF4963320(iVar0, iParam3);
			unk_0x61CD4A0BA23CE782(iVar0, 0.7f);
			if (!bParam1)
			{
				unk_0x61CD4A0BA23CE782(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

int func_283(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0) && !unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		if (unk_0xBF0744BF24FE8D11(iParam0, iParam1))
		{
			if (unk_0x07A8845F7F106A38(iParam1, iParam2) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_284(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	if (!unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Var3, iParam2);
}

void func_285(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0097650483482715(sParam0);
	unk_0x01FD9AF39CDA86AC(iParam1, 1);
}

int func_286()
{
	if (Global_15712 != 0 || unk_0x1066B6347C40B301())
	{
		return 1;
	}
	return 0;
}

void func_287()
{
	if (!unk_0x0CB2A341EC5513A7("EPSILONISM_08_COMPLIANCE"))
	{
		if (!unk_0x0CB2A341EC5513A7("EPSILONISM_08_NON_COMPLIANCE"))
		{
			if (func_16(uLocal_616[0]))
			{
				unk_0x72B5F7B57899EB10(uLocal_616[0], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(uLocal_616[1]))
			{
				unk_0x72B5F7B57899EB10(uLocal_616[1], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(uLocal_616[2]))
			{
				unk_0x72B5F7B57899EB10(uLocal_616[2], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(uLocal_616[3]))
			{
				unk_0x72B5F7B57899EB10(uLocal_616[3], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(uLocal_616[4]))
			{
				unk_0x72B5F7B57899EB10(uLocal_616[4], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(uLocal_616[5]))
			{
				unk_0x72B5F7B57899EB10(uLocal_616[5], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(uLocal_616[6]))
			{
				unk_0x72B5F7B57899EB10(uLocal_616[6], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(iLocal_615))
			{
				unk_0x72B5F7B57899EB10(iLocal_615, "EPSILONISM_08_NON_COMPLIANCE_HELI", 0);
			}
			unk_0xCAEDD1A8E831AD36("EPSILONISM_08_NON_COMPLIANCE");
		}
	}
	else
	{
		unk_0xE0DB271DC0AEA972("EPSILONISM_08_COMPLIANCE");
	}
}

void func_288()
{
	if (unk_0x0CB2A341EC5513A7("EPSILONISM_08_COMPLIANCE"))
	{
		unk_0xE0DB271DC0AEA972("EPSILONISM_08_COMPLIANCE");
	}
}

void func_289()
{
	func_297();
	func_295();
	func_292();
	func_291();
	if (iLocal_369 == 0)
	{
		if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
		{
			iLocal_940 = func_282(iLocal_596, 1, 1, 5);
			unk_0x61CD4A0BA23CE782(iLocal_940, fLocal_147);
			iLocal_369 = 1;
		}
	}
	if (iLocal_331 == 0)
	{
		if (unk_0x3EAC9995EC220C5A() > iLocal_293 + 6500)
		{
			if (func_78(uLocal_570[5]))
			{
				func_290();
			}
		}
	}
	if (iLocal_331 == 1)
	{
		if (unk_0x3EAC9995EC220C5A() > iLocal_292 + 10000 || unk_0xE5FADE1166052251(uLocal_570[5], iLocal_615, 0))
		{
			iLocal_312 = 1;
		}
	}
	if (unk_0x0B6E83A9A7ED3EBA(iLocal_596))
	{
		func_24(&iLocal_940);
	}
}

void func_290()
{
	var uVar0;
	
	if (func_78(unk_0x77F050A399DB77ED()))
	{
		unk_0xC50A6282884BA4C3(unk_0x77F050A399DB77ED());
	}
	if ((func_78(uLocal_570[5]) && func_16(iLocal_632)) && func_16(iLocal_615))
	{
		switch (iLocal_387)
		{
			case 0:
				unk_0x2A6B9F9E71C479CF(&uVar0);
				unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 0, 2);
				if (func_16(iLocal_632))
				{
					unk_0xE3BCB930B62CBDE5(0, unk_0x03C14E8A9400F2A9(iLocal_632, 0f, -3.2f, 0f), 1f, -1, 0.4f, 1024, 140.8925f);
				}
				unk_0xF424981F4680E6B2(0, "WORLD_HUMAN_GUARD_STAND", 0, 1);
				unk_0x44642CB08FA1637E(uVar0);
				unk_0xB8A8FA4B28E9F423(uLocal_570[5], uVar0);
				unk_0xAAD288E877AC833D(&uVar0);
				iLocal_387 = 5;
				break;
			
			case 1:
				if (((unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -371.3996f, -88.47154f, 44.65829f, -378.7455f, -85.82195f, 48.21037f, 5.75f, 0, 1, 0) && unk_0xDEB29D8C0ACA57B9(-378.46f, -88.44f, 45.66f, 2f)) && !unk_0xF74B69DFD85D7CCE(iLocal_632)) && unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_596, 120f))
				{
					uLocal_309 = unk_0xFCF0CDCAF2761068(-356.91f, -89.03f, 45.875f, 0f, 0f, -120f, 2);
					unk_0x3C6CCFC07FD12077(uLocal_570[5], uLocal_309, "rcmepsilonism8", "grab_all_4_bags_carrier", 4f, -2f, 0, 0, 1148846080, 0);
					unk_0x1D8909C3B0308E1E(iLocal_632, uLocal_309, "grab_all_4_bags_car", "rcmepsilonism8", 1000f, -1.5f, 0, 1148846080);
					iLocal_387 = 2;
					unk_0xE8EBCCA6A3BE542B(uLocal_597[0], 1, 1);
					unk_0xE8EBCCA6A3BE542B(uLocal_597[1], 1, 1);
					unk_0xE8EBCCA6A3BE542B(uLocal_597[2], 1, 1);
					unk_0xE8EBCCA6A3BE542B(uLocal_597[3], 1, 1);
					unk_0x1D8909C3B0308E1E(uLocal_597[0], uLocal_309, "base_bag_1", "rcmepsilonism8", 1000f, -1000f, 0, 1148846080);
					unk_0x1D8909C3B0308E1E(uLocal_597[1], uLocal_309, "base_bag_2", "rcmepsilonism8", 1000f, -1000f, 0, 1148846080);
					unk_0x1D8909C3B0308E1E(uLocal_597[2], uLocal_309, "base_bag_3", "rcmepsilonism8", 1000f, -1000f, 0, 1148846080);
					unk_0x1D8909C3B0308E1E(uLocal_597[3], uLocal_309, "base_bag_4", "rcmepsilonism8", 1000f, -1000f, 0, 1148846080);
					unk_0xEE4C4CE6312DD1EF(uLocal_309, 0.098f);
				}
				break;
			
			case 2:
				if (unk_0x671C6C3F21245221(uLocal_309))
				{
					if (unk_0x19779E7427AA44FB(uLocal_309) >= 0.126f && unk_0x19779E7427AA44FB(uLocal_309) < 0.237f)
					{
						if (!unk_0xD8EEAAAE9301A49D(uLocal_597[0], uLocal_570[5]))
						{
							unk_0xCA41E71A6AD186D8(uLocal_597[0], uLocal_570[5], unk_0x49E48BFB98D99FE3(uLocal_570[5], 28422), 0.25f, 0.075f, -0.3f, 50f, 50f, -135f, 0, 0, 0, 0, 2, 1);
							unk_0xB92C428B448B51A4(uLocal_597[0], 0);
						}
					}
					else if (unk_0x1F2158D615BC4B25(uLocal_597[0]))
					{
						if (unk_0x19779E7427AA44FB(uLocal_309) >= 0.237f)
						{
							unk_0xE8EBCCA6A3BE542B(uLocal_597[0], 1, 1);
							unk_0x7D779528B7C61C13(&(uLocal_597[0]));
						}
					}
					if (unk_0x19779E7427AA44FB(uLocal_309) >= 0.347f && unk_0x19779E7427AA44FB(uLocal_309) < 0.455f)
					{
						if (!unk_0xD8EEAAAE9301A49D(uLocal_597[1], uLocal_570[5]))
						{
							unk_0xCA41E71A6AD186D8(uLocal_597[1], uLocal_570[5], unk_0x49E48BFB98D99FE3(uLocal_570[5], 28422), 0.25f, 0.075f, -0.3f, 50f, 50f, -135f, 0, 0, 0, 0, 2, 1);
							unk_0xB92C428B448B51A4(uLocal_597[1], 0);
						}
					}
					else if (unk_0x1F2158D615BC4B25(uLocal_597[1]))
					{
						if (unk_0x19779E7427AA44FB(uLocal_309) >= 0.455f)
						{
							unk_0xE8EBCCA6A3BE542B(uLocal_597[1], 1, 1);
							unk_0x7D779528B7C61C13(&(uLocal_597[1]));
						}
					}
					if (unk_0x19779E7427AA44FB(uLocal_309) >= 0.563f && unk_0x19779E7427AA44FB(uLocal_309) < 0.678f)
					{
						if (!unk_0xD8EEAAAE9301A49D(uLocal_597[2], uLocal_570[5]))
						{
							unk_0xCA41E71A6AD186D8(uLocal_597[2], uLocal_570[5], unk_0x49E48BFB98D99FE3(uLocal_570[5], 28422), 0.25f, 0.075f, -0.3f, 50f, 50f, -135f, 0, 0, 0, 0, 2, 1);
							unk_0xB92C428B448B51A4(uLocal_597[2], 0);
						}
					}
					else if (unk_0x1F2158D615BC4B25(uLocal_597[2]))
					{
						if (unk_0x19779E7427AA44FB(uLocal_309) >= 0.678f)
						{
							unk_0xE8EBCCA6A3BE542B(uLocal_597[2], 1, 1);
							unk_0x7D779528B7C61C13(&(uLocal_597[2]));
						}
					}
					if (unk_0x19779E7427AA44FB(uLocal_309) >= 0.789f && unk_0x19779E7427AA44FB(uLocal_309) < 0.901f)
					{
						if (!unk_0xD8EEAAAE9301A49D(uLocal_597[3], uLocal_570[5]))
						{
							unk_0xCA41E71A6AD186D8(uLocal_597[3], uLocal_570[5], unk_0x49E48BFB98D99FE3(uLocal_570[5], 28422), 0.25f, 0.075f, -0.3f, 50f, 50f, -135f, 0, 0, 0, 0, 2, 1);
							unk_0xB92C428B448B51A4(uLocal_597[3], 0);
							iLocal_336 = 1;
						}
					}
					else if (unk_0x1F2158D615BC4B25(uLocal_597[3]))
					{
						if (unk_0x19779E7427AA44FB(uLocal_309) >= 0.901f)
						{
						}
					}
					if (unk_0x19779E7427AA44FB(uLocal_309) >= 0.903f)
					{
						if (unk_0x1F2158D615BC4B25(uLocal_597[3]))
						{
							unk_0xE8EBCCA6A3BE542B(uLocal_597[3], 1, 1);
							unk_0x7D779528B7C61C13(&(uLocal_597[3]));
						}
						unk_0xE2CB8488CFA42209(uLocal_570[5]);
						unk_0x112CD899A3BEE719(uLocal_570[5], 1);
						unk_0xFC7C68B6C728CFEC(uLocal_570[5], iLocal_615, 20000, 1, 1f, 1, 0);
						iLocal_292 = unk_0x3EAC9995EC220C5A();
						iLocal_331 = 1;
						iLocal_387 = 5;
					}
				}
				break;
			
			case 3:
				if ((func_276(uLocal_570[5], unk_0x03C14E8A9400F2A9(iLocal_615, -1.5f, 0f, 0f), 0.5f) && unk_0x49C650267EDFEBC6(uLocal_570[5], 713668775) != 1) && unk_0x49C650267EDFEBC6(uLocal_570[5], 713668775) != 0)
				{
					unk_0x6354DB3EEA5E310C(uLocal_570[5], "rcmepsilonism8", "bag_handler_walk", -1056964608);
					unk_0x642DDF74A8A2B3BB(uLocal_570[5], "rcmepsilonism8", "bag_handler_load_walk_away_left", 8f, -8f, -1, 639044, 0, 0, 0, 0);
					iLocal_387 = 4;
				}
				else if (unk_0x49C650267EDFEBC6(uLocal_570[5], 713668775) != 1 && unk_0x49C650267EDFEBC6(uLocal_570[5], 713668775) != 0)
				{
					unk_0xE3BCB930B62CBDE5(uLocal_570[5], unk_0x03C14E8A9400F2A9(iLocal_615, -1.5f, 0f, 0f), 1f, -1, 0.4f, 0, (unk_0x7578EBD2DA3F8DD2(iLocal_615) - 90f));
				}
				break;
			
			case 4:
				if (unk_0x5EE0E9E5B7A50C2A(uLocal_570[5], "rcmepsilonism8", "bag_handler_load_walk_away_left", 3) && unk_0x91741EBC3EA7D505(uLocal_570[5], "rcmepsilonism8", "bag_handler_load_walk_away_left") > 0.5f)
				{
					unk_0xE8EBCCA6A3BE542B(uLocal_597[iLocal_304], 1, 1);
				}
				if (!unk_0x5EE0E9E5B7A50C2A(uLocal_570[5], "rcmepsilonism8", "bag_handler_load_walk_away_left", 3) || unk_0x91741EBC3EA7D505(uLocal_570[5], "rcmepsilonism8", "bag_handler_load_walk_away_left") > 0.8f)
				{
					func_14(&(uLocal_597[iLocal_304]));
					unk_0x125BE900594D767E(uLocal_570[5], 1, -1000f);
					unk_0x125BE900594D767E(uLocal_570[5], 0, -1000f);
					iLocal_304++;
					if (iLocal_304 == iLocal_150)
					{
						unk_0xE2CB8488CFA42209(uLocal_570[5]);
						unk_0x112CD899A3BEE719(uLocal_570[5], 1);
						unk_0xFC7C68B6C728CFEC(uLocal_570[5], iLocal_615, 20000, 1, 1f, 1, 0);
						iLocal_292 = unk_0x3EAC9995EC220C5A();
						iLocal_331 = 1;
						iLocal_387 = 5;
					}
					else
					{
						unk_0xE3BCB930B62CBDE5(uLocal_570[5], unk_0x03C14E8A9400F2A9(iLocal_632, 0f, -3.2f, 0f), 1f, -1, 0.3f, 0, unk_0x7578EBD2DA3F8DD2(iLocal_632));
						iLocal_387 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_291()
{
	if (iLocal_362 == 1)
	{
		if (func_78(iLocal_596))
		{
			if (!unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_596, 90f) || func_55(unk_0x77F050A399DB77ED(), iLocal_596, 50f))
			{
				unk_0x8530DA8508D7A4B8(unk_0x77F050A399DB77ED());
			}
		}
	}
}

void func_292()
{
	float fVar0;
	var uVar1;
	struct<6> Var2;
	struct<6> Var8;
	
	if (iLocal_336 == 0)
	{
		if (iLocal_298 == 0)
		{
			Local_218 = { unk_0xAF99169F0F5AE41D(iLocal_632, 1) };
			if (((Local_218.f_0 < (Local_215.f_0 - 0.3f) || Local_218.f_0 > (Local_215.f_0 + 0.3f)) || Local_218.f_1 < (Local_215.f_1 - 0.3f)) || Local_218.f_1 > (Local_215.f_1 + 0.3f))
			{
				iLocal_298 = 1;
				iLocal_296 = unk_0x3EAC9995EC220C5A();
			}
		}
		if (iLocal_298 == 1)
		{
			if (unk_0x3EAC9995EC220C5A() > iLocal_296 + 3500 && unk_0xBF0744BF24FE8D11(unk_0x77F050A399DB77ED(), iLocal_632))
			{
				iLocal_311 = 1;
			}
		}
	}
	if (func_78(iLocal_596) && func_17(iLocal_633))
	{
		if (func_55(iLocal_596, iLocal_633, 15f))
		{
			if (!unk_0x404D1ED8CA2B4615(iLocal_596, iLocal_633))
			{
				unk_0xD0C8DD55C652567F(iLocal_596, iLocal_633, -1, 0, 2);
			}
		}
		if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
		{
			if (func_55(iLocal_596, iLocal_633, 5f))
			{
				if (iLocal_340 == 0)
				{
					if (unk_0x49C650267EDFEBC6(iLocal_596, 242628503) != 1)
					{
						unk_0x007FD255A321ABD0(iLocal_596, 0);
						unk_0x2A6B9F9E71C479CF(&uLocal_944);
						unk_0x9A42ADE14351A508(0, iLocal_633, 0);
						unk_0xCEAD0CD7E9A15284(0, 1);
						unk_0x642DDF74A8A2B3BB(0, "rcmepsilonism8", "worship_enter", 2f, -2f, -1, 786432, 0, 0, 0, 0);
						unk_0x642DDF74A8A2B3BB(0, "rcmepsilonism8", "worship_base", 2f, -2f, -1, 786432, 0, 0, 0, 0);
						unk_0x642DDF74A8A2B3BB(0, "rcmepsilonism8", "worship_idle_a", 2f, -2f, -1, 786432, 0, 0, 0, 0);
						unk_0x642DDF74A8A2B3BB(0, "rcmepsilonism8", "worship_base", 2f, -2f, -1, 786433, 0, 0, 0, 0);
						unk_0x44642CB08FA1637E(uLocal_944);
						unk_0xB8A8FA4B28E9F423(iLocal_596, uLocal_944);
						unk_0xAAD288E877AC833D(&uLocal_944);
						unk_0x746BA52A343DAF52(5f, 10f, 1);
						iLocal_340 = 1;
					}
				}
				iLocal_338 = 1;
				if (iLocal_334 == 1)
				{
					if (iLocal_366 == 0)
					{
						if (!func_286())
						{
							if (func_275(&uLocal_390, "EPS8AU", "EPS8_PRAY", 7, 0, 0, 0))
							{
								iLocal_362 = 0;
								iLocal_366 = 1;
								iLocal_289 = unk_0x3EAC9995EC220C5A();
								unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_633, 10000, 0, 2);
							}
						}
					}
				}
			}
			if (iLocal_338 == 0)
			{
				if (func_55(iLocal_596, unk_0x77F050A399DB77ED(), 9f))
				{
					if ((!func_79("EPS8_16", 0, 0) && !func_79("EPS8_11", 0, 0)) && !func_55(iLocal_596, iLocal_615, 8f))
					{
						if (!func_286())
						{
							if (iLocal_288 == 0)
							{
								if (func_275(&uLocal_390, "EPS8AU", "EPS8_E1", 7, 0, 0, 0))
								{
									unk_0x746BA52A343DAF52(5f, 10f, 1);
									iLocal_288 = 3;
								}
							}
						}
					}
				}
				if (iLocal_383 == 0)
				{
					if ((unk_0x5EE0E9E5B7A50C2A(iLocal_596, "rcmepsilonism8", "jump_off_heli", 3) && unk_0xB867D63FE49C1932("rcmepsilonism8", "jump_off_heli", "WalkInterruptible", &fVar0, &uVar1)) && unk_0x91741EBC3EA7D505(iLocal_596, "rcmepsilonism8", "jump_off_heli") >= fVar0)
					{
						if (!unk_0xF8C27E91C2B44FA8(iLocal_596))
						{
							unk_0x7B3932B7F4D58411(iLocal_596, joaat("MotionState_Walk"), 0, 0, 0);
							unk_0x9FDCB92E40AC6A9D(iLocal_596, 1f);
							unk_0xDBC8BE0B344ABCE0(iLocal_596, -377.228f, -87.0252f, 44.6583f, 1f, 20000, 1193033728, 1056964608);
							iLocal_383 = 1;
							iLocal_310 = unk_0x3EAC9995EC220C5A();
						}
					}
					else if (!unk_0x5EE0E9E5B7A50C2A(iLocal_596, "rcmepsilonism8", "jump_off_heli", 3))
					{
						if (!unk_0xF8C27E91C2B44FA8(iLocal_596))
						{
							unk_0x7B3932B7F4D58411(iLocal_596, joaat("MotionState_Walk"), 0, 0, 0);
							unk_0x9FDCB92E40AC6A9D(iLocal_596, 1f);
							unk_0xDBC8BE0B344ABCE0(iLocal_596, -377.228f, -87.0252f, 44.6583f, 1f, 20000, 1193033728, 1056964608);
							iLocal_383 = 1;
							iLocal_310 = unk_0x3EAC9995EC220C5A();
						}
					}
				}
				if (iLocal_383 && unk_0x3EAC9995EC220C5A() > iLocal_310 + 2000)
				{
					if (func_55(iLocal_596, unk_0x77F050A399DB77ED(), 6f))
					{
						if (!unk_0xF8C27E91C2B44FA8(iLocal_596))
						{
							unk_0xEE72A96163057182(iLocal_596, "Eps8EPED", 0, 8, -1);
						}
					}
					if (func_55(iLocal_596, unk_0x77F050A399DB77ED(), 9f) && !func_55(iLocal_596, unk_0x77F050A399DB77ED(), 6f))
					{
						if (!unk_0x2F8B0145337135AB(iLocal_596, unk_0x77F050A399DB77ED()))
						{
							unk_0xD0C8DD55C652567F(iLocal_596, unk_0x77F050A399DB77ED(), -1, 0, 2);
						}
						if (unk_0x49C650267EDFEBC6(iLocal_596, -875674219) != 1)
						{
							if (!unk_0x6867AF84AF12BEFC(iLocal_596, unk_0x77F050A399DB77ED(), 20f))
							{
								Var2 = { func_294() };
								if (!unk_0x35D1CAD6ADAB6491(&Var2, "EPS8_E1"))
								{
									unk_0x9A42ADE14351A508(iLocal_596, unk_0x77F050A399DB77ED(), 0);
								}
							}
							else if (unk_0x49C650267EDFEBC6(iLocal_596, 1435919172) == 1)
							{
								unk_0xE2CB8488CFA42209(iLocal_596);
							}
						}
					}
					if (!func_55(iLocal_596, unk_0x77F050A399DB77ED(), 9f))
					{
						if (unk_0x49C650267EDFEBC6(iLocal_596, 1227113341) != 1)
						{
							unk_0xD0C8DD55C652567F(iLocal_596, unk_0x77F050A399DB77ED(), -1, 0, 2);
							unk_0xAFB86418412C8866(iLocal_596, unk_0x77F050A399DB77ED(), 20000, 6.1f, 1f, 1073741824, 0);
						}
					}
				}
			}
		}
		else if (iLocal_336 == 0 && unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
		{
			Var8 = { func_294() };
			if (!unk_0x0AAC2160036975D9(&Var8))
			{
				if (unk_0x35D1CAD6ADAB6491(&Var8, "EPS8_E1"))
				{
					func_293();
				}
			}
			if (iLocal_277 == 0)
			{
				unk_0xD0C8DD55C652567F(iLocal_596, unk_0x77F050A399DB77ED(), -1, 0, 2);
				if (func_55(iLocal_596, iLocal_632, 7f))
				{
					if (unk_0x49C650267EDFEBC6(iLocal_596, -875674219) != 1)
					{
						unk_0x9A42ADE14351A508(iLocal_596, unk_0x77F050A399DB77ED(), -1);
					}
					if (!func_79("EPS8_16", 0, 0) && !func_79("EPS8_11", 0, 0))
					{
						if (!func_286())
						{
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_SEC", "EPS8_SEC_1", 7, 0, 0))
							{
								iLocal_277 = 1;
								iLocal_276 = unk_0x3EAC9995EC220C5A();
							}
						}
					}
				}
				else if (unk_0x49C650267EDFEBC6(iLocal_596, 713668775) != 1)
				{
					unk_0xE3BCB930B62CBDE5(iLocal_596, unk_0x03C14E8A9400F2A9(iLocal_632, 0f, 2.5f, 0f), 2f, 20000, 4.5f, 0, 1193033728);
				}
			}
			else if (iLocal_277 == 1)
			{
				if (unk_0x49C650267EDFEBC6(iLocal_596, -875674219) != 1)
				{
					unk_0x9A42ADE14351A508(iLocal_596, unk_0x77F050A399DB77ED(), -1);
				}
				if (func_78(uLocal_570[5]))
				{
					if (unk_0x3EAC9995EC220C5A() > iLocal_276 + 300)
					{
						if (unk_0x49C650267EDFEBC6(uLocal_570[5], -875674219) != 1)
						{
							unk_0x9A42ADE14351A508(uLocal_570[5], unk_0x77F050A399DB77ED(), -1);
						}
					}
				}
				if (unk_0x3EAC9995EC220C5A() > iLocal_276 + 6000)
				{
					if (func_63(&uLocal_390, "EPS8AU", "EPS8_SEC", "EPS8_SEC_2", 7, 0, 0))
					{
						iLocal_277 = 2;
						iLocal_276 = unk_0x3EAC9995EC220C5A();
					}
				}
			}
			else if (iLocal_277 == 2)
			{
				if (unk_0x49C650267EDFEBC6(iLocal_596, 1630799643) != 1)
				{
					unk_0x1592B6D205958934(iLocal_596, joaat("weapon_combatpistol"), -1, 1, 1);
					unk_0x9E040412E0CB7CD7(iLocal_596, joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
					unk_0xF0C6B04F5AFE0B40(iLocal_596, unk_0x77F050A399DB77ED(), -1, 0);
				}
				if (unk_0x3EAC9995EC220C5A() > iLocal_276 + 10000)
				{
					iLocal_277 = 3;
					iLocal_276 = unk_0x3EAC9995EC220C5A();
				}
			}
			else if (iLocal_277 == 3)
			{
				if (!unk_0x1CC086F95707C553(iLocal_596, unk_0x77F050A399DB77ED()))
				{
					if (unk_0x49C650267EDFEBC6(iLocal_596, 780511057) != 1)
					{
						unk_0xFBE25F0677076CF9(iLocal_596, unk_0x77F050A399DB77ED(), 0, 16);
					}
				}
			}
		}
	}
}

void func_293()
{
	Global_14578 = 0;
	func_76();
}

struct<6> func_294()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

void func_295()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), -358.0764f, -88.2705f, 44.5901f, 1) > unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(uLocal_580[0], 1), -358.0764f, -88.2705f, 44.5901f, 1))
	{
		fLocal_252 = (40f - func_284(uLocal_580[0], iLocal_632, 1));
		if (fLocal_252 > 0f)
		{
			fLocal_252 = (fLocal_252 / 2.5f);
		}
		else
		{
			fLocal_252 = 1E-06f;
		}
		if (fLocal_252 < 4f)
		{
			fLocal_252 = 1E-06f;
		}
		if (fLocal_252 > 8f)
		{
			fLocal_252 = -1f;
		}
		if (fLocal_252 < 3f)
		{
			bVar0 = true;
		}
		if (unk_0x599C956FC6B86D98(iLocal_615))
		{
			if (unk_0x1EC5DAD038807CDF(iLocal_615) < 47043.75f)
			{
				unk_0x88DF2008E7C54A31(iLocal_615, 1.25f);
			}
		}
	}
	else
	{
		fLocal_252 = -1f;
		if (unk_0x599C956FC6B86D98(iLocal_615))
		{
			if (unk_0x1EC5DAD038807CDF(iLocal_615) < 47043.75f)
			{
				unk_0x88DF2008E7C54A31(iLocal_615, 1.5f);
			}
		}
	}
	if (func_78(uLocal_580[0]))
	{
		if (func_17(uLocal_616[0]))
		{
			if (unk_0xBF0744BF24FE8D11(uLocal_580[0], uLocal_616[0]))
			{
				if (fLocal_252 != -1f)
				{
					if (bVar0)
					{
						unk_0x2C5F5E306C098BDB(uLocal_616[0], 1);
					}
					else
					{
						unk_0x2C5F5E306C098BDB(uLocal_616[0], 0);
					}
				}
				if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
				{
					if ((iLocal_568 == 3 || iLocal_568 == 4) || iLocal_568 == 5)
					{
						if (unk_0x3F18BD52B422B670(uLocal_616[0]))
						{
							unk_0xA9B5A794BDA5988D(uLocal_616[0]);
						}
					}
					else if (unk_0xCA55F1A0D9ADE3AD(uLocal_580[0], -345.6437f, -85.66679f, 53.65821f, -378.4535f, -73.82299f, 43.15821f, 18.25f, 0, 1, 0))
					{
						if (!unk_0x3F18BD52B422B670(uLocal_616[0]) || !iLocal_385)
						{
							unk_0xA1AF7FB22ACAD39B(uLocal_580[0], uLocal_616[0], "Eps8LS01", 786599, 0, 8, -1, fLocal_252, 0, 1073741824);
							iLocal_385 = 1;
						}
						else
						{
							func_296();
						}
					}
					else if (!unk_0x3F18BD52B422B670(uLocal_616[0]))
					{
						unk_0xA1AF7FB22ACAD39B(uLocal_580[0], uLocal_616[0], "Eps8LS01", 786468, 0, 8, -1, fLocal_252, 0, 1073741824);
					}
					else
					{
						func_296();
					}
				}
				else if (unk_0xCA55F1A0D9ADE3AD(uLocal_580[0], -345.6437f, -85.66679f, 53.65821f, -378.4535f, -73.82299f, 43.15821f, 18.25f, 0, 1, 0))
				{
					if (!unk_0x3F18BD52B422B670(uLocal_616[0]) || !iLocal_385)
					{
						unk_0xA1AF7FB22ACAD39B(uLocal_580[0], uLocal_616[0], "Eps8LS01", 786599, 0, 8, -1, fLocal_252, 0, 1073741824);
						iLocal_385 = 1;
					}
					else
					{
						func_296();
					}
				}
				else if (!unk_0x3F18BD52B422B670(uLocal_616[0]))
				{
					unk_0xA1AF7FB22ACAD39B(uLocal_580[0], uLocal_616[0], "Eps8LS01", 786468, 0, 8, -1, fLocal_252, 0, 1073741824);
				}
				else
				{
					func_296();
				}
			}
		}
	}
	unk_0x1F5FEEAD9AFDC4FC(uLocal_616[0], 0, 0);
	unk_0x1F5FEEAD9AFDC4FC(uLocal_616[0], 1, 0);
	if (unk_0xCA55F1A0D9ADE3AD(uLocal_580[0], -673.6242f, 46.50732f, 45.42094f, -657.8456f, 45.62354f, 35.89909f, 7f, 0, 1, 0))
	{
		unk_0x1F5FEEAD9AFDC4FC(uLocal_616[0], 0, 1);
	}
	if (unk_0xCA55F1A0D9ADE3AD(uLocal_580[0], -659.3698f, 21.0666f, 45.16937f, -641.9688f, -12.16242f, 35.58978f, 14f, 0, 1, 0))
	{
		unk_0x1F5FEEAD9AFDC4FC(uLocal_616[0], 1, 1);
	}
	if (unk_0xCA55F1A0D9ADE3AD(uLocal_580[0], -429.661f, -7.262719f, 52.31787f, -394.0083f, -12.02923f, 41.92323f, 14f, 0, 1, 0))
	{
		unk_0x1F5FEEAD9AFDC4FC(uLocal_616[0], 0, 1);
	}
	if (unk_0xCA55F1A0D9ADE3AD(uLocal_580[0], -405.9864f, -54.69353f, 51.0304f, -397.1461f, -36.4476f, 41.66385f, 14f, 0, 1, 0))
	{
		unk_0x1F5FEEAD9AFDC4FC(uLocal_616[0], 1, 1);
	}
}

void func_296()
{
	if (fLocal_252 == -1f)
	{
		unk_0x2615A21BB2E3F510(uLocal_616[0]);
	}
	else if (unk_0x2AA05370067DC5AC(uLocal_616[0]) > fLocal_252)
	{
		unk_0xA682C934F695FAF5(uLocal_616[0], fLocal_252);
	}
	else
	{
		unk_0x2615A21BB2E3F510(uLocal_616[0]);
	}
}

void func_297()
{
	struct<6> Var0;
	struct<6> Var6;
	
	if (func_17(iLocal_632))
	{
		unk_0x70128991F6834BBA(iLocal_632, 1);
	}
	if (func_17(uLocal_616[0]))
	{
		if (iLocal_339 == 0)
		{
			if (unk_0x3EAC9995EC220C5A() > iLocal_291 + 5000 || !unk_0xCA55F1A0D9ADE3AD(uLocal_616[0], -664.4363f, 53.47593f, 31.86062f, -727.7729f, 24.45449f, 46.73167f, 22.5f, 0, 1, 0))
			{
				iLocal_339 = 1;
			}
		}
		unk_0x70128991F6834BBA(uLocal_616[0], 1);
		if (iLocal_568 == 3 || iLocal_568 == 4)
		{
			if (unk_0x3EAC9995EC220C5A() > iLocal_294 + 4000)
			{
				if (unk_0xCC580427ED36D7F8(uLocal_616[0], unk_0x77F050A399DB77ED(), 1))
				{
					if (iLocal_275 < 2)
					{
						iLocal_275++;
						iLocal_294 = unk_0x3EAC9995EC220C5A();
						unk_0x1E7F0537BF0E8998(uLocal_616[0]);
					}
					else
					{
						Var0 = { func_299() };
						if (!unk_0x35D1CAD6ADAB6491(&Var0, "EPS8_LS_13"))
						{
							iLocal_275++;
							iLocal_294 = unk_0x3EAC9995EC220C5A();
							unk_0x1E7F0537BF0E8998(uLocal_616[0]);
						}
						else
						{
							iLocal_275 = 2;
							unk_0x1E7F0537BF0E8998(uLocal_616[0]);
						}
					}
				}
			}
			if (iLocal_275 > 2)
			{
				Var6 = { func_299() };
				if (!unk_0x35D1CAD6ADAB6491(&Var6, "EPS8_LS_13"))
				{
					iLocal_311 = 1;
				}
			}
		}
	}
	if (func_17(uLocal_616[2]))
	{
		unk_0x70128991F6834BBA(uLocal_616[2], 1);
	}
	if (func_17(uLocal_616[3]))
	{
		unk_0x70128991F6834BBA(uLocal_616[3], 1);
	}
	if (func_78(uLocal_580[0]))
	{
		if (!func_55(iLocal_632, uLocal_580[0], 50f))
		{
			if (iLocal_328 == 0)
			{
				iLocal_311 = 1;
			}
		}
	}
	if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -366.3542f, -107.6003f, 31.93177f, -355.0581f, -74.91284f, 55.84066f, 85.25f, 0, 1, 0))
	{
		if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
		{
			if (unk_0x8C7E85A27DBA1793(unk_0x77F050A399DB77ED()) == joaat("weapon_stickybomb") || unk_0x8C7E85A27DBA1793(unk_0x77F050A399DB77ED()) == joaat("weapon_petrolcan"))
			{
				iLocal_311 = 1;
			}
		}
	}
	if (iLocal_328 == 0)
	{
		if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -366.3542f, -107.6003f, 31.93177f, -355.0581f, -74.91284f, 55.84066f, 85.25f, 0, 1, 0))
		{
			iLocal_328 = 1;
		}
	}
	else if (iLocal_568 == 7)
	{
		if ((func_17(iLocal_633) && unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -383.1558f, -102.7442f, 37.43079f, -371.1183f, -109.4619f, 40.42916f, 13f, 0, 1, 0)) && !unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
		{
			if (func_78(iLocal_596))
			{
				if (iLocal_338 == 1)
				{
					if (iLocal_340 == 1)
					{
						if ((((unk_0x49C650267EDFEBC6(iLocal_596, 242628503) == 1 && iLocal_366 == 1) && unk_0x3EAC9995EC220C5A() > iLocal_289 + 3200) && !unk_0xCD7683F575A67B31(iLocal_596)) && !unk_0xCC580427ED36D7F8(iLocal_596, unk_0x77F050A399DB77ED(), 1))
						{
							if (unk_0x5EE0E9E5B7A50C2A(iLocal_596, "rcmepsilonism8", "worship_base", 3) || unk_0x5EE0E9E5B7A50C2A(iLocal_596, "rcmepsilonism8", "worship_idle_a", 3))
							{
								unk_0x642DDF74A8A2B3BB(iLocal_596, "rcmepsilonism8", "worship_exit", 2f, -2f, -1, 819200, 0, 0, 0, 0);
								iLocal_312 = 1;
							}
						}
					}
				}
				else if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_633, 1))
				{
					if (iLocal_297 == 0)
					{
						iLocal_312 = 1;
					}
				}
			}
			iLocal_334 = 1;
		}
		if (iLocal_297 == 0)
		{
			if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -430.6594f, -63.76026f, 99.82037f, -257.6355f, -120.5171f, 37.3026f, 170.5f, 0, 1, 0))
			{
				iLocal_334 = 0;
				iLocal_312 = 1;
			}
		}
	}
	if (iLocal_328 == 1)
	{
		if (iLocal_297 == 0)
		{
			if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -366.3542f, -107.6003f, 31.93177f, -355.0581f, -74.91284f, 55.84066f, 85.25f, 0, 1, 0))
			{
				if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
				{
					if (iLocal_334 == 0)
					{
						iLocal_296 = unk_0x3EAC9995EC220C5A();
						iLocal_297 = 1;
					}
				}
			}
		}
		if (iLocal_297 == 1)
		{
			if (unk_0x3EAC9995EC220C5A() > iLocal_296 + 1500)
			{
				iLocal_311 = 1;
			}
		}
	}
	if (func_17(iLocal_615))
	{
		if (func_78(uLocal_570[5]))
		{
			if (unk_0xE5FADE1166052251(uLocal_570[5], iLocal_615, 0))
			{
				unk_0x9526D9575C237F2F(uLocal_570[5], 1);
				unk_0xB424F90D6E96BCF8(uLocal_570[5], 3, 0);
			}
			else
			{
				unk_0x9526D9575C237F2F(uLocal_570[5], 0);
				unk_0xB424F90D6E96BCF8(uLocal_570[5], 3, 1);
				unk_0xB424F90D6E96BCF8(uLocal_570[5], 1, 0);
			}
		}
		if (func_78(iLocal_578))
		{
			if (unk_0xE5FADE1166052251(iLocal_578, iLocal_615, 0))
			{
				unk_0x9526D9575C237F2F(iLocal_578, 1);
				unk_0xB424F90D6E96BCF8(iLocal_578, 3, 0);
			}
			else
			{
				unk_0x9526D9575C237F2F(iLocal_578, 0);
				unk_0xB424F90D6E96BCF8(iLocal_578, 3, 1);
				unk_0xB424F90D6E96BCF8(iLocal_578, 1, 0);
			}
		}
		if (func_78(iLocal_596))
		{
			if (unk_0xE5FADE1166052251(iLocal_596, iLocal_615, 0))
			{
				unk_0x9526D9575C237F2F(iLocal_596, 1);
				unk_0xB424F90D6E96BCF8(iLocal_596, 3, 0);
			}
			else
			{
				unk_0x9526D9575C237F2F(iLocal_596, 0);
				unk_0xB424F90D6E96BCF8(iLocal_596, 3, 1);
				unk_0xB424F90D6E96BCF8(iLocal_596, 1, 0);
			}
		}
		if (func_78(iLocal_579))
		{
			if (unk_0xE5FADE1166052251(iLocal_579, iLocal_615, 0))
			{
				unk_0x9526D9575C237F2F(iLocal_579, 1);
				unk_0xB424F90D6E96BCF8(iLocal_579, 3, 0);
			}
			else
			{
				unk_0x9526D9575C237F2F(iLocal_579, 0);
				unk_0xB424F90D6E96BCF8(iLocal_579, 3, 1);
				unk_0xB424F90D6E96BCF8(iLocal_579, 1, 0);
			}
		}
		if (unk_0x599C956FC6B86D98(iLocal_615))
		{
			if (unk_0x1EC5DAD038807CDF(iLocal_615) >= 47043.75f)
			{
				unk_0x88DF2008E7C54A31(iLocal_615, 0f);
			}
		}
	}
	if (func_78(uLocal_580[3]))
	{
		if (func_17(uLocal_616[3]))
		{
			if (func_17(iLocal_632))
			{
				if (unk_0xA427F05DB896EEBE(uLocal_580[3], -403.493f, -39.7956f, 45.1741f, 8f, 8f, 8f, 0, 1, 0))
				{
					iLocal_363 = 0;
					if (unk_0x3F18BD52B422B670(uLocal_616[3]))
					{
						unk_0xA9B5A794BDA5988D(uLocal_616[3]);
					}
					if (unk_0x49C650267EDFEBC6(uLocal_580[3], -1273030092) == 1)
					{
						unk_0x19A678020762B54A(uLocal_580[3], uLocal_616[3], 24, -1);
					}
				}
				else
				{
					if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), -658.9627f, 46.1624f, 40.1914f, 4f, 4f, 5f, 0, 1, 0))
					{
						if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
						{
							if (iLocal_363 == 0)
							{
								unk_0xA1AF7FB22ACAD39B(uLocal_580[3], uLocal_616[3], "Eps8LS01", 786468, 18, 0, -1, 40f, 0, 1073741824);
								iLocal_363 = 1;
							}
						}
					}
					if (iLocal_363 == 1)
					{
						if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
						{
							if (unk_0xCA55F1A0D9ADE3AD(uLocal_580[3], -431.31f, -13.28864f, 44.0877f, -391.9005f, -16.8117f, 49.91203f, 33.75f, 0, 1, 0))
							{
								if (!unk_0x3F18BD52B422B670(uLocal_616[3]))
								{
									unk_0xA1AF7FB22ACAD39B(uLocal_580[3], uLocal_616[3], "Eps8LS01", 786469, 18, 8, -1, 40f, 0, 1073741824);
								}
							}
							else if (!func_55(unk_0x77F050A399DB77ED(), uLocal_580[3], 30f))
							{
								if (!unk_0x3F18BD52B422B670(uLocal_616[3]))
								{
									unk_0xA1AF7FB22ACAD39B(uLocal_580[3], uLocal_616[3], "Eps8LS01", 786468, 18, 8, -1, 40f, 0, 1073741824);
								}
							}
							else if (unk_0x49C650267EDFEBC6(uLocal_580[3], -1273030092) != 1)
							{
								unk_0xF1F149CF05BA389F(uLocal_580[3], uLocal_616[3], iLocal_632, 40f, 262144, 10);
							}
						}
						else if (unk_0x49C650267EDFEBC6(uLocal_580[3], -1273030092) != 1)
						{
							unk_0xF1F149CF05BA389F(uLocal_580[3], uLocal_616[3], iLocal_632, 40f, 262144, 10);
						}
					}
				}
			}
		}
	}
	if (func_78(uLocal_580[iLocal_256]))
	{
		if (unk_0x1CC086F95707C553(uLocal_580[iLocal_256], unk_0x77F050A399DB77ED()))
		{
			iLocal_311 = 1;
		}
	}
	if (func_78(uLocal_588[iLocal_256]))
	{
		if (unk_0x1CC086F95707C553(uLocal_588[iLocal_256], unk_0x77F050A399DB77ED()))
		{
			iLocal_311 = 1;
		}
	}
	if (func_78(uLocal_570[iLocal_256]))
	{
		if (unk_0x1CC086F95707C553(uLocal_570[iLocal_256], unk_0x77F050A399DB77ED()))
		{
			iLocal_311 = 1;
		}
		else if (iLocal_568 == 7)
		{
			if (unk_0xCD7683F575A67B31(uLocal_570[iLocal_256]))
			{
				if (unk_0xCA55F1A0D9ADE3AD(uLocal_570[iLocal_256], -381.8959f, -98.08368f, 37.74649f, -378.5122f, -88.64344f, 46.51857f, 2.4f, 0, 1, 0))
				{
					iLocal_311 = 1;
				}
			}
			if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				if (iLocal_256 == 5)
				{
					if (iLocal_324 == 0)
					{
						if (func_55(uLocal_570[5], unk_0x77F050A399DB77ED(), 4.5f))
						{
							unk_0x630E218FE7E4C793(uLocal_570[5], "EPS8_ANAA", "EPSGUARD2", "SPEECH_PARAMS_FORCE", 0);
							iLocal_324 = 1;
						}
					}
				}
				if (iLocal_256 == 3)
				{
					if (iLocal_325 == 0)
					{
						if (func_55(uLocal_570[3], unk_0x77F050A399DB77ED(), 5f))
						{
							unk_0x630E218FE7E4C793(uLocal_570[3], "EPS8_AOAA", "EPSGUARD7", "SPEECH_PARAMS_FORCE", 0);
							unk_0x642DDF74A8A2B3BB(uLocal_570[3], "rcmepsilonism8", "security_greet", 2f, -2f, -1, 32, 0.2f, 1, 0, 0);
							iLocal_325 = 1;
						}
					}
				}
				if (iLocal_256 == 4)
				{
					if (iLocal_326 == 0)
					{
						if (func_55(uLocal_570[4], unk_0x77F050A399DB77ED(), 5f))
						{
							unk_0x630E218FE7E4C793(uLocal_570[4], "EPS8_APAA", "EPSGUARD8", "SPEECH_PARAMS_FORCE", 0);
							unk_0x642DDF74A8A2B3BB(uLocal_570[4], "rcmepsilonism8", "security_greet", 2f, -2f, -1, 32, 0.2f, 1, 0, 0);
							iLocal_326 = 1;
						}
					}
				}
			}
		}
	}
	if (func_78(iLocal_578))
	{
		if (unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iLocal_578) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iLocal_578))
		{
			if (unk_0x6867AF84AF12BEFC(iLocal_578, unk_0x77F050A399DB77ED(), 90f))
			{
				iLocal_311 = 1;
			}
		}
		if (unk_0x1CC086F95707C553(iLocal_578, unk_0x77F050A399DB77ED()))
		{
			iLocal_311 = 1;
		}
	}
	if (func_78(iLocal_579))
	{
		if (unk_0x1CC086F95707C553(iLocal_579, unk_0x77F050A399DB77ED()))
		{
			iLocal_311 = 1;
		}
	}
	if (func_78(iLocal_596))
	{
		if (unk_0x1CC086F95707C553(iLocal_596, unk_0x77F050A399DB77ED()))
		{
			iLocal_311 = 1;
		}
		if (unk_0xCC580427ED36D7F8(iLocal_596, unk_0x77F050A399DB77ED(), 1))
		{
			iLocal_311 = 1;
		}
		if (unk_0xCD7683F575A67B31(iLocal_596))
		{
			if (unk_0xCA55F1A0D9ADE3AD(iLocal_596, -381.8959f, -98.08368f, 37.74649f, -378.5122f, -88.64344f, 46.51857f, 2.4f, 0, 1, 0))
			{
				iLocal_311 = 1;
			}
		}
	}
	else
	{
		if (func_78(uLocal_570[0]))
		{
			if (func_55(uLocal_570[0], unk_0x77F050A399DB77ED(), 100f))
			{
				iLocal_927[0] = func_282(uLocal_570[0], 1, 0, 3);
				unk_0x61CD4A0BA23CE782(iLocal_927[0], fLocal_147);
				unk_0xFBE25F0677076CF9(uLocal_570[0], unk_0x77F050A399DB77ED(), 0, 16);
				iLocal_257++;
			}
		}
		if (func_78(uLocal_570[2]))
		{
			if (func_55(uLocal_570[2], unk_0x77F050A399DB77ED(), 100f))
			{
				iLocal_927[2] = func_282(uLocal_570[2], 1, 0, 3);
				unk_0x61CD4A0BA23CE782(iLocal_927[2], fLocal_147);
				unk_0xFBE25F0677076CF9(uLocal_570[2], unk_0x77F050A399DB77ED(), 0, 16);
				iLocal_257++;
			}
		}
		if (func_78(uLocal_570[3]))
		{
			if (func_55(uLocal_570[3], unk_0x77F050A399DB77ED(), 100f))
			{
				iLocal_927[3] = func_282(uLocal_570[3], 1, 0, 3);
				unk_0x61CD4A0BA23CE782(iLocal_927[3], fLocal_147);
				unk_0xFBE25F0677076CF9(uLocal_570[3], unk_0x77F050A399DB77ED(), 0, 16);
				iLocal_257++;
			}
		}
		if (func_78(uLocal_570[4]))
		{
			if (func_55(uLocal_570[4], unk_0x77F050A399DB77ED(), 100f))
			{
				iLocal_927[4] = func_282(uLocal_570[4], 1, 0, 3);
				unk_0x61CD4A0BA23CE782(iLocal_927[4], fLocal_147);
				unk_0xFBE25F0677076CF9(uLocal_570[4], unk_0x77F050A399DB77ED(), 0, 16);
				iLocal_257++;
			}
		}
		if (func_78(uLocal_570[5]))
		{
			if (func_55(uLocal_570[5], unk_0x77F050A399DB77ED(), 100f))
			{
				iLocal_927[5] = func_282(uLocal_570[5], 1, 0, 3);
				unk_0x61CD4A0BA23CE782(iLocal_927[5], fLocal_147);
				unk_0xFBE25F0677076CF9(uLocal_570[5], unk_0x77F050A399DB77ED(), 0, 16);
				iLocal_257++;
			}
		}
		iLocal_311 = 1;
	}
	if ((((((((unk_0x0B6E83A9A7ED3EBA(uLocal_570[0]) || unk_0x0B6E83A9A7ED3EBA(uLocal_570[2])) || unk_0x0B6E83A9A7ED3EBA(uLocal_570[3])) || unk_0x0B6E83A9A7ED3EBA(uLocal_570[4])) || unk_0x0B6E83A9A7ED3EBA(uLocal_570[5])) || unk_0x0B6E83A9A7ED3EBA(iLocal_578)) || unk_0x0B6E83A9A7ED3EBA(iLocal_579)) || unk_0xC5C7DFE5BAB3BB22(iLocal_578)) || unk_0xC5C7DFE5BAB3BB22(iLocal_579))
	{
		iLocal_311 = 1;
	}
	if (unk_0x1F2158D615BC4B25(uLocal_616[iLocal_256]))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(uLocal_616[iLocal_256]))
		{
			if (((unk_0xE5B5E2C91309482F(unk_0xAF99169F0F5AE41D(uLocal_616[iLocal_256], 1), joaat("weapon_grenade"), 4f, 1) || unk_0xE5B5E2C91309482F(unk_0xAF99169F0F5AE41D(uLocal_616[iLocal_256], 1), joaat("weapon_molotov"), 4f, 1)) || unk_0xE5B5E2C91309482F(unk_0xAF99169F0F5AE41D(uLocal_616[iLocal_256], 1), joaat("weapon_smokegrenade"), 4f, 1)) || unk_0xE5B5E2C91309482F(unk_0xAF99169F0F5AE41D(uLocal_616[iLocal_256], 1), joaat("weapon_stickybomb"), 4f, 1))
			{
				iLocal_311 = 1;
			}
			if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), uLocal_616[iLocal_256], 0))
			{
				iLocal_311 = 1;
			}
		}
		else
		{
			iLocal_311 = 1;
		}
	}
	if (unk_0x1F2158D615BC4B25(uLocal_580[iLocal_256]))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(uLocal_580[iLocal_256]))
		{
			if (unk_0xC5C7DFE5BAB3BB22(uLocal_580[iLocal_256]))
			{
				iLocal_311 = 1;
			}
		}
		else
		{
			iLocal_311 = 1;
		}
	}
	if (unk_0x1F2158D615BC4B25(uLocal_588[iLocal_256]))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(uLocal_588[iLocal_256]))
		{
			if (unk_0xC5C7DFE5BAB3BB22(uLocal_588[iLocal_256]))
			{
				iLocal_311 = 1;
			}
		}
		else
		{
			iLocal_311 = 1;
		}
	}
	if (!unk_0x0B6E83A9A7ED3EBA(iLocal_615))
	{
		if ((func_55(iLocal_615, unk_0x77F050A399DB77ED(), 3f) || func_55(iLocal_615, iLocal_632, 3f)) || func_284(iLocal_615, unk_0xD8D1111EA0CFD1DB(), 1) <= 3f)
		{
			unk_0xD22EAA7B4087A151(iLocal_615);
		}
		if (func_298(unk_0x77F050A399DB77ED(), iLocal_615))
		{
			iLocal_311 = 1;
		}
		if (((unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_615, 0) || unk_0xCC580427ED36D7F8(iLocal_615, unk_0x77F050A399DB77ED(), 1)) || unk_0xCC580427ED36D7F8(iLocal_615, iLocal_632, 1)) || unk_0x32F9EB04315127B4(iLocal_615, iLocal_632))
		{
			iLocal_311 = 1;
		}
	}
	iLocal_256++;
	if (iLocal_256 == 7)
	{
		iLocal_256 = 0;
	}
}

int func_298(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x1E80C02AC16B6622(iParam0))
	{
		if (unk_0x968EA16107097324(iParam1, 0))
		{
			iVar0 = unk_0x08CA1B7A7938D598(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_299()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x3EA88DB5F5F71A3B();
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

void func_300()
{
	struct<6> Var0;
	
	func_297();
	func_295();
	if (!unk_0x2F8B0145337135AB(iLocal_596, unk_0x77F050A399DB77ED()))
	{
		unk_0xD0C8DD55C652567F(iLocal_596, unk_0x77F050A399DB77ED(), -1, 2096, 4);
	}
	if (unk_0x3EAC9995EC220C5A() > iLocal_293 + 6500)
	{
		func_290();
	}
	if (!func_286())
	{
		if (!unk_0xC3B073777B46C61A(iLocal_940))
		{
			if (iLocal_369 == 0)
			{
				iLocal_940 = func_282(iLocal_596, 1, 1, 5);
				unk_0x61CD4A0BA23CE782(iLocal_940, fLocal_147);
				iLocal_369 = 1;
			}
		}
		iLocal_568 = 7;
	}
	if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
	{
		Var0 = { func_294() };
		if (!unk_0x0AAC2160036975D9(&Var0))
		{
			if (unk_0x35D1CAD6ADAB6491(&Var0, "EPS8_E1"))
			{
				func_293();
			}
		}
	}
}

void func_301()
{
	func_11();
	func_297();
	func_295();
	if (!unk_0x2F8B0145337135AB(iLocal_596, unk_0x77F050A399DB77ED()))
	{
		unk_0xD0C8DD55C652567F(iLocal_596, unk_0x77F050A399DB77ED(), -1, 2096, 4);
	}
	if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
	{
		if (unk_0x4A4B6FD54C499B7D(joaat("tractor")))
		{
			if (!func_286())
			{
				if (func_275(&uLocal_390, "EPS8AU", "EPS8_ESC", 7, 0, 0, 0))
				{
					unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), true, 0);
					iLocal_633 = unk_0x2EEA15C0C12C8CDE(joaat("tractor"), -375.6338f, -105.9456f, 37.679f, 119.7025f, 1, 1);
					unk_0x90908B101918C346(iLocal_633, 8, 0);
					unk_0x90908B101918C346(iLocal_633, 1, 1);
					unk_0xE1BEFB80AC811E83(iLocal_633, "K1FFL0M1");
					func_304(iLocal_633, 1);
					unk_0xFB4F6722A032A0F0(joaat("tractor"));
					unk_0x007FD255A321ABD0(iLocal_596, 0);
					unk_0x2A6B9F9E71C479CF(&uLocal_943);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 0, 2);
					unk_0x743E219F0C060EE5(0, 0, 0);
					unk_0x642DDF74A8A2B3BB(0, "rcmepsilonism8", "jump_off_heli", 2f, -1f, -1, 32768, 0.084f, 0, 0, 0);
					unk_0x44642CB08FA1637E(uLocal_943);
					unk_0xB8A8FA4B28E9F423(iLocal_596, uLocal_943);
					unk_0xAAD288E877AC833D(&uLocal_943);
					iLocal_293 = unk_0x3EAC9995EC220C5A();
					func_5(0);
					Local_215 = { unk_0xAF99169F0F5AE41D(iLocal_632, 1) };
					iLocal_940 = func_282(iLocal_596, 1, 1, 5);
					iLocal_369 = 1;
					unk_0x61CD4A0BA23CE782(iLocal_940, fLocal_147);
					unk_0xD8684F03DA130C7B("move_ped_wpn_jerrycan_generic");
					iLocal_304 = 0;
					func_302(&uLocal_555, 0, 0);
					iLocal_387 = 0;
					iLocal_568 = 6;
				}
			}
		}
	}
	else if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -351.6279f, -76.40219f, 41.77763f, -361.8925f, -104.8718f, 48.97791f, fLocal_152, 0, 1, 0))
	{
		iLocal_311 = 1;
	}
}

void func_302(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x4C779B19E6DDCDA2())
	{
		if (unk_0xB56FEBC510E7E9DE(Global_2457713.f_4416, 26))
		{
			return;
		}
	}
	if (unk_0x95147FF3B74E25F0())
	{
		unk_0x88890C87E37B149D(iParam2);
		unk_0xC1AE3FBCCFD4D957("FocusIn");
		unk_0xE0DB271DC0AEA972("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x23D87B2CECB53E05("FocusOut", 0, 0);
			unk_0xBBEB613A917D7EE8(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xBA6758C5B23DAE05(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x9D14A941038EF8A3(sVar0))
	{
		if (!unk_0x4C779B19E6DDCDA2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x9D14A941038EF8A3(uParam0->f_3))
	{
		if (func_303(uParam0->f_3))
		{
			unk_0x4ACCE973F9C3CA3B(1);
		}
	}
	if (!unk_0x9D14A941038EF8A3(sVar0))
	{
		if (func_303(sVar0))
		{
			unk_0x4ACCE973F9C3CA3B(1);
		}
	}
}

bool func_303(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

void func_304(int iParam0, int iParam1)
{
	Global_91106.f_22[iParam1] = iParam0;
}

void func_305()
{
	func_288();
	unk_0x7B2DD53524CE717E(0f);
	func_297();
	func_295();
	if (!unk_0xA427F05DB896EEBE(iLocal_632, Local_158, 2f, 2f, 2f, 0, 1, 0))
	{
		func_277();
	}
	if (!unk_0x2F8B0145337135AB(iLocal_596, unk_0x77F050A399DB77ED()))
	{
		unk_0xD0C8DD55C652567F(iLocal_596, unk_0x77F050A399DB77ED(), -1, 2096, 4);
	}
	if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
	{
		if (func_17(iLocal_615))
		{
			func_307(&uLocal_555, iLocal_615, 0, 0, 1, 1, 1);
		}
	}
	else
	{
		func_302(&uLocal_555, 0, 0);
	}
	if (unk_0xA427F05DB896EEBE(iLocal_632, Local_158, 2f, 2f, 2f, 0, 1, 0) && unk_0xFF56D249420BBDD7(iLocal_632))
	{
		func_24(&iLocal_935);
		if (unk_0x2AA05370067DC5AC(iLocal_632) < 12.8f)
		{
			fLocal_152 = 30.75f;
		}
		if (unk_0x2AA05370067DC5AC(iLocal_632) >= 12.8f && unk_0x2AA05370067DC5AC(iLocal_632) < 18f)
		{
			fLocal_152 = 32.75f;
		}
		if (unk_0x2AA05370067DC5AC(iLocal_632) >= 18f)
		{
			fLocal_152 = 34.75f;
		}
		if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
		{
			func_24(&iLocal_938);
			iLocal_362 = 1;
			unk_0xC60576ADD1AECA45(joaat("tractor"));
			unk_0xD8684F03DA130C7B("move_ped_wpn_jerrycan_generic");
			iLocal_568 = 5;
		}
		else
		{
			if (iLocal_377 == 0)
			{
				unk_0x746BA52A343DAF52(5f, 15f, 1);
				func_285("EPS8_27", 7500, 0);
				iLocal_377 = 1;
			}
			iLocal_382 = 1;
		}
	}
	else if (unk_0xA427F05DB896EEBE(iLocal_632, Local_158, 2f, 2f, 2f, 0, 1, 0))
	{
		func_24(&iLocal_935);
		if (!unk_0xFF56D249420BBDD7(iLocal_632))
		{
			if (iLocal_382 == 0)
			{
				func_306(iLocal_632, 4f, 1, 1056964608, 0, 1, 0);
			}
		}
	}
	if (unk_0xC3B073777B46C61A(iLocal_935))
	{
		iLocal_382 = 0;
		if (unk_0xA427F05DB896EEBE(iLocal_632, Local_158, 6f, 6f, 2f, 1, 1, 0))
		{
		}
	}
}

int func_306(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x6E20845D23D3DFD4(0, 71, 1);
	unk_0x6E20845D23D3DFD4(0, 72, 1);
	unk_0x6E20845D23D3DFD4(0, 76, 1);
	unk_0x6E20845D23D3DFD4(0, 73, 1);
	unk_0x6E20845D23D3DFD4(0, 59, 1);
	unk_0x6E20845D23D3DFD4(0, 60, 1);
	if (bParam5)
	{
		unk_0x6E20845D23D3DFD4(0, 75, 1);
	}
	unk_0x6E20845D23D3DFD4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x6E20845D23D3DFD4(0, 69, 1);
		unk_0x6E20845D23D3DFD4(0, 70, 1);
		unk_0x6E20845D23D3DFD4(0, 68, 1);
	}
	unk_0x6E20845D23D3DFD4(0, 74, 1);
	unk_0x6E20845D23D3DFD4(0, 86, 1);
	unk_0x6E20845D23D3DFD4(0, 81, 1);
	unk_0x6E20845D23D3DFD4(0, 82, 1);
	unk_0x6E20845D23D3DFD4(0, 138, 1);
	unk_0x6E20845D23D3DFD4(0, 136, 1);
	unk_0x6E20845D23D3DFD4(0, 114, 1);
	unk_0x6E20845D23D3DFD4(0, 107, 1);
	unk_0x6E20845D23D3DFD4(0, 110, 1);
	unk_0x6E20845D23D3DFD4(0, 89, 1);
	unk_0x6E20845D23D3DFD4(0, 89, 1);
	unk_0x6E20845D23D3DFD4(0, 87, 1);
	unk_0x6E20845D23D3DFD4(0, 88, 1);
	unk_0x6E20845D23D3DFD4(0, 113, 1);
	unk_0x6E20845D23D3DFD4(0, 115, 1);
	unk_0x6E20845D23D3DFD4(0, 116, 1);
	unk_0x6E20845D23D3DFD4(0, 117, 1);
	unk_0x6E20845D23D3DFD4(0, 118, 1);
	unk_0x6E20845D23D3DFD4(0, 119, 1);
	unk_0x6E20845D23D3DFD4(0, 131, 1);
	unk_0x6E20845D23D3DFD4(0, 132, 1);
	unk_0x6E20845D23D3DFD4(0, 123, 1);
	unk_0x6E20845D23D3DFD4(0, 126, 1);
	unk_0x6E20845D23D3DFD4(0, 129, 1);
	unk_0x6E20845D23D3DFD4(0, 130, 1);
	unk_0x6E20845D23D3DFD4(0, 133, 1);
	unk_0x6E20845D23D3DFD4(0, 134, 1);
	unk_0xC6CCD4555A546BC0();
	if ((unk_0x3EAC9995EC220C5A() - Global_29) > 500)
	{
		unk_0x29666BB73419DB0E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x3EAC9995EC220C5A();
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		if (unk_0x092B928D30C0282D(unk_0x2AA05370067DC5AC(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_307(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_308(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_308(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_309(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_309(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x95147FF3B74E25F0())
	{
		if (unk_0x3EAC9995EC220C5A() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x9D14A941038EF8A3(iVar0))
	{
		if (!unk_0x4C779B19E6DDCDA2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_303(iVar0))
	{
		func_327();
	}
	if (func_326(iParam1) && unk_0xD0935EF5E40E7EE1(iParam1))
	{
		iVar1 = 0;
		if (unk_0x94195F7CA642F937(iParam1))
		{
			unk_0xD2DFBA27BEB05B8A(unk_0xCBABEE38E5DAB356(iParam1));
			unk_0x35CE8BF24B9ED9E5(unk_0xCBABEE38E5DAB356(iParam1), 1);
			if (unk_0x5CC41245049B745A(unk_0xCBABEE38E5DAB356(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xDD21A3DB256904E7(iParam1))
		{
			unk_0xDB4D81C20F0D62E8(unk_0x2EF671D3645D271D(iParam1));
			if (unk_0x40AB54CC0D06DA29(unk_0x2EF671D3645D271D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0449EE7873816A89(iParam1))
		{
			unk_0x00339EB670499E86(unk_0xC6E0B84C5CAF2C79(iParam1));
			if (unk_0x802384BFCB6F2ECE(unk_0xC6E0B84C5CAF2C79(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x95147FF3B74E25F0())
		{
			if (func_321(uParam0, bParam7, bParam9, 0))
			{
				func_317(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_314(iVar0))
				{
					if ((unk_0x9D14A941038EF8A3(uParam0->f_3) && !unk_0x9D14A941038EF8A3(iVar0)) && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						if ((iVar1 && !unk_0x8E9825258F5C145C()) && uParam8)
						{
							if (!func_303(iVar0))
							{
								func_313(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x35D1CAD6ADAB6491("CMN_HINT", iVar0))
								{
									func_312(1);
								}
							}
						}
					}
				}
			}
			else if (func_314(iVar0))
			{
				if (unk_0x9D14A941038EF8A3(uParam0->f_3) && !unk_0x9D14A941038EF8A3(iVar0))
				{
					if (((unk_0xF74B69DFD85D7CCE(iParam1) && iVar1) && !unk_0x8E9825258F5C145C()) && uParam8)
					{
						if (!func_303(iVar0))
						{
							func_313(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x35D1CAD6ADAB6491("CMN_HINT", iVar0))
							{
								func_312(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x9D14A941038EF8A3(sParam5))
			{
				if (func_303(sParam5))
				{
					unk_0x4ACCE973F9C3CA3B(1);
				}
			}
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
			{
				if (unk_0x76A46F8A42763BF8(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(3) == 3 || unk_0x7DF7F572759C0E1B(3) == 4)
					{
						func_302(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(6) == 3 || unk_0x7DF7F572759C0E1B(6) == 4)
					{
						func_302(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(4) == 3 || unk_0x7DF7F572759C0E1B(4) == 4)
					{
						func_302(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(5) == 3 || unk_0x7DF7F572759C0E1B(5) == 4)
					{
						func_302(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x752064BA1674210E(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(2) == 3 || unk_0x7DF7F572759C0E1B(2) == 4)
					{
						func_302(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x4D56690F35D56781() == 3 || unk_0x4D56690F35D56781() == 4)
				{
					func_302(uParam0, iVar0, 1);
				}
			}
			if (!func_321(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_311(uParam0))
				{
					func_310(uParam0);
				}
			}
		}
	}
	else
	{
		func_302(uParam0, iVar0, 0);
	}
}

void func_310(var uParam0)
{
	if (func_326(unk_0x77F050A399DB77ED()))
	{
		unk_0x8530DA8508D7A4B8(unk_0x77F050A399DB77ED());
	}
	if (unk_0x95147FF3B74E25F0())
	{
		unk_0xBA6758C5B23DAE05(1);
		unk_0x88890C87E37B149D(0);
		unk_0xE0DB271DC0AEA972("HINT_CAM_SCENE");
		unk_0xC1AE3FBCCFD4D957("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x23D87B2CECB53E05("FocusOut", 0, 0);
			unk_0xBBEB613A917D7EE8(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_311(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x3EAC9995EC220C5A()
		{
			return 1;
		}
	}
	return 0;
}

int func_312(bool bParam0)
{
	switch (Global_35700)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_99250.f_8667.f_100++;
			}
			return Global_99250.f_8667.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_99250.f_8667.f_101++;
			}
			return Global_99250.f_8667.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_99250.f_8667.f_102++;
			}
			return Global_99250.f_8667.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_313(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

int func_314(char* sParam0)
{
	if (!func_315(1, 1, 0))
	{
		if ((!unk_0x0AAC2160036975D9(sParam0) && func_303(sParam0)) || func_303("CMN_HINT"))
		{
			unk_0x4ACCE973F9C3CA3B(1);
		}
		return 0;
	}
	switch (Global_35700)
	{
		case 0:
		case 3:
			if (func_312(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_312(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_312(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_315(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xA153A26DF49EBCC0())
	{
		return 0;
	}
	if (func_9(0))
	{
		return 0;
	}
	if (func_316())
	{
		return 0;
	}
	if (unk_0x5E694571CFF565ED())
	{
		return 0;
	}
	if (Global_67968)
	{
		return 0;
	}
	if (unk_0xB1A77D5C890711F9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52841)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
		{
			if (unk_0x76A46F8A42763BF8(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x7DF7F572759C0E1B(3) == 3 || unk_0x7DF7F572759C0E1B(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x7DF7F572759C0E1B(6) == 3 || unk_0x7DF7F572759C0E1B(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x7DF7F572759C0E1B(4) == 3 || unk_0x7DF7F572759C0E1B(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x7DF7F572759C0E1B(5) == 3 || unk_0x7DF7F572759C0E1B(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x752064BA1674210E(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x7DF7F572759C0E1B(2) == 3 || unk_0x7DF7F572759C0E1B(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x4D56690F35D56781() == 3 || unk_0x4D56690F35D56781() == 4)
			{
				return 0;
			}
			if (unk_0xFC2E3F67FE96D985())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_316()
{
	return unk_0x3EAC9995EC220C5A() <= Global_17257.f_5745 + 100;
}

void func_317(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		func_302(uParam0, 0, 0);
	}
	if (func_320(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x94195F7CA642F937(iParam1))
		{
			iVar0 = unk_0xCBABEE38E5DAB356(iParam1);
			if (!unk_0xB42592B9FFEB5EDE(iVar0, 0))
			{
				if (unk_0x60F6396843CB51A6(iVar0))
				{
					if (!func_318())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x520A1DEEFD3C2DE4(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xBA6758C5B23DAE05(0);
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
	unk_0x1039A85F5DBF8803(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iParam1, -1, iVar3, iVar4);
	unk_0x23D87B2CECB53E05("FocusIn", 0, 0);
	unk_0xCAEDD1A8E831AD36("HINT_CAM_SCENE");
	unk_0xBBEB613A917D7EE8(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x3EAC9995EC220C5A();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_318()
{
	return func_319(unk_0x8ACD527A7E574590());
}

int func_319(int iParam0)
{
	if (unk_0xDF1398076E26B0E4(unk_0xF555CE342BA0C333(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_320(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_321(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x3EAC9995EC220C5A() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
				{
					if (func_325(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3EAC9995EC220C5A();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_324(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3EAC9995EC220C5A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_324(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3EAC9995EC220C5A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_325(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3EAC9995EC220C5A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_311(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x3EAC9995EC220C5A() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
					{
						if (!func_325(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x3EAC9995EC220C5A();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_324(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3EAC9995EC220C5A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_324(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3EAC9995EC220C5A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_325(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3EAC9995EC220C5A();
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
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
				{
					if (!func_325(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_324(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_324(bParam1, bParam2, bParam3) || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1) || unk_0x7DB98D7C4F2882FD(unk_0x77F050A399DB77ED(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_325(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x3EAC9995EC220C5A() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
					{
						if (func_323(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_322(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1) || func_322(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1) || unk_0x7DB98D7C4F2882FD(unk_0x77F050A399DB77ED(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_323(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_311(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_315(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_327();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_322(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_315(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (!unk_0x0BDCAB0B67087552(unk_0x8ACD527A7E574590()))
		{
			unk_0x6E20845D23D3DFD4(0, 140, 1);
			unk_0x6E20845D23D3DFD4(0, 80, 1);
			if (unk_0xB533020F2392A380(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_323(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_315(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		unk_0x6E20845D23D3DFD4(0, 80, 1);
		if (unk_0x946C2D99209048F1())
		{
			if (unk_0xB533020F2392A380(0, 80))
			{
				unk_0xBA6758C5B23DAE05(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_324(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_315(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (!unk_0x0BDCAB0B67087552(unk_0x8ACD527A7E574590()))
		{
			unk_0x6E20845D23D3DFD4(0, 140, 1);
			unk_0x6E20845D23D3DFD4(0, 80, 1);
			if (unk_0xECDBFACBE670BD70(0, 80) && unk_0x3EAC9995EC220C5A() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_325(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_315(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		unk_0x6E20845D23D3DFD4(0, 80, 1);
		if (unk_0x946C2D99209048F1())
		{
			if (unk_0xECDBFACBE670BD70(0, 80) && unk_0x3EAC9995EC220C5A() > Global_116)
			{
				unk_0xBA6758C5B23DAE05(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_326(int iParam0)
{
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (unk_0xDD21A3DB256904E7(iParam0))
		{
			if (unk_0x968EA16107097324(unk_0x2EF671D3645D271D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x94195F7CA642F937(iParam0))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0xCBABEE38E5DAB356(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0449EE7873816A89(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_327()
{
	unk_0x573691DB812DC8AA(&Global_2284, 4);
}

void func_328()
{
	if (!iLocal_384)
	{
		unk_0x2084300F2D91A8E6("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 0);
		unk_0x3345CB85AB9EC035("EPS8_START");
		unk_0x746BA52A343DAF52(0f, 10f, 1);
		iLocal_384 = 1;
	}
	unk_0x7B2DD53524CE717E(0f);
	unk_0x00FBBA398FF24D6C(-744.6715f, -175.2881f, -205.6593f, 118.4107f);
	func_332();
	if (iLocal_256 == 1 || iLocal_256 == 4)
	{
		func_331();
	}
	if (iLocal_311 == 0)
	{
		func_329();
	}
	func_297();
	func_295();
	func_277();
	if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
	{
		if (func_17(uLocal_616[0]))
		{
			func_307(&uLocal_555, uLocal_616[0], 0, 0, 1, 1, 1);
		}
		if (unk_0xE5FADE1166052251(uLocal_580[0], uLocal_616[0], 0))
		{
			if (unk_0xCA55F1A0D9ADE3AD(uLocal_616[0], -384.1292f, -72.76846f, 41.7355f, -381.6261f, -65.75608f, 52.89689f, 8.5f, 0, 1, 0))
			{
				if (unk_0xC3B073777B46C61A(iLocal_939))
				{
					unk_0x296CDA10C549A502(&iLocal_939);
				}
				if (!unk_0xC3B073777B46C61A(iLocal_935))
				{
					iLocal_935 = unk_0x1802011F6E339FFF(Local_158);
				}
				func_302(&uLocal_555, 0, 0);
				func_285("EPS8_28", 7500, 0);
				iLocal_568 = 4;
			}
		}
		if (unk_0xCA55F1A0D9ADE3AD(iLocal_632, -384.1292f, -72.76846f, 41.7355f, -381.6261f, -65.75608f, 52.89689f, 8.5f, 0, 1, 0))
		{
			func_24(&iLocal_939);
			if (!unk_0xC3B073777B46C61A(iLocal_935))
			{
				iLocal_935 = unk_0x1802011F6E339FFF(Local_158);
			}
			func_302(&uLocal_555, 0, 0);
			func_285("EPS8_28", 7500, 0);
			iLocal_568 = 4;
		}
	}
	else
	{
		func_302(&uLocal_555, 0, 0);
	}
	if (unk_0xA427F05DB896EEBE(iLocal_632, Local_158, 6f, 6f, 2f, 1, 1, 0))
	{
	}
}

void func_329()
{
	if (func_17(iLocal_632))
	{
		if (func_78(uLocal_580[0]))
		{
			if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
			{
				if (unk_0x3EAC9995EC220C5A() > iLocal_291 + 8000)
				{
					if (!func_55(unk_0x77F050A399DB77ED(), uLocal_580[0], 40f))
					{
						if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
						{
							if (unk_0x2AA05370067DC5AC(iLocal_632) > 2f)
							{
								if (iLocal_353 == 0)
								{
									if (!func_286())
									{
										if (func_275(&uLocal_390, "EPS8AU", "EPS8_LS4", 6, 0, 0, 0))
										{
											iLocal_353 = 1;
											if (iLocal_261 < 2)
											{
												iLocal_261 = 2;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_306 == 10)
					{
						if (unk_0x3EAC9995EC220C5A() > iLocal_305 + 1000)
						{
							if (!func_286())
							{
								sLocal_386 = "EPS8_23";
								iLocal_568 = 10;
								if (iLocal_261 < 2)
								{
									iLocal_261 = 2;
								}
								return;
							}
						}
					}
					if (fLocal_252 < 0.5f && fLocal_252 != -1f)
					{
						if (unk_0x2AA05370067DC5AC(iLocal_632) < 2f)
						{
							if (iLocal_349 == 0)
							{
								if (!func_286())
								{
									if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS5", "EPS8_LS5_1", 6, 0, 0))
									{
										iLocal_305 = unk_0x3EAC9995EC220C5A();
										iLocal_349 = 1;
										if (iLocal_261 < 2)
										{
											iLocal_261 = 2;
										}
									}
								}
							}
							else if (iLocal_261 >= 7)
							{
								if (unk_0x3EAC9995EC220C5A() > iLocal_305 + 9000)
								{
									if (!func_286())
									{
										if (iLocal_306 < 5)
										{
											func_275(&uLocal_390, "EPS8AU", "EPS8_T2", 7, 0, 0, 0);
											iLocal_306++;
											iLocal_305 = unk_0x3EAC9995EC220C5A();
										}
										else if (iLocal_306 != 10)
										{
											if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_6", 7, 0, 0))
											{
												iLocal_306 = 10;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_275 == 1)
					{
						if (iLocal_350 == 0)
						{
							if (!func_286())
							{
								if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS3", "EPS8_LS3_1", 6, 0, 0))
								{
									iLocal_350 = 1;
									if (iLocal_261 < 2)
									{
										iLocal_261 = 2;
									}
								}
							}
						}
					}
					if (iLocal_275 == 2)
					{
						if (iLocal_351 == 0)
						{
							if (!func_286())
							{
								if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS3", "EPS8_LS3_2", 6, 0, 0))
								{
									iLocal_351 = 1;
									if (iLocal_261 < 2)
									{
										iLocal_261 = 2;
									}
								}
							}
						}
					}
				}
				if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), -358.0764f, -88.2705f, 44.5901f, 1) < unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(uLocal_580[0], 1), -358.0764f, -88.2705f, 44.5901f, 1))
				{
					if (unk_0x3EAC9995EC220C5A() > iLocal_291 + 8000)
					{
						if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
						{
							if (iLocal_352 == 0)
							{
								if (!func_286())
								{
									if (func_275(&uLocal_390, "EPS8AU", "EPS8_LS2", 6, 0, 0, 0))
									{
										iLocal_352 = 1;
										if (iLocal_261 < 2)
										{
											iLocal_261 = 2;
										}
									}
								}
							}
						}
					}
				}
				else if (iLocal_261 == 0)
				{
					if (unk_0x3EAC9995EC220C5A() > iLocal_291 + 7000)
					{
						if (!func_286())
						{
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_1", 5, 0, 0))
							{
								iLocal_261 = 1;
							}
						}
					}
				}
				else if (iLocal_261 == 1)
				{
					if (unk_0x3EAC9995EC220C5A() > iLocal_291 + 9000)
					{
						if (!func_286())
						{
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_2", 5, 0, 0))
							{
								iLocal_261 = 2;
							}
						}
					}
				}
				else if (iLocal_261 == 2)
				{
					if (unk_0x3EAC9995EC220C5A() > iLocal_291 + 12000)
					{
						if (!func_286())
						{
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_3", 5, 0, 0))
							{
								iLocal_261 = 3;
							}
						}
					}
				}
				else if (iLocal_261 == 3)
				{
					if (unk_0x3EAC9995EC220C5A() > iLocal_291 + 13000)
					{
						if (!func_286())
						{
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_4", 5, 0, 0))
							{
								iLocal_261 = 4;
							}
						}
					}
				}
				else if (iLocal_261 == 4)
				{
					if (unk_0x3EAC9995EC220C5A() > iLocal_291 + 14000)
					{
						if (!func_286())
						{
							if (func_16(iLocal_615) && func_16(uLocal_616[0]))
							{
								if (!func_276(uLocal_616[0], -696.0367f, 40.7954f, 42.2066f, 80f) && !func_276(iLocal_615, -355.8568f, -89.7074f, 44.6341f, 50f))
								{
									if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_5", 5, 0, 0))
									{
										iLocal_261 = 5;
									}
								}
								else
								{
									iLocal_261 = 5;
								}
							}
						}
					}
				}
				else if (iLocal_261 == 5)
				{
					if (unk_0x3EAC9995EC220C5A() > iLocal_291 + 15000)
					{
						if (!func_286())
						{
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_6", 5, 0, 0))
							{
								iLocal_261 = 6;
							}
						}
					}
				}
				else if (iLocal_261 == 6)
				{
					if (unk_0x3EAC9995EC220C5A() > iLocal_291 + 16000)
					{
						if (!func_286())
						{
							if (func_330(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_7", 7, 0, 0))
							{
								iLocal_261 = 7;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 0)
			{
				iLocal_282 = unk_0x3EAC9995EC220C5A();
				iLocal_283 = 1;
			}
			else if (iLocal_283 == 1)
			{
				if (unk_0x3EAC9995EC220C5A() > iLocal_282 + 7000)
				{
					if (!func_286())
					{
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_1", 5, 0, 0))
						{
							iLocal_282 = unk_0x3EAC9995EC220C5A();
							iLocal_305 = unk_0x3EAC9995EC220C5A();
							iLocal_283 = 2;
							if (iLocal_261 < 2)
							{
								iLocal_261 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 2)
			{
				if (unk_0x3EAC9995EC220C5A() > iLocal_282 + 8000)
				{
					if (!func_286())
					{
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_2", 5, 0, 0))
						{
							iLocal_282 = unk_0x3EAC9995EC220C5A();
							iLocal_305 = unk_0x3EAC9995EC220C5A();
							iLocal_283 = 3;
							if (iLocal_261 < 2)
							{
								iLocal_261 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 3)
			{
				if (unk_0x3EAC9995EC220C5A() > iLocal_282 + 8000)
				{
					if (!func_286())
					{
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_3", 5, 0, 0))
						{
							iLocal_282 = unk_0x3EAC9995EC220C5A();
							iLocal_305 = unk_0x3EAC9995EC220C5A();
							iLocal_283 = 4;
							if (iLocal_261 < 2)
							{
								iLocal_261 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 4)
			{
				if (unk_0x3EAC9995EC220C5A() > iLocal_282 + 7000)
				{
					if (!func_286())
					{
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_4", 5, 0, 0))
						{
							iLocal_282 = unk_0x3EAC9995EC220C5A();
							iLocal_305 = unk_0x3EAC9995EC220C5A();
							iLocal_283 = 5;
							if (iLocal_261 < 2)
							{
								iLocal_261 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 5)
			{
				if (unk_0x3EAC9995EC220C5A() > iLocal_282 + 1000)
				{
					if (!func_286())
					{
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_5", 5, 0, 0))
						{
							iLocal_282 = unk_0x3EAC9995EC220C5A();
							iLocal_305 = unk_0x3EAC9995EC220C5A();
							iLocal_283 = 6;
							if (iLocal_261 < 2)
							{
								iLocal_261 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 6)
			{
				if (unk_0x3EAC9995EC220C5A() > iLocal_282 + 10000)
				{
					if (!func_286())
					{
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_6", 5, 0, 0))
						{
							iLocal_282 = unk_0x3EAC9995EC220C5A();
							iLocal_283 = 7;
							if (iLocal_261 < 2)
							{
								iLocal_261 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 7)
			{
				if (unk_0x3EAC9995EC220C5A() > iLocal_282 + 1000)
				{
					if (!func_286())
					{
						sLocal_386 = "EPS8_23";
						iLocal_568 = 10;
						iLocal_283 = 8;
						if (iLocal_261 < 2)
						{
							iLocal_261 = 2;
						}
					}
				}
			}
		}
	}
}

bool func_330(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_77(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_64(sParam2, iParam4, 0);
}

void func_331()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	unk_0x3B97B8A2AAD89A9D(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 200f, 1, 1, 0, 0, 0);
	if ((((unk_0x4A4B6FD54C499B7D(joaat("taxi")) && unk_0x4A4B6FD54C499B7D(joaat("sadler"))) && unk_0x4A4B6FD54C499B7D(joaat("habanero"))) && unk_0x4A4B6FD54C499B7D(joaat("schafter2"))) && unk_0x4A4B6FD54C499B7D(joaat("rumpo")))
	{
		Local_650[0 /*3*/] = { -131.838f, -84.816f, 54.8058f };
		Local_650[1 /*3*/] = { -131.838f, -84.816f, 54.8058f };
		Local_650[2 /*3*/] = { -202.8393f, -60.2254f, 49.8713f };
		Local_650[3 /*3*/] = { -283.2474f, -32.2227f, 48.2857f };
		Local_650[4 /*3*/] = { -372.0164f, -1.9755f, 45.9995f };
		Local_650[5 /*3*/] = { -463.3591f, 7.4364f, 44.6764f };
		Local_650[6 /*3*/] = { -536.8303f, 12.2933f, 43.2611f };
		fLocal_672[0] = 71.7829f;
		fLocal_672[1] = 71.7829f;
		fLocal_672[2] = 70.6852f;
		fLocal_672[3] = 70.5582f;
		fLocal_672[4] = 75.2358f;
		fLocal_672[5] = 88.0273f;
		fLocal_672[6] = 86.8248f;
		Local_696[0 /*3*/] = { -312.1015f, 130.6894f, 66.5865f };
		Local_696[1 /*3*/] = { -345.6338f, 129.7367f, 65.7121f };
		Local_696[2 /*3*/] = { -393.3472f, 75.7086f, 58.9759f };
		Local_696[3 /*3*/] = { -394.0365f, 33.2626f, 47.2826f };
		Local_696[4 /*3*/] = { -432.5279f, 11.5918f, 45.1093f };
		Local_696[5 /*3*/] = { -473.8784f, 13.902f, 44.3884f };
		Local_696[6 /*3*/] = { -515.9524f, 16.8126f, 43.5537f };
		fLocal_718[0] = 91.2112f;
		fLocal_718[1] = 92.7461f;
		fLocal_718[2] = 179.5078f;
		fLocal_718[3] = 174.2351f;
		fLocal_718[4] = 87.2938f;
		fLocal_718[5] = 85.9476f;
		fLocal_718[6] = 86.5195f;
		Local_742[0 /*3*/] = { -821.8678f, -15.21f, 38.7738f };
		Local_742[1 /*3*/] = { -762.9101f, -61.369f, 36.8265f };
		Local_742[2 /*3*/] = { -683.5615f, -22.2863f, 37.2221f };
		Local_742[3 /*3*/] = { -598.2457f, -13.4337f, 42.8497f };
		Local_742[4 /*3*/] = { -566.7648f, -39.6658f, 41.744f };
		Local_742[5 /*3*/] = { -547.043f, -87.3705f, 39.7725f };
		Local_742[6 /*3*/] = { -542.4178f, -145.067f, 37.4423f };
		fLocal_764[0] = 213.1008f;
		fLocal_764[1] = 292.6512f;
		fLocal_764[2] = 280.8633f;
		fLocal_764[3] = 270.1932f;
		fLocal_764[4] = 162.4637f;
		fLocal_764[5] = 220.7259f;
		fLocal_764[6] = 109.6765f;
		Local_788[0 /*3*/] = { -538.8824f, 2.5863f, 43.2495f };
		Local_788[1 /*3*/] = { -510.9343f, 0.7568f, 43.7336f };
		Local_788[2 /*3*/] = { -468.7612f, -1.3575f, 44.5868f };
		Local_788[3 /*3*/] = { -419.5594f, -4.5629f, 45.5167f };
		Local_788[4 /*3*/] = { -373.0446f, -11.2775f, 46.0324f };
		Local_788[5 /*3*/] = { -278.3581f, -44.505f, 48.549f };
		Local_788[6 /*3*/] = { -211.5438f, -68.0673f, 49.5385f };
		fLocal_810[0] = 264.3932f;
		fLocal_810[1] = 265.6151f;
		fLocal_810[2] = 265.8879f;
		fLocal_810[3] = 267.9286f;
		fLocal_810[4] = 251.6172f;
		fLocal_810[5] = 254.6602f;
		fLocal_810[6] = 252.3606f;
		Local_834[0 /*3*/] = { -669.2421f, -7.4354f, 37.8635f };
		Local_834[1 /*3*/] = { -700.1176f, -17.5754f, 36.9578f };
		Local_834[2 /*3*/] = { -727.3986f, -31.1413f, 36.8838f };
		Local_834[3 /*3*/] = { -775.4231f, -56.9022f, 36.8581f };
		Local_834[4 /*3*/] = { -813.0173f, -76.7235f, 36.8717f };
		Local_834[5 /*3*/] = { -857.0458f, -99.6788f, 36.9241f };
		Local_834[6 /*3*/] = { -911.4196f, -127.5572f, 36.824f };
		fLocal_856[0] = 101.9021f;
		fLocal_856[1] = 116.4117f;
		fLocal_856[2] = 116.5154f;
		fLocal_856[3] = 117.926f;
		fLocal_856[4] = 117.6888f;
		fLocal_856[5] = 117.7467f;
		fLocal_856[6] = 115.4069f;
		Local_880[0 /*3*/] = { -808.274f, -46.2696f, 36.8528f };
		Local_880[1 /*3*/] = { -823.1899f, -74.6149f, 36.7824f };
		Local_880[2 /*3*/] = { -862.0953f, -95.4273f, 36.8721f };
		Local_880[3 /*3*/] = { -913.0912f, -122.397f, 36.7913f };
		Local_880[4 /*3*/] = { -959.4056f, -145.7552f, 36.7732f };
		Local_880[5 /*3*/] = { -1020.023f, -163.9246f, 36.7896f };
		Local_880[6 /*3*/] = { -1071.111f, -164.687f, 36.7161f };
		fLocal_902[0] = 206.0301f;
		fLocal_902[1] = 119.711f;
		fLocal_902[2] = 117.2803f;
		fLocal_902[3] = 117.1178f;
		fLocal_902[4] = 115.7739f;
		fLocal_902[5] = 118.1293f;
		fLocal_902[6] = 66.6215f;
		if (unk_0x496E42829279FD71("Eps8TRAFFIC01"))
		{
			if (!unk_0x1F2158D615BC4B25(uLocal_634[iLocal_910]))
			{
				if (!func_276(unk_0x77F050A399DB77ED(), Local_650[iLocal_910 /*3*/], 50f) && !unk_0xB888E9820873861A(Local_650[iLocal_910 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0))
				{
					if (!unk_0xDEB29D8C0ACA57B9(Local_650[iLocal_910 /*3*/], 8f))
					{
						iVar1 = unk_0xA3746E7F17F47DC2(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("schafter2");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!unk_0x8BE5D4DC1A953832(Local_650[iLocal_910 /*3*/], &uVar2, 0))
						{
							uVar2 = Local_650[iLocal_910 /*3*/].f_2;
						}
						if (iLocal_910 > 4 || func_276(unk_0x77F050A399DB77ED(), Local_158, 150f))
						{
							uLocal_634[iLocal_910] = unk_0x2EEA15C0C12C8CDE(iVar0, Local_650[iLocal_910 /*3*/], Local_650[iLocal_910 /*3*/].f_1, uVar2, fLocal_672[iLocal_910], 1, 1);
							uLocal_642[iLocal_910] = unk_0xB5045C14A4AAC65E(uLocal_634[iLocal_910], 1);
							unk_0xC1D3820702043A43(uLocal_634[iLocal_910]);
							unk_0xA1AF7FB22ACAD39B(uLocal_642[iLocal_910], uLocal_634[iLocal_910], "Eps8TRAFFIC01", 262275, 0, 1032, -1, -1f, 0, 1073741824);
						}
					}
				}
			}
			else if (func_16(uLocal_634[iLocal_910]))
			{
				if (unk_0x3F18BD52B422B670(uLocal_634[iLocal_910]))
				{
					if (unk_0xBA6B1998ECB13465(uLocal_634[iLocal_910]) > 70)
					{
						if (!func_55(unk_0x77F050A399DB77ED(), uLocal_634[iLocal_910], 70f))
						{
							if (unk_0x3D8234BA64B54520(uLocal_634[iLocal_910]))
							{
								func_18(&(uLocal_642[iLocal_910]));
								func_15(&(uLocal_634[iLocal_910]));
							}
						}
					}
				}
				else if (unk_0x3D8234BA64B54520(uLocal_634[iLocal_910]))
				{
					func_18(&(uLocal_642[iLocal_910]));
					func_15(&(uLocal_634[iLocal_910]));
				}
			}
		}
		if (unk_0x496E42829279FD71("Eps8TRAFFIC02"))
		{
			if (!unk_0x1F2158D615BC4B25(uLocal_680[iLocal_910]))
			{
				if (!func_276(unk_0x77F050A399DB77ED(), Local_696[iLocal_910 /*3*/], 50f) && !unk_0xB888E9820873861A(Local_696[iLocal_910 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0))
				{
					if (!unk_0xDEB29D8C0ACA57B9(Local_696[iLocal_910 /*3*/], 8f))
					{
						iVar1 = unk_0xA3746E7F17F47DC2(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!unk_0x8BE5D4DC1A953832(Local_696[iLocal_910 /*3*/], &fVar2, 0))
						{
							fVar2 = Local_696[iLocal_910 /*3*/].f_2;
						}
						uLocal_680[iLocal_910] = unk_0x2EEA15C0C12C8CDE(iVar0, Local_696[iLocal_910 /*3*/], Local_696[iLocal_910 /*3*/].f_1, fVar2, fLocal_718[iLocal_910], 1, 1);
						uLocal_688[iLocal_910] = unk_0xB5045C14A4AAC65E(uLocal_680[iLocal_910], 1);
						unk_0xC1D3820702043A43(uLocal_680[iLocal_910]);
						unk_0xA1AF7FB22ACAD39B(uLocal_688[iLocal_910], uLocal_680[iLocal_910], "Eps8TRAFFIC02", 262275, 0, 1032, -1, -1f, 0, 1073741824);
					}
				}
			}
			else if (func_16(uLocal_680[iLocal_910]))
			{
				if (unk_0x3F18BD52B422B670(uLocal_680[iLocal_910]))
				{
					if (unk_0xBA6B1998ECB13465(uLocal_680[iLocal_910]) > 70)
					{
						if (!func_55(unk_0x77F050A399DB77ED(), uLocal_680[iLocal_910], 70f))
						{
							if (unk_0x3D8234BA64B54520(uLocal_680[iLocal_910]))
							{
								func_18(&(uLocal_688[iLocal_910]));
								func_15(&(uLocal_680[iLocal_910]));
							}
						}
					}
				}
				else if (unk_0x3D8234BA64B54520(uLocal_680[iLocal_910]))
				{
					func_18(&(uLocal_688[iLocal_910]));
					func_15(&(uLocal_680[iLocal_910]));
				}
			}
		}
		if (unk_0x496E42829279FD71("Eps8TRAFFIC03"))
		{
			if (!unk_0x1F2158D615BC4B25(uLocal_726[iLocal_910]))
			{
				if ((!func_276(unk_0x77F050A399DB77ED(), Local_742[iLocal_910 /*3*/], 50f) && func_276(unk_0x77F050A399DB77ED(), Local_742[iLocal_910 /*3*/], 220f)) && !unk_0xB888E9820873861A(Local_742[iLocal_910 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0))
				{
					if (!unk_0xDEB29D8C0ACA57B9(Local_742[iLocal_910 /*3*/], 8f))
					{
						iVar1 = unk_0xA3746E7F17F47DC2(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("schafter2");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("rumpo");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!unk_0x8BE5D4DC1A953832(Local_742[iLocal_910 /*3*/], &fVar2, 0))
						{
							fVar2 = Local_742[iLocal_910 /*3*/].f_2;
						}
						uLocal_726[iLocal_910] = unk_0x2EEA15C0C12C8CDE(iVar0, Local_742[iLocal_910 /*3*/], Local_742[iLocal_910 /*3*/].f_1, fVar2, fLocal_764[iLocal_910], 1, 1);
						uLocal_734[iLocal_910] = unk_0xB5045C14A4AAC65E(uLocal_726[iLocal_910], 1);
						unk_0xC1D3820702043A43(uLocal_726[iLocal_910]);
						unk_0xA1AF7FB22ACAD39B(uLocal_734[iLocal_910], uLocal_726[iLocal_910], "Eps8TRAFFIC03", 262275, 0, 1032, -1, -1f, 0, 1073741824);
					}
				}
			}
			else if (func_16(uLocal_726[iLocal_910]))
			{
				if (unk_0x3F18BD52B422B670(uLocal_726[iLocal_910]))
				{
					if (unk_0xBA6B1998ECB13465(uLocal_726[iLocal_910]) > 70)
					{
						if (!func_55(unk_0x77F050A399DB77ED(), uLocal_726[iLocal_910], 70f))
						{
							if (unk_0x3D8234BA64B54520(uLocal_726[iLocal_910]))
							{
								func_18(&(uLocal_734[iLocal_910]));
								func_15(&(uLocal_726[iLocal_910]));
							}
						}
					}
				}
				else if (unk_0x3D8234BA64B54520(uLocal_726[iLocal_910]))
				{
					func_18(&(uLocal_734[iLocal_910]));
					func_15(&(uLocal_726[iLocal_910]));
				}
			}
		}
		if (unk_0x496E42829279FD71("Eps8TRAFFIC04"))
		{
			if (!unk_0x1F2158D615BC4B25(uLocal_772[iLocal_910]))
			{
				if (!func_276(unk_0x77F050A399DB77ED(), Local_788[iLocal_910 /*3*/], 50f) && !unk_0xB888E9820873861A(Local_788[iLocal_910 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0))
				{
					if (!unk_0xDEB29D8C0ACA57B9(Local_788[iLocal_910 /*3*/], 8f))
					{
						iVar1 = unk_0xA3746E7F17F47DC2(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!unk_0x8BE5D4DC1A953832(Local_788[iLocal_910 /*3*/], &fVar2, 0))
						{
							fVar2 = Local_788[iLocal_910 /*3*/].f_2;
						}
						uLocal_772[iLocal_910] = unk_0x2EEA15C0C12C8CDE(iVar0, Local_788[iLocal_910 /*3*/], Local_788[iLocal_910 /*3*/].f_1, fVar2, fLocal_810[iLocal_910], 1, 1);
						uLocal_780[iLocal_910] = unk_0xB5045C14A4AAC65E(uLocal_772[iLocal_910], 1);
						unk_0xC1D3820702043A43(uLocal_772[iLocal_910]);
						unk_0xA1AF7FB22ACAD39B(uLocal_780[iLocal_910], uLocal_772[iLocal_910], "Eps8TRAFFIC04", 262275, 0, 1032, -1, -1f, 0, 1073741824);
					}
				}
			}
			else if (func_16(uLocal_772[iLocal_910]))
			{
				if (unk_0x3F18BD52B422B670(uLocal_772[iLocal_910]))
				{
					if (unk_0xBA6B1998ECB13465(uLocal_772[iLocal_910]) > 70)
					{
						if (!func_55(unk_0x77F050A399DB77ED(), uLocal_772[iLocal_910], 70f))
						{
							if (unk_0x3D8234BA64B54520(uLocal_772[iLocal_910]))
							{
								func_18(&(uLocal_780[iLocal_910]));
								func_15(&(uLocal_772[iLocal_910]));
							}
						}
					}
				}
				else if (unk_0x3D8234BA64B54520(uLocal_772[iLocal_910]))
				{
					func_18(&(uLocal_780[iLocal_910]));
					func_15(&(uLocal_772[iLocal_910]));
				}
			}
		}
		if (unk_0x496E42829279FD71("Eps8TRAFFIC05"))
		{
			if (!unk_0x1F2158D615BC4B25(uLocal_818[iLocal_910]))
			{
				if ((!func_276(unk_0x77F050A399DB77ED(), Local_834[iLocal_910 /*3*/], 50f) && func_276(unk_0x77F050A399DB77ED(), Local_834[iLocal_910 /*3*/], 170f)) && !unk_0xB888E9820873861A(Local_834[iLocal_910 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0))
				{
					if (!unk_0xDEB29D8C0ACA57B9(Local_834[iLocal_910 /*3*/], 8f))
					{
						iVar1 = unk_0xA3746E7F17F47DC2(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("schafter2");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!unk_0x8BE5D4DC1A953832(Local_834[iLocal_910 /*3*/], &fVar2, 0))
						{
							fVar2 = Local_834[iLocal_910 /*3*/].f_2;
						}
						uLocal_818[iLocal_910] = unk_0x2EEA15C0C12C8CDE(iVar0, Local_834[iLocal_910 /*3*/], Local_834[iLocal_910 /*3*/].f_1, fVar2, fLocal_856[iLocal_910], 1, 1);
						uLocal_826[iLocal_910] = unk_0xB5045C14A4AAC65E(uLocal_818[iLocal_910], 1);
						unk_0xC1D3820702043A43(uLocal_818[iLocal_910]);
						unk_0xA1AF7FB22ACAD39B(uLocal_826[iLocal_910], uLocal_818[iLocal_910], "Eps8TRAFFIC05", 262275, 0, 1032, -1, -1f, 0, 1073741824);
					}
				}
			}
			else if (func_16(uLocal_818[iLocal_910]))
			{
				if (unk_0x3F18BD52B422B670(uLocal_818[iLocal_910]))
				{
					if (unk_0xBA6B1998ECB13465(uLocal_818[iLocal_910]) > 40)
					{
						if (!func_55(unk_0x77F050A399DB77ED(), uLocal_818[iLocal_910], 60f))
						{
							if (unk_0x3D8234BA64B54520(uLocal_818[iLocal_910]))
							{
								func_18(&(uLocal_826[iLocal_910]));
								func_15(&(uLocal_818[iLocal_910]));
							}
						}
					}
				}
				else if (unk_0x3D8234BA64B54520(uLocal_818[iLocal_910]))
				{
					func_18(&(uLocal_826[iLocal_910]));
					func_15(&(uLocal_818[iLocal_910]));
				}
			}
		}
		if (unk_0x496E42829279FD71("Eps8TRAFFIC06"))
		{
			if (!unk_0x1F2158D615BC4B25(uLocal_864[iLocal_910]))
			{
				if ((!func_276(unk_0x77F050A399DB77ED(), Local_880[iLocal_910 /*3*/], 50f) && func_276(unk_0x77F050A399DB77ED(), Local_880[iLocal_910 /*3*/], 170f)) && !unk_0xB888E9820873861A(Local_880[iLocal_910 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0))
				{
					if (!unk_0xDEB29D8C0ACA57B9(Local_880[iLocal_910 /*3*/], 8f))
					{
						iVar1 = unk_0xA3746E7F17F47DC2(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!unk_0x8BE5D4DC1A953832(Local_880[iLocal_910 /*3*/], &fVar2, 0))
						{
							fVar2 = Local_880[iLocal_910 /*3*/].f_2;
						}
						uLocal_864[iLocal_910] = unk_0x2EEA15C0C12C8CDE(iVar0, Local_880[iLocal_910 /*3*/], Local_880[iLocal_910 /*3*/].f_1, fVar2, fLocal_902[iLocal_910], 1, 1);
						uLocal_872[iLocal_910] = unk_0xB5045C14A4AAC65E(uLocal_864[iLocal_910], 1);
						unk_0xC1D3820702043A43(uLocal_864[iLocal_910]);
						unk_0xA1AF7FB22ACAD39B(uLocal_872[iLocal_910], uLocal_864[iLocal_910], "Eps8TRAFFIC06", 262275, 0, 1032, -1, -1f, 0, 1073741824);
					}
				}
			}
			else if (func_16(uLocal_864[iLocal_910]))
			{
				if (unk_0x3F18BD52B422B670(uLocal_864[iLocal_910]))
				{
					if (unk_0xBA6B1998ECB13465(uLocal_864[iLocal_910]) > 40)
					{
						if (!func_55(unk_0x77F050A399DB77ED(), uLocal_864[iLocal_910], 60f))
						{
							if (unk_0x3D8234BA64B54520(uLocal_864[iLocal_910]))
							{
								func_18(&(uLocal_872[iLocal_910]));
								func_15(&(uLocal_864[iLocal_910]));
							}
						}
					}
				}
				else if (unk_0x3D8234BA64B54520(uLocal_864[iLocal_910]))
				{
					func_18(&(uLocal_872[iLocal_910]));
					func_15(&(uLocal_864[iLocal_910]));
				}
			}
		}
		iLocal_910++;
		if (iLocal_910 > 6)
		{
			iLocal_910 = 0;
		}
	}
}

void func_332()
{
	if (!unk_0x0CB2A341EC5513A7("EPSILONISM_08_COMPLIANCE"))
	{
		if (func_16(uLocal_616[0]))
		{
			unk_0x72B5F7B57899EB10(uLocal_616[0], "EPSILONISM_08_COMPLIANCE_CAR_LEADER", 0);
		}
		if (func_16(iLocal_615))
		{
			unk_0x72B5F7B57899EB10(iLocal_615, "EPSILONISM_08_COMPLIANCE_HELI", 0);
		}
		unk_0xCAEDD1A8E831AD36("EPSILONISM_08_COMPLIANCE");
	}
}

void func_333()
{
	unk_0x7B2DD53524CE717E(0f);
	func_340();
	func_339();
	func_335();
	func_334();
	if (!iLocal_384)
	{
		unk_0x2084300F2D91A8E6("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 0);
		unk_0x3345CB85AB9EC035("EPS8_START");
		iLocal_384 = 1;
	}
	iLocal_568 = 3;
}

void func_334()
{
	unk_0xA1E3A2CCF985EE86();
	unk_0xFB4F6722A032A0F0(joaat("s_m_m_highsec_01"));
	unk_0xFB4F6722A032A0F0(joaat("sentinel"));
	unk_0xFB4F6722A032A0F0(joaat("landstalker"));
	iLocal_939 = func_278(uLocal_616[0], 1, 5);
	func_285("EPS8_05", 7500, 0);
	iLocal_358 = 1;
	iLocal_291 = unk_0x3EAC9995EC220C5A();
	if (func_17(uLocal_616[0]))
	{
		if (func_78(uLocal_580[0]))
		{
			unk_0x2A6B9F9E71C479CF(&uLocal_942);
			unk_0xA1AF7FB22ACAD39B(0, uLocal_616[0], "Eps8LS01", 786468, 0, 8, -1, -1f, 0, 1073741824);
			unk_0x44642CB08FA1637E(uLocal_942);
			unk_0xE2CB8488CFA42209(uLocal_580[0]);
			unk_0xB8A8FA4B28E9F423(uLocal_580[0], uLocal_942);
			unk_0xAAD288E877AC833D(&uLocal_942);
		}
	}
	if (func_17(iLocal_615))
	{
		unk_0xDE98CA2972011464(iLocal_615, 222, "Ep8Heli01", 1);
		unk_0x88DF2008E7C54A31(iLocal_615, 1.25f);
	}
}

void func_335()
{
	iLocal_615 = unk_0x2EEA15C0C12C8CDE(joaat("maverick"), Local_206, fLocal_250, 1, 1);
	unk_0xEDB159E56B64D182(iLocal_615, iLocal_161, iLocal_161);
	unk_0xE141C6C0A9E4E7A5(iLocal_615, 0, 0);
	unk_0xFB4F6722A032A0F0(joaat("maverick"));
	iLocal_578 = unk_0x73B8FD017061F240(iLocal_615, 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
	unk_0x15E0B3143320FB58(iLocal_578, iLocal_154);
	unk_0x1A8C6CC3CB0B507B(iLocal_578, iLocal_156);
	unk_0x1592B6D205958934(iLocal_578, joaat("weapon_combatpistol"), -1, 0, 0);
	unk_0x054E434B0AECBDA6(iLocal_578, uLocal_388);
	unk_0xF1040A0061DC97E5(iLocal_615, 3);
	unk_0x3BCCE991853357EE(iLocal_578, 1, 0);
	unk_0x5F2AACB0122E1554(iLocal_578, 0, 0, 1, 0);
	unk_0x5F2AACB0122E1554(iLocal_578, 3, 0, 2, 0);
	unk_0x5F2AACB0122E1554(iLocal_578, 4, 0, 2, 0);
	unk_0x5F2AACB0122E1554(iLocal_578, 8, 1, 0, 0);
	unk_0x5F2AACB0122E1554(iLocal_578, 11, 1, 0, 0);
	iLocal_596 = unk_0x73B8FD017061F240(iLocal_615, 26, joaat("a_m_y_epsilon_01"), 1, 1, 1);
	unk_0x26472A6D46CDD76D(iLocal_596, 100);
	unk_0x15E0B3143320FB58(iLocal_596, iLocal_154);
	unk_0x1A8C6CC3CB0B507B(iLocal_596, iLocal_156);
	unk_0x5F2AACB0122E1554(iLocal_596, 0, 1, 0, 0);
	unk_0x5F2AACB0122E1554(iLocal_596, 1, 1, 0, 0);
	unk_0x5F2AACB0122E1554(iLocal_596, 3, 0, 0, 0);
	unk_0x5F2AACB0122E1554(iLocal_596, 4, 0, 0, 0);
	unk_0x5F2AACB0122E1554(iLocal_596, 10, 1, 0, 0);
	unk_0x054E434B0AECBDA6(iLocal_596, uLocal_388);
	unk_0x1592B6D205958934(iLocal_596, joaat("weapon_combatpistol"), -1, 0, 0);
	unk_0x9E040412E0CB7CD7(iLocal_596, joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
	unk_0x112CD899A3BEE719(iLocal_596, 1);
	unk_0xD0C8DD55C652567F(iLocal_596, unk_0x77F050A399DB77ED(), -1, 0, 2);
	unk_0x04F7A4677115CD50(iLocal_596, 1);
	unk_0xB424F90D6E96BCF8(iLocal_596, 13, 1);
	unk_0x26A7668D061F96E7(iLocal_596, 0);
	iLocal_579 = unk_0x73B8FD017061F240(iLocal_615, 26, joaat("s_m_m_highsec_01"), 2, 1, 1);
	unk_0x15E0B3143320FB58(iLocal_579, (iLocal_154 - iLocal_155));
	unk_0x1A8C6CC3CB0B507B(iLocal_579, (iLocal_156 + iLocal_157));
	unk_0x1706625EBCDDEBF9(iLocal_579, 324, 1);
	unk_0x1592B6D205958934(iLocal_579, joaat("weapon_advancedrifle"), -1, 0, 0);
	unk_0x9E040412E0CB7CD7(iLocal_579, joaat("weapon_advancedrifle"), joaat("component_at_ar_flsh"));
	unk_0x9E040412E0CB7CD7(iLocal_579, joaat("weapon_advancedrifle"), joaat("component_at_scope_small"));
	unk_0x9687CF9C13C1F6A1(iLocal_579, joaat("weapon_advancedrifle"), 1);
	unk_0x112CD899A3BEE719(iLocal_579, 1);
	unk_0x9CE864D319ECB37A(iLocal_579, 2);
	unk_0xFE974F3DCF4437D1(iLocal_579, 400f);
	unk_0x4891B9E8F90B8C2B(iLocal_579, 400f);
	unk_0x95E8CAE4F5D2FCB6(iLocal_579, 400f);
	unk_0xE0E77BB84096208B(iLocal_579, joaat("FIRING_PATTERN_FULL_AUTO"));
	unk_0xB424F90D6E96BCF8(iLocal_579, 2, 1);
	unk_0xB424F90D6E96BCF8(iLocal_579, 3, 0);
	unk_0x054E434B0AECBDA6(iLocal_579, uLocal_388);
	unk_0xD0C8DD55C652567F(iLocal_579, unk_0x77F050A399DB77ED(), -1, 0, 2);
	unk_0x3BCCE991853357EE(iLocal_579, 1, 0);
	uLocal_570[5] = unk_0x73B8FD017061F240(iLocal_615, 26, joaat("s_m_m_highsec_01"), 0, 1, 1);
	unk_0x15E0B3143320FB58(uLocal_570[5], iLocal_154);
	unk_0x1A8C6CC3CB0B507B(uLocal_570[5], iLocal_156);
	unk_0x1592B6D205958934(uLocal_570[5], joaat("weapon_combatpistol"), -1, 0, 0);
	unk_0x9E040412E0CB7CD7(uLocal_570[5], joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
	unk_0xB424F90D6E96BCF8(uLocal_570[5], 12, 1);
	unk_0x054E434B0AECBDA6(uLocal_570[5], uLocal_388);
	unk_0x3BCCE991853357EE(uLocal_570[5], 1, 0);
	unk_0x1706625EBCDDEBF9(uLocal_570[5], 324, 1);
	uLocal_616[2] = unk_0x2EEA15C0C12C8CDE(joaat("sentinel"), Local_162[2 /*3*/], fLocal_233[2], 1, 1);
	unk_0xC1D3820702043A43(uLocal_616[2]);
	unk_0xEDB159E56B64D182(uLocal_616[2], iLocal_161, iLocal_161);
	unk_0xE141C6C0A9E4E7A5(uLocal_616[2], 0, 0);
	unk_0x79FC96D30AEDF69A(uLocal_616[2], 1);
	unk_0x91F9B018CF2DA225(uLocal_616[2], 0);
	unk_0xB36D15AAB8BD2531(uLocal_616[2], 2);
	unk_0x01A8ACBE7F8B45EF(uLocal_616[2], 15, 1, 0);
	unk_0x01A8ACBE7F8B45EF(uLocal_616[2], 11, 1, 0);
	unk_0x01A8ACBE7F8B45EF(uLocal_616[2], 12, 0, 0);
	unk_0x32F189E447238D10(uLocal_616[2], 18, 1);
	unk_0x21500D3576611CDE(uLocal_616[2], 0);
	uLocal_580[2] = unk_0x73B8FD017061F240(uLocal_616[2], 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
	unk_0xA8E6CFA5CD562236(uLocal_580[2], 1f);
	unk_0x29F843A07F8E25BA(uLocal_580[2], 1f);
	unk_0x15E0B3143320FB58(uLocal_580[2], iLocal_154);
	unk_0x1A8C6CC3CB0B507B(uLocal_580[2], iLocal_156);
	unk_0xA09672E91FA74DCA(uLocal_580[2], 1);
	unk_0x112CD899A3BEE719(uLocal_580[2], 1);
	unk_0x1592B6D205958934(uLocal_580[2], joaat("weapon_pistol"), -1, 0, 0);
	unk_0xB424F90D6E96BCF8(uLocal_580[2], 2, 1);
	unk_0xB424F90D6E96BCF8(uLocal_580[2], 12, 1);
	unk_0x054E434B0AECBDA6(uLocal_580[2], uLocal_388);
	unk_0x3BCCE991853357EE(uLocal_580[2], 1, 0);
	unk_0x1706625EBCDDEBF9(uLocal_580[2], 324, 1);
	uLocal_588[2] = unk_0x73B8FD017061F240(uLocal_616[2], 26, joaat("s_m_m_highsec_01"), 0, 1, 1);
	unk_0x15E0B3143320FB58(uLocal_588[2], iLocal_154);
	unk_0x1A8C6CC3CB0B507B(uLocal_588[2], iLocal_156);
	unk_0x112CD899A3BEE719(uLocal_588[2], 1);
	unk_0x1592B6D205958934(uLocal_588[2], joaat("weapon_combatpistol"), -1, 0, 0);
	unk_0x9E040412E0CB7CD7(uLocal_588[2], joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
	unk_0xB424F90D6E96BCF8(uLocal_588[2], 2, 1);
	unk_0xB424F90D6E96BCF8(uLocal_588[2], 13, 1);
	unk_0x054E434B0AECBDA6(uLocal_588[2], uLocal_388);
	unk_0x3BCCE991853357EE(uLocal_588[2], 1, 0);
	unk_0x1706625EBCDDEBF9(uLocal_588[2], 324, 1);
	uLocal_616[3] = unk_0x2EEA15C0C12C8CDE(joaat("sentinel"), Local_162[3 /*3*/], fLocal_233[3], 1, 1);
	unk_0xC1D3820702043A43(uLocal_616[3]);
	unk_0xEDB159E56B64D182(uLocal_616[3], iLocal_161, iLocal_161);
	unk_0xE141C6C0A9E4E7A5(uLocal_616[3], 0, 0);
	unk_0x79FC96D30AEDF69A(uLocal_616[3], 1);
	unk_0x91F9B018CF2DA225(uLocal_616[3], 0);
	unk_0xB36D15AAB8BD2531(uLocal_616[3], 2);
	unk_0x01A8ACBE7F8B45EF(uLocal_616[3], 15, 1, 0);
	unk_0x01A8ACBE7F8B45EF(uLocal_616[3], 11, 1, 0);
	unk_0x01A8ACBE7F8B45EF(uLocal_616[3], 12, 0, 0);
	unk_0x32F189E447238D10(uLocal_616[3], 18, 1);
	unk_0x21500D3576611CDE(uLocal_616[3], 0);
	uLocal_580[3] = unk_0x73B8FD017061F240(uLocal_616[3], 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
	unk_0xA8E6CFA5CD562236(uLocal_580[3], 1f);
	unk_0x29F843A07F8E25BA(uLocal_580[3], 1f);
	unk_0x15E0B3143320FB58(uLocal_580[3], iLocal_154);
	unk_0x1A8C6CC3CB0B507B(uLocal_580[3], iLocal_156);
	unk_0xA09672E91FA74DCA(uLocal_580[3], 1);
	unk_0x112CD899A3BEE719(uLocal_580[3], 1);
	unk_0x1592B6D205958934(uLocal_580[3], joaat("weapon_pistol"), -1, 0, 0);
	unk_0xB424F90D6E96BCF8(uLocal_580[3], 2, 1);
	unk_0xB424F90D6E96BCF8(uLocal_580[3], 12, 1);
	unk_0x054E434B0AECBDA6(uLocal_580[3], uLocal_388);
	unk_0x3BCCE991853357EE(uLocal_580[3], 1, 0);
	unk_0x1706625EBCDDEBF9(uLocal_580[3], 324, 1);
	uLocal_588[3] = unk_0x73B8FD017061F240(uLocal_616[3], 26, joaat("s_m_m_highsec_01"), 0, 1, 1);
	unk_0x15E0B3143320FB58(uLocal_588[3], iLocal_154);
	unk_0x1A8C6CC3CB0B507B(uLocal_588[3], iLocal_156);
	unk_0x112CD899A3BEE719(uLocal_588[3], 1);
	unk_0x1592B6D205958934(uLocal_588[3], joaat("weapon_pistol"), -1, 0, 0);
	unk_0x9E040412E0CB7CD7(uLocal_588[3], joaat("weapon_pistol"), joaat("component_at_pi_flsh"));
	unk_0xB424F90D6E96BCF8(uLocal_588[3], 2, 1);
	unk_0xB424F90D6E96BCF8(uLocal_588[3], 13, 1);
	unk_0x054E434B0AECBDA6(uLocal_588[3], uLocal_388);
	unk_0x3BCCE991853357EE(uLocal_588[3], 1, 0);
	unk_0x1706625EBCDDEBF9(uLocal_588[3], 324, 1);
	if (func_78(uLocal_570[0]))
	{
		unk_0x15E0B3143320FB58(uLocal_570[0], iLocal_154);
		unk_0x1A8C6CC3CB0B507B(uLocal_570[0], iLocal_156);
		unk_0x1592B6D205958934(uLocal_570[0], joaat("weapon_smg"), -1, 0, 0);
		unk_0xB424F90D6E96BCF8(uLocal_570[0], 12, 1);
		unk_0xB424F90D6E96BCF8(uLocal_570[0], 1, 0);
		unk_0xD0C8DD55C652567F(uLocal_570[0], unk_0x77F050A399DB77ED(), -1, 0, 2);
		unk_0x054E434B0AECBDA6(uLocal_570[0], uLocal_388);
		unk_0x3BCCE991853357EE(uLocal_570[0], 1, 0);
		unk_0x8141D29EBE3F3046(uLocal_570[0], 0);
		unk_0x1706625EBCDDEBF9(uLocal_570[0], 324, 1);
		unk_0x5F2AACB0122E1554(uLocal_570[0], 0, 1, 1, 0);
		unk_0x5F2AACB0122E1554(uLocal_570[0], 3, 0, 1, 0);
		unk_0x5F2AACB0122E1554(uLocal_570[0], 4, 0, 1, 0);
		unk_0x5F2AACB0122E1554(uLocal_570[0], 8, 1, 0, 0);
		unk_0x5F2AACB0122E1554(uLocal_570[0], 11, 1, 0, 0);
	}
	if (func_78(uLocal_570[2]))
	{
		unk_0x15E0B3143320FB58(uLocal_570[2], iLocal_154);
		unk_0x1A8C6CC3CB0B507B(uLocal_570[2], iLocal_156);
		unk_0x1592B6D205958934(uLocal_570[2], joaat("weapon_smg"), -1, 0, 0);
		unk_0x9E040412E0CB7CD7(uLocal_570[2], joaat("weapon_smg"), joaat("component_at_ar_flsh"));
		unk_0xB424F90D6E96BCF8(uLocal_570[2], 12, 1);
		unk_0xB424F90D6E96BCF8(uLocal_570[2], 1, 0);
		unk_0xD0C8DD55C652567F(uLocal_570[2], unk_0x77F050A399DB77ED(), -1, 0, 2);
		unk_0x054E434B0AECBDA6(uLocal_570[2], uLocal_388);
		unk_0x3BCCE991853357EE(uLocal_570[2], 1, 0);
		unk_0x8141D29EBE3F3046(uLocal_570[2], 0);
		unk_0x1706625EBCDDEBF9(uLocal_570[2], 324, 1);
		unk_0x5F2AACB0122E1554(uLocal_570[2], 0, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uLocal_570[2], 3, 0, 1, 0);
		unk_0x5F2AACB0122E1554(uLocal_570[2], 4, 0, 1, 0);
		unk_0x5F2AACB0122E1554(uLocal_570[2], 8, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uLocal_570[2], 11, 0, 0, 0);
	}
	uLocal_570[3] = unk_0x6665DCC708A346F3(26, joaat("s_m_m_highsec_01"), Local_184[3 /*3*/], fLocal_241[3], 1, 1);
	unk_0x15E0B3143320FB58(uLocal_570[3], iLocal_154);
	unk_0x1A8C6CC3CB0B507B(uLocal_570[3], iLocal_156);
	unk_0x1592B6D205958934(uLocal_570[3], joaat("weapon_smg"), -1, 0, 0);
	unk_0xB424F90D6E96BCF8(uLocal_570[3], 12, 1);
	unk_0xB424F90D6E96BCF8(uLocal_570[3], 1, 0);
	unk_0xD0C8DD55C652567F(uLocal_570[3], unk_0x77F050A399DB77ED(), -1, 0, 2);
	unk_0x054E434B0AECBDA6(uLocal_570[3], uLocal_388);
	unk_0x3BCCE991853357EE(uLocal_570[3], 1, 0);
	unk_0x642DDF74A8A2B3BB(uLocal_570[3], "rcmepsilonism8", "security_idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x8141D29EBE3F3046(uLocal_570[3], 0);
	unk_0x1706625EBCDDEBF9(uLocal_570[3], 324, 1);
	unk_0x5F2AACB0122E1554(uLocal_570[3], 0, 1, 2, 0);
	unk_0x5F2AACB0122E1554(uLocal_570[3], 3, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uLocal_570[3], 4, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uLocal_570[3], 8, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uLocal_570[3], 11, 0, 0, 0);
	uLocal_570[4] = unk_0x6665DCC708A346F3(26, joaat("s_m_m_highsec_01"), Local_184[4 /*3*/], fLocal_241[4], 1, 1);
	unk_0x15E0B3143320FB58(uLocal_570[4], iLocal_154);
	unk_0x1A8C6CC3CB0B507B(uLocal_570[4], iLocal_156);
	unk_0x1592B6D205958934(uLocal_570[4], joaat("weapon_smg"), -1, 0, 0);
	unk_0x9E040412E0CB7CD7(uLocal_570[4], joaat("weapon_smg"), joaat("component_at_ar_flsh"));
	unk_0xB424F90D6E96BCF8(uLocal_570[4], 13, 1);
	unk_0xB424F90D6E96BCF8(uLocal_570[4], 1, 0);
	unk_0xD0C8DD55C652567F(uLocal_570[4], unk_0x77F050A399DB77ED(), -1, 0, 2);
	unk_0x054E434B0AECBDA6(uLocal_570[4], uLocal_388);
	unk_0x3BCCE991853357EE(uLocal_570[4], 1, 0);
	unk_0x642DDF74A8A2B3BB(uLocal_570[4], "rcmepsilonism8", "security_idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x8141D29EBE3F3046(uLocal_570[4], 0);
	unk_0x1706625EBCDDEBF9(uLocal_570[4], 324, 1);
	unk_0x5F2AACB0122E1554(uLocal_570[4], 0, 1, 0, 0);
	unk_0x5F2AACB0122E1554(uLocal_570[4], 3, 0, 2, 0);
	unk_0x5F2AACB0122E1554(uLocal_570[4], 4, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uLocal_570[4], 8, 1, 0, 0);
	unk_0x5F2AACB0122E1554(uLocal_570[4], 11, 1, 0, 0);
	if (func_78(uLocal_580[0]))
	{
		unk_0xA8E6CFA5CD562236(uLocal_580[0], 1f);
		unk_0x29F843A07F8E25BA(uLocal_580[0], 1f);
		unk_0x15E0B3143320FB58(uLocal_580[0], iLocal_154);
		unk_0x1A8C6CC3CB0B507B(uLocal_580[0], iLocal_156);
		unk_0x1592B6D205958934(uLocal_580[0], joaat("weapon_combatpistol"), -1, 0, 0);
		unk_0xB424F90D6E96BCF8(uLocal_580[0], 12, 1);
		unk_0xB424F90D6E96BCF8(uLocal_580[0], 2, 1);
		unk_0x054E434B0AECBDA6(uLocal_580[0], uLocal_388);
		unk_0x3BCCE991853357EE(uLocal_580[0], 1, 0);
		unk_0x1706625EBCDDEBF9(uLocal_580[0], 324, 1);
		unk_0x5F2AACB0122E1554(uLocal_580[0], 0, 0, 1, 0);
		unk_0x5F2AACB0122E1554(uLocal_580[0], 3, 0, 1, 0);
		unk_0x5F2AACB0122E1554(uLocal_580[0], 4, 0, 1, 0);
		unk_0x5F2AACB0122E1554(uLocal_580[0], 8, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uLocal_580[0], 11, 0, 0, 0);
	}
	if (func_78(uLocal_588[0]))
	{
		unk_0x15E0B3143320FB58(uLocal_588[0], iLocal_154);
		unk_0x1A8C6CC3CB0B507B(uLocal_588[0], iLocal_156);
		unk_0x1592B6D205958934(uLocal_588[0], joaat("weapon_microsmg"), -1, 0, 0);
		unk_0x9E040412E0CB7CD7(uLocal_588[0], joaat("weapon_microsmg"), joaat("component_at_pi_flsh"));
		unk_0x9E040412E0CB7CD7(uLocal_588[0], joaat("weapon_microsmg"), joaat("component_at_scope_macro"));
		unk_0xB424F90D6E96BCF8(uLocal_588[0], 2, 1);
		unk_0xB424F90D6E96BCF8(uLocal_588[0], 13, 1);
		unk_0x054E434B0AECBDA6(uLocal_588[0], uLocal_388);
		unk_0x3BCCE991853357EE(uLocal_588[0], 1, 0);
		unk_0x1706625EBCDDEBF9(uLocal_588[0], 324, 1);
		unk_0x5F2AACB0122E1554(uLocal_588[0], 0, 1, 0, 0);
		unk_0x5F2AACB0122E1554(uLocal_588[0], 3, 0, 2, 0);
		unk_0x5F2AACB0122E1554(uLocal_588[0], 4, 0, 2, 0);
		unk_0x5F2AACB0122E1554(uLocal_588[0], 8, 1, 0, 0);
		unk_0x5F2AACB0122E1554(uLocal_588[0], 11, 0, 1, 0);
	}
	func_338(&uLocal_390, 8, iLocal_596, "EPSGUARD", 0, 1);
	func_338(&uLocal_390, 3, iLocal_578, "EPSPILOT", 0, 1);
	func_338(&uLocal_390, 5, uLocal_570[0], "EPSGUARD2", 0, 1);
	func_338(&uLocal_390, 6, uLocal_570[3], "EPSGUARD7", 0, 1);
	func_338(&uLocal_390, 7, uLocal_570[4], "EPSGUARD8", 0, 1);
	func_336(1, 0, 0);
	func_336(60, 0, 0);
	func_336(55, 0, 0);
	func_112(unk_0x77F050A399DB77ED(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	unk_0xD3EC3035DF6F9D74(12, 1);
	unk_0xD3EC3035DF6F9D74(2, 1);
	unk_0xD3EC3035DF6F9D74(5, 1);
	unk_0xD3EC3035DF6F9D74(3, 1);
	iLocal_291 = unk_0x3EAC9995EC220C5A();
}

void func_336(int iParam0, int iParam1, bool bParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_68();
		if (iParam1 == 4)
		{
			Global_99250.f_32503[iParam0 /*29*/].f_12[0] = 1;
			Global_99250.f_32503[iParam0 /*29*/].f_12[1] = 1;
			Global_99250.f_32503[iParam0 /*29*/].f_12[2] = 1;
			Global_99250.f_32503[iParam0 /*29*/].f_24[0] = 1;
			Global_99250.f_32503[iParam0 /*29*/].f_24[1] = 1;
			Global_99250.f_32503[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_99250.f_32503[iParam0 /*29*/].f_12[iParam1] == 1 && Global_99250.f_32503[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_99250.f_32503[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_99250.f_32503[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69317)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = { Global_99250.f_32503[iParam0 /*29*/].f_3 };
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = { Global_99250.f_32503[iParam0 /*29*/].f_3 };
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_337();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = { Global_99250.f_32503[iParam0 /*29*/].f_3 };
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_337();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = { Global_99250.f_32503[iParam0 /*29*/].f_3 };
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_337();
			}
		}
	}
}

void func_337()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x366B33759CCFE37B(&(Global_99250.f_32503[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		unk_0x2B8B3581C4E63AD1("");
		StringCopy(&cVar16, unk_0x366B33759CCFE37B(&(Global_2893[1 /*6*/])), 64);
		sVar32 = unk_0x366B33759CCFE37B("CELL_253");
		unk_0xEF85B88DC049EA23(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x2B8B3581C4E63AD1("CELL_255");
		unk_0x703D2B4B1C7E10B6(&(Global_2893[1 /*6*/]));
		unk_0xEF85B88DC049EA23(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xA5F70A8B83BDFA49(&Global_2283, 0);
}

void func_338(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 0);
			}
			else
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 1);
			}
		}
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xFAF696F3B3892233(iParam2, 0);
			}
			else
			{
				unk_0xFAF696F3B3892233(iParam2, 1);
			}
		}
	}
}

void func_339()
{
	while (((((((((!unk_0x4A4B6FD54C499B7D(joaat("s_m_m_highsec_01")) || !unk_0x4A4B6FD54C499B7D(joaat("a_m_y_epsilon_01"))) || !unk_0x4A4B6FD54C499B7D(joaat("sentinel"))) || !unk_0x4A4B6FD54C499B7D(joaat("maverick"))) || !unk_0x4A4B6FD54C499B7D(joaat("p_ld_heist_bag_s_1"))) || !unk_0xEF797B6DFFA2C629(222, "Ep8Heli01")) || !unk_0x5263DE3D9A17A86F("rcmepsilonism8")) || !unk_0x496E42829279FD71("Eps8EPED")) || !unk_0x496E42829279FD71("Eps8LS01")) || !unk_0x234DE5FAACE83930("helicopterhud"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_340()
{
	if (!unk_0x1F2158D615BC4B25(iLocal_632))
	{
		iLocal_632 = unk_0x2EEA15C0C12C8CDE(joaat("tailgater"), Local_212, fLocal_251, 1, 1);
		func_304(iLocal_632, 0);
		unk_0xEDB159E56B64D182(iLocal_632, iLocal_161, iLocal_161);
		unk_0xE141C6C0A9E4E7A5(iLocal_632, 0, 0);
		unk_0x21500D3576611CDE(iLocal_632, 0);
		unk_0xE1BEFB80AC811E83(iLocal_632, "K1FFL0M");
	}
	if (func_17(iLocal_632))
	{
		iLocal_271 = unk_0x070BBD7287E8E744(iLocal_632);
		fLocal_253 = unk_0xF9E5E5F3AC4B8008(iLocal_632);
		fLocal_254 = unk_0xA7099FB567A1830C(iLocal_632);
		unk_0x9F48F299B333353E(iLocal_632, (iLocal_271 + (iLocal_271 / 3)));
		unk_0x42691817311F7969(iLocal_632, (fLocal_253 + (fLocal_253 / 3f)));
		unk_0x46C662B7638C9190(iLocal_632, (fLocal_254 + (fLocal_254 / 3f)));
		unk_0xC3B35B74D44539B6(iLocal_632, 0);
		unk_0xE11D7E04CD92C874(iLocal_632, 0);
		unk_0xE25FC4C7931E0208(iLocal_632, 0);
		unk_0xD1CF9849336C4ED5(iLocal_632, 1);
		unk_0xA8238F0B5DBFD7FB(iLocal_632, 5, 0);
		unk_0x0EBC4C7763B6A449(iLocal_632, 0.2f, 1000, 0, 0, 0, -1);
		uLocal_597[0] = unk_0x4A498A71A7B2E7A5(joaat("p_ld_heist_bag_s_1"), unk_0x03C14E8A9400F2A9(iLocal_632, 0f, 0f, 10f), 1, 1, 0);
		uLocal_597[1] = unk_0x4A498A71A7B2E7A5(joaat("p_ld_heist_bag_s_1"), unk_0x03C14E8A9400F2A9(iLocal_632, 0f, 0f, 11f), 1, 1, 0);
		uLocal_597[2] = unk_0x4A498A71A7B2E7A5(joaat("p_ld_heist_bag_s_1"), unk_0x03C14E8A9400F2A9(iLocal_632, 0f, 0f, 12f), 1, 1, 0);
		uLocal_597[3] = unk_0x4A498A71A7B2E7A5(joaat("p_ld_heist_bag_s_1"), unk_0x03C14E8A9400F2A9(iLocal_632, 0f, 0f, 13f), 1, 1, 0);
		unk_0xCA41E71A6AD186D8(uLocal_597[0], iLocal_632, 0, -0.06f, -1.93f, -0.1f, 0f, 0f, 91f, 0, 0, 0, 0, 2, 1);
		unk_0xCA41E71A6AD186D8(uLocal_597[1], iLocal_632, 0, 0.2f, -1.92f, -0.1f, 0f, 0f, 93f, 0, 0, 0, 0, 2, 1);
		unk_0xCA41E71A6AD186D8(uLocal_597[2], iLocal_632, 0, 0.4f, -1.94f, -0.1f, 0f, 0f, 89f, 0, 0, 0, 0, 2, 1);
		unk_0xCA41E71A6AD186D8(uLocal_597[3], iLocal_632, 0, 0.66f, -1.95f, -0.1f, 0f, 0f, 89f, 0, 0, 0, 0, 2, 1);
		unk_0xF1040A0061DC97E5(iLocal_632, 1);
		if (!func_341())
		{
			if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
			{
				unk_0x213DEA03167527BC(unk_0x77F050A399DB77ED(), iLocal_632, -1);
			}
		}
	}
	unk_0x3B97B8A2AAD89A9D(-567.6498f, -2.9035f, 43.3971f, 400f, 1, 0, 0, 0, 0);
	unk_0x36AB02A4C9B7F4C0(-711.6323f, 42.0868f, 14.5077f, -663.5175f, 118.0403f, 86.0362f);
}

bool func_341()
{
	return unk_0xB56FEBC510E7E9DE(Global_91106.f_20, 13);
}

void func_342()
{
	var uVar0;
	
	unk_0xC04F3ABD290057B0();
	unk_0xED841E2299EBB634();
	switch (iLocal_567)
	{
		case 0:
			if (iLocal_308 == 0)
			{
				func_416("ep_8_rcm", 0);
				if (!unk_0x06F36936289C5EC8(uLocal_613))
				{
					uLocal_613 = unk_0x6AC24FEF1D81F105("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				if (!unk_0x06F36936289C5EC8(uLocal_614))
				{
					uLocal_614 = unk_0x6AC24FEF1D81F105("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				unk_0x38A0FD089D493A96(uLocal_613, -692.1f, 18.8f, 40.3f, 0.7f, 0f, 24.5f, 50f, 0, 1, 1, 2);
				unk_0x38A0FD089D493A96(uLocal_614, -691.8f, 18.9f, 42.9f, 22.2f, 0f, 24.8f, 50f, 0, 1, 1, 2);
				unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), false, 128);
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -677.9299f, 31.37431f, 37.97105f, -677.7263f, 51.89373f, 48.20758f, 25f, 0, 1, 0))
					{
						func_415(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), -676.7216f, 46.6862f, 41.7595f, 91.6871f, 0, 1);
						func_415(unk_0x77F050A399DB77ED(), -682.9754f, 48.252f, 42.1423f, 107.7723f, 0, 1);
						unk_0xE3BCB930B62CBDE5(unk_0x77F050A399DB77ED(), -696.1459f, 41.7659f, 42.218f, 1f, -1, 1f, 0, 25.269f);
					}
					else
					{
						func_415(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), -719.0406f, 32.5248f, 41.7419f, 287.2928f, 0, 1);
						unk_0x6BD950A4FEA6D505(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 5f);
						unk_0x2A6B9F9E71C479CF(&uVar0);
						unk_0xA0C5D1F0ABDB245E(0, unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), -703.656f, 37.143f, 42.2135f, 3f, 0, 0, 262144, 6f, 100f);
						unk_0xE3BCB930B62CBDE5(0, -696.1459f, 41.7659f, 42.218f, 1f, -1, 1f, 0, 25.269f);
						unk_0x44642CB08FA1637E(uVar0);
						unk_0xB8A8FA4B28E9F423(unk_0x77F050A399DB77ED(), uVar0);
						unk_0xAAD288E877AC833D(&uVar0);
					}
				}
				else
				{
					unk_0xE3BCB930B62CBDE5(unk_0x77F050A399DB77ED(), -696.1459f, 41.7659f, 42.218f, 1f, -1, 1f, 0, 25.269f);
				}
				unk_0x97A2169EA4EC4F21(uLocal_614, uLocal_613, 6200, 1, 1);
				iLocal_307 = unk_0x3EAC9995EC220C5A();
				iLocal_308 = 1;
			}
			else if (iLocal_308 == 1)
			{
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					if (func_16(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)))
					{
						if (!unk_0xA427F05DB896EEBE(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), -703.656f, 37.143f, 42.2135f, 9f, 9f, 9f, 0, 1, 0))
						{
							unk_0x6BD950A4FEA6D505(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 5f);
						}
					}
				}
				if (unk_0x3EAC9995EC220C5A() > iLocal_307 + 6000 || func_413(1000))
				{
					iLocal_308 = 2;
				}
			}
			else if (iLocal_308 == 2)
			{
				if (unk_0x8B301CC099349249())
				{
					if (func_223(unk_0x77F050A399DB77ED(), 12, 8))
					{
						func_412("Michael", joaat("player_zero"), 8);
					}
					if (func_223(unk_0x77F050A399DB77ED(), 12, 28))
					{
						func_412("Michael", joaat("player_zero"), 28);
					}
				}
				if (func_408(1, 1093140480, 0))
				{
					iLocal_378 = 0;
					iLocal_379 = 0;
					iLocal_381 = 0;
					iLocal_380 = 0;
					if (!unk_0x0B6E83A9A7ED3EBA(iLocal_632))
					{
						unk_0x78C7E0369425C575(iLocal_632, "epsilon_car", 0, joaat("tailgater"), 32);
					}
					unk_0xD8B2A7690A84D44E(1);
					func_407();
					unk_0xE568A9F724E3F204(0);
					unk_0x4FAC271F0372F347(joaat("tailgater"));
					unk_0x4EDE34FBADD967A6(0);
					unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
					unk_0xFE65076A204F9258(uLocal_613, 0);
					unk_0xFE65076A204F9258(uLocal_614, 0);
					func_400(-702.0282f, 38.17753f, 46.45677f, -659.6471f, 47.08546f, 38.1703f, 16f, -717.3519f, 34.7669f, 42.0465f, 289.3352f, 1, 1, 1, 0, 0);
					func_356(0f, 0f, 0f, 0f, 1, 0);
					func_352(-697.75f, 45.38f, 43.03f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					unk_0x3B97B8A2AAD89A9D(-651.949f, 62.916f, 44.7353f, 150f, 0, 0, 0, 0, 0);
					unk_0x8077CFA266F19DC6(-651.3148f, 121.844f, 63.45312f, -650.0618f, 0.95496f, 35.75433f, 41.75f, 0, 0, 1);
					iLocal_567 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x7B8549A4F94FA4C8())
			{
				if (unk_0xD43F83F5D84C538B("Michael", 0))
				{
					unk_0xFD8B8ADF8D8BD914();
					if (func_17(iLocal_632))
					{
						if (func_78(unk_0x77F050A399DB77ED()))
						{
							if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
							{
								unk_0x213DEA03167527BC(unk_0x77F050A399DB77ED(), iLocal_632, -1);
								unk_0x9371C699D98CE4D6(unk_0x77F050A399DB77ED(), 0, 0);
							}
							iLocal_378 = 1;
						}
					}
				}
				if (unk_0xD43F83F5D84C538B("epsilon_car", 0))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(iLocal_632))
					{
					}
					iLocal_381 = 1;
				}
				if (iLocal_381 == 0)
				{
					if (!unk_0x0B6E83A9A7ED3EBA(iLocal_632))
					{
						unk_0xAB944F311F6EC975(iLocal_632, 1, 1, 1);
					}
				}
				if (unk_0xD43F83F5D84C538B("Cris", 0))
				{
					iLocal_379 = 1;
				}
				unk_0xF75AB6B7CBB81AFC();
			}
			else
			{
				iLocal_567 = 2;
			}
			if (unk_0x82D4A1789BA62554(0))
			{
				iLocal_380 = 1;
			}
			if (iLocal_378 == 0 || unk_0x2C3CB97B75CA4D32())
			{
				unk_0xABF261CA61470DE0(0f, 1065353216);
				unk_0x8793DE27084C2CBD(0f);
			}
			if (((iLocal_378 == 1 && iLocal_379 == 1) && iLocal_381 == 1) && iLocal_380 == 1)
			{
				iLocal_567 = 2;
			}
			break;
		
		case 2:
			if (!iLocal_384)
			{
				unk_0x2084300F2D91A8E6("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 0);
				unk_0x3345CB85AB9EC035("EPS8_START");
				iLocal_384 = 1;
			}
			if (Global_99250.f_17192.f_387 == 0)
			{
				func_351(0, 29, 50000);
				Global_99250.f_17192.f_387 = 1;
			}
			func_343(1, 1, 1, 1);
			if (func_17(iLocal_632))
			{
				unk_0x3C072F008135D7A8(iLocal_632, 1);
				unk_0xF1040A0061DC97E5(iLocal_632, 1);
			}
			iLocal_568 = 2;
			break;
	}
}

void func_343(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7F3E348C0892D8D2();
	unk_0x0FA36617E5EA9DD4(uVar0, 0);
	unk_0xC5FC9A0E5FD51B1A(uVar0, iParam3, 0);
	func_344(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x488AF65D7EDB6B4A(1);
		unk_0x1B40500A7841D6AB(1);
	}
	unk_0x4ACCE973F9C3CA3B(1);
	if (iParam0 == 1)
	{
		unk_0xC434ECD612504B54(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_36 != 0 && iLocal_36 != joaat("object")) && iLocal_36 != joaat("gadget_parachute"))
		{
			if (func_16(unk_0x77F050A399DB77ED()))
			{
				if (unk_0xFB599990805DCA25(unk_0x77F050A399DB77ED(), iLocal_36, 0))
				{
					unk_0x9687CF9C13C1F6A1(unk_0x77F050A399DB77ED(), iLocal_36, 0);
				}
			}
		}
	}
	if (func_78(unk_0x77F050A399DB77ED()))
	{
		unk_0x052B307FE35BC588(unk_0x77F050A399DB77ED(), 0, 0);
	}
}

void func_344(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xCBF71C579F3C5665(unk_0x8ACD527A7E574590());
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 1);
		func_350(1);
		unk_0xB2FE902971602DFF();
		unk_0x8AD31F9246CE7ADF();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xEA9C2A206A86B744())
			{
				unk_0xC9AB825AA4821BDA(0);
			}
			if (!func_7())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_349(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_350(0);
		unk_0x7A72DD566E92DC37();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x1F3478667D91BCDD();
		}
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 0);
		func_349(0, iParam3, iParam2, 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !func_345(unk_0x8ACD527A7E574590()))
		{
			unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), 0);
		}
		Global_69315 = 0;
	}
}

int func_345(int iParam0)
{
	if (func_347(iParam0, 0))
	{
		return 1;
	}
	if (func_346())
	{
		if (iParam0 == unk_0x8ACD527A7E574590())
		{
			return 1;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_346()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

bool func_347(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_348(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_348(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_88();
	}
	if (Global_1315888[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_349(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x4967E3B78238C06C() != iParam0 && uParam2)
		{
			unk_0x5377CB2488C9CA95(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_350(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 13);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 13);
	}
}

int func_351(int iParam0, int iParam1, int iParam2)
{
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_26(Global_99250.f_32503[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

void func_352(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	var uVar0;
	
	uVar0 = unk_0x7F3E348C0892D8D2();
	if (unk_0x6DF20EAB8093DF19(uVar0))
	{
		func_355(0);
		if (bParam9)
		{
			unk_0x55894F82E418646B(unk_0x7F3E348C0892D8D2(), 1);
		}
		if (bParam8)
		{
			switch (func_69())
			{
				case 0:
					if (func_223(unk_0x77F050A399DB77ED(), 8, 15))
					{
						func_112(unk_0x77F050A399DB77ED(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_223(unk_0x77F050A399DB77ED(), 9, 6))
					{
						func_112(unk_0x77F050A399DB77ED(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_223(unk_0x77F050A399DB77ED(), 8, 1) || func_223(unk_0x77F050A399DB77ED(), 8, 10))
					{
						func_112(unk_0x77F050A399DB77ED(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_223(unk_0x77F050A399DB77ED(), 8, 4))
					{
						func_112(unk_0x77F050A399DB77ED(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			unk_0xD1C12864812BFA0A(func_354(unk_0x7F3E348C0892D8D2()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			unk_0xDD10371A3DDE4593(Param0, 30f, 0);
		}
		if (bParam10)
		{
			unk_0x571937D113E93996(Param0, 30f);
		}
		unk_0x2D170B30FD0AB4FC(Param0, 30f, 0);
		unk_0x3DF319A8C78275DD(iVar0, 0, 0);
		unk_0x32EB36CA60E96828(iVar0, 0);
		unk_0x0FA36617E5EA9DD4(iVar0, 1);
		if (bParam12)
		{
			unk_0x488AF65D7EDB6B4A(0);
			unk_0x1B40500A7841D6AB(0);
		}
		unk_0xA1E3A2CCF985EE86();
		if (iParam11 == 1)
		{
			unk_0x4ACCE973F9C3CA3B(1);
		}
		if (iParam3 == 1)
		{
			unk_0xC434ECD612504B54(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_36 = 0;
			if (func_16(unk_0x77F050A399DB77ED()))
			{
				iLocal_36 = unk_0x8C7E85A27DBA1793(unk_0x77F050A399DB77ED());
				unk_0x9687CF9C13C1F6A1(unk_0x77F050A399DB77ED(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			func_353(500, 0);
		}
	}
}

void func_353(int iParam0, bool bParam1)
{
	if (unk_0x2CC731F9E664299E() || unk_0x8DD09BB8ACF9E623())
	{
		if (!unk_0x329E4482E654B910())
		{
			unk_0xCA6D671341405469(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x398F615441F52A47())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

Vector3 func_354(int iParam0)
{
	return unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(uParam0), 0);
}

void func_355(bool bParam0)
{
	var uVar0;
	
	uVar0 = unk_0x7F3E348C0892D8D2();
	if (!unk_0x28D605B18777DE18(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0xC5FC9A0E5FD51B1A(uVar0, bParam0, 16);
		unk_0xC5FC9A0E5FD51B1A(iVar0, bParam0, 32);
	}
	func_344(1, 1, 0, 0);
}

void func_356(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x1F2158D615BC4B25(Global_92910.f_4))
	{
		if (unk_0x968EA16107097324(Global_92910.f_4, 0))
		{
			if (func_399(24) != Global_92910.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_396(unk_0xAF99169F0F5AE41D(Global_92910.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_357(Global_92910.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_357(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x1F2158D615BC4B25(iParam0) && unk_0x968EA16107097324(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x1F2158D615BC4B25(Global_68186.f_484[25]) && unk_0x968EA16107097324(Global_68186.f_484[25], 0))
			{
				if (Global_68186.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xEDDA3251103C6740(iParam0) || unk_0xDF1398076E26B0E4(iParam0) == joaat("bus")) || unk_0xDF1398076E26B0E4(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_395(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_392(iParam0, &Var0);
		if (func_320(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
			uParam4 = unk_0x7578EBD2DA3F8DD2(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x39BD4614CF899227(unk_0x664B47C58CE8A0A4()) != joaat("vehicle_gen_controller"))
			{
				Global_69174 = unk_0x39BD4614CF899227(unk_0x664B47C58CE8A0A4());
			}
		}
		func_388(iParam5, &Var0, Param1, uParam4, func_391(iParam0));
		func_358(iParam5, iParam0, 0);
	}
}

void func_358(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_385(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_68186.f_555[0 /*21*/].f_9, 12) && !unk_0xB56FEBC510E7E9DE(Global_68186.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68186.f_555[0 /*21*/].f_4 != unk_0xDF1398076E26B0E4(iParam1))
		{
			return;
		}
	}
	if (Global_69093 != -1 && Global_69093 != iParam0)
	{
		return;
	}
	if (unk_0x1F2158D615BC4B25(iParam1))
	{
		if (unk_0x968EA16107097324(iParam1, 0))
		{
			if (!unk_0x335346A332B62CA2(iParam1))
			{
				unk_0x8D429A827A931AC9(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_99250.f_18735.f_4801 = func_374();
			}
			if (iParam1 != Global_68186.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_399(iParam0);
					if ((unk_0x1F2158D615BC4B25(iVar0) && unk_0x968EA16107097324(iVar0, 0)) && iParam1 != iVar0)
					{
						func_359(iVar0, 145);
					}
				}
				Global_69092 = iParam1;
				Global_69093 = iParam0;
				Global_69094 = iParam2;
			}
		}
	}
}

void func_359(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_360(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x07A8845F7F106A38(iParam0, -1);
		if (!unk_0x1F2158D615BC4B25(iVar0))
		{
			iVar0 = unk_0x0719727137101E59(iParam0, -1);
		}
		if (unk_0x1F2158D615BC4B25(iVar0) && !unk_0x1E80C02AC16B6622(iVar0))
		{
			if (unk_0xDF1398076E26B0E4(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_99250.f_1754.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xDF1398076E26B0E4(iParam0) == Global_99250.f_18735.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x0AAC2160036975D9(&(Global_99250.f_18735.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x35D1CAD6ADAB6491(unk_0x2FE7FA21D340AA95(iParam0), &(Global_99250.f_18735.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_99250.f_18735.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_99250.f_18735.f_5592[iVar1] = iVar2;
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
		if (unk_0xDF1398076E26B0E4(iParam0) == Global_99250.f_18735.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x0AAC2160036975D9(&(Global_99250.f_18735.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x35D1CAD6ADAB6491(unk_0x2FE7FA21D340AA95(iParam0), &(Global_99250.f_18735.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_99250.f_18735.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_99250.f_18735.f_5590 = iParam1;
	Global_69091 = iParam0;
	Global_99250.f_18735.f_5588 = 1;
	func_392(iParam0, &(Global_99250.f_18735.f_5510));
}

int func_360(int iParam0)
{
	if ((((((((((!unk_0x1F2158D615BC4B25(iParam0) || !unk_0x968EA16107097324(iParam0, 0)) || func_372(iParam0, 0, 0)) || func_372(iParam0, 1, 0)) || func_372(iParam0, 2, 0)) || func_391(iParam0) != 145) || func_371(iParam0)) || func_370(iParam0)) || func_369(iParam0)) || func_368(iParam0)) || !func_361(unk_0xDF1398076E26B0E4(iParam0)))
	{
		if (func_370(iParam0))
		{
		}
		if (func_370(iParam0))
		{
		}
		if (func_372(iParam0, 0, 0))
		{
		}
		if (func_372(iParam0, 1, 0))
		{
		}
		if (func_372(iParam0, 2, 0))
		{
		}
		if (func_391(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_361(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_362(iParam0))
	{
		return 0;
	}
	if (((unk_0xD3FAF4AD23FDF2DA(iParam0) || unk_0x4F32F86538FB8979(iParam0)) || unk_0x5FA5E5014A0AC183(iParam0)) || unk_0xD68DC1905B617ADD(iParam0))
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

int func_362(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xED25CDA223A93673(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x4C779B19E6DDCDA2())) || (iParam0 == joaat("buffalo3") && !unk_0x4C779B19E6DDCDA2())) || (iParam0 == joaat("gauntlet2") && !unk_0x4C779B19E6DDCDA2())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x4C779B19E6DDCDA2())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_367())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x1FB97E894B0A4FC6())
		{
			if (unk_0x50BB432A9DE546D9(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD5451DF6AA0E4BDB(Var1.f_0))
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
		if ((((!func_366() && !func_365()) && !func_364()) && !func_363()) && !func_367())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xBB3DCD23C363D187() || unk_0x2C063B4379F0C076()) || unk_0xA24A81C5933F1B29())
		{
		}
		else if (!func_364())
		{
			return 0;
		}
	}
	return 1;
}

int func_363()
{
	return 0;
}

int func_364()
{
	return 1;
}

int func_365()
{
	return 1;
}

int func_366()
{
	if (unk_0x368F9074322AFD91(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_367()
{
	int iVar0;
	
	if (unk_0x9C77CB51883D12D1())
	{
		if (unk_0xF5783AD1B5945861())
		{
			if (unk_0x05E0388968EC9D08())
			{
				unk_0xBA16CA557222A92B(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x573691DB812DC8AA(&iVar0, 2);
				unk_0x573691DB812DC8AA(&iVar0, 4);
				unk_0x573691DB812DC8AA(&iVar0, 6);
				unk_0x573691DB812DC8AA(&Global_25, 2);
				unk_0x573691DB812DC8AA(&Global_25, 4);
				unk_0x573691DB812DC8AA(&Global_25, 6);
				unk_0x5716C8F12991E399(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x5B08E2B84948C788())
				{
					iVar0 = unk_0x824EA95BCC498CB4(866);
					unk_0x573691DB812DC8AA(&iVar0, 0);
					unk_0xF49776B60F784AFF(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136298 == 2)
	{
		return 1;
	}
	else if (Global_136298 == 3)
	{
		return 0;
	}
	if (unk_0x5B08E2B84948C788())
	{
		if (unk_0xB56FEBC510E7E9DE(unk_0x824EA95BCC498CB4(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_368(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xDF1398076E26B0E4(iParam0);
	sVar1 = unk_0x2FE7FA21D340AA95(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x35D1CAD6ADAB6491(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_362(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_369(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x1F2158D615BC4B25(Global_88800[iVar0]))
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

int func_370(int iParam0)
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(iParam0) && unk_0x968EA16107097324(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x1F2158D615BC4B25(Global_88770[iVar0]) && unk_0x968EA16107097324(Global_88770[iVar0], 0))
			{
				if (Global_88770[iVar0] == iParam0 && unk_0xDF1398076E26B0E4(Global_88770[iVar0]) == unk_0xDF1398076E26B0E4(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_371(int iParam0)
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(Global_68186.f_484[24]))
	{
		if (iParam0 == Global_68186.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x1F2158D615BC4B25(Global_68186.f_484[iVar0]))
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

int func_372(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x1F2158D615BC4B25(iParam0) || !unk_0x968EA16107097324(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_373(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB56FEBC510E7E9DE(Global_99250.f_5847[iVar9], 0))
		{
			if (unk_0x35420DF6FD85930A(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_373(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_374()
{
	var uVar0;
	
	func_384(&uVar0, unk_0x624CC88A8815545E());
	func_383(&uVar0, unk_0xD3D98375D5CA69E4());
	func_382(&uVar0, unk_0x5C5157A539753532());
	func_377(&uVar0, unk_0xCB12BC5A618B995B());
	func_376(&uVar0, unk_0x9746D90F14C930B9());
	func_375(&uVar0, unk_0xD45B57A596913560());
	return uVar0;
}

void func_375(var uParam0, int iParam1)
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

void func_376(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_377(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_381(*uParam0);
	iVar1 = func_379(*uParam0);
	if (iParam1 < 1 || iParam1 > func_378(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_378(int iParam0, int iParam1)
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

var func_379(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_380(unk_0xB56FEBC510E7E9DE(iParam0, 31), -1, 1)) + 2011;
}

int func_380(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_381(var uParam0)
{
	return uParam0 & 15;
}

void func_382(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_383(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_384(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_385(var uParam0, int iParam1)
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
			uParam0->f_4 = func_386(0, 1);
			uParam0->f_12 = 0;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_386(0, 1);
			uParam0->f_12 = 0;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_386(1, 1);
			uParam0->f_12 = 1;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_386(1, 2);
			uParam0->f_12 = 1;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 19);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_386(1, 1);
			uParam0->f_12 = 1;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_386(1, 2);
			uParam0->f_12 = 1;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 19);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_386(2, 1);
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_386(2, 1);
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_386(2, 1);
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 20);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 22);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 22);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 22);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 24);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 24);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 14);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 24);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 28);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 29);
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
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 27);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 24);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 29);
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
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 27);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 24);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 29);
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
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 7);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 27);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 24);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 11);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 13);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 10);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 11);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 13);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 9);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 9);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 8);
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
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 2);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 30);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 2);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 22);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
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
			if (func_367())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 13);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 2);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 1);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_367())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 13);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 2);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 1);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 0);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 21);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 30);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 30);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 23);
			unk_0x573691DB812DC8AA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xB56FEBC510E7E9DE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_99250.f_18735.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_320(Global_99250.f_18735.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99250.f_18735.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_99250.f_18735.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_99250.f_18735.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xB56FEBC510E7E9DE(uParam0->f_9, 19))
	{
		if (!func_320(Global_99250.f_1754.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99250.f_1754.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_99250.f_1754.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(uParam0->f_9, 20))
	{
		if (!func_320(Global_99250.f_1754.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99250.f_1754.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_99250.f_1754.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_386(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_71(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_387(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_387(int iParam0, var uParam1, int iParam2)
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
			if (Global_99250.f_7703.f_99.f_58[128] && !Global_99250.f_7703.f_99.f_58[131])
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
					if (Global_99250.f_7703.f_99.f_58[119])
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
			else if (Global_99250.f_7703.f_99.f_58[118])
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

void func_388(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_385(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xB56FEBC510E7E9DE(Global_68186.f_555[0 /*21*/].f_9, 10))
		{
			func_390(iParam0);
			func_389(uParam1, &(Global_99250.f_18735.f_69[Global_68186.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xB56FEBC510E7E9DE(Global_68186.f_555[0 /*21*/].f_9, 11))
			{
				Global_99250.f_18735.f_1864[Global_68186.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_99250.f_18735.f_1934[Global_68186.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_99250.f_18735.f_1864[Global_68186.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_99250.f_18735.f_1934[Global_68186.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_99250.f_18735.f_1958[Global_68186.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_249(iParam0, 1);
		}
	}
}

void func_389(var uParam0, var uParam1)
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

void func_390(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_385(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x1F2158D615BC4B25(Global_68186.f_139[iParam0]))
		{
			unk_0x8D429A827A931AC9(Global_68186.f_139[iParam0], 1, 1);
			unk_0xB84D4C251623B60C(&(Global_68186.f_139[iParam0]));
			Global_68186.f_139[iParam0] = 0;
		}
		if (unk_0xB56FEBC510E7E9DE(Global_68186.f_555[0 /*21*/].f_9, 13))
		{
			func_249(iParam0, 0);
		}
	}
}

int func_391(int iParam0)
{
	int iVar0;
	
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 145;
	}
	if (!unk_0x968EA16107097324(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x1F2158D615BC4B25(Global_88770[iVar0]))
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

void func_392(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x968EA16107097324(iParam0, 0))
	{
		func_102(uParam1);
		uParam1->f_66 = unk_0xDF1398076E26B0E4(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2FE7FA21D340AA95(iParam0), 16);
		*uParam1 = unk_0x21C7BB3FC7BDA875(iParam0);
		unk_0x7F28F78FC4A382A2(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x7A754CC677BF330F(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xF782955E2B9CA2A2(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xA586FD6870BD7171(iParam0);
		uParam1->f_67 = unk_0xF933C1D6868EE7D5(iParam0);
		uParam1->f_69 = unk_0x9489701175ECF585(iParam0);
		uParam1->f_70 = unk_0x9777E452CDE55809(iParam0);
		unk_0x56E6FA42E5717914(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x521FE229CF7A3A21(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xCA6A17118B1E6E81(iParam0, 2))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 28);
		}
		if (unk_0xCA6A17118B1E6E81(iParam0, 3))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 29);
		}
		if (unk_0xCA6A17118B1E6E81(iParam0, 0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 30);
		}
		if (unk_0xCA6A17118B1E6E81(iParam0, 1))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x5265771D79F24A99(iParam0, 0))
		{
			uParam1->f_68 = unk_0x362684AE59B8BD46(iParam0);
		}
		if (unk_0x4F32F86538FB8979(uParam1->f_66))
		{
			if (unk_0xA2822ECBE08BA15C(iParam0))
			{
				switch (unk_0x0AFB4FC1B0EEBCE1(iParam0))
				{
					case 2:
					case 0:
						unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 23);
						unk_0x573691DB812DC8AA(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 23);
						unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x573691DB812DC8AA(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x573691DB812DC8AA(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xF961EB70CA5E8895(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 9);
		}
		if (unk_0x8A147513C0F86C22(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 10);
		}
		if (unk_0xBA6E8DEFECA26A39(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 13);
			unk_0x221F450D7BC62614(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xB01B059B334F67A5(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 12);
		}
		func_394(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3F119D3637D9EFD9(iParam0, iVar0 + 1))
			{
				unk_0x573691DB812DC8AA(&(uParam1->f_77), func_393(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x2E5C1D84FCCF5CE1(iParam0, 0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 11);
		}
		if (unk_0xB22BDF5B6DBD298B(iParam0, "IgnoredByQuickSave") && unk_0x51ABF0A53A19B212(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 27);
		}
	}
}

int func_393(int iParam0)
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

int func_394(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x968EA16107097324(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xB944775459039806(*iParam0) == 0)
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
			if (unk_0xE4A2AB18E282A5D6(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x412350E0E75BCEFD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x329167DA18FC4DBD(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x329167DA18FC4DBD(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_395(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_390(iParam0);
	func_249(iParam0, 0);
}

int func_396(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_397(Param0, iParam3, 1);
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

int func_397(struct<3> Param0, int iParam3, int iParam4)
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
				if (func_398(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xA2490B3CE6382FBB(Param0, Global_86477[iVar0 /*10*/].f_3, 1);
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

bool func_398(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_99250.f_5847[iParam0], 0);
}

int func_399(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68186.f_139[iParam0];
}

void func_400(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_401(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_401(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, var uParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	iVar0 = unk_0xD8D1111EA0CFD1DB();
	if (unk_0x1F2158D615BC4B25(iVar0))
	{
		if (!unk_0x335346A332B62CA2(iVar0))
		{
			unk_0x8D429A827A931AC9(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0x968EA16107097324(iVar0, 0))
		{
			if (bParam18)
			{
				func_406(iVar0);
			}
			if (unk_0xCA55F1A0D9ADE3AD(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0xAF99169F0F5AE41D(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_403(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x968EA16107097324(iVar0, 0))
			{
				if (unk_0x3CE8DE6EBE766C15(iVar0, joaat("taxi")))
				{
					if (unk_0x07A8845F7F106A38(iVar0, -1) != unk_0x77F050A399DB77ED() && unk_0x07A8845F7F106A38(iVar0, -1) != 0)
					{
						if (unk_0xA2490B3CE6382FBB(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0xAF99169F0F5AE41D(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_372(iVar0, func_69(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_402(Param11))
				{
					if (unk_0x968EA16107097324(iVar0, 0))
					{
						iVar13 = unk_0xDF1398076E26B0E4(iVar0);
						unk_0xDB8B1858ED6607A8(iVar0, &Var4, &Var7);
						if (unk_0x5FA5E5014A0AC183(iVar13))
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
				if (unk_0x968EA16107097324(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x3B97B8A2AAD89A9D(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0x2DA164E80FDEE7F2(iVar0, uParam10);
						unk_0x0B5F372F57E469AC(iVar0, Param7, 1, 0, 0, 1);
						unk_0xC1D3820702043A43(iVar0);
						if (bParam17)
						{
							unk_0xB99FFA77B01C4714(iVar0, 0, 1, 0);
							unk_0x3C072F008135D7A8(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x335346A332B62CA2(iVar0) || !unk_0x95CBA891BCA778AA(iVar0, 1))
						{
							unk_0x8D429A827A931AC9(iVar0, 1, 1);
						}
						if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iVar0, 0))
						{
							unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), unk_0xAF99169F0F5AE41D(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x18D40A0CF27AD6D3(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x1EAECAE41AF91596(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x1F2158D615BC4B25(iVar0))
				{
					if (unk_0x335346A332B62CA2(iVar0))
					{
						unk_0xB84D4C251623B60C(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x335346A332B62CA2(iVar0))
			{
				unk_0x8D429A827A931AC9(iVar0, 1, 0);
			}
			iVar14 = unk_0x07A8845F7F106A38(iVar0, -1);
			if (unk_0x1F2158D615BC4B25(iVar14) && !unk_0x1E80C02AC16B6622(iVar14))
			{
				unk_0x0B5F372F57E469AC(iVar14, unk_0xAF99169F0F5AE41D(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0xFCD89114F33612D0(unk_0xDF1398076E26B0E4(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0x07A8845F7F106A38(iVar0, 0);
				if (unk_0x1F2158D615BC4B25(iVar14) && !unk_0x1E80C02AC16B6622(iVar14))
				{
					unk_0x0B5F372F57E469AC(iVar14, unk_0xAF99169F0F5AE41D(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0x07A8845F7F106A38(iVar0, 1);
				if (unk_0x1F2158D615BC4B25(iVar14) && !unk_0x1E80C02AC16B6622(iVar14))
				{
					unk_0x0B5F372F57E469AC(iVar14, unk_0xAF99169F0F5AE41D(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0x07A8845F7F106A38(iVar0, 2);
				if (unk_0x1F2158D615BC4B25(iVar14) && !unk_0x1E80C02AC16B6622(iVar14))
				{
					unk_0x0B5F372F57E469AC(iVar14, unk_0xAF99169F0F5AE41D(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0x18D40A0CF27AD6D3(&iVar0);
		}
	}
}

int func_402(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_403(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
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
	
	if (unk_0x968EA16107097324(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_405(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x2C8CA5222767F3E4(unk_0xDF1398076E26B0E4(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0x03C14E8A9400F2A9(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0x03C14E8A9400F2A9(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0x03C14E8A9400F2A9(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0x03C14E8A9400F2A9(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_404(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_404(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_404(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_404(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_404(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_404(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_404(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_404(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_404(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_404(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_404(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_404(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_404(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_404(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_404(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_404(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_404(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

Vector3 func_405(struct<3> Param0)
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

void func_406(int iParam0)
{
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (unk_0x968EA16107097324(iParam0, 0))
		{
			if (unk_0xA7099FB567A1830C(iParam0) <= 200f)
			{
				unk_0x46C662B7638C9190(iParam0, 500f);
			}
			if (unk_0xF9E5E5F3AC4B8008(iParam0) <= 700f)
			{
				unk_0x46C662B7638C9190(iParam0, 900f);
			}
			if (unk_0x070BBD7287E8E744(iParam0) < 200)
			{
				unk_0x46C662B7638C9190(iParam0, 500f);
			}
		}
	}
}

void func_407()
{
	int iVar0;
	
	iVar0 = func_271();
	if (iVar0 == -1)
	{
		return;
	}
	Global_98337[iVar0 /*10*/] = 1;
}

int func_408(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if ((!unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()) && !unk_0x76A46F8A42763BF8(unk_0x77F050A399DB77ED())) && !unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED()))
		{
			if (!func_306(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), iParam1, 1, 1056964608, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_411(unk_0x77F050A399DB77ED(), -828834893))
				{
					unk_0x743E219F0C060EE5(unk_0x77F050A399DB77ED(), 0, 0);
				}
			}
			if (unk_0x314654A7E186B6B2(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_410();
	if (func_286())
	{
		func_293();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_409())
		{
			return 0;
		}
	}
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
	}
	return 1;
}

bool func_409()
{
	bool bVar0;
	
	bVar0 = unk_0x575DA8209967217A();
	if (!Global_69316)
	{
		if (!bVar0)
		{
			Global_69316 = 1;
		}
	}
	return bVar0;
}

void func_410()
{
	unk_0x6E20845D23D3DFD4(0, 21, 1);
	unk_0x6E20845D23D3DFD4(0, 37, 1);
	unk_0x6E20845D23D3DFD4(0, 25, 1);
	unk_0x6E20845D23D3DFD4(0, 141, 1);
	unk_0x6E20845D23D3DFD4(0, 140, 1);
	unk_0x6E20845D23D3DFD4(0, 24, 1);
	unk_0x6E20845D23D3DFD4(0, 257, 1);
	unk_0x6E20845D23D3DFD4(0, 22, 1);
	unk_0x6E20845D23D3DFD4(0, 23, 1);
}

int func_411(int iParam0, int iParam1)
{
	if (func_78(iParam0))
	{
		if (unk_0x49C650267EDFEBC6(iParam0, iParam1) == 1 || unk_0x49C650267EDFEBC6(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_412(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<14> Var1;
	var uVar15;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	var uVar30;
	int iVar46;
	
	uVar15 = 9;
	uVar30 = { func_155(iParam1, iParam2) };
	iVar46 = 0;
	if (uVar30[2] == -99 && uVar30[0] == -99)
	{
		iVar46 = 1;
	}
	iVar28 = 0;
	while (iVar28 <= 14)
	{
		iVar0 = iVar28;
		if (iVar0 != 12 && iVar0 != 14)
		{
			if (iVar0 == 13)
			{
				uVar15 = { func_152(iParam1, uVar30[iVar28]) };
				iVar29 = 0;
				while (iVar29 <= 8)
				{
					iVar25 = iVar29;
					iVar26 = func_167(iVar25);
					iVar27 = func_139(iVar26);
					if (uVar15[iVar29] != iVar27)
					{
						Var1 = { func_159(iParam1, 14, uVar15[iVar29]) };
						unk_0x604B8808A1143997(sParam0, Var1.f_12, Var1.f_3, 0, iParam1);
					}
					iVar29++;
				}
			}
			else
			{
				Var1 = { func_159(iParam1, iVar0, uVar30[iVar28]) };
				if (((iVar28 == 2 || iVar28 == 0) && iVar46) || uVar30[iVar28] == -99)
				{
					Var1.f_3 = Global_99250.f_1754.f_539[Var1.f_5 /*65*/].f_13[iVar28];
					Var1.f_4 = Global_99250.f_1754.f_539[Var1.f_5 /*65*/][iVar28];
				}
				unk_0x3A7FAE2E325FDEEF(sParam0, func_151(iVar0), Var1.f_3, Var1.f_4, iParam1);
			}
		}
		iVar28++;
	}
}

int func_413(int iParam0)
{
	if (unk_0x398F615441F52A47())
	{
		if ((unk_0x3EAC9995EC220C5A() - Global_28) > iParam0)
		{
			Global_27 = unk_0x3EAC9995EC220C5A();
		}
		Global_28 = unk_0x3EAC9995EC220C5A();
		if ((unk_0x3EAC9995EC220C5A() - Global_27) > iParam0)
		{
			if (func_414())
			{
				Global_27 = unk_0x3EAC9995EC220C5A();
				return 1;
			}
		}
	}
	return 0;
}

int func_414()
{
	if (unk_0x4F297F09162EFB5D())
	{
		return 0;
	}
	if (unk_0x618071F6827C232E(0, 18) || unk_0x618071F6827C232E(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_415(int iParam0, struct<3> Param1, float fParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_16(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0x8BE5D4DC1A953832(Param1, &fVar1, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0x0B5F372F57E469AC(iParam0, Param1, 1, 0, 0, iParam6);
		unk_0x2DA164E80FDEE7F2(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_416(char* sParam0, bool bParam1)
{
	func_355(bParam1);
	unk_0x3C0CECAD08F71003(sParam0, 8);
}

void func_417()
{
	if (func_459() == 1 && iLocal_357 == 0)
	{
		func_420();
	}
	else
	{
		func_419();
		func_418();
		iLocal_568 = 1;
	}
}

void func_418()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (func_17(Local_83.f_35[1]))
	{
		iLocal_632 = Local_83.f_35[1];
		Local_83.f_35[1] = 0;
		func_304(iLocal_632, 0);
		Var0 = { unk_0xAF99169F0F5AE41D(iLocal_632, 1) };
		if (((Var0.f_0 < (Local_212.f_0 - 0.01f) || Var0.f_0 > (Local_212.f_0 + 0.01f)) || Var0.f_1 < (Local_212.f_1 - 0.01f)) || Var0.f_1 > (Local_212.f_1 + 0.01f))
		{
			func_415(iLocal_632, Local_212, fLocal_251, 0, 1);
			unk_0xC1D3820702043A43(iLocal_632);
		}
	}
	else
	{
		iLocal_632 = unk_0x2EEA15C0C12C8CDE(joaat("tailgater"), Local_212, fLocal_251, 1, 1);
		func_304(iLocal_632, 0);
		unk_0x21500D3576611CDE(iLocal_632, 0);
		unk_0xE1BEFB80AC811E83(iLocal_632, "K1FFL0M");
		unk_0xEDB159E56B64D182(iLocal_632, iLocal_161, iLocal_161);
		unk_0xE141C6C0A9E4E7A5(iLocal_632, 0, 0);
		unk_0xC1D3820702043A43(iLocal_632);
	}
	if (func_17(Local_83.f_35[0]))
	{
		uLocal_616[0] = Local_83.f_35[0];
		Local_83.f_35[0] = 0;
		unk_0xF1040A0061DC97E5(uLocal_616[0], 1);
		Var3 = { unk_0xAF99169F0F5AE41D(iLocal_632, 1) };
		if (((Var3.f_0 < (Local_162[0 /*3*/] - 0.01f) || Var3.f_0 > (Local_162[0 /*3*/] + 0.01f)) || Var3.f_1 < (Local_162[0 /*3*/].f_1 - 0.01f)) || Var3.f_1 > (Local_162[0 /*3*/].f_1 + 0.01f))
		{
			func_415(uLocal_616[0], Local_162[0 /*3*/], fLocal_233[0], 0, 1);
			unk_0xC1D3820702043A43(uLocal_616[0]);
		}
	}
	else
	{
		uLocal_616[0] = unk_0x2EEA15C0C12C8CDE(joaat("landstalker"), Local_162[0 /*3*/], fLocal_233[0], 1, 1);
		unk_0xEDB159E56B64D182(uLocal_616[0], iLocal_161, iLocal_161);
		unk_0xE141C6C0A9E4E7A5(uLocal_616[0], 0, 0);
		unk_0xC1D3820702043A43(uLocal_616[0]);
		unk_0x21500D3576611CDE(uLocal_616[0], 0);
	}
	if (!unk_0x1F2158D615BC4B25(uLocal_580[0]))
	{
		uLocal_580[0] = unk_0x73B8FD017061F240(uLocal_616[0], 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
	}
	if (func_78(uLocal_580[0]))
	{
		func_112(uLocal_580[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		func_338(&uLocal_390, 5, uLocal_580[0], "EPSGUARD2", 0, 1);
	}
	if (!unk_0x1F2158D615BC4B25(uLocal_588[0]))
	{
		uLocal_588[0] = unk_0x73B8FD017061F240(uLocal_616[0], 26, joaat("s_m_m_highsec_01"), 0, 1, 1);
	}
	if (!unk_0x1F2158D615BC4B25(uLocal_570[0]))
	{
		uLocal_570[0] = unk_0x6665DCC708A346F3(26, joaat("s_m_m_highsec_01"), Local_184[0 /*3*/], fLocal_241[0], 1, 1);
	}
	if (!unk_0x1F2158D615BC4B25(uLocal_570[2]))
	{
		uLocal_570[2] = unk_0x6665DCC708A346F3(26, joaat("s_m_m_highsec_01"), Local_184[2 /*3*/], fLocal_241[2], 1, 1);
	}
}

void func_419()
{
	unk_0xE3E5A6B56C247E86(222, "Ep8Heli01");
	unk_0x1C18D36FD30A924E("Eps8EPED");
	unk_0x1C18D36FD30A924E("Eps8LS01");
	unk_0x6E2E777C1AD81C36("rcmepsilonism8");
	unk_0xC60576ADD1AECA45(joaat("s_m_m_highsec_01"));
	unk_0xC60576ADD1AECA45(joaat("a_m_y_epsilon_01"));
	unk_0xC60576ADD1AECA45(joaat("sentinel"));
	unk_0xC60576ADD1AECA45(joaat("maverick"));
	unk_0xC60576ADD1AECA45(joaat("landstalker"));
	unk_0xC60576ADD1AECA45(joaat("tailgater"));
	unk_0xC60576ADD1AECA45(joaat("p_ld_heist_bag_s_1"));
	unk_0x1C18D36FD30A924E("Eps8TRAFFIC01");
	unk_0x1C18D36FD30A924E("Eps8TRAFFIC02");
	unk_0x1C18D36FD30A924E("Eps8TRAFFIC03");
	unk_0x1C18D36FD30A924E("Eps8TRAFFIC04");
	unk_0x1C18D36FD30A924E("Eps8TRAFFIC05");
	unk_0x1C18D36FD30A924E("Eps8TRAFFIC06");
	unk_0xC60576ADD1AECA45(joaat("taxi"));
	unk_0xC60576ADD1AECA45(joaat("sadler"));
	unk_0xC60576ADD1AECA45(joaat("habanero"));
	unk_0xC60576ADD1AECA45(joaat("schafter2"));
	unk_0xC60576ADD1AECA45(joaat("rumpo"));
	unk_0x011CAFBB4767F059("helicopterhud", 0);
	unk_0xC8C54AFEF8609CEF("EPS8", 0);
	while (((!unk_0x77E40DD6F32BC674(0) || !unk_0x4A4B6FD54C499B7D(joaat("landstalker"))) || !unk_0x4A4B6FD54C499B7D(joaat("tailgater"))) || !unk_0x4A4B6FD54C499B7D(joaat("s_m_m_highsec_01")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Local_224 = { -281.6395f, -102.0944f, 45.8373f };
	Local_227 = { -409.0169f, -58.1734f, 43.6077f };
	Local_212 = { -697.3215f, 39.0406f, 42.86736f };
	fLocal_251 = -66.98854f;
	Local_206 = { -357.1071f, -91.7128f, 45.0982f };
	fLocal_250 = 8.7486f;
	Local_162[0 /*3*/] = { -686.5046f, 43.9098f, 42.2067f };
	Local_162[1 /*3*/] = { 188.3458f, 169.2785f, 104.3145f };
	Local_162[2 /*3*/] = { -410.1774f, -68.8325f, 42.4324f };
	Local_162[3 /*3*/] = { -656.588f, 56.539f, 42.719f };
	Local_162[4 /*3*/] = { 299.5176f, -11.642f, 76.1623f };
	Local_162[5 /*3*/] = { 175.4031f, 93.0495f, 87.8098f };
	Local_162[6 /*3*/] = { 257.4567f, 161.3084f, 103.6166f };
	fLocal_233[0] = 296.81f;
	fLocal_233[1] = 162.1519f;
	fLocal_233[2] = 317.5537f;
	fLocal_233[3] = 176.3863f;
	fLocal_233[4] = 157.9f;
	fLocal_233[5] = 340.5091f;
	fLocal_233[6] = 249.2435f;
	Local_184[0 /*3*/] = { -726.4555f, 33.33568f, 43.22695f };
	Local_184[1 /*3*/] = { 222.146f, 206.6046f, 104.4984f };
	Local_184[2 /*3*/] = { -666.5512f, 49.19759f, 42.07154f };
	Local_184[3 /*3*/] = { -379.9735f, -73.8836f, 44.6215f };
	Local_184[4 /*3*/] = { -378.7636f, -86.7811f, 44.6579f };
	Local_184[5 /*3*/] = { -374.7542f, -81.9368f, 44.6577f };
	Local_184[6 /*3*/] = { 248.7298f, 109.6775f, 101.4054f };
	fLocal_241[0] = -147.8099f;
	fLocal_241[1] = 129.6183f;
	fLocal_241[2] = -171.6803f;
	fLocal_241[3] = 340.8513f;
	fLocal_241[4] = 256.0816f;
	fLocal_241[5] = 251.5665f;
	fLocal_241[6] = 23.1111f;
	unk_0x5416146016E39BF7(joaat("landstalker"), 1);
	unk_0x5416146016E39BF7(joaat("sentinel"), 1);
	unk_0x5416146016E39BF7(joaat("sentinel2"), 1);
	unk_0x5416146016E39BF7(joaat("tailgater"), 1);
	unk_0xCC65E9319E34E0FE(joaat("a_f_y_epsilon_01"), 1);
	unk_0xCC65E9319E34E0FE(joaat("a_m_y_epsilon_01"), 1);
	unk_0xCC65E9319E34E0FE(joaat("a_m_y_epsilon_02"), 1);
	unk_0x4AAD01BBE039D160(0.5f);
	unk_0x6AABDED602B11FF1(-375.76f, -101.27f, 42.79f, -344.3f, -100.84f, 48.77f, 0, 1);
	func_338(&uLocal_390, 0, unk_0x77F050A399DB77ED(), "MICHAEL", 0, 1);
	func_336(51, 0, 0);
}

void func_420()
{
	func_424(-702.9905f, 37.0211f, 42.2136f, 292.7606f, 1, 0);
	func_423(0, 0);
	func_419();
	func_418();
	func_340();
	func_339();
	unk_0x0BA5964C07973FE9(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 100f, 1, 0, 0, 0);
	unk_0x0BA5964C07973FE9(-661.5685f, 45.5499f, 40.0669f, 20f, 1, 0, 0, 0);
	func_422(iLocal_632, -1, 1);
	func_335();
	func_334();
	unk_0x8793DE27084C2CBD(0);
	unk_0xABF261CA61470DE0(0, 1065353216);
	unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), true, 0);
	func_285("EPS8_05", 7500, 0);
	iLocal_358 = 1;
	unk_0x2084300F2D91A8E6("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 0);
	unk_0x3345CB85AB9EC035("EPS8_START");
	func_353(800, 0);
	func_421(1, 1, 1);
	iLocal_568 = 3;
}

void func_421(int iParam0, int iParam1, int iParam2)
{
	func_343(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0xABF261CA61470DE0(0f, 1065353216);
		unk_0x8793DE27084C2CBD(0f);
	}
	if (iParam1 == 1)
	{
		func_353(500, 0);
	}
}

void func_422(int iParam0, int iParam1, int iParam2)
{
	if (func_459() && func_341())
	{
		while (Global_91101 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xADD55DEFB7B8CB4F(0);
		if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				unk_0xA178BDB6167F2C05(unk_0x77F050A399DB77ED());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x1F2158D615BC4B25(iParam0))
				{
					if (unk_0x968EA16107097324(iParam0, 0))
					{
						if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iParam0, 0))
						{
							unk_0x213DEA03167527BC(unk_0x77F050A399DB77ED(), iParam0, iParam1);
							unk_0xABF261CA61470DE0(0f, 1065353216);
							unk_0x8793DE27084C2CBD(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), true, 0);
			}
		}
		unk_0xEF8B3F790037DC66();
		func_90(0);
	}
}

void func_423(int iParam0, bool bParam1)
{
	if (unk_0x398F615441F52A47())
	{
		if (!unk_0x8DD09BB8ACF9E623())
		{
			unk_0x16AA81661A0624FB(iParam0);
			if (bParam1)
			{
				while (!unk_0x2CC731F9E664299E())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
}

void func_424(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_459())
	{
		unk_0x2A1F1A3180086B2E(0);
		unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 2);
		unk_0xADD55DEFB7B8CB4F(1);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), false, 0);
		}
		Global_91102 = { Param0 };
		Global_91105 = fParam3;
		Global_91101 = 1;
		if (iParam4 == 1)
		{
			unk_0x573691DB812DC8AA(&(Global_91106.f_20), 14);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x573691DB812DC8AA(&(Global_91106.f_20), 24);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 24);
		}
		func_90(1);
	}
}

void func_425()
{
	float fVar0;
	var uVar1;
	struct<6> Var2;
	
	if ((((iLocal_568 == 3 || iLocal_568 == 4) || iLocal_568 == 5) || iLocal_568 == 6) || iLocal_568 == 7)
	{
		if (iLocal_312 == 1)
		{
			if (func_78(iLocal_596))
			{
				if ((!unk_0x5EE0E9E5B7A50C2A(iLocal_596, "rcmepsilonism8", "worship_enter", 3) && !unk_0x5EE0E9E5B7A50C2A(iLocal_596, "rcmepsilonism8", "worship_base", 3)) && !unk_0x5EE0E9E5B7A50C2A(iLocal_596, "rcmepsilonism8", "worship_idle_a", 3))
				{
					if (!unk_0x5EE0E9E5B7A50C2A(iLocal_596, "rcmepsilonism8", "worship_exit", 3))
					{
						iLocal_256 = 0;
						func_429();
						func_80();
					}
					else if (unk_0xB867D63FE49C1932("rcmepsilonism8", "worship_exit", "WalkInterruptible", &fVar0, &uVar1) && unk_0x91741EBC3EA7D505(iLocal_596, "rcmepsilonism8", "worship_exit") >= fVar0)
					{
						unk_0x7B3932B7F4D58411(iLocal_596, joaat("MotionState_Run"), 0, 0, 0);
						unk_0x112CD899A3BEE719(iLocal_596, 1);
						unk_0xE3BCB930B62CBDE5(iLocal_596, -355.739f, -181.6352f, 36.7355f, 2f, -1, 3f, 0, 1193033728);
						unk_0x9526D9575C237F2F(iLocal_596, 0);
						unk_0xA29D53AF339F4CD0(&iLocal_596);
						iLocal_256 = 0;
						func_429();
						func_80();
					}
					else if (unk_0x91741EBC3EA7D505(iLocal_596, "rcmepsilonism8", "worship_exit") >= 0.88f)
					{
						unk_0x7B3932B7F4D58411(iLocal_596, joaat("MotionState_Run"), 0, 0, 0);
						unk_0x112CD899A3BEE719(iLocal_596, 1);
						unk_0xE3BCB930B62CBDE5(iLocal_596, -355.739f, -181.6352f, 36.7355f, 2f, -1, 3f, 0, 1193033728);
						unk_0x9526D9575C237F2F(iLocal_596, 0);
						unk_0xA29D53AF339F4CD0(&iLocal_596);
						iLocal_256 = 0;
						func_429();
						func_80();
					}
				}
			}
		}
		if (iLocal_311 == 1)
		{
			Var2 = { func_294() };
			if (!unk_0x0AAC2160036975D9(&Var2))
			{
				if (unk_0x35D1CAD6ADAB6491(&Var2, "EPS8_ESC") || unk_0x35D1CAD6ADAB6491(&Var2, "EPS8_E1"))
				{
					func_427();
				}
			}
			if (unk_0x671C6C3F21245221(uLocal_309))
			{
				unk_0x8A817B41A6EAEFB5(iLocal_632, -8f, 1);
			}
		}
		if (!func_286() || !iLocal_353 == 1)
		{
			if (iLocal_311 == 1)
			{
				if (func_78(uLocal_570[5]))
				{
					unk_0x1C1DEC790FD4B052(uLocal_570[5]);
				}
				func_302(&uLocal_555, 0, 0);
				func_427();
				unk_0xBC8DA09A97430138(2);
				func_24(&iLocal_940);
				func_280(&uLocal_390, 6);
				func_280(&uLocal_390, 7);
				func_280(&uLocal_390, 4);
				func_338(&uLocal_390, 6, 0, "EPSGUARD4", 0, 1);
				func_338(&uLocal_390, 7, 0, "EPSGUARD8", 0, 1);
				func_338(&uLocal_390, 4, 0, "CRIS", 0, 1);
				func_426();
				func_11();
				if (func_78(iLocal_596))
				{
					unk_0x26A7668D061F96E7(iLocal_596, 1);
					unk_0x3BCCE991853357EE(iLocal_596, 1, 0);
					if (func_16(iLocal_615) && unk_0xE5FADE1166052251(iLocal_596, iLocal_615, 0))
					{
						unk_0x15E0B3143320FB58(iLocal_596, (iLocal_154 - iLocal_155));
						unk_0x1A8C6CC3CB0B507B(iLocal_596, (iLocal_156 + iLocal_157));
						unk_0x1706625EBCDDEBF9(iLocal_596, 324, 1);
						unk_0x1592B6D205958934(iLocal_596, joaat("weapon_advancedrifle"), -1, 0, 0);
						unk_0x9E040412E0CB7CD7(iLocal_596, joaat("weapon_advancedrifle"), joaat("component_at_ar_flsh"));
						unk_0x9E040412E0CB7CD7(iLocal_596, joaat("weapon_advancedrifle"), joaat("component_at_scope_small"));
						unk_0x9687CF9C13C1F6A1(iLocal_596, joaat("weapon_advancedrifle"), 1);
						unk_0x112CD899A3BEE719(iLocal_596, 1);
						unk_0x9CE864D319ECB37A(iLocal_596, 2);
						unk_0xFE974F3DCF4437D1(iLocal_596, 400f);
						unk_0x4891B9E8F90B8C2B(iLocal_596, 400f);
						unk_0x95E8CAE4F5D2FCB6(iLocal_596, 400f);
						unk_0xE0E77BB84096208B(iLocal_596, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0xB424F90D6E96BCF8(iLocal_596, 2, 1);
						unk_0xB424F90D6E96BCF8(iLocal_596, 3, 0);
						unk_0xFBE25F0677076CF9(iLocal_596, unk_0x77F050A399DB77ED(), 0, 16);
					}
				}
				unk_0x8077CFA266F19DC6(-651.3148f, 121.844f, 63.45312f, -650.0618f, 0.95496f, 35.75433f, 41.75f, 0, 1, 1);
				unk_0xD3EC3035DF6F9D74(5, 0);
				unk_0xD3EC3035DF6F9D74(3, 0);
				iLocal_256 = 0;
				if (!unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
				{
					unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), true, 0);
				}
				unk_0x8530DA8508D7A4B8(unk_0x77F050A399DB77ED());
				if (!unk_0x0B6E83A9A7ED3EBA(uLocal_570[5]))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(uLocal_597[0]))
					{
						if (unk_0xD8EEAAAE9301A49D(uLocal_597[0], uLocal_570[5]))
						{
							unk_0xE8EBCCA6A3BE542B(uLocal_597[0], 1, 1);
						}
					}
					if (!unk_0x0B6E83A9A7ED3EBA(uLocal_597[1]))
					{
						if (unk_0xD8EEAAAE9301A49D(uLocal_597[1], uLocal_570[5]))
						{
							unk_0xE8EBCCA6A3BE542B(uLocal_597[1], 1, 1);
						}
					}
					if (!unk_0x0B6E83A9A7ED3EBA(uLocal_597[2]))
					{
						if (unk_0xD8EEAAAE9301A49D(uLocal_597[2], uLocal_570[5]))
						{
							unk_0xE8EBCCA6A3BE542B(uLocal_597[2], 1, 1);
						}
					}
					if (!unk_0x0B6E83A9A7ED3EBA(uLocal_597[3]))
					{
						if (unk_0xD8EEAAAE9301A49D(uLocal_597[3], uLocal_570[5]))
						{
							unk_0xE8EBCCA6A3BE542B(uLocal_597[3], 1, 1);
						}
					}
				}
				iLocal_290 = unk_0x3EAC9995EC220C5A();
				unk_0xA1E3A2CCF985EE86();
				if (iLocal_336 == 0)
				{
					if (iLocal_333 == 0)
					{
						if (!unk_0x0B6E83A9A7ED3EBA(iLocal_632))
						{
							if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_632, 0))
							{
								if (iLocal_258 != iLocal_257)
								{
									if (iLocal_314 == 0)
									{
										func_285("EPS8_12", 7500, 0);
									}
									iLocal_335 = 1;
								}
							}
							else if ((iLocal_568 == 5 || iLocal_568 == 6) || iLocal_568 == 7)
							{
								func_285("EPS8_11", 7500, 0);
							}
						}
					}
					else if (iLocal_258 != iLocal_257)
					{
						if (iLocal_314 == 0)
						{
							func_285("EPS8_12", 7500, 0);
						}
						iLocal_335 = 1;
					}
				}
				else if (!unk_0xC3B073777B46C61A(iLocal_941))
				{
					iLocal_941 = unk_0xBAA49E1DC5584B87(uLocal_597[3]);
					unk_0x80553402FCEB9A9C(iLocal_941, 2);
					unk_0x61CD4A0BA23CE782(iLocal_941, fLocal_149);
					func_285("EPS8_21", 7500, 0);
				}
				if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_17192.f_382, 1))
				{
					unk_0x573691DB812DC8AA(&(Global_99250.f_17192.f_382), 1);
				}
				iLocal_568 = 8;
			}
		}
	}
}

void func_426()
{
	if (func_17(uLocal_616[0]))
	{
		unk_0x72B5F7B57899EB10(uLocal_616[0], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (func_17(uLocal_616[1]))
	{
		unk_0x72B5F7B57899EB10(uLocal_616[1], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (func_17(uLocal_616[2]))
	{
		unk_0x72B5F7B57899EB10(uLocal_616[2], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (func_17(uLocal_616[3]))
	{
		unk_0x72B5F7B57899EB10(uLocal_616[3], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (func_17(uLocal_616[4]))
	{
		unk_0x72B5F7B57899EB10(uLocal_616[4], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (func_17(uLocal_616[5]))
	{
		unk_0x72B5F7B57899EB10(uLocal_616[5], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (func_17(uLocal_616[6]))
	{
		unk_0x72B5F7B57899EB10(uLocal_616[6], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
}

void func_427()
{
	Global_14578 = 0;
	func_428();
}

void func_428()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
	}
}

void func_429()
{
	var uVar0;
	
	func_24(&iLocal_939);
	if (func_78(iLocal_596))
	{
		unk_0xB28207B96952D994(iLocal_596);
	}
	if (func_17(iLocal_615))
	{
		if (func_78(iLocal_578))
		{
			if (iLocal_313 == 0)
			{
				unk_0xB99FFA77B01C4714(iLocal_615, 1, 1, 0);
				if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
				{
					Local_209 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
				}
				iLocal_260 = unk_0xF2DB717A73826179((Local_209.f_2 + 10f));
				unk_0x2A6B9F9E71C479CF(&uVar0);
				unk_0x0A5F0471674CF679(0, iLocal_615, 0, 0, -582.5234f, -363.9155f, 498.4256f, 4, 200f, 2f, 130.0071f, 100, 30, -1082130432, 0);
				unk_0x0A5F0471674CF679(0, iLocal_615, 0, 0, -1352.705f, -2861.194f, 498.4256f, 4, 200f, 2f, 183.7912f, 100, 30, -1082130432, 0);
				unk_0x44642CB08FA1637E(uVar0);
				unk_0xB8A8FA4B28E9F423(iLocal_578, uVar0);
				unk_0xAAD288E877AC833D(&uVar0);
				unk_0x112CD899A3BEE719(iLocal_578, 1);
				iLocal_313 = 1;
			}
		}
	}
}

void func_430()
{
	if (iLocal_336 == 0)
	{
		if (iLocal_333 == 0)
		{
			if (unk_0x1F2158D615BC4B25(iLocal_632))
			{
				if (unk_0x0B6E83A9A7ED3EBA(iLocal_632))
				{
					if (iLocal_337 == 0)
					{
						iLocal_278 = unk_0x3EAC9995EC220C5A();
						iLocal_337 = 1;
					}
					else if (unk_0x3EAC9995EC220C5A() > iLocal_278 + 100)
					{
						if (unk_0xAB5BBCD9D3B6625D(iLocal_632))
						{
							sLocal_386 = "EPS8_19";
						}
						else
						{
							sLocal_386 = "EPS8_18";
						}
						iLocal_568 = 10;
					}
				}
				else
				{
					if (((unk_0x65CE087C4DFAA205(iLocal_632, 0, 5000) || unk_0x65CE087C4DFAA205(iLocal_632, 1, 20000)) || unk_0x65CE087C4DFAA205(iLocal_632, 2, 30000)) || unk_0x65CE087C4DFAA205(iLocal_632, 3, 60000))
					{
						sLocal_386 = "EPS8_19";
						iLocal_568 = 10;
					}
					if (!unk_0x968EA16107097324(iLocal_632, 0))
					{
						if (iLocal_337 == 0)
						{
							iLocal_278 = unk_0x3EAC9995EC220C5A();
							iLocal_337 = 1;
						}
						else if (unk_0x3EAC9995EC220C5A() > iLocal_278 + 100)
						{
							sLocal_386 = "EPS8_19";
							iLocal_568 = 10;
						}
					}
					if (iLocal_568 != 7)
					{
						if (iLocal_329 == 0)
						{
							if (!func_55(iLocal_632, unk_0x77F050A399DB77ED(), 150f))
							{
								if ((iLocal_299 != -1 && func_78(uLocal_570[iLocal_299])) && unk_0xE5FADE1166052251(uLocal_570[iLocal_299], iLocal_632, 0))
								{
									func_285("EPS8_25", 7500, 0);
								}
								else
								{
									func_285("EPS8_16", 7500, 0);
								}
								iLocal_329 = 1;
							}
						}
						else if (!func_79("EPS8_25", 0, 0) && !func_79("EPS8_16", 0, 0))
						{
							if (!func_55(iLocal_632, unk_0x77F050A399DB77ED(), 230f))
							{
								if ((iLocal_299 != -1 && func_78(uLocal_570[iLocal_299])) && unk_0xE5FADE1166052251(uLocal_570[iLocal_299], iLocal_632, 0))
								{
									sLocal_386 = "EPS8_26";
								}
								else
								{
									sLocal_386 = "EPS8_17";
								}
								iLocal_568 = 10;
							}
							else if (func_55(iLocal_632, unk_0x77F050A399DB77ED(), 100f))
							{
							}
						}
					}
				}
			}
		}
		else if (unk_0x1F2158D615BC4B25(iLocal_615))
		{
			if (unk_0x0B6E83A9A7ED3EBA(iLocal_615))
			{
				sLocal_386 = "EPS8_18";
				iLocal_568 = 10;
			}
			else
			{
				if (!unk_0x968EA16107097324(iLocal_615, 0))
				{
					sLocal_386 = "EPS8_18";
					iLocal_568 = 10;
				}
				if (iLocal_568 != 7)
				{
					if (iLocal_329 == 0)
					{
						if (!func_55(iLocal_615, unk_0x77F050A399DB77ED(), 150f))
						{
							func_285("EPS8_16", 7500, 0);
							iLocal_329 = 1;
						}
					}
					else if (!func_55(iLocal_615, unk_0x77F050A399DB77ED(), 230f))
					{
						sLocal_386 = "EPS8_17";
						iLocal_568 = 10;
					}
					else if (func_55(iLocal_615, unk_0x77F050A399DB77ED(), 100f))
					{
						iLocal_329 = 0;
					}
				}
			}
		}
	}
}

void func_431(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	
	if (Global_69571 != 6)
	{
		if (Global_69573 == -1)
		{
			if (func_442(1, Param0))
			{
				if (Global_69574 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_69573 = unk_0x3EAC9995EC220C5A();
					Local_22 = { unk_0xB2CC3FC5A0AABC98(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + unk_0x5CB0A4A4240C1B6A());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_442(0, Param0))
			{
				Global_69573 = (unk_0x3EAC9995EC220C5A() - 9000);
			}
			unk_0xCA3D1FCD234B8E0B(7);
			unk_0xCA3D1FCD234B8E0B(6);
			unk_0xCA3D1FCD234B8E0B(8);
			unk_0xCA3D1FCD234B8E0B(9);
			iVar1 = (unk_0x3EAC9995EC220C5A() - Global_69573);
			if (iVar1 < 9000 && !unk_0x2CC731F9E664299E())
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
				switch (Global_69571)
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
				unk_0x015513B8B0CE59A3(82, 66);
				unk_0x7C2084C68CEC316C(1);
				unk_0xB81FA419A7DF8808(2);
				iVar12 = func_69();
				if (Global_69574 == 1 && Global_69572 == 62)
				{
					iVar12 = Global_99250.f_1754.f_539.f_3550;
				}
				switch (iVar12)
				{
					case 0:
						unk_0xF63BA5AC6A181C40(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						unk_0xF63BA5AC6A181C40(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						unk_0xF63BA5AC6A181C40(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				unk_0x3F570C434DAE03B3(iVar8, iVar9, iVar10, iVar2);
				unk_0x8D63B6D65BC63723();
				Var4 = { func_433(Global_69572, Global_69574, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				unk_0xCE77A121760CFAD9(fVar6, fVar7, 0f, 0.01f);
				unk_0x812DA59718C7CF24(0.67f, 0.67f);
				if (!unk_0xD151440E25EB1559() && !unk_0x2AAF87B8C5E088D7())
				{
					fLocal_26 = 0.14f;
				}
				else
				{
					fLocal_26 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_432(&Var4) > fLocal_26)
					{
						if (unk_0x8828A5BB16037E2A(15))
						{
							unk_0xD994B5E39F03448F(15, Local_22.f_0, (Local_22.f_1 + fLocal_25));
							Global_69576 = 1;
						}
					}
				}
				unk_0x978803CE12B5FCBA(&Var4);
				unk_0x1AC4FC30A9B7577A(fVar6, fVar7, 0);
				unk_0xA514BB978EE93FAD();
				if (Global_69575 == 1)
				{
					func_240();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_240();
				fLocal_21 = 0f;
			}
		}
	}
}

float func_432(var uParam0)
{
	unk_0x970219AE613F6E2B(uParam0);
	return unk_0xE02D086D4AE06321(1);
}

struct<2> func_433(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_441(iParam0) };
			break;
		
		case 7:
			Var0 = { func_226(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_440(iParam2) };
					break;
				
				case 8:
					Var0 = { func_439(iParam2) };
					break;
				
				case 7:
					Var0 = { func_438(iParam2) };
					break;
				
				case 10:
					Var0 = { func_437(iParam2) };
					break;
				
				case 5:
					Var0 = { func_436(iParam2) };
					break;
				
				case 4:
					Var0 = { func_435(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_434(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_434(int iParam0)
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

struct<2> func_435(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0AAC2160036975D9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_436(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0AAC2160036975D9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_437(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0AAC2160036975D9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_438(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0AAC2160036975D9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_439(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0AAC2160036975D9(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_440(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0AAC2160036975D9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_441(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_82227[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_99250.f_7703.f_99.f_205[7])
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

int func_442(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_444(0) || Global_69586) || Global_69575 == 1) || !unk_0x398F615441F52A47())
	{
		return 0;
	}
	switch (Global_69571)
	{
		case 0:
			if (unk_0x35D1CAD6ADAB6491(&uParam1, "NONE") || unk_0x0AAC2160036975D9(&uParam1))
			{
				Global_69571 = 3;
			}
			else
			{
				Global_69571 = 1;
			}
			break;
		
		case 1:
			if (unk_0x575DA8209967217A())
			{
				Global_69571 = 2;
			}
			break;
		
		case 2:
			if (unk_0x7B8549A4F94FA4C8())
			{
				Global_69571 = 4;
				return 1;
			}
			else if (!unk_0x8F97015FD3089C6B())
			{
				Global_69571 = 3;
			}
			break;
		
		case 3:
			if (unk_0x7B8549A4F94FA4C8())
			{
			}
			else
			{
				Global_69571 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x7B8549A4F94FA4C8())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_69571 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x7B8549A4F94FA4C8() || func_9(0)) || func_443(1))
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

bool func_443(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_444(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_445(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_445(int iParam0)
{
	return func_446(iParam0, Global_35700);
}

int func_446(int iParam0, int iParam1)
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

void func_447(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_448(iVar0, bParam0);
		iVar0++;
	}
}

void func_448(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_452(iParam0, 2, 1))
		{
			func_451(iParam0, 2, 1);
		}
	}
	else if (func_452(iParam0, 2, 1))
	{
		func_449(iParam0, 2, 1);
	}
}

void func_449(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xA5F70A8B83BDFA49(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_86() == 0)
		{
			uVar0 = func_146(func_450(iParam0), -1, 0);
			unk_0xA5F70A8B83BDFA49(&uVar0, iParam1);
			func_144(func_450(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_668[iParam0]), iParam1);
	}
}

int func_450(int iParam0)
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
			return 3664;
			break;
		
		default:
			break;
	}
	return 3741;
}

void func_451(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x573691DB812DC8AA(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_86() == 0)
		{
			uVar0 = func_146(func_450(iParam0), -1, 0);
			unk_0x573691DB812DC8AA(&uVar0, iParam1);
			func_144(func_450(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x573691DB812DC8AA(&(Global_99250.f_668[iParam0]), iParam1);
	}
}

int func_452(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_86() == 0)
		{
			return unk_0xB56FEBC510E7E9DE(func_146(func_450(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_453(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_16(uParam0->f_28[iVar0]))
		{
			unk_0x498A6382FA0B8833(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_16(uParam0->f_35[iVar0]))
		{
			unk_0x498A6382FA0B8833(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_16(uParam0->f_41[iVar0]))
		{
			unk_0x498A6382FA0B8833(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		unk_0x498A6382FA0B8833(unk_0x77F050A399DB77ED(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), iParam1);
		if (bParam2)
		{
			unk_0x9687CF9C13C1F6A1(unk_0x77F050A399DB77ED(), joaat("weapon_unarmed"), 1);
		}
	}
}

var func_454()
{
	return unk_0x2277155D92E898D2(-722.7994f, 14.8417f, 37.4501f, -661.751f, 56.4227f, 42.8989f, 0, 1, 1, 1);
}

int func_455(var uParam0)
{
	int iVar0[3];
	int iVar4;
	
	iVar0[0] = joaat("landstalker");
	iVar0[1] = joaat("tailgater");
	iVar0[2] = joaat("s_m_m_highsec_01");
	switch (iLocal_79)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -670.9681f, 53.53062f, 40.04339f };
			uParam0->f_17[1 /*3*/] = { -723.7632f, 34.0545f, 46.97017f };
			uParam0->f_24 = 19.75f;
			uParam0->f_27 = 1;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_8_RCM", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				unk_0xC60576ADD1AECA45(iVar0[iVar4]);
				iVar4++;
			}
			iLocal_79 = 1;
			break;
		
		case 1:
			if (!func_458(&iVar0))
			{
				return 0;
			}
			iLocal_79 = 2;
			break;
		
		case 2:
			func_457(&(uParam0->f_35[0]), iVar0[0], -686.5046f, 43.9098f, 42.2067f, 296.81f);
			unk_0xF1040A0061DC97E5(uParam0->f_35[0], 3);
			unk_0xEDB159E56B64D182(uParam0->f_35[0], 157, 157);
			unk_0xE141C6C0A9E4E7A5(uParam0->f_35[0], 0, 0);
			unk_0x99A55AFB40674D1C(uParam0->f_35[0], 1);
			unk_0x21500D3576611CDE(uParam0->f_35[0], 0);
			func_457(&(uParam0->f_35[1]), iVar0[1], -697.3215f, 39.0406f, 42.86736f, -66.98854f);
			unk_0xF1040A0061DC97E5(uParam0->f_35[1], 3);
			unk_0xE1BEFB80AC811E83(uParam0->f_35[1], "K1FFL0M");
			unk_0xEDB159E56B64D182(uParam0->f_35[1], 157, 157);
			unk_0xE141C6C0A9E4E7A5(uParam0->f_35[1], 0, 0);
			unk_0x21500D3576611CDE(uParam0->f_35[1], 0);
			func_456(&(uParam0->f_28[0]), iVar0[2], -726.4555f, 33.33568f, 43.22695f, -147.8099f, 26);
			unk_0x1592B6D205958934(uParam0->f_28[0], joaat("weapon_smg"), -1, 0, 0);
			unk_0xD0C8DD55C652567F(uParam0->f_28[0], unk_0x77F050A399DB77ED(), -1, 0, 2);
			unk_0xD0F4416F78CE5A1A(uParam0->f_28[0], 2);
			unk_0xF424981F4680E6B2(uParam0->f_28[0], "WORLD_HUMAN_GUARD_STAND", 0, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[0], 0, 1, 1, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[0], 3, 0, 1, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[0], 4, 0, 1, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[0], 8, 1, 0, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[0], 11, 1, 0, 0);
			func_456(&(uParam0->f_28[1]), iVar0[2], -666.5512f, 49.19759f, 42.07154f, -171.6803f, 26);
			unk_0x1592B6D205958934(uParam0->f_28[1], joaat("weapon_smg"), -1, 0, 0);
			unk_0xD0C8DD55C652567F(uParam0->f_28[1], unk_0x77F050A399DB77ED(), -1, 0, 2);
			unk_0xD0F4416F78CE5A1A(uParam0->f_28[1], 2);
			unk_0xF424981F4680E6B2(uParam0->f_28[1], "WORLD_HUMAN_GUARD_STAND", 0, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[1], 0, 0, 0, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[1], 3, 0, 1, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[1], 4, 0, 1, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[1], 8, 0, 0, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[1], 11, 0, 0, 0);
			func_456(&(uParam0->f_28[2]), iVar0[2], -690f, 42f, 42f, 0f, 26);
			func_456(&(uParam0->f_28[3]), iVar0[2], -690f, 42f, 43f, 0f, 26);
			unk_0x213DEA03167527BC(uParam0->f_28[2], uParam0->f_35[0], -1);
			unk_0x213DEA03167527BC(uParam0->f_28[3], uParam0->f_35[0], 0);
			unk_0x1592B6D205958934(uParam0->f_28[2], joaat("weapon_combatpistol"), -1, 0, 0);
			unk_0x1592B6D205958934(uParam0->f_28[3], joaat("weapon_microsmg"), -1, 0, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[2], 0, 0, 1, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[2], 3, 0, 1, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[2], 4, 0, 1, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[2], 8, 0, 0, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[2], 11, 0, 0, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[3], 0, 1, 0, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[3], 3, 0, 2, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[3], 4, 0, 2, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[3], 8, 1, 0, 0);
			unk_0x5F2AACB0122E1554(uParam0->f_28[3], 11, 0, 1, 0);
			unk_0x72FAE653AFC04E97("gang", &uLocal_82);
			unk_0x054E434B0AECBDA6(uParam0->f_28[0], uLocal_82);
			unk_0x054E434B0AECBDA6(uParam0->f_28[1], uLocal_82);
			unk_0x054E434B0AECBDA6(uParam0->f_28[2], uLocal_82);
			unk_0x054E434B0AECBDA6(uParam0->f_28[3], uLocal_82);
			unk_0x8141D29EBE3F3046(uParam0->f_28[0], 0);
			unk_0x8141D29EBE3F3046(uParam0->f_28[1], 0);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				unk_0xFB4F6722A032A0F0(iVar0[iVar4]);
				iVar4++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_456(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6)
{
	func_18(uParam0);
	*uParam0 = unk_0x6665DCC708A346F3(iParam6, uParam1, Param2, fParam5, 0, 0);
}

void func_457(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_15(uParam0);
	*uParam0 = unk_0x2EEA15C0C12C8CDE(uParam1, Param2, fParam5, 1, 1);
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		unk_0xC1D3820702043A43(*uParam0);
		unk_0x9F48F299B333353E(*uParam0, 1000);
	}
}

int func_458(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!unk_0x4A4B6FD54C499B7D((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_459()
{
	if (Global_91106 == 10 || Global_91106 == 9)
	{
		return 1;
	}
	return 0;
}

void func_460()
{
	func_407();
	if (func_473())
	{
	}
	func_465(&Local_83, 1, 0, 0);
	func_302(&uLocal_555, 0, 0);
	func_288();
	func_464();
	func_447(0);
	unk_0xBC8DA09A97430138(0);
	if (unk_0x671C6C3F21245221(uLocal_309))
	{
		unk_0x8A817B41A6EAEFB5(iLocal_632, -8f, 1);
	}
	if (unk_0x1F2158D615BC4B25(iLocal_578))
	{
		if (iLocal_312 == 1)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_578))
			{
				unk_0x112CD899A3BEE719(iLocal_578, 1);
			}
		}
		func_13(&iLocal_578, 1, 0, 1);
	}
	if (func_16(iLocal_632))
	{
		if (iLocal_330 == 1)
		{
			unk_0x42FCD0B0BBF90976(iLocal_632, 5, 0);
			unk_0xF1040A0061DC97E5(iLocal_632, 1);
			iLocal_330 = 0;
		}
	}
	func_13(&iLocal_579, 1, 0, 1);
	if (func_16(iLocal_615))
	{
		unk_0xF1040A0061DC97E5(iLocal_615, 1);
	}
	func_12(&iLocal_615);
	if (unk_0x06F36936289C5EC8(uLocal_608))
	{
		unk_0x12A448112D057EB4(uLocal_608, 0);
		unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
		unk_0xFE65076A204F9258(uLocal_608, 0);
		if (unk_0x06F36936289C5EC8(uLocal_609))
		{
			unk_0x12A448112D057EB4(uLocal_609, 0);
			unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
			unk_0xFE65076A204F9258(uLocal_609, 0);
		}
		unk_0x1B40500A7841D6AB(1);
		unk_0x488AF65D7EDB6B4A(1);
		unk_0xABF261CA61470DE0(0, 1065353216);
		unk_0x8793DE27084C2CBD(0);
	}
	unk_0xBA6758C5B23DAE05(1);
	iLocal_256 = 0;
	if (func_17(uLocal_616[0]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[0], 0);
		unk_0x99A55AFB40674D1C(uLocal_616[0], 1);
	}
	if (func_17(uLocal_616[1]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[1], 0);
		unk_0x99A55AFB40674D1C(uLocal_616[1], 1);
	}
	if (func_17(uLocal_616[2]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[2], 0);
		unk_0x99A55AFB40674D1C(uLocal_616[2], 1);
	}
	if (func_17(uLocal_616[3]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[3], 0);
		unk_0x99A55AFB40674D1C(uLocal_616[3], 1);
	}
	if (func_17(uLocal_616[4]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[4], 0);
		unk_0x99A55AFB40674D1C(uLocal_616[4], 1);
	}
	if (func_17(uLocal_616[5]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[5], 0);
		unk_0x99A55AFB40674D1C(uLocal_616[5], 1);
	}
	if (func_17(uLocal_616[6]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_616[6], 0);
		unk_0x99A55AFB40674D1C(uLocal_616[6], 1);
	}
	if (func_17(uLocal_624[0]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_624[0], 0);
		unk_0x99A55AFB40674D1C(uLocal_624[0], 1);
	}
	if (func_17(uLocal_624[1]))
	{
		unk_0x41DB6F5436D4B4A9(uLocal_624[1], 0);
		unk_0x99A55AFB40674D1C(uLocal_624[1], 1);
	}
	if (unk_0x0CB2A341EC5513A7("EPSILONISM_08_CHOPPER"))
	{
		unk_0xE0DB271DC0AEA972("EPSILONISM_08_CHOPPER");
	}
	unk_0x54575489AE798654(uLocal_945, 0);
	unk_0x54575489AE798654(uLocal_946, 0);
	unk_0x54575489AE798654(uLocal_947, 0);
	unk_0xFB4F6722A032A0F0(joaat("s_m_m_highsec_01"));
	unk_0xFB4F6722A032A0F0(joaat("sentinel"));
	unk_0xFB4F6722A032A0F0(joaat("maverick"));
	unk_0xFB4F6722A032A0F0(joaat("landstalker"));
	unk_0xFB4F6722A032A0F0(joaat("a_m_y_epsilon_01"));
	unk_0xD5A53B898943F331("rcmepsilonism8");
	unk_0x5416146016E39BF7(joaat("landstalker"), 0);
	unk_0x5416146016E39BF7(joaat("sentinel"), 0);
	unk_0x5416146016E39BF7(joaat("sentinel2"), 0);
	unk_0x5416146016E39BF7(joaat("tailgater"), 0);
	unk_0xCC65E9319E34E0FE(joaat("a_f_y_epsilon_01"), 0);
	unk_0xCC65E9319E34E0FE(joaat("a_m_y_epsilon_01"), 0);
	unk_0xCC65E9319E34E0FE(joaat("a_m_y_epsilon_02"), 0);
	unk_0xD3EC3035DF6F9D74(12, 0);
	unk_0xD3EC3035DF6F9D74(2, 0);
	unk_0xD3EC3035DF6F9D74(5, 0);
	unk_0xD3EC3035DF6F9D74(3, 0);
	unk_0x4AAD01BBE039D160(1f);
	if (iLocal_327 == 1)
	{
		func_5(0);
		if (iLocal_311 == 1)
		{
			func_293();
			if (iLocal_359 == 0)
			{
				unk_0x8530DA8508D7A4B8(unk_0x77F050A399DB77ED());
				if (iLocal_371 == 0)
				{
					func_280(&uLocal_390, 4);
					func_338(&uLocal_390, 4, 0, "CRIS", 0, 1);
					func_461(-632277372, 0, 1, 51, 4, 6000, 6000, -1, -1, 0, -1, 0);
					iLocal_371 = 1;
				}
			}
			if (iLocal_336 == 0)
			{
				if (func_17(iLocal_632))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(uLocal_597[0]))
					{
						if (unk_0xD8EEAAAE9301A49D(uLocal_597[0], iLocal_632))
						{
							iLocal_255 = (iLocal_255 + iLocal_151);
						}
					}
					if (!unk_0x0B6E83A9A7ED3EBA(uLocal_597[1]))
					{
						if (unk_0xD8EEAAAE9301A49D(uLocal_597[1], iLocal_632))
						{
							iLocal_255 = (iLocal_255 + iLocal_151);
						}
					}
					if (!unk_0x0B6E83A9A7ED3EBA(uLocal_597[2]))
					{
						if (unk_0xD8EEAAAE9301A49D(uLocal_597[2], iLocal_632))
						{
							iLocal_255 = (iLocal_255 + iLocal_151);
						}
					}
					if (!unk_0x0B6E83A9A7ED3EBA(uLocal_597[3]))
					{
						if (unk_0xD8EEAAAE9301A49D(uLocal_597[3], iLocal_632))
						{
							iLocal_255 = (iLocal_255 + iLocal_151);
						}
					}
				}
			}
			if (iLocal_255 != 0)
			{
				func_25(0, 1, iLocal_255, 0, 0);
			}
			func_273(754);
		}
		else if (iLocal_334 == 1)
		{
			if (iLocal_330 == 1)
			{
				unk_0x42FCD0B0BBF90976(iLocal_632, 5, 0);
				unk_0xF1040A0061DC97E5(iLocal_632, 1);
				iLocal_330 = 0;
			}
		}
		else if (iLocal_359 == 0)
		{
			unk_0x8530DA8508D7A4B8(unk_0x77F050A399DB77ED());
		}
	}
	unk_0x2084300F2D91A8E6("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 1);
	unk_0x2F798BA2098FDADE();
}

int func_461(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_83(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xB56FEBC510E7E9DE(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_99250.f_6306.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_99250.f_6306.f_911 == Var0.f_0)
		{
			Global_99250.f_6306.f_911 = -1;
		}
		Var0.f_3 = func_463(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x3EAC9995EC220C5A() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0xA5F70A8B83BDFA49(&(Var0.f_1), 1);
		unk_0xA5F70A8B83BDFA49(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0x573691DB812DC8AA(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0x573691DB812DC8AA(&(Var0.f_1), 10);
		}
		Global_99250.f_6306[Global_99250.f_6306.f_136 /*15*/] = { Var0 };
		Global_99250.f_6306.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0xB56FEBC510E7E9DE(iParam2, iVar15))
			{
				func_462(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_462(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_99250.f_6306.f_136)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_6306[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_99250.f_6306[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_99250.f_6306[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_99250.f_6306.f_764)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_6306.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_99250.f_6306.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_99250.f_6306.f_919[iParam0] = iVar1;
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_464()
{
	if (unk_0x0CB2A341EC5513A7("EPSILONISM_08_NON_COMPLIANCE"))
	{
		unk_0xE0DB271DC0AEA972("EPSILONISM_08_NON_COMPLIANCE");
	}
}

void func_465(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_471(uParam0, iParam1);
	func_469(uParam0, bParam2);
	func_466(uParam0, bParam3);
}

void func_466(var uParam0, bool bParam1)
{
	func_467(&(uParam0->f_41), bParam1);
}

void func_467(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_14(uParam0[iVar0]);
		}
		else
		{
			func_468(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_468(var uParam0, bool bParam1)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (unk_0x85C2713D803F1A4A(*uParam0))
		{
			unk_0xE8EBCCA6A3BE542B(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xFF0E2D994E7D2E94(uParam0);
		}
		else
		{
			unk_0x1AA3A9A73DFF392F(*uParam0);
		}
	}
}

void func_469(var uParam0, bool bParam1)
{
	func_470(&(uParam0->f_35), bParam1);
}

void func_470(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_15(uParam0[iVar0]);
		}
		else
		{
			func_12(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_471(var uParam0, int iParam1)
{
	func_472(&(uParam0->f_28), iParam1);
}

void func_472(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_18(uParam0[iVar0]);
		}
		else
		{
			func_13(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

int func_473()
{
	int iVar0;
	
	iVar0 = func_271();
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_98337[iVar0 /*10*/].f_4)
	{
		return 0;
	}
	Global_98337[iVar0 /*10*/].f_4 = 0;
	unk_0x9516B90C3EE9BEBE(0, 1);
	unk_0x9516B90C3EE9BEBE(3, 1);
	unk_0x9516B90C3EE9BEBE(2, 1);
	if (!func_83(0))
	{
		if (Global_98337[iVar0 /*10*/].f_5 && Global_98337[iVar0 /*10*/].f_6)
		{
			Global_98337[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_98337[iVar0 /*10*/].f_6 && !Global_98337[iVar0 /*10*/].f_5)
		{
			Global_98337[iVar0 /*10*/].f_6 = 1;
		}
	}
	return 1;
}

void func_474(bool bParam0)
{
	int iVar0;
	
	func_490();
	if (!func_489())
	{
		iVar0 = func_271();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_98337[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_98337[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_98337[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_85614 == Global_91143)
		{
			Global_99250.f_17192[iVar0 /*6*/].f_4++;
		}
		Global_85614 = Global_91143;
		if (bParam0)
		{
			func_230(iVar0, 1, 0);
			func_475(unk_0x664B47C58CE8A0A4(), iVar0);
		}
		else
		{
			if (Global_98337[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				func_241(&(Global_98337[iVar0 /*10*/].f_9));
			}
			func_229(iVar0, 1, 1, 0);
		}
		Global_98337[iVar0 /*10*/].f_6 = 1;
	}
}

void func_475(char* sParam0, int iParam1)
{
	if (Global_91106 != 12)
	{
		if (func_476(sParam0, 6, iParam1))
		{
			Global_91106.f_1 = iParam1;
		}
	}
}

int func_476(char* sParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<32> Var1;
	int iVar33;
	
	func_94();
	func_488();
	Global_91106 = 0;
	StringCopy(&(Global_91106.f_3), sParam0, 32);
	Global_91106.f_11 = iParam1;
	unk_0x69A565726CF5A560(1);
	unk_0xF0B7E485D471876E(0);
	unk_0x49206398F0E9D073(0);
	func_6(1);
	func_5(1);
	func_485(0);
	func_484(1);
	unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 9);
	unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 6);
	unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 20);
	unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 21);
	unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 5);
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				uVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
				if (unk_0x398B253A9754B132(uVar0))
				{
					unk_0x573691DB812DC8AA(&(Global_91106.f_20), 5);
				}
			}
		}
	}
	unk_0x4ACCE973F9C3CA3B(1);
	unk_0xA1E3A2CCF985EE86();
	func_483(0);
	func_97(1);
	Global_91106.f_2 = Global_91143;
	if (func_482())
	{
		if (func_481())
		{
			if (Global_91143 >= func_478())
			{
				if (!unk_0xB56FEBC510E7E9DE(Global_82227[iParam2 /*34*/].f_15, 16))
				{
					if (Global_99250.f_7703.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_85615 = 1;
					}
				}
			}
		}
		else if (Global_91106.f_11 == 6)
		{
			func_232(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_99250.f_17192[iParam2 /*6*/].f_4 >= 2)
				{
					Global_85615 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_477(unk_0x664B47C58CE8A0A4());
			if (iVar33 > -1)
			{
				if (Global_99250.f_29439.f_4[iVar33] >= 2)
				{
					Global_85615 = 1;
				}
			}
		}
	}
	return 1;
}

int func_477(char* sParam0)
{
	if (unk_0x35D1CAD6ADAB6491("BailBond1", uParam0))
	{
		return 0;
	}
	else if (unk_0x35D1CAD6ADAB6491("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x35D1CAD6ADAB6491("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x35D1CAD6ADAB6491("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

int func_478()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_479(&(Global_91106.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_479(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x39BD4614CF899227(uParam0);
	iVar1 = func_480(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_480(int iParam0, bool bParam1)
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

int func_481()
{
	if ((((Global_91106.f_11 == 0 || Global_91106.f_11 == 1) || Global_91106.f_11 == 2) || Global_91106.f_11 == 3) || Global_91106.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_482()
{
	if ((((Global_91106.f_11 == 0 || Global_91106.f_11 == 1) || Global_91106.f_11 == 2) || Global_91106.f_11 == 6) || Global_91106.f_11 == 3)
	{
		return 1;
	}
	if (Global_91106.f_11 == 5)
	{
		if (func_477(&(Global_91106.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_483(int iParam0)
{
	unk_0x1B40500A7841D6AB(iParam0);
	unk_0x488AF65D7EDB6B4A(iParam0);
}

void func_484(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8AD31F9246CE7ADF();
		unk_0x573691DB812DC8AA(&(Global_91106.f_20), 3);
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_91106.f_20, 3))
	{
		unk_0x7A72DD566E92DC37();
		unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 3);
	}
}

void func_485(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_91106.f_20, 4))
		{
			func_487();
			unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 4);
		}
	}
	else
	{
		func_486();
		unk_0x573691DB812DC8AA(&(Global_91106.f_20), 4);
	}
}

void func_486()
{
	Global_17118.f_5 = 1;
}

void func_487()
{
	Global_17118.f_5 = 0;
}

void func_488()
{
	Global_85615 = 0;
	Global_85616 = 0;
}

int func_489()
{
	if (((Global_91106 == 13 || Global_91106 == 10) || Global_91106 == 11) || Global_91106 == 12)
	{
		return 0;
	}
	return 1;
}

void func_490()
{
	Global_91141 = 1;
	if (unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1))
	{
		if (unk_0x0AAC2160036975D9(&Global_69549))
		{
			switch (func_69())
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
	else if (!unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x0AAC2160036975D9(&Global_69549))
		{
			switch (func_69())
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
		unk_0x573691DB812DC8AA(&(Global_91106.f_20), 25);
	}
}

void func_491(char* sParam0)
{
	if (!unk_0x0AAC2160036975D9(sParam0))
	{
	}
}

void func_492(var uParam0)
{
	func_493(&(uParam0->f_28));
	func_493(&(uParam0->f_35));
	func_493(&(uParam0->f_41));
}

void func_493(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x1F2158D615BC4B25((*uParam0)[iVar0]))
		{
			unk_0x8D429A827A931AC9((*uParam0)[iVar0], 0, 1);
		}
		iVar0++;
	}
}

int func_494(int iParam0)
{
	if (!func_71(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

