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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	char* sLocal_63 = NULL;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 16;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
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
	var uLocal_209 = 0;
	var uLocal_210 = 0;
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
	var uLocal_287 = 1;
	var uLocal_288 = 0;
	int iLocal_289[3] = { 0, 0, 0 };
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	var uLocal_307 = 0;
	int iLocal_308[4] = { 0, 0, 0, 0 };
	struct<7> Local_313[4];
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
	var uLocal_354 = 8;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 2;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 8;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 8;
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
	float fLocal_387 = 0f;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	float fLocal_390 = 0f;
	float fLocal_391 = 0f;
	float fLocal_392 = 0f;
	float fLocal_393 = 0f;
	float fLocal_394 = 0f;
	var uLocal_395 = 15;
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
	var uLocal_668 = 1;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	Local_56 = { 0f, 0f, 0f };
	iLocal_74 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_81 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_86 = -1;
	iLocal_87 = -1;
	iLocal_293 = -1;
	fLocal_387 = ((0.05f + 0.275f) - 0.01f);
	fLocal_390 = -0.05f;
	fLocal_391 = 0.92f;
	fLocal_392 = 1.94f;
	fLocal_393 = 2.99f;
	fLocal_394 = 3.7f;
	if (Global_3)
	{
		unk_0x52F20802944F8DCE();
	}
	if (unk_0x00AAD79B42B3E036())
	{
		if (func_523(unk_0x3F80C6638E3A1A90(), 1))
		{
			unk_0x52F20802944F8DCE();
		}
	}
	if (func_522(13) || func_522(14))
	{
		unk_0x52F20802944F8DCE();
	}
	if (!func_521() && !unk_0x00AAD79B42B3E036())
	{
		if (unk_0x89522B8E487D4EF9(35))
		{
			func_511();
			func_510(1);
			func_506(&uLocal_395);
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	iLocal_96 = uScriptParam_0;
	if (unk_0x00AAD79B42B3E036())
	{
		func_505();
		unk_0xE1306BF06D83921B(2, 0, unk_0x3F80C6638E3A1A90());
		func_500(0, -1, 0);
		unk_0x8A10FCF639EC0104(0);
	}
	func_499();
	func_498(128);
	while (iLocal_62)
	{
		bVar0 = true;
		func_495(&uLocal_395);
		if (func_521())
		{
			if (func_494(1024))
			{
				if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0xE7FACFE1D1BC6BCE(unk_0xE7869D5D7816A9B6()) && unk_0xD0293E063D198E46(unk_0xE7869D5D7816A9B6()))
					{
						func_498(1024);
						unk_0x3884CEFF6ADEBA7D(unk_0xE7869D5D7816A9B6());
					}
				}
			}
			if (!func_494(1024) && func_494(2048))
			{
				unk_0x52F20802944F8DCE();
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_96))
			{
				bVar0 = false;
			}
			else if (!unk_0x9B5F286CC8377932(iLocal_96))
			{
				bVar0 = false;
				unk_0x7CBF8CE5F3C88AEC(iLocal_96);
			}
		}
		if (!func_521() || !func_494(2048))
		{
			func_487();
			if (func_521())
			{
				func_486();
				if (func_494(128))
				{
					iLocal_62 = 0;
				}
			}
			if (func_480())
			{
				if (bVar0)
				{
					if (iLocal_294 > 0)
					{
						func_475(&uLocal_395);
					}
					func_473();
					func_471();
					switch (iLocal_294)
					{
						case 0:
							if (iLocal_293 == -1)
							{
								if (unk_0xDE5F6E7A8F69ECA1(iLocal_96))
								{
									iLocal_293 = func_470();
								}
								else if (func_468())
								{
									iLocal_293 = 4;
								}
							}
							else if (func_463())
							{
								if (func_462())
								{
									if (func_521())
									{
										if (unk_0x9B5F286CC8377932(iLocal_96))
										{
											unk_0x7D786F4317F35B2E(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											unk_0x7CBF8CE5F3C88AEC(iLocal_96);
										}
									}
									else
									{
										unk_0x7D786F4317F35B2E(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_294 = 1;
								func_461("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_460(iLocal_49, 4096))
							{
								func_459();
							}
							if (func_458())
							{
								iLocal_294 = 2;
								func_461("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_454())
							{
								iLocal_294 = 3;
								func_452(&iLocal_49, 64);
								Global_25186 = 1;
								func_461("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_91(&uLocal_395);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_460(iLocal_49, 2))
	{
	}
	func_461(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_511();
	func_506(&uLocal_395);
}

void func_1()
{
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		iLocal_62 = 1;
	}
	else
	{
		iLocal_62 = 0;
	}
}

void func_3()
{
	if (iLocal_295 > 0)
	{
		if (unk_0xC45A34912542C4EB(iLocal_98, 0))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_97))
			{
				if (!unk_0x8AF655CC5761C7A2(iLocal_97, iLocal_98, 0))
				{
					func_90();
				}
			}
		}
	}
	if (!unk_0xD51CFE69539DB6D8(iLocal_97) || unk_0x76B2D234F1895632(iLocal_97))
	{
		func_89(15);
	}
	switch (iLocal_295)
	{
		case 0:
			if (!iLocal_296 == 0)
			{
				iLocal_295 = 1;
			}
			break;
		
		case 1:
			func_83();
			break;
		
		case 2:
			func_82();
			break;
		
		case 3:
			func_65();
			break;
		
		case 4:
			func_56();
			break;
		
		case 5:
			func_53();
			break;
		
		case 6:
			if (!unk_0xAF437D7C802AB246(iLocal_97))
			{
				if (unk_0xC47857E5E74EA5AF(iLocal_96, 242628503) == 7)
				{
					iLocal_65 = unk_0x9D40BBF80D8F5E8A();
					iLocal_66 = (iLocal_65 - iLocal_64);
					if (iLocal_66 >= 10000 || !unk_0x0E6C083BC5101C8B(iLocal_96, iLocal_97, 12f, 12f, 5f, 0, 1, 0))
					{
						func_461("prostitute WAITING TO END");
						func_90();
					}
				}
			}
			else
			{
				func_90();
			}
			break;
		
		case 7:
			if (!unk_0x5870CB0276CF5667(func_52(0), func_52(1), func_52(2), func_52(3)))
			{
				unk_0x1A10579F8DE3BF6B(func_52(0), func_52(1), func_52(2), func_52(3));
			}
			else
			{
				unk_0x8543F365CDBCAAAD(iLocal_97, iLocal_98, Local_90, (unk_0x94DAC33E95329409(iLocal_98) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_295 = 8;
			}
			break;
		
		case 8:
			if (unk_0xB7A628320EFF8E47(Local_90, unk_0x1141852D07400777(iLocal_96, 1)) < 25f && unk_0xC47857E5E74EA5AF(iLocal_97, -1817882002) != 1)
			{
				iLocal_297 = unk_0x0ADD324BC46177EF(1, 3);
				iLocal_295 = 11;
			}
			if (func_49(iLocal_97))
			{
				func_89(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_89(15);
			break;
		
		case 15:
			if (unk_0xD51CFE69539DB6D8(iLocal_96) && unk_0xD51CFE69539DB6D8(iLocal_98))
			{
				if (unk_0x8AF655CC5761C7A2(iLocal_96, iLocal_98, 0))
				{
					if (!unk_0x76B2D234F1895632(iLocal_97))
					{
						if (unk_0xC47857E5E74EA5AF(iLocal_97, -828834893) != 1)
						{
							unk_0xCD7A5BCC47D00FB2(iLocal_96, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()
{
	switch (iLocal_302)
	{
		case 0:
			unk_0xE7DDB5A4122B73D6(iLocal_96, 0.916f);
			if (func_36(iLocal_97))
			{
				func_34(&uLocal_119);
				iLocal_302 = 1;
			}
			break;
		
		case 1:
			if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), unk_0x1141852D07400777(iLocal_96, 0)) < 22500f)
			{
				func_32();
			}
			func_29(iLocal_98);
			if (func_27(iLocal_97))
			{
				func_11(&uLocal_122, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_89(15);
			}
			if (func_7(&uLocal_119) > 1f)
			{
				if (unk_0xC47857E5E74EA5AF(iLocal_96, 242628503) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_302 = 3;
				}
			}
			break;
		
		case 3:
			func_89(15);
			break;
		
		case 5:
			func_89(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
	}
	if (unk_0x00AAD79B42B3E036())
	{
		iVar0 = unk_0xC7F926248AF8587B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
}

bool func_9(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 2);
}

bool func_10(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 1);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xDA09A6E60FE9645E(0);
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
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF0A330A29F97AA7E())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_23();
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
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
			if (bParam2)
			{
				func_17();
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
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_16())
				{
					return 0;
				}
				if (unk_0x25AE83AAAFB359D8(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
					if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
				}
			}
			if (func_15())
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
				if (unk_0xB519E5386FBF69E5(Global_2283, 9))
				{
					return 0;
				}
			}
			func_14();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_13();
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
		func_25();
	}
	return 0;
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xDA09A6E60FE9645E(0);
	Global_15712 = 1;
}

void func_14()
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
	unk_0x73817D396768E4C6(&Global_2284, 16);
}

int func_15()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	int iVar0;
	int iVar1;
	
	if (Global_69236)
	{
		iVar0 = 0;
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x834CA326769DA173() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x9699041CFA6517D2(unk_0xE7869D5D7816A9B6(), 78, 1))
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

void func_17()
{
	if (func_522(14))
	{
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
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
		Global_14413 = func_18();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

int func_18()
{
	func_19();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_19()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_22(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_21(unk_0xE7869D5D7816A9B6());
			if (func_20(iVar0) && (!func_522(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_20(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_20(int iParam0)
{
	return iParam0 < 3;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_22(int iParam0)
{
	if (func_20(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

void func_25()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if ((unk_0xD6F17BA188A65E8F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_27(int iParam0)
{
	if (func_28())
	{
		if (!unk_0xEFCD862A1C3D0FF2(unk_0x1B2DC87EFB36DF80(iParam0), unk_0x1141852D07400777(iParam0, 1), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (Global_16748)
	{
		return 1;
	}
	return 0;
}

void func_29(int iParam0)
{
	if (iLocal_297 != 1 && iLocal_297 != 2)
	{
		return;
	}
	if (func_31())
	{
		func_30(&iParam0);
	}
}

void func_30(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xC45A34912542C4EB(*uParam0, 0))
	{
		Var0 = { 0f, 0f, -0.1f };
		Var3 = { 0f, 0f, 0f };
		unk_0x4B89CEB084587C7F(*uParam0, 1, Var0, Var3, 0, 1, 1, 1, 1, 0);
	}
}

bool func_31()
{
	return unk_0x8442AE3B8EA7046F(iLocal_96, 876132797);
}

void func_32()
{
	unk_0x02FBF8551A36D88F();
	func_33();
}

void func_33()
{
	Global_17118.f_134 = 1;
}

void func_34(var uParam0)
{
	func_35(uParam0, 0f);
}

void func_35(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0xB519E5386FBF69E5(*uParam0, 4)) - fParam1);
	unk_0x9956FB0E4B50ECB8(uParam0, 1);
	unk_0x73817D396768E4C6(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_36(int iParam0)
{
	if (unk_0xF6917DE0E003509D(sLocal_63))
	{
		sLocal_63 = func_44(iParam0, 0, 0);
		return 0;
	}
	if (!unk_0x2917D5E1CB5CE43A(sLocal_63))
	{
		return 0;
	}
	else
	{
		func_37(iLocal_96, func_43(), 1, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_72) / 2f)))));
		if (iParam0 == unk_0xE7869D5D7816A9B6())
		{
			func_37(iParam0, func_43(), 0, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_72) / 2f)))));
		}
		func_461("anim_dict has loaded, triggering anims?");
		func_452(&iLocal_49, 512);
		return 1;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	var uVar3;
	
	if (unk_0x76B2D234F1895632(iParam0))
	{
		return;
	}
	iVar0 = unk_0xF0295FF51F2D7803(iParam0, 1);
	if (!unk_0xC45A34912542C4EB(iVar0, 0))
	{
		return;
	}
	iLocal_48 = unk_0xF19E031C976C0F00();
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) && func_42(0, 1))
	{
		if (iLocal_48 != 4)
		{
			unk_0x12D823F78702C792(4);
		}
	}
	bVar1 = func_41(iVar0);
	sVar2 = func_44(iParam0, 0, 0);
	if (!unk_0x2917D5E1CB5CE43A(sVar2))
	{
		unk_0x2B0BB514F9140141(sVar2);
	}
	else
	{
		unk_0x94026C1D1DB14225(&uVar3);
		unk_0xDCF460AE46C9489C(0, sVar2, func_38(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0xDCF460AE46C9489C(0, sVar2, func_38(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xDCF460AE46C9489C(0, sVar2, func_38(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0xDCF460AE46C9489C(0, sVar2, func_38(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xDCF460AE46C9489C(0, sVar2, func_38(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x911ECBCE73F8EC3F(uVar3);
		unk_0xC2C4A3A9FF2FBFFF(iParam0, uVar3);
		unk_0x33A90AD8FA327B72(&uVar3);
	}
}

char* func_38(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(18);
					}
					else
					{
						sVar0 = func_40(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(8);
				}
				else
				{
					sVar0 = func_40(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(18);
				}
				else
				{
					sVar0 = func_39(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(8);
			}
			else
			{
				sVar0 = func_39(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(19);
					}
					else
					{
						sVar0 = func_40(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(9);
				}
				else
				{
					sVar0 = func_40(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(19);
				}
				else
				{
					sVar0 = func_39(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(9);
			}
			else
			{
				sVar0 = func_39(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(21);
					}
					else
					{
						sVar0 = func_40(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(11);
				}
				else
				{
					sVar0 = func_40(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(21);
				}
				else
				{
					sVar0 = func_39(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(11);
			}
			else
			{
				sVar0 = func_39(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(22);
					}
					else
					{
						sVar0 = func_40(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(12);
				}
				else
				{
					sVar0 = func_40(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(22);
				}
				else
				{
					sVar0 = func_39(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(12);
			}
			else
			{
				sVar0 = func_39(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_40(3);
				}
				else
				{
					sVar0 = func_40(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(3);
			}
			else
			{
				sVar0 = func_39(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_39(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_40(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_41(int iParam0)
{
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		switch (unk_0xEC3733C97602ACFD(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_42(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0x08EE17D4722097C7(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x08EE17D4722097C7(1) == 4;
		}
	}
	return bVar0;
}

bool func_43()
{
	return iLocal_297 == 0;
}

char* func_44(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		uVar0 = unk_0xF0295FF51F2D7803(iParam0, 1);
		if (unk_0xC45A34912542C4EB(uVar0, 0))
		{
			if (func_41(iVar0))
			{
				if ((!func_42(0, 1) || iParam2) && !bParam1)
				{
					return func_48();
				}
				else
				{
					return func_47();
				}
			}
		}
	}
	if ((!func_42(0, 1) || iParam2) && !bParam1)
	{
		return func_46();
	}
	return func_45();
}

char* func_45()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_46()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_47()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_48()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_49(int iParam0)
{
	struct<3> Var0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		if (unk_0x4231F56FA5885AE9(iParam0) || !func_51(iParam0, iLocal_98, -1))
		{
			Var0 = { unk_0x1141852D07400777(iParam0, 1) };
			unk_0x7346544C767CFCBF(iParam0, 196624, 1);
			if (func_50())
			{
				unk_0x29F2993666F68F46(iParam0, Var0, 300f, -1, 1, 1);
			}
			else if (!unk_0x76B2D234F1895632(unk_0x9D84FB8703BD7832(iParam0)))
			{
				unk_0x13C351F151D49F89(iParam0, unk_0x9D84FB8703BD7832(iParam0), 0, 16);
			}
			else
			{
				unk_0x29F2993666F68F46(iParam0, Var0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}

int func_50()
{
	if (unk_0xB519E5386FBF69E5(unk_0x0ADD324BC46177EF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x76B2D234F1895632(iParam0) && !unk_0x76B2D234F1895632(iParam1))
	{
		if (unk_0xF50745B40235B5B8(iParam0, iParam1))
		{
			if (unk_0xBD6B21D725712BDE(iParam1, iParam2) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_52(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x1141852D07400777(iLocal_96, 1) };
	Var3 = { Local_90 };
	if (iParam0 == 0)
	{
		if (Var0.f_0 < Var3.f_0)
		{
			return (Var0.f_0 - 20f);
		}
		else
		{
			return (Var3.f_0 - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (Var0.f_1 < Var3.f_1)
		{
			return (Var0.f_1 - 20f);
		}
		else
		{
			return (Var3.f_1 - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (Var0.f_0 > Var3.f_0)
		{
			return (Var0.f_0 + 20f);
		}
		else
		{
			return (Var3.f_0 + 20f);
		}
	}
	if (Var0.f_1 > Var3.f_1)
	{
		return (Var0.f_1 + 20f);
	}
	return (Var3.f_1 + 20f);
}

void func_53()
{
	if (!unk_0xAF437D7C802AB246(iLocal_97))
	{
		if (unk_0xC45A34912542C4EB(iLocal_98, 0))
		{
			if (unk_0x8AF655CC5761C7A2(iLocal_97, iLocal_98, 0))
			{
				if (unk_0xC47857E5E74EA5AF(iLocal_96, 242628503) == 1)
				{
					if (unk_0x229936D409069998(iLocal_96) > 0)
					{
						if (unk_0x8AF655CC5761C7A2(iLocal_96, iLocal_98, 0))
						{
							func_461("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0x94026C1D1DB14225(&uLocal_101);
							unk_0xE81313E76FEC1E97(0, iLocal_98, 10f, 786603);
							unk_0x911ECBCE73F8EC3F(uLocal_101);
							unk_0xC2C4A3A9FF2FBFFF(iLocal_97, uLocal_101);
							unk_0x33A90AD8FA327B72(&uLocal_101);
							Local_90 = { func_54(unk_0x1141852D07400777(iLocal_96, 1)) };
							unk_0x2B0BB514F9140141(func_44(iLocal_96, 0, 0));
							iLocal_295 = 7;
							iLocal_64 = unk_0x9D40BBF80D8F5E8A();
						}
					}
				}
			}
			else
			{
				func_461("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_461("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_461("EXIT - OTHER ped INJURED");
		func_90();
	}
}

Vector3 func_54(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0xB7A628320EFF8E47(Param0, func_55(iVar1)) < unk_0xB7A628320EFF8E47(Param0, func_55(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_55(iVar0);
}

Vector3 func_55(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 1:
			Var0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 2:
			Var0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 3:
			Var0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 4:
			Var0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 5:
			Var0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 6:
			Var0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 7:
			Var0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 8:
			Var0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 9:
			Var0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 10:
			Var0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 11:
			Var0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 12:
			Var0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 13:
			Var0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 14:
			Var0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 15:
			Var0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 16:
			Var0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 17:
			Var0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 18:
			Var0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 19:
			Var0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 20:
			Var0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 21:
			Var0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 22:
			Var0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 23:
			Var0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 24:
			Var0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 25:
			Var0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 26:
			Var0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 27:
			Var0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 28:
			Var0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 29:
			Var0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 30:
			Var0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 31:
			Var0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return Var0;
}

void func_56()
{
	float fVar0;
	
	if (!unk_0xAF437D7C802AB246(iLocal_97))
	{
		if (unk_0xC45A34912542C4EB(iLocal_98, 0))
		{
			if (unk_0x8AF655CC5761C7A2(iLocal_97, iLocal_98, 0))
			{
				fVar0 = unk_0xD4F0FC8FFEDE152B(iLocal_98);
				if (unk_0x0E6C083BC5101C8B(iLocal_97, iLocal_96, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_63(iLocal_96);
					iLocal_65 = unk_0x9D40BBF80D8F5E8A();
					iLocal_66 = (iLocal_65 - iLocal_64);
					if (iLocal_66 >= iLocal_68)
					{
						if (func_521())
						{
							if (unk_0x9B5F286CC8377932(iLocal_97))
							{
								unk_0x44C7AD5B54E267EE(iLocal_97);
							}
						}
						else
						{
							unk_0x44C7AD5B54E267EE(iLocal_97);
						}
						iLocal_68 = unk_0x0ADD324BC46177EF(0, 10000);
						if (iLocal_68 > 2500)
						{
							unk_0xFA2C5C2D054C888E(iLocal_96);
							unk_0x33A90AD8FA327B72(&uLocal_101);
							unk_0x94026C1D1DB14225(&uLocal_101);
							unk_0x65682335D54DEA1C(0, iLocal_98, -1, 0, 1f, 8388609, 0);
							unk_0x39FD98334BDB065B(0, -1);
							unk_0x911ECBCE73F8EC3F(uLocal_101);
							unk_0xC2C4A3A9FF2FBFFF(iLocal_96, uLocal_101);
							unk_0x33A90AD8FA327B72(&uLocal_101);
							func_461("other GIVES MONEY");
							iLocal_295 = 5;
						}
						else
						{
							func_62();
							func_57();
							if (!unk_0xAF437D7C802AB246(iLocal_97))
							{
								if (unk_0xC45A34912542C4EB(iLocal_98, 0))
								{
									if (unk_0x8AF655CC5761C7A2(iLocal_97, iLocal_98, 0))
									{
										unk_0x33A90AD8FA327B72(&uLocal_101);
										unk_0x94026C1D1DB14225(&uLocal_101);
										unk_0x39FD98334BDB065B(0, unk_0x0ADD324BC46177EF(500, 2000));
										unk_0xE81313E76FEC1E97(0, iLocal_98, 10f, 786603);
										unk_0x911ECBCE73F8EC3F(uLocal_101);
										unk_0xC2C4A3A9FF2FBFFF(iLocal_97, uLocal_101);
										unk_0x33A90AD8FA327B72(&uLocal_101);
										iLocal_64 = unk_0x9D40BBF80D8F5E8A();
									}
								}
							}
							func_461("prostitute REFUSED MONEY 2");
							if (func_521())
							{
								if (unk_0x9B5F286CC8377932(iLocal_97))
								{
									unk_0x44C7AD5B54E267EE(iLocal_97);
								}
							}
							else
							{
								unk_0x44C7AD5B54E267EE(iLocal_97);
							}
							iLocal_295 = 6;
						}
					}
				}
				else
				{
					if (func_521())
					{
						if (unk_0x9B5F286CC8377932(iLocal_97))
						{
							unk_0x44C7AD5B54E267EE(iLocal_97);
						}
					}
					else
					{
						unk_0x44C7AD5B54E267EE(iLocal_97);
					}
					func_90();
				}
			}
			else
			{
				func_461("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_521())
				{
					if (unk_0x9B5F286CC8377932(iLocal_97))
					{
						unk_0x44C7AD5B54E267EE(iLocal_97);
					}
				}
				else
				{
					unk_0x44C7AD5B54E267EE(iLocal_97);
				}
				func_90();
			}
		}
		else
		{
			func_461("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_461("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_57()
{
	var uVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iLocal_96) || unk_0xAF437D7C802AB246(iLocal_96))
	{
		return 1;
	}
	if (!func_521())
	{
		if (unk_0x51374A0BB2871E6E(iLocal_96, 1))
		{
			unk_0x5EE92E5069683596(iLocal_96, 1193033728, 0);
		}
		else if (func_460(iLocal_49, 4194304))
		{
			unk_0x94026C1D1DB14225(&uVar0);
			if (func_460(iLocal_75, 524288))
			{
				unk_0xDCF460AE46C9489C(0, func_61(iLocal_293), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_58(1);
			unk_0x911ECBCE73F8EC3F(uVar0);
			unk_0xC2C4A3A9FF2FBFFF(iLocal_96, uVar0);
			unk_0x33A90AD8FA327B72(&uVar0);
			func_452(&iLocal_49, 16384);
			func_34(&uLocal_113);
		}
		return 1;
	}
	if (unk_0x51374A0BB2871E6E(iLocal_96, 1))
	{
		if (unk_0x9B5F286CC8377932(iLocal_96))
		{
			unk_0x5EE92E5069683596(iLocal_96, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0x7CBF8CE5F3C88AEC(iLocal_96);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_460(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_460(iLocal_75, 524288))
			{
				if (unk_0x9B5F286CC8377932(iLocal_96))
				{
					unk_0xDCF460AE46C9489C(iLocal_96, func_61(iLocal_293), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					unk_0x7CBF8CE5F3C88AEC(iLocal_96);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_460(iLocal_75, 524288))
			{
				if (unk_0x9B5F286CC8377932(iLocal_96))
				{
					if (unk_0xC47857E5E74EA5AF(iLocal_96, -2017877118) == 7)
					{
						func_58(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					unk_0x7CBF8CE5F3C88AEC(iLocal_96);
				}
			}
			else if (unk_0x9B5F286CC8377932(iLocal_96))
			{
				func_58(0);
				iLocal_54 = 3;
			}
			else
			{
				unk_0x7CBF8CE5F3C88AEC(iLocal_96);
			}
			break;
		
		case 3:
			func_452(&iLocal_49, 16384);
			func_34(&uLocal_113);
			return 1;
			break;
	}
	return 0;
}

void func_58(bool bParam0)
{
	struct<3> Var0;
	
	if (((unk_0x4ADA7967585FA951(iLocal_96) || unk_0xDE5F6E7A8F69ECA1(iLocal_96)) || unk_0x4C4A0E641CC945C2(iLocal_96, func_59(0))) || unk_0x4C4A0E641CC945C2(iLocal_96, func_59(1)))
	{
		return;
	}
	Var0 = { unk_0x1141852D07400777(iLocal_96, 1) };
	if (!unk_0x2EAC68D550960C3C(Var0, func_59(0), 20f, 1) && !unk_0x2EAC68D550960C3C(Var0, func_59(1), 20f, 1))
	{
		if (bParam0)
		{
			unk_0x5EE92E5069683596(0, 1193033728, 0);
		}
		else
		{
			unk_0x5EE92E5069683596(iLocal_96, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0xA3A25B3BCF95E908(iLocal_96, Var0, 20f, 0);
	}
	else
	{
		unk_0xA3A25B3BCF95E908(0, Var0, 20f, 0);
	}
}

char* func_59(int iParam0)
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_61(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_62()
{
	if (unk_0xAF437D7C802AB246(iLocal_96))
	{
		return;
	}
	if (!unk_0xB43400C480010FCA(iLocal_96))
	{
		if (func_18() == 2)
		{
			unk_0x489E3B00AFB0758C(iLocal_96, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x489E3B00AFB0758C(iLocal_96, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_63(int iParam0)
{
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (func_64(iParam0))
		{
			unk_0xC31A3F1982C7B12B(iParam0, 109, 1);
		}
	}
}

int func_64(int iParam0)
{
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if ((unk_0x23417CDB252083F9(iParam0, func_61(iLocal_293), func_60(1), 3) || unk_0x23417CDB252083F9(iParam0, func_61(iLocal_293), func_60(2), 3)) || unk_0x23417CDB252083F9(iParam0, func_61(iLocal_293), func_60(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_65()
{
	float fVar0;
	
	if (!unk_0xAF437D7C802AB246(iLocal_97))
	{
		if (unk_0xC45A34912542C4EB(iLocal_98, 0))
		{
			if (unk_0x8AF655CC5761C7A2(iLocal_97, iLocal_98, 0))
			{
				if (unk_0xC47857E5E74EA5AF(iLocal_96, 242628503) == 1)
				{
					if (unk_0x229936D409069998(iLocal_96) > 1)
					{
						if (unk_0x0E6C083BC5101C8B(iLocal_96, iLocal_97, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = unk_0xD4F0FC8FFEDE152B(iLocal_98);
							if (fVar0 <= 1f)
							{
								func_66(0);
								iLocal_64 = unk_0x9D40BBF80D8F5E8A();
								iLocal_68 = unk_0x0ADD324BC46177EF(4000, 8000);
								func_461("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_295 = 4;
							}
						}
						else
						{
							func_461("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_90();
						}
					}
				}
			}
			else
			{
				func_461("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_461("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_461("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_66(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!func_521())
	{
		if (bParam0)
		{
			unk_0x28EB71E26B7A2DE2(iLocal_96, "PROSTITUTE_GROUP", 0);
			func_81("PROSTITUTES_SOLICIT_SCENE");
		}
		func_67();
		if (func_460(iLocal_49, 4194304))
		{
			iVar0 = unk_0x0ADD324BC46177EF(1, 4);
			unk_0x94026C1D1DB14225(&uVar1);
			unk_0xDCF460AE46C9489C(0, func_61(iLocal_293), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xDCF460AE46C9489C(0, func_61(iLocal_293), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xDCF460AE46C9489C(0, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x911ECBCE73F8EC3F(uVar1);
			unk_0xC2C4A3A9FF2FBFFF(iLocal_96, uVar1);
			unk_0x33A90AD8FA327B72(&uVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				unk_0x28EB71E26B7A2DE2(iLocal_96, "PROSTITUTE_GROUP", 0);
				func_81("PROSTITUTES_SOLICIT_SCENE");
			}
			func_67();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_460(iLocal_49, 4194304))
			{
				if (unk_0x9B5F286CC8377932(iLocal_96))
				{
					unk_0xDCF460AE46C9489C(iLocal_96, func_61(iLocal_293), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 2;
				}
				else
				{
					unk_0x7CBF8CE5F3C88AEC(iLocal_96);
				}
			}
			break;
		
		case 2:
			if (unk_0x9B5F286CC8377932(iLocal_96))
			{
				if (unk_0xC47857E5E74EA5AF(iLocal_96, -2017877118) == 7)
				{
					iVar0 = unk_0x0ADD324BC46177EF(1, 4);
					unk_0xDCF460AE46C9489C(iLocal_96, func_61(iLocal_293), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 3;
				}
			}
			else
			{
				unk_0x7CBF8CE5F3C88AEC(iLocal_96);
			}
			break;
		
		case 3:
			if (unk_0x9B5F286CC8377932(iLocal_96))
			{
				if (unk_0xC47857E5E74EA5AF(iLocal_96, -2017877118) == 7)
				{
					unk_0xDCF460AE46C9489C(iLocal_96, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_53 = 4;
				}
			}
			else
			{
				unk_0x7CBF8CE5F3C88AEC(iLocal_96);
			}
			break;
		
		case 4:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_67()
{
	if (unk_0xAF437D7C802AB246(iLocal_96))
	{
		return;
	}
	if (!unk_0xB43400C480010FCA(iLocal_96))
	{
		switch (func_18())
		{
			case 0:
				if (!func_68(iLocal_96))
				{
					unk_0x489E3B00AFB0758C(iLocal_96, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x489E3B00AFB0758C(iLocal_96, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_68(iLocal_96))
				{
					unk_0x489E3B00AFB0758C(iLocal_96, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x489E3B00AFB0758C(iLocal_96, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_68(iLocal_96))
				{
					unk_0x489E3B00AFB0758C(iLocal_96, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x489E3B00AFB0758C(iLocal_96, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	return func_69(iVar0);
}

int func_69(int iParam0)
{
	if (func_70(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18() == 0)
	{
		iVar0 = Global_99155.f_8663.f_1[iParam0 /*11*/][0];
	}
	else if (func_18() == 1)
	{
		iVar0 = Global_99155.f_8663.f_1[iParam0 /*11*/][1];
	}
	else if (func_18() == 2)
	{
		iVar0 = Global_99155.f_8663.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_71(int iParam0)
{
	int iVar0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_70(iVar0) > 0)
			{
				if ((func_77(iParam0, iVar0) && func_73(iParam0, iVar0)) && func_72(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_72(int iParam0, int iParam1)
{
	if (unk_0x39AAA01637173E81(iParam0, Global_99155.f_8663.f_1[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_74(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_76(iParam2);
	return unk_0xB9111DA78E2971F6(uParam0, uVar0) == func_75(iParam1, iParam2);
}

int func_75(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_99155.f_8663.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_76(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_78(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_78(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_80(iParam2);
	return unk_0x0CBEED266436AEFF(uParam0, uVar0) == func_79(iParam1, iParam2);
}

int func_79(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_99155.f_8663.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_80(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_81(char* sParam0)
{
	if (!unk_0x64C1636D480771D9(sParam0))
	{
		unk_0x91523366B2FDCD40(sParam0);
	}
}

void func_82()
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	
	if (!unk_0xAF437D7C802AB246(iLocal_97))
	{
		if (unk_0xC45A34912542C4EB(iLocal_98, 0))
		{
			if (unk_0x8AF655CC5761C7A2(iLocal_97, iLocal_98, 0))
			{
				fVar0 = unk_0xD4F0FC8FFEDE152B(iLocal_98);
				if (unk_0xC47857E5E74EA5AF(iLocal_97, -272084098) == 7 || fVar0 <= 1f)
				{
					unk_0x67060D73A7F90F25(unk_0x1B2DC87EFB36DF80(iLocal_98), &Var4, &Var1);
					Var7 = { Var1 - Var4 };
					Var7 = { Var7 / Vector(2f, 2f, 2f) };
					Var10 = { unk_0xBD306D8AFEF4E078(iLocal_98, 0.2f, 0.2f, 0f) };
					Var13 = { unk_0xBD306D8AFEF4E078(iLocal_98, 0.2f, 0.2f, 0f) };
					Var16 = { unk_0x1141852D07400777(iLocal_96, 1) };
					if (unk_0x2A488C176D52CCA5(Var16, Var13) < unk_0x2A488C176D52CCA5(Var16, Var10))
					{
						Var10 = { Var13 };
					}
					unk_0x94026C1D1DB14225(&uLocal_101);
					unk_0x33E113E52A91C5C3(0, Var10.f_0, Var10.f_1, Var10.f_2, 1f, -1, 0.5f, 8192, 1193033728);
					unk_0x58F62EDF6111D598(0, iLocal_97, 0);
					unk_0x39FD98334BDB065B(0, -1);
					unk_0x911ECBCE73F8EC3F(uLocal_101);
					unk_0xC2C4A3A9FF2FBFFF(iLocal_96, uLocal_101);
					unk_0x33A90AD8FA327B72(&uLocal_101);
					func_461("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_295 = 3;
				}
				else
				{
					func_461("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_461("EXIT - OTHER OUT OF VEHICLE");
				func_90();
			}
		}
		else
		{
			func_461("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_461("EXIT - OTHER ped INJURED");
		func_90();
	}
}

void func_83()
{
	struct<3> Var0;
	
	if (!unk_0xAF437D7C802AB246(iLocal_97))
	{
		if (unk_0xC45A34912542C4EB(iLocal_98, 0))
		{
			if (unk_0x8AF655CC5761C7A2(iLocal_97, iLocal_98, 0))
			{
				if (func_85(&iLocal_98))
				{
					if (func_84(unk_0x1141852D07400777(iLocal_97, 1), 1106247680))
					{
						return;
					}
					Var0 = { unk_0x1141852D07400777(iLocal_96, 1) };
					if (unk_0x45E3C087F9B6E0A3(Var0, &Var0, 8, 1077936128, 0))
					{
						unk_0xE01CB20E43291B7D(iLocal_97, 1f);
						unk_0xD91F1EE796A923F6(iLocal_97, 0.2f);
						unk_0x4BAA830483677BDC(iLocal_97, 0.05f);
						unk_0x638E5A39639FFC7F(iLocal_97, iLocal_98, Var0, 0f, 3, 360f, 1);
						unk_0x6A8BCE61F660B8D0(iLocal_97, iLocal_96, -1, 2048, 4);
						func_461("OTHER TOLD TO PULL OVER");
						iLocal_295 = 2;
					}
				}
				else
				{
					func_461("EXIT - Vehicle is not suitable");
					func_89(15);
				}
			}
			else
			{
				func_461("EXIT - OTHER OUT OF THE VEHICLE");
				func_89(15);
			}
		}
		else
		{
			func_461("EXIT - OTHER VEHICLE DEAD");
			func_89(15);
		}
	}
	else
	{
		func_461("EXIT - OTHER ped INJURED");
		func_89(15);
	}
}

bool func_84(struct<3> Param0, int iParam3)
{
	if (func_521())
	{
		return unk_0x3498640250A18717(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3));
	}
	return (unk_0x9C591E519D409699(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)) || unk_0x3498640250A18717(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)));
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC45A34912542C4EB(*iParam0, 0))
	{
		iVar0 = unk_0x1B2DC87EFB36DF80(*iParam0);
		if (func_88(iVar0, 0) && func_87(*iParam0))
		{
			if (unk_0x25ECA1DD55F6CB7F(*iParam0) > 0)
			{
				iVar1 = unk_0x34B3E2C1CD1929BF(*iParam0);
				if (((iVar1 == 0 && unk_0xD12071DBE8393EC8(*iParam0, 0)) && (!unk_0x087B4B9B00A33D4D(*iParam0, 1) && !unk_0x087B4B9B00A33D4D(*iParam0, 0))) || unk_0xBD6B21D725712BDE(*iParam0, 0) == iLocal_96)
				{
					if (func_41(*iParam0))
					{
						if (!func_460(iLocal_49, 32768))
						{
							func_452(&iLocal_49, 32768);
							if (!func_460(iLocal_49, 8))
							{
								unk_0x5FC34204E17B27E0(func_86());
								func_452(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_460(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_460(iLocal_49, 8))
						{
							if (unk_0x05416FE34E390CB7(func_86()))
							{
								unk_0xE4036833A4846B4A(func_86());
								func_5(&iLocal_49, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_86()
{
	return "clipset@veh@low@ps@female@base";
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if (unk_0xA9D3956F42AEC644(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x1C8AF615CFEF2FE5(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x84501D0C09CEA717(iParam0, iVar1, unk_0x1C8AF615CFEF2FE5(iParam0, iVar1)), 16);
						iVar2 = unk_0xC7C6DDDE84A8E734(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0xC7C6DDDE84A8E734("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0xEC3733C97602ACFD(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
				return 1;
				break;
		}
		if (unk_0xEC3733C97602ACFD(iParam0) == 931866387 && unk_0x1B2DC87EFB36DF80(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	if ((((unk_0xAA65D1F2BF4AAFFB(iParam0) || unk_0xD1C57B32C6DE7BB6(iParam0)) || unk_0xFFD2CE10E8C7E77F(iParam0)) || unk_0x437C3632DA4A7584(iParam0)) || unk_0x07C6F7E084F6A97E(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2"))
	{
		return 0;
	}
	return 1;
}

void func_89(int iParam0)
{
	iLocal_295 = iParam0;
}

void func_90()
{
	if (func_521())
	{
		if (unk_0x9B5F286CC8377932(iLocal_96))
		{
			unk_0xFA2C5C2D054C888E(iLocal_96);
			unk_0x44C7AD5B54E267EE(iLocal_96);
		}
	}
	else
	{
		unk_0xFA2C5C2D054C888E(iLocal_96);
		unk_0x44C7AD5B54E267EE(iLocal_96);
	}
	iLocal_97 = 0;
	iLocal_98 = 0;
	unk_0xDCF460AE46C9489C(iLocal_96, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, unk_0x8AF26D6D6BBE6931(0f, 0.9f), 0, 0, 0);
	func_89(0);
	iLocal_296 = 0;
	iLocal_294 = 1;
}

void func_91(var uParam0)
{
	if (!func_460(iLocal_49, 32))
	{
		iLocal_294 = 1;
	}
	if (iLocal_295 > 1 && iLocal_295 != 12)
	{
		if (!func_460(iLocal_49, 33554432))
		{
			if (func_521())
			{
				if (Global_1696036 || func_444())
				{
					func_443(0);
					func_452(&iLocal_49, 33554432);
				}
			}
			if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0)
			{
				if (func_460(iLocal_49, 1048576) || func_460(iLocal_49, 8192))
				{
					func_443(0);
					func_452(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_295)
	{
		case 0:
			if (func_460(iLocal_49, 16384) || func_460(iLocal_49, 8388608))
			{
				if (!func_10(&uLocal_113))
				{
					func_442(&uLocal_113);
				}
				if (func_441(&uLocal_113, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_296 != 0 && !func_440("PROS_NO_MONEY"))
			{
				func_58(0);
				switch (func_18())
				{
					case 0:
						func_439(&uLocal_122, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_439(&uLocal_122, 0, unk_0xE7869D5D7816A9B6(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_439(&uLocal_122, 0, unk_0xE7869D5D7816A9B6(), "TREVOR", 0, 1);
						break;
				}
				iLocal_295 = 1;
			}
			else
			{
				func_438();
				iLocal_296 = 2;
			}
			break;
		
		case 1:
			func_425(uParam0);
			break;
		
		case 2:
			func_412(uParam0);
			break;
		
		case 3:
			func_411();
			break;
		
		case 4:
			func_399(uParam0);
			break;
		
		case 5:
			func_393();
			break;
		
		case 6:
			func_392(uParam0);
			break;
		
		case 7:
			func_371();
			func_363();
			break;
		
		case 8:
			func_360();
			unk_0x8CCCC48313B0F20F(0, 80, 1);
			unk_0x8CCCC48313B0F20F(0, 0, 1);
			unk_0x7BB1D0BBB1E5E5A7(unk_0x3F80C6638E3A1A90());
			func_223();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			if (func_521())
			{
				func_217(uParam0);
			}
			break;
		
		case 9:
			func_214();
			break;
		
		case 10:
			func_211();
			break;
		
		case 11:
			unk_0x7BB1D0BBB1E5E5A7(unk_0x3F80C6638E3A1A90());
			unk_0x8CCCC48313B0F20F(0, 0, 1);
			unk_0x8CCCC48313B0F20F(0, 80, 1);
			func_118();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			func_115(uParam0);
			if (func_521())
			{
				unk_0xC31A3F1982C7B12B(unk_0xE7869D5D7816A9B6(), 433, 1);
				func_217(uParam0);
			}
			break;
		
		case 12:
			func_459();
			break;
		
		case 13:
			unk_0x8CCCC48313B0F20F(0, 80, 1);
			unk_0x8CCCC48313B0F20F(0, 0, 1);
			func_96();
			break;
		
		case 14:
			func_95();
			break;
		
		case 15:
			unk_0x8CCCC48313B0F20F(0, 80, 1);
			unk_0x8CCCC48313B0F20F(0, 0, 1);
			func_92(uParam0);
			break;
	}
}

void func_92(var uParam0)
{
	if (!func_521())
	{
		if (unk_0x23417CDB252083F9(unk_0xE7869D5D7816A9B6(), func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_94(1), 3))
		{
			return;
		}
	}
	if (func_460(iLocal_49, 16))
	{
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x91F0593A3B8D1A3F(unk_0x3F80C6638E3A1A90(), 1);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_460(iLocal_49, 2))
	{
		func_93(1);
		func_461("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_511();
	if (func_521())
	{
		func_506(uParam0);
	}
}

void func_93(int iParam0)
{
}

var func_94(bool bParam0)
{
	if (!func_460(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(6);
		}
		else
		{
			return func_39(7);
		}
	}
	if (bParam0)
	{
		return func_40(6);
	}
	return func_40(7);
}

void func_95()
{
	if (!unk_0xB43400C480010FCA(unk_0xE7869D5D7816A9B6()))
	{
		if (iLocal_72 == 0)
		{
			if (func_460(iLocal_49, 134217728))
			{
				unk_0x7346544C767CFCBF(iLocal_96, 32768, 0);
				unk_0x7346544C767CFCBF(iLocal_96, 196624, 1);
			}
			unk_0x489E3B00AFB0758C(iLocal_96, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_89(15);
		}
	}
}

void func_96()
{
	switch (iLocal_303)
	{
		case 0:
			if (!unk_0xB43400C480010FCA(iLocal_96) || func_114(&uLocal_107) > 4f)
			{
				func_109(iLocal_96);
				if (func_70(func_71(iLocal_96)) == 1)
				{
					iLocal_303 = 2;
				}
				else
				{
					func_108(&uLocal_107);
					func_107("PROS_RESPONSE");
					iLocal_303 = 1;
				}
			}
			break;
		
		case 1:
			func_106();
			if (unk_0xB43400C480010FCA(iLocal_96) || func_105())
			{
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 256);
				func_452(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&uLocal_107))
				{
					func_34(&uLocal_107);
				}
				if (func_114(&uLocal_107) > 15f || iLocal_306 != 0)
				{
					unk_0x1D208E4A4E1D4FFE(1);
					func_104();
					iLocal_303 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_105())
			{
				iLocal_303 = 3;
			}
			break;
		
		case 3:
			func_99(0);
			func_97();
			func_89(15);
			break;
	}
}

int func_97()
{
	if (func_98(0))
	{
		return 0;
	}
	if (Global_91064.f_8)
	{
		if (Global_91064.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91064.f_10 > 1)
	{
		return 0;
	}
	Global_91064.f_10++;
	return 1;
}

bool func_98(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

void func_99(bool bParam0)
{
	if (!unk_0xAF437D7C802AB246(iLocal_96))
	{
		if (unk_0xAEF17BDE274A1247())
		{
			unk_0x2C9DDB5306DF417C(&iLocal_96);
		}
		else
		{
			func_100(iLocal_96, bParam0);
		}
	}
}

void func_100(int iParam0, bool bParam1)
{
	var uVar0;
	float fVar1;
	
	if (unk_0x23417CDB252083F9(unk_0xE7869D5D7816A9B6(), func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_103(1), 3))
	{
		unk_0xDCF460AE46C9489C(unk_0xE7869D5D7816A9B6(), func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_94(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!unk_0xAF437D7C802AB246(uParam0))
	{
		if (func_521())
		{
			if (unk_0x9B5F286CC8377932(iParam0))
			{
				unk_0x26CBEA3336FB494C(iParam0);
			}
		}
		else
		{
			unk_0x26CBEA3336FB494C(iParam0);
		}
		if (func_460(iLocal_49, 33554432))
		{
			unk_0xFA2C5C2D054C888E(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0x8AF26D6D6BBE6931(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_452(&iLocal_49, 134217728);
			}
		}
		if (func_460(iLocal_49, 134217728))
		{
			unk_0x7346544C767CFCBF(iParam0, 32768, 1);
			unk_0x4B79E06845D63B96(iParam0, unk_0xE7869D5D7816A9B6(), 300f, -1, 1, 0);
		}
		else
		{
			unk_0x7346544C767CFCBF(iParam0, 196624, 1);
			unk_0x33A90AD8FA327B72(&uVar0);
			unk_0x94026C1D1DB14225(&uVar0);
			unk_0x732BBAB72712004C(0, 1);
			if (unk_0x51374A0BB2871E6E(iParam0, 0))
			{
				if (!unk_0x6D30046757C9C4F9(unk_0xF0295FF51F2D7803(iParam0, 0)))
				{
					func_102(iParam0, 1);
				}
				else
				{
					if (unk_0x23417CDB252083F9(iParam0, func_44(iParam0, 0, 0), func_103(0), 3))
					{
						if (iLocal_72 > 0)
						{
							unk_0xDCF460AE46C9489C(0, func_44(iParam0, 0, 0), func_94(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0xDCF460AE46C9489C(0, func_44(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_102(iParam0, 1);
				}
			}
			unk_0x732BBAB72712004C(0, 0);
			unk_0x5EE92E5069683596(0, 1193033728, 0);
			unk_0x911ECBCE73F8EC3F(uVar0);
			unk_0xC2C4A3A9FF2FBFFF(iParam0, uVar0);
			unk_0x33A90AD8FA327B72(&uVar0);
		}
		if (func_521())
		{
			if (unk_0x145125122E838B28(iLocal_96))
			{
				if (unk_0xB5A45FB150DB6127(unk_0x5BD89D856D2E7C36(iLocal_96)))
				{
					unk_0x8D6671D78D1F569B(iParam0, 1);
				}
			}
		}
		else
		{
			unk_0x8D6671D78D1F569B(iParam0, 1);
		}
	}
}

var func_101(bool bParam0)
{
	if (!func_460(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(4);
		}
		else
		{
			return func_39(5);
		}
	}
	if (bParam0)
	{
		return func_40(4);
	}
	return func_40(5);
}

void func_102(int iParam0, int iParam1)
{
	if (!unk_0xE8C390D56BE854E1(uParam0, unk_0xF0295FF51F2D7803(uParam0, 0), 0, 0, 0))
	{
		unk_0xCD7A5BCC47D00FB2(0, 0, 16842752);
	}
	else
	{
		unk_0xCD7A5BCC47D00FB2(0, 0, iParam1);
	}
}

var func_103(bool bParam0)
{
	if (!func_460(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(2);
		}
		else
		{
			return func_39(3);
		}
	}
	if (bParam0)
	{
		return func_40(2);
	}
	return func_40(3);
}

void func_104()
{
	int iVar0;
	
	iVar0 = unk_0x0ADD324BC46177EF(0, 1000);
	if ((iVar0 <= 333 && iLocal_306 == 0) || iLocal_306 == 3)
	{
		unk_0x489E3B00AFB0758C(unk_0xE7869D5D7816A9B6(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_306 == 0) || iLocal_306 == 1)
	{
		unk_0x489E3B00AFB0758C(unk_0xE7869D5D7816A9B6(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_306 == 0 || iLocal_306 == 2)
	{
		unk_0x489E3B00AFB0758C(unk_0xE7869D5D7816A9B6(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_105()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	if (iLocal_306 == 0)
	{
		unk_0x1B8E0930AB96444B(0);
		unk_0x8CCCC48313B0F20F(0, 99, 1);
		unk_0x8CCCC48313B0F20F(0, 76, 1);
		unk_0x8CCCC48313B0F20F(0, 80, 1);
		unk_0x9F2D8D5B57CF6622(2, 203);
		unk_0x9F2D8D5B57CF6622(2, 201);
		unk_0x9F2D8D5B57CF6622(2, 202);
		if (unk_0xEA7F1ED415FFE2E8(2, 203))
		{
			unk_0x1D208E4A4E1D4FFE(1);
			unk_0xCC18B241D266EF14(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 3;
		}
		else if (unk_0xEA7F1ED415FFE2E8(2, 201))
		{
			unk_0x1D208E4A4E1D4FFE(1);
			unk_0xCC18B241D266EF14(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 1;
		}
		else if (unk_0xEA7F1ED415FFE2E8(2, 202))
		{
			unk_0x1D208E4A4E1D4FFE(1);
			unk_0xCC18B241D266EF14(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 2;
		}
	}
}

void func_107(char* sParam0)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 1, 1, -1);
}

void func_108(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		if (unk_0xB43400C480010FCA(iParam0))
		{
			unk_0x6C192F2018742EC1(iParam0);
		}
		if (!unk_0xB43400C480010FCA(iParam0))
		{
			func_111(iParam0);
			func_110(iVar0);
		}
	}
}

void func_110(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&Var1, "pbpro_H", 24);
		StringIntConCat(&Var1, iParam0 + 1, 24);
		StringConCat(&Var1, "V", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_11(&uLocal_122, "pbproau", &Var1, 4, 0, 0, 0);
	}
}

void func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		func_113(&uLocal_122, 4);
		func_439(&uLocal_122, 6, iParam0, func_112(iVar0), 0, 1);
	}
}

char* func_112(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_113(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

float func_114(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_115(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_521())
	{
		return;
	}
	bVar0 = false;
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iVar1 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
			if (unk_0xD51CFE69539DB6D8(iVar1))
			{
				if (unk_0xBD6B21D725712BDE(iVar1, -1) != unk_0xE7869D5D7816A9B6())
				{
					bVar0 = true;
				}
				if (unk_0xBD6B21D725712BDE(iVar1, 0) != iLocal_96)
				{
					bVar0 = true;
				}
				if (unk_0x34B3E2C1CD1929BF(iVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_116(0);
					unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
					func_511();
					func_506(uParam0);
				}
			}
		}
	}
}

void func_116(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
		Var0 = { unk_0x18AD8448B5C85E6D(iLocal_99, 2) };
		unk_0x7FB81B1DD14A3BE4(180f);
		unk_0x6EF372C057320AD4((-5.5f - Var0.f_0), 1065353216);
	}
	unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
	func_117(&(Local_313[0 /*7*/]));
	func_117(&(Local_313[3 /*7*/]));
	func_117(&(Local_313[2 /*7*/]));
	func_117(&(Local_313[1 /*7*/]));
	if (func_440("PROS_CAM_TOG") || func_440("PROS_CAM_OC"))
	{
		unk_0x1D208E4A4E1D4FFE(1);
	}
}

void func_117(var uParam0)
{
	if (unk_0xCF686B56FD5328B5(*uParam0))
	{
		unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
		if (unk_0x64DEF1DE79E83BEB(*uParam0))
		{
			unk_0x63498CF6CF35C6A2(*uParam0, 0);
		}
		unk_0x74FF6D08DE291367(*uParam0, 0);
	}
}

void func_118()
{
	if (unk_0xC45A34912542C4EB(iLocal_99, 0))
	{
		unk_0x5A4DA86F0AB35256(iLocal_99, 1);
	}
	if (iLocal_302 != 5)
	{
		if ((((((!func_210(iLocal_76) && !func_210(iLocal_77)) && !func_210(iLocal_78)) && !func_210(iLocal_79)) && !func_210(iLocal_80)) && !func_210(iLocal_81)) && !func_210(iLocal_82))
		{
			if (!unk_0x471E33531AEA977D(iLocal_96) || unk_0xBE39A9E9E0D434A6(unk_0xE7869D5D7816A9B6()))
			{
				iLocal_302 = 5;
			}
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				if (!unk_0xC45A34912542C4EB(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0))
				{
					iLocal_302 = 5;
				}
			}
		}
	}
	unk_0x1B7A773B18DF3DB0(2);
	unk_0x8CCCC48313B0F20F(2, 19, 1);
	unk_0x8CCCC48313B0F20F(2, 37, 1);
	func_206();
	switch (iLocal_302)
	{
		case 0:
			if (func_521())
			{
				func_203(1078, -1);
			}
			func_34(&uLocal_119);
			func_202(func_43(), func_460(iLocal_49, 32768));
			iLocal_302 = 1;
			func_461("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0x8CCCC48313B0F20F(0, 48, 1);
			unk_0x8CCCC48313B0F20F(0, 0, 1);
			func_195();
			func_188();
			func_127();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_7(&uLocal_119) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_305 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_72 >= 3)
					{
						func_123();
						iLocal_302 = 5;
					}
					else
					{
						func_122();
						unk_0x12D823F78702C792(iLocal_48);
						iLocal_302 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0x8CCCC48313B0F20F(0, 48, 1);
			func_195();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_42(0, 1))
			{
				unk_0x8CCCC48313B0F20F(0, 0, 1);
			}
			if (func_7(&uLocal_119) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_305 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_72 = 3;
					if (iLocal_72 >= 3)
					{
						func_123();
						iLocal_302 = 5;
						func_108(&uLocal_104);
					}
				}
			}
			break;
		
		case 3:
			unk_0x8CCCC48313B0F20F(0, 0, 1);
			if (!unk_0xB43400C480010FCA(iLocal_96))
			{
				func_124("PROSTITUTES_SOLICIT_SCENE");
				func_124("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_301 = 0;
				iLocal_302 = 0;
				func_121();
				unk_0x12D823F78702C792(iLocal_48);
				iLocal_295 = 8;
			}
			break;
		
		case 5:
			unk_0x8CCCC48313B0F20F(0, 0, 1);
			if (!unk_0xB43400C480010FCA(iLocal_96))
			{
				if (iLocal_72 > 0)
				{
					if (func_120(iLocal_96))
					{
						func_119();
					}
					else
					{
						func_443(0);
					}
				}
				else
				{
					func_461("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_443(1);
				}
			}
			break;
	}
}

void func_119()
{
	if (unk_0xAF437D7C802AB246(iLocal_96))
	{
		return;
	}
	if (!unk_0xB43400C480010FCA(unk_0xE7869D5D7816A9B6()))
	{
		if (iLocal_72 == 0)
		{
			unk_0x489E3B00AFB0758C(unk_0xE7869D5D7816A9B6(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_120(iLocal_96))
		{
			func_34(&uLocal_107);
			unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 768);
			func_452(&iLocal_49, 2048);
			iLocal_295 = 13;
		}
	}
}

bool func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_70(iVar0) < 6;
}

void func_121()
{
	Global_2426494.f_615.f_10 = 1;
}

void func_122()
{
	if (unk_0xAF437D7C802AB246(iLocal_96))
	{
		return;
	}
	if (!unk_0xB43400C480010FCA(iLocal_96))
	{
		unk_0x489E3B00AFB0758C(iLocal_96, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_123()
{
	if (unk_0xAF437D7C802AB246(iLocal_96))
	{
		return;
	}
	if (!unk_0xB43400C480010FCA(iLocal_96))
	{
		unk_0x489E3B00AFB0758C(iLocal_96, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_124(char* sParam0)
{
	if (unk_0x64C1636D480771D9(sParam0))
	{
		unk_0x61B624BA2305D0E5(sParam0);
	}
}

int func_125()
{
	if (iLocal_305 == 6)
	{
		return 1;
	}
	return 0;
}

void func_126()
{
	unk_0xB8E76C58DEE33403();
	unk_0x2E79D688E5929FE3();
}

void func_127()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0xF6917DE0E003509D(func_44(unk_0xE7869D5D7816A9B6(), 0, 0)))
	{
		return;
	}
	if (!unk_0x2917D5E1CB5CE43A(func_44(unk_0xE7869D5D7816A9B6(), 0, 0)))
	{
		return;
	}
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 0);
	}
	bVar1 = func_43();
	bVar2 = func_460(iLocal_49, 32768);
	if (!func_42(0, 1))
	{
		func_182(&iLocal_83);
	}
	unk_0x8CCCC48313B0F20F(2, 19, 1);
	unk_0x8CCCC48313B0F20F(2, 37, 1);
	func_181(23, 1);
	switch (iLocal_305)
	{
		case 0:
			func_5(&iLocal_49, 256);
			if (!func_42(0, 1))
			{
				func_176(&iLocal_83);
			}
			func_175(iLocal_96, 0);
			if (!func_521())
			{
				func_174(bVar1, bVar2);
			}
			func_173(bVar1, bVar2);
			iLocal_305 = 1;
			break;
		
		case 1:
			func_172(iLocal_76);
			if (func_210(iLocal_77))
			{
				if (!func_460(iLocal_50, 4))
				{
					if (!func_521())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_77) >= fVar0)
					{
						func_452(&iLocal_50, 4);
					}
				}
			}
			if (func_210(iLocal_76))
			{
				if (!func_460(iLocal_50, 8))
				{
					if (!func_521())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_76) >= fVar0)
					{
						func_452(&iLocal_50, 8);
					}
				}
			}
			if (func_460(iLocal_50, 4) && func_460(iLocal_50, 8))
			{
				if (!func_521())
				{
					func_170(bVar1, bVar2);
				}
				func_169(bVar1, bVar2);
				iLocal_305 = 2;
			}
			break;
		
		case 2:
			func_172(iLocal_78);
			if (func_210(iLocal_78))
			{
				if (!func_460(iLocal_50, 16))
				{
					if (!func_521())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_78) >= fVar0)
					{
						func_452(&iLocal_50, 16);
					}
				}
			}
			if (func_460(iLocal_50, 16))
			{
				if (!func_521())
				{
					func_168(bVar1, bVar2);
				}
				func_167(bVar1, bVar2);
				iLocal_305 = 3;
			}
			break;
		
		case 3:
			func_172(iLocal_79);
			if (func_210(iLocal_79))
			{
				if (!func_460(iLocal_50, 64))
				{
					if (!func_460(iLocal_49, 16777216))
					{
						if (!func_521())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_79) >= fVar0)
						{
							func_452(&iLocal_49, 16777216);
							iLocal_73++;
						}
					}
					else
					{
						if (!func_521())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_79) < fVar0)
						{
							func_5(&iLocal_49, 16777216);
						}
					}
					if (iLocal_73 >= func_160(func_521(), func_166(), func_161()))
					{
						func_452(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_460(iLocal_50, 64))
			{
				func_452(&iLocal_50, 64);
			}
			if (func_460(iLocal_50, 64))
			{
				if (!func_521())
				{
					func_159(bVar1, bVar2);
				}
				func_158(bVar1, bVar2);
				iLocal_305 = 4;
			}
			break;
		
		case 4:
			func_172(iLocal_80);
			if (func_210(iLocal_80))
			{
				if (!func_460(iLocal_50, 256))
				{
					if (!func_521())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_80) >= fVar0)
					{
						func_452(&iLocal_50, 256);
					}
				}
			}
			else if (!func_460(iLocal_50, 256))
			{
				func_452(&iLocal_50, 256);
			}
			if (func_460(iLocal_50, 256))
			{
				if (!func_521())
				{
					func_152(bVar1, bVar2);
				}
				func_150(bVar1, bVar2);
				iLocal_305 = 5;
			}
			break;
		
		case 5:
			func_172(iLocal_81);
			if (func_210(iLocal_81))
			{
				if (!func_460(iLocal_50, 1024))
				{
					if (!func_521())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_81) >= fVar0)
					{
						func_452(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_460(iLocal_50, 1024))
			{
				func_452(&iLocal_50, 1024);
			}
			if (func_210(iLocal_82))
			{
				if (!func_460(iLocal_50, 2048))
				{
					if (!func_521())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_82) >= fVar0)
					{
						func_452(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_460(iLocal_50, 2048))
			{
				func_452(&iLocal_50, 2048);
			}
			if (func_460(iLocal_50, 1024) && func_460(iLocal_50, 2048))
			{
				func_175(iLocal_96, 0);
				unk_0xDCF460AE46C9489C(iLocal_96, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(iLocal_305, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_175(unk_0xE7869D5D7816A9B6(), -1);
				unk_0xDCF460AE46C9489C(unk_0xE7869D5D7816A9B6(), func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(iLocal_305, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_116(1);
				iLocal_50 = 0;
				iLocal_73 = 0;
				iLocal_61 = 0;
				func_128();
				iLocal_305 = 6;
			}
			break;
	}
}

void func_128()
{
	int iVar0;
	
	if (iLocal_72 == 0 && !func_521())
	{
		if (func_21(unk_0xE7869D5D7816A9B6()) == 0)
		{
			func_149();
		}
		func_144(296, 0, 0);
		iVar0 = func_71(iLocal_96);
		if (iVar0 > -1)
		{
			func_143(iVar0);
		}
		else
		{
			func_135(iLocal_96);
		}
	}
	iLocal_72++;
	func_129();
}

void func_129()
{
	switch (func_21(unk_0xE7869D5D7816A9B6()))
	{
		case 0:
			Global_99155.f_8663.f_90[0]++;
			func_130(0, 1, 1);
			break;
		
		case 1:
			Global_99155.f_8663.f_90[1]++;
			func_130(1, 1, 1);
			break;
		
		case 2:
			Global_99155.f_8663.f_90[2]++;
			func_130(2, 1, 1);
			break;
		
		case 3:
			func_130(3, 1, 1);
			break;
	}
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_99155.f_1750.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_99155.f_1750.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3717;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 3717)
			{
				iVar0 = func_134(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_131(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, iParam1, iParam3);
	}
}

int func_132(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_133();
		if (iVar1 > -1)
		{
			Global_2466023 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466023 = 1;
		}
	}
	return iVar0;
}

int func_133()
{
	return Global_1312746;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466310[iParam0 /*5*/][func_132(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x76B2D234F1895632(iParam0))
	{
		return;
	}
	iVar0 = func_142();
	if (iVar0 == -1)
	{
		return;
	}
	func_143(iVar0);
	unk_0x4C6DD31AB89A02B8(iParam0, func_140(iVar0));
	Global_99155.f_8663.f_1[iVar0 /*11*/].f_10 = unk_0x1B2DC87EFB36DF80(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_139(iParam0, iVar1);
		func_138(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_137(iParam0, iVar4);
		func_136(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_136(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_99155.f_8663.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_137(int iParam0, int iParam1)
{
	return unk_0xB9111DA78E2971F6(iParam0, func_76(iParam1));
}

void func_138(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_99155.f_8663.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_139(int iParam0, int iParam1)
{
	return unk_0x0CBEED266436AEFF(iParam0, func_80(iParam1));
}

var func_140(int iParam0)
{
	return func_141(iParam0);
}

char* func_141(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_70(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_18() == 0)
		{
			Global_99155.f_8663.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_18() == 1)
		{
			Global_99155.f_8663.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_18() == 2)
		{
			Global_99155.f_8663.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_144(int iParam0, int iParam1, int iParam2)
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
		func_148((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_99155.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99155.f_8808[iParam0 /*12*/].f_6 == 11 || Global_99155.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99155.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_99155.f_8808[iParam0 /*12*/].f_10 = iParam1;
		Global_99155.f_8808[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_145();
	}
}

void func_145()
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
	Global_98891 = 0;
	Global_98892 = 0;
	Global_98893 = 0;
	Global_98894 = 0;
	Global_98895 = 0;
	Global_98896 = 0;
	Global_98897 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99155.f_8808.f_3853;
	Global_99155.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99155.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99155.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98891++;
					fVar1 = (fVar1 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98892++;
					fVar2 = (fVar2 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98893++;
					fVar3 = (fVar3 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98894++;
					fVar4 = (fVar4 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98895++;
					fVar5 = (fVar5 + (Global_99155.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98896++;
					fVar6 = (fVar6 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98897++;
					fVar7 = (fVar7 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98874 > 0)
	{
		if (Global_98891 == Global_98874)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98875 > 0)
	{
		if (Global_98892 == Global_98875)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98876 > 0)
	{
		if (Global_98893 == Global_98876)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98877 > 0)
	{
		if (Global_98894 == Global_98877)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98878 > 0)
	{
		if (((Global_98895 == Global_98878 || (Global_98878 * 10 / Global_98895) < 41) || Global_98895 > Global_98881) || Global_98895 == Global_98881)
		{
			if (!unk_0xB519E5386FBF69E5(Global_99155.f_8808.f_3856, 14))
			{
				if (Global_98895 == Global_98878)
				{
					unk_0xE4A025C0D4FCCAFA(joaat("num_rndevents_completed"), Global_98878, 0);
					unk_0x9956FB0E4B50ECB8(&(Global_99155.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98879 > 0)
	{
		if (Global_98896 == Global_98879)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98880 > 0)
	{
		if (Global_98897 == Global_98880)
		{
			fVar7 = 5f;
		}
	}
	Global_99155.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98895 > Global_98881 || Global_98895 == Global_98881)
	{
		iVar9 = Global_98881;
	}
	else
	{
		iVar9 = Global_98895;
	}
	unk_0x39DEDCCD70293F58(joaat("num_missions_completed"), Global_98891, 1);
	unk_0x39DEDCCD70293F58(joaat("num_missions_available"), Global_98874, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_completed"), Global_98892, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_available"), Global_98875, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_completed"), Global_98893, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_available"), Global_98876, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_completed"), Global_98894, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_available"), Global_98877, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_available"), Global_98881, 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_completed"), (Global_98897 + Global_98896), 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_available"), (Global_98880 + Global_98879), 1);
	Global_98898 = (Global_98891 * 100 / Global_98874);
	Global_98900 = ((Global_98893 + Global_98892) * 100 / (Global_98876 + Global_98875));
	Global_98899 = ((Global_98894 + iVar9) * 100 / (Global_98877 + Global_98881));
	Global_98901 = ((Global_98896 + Global_98897) * 100 / (Global_98879 + Global_98880));
	unk_0xFF6A346D78DD4938(joaat("total_progress_made"), Global_99155.f_8808.f_3853, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_story_missions"), Global_98898, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_ambient_missions"), Global_98899, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_oddjobs"), Global_98900, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853))
	{
		func_147(13, unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853));
	}
	if (!unk_0x11ED867E5A37BE49())
	{
		if (!Global_69236)
		{
			if (func_146() == 2 == 0 && !unk_0x00AAD79B42B3E036())
			{
				if (unk_0x472ED84D47326927())
				{
					Global_98889 = 0;
				}
				if (!Global_55578)
				{
					func_97();
				}
			}
		}
	}
}

int func_146()
{
	return Global_25034;
}

int func_147(int iParam0, int iParam1)
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
	iVar0 = unk_0x674FE6A5C8163DA5(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x613BED2AD524D24F(iParam0, iParam1);
	}
	return 0;
}

int func_148(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_133();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x489ECBF72F3DA469((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xA689D636E73D305A((iParam0 - 0)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x489ECBF72F3DA469((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xA689D636E73D305A((iParam0 - 192)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x489ECBF72F3DA469((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xA689D636E73D305A((iParam0 - 513)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x489ECBF72F3DA469((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xA689D636E73D305A((iParam0 - 705)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xB4BF922F35D7655F((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xA689D636E73D305A((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xB4BF922F35D7655F((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xA689D636E73D305A((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x2655E62E609CEE1A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xA689D636E73D305A((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x2655E62E609CEE1A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xA689D636E73D305A((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x2655E62E609CEE1A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xA689D636E73D305A((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_87820[iVar0] = Global_87820[iVar0 + 1];
		}
		else
		{
			Global_87820[iVar0] = unk_0x9D40BBF80D8F5E8A();
		}
		iVar0++;
	}
}

void func_150(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_521())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_81, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xE7869D5D7816A9B6(), iLocal_82, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_151(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (func_521())
	{
		unk_0x3C2889178CACACC8(iParam1);
	}
	else
	{
		unk_0x360F0D01112F8AD0(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
	}
}

void func_152(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_521())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_81, 1, 0, 0);
	func_153(iLocal_96, iLocal_81, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_154(&iLocal_82, 0, 0, 0);
	func_153(unk_0xE7869D5D7816A9B6(), iLocal_82, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_153(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_521())
	{
		unk_0xDCF7222C3DC94EAB(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	*iParam0 = func_157(Var0, 0f, 0f, 0f, bParam3, iParam2, 2);
	if (iParam1 == 0)
	{
		func_156(*iParam0, iLocal_99, unk_0x56ADDC5BECDDD8A5(iLocal_99, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_156(*iParam0, iLocal_99, unk_0x56ADDC5BECDDD8A5(iLocal_99, "seat_pside_f"));
	}
	func_155(*iParam0, Var0, 0f, 0f, 0f, 0);
}

void func_155(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!func_521())
	{
		unk_0xB03FD8132C75E089(uParam0, Param1, Param4, iParam7);
	}
}

void func_156(var uParam0, int iParam1, var uParam2)
{
	if (unk_0x76B2D234F1895632(iParam1))
	{
		return;
	}
	if (func_521())
	{
		unk_0x98D42E24A4EDBF84(uParam0, iParam1, uParam2);
	}
	else
	{
		unk_0x50316D6F55CBD74A(uParam0, iParam1, uParam2);
	}
}

var func_157(struct<3> Param0, struct<3> Param3, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	
	if (func_521())
	{
		if (bParam6)
		{
			iParam7 = 0;
		}
		uVar0 = unk_0x5D517BDD55C4B76A(Param0, Param3, iParam8, bParam6, iParam7, 1065353216, 0, 1065353216);
	}
	else
	{
		uVar0 = unk_0xB839A1C489B63ACC(Param0, Param3, iParam8);
		unk_0xDB14F40E3E8CB36F(uVar0, bParam6);
		unk_0x3A7DEF86891D2891(uVar0, iParam7);
	}
	return uVar0;
}

void func_158(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_521())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_80, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xE7869D5D7816A9B6(), iLocal_80, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_159(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_521())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_80, 0, 0, 1);
	func_153(iLocal_96, iLocal_80, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xE7869D5D7816A9B6(), iLocal_80, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_160(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_161()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_162();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_162()
{
	if (func_521())
	{
		return func_134(65, -1, 0);
	}
	return func_163(func_21(unk_0xE7869D5D7816A9B6()), 1);
}

var func_163(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_164(iParam0, iParam1);
	unk_0x56DCF5665F92F9BD(iVar1, &uVar0, -1);
	return uVar0;
}

var func_164(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_165(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_165(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_166()
{
	int iVar0;
	
	if (iLocal_297 != 0)
	{
		if (iLocal_61 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_61 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_61 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_61 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_167(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_521())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_79, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xE7869D5D7816A9B6(), iLocal_79, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_168(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_521())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_79, 0, 1, 0);
	func_153(iLocal_96, iLocal_79, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_153(unk_0xE7869D5D7816A9B6(), iLocal_79, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_169(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_521())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_78, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xE7869D5D7816A9B6(), iLocal_78, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_170(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_521())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_78, 0, 0, 1);
	func_153(iLocal_96, iLocal_78, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xE7869D5D7816A9B6(), iLocal_78, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_171(int iParam0)
{
	var uVar0;
	
	if (func_521())
	{
		uVar0 = unk_0x4D221DFBB84DCF0B(unk_0xA6C2218D69567283(iParam0));
	}
	else
	{
		uVar0 = unk_0x4D221DFBB84DCF0B(iParam0);
	}
	return uVar0;
}

void func_172(int iParam0)
{
	if (!func_210(iParam0))
	{
		return;
	}
}

void func_173(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_521())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_76, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_151(unk_0xE7869D5D7816A9B6(), iLocal_77, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_174(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_521())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_76, 1, 0, 1);
	func_153(iLocal_96, iLocal_76, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_154(&iLocal_77, 0, 0, 1);
	func_153(unk_0xE7869D5D7816A9B6(), iLocal_77, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_38(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_175(int iParam0, int iParam1)
{
	if (!unk_0x8AF655CC5761C7A2(iParam0, iLocal_99, 0))
	{
		if (!func_521())
		{
			unk_0x0CC1C59D57D7212B(iParam0, iLocal_99, iParam1);
		}
		else if (!unk_0x8AF655CC5761C7A2(iParam0, iLocal_99, 0))
		{
			unk_0x65682335D54DEA1C(iParam0, iLocal_99, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_176(int iParam0)
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	uVar0 = func_178(func_179(2), unk_0x242AD66021ED4052(iLocal_99, unk_0x56ADDC5BECDDD8A5(iLocal_99, "windscreen")));
	uVar1 = func_178(func_179(1), unk_0x242AD66021ED4052(iLocal_99, unk_0x56ADDC5BECDDD8A5(iLocal_99, "windscreen")));
	Var2 = { unk_0x18AD8448B5C85E6D(iLocal_99, 2) };
	fVar5 = unk_0x2CAFFCD9F5E16D2F(iLocal_99);
	if (fVar5 >= 180f)
	{
		fVar6 = (fVar5 - 180f);
	}
	else
	{
		fVar6 = (fVar5 + 180f);
	}
	fVar7 = (-7f - Var2.f_1);
	fVar8 = (-5f - Var2.f_0);
	fVar9 = (-2.5f + Var2.f_0);
	fVar10 = ((0f - (0.7f * Var2.f_0)) + (0.3f * Var2.f_1));
	if (!unk_0xCF686B56FD5328B5(Local_313[2 /*7*/]))
	{
		func_177(&(Local_313[2 /*7*/]), func_179(2), fVar7, Var2.f_0, uVar0, 50f);
	}
	if (!unk_0xCF686B56FD5328B5(Local_313[1 /*7*/]))
	{
		func_177(&(Local_313[1 /*7*/]), func_179(1), fVar10, -Var2.f_1, uVar1, 37.3f);
	}
	if (!unk_0xCF686B56FD5328B5(Local_313[0 /*7*/]))
	{
		func_177(&(Local_313[0 /*7*/]), func_179(0), fVar8, -Var2.f_1, fVar6, 50f);
	}
	if (!unk_0xCF686B56FD5328B5(Local_313[3 /*7*/]))
	{
		func_177(&(Local_313[3 /*7*/]), func_179(3), fVar9, Var2.f_1, fVar5, 45f);
	}
	unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
	unk_0x63498CF6CF35C6A2(Local_313[*iParam0 /*7*/], 1);
}

void func_177(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	uParam0->f_1 = { Param4 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0x01A00DEC76A48F14("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x63498CF6CF35C6A2(*uParam0, 1);
	unk_0x011A61B80E2BFA7F(*uParam0, Param1, uParam0->f_1, fParam7, 0, 1, 1, 2);
	unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
}

var func_178(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x2C393A56EDEECDE4((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_179(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	struct<2> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0x76B2D234F1895632(iLocal_96))
	{
	}
	if (!unk_0xC45A34912542C4EB(iLocal_99, 0))
	{
	}
	unk_0x67060D73A7F90F25(unk_0x1B2DC87EFB36DF80(iLocal_99), &uVar3, &Var6);
	Var9 = { unk_0x242AD66021ED4052(iLocal_99, unk_0x56ADDC5BECDDD8A5(iLocal_99, "windscreen")) };
	Var12 = { unk_0x61CBEF33034AF6B9(iLocal_99, Var9) };
	switch (iParam0)
	{
		case 0:
			Var0 = { unk_0xBD306D8AFEF4E078(iLocal_99, 0f, (Var6.f_1 + 1.4f), Var12.f_2) };
			break;
		
		case 1:
			Var0 = { unk_0xBD306D8AFEF4E078(iLocal_99, 1.5f, (Var6.f_1 + 1.2f), (Var12.f_2 - 0.1f)) };
			break;
		
		case 2:
			Var0 = { unk_0xBD306D8AFEF4E078(iLocal_99, -3.7f, 0.7f, Var12.f_2) };
			break;
		
		case 3:
			Var0 = { func_180() };
			break;
	}
	return Var0;
}

Vector3 func_180()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<2> Var6;
	var uVar9;
	
	unk_0x67060D73A7F90F25(unk_0x1B2DC87EFB36DF80(iLocal_99), &Var6, &uVar9);
	Var0 = { unk_0x242AD66021ED4052(iLocal_99, unk_0x56ADDC5BECDDD8A5(iLocal_99, "windscreen")) };
	Var3 = { unk_0x61CBEF33034AF6B9(iLocal_99, Var0) };
	Var3.f_2 = (Var3.f_2 + 0.09f);
	Var6.f_1 = (Var6.f_1 - 1f);
	return unk_0xBD306D8AFEF4E078(iLocal_99, 0f, -unk_0x7F38A542899D217A(Var6.f_1), Var3.f_2);
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_25278, iParam0);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_25278, iParam0);
	}
}

void func_182(int iParam0)
{
	if (!unk_0xCF686B56FD5328B5(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0x10F9FB82A0D63EA0(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0x657EEE601EEC4152(Local_313[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0xA57007F9A665F322())
	{
		func_185(&(Local_313[*iParam0 /*7*/]));
	}
	if (func_184())
	{
		if (!func_521())
		{
			if (!func_440("PROS_CAM_OC"))
			{
				func_107("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_521())
		{
			if (!func_440("PROS_CAM_TOG"))
			{
				func_107("PROS_CAM_TOG");
			}
		}
		if ((unk_0x28BB6250B86A5CA5(2, 0) && !unk_0xA57007F9A665F322()) && !func_42(0, 1))
		{
			func_183(iParam0);
			unk_0x63498CF6CF35C6A2(Local_313[*iParam0 /*7*/], 1);
		}
	}
}

void func_183(var uParam0)
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_460(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_460(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_460(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_184()
{
	if ((func_460(iLocal_51, 16) && func_460(iLocal_51, 64)) && func_460(iLocal_51, 128))
	{
		return 1;
	}
	return 0;
}

void func_185(var uParam0)
{
	var uVar0[4];
	struct<3> Var5;
	float fVar8;
	struct<3> Var9;
	
	unk_0xC0206131733ACF5A(2);
	func_187(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	Var5.f_2 = (-(unk_0xBBDA792448DB5A89(uVar0[2]) / 127f) * 10f);
	Var5.f_1 = ((-Var5.f_2 * 3f) / 10f);
	if (unk_0xDA216D9ACC721087())
	{
		Var5.f_0 = ((unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		Var5.f_0 = (-(unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	fVar8 = (30f * unk_0x0000000050597EE2());
	Var9 = { Var5 };
	if (unk_0x7EDB1AFBE755EC7A(0))
	{
		uParam0->f_4 = func_186((uParam0->f_4 + (Var9.f_0 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_186((uParam0->f_4.f_1 + (Var9.f_1 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_186((uParam0->f_4.f_2 + (Var9.f_2 * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_186((((Var9.f_0 - uParam0->f_4) * 0.05f) * fVar8), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_186((((Var9.f_1 - uParam0->f_4.f_1) * 0.05f) * fVar8), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_186((((Var9.f_2 - uParam0->f_4.f_2) * 0.05f) * fVar8), -3f, 3f));
	}
	unk_0x3B330DB318EF2761(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

float func_186(float fParam0, float fParam1, float fParam2)
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

void func_187(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x76850CFBD68BA9D4(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x76850CFBD68BA9D4(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x76850CFBD68BA9D4(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x76850CFBD68BA9D4(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xAC0C4A44E7AB491E(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x7A016BE57B7A580F(2, 218) * 127f));
		}
		if (!unk_0xAC0C4A44E7AB491E(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x7A016BE57B7A580F(2, 219) * 127f));
		}
		if (!unk_0xAC0C4A44E7AB491E(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x7A016BE57B7A580F(2, 220) * 127f));
		}
		if (!unk_0xAC0C4A44E7AB491E(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x7A016BE57B7A580F(2, 221) * 127f));
		}
	}
	if (unk_0x7EDB1AFBE755EC7A(2))
	{
		if (bParam5)
		{
			if (unk_0xDA216D9ACC721087())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xB6A92B338EEF1375())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_188()
{
	int iVar0;
	float fVar1;
	
	if (!func_193())
	{
		if (func_192(iLocal_96))
		{
			if (!func_460(iLocal_49, 256))
			{
				unk_0x6C192F2018742EC1(unk_0xE7869D5D7816A9B6());
				unk_0x489E3B00AFB0758C(unk_0xE7869D5D7816A9B6(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_72 == 1)
				{
					if (!func_521())
					{
						unk_0x200F582D102735DD(unk_0x3F80C6638E3A1A90(), 15, 1);
					}
					unk_0x738D4328EF7650AF(0, 4000, 252);
				}
				else if (iLocal_72 == 2)
				{
					if (!func_521())
					{
						unk_0x200F582D102735DD(unk_0x3F80C6638E3A1A90(), 10, 1);
					}
					unk_0x738D4328EF7650AF(0, 4000, 210);
				}
				else
				{
					if (!func_521())
					{
						unk_0x200F582D102735DD(unk_0x3F80C6638E3A1A90(), 5, 1);
					}
					unk_0x738D4328EF7650AF(0, 3000, 168);
				}
				func_452(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_298)
		{
			case 0:
				if (unk_0x8442AE3B8EA7046F(iLocal_96, 876132797))
				{
					unk_0x738D4328EF7650AF(0, 200, 84);
					unk_0x4B89CEB084587C7F(iLocal_99, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			
			case 1:
			case 2:
				if (func_460(iLocal_49, 32768))
				{
					if (func_521())
					{
						iVar0 = unk_0xA6C2218D69567283(iLocal_79);
					}
					else
					{
						iVar0 = iLocal_79;
					}
					if (unk_0x47B2F09FC779F5CD(iVar0))
					{
						fVar1 = unk_0x4D221DFBB84DCF0B(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_494(512))
							{
								unk_0x738D4328EF7650AF(0, 200, 252);
								unk_0x4B89CEB084587C7F(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_190();
								func_189(512);
							}
						}
						else
						{
							func_498(512);
						}
					}
				}
				else if (unk_0x8442AE3B8EA7046F(iLocal_96, 876132797))
				{
					unk_0x738D4328EF7650AF(0, 200, 252);
					unk_0x4B89CEB084587C7F(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			}
	}
}

void func_189(int iParam0)
{
	if (!func_460(iLocal_52, iParam0))
	{
		func_452(&iLocal_52, iParam0);
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = unk_0x8219941CC4732B36(unk_0xE7869D5D7816A9B6());
	iVar0 = (iVar0 + (1 + iLocal_297));
	if (iVar0 > unk_0x7475BB2772D8CC88(unk_0xE7869D5D7816A9B6()))
	{
		iVar0 = unk_0x7475BB2772D8CC88(unk_0xE7869D5D7816A9B6());
	}
	unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar0);
	func_191();
}

void func_191()
{
	if (!func_521())
	{
		return;
	}
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		iLocal_59 = unk_0x8219941CC4732B36(unk_0xE7869D5D7816A9B6());
	}
}

bool func_192(int iParam0)
{
	return (((unk_0x23417CDB252083F9(iParam0, func_48(), func_40(11), 3) || unk_0x23417CDB252083F9(iParam0, func_48(), func_40(21), 3)) || unk_0x23417CDB252083F9(iParam0, func_46(), func_39(11), 3)) || unk_0x23417CDB252083F9(iParam0, func_46(), func_39(21), 3));
}

bool func_193()
{
	return unk_0x23417CDB252083F9(iLocal_96, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_194(iLocal_96, func_43(), 1), 3);
}

char* func_194(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		iVar1 = unk_0xF0295FF51F2D7803(iParam0, 1);
		if (unk_0xC45A34912542C4EB(iVar1, 0))
		{
			if (func_41(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
		}
	}
	return sVar0;
}

void func_195()
{
	if (!func_193())
	{
		return;
	}
	if (func_521())
	{
		func_199();
	}
	if (unk_0xB43400C480010FCA(iLocal_96) || unk_0xB43400C480010FCA(unk_0xE7869D5D7816A9B6()))
	{
		return;
	}
	if (unk_0x0ADD324BC46177EF(0, 5000) > 2500)
	{
		func_196();
	}
}

void func_196()
{
	if (unk_0xAF437D7C802AB246(iLocal_96))
	{
		return;
	}
	if (!unk_0xB43400C480010FCA(iLocal_96) && !unk_0xB43400C480010FCA(unk_0xE7869D5D7816A9B6()))
	{
		if (iLocal_297 == 0)
		{
			func_124("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&uLocal_107))
		{
			func_442(&uLocal_107);
		}
		else if (func_7(&uLocal_107) > unk_0x8AF26D6D6BBE6931(2f, 5f))
		{
			if (!func_460(iLocal_49, 65536))
			{
				func_452(&iLocal_49, 65536);
				unk_0x489E3B00AFB0758C(unk_0xE7869D5D7816A9B6(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_197(iLocal_298);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_34(&uLocal_107);
			}
		}
	}
}

void func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_81("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_198(unk_0x3F80C6638E3A1A90()))
			{
				unk_0x489E3B00AFB0758C(iLocal_96, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x489E3B00AFB0758C(iLocal_96, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_198(unk_0x3F80C6638E3A1A90()))
			{
				unk_0x489E3B00AFB0758C(iLocal_96, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x489E3B00AFB0758C(iLocal_96, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_198(int iParam0)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return 1;
	}
	return Global_2416794[iParam0 /*303*/].f_227;
}

void func_199()
{
	if (unk_0xAF437D7C802AB246(iLocal_96))
	{
		return;
	}
	if (func_200(0.4f))
	{
		func_189(4);
	}
	if (func_494(4))
	{
		if (!func_10(&uLocal_110))
		{
			func_442(&uLocal_110);
		}
		else if (func_7(&uLocal_110) > 2f)
		{
			if (!func_494(16) && !func_200(0.4f))
			{
				func_189(16);
				iLocal_61++;
			}
			else if (func_494(16))
			{
				if (!unk_0xB43400C480010FCA(iLocal_96))
				{
					func_498(4);
					func_498(16);
					func_34(&uLocal_110);
				}
			}
		}
	}
}

int func_200(float fParam0)
{
	float fVar0;
	
	if (func_201(unk_0x3F80C6638E3A1A90(), 1, 1))
	{
		fVar0 = unk_0x7D848D4B19E08CAD(unk_0x3F80C6638E3A1A90());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xD18C3CF631455087(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2E6D4A0CE8AD9494(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_202(bool bParam0, bool bParam1)
{
	if (!func_521())
	{
		return;
	}
	func_174(bParam0, bParam1);
	func_170(bParam0, bParam1);
	func_168(bParam0, bParam1);
	func_159(bParam0, bParam1);
	func_152(bParam0, bParam1);
}

void func_203(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_134(iParam0, func_132(iParam1), 0);
	iVar0++;
	if (!func_205(iParam0))
	{
		func_131(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_204(iParam0, iVar0, iParam1, 1);
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347522[func_132(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347528[func_132(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347534[func_132(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347540[func_132(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347498[func_132(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347504[func_132(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347510[func_132(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347516[func_132(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347474[func_132(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347480[func_132(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347486[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347492[func_132(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347546[func_132(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347552[func_132(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347558[func_132(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347564[func_132(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347570[func_132(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347576[func_132(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347582[func_132(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2488585[0 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2488585[1 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2900:
			Global_2488585[2 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2488585[3 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_2488636[func_132(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347588[func_132(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347594[func_132(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347600[func_132(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347606[func_132(iParam2)] = iParam1;
			break;
		
		case 3023:
			Global_2488610[0 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3024:
			Global_2488610[1 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2488610[2 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2488610[3 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2488610[4 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_205(int iParam0)
{
	if (Global_1347455)
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
			case 1293:
			case 629:
			case 1268:
			case 754:
			case 755:
			case 756:
			case 1226:
			case 1865:
			case 2256:
			case 2900:
			case 3028:
			case 3659:
			case 3023:
			case 3024:
			case 3025:
			case 3026:
			case 3027:
				return 1;
				break;
			}
	}
	return 0;
}

void func_206()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_209(0))
		{
			func_207(0);
		}
		unk_0x9956FB0E4B50ECB8(&Global_2284, 2);
	}
}

void func_207(int iParam0)
{
	if (Global_14571)
	{
		func_208(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_15())
	{
		Global_14413.f_1 = 3;
	}
}

void func_208(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_209(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_209(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_210(int iParam0)
{
	var uVar0;
	
	if (func_521())
	{
		uVar0 = unk_0x47B2F09FC779F5CD(unk_0xA6C2218D69567283(iParam0));
	}
	else
	{
		uVar0 = unk_0x47B2F09FC779F5CD(iParam0);
	}
	return uVar0;
}

void func_211()
{
	if (unk_0xAEF17BDE274A1247())
	{
		unk_0x2D3BB3EF936C4B76(1000);
		unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), func_213(), 1, 0, 0, 1);
		unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), func_212());
		func_511();
		unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
		unk_0x2C9DDB5306DF417C(&iLocal_96);
	}
}

float func_212()
{
	switch (func_18())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_213()
{
	switch (func_18())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_214()
{
	int iVar0;
	
	if (func_216(&uLocal_104, 3f) && !unk_0x64DEF1DE79E83BEB(uLocal_103))
	{
		iVar0 = unk_0xF34EE736CF047844(((func_215() - 2f) * 1000f));
		unk_0x63498CF6CF35C6A2(uLocal_102, 0);
		unk_0x7D333E815920766B(uLocal_103, uLocal_102, iVar0, 1, 1);
	}
	if (func_216(&uLocal_104, func_215()))
	{
		unk_0x6A6E764D1DB633C7(1000);
		iLocal_295 = 10;
	}
}

float func_215()
{
	switch (func_18())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

int func_216(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		if (func_7(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_217(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		iVar1 = unk_0xCEDD7FE4546BFC4F(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_218(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_218(int iParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x0586E3C97DD61FE4(1, iParam0, &uVar0, 10))
	{
		func_219(&uVar0, uParam1);
	}
}

void func_219(var uParam0, var uParam1)
{
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		if (unk_0x8C1ED5BB2888BA25(*uParam0))
		{
			if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
			{
				if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0) == unk_0xE59FAD6B5E1AA42D(*uParam0))
					{
						func_116(0);
						unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
						func_511();
						func_506(uParam1);
					}
				}
			}
		}
	}
}

void func_220(var uParam0)
{
	int iVar0;
	
	if (!func_521())
	{
		return;
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_96))
	{
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			iVar0 = unk_0x8219941CC4732B36(iLocal_96);
			if ((iVar0 - iLocal_60) < 0)
			{
				func_116(0);
				unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
				func_511();
				func_506(uParam0);
			}
		}
	}
}

void func_221(var uParam0)
{
	int iVar0;
	
	if (!func_521())
	{
		return;
	}
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			iVar0 = unk_0x8219941CC4732B36(unk_0xE7869D5D7816A9B6());
			if ((iVar0 - iLocal_59) < 0)
			{
				func_116(0);
				unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
				func_511();
				func_506(uParam0);
			}
		}
	}
}

void func_222(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!func_521())
	{
		return;
	}
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
			if (unk_0xD51CFE69539DB6D8(iVar0))
			{
				Var1 = { unk_0x1141852D07400777(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Local_56, Var1) >= 4f)
				{
					func_116(0);
					unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
					func_511();
					func_506(uParam0);
				}
			}
		}
	}
}

void func_223()
{
	int iVar0;
	char* sVar1;
	int iVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	
	if (!func_460(iLocal_49, 16))
	{
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x91F0593A3B8D1A3F(unk_0x3F80C6638E3A1A90(), 0);
		}
		func_452(&iLocal_49, 16);
	}
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		iLocal_99 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (func_521())
		{
			if (unk_0x9B5F286CC8377932(iLocal_99))
			{
				unk_0xB356E3F8BEC5CE2B(iLocal_99, 1);
				unk_0x01A5F35B4016EFD8(iLocal_99, 4);
				unk_0x922FEC7F32BC972D(iLocal_99, 1);
				unk_0x742E15B6989E356E(iLocal_99, 0, 0);
			}
		}
		else
		{
			unk_0xB356E3F8BEC5CE2B(iLocal_99, 1);
			unk_0x01A5F35B4016EFD8(iLocal_99, 4);
			unk_0x922FEC7F32BC972D(iLocal_99, 1);
		}
		if (!func_359() || !unk_0x8AF655CC5761C7A2(iLocal_96, iLocal_99, 0))
		{
			func_443(0);
			return;
		}
	}
	else
	{
		func_443(0);
		return;
	}
	func_206();
	if ((!unk_0x6D30046757C9C4F9(iLocal_99) && unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) && !func_460(iLocal_49, 1024))
	{
		iLocal_295 = 7;
		func_357(1, -1);
		unk_0xDF83A33BF4D93E6F("SCRIPT\HUD_321_GO", true);
		iLocal_301 = 0;
		func_461("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0x1B7A773B18DF3DB0(2);
	switch (iLocal_301)
	{
		case 0:
		case 1:
			if (func_521())
			{
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					if (unk_0xD51CFE69539DB6D8(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
					{
						if (unk_0x49D76889EB33F5C6(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
						{
							if (unk_0xBD6B21D725712BDE(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), -1) == unk_0xE7869D5D7816A9B6())
							{
								if (unk_0x9B5F286CC8377932(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
								{
									if (!unk_0x28D33422BA6C479D(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
									{
										unk_0x20BB4B94CC6DDC9A(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0, 0);
									}
								}
								else
								{
									unk_0x7CBF8CE5F3C88AEC(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0));
									return;
								}
							}
						}
						else
						{
							unk_0x8AC7CE21496616AD(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0));
							return;
						}
					}
				}
			}
			func_356();
			func_355();
			func_191();
			if (func_352())
			{
				func_124("PROSTITUTES_DRIVE_SCENE");
				func_81("PROSTITUTES_PARKED_SCENE");
				func_351();
				if (func_521())
				{
					func_189(2);
					if (func_521())
					{
						if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
						{
							if (unk_0x49D76889EB33F5C6(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
							{
								if (unk_0x9B5F286CC8377932(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
								{
									unk_0x21E18A9362DEB4CD(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 1);
									unk_0x18F90CF5D756C783(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 4);
									unk_0x5C354FE965B647A9(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 1);
								}
							}
						}
					}
				}
				unk_0x26CBEA3336FB494C(iLocal_96);
				iLocal_301 = 2;
			}
			break;
		
		case 2:
			if (func_350(iLocal_304))
			{
				func_349(&iLocal_304);
				func_5(&iLocal_75, 2);
			}
			func_347(iLocal_96, 0);
			if (func_347(unk_0xE7869D5D7816A9B6(), 1))
			{
				if (func_345(&sVar1, 0))
				{
					iLocal_48 = unk_0x96A11F2A7C8A4DB5();
					iVar5 = unk_0xF19E031C976C0F00();
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
					{
						if (iVar5 != 4 && iLocal_48 == 4)
						{
							unk_0x12D823F78702C792(4);
						}
						else if (iVar5 == 4 && iLocal_48 != 4)
						{
							unk_0x12D823F78702C792(1);
						}
					}
					func_330();
					iLocal_301 = 3;
					func_461("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_329(&sVar1, -1);
					func_34(&uLocal_113);
					iLocal_297 = 3;
					iLocal_301 = 4;
				}
			}
			break;
		
		case 3:
			if (unk_0xA57007F9A665F322())
			{
				return;
			}
			unk_0xCE8BEF8F2F858ED5(3);
			func_310();
			func_281(1, -1, 1, 0, 1, -1082130432, 0, 0);
			func_280(&uVar6, &iVar7, &uVar8, &uVar9, 0);
			unk_0x8CCCC48313B0F20F(0, 48, 1);
			unk_0x9F2D8D5B57CF6622(2, 187);
			unk_0x9F2D8D5B57CF6622(2, 188);
			unk_0x9F2D8D5B57CF6622(2, 201);
			iVar0 = 0;
			if (unk_0xA78EA29AC2FFBADE())
			{
				if (unk_0x122DCA017A140FA8(2))
				{
					unk_0x8CCCC48313B0F20F(0, 1, 1);
					unk_0x8CCCC48313B0F20F(0, 2, 1);
					unk_0x5D1D27F205B40569(0, 237, 1);
					unk_0x5D1D27F205B40569(0, 238, 1);
					unk_0x5D1D27F205B40569(0, 241, 1);
					unk_0x5D1D27F205B40569(0, 242, 1);
					func_276(0, 0, 0, 1);
					func_275(0, -1, 1);
					if (func_274())
					{
						if (Global_2557322 != iLocal_70)
						{
							unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_70 = Global_2557322;
							func_461("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0x958B4351DD28B142(2, 187) || (unk_0x7EDB1AFBE755EC7A(2) && unk_0x958B4351DD28B142(2, 242))) || (unk_0x7EDB1AFBE755EC7A(2) && unk_0x28BB6250B86A5CA5(0, 33))) || (((unk_0xA78EA29AC2FFBADE() && !unk_0x7EDB1AFBE755EC7A(2)) && iVar7 > 100) && (unk_0x9D40BBF80D8F5E8A() - iLocal_89) > 300))
			{
				unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_461("DOWN pressed!");
				if (iLocal_70 < iLocal_71)
				{
					iLocal_70++;
				}
				else
				{
					iLocal_70 = 0;
				}
				iLocal_89 = unk_0x9D40BBF80D8F5E8A();
			}
			else if (((unk_0x958B4351DD28B142(2, 188) || (unk_0x7EDB1AFBE755EC7A(2) && unk_0x958B4351DD28B142(2, 241))) || (unk_0x7EDB1AFBE755EC7A(2) && unk_0x28BB6250B86A5CA5(0, 32))) || (((unk_0xA78EA29AC2FFBADE() && !unk_0x7EDB1AFBE755EC7A(2)) && iVar7 < -100) && (unk_0x9D40BBF80D8F5E8A() - iLocal_89) > 300))
			{
				unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_461("UP pressed!");
				if (iLocal_70 > 0)
				{
					iLocal_70 = (iLocal_70 - 1);
				}
				else
				{
					iLocal_70 = iLocal_71;
				}
				iLocal_89 = unk_0x9D40BBF80D8F5E8A();
			}
			else if (unk_0xEA7F1ED415FFE2E8(2, 201) || iVar0 == 1)
			{
				unk_0xCC18B241D266EF14(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				unk_0x1B7A773B18DF3DB0(3);
				func_270();
				unk_0x29FD5B1A4BA65801(unk_0xE7869D5D7816A9B6());
				iLocal_301 = 4;
			}
			func_269(iLocal_70, 1, 1);
			break;
		
		case 4:
			iVar10 = unk_0x76AE74E07EBA0DE3(iLocal_96);
			if (iLocal_297 == 3)
			{
				func_357(1, -1);
				func_268();
				func_267(0);
				iLocal_64 = unk_0x9D40BBF80D8F5E8A();
				func_124("PROSTITUTES_PARKED_SCENE");
				func_461("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_295 = 6;
				if (iLocal_72 > 0)
				{
					if (func_120(iLocal_96))
					{
						func_119();
					}
					else
					{
						func_443(0);
					}
					return;
				}
				else
				{
					if (func_262() >= 20)
					{
						iVar10 += 20;
						func_225(20);
						unk_0x82F10D839CF95C09(iLocal_96, iVar10);
					}
					func_443(1);
					return;
				}
			}
			if (!unk_0x2917D5E1CB5CE43A(func_44(unk_0xE7869D5D7816A9B6(), 0, 0)))
			{
			}
			else
			{
				func_357(1, -1);
				func_268();
				if (unk_0x07D34705DA95B399())
				{
					func_452(&iLocal_49, 1024);
					iLocal_297 = 3;
					func_461("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_297 != 3)
				{
					if (func_262() > func_224(iLocal_297))
					{
						func_225(func_224(iLocal_297));
						iVar10 = (iVar10 + func_224(iLocal_297));
					}
					func_35(&uLocal_107, (14f - 4f));
					func_461("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_121();
					iLocal_295 = 11;
				}
				unk_0x82F10D839CF95C09(iLocal_96, iVar10);
				iLocal_64 = unk_0x9D40BBF80D8F5E8A();
			}
			break;
	}
}

int func_224(int iParam0)
{
	if (unk_0x07D34705DA95B399())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_225(int iParam0)
{
	var uVar0;
	
	if (!func_521())
	{
		func_236(func_18(), 1, iParam0);
	}
	else
	{
		func_226(-1359375127, iParam0, &uVar0, 0, 0, 0);
	}
}

void func_226(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_235())
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
			if (iParam1 > 0)
			{
				func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_235())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x31F4FD5D570135A8(func_133()) || unk_0x3F07A2D94C64D156())
		{
			Global_2554188 = 1;
			return 0;
		}
		if (Global_2441706)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2554189 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2553709[iVar1 /*72*/].f_2 == 0)
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
	if (bVar0 || unk_0x89BF47768CC2BEC9(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xC5635F1C24124798(iVar3))
		{
			*uParam0 = func_234(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2553709[*uParam0 /*72*/].f_65 = 1;
				}
			}
			Global_2554185 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2554187 = 1;
			Global_2554190 = iParam4;
			Global_2554192 = iParam3;
			Global_2554193 = 1;
			Global_2554191 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2554190 = iParam4;
			Global_2554192 = iParam3;
			Global_2554193 = 1;
			Global_2554191 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_233(1, iParam4);
			Global_2554187 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_228(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_228(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x9956FB0E4B50ECB8(&(Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_229(iParam0);
	}
}

void func_229(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_235())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_232(iParam0))
		{
			if (!bVar0)
			{
				unk_0x179EDB8174D2ACF9();
			}
		}
		else if (!bVar0)
		{
			unk_0x8ECBAE515BE58A4C(Global_2553709[iParam0 /*72*/]);
		}
		func_230(&(Global_2553709[iParam0 /*72*/]));
	}
}

void func_230(var uParam0)
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
	func_231(&(uParam0->f_8.f_3));
	func_231(&(uParam0->f_8.f_16));
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
	uParam0->f_65 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
}

void func_231(var uParam0)
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

int func_232(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2553709[iParam0 /*72*/].f_5 == 1;
	}
	return 0;
}

void func_233(int iParam0, var uParam1)
{
	Global_2442973 = uParam1;
	Global_2442972 = iParam0;
}

int func_234(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2553709[iVar0 /*72*/].f_2 == 0)
		{
			if (!func_235())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2553709[iVar0 /*72*/].f_2 = 1;
			Global_2553709[iVar0 /*72*/].f_1 = uParam5;
			Global_2553709[iVar0 /*72*/].f_3 = uParam1;
			Global_2553709[iVar0 /*72*/].f_4 = uParam2;
			Global_2553709[iVar0 /*72*/].f_7 = uParam3;
			Global_2553709[iVar0 /*72*/].f_5 = 0;
			Global_2553709[iVar0 /*72*/] = iParam0;
			Global_2553709[iVar0 /*72*/].f_6 = iParam4;
			Global_2553709[iVar0 /*72*/].f_68 = uParam8;
			Global_2553709[iVar0 /*72*/].f_67 = uParam7;
			Global_2553709[iVar0 /*72*/].f_71 = 0;
			Global_2554185 = 0;
			if (bParam6)
			{
				Global_2553709[iVar0 /*72*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_235()
{
	if (unk_0xA78EA29AC2FFBADE())
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_237(Global_99155.f_32499[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_237(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_261();
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
					func_260(99, 1);
					func_259(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_259(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_259(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_245(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_244(5))
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
							func_259(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_259(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_259(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_244(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_259(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_259(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_259(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_259(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_259(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_259(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_259(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_259(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_259(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x87F8C006AA576A39())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_259(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_259(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_259(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_259(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_259(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_259(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_244(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_259(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_259(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_259(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_259(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_259(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_259(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_243(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_260(95, iParam3);
					break;
				
				case 1:
					func_260(97, iParam3);
					break;
				
				case 2:
					func_260(96, iParam3);
					break;
			}
			func_260(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_240(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_240(iVar1);
	}
	iVar5 = (Global_52753[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52753[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52753[iVar2] = 2147483647;
				}
				else
				{
					Global_52753[iVar2] = (Global_52753[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_259(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_259(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_259(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52753[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52753[iVar2];
			Global_52753[iVar2] = (Global_52753[iVar2] - iParam3);
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
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_99155.f_25013.f_233[iVar2 /*69*/]++;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_239(iParam0);
	if (Global_35619 == 15)
	{
		func_238(0);
	}
	return 1;
}

void func_238(bool bParam0)
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
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52761[iVar0 /*3*/][0] = Global_99155.f_25013[iVar0];
		Global_52761.f_31[iVar0 /*3*/][0] = Global_99155.f_25013.f_11[iVar0];
		Global_52761.f_62[iVar0 /*3*/][0] = Global_99155.f_25013.f_22[iVar0];
		Global_52761.f_93[iVar0 /*3*/][0] = Global_99155.f_25013.f_33[iVar0];
		Global_52761.f_124[iVar0 /*3*/][0] = Global_99155.f_25013.f_44[iVar0];
		Global_52761.f_155[iVar0 /*3*/][0] = Global_99155.f_25013.f_55[iVar0];
		Global_52761.f_186[iVar0 /*3*/][0] = Global_99155.f_25013.f_66[iVar0];
		Global_52761.f_217[iVar0 /*3*/][0] = Global_99155.f_25013.f_77[iVar0];
		Global_52761.f_248[iVar0 /*3*/][0] = Global_99155.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52761[iVar0 /*3*/][1] = Global_99155.f_25013[iVar0];
			Global_52761.f_31[iVar0 /*3*/][1] = Global_99155.f_25013.f_11[iVar0];
			Global_52761.f_62[iVar0 /*3*/][1] = Global_99155.f_25013.f_22[iVar0];
			Global_52761.f_93[iVar0 /*3*/][1] = Global_99155.f_25013.f_33[iVar0];
			Global_52761.f_124[iVar0 /*3*/][1] = Global_99155.f_25013.f_44[iVar0];
			Global_52761.f_155[iVar0 /*3*/][1] = Global_99155.f_25013.f_55[iVar0];
			Global_52761.f_186[iVar0 /*3*/][1] = Global_99155.f_25013.f_66[iVar0];
			Global_52761.f_217[iVar0 /*3*/][1] = Global_99155.f_25013.f_77[iVar0];
			Global_52761.f_248[iVar0 /*3*/][1] = Global_99155.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52753[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x39DEDCCD70293F58(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x39DEDCCD70293F58(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x39DEDCCD70293F58(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_240(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x00AAD79B42B3E036())
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0) || unk_0xB519E5386FBF69E5(Global_2097152[func_242() /*10169*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		unk_0x73817D396768E4C6(&(Global_2097152[func_242() /*10169*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x4A4F36C4EFDE341F("COUP_RED");
		unk_0x9359E7CC54335EB9(func_241(iParam0));
		unk_0x77AD0392EB2D45CC(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_241(int iParam0)
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

int func_242()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_243(int iParam0)
{
	func_260(93, iParam0);
	func_260(29, iParam0);
	func_260(30, iParam0);
}

bool func_244(int iParam0)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0);
	}
	return unk_0xB519E5386FBF69E5(Global_2097152[func_242() /*10169*/].f_7698.f_10, iParam0);
}

int func_245(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x1F0D90C2E3B3876D(27))
	{
		return 0;
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x56DCF5665F92F9BD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x39DEDCCD70293F58(joaat("num_cash_spent"), iVar1, 1);
		func_147(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_246(27, 1);
	return 1;
}

int func_246(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_247(iParam0, iParam1);
}

int func_247(int iParam0, int iParam1)
{
	if (func_522(14) && !func_258(iParam0))
	{
		return 0;
	}
	if (unk_0x1F0D90C2E3B3876D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25280 != 0 && !Global_69236)
	{
		return 0;
	}
	if (func_257(&Global_2558814))
	{
		if (func_255(&Global_2558814, iParam0))
		{
			return 0;
		}
		if (func_248(&Global_2558814, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x870B558D3473ADCD(iParam0))
		{
			return 0;
		}
		if (unk_0x1F0D90C2E3B3876D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_248(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_522(14) && !func_258(iParam1))
	{
		return 0;
	}
	if (func_255(uParam0, iParam1))
	{
		return 0;
	}
	if (func_254(uParam0) < 0f)
	{
		func_253(uParam0, 0);
	}
	func_251(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_249(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_249(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_522(14) && !func_258(iParam1))
	{
		return 0;
	}
	if (func_255(uParam0, iParam1))
	{
		return 0;
	}
	if (func_254(uParam0) < 0f)
	{
		func_253(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_250(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_250(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_251(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_252(uParam0, iVar0);
		iVar0++;
	}
	func_253(uParam0, (Global_2558813 - 0.5f));
}

void func_252(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_253(var uParam0, float fParam1)
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

float func_254(var uParam0)
{
	return uParam0->f_72;
}

bool func_255(var uParam0, int iParam1)
{
	return func_256(uParam0, iParam1) != -1;
}

int func_256(var uParam0, int iParam1)
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

bool func_257(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_258(int iParam0)
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

void func_259(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x56DCF5665F92F9BD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x39DEDCCD70293F58(iParam0, iVar0, 1);
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x00AAD79B42B3E036())
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/])
	{
		unk_0x56DCF5665F92F9BD(Global_51321[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x39DEDCCD70293F58(Global_51321[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_261()
{
	int iVar0;
	
	if (unk_0x6E2954F2B1919678())
	{
		unk_0x56DCF5665F92F9BD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52753[0] == iVar0)
		{
			Global_52753[0] = iVar0;
		}
		unk_0x56DCF5665F92F9BD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52753[1] == iVar0)
		{
			Global_52753[1] = iVar0;
		}
		unk_0x56DCF5665F92F9BD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52753[2] == iVar0)
		{
			Global_52753[2] = iVar0;
		}
	}
}

int func_262()
{
	if (func_521())
	{
		return func_264(unk_0x3F80C6638E3A1A90());
	}
	return func_263(func_18());
}

int func_263(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x56DCF5665F92F9BD(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x56DCF5665F92F9BD(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x56DCF5665F92F9BD(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

var func_264(int iParam0)
{
	var uVar0;
	
	uVar0 = func_265(iParam0);
	return uVar0;
}

int func_265(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return unk_0x07EE2B2D0517CC52(-1);
		}
		else if (func_266(iParam0))
		{
			return Global_1586079[iParam0 /*408*/].f_192.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_266(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xB519E5386FBF69E5(Global_2426494.f_1, iParam0);
	}
	return 1;
}

void func_267(int iParam0)
{
	if (unk_0x7510FF7BD6BD3BAE() != 255)
	{
		unk_0x45470749F735B66F(iParam0);
		unk_0xD4E1BBA04D5635F9(iParam0);
	}
}

void func_268()
{
	Global_17118.f_5 = 0;
}

void func_269(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5529 = iParam0;
	Global_17257.f_5662 = iParam2;
	if (Global_17257.f_5529 < Global_17257.f_5528)
	{
		Global_17257.f_5528 = Global_17257.f_5529;
	}
	else if ((Global_17257.f_5522 && Global_17257.f_5529 > Global_17257.f_5530) || (!Global_17257.f_5522 && Global_17257.f_5529 >= (Global_17257.f_5528 + Global_17257.f_5031)))
	{
		iVar0 = Global_17257.f_5528;
		while (iVar0 <= Global_17257.f_5529)
		{
			if (iVar0 >= 0 && iVar0 < 125)
			{
				if (Global_17257.f_4897[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5031 && Global_17257.f_5528 < 126)
		{
			Global_17257.f_5528++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5528;
			while (iVar0 <= Global_17257.f_5529)
			{
				if (iVar0 >= 0 && iVar0 < 125)
				{
					if (Global_17257.f_4897[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5521 = 0;
	Global_17257.f_5522 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17257.f_4500), "", 16);
		StringCopy(&(Global_2557246.f_21), "", 16);
	}
}

void func_270()
{
	if (iLocal_70 == iLocal_71)
	{
		iLocal_297 = 3;
	}
	else
	{
		iLocal_298 = iLocal_289[iLocal_70];
		func_271();
		if (iLocal_298 == 0)
		{
			func_81("PROSTITUTES_BJ_SCENE");
			unk_0xDF83A33BF4D93E6F("PROSTITUTE_BLOWJOB", false);
			iLocal_297 = 0;
		}
		else if (iLocal_298 == 1)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_297 = 1;
		}
		else if (iLocal_298 == 2)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_297 = 2;
		}
	}
}

void func_271()
{
	switch (iLocal_298)
	{
		case 0:
			func_273();
			break;
		
		case 1:
		case 2:
			func_272();
			break;
	}
}

void func_272()
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_273()
{
	iLocal_45++;
	iLocal_47 = 1;
}

int func_274()
{
	if (unk_0x7EDB1AFBE755EC7A(2))
	{
		if (Global_2557322 > -1)
		{
			if (unk_0x958B4351DD28B142(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_275(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x7EDB1AFBE755EC7A(2))
	{
		return 0;
	}
	if (unk_0xA57007F9A665F322() || unk_0xA42A6C736BEA9778())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x422036F797F95CFC();
	}
	if (Global_2557322 == -6)
	{
		unk_0x2BDB7C3D77DB86C4(4);
		if (iParam0 && unk_0x6BBF308E0A0F9AD4(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2557322 = -1;
			return 0;
		}
	}
	if (((Global_2557322 > -1 || Global_2557322 == -3) || Global_2557322 == -2) || unk_0xD0B060C76BDF38BD())
	{
		unk_0x2BDB7C3D77DB86C4(1);
		return 0;
	}
	if (Global_2557322 == -1 && iParam0)
	{
		if (unk_0x6BBF308E0A0F9AD4(2, 237))
		{
			unk_0x2BDB7C3D77DB86C4(4);
			Global_2557322 = -6;
			return 1;
		}
		else
		{
			unk_0x2BDB7C3D77DB86C4(3);
			return 0;
		}
	}
	unk_0x2BDB7C3D77DB86C4(1);
	return 0;
}

void func_276(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x7EDB1AFBE755EC7A(2))
	{
		Global_2557322 = -1;
		return;
	}
	unk_0xA0644295A8C137BF(1);
	fVar0 = Global_17254;
	fVar2 = (fVar0 + Global_17256);
	fVar3 = Global_17257.f_5523;
	fVar1 = (Global_17257.f_5523 - (IntToFloat(Global_17257.f_5525) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17257.f_5525 < 1)
	{
		fVar1 = (Global_17257.f_5523 - 0.034722f);
	}
	unk_0x56B79B8AD45389A5(76, 84);
	unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x976D93A25CEA6E3A(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x976D93A25CEA6E3A(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x26FD470559B5674D();
	func_279();
	if (Global_2557322 == -6)
	{
		return;
	}
	Global_2557322 = -1;
	fVar7 = Global_2557316;
	fVar8 = Global_2557317;
	if (Global_17257.f_5526 > Global_17257.f_5525)
	{
		if (((Global_2557316 >= fVar0 && Global_2557316 <= fVar2) && Global_2557317 >= fVar3) && Global_2557317 < (fVar3 + fVar6))
		{
			Global_2557322 = -2;
			if (bParam3)
			{
				func_278(0);
			}
			return;
		}
		if (((Global_2557316 >= fVar0 && Global_2557316 <= fVar2) && Global_2557317 >= (fVar3 + fVar6)) && Global_2557317 < (fVar3 + 0.034722f))
		{
			Global_2557322 = -3;
			if (bParam3)
			{
				func_278(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17257.f_5526 == -1)
		{
			Global_2557322 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17257.f_5525);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x56B79B8AD45389A5(76, 84);
				unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
				func_277(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17256, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x26FD470559B5674D();
			}
		}
		Global_2557322 = Global_17257.f_7402[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2557322 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2557322 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2557322 = -4;
		return;
	}
	Global_2557322 = -1;
}

void func_277(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC3BB3CA17D24E700((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_278(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17254;
	fVar1 = Global_17257.f_5523;
	unk_0x56B79B8AD45389A5(76, 84);
	unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
	if (Global_2557322 == -2)
	{
		func_277(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2557322 == -3)
	{
		func_277(fVar0, (fVar1 + fVar2), Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x26FD470559B5674D();
}

void func_279()
{
	Global_2557318 = Global_2557316;
	Global_2557319 = Global_2557317;
	Global_2557316 = unk_0x9CF7E896E5D8A141(2, 239);
	Global_2557317 = unk_0x9CF7E896E5D8A141(2, 240);
	Global_2557320 = (Global_2557316 - Global_2557318);
	Global_2557321 = (Global_2557317 - Global_2557319);
}

void func_280(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x61BD13BBFFA4A7AD(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x61BD13BBFFA4A7AD(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x61BD13BBFFA4A7AD(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x61BD13BBFFA4A7AD(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x9CF7E896E5D8A141(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x9CF7E896E5D8A141(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x9CF7E896E5D8A141(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x9CF7E896E5D8A141(2, 221) * 127f));
		}
	}
}

void func_281(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_309(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_307(0, bParam6))
	{
		return;
	}
	unk_0x56B79B8AD45389A5(76, 84);
	unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_305(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_1)) == unk_0xC7C6DDDE84A8E734("HIDE"))
	{
		fVar56 = Global_17255;
	}
	else
	{
		fVar56 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17256;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0x177E5285E888D643(&iVar57, &iVar58);
		fVar60 = unk_0x56995B080AF5D7D0(0);
		if (func_304())
		{
			iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) * fVar60));
		}
		fVar61 = (unk_0xBBDA792448DB5A89(iVar57) / unk_0xBBDA792448DB5A89(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_304())
		{
			fVar59 = 1f;
		}
		iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar57) / fVar59));
		iVar58 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) / fVar59));
	}
	else
	{
		unk_0xC2E26B11E2BC4A88(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5521)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_1)) == unk_0xC7C6DDDE84A8E734("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					unk_0xFE6A5236E50BDF64(func_303(29), func_301(29, 1), (Global_17254 + (fParam5 * 0.5f)), (Global_17255 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7746)
				{
					iVar1 = Global_17257.f_7742;
					iVar2 = Global_17257.f_7743;
					iVar3 = Global_17257.f_7744;
					iVar4 = Global_17257.f_7745;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_277(Global_17254, (Global_17255 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
				if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_1)) != 0)
				{
					func_300();
					unk_0x608B6701BEC4527A(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							unk_0x8D23CF083336DA9B(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							unk_0x9EA8AC61C9873436(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							unk_0x9359E7CC54335EB9(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							unk_0x9359E7CC54335EB9(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							unk_0x63E8D6007C32E426(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							unk_0x9359E7CC54335EB9(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							unk_0x63E8D6007C32E426(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x2ED77CF10395403E((Global_17254 + 0.00390625f), ((Global_17255 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17257.f_5524 > Global_17257.f_5031)
				{
					if (Global_17257.f_5527 != 0)
					{
						func_300();
						func_298((((Global_17254 + fParam5) - 0.00390625f) - func_299("CM_ITEM_COUNT", Global_17257.f_5527, Global_17257.f_5526)), ((Global_17255 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17257.f_5527, Global_17257.f_5526);
					}
				}
			}
			iVar6 = Global_17257.f_5528;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7756)
			{
				iVar1 = Global_17257.f_7752;
				iVar2 = Global_17257.f_7753;
				iVar3 = Global_17257.f_7754;
				iVar4 = Global_17257.f_7755;
			}
			else
			{
				unk_0xC8FBBC95190691A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5031 && iVar6 <= Global_17257.f_5024)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5287[iVar6])
					{
						if (Global_17257.f_5160[iVar6] && iVar6 != Global_17257.f_5528)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5535[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5535[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17257.f_5024 <= 1)
					{
						Global_17257.f_5024++;
					}
					iVar52 = 1;
				}
			}
			unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5524 > Global_17257.f_5031)
			{
				if (Global_17257.f_7761)
				{
					iVar1 = Global_17257.f_7757;
					iVar2 = Global_17257.f_7758;
					iVar3 = Global_17257.f_7759;
					iVar4 = Global_17257.f_7760;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_277(Global_17254, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x8504C7FBA97E6D14("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17257.f_7774)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xC8FBBC95190691A8(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFE6A5236E50BDF64("CommonMenu", "shop_arrows_upANDdown", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar59), ((Var37.f_1 / 720f) * fVar59), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_4500)) != 0 && Global_17257.f_4574 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_17257.f_4576 != 0)
				{
					func_305(Global_17257.f_4576, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_297(fVar41);
				unk_0x4B846CECFAF9AF4D(&(Global_17257.f_4500));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4570)
				{
					if (Global_17257.f_4504[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_17257.f_4509[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4504[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_17257.f_4513[iVar16], Global_17257.f_4517[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4504[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBEEA466E167943A5(fVar41, (fVar49 + 0.00277776f));
				unk_0xC8FBBC95190691A8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_277(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7766)
				{
					iVar1 = Global_17257.f_7762;
					iVar2 = Global_17257.f_7763;
					iVar3 = Global_17257.f_7764;
					iVar4 = Global_17257.f_7765;
				}
				else
				{
					unk_0xC8FBBC95190691A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_297(fVar41);
				unk_0x608B6701BEC4527A(&(Global_17257.f_4500));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4570)
				{
					if (Global_17257.f_4504[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_17257.f_4509[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4504[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_17257.f_4513[iVar16], Global_17257.f_4517[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4504[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 8)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x2ED77CF10395403E(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17257.f_4576 != 0)
				{
					func_305(Global_17257.f_4576, 1, 1, &fVar35, &fVar36, bParam7);
					func_296(Global_17257.f_4576, 1, &iVar46, &iVar47, &iVar48);
					unk_0xFE6A5236E50BDF64(func_303(Global_17257.f_4576), func_301(Global_17257.f_4576, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17257.f_4574 > 0)
				{
					if ((unk_0x9D40BBF80D8F5E8A() - Global_17257.f_4575) > Global_17257.f_4574)
					{
						StringCopy(&(Global_17257.f_4500), "", 16);
						Global_17257.f_4574 = -1;
					}
				}
			}
			if (unk_0xC7C6DDDE84A8E734(&(Global_2557246.f_21)) != 0 && Global_2557246.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_2557246.f_67 != 0)
				{
					func_305(Global_2557246.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_297(fVar41);
				unk_0x4B846CECFAF9AF4D(&(Global_2557246.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2557246.f_61)
				{
					if (Global_2557246.f_25[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_2557246.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2557246.f_25[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_2557246.f_34[iVar16], Global_2557246.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2557246.f_25[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 8)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBEEA466E167943A5(fVar41, (fVar49 + 0.00277776f));
				unk_0xC8FBBC95190691A8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_277(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7766)
				{
					iVar1 = Global_17257.f_7762;
					iVar2 = Global_17257.f_7763;
					iVar3 = Global_17257.f_7764;
					iVar4 = Global_17257.f_7765;
				}
				else
				{
					unk_0xC8FBBC95190691A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_297(fVar41);
				unk_0x608B6701BEC4527A(&(Global_2557246.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2557246.f_61)
				{
					if (Global_2557246.f_25[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_2557246.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2557246.f_25[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_2557246.f_34[iVar16], Global_2557246.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2557246.f_25[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 8)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x2ED77CF10395403E(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2557246.f_67 != 0)
				{
					func_305(Global_2557246.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_296(Global_2557246.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xFE6A5236E50BDF64(func_303(Global_2557246.f_67), func_301(Global_2557246.f_67, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2557246.f_65 > 0)
				{
					if ((unk_0x9D40BBF80D8F5E8A() - Global_2557246.f_66) > Global_2557246.f_65)
					{
						StringCopy(&(Global_2557246.f_21), "", 16);
						Global_2557246.f_65 = -1;
					}
				}
			}
			func_289(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x56B79B8AD45389A5(76, 84);
			unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5521)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17257.f_5024;
			if (Global_17257.f_5522)
			{
				iVar63 = (Global_17257.f_5525 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5535[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5535[iVar6];
				}
				if (Global_17257.f_5522)
				{
					iVar6 = Global_17257.f_7402[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17257.f_5528 && iVar9 < Global_17257.f_5031)
				{
					bVar32 = true;
					if (Global_17257.f_5529 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5160[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17257.f_5667[iVar6] = fVar34;
				fVar33 = (Global_17254 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17257.f_5529 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7768)
					{
						unk_0xC8FBBC95190691A8(Global_17257.f_7767, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0xC8FBBC95190691A8(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Nav", (Global_17254 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5665 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_287(bVar31, 1, 0, 0, 0, 0);
					unk_0x608B6701BEC4527A("DFLT_MNU_OPT");
					unk_0x2ED77CF10395403E(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17257.f_5032)
					{
						if (unk_0xB519E5386FBF69E5(Global_17257.f_4897[iVar6], iVar8) || Global_17257.f_4864[iVar8] == 5)
						{
							if (Global_17257.f_5522)
							{
								iVar19 = Global_17257.f_7413[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar20 = Global_17257.f_7454[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar21 = Global_17257.f_7495[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar22 = Global_17257.f_7536[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar23 = Global_17257.f_7577[((iVar9 * Global_17257.f_5032) + iVar8)];
							}
							else
							{
								Global_17257.f_7413[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar19;
								Global_17257.f_7454[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar20;
								Global_17257.f_7495[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar21;
								Global_17257.f_7536[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar22;
								Global_17257.f_7577[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17257.f_5797[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5794[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5797[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5794[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4870[iVar8] != -1f)
							{
								fVar33 = ((Global_17254 + 0.0046875f) + Global_17257.f_4870[iVar8]);
							}
							if ((iVar8 < 4 && Global_17257.f_4870[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4870[iVar8 + 1])
							{
								fVar45 = (Global_17257.f_4870[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17254 + Global_17256) - 0.0046875f) - fVar33);
							}
							if ((Global_17257.f_4883[iVar8] && Global_17257.f_5662) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17257.f_4864[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5522)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_287(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, iVar70, bVar50);
												unk_0x2561F357565DEF13(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9359E7CC54335EB9(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x8D23CF083336DA9B(Global_17257.f_3866[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9EA8AC61C9873436(Global_17257.f_4119[(iVar21 + iVar27)], Global_17257.f_4246[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x4E53FEE658D9705E(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_305(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17257.f_4373[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4891[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4891[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
											Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar42;
											Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar42 = Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar43 = Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)];
										}
										if (bVar51)
										{
											if (func_305(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_305(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_303(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_305(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_305(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_303(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_287(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, bVar50);
											if (Global_17257.f_7772 && Global_17257.f_7773 == iVar6)
											{
												func_286(bVar31);
											}
											unk_0x608B6701BEC4527A(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9359E7CC54335EB9(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x8D23CF083336DA9B(Global_17257.f_3866[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EA8AC61C9873436(Global_17257.f_4119[(iVar21 + iVar27)], Global_17257.f_4246[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4373[(iVar22 + iVar28)] == 2)
												{
													if (func_305(Global_17257.f_4373[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_305(Global_17257.f_4373[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_296(Global_17257.f_4373[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4891[iVar8] == 2)
															{
																unk_0xFE6A5236E50BDF64(func_303(Global_17257.f_4373[(iVar22 + iVar28)]), func_301(Global_17257.f_4373[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xFE6A5236E50BDF64(func_303(Global_17257.f_4373[(iVar22 + iVar28)]), func_301(Global_17257.f_4373[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4891[iVar8] == 2)
											{
												unk_0x2ED77CF10395403E(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x2ED77CF10395403E((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4373[(iVar22 + iVar14)] != 2)
												{
													if (func_305(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_305(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_296(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4373[(iVar22 + iVar14)] == 30)
															{
																unk_0xFE6A5236E50BDF64(func_303(Global_17257.f_4373[(iVar22 + iVar14)]), func_301(Global_17257.f_4373[(iVar22 + iVar14)], bVar31), (Global_17254 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4891[iVar8] == 2)
															{
																unk_0xFE6A5236E50BDF64(func_303(Global_17257.f_4373[(iVar22 + iVar14)]), func_301(Global_17257.f_4373[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xFE6A5236E50BDF64(func_303(Global_17257.f_4373[(iVar22 + iVar14)]), func_301(Global_17257.f_4373[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5522)
										{
											func_287(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7772 && Global_17257.f_7773 == iVar6)
											{
												func_286(bVar31);
											}
											unk_0x2561F357565DEF13("NUMBER");
											unk_0x8D23CF083336DA9B(Global_17257.f_3866[iVar20]);
											fVar42 = unk_0x4E53FEE658D9705E(1);
											fVar41 = 0f;
											if (Global_17257.f_4891[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4891[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
											Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar42 = Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)];
										}
										if (bVar51)
										{
											if (func_305(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_305(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_303(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_305(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_305(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_303(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_287(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
										func_285((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_3866[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5522)
										{
											func_287(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7772 && Global_17257.f_7773 == iVar6)
											{
												func_286(bVar31);
											}
											unk_0x2561F357565DEF13("NUMBER");
											unk_0x9EA8AC61C9873436(Global_17257.f_4119[iVar21], Global_17257.f_4246[iVar21]);
											fVar42 = unk_0x4E53FEE658D9705E(1);
											fVar41 = 0f;
											if (Global_17257.f_4891[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4891[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
											Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar42 = Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)];
										}
										if (bVar51)
										{
											if (func_305(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_305(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_303(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_305(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_305(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_303(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_287(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
										func_284((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_4119[iVar21], Global_17257.f_4246[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_305(Global_17257.f_4373[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17257.f_5522)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17257.f_4891[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
												Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
												fVar43 = Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)];
											}
											if (bVar51)
											{
												if (func_305(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17257.f_4891[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_305(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_296(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xFE6A5236E50BDF64(func_303(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_305(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_305(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_296(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xFE6A5236E50BDF64(func_303(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_305(Global_17257.f_4373[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_296(Global_17257.f_4373[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xFE6A5236E50BDF64(func_303(Global_17257.f_4373[iVar22]), func_301(Global_17257.f_4373[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_283(Global_17257.f_4373[iVar22])), (fVar36 * func_283(Global_17257.f_4373[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17257.f_4864[iVar8] == 5)
							{
								if (Global_17257.f_4876[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17257.f_4876[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17257.f_4876[iVar8]);
								if (Global_17257.f_4883[iVar8])
								{
									if (func_305(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17257.f_4876[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17257.f_7402[iVar9] = iVar6;
						Global_17257.f_5530 = iVar6;
						iVar9++;
						if (Global_17257.f_5160[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5535[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17257.f_5535[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17257.f_5521)
					{
						Global_17257.f_5287[iVar6] = 1;
						if (Global_17257.f_5033[iVar6])
						{
							if (bVar31)
							{
								Global_17257.f_5527 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17257.f_5527 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5521)
			{
				Global_17257.f_5523 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17257.f_5526 = iVar11;
				Global_17257.f_5524 = iVar10;
				Global_17257.f_5521 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5522)
	{
		Global_17257.f_5525 = iVar9;
		Global_17257.f_5522 = 1;
	}
	Global_17257.f_5664 = fVar49;
	Global_17257.f_5666 = unk_0x9D40BBF80D8F5E8A();
	unk_0x74C2382519DF9D92(Global_17257.f_5664);
	if (!Global_17257.f_7741)
	{
		func_206();
	}
	Global_17257.f_7741 = 0;
	if (bParam2)
	{
		unk_0x1B7A773B18DF3DB0(10);
	}
	unk_0x1B7A773B18DF3DB0(6);
	unk_0x1B7A773B18DF3DB0(7);
	unk_0x1B7A773B18DF3DB0(9);
	unk_0x1B7A773B18DF3DB0(8);
	if (bParam0)
	{
		func_282(1);
	}
	unk_0x26FD470559B5674D();
}

void func_282(int iParam0)
{
	Global_1339895.f_932 = iParam0;
}

float func_283(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_284(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x9EA8AC61C9873436(uParam3, uParam4);
	unk_0x2ED77CF10395403E(fParam0, fParam1, 0);
}

void func_285(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x8D23CF083336DA9B(iParam3);
	unk_0x2ED77CF10395403E(fParam0, fParam1, iParam4);
}

void func_286(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xC8FBBC95190691A8(Global_17257.f_7769[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xC8FBBC95190691A8(Global_17257.f_7769[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
}

void func_287(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_288(Global_17257.f_5797[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xC8FBBC95190691A8(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xC8FBBC95190691A8(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
		}
		else
		{
			unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x63EBA277B22A4C2D(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
	}
	else
	{
		unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
	}
	unk_0x1C00A83A6321F5E9(0f, 0.35f);
	unk_0xD1AB173831A6CDE6(1);
	if (bParam5)
	{
		unk_0x1C00A83A6321F5E9(0f, 0.425f);
		unk_0x2626D8742682C5ED(4);
	}
	else
	{
		unk_0x2626D8742682C5ED(0);
	}
	unk_0xE2458E4F6B499A9C(0f, 1f);
	unk_0x9A4139952357487D(0);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(0, 0, 0, 0, 0);
}

void func_288(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_289(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_309(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_307(bParam4, bParam8))
	{
		return;
	}
	if (func_294())
	{
		return;
	}
	if (unk_0x29C4AA4F29B1E539())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_292(unk_0x3F80C6638E3A1A90(), 0))
		{
			return;
		}
	}
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0x4C0203C9C5CF4108() == 0 || unk_0x29C4AA4F29B1E539())
		{
			return;
		}
	}
	if (Global_17257.f_4577 != 0)
	{
		if (unk_0x2C46E805556A1F00(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4577)
			{
				if (Global_17257.f_4834[iVar1] != 344)
				{
					StringCopy(&(Global_17257.f_4579[iVar1 /*16*/]), unk_0xE77F6122F2596EB4(2, Global_17257.f_4834[iVar1], 1), 64);
				}
				else if (Global_17257.f_4847[iVar1] != 32)
				{
					StringCopy(&(Global_17257.f_4579[iVar1 /*16*/]), unk_0xA2A8F65D8724B71E(2, Global_17257.f_4847[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17257.f_4578 = 0;
		}
		if (!Global_17257.f_4578)
		{
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x73B039A1CD485226((1f - (Global_17257.f_4889 / 100f)));
			unk_0xFF141057ED7B4C73();
			if (unk_0xA78EA29AC2FFBADE())
			{
				unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x840DDAF1126AE0CC(1);
				unk_0xFF141057ED7B4C73();
			}
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4577)
			{
				if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_4772[iVar1 /*4*/])) != unk_0xC7C6DDDE84A8E734("PREV"))
				{
					unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x43C93E686A1E92C5(iVar1);
					func_291(&(Global_17257.f_4579[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xC7C6DDDE84A8E734(&(Global_17257.f_4772[iVar2 /*4*/])) == unk_0xC7C6DDDE84A8E734("PREV"))
					{
						func_291(&(Global_17257.f_4579[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4821[iVar1] == -1)
					{
						func_290(&(Global_17257.f_4772[iVar1 /*4*/]));
					}
					else
					{
						unk_0x33D37B75FC2BCC8C(&(Global_17257.f_4772[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x96629435C64EFDA2(iParam2, 70);
						}
						else
						{
							unk_0x8D23CF083336DA9B(iParam2);
						}
						unk_0x057886C01DDC535D();
					}
					if (unk_0xA78EA29AC2FFBADE())
					{
						if (Global_17257.f_4834[iVar1] != 344 && unk_0xB519E5386FBF69E5(Global_17257.f_4860, iVar1))
						{
							unk_0x840DDAF1126AE0CC(1);
							unk_0x43C93E686A1E92C5(Global_17257.f_4834[iVar1]);
						}
						else
						{
							unk_0x840DDAF1126AE0CC(0);
							unk_0x43C93E686A1E92C5(344);
						}
					}
					unk_0xFF141057ED7B4C73();
				}
				iVar1++;
			}
			if (unk_0xC7C6DDDE84A8E734(&(Global_2557246.f_16)) != unk_0xC7C6DDDE84A8E734(""))
			{
				unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x43C93E686A1E92C5(Global_17257.f_4577);
				func_291(&Global_2557246);
				if (Global_2557246.f_20 == -1)
				{
					func_290(&(Global_2557246.f_16));
				}
				else
				{
					unk_0x33D37B75FC2BCC8C(&(Global_2557246.f_16));
					if (bParam5)
					{
						unk_0x96629435C64EFDA2(iParam2, 70);
					}
					else
					{
						unk_0x8D23CF083336DA9B(iParam2);
					}
					unk_0x057886C01DDC535D();
				}
				unk_0xFF141057ED7B4C73();
			}
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(80);
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4890)
			{
				unk_0x43C93E686A1E92C5(1);
			}
			else
			{
				unk_0x43C93E686A1E92C5(0);
			}
			unk_0xFF141057ED7B4C73();
			Global_17257.f_4578 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17257.f_4577)
		{
			if (Global_17257.f_4821[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x43C93E686A1E92C5(iVar1);
					unk_0x33D37B75FC2BCC8C(&(Global_17257.f_4772[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x96629435C64EFDA2(iParam2, 70);
					}
					else
					{
						unk_0x8D23CF083336DA9B(iParam2);
					}
					unk_0x057886C01DDC535D();
					unk_0xFF141057ED7B4C73();
				}
			}
			iVar1++;
		}
		if (Global_2557246.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x43C93E686A1E92C5(iVar1);
				unk_0x33D37B75FC2BCC8C(&(Global_2557246.f_16));
				if (bParam5)
				{
					unk_0x96629435C64EFDA2(iParam2, 70);
				}
				else
				{
					unk_0x8D23CF083336DA9B(iParam2);
				}
				unk_0x057886C01DDC535D();
				unk_0xFF141057ED7B4C73();
			}
		}
		unk_0x56B79B8AD45389A5(76, 66);
		unk_0xC49724172A0D506C(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17257.f_7776)
			{
				unk_0xA2DDC75885378542(15, 0f, -0.0375f);
				Global_17257.f_7776 = 1;
			}
		}
		else if (Global_17257.f_7776)
		{
			unk_0x4A819C86009EE6EC(15);
			Global_17257.f_7776 = 0;
		}
		unk_0x26FD470559B5674D();
		if (Global_17257.f_4863)
		{
			unk_0x56B79B8AD45389A5(82, 66);
			unk_0xC49724172A0D506C(0f, 0f, 0f, 0f);
			unk_0xAF5B7C9C0A5116E9(Global_17257.f_5453[iVar0 /*10*/], Global_17257.f_4861, Global_17257.f_4862, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x26FD470559B5674D();
		}
		else
		{
			unk_0xE2B331FD5EEF4684(Global_17257.f_5453[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_290(var uParam0)
{
	unk_0x33D37B75FC2BCC8C(uParam0);
	unk_0x057886C01DDC535D();
}

void func_291(var uParam0)
{
	unk_0x492B9DC2AF02FDDF(uParam0);
}

bool func_292(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_293(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_293(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_133();
	}
	if (Global_1315887[iVar1] == 1)
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

int func_294()
{
	struct<3> Var0;
	
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	if (func_295())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x2EA67F1118848733(&Var0);
		if (Global_14358 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_295()
{
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_296(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xC8FBBC95190691A8(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_297(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x2626D8742682C5ED(0);
	unk_0x1C00A83A6321F5E9(0f, 0.35f);
	unk_0xBAD855016DFBE4C3(2);
	unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, iVar3);
	unk_0xE2458E4F6B499A9C(fParam0, ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x9A4139952357487D(0);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(0, 0, 0, 0, 0);
}

void func_298(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x8D23CF083336DA9B(uParam3);
	unk_0x8D23CF083336DA9B(uParam4);
	unk_0x2ED77CF10395403E(fParam0, fParam1, 0);
}

float func_299(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x356491C12DAD1A37(sParam0))
	{
		if (unk_0xC7C6DDDE84A8E734(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_300();
	unk_0x2561F357565DEF13(sParam0);
	unk_0x8D23CF083336DA9B(uParam1);
	unk_0x8D23CF083336DA9B(uParam2);
	return unk_0x4E53FEE658D9705E(1);
}

void func_300()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7751)
	{
		iVar0 = Global_17257.f_7747;
		iVar1 = Global_17257.f_7748;
		iVar2 = Global_17257.f_7749;
		iVar3 = Global_17257.f_7750;
	}
	unk_0x2626D8742682C5ED(0);
	unk_0x1C00A83A6321F5E9(0f, 0.35f);
	unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, iVar3);
	unk_0xE2458E4F6B499A9C((Global_17254 + 0.0046875f), ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x9A4139952357487D(0);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(0, 0, 0, 0, 0);
}

var func_301(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0xF6917DE0E003509D(&(Global_17257.f_6601[iParam0 /*16*/])))
	{
		return func_302(&(Global_17257.f_6601[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_302(var uParam0)
{
	return uParam0;
}

char* func_303(int iParam0)
{
	if (!unk_0xF6917DE0E003509D(&(Global_17257.f_5800[iParam0 /*16*/])))
	{
		return func_302(&(Global_17257.f_5800[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_304()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x177E5285E888D643(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_303(iParam0);
	sVar1 = func_301(iParam0, bParam1);
	if (unk_0xC7C6DDDE84A8E734(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x177E5285E888D643(&iVar2, &iVar3);
			fVar5 = unk_0x56995B080AF5D7D0(0);
			if (func_304())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_304())
			{
				fVar4 = 1f;
			}
			if (unk_0xFF6891E21E7FC193(joaat("director_mode")) > 0)
			{
				unk_0xC2E26B11E2BC4A88(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0xC2E26B11E2BC4A88(&iVar2, &iVar3);
		}
		Var7 = { unk_0x8504C7FBA97E6D14(uVar0, sVar1) };
		Var7.f_0 = (Var7.f_0 * (func_306(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_306(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.f_0 = (Var7.f_0 - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.f_0 = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x51807A4D76E3D4F4() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17256)
			{
				*fParam4 = (*fParam4 * (Global_17256 / *fParam3));
				*fParam3 = Global_17256;
			}
		}
		return 1;
	}
	return 0;
}

float func_306(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_307(bool bParam0, bool bParam1)
{
	if (Global_2426494.f_1325.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xDE185266FE919B68() || (func_24(8, -1) && func_308() != 64)) || (unk_0x9449AC6115443388() != 0 && !bParam1)) || (unk_0xF478777FFCC96862() && !bParam0)) || unk_0x565848B3396785BC()) || Global_69496) || Global_17257.f_7775) || unk_0xA42A6C736BEA9778()) || Global_91077.f_1338)
	{
		return 0;
	}
	return 1;
}

int func_308()
{
	return Global_1315842;
}

int func_309(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x00AAD79B42B3E036() && unk_0x0D47370227E1A847())
		{
			iParam2 = unk_0x0F263434E43646BA();
		}
	}
	StringCopy(&cVar0, unk_0x959E7FA37C0D0892(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xC7C6DDDE84A8E734(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5514[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17257.f_5514[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5514[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_310()
{
	if (!func_350(iLocal_304))
	{
		iLocal_304 = func_328();
		func_319(&iLocal_304, 0, 0, unk_0x0ADD324BC46177EF(1, 2), 0, 0, 0);
	}
	else if (!func_460(iLocal_75, 2))
	{
		if (func_311(iLocal_304))
		{
			iLocal_304 = func_328();
			func_319(&iLocal_304, 0, 0, unk_0x0ADD324BC46177EF(1, 2), 0, 0, 0);
			func_452(&iLocal_75, 2);
		}
	}
	else if (func_311(iLocal_304))
	{
		func_268();
		func_443(0);
	}
}

bool func_311(int iParam0)
{
	return func_312(func_328(), iParam0);
}

int func_312(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_350(iParam1) || !func_350(iParam0))
	{
		return 1;
	}
	iVar0 = func_318(iParam0);
	iVar1 = func_318(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_317(iParam0);
	iVar1 = func_317(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_316(iParam0);
	iVar1 = func_316(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_315(iParam0);
	iVar1 = func_315(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_314(iParam0);
	iVar1 = func_314(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_313(iParam0);
	iVar1 = func_313(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_313(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_314(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_315(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_316(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_317(int iParam0)
{
	return iParam0 & 15;
}

var func_318(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_160(unk_0xB519E5386FBF69E5(iParam0, 31), -1, 1)) + 2011;
}

void func_319(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_318(*iParam0);
	iVar1 = func_317(*iParam0);
	iVar2 = func_316(*iParam0);
	iVar3 = func_315(*iParam0);
	iVar4 = func_314(*iParam0);
	iVar5 = func_313(*iParam0);
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
	iVar6 = func_327(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_327(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_320(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_320(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_326(uParam0, iParam1);
	func_325(uParam0, iParam2);
	func_324(uParam0, iParam3);
	func_323(uParam0, iParam5);
	func_322(uParam0, iParam4);
	func_321(uParam0, iParam6);
}

void func_321(var uParam0, int iParam1)
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

void func_322(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_317(*uParam0);
	iVar1 = func_318(*uParam0);
	if (iParam1 < 1 || iParam1 > func_327(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_323(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_324(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_325(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_326(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_327(int iParam0, int iParam1)
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

int func_328()
{
	var uVar0;
	
	func_326(&uVar0, unk_0x0CE219089BDB83C5());
	func_325(&uVar0, unk_0x1B24A2CA27443F7B());
	func_324(&uVar0, unk_0x7C833E3C6EEE41E0());
	func_322(&uVar0, unk_0x2DA3502053F9E535());
	func_323(&uVar0, unk_0xEB4EA596232DA76E());
	func_321(&uVar0, unk_0xB99227ECC84A576C());
	return uVar0;
}

void func_329(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

void func_330()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_344(1);
	func_267(1);
	unk_0xA8010B7497A9230B(0);
	func_343(0);
	func_342(1, 1, 0, 0, 0);
	func_341(1, 2, 1, 1, 1);
	func_340("PROS_OPTS");
	func_339(201, "PROS_SELECT", -1, 0);
	iLocal_71 = 0;
	iVar0 = func_224(0);
	iVar1 = func_224(1);
	iVar2 = func_224(2);
	if (func_262() >= iVar0)
	{
		func_336(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0);
		func_333(iVar0, 0);
		iLocal_289[iLocal_71] = 0;
		iLocal_71++;
	}
	if (func_262() >= iVar1 && func_332(iLocal_99))
	{
		func_336(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0);
		func_333(iVar1, 0);
		iLocal_289[iLocal_71] = 1;
		iLocal_71++;
	}
	if (func_262() >= iVar2 && func_332(iLocal_99))
	{
		func_336(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0);
		func_333(iVar2, 0);
		iLocal_289[iLocal_71] = 2;
		iLocal_71++;
	}
	func_336(iLocal_71, "PROS_QUIT", 0, 1, 0, 0);
	iLocal_70 = 0;
	func_269(iLocal_70, 1, 1);
	func_331();
	iLocal_89 = unk_0x9D40BBF80D8F5E8A();
	iLocal_301 = 3;
}

void func_331()
{
	Global_17118.f_5 = 1;
}

int func_332(int iParam0)
{
	int iVar0;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = unk_0x1B2DC87EFB36DF80(iParam0);
		if (((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix"))
		{
			return 0;
		}
	}
	return 1;
}

void func_333(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5028 >= 252)
	{
		return;
	}
	if (Global_17257.f_5533 >= 4)
	{
		return;
	}
	if (Global_17257.f_5534 != 1)
	{
		return;
	}
	if (Global_17257.f_5533 >= Global_17257.f_5531)
	{
		return;
	}
	Global_17257.f_3866[Global_17257.f_5028] = iParam0;
	Global_17257.f_5028++;
	Global_17257.f_2092[Global_17257.f_5532 /*5*/][Global_17257.f_5533] = 2;
	Global_17257.f_5533++;
	if (Global_17257.f_5533 >= Global_17257.f_5531)
	{
		fVar0 = func_335();
		if (Global_17257.f_4883[Global_17257.f_5025] && Global_17257.f_5533 == Global_17257.f_5531)
		{
			func_305(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4876[(Global_17257.f_5025 - 1)])
		{
			Global_17257.f_4876[(Global_17257.f_5025 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5533 >= Global_17257.f_5531)
		{
			fVar3 = func_334();
			if (fVar3 > Global_17257.f_5535[Global_17257.f_5024])
			{
				Global_17257.f_5535[Global_17257.f_5024] = fVar3;
			}
		}
	}
}

float func_334()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5533)
	{
		if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17257.f_4373[((Global_17257.f_5030 - iVar1) + iVar0)] != 0)
		{
			if (func_305(Global_17257.f_4373[((Global_17257.f_5030 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x75D27F83672CDCB0(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x75D27F83672CDCB0(0.35f, 0);
}

float func_335()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5533)
	{
		if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_287(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
	{
		unk_0x2561F357565DEF13(&(Global_17257.f_73[Global_17257.f_5532 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5533)
	{
		if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(Global_17257.f_5532 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(Global_17257.f_5532 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 2)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x8D23CF083336DA9B(Global_17257.f_3866[((Global_17257.f_5028 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 3)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9EA8AC61C9873436(Global_17257.f_4119[((Global_17257.f_5029 - iVar4) + iVar10)], Global_17257.f_4246[((Global_17257.f_5029 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 5)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x63E8D6007C32E426(&(Global_2441085[((Global_17257.f_5027 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 6)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9359E7CC54335EB9(&(Global_2441085[((Global_17257.f_5027 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 7)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x63E8D6007C32E426(&(Global_2441085[((Global_17257.f_5027 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
	{
		fVar0 = unk_0x4E53FEE658D9705E(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17257.f_4373[((Global_17257.f_5030 - iVar5) + iVar7)] != 0)
		{
			func_305(Global_17257.f_4373[((Global_17257.f_5030 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_336(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17257.f_5024 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5024 >= 126)
	{
		return;
	}
	if (Global_17257.f_5026 >= 252)
	{
		return;
	}
	if (Global_17257.f_5533 < Global_17257.f_5531)
	{
		return;
	}
	if (Global_17257.f_5024 != iParam0)
	{
		Global_17257.f_5024 = iParam0;
		Global_17257.f_5025 = 0;
	}
	iVar0 = Global_17257.f_4864[Global_17257.f_5025];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5025 < 4 && iVar0 != 1)
		{
			Global_17257.f_5025++;
			iVar0 = Global_17257.f_4864[Global_17257.f_5025];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]), sParam1, 24);
	if (!unk_0xF6917DE0E003509D(sParam1) && !unk_0x33FD8E2E139F4FAC(sParam1))
	{
	}
	Global_17257.f_1586[Global_17257.f_5026] = iParam3;
	Global_17257.f_1839[Global_17257.f_5026] = iParam4;
	Global_17257.f_5026++;
	if (iParam2 == 0)
	{
		fVar1 = func_338(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]));
		if (Global_17257.f_4883[Global_17257.f_5025])
		{
			func_305(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17257.f_4876[Global_17257.f_5025])
		{
			Global_17257.f_4876[Global_17257.f_5025] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_337(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]));
			if (fVar4 > Global_17257.f_5535[iParam0])
			{
				Global_17257.f_5535[iParam0] = fVar4;
			}
		}
	}
	unk_0x9956FB0E4B50ECB8(&(Global_17257.f_4897[iParam0]), Global_17257.f_5025);
	Global_17257.f_5025++;
	Global_17257.f_5534 = 1;
	Global_17257.f_5532 = (Global_17257.f_5026 - 1);
	Global_17257.f_5533 = 0;
	Global_17257.f_5531 = iParam2;
}

float func_337(char* sParam0)
{
	if (!unk_0x33FD8E2E139F4FAC(sParam0))
	{
	}
	return unk_0x75D27F83672CDCB0(0.35f, 0);
}

float func_338(char* sParam0)
{
	if (!unk_0x356491C12DAD1A37(sParam0))
	{
		if (unk_0xC7C6DDDE84A8E734(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_287(0, 1, 0, 0, 0, 0);
	unk_0x2561F357565DEF13(sParam0);
	return unk_0x4E53FEE658D9705E(1);
}

void func_339(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xE77F6122F2596EB4(2, iParam0, 1);
	if (Global_17257.f_4577 >= 12)
	{
		StringCopy(&Global_2557246, sVar0, 64);
		StringCopy(&(Global_2557246.f_16), sParam1, 16);
		Global_2557246.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_17257.f_4860), Global_17257.f_4577);
	}
	StringCopy(&(Global_17257.f_4579[Global_17257.f_4577 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4772[Global_17257.f_4577 /*4*/]), sParam1, 16);
	Global_17257.f_4821[Global_17257.f_4577] = iParam2;
	Global_17257.f_4834[Global_17257.f_4577] = iParam0;
	Global_17257.f_4847[Global_17257.f_4577] = 32;
	Global_17257.f_4577++;
}

void func_340(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_1), sParam0, 16);
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4891[0] = iParam0;
	Global_17257.f_4891[1] = iParam1;
	Global_17257.f_4891[2] = iParam2;
	Global_17257.f_4891[3] = iParam3;
	Global_17257.f_4891[4] = iParam4;
}

void func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4864[0] = iParam0;
	Global_17257.f_4864[1] = iParam1;
	Global_17257.f_4864[2] = iParam2;
	Global_17257.f_4864[3] = iParam3;
	Global_17257.f_4864[4] = iParam4;
	Global_17257.f_5032 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5032++;
	}
}

void func_343(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 252)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2092[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2441085[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 252)
	{
		Global_17257.f_3866[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		Global_17257.f_4119[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		Global_17257.f_4373[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		Global_17257.f_4897[iVar0] = 0;
		Global_17257.f_5033[iVar0] = 0;
		Global_17257.f_5160[iVar0] = 0;
		Global_17257.f_5667[iVar0] = 0f;
		Global_17257.f_5287[iVar0] = 0;
		Global_17257.f_5535[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4864[iVar0] = 0;
		Global_17257.f_4876[iVar0] = 0f;
		Global_17257.f_4870[iVar0] = -1f;
		Global_17257.f_4883[iVar0] = 0;
		Global_17257.f_4891[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4772[iVar0 /*4*/]), "", 16);
		Global_17257.f_4821[iVar0] = -1;
		Global_17257.f_4834[iVar0] = 344;
		Global_17257.f_4847[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_17257.f_5800[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6601[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2557246.f_16), "", 16);
	Global_2557246.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5024 = 0;
	Global_17257.f_5025 = 0;
	Global_17257.f_5026 = 0;
	Global_17257.f_5028 = 0;
	Global_17257.f_5029 = 0;
	Global_17257.f_5030 = 0;
	Global_17257.f_5027 = 0;
	Global_17257.f_5662 = 0;
	Global_17257.f_5529 = 0;
	Global_17257.f_5528 = 0;
	Global_17257.f_5530 = 0;
	StringCopy(&(Global_17257.f_4500), "", 16);
	Global_17257.f_4570 = 0;
	Global_17257.f_4571 = 0;
	Global_17257.f_4572 = 0;
	Global_17257.f_4573 = 0;
	Global_17257.f_4574 = 0;
	Global_17257.f_4575 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4504[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4576 = 0;
	StringCopy(&(Global_2557246.f_21), "", 16);
	Global_2557246.f_61 = 0;
	Global_2557246.f_62 = 0;
	Global_2557246.f_63 = 0;
	Global_2557246.f_64 = 0;
	Global_2557246.f_65 = 0;
	Global_2557246.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2557246.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2557246.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4882 = 0f;
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_5534 = 0;
	Global_17257.f_5533 = 0;
	Global_17257.f_5531 = 0;
	Global_17257.f_5532 = 0;
	Global_17257.f_4577 = 0;
	Global_17257.f_4578 = 0;
	Global_17257.f_5031 = 10;
	Global_17257.f_5032 = 0;
	Global_17257.f_5664 = 0f;
	Global_17257.f_5665 = 0f;
	Global_17257.f_5521 = 0;
	Global_17257.f_5522 = 0;
	Global_17257.f_5523 = 0f;
	Global_17257.f_5524 = 0;
	Global_17257.f_5526 = 0;
	Global_17257.f_5525 = 0;
	Global_17257.f_5527 = 0;
	Global_17257.f_7772 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5794[iVar0] = -1;
		Global_17257.f_5797[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4889 = 0f;
	Global_17257.f_4860 = 0;
	Global_17257.f_4890 = 0;
	Global_17257.f_7751 = 0;
	Global_17257.f_7746 = 0;
	Global_17257.f_7756 = 0;
	Global_17257.f_7761 = 0;
	Global_17257.f_7766 = 0;
	Global_17257.f_7768 = 0;
	Global_17257.f_7774 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = unk_0x56995B080AF5D7D0(0);
	if (bParam0)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17256 = 0.225f;
	}
}

void func_344(bool bParam0)
{
	if (!bParam0)
	{
		Global_97799 = unk_0x9D40BBF80D8F5E8A() + 250;
	}
	Global_97796 = bParam0;
}

int func_345(char* sParam0, int iParam1)
{
	if (func_262() < func_224(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (unk_0x00AAD79B42B3E036() && func_346(unk_0x3F80C6638E3A1A90()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_1607618[iVar0 /*106*/].f_1, 0);
	}
	return 0;
}

int func_347(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0x2917D5E1CB5CE43A(func_44(unk_0xE7869D5D7816A9B6(), 0, 0)))
	{
	}
	else if (!unk_0x23417CDB252083F9(iParam0, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_103(bParam1), 3) && unk_0xC47857E5E74EA5AF(iParam0, -2017877118) != 1)
	{
		if (func_521())
		{
			if (iParam0 == unk_0xE7869D5D7816A9B6())
			{
				if (!func_198(unk_0x3F80C6638E3A1A90()))
				{
					iVar0 = unk_0x0CBEED266436AEFF(unk_0xE7869D5D7816A9B6(), 6);
					if (!func_494(256))
					{
						func_189(256);
						iLocal_86 = iVar0;
						iLocal_87 = unk_0xB9111DA78E2971F6(unk_0xE7869D5D7816A9B6(), 6);
						unk_0x497AFDFE79EEFE4F(unk_0xE7869D5D7816A9B6(), 6, 1, 0, 0);
						func_189(1024);
					}
				}
				unk_0xDCF460AE46C9489C(iParam0, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_348(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0xDCF460AE46C9489C(iParam0, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_348(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			unk_0xDCF460AE46C9489C(iParam0, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_348(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (unk_0x23417CDB252083F9(iParam0, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_348(bParam1), 3))
		{
			if (unk_0xCB337035DFE5097C(iParam0, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_348(bParam1)) >= 0.95f)
			{
				unk_0xDCF460AE46C9489C(iParam0, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_103(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (unk_0x23417CDB252083F9(iParam0, func_44(unk_0xE7869D5D7816A9B6(), 0, 0), func_103(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_348(bool bParam0)
{
	if (!func_460(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(0);
		}
		else
		{
			return func_39(1);
		}
	}
	if (bParam0)
	{
		return func_40(0);
	}
	return func_40(1);
}

void func_349(int iParam0)
{
	*iParam0 = -15;
}

int func_350(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_313(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_314(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_315(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_318(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_317(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_316(iParam0);
	if (iVar5 < 1 || iVar5 > func_327(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_351()
{
	if (unk_0xAF437D7C802AB246(iLocal_96))
	{
		return;
	}
	unk_0x6C192F2018742EC1(iLocal_96);
	if (!unk_0xB43400C480010FCA(iLocal_96))
	{
		if (iLocal_72 < 1)
		{
			unk_0x489E3B00AFB0758C(iLocal_96, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x489E3B00AFB0758C(iLocal_96, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_352()
{
	if (func_353(0, -1) && unk_0xDF83A33BF4D93E6F("SCRIPT\HUD_321_GO", true))
	{
		return 1;
	}
	return 0;
}

bool func_353(char* sParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_309(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17257.f_5428[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xF6917DE0E003509D(&(Global_17257.f_5428[iVar0 /*4*/])))
	{
		unk_0x36A3D6FBED10EF81(&(Global_17257.f_5428[iVar0 /*4*/]), 9);
		Global_17257.f_5421[iVar0] = 1;
		if (!unk_0xA73545B11DECBFE2(&(Global_17257.f_5428[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xDF7D4AE1A984CEF7("CommonMenu", false);
	Global_17257.f_5414[iVar0] = 1;
	if (!unk_0x0B4924B3F0DADDD1("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17257.f_5453[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_354(&(Global_17257.f_5453[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_354(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x4A4851D44CDF03C0(*uParam0))
			{
				*uParam0 = unk_0xE3C796DC28BC3254(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x4A4851D44CDF03C0(*uParam0))
					{
						uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x4A4851D44CDF03C0(*uParam0))
			{
				uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x4A4851D44CDF03C0(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_355()
{
	if (!func_521())
	{
		return;
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_96))
	{
		iLocal_60 = unk_0x8219941CC4732B36(iLocal_96);
	}
}

void func_356()
{
	int iVar0;
	
	if (!func_521())
	{
		return;
	}
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
			if (unk_0xD51CFE69539DB6D8(iVar0))
			{
				Local_56 = { unk_0x1141852D07400777(iVar0, 1) };
			}
		}
	}
}

void func_357(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_309(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17257.f_7776)
	{
		unk_0x4A819C86009EE6EC(15);
		Global_17257.f_7776 = 0;
	}
	unk_0x74C2382519DF9D92(0f);
	if (Global_17257.f_5421[iVar0])
	{
		unk_0x3A2938D665EA8A9E(9, false);
		Global_17257.f_5421[iVar0] = 0;
	}
	if (Global_17257.f_5414[iVar0])
	{
		unk_0xA857A54226CCD303("CommonMenu");
		Global_17257.f_5414[iVar0] = 0;
	}
	if (bParam0)
	{
		func_358(&(Global_17257.f_5453[iVar0 /*10*/]));
		Global_17257.f_5514[iVar0] = 0;
	}
	else
	{
		Global_17257.f_5514[iVar0] = 0;
	}
}

void func_358(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x4A4851D44CDF03C0(*uParam0))
		{
			unk_0x8A86A209B0F0AF7D(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_359()
{
	if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) == 0)
	{
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				iLocal_99 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
				if (!iLocal_99 == 0)
				{
					if ((unk_0xC45A34912542C4EB(iLocal_99, 0) && !unk_0x9DD85FBDD5BC3BF1(iLocal_99)) && !unk_0xD1ED65515DA55794(iLocal_99))
					{
						if (func_85(&iLocal_99))
						{
							func_5(&iLocal_49, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_360()
{
	if (iLocal_72 == 0)
	{
		if (!func_460(iLocal_51, 1) && !func_460(iLocal_51, 16))
		{
			if (func_361(0))
			{
				func_452(&iLocal_51, 1);
			}
		}
		if (!func_460(iLocal_51, 4) && !func_460(iLocal_51, 64))
		{
			if (func_361(2))
			{
				func_452(&iLocal_51, 4);
			}
		}
		if (!func_460(iLocal_51, 8) && !func_460(iLocal_51, 128))
		{
			if (func_361(1))
			{
				func_452(&iLocal_51, 8);
			}
		}
	}
}

int func_361(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	var uVar10;
	var uVar13;
	
	Var0 = { func_179(iParam0) };
	Var3 = { unk_0x1141852D07400777(iLocal_99, 1) };
	if (iLocal_308[iParam0] == 0)
	{
		if (unk_0x1B2DC87EFB36DF80(iLocal_99) == joaat("casco") || unk_0x1B2DC87EFB36DF80(iLocal_99) == joaat("feltzer3"))
		{
			iLocal_308[iParam0] = unk_0xBA9F511DC3200D60(Var0, Var3, 0.15f, 511, iLocal_99, 3);
		}
		else
		{
			iLocal_308[iParam0] = unk_0xBA9F511DC3200D60(Var0, Var3, 0.25f, 511, iLocal_99, 3);
		}
	}
	else
	{
		switch (unk_0x9CBE058E2C3ABB72(iLocal_308[iParam0], &iVar6, &uVar7, &uVar10, &uVar13))
		{
			case 2:
				iLocal_308[iParam0] = 0;
				if (iVar6 != 0)
				{
					func_362(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_308[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_460(iLocal_51, 16))
			{
				func_452(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_460(iLocal_51, 128))
			{
				func_452(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_460(iLocal_51, 64))
			{
				func_452(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_460(iLocal_51, 32))
			{
				func_452(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_363()
{
	if (func_368() && !unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
	{
		iLocal_295 = 9;
		func_366(iLocal_96);
		func_366(unk_0xE7869D5D7816A9B6());
		func_364();
		func_34(&uLocal_104);
	}
}

void func_364()
{
	struct<7> Var0;
	struct<7> Var7;
	
	if (!unk_0xCF686B56FD5328B5(uLocal_102))
	{
		uLocal_102 = unk_0x01A00DEC76A48F14("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	if (!unk_0xCF686B56FD5328B5(uLocal_103))
	{
		uLocal_103 = unk_0x01A00DEC76A48F14("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	func_365(&Var0, &Var7);
	unk_0x34F8B34A8E9D3B57(uLocal_102, Var0);
	unk_0x3B330DB318EF2761(uLocal_102, Var0.f_3, 2);
	unk_0xD2E0A9EDD55F008D(uLocal_102, Var0.f_6);
	unk_0x34F8B34A8E9D3B57(uLocal_103, Var7);
	unk_0x3B330DB318EF2761(uLocal_103, Var7.f_3, 2);
	unk_0xD2E0A9EDD55F008D(uLocal_103, Var7.f_6);
	unk_0x63498CF6CF35C6A2(uLocal_102, 1);
	unk_0x63498CF6CF35C6A2(uLocal_103, 0);
	unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
}

void func_365(var uParam0, var uParam1)
{
	switch (func_18())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_366(int iParam0)
{
	var uVar0;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		unk_0x33A90AD8FA327B72(&uVar0);
		unk_0x94026C1D1DB14225(&uVar0);
		if (unk_0x51374A0BB2871E6E(iParam0, 0))
		{
			unk_0xCD7A5BCC47D00FB2(0, 0, 16842752);
		}
		unk_0x33E113E52A91C5C3(0, func_367(), 1f, -1, 0.5f, 8192, 1193033728);
		unk_0x911ECBCE73F8EC3F(uVar0);
		unk_0xC2C4A3A9FF2FBFFF(iParam0, uVar0);
		unk_0x33A90AD8FA327B72(&uVar0);
	}
}

Vector3 func_367()
{
	switch (func_18())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_368()
{
	return unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), func_370()) < (func_369() * func_369());
}

float func_369()
{
	switch (func_18())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_370()
{
	switch (func_18())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_371()
{
	func_310();
	func_386();
	if (!func_10(&uLocal_107))
	{
		func_442(&uLocal_107);
	}
	if (func_385())
	{
		return;
	}
	if (!func_10(&uLocal_116))
	{
		func_442(&uLocal_116);
	}
	if (func_359() && unk_0x8AF655CC5761C7A2(iLocal_96, iLocal_99, 0))
	{
		if (unk_0x6D30046757C9C4F9(iLocal_99) && unk_0x0E9BAAAE8317091B(iLocal_99))
		{
			if ((func_378() && !func_368()) && !func_377())
			{
				func_376();
				if (func_7(&uLocal_116) > 2.5f)
				{
					uLocal_85 = unk_0xC94877F1D01BEFB9(unk_0x1141852D07400777(iLocal_99, 0), 40f, 40f, 40f, unk_0x2CAFFCD9F5E16D2F(iLocal_99), 0, 7);
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 896);
					func_452(&iLocal_49, 2048);
					iLocal_100 = 0;
					unk_0x103FCC2BD24292A3("ProstituteInPlay", &uLocal_307);
					unk_0xA9CA101B50B90993(1, uLocal_307, joaat("player"));
					unk_0x690C5239500171FE(iLocal_96, uLocal_307);
					func_461("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_304 = -15;
					func_121();
					func_375();
					iLocal_83 = 3;
					if (func_42(0, 1))
					{
						unk_0x1B8E0930AB96444B(0);
					}
					iLocal_295 = 8;
				}
			}
			else
			{
				if ((!unk_0xB43400C480010FCA(unk_0xE7869D5D7816A9B6()) && func_7(&uLocal_107) > 15f) && func_374())
				{
					if (!func_460(iLocal_50, 4096))
					{
						func_329("PROS_SPOT", -1);
						func_452(&iLocal_50, 4096);
					}
					func_373();
					func_34(&uLocal_107);
				}
				func_34(&uLocal_116);
			}
		}
		else
		{
			func_34(&uLocal_116);
			func_372();
		}
	}
	else if (!func_368())
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_96))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_96))
			{
				unk_0xFA2C5C2D054C888E(iLocal_96);
			}
		}
		func_443(0);
	}
}

void func_372()
{
	iLocal_51 = 0;
	iLocal_308[0] = 0;
	iLocal_308[1] = 0;
	iLocal_308[2] = 0;
	iLocal_308[3] = 0;
}

void func_373()
{
	if (unk_0xAF437D7C802AB246(iLocal_96))
	{
		return;
	}
	if (!unk_0xB43400C480010FCA(iLocal_96))
	{
		unk_0x489E3B00AFB0758C(iLocal_96, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_374()
{
	if (!func_460(iLocal_51, 256))
	{
		return 1;
	}
	return func_460(iLocal_51, 32);
}

void func_375()
{
	if (func_521())
	{
		unk_0x1C26C4B0DAB91B21(iLocal_96, 229, 1);
		unk_0x1C26C4B0DAB91B21(iLocal_96, 26, 1);
		unk_0x1C26C4B0DAB91B21(iLocal_96, 115, 1);
		unk_0x9BEE7E791BC4D38B(iLocal_96, 1);
	}
}

void func_376()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar12;
	var uVar15;
	
	if (!func_460(iLocal_49, 2097152))
	{
		if (unk_0x9D40BBF80D8F5E8A() > iLocal_84)
		{
			if (iLocal_100 == 0)
			{
				Var0 = { unk_0x1141852D07400777(iLocal_99, 1) };
				unk_0xC4A43A7E257E1FD9(Var0, &fVar6, 0);
				Var0.f_2 = (fVar6 + 0.15f);
				Var3 = { unk_0xBD306D8AFEF4E078(iLocal_99, 0f, 0f, -2f) };
				iLocal_100 = unk_0x107BA8B020DB9C5F(Var0, Var3, 2f, 511, iLocal_99, 7);
			}
			else if (unk_0x0B46F32E6B1321B8(iLocal_100, &iVar8, &uVar9, &uVar12, &iVar7, &uVar15) == 2)
			{
				if (iVar8 != 0)
				{
					if ((iVar7 == -1447280105 || iVar7 == 1925605558) || iVar7 == 2128369009)
					{
						func_34(&uLocal_116);
					}
				}
				iLocal_84 = unk_0x9D40BBF80D8F5E8A() + 1500;
				iLocal_100 = 0;
			}
		}
	}
}

int func_377()
{
	int iVar0;
	
	iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
	if (unk_0xC45A34912542C4EB(iVar0, 0))
	{
		if (!unk_0xD12071DBE8393EC8(iVar0, 0))
		{
			if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()) || unk_0xA7D2A868253353BE(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_378()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iLocal_99 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		}
		Var1 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
		if (unk_0x2EAC68D550960C3C(Var1, func_59(0), 12f, 0) || unk_0x2EAC68D550960C3C(Var1, func_59(1), 12f, 0))
		{
			return 0;
		}
		if (func_384())
		{
			return 0;
		}
		if (func_383(iLocal_99, &Var4))
		{
			if (!func_382(Var4))
			{
				if (!func_381(Var1) || func_380(Var1))
				{
					return 0;
				}
			}
		}
		if (func_84(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), (30f * 0.5f)))
		{
			return 0;
		}
		if (!unk_0xE8C390D56BE854E1(iLocal_96, iLocal_99, 0, 0, 0))
		{
			return 0;
		}
		unk_0x85D45341F4F5F16A(1);
		if (unk_0x5353F70F9BA66F4D(Var1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (unk_0xD51CFE69539DB6D8(iVar0))
			{
				if (!unk_0x76B2D234F1895632(iVar0))
				{
					if (unk_0xF70F7CD913F23E2A(iVar0, iLocal_99, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_461("NO VEHICLES FOUND");
			}
		}
		iVar7 = unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6());
		if (!iVar7 == 0)
		{
			func_461("IN AN INTERIOR");
			return 0;
		}
		if (func_379())
		{
			return 0;
		}
	}
	return 1;
}

int func_379()
{
	func_452(&iLocal_51, 256);
	if (!func_460(iLocal_51, 2))
	{
		if (func_361(3))
		{
			func_452(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
		return 1;
	}
	else
	{
		func_360();
	}
	return 0;
}

int func_380(struct<3> Param0)
{
	if (((((((((unk_0x2A488C176D52CCA5(Param0, 491.76f, -515.73f, 29.51f) <= 12f || unk_0x2A488C176D52CCA5(Param0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, -633.6086f, -332.3337f, 33.81f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_381(struct<3> Param0)
{
	if ((((((unk_0x2A488C176D52CCA5(Param0, -1582.782f, 5168.163f, 18.5615f) <= 15f || unk_0x2A488C176D52CCA5(Param0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -273f, 317.8898f, 92.2549f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || unk_0x2A488C176D52CCA5(Param0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || unk_0x2A488C176D52CCA5(Param0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_452(&iLocal_49, 2097152);
		return 1;
	}
	func_5(&iLocal_49, 2097152);
	return 0;
}

int func_382(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x194F830AE4D9E6FB(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 1, 1, 1077936128, 0);
	unk_0x399284B4E8B22749(uVar0, &Param0);
	if (unk_0x9023A1321CE38A1F(uVar0))
	{
		if (!unk_0x412E24001F8D483B(uVar0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Param0) > 400f)
			{
				return 1;
			}
		}
		else if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Param0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!unk_0x412E24001F8D483B(uVar0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		uVar0 = unk_0x194F830AE4D9E6FB(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 1, 8, 1077936128, 0);
		unk_0x399284B4E8B22749(uVar0, &Param0);
		if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_383(int iParam0, var uParam1)
{
	struct<3> Var0[4];
	
	Var0[0 /*3*/] = { unk_0xBD306D8AFEF4E078(iParam0, 2f, 0f, 0f) };
	Var0[1 /*3*/] = { unk_0xBD306D8AFEF4E078(iParam0, -2f, 0f, 0f) };
	Var0[2 /*3*/] = { unk_0xBD306D8AFEF4E078(iParam0, 0f, 2f, 0f) };
	Var0[3 /*3*/] = { unk_0xBD306D8AFEF4E078(iParam0, 0f, -2f, 0f) };
	if (unk_0x2177A5568D864239(Var0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x2177A5568D864239(Var0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x2177A5568D864239(Var0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x2177A5568D864239(Var0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}

bool func_384()
{
	return Global_67887;
}

int func_385()
{
	if (unk_0xFF6891E21E7FC193(joaat("carwash1")) > 0 || unk_0xFF6891E21E7FC193(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_386()
{
	if (!func_460(iLocal_49, 128))
	{
		func_387(39, 1);
		func_387(40, 1);
		func_387(41, 1);
		func_387(42, 1);
		func_387(43, 1);
		func_387(44, 1);
		func_452(&iLocal_49, 128);
	}
}

void func_387(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_391(iParam0, 2, 1))
		{
			func_390(iParam0, 2, 1);
		}
	}
	else if (func_391(iParam0, 2, 1))
	{
		func_388(iParam0, 2, 1);
	}
}

void func_388(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x73817D396768E4C6(&(Global_91077.f_1286[iParam0]), iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_146() == 0)
		{
			uVar0 = func_134(func_389(iParam0), -1, 0);
			unk_0x73817D396768E4C6(&uVar0, iParam1);
			func_131(func_389(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_99155.f_668[iParam0]), iParam1);
	}
}

int func_389(int iParam0)
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
			return 3640;
			break;
		
		default:
			break;
	}
	return 3717;
}

void func_390(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[iParam0]), iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_146() == 0)
		{
			uVar0 = func_134(func_389(iParam0), -1, 0);
			unk_0x9956FB0E4B50ECB8(&uVar0, iParam1);
			func_131(func_389(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_668[iParam0]), iParam1);
	}
}

int func_391(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB519E5386FBF69E5(Global_91077.f_1286[iParam0], iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_146() == 0)
		{
			return unk_0xB519E5386FBF69E5(func_134(func_389(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_392(var uParam0)
{
	if (func_460(iLocal_49, 2))
	{
		if (!func_57())
		{
			return;
		}
		func_93(1);
	}
	func_62();
	func_511();
	if (func_521())
	{
		func_506(uParam0);
	}
}

void func_393()
{
	if (!unk_0x76B2D234F1895632(iLocal_96))
	{
		if (unk_0x0E6C083BC5101C8B(iLocal_96, unk_0xE7869D5D7816A9B6(), 5f, 5f, 5f, 0, 1, 0) || func_460(iLocal_49, 8192))
		{
			unk_0x8CCCC48313B0F20F(0, 101, 1);
			unk_0x8CCCC48313B0F20F(0, 74, 1);
			unk_0x9F2D8D5B57CF6622(0, 51);
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && unk_0x51374A0BB2871E6E(iLocal_96, 0))
			{
				unk_0x29627C73E3F24F9A(iLocal_96, 50);
				unk_0x4CF93401368188F2(iLocal_96, 5f);
				if (func_460(iLocal_49, 16))
				{
					if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
					{
						unk_0x91F0593A3B8D1A3F(unk_0x3F80C6638E3A1A90(), 1);
						func_5(&iLocal_49, 16);
					}
				}
				iLocal_99 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
				if (unk_0xC45A34912542C4EB(iLocal_99, 0))
				{
					if (unk_0xF50745B40235B5B8(iLocal_96, iLocal_99) && unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_99, 0))
					{
						func_461("***** prostitute IN VEHICLE****** ");
						if (func_460(iLocal_49, 8))
						{
							if (unk_0x05416FE34E390CB7(func_86()))
							{
								if (func_398(iLocal_99))
								{
									unk_0xD011E08910783567(iLocal_96, unk_0xC7C6DDDE84A8E734("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_397(iLocal_99))
								{
									unk_0xD011E08910783567(iLocal_96, unk_0xC7C6DDDE84A8E734("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_396(iLocal_99))
								{
									unk_0xD011E08910783567(iLocal_96, unk_0xC7C6DDDE84A8E734("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else
								{
									unk_0xD011E08910783567(iLocal_96, unk_0xC7C6DDDE84A8E734("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_521())
						{
							unk_0x20BB4B94CC6DDC9A(iLocal_96, 0, 0);
						}
						else
						{
							unk_0x20BB4B94CC6DDC9A(iLocal_96, 1, 1);
						}
						func_175(iLocal_96, 0);
						func_373();
						iLocal_64 = unk_0x9D40BBF80D8F5E8A();
						func_34(&uLocal_107);
						iLocal_295 = 7;
					}
					else
					{
						func_461("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_395(iLocal_96, unk_0xE7869D5D7816A9B6(), 1) > 11f || func_394(20f)) || !unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_99, 0))
				{
					func_108(&uLocal_113);
					if (!unk_0x51374A0BB2871E6E(iLocal_96, 0))
					{
						unk_0xFA2C5C2D054C888E(iLocal_96);
						func_443(0);
						func_461("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_89(15);
					}
				}
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					if (!unk_0xC45A34912542C4EB(iLocal_99, 0))
					{
						iLocal_99 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
					}
					else if (!unk_0xE8C390D56BE854E1(iLocal_96, iLocal_99, 0, 0, 0))
					{
						if (!func_105())
						{
							if (!func_460(iLocal_75, 1))
							{
								func_34(&uLocal_119);
								func_452(&iLocal_75, 1);
							}
							else if (func_7(&uLocal_119) > 20f)
							{
								func_119();
								func_461("prostitute couldn't get into the car");
								iLocal_295 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_460(iLocal_75, 1))
		{
			func_461("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0xFA2C5C2D054C888E(iLocal_96);
			func_89(15);
		}
	}
}

bool func_394(float fParam0)
{
	if (!func_10(&uLocal_113))
	{
		func_34(&uLocal_113);
	}
	return func_114(&uLocal_113) > fParam0;
}

float func_395(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Var3, iParam2);
}

int func_396(int iParam0)
{
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		switch (unk_0xEC3733C97602ACFD(iParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_397(int iParam0)
{
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		switch (unk_0xEC3733C97602ACFD(iParam0))
		{
			case -782720499:
			case -38413156:
				return 1;
				break;
			}
	}
	return 0;
}

int func_398(int iParam0)
{
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		switch (unk_0xEC3733C97602ACFD(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
				return 1;
				break;
			}
	}
	return 0;
}

void func_399(var uParam0)
{
	int iVar0;
	
	if (!func_408(0))
	{
		return;
	}
	if (!func_460(iLocal_49, 16))
	{
		unk_0x91F0593A3B8D1A3F(unk_0x3F80C6638E3A1A90(), 0);
		func_452(&iLocal_49, 16);
	}
	if (!func_10(&uLocal_113))
	{
		func_442(&uLocal_113);
	}
	if (func_114(&uLocal_113) >= 20f || !unk_0x0E6C083BC5101C8B(iLocal_96, unk_0xE7869D5D7816A9B6(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (func_460(iLocal_75, 524288))
		{
			func_108(&uLocal_113);
			iLocal_295 = 6;
		}
		else if (func_407())
		{
			func_34(&uLocal_113);
			func_452(&iLocal_75, 524288);
		}
	}
	func_63(iLocal_96);
	if (((unk_0x0E6C083BC5101C8B(iLocal_96, unk_0xE7869D5D7816A9B6(), 3f, 3f, 3f, 0, 1, 0) || func_460(iLocal_75, 1)) && !func_209(0)) && !func_384())
	{
		if (!unk_0xE8C390D56BE854E1(iLocal_96, iLocal_99, 0, 0, 0))
		{
			if (!func_105())
			{
				if (!func_460(iLocal_75, 1))
				{
					func_34(&uLocal_119);
					func_452(&iLocal_75, 1);
				}
				else if (func_7(&uLocal_119) > 10f)
				{
					func_62();
					unk_0xFA2C5C2D054C888E(iLocal_96);
					func_461("prostitute couldn't get into the car");
					iLocal_295 = 6;
				}
			}
		}
		else
		{
			func_400();
		}
	}
	else if (func_440("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_438();
		if (func_521())
		{
			iVar0 = unk_0xC47857E5E74EA5AF(iLocal_96, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_511();
				func_506(uParam0);
			}
		}
	}
}

void func_400()
{
	char* sVar0;
	
	if (iLocal_295 != 5 && func_345(&sVar0, 0))
	{
		func_403();
		if (func_401(iLocal_74, 1) || unk_0x3F029B262D36DD77(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x489E3B00AFB0758C(unk_0xE7869D5D7816A9B6(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_452(&iLocal_49, 8192);
			func_34(&uLocal_113);
		}
		if (func_460(iLocal_49, 8192))
		{
			func_438();
			Global_25184 = 1;
			func_124("PROSTITUTES_SOLICIT_SCENE");
			func_81("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				if (unk_0xC47857E5E74EA5AF(iLocal_96, -1794415470) != 1 && !unk_0x8AF655CC5761C7A2(iLocal_96, unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 1))
				{
					unk_0x65682335D54DEA1C(iLocal_96, iLocal_99, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_63 = func_44(unk_0xE7869D5D7816A9B6(), 1, 0);
			unk_0x2B0BB514F9140141(sLocal_63);
			sLocal_63 = func_44(unk_0xE7869D5D7816A9B6(), 0, 1);
			unk_0x2B0BB514F9140141(sLocal_63);
			func_34(&uLocal_107);
			iLocal_295 = 5;
		}
	}
}

int func_401(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_402(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x2E6D4A0CE8AD9494(unk_0xBFAE5F9DEC53DAE2()))
	{
		return 0;
	}
	if (func_209(0))
	{
		return 0;
	}
	if (unk_0x2DFE588AA3727FE3())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36319[iVar0 /*19*/] == 1 && Global_36319[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36319[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36319[iVar0 /*19*/].f_5 = 1;
			Global_36319[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36319[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36319[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_402(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36319[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_403()
{
	if (Global_25184)
	{
		if (unk_0xA57007F9A665F322())
		{
			return;
		}
		unk_0x8CCCC48313B0F20F(0, 101, 1);
		unk_0x8CCCC48313B0F20F(0, 74, 1);
		unk_0x9F2D8D5B57CF6622(0, 51);
		if (!func_460(iLocal_49, 8192))
		{
			if (iLocal_74 == -1)
			{
				func_405(&iLocal_74, 5, "PROS_ACCEPT", 0, 0, 0);
			}
		}
	}
	else if (func_404(iLocal_74, 0))
	{
		func_438();
	}
}

int func_404(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_402(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_36319[iVar0 /*19*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36319[iVar0 /*19*/].f_12)
	{
		unk_0xAA8D087D7A86072A(&(Global_36319[iVar0 /*19*/].f_8));
		unk_0x9359E7CC54335EB9(&Global_36436);
		iVar1 = unk_0x360D41DC76A83E6A(0);
	}
	else
	{
		unk_0xAA8D087D7A86072A(&(Global_36319[iVar0 /*19*/].f_8));
		unk_0x9359E7CC54335EB9(&Global_36436);
		unk_0x9359E7CC54335EB9(&(Global_36319[iVar0 /*19*/].f_13));
		iVar1 = unk_0x360D41DC76A83E6A(0);
	}
	return iVar1;
}

void func_405(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xFF6891E21E7FC193(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF478777FFCC96862())
	{
		if (!*iParam0 == -1)
		{
			func_406(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36319[iVar0 /*19*/])
		{
			Global_36319[iVar0 /*19*/] = 1;
			Global_36319[iVar0 /*19*/].f_1 = Global_36442;
			Global_36442++;
			Global_36319[iVar0 /*19*/].f_4 = 0;
			Global_36319[iVar0 /*19*/].f_17 = 0;
			Global_36319[iVar0 /*19*/].f_5 = 0;
			Global_36319[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36319[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36319[iVar0 /*19*/].f_6 = iParam3;
			Global_36319[iVar0 /*19*/].f_18 = unk_0xE3E113B4DB09AAF8();
			Global_36319[iVar0 /*19*/].f_7 = 0;
			Global_36319[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xF6917DE0E003509D(sParam4))
			{
				Global_36319[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36319[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36319[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36319[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_406(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_402(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36319[iVar0 /*19*/])
		{
			Global_36319[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_407()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0xD51CFE69539DB6D8(iLocal_96) || unk_0xAF437D7C802AB246(iLocal_96))
	{
		return 1;
	}
	if (!func_521())
	{
		func_62();
		if (unk_0x51374A0BB2871E6E(iLocal_96, 1))
		{
			unk_0x5EE92E5069683596(iLocal_96, 1193033728, 0);
		}
		else if (func_460(iLocal_49, 4194304))
		{
			iVar0 = unk_0x0ADD324BC46177EF(8, 11);
			unk_0x94026C1D1DB14225(&uVar1);
			unk_0xDCF460AE46C9489C(0, func_61(iLocal_293), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xDCF460AE46C9489C(0, func_61(iLocal_293), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x911ECBCE73F8EC3F(uVar1);
			unk_0xC2C4A3A9FF2FBFFF(iLocal_96, uVar1);
			unk_0x33A90AD8FA327B72(&uVar1);
		}
		return 1;
	}
	if (unk_0x51374A0BB2871E6E(iLocal_96, 1))
	{
		if (unk_0x9B5F286CC8377932(iLocal_96))
		{
			unk_0x5EE92E5069683596(iLocal_96, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0x7CBF8CE5F3C88AEC(iLocal_96);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_460(iLocal_49, 4194304))
			{
				func_62();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (unk_0x9B5F286CC8377932(iLocal_96))
			{
				unk_0xDCF460AE46C9489C(iLocal_96, func_61(iLocal_293), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_55 = 2;
			}
			else
			{
				unk_0x7CBF8CE5F3C88AEC(iLocal_96);
			}
			break;
		
		case 2:
			if (unk_0x9B5F286CC8377932(iLocal_96))
			{
				if (unk_0xC47857E5E74EA5AF(iLocal_96, -2017877118) == 7)
				{
					iVar0 = unk_0x0ADD324BC46177EF(8, 11);
					unk_0xDCF460AE46C9489C(iLocal_96, func_61(iLocal_293), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_55 = 3;
				}
			}
			else
			{
				unk_0x7CBF8CE5F3C88AEC(iLocal_96);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_408(bool bParam0)
{
	if (unk_0x76B2D234F1895632(iLocal_96))
	{
		return 0;
	}
	if (func_460(iLocal_49, 8192))
	{
	}
	if (func_395(iLocal_96, unk_0xE7869D5D7816A9B6(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		return 0;
	}
	if (func_521())
	{
		if (unk_0x34B3E2C1CD1929BF(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0xD4F0FC8FFEDE152B(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_84(unk_0x1141852D07400777(iLocal_96, 1), 1106247680))
	{
		if (!func_460(iLocal_50, 8192) && !unk_0xCFA5146E8AEF8EB0(unk_0xE7869D5D7816A9B6()))
		{
			func_329("PROS_COPS", -1);
			func_452(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_359())
	{
		if (!func_521())
		{
			if ((!iLocal_88 && !Global_98202) && func_410(unk_0xE7869D5D7816A9B6(), 0) == -1)
			{
				func_329("PROS_CAR", -1);
				iLocal_88 = 1;
			}
			func_409();
		}
		else if (!func_494(4096))
		{
			func_329("PROS_CAR", -1);
			func_189(4096);
		}
		return 0;
	}
	return 1;
}

void func_409()
{
	if (unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		return;
	}
	if (!func_460(iLocal_49, 1))
	{
		if (!unk_0xB43400C480010FCA(unk_0xE7869D5D7816A9B6()) && !unk_0xB43400C480010FCA(iLocal_96))
		{
			unk_0x489E3B00AFB0758C(unk_0xE7869D5D7816A9B6(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_452(&iLocal_49, 1);
		}
	}
}

int func_410(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (unk_0x51374A0BB2871E6E(iParam0, iParam1))
		{
			iVar0 = unk_0xF0295FF51F2D7803(iParam0, iParam1);
			if (unk_0xD51CFE69539DB6D8(iVar0))
			{
				if (!unk_0x76B2D234F1895632(iVar0))
				{
					iVar1 = unk_0x8B25BC50161AD227(unk_0x1B2DC87EFB36DF80(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0xD12071DBE8393EC8(iVar0, iVar3))
						{
							if (unk_0xBD6B21D725712BDE(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

void func_411()
{
	if (func_408(0))
	{
		func_400();
		if (unk_0xC47857E5E74EA5AF(iLocal_96, 242628503) == 7 && !func_460(iLocal_49, 8192))
		{
			if (func_66(1))
			{
				func_108(&uLocal_113);
				iLocal_64 = unk_0x9D40BBF80D8F5E8A();
				func_461("prostitute proposition player VEHICLE");
				iLocal_295 = 4;
			}
		}
	}
	else
	{
		unk_0xFA2C5C2D054C888E(iLocal_96);
		func_89(15);
	}
}

void func_412(var uParam0)
{
	if (func_408(0))
	{
		func_400();
		if (unk_0xC47857E5E74EA5AF(iLocal_96, 242628503) == 7 || func_460(iLocal_49, 8192))
		{
			iLocal_295 = 3;
		}
		else if (func_394(20f))
		{
			func_108(&uLocal_113);
			func_443(0);
		}
		else
		{
			func_413(uParam0);
		}
	}
	else
	{
		unk_0xFA2C5C2D054C888E(iLocal_96);
		func_89(15);
	}
}

void func_413(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	var uVar18;
	
	if (!unk_0xD51CFE69539DB6D8(iLocal_99))
	{
		return;
	}
	unk_0x67060D73A7F90F25(unk_0x1B2DC87EFB36DF80(iLocal_99), &Var6, &Var3);
	Var0 = { Var3 - Var6 };
	Var0 = { Var0 / Vector(2f, 2f, 2f) };
	Var9 = { unk_0xBD306D8AFEF4E078(iLocal_99, -(Var0.f_0 + 0.2f), 0f, 0f) };
	Var12 = { unk_0xBD306D8AFEF4E078(iLocal_99, (Var0.f_0 + 0.2f), 0f, 0f) };
	Var15 = { unk_0x1141852D07400777(iLocal_96, 1) };
	if (unk_0x2A488C176D52CCA5(Var15, Var12) < unk_0x2A488C176D52CCA5(Var15, Var9))
	{
		Var9 = { Var12 };
	}
	if ((unk_0xC47857E5E74EA5AF(iLocal_96, -1794415470) != 1 || !func_460(iLocal_49, 8192)) && unk_0xB7A628320EFF8E47(Local_93, Var9) > 0f)
	{
		if (func_521())
		{
			if (!unk_0x28D33422BA6C479D(iLocal_96))
			{
				unk_0x20BB4B94CC6DDC9A(iLocal_96, 0, 1);
			}
			func_423(&uLocal_287, func_61(iLocal_293));
			func_417(uParam0, 1);
			func_414(&uLocal_287, uParam0);
		}
		unk_0x94026C1D1DB14225(&uVar18);
		unk_0x33E113E52A91C5C3(0, Var9.f_0, Var9.f_1, Var9.f_2, 1f, -1, 1f, 8192, 1193033728);
		unk_0xDE6D5CD5475B6C9F(0, unk_0x5D551231E967CD2B(unk_0xE7869D5D7816A9B6(), 31086, 0f, 0f, 0f), 0);
		unk_0x911ECBCE73F8EC3F(uVar18);
		unk_0xC2C4A3A9FF2FBFFF(iLocal_96, uVar18);
		unk_0x33A90AD8FA327B72(&uVar18);
		Local_93 = { Var9 };
	}
}

void func_414(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x356491C12DAD1A37((*uParam0)[iVar0]))
		{
			func_415(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_415(var uParam0, char* sParam1)
{
	func_416(uParam0, 1, -1, sParam1, 0);
}

void func_416(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x04E7E853E31F41A3(sParam3, "NULL"))
					{
						if (unk_0x04E7E853E31F41A3(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x9956FB0E4B50ECB8(uParam0[iVar0 /*18*/], iParam1);
			unk_0x9956FB0E4B50ECB8(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_417(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_419(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_418(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_418(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_419(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*18*/], 30))
		{
			func_420(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_420(var uParam0)
{
	func_421(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_421(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xB519E5386FBF69E5(uParam0, 30))
	{
		switch (func_422(iParam0))
		{
			case 0:
				unk_0x839E9476E54502A2(uParam2);
				break;
			
			case 1:
				unk_0x8B10CC9832827D27(uParam1);
				break;
			
			case 2:
				unk_0xE4036833A4846B4A(uParam1);
				break;
			
			case 3:
				unk_0xA857A54226CCD303(uParam1);
				break;
			
			case 4:
				unk_0xFC8E26A6FE4C2E54(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x4C5B723663B8F630(sParam1);
				break;
			
			case 6:
				unk_0x26512D4F43AB2347();
				break;
			
			case 7:
				unk_0x2508AC68323E213F(uParam2);
				break;
			
			case 8:
				unk_0x3A2938D665EA8A9E(uParam2, unk_0xB519E5386FBF69E5(iParam0, 26));
				break;
			
			case 9:
				unk_0x5736B7F949DFB3D6();
				break;
			
			default:
				break;
		}
	}
}

int func_422(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xB519E5386FBF69E5(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_423(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x356491C12DAD1A37((*uParam0)[iVar0]))
		{
			if (unk_0x04E7E853E31F41A3((*uParam0)[iVar0], uParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_424(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_424(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0x356491C12DAD1A37((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_425(var uParam0)
{
	char* sVar0;
	
	if (func_408(1))
	{
		if (!func_10(&uLocal_113))
		{
			func_442(&uLocal_113);
		}
		func_452(&iLocal_49, 4);
		Global_25185 = 1;
		func_400();
		if (func_441(&uLocal_113, 2f) || func_460(iLocal_49, 8192))
		{
			func_452(&iLocal_49, 2);
			if (func_345(&sVar0, 0))
			{
				unk_0xA6ED3077A967AC63(unk_0xE7869D5D7816A9B6(), 0);
				unk_0xD9404A1491ECECC4(unk_0xE7869D5D7816A9B6(), 0);
				unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), iLocal_96, -1, 2048, 4);
				func_413(uParam0);
				func_452(&iLocal_49, 4);
				Global_25184 = 1;
				iLocal_295 = 2;
			}
			else
			{
				if (unk_0x04E7E853E31F41A3(func_437(&sVar0), "PIM_HHIDCR"))
				{
					func_436(&sVar0, 30000);
					func_434(1);
				}
				else
				{
					func_329(&sVar0, -1);
				}
				if (!unk_0xF6917DE0E003509D(&sVar0) && unk_0x04E7E853E31F41A3(&sVar0, "PROS_NO_MONEY"))
				{
					func_426();
				}
				func_89(0);
				iLocal_296 = 0;
				func_452(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_25184 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_25185 = 0;
	}
}

void func_426()
{
	if (!func_494(64))
	{
		func_427(0, 31, 5);
		func_189(64);
	}
}

void func_427(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x9E18F97D7FF37418())
	{
		return;
	}
	if (unk_0x00AAD79B42B3E036() && func_431(unk_0x3F80C6638E3A1A90(), 1))
	{
		return;
	}
	if (unk_0x6BBF308E0A0F9AD4(2, 199) || unk_0x2E080842BD1CBD38(2, 199))
	{
		return;
	}
	if (unk_0x9449AC6115443388() != 0)
	{
		return;
	}
	if (unk_0xA57007F9A665F322())
	{
		return;
	}
	if (unk_0x4AEDE2EEB4111EC8())
	{
		return;
	}
	if (unk_0xA42A6C736BEA9778())
	{
		return;
	}
	if (func_430())
	{
		return;
	}
	if (!func_428())
	{
		return;
	}
	if (unk_0x00AAD79B42B3E036() || iParam0)
	{
		if (!Global_91077.f_1338 && !unk_0x565848B3396785BC())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2441599 = iParam1;
			Global_91077.f_1338 = 1;
			Global_91077.f_1339 = iParam2;
		}
	}
}

int func_428()
{
	if (func_429())
	{
		return 0;
	}
	if (unk_0x472ED84D47326927() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_429()
{
	return Global_2441047;
}

bool func_430()
{
	return Global_2441706;
}

int func_431(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_432(iParam0))
		{
			return 1;
		}
	}
	if (Global_1586079[iParam0 /*408*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_432(int iParam0)
{
	return func_433(iParam0);
}

bool func_433(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_13.f_1, 0);
}

void func_434(int iParam0)
{
	unk_0x6140FD2938DAA089(3, 21, 200, 0, 0);
	if (iParam0 && !func_435())
	{
		unk_0xCC18B241D266EF14(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

bool func_435()
{
	return Global_2426494.f_2138[0 /*70*/].f_1 != 0;
}

void func_436(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 0, iParam1);
}

char* func_437(char* sParam0)
{
	return sParam0;
}

void func_438()
{
	if (iLocal_74 != -1)
	{
		func_406(&iLocal_74);
	}
}

void func_439(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA6ED3077A967AC63(iParam2, 0);
			}
			else
			{
				unk_0xA6ED3077A967AC63(iParam2, 1);
			}
		}
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7294CF31F80E052D(iParam2, 0);
			}
			else
			{
				unk_0x7294CF31F80E052D(iParam2, 1);
			}
		}
	}
}

int func_440(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

int func_441(var uParam0, float fParam1)
{
	if (func_216(uParam0, fParam1))
	{
		func_108(uParam0);
		return 1;
	}
	return 0;
}

void func_442(var uParam0)
{
	if (!func_10(uParam0))
	{
		func_34(uParam0);
	}
}

void func_443(int iParam0)
{
	bool bVar0;
	
	func_119();
	if (iParam0 || iLocal_72 == 0)
	{
		bVar0 = true;
		if (func_521())
		{
			bVar0 = false;
		}
		func_99(bVar0);
		func_89(14);
	}
	else
	{
		func_99(0);
		func_89(15);
	}
}

int func_444()
{
	if ((((((func_451() || func_450()) || func_449()) || func_448()) || func_445()) || Global_2394609) || Global_2394609.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_445()
{
	if (func_447() || func_446())
	{
		return Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_84 == 8;
	}
	return 0;
}

var func_446()
{
	return Global_2432717.f_609;
}

bool func_447()
{
	return unk_0xB519E5386FBF69E5(Global_2432717.f_2, 11);
}

bool func_448()
{
	return unk_0xB519E5386FBF69E5(Global_2432717, 5);
}

bool func_449()
{
	return unk_0xB519E5386FBF69E5(Global_2432717, 2);
}

bool func_450()
{
	return unk_0xB519E5386FBF69E5(Global_2432717, 20);
}

var func_451()
{
	return Global_2432717.f_573;
}

void func_452(int iParam0, int iParam1)
{
	func_453(iParam0, iParam1);
}

void func_453(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_454()
{
	if (Global_25186)
	{
		return 0;
	}
	if (func_521())
	{
		return 0;
	}
	if (!func_457())
	{
		return 0;
	}
	if (func_455())
	{
		iLocal_296 = 4;
		return 1;
	}
	return 0;
}

int func_455()
{
	int iVar0;
	
	iLocal_98 = unk_0x11EF3EB1EF47F297(unk_0x1141852D07400777(iLocal_96, 1), 15f, 0, 6);
	if (unk_0xD51CFE69539DB6D8(iLocal_98) && !unk_0x76B2D234F1895632(iLocal_98))
	{
		if (unk_0xC45A34912542C4EB(iLocal_98, 0))
		{
			if (func_85(&iLocal_98))
			{
				iLocal_97 = unk_0xBD6B21D725712BDE(iLocal_98, -1);
				if (!iLocal_97 == 0)
				{
					if (func_456(&iLocal_97))
					{
						iVar0 = unk_0x1B2DC87EFB36DF80(iLocal_98);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0x28D33422BA6C479D(iLocal_97))
							{
								unk_0x20BB4B94CC6DDC9A(iLocal_97, 1, 0);
							}
							if (!unk_0x28D33422BA6C479D(iLocal_98))
							{
								unk_0x20BB4B94CC6DDC9A(iLocal_98, 1, 0);
							}
							unk_0x9BEE7E791BC4D38B(iLocal_97, 1);
							unk_0xC602CB510D8B9EAE(iLocal_97, 0);
							unk_0xC602CB510D8B9EAE(iLocal_98, 0);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_98 = 0;
	iLocal_97 = 0;
	return 0;
}

int func_456(int iParam0)
{
	if (!unk_0xAF437D7C802AB246(*iParam0))
	{
		if (unk_0x0C2FCAD5220719B8(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_457()
{
	if (unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()) || unk_0x76B2D234F1895632(iLocal_96))
	{
		return 0;
	}
	return 1;
}

int func_458()
{
	if ((!func_457() || !unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0)) || func_460(iLocal_49, 4096))
	{
		return 0;
	}
	if (func_460(iLocal_49, 32))
	{
		iLocal_296 = 2;
		func_93(2);
		func_461("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_459()
{
	if (!unk_0x76B2D234F1895632(iLocal_96))
	{
		if (!unk_0xF05AC1C00BC1230B(iLocal_96))
		{
			if (unk_0xC47857E5E74EA5AF(iLocal_96, 1805844857) != 1)
			{
				unk_0x9BEE7E791BC4D38B(iLocal_96, 0);
				unk_0x7346544C767CFCBF(iLocal_96, 196628, 1);
				unk_0x8F575FC0497CAD6C(iLocal_96);
				unk_0x4B79E06845D63B96(iLocal_96, unk_0xE7869D5D7816A9B6(), 300f, -1, 1, 0);
				unk_0x8D6671D78D1F569B(iLocal_96, 1);
				func_89(15);
			}
		}
	}
}

bool func_460(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_461(char* sParam0)
{
}

int func_462()
{
	if (unk_0xAF437D7C802AB246(iLocal_96))
	{
		return 0;
	}
	if (unk_0xC47857E5E74EA5AF(iLocal_96, 1435919172) == 1)
	{
		return 0;
	}
	if (unk_0xD8804190DA3C08E5(iLocal_96))
	{
		return 0;
	}
	return 1;
}

int func_463()
{
	switch (iLocal_300)
	{
		case 0:
			if (!func_521())
			{
				func_423(&uLocal_287, func_61(iLocal_293));
				func_414(&uLocal_287, &uLocal_395);
				func_461("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_521())
			{
				unk_0xB05CBEA790398181(1);
				unk_0x64CE3D093CEB0059(1);
				unk_0x7CBF8CE5F3C88AEC(iLocal_96);
			}
			iLocal_300 = 1;
			break;
		
		case 1:
			if (!func_521())
			{
				if (func_464(&uLocal_395))
				{
					func_452(&iLocal_49, 4194304);
					func_461("Moving to PROSTITUTE_INIT_INIT");
					iLocal_300 = 2;
				}
			}
			else if (func_521())
			{
				func_452(&iLocal_49, 4194304);
				func_461("Moving to PROSTITUTE_INIT_INIT");
				iLocal_300 = 2;
			}
			break;
		
		case 2:
			iLocal_297 = 0;
			iLocal_69 = iLocal_297;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_296 = 0;
			iLocal_97 = 0;
			iLocal_98 = 0;
			func_461("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_300 = 3;
			break;
		
		case 3:
			if (!unk_0xAF437D7C802AB246(iLocal_96))
			{
				if (!func_521())
				{
					unk_0x9BEE7E791BC4D38B(iLocal_96, 0);
					unk_0xE6477A3B073FCBD0(iLocal_96, 0);
					func_439(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0x9B5F286CC8377932(iLocal_96))
				{
					unk_0x7CBF8CE5F3C88AEC(iLocal_96);
				}
				else
				{
					unk_0x9BEE7E791BC4D38B(iLocal_96, 0);
					func_439(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					unk_0xE6477A3B073FCBD0(iLocal_96, 0);
					unk_0xFAF3B8EBDDD84CD6(iLocal_96);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_464(var uParam0)
{
	return func_465(uParam0);
}

int func_465(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_466(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_466(var uParam0)
{
	return func_467(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_467(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0xB519E5386FBF69E5(uParam0, 30))
	{
		if (unk_0xB519E5386FBF69E5(iParam0, 29))
		{
			switch (func_422(iParam0))
			{
				case 0:
					return unk_0x5053BF6D5604065B(uParam2);
					break;
				
				case 1:
					return unk_0x2917D5E1CB5CE43A(uParam1);
					break;
				
				case 2:
					return unk_0x05416FE34E390CB7(sParam1);
					break;
				
				case 3:
					return unk_0x0B4924B3F0DADDD1(sParam1);
					break;
				
				case 4:
					return unk_0x08F84BB137ADEE81(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0x729A24E50365D07B(sParam1);
					break;
				
				case 6:
					return unk_0xDF83A33BF4D93E6F(sParam1, unk_0xB519E5386FBF69E5(iParam0, 27));
					break;
				
				case 7:
					return unk_0xD24D76334CB5001C(uParam2);
					break;
				
				case 8:
					return unk_0x4D15A085E079AB18(uParam2);
					break;
				
				case 9:
					return unk_0xD6306290BE90B505();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_468()
{
	if (unk_0xF478777FFCC96862())
	{
		if (func_18() == 0)
		{
			if (func_469(iLocal_96, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!unk_0x4C5CA989AEF3A14C(iLocal_96, 1))
				{
					if (func_521())
					{
						unk_0x20BB4B94CC6DDC9A(iLocal_96, 0, 0);
					}
					else
					{
						unk_0x20BB4B94CC6DDC9A(iLocal_96, 1, 1);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_469(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Param1, iParam4);
}

int func_470()
{
	if (unk_0x4C4A0E641CC945C2(iLocal_96, func_59(0)))
	{
		if (unk_0xF07E123A739385B6(iLocal_96, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0xF07E123A739385B6(iLocal_96, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0x4C4A0E641CC945C2(iLocal_96, func_59(1)))
	{
		if (unk_0xF07E123A739385B6(iLocal_96, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0xF07E123A739385B6(iLocal_96, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_471()
{
	if (unk_0x76B2D234F1895632(iLocal_96))
	{
		return;
	}
	if (iLocal_294 != 3 && iLocal_294 != 4)
	{
		func_472(unk_0xE7869D5D7816A9B6());
	}
	else if (iLocal_294 == 3)
	{
		func_472(iLocal_97);
	}
}

void func_472(int iParam0)
{
	if (unk_0x76B2D234F1895632(iParam0))
	{
		return;
	}
	if (func_521())
	{
		if (!unk_0x9B5F286CC8377932(iParam0))
		{
			unk_0x7CBF8CE5F3C88AEC(iParam0);
			return;
		}
	}
	if (func_395(iParam0, iLocal_96, 1) < 30f)
	{
		if (!unk_0x1022821BCC621056(iLocal_96, iParam0))
		{
			if (func_521())
			{
				if (unk_0x9B5F286CC8377932(iLocal_96))
				{
					unk_0x44C7AD5B54E267EE(iLocal_96);
					unk_0x6A8BCE61F660B8D0(iLocal_96, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0x44C7AD5B54E267EE(iLocal_96);
				unk_0x6A8BCE61F660B8D0(iLocal_96, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0x1022821BCC621056(iLocal_96, iParam0))
	{
		if (func_521())
		{
			if (unk_0x9B5F286CC8377932(iLocal_96))
			{
				unk_0x44C7AD5B54E267EE(iLocal_96);
			}
		}
		else
		{
			unk_0x44C7AD5B54E267EE(iLocal_96);
		}
	}
}

void func_473()
{
	if (Global_25184)
	{
		if (unk_0xC45A34912542C4EB(iLocal_99, 0))
		{
			if (unk_0x8AF655CC5761C7A2(iLocal_96, iLocal_99, 0))
			{
				func_474();
			}
		}
		return;
	}
	if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0)
	{
		return;
	}
	if (unk_0x76B2D234F1895632(iLocal_96) || !unk_0xD51CFE69539DB6D8(iLocal_96))
	{
		if (Global_25188 != unk_0xE3E113B4DB09AAF8() && func_460(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(iLocal_96, 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1)) < Global_25187 || Global_25187 == 0f) && iLocal_296 != 4)
	{
		Global_25187 = unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(iLocal_96, 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1));
		Global_25188 = unk_0xE3E113B4DB09AAF8();
		func_452(&iLocal_49, 32);
	}
	else if (Global_25188 == unk_0xE3E113B4DB09AAF8())
	{
		Global_25187 = unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(iLocal_96, 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_474()
{
	if (func_521())
	{
		if (unk_0x9B5F286CC8377932(iLocal_96))
		{
			unk_0xC31A3F1982C7B12B(iLocal_96, 323, 1);
		}
	}
	else
	{
		unk_0xC31A3F1982C7B12B(iLocal_96, 323, 1);
	}
}

void func_475(var uParam0)
{
	if (!iLocal_295 == 12)
	{
		if (!unk_0x76B2D234F1895632(iLocal_96) && !unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (func_479())
			{
				if (func_521())
				{
					func_116(0);
					unk_0x7346544C767CFCBF(iLocal_96, 196624, 1);
					if (!unk_0x28D33422BA6C479D(iLocal_96))
					{
						unk_0x20BB4B94CC6DDC9A(iLocal_96, 1, 0);
					}
					unk_0x4B79E06845D63B96(iLocal_96, unk_0xE7869D5D7816A9B6(), 300f, -1, 0, 0);
					unk_0x8D6671D78D1F569B(iLocal_96, 1);
					unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
					func_511();
					func_506(uParam0);
				}
				else
				{
					func_89(12);
				}
			}
			else if (unk_0x915685CA559C211B(iLocal_96, unk_0xE7869D5D7816A9B6(), 1))
			{
				iLocal_67++;
				if (iLocal_67 >= 2)
				{
					func_461("prostitute CLASSED AS UNDER ATTACK");
					iLocal_295 = 12;
				}
				else
				{
					func_461("prostitute BEEN HIT BY PLAYER");
					unk_0x29FD5B1A4BA65801(iLocal_96);
				}
			}
			else if (func_477())
			{
				func_476();
				iLocal_295 = 12;
			}
		}
	}
}

void func_476()
{
	if (unk_0xAF437D7C802AB246(iLocal_96))
	{
		return;
	}
	unk_0x6C192F2018742EC1(iLocal_96);
	unk_0x489E3B00AFB0758C(iLocal_96, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_477()
{
	var uVar0;
	
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		return 0;
	}
	if (!func_478())
	{
		return 0;
	}
	uVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
	if (!unk_0xC45A34912542C4EB(uVar0, 0))
	{
		return 0;
	}
	if (unk_0xCFA5146E8AEF8EB0(unk_0xE7869D5D7816A9B6()))
	{
		return unk_0xB24099FCD7E05D26(iVar0);
	}
	return 0;
}

int func_478()
{
	if (!func_521())
	{
		return 1;
	}
	else if (unk_0xD51CFE69539DB6D8(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
	{
		if (unk_0x49D76889EB33F5C6(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
		{
			if (unk_0xBD6B21D725712BDE(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), -1) == unk_0xE7869D5D7816A9B6())
			{
				if (unk_0x9B5F286CC8377932(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
				{
					if (!unk_0x28D33422BA6C479D(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
					{
						unk_0x20BB4B94CC6DDC9A(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0, 0);
					}
					return 1;
				}
				else
				{
					unk_0x7CBF8CE5F3C88AEC(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0));
				}
			}
		}
		else
		{
			unk_0x8AC7CE21496616AD(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0));
		}
	}
	return 0;
}

int func_479()
{
	struct<3> Var0;
	
	if (!func_460(iLocal_49, 4096))
	{
		if (func_395(iLocal_96, unk_0xE7869D5D7816A9B6(), 1) < 30f)
		{
			Var0 = { unk_0x1141852D07400777(iLocal_96, 1) };
			if ((((((unk_0xF5C8E39FBDE0F24C(86, Var0, 30f) || unk_0xF5C8E39FBDE0F24C(89, Var0, 30f)) || unk_0xF5C8E39FBDE0F24C(88, Var0, 30f)) || unk_0xF5C8E39FBDE0F24C(102, Var0, 30f)) || unk_0xF5C8E39FBDE0F24C(114, Var0, 30f)) || (unk_0xF5C8E39FBDE0F24C(112, Var0, 30f) && !func_521())) || unk_0xD0C9DCB982CB2D78(unk_0xE7869D5D7816A9B6()))
			{
				if (!func_521())
				{
					unk_0x9BEE7E791BC4D38B(iLocal_96, 0);
				}
				func_452(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_480()
{
	if ((unk_0xD51CFE69539DB6D8(iLocal_96) && !unk_0x76B2D234F1895632(iLocal_96)) && !unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (func_521())
		{
			if (func_485(unk_0x3F80C6638E3A1A90(), 0))
			{
				func_461("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x51374A0BB2871E6E(iLocal_96, 0))
				{
					func_99(0);
				}
				func_89(15);
				return 0;
			}
		}
		if (!unk_0xAF437D7C802AB246(iLocal_96))
		{
			if (!unk_0x51374A0BB2871E6E(iLocal_96, 0))
			{
				if (!func_482(9))
				{
					if (!unk_0x76B2D234F1895632(iLocal_96) && !unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
					{
						if (unk_0x0E6C083BC5101C8B(iLocal_96, unk_0xE7869D5D7816A9B6(), 100f, 100f, 50f, 0, 1, 0))
						{
							return 1;
						}
						else
						{
							func_461("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_89(15);
						}
					}
				}
				else if (!(func_481() || unk_0xF478777FFCC96862()))
				{
					func_461("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_89(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_295 == 0)
			{
				func_461("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_482(9) && !func_482(5))
			{
				return 1;
			}
			else if (!(func_481() || (unk_0xF478777FFCC96862() && !func_385())))
			{
				func_461("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_99(0);
				func_89(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			func_461("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0xD51CFE69539DB6D8(iLocal_96))
	{
		func_461("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0x76B2D234F1895632(iLocal_96))
	{
		func_461("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		func_461("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_481()
{
	if (unk_0xFF6891E21E7FC193(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_482(int iParam0)
{
	if (Global_35619 == 15)
	{
		return 0;
	}
	if (func_483(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_483(int iParam0)
{
	return func_484(iParam0, Global_35619);
}

int func_484(int iParam0, int iParam1)
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

int func_485(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_201(iParam0, 1, 1))
	{
		iVar0 = unk_0x91B73D905EA38F6B(iParam0);
		if (unk_0x51374A0BB2871E6E(iVar0, iParam1))
		{
			uVar3 = unk_0xF0295FF51F2D7803(iVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = unk_0x0F810277E61B87AE(iVar1);
				if (func_201(iVar2, 1, 1))
				{
					if (unk_0x91B73D905EA38F6B(iVar2) != iVar0)
					{
						if (unk_0x8AF655CC5761C7A2(unk_0x91B73D905EA38F6B(iVar2), uVar3, iParam1))
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

void func_486()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		iVar1 = unk_0xCEDD7FE4546BFC4F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x0586E3C97DD61FE4(1, iVar0, &Var2, 2);
			if (Var2.f_0 == 236)
			{
				if (Var2.f_1 == unk_0x3F80C6638E3A1A90())
				{
					func_189(128);
				}
			}
		}
		iVar0++;
	}
}

void func_487()
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return;
	}
	if (!unk_0x0D47370227E1A847())
	{
		return;
	}
	if (unk_0xD6E896F8239D8EF2(false) != 1)
	{
		if (func_488(1, 0, 1))
		{
			if (unk_0xC874D419693D3A82(0) <= 1)
			{
				unk_0xB05CBEA790398181(1);
			}
		}
	}
}

bool func_488(int iParam0, bool bParam1, bool bParam2)
{
	return func_489(0, iParam0, 1, bParam1, bParam2);
}

int func_489(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB519E5386FBF69E5(Global_1348588, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_493(iParam0) - func_492(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_492(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_493(iParam0) - func_491(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_492(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_493(iParam0) - func_492(iParam0, 1));
		}
		if (!bParam4 && Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/] != 3)
		{
			iVar1 = (iVar1 - func_490(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_490(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_491(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348588.f_1;
			break;
		
		case 1:
			return Global_1348588.f_2;
			break;
		
		case 2:
			return Global_1348588.f_3;
			break;
	}
	return 0;
}

int func_492(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x3F80C6638E3A1A90();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x0D47370227E1A847())
			{
				return Global_2416794[iVar0 /*303*/].f_207;
			}
			else
			{
				return unk_0xD6E896F8239D8EF2(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x0D47370227E1A847())
			{
				return Global_2416794[iVar0 /*303*/].f_208;
			}
			else
			{
				return unk_0xF3BCBCADB5D1D2A5(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x0D47370227E1A847())
			{
				return Global_2416794[iVar0 /*303*/].f_209;
			}
			else
			{
				return unk_0xBD5D7DEF087C4F66(!bParam1);
			}
			break;
	}
	return 0;
}

int func_493(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348596;
			break;
		
		case 1:
			return Global_1348597;
			break;
		
		case 2:
			return Global_1348598;
			break;
	}
	return 0;
}

bool func_494(int iParam0)
{
	return func_460(iLocal_52, iParam0);
}

void func_495(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0x9698C5C67A3BBE47() >= (uParam0->f_272 + uParam0->f_273) || unk_0xB519E5386FBF69E5(Global_91025.f_20, 2)) || unk_0xB519E5386FBF69E5(Global_91025.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*18*/], 29))
					{
						func_496(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0x9698C5C67A3BBE47();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_496(var uParam0)
{
	func_497(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_497(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xB519E5386FBF69E5(*uParam0, 30))
	{
		switch (func_422(*uParam0))
		{
			case 0:
				unk_0x801429C020C467BA(uParam2);
				break;
			
			case 1:
				unk_0x2B0BB514F9140141(uParam1);
				break;
			
			case 2:
				unk_0x5FC34204E17B27E0(sParam1);
				break;
			
			case 3:
				unk_0xDF7D4AE1A984CEF7(sParam1, unk_0xB519E5386FBF69E5(*uParam0, 28));
				break;
			
			case 4:
				unk_0xDBDFBE5906702D9E(uParam2, sParam1);
				break;
			
			case 5:
				unk_0xCBEB830866A6963D(sParam1);
				break;
			
			case 6:
				unk_0xDF83A33BF4D93E6F(sParam1, unk_0xB519E5386FBF69E5(*uParam0, 27));
				break;
			
			case 7:
				unk_0x87D6D32DFD3B8BD1(uParam2);
				break;
			
			case 8:
				unk_0x36A3D6FBED10EF81(sParam1, uParam2);
				break;
			
			case 9:
				unk_0xDF14478656A9018C();
				break;
			
			default:
				break;
		}
		unk_0x9956FB0E4B50ECB8(uParam0, 29);
	}
}

void func_498(int iParam0)
{
	if (func_460(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_499()
{
	func_2(0);
	if (unk_0xD51CFE69539DB6D8(iLocal_96))
	{
		if (!unk_0x76B2D234F1895632(iLocal_96))
		{
			func_2(1);
		}
		else
		{
			func_461("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_461("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()) || unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		func_2(0);
		func_461("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_500(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD0642B91C061B527();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_504();
			}
			else
			{
				return 0;
			}
		}
		if (!func_503())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x00AAD79B42B3E036())
				{
					if (!bParam2)
					{
						func_504();
					}
					else
					{
						return 0;
					}
				}
				if (func_502())
				{
					if (!bParam2)
					{
						func_504();
					}
					else
					{
						return 0;
					}
				}
				if (func_501(155))
				{
					if (!bParam2)
					{
						func_504();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAB63AB6154522A4E())
			{
				if (!bParam2)
				{
					func_504();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD0642B91C061B527();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			if (!bParam2)
			{
				func_504();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAB63AB6154522A4E())
	{
		if (!bParam2)
		{
			func_504();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_501(int iParam0)
{
	if (unk_0x957F04289F04E160(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_502()
{
	return Global_2432717.f_568;
}

bool func_503()
{
	return Global_1315884;
}

void func_504()
{
	unk_0x52F20802944F8DCE();
}

void func_505()
{
	func_189(1);
}

void func_506(var uParam0)
{
	func_509();
	if (func_42(0, 1))
	{
		unk_0x1B8E0930AB96444B(1);
	}
	if (!unk_0xAF437D7C802AB246(iLocal_96))
	{
		if (unk_0x28D33422BA6C479D(iLocal_96))
		{
			if ((func_521() && unk_0xC47857E5E74EA5AF(iLocal_96, 1805844857) != 1) && unk_0xC47857E5E74EA5AF(iLocal_96, -251125078) != 1)
			{
				unk_0x5EE92E5069683596(iLocal_96, 1193033728, 0);
				if (unk_0x9B5F286CC8377932(iLocal_96))
				{
					unk_0x8D6671D78D1F569B(iLocal_96, 1);
				}
				if (unk_0x145125122E838B28(iLocal_96))
				{
					unk_0x506D42CB68AE4EA5(&iLocal_96);
				}
				unk_0x6C192F2018742EC1(iLocal_96);
			}
			else
			{
				unk_0x506D42CB68AE4EA5(&iLocal_96);
				unk_0x6C192F2018742EC1(iLocal_96);
			}
		}
	}
	iLocal_49 = 0;
	if (func_460(iLocal_49, 64))
	{
		Global_25186 = 0;
	}
	if (!unk_0xAF437D7C802AB246(iLocal_97))
	{
		unk_0xFA2C5C2D054C888E(iLocal_97);
	}
	iLocal_97 = 0;
	iLocal_296 = 0;
	if (func_460(iLocal_49, 2048))
	{
		unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
	}
	func_5(&iLocal_49, 2048);
	func_508();
	if (func_521())
	{
		if (unk_0x17FCDE390FBC3959(uLocal_85))
		{
			unk_0x1FDB9F077F1FC25C(uLocal_85);
		}
	}
	iLocal_98 = 0;
	func_509();
	func_507();
	Global_25187 = 0f;
	unk_0x29697396B8AA6E4F();
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		unk_0x91F0593A3B8D1A3F(unk_0x3F80C6638E3A1A90(), 1);
	}
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (func_494(256))
		{
			unk_0x497AFDFE79EEFE4F(unk_0xE7869D5D7816A9B6(), 6, iLocal_86, iLocal_87, 0);
			func_189(1024);
		}
	}
	if (func_440("PROS_ACCEPT") && !Global_25184)
	{
		unk_0x1D208E4A4E1D4FFE(1);
	}
	if (Global_25188 == unk_0xE3E113B4DB09AAF8())
	{
		Global_25184 = 0;
	}
	func_417(uParam0, 0);
	if (func_521())
	{
		func_189(2048);
	}
	else
	{
		unk_0x52F20802944F8DCE();
	}
}

void func_507()
{
}

void func_508()
{
	Global_2426494.f_615.f_10 = 0;
}

void func_509()
{
}

void func_510(bool bParam0)
{
	if (!unk_0xAF437D7C802AB246(iLocal_96))
	{
		if (unk_0x51374A0BB2871E6E(iLocal_96, 0))
		{
			if (unk_0xC47857E5E74EA5AF(iLocal_96, -828834893) != 1)
			{
				unk_0xCD7A5BCC47D00FB2(iLocal_96, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_521())
			{
				if (unk_0x28D33422BA6C479D(iLocal_96))
				{
					if (unk_0x145125122E838B28(iLocal_96))
					{
						if (unk_0xB5A45FB150DB6127(unk_0x5BD89D856D2E7C36(iLocal_96)))
						{
							unk_0x8D6671D78D1F569B(iLocal_96, 1);
						}
					}
				}
			}
			else
			{
				unk_0x8D6671D78D1F569B(iLocal_96, 1);
			}
		}
	}
}

void func_511()
{
	if (!func_521())
	{
		if (iLocal_295 == 11 || iLocal_295 == 13)
		{
			return;
		}
	}
	if (!unk_0x76B2D234F1895632(iLocal_96))
	{
		if (!unk_0xF05AC1C00BC1230B(iLocal_96))
		{
			func_89(0);
			iLocal_294 = 1;
		}
		if (func_521())
		{
			if (unk_0x9B5F286CC8377932(iLocal_96))
			{
				unk_0x9BEE7E791BC4D38B(iLocal_96, 0);
				unk_0x26CBEA3336FB494C(iLocal_96);
			}
		}
		else
		{
			unk_0x26CBEA3336FB494C(iLocal_96);
		}
		unk_0xD1AE9D189CB65173(iLocal_96, 0);
	}
	if (unk_0xC45A34912542C4EB(iLocal_99, 0) && !unk_0x76B2D234F1895632(iLocal_99))
	{
		if (func_521())
		{
			if (unk_0x9B5F286CC8377932(iLocal_99))
			{
				if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_8 <= 0 && !unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 11))
				{
					unk_0xB356E3F8BEC5CE2B(iLocal_99, 0);
					unk_0x01A5F35B4016EFD8(iLocal_99, 3);
					unk_0x922FEC7F32BC972D(iLocal_99, 0);
				}
				unk_0x742E15B6989E356E(iLocal_99, 1, 0);
			}
		}
		else
		{
			unk_0xB356E3F8BEC5CE2B(iLocal_99, 0);
			unk_0x01A5F35B4016EFD8(iLocal_99, 3);
			unk_0x922FEC7F32BC972D(iLocal_99, 0);
		}
	}
	func_520(iLocal_76);
	func_520(iLocal_77);
	func_520(iLocal_78);
	func_520(iLocal_79);
	func_520(iLocal_80);
	func_520(iLocal_81);
	func_520(iLocal_82);
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x44C7AD5B54E267EE(unk_0xE7869D5D7816A9B6());
		if (func_521() && iLocal_297 != 3)
		{
			unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
		}
		unk_0xA6ED3077A967AC63(unk_0xE7869D5D7816A9B6(), 1);
		unk_0xD9404A1491ECECC4(unk_0xE7869D5D7816A9B6(), 1);
	}
	if (func_460(iLocal_49, 2048))
	{
		unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
	}
	func_5(&iLocal_49, 2048);
	unk_0x5D1D27F205B40569(2, 19, 1);
	unk_0x5D1D27F205B40569(2, 37, 1);
	func_508();
	iLocal_296 = 0;
	if (func_460(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_25184 = 0;
		Global_25185 = 0;
	}
	if (func_460(iLocal_49, 8))
	{
		if (unk_0x05416FE34E390CB7(func_86()))
		{
			unk_0xE4036833A4846B4A(func_86());
		}
	}
	func_519();
	func_438();
	if (((func_440("PROS_ACCEPT") || func_440("PROS_CAM_TOG")) || func_440("PROS_RESPONSE")) || func_440("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0x1D208E4A4E1D4FFE(1);
	}
	func_344(0);
	unk_0xA8010B7497A9230B(1);
	if (func_460(iLocal_49, 8))
	{
		if (unk_0x05416FE34E390CB7(func_86()))
		{
			unk_0xE4036833A4846B4A(func_86());
		}
	}
	func_124("PROSTITUTES_SOLICIT_SCENE");
	unk_0x26512D4F43AB2347();
	func_116(0);
	unk_0x1B8E0930AB96444B(1);
	func_512();
	if (func_521())
	{
		if (func_494(2))
		{
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				if (unk_0x49D76889EB33F5C6(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
				{
					if (unk_0x9B5F286CC8377932(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
					{
						unk_0x21E18A9362DEB4CD(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0);
						unk_0x18F90CF5D756C783(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 1);
					}
				}
			}
			else if (unk_0x49D76889EB33F5C6(iLocal_99))
			{
				if (unk_0x9B5F286CC8377932(iLocal_99))
				{
					unk_0x18F90CF5D756C783(iLocal_99, 1);
				}
				else
				{
					unk_0x7CBF8CE5F3C88AEC(iLocal_99);
					unk_0x18F90CF5D756C783(iLocal_99, 1);
				}
			}
		}
	}
	func_181(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_512()
{
	struct<8> Var0[2];
	struct<6> Var17[2];
	
	if (!func_518())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var17[0 /*6*/]), "SP", 24);
	StringCopy(&(Var17[1 /*6*/]), "????", 24);
	if (func_516(275, &Var17, &Var0, 2, -1, 0, 0))
	{
		unk_0x22785BD1FEF81AE7(131, func_515(), 0f);
		unk_0x22785BD1FEF81AE7(117, func_514(), 0f);
		unk_0x22785BD1FEF81AE7(118, func_513(), 0f);
	}
}

int func_513()
{
	return iLocal_46;
}

int func_514()
{
	return iLocal_45;
}

int func_515()
{
	return 0;
}

int func_516(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0xC8FFCE1611C4F73B())
	{
	}
	if ((!unk_0xCF6F23F6AE7795A2() && (unk_0xEF26821E74E58FDA() || !unk_0x1A8078D7630DABE2())) && unk_0xCE8A51232A14F3FD())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xAB7778782580F313())
			{
				Var69 = { func_517(unk_0x3F80C6638E3A1A90()) };
				if (unk_0x89398BAF58AA485C(&Var69))
				{
					if (unk_0xB486161F8A7A8AFB(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x00AAD79B42B3E036() && Global_2439374.f_3)
			{
				unk_0xF248832719C65E10(&Var0, &(Global_1704758.f_10));
			}
			else
			{
				unk_0xE58AD78E35CB23DB(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xCF6F23F6AE7795A2())
	{
	}
	if (!unk_0xEF26821E74E58FDA())
	{
	}
	if (unk_0x1A8078D7630DABE2())
	{
	}
	if (!unk_0xCE8A51232A14F3FD())
	{
	}
	return 0;
}

struct<13> func_517(int iParam0)
{
	struct<13> Var0;
	
	unk_0xD82458461B583D5D(iParam0, &Var0, 13);
	return Var0;
}

int func_518()
{
	if ((unk_0xC8FFCE1611C4F73B() && unk_0x6E2954F2B1919678()) && unk_0x472ED84D47326927())
	{
		return 1;
	}
	return 0;
}

void func_519()
{
	if (func_460(iLocal_49, 128))
	{
		func_387(39, 0);
		func_387(40, 0);
		func_387(41, 0);
		func_387(42, 0);
		func_387(43, 0);
		func_387(44, 0);
		func_5(&iLocal_49, 128);
	}
}

void func_520(int iParam0)
{
	if (func_521())
	{
		if (func_210(iParam0))
		{
			unk_0x7C10A814ABC7AD2E(iParam0);
		}
	}
}

bool func_521()
{
	return func_494(1);
}

bool func_522(int iParam0)
{
	return Global_35619 == iParam0;
}

int func_523(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_432(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1586079[iParam0 /*408*/] == 2 || Global_1586079[iParam0 /*408*/] == 1) || Global_1586079[iParam0 /*408*/] == 0) || Global_1586079[iParam0 /*408*/] == 3) || Global_1586079[iParam0 /*408*/] == 8)
	{
		return 1;
	}
	return 0;
}

