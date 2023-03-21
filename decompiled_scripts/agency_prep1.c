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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 2;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 8;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 8;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	struct<110> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_243 = 3;
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
	var uLocal_340 = 16;
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
	var uLocal_505 = 16;
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
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 3;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 1092616192;
	var uLocal_678 = 1101004800;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 3;
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
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 5;
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
	var uLocal_752 = 5;
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
	var uLocal_812 = 3;
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
	var uLocal_831 = 13;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
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
	var uLocal_860 = 4;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 4;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 4;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 4;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 4;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 4;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 4;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 8;
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
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	int iLocal_941 = 0;
	int iLocal_942 = 0;
	int iLocal_943[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_952 = 0;
	var uLocal_953 = 16;
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
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	int iLocal_1118 = 0;
	int iLocal_1119 = 0;
	struct<3> Local_1120 = { 0, 0, 0 } ;
	int iLocal_1123 = 0;
	int iLocal_1124 = 0;
	int iLocal_1125 = 0;
	int iLocal_1126 = 0;
	int iLocal_1127 = 0;
	int iLocal_1128 = 0;
	int iLocal_1129 = 0;
	int iLocal_1130 = 0;
	bool bLocal_1131 = 0;
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
	int iLocal_1134 = 0;
	struct<3> Local_1135 = { 0, 0, 0 } ;
	struct<3> Local_1138 = { 0, 0, 0 } ;
	struct<2> Local_1141 = { 0, 0 } ;
	var uLocal_1143 = 0;
	struct<2> Local_1144 = { 0, 0 } ;
	var uLocal_1146 = 0;
	int iLocal_1147 = 0;
	char[] cLocal_1148[8] = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	char[] cLocal_1152[8] = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	bool bLocal_1156 = 0;
	int iLocal_1157 = 0;
	char cLocal_1158[48] = "";
	int iLocal_1164 = 0;
	int iLocal_1165 = 0;
	int iLocal_1166 = 0;
	var uLocal_1167 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	iLocal_72 = 1;
	iLocal_73 = 65;
	iLocal_74 = 49;
	iLocal_75 = 64;
	iLocal_80 = joaat("p_amb_phone_01");
	Local_1120 = { 693.1158f, -1012.418f, 21.72802f };
	Local_1135 = { 692.8695f, -998.7867f, 22.3201f };
	Local_1138 = { 693.3784f, -1025.671f, 21.506f };
	if (unk_0xE8A79675302ED812(3))
	{
		func_103();
		func_101();
		func_99();
	}
	func_91();
	unk_0x25A523E067E06F54(1);
	while (true)
	{
		unk_0x2E94C9549322098D("M_TheAgencyHeistPrep1", 0);
		if (!iLocal_1125)
		{
			if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_1120, 200f, 200f, 200f, 0, 1, 0) && !unk_0x33CC9445B2DF9387(Local_1120, 50f))
			{
				unk_0x6C5F5B5F6894CCE3(Local_1120, 50f, 1, 0, 0, 0);
				iLocal_1125 = 1;
			}
		}
		else if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_1120, 200f, 200f, 200f, 0, 1, 0))
		{
			iLocal_1125 = 0;
		}
		if (!iLocal_1130)
		{
			if (Global_89597.f_358 == unk_0x56BEECB328B6D29D("AHP1_TRUCKCALLED") || Global_89527)
			{
				func_90(543);
				Global_89597.f_358 = 0;
				iLocal_1130 = 1;
			}
		}
		func_89();
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if ((unk_0x724D816EA203A79E(iLocal_943[iVar0]) && !unk_0x36CEFBE9B745A58D(iLocal_943[iVar0])) && unk_0x724D816EA203A79E(iLocal_941))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_943[iVar0], 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > 2500f)
				{
					unk_0x22321800954A532E(iLocal_943[iVar0], 1);
					unk_0x5558ED6D4A2DEC93(iLocal_943[iVar0], unk_0xBC25C936A095B5BA(), 300f, 20000, 1, 0);
					unk_0x02537C8C1BEEB477(&(iLocal_943[iVar0]));
				}
			}
			iVar0++;
		}
		if (iLocal_1166 < 8 && iLocal_1118 >= 0)
		{
			func_87();
		}
		switch (iLocal_1118)
		{
			case -1:
				iVar1 = 0;
				while (iVar1 < iLocal_943)
				{
					if (unk_0x724D816EA203A79E(iLocal_943[iVar1]))
					{
						if (unk_0x724D816EA203A79E(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())))
						{
							iVar2 = unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA());
							if ((unk_0xE59B7F5A03335350(iVar2, 0) && unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iVar2, 1)) < 30f) && unk_0x5E87CB0495C97732(iVar2, joaat("firetruk")))
							{
								unk_0xA902E18EDF6FA0C8(5, joaat("player"), iLocal_952);
								unk_0xA902E18EDF6FA0C8(5, iLocal_952, joaat("player"));
								unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 1, 0);
								unk_0x7B6A06DE40F28782(unk_0xB5CEFD608600A09F(), 0f);
							}
						}
					}
					iVar1++;
				}
				if (func_86())
				{
					unk_0x1D1C393C7689E5A6(15f, 15f, 4);
					unk_0x3857DADBD6EC8A54("AHP1_START");
					iLocal_1118++;
				}
				break;
			
			case 0:
				if (!unk_0x724D816EA203A79E(iLocal_941))
				{
					func_86();
					if ((unk_0x724D816EA203A79E(unk_0x3E12B546F3F2597A()) && unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0)) && unk_0x6F79ECA8C83E4357(unk_0x3E12B546F3F2597A()) == joaat("firetruk"))
					{
						iLocal_941 = unk_0x3E12B546F3F2597A();
						unk_0x77815D3407C6700D(iLocal_941, 1, 1);
					}
				}
				else
				{
					func_44();
					if (!iLocal_1126 && unk_0xE59B7F5A03335350(iLocal_941, 0))
					{
						func_43(iLocal_941, -1);
						func_42(iLocal_941, -1);
						func_41(541, 0);
						iLocal_1126 = 1;
					}
					if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_1120) < unk_0xE3621CC40F31FE2E(100f, 2f))
					{
						unk_0x78108840729CEAEE(1);
					}
					func_86();
					if (bLocal_1131)
					{
						if (unk_0xE59B7F5A03335350(iLocal_941, 0) && unk_0xE59B7F5A03335350(iLocal_942, 0))
						{
							func_35(iLocal_942);
							if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iLocal_942) && unk_0x4DBCE270B354E123(iLocal_941, Local_1120, Global_19, 1, 1, 0))
							{
								if (unk_0x2DA8CA50A72528FB(uLocal_939))
								{
									unk_0x07B8ECB35A4ED3AC(&uLocal_939);
								}
								unk_0x1D1C393C7689E5A6(5f, 15f, 4);
								iLocal_1118++;
							}
						}
					}
					else if (unk_0xE59B7F5A03335350(iLocal_941, 0))
					{
						func_35(iLocal_941);
						if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iLocal_941) && unk_0x4DBCE270B354E123(iLocal_941, Local_1120, Global_19, 1, 1, 0))
						{
							if (unk_0x2DA8CA50A72528FB(uLocal_939))
							{
								unk_0x07B8ECB35A4ED3AC(&uLocal_939);
							}
							unk_0x1D1C393C7689E5A6(5f, 15f, 4);
							iLocal_1118++;
						}
					}
				}
				if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
				{
					unk_0x1D1C393C7689E5A6(5f, 10f, 4);
					iLocal_1118 = 100;
				}
				if (!unk_0x724D816EA203A79E(iLocal_941))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (unk_0xE59B7F5A03335350(iLocal_941, 0))
				{
					if ((unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_941, 1)) > 22500f && unk_0x41A5D6415E2CC10E(iLocal_941)) || unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_941, 1)) > 90000f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
			
			case 1:
				if (unk_0xE59B7F5A03335350(iLocal_941, 0))
				{
					if (func_12(iLocal_941, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						if (!iLocal_1129)
						{
							func_11("AHP_GETOUT", 7500, 1);
							iLocal_1129 = 1;
						}
						unk_0x3857DADBD6EC8A54("AHP1_STOP");
						unk_0x1D1C393C7689E5A6(10f, 10f, 4);
						iLocal_1118++;
					}
				}
				break;
			
			case 2:
				if (unk_0xE59B7F5A03335350(iLocal_941, 0))
				{
					if (!unk_0x4DBCE270B354E123(iLocal_941, Local_1120, Global_19 + Vector(2f, 2f, 2f), 1, 1, 0))
					{
						iLocal_1118 = 0;
					}
					else if (bLocal_1131)
					{
						if (unk_0x724D816EA203A79E(iLocal_942))
						{
							if (!unk_0xB6A16B5E7EB81F9B(iLocal_942, iLocal_941))
							{
								unk_0xD38EB677CBE7440A(iLocal_941, 0, 0);
								if (unk_0xAAED47028764A78D(iLocal_941))
								{
									unk_0x0FB6723EA68C0881(iLocal_941, 0);
								}
								unk_0xD421BC740C5340C3(iLocal_941, 2);
								unk_0xEB233A3B7635D2AC();
								unk_0xC1B1E9A034A63A62(0);
								iLocal_1118++;
							}
							else
							{
								unk_0xA89D0FE4AB36D064(iLocal_942, iLocal_941);
							}
						}
					}
					else if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_941, 0))
					{
						if (unk_0xAAED47028764A78D(iLocal_941))
						{
							unk_0x0FB6723EA68C0881(iLocal_941, 0);
						}
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
						unk_0xD421BC740C5340C3(iLocal_941, 2);
						unk_0xEB233A3B7635D2AC();
						unk_0xC1B1E9A034A63A62(0);
						iLocal_1118++;
					}
				}
				break;
			
			case 3:
				if (unk_0xE59B7F5A03335350(iLocal_941, 0))
				{
					if (unk_0x83666F9FB8FEBD4B() > 3000)
					{
						unk_0x1D1C393C7689E5A6(5f, 5f, 4);
						func_6();
					}
				}
				break;
			
			case 100:
				if (unk_0x2DA8CA50A72528FB(uLocal_939))
				{
					unk_0x07B8ECB35A4ED3AC(&uLocal_939);
				}
				if (!func_5(13))
				{
					func_4(13, 1);
				}
				iLocal_1118++;
				break;
			
			case 101:
				func_86();
				if (bLocal_1131)
				{
					func_35(iLocal_942);
				}
				else
				{
					func_35(iLocal_941);
				}
				if (!iLocal_1132)
				{
					if ((unk_0xE59B7F5A03335350(iLocal_941, 0) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_941, 0)) || (unk_0xE59B7F5A03335350(iLocal_942, 0) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_942, 0)))
					{
						if ((unk_0x0DA3060AFF99D44F(unk_0xBC25C936A095B5BA(), "DAVIS") && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 5f) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
						{
							if (func_3())
							{
								unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_AH_PREP_01", 0f);
							}
							else
							{
								unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_AH_PREP_02", 0f);
							}
							iLocal_1132 = 1;
						}
					}
				}
				if (!unk_0x724D816EA203A79E(iLocal_941))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (unk_0xE59B7F5A03335350(iLocal_941, 0))
				{
					if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
					{
						unk_0xEB233A3B7635D2AC();
						iLocal_1118 = 0;
					}
					else if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iLocal_941))
					{
						if (!iLocal_1128)
						{
							func_11("AHP_LOSECOPS", 7500, 1);
							iLocal_1128 = 1;
							iLocal_1119 = unk_0x105601648511CC64();
						}
					}
					else if ((iLocal_1128 && (unk_0x105601648511CC64() - iLocal_1119) < 7500) && unk_0x4B8E3E5901E59EB8())
					{
						unk_0xEB233A3B7635D2AC();
					}
					if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_941, 1)) > 22500f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
		}
		if (unk_0x724D816EA203A79E(iLocal_941))
		{
			if (!func_2(iLocal_941))
			{
				func_1(iLocal_941, 0);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0, int iParam1)
{
	Global_92955.f_22[iParam1] = iParam0;
}

int func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_92955.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_3()
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_4(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_105220.f_9056.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_105220.f_9056.f_99.f_58[iParam0] = iParam1;
}

int func_5(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_105220.f_9056.f_99.f_58[iParam0];
}

void func_6()
{
	unk_0xAC8915327014F426(0, 0);
	func_7(0, 0);
	func_99();
}

void func_7(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55969)
	{
		Global_55969 = iParam1;
	}
	if (bParam0)
	{
		if ((func_10(0) && Global_71224.f_1 == 1) && func_9(Global_71224))
		{
		}
		else
		{
			Global_55967 = 1;
		}
	}
	if (Global_105220.f_9056 || func_10(0))
	{
		iVar0 = func_8();
		iVar1 = Global_83852[iVar0 /*5*/];
		uVar2 = Global_71247.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_105220.f_9056)
			{
			}
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Global_83852[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Global_83852[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_83852[iVar0 /*5*/].f_1), 4);
		unk_0xF0059F27F7BB6680(&Global_71226, 1);
		Global_71242 = uVar2;
		Global_71243 = unk_0x105601648511CC64();
	}
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xFA30DFD0084E92FE(Global_83852[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(int iParam0)
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

bool func_10(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

void func_11(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

int func_12(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xBBC4195AD74D153D(0, 71, 1);
	unk_0xBBC4195AD74D153D(0, 72, 1);
	unk_0xBBC4195AD74D153D(0, 76, 1);
	unk_0xBBC4195AD74D153D(0, 73, 1);
	unk_0xBBC4195AD74D153D(0, 59, 1);
	unk_0xBBC4195AD74D153D(0, 60, 1);
	if (bParam5)
	{
		unk_0xBBC4195AD74D153D(0, 75, 1);
	}
	unk_0xBBC4195AD74D153D(0, 80, 1);
	if (!bParam6)
	{
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
	}
	unk_0xBBC4195AD74D153D(0, 74, 1);
	unk_0xBBC4195AD74D153D(0, 86, 1);
	unk_0xBBC4195AD74D153D(0, 81, 1);
	unk_0xBBC4195AD74D153D(0, 82, 1);
	unk_0xBBC4195AD74D153D(0, 138, 1);
	unk_0xBBC4195AD74D153D(0, 136, 1);
	unk_0xBBC4195AD74D153D(0, 114, 1);
	unk_0xBBC4195AD74D153D(0, 107, 1);
	unk_0xBBC4195AD74D153D(0, 110, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 87, 1);
	unk_0xBBC4195AD74D153D(0, 88, 1);
	unk_0xBBC4195AD74D153D(0, 113, 1);
	unk_0xBBC4195AD74D153D(0, 115, 1);
	unk_0xBBC4195AD74D153D(0, 116, 1);
	unk_0xBBC4195AD74D153D(0, 117, 1);
	unk_0xBBC4195AD74D153D(0, 118, 1);
	unk_0xBBC4195AD74D153D(0, 119, 1);
	unk_0xBBC4195AD74D153D(0, 131, 1);
	unk_0xBBC4195AD74D153D(0, 132, 1);
	unk_0xBBC4195AD74D153D(0, 123, 1);
	unk_0xBBC4195AD74D153D(0, 126, 1);
	unk_0xBBC4195AD74D153D(0, 129, 1);
	unk_0xBBC4195AD74D153D(0, 130, 1);
	unk_0xBBC4195AD74D153D(0, 133, 1);
	unk_0xBBC4195AD74D153D(0, 134, 1);
	unk_0x12D40A07C0F343DC();
	func_13(iParam0);
	if ((unk_0x105601648511CC64() - Global_29) > 500)
	{
		unk_0x241D744C1CCBC526(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x105601648511CC64();
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x357058E632979E65(unk_0x8910237449BB6F79(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(int iParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xB90934C41404D57A(iParam0))
		{
			if (unk_0x8324A028D312E68D(iParam0))
			{
				unk_0xFE0D4DB713B1C1E7(iParam0, 0);
			}
		}
	}
}

void func_14(char* sParam0)
{
	int iVar0;
	
	unk_0xAC8915327014F426(0, 0);
	func_20(sParam0);
	while (!func_19())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x724D816EA203A79E(iLocal_941))
	{
		if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_941, 0))
		{
			unk_0xCF6040807CC0E4A5(&iLocal_941);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_943)
	{
		if (unk_0x724D816EA203A79E(iLocal_943[iVar0]))
		{
			unk_0xF845620A03C7425B(&(iLocal_943[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_89597.f_9)
	{
		if (unk_0x724D816EA203A79E(Global_89597.f_9[iVar0]))
		{
			unk_0xF845620A03C7425B(&(Global_89597.f_9[iVar0]));
		}
		iVar0++;
	}
	unk_0x6C5F5B5F6894CCE3(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 100f, 1, 1, 0, 0);
	unk_0x3857DADBD6EC8A54("AHP1_FAIL");
	if (func_18())
	{
		func_103();
	}
	else if (func_17())
	{
		func_15(229.1676f, -1614.979f, 28.2892f, 142.5156f);
	}
	func_99();
}

void func_15(struct<3> Param0, float fParam3)
{
	if (func_16(Global_71218, 0f, 0f, 0f, 0))
	{
		Global_71218 = { Param0 };
		Global_71221 = fParam3;
	}
}

bool func_16(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_17()
{
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 226.6765f, -1668.942f, 25.46082f, 185.6446f, -1635.836f, 39.29184f, 57.75f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18()
{
	if (Global_92955 == 7)
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_92955 == 7 || Global_92955 == 8)
	{
		return 1;
	}
	return 0;
}

void func_20(char* sParam0)
{
	func_34(sParam0);
	func_21(0);
}

void func_21(int iParam0)
{
	int iVar0;
	
	if (Global_105220.f_9056 || func_10(0))
	{
		iVar0 = func_8();
		if (!func_22(iVar0))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_83852[iVar0 /*5*/].f_1), 5);
		Global_92991 = iParam0;
	}
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_27();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_83852[iParam0 /*5*/];
	iVar1 = Global_71247.f_109[iVar0 /*4*/];
	func_26(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_23(&(Global_105220.f_2354.f_539), iVar1);
	if (Global_87275 == Global_92992)
	{
		Global_105220.f_9056.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_83888[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xC63520BF0B3FB162(0);
		}
	}
	Global_105220.f_9056.f_330[iVar1 /*6*/].f_2++;
	Global_87275 = Global_92992;
	if (iParam0 == -1)
	{
		if (Global_105220.f_9056)
		{
		}
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_83852[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_83852[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_23(var uParam0, int iParam1)
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
		iVar1 = Global_105220.f_18504[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xFA30DFD0084E92FE(Global_105220.f_9056.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_25(Global_105220.f_18504[iVar0], &Var2, &fVar5))
			{
				Global_105220.f_18504[iVar0] = 318;
				func_24(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90490[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_9 = 0f;
				Global_90490[iVar0 /*29*/].f_12 = 0f;
				Global_90490[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_10 = 0f;
				Global_90490[iVar0 /*29*/].f_13 = 0f;
				Global_90490[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_11 = 0f;
				Global_90490[iVar0 /*29*/].f_14 = 0f;
				Global_90490[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_26 = 0f;
				Global_90490[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_27 = 0f;
				Global_90490[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_24(var uParam0)
{
	*uParam0 = -15;
}

int func_25(int iParam0, var uParam1, float fParam2)
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
			return func_25(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_25(8, uParam1, fParam2);
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

void func_26(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87085[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87085[iParam0 /*2*/] = 0;
	}
}

void func_27()
{
	Global_92990 = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_71210))
		{
			switch (func_28())
			{
				case 0:
					StringCopy(&Global_71210, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71210, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71210, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71214, "", 16);
		}
		Global_92990 = 0;
	}
	else if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xF1734B55490E9045(&Global_71210))
		{
			switch (func_28())
			{
				case 0:
					StringCopy(&Global_71210, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71210, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71210, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71214, "", 16);
		}
		Global_92990 = 0;
		unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 25);
	}
}

int func_28()
{
	func_29();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_29()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_33(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_32(unk_0xBC25C936A095B5BA());
			if (func_31(iVar0) && (!func_30(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_31(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_30(int iParam0)
{
	return Global_35905 == iParam0;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_34(char* sParam0)
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (unk_0x5D29F91E567588E2(sParam0) <= 16)
		{
			StringCopy(&Global_71210, sParam0, 16);
			StringCopy(&Global_71214, "", 16);
			if (unk_0xD31A96FC53460BE2())
			{
				unk_0x632B3D2D98BE2D44();
			}
		}
	}
}

void func_35(int iParam0)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
		{
			if (unk_0xE59B7F5A03335350(iParam0, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam0, 0))
				{
					if (unk_0x2DA8CA50A72528FB(uLocal_940))
					{
						unk_0x07B8ECB35A4ED3AC(&uLocal_940);
					}
				}
				else if (!unk_0x2DA8CA50A72528FB(uLocal_940))
				{
					uLocal_940 = func_39(iParam0, 0, 0);
				}
			}
		}
		else if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam0, 0))
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_940))
			{
				unk_0x07B8ECB35A4ED3AC(&uLocal_940);
			}
			if (!unk_0x2DA8CA50A72528FB(uLocal_939))
			{
				unk_0xEB233A3B7635D2AC();
				if (!iLocal_1124)
				{
					func_38("AHP_DROPOFF", 7500, 1);
					iLocal_1124 = 1;
				}
				uLocal_939 = func_36(Local_1120, 1);
				unk_0x1D1C393C7689E5A6(3f, 2f, 3);
			}
		}
		else
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_939))
			{
				unk_0x07B8ECB35A4ED3AC(&uLocal_939);
			}
			if (!unk_0x2DA8CA50A72528FB(uLocal_940))
			{
				unk_0xEB233A3B7635D2AC();
				if (!iLocal_1123)
				{
					func_38("AHP_GETBAKIN", 7500, 1);
					iLocal_1123 = 1;
				}
				uLocal_940 = func_39(iParam0, 0, 0);
			}
		}
	}
	else
	{
		if (unk_0x2DA8CA50A72528FB(uLocal_940))
		{
			unk_0x07B8ECB35A4ED3AC(&uLocal_940);
		}
		if (unk_0x2DA8CA50A72528FB(uLocal_939))
		{
			unk_0x07B8ECB35A4ED3AC(&uLocal_939);
		}
	}
}

var func_36(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x390CF6C8AD6903B7(Param0);
	unk_0x3F5F1772D71D5EC4(uVar0, func_37(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(uVar0, iParam3);
	return uVar0;
}

float func_37(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_38(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 0);
}

int func_39(int iParam0, bool bParam1, bool bParam2)
{
	return func_40(iParam0, !bParam1, bParam2);
}

int func_40(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_37(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(uVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_37(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_37(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_41(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55977 = iParam0;
	if (!Global_55975)
	{
		Global_55975 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68062)
		{
			if (Global_68063[iVar0 /*9*/] == iParam0)
			{
				Global_68063[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55980 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_68062)
	{
		if (iParam1 == -1 || Global_68063[iVar0 /*9*/] == iParam1)
		{
			if (Global_68063[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_68063[iVar0 /*9*/].f_6 = iParam0;
				Global_68063[iVar0 /*9*/].f_7 = 1;
				Global_68063[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_43(int iParam0, int iParam1)
{
	Global_55978 = iParam0;
	Global_55979 = iParam1;
}

void func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_1131)
	{
		iVar0 = iLocal_942;
	}
	else
	{
		iVar0 = iLocal_941;
	}
	if (!unk_0x7930B3E9C919E90F())
	{
		switch (iLocal_1133)
		{
			case 0:
				if ((unk_0xE59B7F5A03335350(iVar0, 0) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0)) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
				{
					iVar1 = 0;
					while (iVar1 < 3)
					{
						iVar2 = func_84(iVar1);
						if ((!unk_0x36CEFBE9B745A58D(iVar2) && unk_0x62F3A07C43FFB568(iVar2, iVar0, 0)) && unk_0x3187EF5798B5D209(iVar0, -1, 0) == iVar2)
						{
							if (!func_83(iVar2) && func_82(iVar2, 0))
							{
								if (func_81(iVar2, 0))
								{
									iLocal_1165 = 0;
									iLocal_1134 = iVar1;
									iLocal_1133 = 1;
								}
							}
						}
						iVar1++;
					}
				}
				break;
			
			case 1:
				if (unk_0xE59B7F5A03335350(iVar0, 0))
				{
					if ((((unk_0x36CEFBE9B745A58D(func_84(iLocal_1134)) || unk_0x3187EF5798B5D209(iVar0, -1, 0) != func_84(iLocal_1134)) || !unk_0x62F3A07C43FFB568(func_84(iLocal_1134), iVar0, 0)) || !func_83(func_84(iLocal_1134))) || !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
					{
						func_80(func_84(iLocal_1134));
						iLocal_1133 = 0;
					}
					else
					{
						switch (iLocal_1165)
						{
							case 0:
								iLocal_1165 = 2;
								break;
							
							case 1:
								if (unk_0x37718415CE714A5B(Local_1141.f_0, Local_1141.f_1, Local_1144.f_0, Local_1144.f_1))
								{
									iLocal_1165++;
								}
								break;
							
							case 2:
								unk_0x509F549022512095(func_84(iLocal_1134), iVar0, Local_1120, 15f, 0, joaat("firetruk"), 786484, 5f, 5f);
								if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iVar0, 1), Local_1120) > 250f)
								{
									unk_0x7E5D4CEE2D9B9424(iVar0, unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iLocal_941, 1), Local_1120));
								}
								iLocal_1165++;
								break;
							
							case 3:
								if (unk_0x0C265B3C448E6954(iVar0, 697.6884f, -1013.364f, 27.4968f, 688.3482f, -1013.179f, 22.32968f, 29.25f, 0, 1, 0))
								{
									if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iVar0, 1), Local_1135) < unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iVar0, 1), Local_1138))
									{
										if (bLocal_1131)
										{
											unk_0x509F549022512095(func_84(iLocal_1134), iVar0, Local_1138, 5f, 0, unk_0x6F79ECA8C83E4357(iVar0), 262144, 2f, 2f);
										}
										else
										{
											unk_0xD8386C462DB4E5CF(func_84(iLocal_1134), iVar0, Local_1120, 180f, 1, 15f, 0);
										}
									}
									else if (bLocal_1131)
									{
										unk_0x509F549022512095(func_84(iLocal_1134), iVar0, Local_1135, 5f, 0, unk_0x6F79ECA8C83E4357(iVar0), 262144, 2f, 2f);
									}
									else
									{
										unk_0xD8386C462DB4E5CF(func_84(iLocal_1134), iVar0, Local_1120, 0f, 1, 15f, 0);
									}
									iLocal_1165++;
								}
								break;
							
							case 4:
								break;
							}
						}
				}
				func_45();
				break;
		}
	}
	else if (iLocal_1133 != 0)
	{
		if (func_80(func_84(iLocal_1134)))
		{
			iLocal_1133 = 0;
		}
	}
}

void func_45()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x36CEFBE9B745A58D(func_84(iLocal_1134)) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
	{
		if ((((unk_0x724D816EA203A79E(iLocal_941) && unk_0xE59B7F5A03335350(iLocal_941, 0)) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_941, 0)) && unk_0x62F3A07C43FFB568(func_84(iLocal_1134), iLocal_941, 0)) || (((unk_0x724D816EA203A79E(iLocal_942) && unk_0xE59B7F5A03335350(iLocal_942, 0)) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_942, 0)) && unk_0x62F3A07C43FFB568(func_84(iLocal_1134), iLocal_942, 0)))
		{
			bVar0 = true;
		}
	}
	switch (iLocal_1147)
	{
		case 0:
			iVar1 = func_77();
			if (func_65(0, 1, 145, 0, iVar1, &cLocal_1148, &cLocal_1152, 1))
			{
				func_64(&uLocal_953, 0);
				func_64(&uLocal_953, 1);
				func_64(&uLocal_953, 2);
				if (func_28() == 1)
				{
					func_63(&uLocal_953, 0, func_84(0), "MICHAEL", 0, 1);
					func_63(&uLocal_953, 1, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
				}
				else
				{
					func_63(&uLocal_953, 1, func_84(1), "FRANKLIN", 0, 1);
					func_63(&uLocal_953, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
				}
				if (!iLocal_1157)
				{
					iLocal_1164 = unk_0x105601648511CC64();
				}
				iLocal_1147 = 1;
			}
			break;
		
		case 1:
			if (bVar0)
			{
				if ((unk_0x105601648511CC64() - iLocal_1164) > 5000 || iLocal_1157)
				{
					if (func_62(&uLocal_953, &cLocal_1148, &cLocal_1152, 8, 0, 0, 0))
					{
						iLocal_1157 = 1;
						iLocal_1147 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!bLocal_1156)
			{
				if (!bVar0)
				{
					cLocal_1158 = { func_61() };
					func_60();
					bLocal_1156 = true;
				}
			}
			else if (bVar0)
			{
				if (func_49(&uLocal_953, &cLocal_1148, &cLocal_1152, &cLocal_1158, 8, 0, 0))
				{
					bLocal_1156 = false;
				}
			}
			if (unk_0x7930B3E9C919E90F() || (!bLocal_1156 && !func_48()))
			{
				func_46();
				iLocal_1147 = 3;
				iLocal_1164 = unk_0x105601648511CC64();
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - iLocal_1164) > 10000)
			{
				iLocal_1147 = 0;
			}
			break;
	}
}

void func_46()
{
	Global_14666 = 0;
	func_47();
}

void func_47()
{
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x5C7DC611411E2CF9();
		Global_16811 = 0;
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

int func_48()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

bool func_49(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_59(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15807 = 0;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 1;
	StringCopy(&Global_16804, sParam3, 24);
	Global_2621441 = 0;
	return func_50(sParam2, iParam4, 0);
}

int func_50(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_58();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_57(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_56();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_55();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_54())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_53())
			{
				return 0;
			}
			else
			{
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_52();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_51();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_58();
	}
	return 0;
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_52()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_53()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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

void func_55()
{
	if (func_30(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_28();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

void func_56()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_57(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_58()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = iParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

void func_60()
{
	Global_14666 = 0;
	func_58();
}

struct<6> func_61()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15800 == 4)
	{
		iVar6 = unk_0xC0A904C0F2775676();
		iVar6 = (iVar6 + Global_16810);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x0F6F4C227FB5DD52(&(Global_14668[iVar7 /*6*/])))
			{
				return Global_14668[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x0F6F4C227FB5DD52(&(Global_14668[iVar8 /*6*/])))
					{
						return Global_14668[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14668[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_62(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_59(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_50(sParam2, iParam3, 0);
}

void func_63(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

void func_64(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_76(iParam0);
	iVar1 = func_76(iParam1);
	iVar2 = func_76(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return 0;
	}
	if (iVar2 == 7)
	{
		iVar5 = func_75(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return 0;
		}
		if (((iParam0 == 1 && iParam1 == 19) && func_5(137)) && iParam3 == 1)
		{
			if (func_74(&(Global_105220.f_18074.f_388), iParam3, &iVar3, &iVar4, iParam4))
			{
				if (bParam7)
				{
					func_69(&(Global_105220.f_18074.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0;
			}
		}
		else if (func_74(&(Global_105220.f_18074.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_69(&(Global_105220.f_18074.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar6 = func_68(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return 0;
		}
		if (func_74(&(Global_105220.f_18074.f_347[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_69(&(Global_105220.f_18074.f_347[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	*sParam6 = { func_66(iVar0, iVar1, iVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 1;
}

struct<4> func_66(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	StringCopy(&Var0, "F", 16);
	if (iParam3 == 0)
	{
		StringConCat(&Var0, "p", 16);
		StringConCat(&Var0, func_67(iParam0), 16);
		StringConCat(&Var0, func_67(iParam1), 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(&Var0, "a", 16);
		StringConCat(&Var0, func_67(iParam0), 16);
		StringConCat(&Var0, func_67(iParam1), 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&Var0, "c", 16);
		if (iParam2 < iParam1)
		{
			iVar4 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar4;
		}
		if (iParam1 < iParam0)
		{
			iVar5 = iParam0;
			iParam0 = iParam1;
			iParam1 = iVar5;
		}
		if (iParam2 < iParam1)
		{
			iVar6 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar6;
		}
		StringConCat(&Var0, func_67(iParam0), 16);
		StringConCat(&Var0, func_67(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_67(iParam2), 16);
		}
	}
	else
	{
		StringConCat(&Var0, "x", 16);
		StringConCat(&Var0, func_67(iParam0), 16);
		StringConCat(&Var0, func_67(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_67(iParam2), 16);
		}
	}
	return Var0;
}

char* func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "M";
			break;
		
		case 1:
			return "F";
			break;
		
		case 2:
			return "T";
			break;
		
		case 3:
			return "L";
			break;
		
		case 4:
			return "J";
			break;
		
		case 5:
			return "A";
			break;
	}
	return "X";
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == iParam1 || iParam1 == iParam2) || iParam2 == iParam0)
	{
		return 3;
	}
	if (((iParam0 == 1 || iParam1 == 1) || iParam2 == 1) && ((iParam0 == 2 || iParam1 == 2) || iParam2 == 2))
	{
		if ((iParam0 == 0 || iParam1 == 0) || iParam2 == 0)
		{
			return 0;
		}
		if ((iParam0 == 3 || iParam1 == 3) || iParam2 == 3)
		{
			return 1;
		}
	}
	return 3;
}

void func_69(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	func_73((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
	func_72((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
	func_71((*uParam0)[iParam2], &iVar6);
	if (iParam1 == 0)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 1)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	func_70(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}

void func_70(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	*uParam0 = 0;
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1 & 15, 28));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam2 & 15, 24));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam3 & 15, 20));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam4 & 15, 16));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam5 & 15, 12));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam6 & 15, 8));
	*uParam0 = (*uParam0 || iParam7 & 255);
}

void func_71(var uParam0, int iParam1)
{
	*iParam1 = uParam0 & 255;
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = unk_0x97EF1E5BCE9DC075(iParam0, 16) & 15;
	*iParam2 = unk_0x97EF1E5BCE9DC075(iParam0, 12) & 15;
	*iParam3 = unk_0x97EF1E5BCE9DC075(iParam0, 8) & 15;
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = unk_0x97EF1E5BCE9DC075(iParam0, 28) & 15;
	*iParam2 = unk_0x97EF1E5BCE9DC075(iParam0, 24) & 15;
	*iParam3 = unk_0x97EF1E5BCE9DC075(iParam0, 20) & 15;
}

int func_74(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		func_71((*uParam0)[*iParam2], &iVar6);
		if (unk_0xFA30DFD0084E92FE(iParam4, iVar6))
		{
			func_73((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			func_72((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return 1;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_76(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 155)
	{
		return Global_105220.f_28021[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 155)
	{
		return 6;
	}
	if (iParam0 == 156)
	{
		return 6;
	}
	return 6;
}

int func_77()
{
	int iVar0;
	
	iVar0 = 0;
	unk_0xF0059F27F7BB6680(&iVar0, 1);
	if (Local_81.f_109 == 0)
	{
		unk_0xF0059F27F7BB6680(&iVar0, 2);
	}
	if (func_5(128))
	{
		unk_0xF0059F27F7BB6680(&iVar0, 4);
		if (!func_79(24))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 21);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&iVar0, 3);
	}
	if (func_5(131))
	{
		unk_0xF0059F27F7BB6680(&iVar0, 6);
	}
	else
	{
		unk_0xF0059F27F7BB6680(&iVar0, 5);
	}
	if (func_5(137))
	{
		unk_0xF0059F27F7BB6680(&iVar0, 9);
	}
	else if (func_5(126))
	{
		unk_0xF0059F27F7BB6680(&iVar0, 8);
	}
	else
	{
		unk_0xF0059F27F7BB6680(&iVar0, 7);
	}
	if (func_5(137))
	{
		if (!func_5(135) && !func_5(136))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 10);
		}
		if (func_5(135))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 11);
		}
		else
		{
			unk_0xF0059F27F7BB6680(&iVar0, 13);
		}
		if (func_5(136))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 12);
		}
		else
		{
			unk_0xF0059F27F7BB6680(&iVar0, 14);
		}
	}
	if (!func_79(20))
	{
		unk_0xF0059F27F7BB6680(&iVar0, 15);
	}
	if (!func_79(46))
	{
		unk_0xF0059F27F7BB6680(&iVar0, 16);
	}
	if (func_5(129) && !unk_0xFA30DFD0084E92FE(iVar0, 9))
	{
		unk_0xF0059F27F7BB6680(&iVar0, 17);
	}
	if (func_79(40) && !func_79(43))
	{
		unk_0xF0059F27F7BB6680(&iVar0, 18);
	}
	if (func_79(43) && !func_79(42))
	{
		unk_0xF0059F27F7BB6680(&iVar0, 19);
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_78(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 20);
		}
	}
	return iVar0;
}

int func_78(struct<2> Param0, Vector3 vParam2)
{
	if (Param0.f_1 < 400f)
	{
		if (Param0.f_0 < 1400f)
		{
			if (Param0.f_0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_105220.f_9056.f_330[iParam0 /*6*/];
}

int func_80(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_84(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0xFA30DFD0084E92FE(Global_88954, iVar0))
		{
			return 0;
		}
		unk_0x7CB6FD92BE491AD9(&Global_88954, iVar0);
		return 1;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_84(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_88954, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				return 0;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_88953, iVar0))
		{
			unk_0x97AA3135A3018C3C(iParam0, 0, 0);
			unk_0xB71D41C0310C93DE(iParam0, 0, 1);
			unk_0xF0059F27F7BB6680(&Global_88954, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_84(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				return 0;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_88953, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_84(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_88954, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_84(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_28())
	{
		return unk_0xBC25C936A095B5BA();
	}
	return Global_90578[func_85(iParam0)];
}

int func_85(int iParam0)
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

int func_86()
{
	if (((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0)) && unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) != iLocal_941) && unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) != iLocal_942)
	{
		if (unk_0x5E87CB0495C97732(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), joaat("firetruk")))
		{
			iLocal_941 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			unk_0x77815D3407C6700D(iLocal_941, 1, 1);
			iLocal_1126 = 0;
			return 1;
		}
		if (unk_0x5E87CB0495C97732(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), joaat("towtruck")) || unk_0x5E87CB0495C97732(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), joaat("towtruck2")))
		{
			if (unk_0x724D816EA203A79E(unk_0x9A61F74401879226(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))))
			{
				if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(unk_0x9A61F74401879226(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))), 0))
				{
					iLocal_942 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					unk_0x77815D3407C6700D(iLocal_942, 1, 1);
					if (unk_0x233ED4CD1F1A42C1(unk_0x9A61F74401879226(iLocal_942)) != iLocal_941)
					{
						iLocal_941 = unk_0x233ED4CD1F1A42C1(unk_0x9A61F74401879226(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)));
						iLocal_1126 = 0;
						unk_0x77815D3407C6700D(iLocal_941, 1, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_87()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (iLocal_1166 < 8)
	{
		if (iLocal_1166 < 4)
		{
			if (unk_0x724D816EA203A79E(Global_89597.f_9[iLocal_1166]))
			{
				if (!unk_0x36CEFBE9B745A58D(Global_89597.f_9[iLocal_1166]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(Global_89597.f_9[iLocal_1166], 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) < 900f)
					{
						unk_0x77815D3407C6700D(Global_89597.f_9[iLocal_1166], 1, 1);
						iLocal_943[iLocal_1166] = Global_89597.f_9[iLocal_1166];
						bVar0 = true;
						Global_89597.f_9[iLocal_1166] = 0;
					}
					else if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(Global_89597.f_9[iLocal_1166], 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > 2500f && unk_0x41A5D6415E2CC10E(Global_89597.f_9[iLocal_1166]))
					{
						unk_0x77815D3407C6700D(Global_89597.f_9[iLocal_1166], 1, 1);
						unk_0xF845620A03C7425B(&(Global_89597.f_9[iLocal_1166]));
					}
				}
			}
		}
		if (!bVar0)
		{
			if (unk_0x50AE3E919DC9BC67(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 30f, 1, 1, &iVar1, 0, 1, 21))
			{
				if ((unk_0x724D816EA203A79E(iVar1) && !unk_0x36CEFBE9B745A58D(iVar1)) && !func_88(iVar1, &iLocal_943))
				{
					unk_0x77815D3407C6700D(iVar1, 1, 1);
					iLocal_943[iLocal_1166] = iVar1;
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_943[iLocal_1166]))
			{
				unk_0x4106FAF8AA1D69D5(iLocal_943[iLocal_1166], iLocal_952);
				unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 1, 0);
				unk_0x91629AC1E1F78419(iLocal_943[iLocal_1166], 17, 0);
				unk_0x7B6A06DE40F28782(unk_0xB5CEFD608600A09F(), 0f);
			}
			iLocal_1166++;
		}
	}
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			if (unk_0x724D816EA203A79E((*iParam1)[iVar0]))
			{
				if (iParam0 == (*iParam1)[iVar0])
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_89()
{
	if (bLocal_1131)
	{
		if (((!unk_0xE59B7F5A03335350(iLocal_942, 0) || (unk_0xE59B7F5A03335350(iLocal_942, 0) && !unk_0xB6A16B5E7EB81F9B(iLocal_941, iLocal_942))) || (unk_0xE59B7F5A03335350(iLocal_941, 0) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_941, 0))) || (unk_0x724D816EA203A79E(iLocal_942) && unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iLocal_942, 1)) > 250f))
		{
			bLocal_1131 = false;
		}
	}
	else if ((unk_0xE59B7F5A03335350(iLocal_942, 0) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_942, 0)) && unk_0xB6A16B5E7EB81F9B(iLocal_941, iLocal_942))
	{
		bLocal_1131 = true;
	}
}

void func_90(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55968 = 0;
	if (!Global_56192[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_68062)
	{
		if (Global_68063[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_68063[iVar1 /*9*/].f_1 = 1;
			Global_68063[iVar1 /*9*/].f_2 = 0f;
			if (Global_68063[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_91()
{
	struct<3> Var0;
	int iVar3;
	
	if ((unk_0x724D816EA203A79E(Global_89597[0]) && unk_0xE59B7F5A03335350(Global_89597[0], 0)) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_89597[0], 0))
	{
		unk_0x77815D3407C6700D(Global_89597[0], 1, 1);
		iLocal_941 = Global_89597[0];
		Global_89597[0] = 0;
	}
	if ((unk_0x724D816EA203A79E(Global_89597[1]) && unk_0xE59B7F5A03335350(Global_89597[1], 0)) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_89597[1], 0))
	{
		if (unk_0x724D816EA203A79E(unk_0x9A61F74401879226(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))) && unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(unk_0x9A61F74401879226(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))), 0))
		{
			unk_0x77815D3407C6700D(Global_89597[1], 1, 1);
			iLocal_942 = Global_89597[1];
			Global_89597[1] = 0;
			unk_0x77815D3407C6700D(Global_89597[0], 1, 1);
			iLocal_941 = Global_89597[0];
			Global_89597[0] = 0;
			bLocal_1131 = true;
		}
	}
	unk_0x900CF084251DED26("AHPREP1", 0);
	while (!unk_0xFA9040D29FE330BD(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
	}
	unk_0xB2CB6EAA6B280A84("FireMen", &iLocal_952);
	unk_0xA902E18EDF6FA0C8(5, joaat("player"), iLocal_952);
	unk_0xA902E18EDF6FA0C8(5, iLocal_952, joaat("player"));
	if (func_10(0))
	{
		unk_0xF243B7A14FCFD0F4(joaat("s_m_y_fireman_01"));
		while (!unk_0xD6513D668481290A(joaat("s_m_y_fireman_01")))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		Var0 = { 202.0504f, -1655.773f, 28.8031f };
		uLocal_1167 = unk_0x1DAA351326EA3537(Var0 - Vector(10f, 30f, 30f), Var0 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
		unk_0x6C5F5B5F6894CCE3(Var0, 20f, 1, 0, 0, 0);
		iLocal_943[0] = unk_0x01B3635C3E8EDD81(21, joaat("s_m_y_fireman_01"), 215.7186f, -1644.622f, 28.7719f, 357.5736f, 1, 1);
		iLocal_943[1] = unk_0x01B3635C3E8EDD81(21, joaat("s_m_y_fireman_01"), 214.4446f, -1643.72f, 28.7776f, 279.1055f, 1, 1);
		iLocal_943[2] = unk_0x01B3635C3E8EDD81(21, joaat("s_m_y_fireman_01"), 217.0826f, -1644.117f, 28.7155f, 72.8262f, 1, 1);
		iVar3 = 0;
		while (iVar3 <= (iLocal_943 - 1))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_943[iVar3]))
			{
				unk_0xA3A7138EAD2268A0(iLocal_943[iVar3], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
				unk_0x91629AC1E1F78419(iLocal_943[iVar3], 17, 0);
				unk_0x4106FAF8AA1D69D5(iLocal_943[iVar3], iLocal_952);
			}
			iVar3++;
		}
		unk_0xA902E18EDF6FA0C8(255, joaat("player"), iLocal_952);
		unk_0xA902E18EDF6FA0C8(255, iLocal_952, joaat("player"));
		iLocal_1118 = -1;
		if (func_98())
		{
			func_97(354.3055f, -1722.206f, 28.259f, 109.6154f, 1, 0);
			func_94(0, -1, 1);
		}
	}
	if (!unk_0x726D9204B160D23E() && !unk_0x26641E1BFD792DBC())
	{
		unk_0x829FA4611BD56B44(500);
	}
	if (func_17())
	{
		iLocal_1127 = 1;
	}
	if (!func_10(0))
	{
		unk_0x3857DADBD6EC8A54("AHP1_START");
	}
	iLocal_1126 = 0;
	func_92(68);
}

void func_92(int iParam0)
{
	Global_88955 = 0;
	switch (iParam0)
	{
		case 72:
			func_93(2);
			func_93(4);
			break;
		
		case 73:
			func_93(0);
			func_93(1);
			func_93(7);
			break;
		
		case 92:
			func_93(10);
			func_93(9);
			func_93(13);
			func_93(6);
			break;
		
		case 68:
			func_93(11);
			break;
		
		case 78:
			func_93(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_93(3);
			break;
		
		default:
			break;
	}
}

void func_93(int iParam0)
{
	unk_0xF0059F27F7BB6680(&Global_88955, iParam0);
}

void func_94(int iParam0, int iParam1, int iParam2)
{
	if (func_98() && func_96())
	{
		while (Global_92950 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x121BBDEFA4F0C22B(0);
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xF643D76BBEB27712(unk_0xBC25C936A095B5BA());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x724D816EA203A79E(iParam0))
				{
					if (unk_0xE59B7F5A03335350(iParam0, 0))
					{
						if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam0, 0))
						{
							unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iParam0, iParam1);
							unk_0x2B9AEC08E469E384(0f, 1065353216);
							unk_0xF3F01A78937DC905(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
			}
		}
		unk_0x174DF5072163DD21();
		func_95(0);
	}
}

void func_95(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 13);
	}
}

bool func_96()
{
	return unk_0xFA30DFD0084E92FE(Global_92955.f_20, 13);
}

void func_97(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_98())
	{
		unk_0x6C87EFD58B261C6F(0);
		unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 2);
		unk_0x121BBDEFA4F0C22B(1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
		}
		Global_92951 = { Param0 };
		Global_92954 = fParam3;
		Global_92950 = 1;
		if (iParam4 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 14);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 24);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 24);
		}
		func_95(1);
	}
}

int func_98()
{
	if (Global_92955 == 10 || Global_92955 == 9)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	func_100();
	if (unk_0x724D816EA203A79E(iLocal_941))
	{
		unk_0x1E7A09C1710FB071(&iLocal_941);
	}
	unk_0x483687B0FCA5415A(uLocal_1167, 0);
	unk_0x95E4B6F3ED223F5A();
}

void func_100()
{
	Global_88955 = 0;
}

void func_101()
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_105220.f_9056 || func_10(0))
	{
		if (!func_102())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_22(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_83852[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_27();
		}
	}
}

int func_102()
{
	if (((Global_92955 == 13 || Global_92955 == 10) || Global_92955 == 11) || Global_92955 == 12)
	{
		return 0;
	}
	return 1;
}

void func_103()
{
	if (iLocal_1127 == 1)
	{
		func_15(354.3055f, -1722.206f, 28.259f, 109.6154f);
	}
}

