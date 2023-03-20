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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_74 = 0f;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	struct<3> Local_79 = { 0, 0, 0 } ;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	int iLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	char[] cLocal_102[8] = 0;
	char* sLocal_103 = NULL;
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
	var uLocal_120 = 0;
	struct<3> Local_121 = { 0, 0, 0 } ;
	struct<3> Local_124 = { 0, 0, 0 } ;
	struct<3> Local_127 = { 0, 0, 0 } ;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	bool bLocal_132 = 0;
	bool bLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	bool bLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 0;
	struct<3> Local_144 = { 0, 0, 0 } ;
	int iLocal_147 = 0;
	bool bLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	bool bLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	bool bLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<3> Local_165 = { 0, 0, 0 } ;
	struct<3> Local_168 = { 0, 0, 0 } ;
	struct<3> Local_171 = { 0, 0, 0 } ;
	struct<3> Local_174 = { 0, 0, 0 } ;
	struct<3> Local_177 = { 0, 0, 0 } ;
	struct<3> Local_180 = { 0, 0, 0 } ;
	struct<3> Local_183 = { 0, 0, 0 } ;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 16;
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
	char[] cLocal_358[8] = 0;
	char[] cLocal_359[8] = 0;
	char[] cLocal_360[8] = 0;
	char* sLocal_361 = NULL;
	char* sLocal_362 = NULL;
	char* sLocal_363 = NULL;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	char* sLocal_366 = NULL;
	char* sLocal_367 = NULL;
	char* sLocal_368 = NULL;
	char* sLocal_369 = NULL;
	struct<3> Local_370 = { 0, 0, 0 } ;
	struct<3> Local_373 = { 0, 0, 0 } ;
	char[] cLocal_376[8] = 0;
	char[] cLocal_377[8] = 0;
	int iLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = -1;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 1000;
	var uLocal_389 = 1000;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 15;
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
	var uLocal_665 = 1;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	struct<3> Local_669 = { 0, 0, 0 } ;
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
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_90 = { -131.052f, -1627f, 31.1755f };
	Local_93 = { 287.888f, -284.603f, 52.967f };
	Local_96 = { -319.66f, -832.28f, 31.61f };
	Local_99 = { 31f, -1019f, 28.5f };
	sLocal_119 = "";
	cLocal_358 = "RANDOM@MUGGING3";
	cLocal_359 = "pickup_object";
	cLocal_376 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_378 = -1;
	if (unk_0x7547D7CF93115D6D(11))
	{
		if (iLocal_47 == 5 || iLocal_47 == 12)
		{
			func_274(25, iLocal_89);
			func_256();
		}
		else
		{
			func_256();
		}
	}
	Local_121 = { ScriptParam_0.f_1[0 /*3*/] };
	func_255(&uLocal_392, 3);
	func_254();
	if ((iLocal_89 == 1 && func_253(55)) && !func_252(55))
	{
		unk_0x883793591E631A3B();
	}
	if (func_211(Local_121, 25, iLocal_89, 0, 0))
	{
		func_208(-1);
	}
	else
	{
		unk_0x883793591E631A3B();
	}
	bVar0 = false;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_205(&uLocal_392);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x34D399ACBC6AA213(unk_0xAF65E5A58BE87D95());
		}
		func_204(uLocal_64, &uLocal_391);
		if (unk_0x3BCCCFB165E15A65() || bLocal_148)
		{
			switch (iLocal_45)
			{
				case 0:
					if (func_190())
					{
						unk_0xF83CD415BF55C455(0);
						unk_0x407F91A831576A66(-127.9025f, -1574.084f, 36.4128f, 10f, 0, 0, 0, 0, 0);
						iLocal_155 = 1;
						iLocal_45 = 1;
					}
					else if (func_189())
					{
						func_256();
					}
					break;
				
				case 1:
					if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
					{
						if (iLocal_140 == 0)
						{
							iLocal_140 = unk_0x054FC3D63A1AF7A4(99, Local_121, 0f);
						}
						unk_0x34D399ACBC6AA213(unk_0xAF65E5A58BE87D95());
						switch (iLocal_47)
						{
							case 1:
								func_181();
								break;
							
							case 2:
								unk_0x9C64F97D3F9CCA97("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_48)
								{
									case 0:
										unk_0x9C64F97D3F9CCA97("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (unk_0x9F94F2CFDCA78C55(iLocal_62) || unk_0x6255AE2591FE7603(iLocal_62, unk_0x507DA4994C3D8EBD(), 0))
										{
											bVar0 = unk_0x9F94F2CFDCA78C55(iLocal_61);
											if (!unk_0xBAE26BE2046B39E0(uLocal_190))
											{
											}
											if (bVar0 == 0 && iLocal_89 == 1)
											{
												unk_0xFFA7CDD296D07129(iLocal_61, 500, 1000, 0, 0, 0, 0);
												unk_0xA859D289EEB2D72A(iLocal_61, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
												unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
												func_180(1);
												func_175();
											}
										}
										else
										{
											func_145();
										}
										if (iLocal_668 == 1 && bLocal_148 == 1)
										{
											iLocal_47 = 4;
										}
										else if (bLocal_148)
										{
											iLocal_48 = 2;
										}
										break;
									
									case 2:
										unk_0x9C64F97D3F9CCA97("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_144();
										if (iLocal_53 && !func_143())
										{
											iLocal_48 = 4;
										}
										break;
									
									case 4:
										unk_0x9C64F97D3F9CCA97("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_142())
										{
											func_141();
										}
										if (bLocal_154)
										{
											iLocal_48 = 5;
										}
										if (unk_0xEC043AB2FEE0E94F(iLocal_61, 242628503) == 7)
										{
											unk_0xB5DC017AFD430D1B(&uLocal_120);
											unk_0x8E759206778E571F(0, iLocal_62, 5000, 0, 2);
											unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 5000);
											unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x6EE8A5CF9AC75F12(uLocal_120);
											unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
											unk_0x9F77DFFC61FCB68C(&uLocal_120);
										}
										break;
									
									case 5:
										func_138();
										if (!unk_0xE5D56342B0FF1D0D(iLocal_61))
										{
											if (unk_0xEC043AB2FEE0E94F(iLocal_61, 242628503) == 7)
											{
												unk_0xB5DC017AFD430D1B(&uLocal_120);
												unk_0xDE75E9DE5B6221E1(0, iLocal_62, 0);
												unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x6EE8A5CF9AC75F12(uLocal_120);
												unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
												unk_0x9F77DFFC61FCB68C(&uLocal_120);
											}
										}
										break;
								}
								if (func_137())
								{
									iLocal_47 = 11;
								}
								if (bLocal_148)
								{
								}
								func_136();
								if (iLocal_48 == 0)
								{
									if (func_134())
									{
										if (iLocal_142 == 4)
										{
											if (unk_0xD361727124133DF3(uLocal_65))
											{
												unk_0xA0A65B537B1F11EC(&uLocal_65);
											}
											if (unk_0xD361727124133DF3(uLocal_64))
											{
												unk_0xA0A65B537B1F11EC(&uLocal_64);
											}
											if (!unk_0xD361727124133DF3(iLocal_66))
											{
												iLocal_66 = func_132(uLocal_190);
											}
											iLocal_47 = 4;
										}
										else
										{
											iLocal_47 = 3;
										}
									}
									if (func_131())
									{
										func_130();
									}
								}
								if (func_129())
								{
									func_128();
									func_127();
									if (unk_0x594EB70937EC1486(iLocal_61, Local_183, 7f, 7f, 7f, 0, 1, 0))
									{
										iLocal_142 = 2;
										iLocal_47 = 3;
									}
									else
									{
										iLocal_47 = 4;
									}
								}
								if (bLocal_148)
								{
									if (!unk_0xC20B334EFA64243F(iLocal_62, 0))
									{
										func_125(uLocal_65, &uLocal_141);
									}
									else if (unk_0xD361727124133DF3(uLocal_65))
									{
										if (unk_0xD623E5BF8A42FDB2(iLocal_65) == 1)
										{
										}
										else
										{
											unk_0x109908E4511B0839(iLocal_65, 0);
											unk_0xEDB3DD98D55452E4(iLocal_65, 1);
										}
									}
								}
								if (func_124())
								{
									iLocal_47 = 10;
								}
								break;
							
							case 4:
								unk_0x9C64F97D3F9CCA97("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_123(1);
								if (func_142())
								{
									func_141();
									func_138();
								}
								if (func_137())
								{
									iLocal_47 = 11;
								}
								func_115();
								break;
							
							case 5:
								unk_0x9C64F97D3F9CCA97("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_123(1);
								if (!bLocal_151)
								{
									func_114(iLocal_61, &uLocal_192);
									uLocal_192 = uLocal_192;
									func_113();
									func_112();
									func_111();
									if (func_110())
									{
										func_109();
										func_175();
									}
									if (func_103(func_104()) < iLocal_191)
									{
										iLocal_47 = 12;
									}
								}
								func_49();
								break;
							
							case 10:
								unk_0x9C64F97D3F9CCA97("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_48();
								break;
							
							case 3:
								func_47();
								break;
							
							case 11:
								func_46();
								break;
							
							case 6:
								if (func_137())
								{
									iLocal_47 = 11;
								}
								func_33();
								break;
							
							case 8:
								if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
								{
									if (unk_0x2F406E91B59DB558(iLocal_61, unk_0x507DA4994C3D8EBD(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_47 = 6;
									}
									else
									{
										func_256();
									}
								}
								break;
							
							case 9:
								unk_0x9C64F97D3F9CCA97("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (unk_0xFD68187442384158(iLocal_62))
								{
									if (unk_0x9F94F2CFDCA78C55(iLocal_62))
									{
										if (unk_0xD361727124133DF3(iLocal_65))
										{
											unk_0xA0A65B537B1F11EC(&iLocal_65);
										}
										if (!unk_0xFD68187442384158(iLocal_61))
										{
											if (unk_0xFD68187442384158(iLocal_63))
											{
												unk_0x4095FD029041DD48(&iLocal_63);
											}
											func_32();
											iLocal_55 = 1;
											func_115();
										}
									}
								}
								break;
							
							case 12:
								if (unk_0xFD68187442384158(iLocal_63))
								{
									unk_0x4095FD029041DD48(&iLocal_63);
								}
								unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
								func_175();
								break;
							
							case 13:
								func_31();
								break;
							}
					}
					if (bLocal_59)
					{
						if (unk_0xBAE26BE2046B39E0(uLocal_190))
						{
							if (unk_0x6A89ECA8C773F1E8(uLocal_190))
							{
								if (unk_0x2A488C176D52CCA5(Local_183, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) > 150f)
								{
									func_256();
								}
							}
						}
					}
					else if (bLocal_148)
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
						{
							if (iLocal_47 != 6)
							{
								if (func_30(unk_0x507DA4994C3D8EBD(), iLocal_62, 1) > 150f && (!unk_0x9226425D9E480D72(iLocal_62) || unk_0x19F2D2C58150C825(iLocal_62)))
								{
									func_29(&uLocal_379, 0, 0);
									iLocal_47 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_65, iLocal_62, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							func_29(&uLocal_379, 0, 0);
						}
					}
					if (unk_0xFD68187442384158(iLocal_61))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
						{
							if (unk_0x6255AE2591FE7603(iLocal_61, unk_0x507DA4994C3D8EBD(), 1))
							{
								if (unk_0xFD68187442384158(iLocal_63))
								{
									if (unk_0x21F34311BCDA79B9(iLocal_63, iLocal_61))
									{
										unk_0x5B97F41A7BE54877(iLocal_63, 1, 1);
									}
								}
							}
						}
					}
					if (iLocal_149)
					{
						if (!iLocal_162)
						{
							if (!unk_0xE5D56342B0FF1D0D(iLocal_62) && !unk_0xE5D56342B0FF1D0D(iLocal_61))
							{
								if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(iLocal_62, 1), unk_0xBF1B13057E5119A4(iLocal_61, 1), 1) > 100f && unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(iLocal_62, 1), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 1) < 100f)
								{
									unk_0xA859D289EEB2D72A(iLocal_62, unk_0x507DA4994C3D8EBD(), 200f, -1, 0, 0);
									iLocal_162 = 1;
								}
							}
						}
					}
					if (bLocal_148 && !iLocal_149)
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
						{
							if (iLocal_89 == 3)
							{
								if (unk_0xEC043AB2FEE0E94F(iLocal_62, 1805844857) != 1)
								{
									unk_0x1E61DAA6A0EEC652(iLocal_62);
									unk_0xA859D289EEB2D72A(iLocal_62, iLocal_61, 200f, -1, 0, 0);
									unk_0x832DBDBEA29906F5(iLocal_62, joaat("MotionState_Run"), 1, 0, 0);
									iLocal_149 = 1;
								}
							}
							else if (unk_0xEC043AB2FEE0E94F(iLocal_62, 1805844857) != 1)
							{
								unk_0x1E61DAA6A0EEC652(iLocal_62);
								unk_0xA859D289EEB2D72A(iLocal_62, unk_0x507DA4994C3D8EBD(), 200f, -1, 0, 0);
								unk_0x832DBDBEA29906F5(iLocal_62, joaat("MotionState_Run"), 1, 0, 0);
								iLocal_149 = 1;
							}
							if (unk_0x89D7DDF7D591D231(iLocal_62, -2134635134))
							{
								unk_0xA859D289EEB2D72A(iLocal_62, iLocal_61, 200f, -1, 0, 0);
								unk_0x832DBDBEA29906F5(iLocal_62, joaat("MotionState_Run"), 1, 0, 0);
								iLocal_149 = 1;
							}
							if (iLocal_89 == 1 || iLocal_89 == 4)
							{
								if (unk_0x22605DE2E6933CF2(iLocal_62, cLocal_358, sLocal_368, 3))
								{
									if (unk_0x5132EC78980FBED7(iLocal_62, cLocal_358, sLocal_368) >= 0.922f)
									{
										unk_0xA859D289EEB2D72A(iLocal_62, unk_0x507DA4994C3D8EBD(), 200f, -1, 0, 0);
										unk_0x832DBDBEA29906F5(iLocal_62, joaat("MotionState_Run"), 1, 0, 0);
										iLocal_149 = 1;
									}
								}
								if (unk_0x22605DE2E6933CF2(iLocal_62, cLocal_358, sLocal_366, 3))
								{
									if (unk_0x5132EC78980FBED7(iLocal_62, cLocal_358, sLocal_366) >= 0.922f)
									{
										unk_0xA859D289EEB2D72A(iLocal_62, unk_0x507DA4994C3D8EBD(), 200f, -1, 0, 0);
										unk_0x832DBDBEA29906F5(iLocal_62, joaat("MotionState_Run"), 1, 0, 0);
										iLocal_149 = 1;
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
			func_256();
		}
	}
}

void func_1()
{
	if (unk_0xFD68187442384158(iLocal_61))
	{
		if (unk_0x9F94F2CFDCA78C55(iLocal_61))
		{
			if (unk_0xFD68187442384158(iLocal_62))
			{
				if (unk_0x9F94F2CFDCA78C55(iLocal_62))
				{
					func_256();
				}
			}
		}
	}
	if (unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (unk_0xD361727124133DF3(uLocal_64))
		{
			unk_0xA0A65B537B1F11EC(&iLocal_64);
		}
	}
	if (unk_0x9F94F2CFDCA78C55(iLocal_62))
	{
		if (unk_0xD361727124133DF3(iLocal_65))
		{
			unk_0xA0A65B537B1F11EC(&iLocal_65);
		}
	}
	if (!iLocal_160)
	{
		if (unk_0x9F94F2CFDCA78C55(iLocal_62))
		{
			func_2(&uLocal_193, 1);
			iLocal_160 = 1;
		}
	}
	if (!iLocal_161)
	{
		if (unk_0x9F94F2CFDCA78C55(iLocal_61))
		{
			func_2(&uLocal_193, 2);
			iLocal_161 = 1;
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
	if (unk_0xD361727124133DF3(uParam0))
	{
		if ((unk_0xFD68187442384158(iParam1) && unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD())) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x1BA544973A67E699(iParam1))
			{
				if (unk_0xCA8794CE207FC6D5(unk_0x379620F9B34A512B(iParam1), 0))
				{
					fVar1 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iParam1, 1), 1);
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
						unk_0xE344B71AFE01D194(iParam0, 1);
						unk_0x80882386D3DF8627(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xE344B71AFE01D194(iParam0, 0);
						unk_0x80882386D3DF8627(iParam0, 255);
					}
				}
			}
			else if (unk_0x91F594068DF4424F(iParam1))
			{
				if (!unk_0x9F94F2CFDCA78C55(unk_0x274BAC44978F9161(iParam1)))
				{
					fVar1 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iParam1, 1), 1);
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
						unk_0xE344B71AFE01D194(iParam0, 1);
						unk_0x80882386D3DF8627(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xE344B71AFE01D194(iParam0, 0);
						unk_0x80882386D3DF8627(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_4()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_62) || !bLocal_132)
	{
		func_5(&uLocal_379, iLocal_62, 0, 0, 1, 1, 1);
	}
	else
	{
		func_29(&uLocal_379, 0, 0);
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
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
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
	
	if (uParam0->f_1 && unk_0x4DA2E12E0157B5A3())
	{
		if (unk_0xF976C624234A4AA8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xD504011E20D63A81(iVar0))
	{
		if (!unk_0xD95428C8AA1DBBF2())
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
	if (func_26(iParam1) && unk_0xDAB2315B565377E3(iParam1))
	{
		iVar1 = 0;
		if (unk_0x91F594068DF4424F(iParam1))
		{
			unk_0xF4127D3DAB8D011F(unk_0x274BAC44978F9161(iParam1));
			unk_0xB215D95552289435(unk_0x274BAC44978F9161(iParam1), 1);
			if (unk_0xC76769D28EAFDE03(unk_0x274BAC44978F9161(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x1BA544973A67E699(iParam1))
		{
			unk_0x54E7B67452327959(unk_0x379620F9B34A512B(iParam1));
			if (unk_0xAEFA676AB984E73A(unk_0x379620F9B34A512B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xBCF2529C09F7A239(iParam1))
		{
			unk_0xF30B2A027AD7244C(unk_0xB7E8BD80F6126D63(iParam1));
			if (unk_0x5F6DACBDBCB51121(unk_0xB7E8BD80F6126D63(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x4DA2E12E0157B5A3())
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
					if ((unk_0xD504011E20D63A81(uParam0->f_3) && !unk_0xD504011E20D63A81(iVar0)) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
					{
						if ((iVar1 && !unk_0xBB51CB7A4D14453D()) && uParam8)
						{
							if (!func_28(iVar0))
							{
								func_12(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xA858564DC37EED5E("CMN_HINT", iVar0))
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
				if (unk_0xD504011E20D63A81(uParam0->f_3) && !unk_0xD504011E20D63A81(iVar0))
				{
					if (((unk_0x9226425D9E480D72(iParam1) && iVar1) && !unk_0xBB51CB7A4D14453D()) && uParam8)
					{
						if (!func_28(iVar0))
						{
							func_12(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xA858564DC37EED5E("CMN_HINT", iVar0))
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
			if (!unk_0xD504011E20D63A81(sParam5))
			{
				if (func_28(sParam5))
				{
					unk_0x4A4C1A1BC79EFE8F(1);
				}
			}
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
			{
				if (unk_0x70A314BA86AFCBFA(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(3) == 3 || unk_0xD686D61A57BCB6E7(3) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(6) == 3 || unk_0xD686D61A57BCB6E7(6) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(4) == 3 || unk_0xD686D61A57BCB6E7(4) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x202FB250328FD056(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(5) == 3 || unk_0xD686D61A57BCB6E7(5) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9331412F1452086E(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(2) == 3 || unk_0xD686D61A57BCB6E7(2) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x16F52C789EC7346D() == 3 || unk_0x16F52C789EC7346D() == 4)
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
	if (func_26(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xCBA47B699F417E4D(unk_0x507DA4994C3D8EBD());
	}
	if (unk_0x4DA2E12E0157B5A3())
	{
		unk_0x2E98407DE29E0D76(1);
		unk_0x0D1C3C2B4975D8AC(0);
		unk_0xAB5C0FE0C680BC7F("HINT_CAM_SCENE");
		unk_0x33D978A3F3EC8BD3("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x8EEEED91D5DD768C("FocusOut", 0, 0);
			unk_0x84795EA8F54230A1(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0xF976C624234A4AA8()
		{
			return 1;
		}
	}
	return 0;
}

int func_11(bool bParam0)
{
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97173.f_8270.f_100++;
			}
			return Global_97173.f_8270.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97173.f_8270.f_101++;
			}
			return Global_97173.f_8270.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97173.f_8270.f_102++;
			}
			return Global_97173.f_8270.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_12(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

int func_13(char* sParam0)
{
	if (!func_14(1, 1, 0))
	{
		if ((!unk_0x8FA72E132AAFA62F(sParam0) && func_28(sParam0)) || func_28("CMN_HINT"))
		{
			unk_0x4A4C1A1BC79EFE8F(1);
		}
		return 0;
	}
	switch (Global_34909)
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
		if (!unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xA4ADA92842355D33())
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
	if (unk_0x1B3FC52C6D531434())
	{
		return 0;
	}
	if (Global_66880)
	{
		return 0;
	}
	if (unk_0x25531002BCF0D968(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51754)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
		{
			if (unk_0x70A314BA86AFCBFA(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(3) == 3 || unk_0xD686D61A57BCB6E7(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(6) == 3 || unk_0xD686D61A57BCB6E7(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(4) == 3 || unk_0xD686D61A57BCB6E7(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x202FB250328FD056(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(5) == 3 || unk_0xD686D61A57BCB6E7(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9331412F1452086E(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(2) == 3 || unk_0xD686D61A57BCB6E7(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x16F52C789EC7346D() == 3 || unk_0x16F52C789EC7346D() == 4)
			{
				return 0;
			}
			if (unk_0x17883A5D027318C8())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_15()
{
	return unk_0xF976C624234A4AA8() <= Global_17236.f_5130 + 100;
}

int func_16(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
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
	
	if (unk_0xE5D56342B0FF1D0D(iParam1))
	{
		func_29(uParam0, 0, 0);
	}
	if (func_20(Param2, 0f, 0f, 0f))
	{
		if (unk_0x91F594068DF4424F(iParam1))
		{
			iVar0 = unk_0x274BAC44978F9161(iParam1);
			if (!unk_0x2A24448FF232F834(iVar0, 0))
			{
				if (unk_0xBC57175ED22C698D(iVar0))
				{
					if (!func_18())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB9DC6B81F29B0CA8(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x2E98407DE29E0D76(0);
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
	unk_0x05272DA4DFB8755D(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x8E759206778E571F(unk_0x507DA4994C3D8EBD(), iParam1, -1, iVar3, iVar4);
	unk_0x8EEEED91D5DD768C("FocusIn", 0, 0);
	unk_0xD56AC40382654643("HINT_CAM_SCENE");
	unk_0x84795EA8F54230A1(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xF976C624234A4AA8();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_18()
{
	return func_19(unk_0xAF65E5A58BE87D95());
}

int func_19(int iParam0)
{
	if (unk_0x26EA758C2A691D06(unk_0x687D51F360787909(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_20(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_21(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xF976C624234A4AA8() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
				{
					if (func_25(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_24(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xF976C624234A4AA8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_24(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xF976C624234A4AA8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_25(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xF976C624234A4AA8();
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
			if ((unk_0xF976C624234A4AA8() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
					{
						if (!func_25(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xF976C624234A4AA8();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_24(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_24(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_25(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
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
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
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
				if (!func_24(bParam1, bParam2, bParam3) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) || unk_0x7ECD7807CAEF4F14(unk_0x507DA4994C3D8EBD(), 2))
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
			if ((unk_0xF976C624234A4AA8() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
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
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) || func_22(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) || unk_0x7ECD7807CAEF4F14(unk_0x507DA4994C3D8EBD(), 2))
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
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0xED0A2A3FDC3E3728(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x500F4CA776CEBD0A(0, 140, 1);
			unk_0x500F4CA776CEBD0A(0, 80, 1);
			if (unk_0xF34A5B7A9ABA0975(0, 80))
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
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		unk_0x500F4CA776CEBD0A(0, 80, 1);
		if (unk_0xEE3FEF5CB30FDBA9())
		{
			if (unk_0xF34A5B7A9ABA0975(0, 80))
			{
				unk_0x2E98407DE29E0D76(0);
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
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0xED0A2A3FDC3E3728(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x500F4CA776CEBD0A(0, 140, 1);
			unk_0x500F4CA776CEBD0A(0, 80, 1);
			if (unk_0x25F05AE8FAE80806(0, 80) && unk_0xF976C624234A4AA8() > Global_96)
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
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		unk_0x500F4CA776CEBD0A(0, 80, 1);
		if (unk_0xEE3FEF5CB30FDBA9())
		{
			if (unk_0x25F05AE8FAE80806(0, 80) && unk_0xF976C624234A4AA8() > Global_96)
			{
				unk_0x2E98407DE29E0D76(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0x1BA544973A67E699(iParam0))
		{
			if (unk_0xCA8794CE207FC6D5(unk_0x379620F9B34A512B(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x91F594068DF4424F(iParam0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x274BAC44978F9161(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xBCF2529C09F7A239(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_27()
{
	unk_0x3DBE2A7AF9E71C82(&Global_2264, 4);
}

bool func_28(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
}

void func_29(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_2446210.f_4393, 25))
		{
			return;
		}
	}
	if (unk_0x4DA2E12E0157B5A3())
	{
		unk_0x0D1C3C2B4975D8AC(iParam2);
		unk_0x33D978A3F3EC8BD3("FocusIn");
		unk_0xAB5C0FE0C680BC7F("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x8EEEED91D5DD768C("FocusOut", 0, 0);
			unk_0x84795EA8F54230A1(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x2E98407DE29E0D76(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD504011E20D63A81(sVar0))
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD504011E20D63A81(uParam0->f_3))
	{
		if (func_28(uParam0->f_3))
		{
			unk_0x4A4C1A1BC79EFE8F(1);
		}
	}
	if (!unk_0xD504011E20D63A81(sVar0))
	{
		if (func_28(sVar0))
		{
			unk_0x4A4C1A1BC79EFE8F(1);
		}
	}
}

float func_30(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	if (!unk_0xE5D56342B0FF1D0D(iParam1))
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Var3, iParam2);
}

void func_31()
{
	func_256();
}

void func_32()
{
	if (!unk_0xBAE26BE2046B39E0(uLocal_190))
	{
		if (unk_0x9F94F2CFDCA78C55(iLocal_62))
		{
			Local_183 = { unk_0x019FA4BF61837E14(iLocal_62, 1067030938, 1069547520) };
		}
		else
		{
			Local_183 = { unk_0xFF447C6CF8EB3D23(unk_0xBF1B13057E5119A4(iLocal_62, 1), 1067030938, 1069547520) };
		}
		uLocal_190 = unk_0x134AE1EC4D58EAE4(joaat("pickup_money_wallet"), Local_183, uLocal_143, iLocal_191, 1, iLocal_84);
		iLocal_66 = func_132(uLocal_190);
		func_29(&uLocal_379, 0, 0);
		bLocal_59 = true;
	}
}

void func_33()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, "flee_backward_loop_shopkeeper", 3))
		{
			unk_0xB5DC017AFD430D1B(&uLocal_120);
			unk_0xEC0A546609840086(0, cLocal_358, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0xB68382181B4C4177(0, 40000f, 0);
			unk_0x6EE8A5CF9AC75F12(uLocal_120);
			unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
			unk_0x9F77DFFC61FCB68C(&uLocal_120);
		}
		else if (unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0xB5DC017AFD430D1B(&uLocal_120);
			unk_0xEC0A546609840086(0, cLocal_358, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0xB68382181B4C4177(0, 40000f, 0);
			unk_0x6EE8A5CF9AC75F12(uLocal_120);
			unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
			unk_0x9F77DFFC61FCB68C(&uLocal_120);
		}
		func_34(&uLocal_193, cLocal_102, sLocal_109, 4, 0, 0, 0);
		iLocal_153 = 1;
		unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
		unk_0x4EDE34FBADD967A6(0);
		func_256();
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
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_35(sParam2, iParam3, 0);
}

int func_35(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD858EC6FECDB4B3F(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
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
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_43(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_42();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_40();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_39())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
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
				switch (Global_14393.f_1)
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_37();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_36();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
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
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(0);
	Global_15692 = 1;
}

void func_37()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_38()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_104();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

bool func_41(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_42()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_43(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_44()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_46()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		unk_0xAC57FBF981AB03F4(iLocal_61);
		unk_0xA859D289EEB2D72A(iLocal_61, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
		unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
		if (unk_0xFD68187442384158(iLocal_63))
		{
			unk_0x4095FD029041DD48(&iLocal_63);
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD361727124133DF3(iLocal_64))
		{
			unk_0xA0A65B537B1F11EC(&iLocal_64);
		}
		unk_0xCA4DD92F1F2931F3(&iLocal_61);
	}
	if (unk_0x9F94F2CFDCA78C55(iLocal_62) || unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (unk_0xD361727124133DF3(iLocal_65))
		{
			unk_0xA0A65B537B1F11EC(&iLocal_65);
		}
		if (unk_0xD361727124133DF3(iLocal_64))
		{
			unk_0xA0A65B537B1F11EC(&iLocal_64);
		}
		if (unk_0xBAE26BE2046B39E0(uLocal_190))
		{
			if (unk_0x6A89ECA8C773F1E8(uLocal_190))
			{
				iLocal_55 = 1;
				func_115();
			}
			else
			{
				func_123(0);
				func_256();
			}
		}
		else
		{
			func_256();
		}
	}
}

void func_47()
{
	bool bVar0;
	
	func_115();
	if (unk_0xBAE26BE2046B39E0(uLocal_190))
	{
		if (unk_0x6A89ECA8C773F1E8(uLocal_190))
		{
		}
	}
	if (iLocal_142 == 1)
	{
		if (!iLocal_50)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
			{
				unk_0xAC57FBF981AB03F4(iLocal_62);
				unk_0x247B2966C6C2A4C1(iLocal_62, unk_0x507DA4994C3D8EBD(), 0, 16);
				unk_0xA1E4BA3B17C6D931(iLocal_62, 1);
			}
			if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
			{
				if (unk_0xBAE26BE2046B39E0(uLocal_190))
				{
					if (unk_0x6A89ECA8C773F1E8(uLocal_190))
					{
						unk_0xAC57FBF981AB03F4(iLocal_61);
						unk_0xB5DC017AFD430D1B(&uLocal_120);
						unk_0x3F07E364A21EBC20(0, unk_0xC615E5E6E1D987A1(uLocal_190), 1f, 20000, 0.25f, 0, 1193033728);
						unk_0x6EE8A5CF9AC75F12(uLocal_120);
						unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
						unk_0x9F77DFFC61FCB68C(&uLocal_120);
					}
				}
			}
			iLocal_50 = 1;
		}
	}
	if (iLocal_142 == 2)
	{
		if (!iLocal_50)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
			{
				unk_0xAC57FBF981AB03F4(iLocal_62);
				unk_0x247B2966C6C2A4C1(iLocal_62, unk_0x507DA4994C3D8EBD(), 0, 16);
				unk_0xA1E4BA3B17C6D931(iLocal_62, 1);
				unk_0x3C2614E45AB2F499(iLocal_62, 0);
				unk_0xCA4DD92F1F2931F3(&iLocal_62);
			}
			if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
			{
				if (unk_0xBAE26BE2046B39E0(uLocal_190))
				{
					if (unk_0x6A89ECA8C773F1E8(uLocal_190))
					{
						if (unk_0x594EB70937EC1486(iLocal_61, unk_0xC615E5E6E1D987A1(uLocal_190), 10f, 10f, 10f, 0, 1, 0))
						{
							if (iLocal_89 == 3)
							{
								if ((!unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, "handsup_standing_enter", 3) && !unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, "handsup_standing_base", 3)) && !unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, "handsup_standing_exit", 3))
								{
									unk_0xAC57FBF981AB03F4(iLocal_61);
									unk_0xB5DC017AFD430D1B(&uLocal_120);
									unk_0x3F07E364A21EBC20(0, unk_0xC615E5E6E1D987A1(uLocal_190), 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x6EE8A5CF9AC75F12(uLocal_120);
									unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
									unk_0x9F77DFFC61FCB68C(&uLocal_120);
									iLocal_50 = 1;
								}
							}
							else if ((!unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, sLocal_369, 3) && !unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, sLocal_365, 3)) && !unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, sLocal_367, 3))
							{
								unk_0xAC57FBF981AB03F4(iLocal_61);
								unk_0xB5DC017AFD430D1B(&uLocal_120);
								unk_0x3F07E364A21EBC20(0, unk_0xC615E5E6E1D987A1(uLocal_190), 1f, 20000, 0.25f, 0, 1193033728);
								unk_0x6EE8A5CF9AC75F12(uLocal_120);
								unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
								unk_0x9F77DFFC61FCB68C(&uLocal_120);
								iLocal_50 = 1;
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
					if (iLocal_89 == 3)
					{
						if ((!unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, "handsup_standing_enter", 3) && !unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, "handsup_standing_base", 3)) && !unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, "handsup_standing_exit", 3))
						{
							unk_0xAC57FBF981AB03F4(iLocal_61);
							unk_0xA859D289EEB2D72A(iLocal_61, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
							unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
							if (unk_0xD361727124133DF3(iLocal_64))
							{
								unk_0xA0A65B537B1F11EC(&iLocal_64);
							}
							unk_0xCA4DD92F1F2931F3(&iLocal_61);
							iLocal_50 = 1;
							iLocal_47 = 9;
						}
					}
					else if ((!unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, sLocal_369, 3) && !unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, sLocal_365, 3)) && !unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, sLocal_367, 3))
					{
						unk_0xAC57FBF981AB03F4(iLocal_61);
						unk_0xA859D289EEB2D72A(iLocal_61, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
						unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
						if (unk_0xD361727124133DF3(iLocal_64))
						{
							unk_0xA0A65B537B1F11EC(&iLocal_64);
						}
						unk_0xCA4DD92F1F2931F3(&iLocal_61);
						iLocal_50 = 1;
						iLocal_47 = 9;
					}
				}
			}
		}
	}
	if (iLocal_142 == 3)
	{
		if (!iLocal_50)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
			{
				unk_0xAC57FBF981AB03F4(iLocal_62);
				unk_0xA859D289EEB2D72A(iLocal_62, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
				unk_0xA1E4BA3B17C6D931(iLocal_62, 1);
				unk_0x3C2614E45AB2F499(iLocal_62, 0);
				unk_0xCA4DD92F1F2931F3(&iLocal_62);
			}
			if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
			{
				unk_0xAC57FBF981AB03F4(iLocal_61);
				unk_0xA859D289EEB2D72A(iLocal_61, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
				unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
				unk_0xCA4DD92F1F2931F3(&iLocal_61);
			}
			iLocal_55 = 1;
			iLocal_50 = 1;
		}
	}
	if (iLocal_142 == 1 || iLocal_142 == 2)
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
		{
			if (iLocal_50)
			{
				if (unk_0xBAE26BE2046B39E0(uLocal_190))
				{
					if (unk_0x6A89ECA8C773F1E8(uLocal_190))
					{
						if (unk_0x22605DE2E6933CF2(iLocal_61, cLocal_359, "pickup_low", 3))
						{
							if (unk_0x5132EC78980FBED7(iLocal_61, cLocal_359, "pickup_low") > 0.5f)
							{
								if (unk_0xBAE26BE2046B39E0(uLocal_190))
								{
									if (unk_0x6A89ECA8C773F1E8(uLocal_190))
									{
										func_34(&uLocal_193, cLocal_102, sLocal_108, 4, 0, 0, 0);
										unk_0x226EBEC6CC97441F(uLocal_190);
										bLocal_51 = true;
									}
								}
							}
						}
						else if (unk_0xEC043AB2FEE0E94F(iLocal_61, 242628503) == 7)
						{
							unk_0xAC57FBF981AB03F4(iLocal_61);
							unk_0xB5DC017AFD430D1B(&uLocal_120);
							unk_0xEC0A546609840086(0, cLocal_359, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_120);
							unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
							unk_0x9F77DFFC61FCB68C(&uLocal_120);
							unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
						}
					}
					else if (bLocal_51)
					{
						unk_0xFBF796BC19E6FC23(iLocal_61, iLocal_191);
						unk_0xCA4DD92F1F2931F3(&iLocal_61);
						func_180(3);
						func_175();
					}
					else
					{
						unk_0xA859D289EEB2D72A(iLocal_61, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
						unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
						if (unk_0xD361727124133DF3(iLocal_64))
						{
							unk_0xA0A65B537B1F11EC(&iLocal_64);
						}
						unk_0xCA4DD92F1F2931F3(&iLocal_61);
						iLocal_50 = 1;
						iLocal_47 = 12;
					}
				}
				else if (bLocal_51)
				{
					unk_0xFBF796BC19E6FC23(iLocal_61, iLocal_191);
					unk_0xCA4DD92F1F2931F3(&iLocal_61);
					func_180(3);
					func_175();
				}
				else
				{
					unk_0xA859D289EEB2D72A(iLocal_61, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
					unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
					if (unk_0xD361727124133DF3(iLocal_64))
					{
						unk_0xA0A65B537B1F11EC(&iLocal_64);
					}
					unk_0xCA4DD92F1F2931F3(&iLocal_61);
					iLocal_50 = 1;
					iLocal_47 = 12;
				}
			}
		}
		else
		{
			iLocal_47 = 9;
		}
	}
}

void func_48()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		unk_0xAC57FBF981AB03F4(iLocal_61);
		unk_0xA859D289EEB2D72A(iLocal_61, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
		unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
		unk_0xCA4DD92F1F2931F3(&iLocal_61);
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
	
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (!bLocal_151)
		{
			if (iLocal_152)
			{
				Var15 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
				iVar18 = 1;
				if (iLocal_89 == 1)
				{
					if (Var15.f_2 > 33.5f)
					{
						iVar18 = 0;
					}
				}
				if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_61, 5f, 5f, 5f, 0, 1, 0) && iVar18 == 1)
				{
					if (func_101(2))
					{
						unk_0x4A4C1A1BC79EFE8F(1);
					}
					if (unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
					{
						if (func_100(1, 0, 1))
						{
							if (!func_99())
							{
								if (!unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
								{
									func_91(1, 1, 1, 0);
									if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
									{
										while (!func_90(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), uLocal_76, 1, 1056964608, 0, 1) || func_143())
										{
											unk_0x0DCB93E7DEB1CC3F();
											unk_0x4EDE34FBADD967A6(0);
										}
										if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
										{
											unk_0x48367A1F7C9A1041(unk_0x507DA4994C3D8EBD(), 0, 0);
										}
									}
									unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 0);
									if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
									{
										unk_0x6A8A5F1A990BB700(iLocal_61, 0);
									}
									unk_0x0DCB93E7DEB1CC3F();
									unk_0x68C135A763206156(0);
									unk_0x629852E07D36F649(iLocal_140);
									if (unk_0xF611D1BB58990143())
									{
										func_88();
									}
									bLocal_151 = true;
									unk_0xC1B1E9A034A63A62(0);
								}
							}
						}
					}
				}
				else
				{
					func_86(unk_0xBF1B13057E5119A4(iLocal_61, 1), &uLocal_75, &uLocal_76);
				}
			}
			else if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_61, 15f, 15f, 15f, 0, 1, 0))
			{
				unk_0xB5DC017AFD430D1B(&uLocal_120);
				unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
				unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 2048, 2);
				if (iLocal_46 == 2)
				{
					unk_0xEC0A546609840086(0, cLocal_376, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, 0, 0, 0);
				}
				unk_0x6EE8A5CF9AC75F12(uLocal_120);
				unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
				unk_0x9F77DFFC61FCB68C(&uLocal_120);
				unk_0x832DBDBEA29906F5(iLocal_61, joaat("MotionState_Walk"), 0, 0, 0);
				iLocal_152 = 1;
			}
		}
		if (bLocal_151)
		{
			switch (iLocal_150)
			{
				case 0:
					unk_0x0DCB93E7DEB1CC3F();
					if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
						{
							func_83(iLocal_61, &Local_124, &Local_127, cLocal_360, sLocal_362);
							if (iLocal_89 == 1)
							{
								if (Local_127.f_2 > 225f && Local_127.f_2 < 265f)
								{
									if (Local_127.f_2 < 245f)
									{
										Local_127.f_2 = 225f;
									}
									else
									{
										Local_127.f_2 = 265f;
									}
								}
								else if (Local_127.f_2 > 45f && Local_127.f_2 < 85f)
								{
									if (Local_127.f_2 < 65f)
									{
										Local_127.f_2 = 45f;
									}
									else
									{
										Local_127.f_2 = 85f;
									}
								}
							}
							Local_124.f_2 = (Local_124.f_2 + 2f);
							unk_0xBC5E1C3D489E93FD(Local_124, &(Local_124.f_2));
							Var1 = { unk_0xE07FE144B472B7C8(cLocal_360, sLocal_362, Local_124, Local_127, 0f, 2) };
							Var10 = { Var1 - Local_124 };
							Var10.f_2 = 0f;
							fVar13 = unk_0x652D2EEEF1D3E62C(Var10);
							unk_0xBC5E1C3D489E93FD(Var1, &(Var1.f_2));
							fVar14 = (Local_124.f_2 - Var1.f_2);
							Local_127.f_0 = unk_0x1E7EBED5BB2C078C(fVar14, fVar13);
							if (Local_127.f_0 > 30f || Local_127.f_0 < -30f)
							{
								Local_127.f_0 = 0f;
							}
						}
						if (unk_0xCA8794CE207FC6D5(unk_0xF6EA6ED8FFB5B505(), 0))
						{
							if (!unk_0xCA8794CE207FC6D5(iVar0, 0))
							{
								iVar0 = unk_0xF6EA6ED8FFB5B505();
								unk_0xB72AA272E2B242A6(unk_0x26EA758C2A691D06(iVar0), &uVar4, &Var7);
								if (unk_0x594EB70937EC1486(iVar0, Local_124, (Var7.f_1 + 1.5f), (Var7.f_1 + 1.5f), 3f, 0, 1, 0) || unk_0x594EB70937EC1486(iVar0, unk_0xE07FE144B472B7C8(cLocal_360, sLocal_362, Local_124, Local_127, 0, 2), (Var7.f_1 + 1f), (Var7.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (iLocal_89 == 1)
									{
										if (Local_127.f_2 > 40f && Local_127.f_2 < 220f)
										{
											Local_79 = { -148.3897f, -1647.215f, 31.5867f };
											fLocal_78 = 331.9427f;
										}
										else
										{
											Local_79 = { -129.5632f, -1622.282f, 31.1122f };
											fLocal_78 = 148.9075f;
										}
									}
									else if (iLocal_89 == 3)
									{
										if (Local_127.f_2 > 160f && Local_127.f_2 < 340f)
										{
											Local_79 = { -319.709f, -837.0066f, 30.449f };
											fLocal_78 = 61.7986f;
										}
										else
										{
											Local_79 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_78 = 269.6216f;
										}
									}
									else if (iLocal_89 == 4)
									{
										if (Local_127.f_2 > 240f || Local_127.f_2 < 60f)
										{
											Local_79 = { 37.222f, -1005.04f, 28.4648f };
											fLocal_78 = 156.7986f;
										}
										else
										{
											Local_79 = { 29.9887f, -1033.184f, 28.3794f };
											fLocal_78 = 344.6216f;
										}
									}
									else
									{
										fLocal_78 = unk_0xA9D6B28E708753B6(iVar0);
										Local_79 = { func_81(Local_124, unk_0xE07FE144B472B7C8(cLocal_360, sLocal_362, Local_124, Local_127, 0, 2)) };
									}
									if (unk_0xCA8794CE207FC6D5(iVar0, 0))
									{
										unk_0xF85858E5CBF4D9F0(iVar0, Local_79, 1, 0, 0, 1);
										unk_0x248DC16118AE5035(iVar0, fLocal_78);
										unk_0xD90C30D269B19096(iVar0);
										unk_0x6F4AC9499C730CF0(iVar0, 1);
									}
								}
							}
						}
						unk_0x2F36A13C15BE17D7(Local_124, 20f, 2);
						unk_0x13196E39740F8C20(Local_124, 20f, 0);
						unk_0x4BCBC9058A5CECE1(Local_124, 2f, 1, 1, 0, 0);
						unk_0xB0CAF046D7045AFD(unk_0x507DA4994C3D8EBD(), 1);
						iLocal_63 = unk_0xCEC985247737A30E(iLocal_84, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 1, 1, 0);
						if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
						{
							unk_0x26030664C7D28388(iLocal_63, unk_0x507DA4994C3D8EBD(), unk_0xA8918EDB277FC51C(unk_0x507DA4994C3D8EBD(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						uLocal_130 = unk_0x1BEDF9ACAEAB15F8(Local_124, Local_127, 2);
						unk_0x36069312B76436F6(uLocal_130, 0);
						uLocal_131 = unk_0x07A7435490ED9AAB("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0xB754DFF4436CE5FF(uLocal_131, uLocal_130, sLocal_363, cLocal_360);
						unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
						unk_0x206610E40EE4D7D9(unk_0x507DA4994C3D8EBD(), uLocal_130, cLocal_360, sLocal_361, 1000f, -8f, 0, 0, 1148846080, 0);
						if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
						{
							unk_0xCEBD1B99CF343672(iLocal_61);
							unk_0x206610E40EE4D7D9(iLocal_61, uLocal_130, cLocal_360, sLocal_362, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						unk_0x6F430D0F1783A56E(uLocal_131, 1);
						unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
						func_34(&uLocal_193, cLocal_102, sLocal_114, 4, 0, 0, 0);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_150++;
					}
					unk_0x0DCB93E7DEB1CC3F();
					break;
				
				case 1:
					if ((unk_0x1955A5B9B65FEEBD(uLocal_130) && unk_0x6385FE4ECBDF05D2(uLocal_130) > 0.9f) || func_79(1000))
					{
						unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
						unk_0xBE5E0E5A454F4D6A(0f);
						unk_0x6F430D0F1783A56E(uLocal_131, 0);
						unk_0x44151B6071157DDD(uLocal_131, 0);
						func_78();
						if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
						{
							unk_0xCEBD1B99CF343672(iLocal_61);
							unk_0xFBF796BC19E6FC23(iLocal_61, (iLocal_191 - (iLocal_191 / 10)));
							Var1 = { unk_0xE07FE144B472B7C8(cLocal_360, sLocal_362, Local_124, Local_127, 1f, 2) };
							unk_0xBC5E1C3D489E93FD(Var1, &(Var1.f_2));
							unk_0xF85858E5CBF4D9F0(iLocal_61, Var1, 1, 0, 0, 1);
							unk_0x2DC5B31EBB810396(iLocal_61, 0);
							Var1 = { unk_0x99E69251597182A2(cLocal_360, sLocal_362, Local_124, Local_127, 1f, 2) };
							unk_0x248DC16118AE5035(iLocal_61, Var1.f_2);
							if (iLocal_89 == 4)
							{
								if (func_77(Var1.f_2, 0f, 90f))
								{
									unk_0xB5DC017AFD430D1B(&uLocal_120);
									unk_0x3F07E364A21EBC20(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 0.25f, 0, 1193033728);
									unk_0xB68382181B4C4177(0, unk_0xA9D6B28E708753B6(iLocal_61), 1);
									unk_0x6EE8A5CF9AC75F12(uLocal_120);
									unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
									unk_0x9F77DFFC61FCB68C(&uLocal_120);
								}
								else
								{
									unk_0xB5DC017AFD430D1B(&uLocal_120);
									unk_0x3F07E364A21EBC20(0, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 0.25f, 0, 1193033728);
									unk_0xB68382181B4C4177(0, unk_0xA9D6B28E708753B6(iLocal_61), 1);
									unk_0x6EE8A5CF9AC75F12(uLocal_120);
									unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
									unk_0x9F77DFFC61FCB68C(&uLocal_120);
								}
							}
							else
							{
								unk_0xB5DC017AFD430D1B(&uLocal_120);
								unk_0xB68382181B4C4177(0, Var1.f_2, 1);
								unk_0x6EE8A5CF9AC75F12(uLocal_120);
								unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
								unk_0x9F77DFFC61FCB68C(&uLocal_120);
							}
							unk_0xC3171961272B0BF2(iLocal_61, cLocal_377, 1048576000);
							unk_0x832DBDBEA29906F5(iLocal_61, joaat("MotionState_Walk"), 1, 0, 0);
							unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
						}
						if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
						{
							unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
							unk_0x243553B40CC46CFE(unk_0x507DA4994C3D8EBD(), 0, 0);
						}
						if (unk_0xFD68187442384158(iLocal_63))
						{
							unk_0x4095FD029041DD48(&iLocal_63);
						}
						if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
						{
							unk_0xFBF796BC19E6FC23(iLocal_61, (iLocal_191 - (iLocal_191 / 10)));
							unk_0x6A8A5F1A990BB700(iLocal_61, 1);
						}
						iVar19 = (iLocal_191 / 100);
						iVar19 *= 90;
						unk_0x4EDE34FBADD967A6(0);
						unk_0x28D21A983751927B(0, 0, 3, 0);
						func_52(func_104(), 1, iVar19);
						func_51(joaat("rc_wallets_returned"), 1);
						func_180(3);
						func_175();
					}
					else if (unk_0x89D7DDF7D591D231(unk_0x507DA4994C3D8EBD(), joaat("detach")))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_61) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
						{
							if (unk_0x21F34311BCDA79B9(iLocal_63, unk_0x507DA4994C3D8EBD()))
							{
								unk_0x5B97F41A7BE54877(iLocal_63, 0, 1);
								if (unk_0xB9DC6B81F29B0CA8(iLocal_61))
								{
									unk_0x26030664C7D28388(iLocal_63, iLocal_61, unk_0xA8918EDB277FC51C(iLocal_61, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								else
								{
									unk_0x26030664C7D28388(iLocal_63, iLocal_61, unk_0xA8918EDB277FC51C(iLocal_61, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								if (!iLocal_60)
								{
									if (func_34(&uLocal_193, cLocal_102, sLocal_108, 4, 0, 0, 0) || func_50())
									{
										iLocal_60 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_60)
					{
						if (func_34(&uLocal_193, cLocal_102, sLocal_108, 4, 0, 0, 0) || func_50())
						{
							iLocal_60 = 1;
						}
					}
					unk_0x0DCB93E7DEB1CC3F();
					break;
				}
		}
	}
	else
	{
		func_256();
	}
}

int func_50()
{
	if (Global_15692 == 4)
	{
		if (unk_0x49BDC46D7CAD9C63())
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
	
	unk_0x55FFE396AA3CA77A(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x96B68C67633472DC(iParam0, iVar0, 1);
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_53(Global_97173.f_29699[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_76();
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
					func_75(99, 1);
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
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
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
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
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
					switch (unk_0x00ADB26EA48763F7())
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
					func_75(95, iParam3);
					break;
				
				case 1:
					func_75(97, iParam3);
					break;
				
				case 2:
					func_75(96, iParam3);
					break;
			}
			func_75(98, iParam3);
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
	iVar5 = (Global_51747[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51747[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51747[iVar2] = 2147483647;
				}
				else
				{
					Global_51747[iVar2] = (Global_51747[iVar2] + iParam3);
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
				if ((Global_51747[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51747[iVar2];
			Global_51747[iVar2] = (Global_51747[iVar2] - iParam3);
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
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97173.f_23756.f_233[iVar2 /*69*/]++;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_1++;
		if (Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_55(iParam0);
	if (Global_34909 == 15)
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
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51755[iVar0 /*3*/][0] = Global_97173.f_23756[iVar0];
		Global_51755.f_31[iVar0 /*3*/][0] = Global_97173.f_23756.f_11[iVar0];
		Global_51755.f_62[iVar0 /*3*/][0] = Global_97173.f_23756.f_22[iVar0];
		Global_51755.f_93[iVar0 /*3*/][0] = Global_97173.f_23756.f_33[iVar0];
		Global_51755.f_124[iVar0 /*3*/][0] = Global_97173.f_23756.f_44[iVar0];
		Global_51755.f_155[iVar0 /*3*/][0] = Global_97173.f_23756.f_55[iVar0];
		Global_51755.f_186[iVar0 /*3*/][0] = Global_97173.f_23756.f_66[iVar0];
		Global_51755.f_217[iVar0 /*3*/][0] = Global_97173.f_23756.f_77[iVar0];
		Global_51755.f_248[iVar0 /*3*/][0] = Global_97173.f_23756.f_88[iVar0];
		if (!bParam0)
		{
			Global_51755[iVar0 /*3*/][1] = Global_97173.f_23756[iVar0];
			Global_51755.f_31[iVar0 /*3*/][1] = Global_97173.f_23756.f_11[iVar0];
			Global_51755.f_62[iVar0 /*3*/][1] = Global_97173.f_23756.f_22[iVar0];
			Global_51755.f_93[iVar0 /*3*/][1] = Global_97173.f_23756.f_33[iVar0];
			Global_51755.f_124[iVar0 /*3*/][1] = Global_97173.f_23756.f_44[iVar0];
			Global_51755.f_155[iVar0 /*3*/][1] = Global_97173.f_23756.f_55[iVar0];
			Global_51755.f_186[iVar0 /*3*/][1] = Global_97173.f_23756.f_66[iVar0];
			Global_51755.f_217[iVar0 /*3*/][1] = Global_97173.f_23756.f_77[iVar0];
			Global_51755.f_248[iVar0 /*3*/][1] = Global_97173.f_23756.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x96B68C67633472DC(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x96B68C67633472DC(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x96B68C67633472DC(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_56(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		}
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0) || unk_0x61D8FEAF64881CDA(Global_2097152[func_58() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xCD27BF29FB9012E2(&(Global_2097152[func_58() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x82FD00B995993186("COUP_RED");
		unk_0x923B18EB34FC2117(func_57(iParam0));
		unk_0x054BCC5519168683(&cVar1, &cVar1, 1, 0, "", 0);
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
	func_75(93, iParam0);
	func_75(29, iParam0);
	func_75(30, iParam0);
}

bool func_60(int iParam0)
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0x61D8FEAF64881CDA(Global_2097152[func_58() /*8053*/].f_5756.f_10, iParam0);
}

int func_61(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xC91582A6D1E6CE38(27))
	{
		return 0;
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x55FFE396AA3CA77A(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x96B68C67633472DC(joaat("num_cash_spent"), iVar1, 1);
		func_74(27, iVar1);
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
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_63(iParam0, iParam1);
}

int func_63(int iParam0, int iParam1)
{
	if (unk_0xC91582A6D1E6CE38(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_73(&Global_2543759))
	{
		if (func_71(&Global_2543759, iParam0))
		{
			return 0;
		}
		if (func_64(&Global_2543759, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB13535CD55ADA8AF(iParam0))
		{
			return 0;
		}
		if (unk_0xC91582A6D1E6CE38(iParam0))
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
	var uVar1[61];
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
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
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
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
	return (*uParam0)[iParam1] == 61;
}

void func_67(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_70(uParam0, iVar0);
		iVar0++;
	}
	func_68(&(uParam0->f_62), (8f - 0.5f));
}

void func_68(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_69() - fParam1);
	unk_0x3DBE2A7AF9E71C82(uParam0, 1);
	unk_0xCD27BF29FB9012E2(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_69()
{
	int iVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = unk_0xFACC0E85E40AD425();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xF976C624234A4AA8()) / 1000f);
}

void func_70(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
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
	return uParam0->f_68 == 1;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xF81DDE50AEEE85CC(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC190BD464AD91623(iParam0, iParam1);
	}
	return 0;
}

void func_75(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xD95428C8AA1DBBF2())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x55FFE396AA3CA77A(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x96B68C67633472DC(Global_50315[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_76()
{
	int iVar0;
	
	if (unk_0xA730AA29D1C70932())
	{
		unk_0x55FFE396AA3CA77A(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51747[0] == iVar0)
		{
			Global_51747[0] = iVar0;
		}
		unk_0x55FFE396AA3CA77A(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51747[1] == iVar0)
		{
			Global_51747[1] = iVar0;
		}
		unk_0x55FFE396AA3CA77A(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51747[2] == iVar0)
		{
			Global_51747[2] = iVar0;
		}
	}
}

int func_77(float fParam0, float fParam1, float fParam2)
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

void func_78()
{
	var uVar0;
	
	uVar0 = unk_0x75089805E99EDC28(26379945, unk_0x0CAFB9D38494283D(unk_0x507DA4994C3D8EBD(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD()), 1115815936, 1, 2);
	unk_0x6F430D0F1783A56E(uVar0, 1);
}

int func_79(int iParam0)
{
	if (unk_0x8D4100BAA46EE198())
	{
		if ((unk_0xF976C624234A4AA8() - Global_27) > iParam0)
		{
			Global_26 = unk_0xF976C624234A4AA8();
		}
		Global_27 = unk_0xF976C624234A4AA8();
		if ((unk_0xF976C624234A4AA8() - Global_26) > iParam0)
		{
			if (func_80())
			{
				Global_26 = unk_0xF976C624234A4AA8();
				return 1;
			}
		}
	}
	return 0;
}

int func_80()
{
	if (unk_0xBB02FD0C8166DE6D())
	{
		return 0;
	}
	if (unk_0x58FC9C7DF8FE009B(0, 18) || unk_0x58FC9C7DF8FE009B(2, 18))
	{
		return 1;
	}
	return 0;
}

Vector3 func_81(struct<3> Param0, struct<3> Param3)
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
	iVar0 = unk_0xF6EA6ED8FFB5B505();
	if (!unk_0x73E2404DC70203CD(iVar0))
	{
		unk_0xBAE5DF507EEC53C8(iVar0, 1, 0);
	}
	unk_0xB72AA272E2B242A6(unk_0x26EA758C2A691D06(iVar0), &Var7, &Var10);
	unk_0x28360C2B9B86505E(Param0, 3, &Var4, 1, 1077936128, 0);
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x0CAFB9D38494283D(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x0CAFB9D38494283D(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0x0CAFB9D38494283D(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0x0CAFB9D38494283D(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				if (unk_0xFD68187442384158(iVar0))
				{
					if (!unk_0xE5D56342B0FF1D0D(iVar0))
					{
						Var22 = { func_82(Var1, 0f, Var10) };
						Var25 = { func_82(Var1, 0f, Var7) };
						uVar29 = unk_0x9400A3EC34709233(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0xBFABF77FCEA8BA3F(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0x8FE221761D524CFE(Var1, Param0, 1) <= 5f || unk_0x8FE221761D524CFE(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x0CAFB9D38494283D(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x0CAFB9D38494283D(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0x0CAFB9D38494283D(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0x0CAFB9D38494283D(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				if (unk_0xFD68187442384158(iVar0))
				{
					if (!unk_0xE5D56342B0FF1D0D(iVar0))
					{
						Var22 = { func_82(Var1, 0f, Var10) };
						Var25 = { func_82(Var1, 0f, Var7) };
						uVar29 = unk_0x9400A3EC34709233(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0xBFABF77FCEA8BA3F(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0x8FE221761D524CFE(Var1, Param0, 1) <= 5f || unk_0x8FE221761D524CFE(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x0CAFB9D38494283D(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x0CAFB9D38494283D(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0x0CAFB9D38494283D(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x0CAFB9D38494283D(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0xFD68187442384158(iVar0))
				{
					if (!unk_0xE5D56342B0FF1D0D(iVar0))
					{
						Var22 = { func_82(Var1, 0f, Var10) };
						Var25 = { func_82(Var1, 0f, Var7) };
						uVar29 = unk_0x9400A3EC34709233(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0xBFABF77FCEA8BA3F(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0x8FE221761D524CFE(Var1, Param0, 1) <= 5f || unk_0x8FE221761D524CFE(Var1, Param3, 1) <= 5f)
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
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x0CAFB9D38494283D(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x0CAFB9D38494283D(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0x0CAFB9D38494283D(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x0CAFB9D38494283D(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0xFD68187442384158(iVar0))
				{
					if (!unk_0xE5D56342B0FF1D0D(iVar0))
					{
						Var22 = { func_82(Var1, 0f, Var10) };
						Var25 = { func_82(Var1, 0f, Var7) };
						uVar29 = unk_0x9400A3EC34709233(Var22, Var25, 511, iVar0, 7);
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
				if (unk_0xBFABF77FCEA8BA3F(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
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
					else if (unk_0x8FE221761D524CFE(Var1, Param0, 1) <= 5f || unk_0x8FE221761D524CFE(Var1, Param3, 1) <= 5f)
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

Vector3 func_82(struct<3> Param0, float fParam3, struct<2> Param4, var uParam6)
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

void func_83(int iParam0, var uParam1, var uParam2, char[4] cParam3, char* sParam4)
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
	*uParam1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0) };
	uParam2->f_2 = func_85(iParam0, unk_0x507DA4994C3D8EBD(), 1);
	fVar3 = func_85(iParam0, unk_0x507DA4994C3D8EBD(), 1);
	fVar4 = func_85(iParam0, unk_0x507DA4994C3D8EBD(), 1);
	Var16 = { unk_0xBF1B13057E5119A4(iParam0, 0) - unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0) };
	if (unk_0xCE40391AB65FE305(cParam3))
	{
		Var13 = { unk_0xE07FE144B472B7C8(cParam3, sParam4, *uParam1, *uParam2, 0, 2) };
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
					uParam2->f_2 = func_84(unk_0xBF1B13057E5119A4(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0xDA0070A0FA486D72(unk_0xBF1B13057E5119A4(iParam0, 0), uParam2->f_2, Var16) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = unk_0x46668681EA3C2CF0(*uParam1, Var13 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0xBFABF77FCEA8BA3F(uVar5, &iVar6, &Var10, &uVar7, &uVar19) == 2)
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
							*uParam1 = { unk_0xDA0070A0FA486D72(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), fVar4, Var16) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_84(Var13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
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

float func_84(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x1E7EBED5BB2C078C(fVar1, fVar2);
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

float func_85(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	Var3 = { unk_0xBF1B13057E5119A4(iParam1, 0) };
	return func_84(Var0, Var3, iParam2);
}

void func_86(struct<3> Param0, var uParam3, var uParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		Var1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) - Param0 };
		fVar4 = unk_0xA75239A5F28CBA62(Var1.f_0, Var1.f_1);
		if (func_87(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
		fVar4 = unk_0xA75239A5F28CBA62(Var1.f_0, Var1.f_1);
		if (func_87(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x11F6A4A45943670E(unk_0x507DA4994C3D8EBD()) > 30f)
		{
			*uParam3 = (6f * 4f);
		}
		else if (unk_0x11F6A4A45943670E(unk_0x507DA4994C3D8EBD()) > 20f)
		{
			*uParam3 = (6f * 3f);
		}
		else if (unk_0x11F6A4A45943670E(unk_0x507DA4994C3D8EBD()) > 10f)
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

int func_87(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		fVar0 = unk_0xA9D6B28E708753B6(iParam0);
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

void func_88()
{
	Global_14558 = 0;
	func_89();
}

void func_89()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
	}
}

int func_90(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x500F4CA776CEBD0A(0, 71, 1);
	unk_0x500F4CA776CEBD0A(0, 72, 1);
	unk_0x500F4CA776CEBD0A(0, 76, 1);
	unk_0x500F4CA776CEBD0A(0, 73, 1);
	unk_0x500F4CA776CEBD0A(0, 59, 1);
	unk_0x500F4CA776CEBD0A(0, 60, 1);
	if (bParam5)
	{
		unk_0x500F4CA776CEBD0A(0, 75, 1);
	}
	unk_0x500F4CA776CEBD0A(0, 80, 1);
	unk_0x500F4CA776CEBD0A(0, 69, 1);
	unk_0x500F4CA776CEBD0A(0, 70, 1);
	unk_0x500F4CA776CEBD0A(0, 68, 1);
	unk_0x500F4CA776CEBD0A(0, 74, 1);
	unk_0x500F4CA776CEBD0A(0, 86, 1);
	unk_0x500F4CA776CEBD0A(0, 81, 1);
	unk_0x500F4CA776CEBD0A(0, 82, 1);
	unk_0x500F4CA776CEBD0A(0, 138, 1);
	unk_0x500F4CA776CEBD0A(0, 136, 1);
	unk_0x500F4CA776CEBD0A(0, 114, 1);
	unk_0x500F4CA776CEBD0A(0, 107, 1);
	unk_0x500F4CA776CEBD0A(0, 110, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 87, 1);
	unk_0x500F4CA776CEBD0A(0, 88, 1);
	unk_0x500F4CA776CEBD0A(0, 113, 1);
	unk_0x500F4CA776CEBD0A(0, 115, 1);
	unk_0x500F4CA776CEBD0A(0, 116, 1);
	unk_0x500F4CA776CEBD0A(0, 117, 1);
	unk_0x500F4CA776CEBD0A(0, 118, 1);
	unk_0x500F4CA776CEBD0A(0, 119, 1);
	unk_0x500F4CA776CEBD0A(0, 131, 1);
	unk_0x500F4CA776CEBD0A(0, 132, 1);
	unk_0x500F4CA776CEBD0A(0, 123, 1);
	unk_0x500F4CA776CEBD0A(0, 126, 1);
	unk_0x500F4CA776CEBD0A(0, 129, 1);
	unk_0x500F4CA776CEBD0A(0, 130, 1);
	unk_0x500F4CA776CEBD0A(0, 133, 1);
	unk_0x500F4CA776CEBD0A(0, 134, 1);
	unk_0x65C671B5F3251D24();
	if ((unk_0xF976C624234A4AA8() - Global_28) > 500)
	{
		unk_0x7674FE6F22323056(iParam0, uParam1, iParam2, iParam4);
	}
	Global_28 = unk_0xF976C624234A4AA8();
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0x75E01E8585722F89(unk_0x11F6A4A45943670E(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_91(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x62F999FAD28AC182(unk_0xAF65E5A58BE87D95());
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 1);
		func_98(1);
		unk_0x3CD3516D9FBE0424();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x49BDC46D7CAD9C63())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!func_38())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_97(1, iParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_98(0);
		unk_0x5DC2C7ED9A68FCEF();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x56D29F96CA2CFAC2();
		}
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 0);
		func_97(0, iParam3, iParam2);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !func_92(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
		}
		Global_68065 = 0;
	}
}

int func_92(int iParam0)
{
	if (func_94(iParam0, 0))
	{
		return 1;
	}
	if (func_93())
	{
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return 1;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_93()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

bool func_94(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_95(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_96();
	}
	if (Global_1315875[iVar1] == 1)
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

int func_96()
{
	return Global_1312736;
}

int func_97(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0x9FD74BBA3650C4CD() != iParam0 && uParam2)
		{
			unk_0x889006E2EE739868(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_98(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 13);
	}
}

int func_99()
{
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (func_143())
		{
			return 1;
		}
	}
	return 0;
}

int func_100(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x6D1105B605F9B478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
		iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (bParam0)
		{
			if (unk_0xE5D56342B0FF1D0D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE5D56342B0FF1D0D(iVar0))
			{
				if (unk_0xE634CB9EE7094537(iVar0, -1) != unk_0x507DA4994C3D8EBD())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE5D56342B0FF1D0D(iVar0))
		{
			if (unk_0xEE28BD1C8F477A55(iVar0) < 0.95f || unk_0xEE28BD1C8F477A55(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()))
	{
		return 0;
	}
	if (!unk_0x352008B5469ACC31(unk_0xAF65E5A58BE87D95()))
	{
		return 0;
	}
	return 1;
}

bool func_101(int iParam0)
{
	return func_28(func_102(iParam0));
}

char* func_102(int iParam0)
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

int func_103(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x55FFE396AA3CA77A(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x55FFE396AA3CA77A(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x55FFE396AA3CA77A(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_104()
{
	func_105();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_105()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_108(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_107(unk_0x507DA4994C3D8EBD());
			if (func_106(iVar0) && (!func_41(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_106(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_106(int iParam0)
{
	return iParam0 < 3;
}

int func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_108(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_108(int iParam0)
{
	if (func_106(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_109()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		unk_0xA859D289EEB2D72A(iLocal_61, unk_0x507DA4994C3D8EBD(), 150f, -1, 0, 0);
		unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_110()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 3f, 3f, 3f };
	Var3 = { -3f, -3f, -3f };
	if (unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		return 1;
	}
	else
	{
		if (unk_0x6255AE2591FE7603(iLocal_61, unk_0x507DA4994C3D8EBD(), 1))
		{
			return 1;
		}
		if (unk_0x0982F2F40B035E77(unk_0xC5B1818639240D24(iLocal_61, 31086, 0f, 0f, 0f), 5f, 1))
		{
			return 1;
		}
		Var0 = { Var0 + unk_0xC5B1818639240D24(iLocal_61, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + unk_0xC5B1818639240D24(iLocal_61, 31086, 0f, 0f, 0f) };
		if ((unk_0x876E2901E525BE19(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0x876E2901E525BE19(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0x876E2901E525BE19(Var3, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0x0EECD6636717FFA3(unk_0xC5B1818639240D24(iLocal_61, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_111()
{
	if (!unk_0xE5D56342B0FF1D0D(iLocal_61))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iLocal_61, 1)) > (fLocal_164 + 50f))
		{
			func_175();
		}
		else if (func_103(func_104()) < iLocal_191)
		{
			func_175();
		}
	}
}

void func_112()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_61, Global_18, 0, 1, 0))
		{
			unk_0x8E759206778E571F(unk_0x507DA4994C3D8EBD(), iLocal_61, 3000, 0, 2);
			unk_0x8E759206778E571F(iLocal_61, unk_0x507DA4994C3D8EBD(), 3000, 0, 2);
		}
	}
}

void func_113()
{
	float fVar0;
	
	if (iLocal_89 == 1)
	{
		fVar0 = 13f;
	}
	if (iLocal_89 == 4)
	{
		fVar0 = 5.75f;
	}
	if (iLocal_89 == 1 || iLocal_89 == 4)
	{
		if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Local_165, Local_168, fVar0, 0, 1, 0))
		{
			if (!iLocal_156)
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
				{
					unk_0xDE75E9DE5B6221E1(iLocal_61, unk_0x507DA4994C3D8EBD(), 0);
					iLocal_156 = 1;
					iLocal_157 = 0;
				}
			}
		}
		if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Local_171, Local_174, fVar0, 0, 1, 0))
		{
			if (!iLocal_157)
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
				{
					unk_0xDE75E9DE5B6221E1(iLocal_61, unk_0x507DA4994C3D8EBD(), 0);
					iLocal_157 = 1;
					iLocal_156 = 0;
				}
			}
		}
		if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Local_177, Local_180, fVar0, 0, 1, 0))
		{
			if (!iLocal_158)
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
				{
					iLocal_158 = 1;
				}
			}
		}
	}
	if (!iLocal_159)
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
		{
			if (unk_0x2F406E91B59DB558(iLocal_61, unk_0x507DA4994C3D8EBD(), 25f, 25f, 5f, 0, 1, 0) && unk_0x15DEAA4402D18301(iLocal_61, unk_0x507DA4994C3D8EBD(), 17))
			{
				if (func_34(&uLocal_193, cLocal_102, sLocal_107, 4, 0, 0, 0) || func_50())
				{
					if (!unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, "flee_forward_outro_shopkeeper", 3))
					{
						unk_0xB5DC017AFD430D1B(&uLocal_120);
						unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
						if (iLocal_46 == 2)
						{
							unk_0xEC0A546609840086(0, cLocal_376, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x6EE8A5CF9AC75F12(uLocal_120);
						unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
						unk_0x9F77DFFC61FCB68C(&uLocal_120);
						iLocal_159 = 1;
					}
				}
			}
		}
	}
}

void func_114(int iParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x9F94F2CFDCA78C55(iParam0))
			{
				unk_0xB5DC017AFD430D1B(&uLocal_120);
				unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
				unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
				unk_0x6EE8A5CF9AC75F12(uLocal_120);
				unk_0x8229311A391A4EC6(iParam0, uLocal_120);
				unk_0x9F77DFFC61FCB68C(&uLocal_120);
				unk_0xC1B1E9A034A63A62(0);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0x9F94F2CFDCA78C55(iParam0))
			{
				if (unk_0x849DBD2D635C99D5(iParam0, unk_0x507DA4994C3D8EBD(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x9F94F2CFDCA78C55(iParam0))
			{
				if (!unk_0x849DBD2D635C99D5(iParam0, unk_0x507DA4994C3D8EBD(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_115()
{
	if (unk_0x0561B9096FB80229(uLocal_190))
	{
		if (!unk_0xE5D56342B0FF1D0D(iLocal_61))
		{
			fLocal_164 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iLocal_61, 1));
		}
		func_51(joaat("rc_wallets_recovered"), 1);
		unk_0x5C68F3EBC8A92D55(0, 200, 250);
		if (unk_0xFD68187442384158(iLocal_63))
		{
			unk_0x4095FD029041DD48(&iLocal_63);
		}
		func_118();
		func_117(&uLocal_391);
		if (unk_0xFD68187442384158(iLocal_61))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
			{
				unk_0xA769A4326FC5BBEA(iLocal_61, 0);
			}
		}
		func_123(0);
		unk_0x226EBEC6CC97441F(uLocal_190);
		if (!iLocal_55)
		{
			iLocal_47 = 5;
			func_116(2);
		}
		else
		{
			iLocal_47 = 12;
		}
	}
}

void func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_12(func_102(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 1))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_12(func_102(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 2))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_12(func_102(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 2);
				}
			}
			break;
	}
}

void func_117(var uParam0)
{
	*uParam0 = -99;
}

void func_118()
{
	iLocal_66 = 0;
	if (!unk_0xD361727124133DF3(iLocal_64))
	{
		if (!unk_0xE5D56342B0FF1D0D(iLocal_61))
		{
			iLocal_64 = func_119(iLocal_61, 0, 0);
		}
	}
}

int func_119(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_120(iParam0, bParam1, 145);
}

int func_120(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_121(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xD361727124133DF3(uVar0)) && unk_0xD177A95825B53731(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0x2B271F66198227B7(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_121(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFD68187442384158(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB6F075D13B917FBE(iParam0);
	if (unk_0x1BA544973A67E699(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_122(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x109908E4511B0839(uVar0, bParam1);
		}
		else
		{
			unk_0xEDB3DD98D55452E4(iVar0, 2);
		}
	}
	else if (unk_0x91F594068DF4424F(iParam0))
	{
		unk_0x1D8833C0F155BFE7(iVar0, func_122(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
		unk_0x109908E4511B0839(iVar0, bParam1);
	}
	else if (unk_0xBCF2529C09F7A239(iParam0))
	{
		unk_0x1D8833C0F155BFE7(iVar0, func_122(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_122(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_123(bool bParam0)
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61) && iLocal_89 == 4)
	{
		if (unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0xB5DC017AFD430D1B(&uLocal_120);
			unk_0xEC0A546609840086(0, cLocal_358, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
			if (bParam0)
			{
				unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			unk_0x6EE8A5CF9AC75F12(uLocal_120);
			unk_0xAC57FBF981AB03F4(iLocal_61);
			unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
			unk_0x9F77DFFC61FCB68C(&uLocal_120);
		}
	}
}

int func_124()
{
	if (unk_0xFD68187442384158(iLocal_63))
	{
		if (unk_0xDF75DAAACD32E49E(iLocal_63))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
			{
				if (unk_0x21F34311BCDA79B9(iLocal_63, iLocal_61))
				{
					if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_61, 18f, 18f, 18f, 0, 1, 0))
					{
						if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
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

void func_125(int iParam0, var uParam1)
{
	if (unk_0xD361727124133DF3(uParam0))
	{
		if (unk_0xF976C624234A4AA8() > *uParam1 + 500)
		{
			if (unk_0xD623E5BF8A42FDB2(iParam0) == 1)
			{
				unk_0x109908E4511B0839(iParam0, true);
			}
			else
			{
				unk_0x109908E4511B0839(iParam0, false);
				unk_0xEDB3DD98D55452E4(iParam0, 1);
			}
			*uParam1 = unk_0xF976C624234A4AA8();
		}
		if (!unk_0xBB51CB7A4D14453D() && func_126(0))
		{
			func_116(1);
		}
	}
}

bool func_126(int iParam0)
{
	return unk_0x61D8FEAF64881CDA(Global_97169, iParam0);
}

void func_127()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_61, 8f, 8f, 18f, 0, 1, 0) || unk_0x9226425D9E480D72(iLocal_61))
		{
			unk_0x3DF5706BBD8F5B5B();
		}
	}
}

void func_128()
{
	if (unk_0xD361727124133DF3(iLocal_65))
	{
		unk_0xA0A65B537B1F11EC(&iLocal_65);
	}
	if (unk_0xFD68187442384158(iLocal_63))
	{
		if (unk_0xDF75DAAACD32E49E(iLocal_63))
		{
			unk_0x5B97F41A7BE54877(iLocal_63, 1, 1);
			unk_0x4095FD029041DD48(&iLocal_63);
			func_32();
		}
	}
	else
	{
		func_32();
	}
	if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
	{
		if (func_34(&uLocal_193, cLocal_102, sLocal_106, 4, 0, 0, 0) || func_50())
		{
			if (iLocal_46 == 2)
			{
				unk_0xB2B080B88A4144B7(iLocal_62, 128, 1);
				unk_0xB2B080B88A4144B7(iLocal_62, 2, 1);
				unk_0xB2B080B88A4144B7(iLocal_62, 1, 0);
				unk_0xA859D289EEB2D72A(iLocal_62, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
			}
			unk_0xA1E4BA3B17C6D931(iLocal_62, 1);
		}
	}
}

int func_129()
{
	if (!unk_0xE5D56342B0FF1D0D(iLocal_62))
	{
		if (unk_0x6255AE2591FE7603(iLocal_62, unk_0x507DA4994C3D8EBD(), 1))
		{
			if (bLocal_148)
			{
				return 1;
			}
		}
	}
	else if (bLocal_148)
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		unk_0xAC57FBF981AB03F4(iLocal_61);
		unk_0xA859D289EEB2D72A(iLocal_61, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
		unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
		unk_0x4EDE34FBADD967A6(0);
		unk_0xCA4DD92F1F2931F3(&iLocal_61);
	}
	if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
	{
		func_34(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0);
		unk_0xB5DC017AFD430D1B(&uLocal_120);
		unk_0xCBA47B699F417E4D(0);
		unk_0x247B2966C6C2A4C1(0, unk_0x507DA4994C3D8EBD(), 0, 16);
		unk_0x6EE8A5CF9AC75F12(uLocal_120);
		unk_0x8229311A391A4EC6(iLocal_62, uLocal_120);
		unk_0x9F77DFFC61FCB68C(&uLocal_120);
		unk_0xA1E4BA3B17C6D931(iLocal_62, 1);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x3C2614E45AB2F499(iLocal_62, 0);
		unk_0xCA4DD92F1F2931F3(&iLocal_62);
	}
}

int func_131()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (unk_0x1983DA3C921BB046(iLocal_61))
		{
			return 1;
		}
	}
	return 0;
}

int func_132(var uParam0)
{
	return func_133(uParam0);
}

int func_133(var uParam0)
{
	var uVar0;
	
	if (!unk_0xBAE26BE2046B39E0(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x200CF8FFC0E56B0C(uParam0);
	unk_0x1D8833C0F155BFE7(uVar0, func_122(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
	return iVar0;
}

int func_134()
{
	if (unk_0xBAE26BE2046B39E0(uLocal_190))
	{
		if (unk_0x6A89ECA8C773F1E8(uLocal_190))
		{
			if (unk_0xFD68187442384158(iLocal_62))
			{
				if (!unk_0xE5D56342B0FF1D0D(iLocal_62))
				{
					if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
					{
						if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_62, 18f, 18f, 18f, 0, 1, 0) || unk_0x6255AE2591FE7603(iLocal_62, unk_0x507DA4994C3D8EBD(), 1))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_142 = 1;
							return 1;
						}
					}
				}
				if (func_135())
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_142 = 2;
					return 1;
				}
				if (unk_0x9F94F2CFDCA78C55(iLocal_62))
				{
					if (unk_0x6255AE2591FE7603(iLocal_62, unk_0x507DA4994C3D8EBD(), 1))
					{
						if (unk_0xFD68187442384158(iLocal_61))
						{
							if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
							{
								unk_0xAC57FBF981AB03F4(iLocal_61);
								unk_0xA769A4326FC5BBEA(iLocal_61, 0);
							}
						}
						unk_0x5AE11BC36633DE4E(0);
						iLocal_142 = 2;
						return 1;
					}
				}
				else if (unk_0x6255AE2591FE7603(iLocal_62, unk_0x507DA4994C3D8EBD(), 1))
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_142 = 2;
					if (unk_0xFD68187442384158(iLocal_61))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
						{
							unk_0xAC57FBF981AB03F4(iLocal_61);
							unk_0xA769A4326FC5BBEA(iLocal_61, 0);
						}
					}
					if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
					{
						unk_0xAC57FBF981AB03F4(iLocal_62);
						unk_0xA859D289EEB2D72A(iLocal_62, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
						unk_0xA1E4BA3B17C6D931(iLocal_62, 1);
						unk_0x3C2614E45AB2F499(iLocal_62, 0);
						unk_0xCA4DD92F1F2931F3(&iLocal_62);
					}
					return 1;
				}
			}
			if (unk_0xFD68187442384158(iLocal_61))
			{
				if (!unk_0xE5D56342B0FF1D0D(iLocal_61))
				{
					if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_61, 5.3f, 5.3f, 6f, 0, 1, 0))
					{
						if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
						{
							if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iLocal_61) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iLocal_61))
							{
								unk_0x5AE11BC36633DE4E(0);
								iLocal_142 = 3;
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

int func_135()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
	{
		if (unk_0x2A71687AF0AE817B(iLocal_62, unk_0x507DA4994C3D8EBD()) && unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_62, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
			{
				if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iLocal_62) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iLocal_62))
				{
					return 1;
				}
			}
		}
		if (unk_0x2F0EF8797B769C86(unk_0x507DA4994C3D8EBD()))
		{
			return 1;
		}
		if (unk_0x1983DA3C921BB046(iLocal_62))
		{
			return 1;
		}
	}
	return 0;
}

void func_136()
{
	if (iLocal_57)
	{
		if (!iLocal_58)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
			{
				if (unk_0x73741D3DABB81B29(iLocal_62, 4))
				{
					if ((func_34(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0) || func_50()) || func_50())
					{
						iLocal_58 = 1;
					}
				}
				else if ((func_34(&uLocal_193, cLocal_102, sLocal_106, 4, 0, 0, 0) || func_50()) || func_50())
				{
					iLocal_58 = 1;
				}
			}
		}
	}
	else if (func_135())
	{
		if ((func_34(&uLocal_193, cLocal_102, sLocal_115, 4, 0, 0, 0) || func_50()) || func_50())
		{
			if (unk_0x73741D3DABB81B29(iLocal_62, 4))
			{
				unk_0x247B2966C6C2A4C1(iLocal_62, unk_0x507DA4994C3D8EBD(), 0, 16);
			}
			else
			{
				func_128();
			}
			iLocal_57 = 1;
		}
	}
}

int func_137()
{
	int iVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 7))
		{
			if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_61, 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iLocal_61) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iLocal_61))
				{
					return 1;
				}
			}
		}
		if (unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar0, 1))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (unk_0xEA4A2F1853D39672(iLocal_61, joaat("weapon_stungun"), 0))
				{
					return 1;
				}
			}
		}
		if (unk_0x6255AE2591FE7603(iLocal_61, unk_0x507DA4994C3D8EBD(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x0982F2F40B035E77(unk_0xC5B1818639240D24(iLocal_61, 31086, 0f, 0f, 0f), 3f, 1))
	{
		return 1;
	}
	return 0;
}

void func_138()
{
	if (iLocal_46 == 2)
	{
	}
	if (!func_143())
	{
		if (unk_0x83666F9FB8FEBD4B() > 10000)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
			{
				if (!unk_0x17E998AB655366FD(iLocal_61))
				{
					func_139(iLocal_61, "GENERIC_CURSE_MED", 24);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
		}
	}
	if (!bLocal_59)
	{
		if (func_30(unk_0x507DA4994C3D8EBD(), iLocal_62, 1) > 200f)
		{
			if (!unk_0x9226425D9E480D72(iLocal_62) || unk_0x19F2D2C58150C825(iLocal_62))
			{
				iLocal_47 = 8;
			}
		}
	}
}

void func_139(int iParam0, char* sParam1, int iParam2)
{
	unk_0xF3E45A7DABC97254(iParam0, sParam1, func_140(iParam2), 1);
}

int func_140(int iParam0)
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

void func_141()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (!bLocal_52)
		{
			if (unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, "flee_backward_loop_shopkeeper", 3))
			{
				unk_0xB5DC017AFD430D1B(&uLocal_120);
				unk_0xEC0A546609840086(0, cLocal_358, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
				unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x6EE8A5CF9AC75F12(uLocal_120);
				unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
				unk_0x9F77DFFC61FCB68C(&uLocal_120);
				iLocal_163 = 3;
				bLocal_52 = true;
			}
			else if (unk_0x22605DE2E6933CF2(iLocal_61, cLocal_358, "flee_forward_loop_shopkeeper", 3))
			{
				unk_0xB5DC017AFD430D1B(&uLocal_120);
				unk_0xEC0A546609840086(0, cLocal_358, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
				unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x6EE8A5CF9AC75F12(uLocal_120);
				unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
				unk_0x9F77DFFC61FCB68C(&uLocal_120);
				iLocal_163 = 3;
				bLocal_52 = true;
			}
			else
			{
				bLocal_52 = true;
			}
		}
		if (bLocal_52)
		{
			if (!iLocal_135)
			{
				if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_61, 7f, 7f, 7f, 0, 1, 0))
				{
					if (unk_0xEC043AB2FEE0E94F(iLocal_61, 242628503) == 1)
					{
						if (unk_0xCE91B0C5B23E0134(iLocal_61) == iLocal_163)
						{
							unk_0x8E759206778E571F(iLocal_61, unk_0x507DA4994C3D8EBD(), 9000, 0, 2);
							func_34(&uLocal_193, cLocal_102, sLocal_105, 4, 0, 0, 0);
							bLocal_154 = true;
							iLocal_135 = 1;
						}
					}
					else
					{
						unk_0x5466EB7A3FD9AFF0(iLocal_61, 1);
						func_34(&uLocal_193, cLocal_102, sLocal_105, 4, 0, 0, 0);
						unk_0xB5DC017AFD430D1B(&uLocal_120);
						unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), 7000, 0, 2);
						unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 7000);
						unk_0x6EE8A5CF9AC75F12(uLocal_120);
						unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
						unk_0x9F77DFFC61FCB68C(&uLocal_120);
						unk_0xC1B1E9A034A63A62(0);
						bLocal_154 = true;
						iLocal_135 = 1;
					}
				}
			}
		}
	}
}

int func_142()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_61, 12f, 12f, 5f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_143()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

void func_144()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (!bLocal_133)
		{
			iLocal_137 = unk_0xF976C624234A4AA8();
			bLocal_133 = true;
		}
		if (bLocal_133)
		{
			iLocal_138 = unk_0xF976C624234A4AA8();
			if (!iLocal_53)
			{
				if ((iLocal_138 - iLocal_137) > 500)
				{
					if (!func_143())
					{
						if (func_34(&uLocal_193, cLocal_102, sLocal_104, 4, 0, 0, 0) || func_50())
						{
							if (iLocal_46 == 2)
							{
								if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
								{
									if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
									{
									}
								}
							}
							if (iLocal_46 == 1)
							{
								if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
								{
								}
							}
							if (unk_0xD361727124133DF3(iLocal_64))
							{
								unk_0xA0A65B537B1F11EC(&iLocal_64);
							}
							iLocal_53 = 1;
						}
					}
				}
			}
		}
	}
}

void func_145()
{
	float fVar0;
	
	if (!bLocal_54)
	{
		if (iLocal_89 == 1)
		{
			fVar0 = 1f;
		}
		if (iLocal_89 == 2)
		{
			fVar0 = 4f;
		}
		if (iLocal_89 != 2)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_61) && !unk_0x9F94F2CFDCA78C55(iLocal_62))
			{
				if (!func_172())
				{
					if (func_159())
					{
						func_256();
					}
				}
				if (func_158())
				{
					if (!unk_0xD361727124133DF3(uLocal_67))
					{
						if (!unk_0xE5D56342B0FF1D0D(iLocal_62))
						{
							iLocal_67 = func_119(iLocal_62, 1, 0);
						}
						func_150(1);
					}
				}
				if (func_149())
				{
					func_148();
					if (iLocal_89 == 3)
					{
						if (!iLocal_56)
						{
							unk_0xB5DC017AFD430D1B(&uLocal_120);
							unk_0x8E759206778E571F(0, iLocal_62, 16000, 0, 2);
							unk_0x3F07E364A21EBC20(0, Local_86, 1f, 20000, fVar0, 4, 1193033728);
							unk_0x6EE8A5CF9AC75F12(uLocal_120);
							unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
							unk_0x9F77DFFC61FCB68C(&uLocal_120);
							iLocal_56 = 1;
						}
						unk_0xB5DC017AFD430D1B(&uLocal_120);
						unk_0x8E759206778E571F(0, iLocal_61, -1, 0, 2);
						unk_0xEC0A546609840086(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, 0, 0, 0);
						unk_0xCDDB3BCC4A2E6A6C(0, Local_86, iLocal_61, 1f, 0, 1.5f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0xCDBB862D670BA90E(0, iLocal_61, -1, 1);
						unk_0x6EE8A5CF9AC75F12(uLocal_120);
						unk_0x8229311A391A4EC6(iLocal_62, uLocal_120);
						unk_0x9F77DFFC61FCB68C(&uLocal_120);
						unk_0xC1B1E9A034A63A62(0);
						bLocal_54 = true;
						unk_0xA54C914AEB391F49(0f);
					}
					else
					{
						if (iLocal_89 == 1)
						{
							sLocal_110 = sLocal_110;
						}
						func_147();
						bLocal_54 = true;
						bLocal_148 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
				}
			}
		}
	}
	if (bLocal_54)
	{
		if (!iLocal_134)
		{
			if (unk_0x83666F9FB8FEBD4B() > 1000)
			{
				if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_62, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!unk_0xE5D56342B0FF1D0D(iLocal_61))
					{
						unk_0xDE75E9DE5B6221E1(iLocal_61, iLocal_62, 0);
					}
					iLocal_134 = 1;
				}
				else
				{
					iLocal_134 = 1;
				}
			}
		}
		if (iLocal_134 && !bLocal_132)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_61) && !unk_0x9F94F2CFDCA78C55(iLocal_62))
			{
				if (func_34(&uLocal_193, cLocal_102, sLocal_103, 4, 0, 0, 0) || func_50())
				{
					unk_0xAC57FBF981AB03F4(iLocal_61);
					unk_0xB5DC017AFD430D1B(&uLocal_120);
					unk_0xEC0A546609840086(0, cLocal_358, "handsup_standing_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xEC0A546609840086(0, cLocal_358, "handsup_standing_base", 8f, -4f, 7000, 0, 0, 0, 0, 0);
					unk_0xEC0A546609840086(0, cLocal_358, "handsup_standing_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x6EE8A5CF9AC75F12(uLocal_120);
					unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
					unk_0x9F77DFFC61FCB68C(&uLocal_120);
					func_148();
					uLocal_190 = unk_0x134AE1EC4D58EAE4(joaat("pickup_money_purse"), unk_0xFF447C6CF8EB3D23(unk_0x0CAFB9D38494283D(iLocal_61, 0f, 2.5f, 0f), 1067030938, 1069547520), uLocal_143, iLocal_191, 1, iLocal_84);
					bLocal_132 = true;
				}
			}
		}
		if (bLocal_132)
		{
			if (unk_0x9F94F2CFDCA78C55(iLocal_62))
			{
				func_146();
			}
			else
			{
				switch (iLocal_666)
				{
					case 0:
						Local_669 = { unk_0xC615E5E6E1D987A1(uLocal_190) - Vector(0f, 0f, 0.75f) };
						if (unk_0x6A89ECA8C773F1E8(uLocal_190))
						{
							unk_0xAC57FBF981AB03F4(iLocal_62);
							unk_0xB5DC017AFD430D1B(&uLocal_120);
							unk_0xCDDB3BCC4A2E6A6C(0, Local_669, iLocal_61, 2f, 0, 0.1f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0x6EE8A5CF9AC75F12(uLocal_120);
							unk_0x8229311A391A4EC6(iLocal_62, uLocal_120);
							unk_0x9F77DFFC61FCB68C(&uLocal_120);
							iLocal_667 = unk_0xF976C624234A4AA8();
						}
						iLocal_666 = 1;
						break;
					
					case 1:
						if (unk_0xEC043AB2FEE0E94F(iLocal_62, 242628503) == 7)
						{
							Local_669 = { unk_0xC615E5E6E1D987A1(uLocal_190) - Vector(0f, 0f, 0.75f) };
							if (unk_0x6A89ECA8C773F1E8(uLocal_190))
							{
								if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(iLocal_62, 1), Local_669, 1) > 1f)
								{
									iLocal_668 = 1;
									iLocal_666 = 4;
								}
								else
								{
									unk_0xAC57FBF981AB03F4(iLocal_62);
									unk_0xB5DC017AFD430D1B(&uLocal_120);
									unk_0xEC0A546609840086(0, cLocal_359, "pickup_low", 8f, -4f, -1, 8224, 0, 0, 0, 0);
									unk_0x6EE8A5CF9AC75F12(uLocal_120);
									unk_0x8229311A391A4EC6(iLocal_62, uLocal_120);
									unk_0x9F77DFFC61FCB68C(&uLocal_120);
									iLocal_666 = 2;
								}
							}
							else
							{
								iLocal_666 = 4;
							}
						}
						if ((unk_0xF976C624234A4AA8() - iLocal_667) > 15000)
						{
							iLocal_668 = 1;
							iLocal_666 = 4;
						}
						break;
					
					case 2:
						if (unk_0x5132EC78980FBED7(iLocal_62, cLocal_359, "pickup_low") > 0.5f)
						{
							if (unk_0x6A89ECA8C773F1E8(uLocal_190))
							{
								unk_0x226EBEC6CC97441F(uLocal_190);
								iLocal_666 = 3;
							}
							else
							{
								iLocal_666 = 4;
							}
						}
						break;
					
					case 3:
						if ((unk_0x22605DE2E6933CF2(iLocal_62, cLocal_359, "pickup_low", 3) && unk_0x5132EC78980FBED7(iLocal_62, cLocal_359, "pickup_low") > 0.58f) || !unk_0x22605DE2E6933CF2(iLocal_62, cLocal_359, "pickup_low", 3))
						{
							iLocal_666 = 4;
						}
						break;
					
					case 4:
						unk_0x3C2614E45AB2F499(iLocal_62, 1);
						unk_0xA859D289EEB2D72A(iLocal_62, unk_0x507DA4994C3D8EBD(), 50f, -1, 0, 0);
						unk_0x243553B40CC46CFE(iLocal_62, 0, 0);
						bLocal_148 = true;
						break;
					}
				}
			}
	}
}

void func_146()
{
	if (unk_0xD361727124133DF3(iLocal_64))
	{
		unk_0xA0A65B537B1F11EC(&iLocal_64);
	}
	if (!unk_0xD361727124133DF3(iLocal_66))
	{
		if (unk_0xBAE26BE2046B39E0(uLocal_190))
		{
			iLocal_66 = func_132(uLocal_190);
		}
	}
	iLocal_47 = 4;
}

void func_147()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
	}
	if (unk_0x849DBD2D635C99D5(iLocal_62, unk_0x507DA4994C3D8EBD(), 90f))
	{
		unk_0xEC0A546609840086(iLocal_62, cLocal_358, sLocal_366, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_46 == 2)
		{
			unk_0xB5DC017AFD430D1B(&uLocal_120);
			unk_0xEC0A546609840086(0, cLocal_358, sLocal_367, 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x6EE8A5CF9AC75F12(uLocal_120);
			unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
			unk_0x9F77DFFC61FCB68C(&uLocal_120);
		}
		else if (iLocal_89 == 4)
		{
			iLocal_378 = unk_0x73E83232BB98D800(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0, 4);
			unk_0xB5DC017AFD430D1B(&uLocal_120);
			unk_0xEC0A546609840086(0, cLocal_358, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, cLocal_358, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0x6EE8A5CF9AC75F12(uLocal_120);
			unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
			unk_0x9F77DFFC61FCB68C(&uLocal_120);
		}
		else
		{
			unk_0xB5DC017AFD430D1B(&uLocal_120);
			unk_0xEC0A546609840086(0, cLocal_358, sLocal_367, 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x6EE8A5CF9AC75F12(uLocal_120);
			unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
			unk_0x9F77DFFC61FCB68C(&uLocal_120);
		}
	}
	else
	{
		unk_0xEC0A546609840086(iLocal_62, cLocal_358, sLocal_368, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_46 == 2)
		{
			unk_0xB5DC017AFD430D1B(&uLocal_120);
			unk_0xEC0A546609840086(0, cLocal_358, sLocal_369, 8f, -8f, -1, 8, 0.1f, 0, 0, 0);
			unk_0x211FA3DF75B31A84(0, -94.8543f, -1582.686f, 30.2862f, 3000);
			unk_0xEC0A546609840086(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x6EE8A5CF9AC75F12(uLocal_120);
			unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
			unk_0x9F77DFFC61FCB68C(&uLocal_120);
		}
		else if (iLocal_89 == 4)
		{
			unk_0xB5DC017AFD430D1B(&uLocal_120);
			unk_0xEC0A546609840086(0, cLocal_358, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, cLocal_358, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0x6EE8A5CF9AC75F12(uLocal_120);
			unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
			unk_0x9F77DFFC61FCB68C(&uLocal_120);
		}
		else
		{
			unk_0xB5DC017AFD430D1B(&uLocal_120);
			unk_0xEC0A546609840086(0, cLocal_358, sLocal_369, 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xEC0A546609840086(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x6EE8A5CF9AC75F12(uLocal_120);
			unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
			unk_0x9F77DFFC61FCB68C(&uLocal_120);
		}
	}
}

void func_148()
{
	if (unk_0xD361727124133DF3(iLocal_67))
	{
		unk_0xA0A65B537B1F11EC(&iLocal_67);
	}
	if (!unk_0xD361727124133DF3(iLocal_65))
	{
		if (!unk_0xE5D56342B0FF1D0D(iLocal_62))
		{
			iLocal_65 = func_119(iLocal_62, 1, 0);
		}
	}
}

int func_149()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_89 == 1)
	{
		if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0, 0, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_89 == 2)
	{
		if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iLocal_62, 1), 1) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_89 == 4)
	{
		if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	else if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_150(int iParam0)
{
	if (func_152())
	{
		Global_97163 = 1;
		Global_97160 = unk_0xF976C624234A4AA8();
		if (func_151(Global_97162))
		{
			func_116(0);
		}
		unk_0xAABDA3B6E57B068A(1, "RE_TITLE");
		if (iParam0 && func_151(Global_97162))
		{
			unk_0x2EFA6B02E866355A();
		}
		return 1;
	}
	return 0;
}

int func_151(int iParam0)
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

int func_152()
{
	switch (func_153(&Global_24503, 0, 5, 0, unk_0xF682120D0C324317()))
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

int func_153(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_157(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x60D71C675384BFB1(unk_0x4D82797EF5035A9F(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6C786E2F6583AF3(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_155(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_154(uParam0, iParam4);
		}
	}
	return 2;
}

void func_154(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_155(int iParam0)
{
	return func_156(iParam0, Global_34909);
}

int func_156(int iParam0, int iParam1)
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

int func_157(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_155(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_158()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_89 == 1)
	{
		if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0, 0, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_89 == 2)
	{
		if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_89 == 3)
	{
		if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_159()
{
	if (!func_155(5))
	{
		return 1;
	}
	if (func_168())
	{
		return 1;
	}
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_167())
		{
			return 0;
		}
	}
	if (func_160(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_160(float fParam0, bool bParam1)
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
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (func_106(func_104()))
		{
			iVar36 = func_166();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_161(iVar32, &Var0);
					fVar35 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var0.f_6, 1);
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

void func_161(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_162(uParam1, "Abigail1", func_164(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 1:
			func_162(uParam1, "Abigail2", func_164(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 2:
			func_162(uParam1, "Barry1", func_164(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 3:
			func_162(uParam1, "Barry2", func_164(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_163(iParam0), 1, 1);
			break;
		
		case 4:
			func_162(uParam1, "Barry3", func_164(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 5:
			func_162(uParam1, "Barry3A", func_164(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 6:
			func_162(uParam1, "Barry3C", func_164(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 7:
			func_162(uParam1, "Barry4", func_164(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_163(iParam0), 0, 0);
			break;
		
		case 8:
			func_162(uParam1, "Dreyfuss1", func_164(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 9:
			func_162(uParam1, "Epsilon1", func_164(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 10:
			func_162(uParam1, "Epsilon2", func_164(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 11:
			func_162(uParam1, "Epsilon3", func_164(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 12:
			func_162(uParam1, "Epsilon4", func_164(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 13:
			func_162(uParam1, "Epsilon5", func_164(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 14:
			func_162(uParam1, "Epsilon6", func_164(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 15:
			func_162(uParam1, "Epsilon7", func_164(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 16:
			func_162(uParam1, "Epsilon8", func_164(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 17:
			func_162(uParam1, "Extreme1", func_164(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 18:
			func_162(uParam1, "Extreme2", func_164(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 19:
			func_162(uParam1, "Extreme3", func_164(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 20:
			func_162(uParam1, "Extreme4", func_164(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 21:
			func_162(uParam1, "Fanatic1", func_164(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_163(iParam0), 1, 0);
			break;
		
		case 22:
			func_162(uParam1, "Fanatic2", func_164(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_163(iParam0), 1, 0);
			break;
		
		case 23:
			func_162(uParam1, "Fanatic3", func_164(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_163(iParam0), 0, 1);
			break;
		
		case 24:
			func_162(uParam1, "Hao1", func_164(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_163(iParam0), 0, 1);
			break;
		
		case 25:
			func_162(uParam1, "Hunting1", func_164(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 26:
			func_162(uParam1, "Hunting2", func_164(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 27:
			func_162(uParam1, "Josh1", func_164(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 28:
			func_162(uParam1, "Josh2", func_164(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_163(iParam0), 1, 1);
			break;
		
		case 29:
			func_162(uParam1, "Josh3", func_164(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_163(iParam0), 1, 1);
			break;
		
		case 30:
			func_162(uParam1, "Josh4", func_164(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 31:
			func_162(uParam1, "Maude1", func_164(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 32:
			func_162(uParam1, "Minute1", func_164(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 33:
			func_162(uParam1, "Minute2", func_164(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 34:
			func_162(uParam1, "Minute3", func_164(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 35:
			func_162(uParam1, "MrsPhilips1", func_164(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 36:
			func_162(uParam1, "MrsPhilips2", func_164(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 37:
			func_162(uParam1, "Nigel1", func_164(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 38:
			func_162(uParam1, "Nigel1A", func_164(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_163(iParam0), 1, 1);
			break;
		
		case 39:
			func_162(uParam1, "Nigel1B", func_164(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_163(iParam0), 1, 1);
			break;
		
		case 40:
			func_162(uParam1, "Nigel1C", func_164(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_163(iParam0), 1, 1);
			break;
		
		case 41:
			func_162(uParam1, "Nigel1D", func_164(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_163(iParam0), 1, 1);
			break;
		
		case 42:
			func_162(uParam1, "Nigel2", func_164(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_163(iParam0), 1, 1);
			break;
		
		case 43:
			func_162(uParam1, "Nigel3", func_164(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_163(iParam0), 1, 1);
			break;
		
		case 44:
			func_162(uParam1, "Omega1", func_164(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 45:
			func_162(uParam1, "Omega2", func_164(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 46:
			func_162(uParam1, "Paparazzo1", func_164(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 47:
			func_162(uParam1, "Paparazzo2", func_164(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 48:
			func_162(uParam1, "Paparazzo3", func_164(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 49:
			func_162(uParam1, "Paparazzo3A", func_164(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 50:
			func_162(uParam1, "Paparazzo3B", func_164(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 51:
			func_162(uParam1, "Paparazzo4", func_164(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 52:
			func_162(uParam1, "Rampage1", func_164(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 54:
			func_162(uParam1, "Rampage3", func_164(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 55:
			func_162(uParam1, "Rampage4", func_164(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 56:
			func_162(uParam1, "Rampage5", func_164(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 53:
			func_162(uParam1, "Rampage2", func_164(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 57:
			func_162(uParam1, "TheLastOne", func_164(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 58:
			func_162(uParam1, "Tonya1", func_164(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 59:
			func_162(uParam1, "Tonya2", func_164(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 60:
			func_162(uParam1, "Tonya3", func_164(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 61:
			func_162(uParam1, "Tonya4", func_164(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 62:
			func_162(uParam1, "Tonya5", func_164(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_162(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_163(int iParam0)
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

struct<2> func_164(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_165(iParam0) };
	if (unk_0x8FA72E132AAFA62F(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_165(int iParam0)
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

int func_166()
{
	func_105();
	switch (Global_97173.f_1729.f_539.f_3213)
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

int func_167()
{
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0xE6BC404A1178AB93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_168()
{
	if (func_171() && !func_167())
	{
		return 1;
	}
	if (func_170() && func_169())
	{
		return 1;
	}
	return 0;
}

bool func_169()
{
	return Global_96891 > 0;
}

int func_170()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_171()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_172()
{
	if ((Global_97162 == func_173() && unk_0x7BCE01926E77105A()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

int func_173()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x3ED5FA3F61EC9E68(), 64);
	uVar16 = func_174(Var0);
	return uVar16;
}

int func_174(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x3BA42EA02A10243D(&cParam0))
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

void func_175()
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		unk_0xC2AE0675A3BC6FEE(unk_0xAF65E5A58BE87D95(), 1);
	}
	func_274(25, iLocal_89);
	func_179();
	func_176();
	func_256();
}

void func_176()
{
	func_177();
}

int func_177()
{
	if (func_178(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_178(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

int func_179()
{
	return 1;
}

void func_180(int iParam0)
{
	Global_97159 = iParam0;
}

void func_181()
{
	switch (iLocal_139)
	{
		case 0:
			if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
			{
				unk_0xEC0A546609840086(iLocal_62, cLocal_358, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
			{
				unk_0xEC0A546609840086(iLocal_61, cLocal_360, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			iLocal_139++;
			break;
		
		case 1:
			if (unk_0xFD68187442384158(iLocal_62))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
				{
					if (func_158())
					{
						if (!unk_0xD361727124133DF3(iLocal_67))
						{
							if (!unk_0xE5D56342B0FF1D0D(iLocal_62))
							{
								iLocal_67 = func_119(iLocal_62, 1, 0);
							}
							if (!func_172())
							{
								func_150(1);
							}
						}
					}
					if (func_149())
					{
						func_34(&uLocal_193, cLocal_102, "REMG2_ARG", 4, 0, 0, 0);
						func_148();
						iLocal_186 = unk_0xF976C624234A4AA8();
						unk_0xA54C914AEB391F49(0f);
						iLocal_189 = 1;
						iLocal_139++;
					}
				}
				else if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
				{
					unk_0xF60985E3F774849A(iLocal_61, Local_144, 250f, -1, 0, 0);
					unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
					unk_0x4EDE34FBADD967A6(0);
					func_187();
				}
			}
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				if (func_186())
				{
					iLocal_139 = 4;
				}
				if (func_135())
				{
					iLocal_139 = 9;
				}
				if (func_185())
				{
					iLocal_139 = 6;
				}
				if (func_184())
				{
					iLocal_139 = 4;
				}
			}
			if (!func_172())
			{
				if (func_159())
				{
					func_256();
				}
			}
			break;
		
		case 2:
			if (unk_0xFD68187442384158(iLocal_62))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
				{
					if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_62, 6f, 6f, 15f, 0, 1, 0))
					{
						if (unk_0x2A71687AF0AE817B(iLocal_62, unk_0x507DA4994C3D8EBD()) || unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_62, 3f, 3f, 15f, 0, 1, 0))
						{
							if (unk_0x849DBD2D635C99D5(unk_0x507DA4994C3D8EBD(), iLocal_62, 65f))
							{
								iLocal_188 = unk_0xF976C624234A4AA8();
								unk_0x8E759206778E571F(iLocal_62, unk_0x507DA4994C3D8EBD(), 7000, 0, 2);
								func_34(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0);
								unk_0x5AE11BC36633DE4E(0);
								iLocal_139++;
							}
							else
							{
								iLocal_188 = unk_0xF976C624234A4AA8();
								unk_0x8E759206778E571F(iLocal_62, unk_0x507DA4994C3D8EBD(), 7000, 0, 2);
								func_34(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0);
								unk_0x5AE11BC36633DE4E(0);
								iLocal_139++;
							}
						}
					}
				}
			}
			if (func_186() || func_184())
			{
				iLocal_139 = 4;
			}
			if (func_135())
			{
				iLocal_139 = 9;
			}
			if (func_185())
			{
				iLocal_139 = 6;
			}
			break;
		
		case 3:
			if ((iLocal_187 - iLocal_188) > 12500)
			{
				if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
				{
					iLocal_139 = 4;
				}
			}
			if ((iLocal_187 - iLocal_188) > 5500)
			{
				if (!bLocal_136)
				{
					if (unk_0xFD68187442384158(iLocal_62))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
						{
							func_34(&uLocal_193, cLocal_102, sLocal_113, 4, 0, 0, 0);
							unk_0x247B2966C6C2A4C1(iLocal_62, unk_0x507DA4994C3D8EBD(), 0, 16);
							bLocal_136 = true;
							if (unk_0xFD68187442384158(iLocal_61))
							{
								if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
								{
									unk_0xF60985E3F774849A(iLocal_61, Local_144, 250f, -1, 0, 0);
									unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
									unk_0x4EDE34FBADD967A6(0);
								}
								if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
								{
								}
								if (unk_0xD361727124133DF3(iLocal_64))
								{
									unk_0xA0A65B537B1F11EC(&iLocal_64);
								}
							}
						}
					}
				}
			}
			if (bLocal_136)
			{
				iLocal_139 = 10;
			}
			else
			{
				if (func_186())
				{
					iLocal_139 = 4;
				}
				if (func_135())
				{
					iLocal_139 = 9;
				}
				if (func_185())
				{
					iLocal_139 = 6;
				}
				if (func_183())
				{
					iLocal_139 = 9;
				}
				if (func_184())
				{
					iLocal_139 = 4;
				}
			}
			break;
		
		case 10:
			if (unk_0xFD68187442384158(iLocal_62))
			{
				if (unk_0x9F94F2CFDCA78C55(iLocal_62) || func_30(unk_0x507DA4994C3D8EBD(), iLocal_62, 1) > 100f)
				{
					func_182();
					func_187();
				}
			}
			break;
		
		case 4:
			if (unk_0xFD68187442384158(iLocal_61))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
				{
					if (!unk_0x6255AE2591FE7603(iLocal_61, unk_0x507DA4994C3D8EBD(), 1))
					{
						unk_0xAC57FBF981AB03F4(iLocal_61);
						if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
						{
							unk_0xB5DC017AFD430D1B(&uLocal_120);
							unk_0xF60985E3F774849A(0, unk_0xBF1B13057E5119A4(iLocal_62, 0), 150f, -1, 0, 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_120);
							unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
							unk_0x9F77DFFC61FCB68C(&uLocal_120);
							unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
						}
						iLocal_147 = 1;
					}
					else
					{
						unk_0xAC57FBF981AB03F4(iLocal_61);
						unk_0xA859D289EEB2D72A(iLocal_61, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
						unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
						if (unk_0xD361727124133DF3(iLocal_64))
						{
							unk_0xA0A65B537B1F11EC(&iLocal_64);
						}
					}
				}
			}
			if (unk_0xFD68187442384158(iLocal_62))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
				{
					unk_0xAC57FBF981AB03F4(iLocal_62);
					unk_0xA859D289EEB2D72A(iLocal_62, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
					unk_0xA1E4BA3B17C6D931(iLocal_62, 1);
					if (unk_0xD361727124133DF3(iLocal_65))
					{
						unk_0xA0A65B537B1F11EC(&iLocal_65);
					}
				}
			}
			if (unk_0xF611D1BB58990143())
			{
				func_88();
			}
			unk_0x4EDE34FBADD967A6(0);
			if (!iLocal_147)
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
				{
					func_34(&uLocal_193, cLocal_102, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_256();
			}
			break;
		
		case 5:
			if (unk_0xC9D9444186B5A374() > 250)
			{
				if (unk_0xFD68187442384158(iLocal_62))
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
					{
						unk_0x3A1E687904400847(iLocal_62, 17, 1);
						unk_0xE131FC34DA8AD63F(iLocal_62, 156, 1);
						unk_0xB5DC017AFD430D1B(&uLocal_120);
						unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
						unk_0x6EE8A5CF9AC75F12(uLocal_120);
						unk_0x8229311A391A4EC6(iLocal_62, uLocal_120);
						unk_0x9F77DFFC61FCB68C(&uLocal_120);
						unk_0xA1E4BA3B17C6D931(iLocal_62, 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0x3C2614E45AB2F499(iLocal_62, 0);
						unk_0xCA4DD92F1F2931F3(&iLocal_62);
						func_34(&uLocal_193, cLocal_102, sLocal_112, 4, 0, 0, 0);
					}
				}
				if (unk_0xFD68187442384158(iLocal_61))
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
					{
						if (!unk_0x6255AE2591FE7603(iLocal_61, unk_0x507DA4994C3D8EBD(), 1))
						{
							unk_0xAC57FBF981AB03F4(iLocal_61);
							iLocal_147 = 1;
						}
					}
				}
				if (!iLocal_147)
				{
					unk_0x4EDE34FBADD967A6(0);
					func_256();
				}
			}
			break;
		
		case 6:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xFD68187442384158(iLocal_61))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
						{
							unk_0xAC57FBF981AB03F4(iLocal_61);
							unk_0xB5DC017AFD430D1B(&uLocal_120);
							unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), 10000, 0, 2);
							unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_120);
							unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
							unk_0x9F77DFFC61FCB68C(&uLocal_120);
							unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
							unk_0xCA4DD92F1F2931F3(&iLocal_61);
						}
					}
					if (unk_0xFD68187442384158(iLocal_62))
					{
						if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
						{
							func_34(&uLocal_193, cLocal_102, sLocal_113, 4, 0, 0, 0);
							unk_0xAC57FBF981AB03F4(iLocal_62);
							unk_0xB5DC017AFD430D1B(&uLocal_120);
							unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), 10000, 0, 2);
							unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
							unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
							unk_0x6EE8A5CF9AC75F12(uLocal_120);
							unk_0x8229311A391A4EC6(iLocal_62, uLocal_120);
							unk_0x9F77DFFC61FCB68C(&uLocal_120);
							unk_0xA1E4BA3B17C6D931(iLocal_62, 1);
						}
					}
				}
				unk_0x4EDE34FBADD967A6(0);
				func_256();
			}
			break;
		
		case 7:
			unk_0xC1B1E9A034A63A62(0);
			iLocal_139++;
			break;
		
		case 8:
			if (unk_0x83666F9FB8FEBD4B() > 200)
			{
				func_187();
			}
			break;
		
		case 9:
			if (unk_0xFD68187442384158(iLocal_62))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
				{
					unk_0xE131FC34DA8AD63F(iLocal_62, 156, 1);
					unk_0xF266F4D5C3D0BAE2(iLocal_62, 50f, 0);
					if (unk_0xF611D1BB58990143())
					{
						func_88();
					}
					unk_0x4EDE34FBADD967A6(0);
					func_34(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0);
				}
			}
			if (unk_0xFD68187442384158(iLocal_61))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
				{
					unk_0xAC57FBF981AB03F4(iLocal_61);
					unk_0x5FD5E7ABD766D498(iLocal_61, 2000);
					iLocal_147 = 1;
				}
			}
			break;
	}
	if (iLocal_139 != 8 && iLocal_147)
	{
		iLocal_139 = 7;
	}
	iLocal_187 = unk_0xF976C624234A4AA8();
	if (iLocal_189 && !bLocal_136)
	{
		if (unk_0xFD68187442384158(iLocal_62) && unk_0xFD68187442384158(iLocal_62))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_61) && !unk_0x9F94F2CFDCA78C55(iLocal_62))
			{
				if ((((iLocal_187 - iLocal_186) > 12000 && !unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_62, 3f, 3f, 35f, 0, 1, 0)) && unk_0x9226425D9E480D72(iLocal_62)) && !func_143())
				{
					if ((func_34(&uLocal_193, cLocal_102, "REMG2_FKIT", 4, 0, 0, 0) || func_50()) || func_50())
					{
						unk_0xE131FC34DA8AD63F(iLocal_62, 156, 1);
						unk_0x478A9894800A2A4F(iLocal_62, unk_0xC5B1818639240D24(iLocal_61, 31086, 0f, 0f, 0f), 0);
						unk_0xAC57FBF981AB03F4(iLocal_61);
						unk_0x3E16CE93BAE616EE(iLocal_61, 99);
						unk_0xF60985E3F774849A(iLocal_62, Local_144, 250f, -1, 0, 0);
						unk_0xA1E4BA3B17C6D931(iLocal_62, 1);
						func_256();
					}
				}
			}
		}
	}
}

void func_182()
{
	Global_14558 = 0;
	func_44();
}

int func_183()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61) && !unk_0x9F94F2CFDCA78C55(iLocal_62))
	{
		if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), iLocal_62) || unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), iLocal_61))
		{
			return 1;
		}
		if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_62, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return 0;
}

int func_184()
{
	if (!unk_0xE5D56342B0FF1D0D(iLocal_61))
	{
		if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_61, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iLocal_61) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iLocal_61))
			{
				if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
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
	if (!unk_0xE5D56342B0FF1D0D(iLocal_62))
	{
		if (func_135())
		{
			if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
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

int func_185()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_61, 5.3f, 5.3f, 6f, 0, 1, 0))
		{
			if (unk_0x15DEAA4402D18301(iLocal_61, unk_0x507DA4994C3D8EBD(), 17))
			{
				if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6) && !unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
					{
						if (!unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iLocal_62))
						{
							if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iLocal_61) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iLocal_61))
							{
								unk_0x5AE11BC36633DE4E(0);
								return 1;
							}
						}
					}
					else if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iLocal_61) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iLocal_61))
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

int func_186()
{
	if (!unk_0xE5D56342B0FF1D0D(iLocal_61))
	{
		if (unk_0x0982F2F40B035E77(unk_0xC5B1818639240D24(iLocal_61, 31086, 0f, 0f, 0f), 5f, 1))
		{
			if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_187()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
	{
		if (!unk_0x1983DA3C921BB046(iLocal_61))
		{
			if (func_172())
			{
				if (unk_0xEC043AB2FEE0E94F(iLocal_61, 242628503) == 7 || unk_0xEC043AB2FEE0E94F(iLocal_61, 474215631) == 7)
				{
					if (unk_0xF611D1BB58990143())
					{
						func_88();
					}
					if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
					{
						if (!unk_0x1BA961C8CF14F399(iLocal_61))
						{
							unk_0xA859D289EEB2D72A(iLocal_61, iLocal_62, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_46 == 3)
					{
						if (!unk_0x1BA961C8CF14F399(iLocal_61))
						{
							unk_0xF60985E3F774849A(iLocal_61, Local_121, 150f, -1, 0, 0);
						}
					}
					unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
					unk_0x4EDE34FBADD967A6(0);
					func_34(&uLocal_193, cLocal_102, sLocal_108, 4, 0, 0, 0);
					unk_0x4EDE34FBADD967A6(0);
					if (iLocal_191 > 0)
					{
						unk_0xFBF796BC19E6FC23(unk_0x507DA4994C3D8EBD(), (iLocal_191 / 100) * 90);
						func_52(func_104(), 1, iLocal_191);
						unk_0x4EDE34FBADD967A6(0);
						func_188(func_104(), 1, (iLocal_191 / 10), 0, 1);
					}
					func_180(3);
					func_175();
				}
			}
			else
			{
				func_256();
			}
		}
		else
		{
			func_256();
		}
	}
	else
	{
		func_256();
	}
}

void func_188(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_53(Global_97173.f_29699[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x55FFE396AA3CA77A(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x96B68C67633472DC(iVar1, iVar0, 1);
	}
}

int func_189()
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_167())
		{
			return 0;
		}
	}
	if (func_168())
	{
		return 1;
	}
	if (func_160(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_190()
{
	func_201();
	func_200(&uLocal_392, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_200(&uLocal_392, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_200(&uLocal_392, cLocal_376);
	func_200(&uLocal_392, cLocal_360);
	func_198(&uLocal_392, iLocal_82);
	func_198(&uLocal_392, iLocal_83);
	func_198(&uLocal_392, iLocal_84);
	func_200(&uLocal_392, cLocal_359);
	func_200(&uLocal_392, cLocal_358);
	func_200(&uLocal_392, cLocal_377);
	func_200(&uLocal_392, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_194(&uLocal_392))
	{
		func_191();
		return 1;
	}
	return 0;
}

void func_191()
{
	iLocal_61 = unk_0x7B88529CAE3B7F15(26, iLocal_82, Local_68, fLocal_74, 1, 1);
	unk_0x2DC5B31EBB810396(iLocal_61, 1);
	unk_0x6A750A31D18DA81A(iLocal_61, 0);
	unk_0xB2B080B88A4144B7(iLocal_61, 8, 1);
	unk_0xB2B080B88A4144B7(iLocal_61, 128, 1);
	unk_0xB2B080B88A4144B7(iLocal_61, 512, 1);
	unk_0x5466EB7A3FD9AFF0(iLocal_61, 1);
	unk_0xB1A5EE596FA70701(iLocal_61);
	unk_0xFBF796BC19E6FC23(iLocal_61, 0);
	unk_0xCAFAFBAB1F150EFF(iLocal_61, 1);
	if (iLocal_82 == joaat("a_m_y_genstreet_01"))
	{
		unk_0xF2685765B7BEBCB0(iLocal_61, 0, 1, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_61, 3, 0, 3, 0);
		unk_0xF2685765B7BEBCB0(iLocal_61, 4, 0, 2, 0);
	}
	if (iLocal_82 == joaat("a_m_y_business_02"))
	{
		unk_0xF2685765B7BEBCB0(iLocal_61, 0, 1, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_61, 2, 1, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_61, 3, 1, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_61, 4, 1, 0, 0);
		unk_0xF2685765B7BEBCB0(iLocal_61, 8, 0, 0, 0);
	}
	unk_0x46B6351EE89452C8("theAssailant", &iLocal_85);
	iLocal_62 = unk_0x7B88529CAE3B7F15(26, iLocal_83, Local_71, fLocal_77, 1, 1);
	unk_0x3C2614E45AB2F499(iLocal_62, 1);
	unk_0x2DC5B31EBB810396(iLocal_62, 1);
	unk_0x7AB733311E18F96E(iLocal_62, 1, 0);
	unk_0x3F9EDC2D18464273(iLocal_62, joaat("weapon_pistol"), -1, 1, 1);
	unk_0x3A1E687904400847(iLocal_62, 13, 0);
	unk_0x3A1E687904400847(iLocal_62, 17, 0);
	unk_0x78BFEA1E2E65768C(iLocal_62, 1);
	unk_0x7FEDD088E489CE41(iLocal_62, 42, 1);
	unk_0x7FEDD088E489CE41(iLocal_62, 137, 1);
	unk_0xB2B080B88A4144B7(iLocal_62, 128, 1);
	unk_0xB2B080B88A4144B7(iLocal_62, 2, 0);
	unk_0xE440546F94B26235(iLocal_62, iLocal_85);
	unk_0x5466EB7A3FD9AFF0(iLocal_62, 1);
	if (!unk_0xD504011E20D63A81(sLocal_119))
	{
		unk_0x454E090239AFF6E8(iLocal_61, sLocal_119);
	}
	unk_0x454E090239AFF6E8(iLocal_62, sLocal_118);
	unk_0xCA4EA7D4F6DCCD43(2, joaat("CIVMALE"), iLocal_85);
	unk_0xCA4EA7D4F6DCCD43(2, joaat("CIVFEMALE"), iLocal_85);
	unk_0xCA4EA7D4F6DCCD43(2, iLocal_85, joaat("CIVMALE"));
	unk_0xCA4EA7D4F6DCCD43(2, iLocal_85, joaat("CIVFEMALE"));
	unk_0xCA4EA7D4F6DCCD43(5, iLocal_85, joaat("player"));
	switch (func_104())
	{
		case 0:
			func_193(&uLocal_193, 0, unk_0x507DA4994C3D8EBD(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_193(&uLocal_193, 0, unk_0x507DA4994C3D8EBD(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_193(&uLocal_193, 0, unk_0x507DA4994C3D8EBD(), "TREVOR", 0, 1);
			break;
	}
	func_193(&uLocal_193, 1, iLocal_62, sLocal_117, 0, 1);
	func_193(&uLocal_193, 2, iLocal_61, sLocal_116, 0, 1);
	if (iLocal_46 == 2)
	{
		unk_0xB2B080B88A4144B7(iLocal_62, 1, 0);
	}
	if (iLocal_89 == 1 || iLocal_89 == 4)
	{
		func_192();
	}
	if (iLocal_89 == 3)
	{
		Local_124 = { -325.4189f, -828.8596f, 31.1f };
		Local_127 = { 0f, 0f, 180f };
		uLocal_130 = unk_0x1BEDF9ACAEAB15F8(Local_124, Local_127, 2);
		unk_0x206610E40EE4D7D9(iLocal_62, uLocal_130, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (iLocal_89 == 4)
	{
		unk_0x84A799362FA1219F(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_192()
{
	struct<3> Var0;
	
	unk_0x5614D4217C75FFE5(iLocal_62, unk_0xE07FE144B472B7C8(cLocal_358, sLocal_364, Local_370, Local_373, 0, 2), 0, 0, 1);
	Var0 = { unk_0x99E69251597182A2(cLocal_358, sLocal_364, Local_370, Local_373, 0, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	unk_0x248DC16118AE5035(iLocal_62, Var0.f_2);
	unk_0x5614D4217C75FFE5(iLocal_61, unk_0xE07FE144B472B7C8(cLocal_358, sLocal_365, Local_370, Local_373, 0, 2), 0, 0, 1);
	Var0 = { unk_0x99E69251597182A2(cLocal_358, sLocal_365, Local_370, Local_373, 0, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	unk_0x248DC16118AE5035(iLocal_61, Var0.f_2);
	unk_0xEC0A546609840086(iLocal_62, cLocal_358, sLocal_364, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	unk_0xEC0A546609840086(iLocal_61, cLocal_358, sLocal_365, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
}

void func_193(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
			}
		}
	}
}

int func_194(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_195(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_195(var uParam0)
{
	return func_196(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_196(int iParam0, char[4] cParam1, var uParam2)
{
	if (unk_0x61D8FEAF64881CDA(iParam0, 30))
	{
		if (unk_0x61D8FEAF64881CDA(iParam0, 29))
		{
			switch (func_197(iParam0))
			{
				case 0:
					return unk_0xD291857D0C9C7FEC(uParam2);
					break;
				
				case 1:
					return unk_0xCE40391AB65FE305(uParam1);
					break;
				
				case 2:
					return unk_0x7283AF7715BF497C(cParam1);
					break;
				
				case 3:
					return unk_0x31920D7070131373(cParam1);
					break;
				
				case 4:
					return unk_0xD3536FF14115DA03(uParam2, cParam1);
					break;
				
				case 5:
					return unk_0xB16E5DBDEC4BBDEB(cParam1);
					break;
				
				case 6:
					return unk_0xF08CFB68522305B2(cParam1, unk_0x61D8FEAF64881CDA(iParam0, 27));
					break;
				
				case 7:
					return unk_0xCF2008EE76BCB924(uParam2);
					break;
				
				case 8:
					return unk_0x6C741637F73EA9EC(uParam2);
					break;
				
				case 9:
					return unk_0x09B3E74864C634DA();
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

int func_197(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x61D8FEAF64881CDA(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_198(var uParam0, int iParam1)
{
	func_199(uParam0, 0, iParam1, "NULL", 0);
}

void func_199(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0xA858564DC37EED5E(sParam3, "NULL"))
					{
						if (unk_0xA858564DC37EED5E(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x3DBE2A7AF9E71C82(uParam0[iVar0 /*18*/], iParam1);
			unk_0x3DBE2A7AF9E71C82(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_200(var uParam0, char* sParam1)
{
	func_199(uParam0, 1, -1, sParam1, 0);
}

void func_201()
{
	func_254();
	unk_0x3DBE2A7AF9E71C82(&uLocal_143, 3);
	unk_0x3DBE2A7AF9E71C82(&uLocal_143, 4);
	unk_0x3DBE2A7AF9E71C82(&uLocal_143, 1);
	if (iLocal_89 == 1)
	{
		cLocal_358 = "RANDOM@MUGGING1";
		sLocal_364 = "STRUGGLE_Loop_A_Thief";
		sLocal_365 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_367 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_366 = "FLEE_BACKWARD_Thief";
		sLocal_369 = "FLEE_FORWARD_Shopkeeper";
		sLocal_368 = "FLEE_FORWARD_Thief";
		func_203();
		iLocal_191 = 200;
		iLocal_47 = 2;
		Local_144 = { -132.2607f, -1628.336f, 31.2107f };
		iLocal_82 = joaat("a_m_y_business_02");
		iLocal_83 = joaat("g_m_y_strpunk_01");
		Local_68 = { -138.814f, -1635.975f, 31.357f };
		fLocal_74 = 318.519f;
		Local_71 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_77 = 98f;
		Local_370 = { Local_68 };
		Local_373 = { 0f, 0f, fLocal_74 };
		Local_165 = { -103.8951f, -1593.239f, 30.49198f };
		Local_168 = { -89.29615f, -1575.444f, 32.30938f };
		Local_171 = { -152.0367f, -1654.379f, 31.73599f };
		Local_174 = { -169.8183f, -1669.556f, 33.94173f };
		Local_177 = { -152.0367f, -1654.379f, 31.73599f };
		Local_180 = { -103.8951f, -1593.239f, 30.49198f };
		fLocal_78 = 340.0645f;
		Local_79 = { -151.0793f, -1650.322f, 31.6504f };
		Local_86 = { -133.6872f, -1630.245f, 31.2527f };
		iLocal_84 = joaat("prop_ld_wallet_pickup");
		cLocal_102 = "REMG1AU";
		sLocal_103 = "REMG1_VIC";
		sLocal_104 = "REMG1_SHT";
		sLocal_105 = "REMG1_ASK";
		sLocal_106 = "REMG1_DRP";
		sLocal_107 = "REMG1_OHY";
		sLocal_108 = "REMG1_THK";
		sLocal_109 = "REMG1_GIV";
		sLocal_110 = "REMG1_MUGA";
		sLocal_111 = "REMG1_WHO";
		switch (func_104())
		{
			case 0:
				sLocal_114 = "REMG1_HOM";
				sLocal_115 = "REMG1_WAM";
				break;
			
			case 1:
				sLocal_114 = "REMG1_HOF";
				sLocal_115 = "REMG1_WAF";
				break;
			
			case 2:
				sLocal_114 = "REMG1_HOT";
				sLocal_115 = "REMG1_WAT";
				break;
		}
		sLocal_118 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_119 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_116 = "MuggedMan";
		sLocal_117 = "MuggerGang";
		iLocal_49 = 1;
		cLocal_377 = "move_m@hurry@b";
	}
	if (iLocal_89 == 2)
	{
		cLocal_358 = "random@mugging2";
		cLocal_360 = "random@mugging2";
		iLocal_47 = 1;
		Local_144 = { 287.888f, -284.603f, 52.967f };
		iLocal_82 = joaat("a_f_y_genhot_01");
		iLocal_83 = joaat("g_m_y_strpunk_01");
		Local_68 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_74 = 260.7569f;
		Local_71 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_77 = 45f;
		fLocal_78 = 251f;
		Local_79 = { 297.4484f, -261.2914f, 53.0037f };
		iLocal_84 = joaat("prop_ld_handbag");
		cLocal_102 = "REMG2AU";
		sLocal_103 = "REMG2_VIC";
		sLocal_104 = "REMG2_SHT";
		sLocal_105 = "REMG2_ASK";
		sLocal_106 = "REMG2_DRP";
		sLocal_107 = "REMG2_OHY";
		sLocal_108 = "REMG2_THK";
		sLocal_109 = "REMG2_GIV";
		sLocal_111 = "REMG2_WHO";
		sLocal_112 = "REMG2_GUN";
		sLocal_113 = "REMG2_FUT";
		switch (func_104())
		{
			case 0:
				sLocal_114 = "REMG2_HOM";
				sLocal_115 = "REMG2_WAM";
				break;
			
			case 1:
				sLocal_114 = "REMG2_HOF";
				sLocal_115 = "REMG2_WAF";
				break;
			
			case 2:
				sLocal_114 = "REMG2_HOT";
				sLocal_115 = "REMG2_WAT";
				break;
		}
		sLocal_118 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_116 = "MuggedYMan";
		sLocal_117 = "MuggerGang";
		iLocal_49 = 1;
		cLocal_377 = "move_m@hurry@b";
	}
	if (iLocal_46 == 1)
	{
		func_202();
		iLocal_191 = 2000;
		iLocal_47 = 2;
		if (iLocal_89 == 3)
		{
			cLocal_358 = "RANDOM@MUGGING3";
			Local_144 = { -317.1964f, -824.0751f, 31.4284f };
			iLocal_82 = joaat("a_f_y_hipster_01");
			iLocal_83 = joaat("a_m_o_tramp_01");
			Local_68 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_74 = 80.7161f;
			Local_71 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_77 = 336.5502f;
			fLocal_78 = 81.8694f;
			Local_79 = { -322.3941f, -835.7213f, 30.6001f };
			Local_86 = { -320.9667f, -832.1209f, 30.5979f };
			iLocal_84 = joaat("prop_ld_purse_01");
			cLocal_102 = "REMG3AU";
			sLocal_103 = "REMG3_VIC";
			sLocal_104 = "REMG3_SHT";
			sLocal_105 = "REMG3_ASK";
			sLocal_106 = "REMG3_DRP";
			sLocal_107 = "REMG3_OHY";
			sLocal_108 = "REMG3_THK";
			sLocal_109 = "REMG3_GIV";
			sLocal_110 = "REMG3_MUGB";
			sLocal_111 = "REMG3_WHO";
			sLocal_112 = "REMG3_GUN";
			sLocal_113 = "REMG3_FUT";
			switch (func_104())
			{
				case 0:
					sLocal_114 = "REMG3_HOM";
					sLocal_115 = "REMG3_WAM";
					break;
				
				case 1:
					sLocal_114 = "REMG3_HOF";
					sLocal_115 = "REMG3_WAF";
					break;
				
				case 2:
					sLocal_114 = "REMG3_HOT";
					sLocal_115 = "REMG3_WAT";
					break;
			}
			sLocal_118 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_116 = "MUGGEDHIPSTER";
			sLocal_117 = "MuggerTramp";
			iLocal_49 = 1;
			cLocal_377 = "move_f@hurry@a";
		}
		if (iLocal_89 == 4)
		{
			func_202();
			cLocal_358 = "RANDOM@MUGGING4";
			sLocal_364 = "STRUGGLE_Loop_B_Thief";
			sLocal_365 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_367 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_366 = "FLEE_BACKWARD_Thief";
			sLocal_369 = "FLEE_FORWARD_Shopkeeper";
			sLocal_368 = "FLEE_FORWARD_Thief";
			Local_144 = { 32.8802f, -1016.061f, 28.4527f };
			iLocal_82 = joaat("a_f_m_tourist_01");
			iLocal_83 = joaat("g_m_y_armgoon_02");
			Local_68 = { 32.2169f, -1020.864f, 28.456f };
			fLocal_74 = 159.1445f;
			Local_370 = { Local_68 };
			Local_373 = { 0f, 0f, fLocal_74 };
			Local_71 = { 38.1933f, -1023.579f, 28.4889f };
			fLocal_77 = 60.1372f;
			fLocal_78 = 248f;
			Local_79 = { 42.5323f, -990.353f, 28.248f };
			Local_165 = { 38.15186f, -1001.485f, 28.42276f };
			Local_168 = { 40.13669f, -995.2711f, 30.37197f };
			Local_171 = { 37.21758f, -1040.354f, 28.41506f };
			Local_174 = { 19.91492f, -1036.814f, 30.28045f };
			Local_177 = { 28.4511f, -1035.718f, 28.3329f };
			Local_180 = { 38.6536f, -1001.073f, 28.407f };
			Local_86 = { 32.536f, -1020.293f, 28.4576f };
			iLocal_84 = joaat("prop_ld_wallet_pickup");
			cLocal_102 = "REMG4AU";
			sLocal_103 = "REMG4_VIC";
			sLocal_104 = "REMG4_SHT";
			sLocal_105 = "REMG4_ASK";
			sLocal_106 = "REMG4_DRP";
			sLocal_107 = "REMG4_OHY";
			sLocal_108 = "REMG4_THK";
			sLocal_109 = "REMG4_GIV";
			sLocal_110 = "REMG4_MUGB";
			sLocal_111 = "REMG4_WHO";
			sLocal_112 = "REMG4_GUN";
			sLocal_113 = "REMG4_FUT";
			switch (func_104())
			{
				case 0:
					sLocal_114 = "REMG4_HOM";
					sLocal_115 = "REMG4_WAM";
					break;
				
				case 1:
					sLocal_114 = "REMG4_HOF";
					sLocal_115 = "REMG4_WAF";
					break;
				
				case 2:
					sLocal_114 = "REMG4_HOT";
					sLocal_115 = "REMG4_WAT";
					break;
			}
			sLocal_118 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_116 = "MuggedWoman";
			sLocal_117 = "MuggerGang";
			iLocal_49 = 1;
			cLocal_377 = "move_f@hurry@a";
		}
	}
}

void func_202()
{
	cLocal_360 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (unk_0x4D3E68F73B727E49(0, 3))
	{
		case 0:
			sLocal_361 = "Return_Wallet_Positive_A_Player";
			sLocal_362 = "Return_Wallet_Positive_A_Female";
			sLocal_363 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_361 = "Return_Wallet_Positive_B_Player";
			sLocal_362 = "Return_Wallet_Positive_B_Female";
			sLocal_363 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_361 = "Return_Wallet_Positive_C_Player";
			sLocal_362 = "Return_Wallet_Positive_C_Female";
			sLocal_363 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_203()
{
	cLocal_360 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (unk_0x4D3E68F73B727E49(0, 3))
	{
		case 0:
			sLocal_361 = "Return_Wallet_Positive_A_Player";
			sLocal_362 = "Return_Wallet_Positive_A_Male";
			sLocal_363 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_361 = "Return_Wallet_Positive_B_Player";
			sLocal_362 = "Return_Wallet_Positive_B_Male";
			sLocal_363 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_361 = "Return_Wallet_Positive_C_Player";
			sLocal_362 = "Return_Wallet_Positive_C_Male";
			sLocal_363 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_204(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0xF976C624234A4AA8();
	}
	if (unk_0xD361727124133DF3(uParam0))
	{
		iVar0 = (unk_0xF976C624234A4AA8() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x714F1BB644001893(iParam0) != 255)
				{
					unk_0x80882386D3DF8627(iParam0, 255);
				}
			}
			else if (unk_0x714F1BB644001893(iParam0) != 0)
			{
				unk_0x80882386D3DF8627(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x714F1BB644001893(iParam0) != 255)
			{
				unk_0x80882386D3DF8627(iParam0, 255);
			}
		}
	}
}

void func_205(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xE3B6F359045B979E() >= (uParam0->f_272 + uParam0->f_273) || unk_0x61D8FEAF64881CDA(Global_89784.f_20, 2)) || unk_0x61D8FEAF64881CDA(Global_89784.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*18*/], 29))
					{
						func_206(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xE3B6F359045B979E();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_206(var uParam0)
{
	func_207(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_207(var uParam0, char[4] cParam1, var uParam2)
{
	if (unk_0x61D8FEAF64881CDA(*uParam0, 30))
	{
		switch (func_197(*uParam0))
		{
			case 0:
				unk_0xCBE6AC5010E5CE5C(uParam2);
				break;
			
			case 1:
				unk_0x395C5D98343F0040(uParam1);
				break;
			
			case 2:
				unk_0x4554A56FA4AB29D4(uParam1);
				break;
			
			case 3:
				unk_0x685EB3667D702B92(uParam1, unk_0x61D8FEAF64881CDA(*uParam0, 28));
				break;
			
			case 4:
				unk_0x27859D80F345E855(uParam2, uParam1);
				break;
			
			case 5:
				unk_0x909E9D811F9F1AAE(uParam1);
				break;
			
			case 6:
				unk_0xF08CFB68522305B2(uParam1, unk_0x61D8FEAF64881CDA(*uParam0, 27));
				break;
			
			case 7:
				unk_0x9BDCCBFB569D44D3(uParam2);
				break;
			
			case 8:
				unk_0x481B0AD01AC057F7(cParam1, uParam2);
				break;
			
			case 9:
				unk_0x903BC66D86D2CC1E();
				break;
			
			default:
				break;
		}
		unk_0x3DBE2A7AF9E71C82(uParam0, 29);
	}
}

void func_208(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_173();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_210(iParam0);
	unk_0x4F2CE8E787B36129(0);
	unk_0xD50D943D0D4E5EF1(1);
	Global_97159 = 0;
	func_209();
}

void func_209()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			unk_0x941F924D5E9C2140(unk_0x26EA758C2A691D06(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)), 1);
		}
		unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 32, 0);
	}
}

void func_210(int iParam0)
{
	Global_97162 = iParam0;
}

int func_211(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_173();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_251())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			Var1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_167())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_178(0))
		{
			return 0;
		}
		if (func_168())
		{
			return 0;
		}
		if (func_250())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_106(func_104()))
		{
			if (func_160(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_249(iParam3))
		{
			return 0;
		}
		if (func_106(func_104()))
		{
			if (func_248(func_104()) == 4 || func_248(func_104()) == 5)
			{
				return 0;
			}
		}
		if (func_106(func_104()))
		{
			if (!func_247(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_246(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xF976C624234A4AA8() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_245())
		{
			return 0;
		}
		if (unk_0x4E6BA6FF244D94A8())
		{
			return 0;
		}
		if (unk_0x7BCE01926E77105A())
		{
			return 0;
		}
		if (!func_236(4))
		{
			return 0;
		}
		if (!func_155(5))
		{
			return 0;
		}
		if (func_235(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x93AF5BB44F9A2E1B(unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD())))
		{
			if ((unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(377.153f, -717.567f, 10.0536f) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(320.9934f, 265.2515f, 82.1221f)) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_235(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_249(30) && !func_235(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_106(func_104()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_234(iVar8))
				{
					if (func_212(iVar4))
					{
						if (!func_20(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var5) < (210f * 210f))
							{
								if (func_104() != iVar4)
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

bool func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_213(iVar0);
}

int func_213(int iParam0)
{
	return func_214(iParam0, 1);
}

int func_214(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_234(iParam0))
	{
		return 0;
	}
	func_215(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_216(func_227(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_216(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_226(iParam0, iParam1))
	{
		iVar0 = func_225(iParam1);
		iVar1 = func_223(iParam0);
		iVar2 = (func_223(iParam0) - func_223(iParam1));
		iVar3 = (func_225(iParam0) - func_225(iParam1));
		iVar4 = (func_222(iParam0) - func_222(iParam1));
		iVar5 = (func_221(iParam0) - func_221(iParam1));
		iVar6 = (func_220(iParam0) - func_220(iParam1));
		iVar7 = (func_219(iParam0) - func_219(iParam1));
	}
	else
	{
		iVar0 = func_225(iParam0);
		iVar1 = func_223(iParam1);
		iVar2 = (func_223(iParam1) - func_223(iParam0));
		iVar3 = (func_225(iParam1) - func_225(iParam0));
		iVar4 = (func_222(iParam1) - func_222(iParam0));
		iVar5 = (func_221(iParam1) - func_221(iParam0));
		iVar6 = (func_220(iParam1) - func_220(iParam0));
		iVar7 = (func_219(iParam1) - func_219(iParam0));
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
		iVar4 = (iVar4 + func_218(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_217(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_217(float fParam0, float fParam1, float fParam2)
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

int func_218(int iParam0, int iParam1)
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

int func_219(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_220(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_221(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_222(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_223(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_224(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
}

int func_224(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_225(int iParam0)
{
	return iParam0 & 15;
}

int func_226(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_234(iParam1) || !func_234(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_219(iParam0);
	iVar1 = func_219(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_227()
{
	var uVar0;
	
	func_233(&uVar0, unk_0x2784A8234E9B4202());
	func_232(&uVar0, unk_0x06F66CEDC24218A4());
	func_231(&uVar0, unk_0xE76C684D1C903A71());
	func_230(&uVar0, unk_0xA277D6C04B4B44C8());
	func_229(&uVar0, unk_0x1285C2DD1E4945FF());
	func_228(&uVar0, unk_0xCFC08A7C99F98C5B());
	return uVar0;
}

void func_228(var uParam0, int iParam1)
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

void func_229(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_230(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_225(*uParam0);
	iVar1 = func_223(*uParam0);
	if (iParam1 < 1 || iParam1 > func_218(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_231(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_232(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_233(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_234(int iParam0)
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
	iVar0 = func_219(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_220(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_221(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_223(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_225(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_222(iParam0);
	if (iVar5 < 1 || iVar5 > func_218(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_235(int iParam0, int iParam1)
{
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0)
{
	int iVar0;
	
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				iVar0 = func_104();
				if (!func_106(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_244()) || Global_96220) || Global_24446) || func_243()) || func_43(8, -1)) || func_242()) || func_241()) || func_240()) || func_239()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1) || func_244()) || Global_24446) || func_243()) || func_43(8, -1)) || func_240()) || func_242()) || func_241()) || func_239()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_244()) || Global_96220) || Global_24446) || func_243()) || func_43(8, -1)) || func_240()) || func_242()) || func_241()) || func_239()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_244()) || Global_96220) || Global_24446) || func_243()) || func_43(8, -1)) || func_242()) || func_241()) || func_239()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_244() || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || func_43(8, -1)) || func_239()) || func_238()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_43(8, -1) || func_242()) || func_241()) || func_238()) || func_237())
						{
							return 0;
						}
						if ((unk_0xA4ADA92842355D33() && unk_0x4B08838D3C4A40AA() != 3) && unk_0x34F66A7928F4DB93() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
						{
							if ((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_244()) || Global_24446) || func_243()) || func_43(8, -1)) || func_241()) || func_240()) || func_239()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || func_244()) || func_241()) || Global_96220) || Global_24446) || func_243()) || Global_35953) || func_43(8, -1)) || func_240()) || func_238()) || func_239()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0)) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1)) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0x43C1CCFF3C61F7D7(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_244()) || Global_96220) || Global_24446) || func_243()) || func_43(8, -1)) || func_240()) || func_238()) || func_242()) || func_241()) || func_239())
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

var func_237()
{
	return Global_89823.f_1;
}

int func_238()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_239()
{
	if (unk_0x25531002BCF0D968(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_240()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_241()
{
	return Global_89836.f_291 > 0;
}

bool func_242()
{
	return Global_89836.f_290 > 0;
}

var func_243()
{
	return Global_1315898;
}

int func_244()
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_245()
{
	func_40();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_246(int iParam0)
{
	return func_226(func_227(), iParam0);
}

int func_247(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_104();
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

int func_248(int iParam0)
{
	if (!func_106(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_249(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_251())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_250()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (unk_0xCA8794CE207FC6D5(uVar0, 0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0xE634CB9EE7094537(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_251()
{
	var uVar0;
	
	if (unk_0x85B80D0F84A3F70C())
	{
		if (unk_0x61D8FEAF64881CDA(unk_0x227FB8F9C772BAFB(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0xFA66FD5789959E48())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar0 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar0, 0);
					unk_0x6C25B3CA27EB626F(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_252(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iParam0 /*6*/], 3);
}

bool func_253(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iParam0 /*6*/], 0);
}

void func_254()
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0x2A488C176D52CCA5(Local_121, Local_90) < 20f)
		{
			iLocal_89 = 1;
			iLocal_46 = 2;
		}
		if (unk_0x2A488C176D52CCA5(Local_121, Local_93) < 20f)
		{
			iLocal_89 = 2;
			iLocal_46 = 3;
		}
		if (unk_0x2A488C176D52CCA5(Local_121, Local_96) < 20f)
		{
			iLocal_89 = 3;
			iLocal_46 = 1;
		}
		if (unk_0x2A488C176D52CCA5(Local_121, Local_99) < 20f)
		{
			iLocal_89 = 4;
			iLocal_46 = 1;
		}
	}
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_256()
{
	if (iLocal_155)
	{
		if (iLocal_49)
		{
			unk_0xFF467904A8A12BBE(iLocal_82);
			unk_0xFF467904A8A12BBE(iLocal_83);
			unk_0xFF467904A8A12BBE(iLocal_84);
		}
		if (!unk_0x9F94F2CFDCA78C55(iLocal_62))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				unk_0xA859D289EEB2D72A(iLocal_62, unk_0x507DA4994C3D8EBD(), 150f, -1, 0, 0);
			}
			unk_0xA1E4BA3B17C6D931(iLocal_62, 1);
			if (!bLocal_59)
			{
				unk_0xFBF796BC19E6FC23(iLocal_62, iLocal_191);
			}
		}
		if (unk_0xFD68187442384158(iLocal_61))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_61))
			{
				unk_0x6A750A31D18DA81A(iLocal_61, 1);
				if (unk_0xEC043AB2FEE0E94F(iLocal_61, -1146898486) == 7 && unk_0xEC043AB2FEE0E94F(iLocal_61, 242628503) == 7)
				{
					unk_0xB5DC017AFD430D1B(&uLocal_120);
					if (unk_0xB0680605FE40CDC9(iLocal_61))
					{
						unk_0x0383BD3A413F0EEF(0, 0);
					}
					unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), 9000, 0, 2);
					unk_0xF60985E3F774849A(0, Local_121, 250f, -1, 0, 0);
					unk_0x6EE8A5CF9AC75F12(uLocal_120);
					unk_0x8229311A391A4EC6(iLocal_61, uLocal_120);
					unk_0x9F77DFFC61FCB68C(&uLocal_120);
					unk_0xA1E4BA3B17C6D931(iLocal_61, 1);
					if (!iLocal_153 && !iLocal_147)
					{
						if (unk_0xF611D1BB58990143())
						{
							func_88();
						}
					}
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD361727124133DF3(iLocal_65))
		{
			unk_0xA0A65B537B1F11EC(&iLocal_65);
		}
		if (unk_0xD361727124133DF3(iLocal_64))
		{
			unk_0xA0A65B537B1F11EC(&iLocal_64);
		}
		if (unk_0xFD68187442384158(iLocal_63))
		{
			unk_0x05DADA1340CBB893(&iLocal_63);
		}
		if (unk_0xD361727124133DF3(iLocal_66))
		{
			unk_0xA0A65B537B1F11EC(&iLocal_66);
		}
	}
	if (iLocal_378 != -1)
	{
		if (unk_0x49977BD3DD29F214(iLocal_378))
		{
			unk_0x8939E31C143EF145(iLocal_378);
		}
		iLocal_378 = -1;
	}
	if (func_172())
	{
		unk_0xF83CD415BF55C455(1);
		unk_0xA54C914AEB391F49(1f);
	}
	func_29(&uLocal_379, 0, 0);
	func_91(0, 1, 1, 0);
	func_262(-1);
	func_257(&uLocal_392, 0);
	if (iLocal_140 != 0)
	{
		unk_0x629852E07D36F649(iLocal_140);
	}
	unk_0x883793591E631A3B();
}

void func_257(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_259(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_258(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_258(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_259(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*18*/], 30))
		{
			func_260(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_260(var uParam0)
{
	func_261(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_261(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x61D8FEAF64881CDA(iParam0, 30))
	{
		switch (func_197(iParam0))
		{
			case 0:
				unk_0xFF467904A8A12BBE(uParam2);
				break;
			
			case 1:
				unk_0xA878656BC39BBC51(uParam1);
				break;
			
			case 2:
				unk_0x36A51C16EAE930C6(uParam1);
				break;
			
			case 3:
				unk_0xB6A951E6C2922F87(uParam1);
				break;
			
			case 4:
				unk_0x6F50999A7C4DD6A2(iParam2, uParam1);
				break;
			
			case 5:
				unk_0x932057F38C942D3B(uParam1);
				break;
			
			case 6:
				unk_0xEE6010D5E324610F();
				break;
			
			case 7:
				unk_0x369C9F8CD6971E4B(iParam2);
				break;
			
			case 8:
				unk_0x0474B54D6F301DDF(iParam2, unk_0x61D8FEAF64881CDA(iParam0, 26));
				break;
			
			case 9:
				unk_0x7E0FE22DC929277C();
				break;
			
			default:
				break;
		}
	}
}

void func_262(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_173();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_172())
	{
		func_267(iParam0);
		unk_0xAABDA3B6E57B068A(0, 0);
		Global_97164 = unk_0xF976C624234A4AA8();
		func_266(30000);
		StringCopy(&cVar0, func_265(Global_97162, 1), 64);
		if (func_264(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x7D8C98CDE178AB1B(&cVar0, Global_97159, (unk_0xF976C624234A4AA8() - Global_97160), 0);
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xCD27BF29FB9012E2(&Global_97169, 0);
	}
	func_263(&Global_24503);
	Global_97163 = 0;
	func_210(-1);
}

void func_263(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

int func_264(int iParam0)
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

char* func_265(int iParam0, bool bParam1)
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

void func_266(int iParam0)
{
	Global_35460 = (unk_0xF976C624234A4AA8() + iParam0);
}

void func_267(int iParam0)
{
	func_268(iParam0, 0, func_273(iParam0));
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_227();
	func_271(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_270(iParam0, &uVar0);
	Var1 = { func_269(&uVar0) };
}

struct<16> func_269(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
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
	StringConCat(&Var0, ":", 64);
	iVar16 = func_219(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_225(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_223(*uParam0), 64);
	return Var0;
}

void func_270(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_271(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_223(*uParam0);
	iVar1 = func_225(*uParam0);
	iVar2 = func_222(*uParam0);
	iVar3 = func_221(*uParam0);
	iVar4 = func_220(*uParam0);
	iVar5 = func_219(*uParam0);
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
	iVar6 = func_218(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_218(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_272(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_272(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_233(uParam0, iParam1);
	func_232(uParam0, iParam2);
	func_231(uParam0, iParam3);
	func_230(uParam0, iParam4);
	func_229(uParam0, iParam5);
	func_228(uParam0, iParam6);
}

int func_273(int iParam0)
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

void func_274(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_173();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_264(iParam0))
	{
		func_285(iParam0, iParam1);
		if (!func_284(51))
		{
			func_281("RE_REWARD", 1, 0, 4000, 10000, func_166(), 0, 138, 0);
			func_280(51);
		}
		if (func_151(iParam0))
		{
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_279(iParam0, iParam1) != 322)
		{
			func_275(func_279(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_180(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
			{
				func_180(7);
			}
			else
			{
				func_180(1);
			}
		}
	}
}

void func_275(int iParam0, var uParam1, var uParam2)
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
		func_278((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_276();
	}
}

void func_276()
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x88300116A714168E(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0x96B68C67633472DC(joaat("num_missions_completed"), Global_96909, 1);
	unk_0x96B68C67633472DC(joaat("num_missions_available"), Global_96892, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_completed"), Global_96910, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_available"), Global_96893, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_completed"), Global_96911, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_available"), Global_96894, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_completed"), Global_96912, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_available"), Global_96895, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_available"), Global_96899, 1);
	unk_0x96B68C67633472DC(joaat("num_misc_completed"), (Global_96915 + Global_96914), 1);
	unk_0x96B68C67633472DC(joaat("num_misc_available"), (Global_96898 + Global_96897), 1);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0xCD9157C8F655290A(joaat("total_progress_made"), Global_97173.f_8415.f_3853, 1);
	unk_0x96B68C67633472DC(joaat("percent_story_missions"), Global_96916, 1);
	unk_0x96B68C67633472DC(joaat("percent_ambient_missions"), Global_96917, 1);
	unk_0x96B68C67633472DC(joaat("percent_oddjobs"), Global_96918, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_74(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0x557C97BA9C4CE8E1())
	{
		if (!Global_68067)
		{
			if (func_277() == 2 == 0 && !unk_0xD95428C8AA1DBBF2())
			{
				if (unk_0x5F65F01B2E04B349())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_177();
				}
			}
		}
	}
}

int func_277()
{
	return Global_24444;
}

int func_278(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_96();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA207790667DAE5A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x3216D1FFC9DAD41E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA207790667DAE5A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x3216D1FFC9DAD41E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA207790667DAE5A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x3216D1FFC9DAD41E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA207790667DAE5A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x3216D1FFC9DAD41E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E32FF1D139F1210((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x3216D1FFC9DAD41E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E32FF1D139F1210((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x3216D1FFC9DAD41E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x6E59129DA6C486E4((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x3216D1FFC9DAD41E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x6E59129DA6C486E4((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x3216D1FFC9DAD41E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_279(int iParam0, int iParam1)
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

void func_280(int iParam0)
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
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_281(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_282(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_282(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xA858564DC37EED5E(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA858564DC37EED5E(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0xF976C624234A4AA8() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0xF976C624234A4AA8() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_283();
	}
}

void func_283()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_284(int iParam0)
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
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_285(int iParam0, int iParam1)
{
	unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
}

