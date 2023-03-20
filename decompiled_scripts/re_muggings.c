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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	float fLocal_75 = 0f;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	struct<3> Local_80 = { 0, 0, 0 } ;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	int iLocal_90 = 0;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_97 = { 0, 0, 0 } ;
	struct<3> Local_100 = { 0, 0, 0 } ;
	char[] cLocal_103[8] = 0;
	char* sLocal_104 = NULL;
	char* sLocal_105 = NULL;
	char* sLocal_106 = NULL;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char* sLocal_120 = NULL;
	var uLocal_121 = 0;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_128 = { 0, 0, 0 } ;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	bool bLocal_133 = 0;
	bool bLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 0;
	struct<3> Local_145 = { 0, 0, 0 } ;
	int iLocal_148 = 0;
	bool bLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	bool bLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	bool bLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	float fLocal_165 = 0f;
	struct<3> Local_166 = { 0, 0, 0 } ;
	struct<3> Local_169 = { 0, 0, 0 } ;
	struct<3> Local_172 = { 0, 0, 0 } ;
	struct<3> Local_175 = { 0, 0, 0 } ;
	struct<3> Local_178 = { 0, 0, 0 } ;
	struct<3> Local_181 = { 0, 0, 0 } ;
	struct<3> Local_184 = { 0, 0, 0 } ;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	var uLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 16;
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
	char[] cLocal_359[8] = 0;
	char[] cLocal_360[8] = 0;
	char[] cLocal_361[8] = 0;
	char* sLocal_362 = NULL;
	char* sLocal_363 = NULL;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	char* sLocal_366 = NULL;
	char* sLocal_367 = NULL;
	char* sLocal_368 = NULL;
	char* sLocal_369 = NULL;
	char* sLocal_370 = NULL;
	struct<3> Local_371 = { 0, 0, 0 } ;
	struct<3> Local_374 = { 0, 0, 0 } ;
	char[] cLocal_377[8] = 0;
	char[] cLocal_378[8] = 0;
	int iLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = -1;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 1000;
	var uLocal_390 = 1000;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 15;
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
	var uLocal_666 = 1;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	struct<3> Local_670 = { 0, 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 5 } ;
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_91 = { -131.052f, -1627f, 31.1755f };
	Local_94 = { 287.888f, -284.603f, 52.967f };
	Local_97 = { -319.66f, -832.28f, 31.61f };
	Local_100 = { 31f, -1019f, 28.5f };
	sLocal_120 = "";
	cLocal_359 = "RANDOM@MUGGING3";
	cLocal_360 = "pickup_object";
	cLocal_377 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_379 = -1;
	if (unk_0x4B4BD87E3D30C50D(11))
	{
		if (iLocal_48 == 5 || iLocal_48 == 12)
		{
			func_275(25, iLocal_90);
			func_257();
		}
		else
		{
			func_257();
		}
	}
	Local_122 = { ScriptParam_0.f_1[0 /*3*/] };
	func_256(&uLocal_393, 3);
	func_255();
	if ((iLocal_90 == 1 && func_254(55)) && !func_253(55))
	{
		unk_0x2F798BA2098FDADE();
	}
	if (func_212(Local_122, 25, iLocal_90, 0, 0))
	{
		func_209(-1);
	}
	else
	{
		unk_0x2F798BA2098FDADE();
	}
	bVar0 = false;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_206(&uLocal_393);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			unk_0x4F465B18B3BC23B5(unk_0x8ACD527A7E574590());
		}
		func_205(uLocal_65, &uLocal_392);
		if (unk_0xD8AD97AB31334199() || bLocal_149)
		{
			switch (iLocal_46)
			{
				case 0:
					if (func_191())
					{
						unk_0x0C53A6DA4C66030D(0);
						unk_0x3B97B8A2AAD89A9D(-127.9025f, -1574.084f, 36.4128f, 10f, 0, 0, 0, 0, 0);
						iLocal_156 = 1;
						iLocal_46 = 1;
					}
					else if (func_190())
					{
						func_257();
					}
					break;
				
				case 1:
					if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
					{
						if (iLocal_141 == 0)
						{
							iLocal_141 = unk_0x712CF7B6BF65DD02(99, Local_122, 0f);
						}
						unk_0x4F465B18B3BC23B5(unk_0x8ACD527A7E574590());
						switch (iLocal_48)
						{
							case 1:
								func_182();
								break;
							
							case 2:
								unk_0xD00CD5E89EC86257("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_49)
								{
									case 0:
										unk_0xD00CD5E89EC86257("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (unk_0x1E80C02AC16B6622(iLocal_63) || unk_0xCC580427ED36D7F8(iLocal_63, unk_0x77F050A399DB77ED(), 0))
										{
											bVar0 = unk_0x1E80C02AC16B6622(iLocal_62);
											if (!unk_0xAE5A4FE344CB20A9(uLocal_191))
											{
											}
											if (bVar0 == 0 && iLocal_90 == 1)
											{
												unk_0xC760816D9DBCB020(iLocal_62, 500, 1000, 0, 0, 0, 0);
												unk_0x23E5F4496336DE4E(iLocal_62, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
												unk_0x112CD899A3BEE719(iLocal_62, 1);
												func_181(1);
												func_176();
											}
										}
										else
										{
											func_146();
										}
										if (iLocal_669 == 1 && bLocal_149 == 1)
										{
											iLocal_48 = 4;
										}
										else if (bLocal_149)
										{
											iLocal_49 = 2;
										}
										break;
									
									case 2:
										unk_0xD00CD5E89EC86257("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_145();
										if (iLocal_54 && !func_144())
										{
											iLocal_49 = 4;
										}
										break;
									
									case 4:
										unk_0xD00CD5E89EC86257("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_143())
										{
											func_142();
										}
										if (bLocal_155)
										{
											iLocal_49 = 5;
										}
										if (unk_0x49C650267EDFEBC6(iLocal_62, 242628503) == 7)
										{
											unk_0x2A6B9F9E71C479CF(&uLocal_121);
											unk_0xD0C8DD55C652567F(0, iLocal_63, 5000, 0, 2);
											unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 5000);
											unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x44642CB08FA1637E(uLocal_121);
											unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
											unk_0xAAD288E877AC833D(&uLocal_121);
										}
										break;
									
									case 5:
										func_139();
										if (!unk_0x0B6E83A9A7ED3EBA(iLocal_62))
										{
											if (unk_0x49C650267EDFEBC6(iLocal_62, 242628503) == 7)
											{
												unk_0x2A6B9F9E71C479CF(&uLocal_121);
												unk_0x9A42ADE14351A508(0, iLocal_63, 0);
												unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x44642CB08FA1637E(uLocal_121);
												unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
												unk_0xAAD288E877AC833D(&uLocal_121);
											}
										}
										break;
								}
								if (func_138())
								{
									iLocal_48 = 11;
								}
								if (bLocal_149)
								{
								}
								func_137();
								if (iLocal_49 == 0)
								{
									if (func_135())
									{
										if (iLocal_143 == 4)
										{
											if (unk_0xC3B073777B46C61A(uLocal_66))
											{
												unk_0x296CDA10C549A502(&uLocal_66);
											}
											if (unk_0xC3B073777B46C61A(uLocal_65))
											{
												unk_0x296CDA10C549A502(&uLocal_65);
											}
											if (!unk_0xC3B073777B46C61A(iLocal_67))
											{
												iLocal_67 = func_133(uLocal_191);
											}
											iLocal_48 = 4;
										}
										else
										{
											iLocal_48 = 3;
										}
									}
									if (func_132())
									{
										func_131();
									}
								}
								if (func_130())
								{
									func_129();
									func_128();
									if (unk_0xA427F05DB896EEBE(iLocal_62, Local_184, 7f, 7f, 7f, 0, 1, 0))
									{
										iLocal_143 = 2;
										iLocal_48 = 3;
									}
									else
									{
										iLocal_48 = 4;
									}
								}
								if (bLocal_149)
								{
									if (!unk_0x1CC086F95707C553(iLocal_63, 0))
									{
										func_126(uLocal_66, &uLocal_142);
									}
									else if (unk_0xC3B073777B46C61A(uLocal_66))
									{
										if (unk_0xD2BD93C5F1FF0DC6(iLocal_66) == 1)
										{
										}
										else
										{
											unk_0x0AA0CF6371DDEDCF(iLocal_66, 0);
											unk_0x80553402FCEB9A9C(iLocal_66, 1);
										}
									}
								}
								if (func_125())
								{
									iLocal_48 = 10;
								}
								break;
							
							case 4:
								unk_0xD00CD5E89EC86257("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_124(1);
								if (func_143())
								{
									func_142();
									func_139();
								}
								if (func_138())
								{
									iLocal_48 = 11;
								}
								func_116();
								break;
							
							case 5:
								unk_0xD00CD5E89EC86257("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_124(1);
								if (!bLocal_152)
								{
									func_115(iLocal_62, &uLocal_193);
									uLocal_193 = uLocal_193;
									func_114();
									func_113();
									func_112();
									if (func_111())
									{
										func_110();
										func_176();
									}
									if (func_104(func_105()) < iLocal_192)
									{
										iLocal_48 = 12;
									}
								}
								func_49();
								break;
							
							case 10:
								unk_0xD00CD5E89EC86257("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_48();
								break;
							
							case 3:
								func_47();
								break;
							
							case 11:
								func_46();
								break;
							
							case 6:
								if (func_138())
								{
									iLocal_48 = 11;
								}
								func_33();
								break;
							
							case 8:
								if (!unk_0x1E80C02AC16B6622(iLocal_62))
								{
									if (unk_0x0C8E94332AE582B1(iLocal_62, unk_0x77F050A399DB77ED(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_48 = 6;
									}
									else
									{
										func_257();
									}
								}
								break;
							
							case 9:
								unk_0xD00CD5E89EC86257("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (unk_0x1F2158D615BC4B25(iLocal_63))
								{
									if (unk_0x1E80C02AC16B6622(iLocal_63))
									{
										if (unk_0xC3B073777B46C61A(iLocal_66))
										{
											unk_0x296CDA10C549A502(&iLocal_66);
										}
										if (!unk_0x1F2158D615BC4B25(iLocal_62))
										{
											if (unk_0x1F2158D615BC4B25(iLocal_64))
											{
												unk_0x7D779528B7C61C13(&iLocal_64);
											}
											func_32();
											iLocal_56 = 1;
											func_116();
										}
									}
								}
								break;
							
							case 12:
								if (unk_0x1F2158D615BC4B25(iLocal_64))
								{
									unk_0x7D779528B7C61C13(&iLocal_64);
								}
								unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
								func_176();
								break;
							
							case 13:
								func_31();
								break;
							}
					}
					if (bLocal_60)
					{
						if (unk_0xAE5A4FE344CB20A9(uLocal_191))
						{
							if (unk_0x65F5CDFC7D4158BD(uLocal_191))
							{
								if (unk_0x2A488C176D52CCA5(Local_184, unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1)) > 150f)
								{
									func_257();
								}
							}
						}
					}
					else if (bLocal_149)
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_63))
						{
							if (iLocal_48 != 6)
							{
								if (func_30(unk_0x77F050A399DB77ED(), iLocal_63, 1) > 150f && (!unk_0xF74B69DFD85D7CCE(iLocal_63) || unk_0x3D8234BA64B54520(iLocal_63)))
								{
									func_29(&uLocal_380, 0, 0);
									iLocal_48 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_66, iLocal_63, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							func_29(&uLocal_380, 0, 0);
						}
					}
					if (unk_0x1F2158D615BC4B25(iLocal_62))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_62))
						{
							if (unk_0xCC580427ED36D7F8(iLocal_62, unk_0x77F050A399DB77ED(), 1))
							{
								if (unk_0x1F2158D615BC4B25(iLocal_64))
								{
									if (unk_0xD8EEAAAE9301A49D(iLocal_64, iLocal_62))
									{
										unk_0xE8EBCCA6A3BE542B(iLocal_64, 1, 1);
									}
								}
							}
						}
					}
					if (iLocal_150)
					{
						if (!iLocal_163)
						{
							if (!unk_0x0B6E83A9A7ED3EBA(iLocal_63) && !unk_0x0B6E83A9A7ED3EBA(iLocal_62))
							{
								if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iLocal_63, 1), unk_0xAF99169F0F5AE41D(iLocal_62, 1), 1) > 100f && unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iLocal_63, 1), unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 1) < 100f)
								{
									unk_0x23E5F4496336DE4E(iLocal_63, unk_0x77F050A399DB77ED(), 200f, -1, 0, 0);
									iLocal_163 = 1;
								}
							}
						}
					}
					if (bLocal_149 && !iLocal_150)
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_63))
						{
							if (iLocal_90 == 3)
							{
								if (unk_0x49C650267EDFEBC6(iLocal_63, 1805844857) != 1)
								{
									unk_0x5A499E160A1878DC(iLocal_63);
									unk_0x23E5F4496336DE4E(iLocal_63, iLocal_62, 200f, -1, 0, 0);
									unk_0x7B3932B7F4D58411(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
									iLocal_150 = 1;
								}
							}
							else if (unk_0x49C650267EDFEBC6(iLocal_63, 1805844857) != 1)
							{
								unk_0x5A499E160A1878DC(iLocal_63);
								unk_0x23E5F4496336DE4E(iLocal_63, unk_0x77F050A399DB77ED(), 200f, -1, 0, 0);
								unk_0x7B3932B7F4D58411(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
								iLocal_150 = 1;
							}
							if (unk_0x8DDC2B5BC5981D91(iLocal_63, -2134635134))
							{
								unk_0x23E5F4496336DE4E(iLocal_63, iLocal_62, 200f, -1, 0, 0);
								unk_0x7B3932B7F4D58411(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
								iLocal_150 = 1;
							}
							if (iLocal_90 == 1 || iLocal_90 == 4)
							{
								if (unk_0x5EE0E9E5B7A50C2A(iLocal_63, cLocal_359, sLocal_369, 3))
								{
									if (unk_0x91741EBC3EA7D505(iLocal_63, cLocal_359, sLocal_369) >= 0.922f)
									{
										unk_0x23E5F4496336DE4E(iLocal_63, unk_0x77F050A399DB77ED(), 200f, -1, 0, 0);
										unk_0x7B3932B7F4D58411(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
										iLocal_150 = 1;
									}
								}
								if (unk_0x5EE0E9E5B7A50C2A(iLocal_63, cLocal_359, sLocal_367, 3))
								{
									if (unk_0x91741EBC3EA7D505(iLocal_63, cLocal_359, sLocal_367) >= 0.922f)
									{
										unk_0x23E5F4496336DE4E(iLocal_63, unk_0x77F050A399DB77ED(), 200f, -1, 0, 0);
										unk_0x7B3932B7F4D58411(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
										iLocal_150 = 1;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_257();
		}
	}
}

void func_1()
{
	if (unk_0x1F2158D615BC4B25(iLocal_62))
	{
		if (unk_0x1E80C02AC16B6622(iLocal_62))
		{
			if (unk_0x1F2158D615BC4B25(iLocal_63))
			{
				if (unk_0x1E80C02AC16B6622(iLocal_63))
				{
					func_257();
				}
			}
		}
	}
	if (unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (unk_0xC3B073777B46C61A(uLocal_65))
		{
			unk_0x296CDA10C549A502(&iLocal_65);
		}
	}
	if (unk_0x1E80C02AC16B6622(iLocal_63))
	{
		if (unk_0xC3B073777B46C61A(iLocal_66))
		{
			unk_0x296CDA10C549A502(&iLocal_66);
		}
	}
	if (!iLocal_161)
	{
		if (unk_0x1E80C02AC16B6622(iLocal_63))
		{
			func_2(&uLocal_194, 1);
			iLocal_161 = 1;
		}
	}
	if (!iLocal_162)
	{
		if (unk_0x1E80C02AC16B6622(iLocal_62))
		{
			func_2(&uLocal_194, 2);
			iLocal_162 = 1;
		}
	}
}

void func_2(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_3(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xC3B073777B46C61A(uParam0))
	{
		if ((unk_0x1F2158D615BC4B25(iParam1) && unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED())) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xDD21A3DB256904E7(iParam1))
			{
				if (unk_0x968EA16107097324(unk_0x2EF671D3645D271D(iParam1), 0))
				{
					fVar1 = unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(iParam1, 1), 1);
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
						unk_0x6F47EA29DD25E841(iParam0, 1);
						unk_0xBE97057E01D4909F(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x6F47EA29DD25E841(iParam0, 0);
						unk_0xBE97057E01D4909F(iParam0, 255);
					}
				}
			}
			else if (unk_0x94195F7CA642F937(iParam1))
			{
				if (!unk_0x1E80C02AC16B6622(unk_0xCBABEE38E5DAB356(iParam1)))
				{
					fVar1 = unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(iParam1, 1), 1);
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
						unk_0x6F47EA29DD25E841(iParam0, 1);
						unk_0xBE97057E01D4909F(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x6F47EA29DD25E841(iParam0, 0);
						unk_0xBE97057E01D4909F(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_4()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_63) || !bLocal_133)
	{
		func_5(&uLocal_380, iLocal_63, 0, 0, 1, 1, 1);
	}
	else
	{
		func_29(&uLocal_380, 0, 0);
	}
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_6(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_6(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_7(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_7(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
	{
		func_29(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_8(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_8(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
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
	if (func_28(iVar0))
	{
		func_27();
	}
	if (func_26(iParam1) && unk_0xD0935EF5E40E7EE1(iParam1))
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
			if (func_21(uParam0, bParam7, bParam9, 0))
			{
				func_17(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(iVar0))
				{
					if ((unk_0x9D14A941038EF8A3(uParam0->f_3) && !unk_0x9D14A941038EF8A3(iVar0)) && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						if ((iVar1 && !unk_0x8E9825258F5C145C()) && uParam8)
						{
							if (!func_28(iVar0))
							{
								func_12(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x35D1CAD6ADAB6491("CMN_HINT", iVar0))
								{
									func_11(1);
								}
							}
						}
					}
				}
			}
			else if (func_13(iVar0))
			{
				if (unk_0x9D14A941038EF8A3(uParam0->f_3) && !unk_0x9D14A941038EF8A3(iVar0))
				{
					if (((unk_0xF74B69DFD85D7CCE(iParam1) && iVar1) && !unk_0x8E9825258F5C145C()) && uParam8)
					{
						if (!func_28(iVar0))
						{
							func_12(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x35D1CAD6ADAB6491("CMN_HINT", iVar0))
							{
								func_11(1);
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
				if (func_28(sParam5))
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
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(6) == 3 || unk_0x7DF7F572759C0E1B(6) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(4) == 3 || unk_0x7DF7F572759C0E1B(4) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(5) == 3 || unk_0x7DF7F572759C0E1B(5) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x752064BA1674210E(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x7DF7F572759C0E1B(2) == 3 || unk_0x7DF7F572759C0E1B(2) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x4D56690F35D56781() == 3 || unk_0x4D56690F35D56781() == 4)
				{
					func_29(uParam0, iVar0, 1);
				}
			}
			if (!func_21(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_29(uParam0, iVar0, 0);
	}
}

void func_9(var uParam0)
{
	if (func_26(unk_0x77F050A399DB77ED()))
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

int func_10(var uParam0)
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

int func_11(bool bParam0)
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

void func_12(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

int func_13(char* sParam0)
{
	if (!func_14(1, 1, 0))
	{
		if ((!unk_0x0AAC2160036975D9(sParam0) && func_28(sParam0)) || func_28("CMN_HINT"))
		{
			unk_0x4ACCE973F9C3CA3B(1);
		}
		return 0;
	}
	switch (Global_35700)
	{
		case 0:
		case 3:
			if (func_11(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_14(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_16(0))
	{
		return 0;
	}
	if (func_15())
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

bool func_15()
{
	return unk_0x3EAC9995EC220C5A() <= Global_17257.f_5745 + 100;
}

int func_16(int iParam0)
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

void func_17(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		func_29(uParam0, 0, 0);
	}
	if (func_20(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x94195F7CA642F937(iParam1))
		{
			iVar0 = unk_0xCBABEE38E5DAB356(iParam1);
			if (!unk_0xB42592B9FFEB5EDE(iVar0, 0))
			{
				if (unk_0x60F6396843CB51A6(iVar0))
				{
					if (!func_18())
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

bool func_18()
{
	return func_19(unk_0x8ACD527A7E574590());
}

int func_19(int iParam0)
{
	if (unk_0xDF1398076E26B0E4(unk_0xF555CE342BA0C333(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_20(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_21(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_25(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3EAC9995EC220C5A();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_24(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3EAC9995EC220C5A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_24(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3EAC9995EC220C5A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_25(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3EAC9995EC220C5A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_10(uParam0))
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
						if (!func_25(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x3EAC9995EC220C5A();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_24(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3EAC9995EC220C5A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_24(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3EAC9995EC220C5A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_25(bParam1, bParam2, bParam3))
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
					if (!func_25(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_24(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_24(bParam1, bParam2, bParam3) || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
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
				else if (!func_25(bParam1, bParam2, bParam3))
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
						if (func_23(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_22(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1) || func_22(bParam1, bParam2, bParam3))
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
					else if (func_23(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_10(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_27();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_22(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_23(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_24(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_25(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_26(int iParam0)
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

void func_27()
{
	unk_0x573691DB812DC8AA(&Global_2284, 4);
}

bool func_28(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

void func_29(var uParam0, int iParam1, int iParam2)
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
		if (func_28(uParam0->f_3))
		{
			unk_0x4ACCE973F9C3CA3B(1);
		}
	}
	if (!unk_0x9D14A941038EF8A3(sVar0))
	{
		if (func_28(sVar0))
		{
			unk_0x4ACCE973F9C3CA3B(1);
		}
	}
}

float func_30(int iParam0, int iParam1, int iParam2)
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

void func_31()
{
	func_257();
}

void func_32()
{
	if (!unk_0xAE5A4FE344CB20A9(uLocal_191))
	{
		if (unk_0x1E80C02AC16B6622(iLocal_63))
		{
			Local_184 = { unk_0x76876376BBD6A8D8(iLocal_63, 1067030938, 1069547520) };
		}
		else
		{
			Local_184 = { unk_0x7E5F70487DA3B188(unk_0xAF99169F0F5AE41D(iLocal_63, 1), 1067030938, 1069547520) };
		}
		uLocal_191 = unk_0x668D94B26744D7B2(joaat("pickup_money_wallet"), Local_184, uLocal_144, iLocal_192, 1, iLocal_85);
		iLocal_67 = func_133(uLocal_191);
		func_29(&uLocal_380, 0, 0);
		bLocal_60 = true;
	}
}

void func_33()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, "flee_backward_loop_shopkeeper", 3))
		{
			unk_0x2A6B9F9E71C479CF(&uLocal_121);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x47435418FBCE0635(0, 40000f, 0);
			unk_0x44642CB08FA1637E(uLocal_121);
			unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
			unk_0xAAD288E877AC833D(&uLocal_121);
		}
		else if (unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0x2A6B9F9E71C479CF(&uLocal_121);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x47435418FBCE0635(0, 40000f, 0);
			unk_0x44642CB08FA1637E(uLocal_121);
			unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
			unk_0xAAD288E877AC833D(&uLocal_121);
		}
		func_34(&uLocal_194, cLocal_103, sLocal_110, 4, 0, 0, 0);
		iLocal_154 = 1;
		unk_0x112CD899A3BEE719(iLocal_62, 1);
		unk_0x4EDE34FBADD967A6(0);
		func_257();
	}
}

int func_34(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_35(sParam2, iParam3, 0);
}

int func_35(char* sParam0, int iParam1, bool bParam2)
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
					func_44();
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
		if (func_43(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_42();
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
				func_40();
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
				if (func_39())
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
			if (func_38())
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
			func_37();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_36();
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
		func_44();
	}
	return 0;
}

void func_36()
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

void func_37()
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

int func_38()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_39()
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

void func_40()
{
	if (func_41(14))
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
		Global_14413 = func_105();
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

bool func_41(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_42()
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

bool func_43(int iParam0, int iParam1)
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

void func_44()
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

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_46()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		unk_0xE2CB8488CFA42209(iLocal_62);
		unk_0x23E5F4496336DE4E(iLocal_62, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
		unk_0x112CD899A3BEE719(iLocal_62, 1);
		if (unk_0x1F2158D615BC4B25(iLocal_64))
		{
			unk_0x7D779528B7C61C13(&iLocal_64);
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC3B073777B46C61A(iLocal_65))
		{
			unk_0x296CDA10C549A502(&iLocal_65);
		}
		unk_0xA29D53AF339F4CD0(&iLocal_62);
	}
	if (unk_0x1E80C02AC16B6622(iLocal_63) || unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (unk_0xC3B073777B46C61A(iLocal_66))
		{
			unk_0x296CDA10C549A502(&iLocal_66);
		}
		if (unk_0xC3B073777B46C61A(iLocal_65))
		{
			unk_0x296CDA10C549A502(&iLocal_65);
		}
		if (unk_0xAE5A4FE344CB20A9(uLocal_191))
		{
			if (unk_0x65F5CDFC7D4158BD(uLocal_191))
			{
				iLocal_56 = 1;
				func_116();
			}
			else
			{
				func_124(0);
				func_257();
			}
		}
		else
		{
			func_257();
		}
	}
}

void func_47()
{
	bool bVar0;
	
	func_116();
	if (unk_0xAE5A4FE344CB20A9(uLocal_191))
	{
		if (unk_0x65F5CDFC7D4158BD(uLocal_191))
		{
		}
	}
	if (iLocal_143 == 1)
	{
		if (!iLocal_51)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_63))
			{
				unk_0xE2CB8488CFA42209(iLocal_63);
				unk_0xFBE25F0677076CF9(iLocal_63, unk_0x77F050A399DB77ED(), 0, 16);
				unk_0x112CD899A3BEE719(iLocal_63, 1);
			}
			if (!unk_0x1E80C02AC16B6622(iLocal_62))
			{
				if (unk_0xAE5A4FE344CB20A9(uLocal_191))
				{
					if (unk_0x65F5CDFC7D4158BD(uLocal_191))
					{
						unk_0xE2CB8488CFA42209(iLocal_62);
						unk_0x2A6B9F9E71C479CF(&uLocal_121);
						unk_0xE3BCB930B62CBDE5(0, unk_0x4FCFA6976C0E1749(uLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
						unk_0x44642CB08FA1637E(uLocal_121);
						unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
						unk_0xAAD288E877AC833D(&uLocal_121);
					}
				}
			}
			iLocal_51 = 1;
		}
	}
	if (iLocal_143 == 2)
	{
		if (!iLocal_51)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_63))
			{
				unk_0xE2CB8488CFA42209(iLocal_63);
				unk_0xFBE25F0677076CF9(iLocal_63, unk_0x77F050A399DB77ED(), 0, 16);
				unk_0x112CD899A3BEE719(iLocal_63, 1);
				unk_0xA09672E91FA74DCA(iLocal_63, 0);
				unk_0xA29D53AF339F4CD0(&iLocal_63);
			}
			if (!unk_0x1E80C02AC16B6622(iLocal_62))
			{
				if (unk_0xAE5A4FE344CB20A9(uLocal_191))
				{
					if (unk_0x65F5CDFC7D4158BD(uLocal_191))
					{
						if (unk_0xA427F05DB896EEBE(iLocal_62, unk_0x4FCFA6976C0E1749(uLocal_191), 10f, 10f, 10f, 0, 1, 0))
						{
							if (iLocal_90 == 3)
							{
								if ((!unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, "handsup_standing_enter", 3) && !unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, "handsup_standing_base", 3)) && !unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, "handsup_standing_exit", 3))
								{
									unk_0xE2CB8488CFA42209(iLocal_62);
									unk_0x2A6B9F9E71C479CF(&uLocal_121);
									unk_0xE3BCB930B62CBDE5(0, unk_0x4FCFA6976C0E1749(uLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x44642CB08FA1637E(uLocal_121);
									unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
									unk_0xAAD288E877AC833D(&uLocal_121);
									iLocal_51 = 1;
								}
							}
							else if ((!unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, sLocal_370, 3) && !unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, sLocal_366, 3)) && !unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, sLocal_368, 3))
							{
								unk_0xE2CB8488CFA42209(iLocal_62);
								unk_0x2A6B9F9E71C479CF(&uLocal_121);
								unk_0xE3BCB930B62CBDE5(0, unk_0x4FCFA6976C0E1749(uLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
								unk_0x44642CB08FA1637E(uLocal_121);
								unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
								unk_0xAAD288E877AC833D(&uLocal_121);
								iLocal_51 = 1;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					if (iLocal_90 == 3)
					{
						if ((!unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, "handsup_standing_enter", 3) && !unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, "handsup_standing_base", 3)) && !unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, "handsup_standing_exit", 3))
						{
							unk_0xE2CB8488CFA42209(iLocal_62);
							unk_0x23E5F4496336DE4E(iLocal_62, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
							unk_0x112CD899A3BEE719(iLocal_62, 1);
							if (unk_0xC3B073777B46C61A(iLocal_65))
							{
								unk_0x296CDA10C549A502(&iLocal_65);
							}
							unk_0xA29D53AF339F4CD0(&iLocal_62);
							iLocal_51 = 1;
							iLocal_48 = 9;
						}
					}
					else if ((!unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, sLocal_370, 3) && !unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, sLocal_366, 3)) && !unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, sLocal_368, 3))
					{
						unk_0xE2CB8488CFA42209(iLocal_62);
						unk_0x23E5F4496336DE4E(iLocal_62, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
						unk_0x112CD899A3BEE719(iLocal_62, 1);
						if (unk_0xC3B073777B46C61A(iLocal_65))
						{
							unk_0x296CDA10C549A502(&iLocal_65);
						}
						unk_0xA29D53AF339F4CD0(&iLocal_62);
						iLocal_51 = 1;
						iLocal_48 = 9;
					}
				}
			}
		}
	}
	if (iLocal_143 == 3)
	{
		if (!iLocal_51)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_63))
			{
				unk_0xE2CB8488CFA42209(iLocal_63);
				unk_0x23E5F4496336DE4E(iLocal_63, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
				unk_0x112CD899A3BEE719(iLocal_63, 1);
				unk_0xA09672E91FA74DCA(iLocal_63, 0);
				unk_0xA29D53AF339F4CD0(&iLocal_63);
			}
			if (!unk_0x1E80C02AC16B6622(iLocal_62))
			{
				unk_0xE2CB8488CFA42209(iLocal_62);
				unk_0x23E5F4496336DE4E(iLocal_62, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
				unk_0x112CD899A3BEE719(iLocal_62, 1);
				unk_0xA29D53AF339F4CD0(&iLocal_62);
			}
			iLocal_56 = 1;
			iLocal_51 = 1;
		}
	}
	if (iLocal_143 == 1 || iLocal_143 == 2)
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_62))
		{
			if (iLocal_51)
			{
				if (unk_0xAE5A4FE344CB20A9(uLocal_191))
				{
					if (unk_0x65F5CDFC7D4158BD(uLocal_191))
					{
						if (unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_360, "pickup_low", 3))
						{
							if (unk_0x91741EBC3EA7D505(iLocal_62, cLocal_360, "pickup_low") > 0.5f)
							{
								if (unk_0xAE5A4FE344CB20A9(uLocal_191))
								{
									if (unk_0x65F5CDFC7D4158BD(uLocal_191))
									{
										func_34(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0);
										unk_0xFED6C9CCD794E1F5(uLocal_191);
										bLocal_52 = true;
									}
								}
							}
						}
						else if (unk_0x49C650267EDFEBC6(iLocal_62, 242628503) == 7)
						{
							unk_0xE2CB8488CFA42209(iLocal_62);
							unk_0x2A6B9F9E71C479CF(&uLocal_121);
							unk_0x642DDF74A8A2B3BB(0, cLocal_360, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
							unk_0x44642CB08FA1637E(uLocal_121);
							unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
							unk_0xAAD288E877AC833D(&uLocal_121);
							unk_0x112CD899A3BEE719(iLocal_62, 1);
						}
					}
					else if (bLocal_52)
					{
						unk_0x4FE5EDEAD55F44A3(iLocal_62, iLocal_192);
						unk_0xA29D53AF339F4CD0(&iLocal_62);
						func_181(3);
						func_176();
					}
					else
					{
						unk_0x23E5F4496336DE4E(iLocal_62, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
						unk_0x112CD899A3BEE719(iLocal_62, 1);
						if (unk_0xC3B073777B46C61A(iLocal_65))
						{
							unk_0x296CDA10C549A502(&iLocal_65);
						}
						unk_0xA29D53AF339F4CD0(&iLocal_62);
						iLocal_51 = 1;
						iLocal_48 = 12;
					}
				}
				else if (bLocal_52)
				{
					unk_0x4FE5EDEAD55F44A3(iLocal_62, iLocal_192);
					unk_0xA29D53AF339F4CD0(&iLocal_62);
					func_181(3);
					func_176();
				}
				else
				{
					unk_0x23E5F4496336DE4E(iLocal_62, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
					unk_0x112CD899A3BEE719(iLocal_62, 1);
					if (unk_0xC3B073777B46C61A(iLocal_65))
					{
						unk_0x296CDA10C549A502(&iLocal_65);
					}
					unk_0xA29D53AF339F4CD0(&iLocal_62);
					iLocal_51 = 1;
					iLocal_48 = 12;
				}
			}
		}
		else
		{
			iLocal_48 = 9;
		}
	}
}

void func_48()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		unk_0xE2CB8488CFA42209(iLocal_62);
		unk_0x23E5F4496336DE4E(iLocal_62, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
		unk_0x112CD899A3BEE719(iLocal_62, 1);
		unk_0xA29D53AF339F4CD0(&iLocal_62);
	}
}

void func_49()
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	struct<2> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	int iVar18;
	int iVar19;
	
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (!bLocal_152)
		{
			if (iLocal_153)
			{
				Var15 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
				iVar18 = 1;
				if (iLocal_90 == 1)
				{
					if (Var15.f_2 > 33.5f)
					{
						iVar18 = 0;
					}
				}
				if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_62, 5f, 5f, 5f, 0, 1, 0) && iVar18 == 1)
				{
					if (func_102(2))
					{
						unk_0x4ACCE973F9C3CA3B(1);
					}
					if (unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
					{
						if (func_101(1, 0, 1))
						{
							if (!func_100())
							{
								if (!unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
								{
									func_92(1, 1, 1, 0);
									if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
									{
										while (!func_91(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), uLocal_77, 1, 1056964608, 0, 1, 0) || func_144())
										{
											unk_0xC04F3ABD290057B0();
											unk_0x4EDE34FBADD967A6(0);
										}
										if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
										{
											unk_0x743E219F0C060EE5(unk_0x77F050A399DB77ED(), 0, 0);
										}
									}
									unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
									if (!unk_0x1E80C02AC16B6622(iLocal_62))
									{
										unk_0x9AAEF18E6D4F7CB8(iLocal_62, 0);
									}
									unk_0xC04F3ABD290057B0();
									unk_0x2A14B2C6914B04E0(0);
									unk_0x3C6ED1B5636AF8B1(iLocal_141);
									if (unk_0x1066B6347C40B301())
									{
										func_89();
									}
									bLocal_152 = true;
									unk_0xC1B1E9A034A63A62(0);
								}
							}
						}
					}
				}
				else
				{
					func_87(unk_0xAF99169F0F5AE41D(iLocal_62, 1), &uLocal_76, &uLocal_77);
				}
			}
			else if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_62, 15f, 15f, 15f, 0, 1, 0))
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_121);
				unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
				unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2048, 2);
				if (iLocal_47 == 2)
				{
					unk_0x642DDF74A8A2B3BB(0, cLocal_377, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, 0, 0, 0);
				}
				unk_0x44642CB08FA1637E(uLocal_121);
				unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
				unk_0xAAD288E877AC833D(&uLocal_121);
				unk_0x7B3932B7F4D58411(iLocal_62, joaat("MotionState_Walk"), 0, 0, 0);
				iLocal_153 = 1;
			}
		}
		if (bLocal_152)
		{
			switch (iLocal_151)
			{
				case 0:
					unk_0xC04F3ABD290057B0();
					if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_62))
						{
							func_84(iLocal_62, &Local_125, &Local_128, cLocal_361, sLocal_363);
							if (iLocal_90 == 1)
							{
								if (Local_128.f_2 > 225f && Local_128.f_2 < 265f)
								{
									if (Local_128.f_2 < 245f)
									{
										Local_128.f_2 = 225f;
									}
									else
									{
										Local_128.f_2 = 265f;
									}
								}
								else if (Local_128.f_2 > 45f && Local_128.f_2 < 85f)
								{
									if (Local_128.f_2 < 65f)
									{
										Local_128.f_2 = 45f;
									}
									else
									{
										Local_128.f_2 = 85f;
									}
								}
							}
							Local_125.f_2 = (Local_125.f_2 + 2f);
							unk_0x8BE5D4DC1A953832(Local_125, &(Local_125.f_2), 0);
							Var1 = { unk_0xD213F6420A6F531A(cLocal_361, sLocal_363, Local_125, Local_128, 0f, 2) };
							Var10 = { Var1 - Local_125 };
							Var10.f_2 = 0f;
							fVar13 = unk_0x652D2EEEF1D3E62C(Var10);
							unk_0x8BE5D4DC1A953832(Var1, &(Var1.f_2), 0);
							fVar14 = (Local_125.f_2 - Var1.f_2);
							Local_128.f_0 = unk_0x14716E83ED712140(fVar14, fVar13);
							if (Local_128.f_0 > 30f || Local_128.f_0 < -30f)
							{
								Local_128.f_0 = 0f;
							}
						}
						if (unk_0x968EA16107097324(unk_0xD8D1111EA0CFD1DB(), 0))
						{
							if (!unk_0x968EA16107097324(iVar0, 0))
							{
								iVar0 = unk_0xD8D1111EA0CFD1DB();
								unk_0x2C8CA5222767F3E4(unk_0xDF1398076E26B0E4(iVar0), &uVar4, &Var7);
								if (unk_0xA427F05DB896EEBE(iVar0, Local_125, (Var7.f_1 + 1.5f), (Var7.f_1 + 1.5f), 3f, 0, 1, 0) || unk_0xA427F05DB896EEBE(iVar0, unk_0xD213F6420A6F531A(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2), (Var7.f_1 + 1f), (Var7.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (iLocal_90 == 1)
									{
										if (Local_128.f_2 > 40f && Local_128.f_2 < 220f)
										{
											Local_80 = { -148.3897f, -1647.215f, 31.5867f };
											fLocal_79 = 331.9427f;
										}
										else
										{
											Local_80 = { -129.5632f, -1622.282f, 31.1122f };
											fLocal_79 = 148.9075f;
										}
									}
									else if (iLocal_90 == 3)
									{
										if (Local_128.f_2 > 160f && Local_128.f_2 < 340f)
										{
											Local_80 = { -319.709f, -837.0066f, 30.449f };
											fLocal_79 = 61.7986f;
										}
										else
										{
											Local_80 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_79 = 269.6216f;
										}
									}
									else if (iLocal_90 == 4)
									{
										if (Local_128.f_2 > 240f || Local_128.f_2 < 60f)
										{
											Local_80 = { 37.222f, -1005.04f, 28.4648f };
											fLocal_79 = 156.7986f;
										}
										else
										{
											Local_80 = { 29.9887f, -1033.184f, 28.3794f };
											fLocal_79 = 344.6216f;
										}
									}
									else
									{
										fLocal_79 = unk_0x7578EBD2DA3F8DD2(iVar0);
										Local_80 = { func_82(Local_125, unk_0xD213F6420A6F531A(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2)) };
									}
									if (unk_0x968EA16107097324(iVar0, 0))
									{
										unk_0x0B5F372F57E469AC(iVar0, Local_80, 1, 0, 0, 1);
										unk_0x2DA164E80FDEE7F2(iVar0, fLocal_79);
										unk_0xC1D3820702043A43(iVar0);
										unk_0x3C072F008135D7A8(iVar0, 1);
									}
								}
							}
						}
						unk_0xDD10371A3DDE4593(Local_125, 20f, 2);
						unk_0x2D170B30FD0AB4FC(Local_125, 20f, 0);
						unk_0x0BA5964C07973FE9(Local_125, 2f, 1, 1, 0, 0);
						unk_0xC845B8398E72DBF0(unk_0x77F050A399DB77ED(), 1);
						iLocal_64 = unk_0x4A498A71A7B2E7A5(iLocal_85, unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 1, 1, 0);
						if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
						{
							unk_0xCA41E71A6AD186D8(iLocal_64, unk_0x77F050A399DB77ED(), unk_0x49E48BFB98D99FE3(unk_0x77F050A399DB77ED(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						uLocal_131 = unk_0xFCF0CDCAF2761068(Local_125, Local_128, 2);
						unk_0xEBA174204B3A690F(uLocal_131, 0);
						uLocal_132 = unk_0x6AC24FEF1D81F105("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x59AFD0717303A531(uLocal_132, uLocal_131, sLocal_364, cLocal_361);
						unk_0xB28207B96952D994(unk_0x77F050A399DB77ED());
						unk_0x3C6CCFC07FD12077(unk_0x77F050A399DB77ED(), uLocal_131, cLocal_361, sLocal_362, 1000f, -8f, 0, 0, 1148846080, 0);
						if (!unk_0x1E80C02AC16B6622(iLocal_62))
						{
							unk_0xB28207B96952D994(iLocal_62);
							unk_0x3C6CCFC07FD12077(iLocal_62, uLocal_131, cLocal_361, sLocal_363, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						unk_0x12A448112D057EB4(uLocal_132, 1);
						unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
						func_34(&uLocal_194, cLocal_103, sLocal_115, 4, 0, 0, 0);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_151++;
					}
					unk_0xC04F3ABD290057B0();
					break;
				
				case 1:
					if ((unk_0x671C6C3F21245221(uLocal_131) && unk_0x19779E7427AA44FB(uLocal_131) > 0.9f) || func_80(1000))
					{
						unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
						unk_0x8793DE27084C2CBD(0f);
						unk_0x12A448112D057EB4(uLocal_132, 0);
						unk_0xFE65076A204F9258(uLocal_132, 0);
						func_79();
						if (!unk_0x1E80C02AC16B6622(iLocal_62))
						{
							unk_0xB28207B96952D994(iLocal_62);
							unk_0x4FE5EDEAD55F44A3(iLocal_62, (iLocal_192 - (iLocal_192 / 10)));
							Var1 = { unk_0xD213F6420A6F531A(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
							unk_0x8BE5D4DC1A953832(Var1, &(Var1.f_2), 0);
							unk_0x0B5F372F57E469AC(iLocal_62, Var1, 1, 0, 0, 1);
							unk_0x9526D9575C237F2F(iLocal_62, 0);
							Var1 = { unk_0x6279084D8420CB1F(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
							unk_0x2DA164E80FDEE7F2(iLocal_62, Var1.f_2);
							if (iLocal_90 == 4)
							{
								if (func_78(Var1.f_2, 0f, 90f))
								{
									unk_0x2A6B9F9E71C479CF(&uLocal_121);
									unk_0xE3BCB930B62CBDE5(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x47435418FBCE0635(0, unk_0x7578EBD2DA3F8DD2(iLocal_62), 1);
									unk_0x44642CB08FA1637E(uLocal_121);
									unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
									unk_0xAAD288E877AC833D(&uLocal_121);
								}
								else
								{
									unk_0x2A6B9F9E71C479CF(&uLocal_121);
									unk_0xE3BCB930B62CBDE5(0, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x47435418FBCE0635(0, unk_0x7578EBD2DA3F8DD2(iLocal_62), 1);
									unk_0x44642CB08FA1637E(uLocal_121);
									unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
									unk_0xAAD288E877AC833D(&uLocal_121);
								}
							}
							else
							{
								unk_0x2A6B9F9E71C479CF(&uLocal_121);
								unk_0x47435418FBCE0635(0, Var1.f_2, 1);
								unk_0x44642CB08FA1637E(uLocal_121);
								unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
								unk_0xAAD288E877AC833D(&uLocal_121);
							}
							unk_0xD4EF45E71ECCA8CA(iLocal_62, cLocal_378, 1048576000);
							unk_0x7B3932B7F4D58411(iLocal_62, joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x112CD899A3BEE719(iLocal_62, 1);
						}
						if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
						{
							unk_0xB28207B96952D994(unk_0x77F050A399DB77ED());
							unk_0x9371C699D98CE4D6(unk_0x77F050A399DB77ED(), 0, 0);
						}
						if (unk_0x1F2158D615BC4B25(iLocal_64))
						{
							unk_0x7D779528B7C61C13(&iLocal_64);
						}
						if (!unk_0x1E80C02AC16B6622(iLocal_62))
						{
							unk_0x4FE5EDEAD55F44A3(iLocal_62, (iLocal_192 - (iLocal_192 / 10)));
							unk_0x9AAEF18E6D4F7CB8(iLocal_62, 1);
						}
						iVar19 = (iLocal_192 / 100);
						iVar19 *= 90;
						unk_0x4EDE34FBADD967A6(0);
						unk_0x65E2694C43D34E9A(0, 0, 3, 0);
						func_52(func_105(), 1, iVar19);
						func_51(joaat("rc_wallets_returned"), 1);
						func_181(3);
						func_176();
					}
					else if (unk_0x8DDC2B5BC5981D91(unk_0x77F050A399DB77ED(), joaat("detach")))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_62) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
						{
							if (unk_0xD8EEAAAE9301A49D(iLocal_64, unk_0x77F050A399DB77ED()))
							{
								unk_0xE8EBCCA6A3BE542B(iLocal_64, 0, 1);
								if (unk_0x520A1DEEFD3C2DE4(iLocal_62))
								{
									unk_0xCA41E71A6AD186D8(iLocal_64, iLocal_62, unk_0x49E48BFB98D99FE3(iLocal_62, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								else
								{
									unk_0xCA41E71A6AD186D8(iLocal_64, iLocal_62, unk_0x49E48BFB98D99FE3(iLocal_62, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								if (!iLocal_61)
								{
									if (func_34(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0) || func_50())
									{
										iLocal_61 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_61)
					{
						if (func_34(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0) || func_50())
						{
							iLocal_61 = 1;
						}
					}
					unk_0xC04F3ABD290057B0();
					break;
				}
		}
	}
	else
	{
		func_257();
	}
}

int func_50()
{
	if (Global_15712 == 4)
	{
		if (unk_0xEA9C2A206A86B744())
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

void func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xBA16CA557222A92B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x5716C8F12991E399(iParam0, iVar0, 1);
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_53(Global_99250.f_32503[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_77();
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
					func_76(99, 1);
					func_51(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_51(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_51(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_61(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_60(5))
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
							func_51(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_51(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_51(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_60(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_51(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_51(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_51(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_51(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_51(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_51(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_51(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_51(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_51(joaat("sp2_money_spent_property"), iParam3);
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
									func_51(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_51(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_51(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_51(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_51(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_60(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_51(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_51(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_51(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_51(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_59(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_76(95, iParam3);
					break;
				
				case 1:
					func_76(97, iParam3);
					break;
				
				case 2:
					func_76(96, iParam3);
					break;
			}
			func_76(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_56(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_56(iVar1);
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
					func_51(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_51(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_51(joaat("sp2_total_cash_earned"), iParam3);
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
	func_55(iParam0);
	if (Global_35700 == 15)
	{
		func_54(0);
	}
	return 1;
}

void func_54(bool bParam0)
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

void func_55(int iParam0)
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

void func_56(int iParam0)
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
	else if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0) || unk_0xB56FEBC510E7E9DE(Global_2097152[func_58() /*10185*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		unk_0xA5F70A8B83BDFA49(&(Global_2097152[func_58() /*10185*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2B8B3581C4E63AD1("COUP_RED");
		unk_0x703D2B4B1C7E10B6(func_57(iParam0));
		unk_0xEF85B88DC049EA23(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_57(int iParam0)
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

int func_58()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_59(int iParam0)
{
	func_76(93, iParam0);
	func_76(29, iParam0);
	func_76(30, iParam0);
}

bool func_60(int iParam0)
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0);
	}
	return unk_0xB56FEBC510E7E9DE(Global_2097152[func_58() /*10185*/].f_7698.f_10, iParam0);
}

int func_61(bool bParam0)
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
		func_75(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_62(27, 1);
	return 1;
}

int func_62(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_63(iParam0, iParam1);
}

int func_63(int iParam0, int iParam1)
{
	if (func_41(14) && !func_74(iParam0))
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
	if (func_73(&Global_2558981))
	{
		if (func_71(&Global_2558981, iParam0))
		{
			return 0;
		}
		if (func_64(&Global_2558981, iParam0))
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

int func_64(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
	{
		return 0;
	}
	if (func_41(14) && !func_74(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
	}
	if (func_70(uParam0) < 0f)
	{
		func_69(uParam0, 0);
	}
	func_67(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_65(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
	{
		return 0;
	}
	if (func_41(14) && !func_74(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
	}
	if (func_70(uParam0) < 0f)
	{
		func_69(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_66(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_66(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_67(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_68(uParam0, iVar0);
		iVar0++;
	}
	func_69(uParam0, (Global_2558980 - 0.5f));
}

void func_68(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_69(var uParam0, float fParam1)
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

float func_70(var uParam0)
{
	return uParam0->f_72;
}

bool func_71(var uParam0, int iParam1)
{
	return func_72(uParam0, iParam1) != -1;
}

int func_72(var uParam0, int iParam1)
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

bool func_73(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_74(int iParam0)
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

int func_75(int iParam0, int iParam1)
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

void func_76(int iParam0, int iParam1)
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

void func_77()
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

int func_78(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_79()
{
	var uVar0;
	
	uVar0 = unk_0xEDBA42E4C9B7F653(26379945, unk_0x03C14E8A9400F2A9(unk_0x77F050A399DB77ED(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0x7578EBD2DA3F8DD2(unk_0x77F050A399DB77ED()), 1115815936, 1, 2);
	unk_0x12A448112D057EB4(uVar0, 1);
}

int func_80(int iParam0)
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
			if (func_81())
			{
				Global_27 = unk_0x3EAC9995EC220C5A();
				return 1;
			}
		}
	}
	return 0;
}

int func_81()
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

Vector3 func_82(struct<3> Param0, struct<3> Param3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	var uVar19;
	struct<3> Var22;
	struct<3> Var25;
	var uVar28;
	var uVar29;
	
	iVar13 = 0;
	iVar14 = 1;
	iVar0 = unk_0xD8D1111EA0CFD1DB();
	if (!unk_0x335346A332B62CA2(iVar0))
	{
		unk_0x8D429A827A931AC9(iVar0, 1, 0);
	}
	unk_0x2C8CA5222767F3E4(unk_0xDF1398076E26B0E4(iVar0), &Var7, &Var10);
	unk_0xEBCB31D6E4BC1DCC(Param0, 3, &Var4, 1, 1077936128, 0);
	if (unk_0x2A488C176D52CCA5(Param0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		Var1 = { -3045.49f, 604.46f, 7.02f };
		iVar13 = 8;
	}
	else if (unk_0x2A488C176D52CCA5(Param0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		Var1 = { 278.97f, -1255.06f, 28.88f };
		iVar13 = 8;
	}
	while (iVar13 < 8)
	{
		switch (iVar13)
		{
			case 0:
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x03C14E8A9400F2A9(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x03C14E8A9400F2A9(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0x03C14E8A9400F2A9(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0x03C14E8A9400F2A9(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				if (unk_0x1F2158D615BC4B25(iVar0))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
					{
						Var22 = { func_83(Var1, 0f, Var10) };
						Var25 = { func_83(Var1, 0f, Var7) };
						uVar29 = unk_0x317C1E3F94E69BE1(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 1:
				if (unk_0x8DF1E9C686542134(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else if (unk_0xA2490B3CE6382FBB(Var1, Param0, 1) <= 5f || unk_0xA2490B3CE6382FBB(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 2:
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x03C14E8A9400F2A9(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x03C14E8A9400F2A9(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0x03C14E8A9400F2A9(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0x03C14E8A9400F2A9(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				if (unk_0x1F2158D615BC4B25(iVar0))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
					{
						Var22 = { func_83(Var1, 0f, Var10) };
						Var25 = { func_83(Var1, 0f, Var7) };
						uVar29 = unk_0x317C1E3F94E69BE1(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 3:
				if (unk_0x8DF1E9C686542134(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else if (unk_0xA2490B3CE6382FBB(Var1, Param0, 1) <= 5f || unk_0xA2490B3CE6382FBB(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 4:
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x03C14E8A9400F2A9(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x03C14E8A9400F2A9(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0x03C14E8A9400F2A9(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x03C14E8A9400F2A9(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0x1F2158D615BC4B25(iVar0))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
					{
						Var22 = { func_83(Var1, 0f, Var10) };
						Var25 = { func_83(Var1, 0f, Var7) };
						uVar29 = unk_0x317C1E3F94E69BE1(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 5:
				if (unk_0x8DF1E9C686542134(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else if (unk_0xA2490B3CE6382FBB(Var1, Param0, 1) <= 5f || unk_0xA2490B3CE6382FBB(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 6:
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x03C14E8A9400F2A9(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x03C14E8A9400F2A9(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0x03C14E8A9400F2A9(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x03C14E8A9400F2A9(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0x1F2158D615BC4B25(iVar0))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
					{
						Var22 = { func_83(Var1, 0f, Var10) };
						Var25 = { func_83(Var1, 0f, Var7) };
						uVar29 = unk_0x317C1E3F94E69BE1(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 7:
				if (unk_0x8DF1E9C686542134(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else if (unk_0xA2490B3CE6382FBB(Var1, Param0, 1) <= 5f || unk_0xA2490B3CE6382FBB(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return Var1;
}

Vector3 func_83(struct<3> Param0, float fParam3, struct<2> Param4, var uParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = unk_0xD0FFB162F40A139C(fVar3);
	fVar5 = unk_0x0BADBFA3B172435F(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

void func_84(int iParam0, var uParam1, var uParam2, char[4] cParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	var uVar19;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0) };
	uParam2->f_2 = func_86(iParam0, unk_0x77F050A399DB77ED(), 1);
	fVar3 = func_86(iParam0, unk_0x77F050A399DB77ED(), 1);
	fVar4 = func_86(iParam0, unk_0x77F050A399DB77ED(), 1);
	Var16 = { unk_0xAF99169F0F5AE41D(iParam0, 0) - unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0) };
	if (unk_0x5263DE3D9A17A86F(cParam3))
	{
		Var13 = { unk_0xD213F6420A6F531A(cParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		Var13 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_85(unk_0xAF99169F0F5AE41D(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0xB91BD3EFC17D9612(unk_0xAF99169F0F5AE41D(iParam0, 0), uParam2->f_2, Var16) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = unk_0x4C62C3A1731B43F8(*uParam1, Var13 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0x8DF1E9C686542134(uVar5, &iVar6, &Var10, &uVar7, &uVar19) == 2)
				{
					if (iVar6 != 0)
					{
						if (Var10.f_2 > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0xB91BD3EFC17D9612(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), fVar4, Var16) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_85(Var13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

float func_85(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x14716E83ED712140(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_86(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 0) };
	return func_85(Var0, Var3, iParam2);
}

void func_87(struct<3> Param0, var uParam3, var uParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		Var1 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) - Param0 };
		fVar4 = unk_0xA4F14A9B0DDEB91E(Var1.f_0, Var1.f_1);
		if (func_88(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
		fVar4 = unk_0xA4F14A9B0DDEB91E(Var1.f_0, Var1.f_1);
		if (func_88(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x2AA05370067DC5AC(unk_0x77F050A399DB77ED()) > 30f)
		{
			*uParam3 = (6f * 4f);
		}
		else if (unk_0x2AA05370067DC5AC(unk_0x77F050A399DB77ED()) > 20f)
		{
			*uParam3 = (6f * 3f);
		}
		else if (unk_0x2AA05370067DC5AC(unk_0x77F050A399DB77ED()) > 10f)
		{
			*uParam3 = (6f * 2f);
		}
		else
		{
			*uParam3 = 6f;
		}
		*uParam4 = ((*uParam3 / 1.33f) - 1f);
	}
	else
	{
		*uParam3 = 6f;
		*uParam4 = ((*uParam3 / 1.33f) - 1f);
	}
}

int func_88(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0x968EA16107097324(iParam0, 0))
	{
		fVar0 = unk_0x7578EBD2DA3F8DD2(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_89()
{
	Global_14578 = 0;
	func_90();
}

void func_90()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
	}
}

int func_91(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
		unk_0x29666BB73419DB0E(iParam0, uParam1, iParam2, iParam4);
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

void func_92(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xCBF71C579F3C5665(unk_0x8ACD527A7E574590());
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 1);
		func_99(1);
		unk_0xB2FE902971602DFF();
		unk_0x8AD31F9246CE7ADF();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xEA9C2A206A86B744())
			{
				unk_0xC9AB825AA4821BDA(0);
			}
			if (!func_38())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_98(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_99(0);
		unk_0x7A72DD566E92DC37();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x1F3478667D91BCDD();
		}
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 0);
		func_98(0, iParam3, iParam2, 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !func_93(unk_0x8ACD527A7E574590()))
		{
			unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), 0);
		}
		Global_69315 = 0;
	}
}

int func_93(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		return 1;
	}
	if (func_94())
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

bool func_94()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

bool func_95(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_96(-1, 0) == 8;
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

int func_96(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_97();
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

int func_97()
{
	return Global_1312746;
}

int func_98(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_99(int iParam0)
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

int func_100()
{
	if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (func_144())
		{
			return 1;
		}
	}
	return 0;
}

int func_101(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xACF19F629EE5429B())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (!unk_0xB2D1758C032223EA(unk_0x77F050A399DB77ED()))
		{
			return 0;
		}
		iVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (bParam0)
		{
			if (unk_0x0B6E83A9A7ED3EBA(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
			{
				if (unk_0x07A8845F7F106A38(iVar0, -1) != unk_0x77F050A399DB77ED())
				{
					return 0;
				}
			}
		}
		if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
		{
			if (unk_0x8ED30F31356C7C7C(iVar0) < 0.95f || unk_0x8ED30F31356C7C7C(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (!unk_0x99BA09207E5CDC50(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	return 1;
}

bool func_102(int iParam0)
{
	return func_28(func_103(iParam0));
}

char* func_103(int iParam0)
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

int func_104(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xBA16CA557222A92B(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xBA16CA557222A92B(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xBA16CA557222A92B(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_105()
{
	func_106();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_106()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_109(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_108(unk_0x77F050A399DB77ED());
			if (func_107(iVar0) && (!func_41(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_107(Global_99250.f_1754.f_539.f_3549))
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

bool func_107(int iParam0)
{
	return iParam0 < 3;
}

int func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_109(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_109(int iParam0)
{
	if (func_107(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_110()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		unk_0x23E5F4496336DE4E(iLocal_62, unk_0x77F050A399DB77ED(), 150f, -1, 0, 0);
		unk_0x112CD899A3BEE719(iLocal_62, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_111()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 3f, 3f, 3f };
	Var3 = { -3f, -3f, -3f };
	if (unk_0x1E80C02AC16B6622(iLocal_62))
	{
		return 1;
	}
	else
	{
		if (unk_0xCC580427ED36D7F8(iLocal_62, unk_0x77F050A399DB77ED(), 1))
		{
			return 1;
		}
		if (unk_0x5E9F3856F26E26EC(unk_0x5C9D7C3DA25581D1(iLocal_62, 31086, 0f, 0f, 0f), 5f, 1))
		{
			return 1;
		}
		Var0 = { Var0 + unk_0x5C9D7C3DA25581D1(iLocal_62, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + unk_0x5C9D7C3DA25581D1(iLocal_62, 31086, 0f, 0f, 0f) };
		if ((unk_0xE72CB29247340616(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0xE72CB29247340616(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0xE72CB29247340616(Var3, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0xC27EE0DD623366DE(unk_0x5C9D7C3DA25581D1(iLocal_62, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_112()
{
	if (!unk_0x0B6E83A9A7ED3EBA(iLocal_62))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(iLocal_62, 1)) > (fLocal_165 + 50f))
		{
			func_176();
		}
		else if (func_104(func_105()) < iLocal_192)
		{
			func_176();
		}
	}
}

void func_113()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_62, Global_19, 0, 1, 0))
		{
			unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_62, 3000, 0, 2);
			unk_0xD0C8DD55C652567F(iLocal_62, unk_0x77F050A399DB77ED(), 3000, 0, 2);
		}
	}
}

void func_114()
{
	float fVar0;
	
	if (iLocal_90 == 1)
	{
		fVar0 = 13f;
	}
	if (iLocal_90 == 4)
	{
		fVar0 = 5.75f;
	}
	if (iLocal_90 == 1 || iLocal_90 == 4)
	{
		if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_166, Local_169, fVar0, 0, 1, 0))
		{
			if (!iLocal_157)
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_62))
				{
					unk_0x9A42ADE14351A508(iLocal_62, unk_0x77F050A399DB77ED(), 0);
					iLocal_157 = 1;
					iLocal_158 = 0;
				}
			}
		}
		if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_172, Local_175, fVar0, 0, 1, 0))
		{
			if (!iLocal_158)
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_62))
				{
					unk_0x9A42ADE14351A508(iLocal_62, unk_0x77F050A399DB77ED(), 0);
					iLocal_158 = 1;
					iLocal_157 = 0;
				}
			}
		}
		if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_178, Local_181, fVar0, 0, 1, 0))
		{
			if (!iLocal_159)
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_62))
				{
					iLocal_159 = 1;
				}
			}
		}
	}
	if (!iLocal_160)
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_62))
		{
			if (unk_0x0C8E94332AE582B1(iLocal_62, unk_0x77F050A399DB77ED(), 25f, 25f, 5f, 0, 1, 0) && unk_0xC76E1A07C6272140(iLocal_62, unk_0x77F050A399DB77ED(), 17))
			{
				if (func_34(&uLocal_194, cLocal_103, sLocal_108, 4, 0, 0, 0) || func_50())
				{
					if (!unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, "flee_forward_outro_shopkeeper", 3))
					{
						unk_0x2A6B9F9E71C479CF(&uLocal_121);
						unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
						if (iLocal_47 == 2)
						{
							unk_0x642DDF74A8A2B3BB(0, cLocal_377, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x44642CB08FA1637E(uLocal_121);
						unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
						unk_0xAAD288E877AC833D(&uLocal_121);
						iLocal_160 = 1;
					}
				}
			}
		}
	}
}

void func_115(int iParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x1E80C02AC16B6622(iParam0))
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_121);
				unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 0, 2);
				unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
				unk_0x44642CB08FA1637E(uLocal_121);
				unk_0xB8A8FA4B28E9F423(iParam0, uLocal_121);
				unk_0xAAD288E877AC833D(&uLocal_121);
				unk_0xC1B1E9A034A63A62(0);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0x1E80C02AC16B6622(iParam0))
			{
				if (unk_0x6867AF84AF12BEFC(iParam0, unk_0x77F050A399DB77ED(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x1E80C02AC16B6622(iParam0))
			{
				if (!unk_0x6867AF84AF12BEFC(iParam0, unk_0x77F050A399DB77ED(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_116()
{
	if (unk_0x62E51B6A256A51C2(uLocal_191))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iLocal_62))
		{
			fLocal_165 = unk_0x2A488C176D52CCA5(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(iLocal_62, 1));
		}
		func_51(joaat("rc_wallets_recovered"), 1);
		unk_0x084501BE62B00ABE(0, 200, 250);
		if (unk_0x1F2158D615BC4B25(iLocal_64))
		{
			unk_0x7D779528B7C61C13(&iLocal_64);
		}
		func_119();
		func_118(&uLocal_392);
		if (unk_0x1F2158D615BC4B25(iLocal_62))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_62))
			{
				unk_0x007FD255A321ABD0(iLocal_62, 0);
			}
		}
		func_124(0);
		unk_0xFED6C9CCD794E1F5(uLocal_191);
		if (!iLocal_56)
		{
			iLocal_48 = 5;
			func_117(2);
		}
		else
		{
			iLocal_48 = 12;
		}
	}
}

void func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_99250.f_29448.f_2 < 3)
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_12(func_103(iParam0), -1);
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
					func_12(func_103(iParam0), -1);
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
					func_12(func_103(iParam0), -1);
					Global_99250.f_29448.f_4++;
					unk_0x573691DB812DC8AA(&Global_99246, 2);
				}
			}
			break;
	}
}

void func_118(var uParam0)
{
	*uParam0 = -99;
}

void func_119()
{
	iLocal_67 = 0;
	if (!unk_0xC3B073777B46C61A(iLocal_65))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iLocal_62))
		{
			iLocal_65 = func_120(iLocal_62, 0, 0);
		}
	}
}

int func_120(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_121(iParam0, bParam1, 145);
}

int func_121(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_122(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC3B073777B46C61A(uVar0)) && unk_0x03BBACB5FC5BF182(&(Global_99250.f_32503[iParam2 /*29*/].f_3)))
	{
		unk_0x45C91EE3FC674072(iVar0, &(Global_99250.f_32503[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_122(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1F2158D615BC4B25(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xBAA49E1DC5584B87(iParam0);
	if (unk_0xDD21A3DB256904E7(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_123(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
		}
		else
		{
			unk_0x80553402FCEB9A9C(iVar0, 2);
		}
	}
	else if (unk_0x94195F7CA642F937(iParam0))
	{
		unk_0x61CD4A0BA23CE782(iVar0, func_123(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
		unk_0x0AA0CF6371DDEDCF(iVar0, bParam1);
	}
	else if (unk_0x0449EE7873816A89(iParam0))
	{
		unk_0x61CD4A0BA23CE782(iVar0, func_123(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_123(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_124(bool bParam0)
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62) && iLocal_90 == 4)
	{
		if (unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0x2A6B9F9E71C479CF(&uLocal_121);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 0, 2);
			if (bParam0)
			{
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			unk_0x44642CB08FA1637E(uLocal_121);
			unk_0xE2CB8488CFA42209(iLocal_62);
			unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
			unk_0xAAD288E877AC833D(&uLocal_121);
		}
	}
}

int func_125()
{
	if (unk_0x1F2158D615BC4B25(iLocal_64))
	{
		if (unk_0x540DDE9BB09221C3(iLocal_64))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_62))
			{
				if (unk_0xD8EEAAAE9301A49D(iLocal_64, iLocal_62))
				{
					if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_62, 18f, 18f, 18f, 0, 1, 0))
					{
						if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
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

void func_126(int iParam0, var uParam1)
{
	if (unk_0xC3B073777B46C61A(uParam0))
	{
		if (unk_0x3EAC9995EC220C5A() > *uParam1 + 500)
		{
			if (unk_0xD2BD93C5F1FF0DC6(iParam0) == 1)
			{
				unk_0x0AA0CF6371DDEDCF(iParam0, true);
			}
			else
			{
				unk_0x0AA0CF6371DDEDCF(iParam0, false);
				unk_0x80553402FCEB9A9C(iParam0, 1);
			}
			*uParam1 = unk_0x3EAC9995EC220C5A();
		}
		if (!unk_0x8E9825258F5C145C() && func_127(0))
		{
			func_117(1);
		}
	}
}

bool func_127(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_99246, iParam0);
}

void func_128()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_62, 8f, 8f, 18f, 0, 1, 0) || unk_0xF74B69DFD85D7CCE(iLocal_62))
		{
			unk_0xA1E3A2CCF985EE86();
		}
	}
}

void func_129()
{
	if (unk_0xC3B073777B46C61A(iLocal_66))
	{
		unk_0x296CDA10C549A502(&iLocal_66);
	}
	if (unk_0x1F2158D615BC4B25(iLocal_64))
	{
		if (unk_0x540DDE9BB09221C3(iLocal_64))
		{
			unk_0xE8EBCCA6A3BE542B(iLocal_64, 1, 1);
			unk_0x7D779528B7C61C13(&iLocal_64);
			func_32();
		}
	}
	else
	{
		func_32();
	}
	if (!unk_0x1E80C02AC16B6622(iLocal_63))
	{
		if (func_34(&uLocal_194, cLocal_103, sLocal_107, 4, 0, 0, 0) || func_50())
		{
			if (iLocal_47 == 2)
			{
				unk_0xCAB5098DD2DF915A(iLocal_63, 128, 1);
				unk_0xCAB5098DD2DF915A(iLocal_63, 2, 1);
				unk_0xCAB5098DD2DF915A(iLocal_63, 1, 0);
				unk_0x23E5F4496336DE4E(iLocal_63, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
			}
			unk_0x112CD899A3BEE719(iLocal_63, 1);
		}
	}
}

int func_130()
{
	if (!unk_0x0B6E83A9A7ED3EBA(iLocal_63))
	{
		if (unk_0xCC580427ED36D7F8(iLocal_63, unk_0x77F050A399DB77ED(), 1))
		{
			if (bLocal_149)
			{
				return 1;
			}
		}
	}
	else if (bLocal_149)
	{
		return 1;
	}
	return 0;
}

void func_131()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		unk_0xE2CB8488CFA42209(iLocal_62);
		unk_0x23E5F4496336DE4E(iLocal_62, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
		unk_0x112CD899A3BEE719(iLocal_62, 1);
		unk_0x4EDE34FBADD967A6(0);
		unk_0xA29D53AF339F4CD0(&iLocal_62);
	}
	if (!unk_0x1E80C02AC16B6622(iLocal_63))
	{
		func_34(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
		unk_0x2A6B9F9E71C479CF(&uLocal_121);
		unk_0x8530DA8508D7A4B8(0);
		unk_0xFBE25F0677076CF9(0, unk_0x77F050A399DB77ED(), 0, 16);
		unk_0x44642CB08FA1637E(uLocal_121);
		unk_0xB8A8FA4B28E9F423(iLocal_63, uLocal_121);
		unk_0xAAD288E877AC833D(&uLocal_121);
		unk_0x112CD899A3BEE719(iLocal_63, 1);
		unk_0x4EDE34FBADD967A6(0);
		unk_0xA09672E91FA74DCA(iLocal_63, 0);
		unk_0xA29D53AF339F4CD0(&iLocal_63);
	}
}

int func_132()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (unk_0xCD7683F575A67B31(iLocal_62))
		{
			return 1;
		}
	}
	return 0;
}

int func_133(var uParam0)
{
	return func_134(uParam0);
}

int func_134(var uParam0)
{
	var uVar0;
	
	if (!unk_0xAE5A4FE344CB20A9(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x713298C4C81DB8B5(uParam0);
	unk_0x61CD4A0BA23CE782(uVar0, func_123(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
	return iVar0;
}

int func_135()
{
	if (unk_0xAE5A4FE344CB20A9(uLocal_191))
	{
		if (unk_0x65F5CDFC7D4158BD(uLocal_191))
		{
			if (unk_0x1F2158D615BC4B25(iLocal_63))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(iLocal_63))
				{
					if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
					{
						if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_63, 18f, 18f, 18f, 0, 1, 0) || unk_0xCC580427ED36D7F8(iLocal_63, unk_0x77F050A399DB77ED(), 1))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_143 = 1;
							return 1;
						}
					}
				}
				if (func_136())
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_143 = 2;
					return 1;
				}
				if (unk_0x1E80C02AC16B6622(iLocal_63))
				{
					if (unk_0xCC580427ED36D7F8(iLocal_63, unk_0x77F050A399DB77ED(), 1))
					{
						if (unk_0x1F2158D615BC4B25(iLocal_62))
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_62))
							{
								unk_0xE2CB8488CFA42209(iLocal_62);
								unk_0x007FD255A321ABD0(iLocal_62, 0);
							}
						}
						unk_0x5AE11BC36633DE4E(0);
						iLocal_143 = 2;
						return 1;
					}
				}
				else if (unk_0xCC580427ED36D7F8(iLocal_63, unk_0x77F050A399DB77ED(), 1))
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_143 = 2;
					if (unk_0x1F2158D615BC4B25(iLocal_62))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_62))
						{
							unk_0xE2CB8488CFA42209(iLocal_62);
							unk_0x007FD255A321ABD0(iLocal_62, 0);
						}
					}
					if (!unk_0x1E80C02AC16B6622(iLocal_63))
					{
						unk_0xE2CB8488CFA42209(iLocal_63);
						unk_0x23E5F4496336DE4E(iLocal_63, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
						unk_0x112CD899A3BEE719(iLocal_63, 1);
						unk_0xA09672E91FA74DCA(iLocal_63, 0);
						unk_0xA29D53AF339F4CD0(&iLocal_63);
					}
					return 1;
				}
			}
			if (unk_0x1F2158D615BC4B25(iLocal_62))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(iLocal_62))
				{
					if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_62, 5.3f, 5.3f, 6f, 0, 1, 0))
					{
						if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 6))
						{
							if (unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iLocal_62) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iLocal_62))
							{
								unk_0x5AE11BC36633DE4E(0);
								iLocal_143 = 3;
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_136()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_63))
	{
		if (unk_0xD89F5D6405AFC348(iLocal_63, unk_0x77F050A399DB77ED()) && unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_63, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 6))
			{
				if (unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iLocal_63) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iLocal_63))
				{
					return 1;
				}
			}
		}
		if (unk_0x03CD213BEF8ECB90(unk_0x77F050A399DB77ED()))
		{
			return 1;
		}
		if (unk_0xCD7683F575A67B31(iLocal_63))
		{
			return 1;
		}
	}
	return 0;
}

void func_137()
{
	if (iLocal_58)
	{
		if (!iLocal_59)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_63))
			{
				if (unk_0x521CC5B1D76CAD7D(iLocal_63, 4))
				{
					if ((func_34(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0) || func_50()) || func_50())
					{
						iLocal_59 = 1;
					}
				}
				else if ((func_34(&uLocal_194, cLocal_103, sLocal_107, 4, 0, 0, 0) || func_50()) || func_50())
				{
					iLocal_59 = 1;
				}
			}
		}
	}
	else if (func_136())
	{
		if ((func_34(&uLocal_194, cLocal_103, sLocal_116, 4, 0, 0, 0) || func_50()) || func_50())
		{
			if (unk_0x521CC5B1D76CAD7D(iLocal_63, 4))
			{
				unk_0xFBE25F0677076CF9(iLocal_63, unk_0x77F050A399DB77ED(), 0, 16);
			}
			else
			{
				func_129();
			}
			iLocal_58 = 1;
		}
	}
}

int func_138()
{
	int iVar0;
	
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 7))
		{
			if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_62, 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iLocal_62) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iLocal_62))
				{
					return 1;
				}
			}
		}
		if (unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar0, 1))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (unk_0x1CBFB08D4D50FF0E(iLocal_62, joaat("weapon_stungun"), 0))
				{
					return 1;
				}
			}
		}
		if (unk_0xCC580427ED36D7F8(iLocal_62, unk_0x77F050A399DB77ED(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x5E9F3856F26E26EC(unk_0x5C9D7C3DA25581D1(iLocal_62, 31086, 0f, 0f, 0f), 3f, 1))
	{
		return 1;
	}
	return 0;
}

void func_139()
{
	if (iLocal_47 == 2)
	{
	}
	if (!func_144())
	{
		if (unk_0x83666F9FB8FEBD4B() > 10000)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_62))
			{
				if (!unk_0x19D0201F2EBC77D1(iLocal_62))
				{
					func_140(iLocal_62, "GENERIC_CURSE_MED", 24);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
		}
	}
	if (!bLocal_60)
	{
		if (func_30(unk_0x77F050A399DB77ED(), iLocal_63, 1) > 200f)
		{
			if (!unk_0xF74B69DFD85D7CCE(iLocal_63) || unk_0x3D8234BA64B54520(iLocal_63))
			{
				iLocal_48 = 8;
			}
		}
	}
}

void func_140(int iParam0, char* sParam1, int iParam2)
{
	unk_0x71C24FB536157D30(iParam0, sParam1, func_141(iParam2), 1);
}

int func_141(int iParam0)
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

void func_142()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (!bLocal_53)
		{
			if (unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, "flee_backward_loop_shopkeeper", 3))
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_121);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 0, 2);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x44642CB08FA1637E(uLocal_121);
				unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
				unk_0xAAD288E877AC833D(&uLocal_121);
				iLocal_164 = 3;
				bLocal_53 = true;
			}
			else if (unk_0x5EE0E9E5B7A50C2A(iLocal_62, cLocal_359, "flee_forward_loop_shopkeeper", 3))
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_121);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 0, 2);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x44642CB08FA1637E(uLocal_121);
				unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
				unk_0xAAD288E877AC833D(&uLocal_121);
				iLocal_164 = 3;
				bLocal_53 = true;
			}
			else
			{
				bLocal_53 = true;
			}
		}
		if (bLocal_53)
		{
			if (!iLocal_136)
			{
				if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_62, 7f, 7f, 7f, 0, 1, 0))
				{
					if (unk_0x49C650267EDFEBC6(iLocal_62, 242628503) == 1)
					{
						if (unk_0xE6BB50DD87FB4D2B(iLocal_62) == iLocal_164)
						{
							unk_0xD0C8DD55C652567F(iLocal_62, unk_0x77F050A399DB77ED(), 9000, 0, 2);
							func_34(&uLocal_194, cLocal_103, sLocal_106, 4, 0, 0, 0);
							bLocal_155 = true;
							iLocal_136 = 1;
						}
					}
					else
					{
						unk_0xFECEEF81E92F7897(iLocal_62, 1);
						func_34(&uLocal_194, cLocal_103, sLocal_106, 4, 0, 0, 0);
						unk_0x2A6B9F9E71C479CF(&uLocal_121);
						unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), 7000, 0, 2);
						unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 7000);
						unk_0x44642CB08FA1637E(uLocal_121);
						unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
						unk_0xAAD288E877AC833D(&uLocal_121);
						unk_0xC1B1E9A034A63A62(0);
						bLocal_155 = true;
						iLocal_136 = 1;
					}
				}
			}
		}
	}
}

int func_143()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_62, 12f, 12f, 5f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_144()
{
	if (Global_15712 != 0 || unk_0x1066B6347C40B301())
	{
		return 1;
	}
	return 0;
}

void func_145()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (!bLocal_134)
		{
			iLocal_138 = unk_0x3EAC9995EC220C5A();
			bLocal_134 = true;
		}
		if (bLocal_134)
		{
			iLocal_139 = unk_0x3EAC9995EC220C5A();
			if (!iLocal_54)
			{
				if ((iLocal_139 - iLocal_138) > 500)
				{
					if (!func_144())
					{
						if (func_34(&uLocal_194, cLocal_103, sLocal_105, 4, 0, 0, 0) || func_50())
						{
							if (iLocal_47 == 2)
							{
								if (!unk_0x1E80C02AC16B6622(iLocal_62))
								{
									if (!unk_0x1E80C02AC16B6622(iLocal_63))
									{
									}
								}
							}
							if (iLocal_47 == 1)
							{
								if (!unk_0x1E80C02AC16B6622(iLocal_62))
								{
								}
							}
							if (unk_0xC3B073777B46C61A(iLocal_65))
							{
								unk_0x296CDA10C549A502(&iLocal_65);
							}
							iLocal_54 = 1;
						}
					}
				}
			}
		}
	}
}

void func_146()
{
	float fVar0;
	
	if (!bLocal_55)
	{
		if (iLocal_90 == 1)
		{
			fVar0 = 1f;
		}
		if (iLocal_90 == 2)
		{
			fVar0 = 4f;
		}
		if (iLocal_90 != 2)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_62) && !unk_0x1E80C02AC16B6622(iLocal_63))
			{
				if (!func_173())
				{
					if (func_160())
					{
						func_257();
					}
				}
				if (func_159())
				{
					if (!unk_0xC3B073777B46C61A(uLocal_68))
					{
						if (!unk_0x0B6E83A9A7ED3EBA(iLocal_63))
						{
							iLocal_68 = func_120(iLocal_63, 1, 0);
						}
						func_151(1);
					}
				}
				if (func_150())
				{
					func_149();
					if (iLocal_90 == 3)
					{
						if (!iLocal_57)
						{
							unk_0x2A6B9F9E71C479CF(&uLocal_121);
							unk_0xD0C8DD55C652567F(0, iLocal_63, 16000, 0, 2);
							unk_0xE3BCB930B62CBDE5(0, Local_87, 1f, 20000, fVar0, 4, 1193033728);
							unk_0x44642CB08FA1637E(uLocal_121);
							unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
							unk_0xAAD288E877AC833D(&uLocal_121);
							iLocal_57 = 1;
						}
						unk_0x2A6B9F9E71C479CF(&uLocal_121);
						unk_0xD0C8DD55C652567F(0, iLocal_62, -1, 0, 2);
						unk_0x642DDF74A8A2B3BB(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, 0, 0, 0);
						unk_0x36C8654A22054A00(0, Local_87, iLocal_62, 1f, 0, 1.5f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0xF0C6B04F5AFE0B40(0, iLocal_62, -1, 1);
						unk_0x44642CB08FA1637E(uLocal_121);
						unk_0xB8A8FA4B28E9F423(iLocal_63, uLocal_121);
						unk_0xAAD288E877AC833D(&uLocal_121);
						unk_0xC1B1E9A034A63A62(0);
						bLocal_55 = true;
						unk_0x4AAD01BBE039D160(0f);
					}
					else
					{
						if (iLocal_90 == 1)
						{
							sLocal_111 = sLocal_111;
						}
						func_148();
						bLocal_55 = true;
						bLocal_149 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
				}
			}
		}
	}
	if (bLocal_55)
	{
		if (!iLocal_135)
		{
			if (unk_0x83666F9FB8FEBD4B() > 1000)
			{
				if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_63, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(iLocal_62))
					{
						unk_0x9A42ADE14351A508(iLocal_62, iLocal_63, 0);
					}
					iLocal_135 = 1;
				}
				else
				{
					iLocal_135 = 1;
				}
			}
		}
		if (iLocal_135 && !bLocal_133)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_62) && !unk_0x1E80C02AC16B6622(iLocal_63))
			{
				if (func_34(&uLocal_194, cLocal_103, sLocal_104, 4, 0, 0, 0) || func_50())
				{
					unk_0xE2CB8488CFA42209(iLocal_62);
					unk_0x2A6B9F9E71C479CF(&uLocal_121);
					unk_0x642DDF74A8A2B3BB(0, cLocal_359, "handsup_standing_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x642DDF74A8A2B3BB(0, cLocal_359, "handsup_standing_base", 8f, -4f, 7000, 0, 0, 0, 0, 0);
					unk_0x642DDF74A8A2B3BB(0, cLocal_359, "handsup_standing_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x44642CB08FA1637E(uLocal_121);
					unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
					unk_0xAAD288E877AC833D(&uLocal_121);
					func_149();
					uLocal_191 = unk_0x668D94B26744D7B2(joaat("pickup_money_purse"), unk_0x7E5F70487DA3B188(unk_0x03C14E8A9400F2A9(iLocal_62, 0f, 2.5f, 0f), 1067030938, 1069547520), uLocal_144, iLocal_192, 1, iLocal_85);
					bLocal_133 = true;
				}
			}
		}
		if (bLocal_133)
		{
			if (unk_0x1E80C02AC16B6622(iLocal_63))
			{
				func_147();
			}
			else
			{
				switch (iLocal_667)
				{
					case 0:
						Local_670 = { unk_0x4FCFA6976C0E1749(uLocal_191) - Vector(0f, 0f, 0.75f) };
						if (unk_0x65F5CDFC7D4158BD(uLocal_191))
						{
							unk_0xE2CB8488CFA42209(iLocal_63);
							unk_0x2A6B9F9E71C479CF(&uLocal_121);
							unk_0x36C8654A22054A00(0, Local_670, iLocal_62, 2f, 0, 0.1f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x44642CB08FA1637E(uLocal_121);
							unk_0xB8A8FA4B28E9F423(iLocal_63, uLocal_121);
							unk_0xAAD288E877AC833D(&uLocal_121);
							iLocal_668 = unk_0x3EAC9995EC220C5A();
						}
						iLocal_667 = 1;
						break;
					
					case 1:
						if (unk_0x49C650267EDFEBC6(iLocal_63, 242628503) == 7)
						{
							Local_670 = { unk_0x4FCFA6976C0E1749(uLocal_191) - Vector(0f, 0f, 0.75f) };
							if (unk_0x65F5CDFC7D4158BD(uLocal_191))
							{
								if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iLocal_63, 1), Local_670, 1) > 1f)
								{
									iLocal_669 = 1;
									iLocal_667 = 4;
								}
								else
								{
									unk_0xE2CB8488CFA42209(iLocal_63);
									unk_0x2A6B9F9E71C479CF(&uLocal_121);
									unk_0x642DDF74A8A2B3BB(0, cLocal_360, "pickup_low", 8f, -4f, -1, 8224, 0, 0, 0, 0);
									unk_0x44642CB08FA1637E(uLocal_121);
									unk_0xB8A8FA4B28E9F423(iLocal_63, uLocal_121);
									unk_0xAAD288E877AC833D(&uLocal_121);
									iLocal_667 = 2;
								}
							}
							else
							{
								iLocal_667 = 4;
							}
						}
						if ((unk_0x3EAC9995EC220C5A() - iLocal_668) > 15000)
						{
							iLocal_669 = 1;
							iLocal_667 = 4;
						}
						break;
					
					case 2:
						if (unk_0x91741EBC3EA7D505(iLocal_63, cLocal_360, "pickup_low") > 0.5f)
						{
							if (unk_0x65F5CDFC7D4158BD(uLocal_191))
							{
								unk_0xFED6C9CCD794E1F5(uLocal_191);
								iLocal_667 = 3;
							}
							else
							{
								iLocal_667 = 4;
							}
						}
						break;
					
					case 3:
						if ((unk_0x5EE0E9E5B7A50C2A(iLocal_63, cLocal_360, "pickup_low", 3) && unk_0x91741EBC3EA7D505(iLocal_63, cLocal_360, "pickup_low") > 0.58f) || !unk_0x5EE0E9E5B7A50C2A(iLocal_63, cLocal_360, "pickup_low", 3))
						{
							iLocal_667 = 4;
						}
						break;
					
					case 4:
						unk_0xA09672E91FA74DCA(iLocal_63, 1);
						unk_0x23E5F4496336DE4E(iLocal_63, unk_0x77F050A399DB77ED(), 50f, -1, 0, 0);
						unk_0x9371C699D98CE4D6(iLocal_63, 0, 0);
						bLocal_149 = true;
						break;
					}
				}
			}
	}
}

void func_147()
{
	if (unk_0xC3B073777B46C61A(iLocal_65))
	{
		unk_0x296CDA10C549A502(&iLocal_65);
	}
	if (!unk_0xC3B073777B46C61A(iLocal_67))
	{
		if (unk_0xAE5A4FE344CB20A9(uLocal_191))
		{
			iLocal_67 = func_133(uLocal_191);
		}
	}
	iLocal_48 = 4;
}

void func_148()
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
	}
	if (unk_0x6867AF84AF12BEFC(iLocal_63, unk_0x77F050A399DB77ED(), 90f))
	{
		unk_0x642DDF74A8A2B3BB(iLocal_63, cLocal_359, sLocal_367, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_47 == 2)
		{
			unk_0x2A6B9F9E71C479CF(&uLocal_121);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, sLocal_368, 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x44642CB08FA1637E(uLocal_121);
			unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
			unk_0xAAD288E877AC833D(&uLocal_121);
		}
		else if (iLocal_90 == 4)
		{
			iLocal_379 = unk_0xFA67381763476477(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0, 4);
			unk_0x2A6B9F9E71C479CF(&uLocal_121);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0x44642CB08FA1637E(uLocal_121);
			unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
			unk_0xAAD288E877AC833D(&uLocal_121);
		}
		else
		{
			unk_0x2A6B9F9E71C479CF(&uLocal_121);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, sLocal_368, 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x44642CB08FA1637E(uLocal_121);
			unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
			unk_0xAAD288E877AC833D(&uLocal_121);
		}
	}
	else
	{
		unk_0x642DDF74A8A2B3BB(iLocal_63, cLocal_359, sLocal_369, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_47 == 2)
		{
			unk_0x2A6B9F9E71C479CF(&uLocal_121);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, sLocal_370, 8f, -8f, -1, 8, 0.1f, 0, 0, 0);
			unk_0x5E56FBBFC6919211(0, -94.8543f, -1582.686f, 30.2862f, 3000);
			unk_0x642DDF74A8A2B3BB(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x44642CB08FA1637E(uLocal_121);
			unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
			unk_0xAAD288E877AC833D(&uLocal_121);
		}
		else if (iLocal_90 == 4)
		{
			unk_0x2A6B9F9E71C479CF(&uLocal_121);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0x44642CB08FA1637E(uLocal_121);
			unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
			unk_0xAAD288E877AC833D(&uLocal_121);
		}
		else
		{
			unk_0x2A6B9F9E71C479CF(&uLocal_121);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, sLocal_370, 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x642DDF74A8A2B3BB(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x44642CB08FA1637E(uLocal_121);
			unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
			unk_0xAAD288E877AC833D(&uLocal_121);
		}
	}
}

void func_149()
{
	if (unk_0xC3B073777B46C61A(iLocal_68))
	{
		unk_0x296CDA10C549A502(&iLocal_68);
	}
	if (!unk_0xC3B073777B46C61A(iLocal_66))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iLocal_63))
		{
			iLocal_66 = func_120(iLocal_63, 1, 0);
		}
	}
}

int func_150()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_90 == 1)
	{
		if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0, 0, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 2)
	{
		if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(iLocal_63, 1), 1) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 4)
	{
		if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	else if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_151(int iParam0)
{
	if (func_153())
	{
		Global_99240 = 1;
		Global_99237 = unk_0x3EAC9995EC220C5A();
		if (func_152(Global_99239))
		{
			func_117(0);
		}
		unk_0x275546117AF1F063(1, "RE_TITLE");
		if (iParam0 && func_152(Global_99239))
		{
			unk_0x358EC418194057C1();
		}
		return 1;
	}
	return 0;
}

int func_152(int iParam0)
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

int func_153()
{
	switch (func_154(&Global_25174, 0, 5, 0, unk_0x8EC1FFF6B789C28E()))
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

int func_154(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_158(0))
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
		if (!func_156(iParam2))
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
			func_155(uParam0, iParam4);
		}
	}
	return 2;
}

void func_155(var uParam0, int iParam1)
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

bool func_156(int iParam0)
{
	return func_157(iParam0, Global_35700);
}

int func_157(int iParam0, int iParam1)
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

int func_158(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_156(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_159()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_90 == 1)
	{
		if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0, 0, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 2)
	{
		if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 3)
	{
		if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_160()
{
	if (!func_156(5))
	{
		return 1;
	}
	if (func_169())
	{
		return 1;
	}
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_168())
		{
			return 0;
		}
	}
	if (func_161(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_161(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (func_107(func_105()))
		{
			iVar36 = func_167();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar32 /*6*/], 2) && !unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar32 /*6*/], 3))
				{
					func_162(iVar32, &Var0);
					fVar35 = unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_162(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_163(uParam1, "Abigail1", func_165(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 1:
			func_163(uParam1, "Abigail2", func_165(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 2:
			func_163(uParam1, "Barry1", func_165(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 3:
			func_163(uParam1, "Barry2", func_165(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 4:
			func_163(uParam1, "Barry3", func_165(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 5:
			func_163(uParam1, "Barry3A", func_165(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 6:
			func_163(uParam1, "Barry3C", func_165(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 7:
			func_163(uParam1, "Barry4", func_165(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_164(iParam0), 0, 0);
			break;
		
		case 8:
			func_163(uParam1, "Dreyfuss1", func_165(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 9:
			func_163(uParam1, "Epsilon1", func_165(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 10:
			func_163(uParam1, "Epsilon2", func_165(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 11:
			func_163(uParam1, "Epsilon3", func_165(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 12:
			func_163(uParam1, "Epsilon4", func_165(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 13:
			func_163(uParam1, "Epsilon5", func_165(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 14:
			func_163(uParam1, "Epsilon6", func_165(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 15:
			func_163(uParam1, "Epsilon7", func_165(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 16:
			func_163(uParam1, "Epsilon8", func_165(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 17:
			func_163(uParam1, "Extreme1", func_165(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 18:
			func_163(uParam1, "Extreme2", func_165(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 19:
			func_163(uParam1, "Extreme3", func_165(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 20:
			func_163(uParam1, "Extreme4", func_165(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 21:
			func_163(uParam1, "Fanatic1", func_165(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_164(iParam0), 1, 0);
			break;
		
		case 22:
			func_163(uParam1, "Fanatic2", func_165(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_164(iParam0), 1, 0);
			break;
		
		case 23:
			func_163(uParam1, "Fanatic3", func_165(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_164(iParam0), 0, 1);
			break;
		
		case 24:
			func_163(uParam1, "Hao1", func_165(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_164(iParam0), 0, 1);
			break;
		
		case 25:
			func_163(uParam1, "Hunting1", func_165(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 26:
			func_163(uParam1, "Hunting2", func_165(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 27:
			func_163(uParam1, "Josh1", func_165(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 28:
			func_163(uParam1, "Josh2", func_165(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 29:
			func_163(uParam1, "Josh3", func_165(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 30:
			func_163(uParam1, "Josh4", func_165(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 31:
			func_163(uParam1, "Maude1", func_165(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 32:
			func_163(uParam1, "Minute1", func_165(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 33:
			func_163(uParam1, "Minute2", func_165(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 34:
			func_163(uParam1, "Minute3", func_165(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 35:
			func_163(uParam1, "MrsPhilips1", func_165(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 36:
			func_163(uParam1, "MrsPhilips2", func_165(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 37:
			func_163(uParam1, "Nigel1", func_165(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 38:
			func_163(uParam1, "Nigel1A", func_165(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 39:
			func_163(uParam1, "Nigel1B", func_165(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_164(iParam0), 1, 1);
			break;
		
		case 40:
			func_163(uParam1, "Nigel1C", func_165(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_164(iParam0), 1, 1);
			break;
		
		case 41:
			func_163(uParam1, "Nigel1D", func_165(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_164(iParam0), 1, 1);
			break;
		
		case 42:
			func_163(uParam1, "Nigel2", func_165(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 43:
			func_163(uParam1, "Nigel3", func_165(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 1, 1);
			break;
		
		case 44:
			func_163(uParam1, "Omega1", func_165(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 45:
			func_163(uParam1, "Omega2", func_165(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 46:
			func_163(uParam1, "Paparazzo1", func_165(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 47:
			func_163(uParam1, "Paparazzo2", func_165(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 48:
			func_163(uParam1, "Paparazzo3", func_165(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 49:
			func_163(uParam1, "Paparazzo3A", func_165(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 50:
			func_163(uParam1, "Paparazzo3B", func_165(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 51:
			func_163(uParam1, "Paparazzo4", func_165(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 52:
			func_163(uParam1, "Rampage1", func_165(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 54:
			func_163(uParam1, "Rampage3", func_165(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 55:
			func_163(uParam1, "Rampage4", func_165(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 56:
			func_163(uParam1, "Rampage5", func_165(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_164(iParam0), 0, 0);
			break;
		
		case 53:
			func_163(uParam1, "Rampage2", func_165(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_164(iParam0), 1, 0);
			break;
		
		case 57:
			func_163(uParam1, "TheLastOne", func_165(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 58:
			func_163(uParam1, "Tonya1", func_165(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 59:
			func_163(uParam1, "Tonya2", func_165(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 60:
			func_163(uParam1, "Tonya3", func_165(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 61:
			func_163(uParam1, "Tonya4", func_165(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		case 62:
			func_163(uParam1, "Tonya5", func_165(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_164(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_163(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_164(int iParam0)
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

struct<2> func_165(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_166(iParam0) };
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

struct<2> func_166(int iParam0)
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

int func_167()
{
	func_106();
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

int func_168()
{
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x93920F49CB9AD85E() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_169()
{
	if (func_172() && !func_168())
	{
		return 1;
	}
	if (func_171() && func_170())
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return Global_98968 > 0;
}

int func_171()
{
	if (Global_88361 != -1)
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 20);
	}
	return 0;
}

int func_173()
{
	if ((Global_99239 == func_174() && unk_0x74E62879922177A9()) && Global_99240)
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x664B47C58CE8A0A4(), 64);
	uVar16 = func_175(Var0);
	return uVar16;
}

int func_175(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_176()
{
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		unk_0xA7E7F5D7C13CE7C0(unk_0x8ACD527A7E574590(), 1);
	}
	func_275(25, iLocal_90);
	func_180();
	func_177();
	func_257();
}

void func_177()
{
	func_178();
}

int func_178()
{
	if (func_179(0))
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

bool func_179(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

int func_180()
{
	return 1;
}

void func_181(int iParam0)
{
	Global_99236 = iParam0;
}

void func_182()
{
	switch (iLocal_140)
	{
		case 0:
			if (!unk_0x1E80C02AC16B6622(iLocal_63))
			{
				unk_0x642DDF74A8A2B3BB(iLocal_63, cLocal_359, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			if (!unk_0x1E80C02AC16B6622(iLocal_62))
			{
				unk_0x642DDF74A8A2B3BB(iLocal_62, cLocal_361, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			iLocal_140++;
			break;
		
		case 1:
			if (unk_0x1F2158D615BC4B25(iLocal_63))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_63))
				{
					if (func_159())
					{
						if (!unk_0xC3B073777B46C61A(iLocal_68))
						{
							if (!unk_0x0B6E83A9A7ED3EBA(iLocal_63))
							{
								iLocal_68 = func_120(iLocal_63, 1, 0);
							}
							if (!func_173())
							{
								func_151(1);
							}
						}
					}
					if (func_150())
					{
						func_34(&uLocal_194, cLocal_103, "REMG2_ARG", 4, 0, 0, 0);
						func_149();
						iLocal_187 = unk_0x3EAC9995EC220C5A();
						unk_0x4AAD01BBE039D160(0f);
						iLocal_190 = 1;
						iLocal_140++;
					}
				}
				else if (!unk_0x1E80C02AC16B6622(iLocal_62))
				{
					unk_0xA118099DF7209F3A(iLocal_62, Local_145, 250f, -1, 0, 0);
					unk_0x112CD899A3BEE719(iLocal_62, 1);
					unk_0x4EDE34FBADD967A6(0);
					func_188();
				}
			}
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				if (func_187())
				{
					iLocal_140 = 4;
				}
				if (func_136())
				{
					iLocal_140 = 9;
				}
				if (func_186())
				{
					iLocal_140 = 6;
				}
				if (func_185())
				{
					iLocal_140 = 4;
				}
			}
			if (!func_173())
			{
				if (func_160())
				{
					func_257();
				}
			}
			break;
		
		case 2:
			if (unk_0x1F2158D615BC4B25(iLocal_63))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_63))
				{
					if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_63, 6f, 6f, 15f, 0, 1, 0))
					{
						if (unk_0xD89F5D6405AFC348(iLocal_63, unk_0x77F050A399DB77ED()) || unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_63, 3f, 3f, 15f, 0, 1, 0))
						{
							if (unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), iLocal_63, 65f))
							{
								iLocal_189 = unk_0x3EAC9995EC220C5A();
								unk_0xD0C8DD55C652567F(iLocal_63, unk_0x77F050A399DB77ED(), 7000, 0, 2);
								func_34(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
								unk_0x5AE11BC36633DE4E(0);
								iLocal_140++;
							}
							else
							{
								iLocal_189 = unk_0x3EAC9995EC220C5A();
								unk_0xD0C8DD55C652567F(iLocal_63, unk_0x77F050A399DB77ED(), 7000, 0, 2);
								func_34(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
								unk_0x5AE11BC36633DE4E(0);
								iLocal_140++;
							}
						}
					}
				}
			}
			if (func_187() || func_185())
			{
				iLocal_140 = 4;
			}
			if (func_136())
			{
				iLocal_140 = 9;
			}
			if (func_186())
			{
				iLocal_140 = 6;
			}
			break;
		
		case 3:
			if ((iLocal_188 - iLocal_189) > 12500)
			{
				if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 6))
				{
					iLocal_140 = 4;
				}
			}
			if ((iLocal_188 - iLocal_189) > 5500)
			{
				if (!bLocal_137)
				{
					if (unk_0x1F2158D615BC4B25(iLocal_63))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_63))
						{
							func_34(&uLocal_194, cLocal_103, sLocal_114, 4, 0, 0, 0);
							unk_0xFBE25F0677076CF9(iLocal_63, unk_0x77F050A399DB77ED(), 0, 16);
							bLocal_137 = true;
							if (unk_0x1F2158D615BC4B25(iLocal_62))
							{
								if (!unk_0x1E80C02AC16B6622(iLocal_62))
								{
									unk_0xA118099DF7209F3A(iLocal_62, Local_145, 250f, -1, 0, 0);
									unk_0x112CD899A3BEE719(iLocal_62, 1);
									unk_0x4EDE34FBADD967A6(0);
								}
								if (!unk_0x1E80C02AC16B6622(iLocal_62))
								{
								}
								if (unk_0xC3B073777B46C61A(iLocal_65))
								{
									unk_0x296CDA10C549A502(&iLocal_65);
								}
							}
						}
					}
				}
			}
			if (bLocal_137)
			{
				iLocal_140 = 10;
			}
			else
			{
				if (func_187())
				{
					iLocal_140 = 4;
				}
				if (func_136())
				{
					iLocal_140 = 9;
				}
				if (func_186())
				{
					iLocal_140 = 6;
				}
				if (func_184())
				{
					iLocal_140 = 9;
				}
				if (func_185())
				{
					iLocal_140 = 4;
				}
			}
			break;
		
		case 10:
			if (unk_0x1F2158D615BC4B25(iLocal_63))
			{
				if (unk_0x1E80C02AC16B6622(iLocal_63) || func_30(unk_0x77F050A399DB77ED(), iLocal_63, 1) > 100f)
				{
					func_183();
					func_188();
				}
			}
			break;
		
		case 4:
			if (unk_0x1F2158D615BC4B25(iLocal_62))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_62))
				{
					if (!unk_0xCC580427ED36D7F8(iLocal_62, unk_0x77F050A399DB77ED(), 1))
					{
						unk_0xE2CB8488CFA42209(iLocal_62);
						if (!unk_0x1E80C02AC16B6622(iLocal_63))
						{
							unk_0x2A6B9F9E71C479CF(&uLocal_121);
							unk_0xA118099DF7209F3A(0, unk_0xAF99169F0F5AE41D(iLocal_63, 0), 150f, -1, 0, 0);
							unk_0x44642CB08FA1637E(uLocal_121);
							unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
							unk_0xAAD288E877AC833D(&uLocal_121);
							unk_0x112CD899A3BEE719(iLocal_62, 1);
						}
						iLocal_148 = 1;
					}
					else
					{
						unk_0xE2CB8488CFA42209(iLocal_62);
						unk_0x23E5F4496336DE4E(iLocal_62, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
						unk_0x112CD899A3BEE719(iLocal_62, 1);
						if (unk_0xC3B073777B46C61A(iLocal_65))
						{
							unk_0x296CDA10C549A502(&iLocal_65);
						}
					}
				}
			}
			if (unk_0x1F2158D615BC4B25(iLocal_63))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_63))
				{
					unk_0xE2CB8488CFA42209(iLocal_63);
					unk_0x23E5F4496336DE4E(iLocal_63, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
					unk_0x112CD899A3BEE719(iLocal_63, 1);
					if (unk_0xC3B073777B46C61A(iLocal_66))
					{
						unk_0x296CDA10C549A502(&iLocal_66);
					}
				}
			}
			if (unk_0x1066B6347C40B301())
			{
				func_89();
			}
			unk_0x4EDE34FBADD967A6(0);
			if (!iLocal_148)
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_63))
				{
					func_34(&uLocal_194, cLocal_103, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_257();
			}
			break;
		
		case 5:
			if (unk_0xC9D9444186B5A374() > 250)
			{
				if (unk_0x1F2158D615BC4B25(iLocal_63))
				{
					if (!unk_0x1E80C02AC16B6622(iLocal_63))
					{
						unk_0xB424F90D6E96BCF8(iLocal_63, 17, 1);
						unk_0xD214B72C983BCE75(iLocal_63, 156, 1);
						unk_0x2A6B9F9E71C479CF(&uLocal_121);
						unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
						unk_0x44642CB08FA1637E(uLocal_121);
						unk_0xB8A8FA4B28E9F423(iLocal_63, uLocal_121);
						unk_0xAAD288E877AC833D(&uLocal_121);
						unk_0x112CD899A3BEE719(iLocal_63, 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0xA09672E91FA74DCA(iLocal_63, 0);
						unk_0xA29D53AF339F4CD0(&iLocal_63);
						func_34(&uLocal_194, cLocal_103, sLocal_113, 4, 0, 0, 0);
					}
				}
				if (unk_0x1F2158D615BC4B25(iLocal_62))
				{
					if (!unk_0x1E80C02AC16B6622(iLocal_62))
					{
						if (!unk_0xCC580427ED36D7F8(iLocal_62, unk_0x77F050A399DB77ED(), 1))
						{
							unk_0xE2CB8488CFA42209(iLocal_62);
							iLocal_148 = 1;
						}
					}
				}
				if (!iLocal_148)
				{
					unk_0x4EDE34FBADD967A6(0);
					func_257();
				}
			}
			break;
		
		case 6:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x1F2158D615BC4B25(iLocal_62))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_62))
						{
							unk_0xE2CB8488CFA42209(iLocal_62);
							unk_0x2A6B9F9E71C479CF(&uLocal_121);
							unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), 10000, 0, 2);
							unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
							unk_0x44642CB08FA1637E(uLocal_121);
							unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
							unk_0xAAD288E877AC833D(&uLocal_121);
							unk_0x112CD899A3BEE719(iLocal_62, 1);
							unk_0xA29D53AF339F4CD0(&iLocal_62);
						}
					}
					if (unk_0x1F2158D615BC4B25(iLocal_63))
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_63))
						{
							func_34(&uLocal_194, cLocal_103, sLocal_114, 4, 0, 0, 0);
							unk_0xE2CB8488CFA42209(iLocal_63);
							unk_0x2A6B9F9E71C479CF(&uLocal_121);
							unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), 10000, 0, 2);
							unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
							unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
							unk_0x44642CB08FA1637E(uLocal_121);
							unk_0xB8A8FA4B28E9F423(iLocal_63, uLocal_121);
							unk_0xAAD288E877AC833D(&uLocal_121);
							unk_0x112CD899A3BEE719(iLocal_63, 1);
						}
					}
				}
				unk_0x4EDE34FBADD967A6(0);
				func_257();
			}
			break;
		
		case 7:
			unk_0xC1B1E9A034A63A62(0);
			iLocal_140++;
			break;
		
		case 8:
			if (unk_0x83666F9FB8FEBD4B() > 200)
			{
				func_188();
			}
			break;
		
		case 9:
			if (unk_0x1F2158D615BC4B25(iLocal_63))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_63))
				{
					unk_0xD214B72C983BCE75(iLocal_63, 156, 1);
					unk_0x45ED0B787875F3AA(iLocal_63, 50f, 0);
					if (unk_0x1066B6347C40B301())
					{
						func_89();
					}
					unk_0x4EDE34FBADD967A6(0);
					func_34(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
				}
			}
			if (unk_0x1F2158D615BC4B25(iLocal_62))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_62))
				{
					unk_0xE2CB8488CFA42209(iLocal_62);
					unk_0xD3AF1785A0A4CD09(iLocal_62, 2000);
					iLocal_148 = 1;
				}
			}
			break;
	}
	if (iLocal_140 != 8 && iLocal_148)
	{
		iLocal_140 = 7;
	}
	iLocal_188 = unk_0x3EAC9995EC220C5A();
	if (iLocal_190 && !bLocal_137)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_63) && unk_0x1F2158D615BC4B25(iLocal_63))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_62) && !unk_0x1E80C02AC16B6622(iLocal_63))
			{
				if ((((iLocal_188 - iLocal_187) > 12000 && !unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_63, 3f, 3f, 35f, 0, 1, 0)) && unk_0xF74B69DFD85D7CCE(iLocal_63)) && !func_144())
				{
					if ((func_34(&uLocal_194, cLocal_103, "REMG2_FKIT", 4, 0, 0, 0) || func_50()) || func_50())
					{
						unk_0xD214B72C983BCE75(iLocal_63, 156, 1);
						unk_0x43EBDF0670C051C8(iLocal_63, unk_0x5C9D7C3DA25581D1(iLocal_62, 31086, 0f, 0f, 0f), 0);
						unk_0xE2CB8488CFA42209(iLocal_62);
						unk_0x9F48F299B333353E(iLocal_62, 99);
						unk_0xA118099DF7209F3A(iLocal_63, Local_145, 250f, -1, 0, 0);
						unk_0x112CD899A3BEE719(iLocal_63, 1);
						func_257();
					}
				}
			}
		}
	}
}

void func_183()
{
	Global_14578 = 0;
	func_44();
}

int func_184()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62) && !unk_0x1E80C02AC16B6622(iLocal_63))
	{
		if (unk_0x32F9EB04315127B4(unk_0x77F050A399DB77ED(), iLocal_63) || unk_0x32F9EB04315127B4(unk_0x77F050A399DB77ED(), iLocal_62))
		{
			return 1;
		}
		if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_63, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return 0;
}

int func_185()
{
	if (!unk_0x0B6E83A9A7ED3EBA(iLocal_62))
	{
		if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_62, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iLocal_62) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iLocal_62))
			{
				if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
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
	if (!unk_0x0B6E83A9A7ED3EBA(iLocal_63))
	{
		if (func_136())
		{
			if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_186()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_62, 5.3f, 5.3f, 6f, 0, 1, 0))
		{
			if (unk_0xC76E1A07C6272140(iLocal_62, unk_0x77F050A399DB77ED(), 17))
			{
				if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 6) && !unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
				{
					if (!unk_0x1E80C02AC16B6622(iLocal_63))
					{
						if (!unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iLocal_63))
						{
							if (unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iLocal_62) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iLocal_62))
							{
								unk_0x5AE11BC36633DE4E(0);
								return 1;
							}
						}
					}
					else if (unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iLocal_62) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iLocal_62))
					{
						unk_0x5AE11BC36633DE4E(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_187()
{
	if (!unk_0x0B6E83A9A7ED3EBA(iLocal_62))
	{
		if (unk_0x5E9F3856F26E26EC(unk_0x5C9D7C3DA25581D1(iLocal_62, 31086, 0f, 0f, 0f), 5f, 1))
		{
			if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_188()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_62))
	{
		if (!unk_0xCD7683F575A67B31(iLocal_62))
		{
			if (func_173())
			{
				if (unk_0x49C650267EDFEBC6(iLocal_62, 242628503) == 7 || unk_0x49C650267EDFEBC6(iLocal_62, 474215631) == 7)
				{
					if (unk_0x1066B6347C40B301())
					{
						func_89();
					}
					if (!unk_0x1E80C02AC16B6622(iLocal_63))
					{
						if (!unk_0x823B1736EFAFA74A(iLocal_62))
						{
							unk_0x23E5F4496336DE4E(iLocal_62, iLocal_63, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_47 == 3)
					{
						if (!unk_0x823B1736EFAFA74A(iLocal_62))
						{
							unk_0xA118099DF7209F3A(iLocal_62, Local_122, 150f, -1, 0, 0);
						}
					}
					unk_0x112CD899A3BEE719(iLocal_62, 1);
					unk_0x4EDE34FBADD967A6(0);
					func_34(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0);
					unk_0x4EDE34FBADD967A6(0);
					if (iLocal_192 > 0)
					{
						unk_0x4FE5EDEAD55F44A3(unk_0x77F050A399DB77ED(), (iLocal_192 / 100) * 90);
						func_52(func_105(), 1, iLocal_192);
						unk_0x4EDE34FBADD967A6(0);
						func_189(func_105(), 1, (iLocal_192 / 10), 0, 1);
					}
					func_181(3);
					func_176();
				}
			}
			else
			{
				func_257();
			}
		}
		else
		{
			func_257();
		}
	}
	else
	{
		func_257();
	}
}

void func_189(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_53(Global_99250.f_32503[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_190()
{
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_168())
		{
			return 0;
		}
	}
	if (func_169())
	{
		return 1;
	}
	if (func_161(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_191()
{
	func_202();
	func_201(&uLocal_393, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_201(&uLocal_393, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_201(&uLocal_393, cLocal_377);
	func_201(&uLocal_393, cLocal_361);
	func_199(&uLocal_393, iLocal_83);
	func_199(&uLocal_393, iLocal_84);
	func_199(&uLocal_393, iLocal_85);
	func_201(&uLocal_393, cLocal_360);
	func_201(&uLocal_393, cLocal_359);
	func_201(&uLocal_393, cLocal_378);
	func_201(&uLocal_393, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_195(&uLocal_393))
	{
		func_192();
		return 1;
	}
	return 0;
}

void func_192()
{
	iLocal_62 = unk_0x6665DCC708A346F3(26, iLocal_83, Local_69, fLocal_75, 1, 1);
	unk_0x9526D9575C237F2F(iLocal_62, 1);
	unk_0x26A7668D061F96E7(iLocal_62, 0);
	unk_0xCAB5098DD2DF915A(iLocal_62, 8, 1);
	unk_0xCAB5098DD2DF915A(iLocal_62, 128, 1);
	unk_0xCAB5098DD2DF915A(iLocal_62, 512, 1);
	unk_0xFECEEF81E92F7897(iLocal_62, 1);
	unk_0xC50A6282884BA4C3(iLocal_62);
	unk_0x4FE5EDEAD55F44A3(iLocal_62, 0);
	unk_0x79FC96D30AEDF69A(iLocal_62, 1);
	if (iLocal_83 == joaat("a_m_y_genstreet_01"))
	{
		unk_0x5F2AACB0122E1554(iLocal_62, 0, 1, 0, 0);
		unk_0x5F2AACB0122E1554(iLocal_62, 3, 0, 3, 0);
		unk_0x5F2AACB0122E1554(iLocal_62, 4, 0, 2, 0);
	}
	if (iLocal_83 == joaat("a_m_y_business_02"))
	{
		unk_0x5F2AACB0122E1554(iLocal_62, 0, 1, 0, 0);
		unk_0x5F2AACB0122E1554(iLocal_62, 2, 1, 0, 0);
		unk_0x5F2AACB0122E1554(iLocal_62, 3, 1, 0, 0);
		unk_0x5F2AACB0122E1554(iLocal_62, 4, 1, 0, 0);
		unk_0x5F2AACB0122E1554(iLocal_62, 8, 0, 0, 0);
	}
	unk_0x72FAE653AFC04E97("theAssailant", &iLocal_86);
	iLocal_63 = unk_0x6665DCC708A346F3(26, iLocal_84, Local_72, fLocal_78, 1, 1);
	unk_0xA09672E91FA74DCA(iLocal_63, 1);
	unk_0x9526D9575C237F2F(iLocal_63, 1);
	unk_0x3BCCE991853357EE(iLocal_63, 1, 0);
	unk_0x1592B6D205958934(iLocal_63, joaat("weapon_pistol"), -1, 1, 1);
	unk_0xB424F90D6E96BCF8(iLocal_63, 13, 0);
	unk_0xB424F90D6E96BCF8(iLocal_63, 17, 0);
	unk_0x4A29416FFEE91351(iLocal_63, 1);
	unk_0x1706625EBCDDEBF9(iLocal_63, 42, 1);
	unk_0x1706625EBCDDEBF9(iLocal_63, 137, 1);
	unk_0xCAB5098DD2DF915A(iLocal_63, 128, 1);
	unk_0xCAB5098DD2DF915A(iLocal_63, 2, 0);
	unk_0x054E434B0AECBDA6(iLocal_63, iLocal_86);
	unk_0xFECEEF81E92F7897(iLocal_63, 1);
	if (!unk_0x9D14A941038EF8A3(sLocal_120))
	{
		unk_0x58580C834A43EBA2(iLocal_62, sLocal_120);
	}
	unk_0x58580C834A43EBA2(iLocal_63, sLocal_119);
	unk_0x329C14474C072D19(2, joaat("CIVMALE"), iLocal_86);
	unk_0x329C14474C072D19(2, joaat("CIVFEMALE"), iLocal_86);
	unk_0x329C14474C072D19(2, iLocal_86, joaat("CIVMALE"));
	unk_0x329C14474C072D19(2, iLocal_86, joaat("CIVFEMALE"));
	unk_0x329C14474C072D19(5, iLocal_86, joaat("player"));
	switch (func_105())
	{
		case 0:
			func_194(&uLocal_194, 0, unk_0x77F050A399DB77ED(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_194(&uLocal_194, 0, unk_0x77F050A399DB77ED(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_194(&uLocal_194, 0, unk_0x77F050A399DB77ED(), "TREVOR", 0, 1);
			break;
	}
	func_194(&uLocal_194, 1, iLocal_63, sLocal_118, 0, 1);
	func_194(&uLocal_194, 2, iLocal_62, sLocal_117, 0, 1);
	if (iLocal_47 == 2)
	{
		unk_0xCAB5098DD2DF915A(iLocal_63, 1, 0);
	}
	if (iLocal_90 == 1 || iLocal_90 == 4)
	{
		func_193();
	}
	if (iLocal_90 == 3)
	{
		Local_125 = { -325.4189f, -828.8596f, 31.1f };
		Local_128 = { 0f, 0f, 180f };
		uLocal_131 = unk_0xFCF0CDCAF2761068(Local_125, Local_128, 2);
		unk_0x3C6CCFC07FD12077(iLocal_63, uLocal_131, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (iLocal_90 == 4)
	{
		unk_0xD093BD7CD98357E2(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_193()
{
	struct<3> Var0;
	
	unk_0x1021AD8FA25CC2DB(iLocal_63, unk_0xD213F6420A6F531A(cLocal_359, sLocal_365, Local_371, Local_374, 0, 2), 0, 0, 1);
	Var0 = { unk_0x6279084D8420CB1F(cLocal_359, sLocal_365, Local_371, Local_374, 0, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	unk_0x2DA164E80FDEE7F2(iLocal_63, Var0.f_2);
	unk_0x1021AD8FA25CC2DB(iLocal_62, unk_0xD213F6420A6F531A(cLocal_359, sLocal_366, Local_371, Local_374, 0, 2), 0, 0, 1);
	Var0 = { unk_0x6279084D8420CB1F(cLocal_359, sLocal_366, Local_371, Local_374, 0, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	unk_0x2DA164E80FDEE7F2(iLocal_62, Var0.f_2);
	unk_0x642DDF74A8A2B3BB(iLocal_63, cLocal_359, sLocal_365, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	unk_0x642DDF74A8A2B3BB(iLocal_62, cLocal_359, sLocal_366, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
}

void func_194(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69317)
	{
		if (!unk_0x1E80C02AC16B6622(uParam2))
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

int func_195(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_196(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_196(var uParam0)
{
	return func_197(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_197(int iParam0, char[4] cParam1, var uParam2)
{
	if (unk_0xB56FEBC510E7E9DE(iParam0, 30))
	{
		if (unk_0xB56FEBC510E7E9DE(iParam0, 29))
		{
			switch (func_198(iParam0))
			{
				case 0:
					return unk_0x4A4B6FD54C499B7D(uParam2);
					break;
				
				case 1:
					return unk_0x5263DE3D9A17A86F(uParam1);
					break;
				
				case 2:
					return unk_0x738A9699E2BC26EE(cParam1);
					break;
				
				case 3:
					return unk_0x234DE5FAACE83930(cParam1);
					break;
				
				case 4:
					return unk_0xEF797B6DFFA2C629(uParam2, cParam1);
					break;
				
				case 5:
					return unk_0x496E42829279FD71(cParam1);
					break;
				
				case 6:
					return unk_0x5F4EA7D1E9029E5C(cParam1, unk_0xB56FEBC510E7E9DE(iParam0, 27));
					break;
				
				case 7:
					return unk_0xCFA460CFA5E219DE(uParam2);
					break;
				
				case 8:
					return unk_0x77E40DD6F32BC674(uParam2);
					break;
				
				case 9:
					return unk_0x4D35306F9B28A02F();
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

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xB56FEBC510E7E9DE(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_199(var uParam0, int iParam1)
{
	func_200(uParam0, 0, iParam1, "NULL", 0);
}

void func_200(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x35D1CAD6ADAB6491(sParam3, "NULL"))
					{
						if (unk_0x35D1CAD6ADAB6491(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x573691DB812DC8AA(uParam0[iVar0 /*18*/], iParam1);
			unk_0x573691DB812DC8AA(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_201(var uParam0, char* sParam1)
{
	func_200(uParam0, 1, -1, sParam1, 0);
}

void func_202()
{
	func_255();
	unk_0x573691DB812DC8AA(&uLocal_144, 3);
	unk_0x573691DB812DC8AA(&uLocal_144, 4);
	unk_0x573691DB812DC8AA(&uLocal_144, 1);
	if (iLocal_90 == 1)
	{
		cLocal_359 = "RANDOM@MUGGING1";
		sLocal_365 = "STRUGGLE_Loop_A_Thief";
		sLocal_366 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_368 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_367 = "FLEE_BACKWARD_Thief";
		sLocal_370 = "FLEE_FORWARD_Shopkeeper";
		sLocal_369 = "FLEE_FORWARD_Thief";
		func_204();
		iLocal_192 = 200;
		iLocal_48 = 2;
		Local_145 = { -132.2607f, -1628.336f, 31.2107f };
		iLocal_83 = joaat("a_m_y_business_02");
		iLocal_84 = joaat("g_m_y_strpunk_01");
		Local_69 = { -138.814f, -1635.975f, 31.357f };
		fLocal_75 = 318.519f;
		Local_72 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_78 = 98f;
		Local_371 = { Local_69 };
		Local_374 = { 0f, 0f, fLocal_75 };
		Local_166 = { -103.8951f, -1593.239f, 30.49198f };
		Local_169 = { -89.29615f, -1575.444f, 32.30938f };
		Local_172 = { -152.0367f, -1654.379f, 31.73599f };
		Local_175 = { -169.8183f, -1669.556f, 33.94173f };
		Local_178 = { -152.0367f, -1654.379f, 31.73599f };
		Local_181 = { -103.8951f, -1593.239f, 30.49198f };
		fLocal_79 = 340.0645f;
		Local_80 = { -151.0793f, -1650.322f, 31.6504f };
		Local_87 = { -133.6872f, -1630.245f, 31.2527f };
		iLocal_85 = joaat("prop_ld_wallet_pickup");
		cLocal_103 = "REMG1AU";
		sLocal_104 = "REMG1_VIC";
		sLocal_105 = "REMG1_SHT";
		sLocal_106 = "REMG1_ASK";
		sLocal_107 = "REMG1_DRP";
		sLocal_108 = "REMG1_OHY";
		sLocal_109 = "REMG1_THK";
		sLocal_110 = "REMG1_GIV";
		sLocal_111 = "REMG1_MUGA";
		sLocal_112 = "REMG1_WHO";
		switch (func_105())
		{
			case 0:
				sLocal_115 = "REMG1_HOM";
				sLocal_116 = "REMG1_WAM";
				break;
			
			case 1:
				sLocal_115 = "REMG1_HOF";
				sLocal_116 = "REMG1_WAF";
				break;
			
			case 2:
				sLocal_115 = "REMG1_HOT";
				sLocal_116 = "REMG1_WAT";
				break;
		}
		sLocal_119 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_120 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_117 = "MuggedMan";
		sLocal_118 = "MuggerGang";
		iLocal_50 = 1;
		cLocal_378 = "move_m@hurry@b";
	}
	if (iLocal_90 == 2)
	{
		cLocal_359 = "random@mugging2";
		cLocal_361 = "random@mugging2";
		iLocal_48 = 1;
		Local_145 = { 287.888f, -284.603f, 52.967f };
		iLocal_83 = joaat("a_f_y_genhot_01");
		iLocal_84 = joaat("g_m_y_strpunk_01");
		Local_69 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_75 = 260.7569f;
		Local_72 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_78 = 45f;
		fLocal_79 = 251f;
		Local_80 = { 297.4484f, -261.2914f, 53.0037f };
		iLocal_85 = joaat("prop_ld_handbag");
		cLocal_103 = "REMG2AU";
		sLocal_104 = "REMG2_VIC";
		sLocal_105 = "REMG2_SHT";
		sLocal_106 = "REMG2_ASK";
		sLocal_107 = "REMG2_DRP";
		sLocal_108 = "REMG2_OHY";
		sLocal_109 = "REMG2_THK";
		sLocal_110 = "REMG2_GIV";
		sLocal_112 = "REMG2_WHO";
		sLocal_113 = "REMG2_GUN";
		sLocal_114 = "REMG2_FUT";
		switch (func_105())
		{
			case 0:
				sLocal_115 = "REMG2_HOM";
				sLocal_116 = "REMG2_WAM";
				break;
			
			case 1:
				sLocal_115 = "REMG2_HOF";
				sLocal_116 = "REMG2_WAF";
				break;
			
			case 2:
				sLocal_115 = "REMG2_HOT";
				sLocal_116 = "REMG2_WAT";
				break;
		}
		sLocal_119 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_117 = "MuggedYMan";
		sLocal_118 = "MuggerGang";
		iLocal_50 = 1;
		cLocal_378 = "move_m@hurry@b";
	}
	if (iLocal_47 == 1)
	{
		func_203();
		iLocal_192 = 2000;
		iLocal_48 = 2;
		if (iLocal_90 == 3)
		{
			cLocal_359 = "RANDOM@MUGGING3";
			Local_145 = { -317.1964f, -824.0751f, 31.4284f };
			iLocal_83 = joaat("a_f_y_hipster_01");
			iLocal_84 = joaat("a_m_o_tramp_01");
			Local_69 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_75 = 80.7161f;
			Local_72 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_78 = 336.5502f;
			fLocal_79 = 81.8694f;
			Local_80 = { -322.3941f, -835.7213f, 30.6001f };
			Local_87 = { -320.9667f, -832.1209f, 30.5979f };
			iLocal_85 = joaat("prop_ld_purse_01");
			cLocal_103 = "REMG3AU";
			sLocal_104 = "REMG3_VIC";
			sLocal_105 = "REMG3_SHT";
			sLocal_106 = "REMG3_ASK";
			sLocal_107 = "REMG3_DRP";
			sLocal_108 = "REMG3_OHY";
			sLocal_109 = "REMG3_THK";
			sLocal_110 = "REMG3_GIV";
			sLocal_111 = "REMG3_MUGB";
			sLocal_112 = "REMG3_WHO";
			sLocal_113 = "REMG3_GUN";
			sLocal_114 = "REMG3_FUT";
			switch (func_105())
			{
				case 0:
					sLocal_115 = "REMG3_HOM";
					sLocal_116 = "REMG3_WAM";
					break;
				
				case 1:
					sLocal_115 = "REMG3_HOF";
					sLocal_116 = "REMG3_WAF";
					break;
				
				case 2:
					sLocal_115 = "REMG3_HOT";
					sLocal_116 = "REMG3_WAT";
					break;
			}
			sLocal_119 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_117 = "MUGGEDHIPSTER";
			sLocal_118 = "MuggerTramp";
			iLocal_50 = 1;
			cLocal_378 = "move_f@hurry@a";
		}
		if (iLocal_90 == 4)
		{
			func_203();
			cLocal_359 = "RANDOM@MUGGING4";
			sLocal_365 = "STRUGGLE_Loop_B_Thief";
			sLocal_366 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_368 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_367 = "FLEE_BACKWARD_Thief";
			sLocal_370 = "FLEE_FORWARD_Shopkeeper";
			sLocal_369 = "FLEE_FORWARD_Thief";
			Local_145 = { 32.8802f, -1016.061f, 28.4527f };
			iLocal_83 = joaat("a_f_m_tourist_01");
			iLocal_84 = joaat("g_m_y_armgoon_02");
			Local_69 = { 32.2169f, -1020.864f, 28.456f };
			fLocal_75 = 159.1445f;
			Local_371 = { Local_69 };
			Local_374 = { 0f, 0f, fLocal_75 };
			Local_72 = { 38.1933f, -1023.579f, 28.4889f };
			fLocal_78 = 60.1372f;
			fLocal_79 = 248f;
			Local_80 = { 42.5323f, -990.353f, 28.248f };
			Local_166 = { 38.15186f, -1001.485f, 28.42276f };
			Local_169 = { 40.13669f, -995.2711f, 30.37197f };
			Local_172 = { 37.21758f, -1040.354f, 28.41506f };
			Local_175 = { 19.91492f, -1036.814f, 30.28045f };
			Local_178 = { 28.4511f, -1035.718f, 28.3329f };
			Local_181 = { 38.6536f, -1001.073f, 28.407f };
			Local_87 = { 32.536f, -1020.293f, 28.4576f };
			iLocal_85 = joaat("prop_ld_wallet_pickup");
			cLocal_103 = "REMG4AU";
			sLocal_104 = "REMG4_VIC";
			sLocal_105 = "REMG4_SHT";
			sLocal_106 = "REMG4_ASK";
			sLocal_107 = "REMG4_DRP";
			sLocal_108 = "REMG4_OHY";
			sLocal_109 = "REMG4_THK";
			sLocal_110 = "REMG4_GIV";
			sLocal_111 = "REMG4_MUGB";
			sLocal_112 = "REMG4_WHO";
			sLocal_113 = "REMG4_GUN";
			sLocal_114 = "REMG4_FUT";
			switch (func_105())
			{
				case 0:
					sLocal_115 = "REMG4_HOM";
					sLocal_116 = "REMG4_WAM";
					break;
				
				case 1:
					sLocal_115 = "REMG4_HOF";
					sLocal_116 = "REMG4_WAF";
					break;
				
				case 2:
					sLocal_115 = "REMG4_HOT";
					sLocal_116 = "REMG4_WAT";
					break;
			}
			sLocal_119 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_117 = "MuggedWoman";
			sLocal_118 = "MuggerGang";
			iLocal_50 = 1;
			cLocal_378 = "move_f@hurry@a";
		}
	}
}

void func_203()
{
	cLocal_361 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (unk_0xA3746E7F17F47DC2(0, 3))
	{
		case 0:
			sLocal_362 = "Return_Wallet_Positive_A_Player";
			sLocal_363 = "Return_Wallet_Positive_A_Female";
			sLocal_364 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_362 = "Return_Wallet_Positive_B_Player";
			sLocal_363 = "Return_Wallet_Positive_B_Female";
			sLocal_364 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_362 = "Return_Wallet_Positive_C_Player";
			sLocal_363 = "Return_Wallet_Positive_C_Female";
			sLocal_364 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_204()
{
	cLocal_361 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (unk_0xA3746E7F17F47DC2(0, 3))
	{
		case 0:
			sLocal_362 = "Return_Wallet_Positive_A_Player";
			sLocal_363 = "Return_Wallet_Positive_A_Male";
			sLocal_364 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_362 = "Return_Wallet_Positive_B_Player";
			sLocal_363 = "Return_Wallet_Positive_B_Male";
			sLocal_364 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_362 = "Return_Wallet_Positive_C_Player";
			sLocal_363 = "Return_Wallet_Positive_C_Male";
			sLocal_364 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_205(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x3EAC9995EC220C5A();
	}
	if (unk_0xC3B073777B46C61A(uParam0))
	{
		iVar0 = (unk_0x3EAC9995EC220C5A() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x9CA5B45C6C4CA8F3(iParam0) != 255)
				{
					unk_0xBE97057E01D4909F(iParam0, 255);
				}
			}
			else if (unk_0x9CA5B45C6C4CA8F3(iParam0) != 0)
			{
				unk_0xBE97057E01D4909F(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x9CA5B45C6C4CA8F3(iParam0) != 255)
			{
				unk_0xBE97057E01D4909F(iParam0, 255);
			}
		}
	}
}

void func_206(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0x27A15A339F2F298B() >= (uParam0->f_272 + uParam0->f_273) || unk_0xB56FEBC510E7E9DE(Global_91106.f_20, 2)) || unk_0xB56FEBC510E7E9DE(Global_91106.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*18*/], 29))
					{
						func_207(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0x27A15A339F2F298B();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_207(var uParam0)
{
	func_208(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_208(var uParam0, char[4] cParam1, var uParam2)
{
	if (unk_0xB56FEBC510E7E9DE(*uParam0, 30))
	{
		switch (func_198(*uParam0))
		{
			case 0:
				unk_0xC60576ADD1AECA45(uParam2);
				break;
			
			case 1:
				unk_0x6E2E777C1AD81C36(uParam1);
				break;
			
			case 2:
				unk_0xD8684F03DA130C7B(uParam1);
				break;
			
			case 3:
				unk_0x011CAFBB4767F059(uParam1, unk_0xB56FEBC510E7E9DE(*uParam0, 28));
				break;
			
			case 4:
				unk_0xE3E5A6B56C247E86(uParam2, uParam1);
				break;
			
			case 5:
				unk_0x1C18D36FD30A924E(uParam1);
				break;
			
			case 6:
				unk_0x5F4EA7D1E9029E5C(uParam1, unk_0xB56FEBC510E7E9DE(*uParam0, 27));
				break;
			
			case 7:
				unk_0xB83075ADFF6A3A01(uParam2);
				break;
			
			case 8:
				unk_0xC8C54AFEF8609CEF(cParam1, uParam2);
				break;
			
			case 9:
				unk_0xAB01A53F64F073E1();
				break;
			
			default:
				break;
		}
		unk_0x573691DB812DC8AA(uParam0, 29);
	}
}

void func_209(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_174();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_211(iParam0);
	unk_0x13FDF28AC5D80885(0);
	unk_0x62E4698C0067789A(1);
	Global_99236 = 0;
	func_210();
}

void func_210()
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

void func_211(int iParam0)
{
	Global_99239 = iParam0;
}

int func_212(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_136046)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_174();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_252())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			Var1 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_168())
			{
				return 0;
			}
		}
		if (!Global_99250.f_7703)
		{
			return 0;
		}
		if (func_179(0))
		{
			return 0;
		}
		if (func_169())
		{
			return 0;
		}
		if (func_251())
		{
			return 0;
		}
		if (Global_99239 != -1)
		{
			return 0;
		}
		if (func_107(func_105()))
		{
			if (func_161(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_250(iParam3))
		{
			return 0;
		}
		if (func_107(func_105()))
		{
			if (func_249(func_105()) == 4 || func_249(func_105()) == 5)
			{
				return 0;
			}
		}
		if (func_107(func_105()))
		{
			if (!func_248(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_247(Global_99250.f_29448.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x3EAC9995EC220C5A() - Global_99241) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_246())
		{
			return 0;
		}
		if (unk_0x21DB261DC1511E40())
		{
			return 0;
		}
		if (unk_0x74E62879922177A9())
		{
			return 0;
		}
		if (!func_237(4))
		{
			return 0;
		}
		if (!func_156(5))
		{
			return 0;
		}
		if (func_236(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x5C31634D1DECF73C(unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED())))
		{
			if ((unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(377.153f, -717.567f, 10.0536f) || unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(320.9934f, 265.2515f, 82.1221f)) || unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_236(0, 0))
		{
			return 0;
		}
		if (Global_25261)
		{
			return 0;
		}
		if (func_250(30) && !func_236(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_107(func_105()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_99250.f_1754.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_99250.f_1754.f_539.f_1524[iVar4];
				if (func_235(iVar8))
				{
					if (func_213(iVar4))
					{
						if (!func_20(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Var5) < (210f * 210f))
							{
								if (func_105() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_99250.f_1754.f_539.f_1524[iParam0];
	return func_214(iVar0);
}

int func_214(int iParam0)
{
	return func_215(iParam0, 1);
}

int func_215(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_235(iParam0))
	{
		return 0;
	}
	func_216(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_216(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_217(func_228(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_217(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_227(iParam0, iParam1))
	{
		iVar0 = func_226(iParam1);
		iVar1 = func_224(iParam0);
		iVar2 = (func_224(iParam0) - func_224(iParam1));
		iVar3 = (func_226(iParam0) - func_226(iParam1));
		iVar4 = (func_223(iParam0) - func_223(iParam1));
		iVar5 = (func_222(iParam0) - func_222(iParam1));
		iVar6 = (func_221(iParam0) - func_221(iParam1));
		iVar7 = (func_220(iParam0) - func_220(iParam1));
	}
	else
	{
		iVar0 = func_226(iParam0);
		iVar1 = func_224(iParam1);
		iVar2 = (func_224(iParam1) - func_224(iParam0));
		iVar3 = (func_226(iParam1) - func_226(iParam0));
		iVar4 = (func_223(iParam1) - func_223(iParam0));
		iVar5 = (func_222(iParam1) - func_222(iParam0));
		iVar6 = (func_221(iParam1) - func_221(iParam0));
		iVar7 = (func_220(iParam1) - func_220(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_219(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_218(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_218(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_219(int iParam0, int iParam1)
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

int func_220(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_221(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_222(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_223(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_224(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_225(unk_0xB56FEBC510E7E9DE(iParam0, 31), -1, 1)) + 2011;
}

int func_225(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_226(int iParam0)
{
	return iParam0 & 15;
}

int func_227(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_235(iParam1) || !func_235(iParam0))
	{
		return 1;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_226(iParam0);
	iVar1 = func_226(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_223(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_220(iParam0);
	iVar1 = func_220(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_228()
{
	var uVar0;
	
	func_234(&uVar0, unk_0x624CC88A8815545E());
	func_233(&uVar0, unk_0xD3D98375D5CA69E4());
	func_232(&uVar0, unk_0x5C5157A539753532());
	func_231(&uVar0, unk_0xCB12BC5A618B995B());
	func_230(&uVar0, unk_0x9746D90F14C930B9());
	func_229(&uVar0, unk_0xD45B57A596913560());
	return uVar0;
}

void func_229(var uParam0, int iParam1)
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

void func_230(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_231(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_226(*uParam0);
	iVar1 = func_224(*uParam0);
	if (iParam1 < 1 || iParam1 > func_219(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_232(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_233(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_234(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_235(int iParam0)
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
	iVar0 = func_220(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_221(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_222(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_224(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_226(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_223(iParam0);
	if (iVar5 < 1 || iVar5 > func_219(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_236(int iParam0, int iParam1)
{
	if (unk_0xB56FEBC510E7E9DE(Global_99250.f_29448.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)
{
	int iVar0;
	
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				iVar0 = func_105();
				if (!func_107(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_245()) || Global_98297) || Global_25117) || func_244()) || func_43(8, -1)) || func_243()) || func_242()) || func_241()) || func_240()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1) || func_245()) || Global_25117) || func_244()) || func_43(8, -1)) || func_241()) || func_243()) || func_242()) || func_240()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_245()) || Global_98297) || Global_25117) || func_244()) || func_43(8, -1)) || func_241()) || func_243()) || func_242()) || func_240()) || Global_99250.f_6306.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_245()) || Global_98297) || Global_25117) || func_244()) || func_43(8, -1)) || func_243()) || func_242()) || func_240()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_245() || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || func_43(8, -1)) || func_240()) || func_239()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_43(8, -1) || func_243()) || func_242()) || func_239()) || func_238())
						{
							return 0;
						}
						if ((unk_0xA153A26DF49EBCC0() && unk_0xD802C73A0EC92D7F() != 3) && unk_0x9F0EFBAAF424E79A() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
						{
							if ((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_245()) || Global_25117) || func_244()) || func_43(8, -1)) || func_242()) || func_241()) || func_240()) || Global_99250.f_6306.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || func_245()) || func_242()) || Global_98297) || Global_25117) || func_244()) || Global_36750) || func_43(8, -1)) || func_241()) || func_239()) || func_240()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0)) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1)) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0xCDC007CB03638977(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_245()) || Global_98297) || Global_25117) || func_244()) || func_43(8, -1)) || func_241()) || func_239()) || func_243()) || func_242()) || func_240())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_238()
{
	return Global_91145.f_1;
}

int func_239()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_240()
{
	if (unk_0xB1A77D5C890711F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_241()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

bool func_242()
{
	return Global_91158.f_297 > 0;
}

bool func_243()
{
	return Global_91158.f_296 > 0;
}

var func_244()
{
	return Global_1315910;
}

int func_245()
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_246()
{
	func_40();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_247(int iParam0)
{
	return func_227(func_228(), iParam0);
}

int func_248(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_105();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_249(int iParam0)
{
	if (!func_107(iParam0))
	{
		return 7;
	}
	return Global_99250.f_6306.f_919[iParam0];
}

bool func_250(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_252())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xB56FEBC510E7E9DE(Global_99250.f_29448, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB56FEBC510E7E9DE(Global_99250.f_29448.f_1, iVar0);
	}
	return bVar1;
}

int func_251()
{
	var uVar0;
	
	if (Global_25265)
	{
		uVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (unk_0x968EA16107097324(uVar0, 0))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x07A8845F7F106A38(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_252()
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

bool func_253(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iParam0 /*6*/], 3);
}

bool func_254(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iParam0 /*6*/], 0);
}

void func_255()
{
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x2A488C176D52CCA5(Local_122, Local_91) < 20f)
		{
			iLocal_90 = 1;
			iLocal_47 = 2;
		}
		if (unk_0x2A488C176D52CCA5(Local_122, Local_94) < 20f)
		{
			iLocal_90 = 2;
			iLocal_47 = 3;
		}
		if (unk_0x2A488C176D52CCA5(Local_122, Local_97) < 20f)
		{
			iLocal_90 = 3;
			iLocal_47 = 1;
		}
		if (unk_0x2A488C176D52CCA5(Local_122, Local_100) < 20f)
		{
			iLocal_90 = 4;
			iLocal_47 = 1;
		}
	}
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_257()
{
	if (iLocal_156)
	{
		if (iLocal_50)
		{
			unk_0xFB4F6722A032A0F0(iLocal_83);
			unk_0xFB4F6722A032A0F0(iLocal_84);
			unk_0xFB4F6722A032A0F0(iLocal_85);
		}
		if (!unk_0x1E80C02AC16B6622(iLocal_63))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				unk_0x23E5F4496336DE4E(iLocal_63, unk_0x77F050A399DB77ED(), 150f, -1, 0, 0);
			}
			unk_0x112CD899A3BEE719(iLocal_63, 1);
			if (!bLocal_60)
			{
				unk_0x4FE5EDEAD55F44A3(iLocal_63, iLocal_192);
			}
		}
		if (unk_0x1F2158D615BC4B25(iLocal_62))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_62))
			{
				unk_0x26A7668D061F96E7(iLocal_62, 1);
				if (unk_0x49C650267EDFEBC6(iLocal_62, -1146898486) == 7 && unk_0x49C650267EDFEBC6(iLocal_62, 242628503) == 7)
				{
					unk_0x2A6B9F9E71C479CF(&uLocal_121);
					if (unk_0xFEFE6C2D03E7A996(iLocal_62))
					{
						unk_0xC059A8F3A0703F9D(0, 0);
					}
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), 9000, 0, 2);
					unk_0xA118099DF7209F3A(0, Local_122, 250f, -1, 0, 0);
					unk_0x44642CB08FA1637E(uLocal_121);
					unk_0xB8A8FA4B28E9F423(iLocal_62, uLocal_121);
					unk_0xAAD288E877AC833D(&uLocal_121);
					unk_0x112CD899A3BEE719(iLocal_62, 1);
					if (!iLocal_154 && !iLocal_148)
					{
						if (unk_0x1066B6347C40B301())
						{
							func_89();
						}
					}
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC3B073777B46C61A(iLocal_66))
		{
			unk_0x296CDA10C549A502(&iLocal_66);
		}
		if (unk_0xC3B073777B46C61A(iLocal_65))
		{
			unk_0x296CDA10C549A502(&iLocal_65);
		}
		if (unk_0x1F2158D615BC4B25(iLocal_64))
		{
			unk_0xFF0E2D994E7D2E94(&iLocal_64);
		}
		if (unk_0xC3B073777B46C61A(iLocal_67))
		{
			unk_0x296CDA10C549A502(&iLocal_67);
		}
	}
	if (iLocal_379 != -1)
	{
		if (unk_0x29CD09A8AB531369(iLocal_379))
		{
			unk_0x1318E8C9F7B244EE(iLocal_379);
		}
		iLocal_379 = -1;
	}
	if (func_173())
	{
		unk_0x0C53A6DA4C66030D(1);
		unk_0x4AAD01BBE039D160(1f);
	}
	func_29(&uLocal_380, 0, 0);
	func_92(0, 1, 1, 0);
	func_263(-1);
	func_258(&uLocal_393, 0);
	if (iLocal_141 != 0)
	{
		unk_0x3C6ED1B5636AF8B1(iLocal_141);
	}
	unk_0x2F798BA2098FDADE();
}

void func_258(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_260(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_259(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_259(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_260(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*18*/], 30))
		{
			func_261(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_261(var uParam0)
{
	func_262(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_262(int iParam0, var uParam1, int iParam2)
{
	if (unk_0xB56FEBC510E7E9DE(iParam0, 30))
	{
		switch (func_198(iParam0))
		{
			case 0:
				unk_0xFB4F6722A032A0F0(uParam2);
				break;
			
			case 1:
				unk_0xD5A53B898943F331(uParam1);
				break;
			
			case 2:
				unk_0xCF6799E8F8F03963(uParam1);
				break;
			
			case 3:
				unk_0x18D66253D62D657B(uParam1);
				break;
			
			case 4:
				unk_0xD6BB36F97A54533F(iParam2, uParam1);
				break;
			
			case 5:
				unk_0xB616B0D2448050A6(uParam1);
				break;
			
			case 6:
				unk_0xB1FD6AC96E6B866D();
				break;
			
			case 7:
				unk_0x0594C68074129537(iParam2);
				break;
			
			case 8:
				unk_0x9516B90C3EE9BEBE(iParam2, unk_0xB56FEBC510E7E9DE(iParam0, 26));
				break;
			
			case 9:
				unk_0x9424E5B8292E239C();
				break;
			
			default:
				break;
		}
	}
}

void func_263(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_174();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_173())
	{
		func_268(iParam0);
		unk_0x275546117AF1F063(0, 0);
		Global_99241 = unk_0x3EAC9995EC220C5A();
		func_267(30000);
		StringCopy(&cVar0, func_266(Global_99239, 1), 64);
		if (func_265(Global_99239) > 0)
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
	func_264(&Global_25174);
	Global_99240 = 0;
	func_211(-1);
}

void func_264(var uParam0)
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

int func_265(int iParam0)
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

char* func_266(int iParam0, bool bParam1)
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

void func_267(int iParam0)
{
	Global_36251 = (unk_0x3EAC9995EC220C5A() + iParam0);
}

void func_268(int iParam0)
{
	func_269(iParam0, 0, func_274(iParam0));
}

void func_269(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_228();
	func_272(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_271(iParam0, &uVar0);
	Var1 = { func_270(&uVar0) };
}

struct<16> func_270(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_221(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_220(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_223(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_226(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_224(*uParam0), 64);
	return Var0;
}

void func_271(int iParam0, var uParam1)
{
	Global_99250.f_29448.f_43[iParam0] = *uParam1;
}

void func_272(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_224(*uParam0);
	iVar1 = func_226(*uParam0);
	iVar2 = func_223(*uParam0);
	iVar3 = func_222(*uParam0);
	iVar4 = func_221(*uParam0);
	iVar5 = func_220(*uParam0);
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
	iVar6 = func_219(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_219(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_273(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_273(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_234(uParam0, iParam1);
	func_233(uParam0, iParam2);
	func_232(uParam0, iParam3);
	func_230(uParam0, iParam5);
	func_231(uParam0, iParam4);
	func_229(uParam0, iParam6);
}

int func_274(int iParam0)
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

void func_275(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_174();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_265(iParam0))
	{
		func_286(iParam0, iParam1);
		if (!func_285(51))
		{
			func_282("RE_REWARD", 1, 0, 4000, 10000, func_167(), 0, 138, 0);
			func_281(51);
		}
		if (func_152(iParam0))
		{
			Global_99250.f_29448.f_2 = 3;
		}
		if (func_280(iParam0, iParam1) != 322)
		{
			func_276(func_280(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_99238 = iParam1;
		if (Global_99236 == 0)
		{
			if (((Global_99239 == 1 || Global_99239 == 5) || Global_99239 == 11) || Global_99239 == 25)
			{
				func_181(2);
			}
			else if ((Global_99239 == 26 || Global_99239 == 8) || Global_99239 == 17)
			{
				func_181(7);
			}
			else
			{
				func_181(1);
			}
		}
	}
}

void func_276(int iParam0, var uParam1, var uParam2)
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
		func_279((891 + iParam0), 1, -1, 1);
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
		Global_99250.f_8812[iParam0 /*12*/].f_10 = uParam1;
		Global_99250.f_8812[iParam0 /*12*/].f_11 = uParam2;
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
		func_277();
	}
}

void func_277()
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
		func_75(13, unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853));
	}
	if (!unk_0xB94B9782B4E786E9())
	{
		if (!Global_69317)
		{
			if (func_278() == 2 == 0 && !unk_0x4C779B19E6DDCDA2())
			{
				if (unk_0x01128ADE88E1C42B())
				{
					Global_98984 = 0;
				}
				if (!Global_55659)
				{
					func_178();
				}
			}
		}
	}
}

int func_278()
{
	return Global_25115;
}

int func_279(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_97();
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

int func_280(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_281(int iParam0)
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
		unk_0x573691DB812DC8AA(&(Global_99250.f_24863.f_150[iVar1]), iVar0);
	}
}

void func_282(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_283(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_283(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_284();
	}
}

void func_284()
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

int func_285(int iParam0)
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

void func_286(int iParam0, int iParam1)
{
	unk_0x573691DB812DC8AA(&(Global_99250.f_29448.f_8[iParam0]), iParam1);
}

