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
	if (unk_0x76BF814AB8D4CAB8(26))
	{
		func_184();
	}
	if (unk_0xB95FCDA4D970FCF9())
	{
		unk_0x810C5D6462DD69E6();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x6E65FD9B611945AD() || iLocal_173)
		{
			unk_0x8BB3FA32294185BB(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
					{
						if (Global_104551.f_24965.f_5 >= iLocal_192 && !func_183())
						{
							iLocal_50 = 2;
						}
						func_180();
						func_177();
					}
					break;
				
				case 1:
					unk_0x41C542213B94067C(unk_0x8CFC7D6E1DA5D304());
					if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
					{
						if (unk_0x83666F9FB8FEBD4B() > 2000)
						{
							if (iLocal_187 == 1)
							{
								func_176();
							}
							else if (iLocal_187 == 2)
							{
								func_151();
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 1300)
						{
							if (iLocal_189 < 3)
							{
								func_150();
							}
							else
							{
								func_149();
							}
						}
						if (iLocal_174)
						{
							func_136(26, 1);
							iLocal_174 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					unk_0x41C542213B94067C(unk_0x8CFC7D6E1DA5D304());
					if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
					{
						func_108();
					}
					unk_0xF23A1E4D6AD3CAD2(Global_34982[9 /*31*/], 0, 0, 1);
					unk_0xF23A1E4D6AD3CAD2(Global_34982[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_175 = false;
					unk_0x8BB3FA32294185BB(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_196)
					{
						if (unk_0x0FAE113CE72ED842(iLocal_196[iVar0]))
						{
							if (unk_0xE769D9B5158D0F11(uLocal_229[iVar0]))
							{
								unk_0x40D517D991458154(&(uLocal_229[iVar0]));
							}
						}
						else
						{
							if (unk_0xBD085385A9807071(iLocal_196[iVar0]))
							{
								if (unk_0xE769D9B5158D0F11(uLocal_229[iVar0]))
								{
									unk_0x40D517D991458154(&(uLocal_229[iVar0]));
								}
							}
							else if (unk_0xEA07F07380ABC460(iLocal_196[iVar0], unk_0x18F7BE9ACB7D08F4(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_107())
								{
									if (iLocal_191 < unk_0x5AFB8ED811F05E4D())
									{
										iVar1 = unk_0x61E9B3BFA06B017B(0, 3);
										if (iVar1 == 0)
										{
											func_97(&uLocal_411, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_96(&uLocal_411, 1, iLocal_196[iVar0], "ACULTMember1", 0, 1);
											func_97(&uLocal_411, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_96(&uLocal_411, 2, iLocal_196[iVar0], "ACULTMember2", 0, 1);
											func_97(&uLocal_411, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_191 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(4500, 6000));
									}
								}
							}
							bLocal_175 = true;
						}
						iVar0++;
					}
					if (!bLocal_175)
					{
						func_60();
					}
					break;
				
				case 3:
					if (!iLocal_173)
					{
						uLocal_249 = func_59();
						if (!unk_0x5C716BBF766E1C70(uLocal_249))
						{
							break;
						}
						func_58(&uLocal_254, 0);
						iLocal_173 = 1;
					}
					if (func_29(&uLocal_254, &uLocal_260, &uLocal_249, cLocal_401, sLocal_402, &bLocal_172, 78))
					{
						iLocal_190 = 0;
						unk_0x174D10140C6EDAA7(uLocal_410);
						unk_0xD502A70DF6BA7106(uLocal_248);
						iVar0 = 0;
						while (iVar0 < iLocal_196)
						{
							if (unk_0x31F12808DC47A9E5(iLocal_196[iVar0]))
							{
								unk_0x63C116C2153FAA3C(&(iLocal_196[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_221)
						{
							if (unk_0x31F12808DC47A9E5(iLocal_221[iVar0]))
							{
								unk_0x5BE35A26B9097351(&(iLocal_221[iVar0]));
							}
							iVar0++;
						}
						if (unk_0x5400DC5FAEBF30F0(uLocal_246))
						{
							unk_0x2C535610856B3F4D(uLocal_246, 0);
						}
						if (unk_0x31F12808DC47A9E5(uLocal_215))
						{
							unk_0x5BE35A26B9097351(&uLocal_215);
						}
						if (unk_0x31F12808DC47A9E5(uLocal_215))
						{
							unk_0x5BE35A26B9097351(&uLocal_215);
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
							func_184();
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
			func_184();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0x3388DD13675FEE27(0);
		unk_0x35DF1961E23AC6F3(1);
		unk_0xD236BB37B2A8EBBC(0);
		func_2(1);
		Global_88232 = 1;
	}
	else
	{
		unk_0x3388DD13675FEE27(1);
		unk_0x35DF1961E23AC6F3(0);
		unk_0xD236BB37B2A8EBBC(1);
		func_2(0);
		Global_88232 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_35859 == 9 || Global_35859 == 10) || Global_35859 == 5)
	{
		Global_103200 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_103200 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0xD2A9C3F486236CC5(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14453.f_1 == 1)
	{
		if (!Global_14453.f_1 == 0)
		{
			Global_14453.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14615)
	{
		func_6(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_5())
	{
		Global_14453.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
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
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
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
		unk_0x9575CEFF222148A6("DeathFailOut", 0, 0);
		unk_0xD2A9C3F486236CC5(&iLocal_48, 1);
		func_11(1, 2, 0);
		unk_0x9D22D73B4AF4DB93(2);
	}
	else
	{
		if (unk_0xB03A1684359C50A1(iLocal_48, 1) || iParam1)
		{
			unk_0x605B63B87CCF606F("DeathFailOut");
			func_11(0, 2, 1);
			unk_0x9D22D73B4AF4DB93(0);
		}
		unk_0x62148293B793073B(&iLocal_48, 1);
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&iLocal_48, 2);
		if (!unk_0x44243F2E2F58B8E3())
		{
			if (iParam1 == 1)
			{
				unk_0x3F9FBB0647D763E2(0.2f);
			}
			else
			{
				unk_0x3F9FBB0647D763E2(0.075f);
			}
		}
	}
	else
	{
		if (unk_0xB03A1684359C50A1(iLocal_48, 2) || iParam2)
		{
			if (!unk_0x44243F2E2F58B8E3())
			{
				unk_0x3F9FBB0647D763E2(1f);
			}
		}
		unk_0x62148293B793073B(&iLocal_48, 2);
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
		if (!unk_0xB03A1684359C50A1(iLocal_48, 0) || iParam1)
		{
			unk_0x9575CEFF222148A6(sVar0, 0, 0);
			unk_0xD2A9C3F486236CC5(&iLocal_48, 0);
			func_11(1, 1, 0);
			unk_0x9D22D73B4AF4DB93(1);
		}
	}
	else
	{
		if (unk_0xB03A1684359C50A1(iLocal_48, 0) || iParam1)
		{
			unk_0x605B63B87CCF606F(sVar0);
			func_11(0, 1, 1);
			unk_0x9D22D73B4AF4DB93(0);
		}
		unk_0x62148293B793073B(&iLocal_48, 0);
	}
}

int func_13()
{
	func_14();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_14()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_18(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_17(unk_0x18F7BE9ACB7D08F4());
			if (func_16(iVar0) && (!func_15(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_16(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_15(int iParam0)
{
	return Global_35859 == iParam0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
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
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_28(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_5())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_27(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_28(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_27(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_25(unk_0x8CFC7D6E1DA5D304())) && !func_22(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_21())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_25(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_21()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_22(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_23(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
	}
	if (Global_1312834[iVar1] == 1)
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

int func_24()
{
	return Global_1312736;
}

int func_25(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_26())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_26()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_27(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

int func_29(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x64D773F3BE6DC50A("DEATH_SCENE");
			unk_0x929C3CBA660376D5(-1, "ScreenFlash", "WastedSounds", 1);
			func_57(&(uParam0->f_1));
			func_19();
			func_56(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x3B82047F26E2CEDB(1);
			break;
		
		case 1:
			if (func_54() || unk_0xEC0ECEF2AF3FDA8D())
			{
				*uParam0 = 2;
			}
			if (!func_53(uParam0->f_4, 4))
			{
				if (unk_0xFF22FE9205F44FB6("OFFMISSION_WASTED", 0, -1))
				{
					unk_0x929C3CBA660376D5(-1, "Bed", "WastedSounds", 1);
					func_51(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
			{
				if (!func_53(uParam0->f_4, 2))
				{
					unk_0x929C3CBA660376D5(-1, "TextHit", "WastedSounds", 1);
					func_51(&(uParam0->f_4), 2);
				}
				func_30(uParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_30(uParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_12(0, 1);
				func_10(0, 1);
				func_19();
				if (*iParam5)
				{
					unk_0x33537D95B422F0A2(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0x3B82047F26E2CEDB(0);
				unk_0x35DF1961E23AC6F3(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0x3388DD13675FEE27(1);
				func_12(0, 1);
				func_10(0, 1);
				unk_0xA11D9B06B99FE786("DEATH_SCENE");
				unk_0x3B82047F26E2CEDB(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0x3B82047F26E2CEDB(0);
			return 1;
			break;
	}
	return 0;
}

int func_30(var uParam0, var uParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0xEC0ECEF2AF3FDA8D() || unk_0xBC13F084F3B1B544())
			{
				unk_0xFF91FEC6E57575E4(2500);
				unk_0x0A4CB1D4A63A7528();
			}
			if (bParam9)
			{
				unk_0x3B82047F26E2CEDB(1);
			}
			unk_0x3F9FBB0647D763E2(0.2f);
			if (func_50(iParam5, 4))
			{
				if (unk_0xFF22FE9205F44FB6("generic_failed", 0, -1))
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
			unk_0x76F4FB5EFF5BDED5(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x0ECBA72FAFCEBA59("STRING");
			unk_0x70A9E4720D71C2D5(6);
			unk_0xBEFD1ED9B6BE5127(uParam2);
			unk_0xC30401186AC91B01();
			func_49(sParam3);
			unk_0x22DD5585E00B80C3(100);
			unk_0xD6F1BD29497A51C8(true);
			unk_0xA2A6B56DFF85AF55();
			if (func_50(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x76F4FB5EFF5BDED5(*uParam0, "TRANSITION_UP");
					unk_0x954263F3D07BEFC2(uParam1->f_134);
					unk_0xE2B30EB9B14EEAB2();
					uParam1->f_136 = 1;
				}
			}
			if (!func_50(iParam5, 1))
			{
				unk_0x2E46E316136A29F6(0);
			}
			func_48(&(uParam1->f_10), 0, 1, 1, 1);
			func_47(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_47(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_50(iParam5, 4))
			{
				unk_0x929C3CBA660376D5(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_50(iParam5, 8))
			{
				switch (func_13())
				{
					case 0:
						unk_0x9575CEFF222148A6("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x9575CEFF222148A6("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x9575CEFF222148A6("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_46(&(uParam1->f_1)))
			{
				func_45(&(uParam1->f_1));
			}
			if (func_50(iParam5, 2))
			{
				if (!func_46(&(uParam1->f_4)))
				{
					func_45(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0xE52EBB41DB0E0329();
			if (func_50(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x76F4FB5EFF5BDED5(*uParam0, "TRANSITION_UP");
					unk_0x954263F3D07BEFC2(uParam1->f_134);
					unk_0xE2B30EB9B14EEAB2();
					uParam1->f_136 = 1;
				}
			}
			unk_0x31B38BBC4423BEAF(iParam6);
			func_43(uParam0, 0, 0);
			if (!func_50(iParam5, 16) && (func_41(&(uParam1->f_1)) >= uParam1->f_135 || unk_0xEC0ECEF2AF3FDA8D()))
			{
				func_35(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x3C97A09EF6BCD140();
				if (unk_0x3469AD51EA8B9583(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x929C3CBA660376D5(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						unk_0xE04A693397BA738B(0);
					}
					func_34(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x3469AD51EA8B9583(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x929C3CBA660376D5(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						unk_0xE04A693397BA738B(0);
					}
					func_34(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_50(iParam5, 2))
			{
				if (func_41(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x929C3CBA660376D5(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						unk_0xE04A693397BA738B(0);
					}
					func_34(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_43(uParam0, 0, 0);
			unk_0x3F9FBB0647D763E2(1f);
			if (uParam1->f_138 || !((unk_0x9D39145AD645E383("stunt_plane_races", unk_0xFCA64981FEF7C913()) || unk_0x9D39145AD645E383("pilot_school", unk_0xFCA64981FEF7C913())) || (unk_0x9D39145AD645E383("bj", unk_0xFCA64981FEF7C913()) && unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))))
			{
				unk_0x8359CF51370FC969(2500);
			}
			if (func_50(iParam5, 64) && uParam1->f_138)
			{
				unk_0xFF91FEC6E57575E4(500);
			}
			func_31(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x3B82047F26E2CEDB(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_41(&(uParam1->f_4)) <= 0.1f)
			{
				func_43(uParam0, 0, 0);
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

void func_31(var uParam0)
{
	func_32(uParam0, 0f);
}

void func_32(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_33(unk_0xB03A1684359C50A1(*uParam0, 4)) - fParam1);
	unk_0xD2A9C3F486236CC5(uParam0, 1);
	unk_0x62148293B793073B(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_33(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar2 = unk_0xE92FCF3C05C2EF1D();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()) / 1000f);
}

void func_34(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0xEBE532BFFE618875(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_35(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	
	if (((unk_0xBC13F084F3B1B544() || unk_0x610450B2545892B5()) || unk_0xEC0ECEF2AF3FDA8D()) || unk_0xC5B946266AEC83EB())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_40(uParam0))
	{
		return;
	}
	unk_0xE52EBB41DB0E0329();
	unk_0x31B38BBC4423BEAF(uParam2);
	if (!func_50(uParam0->f_1, 256) || (func_50(uParam0->f_1, 8192) && unk_0x32085AF1EB302CDD(2)))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_CLEAR_SPACE");
		unk_0x954263F3D07BEFC2(fParam1);
		unk_0xE2B30EB9B14EEAB2();
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_MAX_WIDTH");
		unk_0x954263F3D07BEFC2(fParam5);
		unk_0xE2B30EB9B14EEAB2();
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xE2B30EB9B14EEAB2();
		if (unk_0xC339C5C5B5E8BC5B())
		{
			unk_0x76F4FB5EFF5BDED5(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD6F1BD29497A51C8(func_50(uParam0->f_1, 4096));
			unk_0xE2B30EB9B14EEAB2();
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
					bVar4 = unk_0xC9FF45E740135482(2);
					break;
				
				case 2:
					bVar4 = !unk_0xC9FF45E740135482(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x22DD5585E00B80C3(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xB03A1684359C50A1(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0xB03A1684359C50A1(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0x305BC30EAC3E9BF4(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0x33206AC5E51B4373(uVar0, uVar1, bVar2);
						}
						if (!unk_0xFAFFA408239A026B(uVar3))
						{
							func_39(uVar3);
						}
						iVar7++;
					}
					if (!unk_0xFAFFA408239A026B(uParam0->f_2[iVar6 /*15*/]))
					{
						func_49(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xC339C5C5B5E8BC5B())
					{
						if (func_50(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xD6F1BD29497A51C8(true);
								unk_0x22DD5585E00B80C3(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xD6F1BD29497A51C8(false);
								unk_0x22DD5585E00B80C3(-1);
							}
						}
					}
					unk_0xE2B30EB9B14EEAB2();
				}
			}
			iVar6++;
		}
		fVar8 = func_38(bParam4, func_38(func_50(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x76F4FB5EFF5BDED5(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x954263F3D07BEFC2(fVar8);
		unk_0xE2B30EB9B14EEAB2();
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x954263F3D07BEFC2(0f);
		unk_0x954263F3D07BEFC2(0f);
		unk_0x954263F3D07BEFC2(0f);
		unk_0x954263F3D07BEFC2(80f);
		unk_0xE2B30EB9B14EEAB2();
		func_37(&(uParam0->f_1), 256);
		func_36(&(uParam0->f_1), 128);
	}
	unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 0, 0);
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_38(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_39(var uParam0)
{
	unk_0xC34A54899652DAAF(uParam0);
}

int func_40(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x5C716BBF766E1C70(*uParam0))
		{
			func_37(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_41(var uParam0)
{
	if (func_46(uParam0))
	{
		if (func_42(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_33(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_42(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 2);
}

int func_43(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_46(&(uParam0->f_2)))
	{
		func_31(&(uParam0->f_2));
	}
	unk_0xE05212008FE9A018(14);
	if (!bParam2)
	{
		unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x02EA7C5633421A0F(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_41(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_44(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_44(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_45(var uParam0)
{
	if (!func_46(uParam0))
	{
		func_31(uParam0);
	}
}

bool func_46(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 1);
}

int func_47(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_48(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xC6483FE5035615A1("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_37(&(uParam0->f_1), 32);
	}
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		func_37(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x874AA5FC7D37BA36(*uParam0, 1);
		}
	}
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (bParam3)
		{
			func_37(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_37(&(uParam0->f_1), 8192);
	}
}

void func_49(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

bool func_50(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_51(var uParam0, int iParam1)
{
	func_52(uParam0, iParam1);
}

void func_52(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_54()
{
	if (!unk_0xB03A1684359C50A1(iLocal_48, 0) && !unk_0xB03A1684359C50A1(iLocal_48, 1))
	{
		unk_0xC1B1E9A034A63A62(0);
		func_12(1, 0);
	}
	if (!unk_0xEAE1A41FBC3984B1())
	{
		unk_0x08FC50794202A47C();
	}
	unk_0x9C7EE7DE7041A3F4(2, 199, 1);
	unk_0x9C7EE7DE7041A3F4(0, 59, 1);
	unk_0x9C7EE7DE7041A3F4(0, 60, 1);
	unk_0x9C7EE7DE7041A3F4(0, 37, 1);
	unk_0x9C7EE7DE7041A3F4(0, 25, 1);
	unk_0xCD1021B106F38DA8();
	if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
	{
		if (!unk_0xB03A1684359C50A1(iLocal_48, 1))
		{
			func_10(1, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if (IntToFloat(unk_0xC9D9444186B5A374()) > (1500f * 0.075f) || unk_0xEC0ECEF2AF3FDA8D())
		{
			if (!unk_0xEC0ECEF2AF3FDA8D())
			{
				if (!unk_0xBC13F084F3B1B544())
				{
					unk_0xFF91FEC6E57575E4(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = unk_0x5AFB8ED811F05E4D() + 1000;
				if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
				{
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
				}
				func_11(0, 2, 1);
				func_20(1, 1, 1, 0);
				func_3(1);
				unk_0xC7BACA18BF4E6E29(0);
				unk_0x179552E54EF979F6(0);
				unk_0xEFF1F12403847394(1);
				unk_0x08FC50794202A47C();
				if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
				{
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
				}
				func_12(0, 0);
				func_55(0);
			}
			else if (unk_0x5AFB8ED811F05E4D() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xB03A1684359C50A1(iLocal_48, 3))
			{
				unk_0xDF94C6DB72E69D64(1);
				unk_0xD2A9C3F486236CC5(&iLocal_48, 3);
			}
		}
		else if (unk_0xB03A1684359C50A1(iLocal_48, 3))
		{
			unk_0xDF94C6DB72E69D64(0);
			unk_0x62148293B793073B(&iLocal_48, 3);
		}
	}
}

void func_56(var uParam0, float fParam1, float fParam2)
{
	if (func_46(&(uParam0->f_1)))
	{
		func_44(&(uParam0->f_1));
	}
	if (func_46(&(uParam0->f_4)))
	{
		func_44(&(uParam0->f_4));
	}
	func_34(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_57(var uParam0)
{
	if (!func_46(uParam0))
	{
		func_45(uParam0);
	}
	else
	{
		func_31(uParam0);
	}
}

void func_58(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0xFF22FE9205F44FB6("OFFMISSION_WASTED", 0, -1);
}

var func_59()
{
	return unk_0xBD7D7877C82BE42F("MP_BIG_MESSAGE_FREEMODE");
}

void func_60()
{
	if (!iLocal_176)
	{
		unk_0x2FA5BED6B7B0F0D4("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_104551.f_24965.f_5 = 1000;
		unk_0xC60DA08985E74751(64);
		Global_104551.f_20534.f_472 = 54;
		uLocal_399 = unk_0xBD7D7877C82BE42F("MIDSIZED_MESSAGE");
		func_95(1);
		while (!unk_0x5C716BBF766E1C70(uLocal_399))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x76F4FB5EFF5BDED5(uLocal_399, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_49("CULT_PASS");
		unk_0xA2A6B56DFF85AF55();
		while (!func_94())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_93();
		unk_0xC1B1E9A034A63A62(0);
		unk_0x929C3CBA660376D5(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_176 = 1;
	}
	unk_0x5E70D9959D6F2350(uLocal_399, 255, 255, 255, 255, 0);
	if (!iLocal_178)
	{
		if (unk_0x83666F9FB8FEBD4B() > 9500)
		{
			unk_0x76F4FB5EFF5BDED5(uLocal_399, "SHARD_ANIM_OUT");
			unk_0x22DD5585E00B80C3(1);
			unk_0x954263F3D07BEFC2(0.33f);
			unk_0xE2B30EB9B14EEAB2();
			iLocal_178 = 1;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() > 10000)
	{
		if (unk_0x5C716BBF766E1C70(uLocal_399))
		{
			unk_0xEBE532BFFE618875(&uLocal_399);
			func_95(0);
		}
		while (unk_0x15EE504466B7BBD3(func_92(unk_0x8CFC7D6E1DA5D304()), Local_117, 1) < 209f && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_61(18);
		func_184();
	}
}

void func_61(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_90();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_89())
	{
		func_67(iParam0);
		unk_0xC5FD44365E5AB875(0, 0);
		Global_104542 = unk_0x5AFB8ED811F05E4D();
		func_66(30000);
		StringCopy(&cVar0, func_65(Global_104540, 1), 64);
		if (func_64(Global_104540) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104539, 64);
		}
		unk_0x50686B0B250B8042(&cVar0, Global_104537, (unk_0x5AFB8ED811F05E4D() - Global_104538), 0);
	}
	else if (unk_0xB03A1684359C50A1(Global_104547, 0) && Global_104551.f_24965.f_2 < 3)
	{
		unk_0x62148293B793073B(&Global_104547, 0);
	}
	func_63(&Global_25292);
	Global_104541 = 0;
	func_62(-1);
}

void func_62(int iParam0)
{
	Global_104540 = iParam0;
}

void func_63(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35821)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35820 = 0;
	Global_35822 = 0;
	Global_35859 = 15;
	Global_55898 = 0;
	Global_55899 = 0;
}

int func_64(int iParam0)
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

char* func_65(int iParam0, bool bParam1)
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

void func_66(int iParam0)
{
	Global_36410 = (unk_0x5AFB8ED811F05E4D() + iParam0);
}

void func_67(int iParam0)
{
	func_68(iParam0, 0, func_88(iParam0));
}

void func_68(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_87();
	func_78(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_77(iParam0, &uVar0);
	Var1 = { func_69(&uVar0) };
}

struct<16> func_69(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_76(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
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
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_73(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_72(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_70(*uParam0), 64);
	return Var0;
}

int func_70(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_71(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_71(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_72(var uParam0)
{
	return uParam0 & 15;
}

int func_73(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_74(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_75(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_76(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

void func_77(int iParam0, var uParam1)
{
	Global_104551.f_24965.f_43[iParam0] = *uParam1;
}

void func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_70(*uParam0);
	iVar1 = func_72(*uParam0);
	iVar2 = func_73(*uParam0);
	iVar3 = func_76(*uParam0);
	iVar4 = func_75(*uParam0);
	iVar5 = func_74(*uParam0);
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
	iVar6 = func_86(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_86(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_79(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_85(uParam0, iParam1);
	func_84(uParam0, iParam2);
	func_83(uParam0, iParam3);
	func_82(uParam0, iParam5);
	func_81(uParam0, iParam4);
	func_80(uParam0, iParam6);
}

void func_80(var uParam0, int iParam1)
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

void func_81(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_72(*uParam0);
	iVar1 = func_70(*uParam0);
	if (iParam1 < 1 || iParam1 > func_86(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_82(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_86(int iParam0, int iParam1)
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

var func_87()
{
	var uVar0;
	
	func_85(&uVar0, unk_0xB093145A4ED05C87());
	func_84(&uVar0, unk_0x4BF279EB036481A0());
	func_83(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_81(&uVar0, unk_0x518720E0DE404FFC());
	func_82(&uVar0, unk_0x5E3E9A684A609866());
	func_80(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

int func_88(int iParam0)
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

int func_89()
{
	if ((Global_104540 == func_90() && unk_0xD436A6CEB14BAC66()) && Global_104541)
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xFCA64981FEF7C913(), 64);
	uVar16 = func_91(Var0);
	return uVar16;
}

int func_91(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x6E987D62C8535B6E(&cParam0))
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

Vector3 func_92(int iParam0)
{
	return unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iParam0), 0);
}

void func_93()
{
	Global_25467 = 0;
	Global_25468 = 0;
	Global_25470 = 0;
	Global_25471 = 0;
	Global_25472 = 0;
}

int func_94()
{
	return 1;
}

void func_95(int iParam0)
{
	Global_71112 = iParam0;
	Global_71113 = iParam0;
}

void func_96(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

int func_97(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_106(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_98(sParam2, iParam3, 0);
}

int func_98(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xBE97F4E2B659331B(0);
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
					func_105();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_104(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_103();
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
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_102();
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
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_101())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
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
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_100();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_99();
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
		func_105();
	}
	return 0;
}

void func_99()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_100()
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
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_101()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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

void func_102()
{
	if (func_15(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
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
		Global_14453 = func_13();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

void func_103()
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

bool func_104(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

void func_105()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_106(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = uParam5;
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

int func_107()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

void func_108()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_190)
	{
		case 0:
			unk_0xD7C3C869A650A1D6("THUNDER", 20f);
			if (!unk_0x61F9977B378C43BF())
			{
				unk_0xFC829E6465CFFAC1("ac_ig_3_p3_b", 8);
			}
			unk_0x9016574B77A748EE(joaat("a_m_o_acult_02"));
			unk_0x9016574B77A748EE(joaat("a_m_y_acult_02"));
			unk_0x9016574B77A748EE(joaat("prop_box_wood03a"));
			unk_0x9016574B77A748EE(joaat("prop_box_wood04a"));
			unk_0x9016574B77A748EE(joaat("prop_box_wood05a"));
			unk_0x9016574B77A748EE(joaat("prop_security_case_01"));
			while ((((((!func_135() || !unk_0xEDFE27D1AEA0EA7F(joaat("a_m_o_acult_02"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("a_m_y_acult_02"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("prop_box_wood03a"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("prop_box_wood04a"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("prop_box_wood05a"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("prop_security_case_01")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			uLocal_576 = func_128(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (unk_0x31F12808DC47A9E5(uLocal_576))
			{
				unk_0x8440A52435684AA5(iLocal_576, "Trevors_weapon", 0, 0, 0);
			}
			unk_0x8440A52435684AA5(0, "Rifle_Mag1^1", 3, unk_0xFF50A7C268ACC65F(joaat("component_assaultrifle_clip_01")), 0);
			if (func_135() && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x8440A52435684AA5(unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 0, 0);
				unk_0x8440A52435684AA5(iLocal_196[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x8440A52435684AA5(iLocal_196[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x8440A52435684AA5(iLocal_196[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x8440A52435684AA5(iLocal_196[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x8440A52435684AA5(iLocal_196[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xCE82A1B9F41AE9D1(0);
			}
			unk_0x4EDE34FBADD967A6(0);
			if (!bLocal_172 && Global_104551.f_24965.f_5 != 1000)
			{
				func_127();
			}
			if (unk_0x31F12808DC47A9E5(iLocal_196[0]))
			{
				unk_0x63C116C2153FAA3C(&(iLocal_196[0]));
			}
			if (unk_0x31F12808DC47A9E5(iLocal_196[1]))
			{
				unk_0x63C116C2153FAA3C(&(iLocal_196[1]));
			}
			if (unk_0x5400DC5FAEBF30F0(uLocal_246))
			{
				unk_0x2C535610856B3F4D(uLocal_246, 0);
			}
			if (unk_0x31F12808DC47A9E5(uLocal_215))
			{
				unk_0x5BE35A26B9097351(&iLocal_215);
			}
			if (unk_0x31F12808DC47A9E5(iLocal_215))
			{
				unk_0x5BE35A26B9097351(&iLocal_215);
			}
			unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
			if (unk_0xE769D9B5158D0F11(uLocal_228))
			{
				unk_0x40D517D991458154(&uLocal_228);
			}
			func_20(1, 1, 1, 0);
			unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
			unk_0xEFF1F12403847394(1);
			unk_0x4A3AD9384F0AAEA0(0);
			unk_0x77B57B2BB7F3EA0A(0);
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0xCB70BD6BF4CCD313(unk_0x18F7BE9ACB7D08F4(), 1);
			}
			unk_0x7EE425AE3317BA69(Local_117, 100f, 1, 0, 0, 0);
			unk_0x1701E0E6A11D6B65(Local_117 - Vector(100f, 60f, 80f), Local_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0x8BB3FA32294185BB(0f);
			unk_0x4F7751BE82240EB4(3, 0);
			unk_0x4F7751BE82240EB4(5, 0);
			uLocal_248 = unk_0xE8240F4B10D2E00F(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			unk_0x9016574B77A748EE(joaat("a_m_o_acult_01"));
			while (!unk_0xEDFE27D1AEA0EA7F(joaat("a_m_o_acult_01")))
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
			if (unk_0xAA006BC2D04125D0(0))
			{
				if (unk_0x2D6E6D9121DADEC3("CULT_MASTER", 0))
				{
					if (!unk_0x31F12808DC47A9E5(iLocal_196[11]))
					{
						iLocal_196[11] = unk_0x6DE4035D8BAB73B4(unk_0x2A85945A11445A45("CULT_MASTER", 0));
					}
				}
				if (unk_0x2D6E6D9121DADEC3("REAR_CULT", 0))
				{
					if (!unk_0x31F12808DC47A9E5(iLocal_196[12]))
					{
						iLocal_196[12] = unk_0x6DE4035D8BAB73B4(unk_0x2A85945A11445A45("REAR_CULT", 0));
					}
				}
				if (unk_0x2D6E6D9121DADEC3("LEFT_OLD_CULT", 0))
				{
					if (!unk_0x31F12808DC47A9E5(iLocal_196[13]))
					{
						iLocal_196[13] = unk_0x6DE4035D8BAB73B4(unk_0x2A85945A11445A45("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0x2D6E6D9121DADEC3("CARBINE_CULT", 0))
				{
					if (!unk_0x31F12808DC47A9E5(iLocal_196[14]))
					{
						iLocal_196[14] = unk_0x6DE4035D8BAB73B4(unk_0x2A85945A11445A45("CARBINE_CULT", 0));
					}
				}
				if (unk_0x2D6E6D9121DADEC3("SHOTGUN_CULT", 0))
				{
					if (!unk_0x31F12808DC47A9E5(iLocal_196[15]))
					{
						iLocal_196[15] = unk_0x6DE4035D8BAB73B4(unk_0x2A85945A11445A45("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0x2D6E6D9121DADEC3("TREVOR", 0))
				{
					unk_0xCB70BD6BF4CCD313(unk_0x18F7BE9ACB7D08F4(), 0);
					unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 188.9369f);
					unk_0x2DAB9CE995349E71(unk_0x18F7BE9ACB7D08F4(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, uLocal_248, 0);
					unk_0x8F2E6C470A0005D4(unk_0x18F7BE9ACB7D08F4(), 1, 0);
				}
				if (unk_0x2D6E6D9121DADEC3("Trevors_weapon", 0))
				{
					unk_0x75616CE88670A77D(iLocal_576, unk_0x18F7BE9ACB7D08F4());
				}
				unk_0xA3F41A1968319181(91.3878f);
				unk_0x4CCECEB2EA5D6A82(4.4337f, 1065353216);
				func_20(0, 1, 1, 0);
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				unk_0x4A3AD9384F0AAEA0(1);
				unk_0x77B57B2BB7F3EA0A(1);
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
				unk_0x48E76A4B7B58B77A("rghCult", &uLocal_410);
				iVar1 = 0;
				while (iVar1 < iLocal_196)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_196[iVar1] = unk_0x364B87C5C64BD100(26, joaat("a_m_o_acult_01"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x48FBF866E2964067(iLocal_196[iVar1], 0);
						unk_0x7D154B840BD03D00(iLocal_196[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0x9B78D121254B9A0D(iLocal_196[iVar1], 0);
						unk_0x8FC929A8E84AB2A1(iLocal_196[iVar1], 2);
						unk_0x65BDFD38AF3A3CE9(iLocal_196[iVar1], 50f, 20);
						unk_0x9D02030EF7A1C310(iLocal_196[iVar1], 5);
						unk_0x7D40DD402BF99FB7(iLocal_196[iVar1], 100f);
						unk_0x067F16ECAED88B7F(iLocal_196[iVar1], 100f);
						unk_0x874004759C4BE8DC(iLocal_196[iVar1], 150);
						unk_0xE54D36F901A54378(iLocal_196[iVar1], unk_0x61E9B3BFA06B017B(40, 60));
						unk_0x48B25C02FAB9DC81(iLocal_196[iVar1], unk_0x18F7BE9ACB7D08F4(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_196[iVar1] = unk_0x364B87C5C64BD100(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x48FBF866E2964067(iLocal_196[iVar1], 0);
						unk_0x7D154B840BD03D00(iLocal_196[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0x273FE09AE985A00A(iLocal_196[iVar1], 50, 1);
						unk_0x9B78D121254B9A0D(iLocal_196[iVar1], 2);
						unk_0x8FC929A8E84AB2A1(iLocal_196[iVar1], 1);
						unk_0x65BDFD38AF3A3CE9(iLocal_196[iVar1], 50f, 20);
						unk_0x9D02030EF7A1C310(iLocal_196[iVar1], 5);
						unk_0x7D40DD402BF99FB7(iLocal_196[iVar1], 100f);
						unk_0x067F16ECAED88B7F(iLocal_196[iVar1], 100f);
						unk_0xE54D36F901A54378(iLocal_196[iVar1], unk_0x61E9B3BFA06B017B(40, 60));
						unk_0x48B25C02FAB9DC81(iLocal_196[iVar1], unk_0x18F7BE9ACB7D08F4(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0x0FAE113CE72ED842(iLocal_196[iVar1]) && !unk_0x0FAE113CE72ED842(iLocal_196[11])) && !unk_0x0FAE113CE72ED842(iLocal_196[12])) && !unk_0x0FAE113CE72ED842(iLocal_196[13])) && !unk_0x0FAE113CE72ED842(iLocal_196[14])) && !unk_0x0FAE113CE72ED842(iLocal_196[15]))
						{
							unk_0x7D154B840BD03D00(iLocal_196[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0x7D154B840BD03D00(iLocal_196[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x7D154B840BD03D00(iLocal_196[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x7D154B840BD03D00(iLocal_196[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0x7D154B840BD03D00(iLocal_196[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0x273FE09AE985A00A(iLocal_196[iVar1], 0, 1);
							unk_0x9B78D121254B9A0D(iLocal_196[iVar1], 3);
							unk_0x8FC929A8E84AB2A1(iLocal_196[iVar1], 0);
							unk_0x9D02030EF7A1C310(iLocal_196[iVar1], 0);
							unk_0xB282BFA7D16EBBE5(iLocal_196[iVar1], 1f, 1f);
							unk_0xC8BEB049F3BFC0AB(&uLocal_247);
							unk_0x394F5D18B411ECAD(0, -1159.33f, 4924.412f, 221.6576f, unk_0x18F7BE9ACB7D08F4(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 6000, 0);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 4500, 0);
							unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
							unk_0xAFDA7B8F83B2CA58(uLocal_247);
							unk_0x73F69DD57B7E92A9(iLocal_196[15], uLocal_247);
							unk_0x56C7B20E11B37066(&uLocal_247);
							unk_0xC8BEB049F3BFC0AB(&uLocal_247);
							unk_0x394F5D18B411ECAD(0, -1163.279f, 4932.933f, 222.541f, unk_0x18F7BE9ACB7D08F4(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x97755158E880361F(0, unk_0x18F7BE9ACB7D08F4(), 5000, 0);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 7500, 0);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 4500, 0);
							unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
							unk_0xAFDA7B8F83B2CA58(uLocal_247);
							unk_0x73F69DD57B7E92A9(iLocal_196[14], uLocal_247);
							unk_0x56C7B20E11B37066(&uLocal_247);
							unk_0xC8BEB049F3BFC0AB(&uLocal_247);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 2500, 0);
							unk_0x97755158E880361F(0, unk_0x18F7BE9ACB7D08F4(), 5000, 0);
							unk_0x394F5D18B411ECAD(0, -1156.175f, 4926.073f, 221.3447f, unk_0x18F7BE9ACB7D08F4(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 6500, 0);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 4500, 0);
							unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
							unk_0xAFDA7B8F83B2CA58(uLocal_247);
							unk_0x73F69DD57B7E92A9(iLocal_196[13], uLocal_247);
							unk_0x56C7B20E11B37066(&uLocal_247);
							unk_0xC8BEB049F3BFC0AB(&uLocal_247);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 3000, 0);
							unk_0x394F5D18B411ECAD(0, -1157.962f, 4922.196f, 221.309f, unk_0x18F7BE9ACB7D08F4(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 5500, 0);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 4500, 0);
							unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
							unk_0xAFDA7B8F83B2CA58(uLocal_247);
							unk_0x73F69DD57B7E92A9(iLocal_196[12], uLocal_247);
							unk_0x56C7B20E11B37066(&uLocal_247);
							unk_0xC8BEB049F3BFC0AB(&uLocal_247);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 4500, 0);
							unk_0x97755158E880361F(0, unk_0x18F7BE9ACB7D08F4(), 10000, 0);
							unk_0x394F5D18B411ECAD(0, -1161.475f, 4916.061f, 220.5658f, unk_0x18F7BE9ACB7D08F4(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 4500, 0);
							unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 4500, 0);
							unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
							unk_0xAFDA7B8F83B2CA58(uLocal_247);
							unk_0x73F69DD57B7E92A9(iLocal_196[11], uLocal_247);
							unk_0x56C7B20E11B37066(&uLocal_247);
							unk_0x10F31830C95ED2E5(iLocal_196[iVar1], 1);
							unk_0xB05E48165A6F6058(iLocal_196[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_196[iVar1] = unk_0x364B87C5C64BD100(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_100[iVar1], 1, 1);
						unk_0x48FBF866E2964067(iLocal_196[iVar1], 0);
						unk_0x7D154B840BD03D00(iLocal_196[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x273FE09AE985A00A(iLocal_196[iVar1], 50, 1);
						unk_0x9B78D121254B9A0D(iLocal_196[iVar1], 2);
						unk_0x8FC929A8E84AB2A1(iLocal_196[iVar1], 0);
						unk_0x65BDFD38AF3A3CE9(iLocal_196[iVar1], 50f, 20);
						unk_0x95A918B463BA7F35(iLocal_196[iVar1], 1);
						unk_0x9D02030EF7A1C310(iLocal_196[iVar1], 5);
						unk_0x7D40DD402BF99FB7(iLocal_196[iVar1], 100f);
						unk_0x067F16ECAED88B7F(iLocal_196[iVar1], 100f);
						unk_0xE54D36F901A54378(iLocal_196[iVar1], unk_0x61E9B3BFA06B017B(40, 60));
						unk_0x48B25C02FAB9DC81(iLocal_196[iVar1], unk_0x18F7BE9ACB7D08F4(), 0, 16);
					}
					unk_0x641E77554763EF06(iLocal_196[iVar1], uLocal_410);
					unk_0xB88121FF8A34A66F(iLocal_196[iVar1], func_126(unk_0x761660F5CE986DC4(iLocal_196[iVar1], 1), func_92(unk_0x8CFC7D6E1DA5D304())));
					unk_0x40E2910BAF39B1C7(iLocal_196[iVar1], 1);
					unk_0x764AFC5A3A16C2B0(iLocal_196[iVar1], 42, 1);
					uLocal_229[iVar1] = func_124(iLocal_196[iVar1], 1, 145);
					iVar1++;
				}
				func_96(&uLocal_411, 0, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
				func_96(&uLocal_411, 3, iLocal_196[11], "ACULTMaster", 0, 1);
				func_96(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
				unk_0xD2A9C3F486236CC5(&iVar0, 1);
				unk_0xD2A9C3F486236CC5(&iVar0, 3);
				unk_0xD2A9C3F486236CC5(&iVar0, 4);
				if (!bLocal_172)
				{
					uLocal_216[0] = unk_0x8767B3B24E487514(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[1] = unk_0x8767B3B24E487514(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[2] = unk_0x8767B3B24E487514(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_216[3] = unk_0x8767B3B24E487514(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_216[0] = uLocal_216[0];
				uLocal_216[1] = uLocal_216[1];
				uLocal_216[2] = uLocal_216[2];
				uLocal_216[3] = uLocal_216[3];
				iLocal_221[0] = unk_0x7082ECB3731CD86C(joaat("prop_box_wood04a"), -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_221[1] = unk_0x7082ECB3731CD86C(joaat("prop_box_wood03a"), -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_221[2] = unk_0x7082ECB3731CD86C(joaat("prop_box_wood04a"), -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_221[3] = unk_0x7082ECB3731CD86C(joaat("prop_box_wood04a"), -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_221[4] = unk_0x7082ECB3731CD86C(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_221[5] = unk_0x7082ECB3731CD86C(joaat("prop_box_wood03a"), -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				unk_0x58F6B49606932378(iLocal_221[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				unk_0x58F6B49606932378(iLocal_221[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				unk_0x58F6B49606932378(iLocal_221[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				unk_0x58F6B49606932378(iLocal_221[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				unk_0x58F6B49606932378(iLocal_221[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				unk_0x58F6B49606932378(iLocal_221[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_123() < 50)
				{
					unk_0x9ADC2EF4B9A87474(unk_0x8CFC7D6E1DA5D304(), 0.5f, 1);
				}
				if (func_122() != 18)
				{
					func_120(18);
				}
				if (!func_89())
				{
					func_109(0);
				}
				func_1(1);
				bLocal_172 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_109(int iParam0)
{
	if (func_114())
	{
		Global_104541 = 1;
		Global_104538 = unk_0x5AFB8ED811F05E4D();
		if (func_113(Global_104540))
		{
			func_110(0);
		}
		unk_0xC5FD44365E5AB875(1, "RE_TITLE");
		if (iParam0 && func_113(Global_104540))
		{
			unk_0x27F308A2D49D3A49();
		}
		return 1;
	}
	return 0;
}

void func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104551.f_24965.f_2 < 3)
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_111(func_112(iParam0), -1);
					Global_104551.f_24965.f_2++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB03A1684359C50A1(Global_104547, 1))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_111(func_112(iParam0), -1);
					Global_104551.f_24965.f_3++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB03A1684359C50A1(Global_104547, 2))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_111(func_112(iParam0), -1);
					Global_104551.f_24965.f_4++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 2);
				}
			}
			break;
	}
}

void func_111(var uParam0, int iParam1)
{
	unk_0x2202872EA73499C3(uParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

char* func_112(int iParam0)
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

int func_113(int iParam0)
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

int func_114()
{
	switch (func_115(&Global_25292, 0, 5, 0, unk_0xBCF9D020FA9C313D()))
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

int func_115(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_119(0))
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		unk_0x36643EAE6212D16F(unk_0x0A91D180DDC7A1B8(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x9BEC17E13AB1F07F(8);
		}
		Global_35859 = iParam2;
		Global_35821 = *uParam0;
		Global_35822 = iParam4;
		Global_35820 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35820 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35820)
			{
				if (Global_35826[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35821 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_117(iParam2))
		{
			return 0;
		}
		if (Global_35820 == 8)
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		Global_35826[Global_35820 /*4*/] = Global_35823;
		Global_35826[Global_35820 /*4*/].f_1 = iParam1;
		Global_35826[Global_35820 /*4*/].f_2 = iParam2;
		Global_35826[Global_35820 /*4*/].f_3 = 0;
		Global_35820++;
		if (iParam4 != 0)
		{
			func_116(uParam0, iParam4);
		}
	}
	return 2;
}

void func_116(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35820 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35820)
	{
		if (Global_35826[iVar0 /*4*/] == *uParam0)
		{
			Global_35826[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_117(int iParam0)
{
	return func_118(iParam0, Global_35859);
}

int func_118(int iParam0, int iParam1)
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

int func_119(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_117(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_120(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_90();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_62(iParam0);
	unk_0x0A022B047163ACAE(0);
	unk_0xD42F50467E7AD46D(1);
	Global_104537 = 0;
	func_121();
}

void func_121()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			unk_0x116D235ABEF5CE46(unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)), 1);
		}
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 0);
	}
}

int func_122()
{
	return Global_104540;
}

int func_123()
{
	var uVar0;
	
	switch (func_13())
	{
		case 0:
			unk_0xD194C635833AC189(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0xD194C635833AC189(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0xD194C635833AC189(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

var func_124(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_125(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE769D9B5158D0F11(uVar0)) && unk_0xD76CFACBF6A6F21E(&(Global_104551.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x61C2EC67C90074E5(uVar0, &(Global_104551.f_28020[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_125(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x31F12808DC47A9E5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA8EDC17CEEA40DFA(iParam0);
	if (unk_0x978B4E1292EBBE41(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_38(unk_0x44243F2E2F58B8E3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1DF6703E5077ABE1(uVar0, bParam1);
		}
		else
		{
			unk_0x71925FF3194E84CE(uVar0, 2);
		}
	}
	else if (unk_0xB6C2454233C8F532(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_38(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
		unk_0x1DF6703E5077ABE1(uVar0, bParam1);
	}
	else if (unk_0x2E4A20D66F5AD135(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_38(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_126(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x7F21F40674579303((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_127()
{
	Global_25468 = 1;
}

int func_128(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0xBEF481E5CF03DC93(iParam0, iParam1, 0))
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
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			iVar3 = unk_0x2406A9C8DA99D3F4(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0xADBCA3534D2F6BEB(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0xE6AB5C185BE01BC6(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { unk_0x761660F5CE986DC4(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	while (func_132(iVar2, iVar8) != 0)
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			if (unk_0x149CE5A9BC10146A(iParam0, iVar2, func_132(iVar2, iVar8)))
			{
				if (func_131(func_132(iVar2, iVar8)))
				{
					iVar9 = unk_0xFF50A7C268ACC65F(func_132(iVar2, iVar8));
				}
			}
		}
		iVar8++;
	}
	uVar1 = unk_0x454172E873382F45(iVar2, iVar3, Var5, iVar0, 1065353216, iVar9, iParam7, iParam8);
	while (func_132(iVar2, iVar8) != 0)
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			if (unk_0x149CE5A9BC10146A(iParam0, iVar2, func_132(iVar2, iVar8)))
			{
				unk_0xE51C0F1430C74646(uVar1, func_132(iVar2, iVar8));
				func_129(uVar1, func_132(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0xBEF481E5CF03DC93(iParam0, iVar2, 0))
		{
			unk_0x0421110CD91229DD(uVar1, unk_0x3A369A0A4E1FD5B7(iParam0, iVar2));
		}
	}
	return uVar1;
}

void func_129(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_130(iParam1);
	if (iVar0 != 0)
	{
		unk_0xE51C0F1430C74646(uParam0, iVar0);
	}
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
	}
	return 0;
}

int func_131(int iParam0)
{
	if ((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == joaat("component_gunrun_mk2_upgrade"))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
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
				iVar1 = func_134(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x184BE178B47BBA96(iVar1))
					{
						if (unk_0xFBDC30E38B541C22(iVar1, iVar2, &Var43))
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

int func_134(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xA3657E0D395F8A0F();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x5C134543285617E0(iVar0, uParam1))
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

bool func_135()
{
	bool bVar0;
	
	bVar0 = unk_0xF76283B558B032AE();
	if (!Global_70851)
	{
		if (!bVar0)
		{
			Global_70851 = 1;
		}
	}
	return bVar0;
}

int func_136(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_137(iParam0, iParam1);
}

int func_137(int iParam0, int iParam1)
{
	if (func_15(14) && !func_148(iParam0))
	{
		return 0;
	}
	if (unk_0x391A4DC2CC8A9143(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25479 != 0 && !Global_70852)
	{
		return 0;
	}
	if (func_147(&Global_4267379))
	{
		if (func_145(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_138(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4815E9FF4A7078A5(iParam0))
		{
			return 0;
		}
		if (unk_0x391A4DC2CC8A9143(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_138(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_148(iParam1))
	{
		return 0;
	}
	if (func_145(uParam0, iParam1))
	{
		return 0;
	}
	if (func_144(uParam0) < 0f)
	{
		func_143(uParam0, 0);
	}
	func_141(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_139(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_139(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_148(iParam1))
	{
		return 0;
	}
	if (func_145(uParam0, iParam1))
	{
		return 0;
	}
	if (func_144(uParam0) < 0f)
	{
		func_143(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_140(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_140(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_141(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_142(uParam0, iVar0);
		iVar0++;
	}
	func_143(uParam0, (Global_4267378 - 0.5f));
}

void func_142(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_143(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_144(var uParam0)
{
	return uParam0->f_80;
}

bool func_145(var uParam0, int iParam1)
{
	return func_146(uParam0, iParam1) != -1;
}

int func_146(var uParam0, int iParam1)
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

bool func_147(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_148(int iParam0)
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

void func_149()
{
	if (fLocal_183 > 0f)
	{
		fLocal_183 = (fLocal_183 - (0.6f / (1f / unk_0x64031EF2AE5F9603())));
	}
	else
	{
		fLocal_183 = 0f;
	}
	if (fLocal_183 >= 0f)
	{
		unk_0xFF035B24ADC36682(Global_34982[10 /*31*/], fLocal_183, 0, 1);
		unk_0xF23A1E4D6AD3CAD2(Global_34982[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 < 0f)
	{
		fLocal_182 = (fLocal_182 + (0.6f / (1f / unk_0x64031EF2AE5F9603())));
	}
	else
	{
		fLocal_182 = 0f;
	}
	if (fLocal_182 <= 0f)
	{
		unk_0xFF035B24ADC36682(Global_34982[9 /*31*/], fLocal_182, 0, 1);
		unk_0xF23A1E4D6AD3CAD2(Global_34982[9 /*31*/], 4, 0, 1);
	}
}

void func_150()
{
	if (fLocal_183 < 1f)
	{
		fLocal_183 = (fLocal_183 + (0.6f / (1f / unk_0x64031EF2AE5F9603())));
	}
	else
	{
		fLocal_183 = 1f;
	}
	if (fLocal_183 <= 1f)
	{
		unk_0xFF035B24ADC36682(Global_34982[10 /*31*/], fLocal_183, 0, 1);
		unk_0xF23A1E4D6AD3CAD2(Global_34982[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_182 > -1f)
	{
		fLocal_182 = (fLocal_182 - (0.6f / (1f / unk_0x64031EF2AE5F9603())));
	}
	else
	{
		fLocal_182 = -1f;
	}
	if (fLocal_182 >= -1f)
	{
		unk_0xFF035B24ADC36682(Global_34982[9 /*31*/], fLocal_182, 0, 1);
		unk_0xF23A1E4D6AD3CAD2(Global_34982[9 /*31*/], 4, 0, 1);
	}
}

void func_151()
{
	switch (iLocal_189)
	{
		case 0:
			unk_0x9016574B77A748EE(joaat("a_m_o_acult_02"));
			unk_0x9016574B77A748EE(joaat("prop_anim_cash_pile_02"));
			unk_0x831CD0FBFB26EC7E("random@altruist_cult");
			unk_0x6662DABCFF1B4AD5("AC_DELIVERED");
			unk_0xAEC679281346B372(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0xEDFE27D1AEA0EA7F(joaat("a_m_o_acult_02")) && unk_0xEDFE27D1AEA0EA7F(joaat("prop_anim_cash_pile_02"))) && unk_0x028356968FDD2DF2("random@altruist_cult")) && unk_0x6662DABCFF1B4AD5("AC_DELIVERED")) && unk_0xA1A1ED32111D2031(joaat("weapon_assaultrifle")))
			{
				if (Global_104551.f_24965.f_5 < 2)
				{
					if (Global_104551.f_24965.f_5 == 0)
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
				else if (Global_104551.f_24965.f_5 >= 2)
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
					unk_0x9016574B77A748EE(joaat("prop_box_wood03a"));
					unk_0x9016574B77A748EE(joaat("prop_box_wood04a"));
					unk_0x9016574B77A748EE(joaat("prop_box_wood05a"));
					unk_0x9016574B77A748EE(joaat("prop_security_case_01"));
					if (!unk_0x61F9977B378C43BF())
					{
						unk_0xFC829E6465CFFAC1("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xE769D9B5158D0F11(uLocal_228))
				{
					unk_0x40D517D991458154(&uLocal_228);
				}
				func_20(1, 1, 1, 0);
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
				unk_0xEFF1F12403847394(1);
				unk_0x4A3AD9384F0AAEA0(0);
				unk_0x77B57B2BB7F3EA0A(0);
				unk_0xCB70BD6BF4CCD313(unk_0x18F7BE9ACB7D08F4(), 1);
				unk_0x5C7D86C4752CBC68(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_unarmed"), 1);
				unk_0x9BEA833CAF67289C("AC_DELIVERED");
				if (func_175())
				{
					func_174(0);
				}
				func_172();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					uLocal_213 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
					if (unk_0xC4B84EB67F78C1F0(uLocal_213, 0))
					{
						if (unk_0xF00EF9585E7FAC26(uLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					uLocal_213 = unk_0x952F33F151D40D1A();
					if (!unk_0x0FAE113CE72ED842(uLocal_193[0]) && !unk_0x0FAE113CE72ED842(uLocal_193[1]))
					{
						unk_0x267F7A2DFDFFB077(uLocal_193[0]);
						unk_0x95B1A64E8455A478(uLocal_193[0]);
						unk_0x267F7A2DFDFFB077(uLocal_193[1]);
						unk_0x95B1A64E8455A478(uLocal_193[1]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (unk_0x31F12808DC47A9E5(uLocal_213))
			{
				if (!unk_0x90D1FDC9D31B7BE1(iLocal_213))
				{
					unk_0x337F2213526139E0(iLocal_213, 1, 0);
				}
				if (unk_0x8673F2F1802ADEF7(iLocal_213, Local_120, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x990FFD4FB6ADD630(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x74C2FE037DFC8B4A(iLocal_213, 0))
					{
						unk_0xB88121FF8A34A66F(iLocal_213, 149.8882f);
						unk_0x9B53B2691E2B1F79(iLocal_213, 1084227584);
					}
				}
			}
			unk_0x7EE425AE3317BA69(Local_120, 12f, 1, 0, 0, 0);
			unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 128.2065f);
			if (!unk_0x0FAE113CE72ED842(uLocal_193[0]) && !unk_0x0FAE113CE72ED842(uLocal_193[1]))
			{
				unk_0x990FFD4FB6ADD630(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(uLocal_193[0], 128.2065f);
				unk_0x990FFD4FB6ADD630(uLocal_193[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(uLocal_193[1], 128.2065f);
			}
			iLocal_196[0] = unk_0x364B87C5C64BD100(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_96(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_104551.f_24965.f_5 >= 2)
			{
				iLocal_196[1] = unk_0x364B87C5C64BD100(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_96(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_96(&uLocal_411, 0, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
			func_96(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_96(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			func_97(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			unk_0x40E2910BAF39B1C7(iLocal_196[0], 1);
			iLocal_215 = unk_0x454172E873382F45(joaat("weapon_assaultrifle"), -1, unk_0x761660F5CE986DC4(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x947CE5CCDDBA0651(iLocal_215, iLocal_196[0], unk_0xCA57A734FF47CDF5(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_104551.f_24965.f_5 < 2)
			{
				uLocal_214 = unk_0x7082ECB3731CD86C(joaat("prop_anim_cash_pile_02"), Local_117, 1, 1, 0);
				unk_0x947CE5CCDDBA0651(uLocal_214, unk_0x18F7BE9ACB7D08F4(), unk_0xCA57A734FF47CDF5(unk_0x18F7BE9ACB7D08F4(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_104551.f_24965.f_5 >= 2)
			{
				unk_0x7D154B840BD03D00(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_246 = unk_0x5E35D8CCDF065701("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_188 = unk_0x3C3438327FFEB224(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), uLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x4DD2EB945B4192FD(iLocal_196[0], uLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_104551.f_24965.f_5 >= 2)
			{
				unk_0x4DD2EB945B4192FD(iLocal_196[1], uLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0xFB34CCC40E7806C4(uLocal_246, uLocal_188, sLocal_408, "random@altruist_cult");
			unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
			if (!unk_0x0FAE113CE72ED842(uLocal_193[0]) && !unk_0x0FAE113CE72ED842(uLocal_193[1]))
			{
				unk_0x4DD2EB945B4192FD(uLocal_193[0], uLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0x4DD2EB945B4192FD(uLocal_193[1], uLocal_188, "random@altruist_cult", sLocal_407, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!unk_0x0FAE113CE72ED842(uLocal_193[0]))
			{
				if (unk_0xC1A23BED641FA58E(uLocal_193[0]))
				{
					func_170(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x0FAE113CE72ED842(uLocal_193[1]))
			{
				if (unk_0xC1A23BED641FA58E(uLocal_193[1]))
				{
					func_170(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x74CE979B042A1253(uLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!unk_0x0FAE113CE72ED842(uLocal_193[0]))
			{
				if (unk_0xC1A23BED641FA58E(uLocal_193[0]))
				{
					func_170(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x0FAE113CE72ED842(uLocal_193[1]))
			{
				if (unk_0xC1A23BED641FA58E(uLocal_193[1]))
				{
					func_170(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_193[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x74CE979B042A1253(uLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_104551.f_24965.f_5 < 2)
			{
				func_127();
				if (unk_0x31F12808DC47A9E5(iLocal_196[0]))
				{
					unk_0x63C116C2153FAA3C(&(iLocal_196[0]));
				}
				if (unk_0x31F12808DC47A9E5(iLocal_196[1]))
				{
					unk_0x63C116C2153FAA3C(&(iLocal_196[1]));
				}
				if (unk_0x31F12808DC47A9E5(iLocal_214))
				{
					unk_0x5BE35A26B9097351(&iLocal_214);
				}
				if (unk_0x31F12808DC47A9E5(iLocal_215))
				{
					unk_0x5BE35A26B9097351(&iLocal_215);
				}
				unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
				unk_0x7602D16A5C4D379B(0, 0, 3, 0);
				unk_0x2C535610856B3F4D(uLocal_246, 0);
				func_20(0, 1, 1, 0);
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				unk_0x4A3AD9384F0AAEA0(1);
				unk_0x77B57B2BB7F3EA0A(1);
				unk_0xCB70BD6BF4CCD313(unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0xA3F41A1968319181(0);
				func_152(func_13(), 1, 2000, 0, 0);
			}
			unk_0x9BEA833CAF67289C("AC_DONE");
			Global_104551.f_24965.f_5 += 2;
			iLocal_174 = 1;
			break;
	}
}

void func_152(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_153(Global_104551.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xD194C635833AC189(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xD92C8D8AF3C67820(iVar1, iVar0, 1);
	}
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_169();
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
					func_168(99, 1);
					func_167(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_167(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_167(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_165(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_161(5))
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
							func_167(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_167(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_167(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_161(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_167(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_167(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_167(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_167(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_167(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_167(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_167(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_167(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_167(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x088BDDE9EE449CE6())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_167(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_167(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_167(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_167(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_167(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_167(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_161(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_167(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_167(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_167(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_167(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_167(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_167(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_160(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_168(95, iParam3);
					break;
				
				case 1:
					func_168(97, iParam3);
					break;
				
				case 2:
					func_168(96, iParam3);
					break;
			}
			func_168(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_156(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_156(iVar1);
	}
	iVar5 = (Global_53075[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53075[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53075[iVar2] = 2147483647;
				}
				else
				{
					Global_53075[iVar2] = (Global_53075[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_167(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_167(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_167(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53075[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53075[iVar2];
			Global_53075[iVar2] = (Global_53075[iVar2] - iParam3);
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
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104551.f_20534.f_233[iVar2 /*69*/]++;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_155(iParam0);
	if (Global_35859 == 15)
	{
		func_154(0);
	}
	return 1;
}

void func_154(bool bParam0)
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
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53083[iVar0 /*3*/][0] = Global_104551.f_20534[iVar0];
		Global_53083.f_31[iVar0 /*3*/][0] = Global_104551.f_20534.f_11[iVar0];
		Global_53083.f_62[iVar0 /*3*/][0] = Global_104551.f_20534.f_22[iVar0];
		Global_53083.f_93[iVar0 /*3*/][0] = Global_104551.f_20534.f_33[iVar0];
		Global_53083.f_124[iVar0 /*3*/][0] = Global_104551.f_20534.f_44[iVar0];
		Global_53083.f_155[iVar0 /*3*/][0] = Global_104551.f_20534.f_55[iVar0];
		Global_53083.f_186[iVar0 /*3*/][0] = Global_104551.f_20534.f_66[iVar0];
		Global_53083.f_217[iVar0 /*3*/][0] = Global_104551.f_20534.f_77[iVar0];
		Global_53083.f_248[iVar0 /*3*/][0] = Global_104551.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53083[iVar0 /*3*/][1] = Global_104551.f_20534[iVar0];
			Global_53083.f_31[iVar0 /*3*/][1] = Global_104551.f_20534.f_11[iVar0];
			Global_53083.f_62[iVar0 /*3*/][1] = Global_104551.f_20534.f_22[iVar0];
			Global_53083.f_93[iVar0 /*3*/][1] = Global_104551.f_20534.f_33[iVar0];
			Global_53083.f_124[iVar0 /*3*/][1] = Global_104551.f_20534.f_44[iVar0];
			Global_53083.f_155[iVar0 /*3*/][1] = Global_104551.f_20534.f_55[iVar0];
			Global_53083.f_186[iVar0 /*3*/][1] = Global_104551.f_20534.f_66[iVar0];
			Global_53083.f_217[iVar0 /*3*/][1] = Global_104551.f_20534.f_77[iVar0];
			Global_53083.f_248[iVar0 /*3*/][1] = Global_104551.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53075[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xD92C8D8AF3C67820(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xD92C8D8AF3C67820(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xD92C8D8AF3C67820(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_156(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_159(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0) || unk_0xB03A1684359C50A1(Global_2097152[func_158() /*12062*/].f_7637.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		unk_0x62148293B793073B(&(Global_2097152[func_158() /*12062*/].f_7637.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x55E6536147AC42E6("COUP_RED");
		unk_0xBEFD1ED9B6BE5127(func_157(iParam0));
		unk_0xB317125F2A5746EB(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_157(int iParam0)
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
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_158()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_160(int iParam0)
{
	func_168(93, iParam0);
	func_168(29, iParam0);
	func_168(30, iParam0);
}

bool func_161(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_162(129, -1, -1);
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0);
	}
	return unk_0xB03A1684359C50A1(Global_2097152[func_158() /*12062*/].f_7637.f_10, iParam0);
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar1 = func_164(iParam0, iParam1);
	uVar2 = func_163(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_163(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_165(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x391A4DC2CC8A9143(27))
	{
		return 0;
	}
	if (unk_0xD194C635833AC189(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD194C635833AC189(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xD92C8D8AF3C67820(joaat("num_cash_spent"), iVar1, 1);
		func_166(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_136(27, 1);
	return 1;
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
	}
	return 0;
}

void func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD194C635833AC189(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xD92C8D8AF3C67820(iParam0, iVar0, 1);
}

void func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_169()
{
	int iVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		unk_0xD194C635833AC189(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53075[0] == iVar0)
		{
			Global_53075[0] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53075[1] == iVar0)
		{
			Global_53075[1] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53075[2] == iVar0)
		{
			Global_53075[2] = iVar0;
		}
	}
}

void func_170(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x40033E3EAE3C63BB(uParam0, sParam1, sParam2, func_171(iParam3), 0);
}

int func_171(int iParam0)
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

void func_172()
{
	Global_14622 = 0;
	func_173();
}

void func_173()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

void func_174(int iParam0)
{
	Global_16767 = iParam0;
}

int func_175()
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

void func_176()
{
	switch (iLocal_189)
	{
		case 0:
			unk_0x9016574B77A748EE(joaat("a_m_o_acult_02"));
			unk_0x9016574B77A748EE(joaat("prop_anim_cash_pile_02"));
			unk_0x831CD0FBFB26EC7E("random@altruist_cult");
			unk_0x6662DABCFF1B4AD5("AC_DELIVERED");
			unk_0xAEC679281346B372(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0xEDFE27D1AEA0EA7F(joaat("a_m_o_acult_02")) && unk_0xEDFE27D1AEA0EA7F(joaat("prop_anim_cash_pile_02"))) && unk_0x028356968FDD2DF2("random@altruist_cult")) && unk_0x6662DABCFF1B4AD5("AC_DELIVERED")) && unk_0xA1A1ED32111D2031(joaat("weapon_assaultrifle")))
			{
				if (Global_104551.f_24965.f_5 == 0)
				{
					sLocal_409 = "ACULT_HI";
					sLocal_403 = "cult_p2_guard";
					sLocal_405 = "cult_p2_trv";
					sLocal_406 = "cult_p2_victim";
					sLocal_408 = "cult_p2_cam";
					fLocal_185 = 0.8f;
					fLocal_184 = 0.968f;
				}
				else if (Global_104551.f_24965.f_5 == 1)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_104551.f_24965.f_5 == 2)
				{
					sLocal_409 = "ACULT_LEAVE3";
					sLocal_403 = "cult_p4_guard";
					sLocal_405 = "cult_p4_trv";
					sLocal_406 = "cult_p4_victim";
					sLocal_408 = "cult_p4_cam";
					fLocal_185 = 0.77f;
					fLocal_184 = 0.999f;
				}
				else if (Global_104551.f_24965.f_5 >= 3)
				{
					sLocal_409 = "ACULT_CAPT";
					sLocal_403 = "cult_p7_guard_01";
					sLocal_404 = "cult_p7_guard_02";
					sLocal_405 = "cult_p7_trv";
					sLocal_406 = "cult_p7_victim_01";
					sLocal_408 = "cult_p7_cam";
					fLocal_185 = 0.98f;
					fLocal_184 = 0.98f;
					unk_0x9016574B77A748EE(joaat("prop_box_wood03a"));
					unk_0x9016574B77A748EE(joaat("prop_box_wood04a"));
					unk_0x9016574B77A748EE(joaat("prop_box_wood05a"));
					unk_0x9016574B77A748EE(joaat("prop_security_case_01"));
					if (!unk_0x61F9977B378C43BF())
					{
						unk_0xFC829E6465CFFAC1("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xE769D9B5158D0F11(uLocal_228))
				{
					unk_0x40D517D991458154(&uLocal_228);
				}
				func_20(1, 1, 1, 0);
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
				unk_0xEFF1F12403847394(1);
				unk_0x4A3AD9384F0AAEA0(0);
				unk_0x77B57B2BB7F3EA0A(0);
				unk_0xCB70BD6BF4CCD313(unk_0x18F7BE9ACB7D08F4(), 1);
				unk_0x5C7D86C4752CBC68(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_unarmed"), 1);
				unk_0x9BEA833CAF67289C("AC_DELIVERED");
				if (func_175())
				{
					func_174(0);
				}
				func_172();
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					iLocal_213 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
					if (unk_0xC4B84EB67F78C1F0(iLocal_213, 0))
					{
						if (unk_0xF00EF9585E7FAC26(iLocal_213))
						{
							iLocal_189++;
						}
					}
				}
				else
				{
					iLocal_213 = unk_0x952F33F151D40D1A();
					if (!unk_0x0FAE113CE72ED842(uLocal_193[0]))
					{
						unk_0x267F7A2DFDFFB077(uLocal_193[0]);
						unk_0x95B1A64E8455A478(uLocal_193[0]);
					}
					iLocal_189++;
				}
			}
			break;
		
		case 1:
			if (unk_0x31F12808DC47A9E5(iLocal_213))
			{
				if (!unk_0x90D1FDC9D31B7BE1(iLocal_213))
				{
					unk_0x337F2213526139E0(iLocal_213, 1, 0);
				}
				if (unk_0x8673F2F1802ADEF7(iLocal_213, Local_120, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x990FFD4FB6ADD630(iLocal_213, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x74C2FE037DFC8B4A(iLocal_213, 0))
					{
						unk_0xB88121FF8A34A66F(iLocal_213, 149.8882f);
						unk_0x9B53B2691E2B1F79(iLocal_213, 1084227584);
					}
				}
			}
			unk_0x7EE425AE3317BA69(Local_120, 12f, 1, 0, 0, 0);
			unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 128.2065f);
			if (!unk_0x0FAE113CE72ED842(uLocal_193[0]))
			{
				unk_0x990FFD4FB6ADD630(uLocal_193[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(uLocal_193[0], 128.2065f);
			}
			iLocal_196[0] = unk_0x364B87C5C64BD100(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_96(&uLocal_411, 1, iLocal_196[0], "ACULTMember1", 0, 1);
			if (Global_104551.f_24965.f_5 >= 3)
			{
				iLocal_196[1] = unk_0x364B87C5C64BD100(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_96(&uLocal_411, 2, iLocal_196[1], "ACULTMember2", 0, 1);
			}
			func_96(&uLocal_411, 0, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
			func_96(&uLocal_411, 3, 0, "ACULTMaster", 0, 1);
			func_96(&uLocal_411, 4, 0, "ACULTGroup", 0, 1);
			if (Global_104551.f_24965.f_5 != 1 && Global_104551.f_24965.f_5 != 2)
			{
				func_97(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			unk_0x40E2910BAF39B1C7(iLocal_196[0], 1);
			iLocal_214 = unk_0x7082ECB3731CD86C(joaat("prop_anim_cash_pile_02"), Local_117, 1, 1, 0);
			iLocal_215 = unk_0x454172E873382F45(joaat("weapon_assaultrifle"), -1, unk_0x761660F5CE986DC4(iLocal_196[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x947CE5CCDDBA0651(iLocal_215, iLocal_196[0], unk_0xCA57A734FF47CDF5(iLocal_196[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_104551.f_24965.f_5 < 3)
			{
				if (Global_104551.f_24965.f_5 == 0)
				{
					unk_0x947CE5CCDDBA0651(iLocal_214, unk_0x18F7BE9ACB7D08F4(), unk_0xCA57A734FF47CDF5(unk_0x18F7BE9ACB7D08F4(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					unk_0x947CE5CCDDBA0651(iLocal_214, unk_0x18F7BE9ACB7D08F4(), unk_0xCA57A734FF47CDF5(unk_0x18F7BE9ACB7D08F4(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_104551.f_24965.f_5 >= 3)
			{
				unk_0x7D154B840BD03D00(iLocal_196[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_246 = unk_0x5E35D8CCDF065701("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_188 = unk_0x3C3438327FFEB224(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), uLocal_188, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x4DD2EB945B4192FD(iLocal_196[0], uLocal_188, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_104551.f_24965.f_5 >= 3)
			{
				unk_0x4DD2EB945B4192FD(iLocal_196[1], uLocal_188, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0xFB34CCC40E7806C4(uLocal_246, uLocal_188, sLocal_408, "random@altruist_cult");
			unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
			if (!unk_0x0FAE113CE72ED842(uLocal_193[0]))
			{
				unk_0x4DD2EB945B4192FD(uLocal_193[0], uLocal_188, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_189++;
			break;
		
		case 2:
			if (!unk_0x0FAE113CE72ED842(uLocal_193[0]))
			{
				if (unk_0xC1A23BED641FA58E(uLocal_193[0]))
				{
					func_170(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0xC9D9444186B5A374() > 2000 && unk_0xC9D9444186B5A374() < 2100)
			{
				if (Global_104551.f_24965.f_5 == 1 || Global_104551.f_24965.f_5 == 2)
				{
					if (!func_107())
					{
						func_97(&uLocal_411, "ACULTAU", sLocal_409, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0x74CE979B042A1253(uLocal_188) > fLocal_185)
			{
				iLocal_189++;
			}
			break;
		
		case 3:
			if (!unk_0x0FAE113CE72ED842(uLocal_193[0]))
			{
				if (unk_0xC1A23BED641FA58E(uLocal_193[0]))
				{
					func_170(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_193[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_104551.f_24965.f_5 == 1 || Global_104551.f_24965.f_5 == 2)
			{
				if ((unk_0x74CE979B042A1253(uLocal_188) > 0.9742857f && !iLocal_181) && unk_0xDBB3D0EFC8DECE3D() == 4)
				{
					unk_0x9575CEFF222148A6("CamPushInNeutral", 0, 0);
					unk_0x929C3CBA660376D5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_181 = 1;
				}
			}
			if (unk_0x74CE979B042A1253(uLocal_188) > fLocal_184)
			{
				iLocal_189++;
			}
			break;
		
		case 4:
			if (Global_104551.f_24965.f_5 < 3)
			{
				if (Global_104551.f_24965.f_5 != 1 && Global_104551.f_24965.f_5 != 2)
				{
					func_127();
					if (unk_0x31F12808DC47A9E5(iLocal_196[0]))
					{
						unk_0x63C116C2153FAA3C(&(iLocal_196[0]));
					}
					if (unk_0x31F12808DC47A9E5(iLocal_196[1]))
					{
						unk_0x63C116C2153FAA3C(&(iLocal_196[1]));
					}
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					if (unk_0x31F12808DC47A9E5(iLocal_196[0]))
					{
						unk_0xA12407EB7D7CF146(iLocal_196[0], 0, 0);
					}
					if (unk_0x31F12808DC47A9E5(iLocal_196[1]))
					{
						unk_0xA12407EB7D7CF146(iLocal_196[1], 0, 0);
					}
					if (unk_0x31F12808DC47A9E5(uLocal_193[0]))
					{
						unk_0xA12407EB7D7CF146(uLocal_193[0], 0, 0);
					}
					iLocal_189++;
				}
				if (unk_0x31F12808DC47A9E5(iLocal_214))
				{
					unk_0x5BE35A26B9097351(&iLocal_214);
				}
				if (unk_0x31F12808DC47A9E5(iLocal_215))
				{
					unk_0x5BE35A26B9097351(&iLocal_215);
				}
				unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
				if (Global_104551.f_24965.f_5 == 0)
				{
					unk_0x1DCD07B7EA2DDAFE(unk_0x18F7BE9ACB7D08F4(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0xF9B5E47ECEAD483E(unk_0x8CFC7D6E1DA5D304(), 1f, 750, 0, 1, 0);
				}
				if (unk_0x9D39145AD645E383(sLocal_408, "cult_p4_cam"))
				{
					unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x7602D16A5C4D379B(0, 0, 3, 0);
				}
				unk_0x2C535610856B3F4D(uLocal_246, 0);
				func_20(0, 1, 1, 0);
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				unk_0x4A3AD9384F0AAEA0(1);
				unk_0x77B57B2BB7F3EA0A(1);
				unk_0xCB70BD6BF4CCD313(unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0xA3F41A1968319181(0);
				func_152(func_13(), 1, 1000, 0, 0);
			}
			if (Global_104551.f_24965.f_5 != 1 && Global_104551.f_24965.f_5 != 2)
			{
				unk_0x9BEA833CAF67289C("AC_DONE");
				Global_104551.f_24965.f_5++;
				iLocal_174 = 1;
			}
			break;
		
		case 5:
			if (!func_107() || unk_0xC9D9444186B5A374() > 7000)
			{
				func_127();
				if (unk_0x31F12808DC47A9E5(iLocal_196[0]))
				{
					unk_0x63C116C2153FAA3C(&(iLocal_196[0]));
				}
				if (unk_0x31F12808DC47A9E5(iLocal_196[1]))
				{
					unk_0x63C116C2153FAA3C(&(iLocal_196[1]));
				}
				unk_0x9BEA833CAF67289C("AC_DONE");
				Global_104551.f_24965.f_5++;
				iLocal_174 = 1;
			}
			break;
	}
}

void func_177()
{
	if (func_179())
	{
		if (func_13() == 2)
		{
			if (unk_0xE3BFE7ED652EB2A4(func_178()))
			{
				unk_0xC1B94DB2637F92D8(func_178(), &uLocal_186, &iLocal_187);
				if (iLocal_187 == 1)
				{
					uLocal_193[0] = unk_0xEC3999FF00392C51(func_178(), 0);
					if (unk_0x8673F2F1802ADEF7(uLocal_193[0], Local_120, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
						{
							if (!unk_0x74C2FE037DFC8B4A(unk_0x952F33F151D40D1A(), 0))
							{
								unk_0x7F8DAED41E5794FC(unk_0x952F33F151D40D1A(), 10.5f, 5, 0);
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_187 == 2)
				{
					uLocal_193[0] = unk_0xEC3999FF00392C51(func_178(), 0);
					uLocal_193[1] = unk_0xEC3999FF00392C51(func_178(), 1);
					if (unk_0x8673F2F1802ADEF7(uLocal_193[0], Local_120, 5f, 5f, 5f, 0, 1, 0) && unk_0x8673F2F1802ADEF7(uLocal_193[1], Local_120, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
						{
							if (!unk_0x74C2FE037DFC8B4A(unk_0x952F33F151D40D1A(), 0))
							{
								unk_0x7F8DAED41E5794FC(unk_0x952F33F151D40D1A(), 10.5f, 5, 0);
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

var func_178()
{
	return unk_0x7C9C05CA6A57A7E1(unk_0x0A91D180DDC7A1B8());
}

bool func_179()
{
	return Global_25467;
}

void func_180()
{
	if (func_183())
	{
		if (iLocal_400 == 0)
		{
			iLocal_400 = unk_0x1701E0E6A11D6B65(Local_117 - Vector(100f, 60f, 80f), Local_117 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0x15EE504466B7BBD3(func_92(unk_0x8CFC7D6E1DA5D304()), Local_117, 1) < 209f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_13() == 0 || func_13() == 1)
	{
		if (unk_0xB052D95D688673A4(2017343592, joaat("player")) != 5)
		{
			if (func_182())
			{
				unk_0xFB5F4D76105A21B5(5, 2017343592, joaat("player"));
			}
			else if (func_181())
			{
				unk_0xFB5F4D76105A21B5(5, 2017343592, joaat("player"));
			}
		}
	}
	else if (func_13() == 2)
	{
		if (unk_0xB052D95D688673A4(2017343592, joaat("player")) != 5)
		{
			if (func_182())
			{
				if (unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()) || (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()) && unk_0x536B0B7C52D20BC8(unk_0x8CFC7D6E1DA5D304())))
				{
					unk_0xFB5F4D76105A21B5(5, 2017343592, joaat("player"));
				}
			}
			else if (func_181())
			{
				unk_0xFB5F4D76105A21B5(5, 2017343592, joaat("player"));
			}
			else if (unk_0xB052D95D688673A4(2017343592, joaat("player")) != 1)
			{
				unk_0xFB5F4D76105A21B5(1, 2017343592, joaat("player"));
			}
		}
	}
	if (func_182())
	{
		if (iLocal_179)
		{
			if (!unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 3))
			{
				unk_0x9BEA833CAF67289C("AC_START");
			}
			unk_0x8BB3FA32294185BB(0f);
			unk_0x2FA5BED6B7B0F0D4("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0x0DDC3D6589A9421A(Global_34982[9 /*31*/].f_2, 6f, Global_34982[9 /*31*/].f_5, 0))
			{
				unk_0xB3CE7CCA48611094(Global_34982[9 /*31*/].f_5, Global_34982[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0x0DDC3D6589A9421A(Global_34982[10 /*31*/].f_2, 6f, Global_34982[10 /*31*/].f_5, 0))
			{
				unk_0xB3CE7CCA48611094(Global_34982[10 /*31*/].f_5, Global_34982[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_180 = true;
			iLocal_179 = 0;
		}
	}
	else if (!iLocal_179)
	{
		if (unk_0xF8A48FE6ACDA45E8())
		{
			unk_0x9BEA833CAF67289C("AC_END");
		}
		unk_0x8BB3FA32294185BB(1f);
		unk_0x2FA5BED6B7B0F0D4("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_180)
		{
			func_149();
		}
		iLocal_179 = 1;
	}
}

int func_181()
{
	if ((((((unk_0x8D3781049D6B7B38(Local_123, Local_126, fLocal_129, 1) || unk_0x8D3781049D6B7B38(Local_130, Local_133, fLocal_136, 1)) || unk_0x8D3781049D6B7B38(Local_137, Local_140, fLocal_143, 1)) || unk_0x8D3781049D6B7B38(Local_144, Local_147, fLocal_150, 1)) || unk_0x8D3781049D6B7B38(Local_151, Local_154, fLocal_157, 1)) || unk_0x8D3781049D6B7B38(Local_158, Local_161, fLocal_164, 1)) || unk_0x8D3781049D6B7B38(Local_165, Local_168, fLocal_171, 1))
	{
		return 1;
	}
	return 0;
}

int func_182()
{
	if ((((((unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_123, Local_126, fLocal_129, 0, 1, 0) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_130, Local_133, fLocal_136, 0, 1, 0)) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_137, Local_140, fLocal_143, 0, 1, 0)) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_144, Local_147, fLocal_150, 0, 1, 0)) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_151, Local_154, fLocal_157, 0, 1, 0)) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_158, Local_161, fLocal_164, 0, 1, 0)) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_165, Local_168, fLocal_171, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	if (Global_104551.f_24965.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_184()
{
	unk_0xFB5F4D76105A21B5(255, 2017343592, joaat("player"));
	if (Global_104551.f_24965.f_5 >= iLocal_192 && Global_104551.f_24965.f_5 != 1000)
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
			func_185(&uLocal_249);
			Global_88231 = 0;
			Global_88232 = 0;
			Global_88233 = 0;
			func_12(0, 1);
			func_10(0, 1);
			func_2(0);
			unk_0xD236BB37B2A8EBBC(1);
			unk_0x35DF1961E23AC6F3(0);
			unk_0x33537D95B422F0A2(0);
			func_3(0);
			unk_0x8BB3FA32294185BB(1f);
			unk_0x4F7751BE82240EB4(3, 1);
			unk_0x4F7751BE82240EB4(5, 1);
			unk_0x5E16FDDF59CA03E6();
			iLocal_179 = 0;
			func_93();
			Global_104551.f_24965.f_5 = (iLocal_192 - 1);
			unk_0x810C5D6462DD69E6();
		}
	}
	else
	{
		unk_0x6D88D1D62502CEFC();
		func_185(&uLocal_249);
		Global_88231 = 0;
		Global_88232 = 0;
		Global_88233 = 0;
		func_12(0, 1);
		func_10(0, 1);
		func_2(0);
		unk_0xD236BB37B2A8EBBC(1);
		unk_0x35DF1961E23AC6F3(0);
		unk_0x33537D95B422F0A2(0);
		func_3(0);
		if (unk_0x5C716BBF766E1C70(uLocal_399))
		{
			unk_0xEBE532BFFE618875(&uLocal_399);
			func_95(0);
		}
		unk_0x8BB3FA32294185BB(1f);
		unk_0x4F7751BE82240EB4(3, 1);
		unk_0x4F7751BE82240EB4(5, 1);
		unk_0x5E16FDDF59CA03E6();
		iLocal_179 = 0;
		unk_0x810C5D6462DD69E6();
	}
}

void func_185(var uParam0)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0xEBE532BFFE618875(uParam0);
		*uParam0 = 0;
	}
}

