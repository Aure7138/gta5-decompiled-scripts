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
	var uLocal_395 = 0;
	var uLocal_396 = 15;
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
	var uLocal_668 = 0;
	var uLocal_669 = 1;
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
		unk_0xA4E0D8FD51F2A6F7();
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_524(unk_0xA34E7C2A5118D638(), 1))
		{
			unk_0xA4E0D8FD51F2A6F7();
		}
	}
	if (func_523(13) || func_523(14))
	{
		unk_0xA4E0D8FD51F2A6F7();
	}
	if (!func_522() && !unk_0xBBAE3E0C60A8AD4B())
	{
		if (unk_0x24862A9CDC8F8874(35))
		{
			func_512();
			func_511(1);
			func_507(&uLocal_396);
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	iLocal_96 = uScriptParam_0;
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		func_506();
		unk_0x170190A515596E3F(2, 0, unk_0xA34E7C2A5118D638());
		func_501(0, -1, 0);
		unk_0x6ECAEE4901F465A1(0);
	}
	func_500();
	func_499(128);
	while (iLocal_62)
	{
		bVar0 = true;
		func_496(&uLocal_396);
		if (func_522())
		{
			if (func_495(1024))
			{
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
				{
					if (unk_0x6EAE252212D4D53F(unk_0xC8B93D94F8954288()) && unk_0x8D5BFC55CE180425(unk_0xC8B93D94F8954288()))
					{
						func_499(1024);
						unk_0xD18E3053ACCB190F(unk_0xC8B93D94F8954288());
					}
				}
			}
			if (!func_495(1024) && func_495(2048))
			{
				unk_0xA4E0D8FD51F2A6F7();
			}
			if (!unk_0x95CCECA3948CFE7B(iLocal_96))
			{
				bVar0 = false;
			}
			else if (!unk_0xFE7BCFB02217DCDF(iLocal_96))
			{
				bVar0 = false;
				unk_0xF892FC88DC9DD7F8(iLocal_96);
			}
		}
		if (!func_522() || !func_495(2048))
		{
			func_488();
			if (func_522())
			{
				func_487();
				if (func_495(128))
				{
					iLocal_62 = 0;
				}
			}
			if (func_481())
			{
				if (bVar0)
				{
					if (iLocal_294 > 0)
					{
						func_476(&uLocal_396);
					}
					func_474();
					func_472();
					switch (iLocal_294)
					{
						case 0:
							if (iLocal_293 == -1)
							{
								if (unk_0x393E712335C82C36(iLocal_96))
								{
									iLocal_293 = func_471();
								}
								else if (func_469())
								{
									iLocal_293 = 4;
								}
							}
							else if (func_464())
							{
								if (func_463())
								{
									if (func_522())
									{
										if (unk_0xFE7BCFB02217DCDF(iLocal_96))
										{
											unk_0xFCA99C3640D1F1B5(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											unk_0xF892FC88DC9DD7F8(iLocal_96);
										}
									}
									else
									{
										unk_0xFCA99C3640D1F1B5(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_294 = 1;
								func_462("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_461(iLocal_49, 4096))
							{
								func_460();
							}
							if (func_459())
							{
								iLocal_294 = 2;
								func_462("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_455())
							{
								iLocal_294 = 3;
								func_453(&iLocal_49, 64);
								Global_25267 = 1;
								func_462("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_91(&uLocal_396);
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
	if (func_461(iLocal_49, 2))
	{
	}
	func_462(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_512();
	func_507(&uLocal_396);
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
		if (unk_0x5D42322C7DB888D0(iLocal_98, 0))
		{
			if (!unk_0x2DC9BA2299B45EA6(iLocal_97))
			{
				if (!unk_0x0C7EC810080F0459(iLocal_97, iLocal_98, 0))
				{
					func_90();
				}
			}
		}
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_97) || unk_0xB6900B8CB0ABBD2B(iLocal_97))
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
			if (!unk_0x2DC9BA2299B45EA6(iLocal_97))
			{
				if (unk_0x090C65D5190A249D(iLocal_96, 242628503) == 7)
				{
					iLocal_65 = unk_0x693EBB4F13506457();
					iLocal_66 = (iLocal_65 - iLocal_64);
					if (iLocal_66 >= 10000 || !unk_0x5534579797ACFD77(iLocal_96, iLocal_97, 12f, 12f, 5f, 0, 1, 0))
					{
						func_462("prostitute WAITING TO END");
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
			if (!unk_0x41D85B8EF93F7B19(func_52(0), func_52(1), func_52(2), func_52(3)))
			{
				unk_0x45A1CC0823F31402(func_52(0), func_52(1), func_52(2), func_52(3));
			}
			else
			{
				unk_0xAC59C2795E065D27(iLocal_97, iLocal_98, Local_90, (unk_0x6A2F6A048580765F(iLocal_98) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_295 = 8;
			}
			break;
		
		case 8:
			if (unk_0xB7A628320EFF8E47(Local_90, unk_0x44C17CCB85A88A1F(iLocal_96, 1)) < 25f && unk_0x090C65D5190A249D(iLocal_97, -1817882002) != 1)
			{
				iLocal_297 = unk_0x531444754C426278(1, 3);
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
			if (unk_0x95CCECA3948CFE7B(iLocal_96) && unk_0x95CCECA3948CFE7B(iLocal_98))
			{
				if (unk_0x0C7EC810080F0459(iLocal_96, iLocal_98, 0))
				{
					if (!unk_0xB6900B8CB0ABBD2B(iLocal_97))
					{
						if (unk_0x090C65D5190A249D(iLocal_97, -828834893) != 1)
						{
							unk_0xE5F6BE3F8E937ACE(iLocal_96, 0, 16842752);
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
			unk_0xF3CDD0D4E5CF19C1(iLocal_96, 0.916f);
			if (func_36(iLocal_97))
			{
				func_34(&uLocal_119);
				iLocal_302 = 1;
			}
			break;
		
		case 1:
			if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), unk_0x44C17CCB85A88A1F(iLocal_96, 0)) < 22500f)
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
				if (unk_0x090C65D5190A249D(iLocal_96, 242628503) == 7)
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
			return (func_8(unk_0xDCC86F723E82125E(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		iVar0 = unk_0x2AA13A84EE2D3B24();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
}

bool func_9(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 2);
}

bool func_10(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 1);
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
					func_25();
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
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
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
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_16())
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
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
	unk_0xB518E9C8553B1D2B(0);
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
	unk_0x77621132305B133B(&Global_2284, 16);
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

void func_17()
{
	if (func_523(14))
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
		Global_14413 = func_18();
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

int func_18()
{
	func_19();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_19()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_22(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_21(unk_0xC8B93D94F8954288());
			if (func_20(iVar0) && (!func_523(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_20(Global_100976.f_1770.f_539.f_3549))
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

bool func_20(int iParam0)
{
	return iParam0 < 3;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
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
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

void func_25()
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
		if (!unk_0x56C51911950A223F(unk_0x6D5BB810CC209E15(iParam0), unk_0x44C17CCB85A88A1F(iParam0, 1), 1))
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
	
	if (unk_0x5D42322C7DB888D0(*uParam0, 0))
	{
		Var0 = { 0f, 0f, -0.1f };
		Var3 = { 0f, 0f, 0f };
		unk_0x3A2304A561B7D162(*uParam0, 1, Var0, Var3, 0, 1, 1, 1, 1, 0);
	}
}

bool func_31()
{
	return unk_0x1E13AB82EFC29B1D(iLocal_96, 876132797);
}

void func_32()
{
	unk_0x5B53B03A14798328();
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
	uParam0->f_1 = (func_8(unk_0xDCC86F723E82125E(*uParam0, 4)) - fParam1);
	unk_0x59A0729D503ED758(uParam0, 1);
	unk_0x77621132305B133B(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_36(int iParam0)
{
	if (unk_0xB8A06E7E729EED0A(sLocal_63))
	{
		sLocal_63 = func_44(iParam0, 0, 0);
		return 0;
	}
	if (!unk_0xF9B86DC1728F1339(sLocal_63))
	{
		return 0;
	}
	else
	{
		func_37(iLocal_96, func_43(), 1, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_72) / 2f)))));
		if (iParam0 == unk_0xC8B93D94F8954288())
		{
			func_37(iParam0, func_43(), 0, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_72) / 2f)))));
		}
		func_462("anim_dict has loaded, triggering anims?");
		func_453(&iLocal_49, 512);
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
	
	if (unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		return;
	}
	iVar0 = unk_0x275BEBE583A163B5(iParam0, 1);
	if (!unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		return;
	}
	iLocal_48 = unk_0xB548555C3ED3CEBE();
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1) && func_42(0, 1))
	{
		if (iLocal_48 != 4)
		{
			unk_0xDF9B2BE9FFD8B8B5(4);
		}
	}
	bVar1 = func_41(iVar0);
	sVar2 = func_44(iParam0, 0, 0);
	if (!unk_0xF9B86DC1728F1339(sVar2))
	{
		unk_0xC0E8B67A4385D37D(sVar2);
	}
	else
	{
		unk_0x3E2E609450787FFE(&uVar3);
		unk_0x5323F488E6A1B660(0, sVar2, func_38(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x5323F488E6A1B660(0, sVar2, func_38(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x5323F488E6A1B660(0, sVar2, func_38(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x5323F488E6A1B660(0, sVar2, func_38(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x5323F488E6A1B660(0, sVar2, func_38(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x939BC11172AA1303(uVar3);
		unk_0xBFE865E3B513451B(iParam0, uVar3);
		unk_0xA9351C9309E03069(&uVar3);
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
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		switch (unk_0x38E553FFEC2B7BCC(iParam0))
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
			case 1837596901:
			case 2013836096:
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
		bVar0 = unk_0xA9B6C2A8F9FE269A(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xA9B6C2A8F9FE269A(1) == 4;
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
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		uVar0 = unk_0x275BEBE583A163B5(iParam0, 1);
		if (unk_0x5D42322C7DB888D0(uVar0, 0))
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
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		if (unk_0xB03AB89ABCAB2B4E(iParam0) || !func_51(iParam0, iLocal_98, -1))
		{
			Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
			unk_0xF36EA652E4A6CED0(iParam0, 196624, 1);
			if (func_50())
			{
				unk_0xFF45E8546235908A(iParam0, Var0, 300f, -1, 1, 1);
			}
			else if (!unk_0xB6900B8CB0ABBD2B(unk_0x2BE02B2E8F70BEEC(iParam0)))
			{
				unk_0x45EF2026AF681474(iParam0, unk_0x2BE02B2E8F70BEEC(iParam0), 0, 16);
			}
			else
			{
				unk_0xFF45E8546235908A(iParam0, Var0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}

int func_50()
{
	if (unk_0xDCC86F723E82125E(unk_0x531444754C426278(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xB6900B8CB0ABBD2B(iParam0) && !unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		if (unk_0x465DC424E3211BBE(iParam0, iParam1))
		{
			if (unk_0xC0ADAF0814175B68(iParam1, iParam2) == iParam0)
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
	
	Var0 = { unk_0x44C17CCB85A88A1F(iLocal_96, 1) };
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
	if (!unk_0x2DC9BA2299B45EA6(iLocal_97))
	{
		if (unk_0x5D42322C7DB888D0(iLocal_98, 0))
		{
			if (unk_0x0C7EC810080F0459(iLocal_97, iLocal_98, 0))
			{
				if (unk_0x090C65D5190A249D(iLocal_96, 242628503) == 1)
				{
					if (unk_0xCD88F418C186FA19(iLocal_96) > 0)
					{
						if (unk_0x0C7EC810080F0459(iLocal_96, iLocal_98, 0))
						{
							func_462("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0x3E2E609450787FFE(&uLocal_101);
							unk_0x84D04CB0E2B93F55(0, iLocal_98, 10f, 786603);
							unk_0x939BC11172AA1303(uLocal_101);
							unk_0xBFE865E3B513451B(iLocal_97, uLocal_101);
							unk_0xA9351C9309E03069(&uLocal_101);
							Local_90 = { func_54(unk_0x44C17CCB85A88A1F(iLocal_96, 1)) };
							unk_0xC0E8B67A4385D37D(func_44(iLocal_96, 0, 0));
							iLocal_295 = 7;
							iLocal_64 = unk_0x693EBB4F13506457();
						}
					}
				}
			}
			else
			{
				func_462("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_462("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_462("EXIT - OTHER ped INJURED");
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
	
	if (!unk_0x2DC9BA2299B45EA6(iLocal_97))
	{
		if (unk_0x5D42322C7DB888D0(iLocal_98, 0))
		{
			if (unk_0x0C7EC810080F0459(iLocal_97, iLocal_98, 0))
			{
				fVar0 = unk_0x9BA9222C7124CA04(iLocal_98);
				if (unk_0x5534579797ACFD77(iLocal_97, iLocal_96, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_63(iLocal_96);
					iLocal_65 = unk_0x693EBB4F13506457();
					iLocal_66 = (iLocal_65 - iLocal_64);
					if (iLocal_66 >= iLocal_68)
					{
						if (func_522())
						{
							if (unk_0xFE7BCFB02217DCDF(iLocal_97))
							{
								unk_0xD1FE26E80A6E2C00(iLocal_97);
							}
						}
						else
						{
							unk_0xD1FE26E80A6E2C00(iLocal_97);
						}
						iLocal_68 = unk_0x531444754C426278(0, 10000);
						if (iLocal_68 > 2500)
						{
							unk_0x5124C5FA52D2AF3E(iLocal_96);
							unk_0xA9351C9309E03069(&uLocal_101);
							unk_0x3E2E609450787FFE(&uLocal_101);
							unk_0x9CEFBE395E148A32(0, iLocal_98, -1, 0, 1f, 8388609, 0);
							unk_0x1A95AE7201CE6376(0, -1);
							unk_0x939BC11172AA1303(uLocal_101);
							unk_0xBFE865E3B513451B(iLocal_96, uLocal_101);
							unk_0xA9351C9309E03069(&uLocal_101);
							func_462("other GIVES MONEY");
							iLocal_295 = 5;
						}
						else
						{
							func_62();
							func_57();
							if (!unk_0x2DC9BA2299B45EA6(iLocal_97))
							{
								if (unk_0x5D42322C7DB888D0(iLocal_98, 0))
								{
									if (unk_0x0C7EC810080F0459(iLocal_97, iLocal_98, 0))
									{
										unk_0xA9351C9309E03069(&uLocal_101);
										unk_0x3E2E609450787FFE(&uLocal_101);
										unk_0x1A95AE7201CE6376(0, unk_0x531444754C426278(500, 2000));
										unk_0x84D04CB0E2B93F55(0, iLocal_98, 10f, 786603);
										unk_0x939BC11172AA1303(uLocal_101);
										unk_0xBFE865E3B513451B(iLocal_97, uLocal_101);
										unk_0xA9351C9309E03069(&uLocal_101);
										iLocal_64 = unk_0x693EBB4F13506457();
									}
								}
							}
							func_462("prostitute REFUSED MONEY 2");
							if (func_522())
							{
								if (unk_0xFE7BCFB02217DCDF(iLocal_97))
								{
									unk_0xD1FE26E80A6E2C00(iLocal_97);
								}
							}
							else
							{
								unk_0xD1FE26E80A6E2C00(iLocal_97);
							}
							iLocal_295 = 6;
						}
					}
				}
				else
				{
					if (func_522())
					{
						if (unk_0xFE7BCFB02217DCDF(iLocal_97))
						{
							unk_0xD1FE26E80A6E2C00(iLocal_97);
						}
					}
					else
					{
						unk_0xD1FE26E80A6E2C00(iLocal_97);
					}
					func_90();
				}
			}
			else
			{
				func_462("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_522())
				{
					if (unk_0xFE7BCFB02217DCDF(iLocal_97))
					{
						unk_0xD1FE26E80A6E2C00(iLocal_97);
					}
				}
				else
				{
					unk_0xD1FE26E80A6E2C00(iLocal_97);
				}
				func_90();
			}
		}
		else
		{
			func_462("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_462("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_57()
{
	var uVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iLocal_96) || unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return 1;
	}
	if (!func_522())
	{
		if (unk_0x277ECDA23D8CCEB4(iLocal_96, 1))
		{
			unk_0xF7F92ABBE23C8EA8(iLocal_96, 1193033728, 0);
		}
		else if (func_461(iLocal_49, 4194304))
		{
			unk_0x3E2E609450787FFE(&uVar0);
			if (func_461(iLocal_75, 524288))
			{
				unk_0x5323F488E6A1B660(0, func_61(iLocal_293), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_58(1);
			unk_0x939BC11172AA1303(uVar0);
			unk_0xBFE865E3B513451B(iLocal_96, uVar0);
			unk_0xA9351C9309E03069(&uVar0);
			func_453(&iLocal_49, 16384);
			func_34(&uLocal_113);
		}
		return 1;
	}
	if (unk_0x277ECDA23D8CCEB4(iLocal_96, 1))
	{
		if (unk_0xFE7BCFB02217DCDF(iLocal_96))
		{
			unk_0xF7F92ABBE23C8EA8(iLocal_96, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xF892FC88DC9DD7F8(iLocal_96);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_461(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_461(iLocal_75, 524288))
			{
				if (unk_0xFE7BCFB02217DCDF(iLocal_96))
				{
					unk_0x5323F488E6A1B660(iLocal_96, func_61(iLocal_293), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					unk_0xF892FC88DC9DD7F8(iLocal_96);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_461(iLocal_75, 524288))
			{
				if (unk_0xFE7BCFB02217DCDF(iLocal_96))
				{
					if (unk_0x090C65D5190A249D(iLocal_96, -2017877118) == 7)
					{
						func_58(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					unk_0xF892FC88DC9DD7F8(iLocal_96);
				}
			}
			else if (unk_0xFE7BCFB02217DCDF(iLocal_96))
			{
				func_58(0);
				iLocal_54 = 3;
			}
			else
			{
				unk_0xF892FC88DC9DD7F8(iLocal_96);
			}
			break;
		
		case 3:
			func_453(&iLocal_49, 16384);
			func_34(&uLocal_113);
			return 1;
			break;
	}
	return 0;
}

void func_58(bool bParam0)
{
	struct<3> Var0;
	
	if (((unk_0x377322387C641F59(iLocal_96) || unk_0x393E712335C82C36(iLocal_96)) || unk_0xBC8F0233DE90C26A(iLocal_96, func_59(0))) || unk_0xBC8F0233DE90C26A(iLocal_96, func_59(1)))
	{
		return;
	}
	Var0 = { unk_0x44C17CCB85A88A1F(iLocal_96, 1) };
	if (!unk_0xE52240EAFD9A078E(Var0, func_59(0), 20f, 1) && !unk_0xE52240EAFD9A078E(Var0, func_59(1), 20f, 1))
	{
		if (bParam0)
		{
			unk_0xF7F92ABBE23C8EA8(0, 1193033728, 0);
		}
		else
		{
			unk_0xF7F92ABBE23C8EA8(iLocal_96, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0x6C43AC8B5408F1BF(iLocal_96, Var0, 20f, 0);
	}
	else
	{
		unk_0x6C43AC8B5408F1BF(0, Var0, 20f, 0);
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
	if (unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return;
	}
	if (!unk_0x8EDA3A22D5F4C0BF(iLocal_96))
	{
		if (func_18() == 2)
		{
			unk_0x7ABE44FB19CAE2E1(iLocal_96, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x7ABE44FB19CAE2E1(iLocal_96, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_63(int iParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (func_64(iParam0))
		{
			unk_0x1F64302AA4F597A7(iParam0, 109, 1);
		}
	}
}

int func_64(int iParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if ((unk_0xCD61E9D5CABC7E35(iParam0, func_61(iLocal_293), func_60(1), 3) || unk_0xCD61E9D5CABC7E35(iParam0, func_61(iLocal_293), func_60(2), 3)) || unk_0xCD61E9D5CABC7E35(iParam0, func_61(iLocal_293), func_60(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_65()
{
	float fVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iLocal_97))
	{
		if (unk_0x5D42322C7DB888D0(iLocal_98, 0))
		{
			if (unk_0x0C7EC810080F0459(iLocal_97, iLocal_98, 0))
			{
				if (unk_0x090C65D5190A249D(iLocal_96, 242628503) == 1)
				{
					if (unk_0xCD88F418C186FA19(iLocal_96) > 1)
					{
						if (unk_0x5534579797ACFD77(iLocal_96, iLocal_97, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = unk_0x9BA9222C7124CA04(iLocal_98);
							if (fVar0 <= 1f)
							{
								func_66(0);
								iLocal_64 = unk_0x693EBB4F13506457();
								iLocal_68 = unk_0x531444754C426278(4000, 8000);
								func_462("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_295 = 4;
							}
						}
						else
						{
							func_462("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_90();
						}
					}
				}
			}
			else
			{
				func_462("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_462("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_462("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_66(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!func_522())
	{
		if (bParam0)
		{
			unk_0x4D441164B0A4F5E4(iLocal_96, "PROSTITUTE_GROUP", 0);
			func_81("PROSTITUTES_SOLICIT_SCENE");
		}
		func_67();
		if (func_461(iLocal_49, 4194304))
		{
			iVar0 = unk_0x531444754C426278(1, 4);
			unk_0x3E2E609450787FFE(&uVar1);
			unk_0x5323F488E6A1B660(0, func_61(iLocal_293), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x5323F488E6A1B660(0, func_61(iLocal_293), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x5323F488E6A1B660(0, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x939BC11172AA1303(uVar1);
			unk_0xBFE865E3B513451B(iLocal_96, uVar1);
			unk_0xA9351C9309E03069(&uVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				unk_0x4D441164B0A4F5E4(iLocal_96, "PROSTITUTE_GROUP", 0);
				func_81("PROSTITUTES_SOLICIT_SCENE");
			}
			func_67();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_461(iLocal_49, 4194304))
			{
				if (unk_0xFE7BCFB02217DCDF(iLocal_96))
				{
					unk_0x5323F488E6A1B660(iLocal_96, func_61(iLocal_293), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 2;
				}
				else
				{
					unk_0xF892FC88DC9DD7F8(iLocal_96);
				}
			}
			break;
		
		case 2:
			if (unk_0xFE7BCFB02217DCDF(iLocal_96))
			{
				if (unk_0x090C65D5190A249D(iLocal_96, -2017877118) == 7)
				{
					iVar0 = unk_0x531444754C426278(1, 4);
					unk_0x5323F488E6A1B660(iLocal_96, func_61(iLocal_293), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 3;
				}
			}
			else
			{
				unk_0xF892FC88DC9DD7F8(iLocal_96);
			}
			break;
		
		case 3:
			if (unk_0xFE7BCFB02217DCDF(iLocal_96))
			{
				if (unk_0x090C65D5190A249D(iLocal_96, -2017877118) == 7)
				{
					unk_0x5323F488E6A1B660(iLocal_96, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_53 = 4;
				}
			}
			else
			{
				unk_0xF892FC88DC9DD7F8(iLocal_96);
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
	if (unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return;
	}
	if (!unk_0x8EDA3A22D5F4C0BF(iLocal_96))
	{
		switch (func_18())
		{
			case 0:
				if (!func_68(iLocal_96))
				{
					unk_0x7ABE44FB19CAE2E1(iLocal_96, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x7ABE44FB19CAE2E1(iLocal_96, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_68(iLocal_96))
				{
					unk_0x7ABE44FB19CAE2E1(iLocal_96, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x7ABE44FB19CAE2E1(iLocal_96, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_68(iLocal_96))
				{
					unk_0x7ABE44FB19CAE2E1(iLocal_96, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x7ABE44FB19CAE2E1(iLocal_96, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
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
		iVar0 = Global_100976.f_8683.f_1[iParam0 /*11*/][0];
	}
	else if (func_18() == 1)
	{
		iVar0 = Global_100976.f_8683.f_1[iParam0 /*11*/][1];
	}
	else if (func_18() == 2)
	{
		iVar0 = Global_100976.f_8683.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_71(int iParam0)
{
	int iVar0;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
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
	if (unk_0x8F104CB36BD63D96(iParam0, Global_100976.f_8683.f_1[iParam1 /*11*/].f_10))
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
	return unk_0x268F3DC177BF5D38(uParam0, uVar0) == func_75(iParam1, iParam2);
}

int func_75(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_100976.f_8683.f_1[iParam0 /*11*/].f_7[iParam1];
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
	return unk_0x3A59BCC40A12FD28(uParam0, uVar0) == func_79(iParam1, iParam2);
}

int func_79(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_100976.f_8683.f_1[iParam0 /*11*/].f_4[iParam1];
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
	if (!unk_0xB5F5536784683C33(sParam0))
	{
		unk_0x925AE2E6F6E41362(sParam0);
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
	
	if (!unk_0x2DC9BA2299B45EA6(iLocal_97))
	{
		if (unk_0x5D42322C7DB888D0(iLocal_98, 0))
		{
			if (unk_0x0C7EC810080F0459(iLocal_97, iLocal_98, 0))
			{
				fVar0 = unk_0x9BA9222C7124CA04(iLocal_98);
				if (unk_0x090C65D5190A249D(iLocal_97, -272084098) == 7 || fVar0 <= 1f)
				{
					unk_0xA8349C905E4A8DE7(unk_0x6D5BB810CC209E15(iLocal_98), &Var4, &Var1);
					Var7 = { Var1 - Var4 };
					Var7 = { Var7 / Vector(2f, 2f, 2f) };
					Var10 = { unk_0xCC31DB73C65552D8(iLocal_98, 0.2f, 0.2f, 0f) };
					Var13 = { unk_0xCC31DB73C65552D8(iLocal_98, 0.2f, 0.2f, 0f) };
					Var16 = { unk_0x44C17CCB85A88A1F(iLocal_96, 1) };
					if (unk_0x2A488C176D52CCA5(Var16, Var13) < unk_0x2A488C176D52CCA5(Var16, Var10))
					{
						Var10 = { Var13 };
					}
					unk_0x3E2E609450787FFE(&uLocal_101);
					unk_0x81333BEA4837207C(0, Var10.f_0, Var10.f_1, Var10.f_2, 1f, -1, 0.5f, 8192, 1193033728);
					unk_0xC518AECFA9CF7722(0, iLocal_97, 0);
					unk_0x1A95AE7201CE6376(0, -1);
					unk_0x939BC11172AA1303(uLocal_101);
					unk_0xBFE865E3B513451B(iLocal_96, uLocal_101);
					unk_0xA9351C9309E03069(&uLocal_101);
					func_462("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_295 = 3;
				}
				else
				{
					func_462("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_462("EXIT - OTHER OUT OF VEHICLE");
				func_90();
			}
		}
		else
		{
			func_462("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_462("EXIT - OTHER ped INJURED");
		func_90();
	}
}

void func_83()
{
	struct<3> Var0;
	
	if (!unk_0x2DC9BA2299B45EA6(iLocal_97))
	{
		if (unk_0x5D42322C7DB888D0(iLocal_98, 0))
		{
			if (unk_0x0C7EC810080F0459(iLocal_97, iLocal_98, 0))
			{
				if (func_85(&iLocal_98))
				{
					if (func_84(unk_0x44C17CCB85A88A1F(iLocal_97, 1), 1106247680))
					{
						return;
					}
					Var0 = { unk_0x44C17CCB85A88A1F(iLocal_96, 1) };
					if (unk_0x2189434CDD354C91(Var0, &Var0, 8, 1077936128, 0))
					{
						unk_0x81EDF9495C1405B5(iLocal_97, 1f);
						unk_0x69E2A422A6D0BADB(iLocal_97, 0.2f);
						unk_0x97660FBC4405540C(iLocal_97, 0.05f);
						unk_0xBD14E3B051184704(iLocal_97, iLocal_98, Var0, 0f, 3, 360f, 1);
						unk_0xE48D9147BC1F4CD7(iLocal_97, iLocal_96, -1, 2048, 4);
						func_462("OTHER TOLD TO PULL OVER");
						iLocal_295 = 2;
					}
				}
				else
				{
					func_462("EXIT - Vehicle is not suitable");
					func_89(15);
				}
			}
			else
			{
				func_462("EXIT - OTHER OUT OF THE VEHICLE");
				func_89(15);
			}
		}
		else
		{
			func_462("EXIT - OTHER VEHICLE DEAD");
			func_89(15);
		}
	}
	else
	{
		func_462("EXIT - OTHER ped INJURED");
		func_89(15);
	}
}

bool func_84(struct<3> Param0, int iParam3)
{
	if (func_522())
	{
		return unk_0x0C570E251979C1C4(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3));
	}
	return (unk_0x315ACCD8574BBD32(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)) || unk_0x0C570E251979C1C4(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)));
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5D42322C7DB888D0(*iParam0, 0))
	{
		iVar0 = unk_0x6D5BB810CC209E15(*iParam0);
		if (func_88(iVar0, 0) && func_87(*iParam0))
		{
			if (unk_0x7EFD275DF858497F(*iParam0) > 0)
			{
				iVar1 = unk_0x29063D24B3F14FA7(*iParam0);
				if (((iVar1 == 0 && unk_0x74CAAD9E721B315D(*iParam0, 0)) && (!unk_0x53F611067DBFED15(*iParam0, 1) && !unk_0x53F611067DBFED15(*iParam0, 0))) || unk_0xC0ADAF0814175B68(*iParam0, 0) == iLocal_96)
				{
					if (func_41(*iParam0))
					{
						if (!func_461(iLocal_49, 32768))
						{
							func_453(&iLocal_49, 32768);
							if (!func_461(iLocal_49, 8))
							{
								unk_0x841AF342F853B150(func_86());
								func_453(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_461(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_461(iLocal_49, 8))
						{
							if (unk_0x11896648C9E8F14F(func_86()))
							{
								unk_0xF762ED015503B979(func_86());
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
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		if (unk_0x35C1534E81F87E96(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x342B167253E636DE(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x2089F9858CC119AB(iParam0, iVar1, unk_0x342B167253E636DE(iParam0, iVar1)), 16);
						iVar2 = unk_0x7CBED6EFED40E7EB(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x7CBED6EFED40E7EB("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x38E553FFEC2B7BCC(iParam0))
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
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
				return 1;
				break;
		}
		if (unk_0x38E553FFEC2B7BCC(iParam0) == 931866387 && unk_0x6D5BB810CC209E15(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	if ((((unk_0x9DABB329596B1BD6(iParam0) || unk_0xE924C2C283992918(iParam0)) || unk_0xAF40E7422A6D9D80(iParam0)) || unk_0xC9E810FB9A83EF58(iParam0)) || unk_0xE6CB12C10EE5D793(iParam0))
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
	if (func_522())
	{
		if (unk_0xFE7BCFB02217DCDF(iLocal_96))
		{
			unk_0x5124C5FA52D2AF3E(iLocal_96);
			unk_0xD1FE26E80A6E2C00(iLocal_96);
		}
	}
	else
	{
		unk_0x5124C5FA52D2AF3E(iLocal_96);
		unk_0xD1FE26E80A6E2C00(iLocal_96);
	}
	iLocal_97 = 0;
	iLocal_98 = 0;
	unk_0x5323F488E6A1B660(iLocal_96, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, unk_0xC6D38B918E72181E(0f, 0.9f), 0, 0, 0);
	func_89(0);
	iLocal_296 = 0;
	iLocal_294 = 1;
}

void func_91(var uParam0)
{
	if (!func_461(iLocal_49, 32))
	{
		iLocal_294 = 1;
	}
	if (iLocal_295 > 1 && iLocal_295 != 12)
	{
		if (!func_461(iLocal_49, 33554432))
		{
			if (func_522())
			{
				if (Global_1701440 || func_445())
				{
					func_444(0);
					func_453(&iLocal_49, 33554432);
				}
			}
			if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
			{
				if (func_461(iLocal_49, 1048576) || func_461(iLocal_49, 8192))
				{
					func_444(0);
					func_453(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_295)
	{
		case 0:
			if (func_461(iLocal_49, 16384) || func_461(iLocal_49, 8388608))
			{
				if (!func_10(&uLocal_113))
				{
					func_443(&uLocal_113);
				}
				if (func_442(&uLocal_113, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_296 != 0 && !func_441("PROS_NO_MONEY"))
			{
				func_58(0);
				switch (func_18())
				{
					case 0:
						func_440(&uLocal_122, 0, unk_0xC8B93D94F8954288(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_440(&uLocal_122, 0, unk_0xC8B93D94F8954288(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_440(&uLocal_122, 0, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
						break;
				}
				iLocal_295 = 1;
			}
			else
			{
				func_439();
				iLocal_296 = 2;
			}
			break;
		
		case 1:
			func_426(uParam0);
			break;
		
		case 2:
			func_413(uParam0);
			break;
		
		case 3:
			func_412();
			break;
		
		case 4:
			func_400(uParam0);
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
			unk_0x2BE3C7FA4FCCA784(0, 80, 1);
			unk_0x2BE3C7FA4FCCA784(0, 0, 1);
			unk_0x5E70D5A5F14A2E17(unk_0xA34E7C2A5118D638());
			func_223();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			if (func_522())
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
			unk_0x5E70D5A5F14A2E17(unk_0xA34E7C2A5118D638());
			unk_0x2BE3C7FA4FCCA784(0, 0, 1);
			unk_0x2BE3C7FA4FCCA784(0, 80, 1);
			func_118();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			func_115(uParam0);
			if (func_522())
			{
				unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 433, 1);
				func_217(uParam0);
			}
			break;
		
		case 12:
			func_460();
			break;
		
		case 13:
			unk_0x2BE3C7FA4FCCA784(0, 80, 1);
			unk_0x2BE3C7FA4FCCA784(0, 0, 1);
			func_96();
			break;
		
		case 14:
			func_95();
			break;
		
		case 15:
			unk_0x2BE3C7FA4FCCA784(0, 80, 1);
			unk_0x2BE3C7FA4FCCA784(0, 0, 1);
			func_92(uParam0);
			break;
	}
}

void func_92(var uParam0)
{
	if (!func_522())
	{
		if (unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), func_44(unk_0xC8B93D94F8954288(), 0, 0), func_94(1), 3))
		{
			return;
		}
	}
	if (func_461(iLocal_49, 16))
	{
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x02831590B216249D(unk_0xA34E7C2A5118D638(), 1);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_461(iLocal_49, 2))
	{
		func_93(1);
		func_462("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_512();
	if (func_522())
	{
		func_507(uParam0);
	}
}

void func_93(int iParam0)
{
}

var func_94(bool bParam0)
{
	if (!func_461(iLocal_49, 32768))
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
	if (!unk_0x8EDA3A22D5F4C0BF(unk_0xC8B93D94F8954288()))
	{
		if (iLocal_72 == 0)
		{
			if (func_461(iLocal_49, 134217728))
			{
				unk_0xF36EA652E4A6CED0(iLocal_96, 32768, 0);
				unk_0xF36EA652E4A6CED0(iLocal_96, 196624, 1);
			}
			unk_0x7ABE44FB19CAE2E1(iLocal_96, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_89(15);
		}
	}
}

void func_96()
{
	switch (iLocal_303)
	{
		case 0:
			if (!unk_0x8EDA3A22D5F4C0BF(iLocal_96) || func_114(&uLocal_107) > 4f)
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
			if (unk_0x8EDA3A22D5F4C0BF(iLocal_96) || func_105())
			{
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 256);
				func_453(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&uLocal_107))
				{
					func_34(&uLocal_107);
				}
				if (func_114(&uLocal_107) > 15f || iLocal_306 != 0)
				{
					unk_0x9F4AA6F234E8A860(1);
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

bool func_98(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

void func_99(bool bParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		if (unk_0xD5DFCA69ACAA20E3())
		{
			unk_0x26B3B761603F5232(&iLocal_96);
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
	
	if (unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), func_44(unk_0xC8B93D94F8954288(), 0, 0), func_103(1), 3))
	{
		unk_0x5323F488E6A1B660(unk_0xC8B93D94F8954288(), func_44(unk_0xC8B93D94F8954288(), 0, 0), func_94(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!unk_0x2DC9BA2299B45EA6(uParam0))
	{
		if (func_522())
		{
			if (unk_0xFE7BCFB02217DCDF(iParam0))
			{
				unk_0x0DF75AF098AD14C9(iParam0);
			}
		}
		else
		{
			unk_0x0DF75AF098AD14C9(iParam0);
		}
		if (func_461(iLocal_49, 33554432))
		{
			unk_0x5124C5FA52D2AF3E(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0xC6D38B918E72181E(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_453(&iLocal_49, 134217728);
			}
		}
		if (func_461(iLocal_49, 134217728))
		{
			unk_0xF36EA652E4A6CED0(iParam0, 32768, 1);
			unk_0x622E764F80DBF8B7(iParam0, unk_0xC8B93D94F8954288(), 300f, -1, 1, 0);
		}
		else
		{
			unk_0xF36EA652E4A6CED0(iParam0, 196624, 1);
			unk_0xA9351C9309E03069(&uVar0);
			unk_0x3E2E609450787FFE(&uVar0);
			unk_0x2A262C5D2DAD436D(0, 1);
			if (unk_0x277ECDA23D8CCEB4(iParam0, 0))
			{
				if (!unk_0xF624ACE12DE97FE9(unk_0x275BEBE583A163B5(iParam0, 0)))
				{
					func_102(iParam0, 1);
				}
				else
				{
					if (unk_0xCD61E9D5CABC7E35(iParam0, func_44(iParam0, 0, 0), func_103(0), 3))
					{
						if (iLocal_72 > 0)
						{
							unk_0x5323F488E6A1B660(0, func_44(iParam0, 0, 0), func_94(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0x5323F488E6A1B660(0, func_44(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_102(iParam0, 1);
				}
			}
			unk_0x2A262C5D2DAD436D(0, 0);
			unk_0xF7F92ABBE23C8EA8(0, 1193033728, 0);
			unk_0x939BC11172AA1303(uVar0);
			unk_0xBFE865E3B513451B(iParam0, uVar0);
			unk_0xA9351C9309E03069(&uVar0);
		}
		if (func_522())
		{
			if (unk_0xE437ADC394648FBE(iLocal_96))
			{
				if (unk_0xBE5036433C51E57D(unk_0x8FE8A2FD26B2A7FA(iLocal_96)))
				{
					unk_0xF1A02DDEC7E15D6E(iParam0, 1);
				}
			}
		}
		else
		{
			unk_0xF1A02DDEC7E15D6E(iParam0, 1);
		}
	}
}

var func_101(bool bParam0)
{
	if (!func_461(iLocal_49, 32768))
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
	if (!unk_0xF6D1796681289C21(uParam0, unk_0x275BEBE583A163B5(uParam0, 0), 0, 0, 0))
	{
		unk_0xE5F6BE3F8E937ACE(0, 0, 16842752);
	}
	else
	{
		unk_0xE5F6BE3F8E937ACE(0, 0, iParam1);
	}
}

var func_103(bool bParam0)
{
	if (!func_461(iLocal_49, 32768))
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
	
	iVar0 = unk_0x531444754C426278(0, 1000);
	if ((iVar0 <= 333 && iLocal_306 == 0) || iLocal_306 == 3)
	{
		unk_0x7ABE44FB19CAE2E1(unk_0xC8B93D94F8954288(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_306 == 0) || iLocal_306 == 1)
	{
		unk_0x7ABE44FB19CAE2E1(unk_0xC8B93D94F8954288(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_306 == 0 || iLocal_306 == 2)
	{
		unk_0x7ABE44FB19CAE2E1(unk_0xC8B93D94F8954288(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_105()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	if (iLocal_306 == 0)
	{
		unk_0xE3B1382567189443(0);
		unk_0x2BE3C7FA4FCCA784(0, 99, 1);
		unk_0x2BE3C7FA4FCCA784(0, 76, 1);
		unk_0x2BE3C7FA4FCCA784(0, 80, 1);
		unk_0x80904D7F494D0C30(2, 203);
		unk_0x80904D7F494D0C30(2, 201);
		unk_0x80904D7F494D0C30(2, 202);
		if (unk_0x58F80A8B3A06F53C(2, 203))
		{
			unk_0x9F4AA6F234E8A860(1);
			unk_0xC4EE38A4CFF7544C(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 3;
		}
		else if (unk_0x58F80A8B3A06F53C(2, 201))
		{
			unk_0x9F4AA6F234E8A860(1);
			unk_0xC4EE38A4CFF7544C(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 1;
		}
		else if (unk_0x58F80A8B3A06F53C(2, 202))
		{
			unk_0x9F4AA6F234E8A860(1);
			unk_0xC4EE38A4CFF7544C(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 2;
		}
	}
}

void func_107(char* sParam0)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 1, 1, -1);
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
		if (unk_0x8EDA3A22D5F4C0BF(iParam0))
		{
			unk_0x5147F4FD3D9AB607(iParam0);
		}
		if (!unk_0x8EDA3A22D5F4C0BF(iParam0))
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
		func_440(&uLocal_122, 6, iParam0, func_112(iVar0), 0, 1);
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
			return (func_8(unk_0xDCC86F723E82125E(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_115(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_522())
	{
		return;
	}
	bVar0 = false;
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			iVar1 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x95CCECA3948CFE7B(iVar1))
			{
				if (unk_0xC0ADAF0814175B68(iVar1, -1) != unk_0xC8B93D94F8954288())
				{
					bVar0 = true;
				}
				if (unk_0xC0ADAF0814175B68(iVar1, 0) != iLocal_96)
				{
					bVar0 = true;
				}
				if (unk_0x29063D24B3F14FA7(iVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_116(0);
					unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
					func_512();
					func_507(uParam0);
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
		Var0 = { unk_0xF57992155BDFCC67(iLocal_99, 2) };
		unk_0x8C67D2FDE360FBCA(180f);
		unk_0x0F9FDCEB321235AB((-5.5f - Var0.f_0), 1065353216);
	}
	unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
	func_117(&(Local_313[0 /*7*/]));
	func_117(&(Local_313[3 /*7*/]));
	func_117(&(Local_313[2 /*7*/]));
	func_117(&(Local_313[1 /*7*/]));
	if (func_441("PROS_CAM_TOG") || func_441("PROS_CAM_OC"))
	{
		unk_0x9F4AA6F234E8A860(1);
	}
}

void func_117(var uParam0)
{
	if (unk_0x844838E5D8A21336(*uParam0))
	{
		unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
		if (unk_0xF96FC657C212A30E(*uParam0))
		{
			unk_0x7D1795B1E14EDFFD(*uParam0, 0);
		}
		unk_0x5CF5A880ED809DDA(*uParam0, 0);
	}
}

void func_118()
{
	if (unk_0x5D42322C7DB888D0(iLocal_99, 0))
	{
		unk_0x4471F61699BDCC4D(iLocal_99, 1);
	}
	if (iLocal_302 != 5)
	{
		if ((((((!func_210(iLocal_76) && !func_210(iLocal_77)) && !func_210(iLocal_78)) && !func_210(iLocal_79)) && !func_210(iLocal_80)) && !func_210(iLocal_81)) && !func_210(iLocal_82))
		{
			if (!unk_0x7F13E3D2383CF15F(iLocal_96) || unk_0x53FACDFDDEA6B021(unk_0xC8B93D94F8954288()))
			{
				iLocal_302 = 5;
			}
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				if (!unk_0x5D42322C7DB888D0(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
				{
					iLocal_302 = 5;
				}
			}
		}
	}
	unk_0x68A38902ADFD05FE(2);
	unk_0x2BE3C7FA4FCCA784(2, 19, 1);
	unk_0x2BE3C7FA4FCCA784(2, 37, 1);
	func_206();
	switch (iLocal_302)
	{
		case 0:
			if (func_522())
			{
				func_203(1078, -1);
			}
			func_34(&uLocal_119);
			func_202(func_43(), func_461(iLocal_49, 32768));
			iLocal_302 = 1;
			func_462("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0x2BE3C7FA4FCCA784(0, 48, 1);
			unk_0x2BE3C7FA4FCCA784(0, 0, 1);
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
						unk_0xDF9B2BE9FFD8B8B5(iLocal_48);
						iLocal_302 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0x2BE3C7FA4FCCA784(0, 48, 1);
			func_195();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_42(0, 1))
			{
				unk_0x2BE3C7FA4FCCA784(0, 0, 1);
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
			unk_0x2BE3C7FA4FCCA784(0, 0, 1);
			if (!unk_0x8EDA3A22D5F4C0BF(iLocal_96))
			{
				func_124("PROSTITUTES_SOLICIT_SCENE");
				func_124("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_301 = 0;
				iLocal_302 = 0;
				func_121();
				unk_0xDF9B2BE9FFD8B8B5(iLocal_48);
				iLocal_295 = 8;
			}
			break;
		
		case 5:
			unk_0x2BE3C7FA4FCCA784(0, 0, 1);
			if (!unk_0x8EDA3A22D5F4C0BF(iLocal_96))
			{
				if (iLocal_72 > 0)
				{
					if (func_120(iLocal_96))
					{
						func_119();
					}
					else
					{
						func_444(0);
					}
				}
				else
				{
					func_462("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_444(1);
				}
			}
			break;
	}
}

void func_119()
{
	if (unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return;
	}
	if (!unk_0x8EDA3A22D5F4C0BF(unk_0xC8B93D94F8954288()))
	{
		if (iLocal_72 == 0)
		{
			unk_0x7ABE44FB19CAE2E1(unk_0xC8B93D94F8954288(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_120(iLocal_96))
		{
			func_34(&uLocal_107);
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 768);
			func_453(&iLocal_49, 2048);
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
	Global_2426867.f_615.f_10 = 1;
}

void func_122()
{
	if (unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return;
	}
	if (!unk_0x8EDA3A22D5F4C0BF(iLocal_96))
	{
		unk_0x7ABE44FB19CAE2E1(iLocal_96, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_123()
{
	if (unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return;
	}
	if (!unk_0x8EDA3A22D5F4C0BF(iLocal_96))
	{
		unk_0x7ABE44FB19CAE2E1(iLocal_96, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_124(char* sParam0)
{
	if (unk_0xB5F5536784683C33(sParam0))
	{
		unk_0xDB9D78E5137EE7AD(sParam0);
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
	unk_0x3836D389E39F1D26();
	unk_0x5920FD67903A159C();
}

void func_127()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0xB8A06E7E729EED0A(func_44(unk_0xC8B93D94F8954288(), 0, 0)))
	{
		return;
	}
	if (!unk_0xF9B86DC1728F1339(func_44(unk_0xC8B93D94F8954288(), 0, 0)))
	{
		return;
	}
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
	}
	bVar1 = func_43();
	bVar2 = func_461(iLocal_49, 32768);
	if (!func_42(0, 1))
	{
		func_182(&iLocal_83);
	}
	unk_0x2BE3C7FA4FCCA784(2, 19, 1);
	unk_0x2BE3C7FA4FCCA784(2, 37, 1);
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
			if (!func_522())
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
				if (!func_461(iLocal_50, 4))
				{
					if (!func_522())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_77) >= fVar0)
					{
						func_453(&iLocal_50, 4);
					}
				}
			}
			if (func_210(iLocal_76))
			{
				if (!func_461(iLocal_50, 8))
				{
					if (!func_522())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_76) >= fVar0)
					{
						func_453(&iLocal_50, 8);
					}
				}
			}
			if (func_461(iLocal_50, 4) && func_461(iLocal_50, 8))
			{
				if (!func_522())
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
				if (!func_461(iLocal_50, 16))
				{
					if (!func_522())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_78) >= fVar0)
					{
						func_453(&iLocal_50, 16);
					}
				}
			}
			if (func_461(iLocal_50, 16))
			{
				if (!func_522())
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
				if (!func_461(iLocal_50, 64))
				{
					if (!func_461(iLocal_49, 16777216))
					{
						if (!func_522())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_79) >= fVar0)
						{
							func_453(&iLocal_49, 16777216);
							iLocal_73++;
						}
					}
					else
					{
						if (!func_522())
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
					if (iLocal_73 >= func_160(func_522(), func_166(), func_161()))
					{
						func_453(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_461(iLocal_50, 64))
			{
				func_453(&iLocal_50, 64);
			}
			if (func_461(iLocal_50, 64))
			{
				if (!func_522())
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
				if (!func_461(iLocal_50, 256))
				{
					if (!func_522())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_80) >= fVar0)
					{
						func_453(&iLocal_50, 256);
					}
				}
			}
			else if (!func_461(iLocal_50, 256))
			{
				func_453(&iLocal_50, 256);
			}
			if (func_461(iLocal_50, 256))
			{
				if (!func_522())
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
				if (!func_461(iLocal_50, 1024))
				{
					if (!func_522())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_81) >= fVar0)
					{
						func_453(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_461(iLocal_50, 1024))
			{
				func_453(&iLocal_50, 1024);
			}
			if (func_210(iLocal_82))
			{
				if (!func_461(iLocal_50, 2048))
				{
					if (!func_522())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_82) >= fVar0)
					{
						func_453(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_461(iLocal_50, 2048))
			{
				func_453(&iLocal_50, 2048);
			}
			if (func_461(iLocal_50, 1024) && func_461(iLocal_50, 2048))
			{
				func_175(iLocal_96, 0);
				unk_0x5323F488E6A1B660(iLocal_96, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(iLocal_305, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_175(unk_0xC8B93D94F8954288(), -1);
				unk_0x5323F488E6A1B660(unk_0xC8B93D94F8954288(), func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(iLocal_305, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
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
	
	if (iLocal_72 == 0 && !func_522())
	{
		if (func_21(unk_0xC8B93D94F8954288()) == 0)
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
	switch (func_21(unk_0xC8B93D94F8954288()))
	{
		case 0:
			Global_100976.f_8683.f_90[0]++;
			func_130(0, 1, 1);
			break;
		
		case 1:
			Global_100976.f_8683.f_90[1]++;
			func_130(1, 1, 1);
			break;
		
		case 2:
			Global_100976.f_8683.f_90[2]++;
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
			Global_100976.f_1770.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_100976.f_1770.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3790;
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
			if (iVar1 != 3790)
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
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
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
	uVar0 = Global_2466774[iParam0 /*5*/][func_132(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
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
	
	if (unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		return;
	}
	iVar0 = func_142();
	if (iVar0 == -1)
	{
		return;
	}
	func_143(iVar0);
	unk_0x64B2BC184771BDA3(iParam0, func_140(iVar0));
	Global_100976.f_8683.f_1[iVar0 /*11*/].f_10 = unk_0x6D5BB810CC209E15(iParam0);
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
		Global_100976.f_8683.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_137(int iParam0, int iParam1)
{
	return unk_0x268F3DC177BF5D38(iParam0, func_76(iParam1));
}

void func_138(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_100976.f_8683.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_139(int iParam0, int iParam1)
{
	return unk_0x3A59BCC40A12FD28(iParam0, func_80(iParam1));
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
			Global_100976.f_8683.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_18() == 1)
		{
			Global_100976.f_8683.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_18() == 2)
		{
			Global_100976.f_8683.f_1[iParam0 /*11*/][2]++;
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
	if (Global_100976.f_8828[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_100976.f_8828[iParam0 /*12*/].f_6 == 11 || Global_100976.f_8828[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_100976.f_8828[iParam0 /*12*/].f_5 = 1;
		Global_100976.f_8828[iParam0 /*12*/].f_10 = iParam1;
		Global_100976.f_8828[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_100712 = 0;
	Global_100713 = 0;
	Global_100714 = 0;
	Global_100715 = 0;
	Global_100716 = 0;
	Global_100717 = 0;
	Global_100718 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_100976.f_8828.f_3853;
	Global_100976.f_8828.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_100976.f_8828[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_100976.f_8828[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100712++;
					fVar1 = (fVar1 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100713++;
					fVar2 = (fVar2 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100714++;
					fVar3 = (fVar3 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100715++;
					fVar4 = (fVar4 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100716++;
					fVar5 = (fVar5 + (Global_100976.f_8828[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100717++;
					fVar6 = (fVar6 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100718++;
					fVar7 = (fVar7 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100695 > 0)
	{
		if (Global_100712 == Global_100695)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100696 > 0)
	{
		if (Global_100713 == Global_100696)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100697 > 0)
	{
		if (Global_100714 == Global_100697)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100698 > 0)
	{
		if (Global_100715 == Global_100698)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100699 > 0)
	{
		if (((Global_100716 == Global_100699 || (Global_100699 * 10 / Global_100716) < 41) || Global_100716 > Global_100702) || Global_100716 == Global_100702)
		{
			if (!unk_0xDCC86F723E82125E(Global_100976.f_8828.f_3856, 14))
			{
				if (Global_100716 == Global_100699)
				{
					unk_0x2343CAF890251A86(joaat("num_rndevents_completed"), Global_100699, 0);
					unk_0x59A0729D503ED758(&(Global_100976.f_8828.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100700 > 0)
	{
		if (Global_100717 == Global_100700)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100701 > 0)
	{
		if (Global_100718 == Global_100701)
		{
			fVar7 = 5f;
		}
	}
	Global_100976.f_8828.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100716 > Global_100702 || Global_100716 == Global_100702)
	{
		iVar9 = Global_100702;
	}
	else
	{
		iVar9 = Global_100716;
	}
	unk_0x071958EFED9481F5(joaat("num_missions_completed"), Global_100712, 1);
	unk_0x071958EFED9481F5(joaat("num_missions_available"), Global_100695, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_completed"), Global_100713, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_available"), Global_100696, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_completed"), Global_100714, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_available"), Global_100697, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_completed"), Global_100715, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_available"), Global_100698, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_available"), Global_100702, 1);
	unk_0x071958EFED9481F5(joaat("num_misc_completed"), (Global_100718 + Global_100717), 1);
	unk_0x071958EFED9481F5(joaat("num_misc_available"), (Global_100701 + Global_100700), 1);
	Global_100719 = (Global_100712 * 100 / Global_100695);
	Global_100721 = ((Global_100714 + Global_100713) * 100 / (Global_100697 + Global_100696));
	Global_100720 = ((Global_100715 + iVar9) * 100 / (Global_100698 + Global_100702));
	Global_100722 = ((Global_100717 + Global_100718) * 100 / (Global_100700 + Global_100701));
	unk_0xB3AF65174F7E38A7(joaat("total_progress_made"), Global_100976.f_8828.f_3853, 1);
	unk_0x071958EFED9481F5(joaat("percent_story_missions"), Global_100719, 1);
	unk_0x071958EFED9481F5(joaat("percent_ambient_missions"), Global_100720, 1);
	unk_0x071958EFED9481F5(joaat("percent_oddjobs"), Global_100721, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853))
	{
		func_147(13, unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853));
	}
	if (!unk_0x11C746AE4DB58A03())
	{
		if (!Global_69317)
		{
			if (func_146() == 2 == 0 && !unk_0xBBAE3E0C60A8AD4B())
			{
				if (unk_0x91629FFED455823B())
				{
					Global_100710 = 0;
				}
				if (!Global_55659)
				{
					func_97();
				}
			}
		}
	}
}

int func_146()
{
	return Global_25115;
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
	iVar0 = unk_0x2D6B7C5EAD43367D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x50EEE3FED4DFE988(iParam0, iParam1);
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
	var uVar11;
	var uVar12;
	
	if (iParam2 == -1)
	{
		iParam2 = func_133();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x76928FD01140B865((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xCCB054268E9EBBCD((iParam0 - 0)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x76928FD01140B865((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xCCB054268E9EBBCD((iParam0 - 192)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x76928FD01140B865((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xCCB054268E9EBBCD((iParam0 - 513)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x76928FD01140B865((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xCCB054268E9EBBCD((iParam0 - 705)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x39DB3B2AF22A3569((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xCCB054268E9EBBCD((iParam0 - 3111)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x39DB3B2AF22A3569((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xCCB054268E9EBBCD((iParam0 - 2919)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD9B02A4858A8C0D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xCCB054268E9EBBCD((iParam0 - 4207)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD9B02A4858A8C0D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xCCB054268E9EBBCD((iParam0 - 4335)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD9B02A4858A8C0D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xCCB054268E9EBBCD((iParam0 - 6029)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7449)
	{
		uVar11 = unk_0xD9B02A4858A8C0D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xCCB054268E9EBBCD((iParam0 - 7385)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD9B02A4858A8C0D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xCCB054268E9EBBCD((iParam0 - 7321)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar12, iParam1, iVar1, iParam3);
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
			Global_87901[iVar0] = Global_87901[iVar0 + 1];
		}
		else
		{
			Global_87901[iVar0] = unk_0x693EBB4F13506457();
		}
		iVar0++;
	}
}

void func_150(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_81, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xC8B93D94F8954288(), iLocal_82, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_151(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (func_522())
	{
		unk_0x24D39024B3182DFB(iParam1);
	}
	else
	{
		unk_0xA5666A46C1079EFE(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
	}
}

void func_152(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_81, 1, 0, 0);
	func_153(iLocal_96, iLocal_81, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_154(&iLocal_82, 0, 0, 0);
	func_153(unk_0xC8B93D94F8954288(), iLocal_82, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_153(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_522())
	{
		unk_0x8877792F7D6DA8B2(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	*iParam0 = func_157(Var0, 0f, 0f, 0f, bParam3, iParam2, 2);
	if (iParam1 == 0)
	{
		func_156(*iParam0, iLocal_99, unk_0x71EC6CC1E45B4DF1(iLocal_99, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_156(*iParam0, iLocal_99, unk_0x71EC6CC1E45B4DF1(iLocal_99, "seat_pside_f"));
	}
	func_155(*iParam0, Var0, 0f, 0f, 0f, 0);
}

void func_155(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!func_522())
	{
		unk_0x26B924317AE30715(uParam0, Param1, Param4, iParam7);
	}
}

void func_156(var uParam0, int iParam1, var uParam2)
{
	if (unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		return;
	}
	if (func_522())
	{
		unk_0xADA8E375C7D513EA(uParam0, iParam1, uParam2);
	}
	else
	{
		unk_0x8D1DED4B6935FA03(uParam0, iParam1, uParam2);
	}
}

var func_157(struct<3> Param0, struct<3> Param3, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	
	if (func_522())
	{
		if (bParam6)
		{
			iParam7 = 0;
		}
		uVar0 = unk_0x5FDF2B8AA77F0468(Param0, Param3, iParam8, bParam6, iParam7, 1065353216, 0, 1065353216);
	}
	else
	{
		uVar0 = unk_0x0B15BB6DFB729046(Param0, Param3, iParam8);
		unk_0x4528D7AA6C2BEF06(uVar0, bParam6);
		unk_0x53DDB73894A6597A(uVar0, iParam7);
	}
	return uVar0;
}

void func_158(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_80, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xC8B93D94F8954288(), iLocal_80, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_159(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_80, 0, 0, 1);
	func_153(iLocal_96, iLocal_80, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xC8B93D94F8954288(), iLocal_80, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
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
	if (func_522())
	{
		return func_134(65, -1, 0);
	}
	return func_163(func_21(unk_0xC8B93D94F8954288()), 1);
}

var func_163(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_164(iParam0, iParam1);
	unk_0x5F0618A5FDAD55C4(iVar1, &uVar0, -1);
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
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_79, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xC8B93D94F8954288(), iLocal_79, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_168(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_79, 0, 1, 0);
	func_153(iLocal_96, iLocal_79, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_153(unk_0xC8B93D94F8954288(), iLocal_79, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_169(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_78, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xC8B93D94F8954288(), iLocal_78, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_170(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_78, 0, 0, 1);
	func_153(iLocal_96, iLocal_78, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xC8B93D94F8954288(), iLocal_78, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_171(int iParam0)
{
	var uVar0;
	
	if (func_522())
	{
		uVar0 = unk_0x2091E42376999826(unk_0x3355FB379A8F5585(iParam0));
	}
	else
	{
		uVar0 = unk_0x2091E42376999826(iParam0);
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
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_76, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_151(unk_0xC8B93D94F8954288(), iLocal_77, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_174(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_76, 1, 0, 1);
	func_153(iLocal_96, iLocal_76, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_154(&iLocal_77, 0, 0, 1);
	func_153(unk_0xC8B93D94F8954288(), iLocal_77, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_38(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_175(int iParam0, int iParam1)
{
	if (!unk_0x0C7EC810080F0459(iParam0, iLocal_99, 0))
	{
		if (!func_522())
		{
			unk_0x6D9DB313D50E9A0D(iParam0, iLocal_99, iParam1);
		}
		else if (!unk_0x0C7EC810080F0459(iParam0, iLocal_99, 0))
		{
			unk_0x9CEFBE395E148A32(iParam0, iLocal_99, -1, iParam1, 2f, 16, 0);
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
	
	uVar0 = func_178(func_179(2), unk_0xEA9A8033D5CFC295(iLocal_99, unk_0x71EC6CC1E45B4DF1(iLocal_99, "windscreen")));
	uVar1 = func_178(func_179(1), unk_0xEA9A8033D5CFC295(iLocal_99, unk_0x71EC6CC1E45B4DF1(iLocal_99, "windscreen")));
	Var2 = { unk_0xF57992155BDFCC67(iLocal_99, 2) };
	fVar5 = unk_0x59DD203239FBDCAD(iLocal_99);
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
	if (!unk_0x844838E5D8A21336(Local_313[2 /*7*/]))
	{
		func_177(&(Local_313[2 /*7*/]), func_179(2), fVar7, Var2.f_0, uVar0, 50f);
	}
	if (!unk_0x844838E5D8A21336(Local_313[1 /*7*/]))
	{
		func_177(&(Local_313[1 /*7*/]), func_179(1), fVar10, -Var2.f_1, uVar1, 37.3f);
	}
	if (!unk_0x844838E5D8A21336(Local_313[0 /*7*/]))
	{
		func_177(&(Local_313[0 /*7*/]), func_179(0), fVar8, -Var2.f_1, fVar6, 50f);
	}
	if (!unk_0x844838E5D8A21336(Local_313[3 /*7*/]))
	{
		func_177(&(Local_313[3 /*7*/]), func_179(3), fVar9, Var2.f_1, fVar5, 45f);
	}
	unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
	unk_0x7D1795B1E14EDFFD(Local_313[*iParam0 /*7*/], 1);
}

void func_177(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	uParam0->f_1 = { Param4 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0xFE4F2696906F18A3("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x7D1795B1E14EDFFD(*uParam0, 1);
	unk_0xF24FE6EB928DD893(*uParam0, Param1, uParam0->f_1, fParam7, 0, 1, 1, 2);
	unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
}

var func_178(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x949D03817D2A6977((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_179(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	struct<2> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0xB6900B8CB0ABBD2B(iLocal_96))
	{
	}
	if (!unk_0x5D42322C7DB888D0(iLocal_99, 0))
	{
	}
	unk_0xA8349C905E4A8DE7(unk_0x6D5BB810CC209E15(iLocal_99), &uVar3, &Var6);
	Var9 = { unk_0xEA9A8033D5CFC295(iLocal_99, unk_0x71EC6CC1E45B4DF1(iLocal_99, "windscreen")) };
	Var12 = { unk_0xEABAE14292BF78FB(iLocal_99, Var9) };
	switch (iParam0)
	{
		case 0:
			Var0 = { unk_0xCC31DB73C65552D8(iLocal_99, 0f, (Var6.f_1 + 1.4f), Var12.f_2) };
			break;
		
		case 1:
			Var0 = { unk_0xCC31DB73C65552D8(iLocal_99, 1.5f, (Var6.f_1 + 1.2f), (Var12.f_2 - 0.1f)) };
			break;
		
		case 2:
			Var0 = { unk_0xCC31DB73C65552D8(iLocal_99, -3.7f, 0.7f, Var12.f_2) };
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
	
	unk_0xA8349C905E4A8DE7(unk_0x6D5BB810CC209E15(iLocal_99), &Var6, &uVar9);
	Var0 = { unk_0xEA9A8033D5CFC295(iLocal_99, unk_0x71EC6CC1E45B4DF1(iLocal_99, "windscreen")) };
	Var3 = { unk_0xEABAE14292BF78FB(iLocal_99, Var0) };
	Var3.f_2 = (Var3.f_2 + 0.09f);
	Var6.f_1 = (Var6.f_1 - 1f);
	return unk_0xCC31DB73C65552D8(iLocal_99, 0f, -unk_0xA3C5926D6E5619AE(Var6.f_1), Var3.f_2);
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&Global_25359, iParam0);
	}
	else
	{
		unk_0x77621132305B133B(&Global_25359, iParam0);
	}
}

void func_182(int iParam0)
{
	if (!unk_0x844838E5D8A21336(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0xB1E18FA70927BDAB(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0xB61A035EB3575B09(Local_313[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0x2BF05095F2389894())
	{
		func_185(&(Local_313[*iParam0 /*7*/]));
	}
	if (func_184())
	{
		if (!func_522())
		{
			if (!func_441("PROS_CAM_OC"))
			{
				func_107("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_522())
		{
			if (!func_441("PROS_CAM_TOG"))
			{
				func_107("PROS_CAM_TOG");
			}
		}
		if ((unk_0x3BE6F47A1187EFE0(2, 0) && !unk_0x2BF05095F2389894()) && !func_42(0, 1))
		{
			func_183(iParam0);
			unk_0x7D1795B1E14EDFFD(Local_313[*iParam0 /*7*/], 1);
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
		if (func_461(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_461(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_461(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_184()
{
	if ((func_461(iLocal_51, 16) && func_461(iLocal_51, 64)) && func_461(iLocal_51, 128))
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
	
	unk_0xBD76D2728ECB1AC6(2);
	func_187(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	Var5.f_2 = (-(unk_0xBBDA792448DB5A89(uVar0[2]) / 127f) * 10f);
	Var5.f_1 = ((-Var5.f_2 * 3f) / 10f);
	if (unk_0x720887E96C08F0E8())
	{
		Var5.f_0 = ((unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		Var5.f_0 = (-(unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	fVar8 = (30f * unk_0x0000000050597EE2());
	Var9 = { Var5 };
	if (unk_0xBDC482FE4AF5F4F1(0))
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
	unk_0xC990AF7C56A67ECD(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
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
	*uParam0 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xD78553F3D1E80C89(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 218) * 127f));
		}
		if (!unk_0xD78553F3D1E80C89(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 219) * 127f));
		}
		if (!unk_0xD78553F3D1E80C89(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 220) * 127f));
		}
		if (!unk_0xD78553F3D1E80C89(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 221) * 127f));
		}
	}
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		if (bParam5)
		{
			if (unk_0x720887E96C08F0E8())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xC41E7799A66E5FCB())
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
			if (!func_461(iLocal_49, 256))
			{
				unk_0x5147F4FD3D9AB607(unk_0xC8B93D94F8954288());
				unk_0x7ABE44FB19CAE2E1(unk_0xC8B93D94F8954288(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_72 == 1)
				{
					if (!func_522())
					{
						unk_0x3E0F86DC1C0D4477(unk_0xA34E7C2A5118D638(), 15, 1);
					}
					unk_0x76EF33E3762DAC58(0, 4000, 252);
				}
				else if (iLocal_72 == 2)
				{
					if (!func_522())
					{
						unk_0x3E0F86DC1C0D4477(unk_0xA34E7C2A5118D638(), 10, 1);
					}
					unk_0x76EF33E3762DAC58(0, 4000, 210);
				}
				else
				{
					if (!func_522())
					{
						unk_0x3E0F86DC1C0D4477(unk_0xA34E7C2A5118D638(), 5, 1);
					}
					unk_0x76EF33E3762DAC58(0, 3000, 168);
				}
				func_453(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_298)
		{
			case 0:
				if (unk_0x1E13AB82EFC29B1D(iLocal_96, 876132797))
				{
					unk_0x76EF33E3762DAC58(0, 200, 84);
					unk_0x3A2304A561B7D162(iLocal_99, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			
			case 1:
			case 2:
				if (func_461(iLocal_49, 32768))
				{
					if (func_522())
					{
						iVar0 = unk_0x3355FB379A8F5585(iLocal_79);
					}
					else
					{
						iVar0 = iLocal_79;
					}
					if (unk_0xBC6B93737FCDC466(iVar0))
					{
						fVar1 = unk_0x2091E42376999826(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_495(512))
							{
								unk_0x76EF33E3762DAC58(0, 200, 252);
								unk_0x3A2304A561B7D162(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_190();
								func_189(512);
							}
						}
						else
						{
							func_499(512);
						}
					}
				}
				else if (unk_0x1E13AB82EFC29B1D(iLocal_96, 876132797))
				{
					unk_0x76EF33E3762DAC58(0, 200, 252);
					unk_0x3A2304A561B7D162(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			}
	}
}

void func_189(int iParam0)
{
	if (!func_461(iLocal_52, iParam0))
	{
		func_453(&iLocal_52, iParam0);
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = unk_0xD3A4099D2845F152(unk_0xC8B93D94F8954288());
	iVar0 = (iVar0 + (1 + iLocal_297));
	if (iVar0 > unk_0x3117325A963F173E(unk_0xC8B93D94F8954288()))
	{
		iVar0 = unk_0x3117325A963F173E(unk_0xC8B93D94F8954288());
	}
	unk_0xFE93132CC8944C8C(unk_0xC8B93D94F8954288(), iVar0);
	func_191();
}

void func_191()
{
	if (!func_522())
	{
		return;
	}
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		iLocal_59 = unk_0xD3A4099D2845F152(unk_0xC8B93D94F8954288());
	}
}

bool func_192(int iParam0)
{
	return (((unk_0xCD61E9D5CABC7E35(iParam0, func_48(), func_40(11), 3) || unk_0xCD61E9D5CABC7E35(iParam0, func_48(), func_40(21), 3)) || unk_0xCD61E9D5CABC7E35(iParam0, func_46(), func_39(11), 3)) || unk_0xCD61E9D5CABC7E35(iParam0, func_46(), func_39(21), 3));
}

bool func_193()
{
	return unk_0xCD61E9D5CABC7E35(iLocal_96, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_194(iLocal_96, func_43(), 1), 3);
}

char* func_194(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		iVar1 = unk_0x275BEBE583A163B5(iParam0, 1);
		if (unk_0x5D42322C7DB888D0(iVar1, 0))
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
	if (func_522())
	{
		func_199();
	}
	if (unk_0x8EDA3A22D5F4C0BF(iLocal_96) || unk_0x8EDA3A22D5F4C0BF(unk_0xC8B93D94F8954288()))
	{
		return;
	}
	if (unk_0x531444754C426278(0, 5000) > 2500)
	{
		func_196();
	}
}

void func_196()
{
	if (unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return;
	}
	if (!unk_0x8EDA3A22D5F4C0BF(iLocal_96) && !unk_0x8EDA3A22D5F4C0BF(unk_0xC8B93D94F8954288()))
	{
		if (iLocal_297 == 0)
		{
			func_124("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&uLocal_107))
		{
			func_443(&uLocal_107);
		}
		else if (func_7(&uLocal_107) > unk_0xC6D38B918E72181E(2f, 5f))
		{
			if (!func_461(iLocal_49, 65536))
			{
				func_453(&iLocal_49, 65536);
				unk_0x7ABE44FB19CAE2E1(unk_0xC8B93D94F8954288(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
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
			if (func_198(unk_0xA34E7C2A5118D638()))
			{
				unk_0x7ABE44FB19CAE2E1(iLocal_96, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x7ABE44FB19CAE2E1(iLocal_96, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_198(unk_0xA34E7C2A5118D638()))
			{
				unk_0x7ABE44FB19CAE2E1(iLocal_96, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x7ABE44FB19CAE2E1(iLocal_96, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_198(int iParam0)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return 1;
	}
	return Global_2417071[iParam0 /*306*/].f_227;
}

void func_199()
{
	if (unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return;
	}
	if (func_200(0.4f))
	{
		func_189(4);
	}
	if (func_495(4))
	{
		if (!func_10(&uLocal_110))
		{
			func_443(&uLocal_110);
		}
		else if (func_7(&uLocal_110) > 2f)
		{
			if (!func_495(16) && !func_200(0.4f))
			{
				func_189(16);
				iLocal_61++;
			}
			else if (func_495(16))
			{
				if (!unk_0x8EDA3A22D5F4C0BF(iLocal_96))
				{
					func_499(4);
					func_499(16);
					func_34(&uLocal_110);
				}
			}
		}
	}
}

int func_200(float fParam0)
{
	float fVar0;
	
	if (func_201(unk_0xA34E7C2A5118D638(), 1, 1))
	{
		fVar0 = unk_0xEA326A5E940162EC(unk_0xA34E7C2A5118D638());
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
	if (unk_0xDF73DA5E2287C499(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x06972B20E75CBE06(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426867.f_3[iVar0])
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
	if (!func_522())
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
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347559[func_132(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347565[func_132(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347571[func_132(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347577[func_132(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347535[func_132(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347541[func_132(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347547[func_132(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347553[func_132(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347511[func_132(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347517[func_132(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347523[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347529[func_132(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347583[func_132(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347589[func_132(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347595[func_132(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347601[func_132(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347607[func_132(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347613[func_132(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347619[func_132(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2489474[0 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2489474[1 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2902:
			Global_2489474[2 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3030:
			Global_2489474[3 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3732:
			Global_2489525[func_132(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347625[func_132(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347631[func_132(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347637[func_132(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347643[func_132(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2489499[0 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2489499[1 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2489499[2 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2489499[3 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3029:
			Global_2489499[4 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_205(int iParam0)
{
	if (Global_1347492)
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
			case 2902:
			case 3030:
			case 3732:
			case 3025:
			case 3026:
			case 3027:
			case 3028:
			case 3029:
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
		unk_0x59A0729D503ED758(&Global_2284, 2);
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

int func_209(int iParam0)
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

bool func_210(int iParam0)
{
	var uVar0;
	
	if (func_522())
	{
		uVar0 = unk_0xBC6B93737FCDC466(unk_0x3355FB379A8F5585(iParam0));
	}
	else
	{
		uVar0 = unk_0xBC6B93737FCDC466(iParam0);
	}
	return uVar0;
}

void func_211()
{
	if (unk_0xD5DFCA69ACAA20E3())
	{
		unk_0x31E6EB2040318451(1000);
		unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), func_213(), 1, 0, 0, 1);
		unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), func_212());
		func_512();
		unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
		unk_0x26B3B761603F5232(&iLocal_96);
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
	
	if (func_216(&uLocal_104, 3f) && !unk_0xF96FC657C212A30E(uLocal_103))
	{
		iVar0 = unk_0xF34EE736CF047844(((func_215() - 2f) * 1000f));
		unk_0x7D1795B1E14EDFFD(uLocal_102, 0);
		unk_0xB306DBE9AFBD23A6(uLocal_103, uLocal_102, iVar0, 1, 1);
	}
	if (func_216(&uLocal_104, func_215()))
	{
		unk_0x00F9843B9C06C2E9(1000);
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
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
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
	
	if (unk_0x74238B7708290D43(1, iParam0, &uVar0, 10))
	{
		func_219(&uVar0, uParam1);
	}
}

void func_219(var uParam0, var uParam1)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (unk_0x18BDAFC0B20C2C9E(*uParam0))
		{
			if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
			{
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
				{
					if (unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0) == unk_0xE6E6D9800E15A76C(*uParam0))
					{
						func_116(0);
						unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
						func_512();
						func_507(uParam1);
					}
				}
			}
		}
	}
}

void func_220(var uParam0)
{
	int iVar0;
	
	if (!func_522())
	{
		return;
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_96))
	{
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			iVar0 = unk_0xD3A4099D2845F152(iLocal_96);
			if ((iVar0 - iLocal_60) < 0)
			{
				func_116(0);
				unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
				func_512();
				func_507(uParam0);
			}
		}
	}
}

void func_221(var uParam0)
{
	int iVar0;
	
	if (!func_522())
	{
		return;
	}
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			iVar0 = unk_0xD3A4099D2845F152(unk_0xC8B93D94F8954288());
			if ((iVar0 - iLocal_59) < 0)
			{
				func_116(0);
				unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
				func_512();
				func_507(uParam0);
			}
		}
	}
}

void func_222(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!func_522())
	{
		return;
	}
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x95CCECA3948CFE7B(iVar0))
			{
				Var1 = { unk_0x44C17CCB85A88A1F(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Local_56, Var1) >= 4f)
				{
					func_116(0);
					unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
					func_512();
					func_507(uParam0);
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
	
	if (!func_461(iLocal_49, 16))
	{
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x02831590B216249D(unk_0xA34E7C2A5118D638(), 0);
		}
		func_453(&iLocal_49, 16);
	}
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		iLocal_99 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (func_522())
		{
			if (unk_0xFE7BCFB02217DCDF(iLocal_99))
			{
				unk_0x421A48BD0770CF14(iLocal_99, 1);
				unk_0xD8E33295AE325D41(iLocal_99, 4);
				unk_0xD7901AD2ECEC1350(iLocal_99, 1);
				unk_0x20F2C35BB8206D0D(iLocal_99, 0, 0);
			}
		}
		else
		{
			unk_0x421A48BD0770CF14(iLocal_99, 1);
			unk_0xD8E33295AE325D41(iLocal_99, 4);
			unk_0xD7901AD2ECEC1350(iLocal_99, 1);
		}
		if (!func_359() || !unk_0x0C7EC810080F0459(iLocal_96, iLocal_99, 0))
		{
			func_444(0);
			return;
		}
	}
	else
	{
		func_444(0);
		return;
	}
	func_206();
	if ((!unk_0xF624ACE12DE97FE9(iLocal_99) && unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) && !func_461(iLocal_49, 1024))
	{
		iLocal_295 = 7;
		func_357(1, -1);
		unk_0xC4C141A321D45FD8("SCRIPT\HUD_321_GO", true);
		iLocal_301 = 0;
		func_462("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0x68A38902ADFD05FE(2);
	switch (iLocal_301)
	{
		case 0:
		case 1:
			if (func_522())
			{
				if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					if (unk_0x95CCECA3948CFE7B(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
					{
						if (unk_0x6061DFC4D87F4B3E(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
						{
							if (unk_0xC0ADAF0814175B68(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), -1) == unk_0xC8B93D94F8954288())
							{
								if (unk_0xFE7BCFB02217DCDF(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
								{
									if (!unk_0xD28A89C669EAD2E4(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
									{
										unk_0xFD816D0E738EB817(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0, 0);
									}
								}
								else
								{
									unk_0xF892FC88DC9DD7F8(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0));
									return;
								}
							}
						}
						else
						{
							unk_0x5B12D8AC896C1EC3(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0));
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
				if (func_522())
				{
					func_189(2);
					if (func_522())
					{
						if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
						{
							if (unk_0x6061DFC4D87F4B3E(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
							{
								if (unk_0xFE7BCFB02217DCDF(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
								{
									unk_0x8895A286A9A933D0(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 1);
									unk_0x0782F0CAEA719452(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 4);
									unk_0xCCFFA2E333A3F89B(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 1);
								}
							}
						}
					}
				}
				unk_0x0DF75AF098AD14C9(iLocal_96);
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
			if (func_347(unk_0xC8B93D94F8954288(), 1))
			{
				if (func_345(&sVar1, 0))
				{
					iLocal_48 = unk_0xCA4987CF8AD5A394();
					iVar5 = unk_0xB548555C3ED3CEBE();
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
					{
						if (iVar5 != 4 && iLocal_48 == 4)
						{
							unk_0xDF9B2BE9FFD8B8B5(4);
						}
						else if (iVar5 == 4 && iLocal_48 != 4)
						{
							unk_0xDF9B2BE9FFD8B8B5(1);
						}
					}
					func_330();
					iLocal_301 = 3;
					func_462("Moving to SERVICE_MENU_CHOOSE");
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
			if (unk_0x2BF05095F2389894())
			{
				return;
			}
			unk_0xA1A9589738637B77(3);
			func_310();
			func_281(1, -1, 1, 0, 1, -1082130432, 0, 0);
			func_280(&uVar6, &iVar7, &uVar8, &uVar9, 0);
			unk_0x2BE3C7FA4FCCA784(0, 48, 1);
			unk_0x80904D7F494D0C30(2, 187);
			unk_0x80904D7F494D0C30(2, 188);
			unk_0x80904D7F494D0C30(2, 201);
			iVar0 = 0;
			if (unk_0x68B0A67658F2D9C2())
			{
				if (unk_0xCAB768E5CD52A7FC(2))
				{
					unk_0x2BE3C7FA4FCCA784(0, 1, 1);
					unk_0x2BE3C7FA4FCCA784(0, 2, 1);
					unk_0x27EBD5FFB9CDA1AC(0, 237, 1);
					unk_0x27EBD5FFB9CDA1AC(0, 238, 1);
					unk_0x27EBD5FFB9CDA1AC(0, 241, 1);
					unk_0x27EBD5FFB9CDA1AC(0, 242, 1);
					func_276(0, 0, 0, 1);
					func_275(0, -1, 1);
					if (func_274())
					{
						if (Global_2558198 != iLocal_70)
						{
							unk_0xC4EE38A4CFF7544C(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_70 = Global_2558198;
							func_462("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0x8D9008B8900A28D0(2, 187) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x8D9008B8900A28D0(2, 242))) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x3BE6F47A1187EFE0(0, 33))) || (((unk_0x68B0A67658F2D9C2() && !unk_0xBDC482FE4AF5F4F1(2)) && iVar7 > 100) && (unk_0x693EBB4F13506457() - iLocal_89) > 300))
			{
				unk_0xC4EE38A4CFF7544C(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_462("DOWN pressed!");
				if (iLocal_70 < iLocal_71)
				{
					iLocal_70++;
				}
				else
				{
					iLocal_70 = 0;
				}
				iLocal_89 = unk_0x693EBB4F13506457();
			}
			else if (((unk_0x8D9008B8900A28D0(2, 188) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x8D9008B8900A28D0(2, 241))) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x3BE6F47A1187EFE0(0, 32))) || (((unk_0x68B0A67658F2D9C2() && !unk_0xBDC482FE4AF5F4F1(2)) && iVar7 < -100) && (unk_0x693EBB4F13506457() - iLocal_89) > 300))
			{
				unk_0xC4EE38A4CFF7544C(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_462("UP pressed!");
				if (iLocal_70 > 0)
				{
					iLocal_70 = (iLocal_70 - 1);
				}
				else
				{
					iLocal_70 = iLocal_71;
				}
				iLocal_89 = unk_0x693EBB4F13506457();
			}
			else if (unk_0x58F80A8B3A06F53C(2, 201) || iVar0 == 1)
			{
				unk_0xC4EE38A4CFF7544C(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				unk_0x68A38902ADFD05FE(3);
				func_270();
				unk_0x0CBE045BBBA5CFDE(unk_0xC8B93D94F8954288());
				iLocal_301 = 4;
			}
			func_269(iLocal_70, 1, 1);
			break;
		
		case 4:
			iVar10 = unk_0x0EBA1D918D36CAC8(iLocal_96);
			if (iLocal_297 == 3)
			{
				func_357(1, -1);
				func_268();
				func_267(0);
				iLocal_64 = unk_0x693EBB4F13506457();
				func_124("PROSTITUTES_PARKED_SCENE");
				func_462("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_295 = 6;
				if (iLocal_72 > 0)
				{
					if (func_120(iLocal_96))
					{
						func_119();
					}
					else
					{
						func_444(0);
					}
					return;
				}
				else
				{
					if (func_262() >= 20)
					{
						iVar10 += 20;
						func_225(20);
						unk_0x90115CB23FA58DD6(iLocal_96, iVar10);
					}
					func_444(1);
					return;
				}
			}
			if (!unk_0xF9B86DC1728F1339(func_44(unk_0xC8B93D94F8954288(), 0, 0)))
			{
			}
			else
			{
				func_357(1, -1);
				func_268();
				if (unk_0x9A511CDA7EB7AE70())
				{
					func_453(&iLocal_49, 1024);
					iLocal_297 = 3;
					func_462("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_297 != 3)
				{
					if (func_262() > func_224(iLocal_297))
					{
						func_225(func_224(iLocal_297));
						iVar10 = (iVar10 + func_224(iLocal_297));
					}
					func_35(&uLocal_107, (14f - 4f));
					func_462("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_121();
					iLocal_295 = 11;
				}
				unk_0x90115CB23FA58DD6(iLocal_96, iVar10);
				iLocal_64 = unk_0x693EBB4F13506457();
			}
			break;
	}
}

int func_224(int iParam0)
{
	if (unk_0x9A511CDA7EB7AE70())
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
	
	if (!func_522())
	{
		func_236(func_18(), 1, iParam0);
	}
	else if (!func_235())
	{
		unk_0x09C5EFE71F59E883(iParam0, 0, 0);
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
		if (!unk_0x9A07DDC8D6013A35(func_133()) || unk_0x2661EFA58162BE03())
		{
			Global_2555082 = 1;
			return 0;
		}
		if (Global_2442114)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2555083 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2554598[iVar1 /*72*/].f_2 == 0)
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
	if (bVar0 || unk_0xA697855E051773F2(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB2F39A45C7C097F8(iVar3))
		{
			*uParam0 = func_234(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2554598[*uParam0 /*72*/].f_65 = 1;
				}
			}
			Global_2555074 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2555081 = 1;
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_233(1, iParam4);
			Global_2555081 = 0;
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
			unk_0x59A0729D503ED758(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_121.f_71), 0);
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
				unk_0x57AF313235EC1176();
			}
		}
		else if (!bVar0)
		{
			unk_0xCE4D85A04F5B2192(Global_2554598[iParam0 /*72*/]);
		}
		func_230(&(Global_2554598[iParam0 /*72*/]));
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
		return Global_2554598[iParam0 /*72*/].f_5 == 1;
	}
	return 0;
}

void func_233(int iParam0, var uParam1)
{
	Global_2443392 = uParam1;
	Global_2443391 = iParam0;
}

int func_234(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2554598[iVar0 /*72*/].f_2 == 0)
		{
			if (!func_235())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2554598[iVar0 /*72*/].f_2 = 1;
			Global_2554598[iVar0 /*72*/].f_1 = uParam5;
			Global_2554598[iVar0 /*72*/].f_3 = uParam1;
			Global_2554598[iVar0 /*72*/].f_4 = uParam2;
			Global_2554598[iVar0 /*72*/].f_7 = uParam3;
			Global_2554598[iVar0 /*72*/].f_5 = 0;
			Global_2554598[iVar0 /*72*/] = iParam0;
			Global_2554598[iVar0 /*72*/].f_6 = iParam4;
			Global_2554598[iVar0 /*72*/].f_68 = uParam8;
			Global_2554598[iVar0 /*72*/].f_67 = uParam7;
			Global_2554598[iVar0 /*72*/].f_71 = 0;
			Global_2555074 = 0;
			if (bParam6)
			{
				Global_2554598[iVar0 /*72*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_235()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	if (Global_100976.f_32519[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_100976.f_32519[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_237(Global_100976.f_32519[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
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
					switch (unk_0xFD88B4E9AD4F4CC0())
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
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_2[Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_2[Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_2[Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_100976.f_25033.f_233[iVar2 /*69*/]++;
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_1++;
		if (Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_239(iParam0);
	if (Global_35700 == 15)
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

void func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52834[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x071958EFED9481F5(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x071958EFED9481F5(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x071958EFED9481F5(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_240(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_25033.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x77621132305B133B(&(Global_100976.f_25033.f_471), iParam0);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_100976.f_25033.f_471, iParam0) || unk_0xDCC86F723E82125E(Global_2097152[func_242() /*10270*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x77621132305B133B(&(Global_100976.f_25033.f_471), iParam0);
		unk_0x77621132305B133B(&(Global_2097152[func_242() /*10270*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x12F4A48D84A3989D("COUP_RED");
		unk_0xCE59E3E42586D52D(func_241(iParam0));
		unk_0x5EAB76FB4193096C(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_25033.f_471, iParam0);
	}
	return unk_0xDCC86F723E82125E(Global_2097152[func_242() /*10270*/].f_7698.f_10, iParam0);
}

int func_245(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xE7748C036820596E(27))
	{
		return 0;
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x5F0618A5FDAD55C4(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x071958EFED9481F5(joaat("num_cash_spent"), iVar1, 1);
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
	if (func_523(14) && !func_258(iParam0))
	{
		return 0;
	}
	if (unk_0xE7748C036820596E(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25361 != 0 && !Global_69317)
	{
		return 0;
	}
	if (func_257(&Global_2559690))
	{
		if (func_255(&Global_2559690, iParam0))
		{
			return 0;
		}
		if (func_248(&Global_2559690, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x345CE5A66E49ED43(iParam0))
		{
			return 0;
		}
		if (unk_0xE7748C036820596E(iParam0))
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
	
	if (unk_0xE7748C036820596E(iParam1))
	{
		return 0;
	}
	if (func_523(14) && !func_258(iParam1))
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
	
	if (unk_0xE7748C036820596E(iParam1))
	{
		return 0;
	}
	if (func_523(14) && !func_258(iParam1))
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
	func_253(uParam0, (Global_2559689 - 0.5f));
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
	
	unk_0x5F0618A5FDAD55C4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x071958EFED9481F5(iParam0, iVar0, 1);
}

void func_260(int iParam0, int iParam1)
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
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0x5F0618A5FDAD55C4(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x071958EFED9481F5(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_261()
{
	int iVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		unk_0x5F0618A5FDAD55C4(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52834[0] == iVar0)
		{
			Global_52834[0] = iVar0;
		}
		unk_0x5F0618A5FDAD55C4(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52834[1] == iVar0)
		{
			Global_52834[1] = iVar0;
		}
		unk_0x5F0618A5FDAD55C4(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52834[2] == iVar0)
		{
			Global_52834[2] = iVar0;
		}
	}
}

int func_262()
{
	if (func_522())
	{
		return func_264(unk_0xA34E7C2A5118D638());
	}
	return func_263(func_18());
}

int func_263(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x5F0618A5FDAD55C4(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x5F0618A5FDAD55C4(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x5F0618A5FDAD55C4(joaat("sp2_total_cash"), &uVar0, -1);
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
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return unk_0x72D1BAEDECBD9BCB(-1);
		}
		else if (func_266(iParam0))
		{
			return Global_1587175[iParam0 /*410*/].f_192.f_3;
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
		return unk_0xDCC86F723E82125E(Global_2426867.f_1, iParam0);
	}
	return 1;
}

void func_267(int iParam0)
{
	if (unk_0x50421F238A334931() != 255)
	{
		unk_0x60FC6B9DB3F6108E(iParam0);
		unk_0xD7BF5CCDFF2ECA3C(iParam0);
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
	
	Global_17257.f_5606 = iParam0;
	Global_17257.f_5741 = iParam2;
	if (Global_17257.f_5606 < Global_17257.f_5605)
	{
		Global_17257.f_5605 = Global_17257.f_5606;
	}
	else if ((Global_17257.f_5599 && Global_17257.f_5606 > Global_17257.f_5607) || (!Global_17257.f_5599 && Global_17257.f_5606 >= (Global_17257.f_5605 + Global_17257.f_5095)))
	{
		iVar0 = Global_17257.f_5605;
		while (iVar0 <= Global_17257.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17257.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5095 && Global_17257.f_5605 < 128)
		{
			Global_17257.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5605;
			while (iVar0 <= Global_17257.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17257.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17257.f_4562), "", 16);
		StringCopy(&(Global_2558122.f_21), "", 16);
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
			unk_0xC4C141A321D45FD8("PROSTITUTE_BLOWJOB", false);
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
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		if (Global_2558198 > -1)
		{
			if (unk_0x8D9008B8900A28D0(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_275(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xBDC482FE4AF5F4F1(2))
	{
		return 0;
	}
	if (unk_0x2BF05095F2389894() || unk_0x0657FBBA38D8BD02())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xE4D30FD564C6B6BB();
	}
	if (Global_2558198 == -6)
	{
		unk_0xA230EF2CD00B4205(4);
		if (iParam0 && unk_0x0139E142C27412BC(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2558198 = -1;
			return 0;
		}
	}
	if (((Global_2558198 > -1 || Global_2558198 == -3) || Global_2558198 == -2) || unk_0xCB27D2C7F9F87988())
	{
		unk_0xA230EF2CD00B4205(1);
		return 0;
	}
	if (Global_2558198 == -1 && iParam0)
	{
		if (unk_0x0139E142C27412BC(2, 237))
		{
			unk_0xA230EF2CD00B4205(4);
			Global_2558198 = -6;
			return 1;
		}
		else
		{
			unk_0xA230EF2CD00B4205(3);
			return 0;
		}
	}
	unk_0xA230EF2CD00B4205(1);
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
	if (!unk_0xBDC482FE4AF5F4F1(2))
	{
		Global_2558198 = -1;
		return;
	}
	unk_0xF0915BA609958963(1);
	fVar0 = Global_17254;
	fVar2 = (fVar0 + Global_17256);
	fVar3 = Global_17257.f_5600;
	fVar1 = (Global_17257.f_5600 - (IntToFloat(Global_17257.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17257.f_5602 < 1)
	{
		fVar1 = (Global_17257.f_5600 - 0.034722f);
	}
	unk_0xF799955FDE53592F(76, 84);
	unk_0x9490392D9BB13748(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xF3B8873A3C140592(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xF3B8873A3C140592(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xFA99CE7438CDE58B();
	func_279();
	if (Global_2558198 == -6)
	{
		return;
	}
	Global_2558198 = -1;
	fVar7 = Global_2558192;
	fVar8 = Global_2558193;
	if (Global_17257.f_5603 > Global_17257.f_5602)
	{
		if (((Global_2558192 >= fVar0 && Global_2558192 <= fVar2) && Global_2558193 >= fVar3) && Global_2558193 < (fVar3 + fVar6))
		{
			Global_2558198 = -2;
			if (bParam3)
			{
				func_278(0);
			}
			return;
		}
		if (((Global_2558192 >= fVar0 && Global_2558192 <= fVar2) && Global_2558193 >= (fVar3 + fVar6)) && Global_2558193 < (fVar3 + 0.034722f))
		{
			Global_2558198 = -3;
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
		if (Global_17257.f_5603 == -1)
		{
			Global_2558198 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17257.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xF799955FDE53592F(76, 84);
				unk_0x9490392D9BB13748(-0.05f, -0.05f, 0f, 0f);
				func_277(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17256, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xFA99CE7438CDE58B();
			}
		}
		Global_2558198 = Global_17257.f_7483[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2558198 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2558198 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2558198 = -4;
		return;
	}
	Global_2558198 = -1;
}

void func_277(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x27C156B95D022EC9((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
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
	fVar1 = Global_17257.f_5600;
	unk_0xF799955FDE53592F(76, 84);
	unk_0x9490392D9BB13748(-0.05f, -0.05f, 0f, 0f);
	if (Global_2558198 == -2)
	{
		func_277(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2558198 == -3)
	{
		func_277(fVar0, (fVar1 + fVar2), Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xFA99CE7438CDE58B();
}

void func_279()
{
	Global_2558194 = Global_2558192;
	Global_2558195 = Global_2558193;
	Global_2558192 = unk_0x307ABB011D3E4B3A(2, 239);
	Global_2558193 = unk_0x307ABB011D3E4B3A(2, 240);
	Global_2558196 = (Global_2558192 - Global_2558194);
	Global_2558197 = (Global_2558193 - Global_2558195);
}

void func_280(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x17D1A438B237C217(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x17D1A438B237C217(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x17D1A438B237C217(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x17D1A438B237C217(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x307ABB011D3E4B3A(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x307ABB011D3E4B3A(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x307ABB011D3E4B3A(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x307ABB011D3E4B3A(2, 221) * 127f));
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
	unk_0xF799955FDE53592F(76, 84);
	unk_0x9490392D9BB13748(-0.05f, -0.05f, 0f, 0f);
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
	if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_1)) == unk_0x7CBED6EFED40E7EB("HIDE"))
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
		unk_0x94AEC7924AE05010(&iVar57, &iVar58);
		fVar60 = unk_0xA2A5649E3ACE3459(0);
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
		unk_0x6DDF2AF05E6AEC85(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5598)
		{
			if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_1)) == unk_0x7CBED6EFED40E7EB("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					unk_0xA64F50A8AA9DA3F5(func_303(29), func_301(29, 1), (Global_17254 + (fParam5 * 0.5f)), (Global_17255 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7827)
				{
					iVar1 = Global_17257.f_7823;
					iVar2 = Global_17257.f_7824;
					iVar3 = Global_17257.f_7825;
					iVar4 = Global_17257.f_7826;
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
				if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_1)) != 0)
				{
					func_300();
					unk_0xCF61D472051E607A(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							unk_0x6DC80A902A91958F(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							unk_0x36E8D9048E194806(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							unk_0xCE59E3E42586D52D(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							unk_0xCE59E3E42586D52D(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							unk_0x2DED6C1306496257(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							unk_0xCE59E3E42586D52D(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							unk_0x2DED6C1306496257(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x0A3C6E0278C7BCEF((Global_17254 + 0.00390625f), ((Global_17255 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17257.f_5601 > Global_17257.f_5095)
				{
					if (Global_17257.f_5604 != 0)
					{
						func_300();
						func_298((((Global_17254 + fParam5) - 0.00390625f) - func_299("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603)), ((Global_17255 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
					}
				}
			}
			iVar6 = Global_17257.f_5605;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7837)
			{
				iVar1 = Global_17257.f_7833;
				iVar2 = Global_17257.f_7834;
				iVar3 = Global_17257.f_7835;
				iVar4 = Global_17257.f_7836;
			}
			else
			{
				unk_0x7068E8DB78AD0A08(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5095 && iVar6 <= Global_17257.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5355[iVar6])
					{
						if (Global_17257.f_5226[iVar6] && iVar6 != Global_17257.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5612[iVar6];
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
					if (Global_17257.f_5088 <= 1)
					{
						Global_17257.f_5088++;
					}
					iVar52 = 1;
				}
			}
			unk_0xA64F50A8AA9DA3F5("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5601 > Global_17257.f_5095)
			{
				if (Global_17257.f_7842)
				{
					iVar1 = Global_17257.f_7838;
					iVar2 = Global_17257.f_7839;
					iVar3 = Global_17257.f_7840;
					iVar4 = Global_17257.f_7841;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_277(Global_17254, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0xA5CAA351B4D63EED("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17257.f_7855)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x7068E8DB78AD0A08(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xA64F50A8AA9DA3F5("CommonMenu", "shop_arrows_upANDdown", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar59), ((Var37.f_1 / 720f) * fVar59), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_4562)) != 0 && Global_17257.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_17257.f_4638 != 0)
				{
					func_305(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_297(fVar41);
				unk_0x548E1AD8C1DF94D8(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						unk_0x6DC80A902A91958F(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						unk_0x36E8D9048E194806(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						unk_0xCE59E3E42586D52D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						unk_0x2DED6C1306496257(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						unk_0xCE59E3E42586D52D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						unk_0x2DED6C1306496257(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x4CFD8F4D70D1B26B(fVar41, (fVar49 + 0.00277776f));
				unk_0x7068E8DB78AD0A08(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_277(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7847)
				{
					iVar1 = Global_17257.f_7843;
					iVar2 = Global_17257.f_7844;
					iVar3 = Global_17257.f_7845;
					iVar4 = Global_17257.f_7846;
				}
				else
				{
					unk_0x7068E8DB78AD0A08(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xA64F50A8AA9DA3F5("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x2BAF9380E92B73CD(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x2BAF9380E92B73CD(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_297(fVar41);
				unk_0xCF61D472051E607A(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						unk_0x6DC80A902A91958F(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						unk_0x36E8D9048E194806(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						unk_0xCE59E3E42586D52D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						unk_0x2DED6C1306496257(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						unk_0xCE59E3E42586D52D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						unk_0x2DED6C1306496257(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 8)
					{
						unk_0xCE59E3E42586D52D(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x0A3C6E0278C7BCEF(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17257.f_4638 != 0)
				{
					func_305(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_296(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0xA64F50A8AA9DA3F5(func_303(Global_17257.f_4638), func_301(Global_17257.f_4638, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x2BAF9380E92B73CD(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17257.f_4636 > 0)
				{
					if ((unk_0x693EBB4F13506457() - Global_17257.f_4637) > Global_17257.f_4636)
					{
						StringCopy(&(Global_17257.f_4562), "", 16);
						Global_17257.f_4636 = -1;
					}
				}
			}
			if (unk_0x7CBED6EFED40E7EB(&(Global_2558122.f_21)) != 0 && Global_2558122.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_2558122.f_67 != 0)
				{
					func_305(Global_2558122.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_297(fVar41);
				unk_0x548E1AD8C1DF94D8(&(Global_2558122.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2558122.f_61)
				{
					if (Global_2558122.f_25[iVar14] == 2)
					{
						unk_0x6DC80A902A91958F(Global_2558122.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2558122.f_25[iVar14] == 3)
					{
						unk_0x36E8D9048E194806(Global_2558122.f_34[iVar16], Global_2558122.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2558122.f_25[iVar14] == 1)
					{
						unk_0xCE59E3E42586D52D(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 5)
					{
						unk_0x2DED6C1306496257(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 6)
					{
						unk_0xCE59E3E42586D52D(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 7)
					{
						unk_0x2DED6C1306496257(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 8)
					{
						unk_0xCE59E3E42586D52D(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x4CFD8F4D70D1B26B(fVar41, (fVar49 + 0.00277776f));
				unk_0x7068E8DB78AD0A08(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_277(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7847)
				{
					iVar1 = Global_17257.f_7843;
					iVar2 = Global_17257.f_7844;
					iVar3 = Global_17257.f_7845;
					iVar4 = Global_17257.f_7846;
				}
				else
				{
					unk_0x7068E8DB78AD0A08(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xA64F50A8AA9DA3F5("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x2BAF9380E92B73CD(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x2BAF9380E92B73CD(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_297(fVar41);
				unk_0xCF61D472051E607A(&(Global_2558122.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2558122.f_61)
				{
					if (Global_2558122.f_25[iVar14] == 2)
					{
						unk_0x6DC80A902A91958F(Global_2558122.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2558122.f_25[iVar14] == 3)
					{
						unk_0x36E8D9048E194806(Global_2558122.f_34[iVar16], Global_2558122.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2558122.f_25[iVar14] == 1)
					{
						unk_0xCE59E3E42586D52D(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 8)
					{
						unk_0xCE59E3E42586D52D(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 5)
					{
						unk_0x2DED6C1306496257(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 6)
					{
						unk_0xCE59E3E42586D52D(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2558122.f_25[iVar14] == 7)
					{
						unk_0x2DED6C1306496257(&(Global_2558122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x0A3C6E0278C7BCEF(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2558122.f_67 != 0)
				{
					func_305(Global_2558122.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_296(Global_2558122.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xA64F50A8AA9DA3F5(func_303(Global_2558122.f_67), func_301(Global_2558122.f_67, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x2BAF9380E92B73CD(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2558122.f_65 > 0)
				{
					if ((unk_0x693EBB4F13506457() - Global_2558122.f_66) > Global_2558122.f_65)
					{
						StringCopy(&(Global_2558122.f_21), "", 16);
						Global_2558122.f_65 = -1;
					}
				}
			}
			func_289(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xF799955FDE53592F(76, 84);
			unk_0x9490392D9BB13748(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5598)
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
			iVar63 = Global_17257.f_5088;
			if (Global_17257.f_5599)
			{
				iVar63 = (Global_17257.f_5602 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5612[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5612[iVar6];
				}
				if (Global_17257.f_5599)
				{
					iVar6 = Global_17257.f_7483[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17257.f_5605 && iVar9 < Global_17257.f_5095)
				{
					bVar32 = true;
					if (Global_17257.f_5606 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17257.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17254 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17257.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7849)
					{
						unk_0x7068E8DB78AD0A08(Global_17257.f_7848, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0x7068E8DB78AD0A08(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xA64F50A8AA9DA3F5("CommonMenu", "Gradient_Nav", (Global_17254 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5744 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_287(bVar31, 1, 0, 0, 0, 0);
					unk_0xCF61D472051E607A("DFLT_MNU_OPT");
					unk_0x0A3C6E0278C7BCEF(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17257.f_5096)
					{
						if (unk_0xDCC86F723E82125E(Global_17257.f_4959[iVar6], iVar8) || Global_17257.f_4926[iVar8] == 5)
						{
							if (Global_17257.f_5599)
							{
								iVar19 = Global_17257.f_7494[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar20 = Global_17257.f_7535[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar21 = Global_17257.f_7576[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar22 = Global_17257.f_7617[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar23 = Global_17257.f_7658[((iVar9 * Global_17257.f_5096) + iVar8)];
							}
							else
							{
								Global_17257.f_7494[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar19;
								Global_17257.f_7535[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar20;
								Global_17257.f_7576[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar21;
								Global_17257.f_7617[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar22;
								Global_17257.f_7658[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17257.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5875[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5875[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17254 + 0.0046875f) + Global_17257.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17257.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17257.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17254 + Global_17256) - 0.0046875f) - fVar33);
							}
							if ((Global_17257.f_4945[iVar8] && Global_17257.f_5741) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17257.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_287(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, iVar70, bVar50);
												unk_0xC8E81EDC1522FA75(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xCE59E3E42586D52D(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xCE59E3E42586D52D(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x2DED6C1306496257(&(Global_2441493[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xCE59E3E42586D52D(&(Global_2441493[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x2DED6C1306496257(&(Global_2441493[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x6DC80A902A91958F(Global_17257.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x36E8D9048E194806(Global_17257.f_4175[(iVar21 + iVar27)], Global_17257.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0xF274F7A6105B230D(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_305(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17257.f_4433[(iVar22 + iVar14)] == 2 || Global_17257.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
											Global_17257.f_7781[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar43 = Global_17257.f_7781[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_305(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_305(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xA64F50A8AA9DA3F5(func_303(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_305(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_305(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xA64F50A8AA9DA3F5(func_303(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_287(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, bVar50);
											if (Global_17257.f_7853 && Global_17257.f_7854 == iVar6)
											{
												func_286(bVar31);
											}
											unk_0xCF61D472051E607A(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xCE59E3E42586D52D(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xCE59E3E42586D52D(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x2DED6C1306496257(&(Global_2441493[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xCE59E3E42586D52D(&(Global_2441493[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x2DED6C1306496257(&(Global_2441493[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6DC80A902A91958F(Global_17257.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x36E8D9048E194806(Global_17257.f_4175[(iVar21 + iVar27)], Global_17257.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4433[(iVar22 + iVar28)] == 2 || Global_17257.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_305(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_305(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_296(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																unk_0xA64F50A8AA9DA3F5(func_303(Global_17257.f_4433[(iVar22 + iVar28)]), func_301(Global_17257.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xA64F50A8AA9DA3F5(func_303(Global_17257.f_4433[(iVar22 + iVar28)]), func_301(Global_17257.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4953[iVar8] == 2)
											{
												unk_0x0A3C6E0278C7BCEF(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x0A3C6E0278C7BCEF((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4433[(iVar22 + iVar14)] != 2 && Global_17257.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_305(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_305(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_296(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xA64F50A8AA9DA3F5(func_303(Global_17257.f_4433[(iVar22 + iVar14)]), func_301(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), (Global_17254 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																unk_0xA64F50A8AA9DA3F5(func_303(Global_17257.f_4433[(iVar22 + iVar14)]), func_301(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xA64F50A8AA9DA3F5(func_303(Global_17257.f_4433[(iVar22 + iVar14)]), func_301(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_287(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7853 && Global_17257.f_7854 == iVar6)
											{
												func_286(bVar31);
											}
											unk_0xC8E81EDC1522FA75("NUMBER");
											unk_0x6DC80A902A91958F(Global_17257.f_3918[iVar20]);
											fVar42 = unk_0xF274F7A6105B230D(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_305(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_305(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xA64F50A8AA9DA3F5(func_303(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_305(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_305(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xA64F50A8AA9DA3F5(func_303(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_287(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
										func_285((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_287(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7853 && Global_17257.f_7854 == iVar6)
											{
												func_286(bVar31);
											}
											unk_0xC8E81EDC1522FA75("NUMBER");
											unk_0x36E8D9048E194806(Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
											fVar42 = unk_0xF274F7A6105B230D(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_305(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_305(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xA64F50A8AA9DA3F5(func_303(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_305(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_305(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xA64F50A8AA9DA3F5(func_303(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_287(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
										func_284((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_305(Global_17257.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17257.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17257.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
												Global_17257.f_7781[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)];
												fVar43 = Global_17257.f_7781[((iVar9 * Global_17257.f_5096) + iVar8)];
											}
											if (bVar51)
											{
												if (func_305(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_305(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_296(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xA64F50A8AA9DA3F5(func_303(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_305(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_305(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_296(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xA64F50A8AA9DA3F5(func_303(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_305(Global_17257.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_296(Global_17257.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xA64F50A8AA9DA3F5(func_303(Global_17257.f_4433[iVar22]), func_301(Global_17257.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_283(Global_17257.f_4433[iVar22])), (fVar36 * func_283(Global_17257.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17257.f_4926[iVar8] == 5)
							{
								if (Global_17257.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
								if (Global_17257.f_4945[iVar8])
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
							fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17257.f_7483[iVar9] = iVar6;
						Global_17257.f_5607 = iVar6;
						iVar9++;
						if (Global_17257.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17257.f_5612[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17257.f_5598)
					{
						Global_17257.f_5355[iVar6] = 1;
						if (Global_17257.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17257.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17257.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5598)
			{
				Global_17257.f_5600 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17257.f_5603 = iVar11;
				Global_17257.f_5601 = iVar10;
				Global_17257.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5599)
	{
		Global_17257.f_5602 = iVar9;
		Global_17257.f_5599 = 1;
	}
	Global_17257.f_5743 = fVar49;
	Global_17257.f_5745 = unk_0x693EBB4F13506457();
	unk_0x416AE03EAAA9AE80(Global_17257.f_5743);
	if (!Global_17257.f_7822)
	{
		func_206();
	}
	Global_17257.f_7822 = 0;
	if (bParam2)
	{
		unk_0x68A38902ADFD05FE(10);
	}
	unk_0x68A38902ADFD05FE(6);
	unk_0x68A38902ADFD05FE(7);
	unk_0x68A38902ADFD05FE(9);
	unk_0x68A38902ADFD05FE(8);
	if (bParam0)
	{
		func_282(1);
	}
	unk_0xFA99CE7438CDE58B();
}

void func_282(int iParam0)
{
	Global_1339929.f_932 = iParam0;
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
	unk_0xCF61D472051E607A(sParam2);
	unk_0x36E8D9048E194806(uParam3, uParam4);
	unk_0x0A3C6E0278C7BCEF(fParam0, fParam1, 0);
}

void func_285(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCF61D472051E607A(sParam2);
	unk_0x6DC80A902A91958F(iParam3);
	unk_0x0A3C6E0278C7BCEF(fParam0, fParam1, iParam4);
}

void func_286(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x7068E8DB78AD0A08(Global_17257.f_7850[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x7068E8DB78AD0A08(Global_17257.f_7850[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, 255);
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
			func_288(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x7068E8DB78AD0A08(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x7068E8DB78AD0A08(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x7068E8DB78AD0A08(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xE626AAE57E9B7B3E(155, 155, 155, 255);
		}
		else
		{
			unk_0xE626AAE57E9B7B3E(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xE626AAE57E9B7B3E(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x7068E8DB78AD0A08(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xE626AAE57E9B7B3E(155, 155, 155, 255);
	}
	else
	{
		unk_0xE626AAE57E9B7B3E(155, 155, 155, 255);
	}
	unk_0x3990B11991B0B160(0f, 0.35f);
	unk_0x46315B58B57BBE2A(1);
	if (bParam5)
	{
		unk_0x3990B11991B0B160(0f, 0.425f);
		unk_0x1F0FA9FF044DCA99(4);
	}
	else
	{
		unk_0x1F0FA9FF044DCA99(0);
	}
	unk_0xC745BF043BF36DC4(0f, 1f);
	unk_0xB29CE0BA729EE68B(0);
	unk_0x0BC95D6E0759A9A3(0, 0, 0, 0, 0);
	unk_0xF2C15C6F8F502102(0, 0, 0, 0, 0);
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
	if (unk_0x23F863EF7FB5E687())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_292(unk_0xA34E7C2A5118D638(), 0))
		{
			return;
		}
	}
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x3CD70C95B221E318() == 0 || unk_0x23F863EF7FB5E687())
		{
			return;
		}
	}
	if (Global_17257.f_4639 != 0)
	{
		if (unk_0x7EF0ED41FC8F3EC1(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4639)
			{
				if (Global_17257.f_4896[iVar1] != 344)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), unk_0x3F78CAF40CD146C4(2, Global_17257.f_4896[iVar1], 1), 64);
				}
				else if (Global_17257.f_4909[iVar1] != 31)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), unk_0x52374D5DBC0F5DC7(2, Global_17257.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17257.f_4640 = 0;
		}
		if (!Global_17257.f_4640)
		{
			unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xD013AC29829DDC02();
			unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x512B59C08EAFA3B9((1f - (Global_17257.f_4951 / 100f)));
			unk_0xD013AC29829DDC02();
			if (unk_0x68B0A67658F2D9C2())
			{
				unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x0139C89EE907A315(1);
				unk_0xD013AC29829DDC02();
			}
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4639)
			{
				if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_4834[iVar1 /*4*/])) != unk_0x7CBED6EFED40E7EB("PREV"))
				{
					unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(iVar1);
					func_291(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x7CBED6EFED40E7EB(&(Global_17257.f_4834[iVar2 /*4*/])) == unk_0x7CBED6EFED40E7EB("PREV"))
					{
						func_291(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_290(&(Global_17257.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x276F16E002D00C0C(&(Global_17257.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xE4CFBF63F6DBED8E(iParam2, 70);
						}
						else
						{
							unk_0x6DC80A902A91958F(iParam2);
						}
						unk_0x354E2E7AA52E941F();
					}
					if (unk_0x68B0A67658F2D9C2())
					{
						if (Global_17257.f_4896[iVar1] != 344 && unk_0xDCC86F723E82125E(Global_17257.f_4922, iVar1))
						{
							unk_0x0139C89EE907A315(1);
							unk_0x65960B4E2ADC9F6D(Global_17257.f_4896[iVar1]);
						}
						else
						{
							unk_0x0139C89EE907A315(0);
							unk_0x65960B4E2ADC9F6D(344);
						}
					}
					unk_0xD013AC29829DDC02();
				}
				iVar1++;
			}
			if (unk_0x7CBED6EFED40E7EB(&(Global_2558122.f_16)) != unk_0x7CBED6EFED40E7EB(""))
			{
				unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(Global_17257.f_4639);
				func_291(&Global_2558122);
				if (Global_2558122.f_20 == -1)
				{
					func_290(&(Global_2558122.f_16));
				}
				else
				{
					unk_0x276F16E002D00C0C(&(Global_2558122.f_16));
					if (bParam5)
					{
						unk_0xE4CFBF63F6DBED8E(iParam2, 70);
					}
					else
					{
						unk_0x6DC80A902A91958F(iParam2);
					}
					unk_0x354E2E7AA52E941F();
				}
				unk_0xD013AC29829DDC02();
			}
			unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x65960B4E2ADC9F6D(0);
			unk_0x65960B4E2ADC9F6D(0);
			unk_0x65960B4E2ADC9F6D(0);
			unk_0x65960B4E2ADC9F6D(80);
			unk_0xD013AC29829DDC02();
			unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4952)
			{
				unk_0x65960B4E2ADC9F6D(1);
			}
			else
			{
				unk_0x65960B4E2ADC9F6D(0);
			}
			unk_0xD013AC29829DDC02();
			Global_17257.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17257.f_4639)
		{
			if (Global_17257.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x65960B4E2ADC9F6D(iVar1);
					unk_0x276F16E002D00C0C(&(Global_17257.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xE4CFBF63F6DBED8E(iParam2, 70);
					}
					else
					{
						unk_0x6DC80A902A91958F(iParam2);
					}
					unk_0x354E2E7AA52E941F();
					unk_0xD013AC29829DDC02();
				}
			}
			iVar1++;
		}
		if (Global_2558122.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x7C38F93AF52620B1(Global_17257.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x65960B4E2ADC9F6D(iVar1);
				unk_0x276F16E002D00C0C(&(Global_2558122.f_16));
				if (bParam5)
				{
					unk_0xE4CFBF63F6DBED8E(iParam2, 70);
				}
				else
				{
					unk_0x6DC80A902A91958F(iParam2);
				}
				unk_0x354E2E7AA52E941F();
				unk_0xD013AC29829DDC02();
			}
		}
		unk_0xF799955FDE53592F(76, 66);
		unk_0x9490392D9BB13748(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17257.f_7857)
			{
				unk_0x6304F4F223560FF0(15, 0f, -0.0375f);
				Global_17257.f_7857 = 1;
			}
		}
		else if (Global_17257.f_7857)
		{
			unk_0x19479CF94A711302(15);
			Global_17257.f_7857 = 0;
		}
		unk_0xFA99CE7438CDE58B();
		if (Global_17257.f_4925)
		{
			unk_0xF799955FDE53592F(82, 66);
			unk_0x9490392D9BB13748(0f, 0f, 0f, 0f);
			unk_0x06D856499865F31F(Global_17257.f_5530[iVar0 /*10*/], Global_17257.f_4923, Global_17257.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xFA99CE7438CDE58B();
		}
		else
		{
			unk_0x16387DB49A36A0F3(Global_17257.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_290(var uParam0)
{
	unk_0x276F16E002D00C0C(uParam0);
	unk_0x354E2E7AA52E941F();
}

void func_291(var uParam0)
{
	unk_0x621B4D0F6ED2315D(uParam0);
}

bool func_292(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_293(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
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
	if (Global_1315889[iVar1] == 1)
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
		unk_0xCE4D902766AE0E55(&Var0);
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_296(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x7068E8DB78AD0A08(1, iParam2, iParam3, iParam4, &uVar0);
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
	
	unk_0x7068E8DB78AD0A08(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x1F0FA9FF044DCA99(0);
	unk_0x3990B11991B0B160(0f, 0.35f);
	unk_0xF9B9E0FCF7607494(2);
	unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, iVar3);
	unk_0xC745BF043BF36DC4(fParam0, ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0xB29CE0BA729EE68B(0);
	unk_0x0BC95D6E0759A9A3(0, 0, 0, 0, 0);
	unk_0xF2C15C6F8F502102(0, 0, 0, 0, 0);
}

void func_298(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCF61D472051E607A(sParam2);
	unk_0x6DC80A902A91958F(uParam3);
	unk_0x6DC80A902A91958F(uParam4);
	unk_0x0A3C6E0278C7BCEF(fParam0, fParam1, 0);
}

float func_299(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x544AEDB4A15228FF(sParam0))
	{
		if (unk_0x7CBED6EFED40E7EB(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_300();
	unk_0xC8E81EDC1522FA75(sParam0);
	unk_0x6DC80A902A91958F(uParam1);
	unk_0x6DC80A902A91958F(uParam2);
	return unk_0xF274F7A6105B230D(1);
}

void func_300()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x7068E8DB78AD0A08(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7832)
	{
		iVar0 = Global_17257.f_7828;
		iVar1 = Global_17257.f_7829;
		iVar2 = Global_17257.f_7830;
		iVar3 = Global_17257.f_7831;
	}
	unk_0x1F0FA9FF044DCA99(0);
	unk_0x3990B11991B0B160(0f, 0.35f);
	unk_0xE626AAE57E9B7B3E(iVar0, iVar1, iVar2, iVar3);
	unk_0xC745BF043BF36DC4((Global_17254 + 0.0046875f), ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0xB29CE0BA729EE68B(0);
	unk_0x0BC95D6E0759A9A3(0, 0, 0, 0, 0);
	unk_0xF2C15C6F8F502102(0, 0, 0, 0, 0);
}

var func_301(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0xB8A06E7E729EED0A(&(Global_17257.f_6682[iParam0 /*16*/])))
	{
		return func_302(&(Global_17257.f_6682[iParam0 /*16*/]));
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
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
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
	if (!unk_0xB8A06E7E729EED0A(&(Global_17257.f_5881[iParam0 /*16*/])))
	{
		return func_302(&(Global_17257.f_5881[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_304()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x94AEC7924AE05010(&iVar0, &iVar1);
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
	if (unk_0x7CBED6EFED40E7EB(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x94AEC7924AE05010(&iVar2, &iVar3);
			fVar5 = unk_0xA2A5649E3ACE3459(0);
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
			if (unk_0xCBC8FFE55DC722B5(joaat("director_mode")) > 0)
			{
				unk_0x6DDF2AF05E6AEC85(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0x6DDF2AF05E6AEC85(&iVar2, &iVar3);
		}
		Var7 = { unk_0xA5CAA351B4D63EED(uVar0, sVar1) };
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
			if (!unk_0xDDC43401E4A15041() && iParam0 != 30)
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
	if (Global_2426867.f_1325.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xB66DD474AA9E764E() || (func_24(8, -1) && func_308() != 64)) || (unk_0x45D1BEB329799891() != 0 && !bParam1)) || (unk_0xA8D4B6BDCF6DE72B() && !bParam0)) || unk_0x2908391F2B0A4C57()) || Global_69577) || Global_17257.f_7856) || unk_0x0657FBBA38D8BD02()) || Global_91158.f_1352)
	{
		return 0;
	}
	return 1;
}

int func_308()
{
	return Global_1315844;
}

int func_309(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0xBBAE3E0C60A8AD4B() && unk_0xEE66E067C1F8D1F4())
		{
			iParam2 = unk_0x3CB5E30F656B4CAA();
		}
	}
	StringCopy(&cVar0, unk_0xC4E68AF0B559FAC4(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x7CBED6EFED40E7EB(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17257.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5591[iVar18] = iVar16;
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
		func_319(&iLocal_304, 0, 0, unk_0x531444754C426278(1, 2), 0, 0, 0);
	}
	else if (!func_461(iLocal_75, 2))
	{
		if (func_311(iLocal_304))
		{
			iLocal_304 = func_328();
			func_319(&iLocal_304, 0, 0, unk_0x531444754C426278(1, 2), 0, 0, 0);
			func_453(&iLocal_75, 2);
		}
	}
	else if (func_311(iLocal_304))
	{
		func_268();
		func_444(0);
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_160(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
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
	
	func_326(&uVar0, unk_0x4C374828FD653ECC());
	func_325(&uVar0, unk_0x44AD07D9D178F321());
	func_324(&uVar0, unk_0x342FDFC48311CCCE());
	func_322(&uVar0, unk_0x818078CDB71D3E9C());
	func_323(&uVar0, unk_0x49D01BEA8D03E892());
	func_321(&uVar0, unk_0x90D477BB666B03DB());
	return uVar0;
}

void func_329(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

void func_330()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_344(1);
	func_267(1);
	unk_0xB7709513BF7C1AC0(0);
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
	iLocal_89 = unk_0x693EBB4F13506457();
	iLocal_301 = 3;
}

void func_331()
{
	Global_17118.f_5 = 1;
}

int func_332(int iParam0)
{
	int iVar0;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		iVar0 = unk_0x6D5BB810CC209E15(iParam0);
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
	
	if (Global_17257.f_5092 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	Global_17257.f_3918[Global_17257.f_5092] = iParam0;
	Global_17257.f_5092++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 2;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_335();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_305(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4938[(Global_17257.f_5089 - 1)])
		{
			Global_17257.f_4938[(Global_17257.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_334();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
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
	while (iVar0 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17257.f_4433[((Global_17257.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_305(Global_17257.f_4433[((Global_17257.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x2BAF9380E92B73CD(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x2BAF9380E92B73CD(0.35f, 0);
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
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_287(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		unk_0xC8E81EDC1522FA75(&(Global_17257.f_73[Global_17257.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0xCE59E3E42586D52D(&(Global_17257.f_73[(Global_17257.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0xCE59E3E42586D52D(&(Global_17257.f_73[(Global_17257.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x6DC80A902A91958F(Global_17257.f_3918[((Global_17257.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x36E8D9048E194806(Global_17257.f_4175[((Global_17257.f_5093 - iVar4) + iVar10)], Global_17257.f_4304[((Global_17257.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x2DED6C1306496257(&(Global_2441493[((Global_17257.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0xCE59E3E42586D52D(&(Global_2441493[((Global_17257.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x2DED6C1306496257(&(Global_2441493[((Global_17257.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x7CBED6EFED40E7EB(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0xF274F7A6105B230D(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17257.f_4433[((Global_17257.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_305(Global_17257.f_4433[((Global_17257.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
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
	
	if (Global_17257.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5088 >= 128)
	{
		return;
	}
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 < Global_17257.f_5608)
	{
		return;
	}
	if (Global_17257.f_5088 != iParam0)
	{
		Global_17257.f_5088 = iParam0;
		Global_17257.f_5089 = 0;
	}
	iVar0 = Global_17257.f_4926[Global_17257.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 1)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0xB8A06E7E729EED0A(sParam1) && !unk_0xF2831232D38CD691(sParam1))
	{
	}
	Global_17257.f_1610[Global_17257.f_5090] = iParam3;
	Global_17257.f_1867[Global_17257.f_5090] = iParam4;
	Global_17257.f_5090++;
	if (iParam2 == 0)
	{
		fVar1 = func_338(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_305(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
		{
			Global_17257.f_4938[Global_17257.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_337(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
			if (fVar4 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x59A0729D503ED758(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 1;
	Global_17257.f_5609 = (Global_17257.f_5090 - 1);
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = iParam2;
}

float func_337(char* sParam0)
{
	if (!unk_0xF2831232D38CD691(sParam0))
	{
	}
	return unk_0x2BAF9380E92B73CD(0.35f, 0);
}

float func_338(char* sParam0)
{
	if (!unk_0x544AEDB4A15228FF(sParam0))
	{
		if (unk_0x7CBED6EFED40E7EB(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_287(0, 1, 0, 0, 0, 0);
	unk_0xC8E81EDC1522FA75(sParam0);
	return unk_0xF274F7A6105B230D(1);
}

void func_339(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x3F78CAF40CD146C4(2, iParam0, 1);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2558122, sVar0, 64);
		StringCopy(&(Global_2558122.f_16), sParam1, 16);
		Global_2558122.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x59A0729D503ED758(&(Global_17257.f_4922), Global_17257.f_4639);
	}
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 31;
	Global_17257.f_4639++;
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
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4926[0] = iParam0;
	Global_17257.f_4926[1] = iParam1;
	Global_17257.f_4926[2] = iParam2;
	Global_17257.f_4926[3] = iParam3;
	Global_17257.f_4926[4] = iParam4;
	Global_17257.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5096++;
	}
}

void func_343(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2441493[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17257.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4959[iVar0] = 0;
		Global_17257.f_5097[iVar0] = 0;
		Global_17257.f_5226[iVar0] = 0;
		Global_17257.f_5746[iVar0] = 0f;
		Global_17257.f_5355[iVar0] = 0;
		Global_17257.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4926[iVar0] = 0;
		Global_17257.f_4938[iVar0] = 0f;
		Global_17257.f_4932[iVar0] = -1f;
		Global_17257.f_4945[iVar0] = 0;
		Global_17257.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 344;
		Global_17257.f_4909[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_17257.f_5881[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6682[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2558122.f_16), "", 16);
	Global_2558122.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5088 = 0;
	Global_17257.f_5089 = 0;
	Global_17257.f_5090 = 0;
	Global_17257.f_5092 = 0;
	Global_17257.f_5093 = 0;
	Global_17257.f_5094 = 0;
	Global_17257.f_5091 = 0;
	Global_17257.f_5741 = 0;
	Global_17257.f_5606 = 0;
	Global_17257.f_5605 = 0;
	Global_17257.f_5607 = 0;
	StringCopy(&(Global_17257.f_4562), "", 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = 0;
	Global_17257.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4638 = 0;
	StringCopy(&(Global_2558122.f_21), "", 16);
	Global_2558122.f_61 = 0;
	Global_2558122.f_62 = 0;
	Global_2558122.f_63 = 0;
	Global_2558122.f_64 = 0;
	Global_2558122.f_65 = 0;
	Global_2558122.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2558122.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2558122.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4944 = 0f;
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
	Global_17257.f_5611 = 0;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = 0;
	Global_17257.f_5609 = 0;
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	Global_17257.f_5095 = 10;
	Global_17257.f_5096 = 0;
	Global_17257.f_5743 = 0f;
	Global_17257.f_5744 = 0f;
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	Global_17257.f_5600 = 0f;
	Global_17257.f_5601 = 0;
	Global_17257.f_5603 = 0;
	Global_17257.f_5602 = 0;
	Global_17257.f_5604 = 0;
	Global_17257.f_7853 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5875[iVar0] = -1;
		Global_17257.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4951 = 0f;
	Global_17257.f_4922 = 0;
	Global_17257.f_4952 = 0;
	Global_17257.f_7832 = 0;
	Global_17257.f_7827 = 0;
	Global_17257.f_7837 = 0;
	Global_17257.f_7842 = 0;
	Global_17257.f_7847 = 0;
	Global_17257.f_7849 = 0;
	Global_17257.f_7855 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = unk_0xA2A5649E3ACE3459(0);
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
		Global_99620 = unk_0x693EBB4F13506457() + 250;
	}
	Global_99617 = bParam0;
}

int func_345(char* sParam0, int iParam1)
{
	if (func_262() < func_224(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (unk_0xBBAE3E0C60A8AD4B() && func_346(unk_0xA34E7C2A5118D638()))
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
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 0);
	}
	return 0;
}

int func_347(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0xF9B86DC1728F1339(func_44(unk_0xC8B93D94F8954288(), 0, 0)))
	{
	}
	else if (!unk_0xCD61E9D5CABC7E35(iParam0, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_103(bParam1), 3) && unk_0x090C65D5190A249D(iParam0, -2017877118) != 1)
	{
		if (func_522())
		{
			if (iParam0 == unk_0xC8B93D94F8954288())
			{
				if (!func_198(unk_0xA34E7C2A5118D638()))
				{
					iVar0 = unk_0x3A59BCC40A12FD28(unk_0xC8B93D94F8954288(), 6);
					if (!func_495(256))
					{
						func_189(256);
						iLocal_86 = iVar0;
						iLocal_87 = unk_0x268F3DC177BF5D38(unk_0xC8B93D94F8954288(), 6);
						unk_0x8C245572EDB27776(unk_0xC8B93D94F8954288(), 6, 1, 0, 0);
						func_189(1024);
					}
				}
				unk_0x5323F488E6A1B660(iParam0, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_348(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x5323F488E6A1B660(iParam0, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_348(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			unk_0x5323F488E6A1B660(iParam0, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_348(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (unk_0xCD61E9D5CABC7E35(iParam0, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_348(bParam1), 3))
		{
			if (unk_0x853B39ECA83DA242(iParam0, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_348(bParam1)) >= 0.95f)
			{
				unk_0x5323F488E6A1B660(iParam0, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_103(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (unk_0xCD61E9D5CABC7E35(iParam0, func_44(unk_0xC8B93D94F8954288(), 0, 0), func_103(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_348(bool bParam0)
{
	if (!func_461(iLocal_49, 32768))
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
	if (unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return;
	}
	unk_0x5147F4FD3D9AB607(iLocal_96);
	if (!unk_0x8EDA3A22D5F4C0BF(iLocal_96))
	{
		if (iLocal_72 < 1)
		{
			unk_0x7ABE44FB19CAE2E1(iLocal_96, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x7ABE44FB19CAE2E1(iLocal_96, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_352()
{
	if (func_353(0, -1, 0) && unk_0xC4C141A321D45FD8("SCRIPT\HUD_321_GO", true))
	{
		return 1;
	}
	return 0;
}

bool func_353(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_309(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17257.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xB8A06E7E729EED0A(&(Global_17257.f_5505[iVar0 /*4*/])))
	{
		unk_0xF3AC452C34BF0E13(&(Global_17257.f_5505[iVar0 /*4*/]), 9);
		Global_17257.f_5498[iVar0] = 1;
		if (!unk_0xBDD1A745DB5C5678(&(Global_17257.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x1F0D08B8266D20DB("CommonMenu", false);
	Global_17257.f_5484[iVar0] = 1;
	if (!unk_0x701C5CF3E1956924("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x1F0D08B8266D20DB("MPShopSale", false);
		Global_17257.f_5491[iVar0] = 1;
		if (!unk_0x701C5CF3E1956924("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17257.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_354(&(Global_17257.f_5530[iVar0 /*10*/]));
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
			if (!unk_0xF518F3C7FACD43B7(*uParam0))
			{
				*uParam0 = unk_0x31DC2CEFEF13C96D(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xF518F3C7FACD43B7(*uParam0))
					{
						uParam0->f_8 = unk_0x693EBB4F13506457();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x693EBB4F13506457();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xF518F3C7FACD43B7(*uParam0))
			{
				uParam0->f_8 = unk_0x693EBB4F13506457();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xF518F3C7FACD43B7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_355()
{
	if (!func_522())
	{
		return;
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_96))
	{
		iLocal_60 = unk_0xD3A4099D2845F152(iLocal_96);
	}
}

void func_356()
{
	int iVar0;
	
	if (!func_522())
	{
		return;
	}
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x95CCECA3948CFE7B(iVar0))
			{
				Local_56 = { unk_0x44C17CCB85A88A1F(iVar0, 1) };
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
	if (Global_17257.f_7857)
	{
		unk_0x19479CF94A711302(15);
		Global_17257.f_7857 = 0;
	}
	unk_0x416AE03EAAA9AE80(0f);
	if (Global_17257.f_5498[iVar0])
	{
		unk_0x48591CDE727D1F6A(9, false);
		Global_17257.f_5498[iVar0] = 0;
	}
	if (Global_17257.f_5484[iVar0])
	{
		unk_0x26574ED84900A376("CommonMenu");
		Global_17257.f_5484[iVar0] = 0;
	}
	if (Global_17257.f_5491[iVar0])
	{
		unk_0x26574ED84900A376("MPShopSale");
		Global_17257.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_358(&(Global_17257.f_5530[iVar0 /*10*/]));
		Global_17257.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[iVar0] = 0;
	}
}

void func_358(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xF518F3C7FACD43B7(*uParam0))
		{
			unk_0xEF145906684E3D72(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_359()
{
	if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
	{
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				iLocal_99 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
				if (!iLocal_99 == 0)
				{
					if ((unk_0x5D42322C7DB888D0(iLocal_99, 0) && !unk_0x79E944054F6C9DCD(iLocal_99)) && !unk_0x96EA03DFD7BAC0B4(iLocal_99))
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
		if (!func_461(iLocal_51, 1) && !func_461(iLocal_51, 16))
		{
			if (func_361(0))
			{
				func_453(&iLocal_51, 1);
			}
		}
		if (!func_461(iLocal_51, 4) && !func_461(iLocal_51, 64))
		{
			if (func_361(2))
			{
				func_453(&iLocal_51, 4);
			}
		}
		if (!func_461(iLocal_51, 8) && !func_461(iLocal_51, 128))
		{
			if (func_361(1))
			{
				func_453(&iLocal_51, 8);
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
	Var3 = { unk_0x44C17CCB85A88A1F(iLocal_99, 1) };
	if (iLocal_308[iParam0] == 0)
	{
		if (unk_0x6D5BB810CC209E15(iLocal_99) == joaat("casco") || unk_0x6D5BB810CC209E15(iLocal_99) == joaat("feltzer3"))
		{
			iLocal_308[iParam0] = unk_0xCA46643919303403(Var0, Var3, 0.15f, 511, iLocal_99, 3);
		}
		else
		{
			iLocal_308[iParam0] = unk_0xCA46643919303403(Var0, Var3, 0.25f, 511, iLocal_99, 3);
		}
	}
	else
	{
		switch (unk_0x1728AE8531450BFE(iLocal_308[iParam0], &iVar6, &uVar7, &uVar10, &uVar13))
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
			if (!func_461(iLocal_51, 16))
			{
				func_453(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_461(iLocal_51, 128))
			{
				func_453(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_461(iLocal_51, 64))
			{
				func_453(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_461(iLocal_51, 32))
			{
				func_453(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_363()
{
	if (func_368() && !unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
	{
		iLocal_295 = 9;
		func_366(iLocal_96);
		func_366(unk_0xC8B93D94F8954288());
		func_364();
		func_34(&uLocal_104);
	}
}

void func_364()
{
	struct<7> Var0;
	struct<7> Var7;
	
	if (!unk_0x844838E5D8A21336(uLocal_102))
	{
		uLocal_102 = unk_0xFE4F2696906F18A3("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	if (!unk_0x844838E5D8A21336(uLocal_103))
	{
		uLocal_103 = unk_0xFE4F2696906F18A3("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	func_365(&Var0, &Var7);
	unk_0x279ADEB173DD9DEE(uLocal_102, Var0);
	unk_0xC990AF7C56A67ECD(uLocal_102, Var0.f_3, 2);
	unk_0xD9D8D5E5A50FF6D5(uLocal_102, Var0.f_6);
	unk_0x279ADEB173DD9DEE(uLocal_103, Var7);
	unk_0xC990AF7C56A67ECD(uLocal_103, Var7.f_3, 2);
	unk_0xD9D8D5E5A50FF6D5(uLocal_103, Var7.f_6);
	unk_0x7D1795B1E14EDFFD(uLocal_102, 1);
	unk_0x7D1795B1E14EDFFD(uLocal_103, 0);
	unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
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
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		unk_0xA9351C9309E03069(&uVar0);
		unk_0x3E2E609450787FFE(&uVar0);
		if (unk_0x277ECDA23D8CCEB4(iParam0, 0))
		{
			unk_0xE5F6BE3F8E937ACE(0, 0, 16842752);
		}
		unk_0x81333BEA4837207C(0, func_367(), 1f, -1, 0.5f, 8192, 1193033728);
		unk_0x939BC11172AA1303(uVar0);
		unk_0xBFE865E3B513451B(iParam0, uVar0);
		unk_0xA9351C9309E03069(&uVar0);
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
	return unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), func_370()) < (func_369() * func_369());
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
		func_443(&uLocal_107);
	}
	if (func_385())
	{
		return;
	}
	if (!func_10(&uLocal_116))
	{
		func_443(&uLocal_116);
	}
	if (func_359() && unk_0x0C7EC810080F0459(iLocal_96, iLocal_99, 0))
	{
		if (unk_0xF624ACE12DE97FE9(iLocal_99) && unk_0xA4D2826AAFA337FD(iLocal_99))
		{
			if ((func_378() && !func_368()) && !func_377())
			{
				func_376();
				if (func_7(&uLocal_116) > 2.5f)
				{
					uLocal_85 = unk_0xDC3487ADA3784C61(unk_0x44C17CCB85A88A1F(iLocal_99, 0), 40f, 40f, 40f, unk_0x59DD203239FBDCAD(iLocal_99), 0, 7);
					unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 896);
					func_453(&iLocal_49, 2048);
					iLocal_100 = 0;
					unk_0x4A606A8BE6924115("ProstituteInPlay", &uLocal_307);
					unk_0x6CCF5F545348D54E(1, uLocal_307, joaat("player"));
					unk_0xCBD60E398042F554(iLocal_96, uLocal_307);
					func_462("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_304 = -15;
					func_121();
					func_375();
					iLocal_83 = 3;
					if (func_42(0, 1))
					{
						unk_0xE3B1382567189443(0);
					}
					iLocal_295 = 8;
				}
			}
			else
			{
				if ((!unk_0x8EDA3A22D5F4C0BF(unk_0xC8B93D94F8954288()) && func_7(&uLocal_107) > 15f) && func_374())
				{
					if (!func_461(iLocal_50, 4096))
					{
						func_329("PROS_SPOT", -1);
						func_453(&iLocal_50, 4096);
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
		if (unk_0x95CCECA3948CFE7B(iLocal_96))
		{
			if (!unk_0x2DC9BA2299B45EA6(iLocal_96))
			{
				unk_0x5124C5FA52D2AF3E(iLocal_96);
			}
		}
		func_444(0);
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
	if (unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return;
	}
	if (!unk_0x8EDA3A22D5F4C0BF(iLocal_96))
	{
		unk_0x7ABE44FB19CAE2E1(iLocal_96, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_374()
{
	if (!func_461(iLocal_51, 256))
	{
		return 1;
	}
	return func_461(iLocal_51, 32);
}

void func_375()
{
	if (func_522())
	{
		unk_0xC778754E36F3FFD6(iLocal_96, 229, 1);
		unk_0xC778754E36F3FFD6(iLocal_96, 26, 1);
		unk_0xC778754E36F3FFD6(iLocal_96, 115, 1);
		unk_0xAAD662D7E0D59F4C(iLocal_96, 1);
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
	
	if (!func_461(iLocal_49, 2097152))
	{
		if (unk_0x693EBB4F13506457() > iLocal_84)
		{
			if (iLocal_100 == 0)
			{
				Var0 = { unk_0x44C17CCB85A88A1F(iLocal_99, 1) };
				unk_0x32B7B9548CC32D81(Var0, &fVar6, 0);
				Var0.f_2 = (fVar6 + 0.15f);
				Var3 = { unk_0xCC31DB73C65552D8(iLocal_99, 0f, 0f, -2f) };
				iLocal_100 = unk_0x11D05B86BE37CF0E(Var0, Var3, 2f, 511, iLocal_99, 7);
			}
			else if (unk_0x4B9CFD56429FEB36(iLocal_100, &iVar8, &uVar9, &uVar12, &iVar7, &uVar15) == 2)
			{
				if (iVar8 != 0)
				{
					if ((iVar7 == -1447280105 || iVar7 == 1925605558) || iVar7 == 2128369009)
					{
						func_34(&uLocal_116);
					}
				}
				iLocal_84 = unk_0x693EBB4F13506457() + 1500;
				iLocal_100 = 0;
			}
		}
	}
}

int func_377()
{
	int iVar0;
	
	iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	if (unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		if (!unk_0x74CAAD9E721B315D(iVar0, 0))
		{
			if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()) || unk_0xEE473B4B88D6F842(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
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
	
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			iLocal_99 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		}
		Var1 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
		if (unk_0xE52240EAFD9A078E(Var1, func_59(0), 12f, 0) || unk_0xE52240EAFD9A078E(Var1, func_59(1), 12f, 0))
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
		if (func_84(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), (30f * 0.5f)))
		{
			return 0;
		}
		if (!unk_0xF6D1796681289C21(iLocal_96, iLocal_99, 0, 0, 0))
		{
			return 0;
		}
		unk_0x0E18B18520EB6627(1);
		if (unk_0xC51B1A714DF7543D(Var1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (unk_0x95CCECA3948CFE7B(iVar0))
			{
				if (!unk_0xB6900B8CB0ABBD2B(iVar0))
				{
					if (unk_0x164373F9651C2457(iVar0, iLocal_99, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_462("NO VEHICLES FOUND");
			}
		}
		iVar7 = unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288());
		if (!iVar7 == 0)
		{
			func_462("IN AN INTERIOR");
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
	func_453(&iLocal_51, 256);
	if (!func_461(iLocal_51, 2))
	{
		if (func_361(3))
		{
			func_453(&iLocal_51, 2);
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
		func_453(&iLocal_49, 2097152);
		return 1;
	}
	func_5(&iLocal_49, 2097152);
	return 0;
}

int func_382(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xB0E24DA73731AF24(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 1, 1, 1077936128, 0);
	unk_0xF1572137AFC1040D(uVar0, &Param0);
	if (unk_0x9890022B30CAEA9E(uVar0))
	{
		if (!unk_0xDC19A0943990E2BE(uVar0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Param0) > 400f)
			{
				return 1;
			}
		}
		else if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Param0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!unk_0xDC19A0943990E2BE(uVar0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		uVar0 = unk_0xB0E24DA73731AF24(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 1, 8, 1077936128, 0);
		unk_0xF1572137AFC1040D(uVar0, &Param0);
		if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_383(int iParam0, var uParam1)
{
	struct<3> Var0[4];
	
	Var0[0 /*3*/] = { unk_0xCC31DB73C65552D8(iParam0, 2f, 0f, 0f) };
	Var0[1 /*3*/] = { unk_0xCC31DB73C65552D8(iParam0, -2f, 0f, 0f) };
	Var0[2 /*3*/] = { unk_0xCC31DB73C65552D8(iParam0, 0f, 2f, 0f) };
	Var0[3 /*3*/] = { unk_0xCC31DB73C65552D8(iParam0, 0f, -2f, 0f) };
	if (unk_0xCF7E9F12E8804B21(Var0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0xCF7E9F12E8804B21(Var0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0xCF7E9F12E8804B21(Var0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0xCF7E9F12E8804B21(Var0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}

bool func_384()
{
	return Global_67968;
}

int func_385()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("carwash1")) > 0 || unk_0xCBC8FFE55DC722B5(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_386()
{
	if (!func_461(iLocal_49, 128))
	{
		func_387(39, 1);
		func_387(40, 1);
		func_387(41, 1);
		func_387(42, 1);
		func_387(43, 1);
		func_387(44, 1);
		func_453(&iLocal_49, 128);
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
		unk_0x77621132305B133B(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_146() == 0)
		{
			uVar0 = func_134(func_389(iParam0), -1, 0);
			unk_0x77621132305B133B(&uVar0, iParam1);
			func_131(func_389(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x77621132305B133B(&(Global_100976.f_668[iParam0]), iParam1);
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
			return 3693;
			break;
		
		default:
			break;
	}
	return 3790;
}

void func_390(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x59A0729D503ED758(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_146() == 0)
		{
			uVar0 = func_134(func_389(iParam0), -1, 0);
			unk_0x59A0729D503ED758(&uVar0, iParam1);
			func_131(func_389(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x59A0729D503ED758(&(Global_100976.f_668[iParam0]), iParam1);
	}
}

int func_391(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xDCC86F723E82125E(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_146() == 0)
		{
			return unk_0xDCC86F723E82125E(func_134(func_389(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_392(var uParam0)
{
	if (func_461(iLocal_49, 2))
	{
		if (!func_57())
		{
			return;
		}
		func_93(1);
	}
	func_62();
	func_512();
	if (func_522())
	{
		func_507(uParam0);
	}
}

void func_393()
{
	if (!unk_0xB6900B8CB0ABBD2B(iLocal_96))
	{
		if (unk_0x5534579797ACFD77(iLocal_96, unk_0xC8B93D94F8954288(), 5f, 5f, 5f, 0, 1, 0) || func_461(iLocal_49, 8192))
		{
			unk_0x2BE3C7FA4FCCA784(0, 101, 1);
			unk_0x2BE3C7FA4FCCA784(0, 74, 1);
			unk_0x80904D7F494D0C30(0, 51);
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0x277ECDA23D8CCEB4(iLocal_96, 0))
			{
				unk_0xDABDA88E15232316(iLocal_96, 50);
				unk_0xBB78B64538C26EF8(iLocal_96, 5f);
				if (func_461(iLocal_49, 16))
				{
					if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
					{
						unk_0x02831590B216249D(unk_0xA34E7C2A5118D638(), 1);
						func_5(&iLocal_49, 16);
					}
				}
				iLocal_99 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
				if (unk_0x5D42322C7DB888D0(iLocal_99, 0))
				{
					if (unk_0x465DC424E3211BBE(iLocal_96, iLocal_99) && unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_99, 0))
					{
						func_462("***** prostitute IN VEHICLE****** ");
						if (func_461(iLocal_49, 8))
						{
							if (unk_0x11896648C9E8F14F(func_86()))
							{
								if (func_399(iLocal_99))
								{
									unk_0x4BD57CCF569A73E0(iLocal_96, unk_0x7CBED6EFED40E7EB("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_398(iLocal_99))
								{
									unk_0x4BD57CCF569A73E0(iLocal_96, unk_0x7CBED6EFED40E7EB("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_397(iLocal_99))
								{
									unk_0x4BD57CCF569A73E0(iLocal_96, unk_0x7CBED6EFED40E7EB("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_396(iLocal_99))
								{
									unk_0x4BD57CCF569A73E0(iLocal_96, unk_0x7CBED6EFED40E7EB("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else
								{
									unk_0x4BD57CCF569A73E0(iLocal_96, unk_0x7CBED6EFED40E7EB("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_522())
						{
							unk_0xFD816D0E738EB817(iLocal_96, 0, 0);
						}
						else
						{
							unk_0xFD816D0E738EB817(iLocal_96, 1, 1);
						}
						func_175(iLocal_96, 0);
						func_373();
						iLocal_64 = unk_0x693EBB4F13506457();
						func_34(&uLocal_107);
						iLocal_295 = 7;
					}
					else
					{
						func_462("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_395(iLocal_96, unk_0xC8B93D94F8954288(), 1) > 11f || func_394(20f)) || !unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_99, 0))
				{
					func_108(&uLocal_113);
					if (!unk_0x277ECDA23D8CCEB4(iLocal_96, 0))
					{
						unk_0x5124C5FA52D2AF3E(iLocal_96);
						func_444(0);
						func_462("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_89(15);
					}
				}
				if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					if (!unk_0x5D42322C7DB888D0(iLocal_99, 0))
					{
						iLocal_99 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
					}
					else if (!unk_0xF6D1796681289C21(iLocal_96, iLocal_99, 0, 0, 0))
					{
						if (!func_105())
						{
							if (!func_461(iLocal_75, 1))
							{
								func_34(&uLocal_119);
								func_453(&iLocal_75, 1);
							}
							else if (func_7(&uLocal_119) > 20f)
							{
								func_119();
								func_462("prostitute couldn't get into the car");
								iLocal_295 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_461(iLocal_75, 1))
		{
			func_462("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0x5124C5FA52D2AF3E(iLocal_96);
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

int func_396(int iParam0)
{
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		switch (unk_0x38E553FFEC2B7BCC(iParam0))
		{
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

int func_397(int iParam0)
{
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		switch (unk_0x38E553FFEC2B7BCC(iParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_398(int iParam0)
{
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		switch (unk_0x38E553FFEC2B7BCC(iParam0))
		{
			case -782720499:
			case -38413156:
				return 1;
				break;
			}
	}
	return 0;
}

int func_399(int iParam0)
{
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		switch (unk_0x38E553FFEC2B7BCC(iParam0))
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

void func_400(var uParam0)
{
	int iVar0;
	
	if (!func_409(0))
	{
		return;
	}
	if (!func_461(iLocal_49, 16))
	{
		unk_0x02831590B216249D(unk_0xA34E7C2A5118D638(), 0);
		func_453(&iLocal_49, 16);
	}
	if (!func_10(&uLocal_113))
	{
		func_443(&uLocal_113);
	}
	if (func_114(&uLocal_113) >= 20f || !unk_0x5534579797ACFD77(iLocal_96, unk_0xC8B93D94F8954288(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (func_461(iLocal_75, 524288))
		{
			func_108(&uLocal_113);
			iLocal_295 = 6;
		}
		else if (func_408())
		{
			func_34(&uLocal_113);
			func_453(&iLocal_75, 524288);
		}
	}
	func_63(iLocal_96);
	if (((unk_0x5534579797ACFD77(iLocal_96, unk_0xC8B93D94F8954288(), 3f, 3f, 3f, 0, 1, 0) || func_461(iLocal_75, 1)) && !func_209(0)) && !func_384())
	{
		if (!unk_0xF6D1796681289C21(iLocal_96, iLocal_99, 0, 0, 0))
		{
			if (!func_105())
			{
				if (!func_461(iLocal_75, 1))
				{
					func_34(&uLocal_119);
					func_453(&iLocal_75, 1);
				}
				else if (func_7(&uLocal_119) > 10f)
				{
					func_62();
					unk_0x5124C5FA52D2AF3E(iLocal_96);
					func_462("prostitute couldn't get into the car");
					iLocal_295 = 6;
				}
			}
		}
		else
		{
			func_401();
		}
	}
	else if (func_441("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_439();
		if (func_522())
		{
			iVar0 = unk_0x090C65D5190A249D(iLocal_96, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_512();
				func_507(uParam0);
			}
		}
	}
}

void func_401()
{
	char* sVar0;
	
	if (iLocal_295 != 5 && func_345(&sVar0, 0))
	{
		func_404();
		if (func_402(iLocal_74, 1) || unk_0xC354C1A3197CBF22(unk_0xA34E7C2A5118D638()))
		{
			unk_0x7ABE44FB19CAE2E1(unk_0xC8B93D94F8954288(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_453(&iLocal_49, 8192);
			func_34(&uLocal_113);
		}
		if (func_461(iLocal_49, 8192))
		{
			func_439();
			Global_25265 = 1;
			func_124("PROSTITUTES_SOLICIT_SCENE");
			func_81("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				if (unk_0x090C65D5190A249D(iLocal_96, -1794415470) != 1 && !unk_0x0C7EC810080F0459(iLocal_96, unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 1))
				{
					unk_0x9CEFBE395E148A32(iLocal_96, iLocal_99, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_63 = func_44(unk_0xC8B93D94F8954288(), 1, 0);
			unk_0xC0E8B67A4385D37D(sLocal_63);
			sLocal_63 = func_44(unk_0xC8B93D94F8954288(), 0, 1);
			unk_0xC0E8B67A4385D37D(sLocal_63);
			func_34(&uLocal_107);
			iLocal_295 = 5;
		}
	}
}

int func_402(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_403(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x06972B20E75CBE06(unk_0x1A96BAEAC664567A()))
	{
		return 0;
	}
	if (func_209(0))
	{
		return 0;
	}
	if (unk_0x308528B5CF35F306())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36400[iVar0 /*19*/] == 1 && Global_36400[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36400[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36400[iVar0 /*19*/].f_5 = 1;
			Global_36400[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36400[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36400[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_403(int iParam0)
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
		if (Global_36400[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_404()
{
	if (Global_25265)
	{
		if (unk_0x2BF05095F2389894())
		{
			return;
		}
		unk_0x2BE3C7FA4FCCA784(0, 101, 1);
		unk_0x2BE3C7FA4FCCA784(0, 74, 1);
		unk_0x80904D7F494D0C30(0, 51);
		if (!func_461(iLocal_49, 8192))
		{
			if (iLocal_74 == -1)
			{
				func_406(&iLocal_74, 5, "PROS_ACCEPT", 0, 0, 0);
			}
		}
	}
	else if (func_405(iLocal_74, 0))
	{
		func_439();
	}
}

int func_405(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_403(iParam0);
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
	if (Global_36400[iVar0 /*19*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36400[iVar0 /*19*/].f_12)
	{
		unk_0xD90D7D16FDE685B6(&(Global_36400[iVar0 /*19*/].f_8));
		unk_0xCE59E3E42586D52D(&Global_36517);
		iVar1 = unk_0x699790DC9A5E5D9A(0);
	}
	else
	{
		unk_0xD90D7D16FDE685B6(&(Global_36400[iVar0 /*19*/].f_8));
		unk_0xCE59E3E42586D52D(&Global_36517);
		unk_0xCE59E3E42586D52D(&(Global_36400[iVar0 /*19*/].f_13));
		iVar1 = unk_0x699790DC9A5E5D9A(0);
	}
	return iVar1;
}

void func_406(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xCBC8FFE55DC722B5(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xA8D4B6BDCF6DE72B())
	{
		if (!*iParam0 == -1)
		{
			func_407(iParam0);
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
		if (!Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/] = 1;
			Global_36400[iVar0 /*19*/].f_1 = Global_36523;
			Global_36523++;
			Global_36400[iVar0 /*19*/].f_4 = 0;
			Global_36400[iVar0 /*19*/].f_17 = 0;
			Global_36400[iVar0 /*19*/].f_5 = 0;
			Global_36400[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36400[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36400[iVar0 /*19*/].f_6 = iParam3;
			Global_36400[iVar0 /*19*/].f_18 = unk_0x46CF50E0E5A24635();
			Global_36400[iVar0 /*19*/].f_7 = 0;
			Global_36400[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xB8A06E7E729EED0A(sParam4))
			{
				Global_36400[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36400[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36400[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36400[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_407(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_403(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_408()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0x95CCECA3948CFE7B(iLocal_96) || unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return 1;
	}
	if (!func_522())
	{
		func_62();
		if (unk_0x277ECDA23D8CCEB4(iLocal_96, 1))
		{
			unk_0xF7F92ABBE23C8EA8(iLocal_96, 1193033728, 0);
		}
		else if (func_461(iLocal_49, 4194304))
		{
			iVar0 = unk_0x531444754C426278(8, 11);
			unk_0x3E2E609450787FFE(&uVar1);
			unk_0x5323F488E6A1B660(0, func_61(iLocal_293), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x5323F488E6A1B660(0, func_61(iLocal_293), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x939BC11172AA1303(uVar1);
			unk_0xBFE865E3B513451B(iLocal_96, uVar1);
			unk_0xA9351C9309E03069(&uVar1);
		}
		return 1;
	}
	if (unk_0x277ECDA23D8CCEB4(iLocal_96, 1))
	{
		if (unk_0xFE7BCFB02217DCDF(iLocal_96))
		{
			unk_0xF7F92ABBE23C8EA8(iLocal_96, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xF892FC88DC9DD7F8(iLocal_96);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_461(iLocal_49, 4194304))
			{
				func_62();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (unk_0xFE7BCFB02217DCDF(iLocal_96))
			{
				unk_0x5323F488E6A1B660(iLocal_96, func_61(iLocal_293), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_55 = 2;
			}
			else
			{
				unk_0xF892FC88DC9DD7F8(iLocal_96);
			}
			break;
		
		case 2:
			if (unk_0xFE7BCFB02217DCDF(iLocal_96))
			{
				if (unk_0x090C65D5190A249D(iLocal_96, -2017877118) == 7)
				{
					iVar0 = unk_0x531444754C426278(8, 11);
					unk_0x5323F488E6A1B660(iLocal_96, func_61(iLocal_293), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_55 = 3;
				}
			}
			else
			{
				unk_0xF892FC88DC9DD7F8(iLocal_96);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_409(bool bParam0)
{
	if (unk_0xB6900B8CB0ABBD2B(iLocal_96))
	{
		return 0;
	}
	if (func_461(iLocal_49, 8192))
	{
	}
	if (func_395(iLocal_96, unk_0xC8B93D94F8954288(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		return 0;
	}
	if (func_522())
	{
		if (unk_0x29063D24B3F14FA7(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0x9BA9222C7124CA04(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_84(unk_0x44C17CCB85A88A1F(iLocal_96, 1), 1106247680))
	{
		if (!func_461(iLocal_50, 8192) && !unk_0xA16C4830554834C5(unk_0xC8B93D94F8954288()))
		{
			func_329("PROS_COPS", -1);
			func_453(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_359())
	{
		if (!func_522())
		{
			if ((!iLocal_88 && !Global_100023) && func_411(unk_0xC8B93D94F8954288(), 0) == -1)
			{
				func_329("PROS_CAR", -1);
				iLocal_88 = 1;
			}
			func_410();
		}
		else if (!func_495(4096))
		{
			func_329("PROS_CAR", -1);
			func_189(4096);
		}
		return 0;
	}
	return 1;
}

void func_410()
{
	if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		return;
	}
	if (!func_461(iLocal_49, 1))
	{
		if (!unk_0x8EDA3A22D5F4C0BF(unk_0xC8B93D94F8954288()) && !unk_0x8EDA3A22D5F4C0BF(iLocal_96))
		{
			unk_0x7ABE44FB19CAE2E1(unk_0xC8B93D94F8954288(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_453(&iLocal_49, 1);
		}
	}
}

int func_411(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x277ECDA23D8CCEB4(iParam0, iParam1))
		{
			iVar0 = unk_0x275BEBE583A163B5(iParam0, iParam1);
			if (unk_0x95CCECA3948CFE7B(iVar0))
			{
				if (!unk_0xB6900B8CB0ABBD2B(iVar0))
				{
					iVar1 = unk_0x66B735F5B005FAD7(unk_0x6D5BB810CC209E15(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x74CAAD9E721B315D(iVar0, iVar3))
						{
							if (unk_0xC0ADAF0814175B68(iVar0, iVar3) == iParam0)
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

void func_412()
{
	if (func_409(0))
	{
		func_401();
		if (unk_0x090C65D5190A249D(iLocal_96, 242628503) == 7 && !func_461(iLocal_49, 8192))
		{
			if (func_66(1))
			{
				func_108(&uLocal_113);
				iLocal_64 = unk_0x693EBB4F13506457();
				func_462("prostitute proposition player VEHICLE");
				iLocal_295 = 4;
			}
		}
	}
	else
	{
		unk_0x5124C5FA52D2AF3E(iLocal_96);
		func_89(15);
	}
}

void func_413(var uParam0)
{
	if (func_409(0))
	{
		func_401();
		if (unk_0x090C65D5190A249D(iLocal_96, 242628503) == 7 || func_461(iLocal_49, 8192))
		{
			iLocal_295 = 3;
		}
		else if (func_394(20f))
		{
			func_108(&uLocal_113);
			func_444(0);
		}
		else
		{
			func_414(uParam0);
		}
	}
	else
	{
		unk_0x5124C5FA52D2AF3E(iLocal_96);
		func_89(15);
	}
}

void func_414(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	var uVar18;
	
	if (!unk_0x95CCECA3948CFE7B(iLocal_99))
	{
		return;
	}
	unk_0xA8349C905E4A8DE7(unk_0x6D5BB810CC209E15(iLocal_99), &Var6, &Var3);
	Var0 = { Var3 - Var6 };
	Var0 = { Var0 / Vector(2f, 2f, 2f) };
	Var9 = { unk_0xCC31DB73C65552D8(iLocal_99, -(Var0.f_0 + 0.2f), 0f, 0f) };
	Var12 = { unk_0xCC31DB73C65552D8(iLocal_99, (Var0.f_0 + 0.2f), 0f, 0f) };
	Var15 = { unk_0x44C17CCB85A88A1F(iLocal_96, 1) };
	if (unk_0x2A488C176D52CCA5(Var15, Var12) < unk_0x2A488C176D52CCA5(Var15, Var9))
	{
		Var9 = { Var12 };
	}
	if ((unk_0x090C65D5190A249D(iLocal_96, -1794415470) != 1 || !func_461(iLocal_49, 8192)) && unk_0xB7A628320EFF8E47(Local_93, Var9) > 0f)
	{
		if (func_522())
		{
			if (!unk_0xD28A89C669EAD2E4(iLocal_96))
			{
				unk_0xFD816D0E738EB817(iLocal_96, 0, 1);
			}
			func_424(&uLocal_287, func_61(iLocal_293));
			func_418(uParam0, 1);
			func_415(&uLocal_287, uParam0);
		}
		unk_0x3E2E609450787FFE(&uVar18);
		unk_0x81333BEA4837207C(0, Var9.f_0, Var9.f_1, Var9.f_2, 1f, -1, 1f, 8192, 1193033728);
		unk_0x7FFE31040063EDAE(0, unk_0xB867FC7DBA46C0F1(unk_0xC8B93D94F8954288(), 31086, 0f, 0f, 0f), 0);
		unk_0x939BC11172AA1303(uVar18);
		unk_0xBFE865E3B513451B(iLocal_96, uVar18);
		unk_0xA9351C9309E03069(&uVar18);
		Local_93 = { Var9 };
	}
}

void func_415(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x544AEDB4A15228FF((*uParam0)[iVar0]))
		{
			func_416(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_416(var uParam0, char* sParam1)
{
	func_417(uParam0, 1, -1, sParam1, 0);
}

void func_417(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0xF8D041B05C3D1FD4(sParam3, "NULL"))
					{
						if (unk_0xF8D041B05C3D1FD4(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x59A0729D503ED758(uParam0[iVar0 /*18*/], iParam1);
			unk_0x59A0729D503ED758(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_418(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_420(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_419(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_419(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_420(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 30))
		{
			func_421(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_421(var uParam0)
{
	func_422(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_422(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xDCC86F723E82125E(uParam0, 30))
	{
		switch (func_423(iParam0))
		{
			case 0:
				unk_0x4BBD72565A0AF033(uParam2);
				break;
			
			case 1:
				unk_0x3ECF1E41E6ED71D8(uParam1);
				break;
			
			case 2:
				unk_0xF762ED015503B979(uParam1);
				break;
			
			case 3:
				unk_0x26574ED84900A376(uParam1);
				break;
			
			case 4:
				unk_0x28ED861DB3DADA0B(uParam2, sParam1);
				break;
			
			case 5:
				unk_0xC83A0582E6D2E6F3(sParam1);
				break;
			
			case 6:
				unk_0x5E56B49A7D5150F6();
				break;
			
			case 7:
				unk_0x9D77813390E90FDB(uParam2);
				break;
			
			case 8:
				unk_0x48591CDE727D1F6A(uParam2, unk_0xDCC86F723E82125E(iParam0, 26));
				break;
			
			case 9:
				unk_0x946BF5DFB2A71B9E();
				break;
			
			default:
				break;
		}
	}
}

int func_423(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xDCC86F723E82125E(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_424(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x544AEDB4A15228FF((*uParam0)[iVar0]))
		{
			if (unk_0xF8D041B05C3D1FD4((*uParam0)[iVar0], uParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_425(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_425(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0x544AEDB4A15228FF((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_426(var uParam0)
{
	char* sVar0;
	
	if (func_409(1))
	{
		if (!func_10(&uLocal_113))
		{
			func_443(&uLocal_113);
		}
		func_453(&iLocal_49, 4);
		Global_25266 = 1;
		func_401();
		if (func_442(&uLocal_113, 2f) || func_461(iLocal_49, 8192))
		{
			func_453(&iLocal_49, 2);
			if (func_345(&sVar0, 0))
			{
				unk_0x8EB9A60FB4C37A34(unk_0xC8B93D94F8954288(), 0);
				unk_0x4D2A04F490FBAE07(unk_0xC8B93D94F8954288(), 0);
				unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), iLocal_96, -1, 2048, 4);
				func_414(uParam0);
				func_453(&iLocal_49, 4);
				Global_25265 = 1;
				iLocal_295 = 2;
			}
			else
			{
				if (unk_0xF8D041B05C3D1FD4(func_438(&sVar0), "PIM_HHIDCR"))
				{
					func_437(&sVar0, 30000);
					func_435(1);
				}
				else
				{
					func_329(&sVar0, -1);
				}
				if (!unk_0xB8A06E7E729EED0A(&sVar0) && unk_0xF8D041B05C3D1FD4(&sVar0, "PROS_NO_MONEY"))
				{
					func_427();
				}
				func_89(0);
				iLocal_296 = 0;
				func_453(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_25265 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_25266 = 0;
	}
}

void func_427()
{
	if (!func_495(64))
	{
		func_428(0, 31, 5);
		func_189(64);
	}
}

void func_428(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xC9F0E9862A4794F5())
	{
		return;
	}
	if (unk_0xBBAE3E0C60A8AD4B() && func_432(unk_0xA34E7C2A5118D638(), 1))
	{
		return;
	}
	if (unk_0x0139E142C27412BC(2, 199) || unk_0x69ED83B6DEBA60F9(2, 199))
	{
		return;
	}
	if (unk_0x45D1BEB329799891() != 0)
	{
		return;
	}
	if (unk_0x2BF05095F2389894())
	{
		return;
	}
	if (unk_0x0B03487F3F07FC6C())
	{
		return;
	}
	if (unk_0x0657FBBA38D8BD02())
	{
		return;
	}
	if (func_431())
	{
		return;
	}
	if (!func_429())
	{
		return;
	}
	if (unk_0xBBAE3E0C60A8AD4B() || iParam0)
	{
		if (!Global_91158.f_1352 && !unk_0x2908391F2B0A4C57())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2442007 = iParam1;
			Global_91158.f_1352 = 1;
			Global_91158.f_1353 = iParam2;
		}
	}
}

int func_429()
{
	if (func_430())
	{
		return 0;
	}
	if (unk_0x91629FFED455823B() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_430()
{
	return Global_2441455;
}

bool func_431()
{
	return Global_2442114;
}

int func_432(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_433(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587175[iParam0 /*410*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_433(int iParam0)
{
	return func_434(iParam0);
}

bool func_434(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_13.f_1, 0);
}

void func_435(int iParam0)
{
	unk_0xAC5554624B8FE548(3, 21, 200, 0, 0);
	if (iParam0 && !func_436())
	{
		unk_0xC4EE38A4CFF7544C(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

bool func_436()
{
	return Global_2426867.f_2138[0 /*72*/].f_1 != 0;
}

void func_437(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam1);
}

char* func_438(char* sParam0)
{
	return sParam0;
}

void func_439()
{
	if (iLocal_74 != -1)
	{
		func_407(&iLocal_74);
	}
}

void func_440(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_441(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

int func_442(var uParam0, float fParam1)
{
	if (func_216(uParam0, fParam1))
	{
		func_108(uParam0);
		return 1;
	}
	return 0;
}

void func_443(var uParam0)
{
	if (!func_10(uParam0))
	{
		func_34(uParam0);
	}
}

void func_444(int iParam0)
{
	bool bVar0;
	
	func_119();
	if (iParam0 || iLocal_72 == 0)
	{
		bVar0 = true;
		if (func_522())
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

int func_445()
{
	if ((((((func_452() || func_451()) || func_450()) || func_449()) || func_446()) || Global_2394609) || Global_2394609.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_446()
{
	if (func_448() || func_447())
	{
		return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_84 == 8;
	}
	return 0;
}

var func_447()
{
	return Global_2433098.f_610;
}

bool func_448()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_2, 11);
}

bool func_449()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 5);
}

bool func_450()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 2);
}

bool func_451()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 20);
}

var func_452()
{
	return Global_2433098.f_574;
}

void func_453(int iParam0, int iParam1)
{
	func_454(iParam0, iParam1);
}

void func_454(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_455()
{
	if (Global_25267)
	{
		return 0;
	}
	if (func_522())
	{
		return 0;
	}
	if (!func_458())
	{
		return 0;
	}
	if (func_456())
	{
		iLocal_296 = 4;
		return 1;
	}
	return 0;
}

int func_456()
{
	int iVar0;
	
	iLocal_98 = unk_0x072C2EF16D638437(unk_0x44C17CCB85A88A1F(iLocal_96, 1), 15f, 0, 6);
	if (unk_0x95CCECA3948CFE7B(iLocal_98) && !unk_0xB6900B8CB0ABBD2B(iLocal_98))
	{
		if (unk_0x5D42322C7DB888D0(iLocal_98, 0))
		{
			if (func_85(&iLocal_98))
			{
				iLocal_97 = unk_0xC0ADAF0814175B68(iLocal_98, -1);
				if (!iLocal_97 == 0)
				{
					if (func_457(&iLocal_97))
					{
						iVar0 = unk_0x6D5BB810CC209E15(iLocal_98);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0xD28A89C669EAD2E4(iLocal_97))
							{
								unk_0xFD816D0E738EB817(iLocal_97, 1, 0);
							}
							if (!unk_0xD28A89C669EAD2E4(iLocal_98))
							{
								unk_0xFD816D0E738EB817(iLocal_98, 1, 0);
							}
							unk_0xAAD662D7E0D59F4C(iLocal_97, 1);
							unk_0x05BE583DF8C6A617(iLocal_97, 0);
							unk_0x05BE583DF8C6A617(iLocal_98, 0);
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

int func_457(int iParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(*iParam0))
	{
		if (unk_0xAC281E457992D7AB(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_458()
{
	if (unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()) || unk_0xB6900B8CB0ABBD2B(iLocal_96))
	{
		return 0;
	}
	return 1;
}

int func_459()
{
	if ((!func_458() || !unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) || func_461(iLocal_49, 4096))
	{
		return 0;
	}
	if (func_461(iLocal_49, 32))
	{
		iLocal_296 = 2;
		func_93(2);
		func_462("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_460()
{
	if (!unk_0xB6900B8CB0ABBD2B(iLocal_96))
	{
		if (!unk_0x54BD36F7F4951C53(iLocal_96))
		{
			if (unk_0x090C65D5190A249D(iLocal_96, 1805844857) != 1)
			{
				unk_0xAAD662D7E0D59F4C(iLocal_96, 0);
				unk_0xF36EA652E4A6CED0(iLocal_96, 196628, 1);
				unk_0x77BB53B713A3FB22(iLocal_96);
				unk_0x622E764F80DBF8B7(iLocal_96, unk_0xC8B93D94F8954288(), 300f, -1, 1, 0);
				unk_0xF1A02DDEC7E15D6E(iLocal_96, 1);
				func_89(15);
			}
		}
	}
}

bool func_461(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_462(char* sParam0)
{
}

int func_463()
{
	if (unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return 0;
	}
	if (unk_0x090C65D5190A249D(iLocal_96, 1435919172) == 1)
	{
		return 0;
	}
	if (unk_0x54E8AF6E305A849E(iLocal_96))
	{
		return 0;
	}
	return 1;
}

int func_464()
{
	switch (iLocal_300)
	{
		case 0:
			if (!func_522())
			{
				func_424(&uLocal_287, func_61(iLocal_293));
				func_415(&uLocal_287, &uLocal_396);
				func_462("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_522())
			{
				unk_0xB575A770677DC316(1);
				unk_0xC908ABD9A1B6E6E6(1);
				unk_0xF892FC88DC9DD7F8(iLocal_96);
			}
			iLocal_300 = 1;
			break;
		
		case 1:
			if (!func_522())
			{
				if (func_465(&uLocal_396))
				{
					func_453(&iLocal_49, 4194304);
					func_462("Moving to PROSTITUTE_INIT_INIT");
					iLocal_300 = 2;
				}
			}
			else if (func_522())
			{
				func_453(&iLocal_49, 4194304);
				func_462("Moving to PROSTITUTE_INIT_INIT");
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
			func_462("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_300 = 3;
			break;
		
		case 3:
			if (!unk_0x2DC9BA2299B45EA6(iLocal_96))
			{
				if (!func_522())
				{
					unk_0xAAD662D7E0D59F4C(iLocal_96, 0);
					unk_0xF7D4303326C280D7(iLocal_96, 0);
					func_440(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0xFE7BCFB02217DCDF(iLocal_96))
				{
					unk_0xF892FC88DC9DD7F8(iLocal_96);
				}
				else
				{
					unk_0xAAD662D7E0D59F4C(iLocal_96, 0);
					func_440(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					unk_0xF7D4303326C280D7(iLocal_96, 0);
					unk_0xDB683AFC1D158173(iLocal_96);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_465(var uParam0)
{
	return func_466(uParam0);
}

int func_466(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_467(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_467(var uParam0)
{
	return func_468(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_468(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0xDCC86F723E82125E(uParam0, 30))
	{
		if (unk_0xDCC86F723E82125E(iParam0, 29))
		{
			switch (func_423(iParam0))
			{
				case 0:
					return unk_0x0845149A26DABBA5(uParam2);
					break;
				
				case 1:
					return unk_0xF9B86DC1728F1339(uParam1);
					break;
				
				case 2:
					return unk_0x11896648C9E8F14F(sParam1);
					break;
				
				case 3:
					return unk_0x701C5CF3E1956924(sParam1);
					break;
				
				case 4:
					return unk_0x953ED5E61AD54581(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0xCB5C09DEC6D45DA8(sParam1);
					break;
				
				case 6:
					return unk_0xC4C141A321D45FD8(sParam1, unk_0xDCC86F723E82125E(iParam0, 27));
					break;
				
				case 7:
					return unk_0xBEA48FDD63E5E9DD(uParam2);
					break;
				
				case 8:
					return unk_0xF0DCEBB4ADA5D981(uParam2);
					break;
				
				case 9:
					return unk_0xB6161F3A3EDA5AA1();
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

int func_469()
{
	if (unk_0xA8D4B6BDCF6DE72B())
	{
		if (func_18() == 0)
		{
			if (func_470(iLocal_96, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!unk_0x1F59F772AA90087D(iLocal_96, 1))
				{
					if (func_522())
					{
						unk_0xFD816D0E738EB817(iLocal_96, 0, 0);
					}
					else
					{
						unk_0xFD816D0E738EB817(iLocal_96, 1, 1);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_470(int iParam0, struct<3> Param1, int iParam4)
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

int func_471()
{
	if (unk_0xBC8F0233DE90C26A(iLocal_96, func_59(0)))
	{
		if (unk_0xB89E0D5D6AE5535B(iLocal_96, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0xB89E0D5D6AE5535B(iLocal_96, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0xBC8F0233DE90C26A(iLocal_96, func_59(1)))
	{
		if (unk_0xB89E0D5D6AE5535B(iLocal_96, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0xB89E0D5D6AE5535B(iLocal_96, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_472()
{
	if (unk_0xB6900B8CB0ABBD2B(iLocal_96))
	{
		return;
	}
	if (iLocal_294 != 3 && iLocal_294 != 4)
	{
		func_473(unk_0xC8B93D94F8954288());
	}
	else if (iLocal_294 == 3)
	{
		func_473(iLocal_97);
	}
}

void func_473(int iParam0)
{
	if (unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		return;
	}
	if (func_522())
	{
		if (!unk_0xFE7BCFB02217DCDF(iParam0))
		{
			unk_0xF892FC88DC9DD7F8(iParam0);
			return;
		}
	}
	if (func_395(iParam0, iLocal_96, 1) < 30f)
	{
		if (!unk_0x3B140346FC1C273F(iLocal_96, iParam0))
		{
			if (func_522())
			{
				if (unk_0xFE7BCFB02217DCDF(iLocal_96))
				{
					unk_0xD1FE26E80A6E2C00(iLocal_96);
					unk_0xE48D9147BC1F4CD7(iLocal_96, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0xD1FE26E80A6E2C00(iLocal_96);
				unk_0xE48D9147BC1F4CD7(iLocal_96, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0x3B140346FC1C273F(iLocal_96, iParam0))
	{
		if (func_522())
		{
			if (unk_0xFE7BCFB02217DCDF(iLocal_96))
			{
				unk_0xD1FE26E80A6E2C00(iLocal_96);
			}
		}
		else
		{
			unk_0xD1FE26E80A6E2C00(iLocal_96);
		}
	}
}

void func_474()
{
	if (Global_25265)
	{
		if (unk_0x5D42322C7DB888D0(iLocal_99, 0))
		{
			if (unk_0x0C7EC810080F0459(iLocal_96, iLocal_99, 0))
			{
				func_475();
			}
		}
		return;
	}
	if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
	{
		return;
	}
	if (unk_0xB6900B8CB0ABBD2B(iLocal_96) || !unk_0x95CCECA3948CFE7B(iLocal_96))
	{
		if (Global_25269 != unk_0x46CF50E0E5A24635() && func_461(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iLocal_96, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) < Global_25268 || Global_25268 == 0f) && iLocal_296 != 4)
	{
		Global_25268 = unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iLocal_96, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1));
		Global_25269 = unk_0x46CF50E0E5A24635();
		func_453(&iLocal_49, 32);
	}
	else if (Global_25269 == unk_0x46CF50E0E5A24635())
	{
		Global_25268 = unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iLocal_96, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_475()
{
	if (func_522())
	{
		if (unk_0xFE7BCFB02217DCDF(iLocal_96))
		{
			unk_0x1F64302AA4F597A7(iLocal_96, 323, 1);
		}
	}
	else
	{
		unk_0x1F64302AA4F597A7(iLocal_96, 323, 1);
	}
}

void func_476(var uParam0)
{
	if (!iLocal_295 == 12)
	{
		if (!unk_0xB6900B8CB0ABBD2B(iLocal_96) && !unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (func_480())
			{
				if (func_522())
				{
					func_116(0);
					unk_0xF36EA652E4A6CED0(iLocal_96, 196624, 1);
					if (!unk_0xD28A89C669EAD2E4(iLocal_96))
					{
						unk_0xFD816D0E738EB817(iLocal_96, 1, 0);
					}
					unk_0x622E764F80DBF8B7(iLocal_96, unk_0xC8B93D94F8954288(), 300f, -1, 0, 0);
					unk_0xF1A02DDEC7E15D6E(iLocal_96, 1);
					unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
					func_512();
					func_507(uParam0);
				}
				else
				{
					func_89(12);
				}
			}
			else if (unk_0x87D4C731B013290A(iLocal_96, unk_0xC8B93D94F8954288(), 1))
			{
				iLocal_67++;
				if (iLocal_67 >= 2)
				{
					func_462("prostitute CLASSED AS UNDER ATTACK");
					iLocal_295 = 12;
				}
				else
				{
					func_462("prostitute BEEN HIT BY PLAYER");
					unk_0x0CBE045BBBA5CFDE(iLocal_96);
				}
			}
			else if (func_478())
			{
				func_477();
				iLocal_295 = 12;
			}
		}
	}
}

void func_477()
{
	if (unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		return;
	}
	unk_0x5147F4FD3D9AB607(iLocal_96);
	unk_0x7ABE44FB19CAE2E1(iLocal_96, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_478()
{
	var uVar0;
	
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		return 0;
	}
	if (!func_479())
	{
		return 0;
	}
	uVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	if (!unk_0x5D42322C7DB888D0(uVar0, 0))
	{
		return 0;
	}
	if (unk_0xA16C4830554834C5(unk_0xC8B93D94F8954288()))
	{
		return unk_0x604B6B723F91A0FF(iVar0);
	}
	return 0;
}

int func_479()
{
	if (!func_522())
	{
		return 1;
	}
	else if (unk_0x95CCECA3948CFE7B(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
	{
		if (unk_0x6061DFC4D87F4B3E(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
		{
			if (unk_0xC0ADAF0814175B68(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), -1) == unk_0xC8B93D94F8954288())
			{
				if (unk_0xFE7BCFB02217DCDF(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
				{
					if (!unk_0xD28A89C669EAD2E4(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
					{
						unk_0xFD816D0E738EB817(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0, 0);
					}
					return 1;
				}
				else
				{
					unk_0xF892FC88DC9DD7F8(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0));
				}
			}
		}
		else
		{
			unk_0x5B12D8AC896C1EC3(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0));
		}
	}
	return 0;
}

int func_480()
{
	struct<3> Var0;
	
	if (!func_461(iLocal_49, 4096))
	{
		if (func_395(iLocal_96, unk_0xC8B93D94F8954288(), 1) < 30f)
		{
			Var0 = { unk_0x44C17CCB85A88A1F(iLocal_96, 1) };
			if ((((((unk_0x2585B6892F479881(86, Var0, 30f) || unk_0x2585B6892F479881(89, Var0, 30f)) || unk_0x2585B6892F479881(88, Var0, 30f)) || unk_0x2585B6892F479881(102, Var0, 30f)) || unk_0x2585B6892F479881(114, Var0, 30f)) || (unk_0x2585B6892F479881(112, Var0, 30f) && !func_522())) || unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
			{
				if (!func_522())
				{
					unk_0xAAD662D7E0D59F4C(iLocal_96, 0);
				}
				func_453(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_481()
{
	if ((unk_0x95CCECA3948CFE7B(iLocal_96) && !unk_0xB6900B8CB0ABBD2B(iLocal_96)) && !unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		if (func_522())
		{
			if (func_486(unk_0xA34E7C2A5118D638(), 0))
			{
				func_462("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x277ECDA23D8CCEB4(iLocal_96, 0))
				{
					func_99(0);
				}
				func_89(15);
				return 0;
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iLocal_96))
		{
			if (!unk_0x277ECDA23D8CCEB4(iLocal_96, 0))
			{
				if (!func_483(9))
				{
					if (!unk_0xB6900B8CB0ABBD2B(iLocal_96) && !unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
					{
						if (unk_0x5534579797ACFD77(iLocal_96, unk_0xC8B93D94F8954288(), 100f, 100f, 50f, 0, 1, 0))
						{
							return 1;
						}
						else
						{
							func_462("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_89(15);
						}
					}
				}
				else if (!(func_482() || unk_0xA8D4B6BDCF6DE72B()))
				{
					func_462("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_89(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_295 == 0)
			{
				func_462("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_483(9) && !func_483(5))
			{
				return 1;
			}
			else if (!(func_482() || (unk_0xA8D4B6BDCF6DE72B() && !func_385())))
			{
				func_462("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
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
			func_462("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_96))
	{
		func_462("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0xB6900B8CB0ABBD2B(iLocal_96))
	{
		func_462("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		func_462("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_482()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_483(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_484(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_484(int iParam0)
{
	return func_485(iParam0, Global_35700);
}

int func_485(int iParam0, int iParam1)
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

int func_486(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_201(iParam0, 1, 1))
	{
		iVar0 = unk_0xCF4C00513A86E840(iParam0);
		if (unk_0x277ECDA23D8CCEB4(iVar0, iParam1))
		{
			uVar3 = unk_0x275BEBE583A163B5(iVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = unk_0x20A20BF765914E37(iVar1);
				if (func_201(iVar2, 1, 1))
				{
					if (unk_0xCF4C00513A86E840(iVar2) != iVar0)
					{
						if (unk_0x0C7EC810080F0459(unk_0xCF4C00513A86E840(iVar2), uVar3, iParam1))
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

void func_487()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x74238B7708290D43(1, iVar0, &Var2, 2);
			if (Var2.f_0 == 248)
			{
				if (Var2.f_1 == unk_0xA34E7C2A5118D638())
				{
					func_189(128);
				}
			}
		}
		iVar0++;
	}
}

void func_488()
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return;
	}
	if (!unk_0xEE66E067C1F8D1F4())
	{
		return;
	}
	if (unk_0xD398CE6895CD43E8(false) != 1)
	{
		if (func_489(1, 0, 1))
		{
			if (unk_0xE2894B8E26DA3414(0) <= 1)
			{
				unk_0xB575A770677DC316(1);
			}
		}
	}
}

bool func_489(int iParam0, bool bParam1, bool bParam2)
{
	return func_490(0, iParam0, 1, bParam1, bParam2);
}

int func_490(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDCC86F723E82125E(Global_1348625, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_494(iParam0) - func_493(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_493(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_494(iParam0) - func_492(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_493(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_494(iParam0) - func_493(iParam0, 1));
		}
		if (!bParam4 && Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] != 3)
		{
			iVar1 = (iVar1 - func_491(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_491(int iParam0)
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

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348625.f_1;
			break;
		
		case 1:
			return Global_1348625.f_2;
			break;
		
		case 2:
			return Global_1348625.f_3;
			break;
	}
	return 0;
}

int func_493(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA34E7C2A5118D638();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xEE66E067C1F8D1F4())
			{
				return Global_2417071[iVar0 /*306*/].f_207;
			}
			else
			{
				return unk_0xD398CE6895CD43E8(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xEE66E067C1F8D1F4())
			{
				return Global_2417071[iVar0 /*306*/].f_208;
			}
			else
			{
				return unk_0x43C913D65CB1CB90(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xEE66E067C1F8D1F4())
			{
				return Global_2417071[iVar0 /*306*/].f_209;
			}
			else
			{
				return unk_0x677F6E172BA18B9B(!bParam1);
			}
			break;
	}
	return 0;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348633;
			break;
		
		case 1:
			return Global_1348634;
			break;
		
		case 2:
			return Global_1348635;
			break;
	}
	return 0;
}

bool func_495(int iParam0)
{
	return func_461(iLocal_52, iParam0);
}

void func_496(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xB36863F9C6D42649() >= (uParam0->f_272 + uParam0->f_273) || unk_0xDCC86F723E82125E(Global_91106.f_20, 2)) || unk_0xDCC86F723E82125E(Global_91106.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xDCC86F723E82125E((*uParam0)[iVar0 /*18*/], 29))
					{
						func_497(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xB36863F9C6D42649();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_497(var uParam0)
{
	func_498(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_498(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xDCC86F723E82125E(*uParam0, 30))
	{
		switch (func_423(*uParam0))
		{
			case 0:
				unk_0x7567CEA8E6B5340B(uParam2);
				break;
			
			case 1:
				unk_0xC0E8B67A4385D37D(uParam1);
				break;
			
			case 2:
				unk_0x841AF342F853B150(sParam1);
				break;
			
			case 3:
				unk_0x1F0D08B8266D20DB(sParam1, unk_0xDCC86F723E82125E(*uParam0, 28));
				break;
			
			case 4:
				unk_0xC80AE0BAE243FFB1(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x354516B1347786F1(sParam1);
				break;
			
			case 6:
				unk_0xC4C141A321D45FD8(sParam1, unk_0xDCC86F723E82125E(*uParam0, 27));
				break;
			
			case 7:
				unk_0x0BDFD9BDBD966ED3(uParam2);
				break;
			
			case 8:
				unk_0xF3AC452C34BF0E13(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x8CBF0FAEA6BA6D37();
				break;
			
			default:
				break;
		}
		unk_0x59A0729D503ED758(uParam0, 29);
	}
}

void func_499(int iParam0)
{
	if (func_461(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_500()
{
	func_2(0);
	if (unk_0x95CCECA3948CFE7B(iLocal_96))
	{
		if (!unk_0xB6900B8CB0ABBD2B(iLocal_96))
		{
			func_2(1);
		}
		else
		{
			func_462("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_462("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		func_2(0);
		func_462("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_501(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD93BACE0E8C906AB();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_505();
			}
			else
			{
				return 0;
			}
		}
		if (!func_504())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xBBAE3E0C60A8AD4B())
				{
					if (!bParam2)
					{
						func_505();
					}
					else
					{
						return 0;
					}
				}
				if (func_503())
				{
					if (!bParam2)
					{
						func_505();
					}
					else
					{
						return 0;
					}
				}
				if (func_502(155))
				{
					if (!bParam2)
					{
						func_505();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x16DD8839736956AC())
			{
				if (!bParam2)
				{
					func_505();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD93BACE0E8C906AB();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			if (!bParam2)
			{
				func_505();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x16DD8839736956AC())
	{
		if (!bParam2)
		{
			func_505();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_502(int iParam0)
{
	if (unk_0x88FC52D6FDFA0AFA(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_503()
{
	return Global_2433098.f_569;
}

bool func_504()
{
	return Global_1315886;
}

void func_505()
{
	unk_0xA4E0D8FD51F2A6F7();
}

void func_506()
{
	func_189(1);
}

void func_507(var uParam0)
{
	func_510();
	if (func_42(0, 1))
	{
		unk_0xE3B1382567189443(1);
	}
	if (!unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		if (unk_0xD28A89C669EAD2E4(iLocal_96))
		{
			if ((func_522() && unk_0x090C65D5190A249D(iLocal_96, 1805844857) != 1) && unk_0x090C65D5190A249D(iLocal_96, -251125078) != 1)
			{
				unk_0xF7F92ABBE23C8EA8(iLocal_96, 1193033728, 0);
				if (unk_0xFE7BCFB02217DCDF(iLocal_96))
				{
					unk_0xF1A02DDEC7E15D6E(iLocal_96, 1);
				}
				if (unk_0xE437ADC394648FBE(iLocal_96))
				{
					unk_0x459A6F82E024C891(&iLocal_96);
				}
				unk_0x5147F4FD3D9AB607(iLocal_96);
			}
			else
			{
				unk_0x459A6F82E024C891(&iLocal_96);
				unk_0x5147F4FD3D9AB607(iLocal_96);
			}
		}
	}
	iLocal_49 = 0;
	if (func_461(iLocal_49, 64))
	{
		Global_25267 = 0;
	}
	if (!unk_0x2DC9BA2299B45EA6(iLocal_97))
	{
		unk_0x5124C5FA52D2AF3E(iLocal_97);
	}
	iLocal_97 = 0;
	iLocal_296 = 0;
	if (func_461(iLocal_49, 2048))
	{
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
	}
	func_5(&iLocal_49, 2048);
	func_509();
	if (func_522())
	{
		if (unk_0xDA33F6DC6574B8DD(uLocal_85))
		{
			unk_0x78DFC4B56BCF3DA9(uLocal_85);
		}
	}
	iLocal_98 = 0;
	func_510();
	func_508();
	Global_25268 = 0f;
	unk_0x336BA7AE7B61E786();
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		unk_0x02831590B216249D(unk_0xA34E7C2A5118D638(), 1);
	}
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		if (func_495(256))
		{
			unk_0x8C245572EDB27776(unk_0xC8B93D94F8954288(), 6, iLocal_86, iLocal_87, 0);
			func_189(1024);
		}
	}
	if (func_441("PROS_ACCEPT") && !Global_25265)
	{
		unk_0x9F4AA6F234E8A860(1);
	}
	if (Global_25269 == unk_0x46CF50E0E5A24635())
	{
		Global_25265 = 0;
	}
	func_418(uParam0, 0);
	if (func_522())
	{
		func_189(2048);
	}
	else
	{
		unk_0xA4E0D8FD51F2A6F7();
	}
}

void func_508()
{
}

void func_509()
{
	Global_2426867.f_615.f_10 = 0;
}

void func_510()
{
}

void func_511(bool bParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(iLocal_96))
	{
		if (unk_0x277ECDA23D8CCEB4(iLocal_96, 0))
		{
			if (unk_0x090C65D5190A249D(iLocal_96, -828834893) != 1)
			{
				unk_0xE5F6BE3F8E937ACE(iLocal_96, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_522())
			{
				if (unk_0xD28A89C669EAD2E4(iLocal_96))
				{
					if (unk_0xE437ADC394648FBE(iLocal_96))
					{
						if (unk_0xBE5036433C51E57D(unk_0x8FE8A2FD26B2A7FA(iLocal_96)))
						{
							unk_0xF1A02DDEC7E15D6E(iLocal_96, 1);
						}
					}
				}
			}
			else
			{
				unk_0xF1A02DDEC7E15D6E(iLocal_96, 1);
			}
		}
	}
}

void func_512()
{
	if (!func_522())
	{
		if (iLocal_295 == 11 || iLocal_295 == 13)
		{
			return;
		}
	}
	if (!unk_0xB6900B8CB0ABBD2B(iLocal_96))
	{
		if (!unk_0x54BD36F7F4951C53(iLocal_96))
		{
			func_89(0);
			iLocal_294 = 1;
		}
		if (func_522())
		{
			if (unk_0xFE7BCFB02217DCDF(iLocal_96))
			{
				unk_0xAAD662D7E0D59F4C(iLocal_96, 0);
				unk_0x0DF75AF098AD14C9(iLocal_96);
			}
		}
		else
		{
			unk_0x0DF75AF098AD14C9(iLocal_96);
		}
		unk_0xAC7C72D036F944F2(iLocal_96, 0);
	}
	if (unk_0x5D42322C7DB888D0(iLocal_99, 0) && !unk_0xB6900B8CB0ABBD2B(iLocal_99))
	{
		if (func_522())
		{
			if (unk_0xFE7BCFB02217DCDF(iLocal_99))
			{
				if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_8 <= 0 && !unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 11))
				{
					unk_0x421A48BD0770CF14(iLocal_99, 0);
					unk_0xD8E33295AE325D41(iLocal_99, 3);
					unk_0xD7901AD2ECEC1350(iLocal_99, 0);
				}
				unk_0x20F2C35BB8206D0D(iLocal_99, 1, 0);
			}
		}
		else
		{
			unk_0x421A48BD0770CF14(iLocal_99, 0);
			unk_0xD8E33295AE325D41(iLocal_99, 3);
			unk_0xD7901AD2ECEC1350(iLocal_99, 0);
		}
	}
	func_521(iLocal_76);
	func_521(iLocal_77);
	func_521(iLocal_78);
	func_521(iLocal_79);
	func_521(iLocal_80);
	func_521(iLocal_81);
	func_521(iLocal_82);
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0xD1FE26E80A6E2C00(unk_0xC8B93D94F8954288());
		if (func_522() && iLocal_297 != 3)
		{
			unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
		}
		unk_0x8EB9A60FB4C37A34(unk_0xC8B93D94F8954288(), 1);
		unk_0x4D2A04F490FBAE07(unk_0xC8B93D94F8954288(), 1);
	}
	if (func_461(iLocal_49, 2048))
	{
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
	}
	func_5(&iLocal_49, 2048);
	unk_0x27EBD5FFB9CDA1AC(2, 19, 1);
	unk_0x27EBD5FFB9CDA1AC(2, 37, 1);
	func_509();
	iLocal_296 = 0;
	if (func_461(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_25265 = 0;
		Global_25266 = 0;
	}
	if (func_461(iLocal_49, 8))
	{
		if (unk_0x11896648C9E8F14F(func_86()))
		{
			unk_0xF762ED015503B979(func_86());
		}
	}
	func_520();
	func_439();
	if (((func_441("PROS_ACCEPT") || func_441("PROS_CAM_TOG")) || func_441("PROS_RESPONSE")) || func_441("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0x9F4AA6F234E8A860(1);
	}
	func_344(0);
	unk_0xB7709513BF7C1AC0(1);
	if (func_461(iLocal_49, 8))
	{
		if (unk_0x11896648C9E8F14F(func_86()))
		{
			unk_0xF762ED015503B979(func_86());
		}
	}
	func_124("PROSTITUTES_SOLICIT_SCENE");
	unk_0x5E56B49A7D5150F6();
	func_116(0);
	unk_0xE3B1382567189443(1);
	func_513();
	if (func_522())
	{
		if (func_495(2))
		{
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				if (unk_0x6061DFC4D87F4B3E(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
				{
					if (unk_0xFE7BCFB02217DCDF(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
					{
						unk_0x8895A286A9A933D0(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0);
						unk_0x0782F0CAEA719452(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 1);
					}
				}
			}
			else if (unk_0x6061DFC4D87F4B3E(iLocal_99))
			{
				if (unk_0xFE7BCFB02217DCDF(iLocal_99))
				{
					unk_0x0782F0CAEA719452(iLocal_99, 1);
				}
				else
				{
					unk_0xF892FC88DC9DD7F8(iLocal_99);
					unk_0x0782F0CAEA719452(iLocal_99, 1);
				}
			}
		}
	}
	func_181(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_513()
{
	struct<8> Var0[2];
	struct<6> Var17[2];
	
	if (!func_519())
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
	if (func_517(275, &Var17, &Var0, 2, -1, 0, 0))
	{
		unk_0x0E68C97A53548AA2(131, func_516(), 0f);
		unk_0x0E68C97A53548AA2(117, func_515(), 0f);
		unk_0x0E68C97A53548AA2(118, func_514(), 0f);
	}
}

int func_514()
{
	return iLocal_46;
}

int func_515()
{
	return iLocal_45;
}

int func_516()
{
	return 0;
}

int func_517(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0xDC6347A8EBB9281E())
	{
	}
	if ((!unk_0xD3806BCA60629B3F() && (unk_0x2987DBAFED6F4E7C() || !unk_0xCE2AB8E6CC461E87())) && unk_0xDACB8C1598DAD773())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x14F2268F2CD21E48())
			{
				Var69 = { func_518(unk_0xA34E7C2A5118D638()) };
				if (unk_0x0BB7D2D2CAAFD70C(&Var69))
				{
					if (unk_0x59E0C66A4FA07806(&uVar82, 35, &Var69))
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
			if (unk_0xBBAE3E0C60A8AD4B() && Global_2439759.f_3)
			{
				unk_0x5BEDAFD51BD250F9(&Var0, &(Global_1710194.f_10));
			}
			else
			{
				unk_0xB7CCCBC5D4D05F4D(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xD3806BCA60629B3F())
	{
	}
	if (!unk_0x2987DBAFED6F4E7C())
	{
	}
	if (unk_0xCE2AB8E6CC461E87())
	{
	}
	if (!unk_0xDACB8C1598DAD773())
	{
	}
	return 0;
}

struct<13> func_518(int iParam0)
{
	struct<13> Var0;
	
	unk_0xC7B591FDF5AB5356(iParam0, &Var0, 13);
	return Var0;
}

int func_519()
{
	if ((unk_0xDC6347A8EBB9281E() && unk_0x964FE4B401FC8514()) && unk_0x91629FFED455823B())
	{
		return 1;
	}
	return 0;
}

void func_520()
{
	if (func_461(iLocal_49, 128))
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

void func_521(int iParam0)
{
	if (func_522())
	{
		if (func_210(iParam0))
		{
			unk_0x9CEEC8033FA9228F(iParam0);
		}
	}
}

bool func_522()
{
	return func_495(1);
}

bool func_523(int iParam0)
{
	return Global_35700 == iParam0;
}

int func_524(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_433(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1587175[iParam0 /*410*/] == 2 || Global_1587175[iParam0 /*410*/] == 1) || Global_1587175[iParam0 /*410*/] == 0) || Global_1587175[iParam0 /*410*/] == 3) || Global_1587175[iParam0 /*410*/] == 8)
	{
		return 1;
	}
	return 0;
}

