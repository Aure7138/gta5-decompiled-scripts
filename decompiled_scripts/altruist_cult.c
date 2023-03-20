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
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<3> Local_51[16];
	float fLocal_100[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_117 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	struct<3> Local_123 = { 0, 0, 0 } ;
	struct<3> Local_126 = { 0, 0, 0 } ;
	float fLocal_129 = 0f;
	struct<3> Local_130 = { 0, 0, 0 } ;
	struct<3> Local_133 = { 0, 0, 0 } ;
	float fLocal_136 = 0f;
	struct<3> Local_137 = { 0, 0, 0 } ;
	struct<3> Local_140 = { 0, 0, 0 } ;
	float fLocal_143 = 0f;
	struct<3> Local_144 = { 0, 0, 0 } ;
	struct<3> Local_147 = { 0, 0, 0 } ;
	float fLocal_150 = 0f;
	struct<3> Local_151 = { 0, 0, 0 } ;
	struct<3> Local_154 = { 0, 0, 0 } ;
	float fLocal_157 = 0f;
	struct<3> Local_158 = { 0, 0, 0 } ;
	struct<3> Local_161 = { 0, 0, 0 } ;
	float fLocal_164 = 0f;
	struct<3> Local_165 = { 0, 0, 0 } ;
	struct<3> Local_168 = { 0, 0, 0 } ;
	float fLocal_171 = 0f;
	bool bLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	bool bLocal_175 = 0;
	int iLocal_176 = 0;
	bool bLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193[2] = { 0, 0 };
	int iLocal_196[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	var uLocal_216[4] = { 0, 0, 0, 0 };
	int iLocal_221[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_228 = 0;
	var uLocal_229[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_272 = 8;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 4;
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
	var uLocal_291 = 4;
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
	var uLocal_306 = 4;
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
	var uLocal_321 = 4;
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
	var uLocal_336 = 4;
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
	var uLocal_351 = 4;
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
	var uLocal_366 = 4;
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
	var uLocal_381 = 4;
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
	int iLocal_400 = 0;
	char[] cLocal_401[8] = 0;
	char* sLocal_402 = NULL;
	char* sLocal_403 = NULL;
	char* sLocal_404 = NULL;
	char* sLocal_405 = NULL;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	char* sLocal_408 = NULL;
	char* sLocal_409 = NULL;
	var uLocal_410 = 0;
	var uLocal_411 = 16;
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
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	int iLocal_576 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	Local_117 = { -1109.213f, 4914.744f, 216.101f };
	Local_120 = { -1034.6f, 4918.6f, 205.9f };
	Local_123 = { -1066.963f, 4873.13f, 207.3281f };
	Local_126 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_129 = 72.3125f;
	Local_130 = { -1138.386f, 4872.04f, 207.5488f };
	Local_133 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_136 = 57.8125f;
	Local_137 = { -1171.648f, 4888.658f, 211.0756f };
	Local_140 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_143 = 17.9375f;
	Local_144 = { -1177.981f, 4903.231f, 212.477f };
	Local_147 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_150 = 17.9375f;
	Local_151 = { -1175.693f, 4904.839f, 207.5207f };
	Local_154 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_157 = 36.375f;
	Local_158 = { -1106.212f, 4860.086f, 206.1207f };
	Local_161 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_164 = 11.5625f;
	Local_165 = { -1044.268f, 4916.587f, 209.8365f };
	Local_168 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_171 = 12.875f;
	iLocal_192 = 4;
	cLocal_401 = "REPLAY_TMG";
	sLocal_402 = "CMN_TDIED";
	if (unk_0x4B4BD87E3D30C50D(26))
	{
		func_175();
	}
	if (unk_0xC8CB5DC7F48EC4C5())
	{
		unk_0x2F798BA2098FDADE();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD8AD97AB31334199() || iLocal_173)
		{
			unk_0x4AAD01BBE039D160(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
					{
						if (Global_99250.f_29448.f_5 >= iLocal_192 && !func_174())
						{
							iLocal_50 = 2;
						}
						func_171();
						func_168();
					}
					break;
				
				case 1:
					unk_0x4F465B18B3BC23B5(unk_0x8ACD527A7E574590());
					if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
					{
						if (unk_0x83666F9FB8FEBD4B() > 2000)
						{
							if (iLocal_187 == 1)
							{
								func_167();
							}
							else if (iLocal_187 == 2)
							{
								func_146();
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 1300)
						{
							if (iLocal_189 < 3)
							{
								func_145();
							}
							else
							{
								func_144();
							}
						}
						if (iLocal_174)
						{
							func_131(26, 1);
							iLocal_174 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					unk_0x4F465B18B3BC23B5(unk_0x8ACD527A7E574590());
					if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
					{
						func_107();
					}
					unk_0x39FEEC3E8273065D(Global_34823[9 /*31*/], 0, 0, 1);
					unk_0x39FEEC3E8273065D(Global_34823[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_175 = false;
					unk_0x4AAD01BBE039D160(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_196)
					{
						if (unk_0x1E80C02AC16B6622(iLocal_196[iVar0]))
						{
							if (unk_0xC3B073777B46C61A(uLocal_229[iVar0]))
							{
								unk_0x296CDA10C549A502(&(uLocal_229[iVar0]));
							}
						}
						else
						{
							if (unk_0x8A8B1EEB18873D1C(iLocal_196[iVar0]))
							{
								if (unk_0xC3B073777B46C61A(uLocal_229[iVar0]))
								{
									unk_0x296CDA10C549A502(&(uLocal_229[iVar0]));
								}
							}
							else if (unk_0x0C8E94332AE582B1(iLocal_196[iVar0], unk_0x77F050A399DB77ED(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_106())
								{
									if (iLocal_191 < unk_0x3EAC9995EC220C5A())
									{
										iVar1 = unk_0xA3746E7F17F47DC2(0, 3);
										if (iVar1 == 0)
										{
											func_96(&uLocal_411, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_95(&uLocal_411, 1, iLocal_196[iVar0], "ACULTMember1", 0, 1);
											func_96(&uLocal_411, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_95(&uLocal_411, 2, iLocal_196[iVar0], "ACULTMember2", 0, 1);
											func_96(&uLocal_411, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_191 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(4500, 6000));
									}
								}
							}
							bLocal_175 = true;
						}
						iVar0++;
					}
					if (!bLocal_175)
					{
						func_59();
					}
					break;
				
				case 3:
					if (!iLocal_173)
					{
						uLocal_249 = func_58();
						if (!unk_0xEDE19C6ED6E2F478(uLocal_249))
						{
							break;
						}
						func_57(&uLocal_254, 0);
						iLocal_173 = 1;
					}
					if (func_28(&uLocal_254, &uLocal_260, &uLocal_249, cLocal_401, sLocal_402, &bLocal_172, 78))
					{
						iLocal_190 = 0;
						unk_0xFF4E0B6993FC09F7(uLocal_410);
						unk_0x16C39B1CFD570019(uLocal_248);
						iVar0 = 0;
						while (iVar0 < iLocal_196)
						{
							if (unk_0x1F2158D615BC4B25(iLocal_196[iVar0]))
							{
								unk_0xAB3098579170FA46(&(iLocal_196[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_221)
						{
							if (unk_0x1F2158D615BC4B25(iLocal_221[iVar0]))
							{
								unk_0x7D779528B7C61C13(&(iLocal_221[iVar0]));
							}
							iVar0++;
						}
						if (unk_0x06F36936289C5EC8(uLocal_246))
						{
							unk_0x12A448112D057EB4(uLocal_246, 0);
						}
						if (unk_0x1F2158D615BC4B25(uLocal_215))
						{
							unk_0x7D779528B7C61C13(&uLocal_215);
						}
						if (unk_0x1F2158D615BC4B25(uLocal_215))
						{
							unk_0x7D779528B7C61C13(&uLocal_215);
						}
						if (bLocal_172)
						{
							func_9();
							func_3(0);
							func_1(1);
							iLocal_173 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_173 = 0;
							func_175();
						}
					}
					break;
			}
		}
		else if (bLocal_177)
		{
		}
		else
		{
			func_175();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0x63668AF351176C27(0);
		unk_0x69A565726CF5A560(1);
		unk_0x49206398F0E9D073(0);
		func_2(1);
		Global_86697 = 1;
	}
	else
	{
		unk_0x63668AF351176C27(1);
		unk_0x69A565726CF5A560(0);
		unk_0x49206398F0E9D073(1);
		func_2(0);
		Global_86697 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_35700 == 9 || Global_35700 == 10) || Global_35700 == 5)
	{
		Global_97901 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_97901 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x573691DB812DC8AA(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (Global_14571)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14413.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)
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

void func_8()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_9()
{
	func_19();
	func_12(0, 1);
	func_10(0, 1);
}

void func_10(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_12(0, 0);
		unk_0x23D87B2CECB53E05("DeathFailOut", 0, 0);
		unk_0x573691DB812DC8AA(&iLocal_48, 1);
		func_11(1, 2, 0);
		unk_0x31CD9F8C46179361(2);
	}
	else
	{
		if (unk_0xB56FEBC510E7E9DE(iLocal_48, 1) || iParam1)
		{
			unk_0xC1AE3FBCCFD4D957("DeathFailOut");
			func_11(0, 2, 1);
			unk_0x31CD9F8C46179361(0);
		}
		unk_0xA5F70A8B83BDFA49(&iLocal_48, 1);
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&iLocal_48, 2);
		if (!unk_0x4C779B19E6DDCDA2())
		{
			if (iParam1 == 1)
			{
				unk_0xDBD9A13DC80137C1(0.2f);
			}
			else
			{
				unk_0xDBD9A13DC80137C1(0.075f);
			}
		}
	}
	else
	{
		if (unk_0xB56FEBC510E7E9DE(iLocal_48, 2) || iParam2)
		{
			if (!unk_0x4C779B19E6DDCDA2())
			{
				unk_0xDBD9A13DC80137C1(1f);
			}
		}
		unk_0xA5F70A8B83BDFA49(&iLocal_48, 2);
	}
}

void func_12(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_13())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xB56FEBC510E7E9DE(iLocal_48, 0) || iParam1)
		{
			unk_0x23D87B2CECB53E05(sVar0, 0, 0);
			unk_0x573691DB812DC8AA(&iLocal_48, 0);
			func_11(1, 1, 0);
			unk_0x31CD9F8C46179361(1);
		}
	}
	else
	{
		if (unk_0xB56FEBC510E7E9DE(iLocal_48, 0) || iParam1)
		{
			unk_0xC1AE3FBCCFD4D957(sVar0);
			func_11(0, 1, 1);
			unk_0x31CD9F8C46179361(0);
		}
		unk_0xA5F70A8B83BDFA49(&iLocal_48, 0);
	}
}

int func_13()
{
	func_14();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_14()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_18(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_17(unk_0x77F050A399DB77ED());
			if (func_16(iVar0) && (!func_15(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_16(Global_99250.f_1754.f_539.f_3549))
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

bool func_15(int iParam0)
{
	return Global_35700 == iParam0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_19()
{
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_20(0, 1, 1, 0);
	func_3(1);
}

void func_20(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xCBF71C579F3C5665(unk_0x8ACD527A7E574590());
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 1);
		func_27(1);
		unk_0xB2FE902971602DFF();
		unk_0x8AD31F9246CE7ADF();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xEA9C2A206A86B744())
			{
				unk_0xC9AB825AA4821BDA(0);
			}
			if (!func_5())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_26(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_27(0);
		unk_0x7A72DD566E92DC37();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x1F3478667D91BCDD();
		}
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 0);
		func_26(0, iParam3, iParam2, 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !func_21(unk_0x8ACD527A7E574590()))
		{
			unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), 0);
		}
		Global_69315 = 0;
	}
}

int func_21(int iParam0)
{
	if (func_23(iParam0, 0))
	{
		return 1;
	}
	if (func_22())
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

bool func_22()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

bool func_23(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_24(-1, 0) == 8;
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

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312746;
}

int func_26(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_27(int iParam0)
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

int func_28(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xCAEDD1A8E831AD36("DEATH_SCENE");
			unk_0xBBEB613A917D7EE8(-1, "ScreenFlash", "WastedSounds", 1);
			func_56(&(uParam0->f_1));
			func_19();
			func_55(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0xBE2F8BFF037AA9F4(1);
			break;
		
		case 1:
			if (func_53() || unk_0x2CC731F9E664299E())
			{
				*uParam0 = 2;
			}
			if (!func_52(uParam0->f_4, 4))
			{
				if (unk_0x5F4EA7D1E9029E5C("OFFMISSION_WASTED", 0))
				{
					unk_0xBBEB613A917D7EE8(-1, "Bed", "WastedSounds", 1);
					func_50(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
			{
				if (!func_52(uParam0->f_4, 2))
				{
					unk_0xBBEB613A917D7EE8(-1, "TextHit", "WastedSounds", 1);
					func_50(&(uParam0->f_4), 2);
				}
				func_29(uParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_29(uParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_12(0, 1);
				func_10(0, 1);
				func_19();
				if (*iParam5)
				{
					unk_0x09F8090DDEB095B4(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0xBE2F8BFF037AA9F4(0);
				unk_0x69A565726CF5A560(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				unk_0x63668AF351176C27(1);
				func_12(0, 1);
				func_10(0, 1);
				unk_0xE0DB271DC0AEA972("DEATH_SCENE");
				unk_0xBE2F8BFF037AA9F4(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0xBE2F8BFF037AA9F4(0);
			return 1;
			break;
	}
	return 0;
}

int func_29(var uParam0, var uParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x2CC731F9E664299E() || unk_0x8DD09BB8ACF9E623())
			{
				unk_0x16AA81661A0624FB(2500);
				unk_0xC08831A338A1D76E();
			}
			if (bParam9)
			{
				unk_0xBE2F8BFF037AA9F4(1);
			}
			unk_0xDBD9A13DC80137C1(0.2f);
			if (func_49(iParam5, 4))
			{
				if (unk_0x5F4EA7D1E9029E5C("generic_failed", 0))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0x758017413321C628(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0xC976485333F81CE8("STRING");
			unk_0xFC059569EB1C537B(6);
			unk_0x703D2B4B1C7E10B6(uParam2);
			unk_0xC8C5D5B9E15EB2E2();
			func_48(sParam3);
			unk_0x4D57F6B69CCB6D95(100);
			unk_0x360FCC9A8FE84159(true);
			unk_0xF284D8942965CE6A();
			if (func_49(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x758017413321C628(*uParam0, "TRANSITION_UP");
					unk_0xBA93E45C163C745D(uParam1->f_134);
					unk_0x098CA28C04E62E55();
					uParam1->f_136 = 1;
				}
			}
			if (!func_49(iParam5, 1))
			{
				unk_0x74AA48E257CC76AB(0);
			}
			func_47(&(uParam1->f_10), 0, 1, 1, 1);
			func_46(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_46(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_49(iParam5, 4))
			{
				unk_0xBBEB613A917D7EE8(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_49(iParam5, 8))
			{
				switch (func_13())
				{
					case 0:
						unk_0x23D87B2CECB53E05("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x23D87B2CECB53E05("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x23D87B2CECB53E05("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_45(&(uParam1->f_1)))
			{
				func_44(&(uParam1->f_1));
			}
			if (func_49(iParam5, 2))
			{
				if (!func_45(&(uParam1->f_4)))
				{
					func_44(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x46A5D995D57103EA();
			if (func_49(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x758017413321C628(*uParam0, "TRANSITION_UP");
					unk_0xBA93E45C163C745D(uParam1->f_134);
					unk_0x098CA28C04E62E55();
					uParam1->f_136 = 1;
				}
			}
			unk_0x227C85DAD96E2942(iParam6);
			func_42(uParam0, 0, 0);
			if (!func_49(iParam5, 16) && (func_40(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x2CC731F9E664299E()))
			{
				func_34(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0xFD55C4B9BC2A66F5();
				if (unk_0xCCA0765A3DB2A871(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0xBBEB613A917D7EE8(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_49(iParam5, 1))
					{
						unk_0x7D2BE62C49174DE9(0);
					}
					func_33(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0xCCA0765A3DB2A871(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0xBBEB613A917D7EE8(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_49(iParam5, 1))
					{
						unk_0x7D2BE62C49174DE9(0);
					}
					func_33(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_49(iParam5, 2))
			{
				if (func_40(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0xBBEB613A917D7EE8(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_49(iParam5, 1))
					{
						unk_0x7D2BE62C49174DE9(0);
					}
					func_33(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_42(uParam0, 0, 0);
			unk_0xDBD9A13DC80137C1(1f);
			if (uParam1->f_138 || !((unk_0x35D1CAD6ADAB6491("stunt_plane_races", unk_0x664B47C58CE8A0A4()) || unk_0x35D1CAD6ADAB6491("pilot_school", unk_0x664B47C58CE8A0A4())) || (unk_0x35D1CAD6ADAB6491("bj", unk_0x664B47C58CE8A0A4()) && unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))))
			{
				unk_0xCA6D671341405469(2500);
			}
			if (func_49(iParam5, 64) && uParam1->f_138)
			{
				unk_0x16AA81661A0624FB(500);
			}
			func_30(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0xBE2F8BFF037AA9F4(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_40(&(uParam1->f_4)) <= 0.1f)
			{
				func_42(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_30(var uParam0)
{
	func_31(uParam0, 0f);
}

void func_31(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_32(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - fParam1);
	unk_0x573691DB812DC8AA(uParam0, 1);
	unk_0xA5F70A8B83BDFA49(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_32(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A()) / 1000f);
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		iVar0 = unk_0xE23D71F521207E8D();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A()) / 1000f);
}

void func_33(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0xD2E03CEA477E4E3D(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_34(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x8DD09BB8ACF9E623() || unk_0x329E4482E654B910()) || unk_0x2CC731F9E664299E()) || unk_0x3502F016A4FB24C5())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_39(uParam0))
	{
		return;
	}
	unk_0x46A5D995D57103EA();
	unk_0x227C85DAD96E2942(uParam2);
	if (!func_49(uParam0->f_1, 256) || (func_49(uParam0->f_1, 8192) && unk_0x18670847D587698A(2)))
	{
		unk_0x758017413321C628(*uParam0, "SET_CLEAR_SPACE");
		unk_0xBA93E45C163C745D(fParam1);
		unk_0x098CA28C04E62E55();
		unk_0x758017413321C628(*uParam0, "SET_MAX_WIDTH");
		unk_0xBA93E45C163C745D(fParam5);
		unk_0x098CA28C04E62E55();
		unk_0x758017413321C628(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x098CA28C04E62E55();
		if (unk_0x2C063B4379F0C076())
		{
			unk_0x758017413321C628(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x360FCC9A8FE84159(func_49(uParam0->f_1, 4096));
			unk_0x098CA28C04E62E55();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x417D84639C1F982B(2);
					break;
				
				case 2:
					bVar4 = !unk_0x417D84639C1F982B(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x758017413321C628(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x4D57F6B69CCB6D95(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xB56FEBC510E7E9DE(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0xB56FEBC510E7E9DE(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0x7DD16933DB23299D(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0xEC039E3BEB450805(uVar0, uVar1, bVar2);
						}
						if (!unk_0x0AAC2160036975D9(uVar3))
						{
							func_38(uVar3);
						}
						iVar7++;
					}
					if (!unk_0x0AAC2160036975D9(uParam0->f_2[iVar6 /*15*/]))
					{
						func_48(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x2C063B4379F0C076())
					{
						if (func_49(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x360FCC9A8FE84159(true);
								unk_0x4D57F6B69CCB6D95(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x360FCC9A8FE84159(false);
								unk_0x4D57F6B69CCB6D95(-1);
							}
						}
					}
					unk_0x098CA28C04E62E55();
				}
			}
			iVar6++;
		}
		fVar8 = func_37(bParam4, func_37(func_49(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x758017413321C628(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xBA93E45C163C745D(fVar8);
		unk_0x098CA28C04E62E55();
		unk_0x758017413321C628(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xBA93E45C163C745D(0f);
		unk_0xBA93E45C163C745D(0f);
		unk_0xBA93E45C163C745D(0f);
		unk_0xBA93E45C163C745D(80f);
		unk_0x098CA28C04E62E55();
		func_36(&(uParam0->f_1), 256);
		func_35(&(uParam0->f_1), 128);
	}
	unk_0xE636AA747867BC3D(*uParam0, 255, 255, 255, 0, 0);
}

void func_35(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_37(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_38(var uParam0)
{
	unk_0x2747B3A98BE1082E(uParam0);
}

int func_39(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0xEDE19C6ED6E2F478(*uParam0))
		{
			func_36(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_40(var uParam0)
{
	if (func_45(uParam0))
	{
		if (func_41(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_32(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_41(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(*uParam0, 2);
}

int func_42(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_45(&(uParam0->f_2)))
	{
		func_30(&(uParam0->f_2));
	}
	unk_0xCA3D1FCD234B8E0B(14);
	if (!bParam2)
	{
		unk_0xE636AA747867BC3D(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0xE636AA747867BC3D(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0xE721293454745300(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_40(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_43(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_44(var uParam0)
{
	if (!func_45(uParam0))
	{
		func_30(uParam0);
	}
}

bool func_45(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(*uParam0, 1);
}

int func_46(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x573691DB812DC8AA(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_47(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x5292D71961990F27("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_36(&(uParam0->f_1), 32);
	}
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		func_36(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x79C7AA1552E0BF75(*uParam0, 1);
		}
	}
	if (unk_0x2C063B4379F0C076())
	{
		if (bParam3)
		{
			func_36(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_36(&(uParam0->f_1), 8192);
	}
}

void func_48(char* sParam0)
{
	unk_0xC976485333F81CE8(sParam0);
	unk_0xC8C5D5B9E15EB2E2();
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_50(var uParam0, int iParam1)
{
	func_51(uParam0, iParam1);
}

void func_51(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_52(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_53()
{
	if (!unk_0xB56FEBC510E7E9DE(iLocal_48, 0) && !unk_0xB56FEBC510E7E9DE(iLocal_48, 1))
	{
		unk_0xC1B1E9A034A63A62(0);
		func_12(1, 0);
	}
	if (!unk_0x7B8549A4F94FA4C8())
	{
		unk_0xA1E3A2CCF985EE86();
	}
	unk_0x6E20845D23D3DFD4(2, 199, 1);
	unk_0x6E20845D23D3DFD4(0, 59, 1);
	unk_0x6E20845D23D3DFD4(0, 60, 1);
	unk_0x6E20845D23D3DFD4(0, 37, 1);
	unk_0x6E20845D23D3DFD4(0, 25, 1);
	unk_0x2FD5DCEC5ECBAE1F();
	if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
	{
		if (!unk_0xB56FEBC510E7E9DE(iLocal_48, 1))
		{
			func_10(1, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if (IntToFloat(unk_0xC9D9444186B5A374()) > (1500f * 0.075f) || unk_0x2CC731F9E664299E())
		{
			if (!unk_0x2CC731F9E664299E())
			{
				if (!unk_0x8DD09BB8ACF9E623())
				{
					unk_0x16AA81661A0624FB(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = unk_0x3EAC9995EC220C5A() + 1000;
				if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
				{
					unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
				}
				func_11(0, 2, 1);
				func_20(1, 1, 1, 0);
				func_3(1);
				unk_0xFA6863D4B222B2E4(0);
				unk_0xFD8EBE353F767449(0);
				unk_0x4ACCE973F9C3CA3B(1);
				unk_0xA1E3A2CCF985EE86();
				if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
				{
					unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
				}
				func_12(0, 0);
				func_54(0);
			}
			else if (unk_0x3EAC9995EC220C5A() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xB56FEBC510E7E9DE(iLocal_48, 3))
			{
				unk_0xADD55DEFB7B8CB4F(1);
				unk_0x573691DB812DC8AA(&iLocal_48, 3);
			}
		}
		else if (unk_0xB56FEBC510E7E9DE(iLocal_48, 3))
		{
			unk_0xADD55DEFB7B8CB4F(0);
			unk_0xA5F70A8B83BDFA49(&iLocal_48, 3);
		}
	}
}

void func_55(var uParam0, float fParam1, float fParam2)
{
	if (func_45(&(uParam0->f_1)))
	{
		func_43(&(uParam0->f_1));
	}
	if (func_45(&(uParam0->f_4)))
	{
		func_43(&(uParam0->f_4));
	}
	func_33(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_56(var uParam0)
{
	if (!func_45(uParam0))
	{
		func_44(uParam0);
	}
	else
	{
		func_30(uParam0);
	}
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x5F4EA7D1E9029E5C("OFFMISSION_WASTED", 0);
}

var func_58()
{
	return unk_0x2F14983962462691("MP_BIG_MESSAGE_FREEMODE");
}

void func_59()
{
	if (!iLocal_176)
	{
		unk_0x2084300F2D91A8E6("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_99250.f_29448.f_5 = 1000;
		unk_0xFB73D69070E537BD(64);
		Global_99250.f_25017.f_472 = 54;
		uLocal_399 = unk_0x2F14983962462691("MIDSIZED_MESSAGE");
		func_94(1);
		while (!unk_0xEDE19C6ED6E2F478(uLocal_399))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x758017413321C628(uLocal_399, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_48("CULT_PASS");
		unk_0xF284D8942965CE6A();
		while (!func_93())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_92();
		unk_0xC1B1E9A034A63A62(0);
		unk_0xBBEB613A917D7EE8(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_176 = 1;
	}
	unk_0xE636AA747867BC3D(uLocal_399, 255, 255, 255, 255, 0);
	if (!iLocal_178)
	{
		if (unk_0x83666F9FB8FEBD4B() > 9500)
		{
			unk_0x758017413321C628(uLocal_399, "SHARD_ANIM_OUT");
			unk_0x4D57F6B69CCB6D95(1);
			unk_0xBA93E45C163C745D(0.33f);
			unk_0x098CA28C04E62E55();
			iLocal_178 = 1;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() > 10000)
	{
		if (unk_0xEDE19C6ED6E2F478(uLocal_399))
		{
			unk_0xD2E03CEA477E4E3D(&uLocal_399);
			func_94(0);
		}
		while (unk_0xA2490B3CE6382FBB(func_91(unk_0x8ACD527A7E574590()), Local_117, 1) < 209f && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_60(18);
		func_175();
	}
}

void func_60(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_89();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_88())
	{
		func_66(iParam0);
		unk_0x275546117AF1F063(0, 0);
		Global_99241 = unk_0x3EAC9995EC220C5A();
		func_65(30000);
		StringCopy(&cVar0, func_64(Global_99239, 1), 64);
		if (func_63(Global_99239) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_99238, 64);
		}
		unk_0x0C0A547C7A0D11B0(&cVar0, Global_99236, (unk_0x3EAC9995EC220C5A() - Global_99237), 0);
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_99246, 0) && Global_99250.f_29448.f_2 < 3)
	{
		unk_0xA5F70A8B83BDFA49(&Global_99246, 0);
	}
	func_62(&Global_25174);
	Global_99240 = 0;
	func_61(-1);
}

void func_61(int iParam0)
{
	Global_99239 = iParam0;
}

void func_62(var uParam0)
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

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_64(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_65(int iParam0)
{
	Global_36251 = (unk_0x3EAC9995EC220C5A() + iParam0);
}

void func_66(int iParam0)
{
	func_67(iParam0, 0, func_87(iParam0));
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_86();
	func_77(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_76(iParam0, &uVar0);
	Var1 = { func_68(&uVar0) };
}

struct<16> func_68(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_75(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_74(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_73(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_72(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_71(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_69(*uParam0), 64);
	return Var0;
}

int func_69(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_70(unk_0xB56FEBC510E7E9DE(iParam0, 31), -1, 1)) + 2011;
}

int func_70(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_71(var uParam0)
{
	return uParam0 & 15;
}

int func_72(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_73(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_74(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_75(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

void func_76(int iParam0, var uParam1)
{
	Global_99250.f_29448.f_43[iParam0] = *uParam1;
}

void func_77(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_69(*uParam0);
	iVar1 = func_71(*uParam0);
	iVar2 = func_72(*uParam0);
	iVar3 = func_75(*uParam0);
	iVar4 = func_74(*uParam0);
	iVar5 = func_73(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_85(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_85(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_78(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, iParam1);
	func_83(uParam0, iParam2);
	func_82(uParam0, iParam3);
	func_81(uParam0, iParam5);
	func_80(uParam0, iParam4);
	func_79(uParam0, iParam6);
}

void func_79(var uParam0, int iParam1)
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

void func_80(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_71(*uParam0);
	iVar1 = func_69(*uParam0);
	if (iParam1 < 1 || iParam1 > func_85(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_81(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_82(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_85(int iParam0, int iParam1)
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

var func_86()
{
	var uVar0;
	
	func_84(&uVar0, unk_0x624CC88A8815545E());
	func_83(&uVar0, unk_0xD3D98375D5CA69E4());
	func_82(&uVar0, unk_0x5C5157A539753532());
	func_80(&uVar0, unk_0xCB12BC5A618B995B());
	func_81(&uVar0, unk_0x9746D90F14C930B9());
	func_79(&uVar0, unk_0xD45B57A596913560());
	return uVar0;
}

int func_87(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_88()
{
	if ((Global_99239 == func_89() && unk_0x74E62879922177A9()) && Global_99240)
	{
		return 1;
	}
	return 0;
}

int func_89()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x664B47C58CE8A0A4(), 64);
	uVar16 = func_90(Var0);
	return uVar16;
}

int func_90(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x39BD4614CF899227(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

Vector3 func_91(int iParam0)
{
	return unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(iParam0), 0);
}

void func_92()
{
	Global_25349 = 0;
	Global_25350 = 0;
	Global_25352 = 0;
	Global_25353 = 0;
	Global_25354 = 0;
}

int func_93()
{
	return 1;
}

void func_94(int iParam0)
{
	Global_69577 = iParam0;
	Global_69578 = iParam0;
}

void func_95(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_96(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_105(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_97(sParam2, iParam3, 0);
}

int func_97(char* sParam0, int iParam1, bool bParam2)
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
					func_104();
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
		if (func_103(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_102();
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
				func_101();
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
				if (func_100())
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
			if (func_5())
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
			func_99();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_98();
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
		func_104();
	}
	return 0;
}

void func_98()
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

void func_99()
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

int func_100()
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

void func_101()
{
	if (func_15(14))
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
		Global_14413 = func_13();
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

void func_102()
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

bool func_103(int iParam0, int iParam1)
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

void func_104()
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

void func_105(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
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

int func_106()
{
	if (Global_15712 != 0 || unk_0x1066B6347C40B301())
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_190)
	{
		case 0:
			unk_0x30E1B131293FB041("THUNDER", 20f);
			if (!unk_0x8F97015FD3089C6B())
			{
				unk_0x3C0CECAD08F71003("ac_ig_3_p3_b", 8);
			}
			unk_0xC60576ADD1AECA45(joaat("a_m_o_acult_02"));
			unk_0xC60576ADD1AECA45(joaat("a_m_y_acult_02"));
			unk_0xC60576ADD1AECA45(joaat("prop_box_wood03a"));
			unk_0xC60576ADD1AECA45(joaat("prop_box_wood04a"));
			unk_0xC60576ADD1AECA45(joaat("prop_box_wood05a"));
			unk_0xC60576ADD1AECA45(joaat("prop_security_case_01"));
			while ((((((!func_130() || !unk_0x4A4B6FD54C499B7D(joaat("a_m_o_acult_02"))) || !unk_0x4A4B6FD54C499B7D(joaat("a_m_y_acult_02"))) || !unk_0x4A4B6FD54C499B7D(joaat("prop_box_wood03a"))) || !unk_0x4A4B6FD54C499B7D(joaat("prop_box_wood04a"))) || !unk_0x4A4B6FD54C499B7D(joaat("prop_box_wood05a"))) || !unk_0x4A4B6FD54C499B7D(joaat("prop_security_case_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			uLocal_576 = func_127(unk_0x77F050A399DB77ED(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0);
			if (unk_0x1F2158D615BC4B25(uLocal_576))
			{
				unk_0x78C7E0369425C575(iLocal_576, "Trevors_weapon", 0, 0, 0);
			}
			unk_0x78C7E0369425C575(0, "Rifle_Mag1^1", 3, unk_0x7222ED661511399B(joaat("component_assaultrifle_clip_01")), 0);
			if (func_130() && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				unk_0x78C7E0369425C575(unk_0x77F050A399DB77ED(), "TREVOR", 0, 0, 0);
				unk_0x78C7E0369425C575(iLocal_196[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x78C7E0369425C575(iLocal_196[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x78C7E0369425C575(iLocal_196[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x78C7E0369425C575(iLocal_196[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x78C7E0369425C575(iLocal_196[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xE568A9F724E3F204(0);
			}
			unk_0x4EDE34FBADD967A6(0);
			if (!bLocal_172 && Global_99250.f_29448.f_5 != 1000)
			{
				func_126();
			}
			if (unk_0x1F2158D615BC4B25(iLocal_196[0]))
			{
				unk_0xAB3098579170FA46(&(iLocal_196[0]));
			}
			if (unk_0x1F2158D615BC4B25(iLocal_196[1]))
			{
				unk_0xAB3098579170FA46(&(iLocal_196[1]));
			}
			if (unk_0x06F36936289C5EC8(uLocal_246))
			{
				unk_0x12A448112D057EB4(uLocal_246, 0);
			}
			if (unk_0x1F2158D615BC4B25(uLocal_215))
			{
				unk_0x7D779528B7C61C13(&iLocal_215);
			}
			if (unk_0x1F2158D615BC4B25(iLocal_215))
			{
				unk_0x7D779528B7C61C13(&iLocal_215);
			}
			unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
			if (unk_0xC3B073777B46C61A(uLocal_228))
			{
				unk_0x296CDA10C549A502(&uLocal_228);
			}
			func_20(1, 1, 1, 0);
			unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
			unk_0x4ACCE973F9C3CA3B(1);
			unk_0x1B40500A7841D6AB(0);
			unk_0x488AF65D7EDB6B4A(0);
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				unk_0xC845B8398E72DBF0(unk_0x77F050A399DB77ED(), 1);
			}
			unk_0x0BA5964C07973FE9(Local_117, 100f, 1, 0, 0, 0);
			unk_0x2277155D92E898D2(Local_117 - Vector(100f, 60f, 80f), Local_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0x4AAD01BBE039D160(0f);
			unk_0xC8CA2CBC777B0FA7(3, 0);
			unk_0xC8CA2CBC777B0FA7(5, 0);
			uLocal_248 = unk_0x91AB437C432C51E9(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			unk_0xC60576ADD1AECA45(joaat("a_m_o_acult_01"));
			while (!unk_0x4A4B6FD54C499B7D(joaat("a_m_o_acult_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_190 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (unk_0x82D4A1789BA62554(0))
			{
				if (unk_0xD43F83F5D84C538B("CULT_MASTER", 0))
				{
					if (!unk_0x1F2158D615BC4B25(iLocal_196[11]))
					{
						iLocal_196[11] = unk_0xCBABEE38E5DAB356(unk_0x66F78004B76B17FB("CULT_MASTER", 0));
					}
				}
				if (unk_0xD43F83F5D84C538B("REAR_CULT", 0))
				{
					if (!unk_0x1F2158D615BC4B25(iLocal_196[12]))
					{
						iLocal_196[12] = unk_0xCBABEE38E5DAB356(unk_0x66F78004B76B17FB("REAR_CULT", 0));
					}
				}
				if (unk_0xD43F83F5D84C538B("LEFT_OLD_CULT", 0))
				{
					if (!unk_0x1F2158D615BC4B25(iLocal_196[13]))
					{
						iLocal_196[13] = unk_0xCBABEE38E5DAB356(unk_0x66F78004B76B17FB("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0xD43F83F5D84C538B("CARBINE_CULT", 0))
				{
					if (!unk_0x1F2158D615BC4B25(iLocal_196[14]))
					{
						iLocal_196[14] = unk_0xCBABEE38E5DAB356(unk_0x66F78004B76B17FB("CARBINE_CULT", 0));
					}
				}
				if (unk_0xD43F83F5D84C538B("SHOTGUN_CULT", 0))
				{
					if (!unk_0x1F2158D615BC4B25(iLocal_196[15]))
					{
						iLocal_196[15] = unk_0xCBABEE38E5DAB356(unk_0x66F78004B76B17FB("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0xD43F83F5D84C538B("TREVOR", 0))
				{
					unk_0xC845B8398E72DBF0(unk_0x77F050A399DB77ED(), 0);
					unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					unk_0x2DA164E80FDEE7F2(unk_0x77F050A399DB77ED(), 188.9369f);
					unk_0xB2E216D08489C442(unk_0x77F050A399DB77ED(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, uLocal_248, 0);
					unk_0x9371C699D98CE4D6(unk_0x77F050A399DB77ED(), 1, 0);
				}
				if (unk_0xD43F83F5D84C538B("Trevors_weapon", 0))
				{
					unk_0x74D9EECF25BB864F(iLocal_576, unk_0x77F050A399DB77ED());
				}
				unk_0x8793DE27084C2CBD(91.3878f);
				unk_0xABF261CA61470DE0(4.4337f, 1065353216);
				func_20(0, 1, 1, 0);
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
				unk_0x1B40500A7841D6AB(1);
				unk_0x488AF65D7EDB6B4A(1);
				Local_51[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_100[0] = 254.8275f;
				Local_51[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_100[1] = 270.2025f;
				Local_51[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_100[2] = 299.8404f;
				Local_51[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_100[3] = 298.4257f;
				Local_51[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_100[4] = 283.5311f;
				Local_51[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_100[5] = 87.5233f;
				Local_51[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_100[6] = 109.6546f;
				Local_51[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_100[7] = 210.2433f;
				Local_51[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_100[8] = 203.732f;
				Local_51[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_100[9] = 39.1109f;
				Local_51[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_100[10] = 25.8472f;
				unk_0x72FAE653AFC04E97("rghCult", &uLocal_410);
				iVar1 = 0;
				while (iVar1 < iLocal_196)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_196[iVar1] = unk_0x6665DCC708A346F3(26, joaat("a_m_o_acult_01"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x93A52E3574C76411(iLocal_196[iVar1], 0);
						unk_0x1592B6D205958934(iLocal_196[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0x831F6A79993D3933(iLocal_196[iVar1], 0);
						unk_0x07A4F44750FE83D8(iLocal_196[iVar1], 2);
						unk_0xFBA86F14A4D447E1(iLocal_196[iVar1], 50f, 20);
						unk_0x15E0B3143320FB58(iLocal_196[iVar1], 5);
						unk_0xFE974F3DCF4437D1(iLocal_196[iVar1], 100f);
						unk_0x4891B9E8F90B8C2B(iLocal_196[iVar1], 100f);
						unk_0x9F48F299B333353E(iLocal_196[iVar1], 150);
						unk_0x1A8C6CC3CB0B507B(iLocal_196[iVar1], unk_0xA3746E7F17F47DC2(40, 60));
						unk_0xFBE25F0677076CF9(iLocal_196[iVar1], unk_0x77F050A399DB77ED(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_196[iVar1] = unk_0x6665DCC708A346F3(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x93A52E3574C76411(iLocal_196[iVar1], 0);
						unk_0x1592B6D205958934(iLocal_196[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0xB424F90D6E96BCF8(iLocal_196[iVar1], 50, 1);
						unk_0x831F6A79993D3933(iLocal_196[iVar1], 2);
						unk_0x07A4F44750FE83D8(iLocal_196[iVar1], 1);
						unk_0xFBA86F14A4D447E1(iLocal_196[iVar1], 50f, 20);
						unk_0x15E0B3143320FB58(iLocal_196[iVar1], 5);
						unk_0xFE974F3DCF4437D1(iLocal_196[iVar1], 100f);
						unk_0x4891B9E8F90B8C2B(iLocal_196[iVar1], 100f);
						unk_0x1A8C6CC3CB0B507B(iLocal_196[iVar1], unk_0xA3746E7F17F47DC2(40, 60));
						unk_0xFBE25F0677076CF9(iLocal_196[iVar1], unk_0x77F050A399DB77ED(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0x1E80C02AC16B6622(iLocal_196[iVar1]) && !unk_0x1E80C02AC16B6622(iLocal_196[11])) && !unk_0x1E80C02AC16B6622(iLocal_196[12])) && !unk_0x1E80C02AC16B6622(iLocal_196[13])) && !unk_0x1E80C02AC16B6622(iLocal_196[14])) && !unk_0x1E80C02AC16B6622(iLocal_196[15]))
						{
							unk_0x1592B6D205958934(iLocal_196[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0x1592B6D205958934(iLocal_196[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x1592B6D205958934(iLocal_196[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x1592B6D205958934(iLocal_196[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0x1592B6D205958934(iLocal_196[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0xB424F90D6E96BCF8(iLocal_196[iVar1], 0, 1);
							unk_0x831F6A79993D3933(iLocal_196[iVar1], 3);
							unk_0x07A4F44750FE83D8(iLocal_196[iVar1], 0);
							unk_0x15E0B3143320FB58(iLocal_196[iVar1], 0);
							unk_0x9FD779BE719F1E77(iLocal_196[iVar1], 1f, 1f);
							unk_0x2A6B9F9E71C479CF(&uLocal_247);
							unk_0x36C8654A22054A00(0, -1159.33f, 4924.412f, 221.6576f, unk_0x77F050A399DB77ED(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 6000, 0);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 4500, 0);
							unk_0xFBE25F0677076CF9(0, unk_0x77F050A399DB77ED(), 0, 16);
							unk_0x44642CB08FA1637E(uLocal_247);
							unk_0xB8A8FA4B28E9F423(iLocal_196[15], uLocal_247);
							unk_0xAAD288E877AC833D(&uLocal_247);
							unk_0x2A6B9F9E71C479CF(&uLocal_247);
							unk_0x36C8654A22054A00(0, -1163.279f, 4932.933f, 222.541f, unk_0x77F050A399DB77ED(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x9069A53FC826DFF9(0, unk_0x77F050A399DB77ED(), 5000, 0);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 7500, 0);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 4500, 0);
							unk_0xFBE25F0677076CF9(0, unk_0x77F050A399DB77ED(), 0, 16);
							unk_0x44642CB08FA1637E(uLocal_247);
							unk_0xB8A8FA4B28E9F423(iLocal_196[14], uLocal_247);
							unk_0xAAD288E877AC833D(&uLocal_247);
							unk_0x2A6B9F9E71C479CF(&uLocal_247);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 2500, 0);
							unk_0x9069A53FC826DFF9(0, unk_0x77F050A399DB77ED(), 5000, 0);
							unk_0x36C8654A22054A00(0, -1156.175f, 4926.073f, 221.3447f, unk_0x77F050A399DB77ED(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 6500, 0);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 4500, 0);
							unk_0xFBE25F0677076CF9(0, unk_0x77F050A399DB77ED(), 0, 16);
							unk_0x44642CB08FA1637E(uLocal_247);
							unk_0xB8A8FA4B28E9F423(iLocal_196[13], uLocal_247);
							unk_0xAAD288E877AC833D(&uLocal_247);
							unk_0x2A6B9F9E71C479CF(&uLocal_247);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 3000, 0);
							unk_0x36C8654A22054A00(0, -1157.962f, 4922.196f, 221.309f, unk_0x77F050A399DB77ED(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 5500, 0);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 4500, 0);
							unk_0xFBE25F0677076CF9(0, unk_0x77F050A399DB77ED(), 0, 16);
							unk_0x44642CB08FA1637E(uLocal_247);
							unk_0xB8A8FA4B28E9F423(iLocal_196[12], uLocal_247);
							unk_0xAAD288E877AC833D(&uLocal_247);
							unk_0x2A6B9F9E71C479CF(&uLocal_247);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 4500, 0);
							unk_0x9069A53FC826DFF9(0, unk_0x77F050A399DB77ED(), 10000, 0);
							unk_0x36C8654A22054A00(0, -1161.475f, 4916.061f, 220.5658f, unk_0x77F050A399DB77ED(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 4500, 0);
							unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), 4500, 0);
							unk_0xFBE25F0677076CF9(0, unk_0x77F050A399DB77ED(), 0, 16);
							unk_0x44642CB08FA1637E(uLocal_247);
							unk_0xB8A8FA4B28E9F423(iLocal_196[11], uLocal_247);
							unk_0xAAD288E877AC833D(&uLocal_247);
							unk_0x112CD899A3BEE719(iLocal_196[iVar1], 1);
							unk_0xD214B72C983BCE75(iLocal_196[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_196[iVar1] = unk_0x6665DCC708A346F3(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x93A52E3574C76411(iLocal_196[iVar1], 0);
						unk_0x1592B6D205958934(iLocal_196[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0xB424F90D6E96BCF8(iLocal_196[iVar1], 50, 1);
						unk_0x831F6A79993D3933(iLocal_196[iVar1], 2);
						unk_0x07A4F44750FE83D8(iLocal_196[iVar1], 0);
						unk_0xFBA86F14A4D447E1(iLocal_196[iVar1], 50f, 20);
						unk_0x9CE864D319ECB37A(iLocal_196[iVar1], 1);
						unk_0x15E0B3143320FB58(iLocal_196[iVar1], 5);
						unk_0xFE974F3DCF4437D1(iLocal_196[iVar1], 100f);
						unk_0x4891B9E8F90B8C2B(iLocal_196[iVar1], 100f);
						unk_0x1A8C6CC3CB0B507B(iLocal_196[iVar1], unk_0xA3746E7F17F47DC2(40, 60));
						unk_0xFBE25F0677076CF9(iLocal_196[iVar1], unk_0x77F050A399DB77ED(), 0, 16);
					}
					unk_0x054E434B0AECBDA6(iLocal_196[iVar1], uLocal_410);
					unk_0x2DA164E80FDEE7F2(iLocal_196[iVar1], func_125(unk_0xAF99169F0F5AE41D(iLocal_196[iVar1], 1), func_91(unk_0x8ACD527A7E574590())));
					unk_0x9526D9575C237F2F(iLocal_196[iVar1], 1);
					unk_0x1706625EBCDDEBF9(iLocal_196[iVar1], 42, 1);
					uLocal_229[iVar1] = func_123(iLocal_196[iVar1], 1, 145);
					iVar1++;
				}
				func_95(&uLocal_411, 0, unk_0x77F050A399DB77ED(), "TREVOR", 0, 1);
				func_95(&uLocal_411, 3, iLocal_196[11], "ACULTMaster", 0, 1);
				func_95(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
				unk_0x573691DB812DC8AA(&iVar0, 1);
				unk_0x573691DB812DC8AA(&iVar0, 3);
				unk_0x573691DB812DC8AA(&iVar0, 4);
				if (!bLocal_172)
				{
					uLocal_216[0] = unk_0x224F6FCD2D1EABBD(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[1] = unk_0x224F6FCD2D1EABBD(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[2] = unk_0x224F6FCD2D1EABBD(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[3] = unk_0x224F6FCD2D1EABBD(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_216[0] = uLocal_216[0];
				uLocal_216[1] = uLocal_216[1];
				uLocal_216[2] = uLocal_216[2];
				uLocal_216[3] = uLocal_216[3];
				iLocal_221[0] = unk_0x4A498A71A7B2E7A5(joaat("prop_box_wood04a"), -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_221[1] = unk_0x4A498A71A7B2E7A5(joaat("prop_box_wood03a"), -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_221[2] = unk_0x4A498A71A7B2E7A5(joaat("prop_box_wood04a"), -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_221[3] = unk_0x4A498A71A7B2E7A5(joaat("prop_box_wood04a"), -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_221[4] = unk_0x4A498A71A7B2E7A5(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_221[5] = unk_0x4A498A71A7B2E7A5(joaat("prop_box_wood03a"), -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				unk_0x188DB3CD3BF87211(iLocal_221[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				unk_0x188DB3CD3BF87211(iLocal_221[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				unk_0x188DB3CD3BF87211(iLocal_221[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				unk_0x188DB3CD3BF87211(iLocal_221[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				unk_0x188DB3CD3BF87211(iLocal_221[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				unk_0x188DB3CD3BF87211(iLocal_221[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_122() < 50)
				{
					unk_0x91D11CF37EA3B229(unk_0x8ACD527A7E574590(), 0.5f, 1);
				}
				if (func_121() != 18)
				{
					func_119(18);
				}
				if (!func_88())
				{
					func_108(0);
				}
				func_1(1);
				bLocal_172 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_108(int iParam0)
{
	if (func_113())
	{
		Global_99240 = 1;
		Global_99237 = unk_0x3EAC9995EC220C5A();
		if (func_112(Global_99239))
		{
			func_109(0);
		}
		unk_0x275546117AF1F063(1, "RE_TITLE");
		if (iParam0 && func_112(Global_99239))
		{
			unk_0x358EC418194057C1();
		}
		return 1;
	}
	return 0;
}

void func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_99250.f_29448.f_2 < 3)
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_110(func_111(iParam0), -1);
					Global_99250.f_29448.f_2++;
					unk_0x573691DB812DC8AA(&Global_99246, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB56FEBC510E7E9DE(Global_99246, 1))
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_110(func_111(iParam0), -1);
					Global_99250.f_29448.f_3++;
					unk_0x573691DB812DC8AA(&Global_99246, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB56FEBC510E7E9DE(Global_99246, 2))
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_110(func_111(iParam0), -1);
					Global_99250.f_29448.f_4++;
					unk_0x573691DB812DC8AA(&Global_99246, 2);
				}
			}
			break;
	}
}

void func_110(var uParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(uParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

char* func_111(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_113()
{
	switch (func_114(&Global_25174, 0, 5, 0, unk_0x8EC1FFF6B789C28E()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_114(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88917.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_118(0))
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		unk_0xB0B3F015E2C68AA2(unk_0x7F3E348C0892D8D2(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x6F0D8BCEF1D3C17F(8);
		}
		Global_35700 = iParam2;
		Global_35662 = *uParam0;
		Global_35663 = iParam4;
		Global_35661 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35661 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35661)
			{
				if (Global_35667[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35662 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_116(iParam2))
		{
			return 0;
		}
		if (Global_35661 == 8)
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		Global_35667[Global_35661 /*4*/] = Global_35664;
		Global_35667[Global_35661 /*4*/].f_1 = iParam1;
		Global_35667[Global_35661 /*4*/].f_2 = iParam2;
		Global_35667[Global_35661 /*4*/].f_3 = 0;
		Global_35661++;
		if (iParam4 != 0)
		{
			func_115(uParam0, iParam4);
		}
	}
	return 2;
}

void func_115(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35661 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35661)
	{
		if (Global_35667[iVar0 /*4*/] == *uParam0)
		{
			Global_35667[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_116(int iParam0)
{
	return func_117(iParam0, Global_35700);
}

int func_117(int iParam0, int iParam1)
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

int func_118(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_116(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_119(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_89();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_61(iParam0);
	unk_0x13FDF28AC5D80885(0);
	unk_0x62E4698C0067789A(1);
	Global_99236 = 0;
	func_120();
}

void func_120()
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			unk_0x5416146016E39BF7(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)), 1);
		}
		unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 32, 0);
	}
}

int func_121()
{
	return Global_99239;
}

int func_122()
{
	var uVar0;
	
	switch (func_13())
	{
		case 0:
			unk_0xBA16CA557222A92B(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0xBA16CA557222A92B(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0xBA16CA557222A92B(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

var func_123(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_124(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC3B073777B46C61A(uVar0)) && unk_0x03BBACB5FC5BF182(&(Global_99250.f_32503[iParam2 /*29*/].f_3)))
	{
		unk_0x45C91EE3FC674072(uVar0, &(Global_99250.f_32503[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1F2158D615BC4B25(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xBAA49E1DC5584B87(iParam0);
	if (unk_0xDD21A3DB256904E7(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_37(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
		}
		else
		{
			unk_0x80553402FCEB9A9C(uVar0, 2);
		}
	}
	else if (unk_0x94195F7CA642F937(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_37(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
		unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
	}
	else if (unk_0x0449EE7873816A89(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_37(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_125(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0xA4F14A9B0DDEB91E((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_126()
{
	Global_25350 = 1;
}

int func_127(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0xFB599990805DCA25(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			iVar3 = unk_0x092B61BA309C1C19(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0xB47C222C7C1816ED(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0x74F0C9C637E04E3B(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { unk_0xAF99169F0F5AE41D(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	uVar1 = unk_0x7E0D410C3318100E(iVar2, iVar3, Var5, iVar0, 1065353216, 0);
	while (func_128(iVar2, iVar8) != 0)
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			if (unk_0x3A6A59529A45F21B(iParam0, iVar2, func_128(iVar2, iVar8)))
			{
				unk_0xF478B548FAA1ADB6(uVar1, func_128(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		if (unk_0xFB599990805DCA25(iParam0, iVar2, 0))
		{
			unk_0x3F7413C136EC24AF(uVar1, unk_0x890D197157386718(iParam0, iVar2));
		}
	}
	return uVar1;
}

int func_128(int iParam0, int iParam1)
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
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
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
				iVar1 = func_129(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x81213480F9B88988(iVar1))
					{
						if (unk_0x2A3D95401DAF2A5F(iVar1, iParam1, &Var41))
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

int func_129(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xB8A07F7693D2ACD0();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x4D9EC363BAD16B5E(iVar0, uParam1))
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

bool func_130()
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

int func_131(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_132(iParam0, iParam1);
}

int func_132(int iParam0, int iParam1)
{
	if (func_15(14) && !func_143(iParam0))
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
	if (func_142(&Global_2558981))
	{
		if (func_140(&Global_2558981, iParam0))
		{
			return 0;
		}
		if (func_133(&Global_2558981, iParam0))
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

int func_133(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_143(iParam1))
	{
		return 0;
	}
	if (func_140(uParam0, iParam1))
	{
		return 0;
	}
	if (func_139(uParam0) < 0f)
	{
		func_138(uParam0, 0);
	}
	func_136(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_134(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_134(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_143(iParam1))
	{
		return 0;
	}
	if (func_140(uParam0, iParam1))
	{
		return 0;
	}
	if (func_139(uParam0) < 0f)
	{
		func_138(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_135(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_135(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_136(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_137(uParam0, iVar0);
		iVar0++;
	}
	func_138(uParam0, (Global_2558980 - 0.5f));
}

void func_137(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_138(var uParam0, float fParam1)
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

float func_139(var uParam0)
{
	return uParam0->f_72;
}

bool func_140(var uParam0, int iParam1)
{
	return func_141(uParam0, iParam1) != -1;
}

int func_141(var uParam0, int iParam1)
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

bool func_142(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_143(int iParam0)
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

void func_144()
{
	if (fLocal_183 > 0f)
	{
		fLocal_183 = (fLocal_183 - (0.6f / (1f / unk_0x5CB0A4A4240C1B6A())));
	}
	else
	{
		fLocal_183 = 0f;
	}
	if (fLocal_183 >= 0f)
	{
		unk_0xF5BF71EE00B09F42(Global_34823[10 /*31*/], fLocal_183, 0, 1);
		unk_0x39FEEC3E8273065D(Global_34823[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 < 0f)
	{
		fLocal_182 = (fLocal_182 + (0.6f / (1f / unk_0x5CB0A4A4240C1B6A())));
	}
	else
	{
		fLocal_182 = 0f;
	}
	if (fLocal_182 <= 0f)
	{
		unk_0xF5BF71EE00B09F42(Global_34823[9 /*31*/], fLocal_182, 0, 1);
		unk_0x39FEEC3E8273065D(Global_34823[9 /*31*/], 4, 0, 1);
	}
}

void func_145()
{
	if (fLocal_183 < 1f)
	{
		fLocal_183 = (fLocal_183 + (0.6f / (1f / unk_0x5CB0A4A4240C1B6A())));
	}
	else
	{
		fLocal_183 = 1f;
	}
	if (fLocal_183 <= 1f)
	{
		unk_0xF5BF71EE00B09F42(Global_34823[10 /*31*/], fLocal_183, 0, 1);
		unk_0x39FEEC3E8273065D(Global_34823[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 > -1f)
	{
		fLocal_182 = (fLocal_182 - (0.6f / (1f / unk_0x5CB0A4A4240C1B6A())));
	}
	else
	{
		fLocal_182 = -1f;
	}
	if (fLocal_182 >= -1f)
	{
		unk_0xF5BF71EE00B09F42(Global_34823[9 /*31*/], fLocal_182, 0, 1);
		unk_0x39FEEC3E8273065D(Global_34823[9 /*31*/], 4, 0, 1);
	}
}

void func_146()
{
	switch (iLocal_189)
	{
		case 0:
			unk_0xC60576ADD1AECA45(joaat("a_m_o_acult_02"));
			unk_0xC60576ADD1AECA45(joaat("prop_anim_cash_pile_02"));
			unk_0x6E2E777C1AD81C36("random@altruist_cult");
			unk_0x374D3B72ED08A312("AC_DELIVERED");
			unk_0xB20A0A9D50FA9F96(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x4A4B6FD54C499B7D(joaat("a_m_o_acult_02")) && unk_0x4A4B6FD54C499B7D(joaat("prop_anim_cash_pile_02"))) && unk_0x5263DE3D9A17A86F("random@altruist_cult")) && unk_0x374D3B72ED08A312("AC_DELIVERED")) && unk_0x12BE006683564B78(joaat("weapon_assaultrifle")))
			{
				if (Global_99250.f_29448.f_5 < 2)
				{
					if (Global_99250.f_29448.f_5 == 0)
					{
						sLocal_409 = "ACULT_HI";
					}
					else
					{
						sLocal_409 = "ACULT_LEAVE5";
					}
					sLocal_403 = "cult_p5_guard";
					sLocal_405 = "cult_p5_trv";
					sLocal_406 = "cult_p5_victim_01";
					sLocal_407 = "cult_p5_victim_02";
					sLocal_408 = "cult_p5_cam";
					fLocal_185 = 0.75f;
					fLocal_184 = 0.999f;
				}
				else if (Global_99250.f_29448.f_5 >= 2)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_407 = "cult_p7_victim_02";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					unk_0xC60576ADD1AECA45(joaat("prop_box_wood03a"));
					unk_0xC60576ADD1AECA45(joaat("prop_box_wood04a"));
					unk_0xC60576ADD1AECA45(joaat("prop_box_wood05a"));
					unk_0xC60576ADD1AECA45(joaat("prop_security_case_01"));
					if (!unk_0x8F97015FD3089C6B())
					{
						unk_0x3C0CECAD08F71003("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xC3B073777B46C61A(uLocal_228))
				{
					unk_0x296CDA10C549A502(&uLocal_228);
				}
				func_20(1, 1, 1, 0);
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
				unk_0x4ACCE973F9C3CA3B(1);
				unk_0x1B40500A7841D6AB(0);
				unk_0x488AF65D7EDB6B4A(0);
				unk_0xC845B8398E72DBF0(unk_0x77F050A399DB77ED(), 1);
				unk_0x9687CF9C13C1F6A1(unk_0x77F050A399DB77ED(), joaat("weapon_unarmed"), 1);
				unk_0x3345CB85AB9EC035("AC_DELIVERED");
				if (func_166())
				{
					func_165(0);
				}
				func_163();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					uLocal_213 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
					if (unk_0x968EA16107097324(uLocal_213, 0))
					{
						if (unk_0xFF56D249420BBDD7(uLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					uLocal_213 = unk_0xD8D1111EA0CFD1DB();
					if (!unk_0x1E80C02AC16B6622(uLocal_193[0]) && !unk_0x1E80C02AC16B6622(uLocal_193[1]))
					{
						unk_0xE2CB8488CFA42209(uLocal_193[0]);
						unk_0xD3778FD9E17F7E71(uLocal_193[0]);
						unk_0xE2CB8488CFA42209(uLocal_193[1]);
						unk_0xD3778FD9E17F7E71(uLocal_193[1]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (unk_0x1F2158D615BC4B25(uLocal_213))
			{
				if (!unk_0x335346A332B62CA2(iLocal_213))
				{
					unk_0x8D429A827A931AC9(iLocal_213, 1, 0);
				}
				if (unk_0xA427F05DB896EEBE(iLocal_213, Local_120, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x0B5F372F57E469AC(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x0B6E83A9A7ED3EBA(iLocal_213))
					{
						unk_0x2DA164E80FDEE7F2(iLocal_213, 149.8882f);
						unk_0xC1D3820702043A43(iLocal_213);
					}
				}
			}
			unk_0x0BA5964C07973FE9(Local_120, 12f, 1, 0, 0, 0);
			unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x2DA164E80FDEE7F2(unk_0x77F050A399DB77ED(), 128.2065f);
			if (!unk_0x1E80C02AC16B6622(uLocal_193[0]) && !unk_0x1E80C02AC16B6622(uLocal_193[1]))
			{
				unk_0x0B5F372F57E469AC(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x2DA164E80FDEE7F2(uLocal_193[0], 128.2065f);
				unk_0x0B5F372F57E469AC(uLocal_193[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0x2DA164E80FDEE7F2(uLocal_193[1], 128.2065f);
			}
			iLocal_196[0] = unk_0x6665DCC708A346F3(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_95(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_99250.f_29448.f_5 >= 2)
			{
				iLocal_196[1] = unk_0x6665DCC708A346F3(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_95(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_95(&uLocal_411, 0, unk_0x77F050A399DB77ED(), "TREVOR", 0, 1);
			func_95(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_95(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			func_96(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			unk_0x9526D9575C237F2F(iLocal_196[0], 1);
			iLocal_215 = unk_0x7E0D410C3318100E(joaat("weapon_assaultrifle"), -1, unk_0xAF99169F0F5AE41D(iLocal_196[0], 1), 1, 1065353216, 0);
			unk_0xCA41E71A6AD186D8(iLocal_215, iLocal_196[0], unk_0x49E48BFB98D99FE3(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_99250.f_29448.f_5 < 2)
			{
				uLocal_214 = unk_0x4A498A71A7B2E7A5(joaat("prop_anim_cash_pile_02"), Local_117, 1, 1, 0);
				unk_0xCA41E71A6AD186D8(uLocal_214, unk_0x77F050A399DB77ED(), unk_0x49E48BFB98D99FE3(unk_0x77F050A399DB77ED(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_99250.f_29448.f_5 >= 2)
			{
				unk_0x1592B6D205958934(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_246 = unk_0x6AC24FEF1D81F105("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_188 = unk_0xFCF0CDCAF2761068(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x3C6CCFC07FD12077(unk_0x77F050A399DB77ED(), uLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x3C6CCFC07FD12077(iLocal_196[0], uLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_99250.f_29448.f_5 >= 2)
			{
				unk_0x3C6CCFC07FD12077(iLocal_196[1], uLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x59AFD0717303A531(uLocal_246, uLocal_188, sLocal_408, "random@altruist_cult");
			unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
			if (!unk_0x1E80C02AC16B6622(uLocal_193[0]) && !unk_0x1E80C02AC16B6622(uLocal_193[1]))
			{
				unk_0x3C6CCFC07FD12077(uLocal_193[0], uLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0x3C6CCFC07FD12077(uLocal_193[1], uLocal_188, "random@altruist_cult", sLocal_407, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!unk_0x1E80C02AC16B6622(uLocal_193[0]))
			{
				if (unk_0x520A1DEEFD3C2DE4(uLocal_193[0]))
				{
					func_161(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_161(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x1E80C02AC16B6622(uLocal_193[1]))
			{
				if (unk_0x520A1DEEFD3C2DE4(uLocal_193[1]))
				{
					func_161(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_161(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x19779E7427AA44FB(uLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!unk_0x1E80C02AC16B6622(uLocal_193[0]))
			{
				if (unk_0x520A1DEEFD3C2DE4(uLocal_193[0]))
				{
					func_161(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_161(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x1E80C02AC16B6622(uLocal_193[1]))
			{
				if (unk_0x520A1DEEFD3C2DE4(uLocal_193[1]))
				{
					func_161(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_161(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x19779E7427AA44FB(uLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_99250.f_29448.f_5 < 2)
			{
				func_126();
				if (unk_0x1F2158D615BC4B25(iLocal_196[0]))
				{
					unk_0xAB3098579170FA46(&(iLocal_196[0]));
				}
				if (unk_0x1F2158D615BC4B25(iLocal_196[1]))
				{
					unk_0xAB3098579170FA46(&(iLocal_196[1]));
				}
				if (unk_0x1F2158D615BC4B25(iLocal_214))
				{
					unk_0x7D779528B7C61C13(&iLocal_214);
				}
				if (unk_0x1F2158D615BC4B25(iLocal_215))
				{
					unk_0x7D779528B7C61C13(&iLocal_215);
				}
				unk_0xE2CB8488CFA42209(unk_0x77F050A399DB77ED());
				unk_0x65E2694C43D34E9A(0, 0, 3, 0);
				unk_0x12A448112D057EB4(uLocal_246, 0);
				func_20(0, 1, 1, 0);
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
				unk_0x1B40500A7841D6AB(1);
				unk_0x488AF65D7EDB6B4A(1);
				unk_0xC845B8398E72DBF0(unk_0x77F050A399DB77ED(), 0);
				unk_0x8793DE27084C2CBD(0);
				func_147(func_13(), 1, 2000, 0, 0);
			}
			unk_0x3345CB85AB9EC035("AC_DONE");
			Global_99250.f_29448.f_5 += 2;
			iLocal_174 = 1;
			break;
	}
}

void func_147(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_148(Global_99250.f_32503[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_148(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_160();
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
					func_159(99, 1);
					func_158(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_158(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_158(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_156(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_155(5))
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
							func_158(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_158(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_158(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_155(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_158(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_158(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_158(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_158(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_158(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_158(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_158(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_158(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_158(joaat("sp2_money_spent_property"), iParam3);
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
									func_158(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_158(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_158(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_158(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_158(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_158(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_155(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_158(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_158(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_158(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_158(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_158(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_158(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_154(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_159(95, iParam3);
					break;
				
				case 1:
					func_159(97, iParam3);
					break;
				
				case 2:
					func_159(96, iParam3);
					break;
			}
			func_159(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_151(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_151(iVar1);
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
					func_158(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_158(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_158(joaat("sp2_total_cash_earned"), iParam3);
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
	func_150(iParam0);
	if (Global_35700 == 15)
	{
		func_149(0);
	}
	return 1;
}

void func_149(bool bParam0)
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

void func_150(int iParam0)
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

void func_151(int iParam0)
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
	else if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0) || unk_0xB56FEBC510E7E9DE(Global_2097152[func_153() /*10185*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		unk_0xA5F70A8B83BDFA49(&(Global_2097152[func_153() /*10185*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2B8B3581C4E63AD1("COUP_RED");
		unk_0x703D2B4B1C7E10B6(func_152(iParam0));
		unk_0xEF85B88DC049EA23(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_152(int iParam0)
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

int func_153()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_154(int iParam0)
{
	func_159(93, iParam0);
	func_159(29, iParam0);
	func_159(30, iParam0);
}

bool func_155(int iParam0)
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0);
	}
	return unk_0xB56FEBC510E7E9DE(Global_2097152[func_153() /*10185*/].f_7698.f_10, iParam0);
}

int func_156(bool bParam0)
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
		func_157(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_131(27, 1);
	return 1;
}

int func_157(int iParam0, int iParam1)
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

void func_158(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xBA16CA557222A92B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x5716C8F12991E399(iParam0, iVar0, 1);
}

void func_159(int iParam0, int iParam1)
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

void func_160()
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

void func_161(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x630E218FE7E4C793(uParam0, sParam1, sParam2, func_162(iParam3), 0);
}

int func_162(int iParam0)
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

void func_163()
{
	Global_14578 = 0;
	func_164();
}

void func_164()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
	}
}

void func_165(int iParam0)
{
	Global_16723 = iParam0;
}

int func_166()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_167()
{
	switch (iLocal_189)
	{
		case 0:
			unk_0xC60576ADD1AECA45(joaat("a_m_o_acult_02"));
			unk_0xC60576ADD1AECA45(joaat("prop_anim_cash_pile_02"));
			unk_0x6E2E777C1AD81C36("random@altruist_cult");
			unk_0x374D3B72ED08A312("AC_DELIVERED");
			unk_0xB20A0A9D50FA9F96(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x4A4B6FD54C499B7D(joaat("a_m_o_acult_02")) && unk_0x4A4B6FD54C499B7D(joaat("prop_anim_cash_pile_02"))) && unk_0x5263DE3D9A17A86F("random@altruist_cult")) && unk_0x374D3B72ED08A312("AC_DELIVERED")) && unk_0x12BE006683564B78(joaat("weapon_assaultrifle")))
			{
				if (Global_99250.f_29448.f_5 == 0)
				{
					sLocal_409 = "ACULT_HI";
					sLocal_403 = "cult_p2_guard";
					sLocal_405 = "cult_p2_trv";
					sLocal_406 = "cult_p2_victim";
					sLocal_408 = "cult_p2_cam";
					fLocal_185 = 0.8f;
					fLocal_184 = 0.968f;
				}
				else if (Global_99250.f_29448.f_5 == 1)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_99250.f_29448.f_5 == 2)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_99250.f_29448.f_5 >= 3)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					unk_0xC60576ADD1AECA45(joaat("prop_box_wood03a"));
					unk_0xC60576ADD1AECA45(joaat("prop_box_wood04a"));
					unk_0xC60576ADD1AECA45(joaat("prop_box_wood05a"));
					unk_0xC60576ADD1AECA45(joaat("prop_security_case_01"));
					if (!unk_0x8F97015FD3089C6B())
					{
						unk_0x3C0CECAD08F71003("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xC3B073777B46C61A(uLocal_228))
				{
					unk_0x296CDA10C549A502(&uLocal_228);
				}
				func_20(1, 1, 1, 0);
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
				unk_0x4ACCE973F9C3CA3B(1);
				unk_0x1B40500A7841D6AB(0);
				unk_0x488AF65D7EDB6B4A(0);
				unk_0xC845B8398E72DBF0(unk_0x77F050A399DB77ED(), 1);
				unk_0x9687CF9C13C1F6A1(unk_0x77F050A399DB77ED(), joaat("weapon_unarmed"), 1);
				unk_0x3345CB85AB9EC035("AC_DELIVERED");
				if (func_166())
				{
					func_165(0);
				}
				func_163();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					iLocal_213 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
					if (unk_0x968EA16107097324(iLocal_213, 0))
					{
						if (unk_0xFF56D249420BBDD7(iLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					iLocal_213 = unk_0xD8D1111EA0CFD1DB();
					if (!unk_0x1E80C02AC16B6622(uLocal_193[0]))
					{
						unk_0xE2CB8488CFA42209(uLocal_193[0]);
						unk_0xD3778FD9E17F7E71(uLocal_193[0]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (unk_0x1F2158D615BC4B25(iLocal_213))
			{
				if (!unk_0x335346A332B62CA2(iLocal_213))
				{
					unk_0x8D429A827A931AC9(iLocal_213, 1, 0);
				}
				if (unk_0xA427F05DB896EEBE(iLocal_213, Local_120, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x0B5F372F57E469AC(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x0B6E83A9A7ED3EBA(iLocal_213))
					{
						unk_0x2DA164E80FDEE7F2(iLocal_213, 149.8882f);
						unk_0xC1D3820702043A43(iLocal_213);
					}
				}
			}
			unk_0x0BA5964C07973FE9(Local_120, 12f, 1, 0, 0, 0);
			unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x2DA164E80FDEE7F2(unk_0x77F050A399DB77ED(), 128.2065f);
			if (!unk_0x1E80C02AC16B6622(uLocal_193[0]))
			{
				unk_0x0B5F372F57E469AC(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x2DA164E80FDEE7F2(uLocal_193[0], 128.2065f);
			}
			iLocal_196[0] = unk_0x6665DCC708A346F3(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_95(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_99250.f_29448.f_5 >= 3)
			{
				iLocal_196[1] = unk_0x6665DCC708A346F3(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_95(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_95(&uLocal_411, 0, unk_0x77F050A399DB77ED(), "TREVOR", 0, 1);
			func_95(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_95(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			if (Global_99250.f_29448.f_5 != 1 && Global_99250.f_29448.f_5 != 2)
			{
				func_96(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			unk_0x9526D9575C237F2F(iLocal_196[0], 1);
			iLocal_214 = unk_0x4A498A71A7B2E7A5(joaat("prop_anim_cash_pile_02"), Local_117, 1, 1, 0);
			iLocal_215 = unk_0x7E0D410C3318100E(joaat("weapon_assaultrifle"), -1, unk_0xAF99169F0F5AE41D(iLocal_196[0], 1), 1, 1065353216, 0);
			unk_0xCA41E71A6AD186D8(iLocal_215, iLocal_196[0], unk_0x49E48BFB98D99FE3(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_99250.f_29448.f_5 < 3)
			{
				if (Global_99250.f_29448.f_5 == 0)
				{
					unk_0xCA41E71A6AD186D8(iLocal_214, unk_0x77F050A399DB77ED(), unk_0x49E48BFB98D99FE3(unk_0x77F050A399DB77ED(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					unk_0xCA41E71A6AD186D8(iLocal_214, unk_0x77F050A399DB77ED(), unk_0x49E48BFB98D99FE3(unk_0x77F050A399DB77ED(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_99250.f_29448.f_5 >= 3)
			{
				unk_0x1592B6D205958934(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_246 = unk_0x6AC24FEF1D81F105("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_188 = unk_0xFCF0CDCAF2761068(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x3C6CCFC07FD12077(unk_0x77F050A399DB77ED(), uLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x3C6CCFC07FD12077(iLocal_196[0], uLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_99250.f_29448.f_5 >= 3)
			{
				unk_0x3C6CCFC07FD12077(iLocal_196[1], uLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x59AFD0717303A531(uLocal_246, uLocal_188, sLocal_408, "random@altruist_cult");
			unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
			if (!unk_0x1E80C02AC16B6622(uLocal_193[0]))
			{
				unk_0x3C6CCFC07FD12077(uLocal_193[0], uLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!unk_0x1E80C02AC16B6622(uLocal_193[0]))
			{
				if (unk_0x520A1DEEFD3C2DE4(uLocal_193[0]))
				{
					func_161(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_161(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xC9D9444186B5A374() > 2000 && unk_0xC9D9444186B5A374() < 2100)
			{
				if (Global_99250.f_29448.f_5 == 1 || Global_99250.f_29448.f_5 == 2)
				{
					if (!func_106())
					{
						func_96(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0x19779E7427AA44FB(uLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!unk_0x1E80C02AC16B6622(uLocal_193[0]))
			{
				if (unk_0x520A1DEEFD3C2DE4(uLocal_193[0]))
				{
					func_161(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_161(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_99250.f_29448.f_5 == 1 || Global_99250.f_29448.f_5 == 2)
			{
				if ((unk_0x19779E7427AA44FB(uLocal_188) > 0.9742857f && !iLocal_181) && unk_0xB534814830510EB1() == 4)
				{
					unk_0x23D87B2CECB53E05("CamPushInNeutral", 0, 0);
					unk_0xBBEB613A917D7EE8(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_181 = 1;
				}
			}
			if (unk_0x19779E7427AA44FB(uLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_99250.f_29448.f_5 < 3)
			{
				if (Global_99250.f_29448.f_5 != 1 && Global_99250.f_29448.f_5 != 2)
				{
					func_126();
					if (unk_0x1F2158D615BC4B25(iLocal_196[0]))
					{
						unk_0xAB3098579170FA46(&(iLocal_196[0]));
					}
					if (unk_0x1F2158D615BC4B25(iLocal_196[1]))
					{
						unk_0xAB3098579170FA46(&(iLocal_196[1]));
					}
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					if (unk_0x1F2158D615BC4B25(iLocal_196[0]))
					{
						unk_0x68E5332DF8C1DA5A(iLocal_196[0], 0, 0);
					}
					if (unk_0x1F2158D615BC4B25(iLocal_196[1]))
					{
						unk_0x68E5332DF8C1DA5A(iLocal_196[1], 0, 0);
					}
					if (unk_0x1F2158D615BC4B25(uLocal_193[0]))
					{
						unk_0x68E5332DF8C1DA5A(uLocal_193[0], 0, 0);
					}
					iLocal_189++;
				}
				if (unk_0x1F2158D615BC4B25(iLocal_214))
				{
					unk_0x7D779528B7C61C13(&iLocal_214);
				}
				if (unk_0x1F2158D615BC4B25(iLocal_215))
				{
					unk_0x7D779528B7C61C13(&iLocal_215);
				}
				unk_0xE2CB8488CFA42209(unk_0x77F050A399DB77ED());
				if (Global_99250.f_29448.f_5 == 0)
				{
					unk_0x7B3932B7F4D58411(unk_0x77F050A399DB77ED(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0x7FF7AE0F9EF39860(unk_0x8ACD527A7E574590(), 1f, 750, 0, 1, 0);
				}
				if (unk_0x35D1CAD6ADAB6491(sLocal_408, "cult_p4_cam"))
				{
					unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x65E2694C43D34E9A(0, 0, 3, 0);
				}
				unk_0x12A448112D057EB4(uLocal_246, 0);
				func_20(0, 1, 1, 0);
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
				unk_0x1B40500A7841D6AB(1);
				unk_0x488AF65D7EDB6B4A(1);
				unk_0xC845B8398E72DBF0(unk_0x77F050A399DB77ED(), 0);
				unk_0x8793DE27084C2CBD(0);
				func_147(func_13(), 1, 1000, 0, 0);
			}
			if (Global_99250.f_29448.f_5 != 1 && Global_99250.f_29448.f_5 != 2)
			{
				unk_0x3345CB85AB9EC035("AC_DONE");
				Global_99250.f_29448.f_5++;
				iLocal_174 = 1;
			}
			break;
		
		case 5:
			if (!func_106() || unk_0xC9D9444186B5A374() > 7000)
			{
				func_126();
				if (unk_0x1F2158D615BC4B25(iLocal_196[0]))
				{
					unk_0xAB3098579170FA46(&(iLocal_196[0]));
				}
				if (unk_0x1F2158D615BC4B25(iLocal_196[1]))
				{
					unk_0xAB3098579170FA46(&(iLocal_196[1]));
				}
				unk_0x3345CB85AB9EC035("AC_DONE");
				Global_99250.f_29448.f_5++;
				iLocal_174 = 1;
			}
			break;
	}
}

void func_168()
{
	if (func_170())
	{
		if (func_13() == 2)
		{
			if (unk_0x473E5CAC79C0F81B(func_169()))
			{
				unk_0x0B37E05739348CB1(func_169(), &uLocal_186, &iLocal_187);
				if (iLocal_187 == 1)
				{
					uLocal_193[0] = unk_0xC2946598219130DF(func_169(), 0);
					if (unk_0xA427F05DB896EEBE(uLocal_193[0], Local_120, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
						{
							if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
							{
								unk_0x29666BB73419DB0E(unk_0xD8D1111EA0CFD1DB(), 10.5f, 5, 0);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_187 == 2)
				{
					uLocal_193[0] = unk_0xC2946598219130DF(func_169(), 0);
					uLocal_193[1] = unk_0xC2946598219130DF(func_169(), 1);
					if (unk_0xA427F05DB896EEBE(uLocal_193[0], Local_120, 5f, 5f, 5f, 0, 1, 0) && unk_0xA427F05DB896EEBE(uLocal_193[1], Local_120, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
						{
							if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
							{
								unk_0x29666BB73419DB0E(unk_0xD8D1111EA0CFD1DB(), 10.5f, 5, 0);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

var func_169()
{
	return unk_0x9E97D0ACA210D142(unk_0x7F3E348C0892D8D2());
}

bool func_170()
{
	return Global_25349;
}

void func_171()
{
	if (func_174())
	{
		if (iLocal_400 == 0)
		{
			iLocal_400 = unk_0x2277155D92E898D2(Local_117 - Vector(100f, 60f, 80f), Local_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0xA2490B3CE6382FBB(func_91(unk_0x8ACD527A7E574590()), Local_117, 1) < 209f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_13() == 0 || func_13() == 1)
	{
		if (unk_0x46F133D12502B5EA(2017343592, joaat("player")) != 5)
		{
			if (func_173())
			{
				unk_0x329C14474C072D19(5, 2017343592, joaat("player"));
			}
			else if (func_172())
			{
				unk_0x329C14474C072D19(5, 2017343592, joaat("player"));
			}
		}
	}
	else if (func_13() == 2)
	{
		if (unk_0x46F133D12502B5EA(2017343592, joaat("player")) != 5)
		{
			if (func_173())
			{
				if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()) || (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()) && unk_0x0BDCAB0B67087552(unk_0x8ACD527A7E574590())))
				{
					unk_0x329C14474C072D19(5, 2017343592, joaat("player"));
				}
			}
			else if (func_172())
			{
				unk_0x329C14474C072D19(5, 2017343592, joaat("player"));
			}
			else if (unk_0x46F133D12502B5EA(2017343592, joaat("player")) != 1)
			{
				unk_0x329C14474C072D19(1, 2017343592, joaat("player"));
			}
		}
	}
	if (func_173())
	{
		if (iLocal_179)
		{
			if (!unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 3))
			{
				unk_0x3345CB85AB9EC035("AC_START");
			}
			unk_0x4AAD01BBE039D160(0f);
			unk_0x2084300F2D91A8E6("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0x38A4F2561FF18769(Global_34823[9 /*31*/].f_2, 6f, Global_34823[9 /*31*/].f_5, 0))
			{
				unk_0xF03D085241B09928(Global_34823[9 /*31*/].f_5, Global_34823[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0x38A4F2561FF18769(Global_34823[10 /*31*/].f_2, 6f, Global_34823[10 /*31*/].f_5, 0))
			{
				unk_0xF03D085241B09928(Global_34823[10 /*31*/].f_5, Global_34823[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_180 = true;
			iLocal_179 = 0;
		}
	}
	else if (!iLocal_179)
	{
		if (unk_0xE16D77674B8E59DE())
		{
			unk_0x3345CB85AB9EC035("AC_END");
		}
		unk_0x4AAD01BBE039D160(1f);
		unk_0x2084300F2D91A8E6("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_180)
		{
			func_144();
		}
		iLocal_179 = 1;
	}
}

int func_172()
{
	if ((((((unk_0xB678BA86C6A66E7E(Local_123, Local_126, fLocal_129, 1) || unk_0xB678BA86C6A66E7E(Local_130, Local_133, fLocal_136, 1)) || unk_0xB678BA86C6A66E7E(Local_137, Local_140, fLocal_143, 1)) || unk_0xB678BA86C6A66E7E(Local_144, Local_147, fLocal_150, 1)) || unk_0xB678BA86C6A66E7E(Local_151, Local_154, fLocal_157, 1)) || unk_0xB678BA86C6A66E7E(Local_158, Local_161, fLocal_164, 1)) || unk_0xB678BA86C6A66E7E(Local_165, Local_168, fLocal_171, 1))
	{
		return 1;
	}
	return 0;
}

int func_173()
{
	if ((((((unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_123, Local_126, fLocal_129, 0, 1, 0) || unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_130, Local_133, fLocal_136, 0, 1, 0)) || unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_137, Local_140, fLocal_143, 0, 1, 0)) || unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_144, Local_147, fLocal_150, 0, 1, 0)) || unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_151, Local_154, fLocal_157, 0, 1, 0)) || unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_158, Local_161, fLocal_164, 0, 1, 0)) || unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_165, Local_168, fLocal_171, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	if (Global_99250.f_29448.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_175()
{
	unk_0x329C14474C072D19(255, 2017343592, joaat("player"));
	if (Global_99250.f_29448.f_5 >= iLocal_192 && Global_99250.f_29448.f_5 != 1000)
	{
		if (bLocal_172)
		{
			func_1(1);
			func_9();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_176(&uLocal_249);
			Global_86696 = 0;
			Global_86697 = 0;
			Global_86698 = 0;
			func_12(0, 1);
			func_10(0, 1);
			func_2(0);
			unk_0x49206398F0E9D073(1);
			unk_0x69A565726CF5A560(0);
			unk_0x09F8090DDEB095B4(0);
			func_3(0);
			unk_0x4AAD01BBE039D160(1f);
			unk_0xC8CA2CBC777B0FA7(3, 1);
			unk_0xC8CA2CBC777B0FA7(5, 1);
			unk_0x7EB1B89F8E7D254E();
			iLocal_179 = 0;
			func_92();
			Global_99250.f_29448.f_5 = (iLocal_192 - 1);
			unk_0x2F798BA2098FDADE();
		}
	}
	else
	{
		unk_0x3309AB731FDAB1DB();
		func_176(&uLocal_249);
		Global_86696 = 0;
		Global_86697 = 0;
		Global_86698 = 0;
		func_12(0, 1);
		func_10(0, 1);
		func_2(0);
		unk_0x49206398F0E9D073(1);
		unk_0x69A565726CF5A560(0);
		unk_0x09F8090DDEB095B4(0);
		func_3(0);
		if (unk_0xEDE19C6ED6E2F478(uLocal_399))
		{
			unk_0xD2E03CEA477E4E3D(&uLocal_399);
			func_94(0);
		}
		unk_0x4AAD01BBE039D160(1f);
		unk_0xC8CA2CBC777B0FA7(3, 1);
		unk_0xC8CA2CBC777B0FA7(5, 1);
		unk_0x7EB1B89F8E7D254E();
		iLocal_179 = 0;
		unk_0x2F798BA2098FDADE();
	}
}

void func_176(var uParam0)
{
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		unk_0xD2E03CEA477E4E3D(uParam0);
		*uParam0 = 0;
	}
}

