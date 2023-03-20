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
	if (unk_0x2170E7BC25114A22(11))
	{
		if (iLocal_48 == 5 || iLocal_48 == 12)
		{
			func_277(25, iLocal_90);
			func_259();
		}
		else
		{
			func_259();
		}
	}
	Local_122 = { ScriptParam_0.f_1[0 /*3*/] };
	func_258(&uLocal_393, 3);
	func_257();
	if ((iLocal_90 == 1 && func_256(55)) && !func_255(55))
	{
		unk_0x01DFCA3621B68C4A();
	}
	if (func_214(Local_122, 25, iLocal_90, 0, 0))
	{
		func_211(-1);
	}
	else
	{
		unk_0x01DFCA3621B68C4A();
	}
	bVar0 = false;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_208(&uLocal_393);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x3F931C10896E8434(unk_0xFB6B3EEFAB2DD12C());
		}
		func_207(uLocal_65, &uLocal_392);
		if (unk_0x0943F317505D1E39() || bLocal_149)
		{
			switch (iLocal_46)
			{
				case 0:
					if (func_193())
					{
						unk_0x1B0911E42F22C137(0);
						unk_0xBCDF9E3086B4229C(-127.9025f, -1574.084f, 36.4128f, 10f, 0, 0, 0, 0, 0);
						iLocal_156 = 1;
						iLocal_46 = 1;
					}
					else if (func_192())
					{
						func_259();
					}
					break;
				
				case 1:
					if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
					{
						if (iLocal_141 == 0)
						{
							iLocal_141 = unk_0xC86A0D57BBB4C003(99, Local_122, 0f);
						}
						unk_0x3F931C10896E8434(unk_0xFB6B3EEFAB2DD12C());
						switch (iLocal_48)
						{
							case 1:
								func_184();
								break;
							
							case 2:
								unk_0x77970B0F3F8D52E1("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_49)
								{
									case 0:
										unk_0x77970B0F3F8D52E1("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (unk_0x00B5B0B68211D89B(iLocal_63) || unk_0x7D720C677145C91C(iLocal_63, unk_0xD5A676B97920D126(), 0))
										{
											bVar0 = unk_0x00B5B0B68211D89B(iLocal_62);
											if (!unk_0x233F1CC43F061218(uLocal_191))
											{
											}
											if (bVar0 == 0 && iLocal_90 == 1)
											{
												unk_0x0506103B5BFE6494(iLocal_62, 500, 1000, 0, 0, 0, 0);
												unk_0xBB8F1D58B7578137(iLocal_62, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
												unk_0x7D99F00F48D15ADB(iLocal_62, 1);
												func_183(1);
												func_178();
											}
										}
										else
										{
											func_148();
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
										unk_0x77970B0F3F8D52E1("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_147();
										if (iLocal_54 && !func_146())
										{
											iLocal_49 = 4;
										}
										break;
									
									case 4:
										unk_0x77970B0F3F8D52E1("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_145())
										{
											func_144();
										}
										if (bLocal_155)
										{
											iLocal_49 = 5;
										}
										if (unk_0x1774A68441553185(iLocal_62, 242628503) == 7)
										{
											unk_0x456121A0AAC868D4(&uLocal_121);
											unk_0x0988FFC0C75637DF(0, iLocal_63, 5000, 0, 2);
											unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 5000);
											unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xCFE67FBB69F1C410(uLocal_121);
											unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
											unk_0x873418BFBF9A6780(&uLocal_121);
										}
										break;
									
									case 5:
										func_141();
										if (!unk_0xB529B2A4B7C64D6D(iLocal_62, 0))
										{
											if (unk_0x1774A68441553185(iLocal_62, 242628503) == 7)
											{
												unk_0x456121A0AAC868D4(&uLocal_121);
												unk_0xBE29918F5B8EC2EF(0, iLocal_63, 0);
												unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0xCFE67FBB69F1C410(uLocal_121);
												unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
												unk_0x873418BFBF9A6780(&uLocal_121);
											}
										}
										break;
								}
								if (func_140())
								{
									iLocal_48 = 11;
								}
								if (bLocal_149)
								{
								}
								func_139();
								if (iLocal_49 == 0)
								{
									if (func_137())
									{
										if (iLocal_143 == 4)
										{
											if (unk_0x6901135DDCC4904D(uLocal_66))
											{
												unk_0x8A3D7569826A325D(&uLocal_66);
											}
											if (unk_0x6901135DDCC4904D(uLocal_65))
											{
												unk_0x8A3D7569826A325D(&uLocal_65);
											}
											if (!unk_0x6901135DDCC4904D(iLocal_67))
											{
												iLocal_67 = func_135(uLocal_191);
											}
											iLocal_48 = 4;
										}
										else
										{
											iLocal_48 = 3;
										}
									}
									if (func_134())
									{
										func_133();
									}
								}
								if (func_132())
								{
									func_131();
									func_130();
									if (unk_0x1AAFFE4111587B35(iLocal_62, Local_184, 7f, 7f, 7f, 0, 1, 0))
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
									if (!unk_0xDA4E21D6BC58AB75(iLocal_63, 0))
									{
										func_128(uLocal_66, &uLocal_142);
									}
									else if (unk_0x6901135DDCC4904D(uLocal_66))
									{
										if (unk_0xDB44BCF552894B8E(iLocal_66) == 1)
										{
										}
										else
										{
											unk_0x1BDDADB5ACDFD382(iLocal_66, 0);
											unk_0x4F095059F1C175D5(iLocal_66, 1);
										}
									}
								}
								if (func_127())
								{
									iLocal_48 = 10;
								}
								break;
							
							case 4:
								unk_0x77970B0F3F8D52E1("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_126(1);
								if (func_145())
								{
									func_144();
									func_141();
								}
								if (func_140())
								{
									iLocal_48 = 11;
								}
								func_118();
								break;
							
							case 5:
								unk_0x77970B0F3F8D52E1("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_126(1);
								if (!bLocal_152)
								{
									func_117(iLocal_62, &uLocal_193);
									uLocal_193 = uLocal_193;
									func_116();
									func_115();
									func_114();
									if (func_113())
									{
										func_112();
										func_178();
									}
									if (func_106(func_107()) < iLocal_192)
									{
										iLocal_48 = 12;
									}
								}
								func_49();
								break;
							
							case 10:
								unk_0x77970B0F3F8D52E1("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_48();
								break;
							
							case 3:
								func_47();
								break;
							
							case 11:
								func_46();
								break;
							
							case 6:
								if (func_140())
								{
									iLocal_48 = 11;
								}
								func_33();
								break;
							
							case 8:
								if (!unk_0x00B5B0B68211D89B(iLocal_62))
								{
									if (unk_0x108650178993C477(iLocal_62, unk_0xD5A676B97920D126(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_48 = 6;
									}
									else
									{
										func_259();
									}
								}
								break;
							
							case 9:
								unk_0x77970B0F3F8D52E1("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (unk_0x7887B64A08364778(iLocal_63))
								{
									if (unk_0x00B5B0B68211D89B(iLocal_63))
									{
										if (unk_0x6901135DDCC4904D(iLocal_66))
										{
											unk_0x8A3D7569826A325D(&iLocal_66);
										}
										if (!unk_0x7887B64A08364778(iLocal_62))
										{
											if (unk_0x7887B64A08364778(iLocal_64))
											{
												unk_0x77CEDAB7C44BFD4E(&iLocal_64);
											}
											func_32();
											iLocal_56 = 1;
											func_118();
										}
									}
								}
								break;
							
							case 12:
								if (unk_0x7887B64A08364778(iLocal_64))
								{
									unk_0x77CEDAB7C44BFD4E(&iLocal_64);
								}
								unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
								func_178();
								break;
							
							case 13:
								func_31();
								break;
							}
					}
					if (bLocal_60)
					{
						if (unk_0x233F1CC43F061218(uLocal_191))
						{
							if (unk_0xC4C60D7BF2D65D2D(uLocal_191))
							{
								if (unk_0x2A488C176D52CCA5(Local_184, unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1)) > 150f)
								{
									func_259();
								}
							}
						}
					}
					else if (bLocal_149)
					{
						if (!unk_0x00B5B0B68211D89B(iLocal_63))
						{
							if (iLocal_48 != 6)
							{
								if (func_30(unk_0xD5A676B97920D126(), iLocal_63, 1) > 150f && (!unk_0xBB5DD90D4926F21A(iLocal_63) || unk_0x27A556D1AF39812E(iLocal_63)))
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
					if (unk_0x7887B64A08364778(iLocal_62))
					{
						if (!unk_0x00B5B0B68211D89B(iLocal_62))
						{
							if (unk_0x7D720C677145C91C(iLocal_62, unk_0xD5A676B97920D126(), 1))
							{
								if (unk_0x7887B64A08364778(iLocal_64))
								{
									if (unk_0xB77CD66F1DCC743D(iLocal_64, iLocal_62))
									{
										unk_0x4FE8E15113ECBFEF(iLocal_64, 1, 1);
									}
								}
							}
						}
					}
					if (iLocal_150)
					{
						if (!iLocal_163)
						{
							if (!unk_0xB529B2A4B7C64D6D(iLocal_63, 0) && !unk_0xB529B2A4B7C64D6D(iLocal_62, 0))
							{
								if (unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(iLocal_63, 1), unk_0xC086F8D75730FA3A(iLocal_62, 1), 1) > 100f && unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(iLocal_63, 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 1) < 100f)
								{
									unk_0xBB8F1D58B7578137(iLocal_63, unk_0xD5A676B97920D126(), 200f, -1, 0, 0);
									iLocal_163 = 1;
								}
							}
						}
					}
					if (bLocal_149 && !iLocal_150)
					{
						if (!unk_0x00B5B0B68211D89B(iLocal_63))
						{
							if (iLocal_90 == 3)
							{
								if (unk_0x1774A68441553185(iLocal_63, 1805844857) != 1)
								{
									unk_0xB42E7901B9B18D2A(iLocal_63);
									unk_0xBB8F1D58B7578137(iLocal_63, iLocal_62, 200f, -1, 0, 0);
									unk_0xD099DEFB49600743(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
									iLocal_150 = 1;
								}
							}
							else if (unk_0x1774A68441553185(iLocal_63, 1805844857) != 1)
							{
								unk_0xB42E7901B9B18D2A(iLocal_63);
								unk_0xBB8F1D58B7578137(iLocal_63, unk_0xD5A676B97920D126(), 200f, -1, 0, 0);
								unk_0xD099DEFB49600743(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
								iLocal_150 = 1;
							}
							if (unk_0xFC579AD204086219(iLocal_63, -2134635134))
							{
								unk_0xBB8F1D58B7578137(iLocal_63, iLocal_62, 200f, -1, 0, 0);
								unk_0xD099DEFB49600743(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
								iLocal_150 = 1;
							}
							if (iLocal_90 == 1 || iLocal_90 == 4)
							{
								if (unk_0xEBA40DFF7CCE3511(iLocal_63, cLocal_359, sLocal_369, 3))
								{
									if (unk_0x1F2CF2B9307EAB08(iLocal_63, cLocal_359, sLocal_369) >= 0.922f)
									{
										unk_0xBB8F1D58B7578137(iLocal_63, unk_0xD5A676B97920D126(), 200f, -1, 0, 0);
										unk_0xD099DEFB49600743(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
										iLocal_150 = 1;
									}
								}
								if (unk_0xEBA40DFF7CCE3511(iLocal_63, cLocal_359, sLocal_367, 3))
								{
									if (unk_0x1F2CF2B9307EAB08(iLocal_63, cLocal_359, sLocal_367) >= 0.922f)
									{
										unk_0xBB8F1D58B7578137(iLocal_63, unk_0xD5A676B97920D126(), 200f, -1, 0, 0);
										unk_0xD099DEFB49600743(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
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
			func_259();
		}
	}
}

void func_1()
{
	if (unk_0x7887B64A08364778(iLocal_62))
	{
		if (unk_0x00B5B0B68211D89B(iLocal_62))
		{
			if (unk_0x7887B64A08364778(iLocal_63))
			{
				if (unk_0x00B5B0B68211D89B(iLocal_63))
				{
					func_259();
				}
			}
		}
	}
	if (unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (unk_0x6901135DDCC4904D(uLocal_65))
		{
			unk_0x8A3D7569826A325D(&iLocal_65);
		}
	}
	if (unk_0x00B5B0B68211D89B(iLocal_63))
	{
		if (unk_0x6901135DDCC4904D(iLocal_66))
		{
			unk_0x8A3D7569826A325D(&iLocal_66);
		}
	}
	if (!iLocal_161)
	{
		if (unk_0x00B5B0B68211D89B(iLocal_63))
		{
			func_2(&uLocal_194, 1);
			iLocal_161 = 1;
		}
	}
	if (!iLocal_162)
	{
		if (unk_0x00B5B0B68211D89B(iLocal_62))
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
	if (unk_0x6901135DDCC4904D(uParam0))
	{
		if ((unk_0x7887B64A08364778(iParam1) && unk_0x7887B64A08364778(unk_0xD5A676B97920D126())) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (unk_0x8041FE602D4689B1(iParam1))
			{
				if (unk_0xA4DB44DF73EF4FE5(unk_0x9A1EB82BF4C4844D(iParam1), 0))
				{
					fVar1 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iParam1, 1), 1);
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
						unk_0x5AF5569613C76AC3(iParam0, 1);
						unk_0x97C445677A852D45(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x5AF5569613C76AC3(iParam0, 0);
						unk_0x97C445677A852D45(iParam0, 255);
					}
				}
			}
			else if (unk_0x6DA4D1391A7B813F(iParam1))
			{
				if (!unk_0x00B5B0B68211D89B(unk_0x36B702E1B6552B8A(iParam1)))
				{
					fVar1 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iParam1, 1), 1);
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
						unk_0x5AF5569613C76AC3(iParam0, 1);
						unk_0x97C445677A852D45(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x5AF5569613C76AC3(iParam0, 0);
						unk_0x97C445677A852D45(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_4()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_63) || !bLocal_133)
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
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
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
	
	if (uParam0->f_1 && unk_0x96F8C2C945A9B758())
	{
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x1C079483C9D16F36(iVar0))
	{
		if (!unk_0x1995B52453EF6537())
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
	if (func_26(iParam1) && unk_0xA3E7DE487D314279(iParam1))
	{
		iVar1 = 0;
		if (unk_0x6DA4D1391A7B813F(iParam1))
		{
			unk_0x5C5EA29ED298B14F(unk_0x36B702E1B6552B8A(iParam1));
			unk_0x8E5A2F0D57C1DF15(unk_0x36B702E1B6552B8A(iParam1), 1);
			if (unk_0x33853ED448B52835(unk_0x36B702E1B6552B8A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8041FE602D4689B1(iParam1))
		{
			unk_0x5362ADB0E848B600(unk_0x9A1EB82BF4C4844D(iParam1));
			if (unk_0xF39AD11288893C1D(unk_0x9A1EB82BF4C4844D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam1))
		{
			unk_0xAA8FA16ED286C065(unk_0x028455DF6C933604(iParam1));
			if (unk_0xE5C01F114CB61F98(unk_0x028455DF6C933604(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x96F8C2C945A9B758())
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
					if ((unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0)) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
					{
						if ((iVar1 && !unk_0xA14FC57CB26C2B67()) && uParam8)
						{
							if (!func_28(iVar0))
							{
								func_12(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
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
				if (unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0))
				{
					if (((unk_0xBB5DD90D4926F21A(iParam1) && iVar1) && !unk_0xA14FC57CB26C2B67()) && uParam8)
					{
						if (!func_28(iVar0))
						{
							func_12(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
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
			if (!unk_0x1C079483C9D16F36(sParam5))
			{
				if (func_28(sParam5))
				{
					unk_0x04890EB0282525A5(1);
				}
			}
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
			{
				if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
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
	if (func_26(unk_0xD5A676B97920D126()))
	{
		unk_0x0565F5F2EE81A23F(unk_0xD5A676B97920D126());
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x33E4179F57B9F232(1);
		unk_0x6125B94865C458A0(0);
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		unk_0x044DCEA35050EC01("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x84A97C70FFDEC0C8()
		{
			return 1;
		}
	}
	return 0;
}

int func_11(bool bParam0)
{
	switch (Global_35777)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101652.f_8992.f_100++;
			}
			return Global_101652.f_8992.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101652.f_8992.f_101++;
			}
			return Global_101652.f_8992.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101652.f_8992.f_102++;
			}
			return Global_101652.f_8992.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_12(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

int func_13(char* sParam0)
{
	if (!func_14(1, 1, 0))
	{
		if ((!unk_0xC55B9553B3EDADE9(sParam0) && func_28(sParam0)) || func_28("CMN_HINT"))
		{
			unk_0x04890EB0282525A5(1);
		}
		return 0;
	}
	switch (Global_35777)
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
		if (!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB0D174BA6F10DF7B())
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
	if (unk_0x976A3E0B7A766593())
	{
		return 0;
	}
	if (Global_68127)
	{
		return 0;
	}
	if (unk_0xAB964FCFAC3C767A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52999)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
		{
			if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
			{
				return 0;
			}
			if (unk_0x2AD8D2893EF54BC3())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_15()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

int func_16(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
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
	
	if (unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		func_29(uParam0, 0, 0);
	}
	if (func_20(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x6DA4D1391A7B813F(iParam1))
		{
			iVar0 = unk_0x36B702E1B6552B8A(iParam1);
			if (!unk_0x6A0583ECFCCECC9B(iVar0, 0))
			{
				if (unk_0xBEC34BF6B72C417A(iVar0))
				{
					if (!func_18())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x300B1E56EE76D45C(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x33E4179F57B9F232(0);
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
	unk_0x218CB9DF4F72DD01(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x0988FFC0C75637DF(unk_0xD5A676B97920D126(), iParam1, -1, iVar3, iVar4);
	unk_0xAAD655F2351CC4B7("FocusIn", 0, 0);
	unk_0xE3E53903AE9B5BD5("HINT_CAM_SCENE");
	unk_0xA93E75A5493862BD(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_18()
{
	return func_19(unk_0xFB6B3EEFAB2DD12C());
}

int func_19(int iParam0)
{
	if (unk_0xA0A4DA31DEDFAC4F(unk_0x4572B13EE70C8F52(iParam0)) == joaat("mp_f_freemode_01"))
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
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					if (func_25(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_24(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_24(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_25(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
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
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (!func_25(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_24(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_24(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_25(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
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
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
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
				if (!func_24(bParam1, bParam2, bParam3) || unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
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
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
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
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || func_22(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
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
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xBCCED7DE90D60F92(0, 80))
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
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xBCCED7DE90D60F92(0, 80))
			{
				unk_0x33E4179F57B9F232(0);
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
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
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
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
			{
				unk_0x33E4179F57B9F232(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (unk_0x8041FE602D4689B1(iParam0))
		{
			if (unk_0xA4DB44DF73EF4FE5(unk_0x9A1EB82BF4C4844D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x6DA4D1391A7B813F(iParam0))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0x36B702E1B6552B8A(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_27()
{
	unk_0xB8A73E7DA87B2968(&Global_2314, 4);
}

bool func_28(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

void func_29(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0xF44A5E894FE76438(Global_2494149.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x6125B94865C458A0(iParam2);
		unk_0x044DCEA35050EC01("FocusIn");
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x33E4179F57B9F232(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x1C079483C9D16F36(sVar0))
	{
		if (!unk_0x1995B52453EF6537())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x1C079483C9D16F36(uParam0->f_3))
	{
		if (func_28(uParam0->f_3))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
	if (!unk_0x1C079483C9D16F36(sVar0))
	{
		if (func_28(sVar0))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
}

float func_30(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	if (!unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Var3, iParam2);
}

void func_31()
{
	func_259();
}

void func_32()
{
	if (!unk_0x233F1CC43F061218(uLocal_191))
	{
		if (unk_0x00B5B0B68211D89B(iLocal_63))
		{
			Local_184 = { unk_0xF1856A98F08DCF6D(iLocal_63, 1067030938, 1069547520) };
		}
		else
		{
			Local_184 = { unk_0x67B984636E663467(unk_0xC086F8D75730FA3A(iLocal_63, 1), 1067030938, 1069547520) };
		}
		uLocal_191 = unk_0xF23FE6356F412D6E(joaat("pickup_money_wallet"), Local_184, uLocal_144, iLocal_192, 1, iLocal_85);
		iLocal_67 = func_135(uLocal_191);
		func_29(&uLocal_380, 0, 0);
		bLocal_60 = true;
	}
}

void func_33()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, "flee_backward_loop_shopkeeper", 3))
		{
			unk_0x456121A0AAC868D4(&uLocal_121);
			unk_0x290A57C93304EF16(0, cLocal_359, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0xEBF1276539CCAA92(0, 40000f, 0);
			unk_0xCFE67FBB69F1C410(uLocal_121);
			unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
			unk_0x873418BFBF9A6780(&uLocal_121);
		}
		else if (unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0x456121A0AAC868D4(&uLocal_121);
			unk_0x290A57C93304EF16(0, cLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0xEBF1276539CCAA92(0, 40000f, 0);
			unk_0xCFE67FBB69F1C410(uLocal_121);
			unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
			unk_0x873418BFBF9A6780(&uLocal_121);
		}
		func_34(&uLocal_194, cLocal_103, sLocal_110, 4, 0, 0, 0);
		iLocal_154 = 1;
		unk_0x7D99F00F48D15ADB(iLocal_62, 1);
		unk_0x4EDE34FBADD967A6(0);
		func_259();
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_35(sParam2, iParam3, 0);
}

int func_35(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x73998CD31AEFA620(0);
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
					func_44();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_43(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_42();
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
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_40();
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
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_39())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_37();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_36();
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_37()
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
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_38()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		Global_14443 = func_107();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

bool func_41(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_42()
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

bool func_43(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_44()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
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

void func_46()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		unk_0x37338B7B7C4982DC(iLocal_62);
		unk_0xBB8F1D58B7578137(iLocal_62, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
		unk_0x7D99F00F48D15ADB(iLocal_62, 1);
		if (unk_0x7887B64A08364778(iLocal_64))
		{
			unk_0x77CEDAB7C44BFD4E(&iLocal_64);
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x6901135DDCC4904D(iLocal_65))
		{
			unk_0x8A3D7569826A325D(&iLocal_65);
		}
		unk_0xD4B3FF1E63C36391(&iLocal_62);
	}
	if (unk_0x00B5B0B68211D89B(iLocal_63) || unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (unk_0x6901135DDCC4904D(iLocal_66))
		{
			unk_0x8A3D7569826A325D(&iLocal_66);
		}
		if (unk_0x6901135DDCC4904D(iLocal_65))
		{
			unk_0x8A3D7569826A325D(&iLocal_65);
		}
		if (unk_0x233F1CC43F061218(uLocal_191))
		{
			if (unk_0xC4C60D7BF2D65D2D(uLocal_191))
			{
				iLocal_56 = 1;
				func_118();
			}
			else
			{
				func_126(0);
				func_259();
			}
		}
		else
		{
			func_259();
		}
	}
}

void func_47()
{
	bool bVar0;
	
	func_118();
	if (unk_0x233F1CC43F061218(uLocal_191))
	{
		if (unk_0xC4C60D7BF2D65D2D(uLocal_191))
		{
		}
	}
	if (iLocal_143 == 1)
	{
		if (!iLocal_51)
		{
			if (!unk_0x00B5B0B68211D89B(iLocal_63))
			{
				unk_0x37338B7B7C4982DC(iLocal_63);
				unk_0x182DAF81B229194E(iLocal_63, unk_0xD5A676B97920D126(), 0, 16);
				unk_0x7D99F00F48D15ADB(iLocal_63, 1);
			}
			if (!unk_0x00B5B0B68211D89B(iLocal_62))
			{
				if (unk_0x233F1CC43F061218(uLocal_191))
				{
					if (unk_0xC4C60D7BF2D65D2D(uLocal_191))
					{
						unk_0x37338B7B7C4982DC(iLocal_62);
						unk_0x456121A0AAC868D4(&uLocal_121);
						unk_0x1D2CBA8F2F00D745(0, unk_0xBF35916D2D6385A0(uLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
						unk_0xCFE67FBB69F1C410(uLocal_121);
						unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
						unk_0x873418BFBF9A6780(&uLocal_121);
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
			if (!unk_0x00B5B0B68211D89B(iLocal_63))
			{
				unk_0x37338B7B7C4982DC(iLocal_63);
				unk_0x182DAF81B229194E(iLocal_63, unk_0xD5A676B97920D126(), 0, 16);
				unk_0x7D99F00F48D15ADB(iLocal_63, 1);
				unk_0x6D20A3AA82585D8C(iLocal_63, 0);
				unk_0xD4B3FF1E63C36391(&iLocal_63);
			}
			if (!unk_0x00B5B0B68211D89B(iLocal_62))
			{
				if (unk_0x233F1CC43F061218(uLocal_191))
				{
					if (unk_0xC4C60D7BF2D65D2D(uLocal_191))
					{
						if (unk_0x1AAFFE4111587B35(iLocal_62, unk_0xBF35916D2D6385A0(uLocal_191), 10f, 10f, 10f, 0, 1, 0))
						{
							if (iLocal_90 == 3)
							{
								if ((!unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, "handsup_standing_enter", 3) && !unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, "handsup_standing_base", 3)) && !unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, "handsup_standing_exit", 3))
								{
									unk_0x37338B7B7C4982DC(iLocal_62);
									unk_0x456121A0AAC868D4(&uLocal_121);
									unk_0x1D2CBA8F2F00D745(0, unk_0xBF35916D2D6385A0(uLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
									unk_0xCFE67FBB69F1C410(uLocal_121);
									unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
									unk_0x873418BFBF9A6780(&uLocal_121);
									iLocal_51 = 1;
								}
							}
							else if ((!unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, sLocal_370, 3) && !unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, sLocal_366, 3)) && !unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, sLocal_368, 3))
							{
								unk_0x37338B7B7C4982DC(iLocal_62);
								unk_0x456121A0AAC868D4(&uLocal_121);
								unk_0x1D2CBA8F2F00D745(0, unk_0xBF35916D2D6385A0(uLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
								unk_0xCFE67FBB69F1C410(uLocal_121);
								unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
								unk_0x873418BFBF9A6780(&uLocal_121);
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
						if ((!unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, "handsup_standing_enter", 3) && !unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, "handsup_standing_base", 3)) && !unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, "handsup_standing_exit", 3))
						{
							unk_0x37338B7B7C4982DC(iLocal_62);
							unk_0xBB8F1D58B7578137(iLocal_62, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
							unk_0x7D99F00F48D15ADB(iLocal_62, 1);
							if (unk_0x6901135DDCC4904D(iLocal_65))
							{
								unk_0x8A3D7569826A325D(&iLocal_65);
							}
							unk_0xD4B3FF1E63C36391(&iLocal_62);
							iLocal_51 = 1;
							iLocal_48 = 9;
						}
					}
					else if ((!unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, sLocal_370, 3) && !unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, sLocal_366, 3)) && !unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, sLocal_368, 3))
					{
						unk_0x37338B7B7C4982DC(iLocal_62);
						unk_0xBB8F1D58B7578137(iLocal_62, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
						unk_0x7D99F00F48D15ADB(iLocal_62, 1);
						if (unk_0x6901135DDCC4904D(iLocal_65))
						{
							unk_0x8A3D7569826A325D(&iLocal_65);
						}
						unk_0xD4B3FF1E63C36391(&iLocal_62);
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
			if (!unk_0x00B5B0B68211D89B(iLocal_63))
			{
				unk_0x37338B7B7C4982DC(iLocal_63);
				unk_0xBB8F1D58B7578137(iLocal_63, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
				unk_0x7D99F00F48D15ADB(iLocal_63, 1);
				unk_0x6D20A3AA82585D8C(iLocal_63, 0);
				unk_0xD4B3FF1E63C36391(&iLocal_63);
			}
			if (!unk_0x00B5B0B68211D89B(iLocal_62))
			{
				unk_0x37338B7B7C4982DC(iLocal_62);
				unk_0xBB8F1D58B7578137(iLocal_62, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
				unk_0x7D99F00F48D15ADB(iLocal_62, 1);
				unk_0xD4B3FF1E63C36391(&iLocal_62);
			}
			iLocal_56 = 1;
			iLocal_51 = 1;
		}
	}
	if (iLocal_143 == 1 || iLocal_143 == 2)
	{
		if (!unk_0x00B5B0B68211D89B(iLocal_62))
		{
			if (iLocal_51)
			{
				if (unk_0x233F1CC43F061218(uLocal_191))
				{
					if (unk_0xC4C60D7BF2D65D2D(uLocal_191))
					{
						if (unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_360, "pickup_low", 3))
						{
							if (unk_0x1F2CF2B9307EAB08(iLocal_62, cLocal_360, "pickup_low") > 0.5f)
							{
								if (unk_0x233F1CC43F061218(uLocal_191))
								{
									if (unk_0xC4C60D7BF2D65D2D(uLocal_191))
									{
										func_34(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0);
										unk_0x21B0DFDAD96C837D(uLocal_191);
										bLocal_52 = true;
									}
								}
							}
						}
						else if (unk_0x1774A68441553185(iLocal_62, 242628503) == 7)
						{
							unk_0x37338B7B7C4982DC(iLocal_62);
							unk_0x456121A0AAC868D4(&uLocal_121);
							unk_0x290A57C93304EF16(0, cLocal_360, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xBB8F1D58B7578137(0, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
							unk_0xCFE67FBB69F1C410(uLocal_121);
							unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
							unk_0x873418BFBF9A6780(&uLocal_121);
							unk_0x7D99F00F48D15ADB(iLocal_62, 1);
						}
					}
					else if (bLocal_52)
					{
						unk_0xA8C0CC1A37E5B35D(iLocal_62, iLocal_192);
						unk_0xD4B3FF1E63C36391(&iLocal_62);
						func_183(3);
						func_178();
					}
					else
					{
						unk_0xBB8F1D58B7578137(iLocal_62, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
						unk_0x7D99F00F48D15ADB(iLocal_62, 1);
						if (unk_0x6901135DDCC4904D(iLocal_65))
						{
							unk_0x8A3D7569826A325D(&iLocal_65);
						}
						unk_0xD4B3FF1E63C36391(&iLocal_62);
						iLocal_51 = 1;
						iLocal_48 = 12;
					}
				}
				else if (bLocal_52)
				{
					unk_0xA8C0CC1A37E5B35D(iLocal_62, iLocal_192);
					unk_0xD4B3FF1E63C36391(&iLocal_62);
					func_183(3);
					func_178();
				}
				else
				{
					unk_0xBB8F1D58B7578137(iLocal_62, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
					unk_0x7D99F00F48D15ADB(iLocal_62, 1);
					if (unk_0x6901135DDCC4904D(iLocal_65))
					{
						unk_0x8A3D7569826A325D(&iLocal_65);
					}
					unk_0xD4B3FF1E63C36391(&iLocal_62);
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
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		unk_0x37338B7B7C4982DC(iLocal_62);
		unk_0xBB8F1D58B7578137(iLocal_62, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
		unk_0x7D99F00F48D15ADB(iLocal_62, 1);
		unk_0xD4B3FF1E63C36391(&iLocal_62);
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
	
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (!bLocal_152)
		{
			if (iLocal_153)
			{
				Var15 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
				iVar18 = 1;
				if (iLocal_90 == 1)
				{
					if (Var15.f_2 > 33.5f)
					{
						iVar18 = 0;
					}
				}
				if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_62, 5f, 5f, 5f, 0, 1, 0) && iVar18 == 1)
				{
					if (func_104(2))
					{
						unk_0x04890EB0282525A5(1);
					}
					if (unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
					{
						if (func_103(1, 0, 1))
						{
							if (!func_102())
							{
								if (!unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
								{
									func_93(1, 1, 1, 0);
									if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
									{
										while (!func_91(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), uLocal_77, 1, 1056964608, 0, 1, 0) || func_146())
										{
											unk_0xC7E06EC513BE0881();
											unk_0x4EDE34FBADD967A6(0);
										}
										if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
										{
											unk_0xE9148EE8AA200B60(unk_0xD5A676B97920D126(), 0, 0);
										}
									}
									unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
									if (!unk_0x00B5B0B68211D89B(iLocal_62))
									{
										unk_0x7195C098F080A083(iLocal_62, 0);
									}
									unk_0xC7E06EC513BE0881();
									unk_0x04D0C8C657127ABA(0);
									unk_0x53FD5C8F17B03451(iLocal_141);
									if (unk_0x33688D334D224255())
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
					func_87(unk_0xC086F8D75730FA3A(iLocal_62, 1), &uLocal_76, &uLocal_77);
				}
			}
			else if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_62, 15f, 15f, 15f, 0, 1, 0))
			{
				unk_0x456121A0AAC868D4(&uLocal_121);
				unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
				unk_0x0988FFC0C75637DF(0, unk_0xD5A676B97920D126(), -1, 2048, 2);
				if (iLocal_47 == 2)
				{
					unk_0x290A57C93304EF16(0, cLocal_377, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, 0, 0, 0);
				}
				unk_0xCFE67FBB69F1C410(uLocal_121);
				unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
				unk_0x873418BFBF9A6780(&uLocal_121);
				unk_0xD099DEFB49600743(iLocal_62, joaat("MotionState_Walk"), 0, 0, 0);
				iLocal_153 = 1;
			}
		}
		if (bLocal_152)
		{
			switch (iLocal_151)
			{
				case 0:
					unk_0xC7E06EC513BE0881();
					if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
					{
						if (!unk_0x00B5B0B68211D89B(iLocal_62))
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
							unk_0x87AA1B4BA52B1360(Local_125, &(Local_125.f_2), 0);
							Var1 = { unk_0xEA0A18B7DA3DAB52(cLocal_361, sLocal_363, Local_125, Local_128, 0f, 2) };
							Var10 = { Var1 - Local_125 };
							Var10.f_2 = 0f;
							fVar13 = unk_0x652D2EEEF1D3E62C(Var10);
							unk_0x87AA1B4BA52B1360(Var1, &(Var1.f_2), 0);
							fVar14 = (Local_125.f_2 - Var1.f_2);
							Local_128.f_0 = unk_0x2047800436E7B1E2(fVar14, fVar13);
							if (Local_128.f_0 > 30f || Local_128.f_0 < -30f)
							{
								Local_128.f_0 = 0f;
							}
						}
						if (unk_0xA4DB44DF73EF4FE5(unk_0x80AA649904BB5788(), 0))
						{
							if (!unk_0xA4DB44DF73EF4FE5(iVar0, 0))
							{
								iVar0 = unk_0x80AA649904BB5788();
								unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iVar0), &uVar4, &Var7);
								if (unk_0x1AAFFE4111587B35(iVar0, Local_125, (Var7.f_1 + 1.5f), (Var7.f_1 + 1.5f), 3f, 0, 1, 0) || unk_0x1AAFFE4111587B35(iVar0, unk_0xEA0A18B7DA3DAB52(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2), (Var7.f_1 + 1f), (Var7.f_1 + 1f), 3f, 0, 1, 0))
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
										fLocal_79 = unk_0x714F015B4D2DE1DC(iVar0);
										Local_80 = { func_82(Local_125, unk_0xEA0A18B7DA3DAB52(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2)) };
									}
									if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
									{
										unk_0xBB9A2DB94A862D7A(iVar0, Local_80, 1, 0, 0, 1);
										unk_0x99569FEC2425586D(iVar0, fLocal_79);
										unk_0x2D739561304957CC(iVar0, 1084227584);
										unk_0x5591EDE3AADBB92D(iVar0, 1);
									}
								}
							}
						}
						unk_0xB78B81E0A519202F(Local_125, 20f, 2);
						unk_0x7D132824755315B1(Local_125, 20f, 0);
						unk_0x500FFA49AC5ABB1D(Local_125, 2f, 1, 1, 0, 0);
						unk_0xF76E3F775416EF6B(unk_0xD5A676B97920D126(), 1);
						iLocal_64 = unk_0xF21B698F4FCCA3D3(iLocal_85, unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 1, 1, 0);
						if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
						{
							unk_0xD157F7C56C5A2FCC(iLocal_64, unk_0xD5A676B97920D126(), unk_0xF9F732E1B7BD0FE4(unk_0xD5A676B97920D126(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						uLocal_131 = unk_0x0C17C9FDFC9120BD(Local_125, Local_128, 2);
						unk_0x5377255E3660D870(uLocal_131, 0);
						uLocal_132 = unk_0x1A73881FF34FE74D("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x03AFD6D4FDAD7307(uLocal_132, uLocal_131, sLocal_364, cLocal_361);
						unk_0x8DA3061503F2C4C8(unk_0xD5A676B97920D126());
						unk_0xECA52D26609A09F3(unk_0xD5A676B97920D126(), uLocal_131, cLocal_361, sLocal_362, 1000f, -8f, 0, 0, 1148846080, 0);
						if (!unk_0x00B5B0B68211D89B(iLocal_62))
						{
							unk_0x8DA3061503F2C4C8(iLocal_62);
							unk_0xECA52D26609A09F3(iLocal_62, uLocal_131, cLocal_361, sLocal_363, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						unk_0x55EB2099508DD1C3(uLocal_132, 1);
						unk_0xD08D9B79AF63C59F(1, 0, 3000, 1, 0, 0);
						func_34(&uLocal_194, cLocal_103, sLocal_115, 4, 0, 0, 0);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_151++;
					}
					unk_0xC7E06EC513BE0881();
					break;
				
				case 1:
					if ((unk_0xC8FC1161FDD0E597(uLocal_131) && unk_0x2C3B61BDCED77B45(uLocal_131) > 0.9f) || func_80(1000))
					{
						unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
						unk_0xB6AE7C18ADC0F901(0f);
						unk_0x55EB2099508DD1C3(uLocal_132, 0);
						unk_0xAF191D67F49B35C9(uLocal_132, 0);
						func_79();
						if (!unk_0x00B5B0B68211D89B(iLocal_62))
						{
							unk_0x8DA3061503F2C4C8(iLocal_62);
							unk_0xA8C0CC1A37E5B35D(iLocal_62, (iLocal_192 - (iLocal_192 / 10)));
							Var1 = { unk_0xEA0A18B7DA3DAB52(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
							unk_0x87AA1B4BA52B1360(Var1, &(Var1.f_2), 0);
							unk_0xBB9A2DB94A862D7A(iLocal_62, Var1, 1, 0, 0, 1);
							unk_0x5457695C257D1470(iLocal_62, 0);
							Var1 = { unk_0x4F8397C9BFE1A8C5(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
							unk_0x99569FEC2425586D(iLocal_62, Var1.f_2);
							if (iLocal_90 == 4)
							{
								if (func_78(Var1.f_2, 0f, 90f))
								{
									unk_0x456121A0AAC868D4(&uLocal_121);
									unk_0x1D2CBA8F2F00D745(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 0.25f, 0, 1193033728);
									unk_0xEBF1276539CCAA92(0, unk_0x714F015B4D2DE1DC(iLocal_62), 1);
									unk_0xCFE67FBB69F1C410(uLocal_121);
									unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
									unk_0x873418BFBF9A6780(&uLocal_121);
								}
								else
								{
									unk_0x456121A0AAC868D4(&uLocal_121);
									unk_0x1D2CBA8F2F00D745(0, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 0.25f, 0, 1193033728);
									unk_0xEBF1276539CCAA92(0, unk_0x714F015B4D2DE1DC(iLocal_62), 1);
									unk_0xCFE67FBB69F1C410(uLocal_121);
									unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
									unk_0x873418BFBF9A6780(&uLocal_121);
								}
							}
							else
							{
								unk_0x456121A0AAC868D4(&uLocal_121);
								unk_0xEBF1276539CCAA92(0, Var1.f_2, 1);
								unk_0xCFE67FBB69F1C410(uLocal_121);
								unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
								unk_0x873418BFBF9A6780(&uLocal_121);
							}
							unk_0x0501413236B03301(iLocal_62, cLocal_378, 1048576000);
							unk_0xD099DEFB49600743(iLocal_62, joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x7D99F00F48D15ADB(iLocal_62, 1);
						}
						if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
						{
							unk_0x8DA3061503F2C4C8(unk_0xD5A676B97920D126());
							unk_0xCE607BF2D136923E(unk_0xD5A676B97920D126(), 0, 0);
						}
						if (unk_0x7887B64A08364778(iLocal_64))
						{
							unk_0x77CEDAB7C44BFD4E(&iLocal_64);
						}
						if (!unk_0x00B5B0B68211D89B(iLocal_62))
						{
							unk_0xA8C0CC1A37E5B35D(iLocal_62, (iLocal_192 - (iLocal_192 / 10)));
							unk_0x7195C098F080A083(iLocal_62, 1);
						}
						iVar19 = (iLocal_192 / 100);
						iVar19 *= 90;
						unk_0x4EDE34FBADD967A6(0);
						unk_0x7CFA1DBFD0DCBF1D(0, 0, 3, 0);
						func_52(func_107(), 1, iVar19);
						func_51(joaat("rc_wallets_returned"), 1);
						func_183(3);
						func_178();
					}
					else if (unk_0xFC579AD204086219(unk_0xD5A676B97920D126(), joaat("detach")))
					{
						if (!unk_0x00B5B0B68211D89B(iLocal_62) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
						{
							if (unk_0xB77CD66F1DCC743D(iLocal_64, unk_0xD5A676B97920D126()))
							{
								unk_0x4FE8E15113ECBFEF(iLocal_64, 0, 1);
								if (unk_0x300B1E56EE76D45C(iLocal_62))
								{
									unk_0xD157F7C56C5A2FCC(iLocal_64, iLocal_62, unk_0xF9F732E1B7BD0FE4(iLocal_62, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								else
								{
									unk_0xD157F7C56C5A2FCC(iLocal_64, iLocal_62, unk_0xF9F732E1B7BD0FE4(iLocal_62, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
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
					unk_0xC7E06EC513BE0881();
					break;
				}
		}
	}
	else
	{
		func_259();
	}
}

int func_50()
{
	if (Global_15745 == 4)
	{
		if (unk_0x982007D3EB9D85D2())
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
	
	unk_0x5BC7B5709E38CBE0(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB924315F0872835A(iParam0, iVar0, 1);
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_53(Global_101652.f_26993[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
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
					switch (unk_0x0B5EEA126C23F8E6())
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
	iVar5 = (Global_52992[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52992[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52992[iVar2] = 2147483647;
				}
				else
				{
					Global_52992[iVar2] = (Global_52992[iVar2] + iParam3);
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
				if ((Global_52992[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52992[iVar2];
			Global_52992[iVar2] = (Global_52992[iVar2] - iParam3);
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
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101652.f_19507.f_233[iVar2 /*69*/]++;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_1++;
		if (Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_55(iParam0);
	if (Global_35777 == 15)
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
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53000[iVar0 /*3*/][0] = Global_101652.f_19507[iVar0];
		Global_53000.f_31[iVar0 /*3*/][0] = Global_101652.f_19507.f_11[iVar0];
		Global_53000.f_62[iVar0 /*3*/][0] = Global_101652.f_19507.f_22[iVar0];
		Global_53000.f_93[iVar0 /*3*/][0] = Global_101652.f_19507.f_33[iVar0];
		Global_53000.f_124[iVar0 /*3*/][0] = Global_101652.f_19507.f_44[iVar0];
		Global_53000.f_155[iVar0 /*3*/][0] = Global_101652.f_19507.f_55[iVar0];
		Global_53000.f_186[iVar0 /*3*/][0] = Global_101652.f_19507.f_66[iVar0];
		Global_53000.f_217[iVar0 /*3*/][0] = Global_101652.f_19507.f_77[iVar0];
		Global_53000.f_248[iVar0 /*3*/][0] = Global_101652.f_19507.f_88[iVar0];
		if (!bParam0)
		{
			Global_53000[iVar0 /*3*/][1] = Global_101652.f_19507[iVar0];
			Global_53000.f_31[iVar0 /*3*/][1] = Global_101652.f_19507.f_11[iVar0];
			Global_53000.f_62[iVar0 /*3*/][1] = Global_101652.f_19507.f_22[iVar0];
			Global_53000.f_93[iVar0 /*3*/][1] = Global_101652.f_19507.f_33[iVar0];
			Global_53000.f_124[iVar0 /*3*/][1] = Global_101652.f_19507.f_44[iVar0];
			Global_53000.f_155[iVar0 /*3*/][1] = Global_101652.f_19507.f_55[iVar0];
			Global_53000.f_186[iVar0 /*3*/][1] = Global_101652.f_19507.f_66[iVar0];
			Global_53000.f_217[iVar0 /*3*/][1] = Global_101652.f_19507.f_77[iVar0];
			Global_53000.f_248[iVar0 /*3*/][1] = Global_101652.f_19507.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52992[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB924315F0872835A(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xB924315F0872835A(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xB924315F0872835A(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_56(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1995B52453EF6537())
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x4EA098C870B73AB7(&(Global_101652.f_19507.f_471), iParam0);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0) || unk_0xF44A5E894FE76438(Global_2097152[func_58() /*10730*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x4EA098C870B73AB7(&(Global_101652.f_19507.f_471), iParam0);
		unk_0x4EA098C870B73AB7(&(Global_2097152[func_58() /*10730*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x053CD3063CA9436C("COUP_RED");
		unk_0xB1953EBEF4D6BD85(func_57(iParam0));
		unk_0xF60216C118DDDFE5(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x1995B52453EF6537())
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0);
	}
	return unk_0xF44A5E894FE76438(Global_2097152[func_58() /*10730*/].f_7546.f_10, iParam0);
}

int func_61(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xC588321444C4C223(27))
	{
		return 0;
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x5BC7B5709E38CBE0(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xB924315F0872835A(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0xC588321444C4C223(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25431 != 0 && !Global_69697)
	{
		return 0;
	}
	if (func_73(&Global_2595490))
	{
		if (func_71(&Global_2595490, iParam0))
		{
			return 0;
		}
		if (func_64(&Global_2595490, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x2CA29E16C343CE86(iParam0))
		{
			return 0;
		}
		if (unk_0xC588321444C4C223(iParam0))
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
	
	if (unk_0xC588321444C4C223(iParam1))
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
	
	if (unk_0xC588321444C4C223(iParam1))
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
	func_69(uParam0, (Global_2595489 - 0.5f));
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
	iVar0 = unk_0x17E2C0D492B3FF29(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xFEDB818053A2C006(iParam0, iParam1);
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
	if (Global_51560[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1995B52453EF6537())
	{
		return;
	}
	if (Global_51560[iParam0 /*7*/])
	{
		unk_0x5BC7B5709E38CBE0(Global_51560[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB924315F0872835A(Global_51560[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_77()
{
	int iVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		unk_0x5BC7B5709E38CBE0(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52992[0] == iVar0)
		{
			Global_52992[0] = iVar0;
		}
		unk_0x5BC7B5709E38CBE0(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52992[1] == iVar0)
		{
			Global_52992[1] = iVar0;
		}
		unk_0x5BC7B5709E38CBE0(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52992[2] == iVar0)
		{
			Global_52992[2] = iVar0;
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
	
	uVar0 = unk_0xAEBECA050C9EB021(26379945, unk_0x7E140C583F91AE2B(unk_0xD5A676B97920D126(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0x714F015B4D2DE1DC(unk_0xD5A676B97920D126()), 1115815936, 1, 2);
	unk_0x55EB2099508DD1C3(uVar0, 1);
}

int func_80(int iParam0)
{
	if (unk_0x8AFBC859AA63D3D7())
	{
		if ((unk_0x84A97C70FFDEC0C8() - Global_28) > iParam0)
		{
			Global_27 = unk_0x84A97C70FFDEC0C8();
		}
		Global_28 = unk_0x84A97C70FFDEC0C8();
		if ((unk_0x84A97C70FFDEC0C8() - Global_27) > iParam0)
		{
			if (func_81())
			{
				Global_27 = unk_0x84A97C70FFDEC0C8();
				return 1;
			}
		}
	}
	return 0;
}

int func_81()
{
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (unk_0x3CEEA45E4779F6BD(0, 18) || unk_0x3CEEA45E4779F6BD(2, 18))
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
	iVar0 = unk_0x80AA649904BB5788();
	if (!unk_0x2A29BF08180E7ADF(iVar0))
	{
		unk_0xC53606C390BE2727(iVar0, 1, 0);
	}
	unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iVar0), &Var7, &Var10);
	unk_0x3A6A7A8FACA42CE3(Param0, 3, &Var4, 1, 1077936128, 0);
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x7E140C583F91AE2B(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x7E140C583F91AE2B(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0x7E140C583F91AE2B(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0x7E140C583F91AE2B(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				if (unk_0x7887B64A08364778(iVar0))
				{
					if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
					{
						Var22 = { func_83(Var1, 0f, Var10) };
						Var25 = { func_83(Var1, 0f, Var7) };
						uVar29 = unk_0xE819DF1A8AD7E307(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0xEE7715D6C4A7B1F2(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0x8E92CDAEB8357ABD(Var1, Param0, 1) <= 5f || unk_0x8E92CDAEB8357ABD(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x7E140C583F91AE2B(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x7E140C583F91AE2B(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0x7E140C583F91AE2B(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0x7E140C583F91AE2B(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				if (unk_0x7887B64A08364778(iVar0))
				{
					if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
					{
						Var22 = { func_83(Var1, 0f, Var10) };
						Var25 = { func_83(Var1, 0f, Var7) };
						uVar29 = unk_0xE819DF1A8AD7E307(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0xEE7715D6C4A7B1F2(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0x8E92CDAEB8357ABD(Var1, Param0, 1) <= 5f || unk_0x8E92CDAEB8357ABD(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x7E140C583F91AE2B(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x7E140C583F91AE2B(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0x7E140C583F91AE2B(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x7E140C583F91AE2B(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0x7887B64A08364778(iVar0))
				{
					if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
					{
						Var22 = { func_83(Var1, 0f, Var10) };
						Var25 = { func_83(Var1, 0f, Var7) };
						uVar29 = unk_0xE819DF1A8AD7E307(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0xEE7715D6C4A7B1F2(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0x8E92CDAEB8357ABD(Var1, Param0, 1) <= 5f || unk_0x8E92CDAEB8357ABD(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x7E140C583F91AE2B(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x7E140C583F91AE2B(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0x7E140C583F91AE2B(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x7E140C583F91AE2B(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0x7887B64A08364778(iVar0))
				{
					if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
					{
						Var22 = { func_83(Var1, 0f, Var10) };
						Var25 = { func_83(Var1, 0f, Var7) };
						uVar29 = unk_0xE819DF1A8AD7E307(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0xEE7715D6C4A7B1F2(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0x8E92CDAEB8357ABD(Var1, Param0, 1) <= 5f || unk_0x8E92CDAEB8357ABD(Var1, Param3, 1) <= 5f)
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
	*uParam1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
	uParam2->f_2 = func_86(iParam0, unk_0xD5A676B97920D126(), 1);
	fVar3 = func_86(iParam0, unk_0xD5A676B97920D126(), 1);
	fVar4 = func_86(iParam0, unk_0xD5A676B97920D126(), 1);
	Var16 = { unk_0xC086F8D75730FA3A(iParam0, 0) - unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
	if (unk_0xD7669BF035CDA5F6(cParam3))
	{
		Var13 = { unk_0xEA0A18B7DA3DAB52(cParam3, sParam4, *uParam1, *uParam2, 0, 2) };
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
					uParam2->f_2 = func_85(unk_0xC086F8D75730FA3A(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0x0A0C20E171493CD0(unk_0xC086F8D75730FA3A(iParam0, 0), uParam2->f_2, Var16) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = unk_0xF9A18E213C1E726D(*uParam1, Var13 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0xEE7715D6C4A7B1F2(uVar5, &iVar6, &Var10, &uVar7, &uVar19) == 2)
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
							*uParam1 = { unk_0x0A0C20E171493CD0(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), fVar4, Var16) };
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
		fVar0 = unk_0x2047800436E7B1E2(fVar1, fVar2);
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
	
	Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	Var3 = { unk_0xC086F8D75730FA3A(iParam1, 0) };
	return func_85(Var0, Var3, iParam2);
}

void func_87(struct<3> Param0, var uParam3, var uParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) - Param0 };
		fVar4 = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
		if (func_88(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
		fVar4 = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
		if (func_88(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x78D3CDB884C74FEB(unk_0xD5A676B97920D126()) > 30f)
		{
			*uParam3 = (6f * 4f);
		}
		else if (unk_0x78D3CDB884C74FEB(unk_0xD5A676B97920D126()) > 20f)
		{
			*uParam3 = (6f * 3f);
		}
		else if (unk_0x78D3CDB884C74FEB(unk_0xD5A676B97920D126()) > 10f)
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
	
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		fVar0 = unk_0x714F015B4D2DE1DC(iParam0);
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
	Global_14611 = 0;
	func_90();
}

void func_90()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
	}
}

int func_91(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x2A29D86854DC4BC0(0, 71, 1);
	unk_0x2A29D86854DC4BC0(0, 72, 1);
	unk_0x2A29D86854DC4BC0(0, 76, 1);
	unk_0x2A29D86854DC4BC0(0, 73, 1);
	unk_0x2A29D86854DC4BC0(0, 59, 1);
	unk_0x2A29D86854DC4BC0(0, 60, 1);
	if (bParam5)
	{
		unk_0x2A29D86854DC4BC0(0, 75, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 80, 1);
	if (!bParam6)
	{
		unk_0x2A29D86854DC4BC0(0, 69, 1);
		unk_0x2A29D86854DC4BC0(0, 70, 1);
		unk_0x2A29D86854DC4BC0(0, 68, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 74, 1);
	unk_0x2A29D86854DC4BC0(0, 86, 1);
	unk_0x2A29D86854DC4BC0(0, 81, 1);
	unk_0x2A29D86854DC4BC0(0, 82, 1);
	unk_0x2A29D86854DC4BC0(0, 138, 1);
	unk_0x2A29D86854DC4BC0(0, 136, 1);
	unk_0x2A29D86854DC4BC0(0, 114, 1);
	unk_0x2A29D86854DC4BC0(0, 107, 1);
	unk_0x2A29D86854DC4BC0(0, 110, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 87, 1);
	unk_0x2A29D86854DC4BC0(0, 88, 1);
	unk_0x2A29D86854DC4BC0(0, 113, 1);
	unk_0x2A29D86854DC4BC0(0, 115, 1);
	unk_0x2A29D86854DC4BC0(0, 116, 1);
	unk_0x2A29D86854DC4BC0(0, 117, 1);
	unk_0x2A29D86854DC4BC0(0, 118, 1);
	unk_0x2A29D86854DC4BC0(0, 119, 1);
	unk_0x2A29D86854DC4BC0(0, 131, 1);
	unk_0x2A29D86854DC4BC0(0, 132, 1);
	unk_0x2A29D86854DC4BC0(0, 123, 1);
	unk_0x2A29D86854DC4BC0(0, 126, 1);
	unk_0x2A29D86854DC4BC0(0, 129, 1);
	unk_0x2A29D86854DC4BC0(0, 130, 1);
	unk_0x2A29D86854DC4BC0(0, 133, 1);
	unk_0x2A29D86854DC4BC0(0, 134, 1);
	unk_0x6CE614A8ED95A6CF();
	func_92(iParam0);
	if ((unk_0x84A97C70FFDEC0C8() - Global_29) > 500)
	{
		unk_0xF351193474DA13BB(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x84A97C70FFDEC0C8();
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (unk_0xC3D3EC28F0EB3C6D(unk_0x78D3CDB884C74FEB(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_92(int iParam0)
{
	if (unk_0x36D782F68B309BDA(iParam0))
	{
		if (unk_0x3D34E80EED4AE3BE(iParam0))
		{
			unk_0x81E1552E35DC3839(iParam0, false);
		}
	}
}

void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xED2B6BABD1851525(unk_0xFB6B3EEFAB2DD12C());
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 1);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 1);
		func_101(1);
		unk_0xA66D8B0C391B7E6A();
		unk_0x8D4260E505305DB8();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x982007D3EB9D85D2())
			{
				unk_0x73998CD31AEFA620(0);
			}
			if (!func_38())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_100(1, iParam3, iParam2, 0);
		Global_55824 = 1;
		Global_68130 = 1;
		Global_69695 = 1;
	}
	else
	{
		func_101(0);
		unk_0xEC2FD1C3670ADE14();
		Global_55824 = 0;
		if (bParam1)
		{
			unk_0xBD0FB22CD565973B();
		}
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 0);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 0);
		func_100(0, iParam3, iParam2, 0);
		if (unk_0x1995B52453EF6537())
		{
			if (((!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_98(unk_0xFB6B3EEFAB2DD12C())) && !func_95(unk_0xFB6B3EEFAB2DD12C(), 0)) && !func_94())
			{
				unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
			}
		}
		else if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_98(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
		}
		Global_69695 = 0;
	}
}

bool func_94()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

bool func_95(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_96(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
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

int func_97()
{
	return Global_1312731;
}

int func_98(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		return 1;
	}
	if (func_99())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_99()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

int func_100(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0xD1F53A5D24CA94D7() != iParam0 && uParam2)
		{
			unk_0x8AA8D29EBC93F521(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_101(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 13);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 13);
	}
}

int func_102()
{
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (func_146())
		{
			return 1;
		}
	}
	return 0;
}

int func_103(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94EB20429840304E())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
		{
			return 0;
		}
		iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if (bParam0)
		{
			if (unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				if (unk_0x98BE504E8B389665(iVar0, -1, 0) != unk_0xD5A676B97920D126())
				{
					return 0;
				}
			}
		}
		if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
		{
			if (unk_0x6016987E9628A7F6(iVar0) < 0.95f || unk_0x6016987E9628A7F6(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (!unk_0x120A59070FBE9283(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	return 1;
}

bool func_104(int iParam0)
{
	return func_28(func_105(iParam0));
}

char* func_105(int iParam0)
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

int func_106(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x5BC7B5709E38CBE0(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x5BC7B5709E38CBE0(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x5BC7B5709E38CBE0(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_107()
{
	func_108();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_108()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_111(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_110(unk_0xD5A676B97920D126());
			if (func_109(iVar0) && (!func_41(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_109(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_109(int iParam0)
{
	return iParam0 < 3;
}

int func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_111(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_111(int iParam0)
{
	if (func_109(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_112()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		unk_0xBB8F1D58B7578137(iLocal_62, unk_0xD5A676B97920D126(), 150f, -1, 0, 0);
		unk_0x7D99F00F48D15ADB(iLocal_62, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_113()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 3f, 3f, 3f };
	Var3 = { -3f, -3f, -3f };
	if (unk_0x00B5B0B68211D89B(iLocal_62))
	{
		return 1;
	}
	else
	{
		if (unk_0x7D720C677145C91C(iLocal_62, unk_0xD5A676B97920D126(), 1))
		{
			return 1;
		}
		if (unk_0x1DEB1994A3C25E35(unk_0x6DE9A8183DA7678E(iLocal_62, 31086, 0f, 0f, 0f), 5f, 1))
		{
			return 1;
		}
		Var0 = { Var0 + unk_0x6DE9A8183DA7678E(iLocal_62, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + unk_0x6DE9A8183DA7678E(iLocal_62, 31086, 0f, 0f, 0f) };
		if ((unk_0xC02F302EE238AE9E(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0xC02F302EE238AE9E(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0xC02F302EE238AE9E(Var3, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0xB8BA2B805FCFD11B(unk_0x6DE9A8183DA7678E(iLocal_62, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_114()
{
	if (!unk_0xB529B2A4B7C64D6D(iLocal_62, 0))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iLocal_62, 1)) > (fLocal_165 + 50f))
		{
			func_178();
		}
		else if (func_106(func_107()) < iLocal_192)
		{
			func_178();
		}
	}
}

void func_115()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_62, Global_19, 0, 1, 0))
		{
			unk_0x0988FFC0C75637DF(unk_0xD5A676B97920D126(), iLocal_62, 3000, 0, 2);
			unk_0x0988FFC0C75637DF(iLocal_62, unk_0xD5A676B97920D126(), 3000, 0, 2);
		}
	}
}

void func_116()
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
		if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_166, Local_169, fVar0, 0, 1, 0))
		{
			if (!iLocal_157)
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_62))
				{
					unk_0xBE29918F5B8EC2EF(iLocal_62, unk_0xD5A676B97920D126(), 0);
					iLocal_157 = 1;
					iLocal_158 = 0;
				}
			}
		}
		if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_172, Local_175, fVar0, 0, 1, 0))
		{
			if (!iLocal_158)
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_62))
				{
					unk_0xBE29918F5B8EC2EF(iLocal_62, unk_0xD5A676B97920D126(), 0);
					iLocal_158 = 1;
					iLocal_157 = 0;
				}
			}
		}
		if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_178, Local_181, fVar0, 0, 1, 0))
		{
			if (!iLocal_159)
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_62))
				{
					iLocal_159 = 1;
				}
			}
		}
	}
	if (!iLocal_160)
	{
		if (!unk_0x00B5B0B68211D89B(iLocal_62))
		{
			if (unk_0x108650178993C477(iLocal_62, unk_0xD5A676B97920D126(), 25f, 25f, 5f, 0, 1, 0) && unk_0xE0BF2ADAFF3231B4(iLocal_62, unk_0xD5A676B97920D126(), 17))
			{
				if (func_34(&uLocal_194, cLocal_103, sLocal_108, 4, 0, 0, 0) || func_50())
				{
					if (!unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, "flee_forward_outro_shopkeeper", 3))
					{
						unk_0x456121A0AAC868D4(&uLocal_121);
						unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
						if (iLocal_47 == 2)
						{
							unk_0x290A57C93304EF16(0, cLocal_377, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0xCFE67FBB69F1C410(uLocal_121);
						unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
						unk_0x873418BFBF9A6780(&uLocal_121);
						iLocal_160 = 1;
					}
				}
			}
		}
	}
}

void func_117(int iParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x00B5B0B68211D89B(iParam0))
			{
				unk_0x456121A0AAC868D4(&uLocal_121);
				unk_0x0988FFC0C75637DF(0, unk_0xD5A676B97920D126(), -1, 0, 2);
				unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
				unk_0xCFE67FBB69F1C410(uLocal_121);
				unk_0x8B06B801B92CEC2D(iParam0, uLocal_121);
				unk_0x873418BFBF9A6780(&uLocal_121);
				unk_0xC1B1E9A034A63A62(0);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0x00B5B0B68211D89B(iParam0))
			{
				if (unk_0x205B4FC17ACAF4C8(iParam0, unk_0xD5A676B97920D126(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x00B5B0B68211D89B(iParam0))
			{
				if (!unk_0x205B4FC17ACAF4C8(iParam0, unk_0xD5A676B97920D126(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_118()
{
	if (unk_0x2AF1AA33AF4A723D(uLocal_191))
	{
		if (!unk_0xB529B2A4B7C64D6D(iLocal_62, 0))
		{
			fLocal_165 = unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iLocal_62, 1));
		}
		func_51(joaat("rc_wallets_recovered"), 1);
		unk_0xC7F64221BCBF71EE(0, 200, 250);
		if (unk_0x7887B64A08364778(iLocal_64))
		{
			unk_0x77CEDAB7C44BFD4E(&iLocal_64);
		}
		func_121();
		func_120(&uLocal_392);
		if (unk_0x7887B64A08364778(iLocal_62))
		{
			if (!unk_0x00B5B0B68211D89B(iLocal_62))
			{
				unk_0x9F353D236E4C6FF4(iLocal_62, 0);
			}
		}
		func_126(0);
		unk_0x21B0DFDAD96C837D(uLocal_191);
		if (!iLocal_56)
		{
			iLocal_48 = 5;
			func_119(2);
		}
		else
		{
			iLocal_48 = 12;
		}
	}
}

void func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101652.f_23938.f_2 < 3)
			{
				if (!unk_0xC3D14EA5FB0933FE())
				{
					func_12(func_105(iParam0), -1);
					Global_101652.f_23938.f_2++;
					unk_0xB8A73E7DA87B2968(&Global_101648, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_101648, 1))
			{
				if (!unk_0xC3D14EA5FB0933FE())
				{
					func_12(func_105(iParam0), -1);
					Global_101652.f_23938.f_3++;
					unk_0xB8A73E7DA87B2968(&Global_101648, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_101648, 2))
			{
				if (!unk_0xC3D14EA5FB0933FE())
				{
					func_12(func_105(iParam0), -1);
					Global_101652.f_23938.f_4++;
					unk_0xB8A73E7DA87B2968(&Global_101648, 2);
				}
			}
			break;
	}
}

void func_120(var uParam0)
{
	*uParam0 = -99;
}

void func_121()
{
	iLocal_67 = 0;
	if (!unk_0x6901135DDCC4904D(iLocal_65))
	{
		if (!unk_0xB529B2A4B7C64D6D(iLocal_62, 0))
		{
			iLocal_65 = func_122(iLocal_62, 0, 0);
		}
	}
}

int func_122(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_123(iParam0, bParam1, 145);
}

int func_123(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_124(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x6901135DDCC4904D(uVar0)) && unk_0xA6AD4206830E160C(&(Global_101652.f_26993[iParam2 /*29*/].f_3)))
	{
		unk_0x2EDAF851B28036F0(iVar0, &(Global_101652.f_26993[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7887B64A08364778(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x890C68C377CE0CA4(iParam0);
	if (unk_0x8041FE602D4689B1(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_125(unk_0x1995B52453EF6537(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
		}
		else
		{
			unk_0x4F095059F1C175D5(iVar0, 2);
		}
	}
	else if (unk_0x6DA4D1391A7B813F(iParam0))
	{
		unk_0xF563C3AC64885E69(iVar0, func_125(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
		unk_0x1BDDADB5ACDFD382(iVar0, bParam1);
	}
	else if (unk_0x8E0E23664261A6B9(iParam0))
	{
		unk_0xF563C3AC64885E69(iVar0, func_125(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_125(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_126(bool bParam0)
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62) && iLocal_90 == 4)
	{
		if (unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0x456121A0AAC868D4(&uLocal_121);
			unk_0x290A57C93304EF16(0, cLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x0988FFC0C75637DF(0, unk_0xD5A676B97920D126(), -1, 0, 2);
			if (bParam0)
			{
				unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			unk_0xCFE67FBB69F1C410(uLocal_121);
			unk_0x37338B7B7C4982DC(iLocal_62);
			unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
			unk_0x873418BFBF9A6780(&uLocal_121);
		}
	}
}

int func_127()
{
	if (unk_0x7887B64A08364778(iLocal_64))
	{
		if (unk_0x4FAD9D28DF12811B(iLocal_64))
		{
			if (!unk_0x00B5B0B68211D89B(iLocal_62))
			{
				if (unk_0xB77CD66F1DCC743D(iLocal_64, iLocal_62))
				{
					if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_62, 18f, 18f, 18f, 0, 1, 0))
					{
						if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
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

void func_128(int iParam0, var uParam1)
{
	if (unk_0x6901135DDCC4904D(uParam0))
	{
		if (unk_0x84A97C70FFDEC0C8() > *uParam1 + 500)
		{
			if (unk_0xDB44BCF552894B8E(iParam0) == 1)
			{
				unk_0x1BDDADB5ACDFD382(iParam0, true);
			}
			else
			{
				unk_0x1BDDADB5ACDFD382(iParam0, false);
				unk_0x4F095059F1C175D5(iParam0, 1);
			}
			*uParam1 = unk_0x84A97C70FFDEC0C8();
		}
		if (!unk_0xA14FC57CB26C2B67() && func_129(0))
		{
			func_119(1);
		}
	}
}

bool func_129(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_101648, iParam0);
}

void func_130()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_62, 8f, 8f, 18f, 0, 1, 0) || unk_0xBB5DD90D4926F21A(iLocal_62))
		{
			unk_0x59C0D363E5A5B548();
		}
	}
}

void func_131()
{
	if (unk_0x6901135DDCC4904D(iLocal_66))
	{
		unk_0x8A3D7569826A325D(&iLocal_66);
	}
	if (unk_0x7887B64A08364778(iLocal_64))
	{
		if (unk_0x4FAD9D28DF12811B(iLocal_64))
		{
			unk_0x4FE8E15113ECBFEF(iLocal_64, 1, 1);
			unk_0x77CEDAB7C44BFD4E(&iLocal_64);
			func_32();
		}
	}
	else
	{
		func_32();
	}
	if (!unk_0x00B5B0B68211D89B(iLocal_63))
	{
		if (func_34(&uLocal_194, cLocal_103, sLocal_107, 4, 0, 0, 0) || func_50())
		{
			if (iLocal_47 == 2)
			{
				unk_0x738326127C161284(iLocal_63, 128, 1);
				unk_0x738326127C161284(iLocal_63, 2, 1);
				unk_0x738326127C161284(iLocal_63, 1, 0);
				unk_0xBB8F1D58B7578137(iLocal_63, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
			}
			unk_0x7D99F00F48D15ADB(iLocal_63, 1);
		}
	}
}

int func_132()
{
	if (!unk_0xB529B2A4B7C64D6D(iLocal_63, 0))
	{
		if (unk_0x7D720C677145C91C(iLocal_63, unk_0xD5A676B97920D126(), 1))
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

void func_133()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		unk_0x37338B7B7C4982DC(iLocal_62);
		unk_0xBB8F1D58B7578137(iLocal_62, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
		unk_0x7D99F00F48D15ADB(iLocal_62, 1);
		unk_0x4EDE34FBADD967A6(0);
		unk_0xD4B3FF1E63C36391(&iLocal_62);
	}
	if (!unk_0x00B5B0B68211D89B(iLocal_63))
	{
		func_34(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
		unk_0x456121A0AAC868D4(&uLocal_121);
		unk_0x0565F5F2EE81A23F(0);
		unk_0x182DAF81B229194E(0, unk_0xD5A676B97920D126(), 0, 16);
		unk_0xCFE67FBB69F1C410(uLocal_121);
		unk_0x8B06B801B92CEC2D(iLocal_63, uLocal_121);
		unk_0x873418BFBF9A6780(&uLocal_121);
		unk_0x7D99F00F48D15ADB(iLocal_63, 1);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x6D20A3AA82585D8C(iLocal_63, 0);
		unk_0xD4B3FF1E63C36391(&iLocal_63);
	}
}

int func_134()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (unk_0x9B0C8A2FC23E64AB(iLocal_62))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(var uParam0)
{
	return func_136(uParam0);
}

int func_136(var uParam0)
{
	var uVar0;
	
	if (!unk_0x233F1CC43F061218(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x329383403A367356(uParam0);
	unk_0xF563C3AC64885E69(uVar0, func_125(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
	return iVar0;
}

int func_137()
{
	if (unk_0x233F1CC43F061218(uLocal_191))
	{
		if (unk_0xC4C60D7BF2D65D2D(uLocal_191))
		{
			if (unk_0x7887B64A08364778(iLocal_63))
			{
				if (!unk_0xB529B2A4B7C64D6D(iLocal_63, 0))
				{
					if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
					{
						if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_63, 18f, 18f, 18f, 0, 1, 0) || unk_0x7D720C677145C91C(iLocal_63, unk_0xD5A676B97920D126(), 1))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_143 = 1;
							return 1;
						}
					}
				}
				if (func_138())
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_143 = 2;
					return 1;
				}
				if (unk_0x00B5B0B68211D89B(iLocal_63))
				{
					if (unk_0x7D720C677145C91C(iLocal_63, unk_0xD5A676B97920D126(), 1))
					{
						if (unk_0x7887B64A08364778(iLocal_62))
						{
							if (!unk_0x00B5B0B68211D89B(iLocal_62))
							{
								unk_0x37338B7B7C4982DC(iLocal_62);
								unk_0x9F353D236E4C6FF4(iLocal_62, 0);
							}
						}
						unk_0x5AE11BC36633DE4E(0);
						iLocal_143 = 2;
						return 1;
					}
				}
				else if (unk_0x7D720C677145C91C(iLocal_63, unk_0xD5A676B97920D126(), 1))
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_143 = 2;
					if (unk_0x7887B64A08364778(iLocal_62))
					{
						if (!unk_0x00B5B0B68211D89B(iLocal_62))
						{
							unk_0x37338B7B7C4982DC(iLocal_62);
							unk_0x9F353D236E4C6FF4(iLocal_62, 0);
						}
					}
					if (!unk_0x00B5B0B68211D89B(iLocal_63))
					{
						unk_0x37338B7B7C4982DC(iLocal_63);
						unk_0xBB8F1D58B7578137(iLocal_63, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
						unk_0x7D99F00F48D15ADB(iLocal_63, 1);
						unk_0x6D20A3AA82585D8C(iLocal_63, 0);
						unk_0xD4B3FF1E63C36391(&iLocal_63);
					}
					return 1;
				}
			}
			if (unk_0x7887B64A08364778(iLocal_62))
			{
				if (!unk_0xB529B2A4B7C64D6D(iLocal_62, 0))
				{
					if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_62, 5.3f, 5.3f, 6f, 0, 1, 0))
					{
						if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
						{
							if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iLocal_62) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iLocal_62))
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

int func_138()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_63))
	{
		if (unk_0x7F70E3EF57F17B9B(iLocal_63, unk_0xD5A676B97920D126()) && unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_63, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
			{
				if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iLocal_63) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iLocal_63))
				{
					return 1;
				}
			}
		}
		if (unk_0x7465CE9EA67018C5(unk_0xD5A676B97920D126()))
		{
			return 1;
		}
		if (unk_0x9B0C8A2FC23E64AB(iLocal_63))
		{
			return 1;
		}
	}
	return 0;
}

void func_139()
{
	if (iLocal_58)
	{
		if (!iLocal_59)
		{
			if (!unk_0x00B5B0B68211D89B(iLocal_63))
			{
				if (unk_0xB3EED8E53275CA90(iLocal_63, 4))
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
	else if (func_138())
	{
		if ((func_34(&uLocal_194, cLocal_103, sLocal_116, 4, 0, 0, 0) || func_50()) || func_50())
		{
			if (unk_0xB3EED8E53275CA90(iLocal_63, 4))
			{
				unk_0x182DAF81B229194E(iLocal_63, unk_0xD5A676B97920D126(), 0, 16);
			}
			else
			{
				func_131();
			}
			iLocal_58 = 1;
		}
	}
}

int func_140()
{
	int iVar0;
	
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 7))
		{
			if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_62, 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iLocal_62) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iLocal_62))
				{
					return 1;
				}
			}
		}
		if (unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar0, 1))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (unk_0x2A4F3847B8887B65(iLocal_62, joaat("weapon_stungun"), 0))
				{
					return 1;
				}
			}
		}
		if (unk_0x7D720C677145C91C(iLocal_62, unk_0xD5A676B97920D126(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x1DEB1994A3C25E35(unk_0x6DE9A8183DA7678E(iLocal_62, 31086, 0f, 0f, 0f), 3f, 1))
	{
		return 1;
	}
	return 0;
}

void func_141()
{
	if (iLocal_47 == 2)
	{
	}
	if (!func_146())
	{
		if (unk_0x83666F9FB8FEBD4B() > 10000)
		{
			if (!unk_0x00B5B0B68211D89B(iLocal_62))
			{
				if (!unk_0x821399740730B4B6(iLocal_62))
				{
					func_142(iLocal_62, "GENERIC_CURSE_MED", 24);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
		}
	}
	if (!bLocal_60)
	{
		if (func_30(unk_0xD5A676B97920D126(), iLocal_63, 1) > 200f)
		{
			if (!unk_0xBB5DD90D4926F21A(iLocal_63) || unk_0x27A556D1AF39812E(iLocal_63))
			{
				iLocal_48 = 8;
			}
		}
	}
}

void func_142(int iParam0, char* sParam1, int iParam2)
{
	unk_0x66D323B3A964108A(iParam0, sParam1, func_143(iParam2), 1);
}

int func_143(int iParam0)
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

void func_144()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (!bLocal_53)
		{
			if (unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, "flee_backward_loop_shopkeeper", 3))
			{
				unk_0x456121A0AAC868D4(&uLocal_121);
				unk_0x290A57C93304EF16(0, cLocal_359, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0x0988FFC0C75637DF(0, unk_0xD5A676B97920D126(), -1, 0, 2);
				unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0xCFE67FBB69F1C410(uLocal_121);
				unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
				unk_0x873418BFBF9A6780(&uLocal_121);
				iLocal_164 = 3;
				bLocal_53 = true;
			}
			else if (unk_0xEBA40DFF7CCE3511(iLocal_62, cLocal_359, "flee_forward_loop_shopkeeper", 3))
			{
				unk_0x456121A0AAC868D4(&uLocal_121);
				unk_0x290A57C93304EF16(0, cLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0x0988FFC0C75637DF(0, unk_0xD5A676B97920D126(), -1, 0, 2);
				unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0xCFE67FBB69F1C410(uLocal_121);
				unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
				unk_0x873418BFBF9A6780(&uLocal_121);
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
				if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_62, 7f, 7f, 7f, 0, 1, 0))
				{
					if (unk_0x1774A68441553185(iLocal_62, 242628503) == 1)
					{
						if (unk_0x7F56260A7B7D8FF1(iLocal_62) == iLocal_164)
						{
							unk_0x0988FFC0C75637DF(iLocal_62, unk_0xD5A676B97920D126(), 9000, 0, 2);
							func_34(&uLocal_194, cLocal_103, sLocal_106, 4, 0, 0, 0);
							bLocal_155 = true;
							iLocal_136 = 1;
						}
					}
					else
					{
						unk_0xBE1D89447A1203C9(iLocal_62, 1);
						func_34(&uLocal_194, cLocal_103, sLocal_106, 4, 0, 0, 0);
						unk_0x456121A0AAC868D4(&uLocal_121);
						unk_0x0988FFC0C75637DF(0, unk_0xD5A676B97920D126(), 7000, 0, 2);
						unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 7000);
						unk_0xCFE67FBB69F1C410(uLocal_121);
						unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
						unk_0x873418BFBF9A6780(&uLocal_121);
						unk_0xC1B1E9A034A63A62(0);
						bLocal_155 = true;
						iLocal_136 = 1;
					}
				}
			}
		}
	}
}

int func_145()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_62, 12f, 12f, 5f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_146()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

void func_147()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (!bLocal_134)
		{
			iLocal_138 = unk_0x84A97C70FFDEC0C8();
			bLocal_134 = true;
		}
		if (bLocal_134)
		{
			iLocal_139 = unk_0x84A97C70FFDEC0C8();
			if (!iLocal_54)
			{
				if ((iLocal_139 - iLocal_138) > 500)
				{
					if (!func_146())
					{
						if (func_34(&uLocal_194, cLocal_103, sLocal_105, 4, 0, 0, 0) || func_50())
						{
							if (iLocal_47 == 2)
							{
								if (!unk_0x00B5B0B68211D89B(iLocal_62))
								{
									if (!unk_0x00B5B0B68211D89B(iLocal_63))
									{
									}
								}
							}
							if (iLocal_47 == 1)
							{
								if (!unk_0x00B5B0B68211D89B(iLocal_62))
								{
								}
							}
							if (unk_0x6901135DDCC4904D(iLocal_65))
							{
								unk_0x8A3D7569826A325D(&iLocal_65);
							}
							iLocal_54 = 1;
						}
					}
				}
			}
		}
	}
}

void func_148()
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
			if (!unk_0x00B5B0B68211D89B(iLocal_62) && !unk_0x00B5B0B68211D89B(iLocal_63))
			{
				if (!func_175())
				{
					if (func_162())
					{
						func_259();
					}
				}
				if (func_161())
				{
					if (!unk_0x6901135DDCC4904D(uLocal_68))
					{
						if (!unk_0xB529B2A4B7C64D6D(iLocal_63, 0))
						{
							iLocal_68 = func_122(iLocal_63, 1, 0);
						}
						func_153(1);
					}
				}
				if (func_152())
				{
					func_151();
					if (iLocal_90 == 3)
					{
						if (!iLocal_57)
						{
							unk_0x456121A0AAC868D4(&uLocal_121);
							unk_0x0988FFC0C75637DF(0, iLocal_63, 16000, 0, 2);
							unk_0x1D2CBA8F2F00D745(0, Local_87, 1f, 20000, fVar0, 4, 1193033728);
							unk_0xCFE67FBB69F1C410(uLocal_121);
							unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
							unk_0x873418BFBF9A6780(&uLocal_121);
							iLocal_57 = 1;
						}
						unk_0x456121A0AAC868D4(&uLocal_121);
						unk_0x0988FFC0C75637DF(0, iLocal_62, -1, 0, 2);
						unk_0x290A57C93304EF16(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, 0, 0, 0);
						unk_0x69C25A35C295DB4F(0, Local_87, iLocal_62, 1f, 0, 1.5f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0x50FF381592977875(0, iLocal_62, -1, 1);
						unk_0xCFE67FBB69F1C410(uLocal_121);
						unk_0x8B06B801B92CEC2D(iLocal_63, uLocal_121);
						unk_0x873418BFBF9A6780(&uLocal_121);
						unk_0xC1B1E9A034A63A62(0);
						bLocal_55 = true;
						unk_0xFA5E84DCAE200259(0f);
					}
					else
					{
						if (iLocal_90 == 1)
						{
							sLocal_111 = sLocal_111;
						}
						func_150();
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
				if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_63, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!unk_0xB529B2A4B7C64D6D(iLocal_62, 0))
					{
						unk_0xBE29918F5B8EC2EF(iLocal_62, iLocal_63, 0);
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
			if (!unk_0x00B5B0B68211D89B(iLocal_62) && !unk_0x00B5B0B68211D89B(iLocal_63))
			{
				if (func_34(&uLocal_194, cLocal_103, sLocal_104, 4, 0, 0, 0) || func_50())
				{
					unk_0x37338B7B7C4982DC(iLocal_62);
					unk_0x456121A0AAC868D4(&uLocal_121);
					unk_0x290A57C93304EF16(0, cLocal_359, "handsup_standing_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x290A57C93304EF16(0, cLocal_359, "handsup_standing_base", 8f, -4f, 7000, 0, 0, 0, 0, 0);
					unk_0x290A57C93304EF16(0, cLocal_359, "handsup_standing_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xCFE67FBB69F1C410(uLocal_121);
					unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
					unk_0x873418BFBF9A6780(&uLocal_121);
					func_151();
					uLocal_191 = unk_0xF23FE6356F412D6E(joaat("pickup_money_purse"), unk_0x67B984636E663467(unk_0x7E140C583F91AE2B(iLocal_62, 0f, 2.5f, 0f), 1067030938, 1069547520), uLocal_144, iLocal_192, 1, iLocal_85);
					bLocal_133 = true;
				}
			}
		}
		if (bLocal_133)
		{
			if (unk_0x00B5B0B68211D89B(iLocal_63))
			{
				func_149();
			}
			else
			{
				switch (iLocal_667)
				{
					case 0:
						Local_670 = { unk_0xBF35916D2D6385A0(uLocal_191) - Vector(0f, 0f, 0.75f) };
						if (unk_0xC4C60D7BF2D65D2D(uLocal_191))
						{
							unk_0x37338B7B7C4982DC(iLocal_63);
							unk_0x456121A0AAC868D4(&uLocal_121);
							unk_0x69C25A35C295DB4F(0, Local_670, iLocal_62, 2f, 0, 0.1f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xCFE67FBB69F1C410(uLocal_121);
							unk_0x8B06B801B92CEC2D(iLocal_63, uLocal_121);
							unk_0x873418BFBF9A6780(&uLocal_121);
							iLocal_668 = unk_0x84A97C70FFDEC0C8();
						}
						iLocal_667 = 1;
						break;
					
					case 1:
						if (unk_0x1774A68441553185(iLocal_63, 242628503) == 7)
						{
							Local_670 = { unk_0xBF35916D2D6385A0(uLocal_191) - Vector(0f, 0f, 0.75f) };
							if (unk_0xC4C60D7BF2D65D2D(uLocal_191))
							{
								if (unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(iLocal_63, 1), Local_670, 1) > 1f)
								{
									iLocal_669 = 1;
									iLocal_667 = 4;
								}
								else
								{
									unk_0x37338B7B7C4982DC(iLocal_63);
									unk_0x456121A0AAC868D4(&uLocal_121);
									unk_0x290A57C93304EF16(0, cLocal_360, "pickup_low", 8f, -4f, -1, 8224, 0, 0, 0, 0);
									unk_0xCFE67FBB69F1C410(uLocal_121);
									unk_0x8B06B801B92CEC2D(iLocal_63, uLocal_121);
									unk_0x873418BFBF9A6780(&uLocal_121);
									iLocal_667 = 2;
								}
							}
							else
							{
								iLocal_667 = 4;
							}
						}
						if ((unk_0x84A97C70FFDEC0C8() - iLocal_668) > 15000)
						{
							iLocal_669 = 1;
							iLocal_667 = 4;
						}
						break;
					
					case 2:
						if (unk_0x1F2CF2B9307EAB08(iLocal_63, cLocal_360, "pickup_low") > 0.5f)
						{
							if (unk_0xC4C60D7BF2D65D2D(uLocal_191))
							{
								unk_0x21B0DFDAD96C837D(uLocal_191);
								iLocal_667 = 3;
							}
							else
							{
								iLocal_667 = 4;
							}
						}
						break;
					
					case 3:
						if ((unk_0xEBA40DFF7CCE3511(iLocal_63, cLocal_360, "pickup_low", 3) && unk_0x1F2CF2B9307EAB08(iLocal_63, cLocal_360, "pickup_low") > 0.58f) || !unk_0xEBA40DFF7CCE3511(iLocal_63, cLocal_360, "pickup_low", 3))
						{
							iLocal_667 = 4;
						}
						break;
					
					case 4:
						unk_0x6D20A3AA82585D8C(iLocal_63, 1);
						unk_0xBB8F1D58B7578137(iLocal_63, unk_0xD5A676B97920D126(), 50f, -1, 0, 0);
						unk_0xCE607BF2D136923E(iLocal_63, 0, 0);
						bLocal_149 = true;
						break;
					}
				}
			}
	}
}

void func_149()
{
	if (unk_0x6901135DDCC4904D(iLocal_65))
	{
		unk_0x8A3D7569826A325D(&iLocal_65);
	}
	if (!unk_0x6901135DDCC4904D(iLocal_67))
	{
		if (unk_0x233F1CC43F061218(uLocal_191))
		{
			iLocal_67 = func_135(uLocal_191);
		}
	}
	iLocal_48 = 4;
}

void func_150()
{
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
	}
	if (unk_0x205B4FC17ACAF4C8(iLocal_63, unk_0xD5A676B97920D126(), 90f))
	{
		unk_0x290A57C93304EF16(iLocal_63, cLocal_359, sLocal_367, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_47 == 2)
		{
			unk_0x456121A0AAC868D4(&uLocal_121);
			unk_0x290A57C93304EF16(0, cLocal_359, sLocal_368, 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xCFE67FBB69F1C410(uLocal_121);
			unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
			unk_0x873418BFBF9A6780(&uLocal_121);
		}
		else if (iLocal_90 == 4)
		{
			iLocal_379 = unk_0x09B6187212D7D863(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0, 4);
			unk_0x456121A0AAC868D4(&uLocal_121);
			unk_0x290A57C93304EF16(0, cLocal_359, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, cLocal_359, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0xCFE67FBB69F1C410(uLocal_121);
			unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
			unk_0x873418BFBF9A6780(&uLocal_121);
		}
		else
		{
			unk_0x456121A0AAC868D4(&uLocal_121);
			unk_0x290A57C93304EF16(0, cLocal_359, sLocal_368, 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xCFE67FBB69F1C410(uLocal_121);
			unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
			unk_0x873418BFBF9A6780(&uLocal_121);
		}
	}
	else
	{
		unk_0x290A57C93304EF16(iLocal_63, cLocal_359, sLocal_369, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_47 == 2)
		{
			unk_0x456121A0AAC868D4(&uLocal_121);
			unk_0x290A57C93304EF16(0, cLocal_359, sLocal_370, 8f, -8f, -1, 8, 0.1f, 0, 0, 0);
			unk_0x27102CF7EA2E2000(0, -94.8543f, -1582.686f, 30.2862f, 3000);
			unk_0x290A57C93304EF16(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xCFE67FBB69F1C410(uLocal_121);
			unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
			unk_0x873418BFBF9A6780(&uLocal_121);
		}
		else if (iLocal_90 == 4)
		{
			unk_0x456121A0AAC868D4(&uLocal_121);
			unk_0x290A57C93304EF16(0, cLocal_359, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, cLocal_359, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0xCFE67FBB69F1C410(uLocal_121);
			unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
			unk_0x873418BFBF9A6780(&uLocal_121);
		}
		else
		{
			unk_0x456121A0AAC868D4(&uLocal_121);
			unk_0x290A57C93304EF16(0, cLocal_359, sLocal_370, 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xCFE67FBB69F1C410(uLocal_121);
			unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
			unk_0x873418BFBF9A6780(&uLocal_121);
		}
	}
}

void func_151()
{
	if (unk_0x6901135DDCC4904D(iLocal_68))
	{
		unk_0x8A3D7569826A325D(&iLocal_68);
	}
	if (!unk_0x6901135DDCC4904D(iLocal_66))
	{
		if (!unk_0xB529B2A4B7C64D6D(iLocal_63, 0))
		{
			iLocal_66 = func_122(iLocal_63, 1, 0);
		}
	}
}

int func_152()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_90 == 1)
	{
		if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0, 0, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 2)
	{
		if (unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iLocal_63, 1), 1) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 4)
	{
		if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	else if (unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_153(int iParam0)
{
	if (func_155())
	{
		Global_101642 = 1;
		Global_101639 = unk_0x84A97C70FFDEC0C8();
		if (func_154(Global_101641))
		{
			func_119(0);
		}
		unk_0x2CD0538D8247BA65(1, "RE_TITLE");
		if (iParam0 && func_154(Global_101641))
		{
			unk_0xB77AFA5DEFB190B1();
		}
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
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

int func_155()
{
	switch (func_156(&Global_25244, 0, 5, 0, unk_0x3ED6DDB11A7AD67F()))
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

int func_156(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89297.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_160(0))
		{
			return 0;
		}
		Global_35741++;
		*uParam0 = Global_35741;
		unk_0x680452B13E83C406(unk_0xF3F8195C98263BF5(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x503D3643C5FE49F7(8);
		}
		Global_35777 = iParam2;
		Global_35739 = *uParam0;
		Global_35740 = iParam4;
		Global_35738 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35738 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35738)
			{
				if (Global_35744[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35739 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_158(iParam2))
		{
			return 0;
		}
		if (Global_35738 == 8)
		{
			return 0;
		}
		Global_35741++;
		*uParam0 = Global_35741;
		Global_35744[Global_35738 /*4*/] = Global_35741;
		Global_35744[Global_35738 /*4*/].f_1 = iParam1;
		Global_35744[Global_35738 /*4*/].f_2 = iParam2;
		Global_35744[Global_35738 /*4*/].f_3 = 0;
		Global_35738++;
		if (iParam4 != 0)
		{
			func_157(uParam0, iParam4);
		}
	}
	return 2;
}

void func_157(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35738 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35738)
	{
		if (Global_35744[iVar0 /*4*/] == *uParam0)
		{
			Global_35744[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_158(int iParam0)
{
	return func_159(iParam0, Global_35777);
}

int func_159(int iParam0, int iParam1)
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

int func_160(int iParam0)
{
	if (Global_35777 == 15)
	{
		return 0;
	}
	if (func_158(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_161()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_90 == 1)
	{
		if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0, 0, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 2)
	{
		if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 3)
	{
		if (unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_162()
{
	if (!func_158(5))
	{
		return 1;
	}
	if (func_171())
	{
		return 1;
	}
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x9C0A225C3A240597(unk_0xD5A676B97920D126())) > 1369f && !func_170())
		{
			return 0;
		}
	}
	if (func_163(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_163(float fParam0, bool bParam1)
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
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (func_109(func_107()))
		{
			iVar36 = func_169();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xF44A5E894FE76438(Global_101652.f_17517[iVar32 /*6*/], 2) && !unk_0xF44A5E894FE76438(Global_101652.f_17517[iVar32 /*6*/], 3))
				{
					func_164(iVar32, &Var0);
					fVar35 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Var0.f_6, 1);
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
	cVar2 = { func_168(iParam0) };
	if (unk_0xC55B9553B3EDADE9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_168(int iParam0)
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

int func_169()
{
	func_108();
	switch (Global_101652.f_2079.f_539.f_3549)
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

int func_170()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0x6DAE83305DF67FC4() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_171()
{
	if (func_174() && !func_170())
	{
		return 1;
	}
	if (func_173() && func_172())
	{
		return 1;
	}
	return 0;
}

bool func_172()
{
	return Global_101370 > 0;
}

int func_173()
{
	if (Global_88741 != -1)
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	if (Global_88741 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_82607[Global_88741 /*34*/].f_15, 20);
	}
	return 0;
}

int func_175()
{
	if ((Global_101641 == func_176() && unk_0xC9DD3DCF0C4F247D()) && Global_101642)
	{
		return 1;
	}
	return 0;
}

int func_176()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x0FBCE11007AF301F(), 64);
	uVar16 = func_177(Var0);
	return uVar16;
}

int func_177(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x6D9FF4C899CD785F(&cParam0))
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

void func_178()
{
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		unk_0xFE682A9E4ACDAAA1(unk_0xFB6B3EEFAB2DD12C(), 1);
	}
	func_277(25, iLocal_90);
	func_182();
	func_179();
	func_259();
}

void func_179()
{
	func_180();
}

int func_180()
{
	if (func_181(0))
	{
		return 0;
	}
	if (Global_91525.f_8)
	{
		if (Global_91525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91525.f_10 > 1)
	{
		return 0;
	}
	Global_91525.f_10++;
	return 1;
}

bool func_181(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

int func_182()
{
	return 1;
}

void func_183(int iParam0)
{
	Global_101638 = iParam0;
}

void func_184()
{
	switch (iLocal_140)
	{
		case 0:
			if (!unk_0x00B5B0B68211D89B(iLocal_63))
			{
				unk_0x290A57C93304EF16(iLocal_63, cLocal_359, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			if (!unk_0x00B5B0B68211D89B(iLocal_62))
			{
				unk_0x290A57C93304EF16(iLocal_62, cLocal_361, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			iLocal_140++;
			break;
		
		case 1:
			if (unk_0x7887B64A08364778(iLocal_63))
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_63))
				{
					if (func_161())
					{
						if (!unk_0x6901135DDCC4904D(iLocal_68))
						{
							if (!unk_0xB529B2A4B7C64D6D(iLocal_63, 0))
							{
								iLocal_68 = func_122(iLocal_63, 1, 0);
							}
							if (!func_175())
							{
								func_153(1);
							}
						}
					}
					if (func_152())
					{
						func_34(&uLocal_194, cLocal_103, "REMG2_ARG", 4, 0, 0, 0);
						func_151();
						iLocal_187 = unk_0x84A97C70FFDEC0C8();
						unk_0xFA5E84DCAE200259(0f);
						iLocal_190 = 1;
						iLocal_140++;
					}
				}
				else if (!unk_0x00B5B0B68211D89B(iLocal_62))
				{
					unk_0x7C6B104B5E7A8C41(iLocal_62, Local_145, 250f, -1, 0, 0);
					unk_0x7D99F00F48D15ADB(iLocal_62, 1);
					unk_0x4EDE34FBADD967A6(0);
					func_190();
				}
			}
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (func_189())
				{
					iLocal_140 = 4;
				}
				if (func_138())
				{
					iLocal_140 = 9;
				}
				if (func_188())
				{
					iLocal_140 = 6;
				}
				if (func_187())
				{
					iLocal_140 = 4;
				}
			}
			if (!func_175())
			{
				if (func_162())
				{
					func_259();
				}
			}
			break;
		
		case 2:
			if (unk_0x7887B64A08364778(iLocal_63))
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_63))
				{
					if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_63, 6f, 6f, 15f, 0, 1, 0))
					{
						if (unk_0x7F70E3EF57F17B9B(iLocal_63, unk_0xD5A676B97920D126()) || unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_63, 3f, 3f, 15f, 0, 1, 0))
						{
							if (unk_0x205B4FC17ACAF4C8(unk_0xD5A676B97920D126(), iLocal_63, 65f))
							{
								iLocal_189 = unk_0x84A97C70FFDEC0C8();
								unk_0x0988FFC0C75637DF(iLocal_63, unk_0xD5A676B97920D126(), 7000, 0, 2);
								func_34(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
								unk_0x5AE11BC36633DE4E(0);
								iLocal_140++;
							}
							else
							{
								iLocal_189 = unk_0x84A97C70FFDEC0C8();
								unk_0x0988FFC0C75637DF(iLocal_63, unk_0xD5A676B97920D126(), 7000, 0, 2);
								func_34(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
								unk_0x5AE11BC36633DE4E(0);
								iLocal_140++;
							}
						}
					}
				}
			}
			if (func_189() || func_187())
			{
				iLocal_140 = 4;
			}
			if (func_138())
			{
				iLocal_140 = 9;
			}
			if (func_188())
			{
				iLocal_140 = 6;
			}
			break;
		
		case 3:
			if ((iLocal_188 - iLocal_189) > 12500)
			{
				if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
				{
					iLocal_140 = 4;
				}
			}
			if ((iLocal_188 - iLocal_189) > 5500)
			{
				if (!bLocal_137)
				{
					if (unk_0x7887B64A08364778(iLocal_63))
					{
						if (!unk_0x00B5B0B68211D89B(iLocal_63))
						{
							func_34(&uLocal_194, cLocal_103, sLocal_114, 4, 0, 0, 0);
							unk_0x182DAF81B229194E(iLocal_63, unk_0xD5A676B97920D126(), 0, 16);
							bLocal_137 = true;
							if (unk_0x7887B64A08364778(iLocal_62))
							{
								if (!unk_0x00B5B0B68211D89B(iLocal_62))
								{
									unk_0x7C6B104B5E7A8C41(iLocal_62, Local_145, 250f, -1, 0, 0);
									unk_0x7D99F00F48D15ADB(iLocal_62, 1);
									unk_0x4EDE34FBADD967A6(0);
								}
								if (!unk_0x00B5B0B68211D89B(iLocal_62))
								{
								}
								if (unk_0x6901135DDCC4904D(iLocal_65))
								{
									unk_0x8A3D7569826A325D(&iLocal_65);
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
				if (func_189())
				{
					iLocal_140 = 4;
				}
				if (func_138())
				{
					iLocal_140 = 9;
				}
				if (func_188())
				{
					iLocal_140 = 6;
				}
				if (func_186())
				{
					iLocal_140 = 9;
				}
				if (func_187())
				{
					iLocal_140 = 4;
				}
			}
			break;
		
		case 10:
			if (unk_0x7887B64A08364778(iLocal_63))
			{
				if (unk_0x00B5B0B68211D89B(iLocal_63) || func_30(unk_0xD5A676B97920D126(), iLocal_63, 1) > 100f)
				{
					func_185();
					func_190();
				}
			}
			break;
		
		case 4:
			if (unk_0x7887B64A08364778(iLocal_62))
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_62))
				{
					if (!unk_0x7D720C677145C91C(iLocal_62, unk_0xD5A676B97920D126(), 1))
					{
						unk_0x37338B7B7C4982DC(iLocal_62);
						if (!unk_0x00B5B0B68211D89B(iLocal_63))
						{
							unk_0x456121A0AAC868D4(&uLocal_121);
							unk_0x7C6B104B5E7A8C41(0, unk_0xC086F8D75730FA3A(iLocal_63, 0), 150f, -1, 0, 0);
							unk_0xCFE67FBB69F1C410(uLocal_121);
							unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
							unk_0x873418BFBF9A6780(&uLocal_121);
							unk_0x7D99F00F48D15ADB(iLocal_62, 1);
						}
						iLocal_148 = 1;
					}
					else
					{
						unk_0x37338B7B7C4982DC(iLocal_62);
						unk_0xBB8F1D58B7578137(iLocal_62, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
						unk_0x7D99F00F48D15ADB(iLocal_62, 1);
						if (unk_0x6901135DDCC4904D(iLocal_65))
						{
							unk_0x8A3D7569826A325D(&iLocal_65);
						}
					}
				}
			}
			if (unk_0x7887B64A08364778(iLocal_63))
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_63))
				{
					unk_0x37338B7B7C4982DC(iLocal_63);
					unk_0xBB8F1D58B7578137(iLocal_63, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
					unk_0x7D99F00F48D15ADB(iLocal_63, 1);
					if (unk_0x6901135DDCC4904D(iLocal_66))
					{
						unk_0x8A3D7569826A325D(&iLocal_66);
					}
				}
			}
			if (unk_0x33688D334D224255())
			{
				func_89();
			}
			unk_0x4EDE34FBADD967A6(0);
			if (!iLocal_148)
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_63))
				{
					func_34(&uLocal_194, cLocal_103, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_259();
			}
			break;
		
		case 5:
			if (unk_0xC9D9444186B5A374() > 250)
			{
				if (unk_0x7887B64A08364778(iLocal_63))
				{
					if (!unk_0x00B5B0B68211D89B(iLocal_63))
					{
						unk_0x77E24C0B92B4FC24(iLocal_63, 17, 1);
						unk_0x12A60388636C9B1C(iLocal_63, 156, 1);
						unk_0x456121A0AAC868D4(&uLocal_121);
						unk_0xBB8F1D58B7578137(0, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
						unk_0xCFE67FBB69F1C410(uLocal_121);
						unk_0x8B06B801B92CEC2D(iLocal_63, uLocal_121);
						unk_0x873418BFBF9A6780(&uLocal_121);
						unk_0x7D99F00F48D15ADB(iLocal_63, 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0x6D20A3AA82585D8C(iLocal_63, 0);
						unk_0xD4B3FF1E63C36391(&iLocal_63);
						func_34(&uLocal_194, cLocal_103, sLocal_113, 4, 0, 0, 0);
					}
				}
				if (unk_0x7887B64A08364778(iLocal_62))
				{
					if (!unk_0x00B5B0B68211D89B(iLocal_62))
					{
						if (!unk_0x7D720C677145C91C(iLocal_62, unk_0xD5A676B97920D126(), 1))
						{
							unk_0x37338B7B7C4982DC(iLocal_62);
							iLocal_148 = 1;
						}
					}
				}
				if (!iLocal_148)
				{
					unk_0x4EDE34FBADD967A6(0);
					func_259();
				}
			}
			break;
		
		case 6:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
				{
					if (unk_0x7887B64A08364778(iLocal_62))
					{
						if (!unk_0x00B5B0B68211D89B(iLocal_62))
						{
							unk_0x37338B7B7C4982DC(iLocal_62);
							unk_0x456121A0AAC868D4(&uLocal_121);
							unk_0x0988FFC0C75637DF(0, unk_0xD5A676B97920D126(), 10000, 0, 2);
							unk_0xBB8F1D58B7578137(0, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
							unk_0xCFE67FBB69F1C410(uLocal_121);
							unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
							unk_0x873418BFBF9A6780(&uLocal_121);
							unk_0x7D99F00F48D15ADB(iLocal_62, 1);
							unk_0xD4B3FF1E63C36391(&iLocal_62);
						}
					}
					if (unk_0x7887B64A08364778(iLocal_63))
					{
						if (!unk_0x00B5B0B68211D89B(iLocal_63))
						{
							func_34(&uLocal_194, cLocal_103, sLocal_114, 4, 0, 0, 0);
							unk_0x37338B7B7C4982DC(iLocal_63);
							unk_0x456121A0AAC868D4(&uLocal_121);
							unk_0x0988FFC0C75637DF(0, unk_0xD5A676B97920D126(), 10000, 0, 2);
							unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
							unk_0xBB8F1D58B7578137(0, unk_0xD5A676B97920D126(), 250f, -1, 0, 0);
							unk_0xCFE67FBB69F1C410(uLocal_121);
							unk_0x8B06B801B92CEC2D(iLocal_63, uLocal_121);
							unk_0x873418BFBF9A6780(&uLocal_121);
							unk_0x7D99F00F48D15ADB(iLocal_63, 1);
						}
					}
				}
				unk_0x4EDE34FBADD967A6(0);
				func_259();
			}
			break;
		
		case 7:
			unk_0xC1B1E9A034A63A62(0);
			iLocal_140++;
			break;
		
		case 8:
			if (unk_0x83666F9FB8FEBD4B() > 200)
			{
				func_190();
			}
			break;
		
		case 9:
			if (unk_0x7887B64A08364778(iLocal_63))
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_63))
				{
					unk_0x12A60388636C9B1C(iLocal_63, 156, 1);
					unk_0xD38E07142A13F3FA(iLocal_63, 50f, 0);
					if (unk_0x33688D334D224255())
					{
						func_89();
					}
					unk_0x4EDE34FBADD967A6(0);
					func_34(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
				}
			}
			if (unk_0x7887B64A08364778(iLocal_62))
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_62))
				{
					unk_0x37338B7B7C4982DC(iLocal_62);
					unk_0xD4BBFF77570A437F(iLocal_62, 2000);
					iLocal_148 = 1;
				}
			}
			break;
	}
	if (iLocal_140 != 8 && iLocal_148)
	{
		iLocal_140 = 7;
	}
	iLocal_188 = unk_0x84A97C70FFDEC0C8();
	if (iLocal_190 && !bLocal_137)
	{
		if (unk_0x7887B64A08364778(iLocal_63) && unk_0x7887B64A08364778(iLocal_63))
		{
			if (!unk_0x00B5B0B68211D89B(iLocal_62) && !unk_0x00B5B0B68211D89B(iLocal_63))
			{
				if ((((iLocal_188 - iLocal_187) > 12000 && !unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_63, 3f, 3f, 35f, 0, 1, 0)) && unk_0xBB5DD90D4926F21A(iLocal_63)) && !func_146())
				{
					if ((func_34(&uLocal_194, cLocal_103, "REMG2_FKIT", 4, 0, 0, 0) || func_50()) || func_50())
					{
						unk_0x12A60388636C9B1C(iLocal_63, 156, 1);
						unk_0xC50E90B2DFB6AA8F(iLocal_63, unk_0x6DE9A8183DA7678E(iLocal_62, 31086, 0f, 0f, 0f), 0);
						unk_0x37338B7B7C4982DC(iLocal_62);
						unk_0xE81D470B804DC69A(iLocal_62, 99);
						unk_0x7C6B104B5E7A8C41(iLocal_63, Local_145, 250f, -1, 0, 0);
						unk_0x7D99F00F48D15ADB(iLocal_63, 1);
						func_259();
					}
				}
			}
		}
	}
}

void func_185()
{
	Global_14611 = 0;
	func_44();
}

int func_186()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62) && !unk_0x00B5B0B68211D89B(iLocal_63))
	{
		if (unk_0xC85EEB48C05E2A8A(unk_0xD5A676B97920D126(), iLocal_63) || unk_0xC85EEB48C05E2A8A(unk_0xD5A676B97920D126(), iLocal_62))
		{
			return 1;
		}
		if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_63, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return 0;
}

int func_187()
{
	if (!unk_0xB529B2A4B7C64D6D(iLocal_62, 0))
	{
		if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_62, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iLocal_62) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iLocal_62))
			{
				if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
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
	if (!unk_0xB529B2A4B7C64D6D(iLocal_63, 0))
	{
		if (func_138())
		{
			if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
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

int func_188()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_62, 5.3f, 5.3f, 6f, 0, 1, 0))
		{
			if (unk_0xE0BF2ADAFF3231B4(iLocal_62, unk_0xD5A676B97920D126(), 17))
			{
				if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6) && !unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
				{
					if (!unk_0x00B5B0B68211D89B(iLocal_63))
					{
						if (!unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iLocal_63))
						{
							if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iLocal_62) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iLocal_62))
							{
								unk_0x5AE11BC36633DE4E(0);
								return 1;
							}
						}
					}
					else if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iLocal_62) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iLocal_62))
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

int func_189()
{
	if (!unk_0xB529B2A4B7C64D6D(iLocal_62, 0))
	{
		if (unk_0x1DEB1994A3C25E35(unk_0x6DE9A8183DA7678E(iLocal_62, 31086, 0f, 0f, 0f), 5f, 1))
		{
			if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_190()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_62))
	{
		if (!unk_0x9B0C8A2FC23E64AB(iLocal_62))
		{
			if (func_175())
			{
				if (unk_0x1774A68441553185(iLocal_62, 242628503) == 7 || unk_0x1774A68441553185(iLocal_62, 474215631) == 7)
				{
					if (unk_0x33688D334D224255())
					{
						func_89();
					}
					if (!unk_0x00B5B0B68211D89B(iLocal_63))
					{
						if (!unk_0xFCDC1684830866E8(iLocal_62))
						{
							unk_0xBB8F1D58B7578137(iLocal_62, iLocal_63, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_47 == 3)
					{
						if (!unk_0xFCDC1684830866E8(iLocal_62))
						{
							unk_0x7C6B104B5E7A8C41(iLocal_62, Local_122, 150f, -1, 0, 0);
						}
					}
					unk_0x7D99F00F48D15ADB(iLocal_62, 1);
					unk_0x4EDE34FBADD967A6(0);
					func_34(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0);
					unk_0x4EDE34FBADD967A6(0);
					if (iLocal_192 > 0)
					{
						unk_0xA8C0CC1A37E5B35D(unk_0xD5A676B97920D126(), (iLocal_192 / 100) * 90);
						func_52(func_107(), 1, iLocal_192);
						unk_0x4EDE34FBADD967A6(0);
						func_191(func_107(), 1, (iLocal_192 / 10), 0, 1);
					}
					func_183(3);
					func_178();
				}
			}
			else
			{
				func_259();
			}
		}
		else
		{
			func_259();
		}
	}
	else
	{
		func_259();
	}
}

void func_191(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_53(Global_101652.f_26993[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x5BC7B5709E38CBE0(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xB924315F0872835A(iVar1, iVar0, 1);
	}
}

int func_192()
{
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x9C0A225C3A240597(unk_0xD5A676B97920D126())) > 1369f && !func_170())
		{
			return 0;
		}
	}
	if (func_171())
	{
		return 1;
	}
	if (func_163(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	func_204();
	func_203(&uLocal_393, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_203(&uLocal_393, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_203(&uLocal_393, cLocal_377);
	func_203(&uLocal_393, cLocal_361);
	func_201(&uLocal_393, iLocal_83);
	func_201(&uLocal_393, iLocal_84);
	func_201(&uLocal_393, iLocal_85);
	func_203(&uLocal_393, cLocal_360);
	func_203(&uLocal_393, cLocal_359);
	func_203(&uLocal_393, cLocal_378);
	func_203(&uLocal_393, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_197(&uLocal_393))
	{
		func_194();
		return 1;
	}
	return 0;
}

void func_194()
{
	iLocal_62 = unk_0x8C855D8124E955CE(26, iLocal_83, Local_69, fLocal_75, 1, 1);
	unk_0x5457695C257D1470(iLocal_62, 1);
	unk_0x74084690B489CA8D(iLocal_62, 0);
	unk_0x738326127C161284(iLocal_62, 8, 1);
	unk_0x738326127C161284(iLocal_62, 128, 1);
	unk_0x738326127C161284(iLocal_62, 512, 1);
	unk_0xBE1D89447A1203C9(iLocal_62, 1);
	unk_0x4C1B80043DD72526(iLocal_62);
	unk_0xA8C0CC1A37E5B35D(iLocal_62, 0);
	unk_0x58A5671D02E335D1(iLocal_62, 1);
	if (iLocal_83 == joaat("a_m_y_genstreet_01"))
	{
		unk_0x5BD2F51088536150(iLocal_62, 0, 1, 0, 0);
		unk_0x5BD2F51088536150(iLocal_62, 3, 0, 3, 0);
		unk_0x5BD2F51088536150(iLocal_62, 4, 0, 2, 0);
	}
	if (iLocal_83 == joaat("a_m_y_business_02"))
	{
		unk_0x5BD2F51088536150(iLocal_62, 0, 1, 0, 0);
		unk_0x5BD2F51088536150(iLocal_62, 2, 1, 0, 0);
		unk_0x5BD2F51088536150(iLocal_62, 3, 1, 0, 0);
		unk_0x5BD2F51088536150(iLocal_62, 4, 1, 0, 0);
		unk_0x5BD2F51088536150(iLocal_62, 8, 0, 0, 0);
	}
	unk_0x5CF7BD3BFEB33582("theAssailant", &iLocal_86);
	iLocal_63 = unk_0x8C855D8124E955CE(26, iLocal_84, Local_72, fLocal_78, 1, 1);
	unk_0x6D20A3AA82585D8C(iLocal_63, 1);
	unk_0x5457695C257D1470(iLocal_63, 1);
	unk_0x9B099BCCBD872090(iLocal_63, 1, 0);
	unk_0x4408969E7EC5C720(iLocal_63, joaat("weapon_pistol"), -1, 1, 1);
	unk_0x77E24C0B92B4FC24(iLocal_63, 13, 0);
	unk_0x77E24C0B92B4FC24(iLocal_63, 17, 0);
	unk_0xB1B255D6E393D8E1(iLocal_63, 1);
	unk_0x237B0CFB6EEBD3BA(iLocal_63, 42, 1);
	unk_0x237B0CFB6EEBD3BA(iLocal_63, 137, 1);
	unk_0x738326127C161284(iLocal_63, 128, 1);
	unk_0x738326127C161284(iLocal_63, 2, 0);
	unk_0x417BCC1ECC12E9A2(iLocal_63, iLocal_86);
	unk_0xBE1D89447A1203C9(iLocal_63, 1);
	if (!unk_0x1C079483C9D16F36(sLocal_120))
	{
		unk_0x545EC2C7EB66F6DD(iLocal_62, sLocal_120);
	}
	unk_0x545EC2C7EB66F6DD(iLocal_63, sLocal_119);
	unk_0x42AFB71D42AF78EA(2, joaat("CIVMALE"), iLocal_86);
	unk_0x42AFB71D42AF78EA(2, joaat("CIVFEMALE"), iLocal_86);
	unk_0x42AFB71D42AF78EA(2, iLocal_86, joaat("CIVMALE"));
	unk_0x42AFB71D42AF78EA(2, iLocal_86, joaat("CIVFEMALE"));
	unk_0x42AFB71D42AF78EA(5, iLocal_86, joaat("player"));
	switch (func_107())
	{
		case 0:
			func_196(&uLocal_194, 0, unk_0xD5A676B97920D126(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_196(&uLocal_194, 0, unk_0xD5A676B97920D126(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_196(&uLocal_194, 0, unk_0xD5A676B97920D126(), "TREVOR", 0, 1);
			break;
	}
	func_196(&uLocal_194, 1, iLocal_63, sLocal_118, 0, 1);
	func_196(&uLocal_194, 2, iLocal_62, sLocal_117, 0, 1);
	if (iLocal_47 == 2)
	{
		unk_0x738326127C161284(iLocal_63, 1, 0);
	}
	if (iLocal_90 == 1 || iLocal_90 == 4)
	{
		func_195();
	}
	if (iLocal_90 == 3)
	{
		Local_125 = { -325.4189f, -828.8596f, 31.1f };
		Local_128 = { 0f, 0f, 180f };
		uLocal_131 = unk_0x0C17C9FDFC9120BD(Local_125, Local_128, 2);
		unk_0xECA52D26609A09F3(iLocal_63, uLocal_131, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (iLocal_90 == 4)
	{
		unk_0x005BCF3EA12E7014(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_195()
{
	struct<3> Var0;
	
	unk_0x5477ED2CB1DDA160(iLocal_63, unk_0xEA0A18B7DA3DAB52(cLocal_359, sLocal_365, Local_371, Local_374, 0, 2), 0, 0, 1);
	Var0 = { unk_0x4F8397C9BFE1A8C5(cLocal_359, sLocal_365, Local_371, Local_374, 0, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	unk_0x99569FEC2425586D(iLocal_63, Var0.f_2);
	unk_0x5477ED2CB1DDA160(iLocal_62, unk_0xEA0A18B7DA3DAB52(cLocal_359, sLocal_366, Local_371, Local_374, 0, 2), 0, 0, 1);
	Var0 = { unk_0x4F8397C9BFE1A8C5(cLocal_359, sLocal_366, Local_371, Local_374, 0, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	unk_0x99569FEC2425586D(iLocal_62, Var0.f_2);
	unk_0x290A57C93304EF16(iLocal_63, cLocal_359, sLocal_365, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	unk_0x290A57C93304EF16(iLocal_62, cLocal_359, sLocal_366, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
}

void func_196(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

int func_197(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_198(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_198(var uParam0)
{
	return func_199(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_199(int iParam0, char[4] cParam1, var uParam2)
{
	if (unk_0xF44A5E894FE76438(iParam0, 30))
	{
		if (unk_0xF44A5E894FE76438(iParam0, 29))
		{
			switch (func_200(iParam0))
			{
				case 0:
					return unk_0x7AD0E9452821C95D(uParam2);
					break;
				
				case 1:
					return unk_0xD7669BF035CDA5F6(uParam1);
					break;
				
				case 2:
					return unk_0x51CCEEF52EBADA6D(cParam1);
					break;
				
				case 3:
					return unk_0xB3BFE702989F8358(cParam1);
					break;
				
				case 4:
					return unk_0x536796E3DCB32FB1(uParam2, cParam1);
					break;
				
				case 5:
					return unk_0x37F8AED05948ACB2(cParam1);
					break;
				
				case 6:
					return unk_0x3F51F950AB346CCA(cParam1, unk_0xF44A5E894FE76438(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x23B232D16F343B26(uParam2);
					break;
				
				case 8:
					return unk_0x4A980428C9937F4E(uParam2);
					break;
				
				case 9:
					return unk_0x65A854A1D5D4913A();
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

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xF44A5E894FE76438(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_201(var uParam0, int iParam1)
{
	func_202(uParam0, 0, iParam1, "NULL", 0);
}

void func_202(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0xCC257DA11A122B5F(sParam3, "NULL"))
					{
						if (unk_0xCC257DA11A122B5F(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xB8A73E7DA87B2968(uParam0[iVar0 /*18*/], iParam1);
			unk_0xB8A73E7DA87B2968(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_203(var uParam0, char* sParam1)
{
	func_202(uParam0, 1, -1, sParam1, 0);
}

void func_204()
{
	func_257();
	unk_0xB8A73E7DA87B2968(&uLocal_144, 3);
	unk_0xB8A73E7DA87B2968(&uLocal_144, 4);
	unk_0xB8A73E7DA87B2968(&uLocal_144, 1);
	if (iLocal_90 == 1)
	{
		cLocal_359 = "RANDOM@MUGGING1";
		sLocal_365 = "STRUGGLE_Loop_A_Thief";
		sLocal_366 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_368 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_367 = "FLEE_BACKWARD_Thief";
		sLocal_370 = "FLEE_FORWARD_Shopkeeper";
		sLocal_369 = "FLEE_FORWARD_Thief";
		func_206();
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
		switch (func_107())
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
		switch (func_107())
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
		func_205();
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
			switch (func_107())
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
			func_205();
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
			switch (func_107())
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

void func_205()
{
	cLocal_361 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (unk_0x7BC26452241AC7C9(0, 3))
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

void func_206()
{
	cLocal_361 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (unk_0x7BC26452241AC7C9(0, 3))
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

void func_207(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x84A97C70FFDEC0C8();
	}
	if (unk_0x6901135DDCC4904D(uParam0))
	{
		iVar0 = (unk_0x84A97C70FFDEC0C8() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0xDCA5942DC912553C(iParam0) != 255)
				{
					unk_0x97C445677A852D45(iParam0, 255);
				}
			}
			else if (unk_0xDCA5942DC912553C(iParam0) != 0)
			{
				unk_0x97C445677A852D45(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xDCA5942DC912553C(iParam0) != 255)
			{
				unk_0x97C445677A852D45(iParam0, 255);
			}
		}
	}
}

void func_208(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xAF48077651290FAC() >= (uParam0->f_272 + uParam0->f_273) || unk_0xF44A5E894FE76438(Global_91486.f_20, 2)) || unk_0xF44A5E894FE76438(Global_91486.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 29))
					{
						func_209(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xAF48077651290FAC();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_209(var uParam0)
{
	func_210(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_210(var uParam0, char[4] cParam1, var uParam2)
{
	if (unk_0xF44A5E894FE76438(*uParam0, 30))
	{
		switch (func_200(*uParam0))
		{
			case 0:
				unk_0x4ACD1E4CBA159ED1(uParam2);
				break;
			
			case 1:
				unk_0x49E996A1E39EAAD7(uParam1);
				break;
			
			case 2:
				unk_0xC39D3BD9BB3688FF(uParam1);
				break;
			
			case 3:
				unk_0xCB5E0E0EB67B3ECE(uParam1, unk_0xF44A5E894FE76438(*uParam0, 28));
				break;
			
			case 4:
				unk_0x3E276C5F51A6C832(uParam2, uParam1);
				break;
			
			case 5:
				unk_0x6F92871B78A401BC(uParam1);
				break;
			
			case 6:
				unk_0x3F51F950AB346CCA(uParam1, unk_0xF44A5E894FE76438(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x1D072EB961765FED(uParam2);
				break;
			
			case 8:
				unk_0x68A99AC5778ED123(cParam1, uParam2);
				break;
			
			case 9:
				unk_0x9CD38B75BED5A7C7();
				break;
			
			default:
				break;
		}
		unk_0xB8A73E7DA87B2968(uParam0, 29);
	}
}

void func_211(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_176();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_213(iParam0);
	unk_0x2D619292AF9BA314(0);
	unk_0x9B7FB1F4FDC71D5B(1);
	Global_101638 = 0;
	func_212();
}

void func_212()
{
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			unk_0xFA03BA297FE81584(unk_0xA0A4DA31DEDFAC4F(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)), 1);
		}
		unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 32, 0);
	}
}

void func_213(int iParam0)
{
	Global_101641 = iParam0;
}

int func_214(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_138860)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_176();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_254())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x9C0A225C3A240597(unk_0xD5A676B97920D126())) > 1369f && !func_170())
			{
				return 0;
			}
		}
		if (!Global_101652.f_8028)
		{
			return 0;
		}
		if (func_181(0))
		{
			return 0;
		}
		if (func_171())
		{
			return 0;
		}
		if (func_253())
		{
			return 0;
		}
		if (Global_101641 != -1)
		{
			return 0;
		}
		if (func_109(func_107()))
		{
			if (func_163(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_252(iParam3))
		{
			return 0;
		}
		if (func_109(func_107()))
		{
			if (func_251(func_107()) == 4 || func_251(func_107()) == 5)
			{
				return 0;
			}
		}
		if (func_109(func_107()))
		{
			if (!func_250(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_249(Global_101652.f_23938.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x84A97C70FFDEC0C8() - Global_101643) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_248())
		{
			return 0;
		}
		if (unk_0xC19959490984F18E())
		{
			return 0;
		}
		if (unk_0xC9DD3DCF0C4F247D())
		{
			return 0;
		}
		if (!func_239(4))
		{
			return 0;
		}
		if (!func_158(5))
		{
			return 0;
		}
		if (func_238(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x7B66213B5E371C3F(unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126())))
		{
			if ((unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0x21CE631D8E3F8ECA(377.153f, -717.567f, 10.0536f) || unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0x21CE631D8E3F8ECA(320.9934f, 265.2515f, 82.1221f)) || unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0x21CE631D8E3F8ECA(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_238(0, 0))
		{
			return 0;
		}
		if (Global_25331)
		{
			return 0;
		}
		if (func_252(30) && !func_238(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_109(func_107()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_101652.f_2079.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101652.f_2079.f_539.f_1524[iVar4];
				if (func_237(iVar8))
				{
					if (func_215(iVar4))
					{
						if (!func_20(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Var5) < (210f * 210f))
							{
								if (func_107() != iVar4)
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

bool func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101652.f_2079.f_539.f_1524[iParam0];
	return func_216(iVar0);
}

int func_216(int iParam0)
{
	return func_217(iParam0, 1);
}

int func_217(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_237(iParam0))
	{
		return 0;
	}
	func_218(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_218(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_219(func_230(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_219(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_229(iParam0, iParam1))
	{
		iVar0 = func_228(iParam1);
		iVar1 = func_226(iParam0);
		iVar2 = (func_226(iParam0) - func_226(iParam1));
		iVar3 = (func_228(iParam0) - func_228(iParam1));
		iVar4 = (func_225(iParam0) - func_225(iParam1));
		iVar5 = (func_224(iParam0) - func_224(iParam1));
		iVar6 = (func_223(iParam0) - func_223(iParam1));
		iVar7 = (func_222(iParam0) - func_222(iParam1));
	}
	else
	{
		iVar0 = func_228(iParam0);
		iVar1 = func_226(iParam1);
		iVar2 = (func_226(iParam1) - func_226(iParam0));
		iVar3 = (func_228(iParam1) - func_228(iParam0));
		iVar4 = (func_225(iParam1) - func_225(iParam0));
		iVar5 = (func_224(iParam1) - func_224(iParam0));
		iVar6 = (func_223(iParam1) - func_223(iParam0));
		iVar7 = (func_222(iParam1) - func_222(iParam0));
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
		iVar4 = (iVar4 + func_221(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_220(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_220(float fParam0, float fParam1, float fParam2)
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

int func_221(int iParam0, int iParam1)
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

int func_222(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_223(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_224(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_225(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_226(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_227(unk_0xF44A5E894FE76438(iParam0, 31), -1, 1)) + 2011;
}

int func_227(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_228(int iParam0)
{
	return iParam0 & 15;
}

int func_229(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_237(iParam1) || !func_237(iParam0))
	{
		return 1;
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
	iVar0 = func_228(iParam0);
	iVar1 = func_228(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_225(iParam0);
	iVar1 = func_225(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_230()
{
	var uVar0;
	
	func_236(&uVar0, unk_0xABA05E2C283C3D5F());
	func_235(&uVar0, unk_0xF72CA3D5BA977203());
	func_234(&uVar0, unk_0x83D6515EE2CBF18C());
	func_233(&uVar0, unk_0x3D13C79BF80EB767());
	func_232(&uVar0, unk_0xA93FEF8677A8AF58());
	func_231(&uVar0, unk_0xAC9128C6933DA69B());
	return uVar0;
}

void func_231(var uParam0, int iParam1)
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

void func_232(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_233(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_228(*uParam0);
	iVar1 = func_226(*uParam0);
	if (iParam1 < 1 || iParam1 > func_221(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_234(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_235(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_236(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_237(int iParam0)
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
	iVar0 = func_222(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_223(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_224(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_226(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_228(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_225(iParam0);
	if (iVar5 < 1 || iVar5 > func_221(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_238(int iParam0, int iParam1)
{
	if (unk_0xF44A5E894FE76438(Global_101652.f_23938.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				iVar0 = func_107();
				if (!func_109(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0xD7143F03AB03DDF2(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_247()) || Global_100699) || Global_25187) || func_246()) || func_43(8, -1)) || func_245()) || func_244()) || func_243()) || func_242()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1) || func_247()) || Global_25187) || func_246()) || func_43(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0xD7143F03AB03DDF2(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_247()) || Global_100699) || Global_25187) || func_246()) || func_43(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_101652.f_6631.f_919[iVar0] == 5) || Global_36324 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_247()) || Global_100699) || Global_25187) || func_246()) || func_43(8, -1)) || func_245()) || func_244()) || func_242()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_247() || unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0) || func_43(8, -1)) || func_242()) || func_241()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_43(8, -1) || func_245()) || func_244()) || func_241()) || func_240())
						{
							return 0;
						}
						if ((unk_0xB0D174BA6F10DF7B() && unk_0xF5009C16308B9147() != 3) && unk_0x96A69406F234414D() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
						{
							if ((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || func_247()) || Global_25187) || func_246()) || func_43(8, -1)) || func_244()) || func_243()) || func_242()) || Global_101652.f_6631.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || !unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C())) || !unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C())) || !unk_0x8AFBC859AA63D3D7()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || func_247()) || func_244()) || Global_100699) || Global_25187) || func_246()) || Global_36908) || func_43(8, -1)) || func_243()) || func_241()) || func_242()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || !unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C())) || !unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C())) || !unk_0x8AFBC859AA63D3D7()) || unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0)) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1)) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x13A15A61A159801A(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || func_247()) || Global_100699) || Global_25187) || func_246()) || func_43(8, -1)) || func_243()) || func_241()) || func_245()) || func_244()) || func_242())
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

var func_240()
{
	return Global_91525.f_1;
}

int func_241()
{
	if (Global_88741 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_82607[Global_88741 /*34*/].f_15, 13);
	}
	return 0;
}

int func_242()
{
	if (unk_0xAB964FCFAC3C767A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_243()
{
	if (Global_69957)
	{
		return 1;
	}
	else if (Global_55812 && !Global_55818)
	{
		return 1;
	}
	return 0;
}

bool func_244()
{
	return Global_91538.f_304 > 0;
}

bool func_245()
{
	return Global_91538.f_303 > 0;
}

var func_246()
{
	return Global_1315229;
}

int func_247()
{
	if (!unk_0x1995B52453EF6537())
	{
		return Global_89297.f_44 == 1;
	}
	return 0;
}

int func_248()
{
	func_40();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_249(int iParam0)
{
	return func_229(func_230(), iParam0);
}

int func_250(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_107();
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

int func_251(int iParam0)
{
	if (!func_109(iParam0))
	{
		return 7;
	}
	return Global_101652.f_6631.f_919[iParam0];
}

bool func_252(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_254())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xF44A5E894FE76438(Global_101652.f_23938, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xF44A5E894FE76438(Global_101652.f_23938.f_1, iVar0);
	}
	return bVar1;
}

int func_253()
{
	var uVar0;
	
	if (Global_25335)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			uVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (unk_0xA4DB44DF73EF4FE5(uVar0, 0))
			{
				if (!unk_0x00B5B0B68211D89B(unk_0x98BE504E8B389665(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_254()
{
	int iVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		if (unk_0xA65719DC666C97C3())
		{
			if (unk_0x65D57B279D4CB27E())
			{
				unk_0x5BC7B5709E38CBE0(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xB8A73E7DA87B2968(&iVar0, 2);
				unk_0xB8A73E7DA87B2968(&iVar0, 4);
				unk_0xB8A73E7DA87B2968(&iVar0, 6);
				unk_0xB8A73E7DA87B2968(&Global_25, 2);
				unk_0xB8A73E7DA87B2968(&Global_25, 4);
				unk_0xB8A73E7DA87B2968(&Global_25, 6);
				unk_0xB924315F0872835A(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0xE0A03D8892BEF6BB())
				{
					iVar0 = unk_0x2428688746A375BE(866);
					unk_0xB8A73E7DA87B2968(&iVar0, 0);
					unk_0xC0F82A66B119B68A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139115 == 2)
	{
		return 1;
	}
	else if (Global_139115 == 3)
	{
		return 0;
	}
	if (unk_0xE0A03D8892BEF6BB())
	{
		if (unk_0xF44A5E894FE76438(unk_0x2428688746A375BE(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_255(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF44A5E894FE76438(Global_101652.f_17517[iParam0 /*6*/], 3);
}

bool func_256(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF44A5E894FE76438(Global_101652.f_17517[iParam0 /*6*/], 0);
}

void func_257()
{
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
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

void func_258(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_259()
{
	if (iLocal_156)
	{
		if (iLocal_50)
		{
			unk_0x8188DB74546FF484(iLocal_83);
			unk_0x8188DB74546FF484(iLocal_84);
			unk_0x8188DB74546FF484(iLocal_85);
		}
		if (!unk_0x00B5B0B68211D89B(iLocal_63))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				unk_0xBB8F1D58B7578137(iLocal_63, unk_0xD5A676B97920D126(), 150f, -1, 0, 0);
			}
			unk_0x7D99F00F48D15ADB(iLocal_63, 1);
			if (!bLocal_60)
			{
				unk_0xA8C0CC1A37E5B35D(iLocal_63, iLocal_192);
			}
		}
		if (unk_0x7887B64A08364778(iLocal_62))
		{
			if (!unk_0x00B5B0B68211D89B(iLocal_62))
			{
				unk_0x74084690B489CA8D(iLocal_62, 1);
				if (unk_0x1774A68441553185(iLocal_62, -1146898486) == 7 && unk_0x1774A68441553185(iLocal_62, 242628503) == 7)
				{
					unk_0x456121A0AAC868D4(&uLocal_121);
					if (unk_0x9D732A6420723BD3(iLocal_62))
					{
						unk_0x520905B59D708DC5(0, 0);
					}
					unk_0x0988FFC0C75637DF(0, unk_0xD5A676B97920D126(), 9000, 0, 2);
					unk_0x7C6B104B5E7A8C41(0, Local_122, 250f, -1, 0, 0);
					unk_0xCFE67FBB69F1C410(uLocal_121);
					unk_0x8B06B801B92CEC2D(iLocal_62, uLocal_121);
					unk_0x873418BFBF9A6780(&uLocal_121);
					unk_0x7D99F00F48D15ADB(iLocal_62, 1);
					if (!iLocal_154 && !iLocal_148)
					{
						if (unk_0x33688D334D224255())
						{
							func_89();
						}
					}
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x6901135DDCC4904D(iLocal_66))
		{
			unk_0x8A3D7569826A325D(&iLocal_66);
		}
		if (unk_0x6901135DDCC4904D(iLocal_65))
		{
			unk_0x8A3D7569826A325D(&iLocal_65);
		}
		if (unk_0x7887B64A08364778(iLocal_64))
		{
			unk_0x523D268641392C22(&iLocal_64);
		}
		if (unk_0x6901135DDCC4904D(iLocal_67))
		{
			unk_0x8A3D7569826A325D(&iLocal_67);
		}
	}
	if (iLocal_379 != -1)
	{
		if (unk_0xD9B035B8A2DE0377(iLocal_379))
		{
			unk_0xC82DEDAC54CBAC62(iLocal_379);
		}
		iLocal_379 = -1;
	}
	if (func_175())
	{
		unk_0x1B0911E42F22C137(1);
		unk_0xFA5E84DCAE200259(1f);
	}
	func_29(&uLocal_380, 0, 0);
	func_93(0, 1, 1, 0);
	func_265(-1);
	func_260(&uLocal_393, 0);
	if (iLocal_141 != 0)
	{
		unk_0x53FD5C8F17B03451(iLocal_141);
	}
	unk_0x01DFCA3621B68C4A();
}

void func_260(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_262(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_261(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_261(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_262(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 30))
		{
			func_263(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_263(var uParam0)
{
	func_264(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_264(int iParam0, var uParam1, int iParam2)
{
	if (unk_0xF44A5E894FE76438(iParam0, 30))
	{
		switch (func_200(iParam0))
		{
			case 0:
				unk_0x8188DB74546FF484(uParam2);
				break;
			
			case 1:
				unk_0x6989DACCC7A558AE(uParam1);
				break;
			
			case 2:
				unk_0x01E28B98EC24352A(uParam1);
				break;
			
			case 3:
				unk_0x500F58A641B1CB9F(uParam1);
				break;
			
			case 4:
				unk_0x66EB3531711325DB(iParam2, uParam1);
				break;
			
			case 5:
				unk_0xD0DA5B2F3C42D97E(uParam1);
				break;
			
			case 6:
				unk_0x480B760C1687F038();
				break;
			
			case 7:
				unk_0x38142EBEA2AF3714(iParam2);
				break;
			
			case 8:
				unk_0x16CE7E4DDB18D2F8(iParam2, unk_0xF44A5E894FE76438(iParam0, 26));
				break;
			
			case 9:
				unk_0x2BC06D600B2B7A9A();
				break;
			
			default:
				break;
		}
	}
}

void func_265(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_176();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_175())
	{
		func_270(iParam0);
		unk_0x2CD0538D8247BA65(0, 0);
		Global_101643 = unk_0x84A97C70FFDEC0C8();
		func_269(30000);
		StringCopy(&cVar0, func_268(Global_101641, 1), 64);
		if (func_267(Global_101641) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101640, 64);
		}
		unk_0x0ED8A10006DC8E99(&cVar0, Global_101638, (unk_0x84A97C70FFDEC0C8() - Global_101639), 0);
	}
	else if (unk_0xF44A5E894FE76438(Global_101648, 0) && Global_101652.f_23938.f_2 < 3)
	{
		unk_0x4EA098C870B73AB7(&Global_101648, 0);
	}
	func_266(&Global_25244);
	Global_101642 = 0;
	func_213(-1);
}

void func_266(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35739)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35738 = 0;
	Global_35740 = 0;
	Global_35777 = 15;
	Global_55815 = 0;
	Global_55816 = 0;
}

int func_267(int iParam0)
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

char* func_268(int iParam0, bool bParam1)
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

void func_269(int iParam0)
{
	Global_36328 = (unk_0x84A97C70FFDEC0C8() + iParam0);
}

void func_270(int iParam0)
{
	func_271(iParam0, 0, func_276(iParam0));
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_230();
	func_274(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_273(iParam0, &uVar0);
	Var1 = { func_272(&uVar0) };
}

struct<16> func_272(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_224(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_223(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_225(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_228(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_226(*uParam0), 64);
	return Var0;
}

void func_273(int iParam0, var uParam1)
{
	Global_101652.f_23938.f_43[iParam0] = *uParam1;
}

void func_274(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_226(*uParam0);
	iVar1 = func_228(*uParam0);
	iVar2 = func_225(*uParam0);
	iVar3 = func_224(*uParam0);
	iVar4 = func_223(*uParam0);
	iVar5 = func_222(*uParam0);
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
	iVar6 = func_221(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_221(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_275(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_275(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_236(uParam0, iParam1);
	func_235(uParam0, iParam2);
	func_234(uParam0, iParam3);
	func_232(uParam0, iParam5);
	func_233(uParam0, iParam4);
	func_231(uParam0, iParam6);
}

int func_276(int iParam0)
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

void func_277(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_176();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_267(iParam0))
	{
		func_288(iParam0, iParam1);
		if (!func_287(51))
		{
			func_284("RE_REWARD", 1, 0, 4000, 10000, func_169(), 0, 138, 0);
			func_283(51);
		}
		if (func_154(iParam0))
		{
			Global_101652.f_23938.f_2 = 3;
		}
		if (func_282(iParam0, iParam1) != 322)
		{
			func_278(func_282(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_101640 = iParam1;
		if (Global_101638 == 0)
		{
			if (((Global_101641 == 1 || Global_101641 == 5) || Global_101641 == 11) || Global_101641 == 25)
			{
				func_183(2);
			}
			else if ((Global_101641 == 26 || Global_101641 == 8) || Global_101641 == 17)
			{
				func_183(7);
			}
			else
			{
				func_183(1);
			}
		}
	}
}

void func_278(int iParam0, var uParam1, var uParam2)
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
		func_281((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101652.f_9137[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101652.f_9137[iParam0 /*12*/].f_6 == 11 || Global_101652.f_9137[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101652.f_9137[iParam0 /*12*/].f_5 = 1;
		Global_101652.f_9137[iParam0 /*12*/].f_10 = uParam1;
		Global_101652.f_9137[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_279();
	}
}

void func_279()
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
	Global_101388 = 0;
	Global_101389 = 0;
	Global_101390 = 0;
	Global_101391 = 0;
	Global_101392 = 0;
	Global_101393 = 0;
	Global_101394 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101652.f_9137.f_3853;
	Global_101652.f_9137.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101652.f_9137[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101652.f_9137[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101388++;
					fVar1 = (fVar1 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101389++;
					fVar2 = (fVar2 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101390++;
					fVar3 = (fVar3 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101391++;
					fVar4 = (fVar4 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101392++;
					fVar5 = (fVar5 + (Global_101652.f_9137[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101393++;
					fVar6 = (fVar6 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101394++;
					fVar7 = (fVar7 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101371 > 0)
	{
		if (Global_101388 == Global_101371)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101372 > 0)
	{
		if (Global_101389 == Global_101372)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101373 > 0)
	{
		if (Global_101390 == Global_101373)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101374 > 0)
	{
		if (Global_101391 == Global_101374)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101375 > 0)
	{
		if (((Global_101392 == Global_101375 || (Global_101375 * 10 / Global_101392) < 41) || Global_101392 > Global_101378) || Global_101392 == Global_101378)
		{
			if (!unk_0xF44A5E894FE76438(Global_101652.f_9137.f_3856, 14))
			{
				if (Global_101392 == Global_101375)
				{
					unk_0x04A30C8E64EF23A0(joaat("num_rndevents_completed"), Global_101375, 0);
					unk_0xB8A73E7DA87B2968(&(Global_101652.f_9137.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101376 > 0)
	{
		if (Global_101393 == Global_101376)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101377 > 0)
	{
		if (Global_101394 == Global_101377)
		{
			fVar7 = 5f;
		}
	}
	Global_101652.f_9137.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101392 > Global_101378 || Global_101392 == Global_101378)
	{
		iVar9 = Global_101378;
	}
	else
	{
		iVar9 = Global_101392;
	}
	unk_0xB924315F0872835A(joaat("num_missions_completed"), Global_101388, 1);
	unk_0xB924315F0872835A(joaat("num_missions_available"), Global_101371, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_completed"), Global_101389, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_available"), Global_101372, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_completed"), Global_101390, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_available"), Global_101373, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_completed"), Global_101391, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_available"), Global_101374, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_available"), Global_101378, 1);
	unk_0xB924315F0872835A(joaat("num_misc_completed"), (Global_101394 + Global_101393), 1);
	unk_0xB924315F0872835A(joaat("num_misc_available"), (Global_101377 + Global_101376), 1);
	Global_101395 = (Global_101388 * 100 / Global_101371);
	Global_101397 = ((Global_101390 + Global_101389) * 100 / (Global_101373 + Global_101372));
	Global_101396 = ((Global_101391 + iVar9) * 100 / (Global_101374 + Global_101378));
	Global_101398 = ((Global_101393 + Global_101394) * 100 / (Global_101376 + Global_101377));
	unk_0x45ADCFA1AACD5CCD(joaat("total_progress_made"), Global_101652.f_9137.f_3853, 1);
	unk_0xB924315F0872835A(joaat("percent_story_missions"), Global_101395, 1);
	unk_0xB924315F0872835A(joaat("percent_ambient_missions"), Global_101396, 1);
	unk_0xB924315F0872835A(joaat("percent_oddjobs"), Global_101397, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853))
	{
		func_75(13, unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853));
	}
	if (!unk_0x56958F2CF14CF671())
	{
		if (!Global_69697)
		{
			if (func_280() == 2 == 0 && !unk_0x1995B52453EF6537())
			{
				if (unk_0x09F10A67721D6115())
				{
					Global_101386 = 0;
				}
				if (!Global_55818)
				{
					func_180();
				}
			}
		}
	}
}

int func_280()
{
	return Global_25185;
}

int func_281(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_97();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x075D9EC324E17D48((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x0BC5C40DA70F6F4E((iParam0 - 0)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x075D9EC324E17D48((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x0BC5C40DA70F6F4E((iParam0 - 192)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x075D9EC324E17D48((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x0BC5C40DA70F6F4E((iParam0 - 513)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x075D9EC324E17D48((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x0BC5C40DA70F6F4E((iParam0 - 705)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x02A8B6976F1BEB99((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x0BC5C40DA70F6F4E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x02A8B6976F1BEB99((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x0BC5C40DA70F6F4E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xA6F84F542C2213FD((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xA6F84F542C2213FD((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xA6F84F542C2213FD((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x0BC5C40DA70F6F4E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xA6F84F542C2213FD((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xA6F84F542C2213FD((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xA6F84F542C2213FD((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x0BC5C40DA70F6F4E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_282(int iParam0, int iParam1)
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

void func_283(int iParam0)
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
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_19353.f_150[iVar1]), iVar0);
	}
}

void func_284(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_285(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_285(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xCC257DA11A122B5F(sParam0, ""))
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
	while (iVar0 < Global_101652.f_19353.f_145)
	{
		if (unk_0xCC257DA11A122B5F(&(Global_101652.f_19353[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101652.f_19353.f_145 < 9)
	{
		StringCopy(&(Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_4), sParam1, 16);
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_8 = (unk_0x84A97C70FFDEC0C8() + iParam3);
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_9 = iParam5;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_11 = iParam6;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_12 = uParam2;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_13 = iParam7;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_14 = iParam8;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_10 = ((unk_0x84A97C70FFDEC0C8() + iParam3) + iParam4);
		}
		else
		{
			Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_10 = -1;
		}
		Global_101652.f_19353.f_145++;
		func_286();
	}
}

void func_286()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101652.f_19353.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_19353.f_145)
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[0])
			{
				Global_101652.f_19353.f_146[0] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[1])
			{
				Global_101652.f_19353.f_146[1] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[2])
			{
				Global_101652.f_19353.f_146[2] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_287(int iParam0)
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
		return unk_0xF44A5E894FE76438(Global_101652.f_19353.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_288(int iParam0, int iParam1)
{
	unk_0xB8A73E7DA87B2968(&(Global_101652.f_23938.f_8[iParam0]), iParam1);
}

