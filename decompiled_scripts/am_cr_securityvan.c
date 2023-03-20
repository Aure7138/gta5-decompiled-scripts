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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	struct<2> Local_91 = { 0, 0 } ;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	struct<3> Local_139 = { 0, 0, 0 } ;
	var uLocal_142 = 0;
	struct<3> Local_143 = { 0, 0, 0 } ;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	bool bLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	bool bLocal_156 = 0;
	bool bLocal_157 = 0;
	bool bLocal_158 = 0;
	bool bLocal_159 = 0;
	bool bLocal_160 = 0;
	var uLocal_161 = 0;
	bool bLocal_162 = 0;
	bool bLocal_163 = 0;
	bool bLocal_164 = 0;
	bool bLocal_165 = 0;
	bool bLocal_166 = 0;
	struct<3> Local_167 = { 0, 0, 0 } ;
	struct<3> Local_170 = { 0, 0, 0 } ;
	struct<3> Local_173 = { 0, 0, 0 } ;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	struct<5> Local_183 = { 0, 0, 0, 0, 0 } ;
	var uLocal_188 = 16;
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
	struct<23> Local_355 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 0, 0, 0, 0 } ;
	struct<7> Local_378[32];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_86 = 40;
	if (unk_0xD95428C8AA1DBBF2())
	{
		func_199(ScriptParam_0);
	}
	while (true)
	{
		func_198();
		if (func_188())
		{
			func_185();
		}
		else if (func_181(5))
		{
			func_185();
		}
		else if (func_178())
		{
			func_185();
		}
		else if (Global_2428692.f_3536)
		{
			func_185();
		}
		if (unk_0xD95428C8AA1DBBF2())
		{
			func_176();
			switch (func_175(unk_0x9DCF1243D4AAD942()))
			{
				case 0:
					if (func_174() > 0)
					{
						Local_378[unk_0x9DCF1243D4AAD942() /*7*/] = 2;
					}
					break;
				
				case 2:
					func_52();
					if (func_174() == 3)
					{
						Local_378[unk_0x9DCF1243D4AAD942() /*7*/] = 3;
					}
					break;
				
				case 3:
					func_185();
					break;
			}
			if (unk_0x2CCDE625E685C339())
			{
				switch (func_174())
				{
					case 0:
						Local_355.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_51();
	func_50();
	switch (func_49())
	{
		case 0:
			if (func_47())
			{
				if (Local_355.f_6 == -1)
				{
					Local_355.f_6 = unk_0x4D3E68F73B727E49(0, 3);
				}
				else if (func_40())
				{
					if (func_35())
					{
						unk_0xA3EC3945492992B2(0);
						func_34(1);
					}
				}
			}
			break;
		
		case 1:
			if (bLocal_156)
			{
				if (!bLocal_157)
				{
					func_32();
				}
				if (func_30())
				{
					Local_355.f_21 = 1;
					func_34(6);
				}
				if (func_29())
				{
					func_34(2);
				}
				if (Local_355.f_22)
				{
					func_34(4);
				}
				if (func_28())
				{
					func_34(4);
				}
				if (func_22(iLocal_178, 1215605247, &uLocal_93, 0, 500, 1, 0))
				{
					func_34(6);
				}
			}
			else
			{
				func_34(4);
			}
			break;
		
		case 2:
			if (!bLocal_159)
			{
				func_21();
			}
			if (bLocal_156)
			{
				if (!bLocal_157)
				{
					func_20();
					func_18();
				}
				if (func_30())
				{
					Local_355.f_21 = 1;
					func_34(6);
				}
				if (func_17())
				{
					func_34(3);
				}
				if (unk_0xBA2FAB683F225FF0(iLocal_178) <= 100f)
				{
					func_34(3);
				}
				if (func_16())
				{
					func_34(3);
				}
				if (Local_355.f_22)
				{
					func_34(4);
				}
				if (func_28())
				{
					func_34(4);
				}
				if (func_22(iLocal_178, 1215605247, &uLocal_93, 0, 500, 1, 0))
				{
					func_34(6);
				}
			}
			else
			{
				func_34(4);
			}
			break;
		
		case 3:
			if (func_30())
			{
				Local_355.f_21 = 1;
				func_34(6);
			}
			if (!bLocal_159)
			{
				func_21();
			}
			if (bLocal_156)
			{
				if (Local_355.f_22)
				{
					func_34(4);
				}
				if (func_28())
				{
					func_34(4);
				}
			}
			else
			{
				func_34(4);
			}
			break;
		
		case 4:
			if (!bLocal_159)
			{
				func_21();
			}
			if (bLocal_156)
			{
				if (!func_15(&uLocal_89))
				{
					func_14(&uLocal_89, 0, 0);
				}
				else if (func_13(&uLocal_89, 5000, 0))
				{
					func_34(6);
				}
			}
			else
			{
				func_34(6);
			}
			break;
		
		case 6:
			Local_355.f_8 = 0;
			if (func_2())
			{
				Local_355.f_0 = 3;
			}
			break;
	}
}

int func_2()
{
	if (unk_0x3D8BF0E3847B29E0(Local_355.f_2))
	{
		if (func_12(Local_355.f_2))
		{
			if (!func_5(unk_0xBF1B13057E5119A4(unk_0xDACD0CF3BB366AB6(Local_355.f_2), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_355.f_2));
			}
			else
			{
				func_3(&(Local_355.f_2));
			}
			iLocal_135 = 1;
			Local_355.f_2 = 0;
		}
	}
	else
	{
		iLocal_135 = 1;
		Local_355.f_2 = 0;
	}
	if (unk_0x3D8BF0E3847B29E0(Local_355.f_3))
	{
		if (func_12(Local_355.f_3))
		{
			if (!func_5(unk_0xBF1B13057E5119A4(unk_0xE6286B95AEF7B8C2(Local_355.f_3), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_355.f_3));
			}
			else
			{
				func_3(&(Local_355.f_3));
			}
			iLocal_136 = 1;
			Local_355.f_3 = 0;
		}
	}
	else
	{
		iLocal_136 = 1;
		Local_355.f_3 = 0;
	}
	if (unk_0x3D8BF0E3847B29E0(Local_355.f_4))
	{
		if (func_12(Local_355.f_4))
		{
			if (func_5(unk_0xBF1B13057E5119A4(unk_0xE6286B95AEF7B8C2(Local_355.f_4), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_355.f_4));
			}
			else
			{
				func_3(&(Local_355.f_4));
			}
			iLocal_138 = 1;
			Local_355.f_4 = 0;
		}
	}
	else
	{
		iLocal_138 = 1;
		Local_355.f_4 = 0;
	}
	if (unk_0x3D8BF0E3847B29E0(Local_355.f_5))
	{
		if (func_12(Local_355.f_5))
		{
			if (func_5(unk_0xBF1B13057E5119A4(unk_0x9F00512086D0A86F(Local_355.f_5), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_355.f_5));
			}
			else
			{
				func_3(&(Local_355.f_5));
			}
			iLocal_137 = 1;
			Local_355.f_5 = 0;
		}
	}
	else
	{
		iLocal_137 = 1;
		Local_355.f_5 = 0;
	}
	if (((iLocal_135 && iLocal_136) && iLocal_137) && iLocal_138)
	{
		return 1;
	}
	return 0;
}

void func_3(var uParam0)
{
	var uVar0;
	
	if (unk_0xB8C2D6B33E64EA14(*uParam0))
	{
		uVar0 = unk_0x3CB82CF6E610C2A9(*uParam0);
		unk_0x9720CE176AF721DF(&uVar0);
	}
}

void func_4(var uParam0)
{
	var uVar0;
	
	if (unk_0x3D8BF0E3847B29E0(*uParam0))
	{
		if (!unk_0xC6EE326730271D0C(*uParam0))
		{
		}
	}
	if (unk_0xB8C2D6B33E64EA14(*uParam0))
	{
		uVar0 = unk_0x3CB82CF6E610C2A9(*uParam0);
		unk_0xA65C6361932CEE99(&uVar0);
	}
}

int func_5(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_11(unk_0xAF65E5A58BE87D95(), 1, 1))
		{
			if (!unk_0xC2C705ED6124A7C2())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8FE221761D524CFE(func_10(unk_0xAF65E5A58BE87D95()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x23A9305227426F8B(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_11(iVar1, 1, 1))
		{
			if (!func_7(iVar1, 0) && unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xAF65E5A58BE87D95()))
				{
					if ((func_6(iVar1) || !bParam10) && !Global_2413868[iVar1 /*253*/].f_252)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x5805EAF13FC54BE6(iVar1) == -1)
							{
								if (unk_0x5805EAF13FC54BE6(iVar1) == unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x5805EAF13FC54BE6(iVar1) != unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()))) || unk_0x5805EAF13FC54BE6(iVar1) == -1)
							{
								if (unk_0x8FE221761D524CFE(func_10(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xEDACD0E59C5E7D93(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x5805EAF13FC54BE6(iVar1) != iParam8 || unk_0x5805EAF13FC54BE6(iVar1) == -1)
						{
							if (unk_0x8FE221761D524CFE(func_10(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xEDACD0E59C5E7D93(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_6(int iParam0)
{
	if (unk_0x1ACC4CD5A7C76F75(unk_0x687D51F360787909(iParam0)) || Global_2413868[iParam0 /*253*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1312736;
}

Vector3 func_10(int iParam0)
{
	return unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(iParam0), 0);
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB832D52B86777A35(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x52A84D9C3A400EA8(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_12(var uParam0)
{
	if (unk_0x3D8BF0E3847B29E0(uParam0))
	{
		unk_0x1301764D6FF2BC45(uParam0);
		return unk_0xC6EE326730271D0C(uParam0);
	}
	return 0;
}

int func_13(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_14(uParam0, bParam2, 0);
	if (unk_0xD95428C8AA1DBBF2() && !bParam2)
	{
		if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xF976C624234A4AA8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xD95428C8AA1DBBF2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFACC0E85E40AD425();
			}
			else
			{
				*uParam0 = unk_0x49BD9731DF21C969();
			}
		}
		else
		{
			*uParam0 = unk_0xF976C624234A4AA8();
		}
		uParam0->f_1 = 1;
	}
}

bool func_15(var uParam0)
{
	return uParam0->f_1;
}

int func_16()
{
	if (unk_0xD803509E70F20530(iLocal_178, 0, 7000) || unk_0xD803509E70F20530(iLocal_178, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (((unk_0xEB461363EE450DCA(iLocal_178, 0, 0) && unk_0xEB461363EE450DCA(iLocal_178, 1, 0)) && unk_0xEB461363EE450DCA(iLocal_178, 4, 0)) && unk_0xEB461363EE450DCA(iLocal_178, 5, 0))
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	bool bVar0;
	bool bVar1;
	
	if (!Local_183.f_4)
	{
		if (func_19(&(Local_355.f_16), &Local_183))
		{
			Local_183.f_4 = 1;
		}
	}
	if (Local_183.f_4)
	{
		if (unk_0xB832D52B86777A35(Local_355.f_16))
		{
			Local_183 = { Local_355.f_16 };
			Local_183.f_2 = unk_0x687D51F360787909(Local_183.f_0);
			if (Local_183.f_1)
			{
				if (unk_0xFD68187442384158(unk_0x78AB10B64129B3D5(Local_183.f_2, 0)))
				{
					Local_183.f_3 = unk_0x78AB10B64129B3D5(Local_183.f_2, 0);
				}
			}
		}
	}
	if (unk_0xFD68187442384158(Local_183.f_2))
	{
		if (!unk_0xE5D56342B0FF1D0D(Local_183.f_2))
		{
			if (Local_183.f_4)
			{
				if (Local_183.f_1)
				{
					bVar0 = true;
				}
				else
				{
					bVar1 = true;
				}
			}
			else if (unk_0xC6F1531F56379804(iLocal_178) != 8)
			{
				if (Local_183.f_1)
				{
					bVar0 = true;
				}
				else
				{
					bVar1 = true;
				}
			}
		}
	}
	if (bVar0)
	{
		unk_0xD09813BDAA102212(iLocal_179, iLocal_178, Local_183.f_3, 8, 25f, 786468, 200f, 200f, 1);
	}
	else if (bVar1)
	{
		unk_0x9C373E78BA27BAA4(iLocal_179, iLocal_178, Local_183.f_2, 8, 25f, 786468, 200f, 200f, 1);
	}
	Local_183.f_4 = 0;
}

int func_19(var uParam0, var uParam1)
{
	if (*uParam0 != *uParam1)
	{
		return 1;
	}
	if (uParam0->f_1 != uParam1->f_1)
	{
		return 1;
	}
	return 0;
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x04ABABA7F7437B49(iLocal_178);
	if (iVar0 >= 0)
	{
		if (unk_0xB832D52B86777A35(unk_0xAE744CCC666ACB74(iVar0)))
		{
			iVar1 = unk_0xAE744CCC666ACB74(iVar0);
			iVar2 = unk_0x687D51F360787909(iVar1);
			if (unk_0xFD68187442384158(iVar2))
			{
				if (!unk_0xE5D56342B0FF1D0D(iVar2))
				{
					if (iVar1 != Local_355.f_16)
					{
						Local_355.f_16 = iVar1;
					}
					if (unk_0x2A24448FF232F834(iVar2, 0))
					{
						if (unk_0xCA8794CE207FC6D5(unk_0x78AB10B64129B3D5(iVar2, 0), 0))
						{
							Local_355.f_16.f_1 = 1;
						}
						else
						{
							Local_355.f_16.f_1 = 0;
						}
					}
					else
					{
						Local_355.f_16.f_1 = 0;
					}
				}
			}
		}
	}
}

void func_21()
{
	int iVar0;
	
	if (Local_355.f_6 == 1)
	{
		switch (Local_355.f_7)
		{
			case 0:
				if (func_49() >= 2)
				{
					unk_0x2DC5B31EBB810396(iLocal_180, 0);
					Local_355.f_7 = 1;
				}
				break;
			
			case 1:
				if (func_49() >= 3)
				{
					unk_0x2DC5B31EBB810396(iLocal_180, 0);
					Local_355.f_7 = 2;
				}
				break;
			
			case 2:
				if (unk_0x2A24448FF232F834(iLocal_180, 1))
				{
					iVar0 = unk_0xEC043AB2FEE0E94F(iLocal_180, -828834893);
					if (iVar0 != 1 && iVar0 != 0)
					{
						unk_0x48367A1F7C9A1041(iLocal_180, 0, 257);
					}
				}
				else if (!unk_0xC20B334EFA64243F(iLocal_180, 0))
				{
					unk_0xF266F4D5C3D0BAE2(iLocal_180, 100f, 0);
				}
				break;
			}
	}
}

int func_22(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_15(uParam2))
	{
		func_14(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_23(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_23(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;
	
	if (!func_15(uParam3))
	{
		func_14(uParam3, 0, 0);
	}
	func_27(&Var3, iParam1);
	if (unk_0xFD68187442384158(iParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			if (func_25(iParam0, iParam1, 30))
			{
				if (unk_0x91F594068DF4424F(iParam0))
				{
					iVar0 = unk_0x274BAC44978F9161(iParam0);
					if (!unk_0x9F94F2CFDCA78C55(iVar0))
					{
						if (unk_0xBC57175ED22C698D(iVar0))
						{
							uVar2 = unk_0xB53DE20B11FF02FE(iVar0);
							if (bParam2)
							{
								if (unk_0x0E672E0A3F64FFA5(iParam1, uVar2, fParam4, -1))
								{
									if (uParam7 || (!unk_0x13956EF6168B4D82(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && unk_0x13956EF6168B4D82(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (unk_0x0E672E0A3F64FFA5(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (unk_0x13956EF6168B4D82(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && unk_0x13956EF6168B4D82(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (unk_0x2A24448FF232F834(iVar0, 0))
						{
							iVar1 = unk_0x78AB10B64129B3D5(iVar0, 0);
							if (unk_0xFD68187442384158(iVar1))
							{
								if (bParam2)
								{
									if (unk_0x95360860AF57F540(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!unk_0x0693C3E5B5FD2274(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && unk_0x0693C3E5B5FD2274(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (unk_0x95360860AF57F540(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (unk_0x0693C3E5B5FD2274(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && unk_0x0693C3E5B5FD2274(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (unk_0x95360860AF57F540(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!unk_0x0693C3E5B5FD2274(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0x0693C3E5B5FD2274(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (unk_0x95360860AF57F540(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x0693C3E5B5FD2274(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && unk_0x0693C3E5B5FD2274(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (unk_0x1BA544973A67E699(iParam0) || unk_0xBCF2529C09F7A239(iParam0))
				{
					if (bParam2)
					{
						if (unk_0x95360860AF57F540(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!unk_0x0693C3E5B5FD2274(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0x0693C3E5B5FD2274(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (unk_0x95360860AF57F540(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (unk_0x0693C3E5B5FD2274(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && unk_0x0693C3E5B5FD2274(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	func_24(uParam3);
	return 0;
}

void func_24(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_25(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(iParam0, 1), func_26(iParam1), 1) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_26(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case -1710530912:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 1131590004:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 916723671:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 1340820069:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case -866958545:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_27(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			uParam0->f_1 = 1215605247;
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.429f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.157f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			uParam0->f_1 = -1710530912;
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.791f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.004f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.8857f, -1088.516f, 20.55957f };
			uParam0->f_27.f_3 = { 718.613f, -1088.78f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			uParam0->f_1 = 1131590004;
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.887f, -2011.105f, 12.25371f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.774f, -2010.27f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.639f, -2010.211f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.723f, -2015.923f, 11.50441f };
			uParam0->f_27.f_3 = { -1160.558f, -2007.005f, 15.68027f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			uParam0->f_1 = 916723671;
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_11 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_14 = 60.0241f;
			uParam0->f_27 = { -323.7998f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.3432f, -141.7261f, 40.75964f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			uParam0->f_1 = 1340820069;
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.322f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.048f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.9759f, 6625.046f, 30.60301f };
			uParam0->f_27.f_3 = { 111.2522f, 6615.657f, 33.62929f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			uParam0->f_1 = -866958545;
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.345f, 2644.418f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.835f, 2634.775f, 36.55006f };
			uParam0->f_27.f_3 = { 1182.578f, 2647.955f, 39.58602f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

int func_28()
{
	if (unk_0xB8C2D6B33E64EA14(Local_355.f_5))
	{
		if (unk_0x5D422B4764FA2ACA(unk_0x9F00512086D0A86F(Local_355.f_5)) <= 50)
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	if (unk_0xD0E2103B183CBA60(unk_0xC54850646145FF41(iLocal_95)))
	{
		if (func_11(unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iLocal_95)), 1, 1))
		{
			if (Local_378[iLocal_95 /*7*/].f_2)
			{
				return 1;
			}
		}
	}
	iLocal_95++;
	if (iLocal_95 >= unk_0x0F0C172200951A9A())
	{
		iLocal_95 = 0;
	}
	return 0;
}

int func_30()
{
	int iVar0;
	
	if (func_31(250))
	{
		func_24(&uLocal_98);
	}
	else if (!func_15(&uLocal_98))
	{
		func_14(&uLocal_98, 0, 0);
	}
	else if (func_13(&uLocal_98, 30000, 0))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (unk_0xD0E2103B183CBA60(unk_0xC54850646145FF41(iLocal_97)))
	{
		iVar0 = unk_0xC54850646145FF41(iLocal_97);
		iVar1 = unk_0x6E852073107AE8FE(iVar0);
		if (func_11(iVar1, 1, 1))
		{
			Var2 = { func_10(unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iLocal_97))) };
			if (unk_0x2A488C176D52CCA5(Var2, Local_170) < unk_0xBBDA792448DB5A89(iParam0))
			{
				return 1;
			}
		}
	}
	iLocal_97++;
	if (iLocal_97 >= 32)
	{
		iLocal_97 = 0;
	}
	return 0;
}

void func_32()
{
	if (func_49() == 2)
	{
		func_33(3);
	}
	switch (Local_355.f_13)
	{
		case 0:
			if (!bLocal_157)
			{
				func_33(2);
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_33(int iParam0)
{
	Local_355.f_13 = iParam0;
}

void func_34(int iParam0)
{
	Local_355.f_1 = iParam0;
}

int func_35()
{
	int iVar0;
	float fVar1;
	
	if (!bLocal_156)
	{
		if (func_39(&(Local_355.f_2), joaat("stockade"), Local_139, uLocal_142, 1, 1, 1, 0, 1, 1))
		{
			unk_0xCDC1FD4387DA32EC(unk_0xDACD0CF3BB366AB6(Local_355.f_2), 2);
			unk_0x2FB8A67D014ABA96(Local_355.f_2, 1);
			unk_0x668C5F7E7EE6BF09(unk_0xDACD0CF3BB366AB6(Local_355.f_2), 1);
			unk_0xFF467904A8A12BBE(joaat("stockade"));
			unk_0x464A1A49361CDE18(unk_0xDACD0CF3BB366AB6(Local_355.f_2), 1);
			if (func_38(&(Local_355.f_3), Local_355.f_2, 4, joaat("mp_s_m_armoured_01"), -1, 1, 1, 1))
			{
				unk_0x7AB733311E18F96E(unk_0xE6286B95AEF7B8C2(Local_355.f_3), 1, 100f);
				unk_0x2DC5B31EBB810396(unk_0xE6286B95AEF7B8C2(Local_355.f_3), 1);
				unk_0x2FB8A67D014ABA96(Local_355.f_3, 1);
				unk_0xE440546F94B26235(unk_0xE6286B95AEF7B8C2(Local_355.f_3), Global_1574054);
				unk_0x7FEDD088E489CE41(unk_0xE6286B95AEF7B8C2(Local_355.f_3), 116, 0);
				fVar1 = (IntToFloat(unk_0x5D422B4764FA2ACA(unk_0xE6286B95AEF7B8C2(Local_355.f_3))) * Global_262145.f_133);
				iVar0 = unk_0xF2DB717A73826179(fVar1);
				unk_0x60D75A750A3CA4F8(unk_0xE6286B95AEF7B8C2(Local_355.f_3), iVar0);
				unk_0x3E16CE93BAE616EE(unk_0xE6286B95AEF7B8C2(Local_355.f_3), iVar0);
				if (Local_355.f_6 != 1)
				{
					if (func_36())
					{
						Local_355.f_15 = 1;
						unk_0xFF467904A8A12BBE(joaat("mp_s_m_armoured_01"));
						return 1;
					}
				}
				else if (func_38(&(Local_355.f_4), Local_355.f_2, 4, joaat("mp_s_m_armoured_01"), 0, 1, 1, 1))
				{
					unk_0x7AB733311E18F96E(unk_0xE6286B95AEF7B8C2(Local_355.f_4), 1, 100f);
					unk_0x2DC5B31EBB810396(unk_0xE6286B95AEF7B8C2(Local_355.f_4), 1);
					unk_0x3F9EDC2D18464273(unk_0xE6286B95AEF7B8C2(Local_355.f_4), joaat("weapon_pistol"), 1000, 1, 1);
					unk_0x278C9D6141B17BA8(unk_0xE6286B95AEF7B8C2(Local_355.f_4), 1, joaat("weapon_pistol"));
					unk_0x3A1E687904400847(unk_0xE6286B95AEF7B8C2(Local_355.f_4), 2, 0);
					unk_0x2FB8A67D014ABA96(Local_355.f_4, 1);
					unk_0xE440546F94B26235(unk_0xE6286B95AEF7B8C2(Local_355.f_4), Global_1574054);
					unk_0x7FEDD088E489CE41(unk_0xE6286B95AEF7B8C2(Local_355.f_4), 116, 0);
					unk_0xFF467904A8A12BBE(joaat("mp_s_m_armoured_01"));
					fVar1 = (IntToFloat(unk_0x5D422B4764FA2ACA(unk_0xE6286B95AEF7B8C2(Local_355.f_4))) * Global_262145.f_133);
					iVar0 = unk_0xF2DB717A73826179(fVar1);
					unk_0x60D75A750A3CA4F8(unk_0xE6286B95AEF7B8C2(Local_355.f_4), iVar0);
					unk_0x3E16CE93BAE616EE(unk_0xE6286B95AEF7B8C2(Local_355.f_4), iVar0);
					if (func_36())
					{
						Local_355.f_15 = 1;
						unk_0xFF467904A8A12BBE(joaat("prop_cs_cardbox_01"));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_36()
{
	struct<3> Var0;
	
	Var0 = { 0f, -3.57f, 1.04f };
	if (func_37(&(Local_355.f_5), joaat("prop_cs_cardbox_01"), Var0, 1, 1, 0, 1))
	{
		unk_0x26030664C7D28388(unk_0x9F00512086D0A86F(Local_355.f_5), unk_0xDACD0CF3BB366AB6(Local_355.f_2), 0, Var0, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		unk_0x3E16CE93BAE616EE(unk_0x9F00512086D0A86F(Local_355.f_5), (unk_0x5D422B4764FA2ACA(unk_0x9F00512086D0A86F(Local_355.f_5)) / 2));
		unk_0x07E0AE075425AA06(unk_0x9F00512086D0A86F(Local_355.f_5), 0);
		unk_0x9FD46396C2DAB482(unk_0x9F00512086D0A86F(Local_355.f_5), 0, 1, 0, 0, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

int func_37(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	if (!unk_0xAD902020E597F2AC(1))
	{
		return 0;
	}
	*uParam0 = unk_0xE552D459248217B5(unk_0xCEC985247737A30E(iParam1, Param2, iParam6, bParam5, iParam7));
	if (unk_0x3D8BF0E3847B29E0(*uParam0))
	{
		unk_0x5BA593EA32D0187E(unk_0x9F00512086D0A86F(*uParam0), iParam8);
		if (unk_0xFD54DBFF23B29E98(unk_0x9F00512086D0A86F(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9459531F5B8A4A2F(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_38(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x743224EE855B1894(1))
	{
		return 0;
	}
	if (!unk_0x3D8BF0E3847B29E0(uParam1))
	{
		return 0;
	}
	if (!unk_0xCA8794CE207FC6D5(unk_0xDACD0CF3BB366AB6(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x522900D6F6631F0E(unk_0xC68FBD37098CE438(unk_0xDACD0CF3BB366AB6(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x3D8BF0E3847B29E0(*uParam0))
	{
		unk_0x5BA593EA32D0187E(unk_0xE6286B95AEF7B8C2(*uParam0), iParam7);
		if (unk_0xFD54DBFF23B29E98(unk_0xE6286B95AEF7B8C2(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9459531F5B8A4A2F(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_39(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x4BB625F7911DD339(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x407F91A831576A66(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x546974B676313326(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x61B4CBE0A0FF746E(uVar0);
	if (unk_0x3D8BF0E3847B29E0(*uParam0))
	{
		unk_0x5BA593EA32D0187E(uVar0, iParam10);
		if (unk_0xFD54DBFF23B29E98(uVar0))
		{
			if (bParam8)
			{
				unk_0x9459531F5B8A4A2F(*uParam0, 1);
			}
			else
			{
				unk_0x9459531F5B8A4A2F(*uParam0, 0);
			}
		}
		unk_0x464A1A49361CDE18(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_40()
{
	if (unk_0xD0E2103B183CBA60(unk_0x4A2E9345D452154D()))
	{
		if (bLocal_160)
		{
			if (func_41())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_41()
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (bLocal_156)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (unk_0x3D84F9AECFD58EB5(Local_167, iLocal_86, &Local_139, &uLocal_142, &uVar1, 0, 1077936128, 0))
		{
			if (unk_0x8FE221761D524CFE(-1367.557f, -3220.598f, 12.9448f, Local_167, 1) >= 600f)
			{
				if (unk_0x8FE221761D524CFE(Local_167, Local_139, 1) >= 75f)
				{
					unk_0x32BB0750E9174D6C((Local_167.f_0 - 250f), (Local_167.f_1 - 250f), (Local_167.f_0 + 250f), (Local_167.f_1 + 250f));
					if (unk_0xC57DC64AD223F86E(Local_139, &uVar2, &uVar3))
					{
						if (uVar3 & 1 == 0)
						{
							if (iLocal_87 <= 200)
							{
								if (func_42(Local_139, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
								{
									bVar0 = true;
								}
							}
							else
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_86 += 3;
		if (iLocal_86 >= 150)
		{
			iLocal_86 = 40;
			iLocal_87++;
		}
	}
	return bVar0;
}

int func_42(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404546 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x1DB23BF4B2FFF9BA(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x98DDD45D8A6467D0(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x98DDD45D8A6467D0(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x3D4E28BCE4C60954(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam13)
	{
		if (unk_0xF97CA70F2DB85F21(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404546++;
	if (fParam14 > 0f)
	{
		if (func_43(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_5(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404546++;
	return 1;
}

int func_43(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xAF65E5A58BE87D95() != iVar1) || iParam8 == 0)
		{
			if (func_11(iVar1, bParam4, bParam5))
			{
				if (unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1))
				{
					if (!bParam7 || (!unk_0x9F94F2CFDCA78C55(unk_0x687D51F360787909(iVar1)) && func_6(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) != unk_0x5805EAF13FC54BE6(iVar1))) || unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1)
						{
							if (((unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1 && uParam9) && bParam6) && func_44(iVar1))
							{
							}
							else if (unk_0xFD68187442384158(unk_0x687D51F360787909(iVar1)))
							{
								if (unk_0x8FE221761D524CFE(func_10(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)
{
	if (func_46(unk_0xAF65E5A58BE87D95(), iParam0))
	{
		return 1;
	}
	Global_2445239 = { func_45(iParam0) };
	if (unk_0x8EF73C99D8AA61C0(&Global_2445239))
	{
		return 1;
	}
	return 0;
}

struct<13> func_45(int iParam0)
{
	struct<13> Var0;
	
	unk_0x0D7D678636A21203(iParam0, &Var0, 13);
	return Var0;
}

int func_46(int iParam0, int iParam1)
{
	if (unk_0x48005FE1241D4091())
	{
		Global_2445239 = { func_45(iParam0) };
		Global_2445252 = { func_45(iParam1) };
		if (unk_0x39606F3949DA3895(&Global_2445239))
		{
			if (unk_0x39606F3949DA3895(&Global_2445252))
			{
				unk_0x96899C28EF61DCA9(&Global_2445169, 35, &Global_2445239);
				unk_0x96899C28EF61DCA9(&Global_2445204, 35, &Global_2445252);
				if (Global_2445169 == Global_2445204)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_47()
{
	if ((func_48(joaat("stockade")) && func_48(joaat("mp_s_m_armoured_01"))) && func_48(joaat("prop_cs_cardbox_01")))
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xCBE6AC5010E5CE5C(iParam0);
	return unk_0xD291857D0C9C7FEC(iParam0);
}

int func_49()
{
	return Local_355.f_1;
}

void func_50()
{
	Local_355.f_11 = unk_0xE76C684D1C903A71();
	if (Local_355.f_11 >= 1 && Local_355.f_11 < 11)
	{
		if (Local_355.f_10 != 2)
		{
			Local_355.f_10 = 2;
		}
	}
	else if (Local_355.f_11 >= 12 && Local_355.f_11 < 22)
	{
		if (Local_355.f_10 != 1)
		{
			Local_355.f_10 = 1;
		}
	}
	else if (Local_355.f_10 != 0)
	{
		Local_355.f_10 = 0;
	}
	switch (Local_355.f_10)
	{
		case 2:
			switch (Local_355.f_11)
			{
				case 1:
					if (Local_355.f_12 != 0)
					{
						Local_355.f_12 = 0;
					}
					break;
				
				case 3:
					if (Local_355.f_12 != 1)
					{
						Local_355.f_12 = 1;
					}
					break;
				
				case 5:
					if (Local_355.f_12 != 2)
					{
						Local_355.f_12 = 2;
					}
					break;
				
				case 7:
					if (Local_355.f_12 != 3)
					{
						Local_355.f_12 = 3;
					}
					break;
				
				case 9:
					if (Local_355.f_12 != 4)
					{
						Local_355.f_12 = 4;
					}
					break;
			}
			break;
		
		case 1:
			switch (Local_355.f_11)
			{
				case 12:
					if (Local_355.f_12 != 0)
					{
						Local_355.f_12 = 0;
					}
					break;
				
				case 14:
					if (Local_355.f_12 != 1)
					{
						Local_355.f_12 = 1;
					}
					break;
				
				case 16:
					if (Local_355.f_12 != 2)
					{
						Local_355.f_12 = 2;
					}
					break;
				
				case 18:
					if (Local_355.f_12 != 3)
					{
						Local_355.f_12 = 3;
					}
					break;
				
				case 20:
					if (Local_355.f_12 != 4)
					{
						Local_355.f_12 = 4;
					}
					break;
			}
			break;
		
		case 0:
			if (Local_355.f_12 != 0)
			{
				Local_355.f_12 = 0;
			}
			break;
	}
}

void func_51()
{
	if (bLocal_156)
	{
		if (!Local_355.f_22)
		{
			if (Global_2421967.f_3252)
			{
				Local_355.f_22 = 1;
			}
		}
	}
}

void func_52()
{
	func_172();
	func_169();
	func_167();
	if (bLocal_162)
	{
		Global_2421967.f_3250 = iLocal_178;
	}
	func_164();
	func_162();
	func_158();
	func_157();
	func_151();
	func_150();
	func_132();
	func_131();
	func_78();
	if (unk_0xB8C2D6B33E64EA14(Local_355.f_5))
	{
		if (unk_0xC6EE326730271D0C(Local_355.f_5))
		{
			unk_0x07E0AE075425AA06(unk_0x9F00512086D0A86F(Local_355.f_5), 0);
		}
	}
	if (func_77())
	{
		if (unk_0xD361727124133DF3(uLocal_176))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_176);
		}
	}
	if (bLocal_164)
	{
		if (bLocal_165)
		{
			func_76();
		}
	}
	switch (func_75())
	{
		case 0:
			func_73();
			break;
		
		case 1:
			func_60();
			if (bLocal_156)
			{
				func_59();
				func_58();
				if (!bLocal_157)
				{
					func_55();
				}
			}
			func_73();
			break;
		
		case 2:
			func_60();
			if (bLocal_156)
			{
				func_58();
				func_59();
			}
			func_73();
			break;
		
		case 3:
			func_60();
			if (bLocal_156)
			{
				func_59();
				func_58();
				if (!bLocal_157)
				{
					func_53();
				}
			}
			func_73();
			break;
		
		case 4:
			func_73();
			break;
		
		case 6:
			if (((!unk_0x3D8BF0E3847B29E0(Local_355.f_2) && !unk_0x3D8BF0E3847B29E0(Local_355.f_3)) && !unk_0x3D8BF0E3847B29E0(Local_355.f_4)) && !unk_0x3D8BF0E3847B29E0(Local_355.f_5))
			{
				func_60();
			}
			break;
	}
}

void func_53()
{
	var uVar0;
	int iVar1;
	
	iVar1 = unk_0xEC043AB2FEE0E94F(iLocal_179, 1805844857);
	if (iVar1 != 1 && iVar1 != 0)
	{
		if (func_54(Local_355.f_3))
		{
			if (unk_0xC6EE326730271D0C(Local_355.f_3))
			{
				if (!iLocal_146)
				{
					uVar0 = Global_1574054;
					unk_0xE440546F94B26235(iLocal_179, uVar0);
					iLocal_146 = 1;
				}
				unk_0xB2B080B88A4144B7(iLocal_179, 1440, 1);
				unk_0xB2B080B88A4144B7(iLocal_179, 2, 0);
				if (bLocal_164)
				{
					if (!bLocal_165)
					{
						unk_0xA859D289EEB2D72A(iLocal_179, uLocal_181, 100f, 999999, 0, 1);
					}
				}
			}
		}
		else if (unk_0x2CCDE625E685C339())
		{
			unk_0x1301764D6FF2BC45(Local_355.f_3);
		}
	}
}

int func_54(var uParam0)
{
	if (unk_0x3D8BF0E3847B29E0(uParam0))
	{
		if (!unk_0x555782BF9C00FA3E(uParam0))
		{
			if (!unk_0x2CCDE625E685C339())
			{
				return 0;
			}
		}
		else if (!unk_0xC6EE326730271D0C(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_55()
{
	int iVar0;
	
	switch (Local_355.f_13)
	{
		case 0:
			break;
		
		case 1:
			iVar0 = unk_0xEC043AB2FEE0E94F(iLocal_179, -1817882002);
			if (iVar0 != 1 && iVar0 != 0)
			{
				if (func_54(Local_355.f_3))
				{
					if (unk_0xC6EE326730271D0C(Local_355.f_3))
					{
						unk_0x5E44C1186E137E21(iLocal_179, iLocal_178, func_56(), 10f, 0, joaat("stockade"), 786599, 1.5f, 3f);
					}
					else
					{
						unk_0x1301764D6FF2BC45(Local_355.f_3);
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xC6EE326730271D0C(Local_355.f_3))
			{
				iVar0 = unk_0xEC043AB2FEE0E94F(iLocal_179, -258271821);
				if (iVar0 != 1 && iVar0 != 0)
				{
					if (func_54(Local_355.f_3))
					{
						if (unk_0xC6EE326730271D0C(Local_355.f_3))
						{
							unk_0xF40D4EBDC0BA2C26(iLocal_179, iLocal_178, 10f, 524459);
						}
						else
						{
							unk_0x1301764D6FF2BC45(Local_355.f_3);
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_56()
{
	return func_57(Local_355.f_10, Local_355.f_12);
}

Vector3 func_57(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1073.044f, -428.7717f, 35.5372f;
					break;
				
				case 1:
					return -27.8031f, -725.2526f, 31.8345f;
					break;
				
				case 2:
					return 967.7739f, -190.2949f, 71.5271f;
					break;
				
				case 3:
					return -241.6611f, -707.6798f, 32.509f;
					break;
				
				case 4:
					return -355.0995f, -224.6928f, 36.2889f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return -249.0916f, -771.8771f, 31.4402f;
					break;
				
				case 1:
					return -241.6611f, -707.6798f, 32.509f;
					break;
				
				case 2:
					return -1386.376f, -285.1455f, 42.1656f;
					break;
				
				case 3:
					return -670.9879f, -223.1932f, 36.1603f;
					break;
				
				case 4:
					return -355.0995f, -224.6928f, 36.2889f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_58()
{
	struct<3> Var0;
	struct<2> Var3;
	var uVar6;
	int iVar9;
	struct<2> Var10;
	
	if (!func_15(&Local_91))
	{
		func_14(&Local_91, 0, 0);
	}
	else if (func_13(&Local_91, 1000, 0))
	{
		iVar9 = unk_0x26EA758C2A691D06(iLocal_178);
		if (iVar9 != 0)
		{
			unk_0xB72AA272E2B242A6(iVar9, &Var3, &uVar6);
			Var0 = { unk_0x0CAFB9D38494283D(iLocal_178, 0f, (Var3.f_1 - 0.5f), 0f) };
			Local_143 = { Var0 };
		}
		func_24(&Local_91);
		Local_91 = { Var10 };
	}
}

void func_59()
{
	bool bVar0;
	
	bVar0 = true;
	if (!bLocal_157)
	{
		if (unk_0x53170344050F2301(iLocal_179, iLocal_178, 0))
		{
			bLocal_153 = true;
			bVar0 = false;
		}
	}
	if (!iLocal_155)
	{
		if (bLocal_153)
		{
			if (bVar0)
			{
				if (func_54(Local_355.f_2))
				{
					if (unk_0xC6EE326730271D0C(Local_355.f_2))
					{
						unk_0x1B76E3D481FAFA52(iLocal_178, 0, 1);
						unk_0x1B76E3D481FAFA52(iLocal_178, 1, 1);
						iLocal_155 = 1;
					}
					else
					{
						unk_0x1301764D6FF2BC45(Local_355.f_2);
					}
				}
			}
		}
	}
}

void func_60()
{
	if (bLocal_164)
	{
		if (!bLocal_165)
		{
			if (bLocal_162)
			{
				if (bLocal_156)
				{
					if (!unk_0x53170344050F2301(uLocal_181, iLocal_178, 0))
					{
					}
					else if (!iLocal_154)
					{
						func_67(812, 1, -1);
						iLocal_154 = 1;
					}
				}
			}
		}
	}
	if (!Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_6)
	{
		if (bLocal_162)
		{
			if (bLocal_156)
			{
				if (!unk_0xD361727124133DF3(uLocal_176))
				{
					uLocal_176 = unk_0xB6F075D13B917FBE(iLocal_178);
					unk_0x01DF6D56C47E7482(uLocal_176, 67);
					unk_0x1D8833C0F155BFE7(uLocal_176, 1f);
					unk_0xAE9EE75C62A1DACD(uLocal_176, 3);
					unk_0x2B271F66198227B7(uLocal_176, "MP_ACT_SV");
					Global_2446210.f_4379 = 1;
				}
			}
		}
	}
	else
	{
		if (unk_0xD361727124133DF3(uLocal_176))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_176);
		}
		Global_2446210.f_4379 = 0;
	}
	if (!Global_2421967.f_3249)
	{
		if (!iLocal_147)
		{
			if (unk_0xA54B09EB6B49FA94(iLocal_182))
			{
				if (!func_62(iLocal_182, 1))
				{
					func_61("AMSECVAN_SHRTBP", -1);
					iLocal_147 = 1;
					Global_2421967.f_3249 = 1;
				}
			}
		}
	}
}

void func_61(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

bool func_62(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_66(iParam0) != 0;
	}
	return func_63(iParam0, bParam1);
}

int func_63(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_64(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582048[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_64(int iParam0)
{
	return func_65(iParam0);
}

bool func_65(int iParam0)
{
	return unk_0x61D8FEAF64881CDA(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

int func_66(int iParam0)
{
	if (func_11(iParam0, 0, 1))
	{
		return Global_2413868[iParam0 /*253*/].f_1;
	}
	return 0;
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_71(iParam0, func_72(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_70(iParam0))
	{
		func_69(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_68(iParam0, iVar0, iParam2, 1);
	}
}

void func_68(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 774:
			Global_1333776[func_72(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1333782[func_72(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1333788[func_72(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1333794[func_72(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1333752[func_72(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1333758[func_72(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1333764[func_72(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1333770[func_72(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1333728[func_72(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1333734[func_72(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1333740[func_72(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1333746[func_72(iParam2)] = iParam1;
			break;
		
		case 744:
			Global_1333800[func_72(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_1333806[func_72(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_1333812[func_72(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1333818[func_72(iParam2)] = iParam1;
			break;
		
		case 1289:
			Global_1333824[func_72(iParam2)] = iParam1;
			break;
		
		case 626:
			Global_1333830[func_72(iParam2)] = iParam1;
			break;
		
		case 1264:
			Global_1333836[func_72(iParam2)] = iParam1;
			break;
		
		case 1861:
			Global_2474981[0 /*6*/][func_72(iParam2)] = iParam1;
			break;
		
		case 2250:
			Global_2474981[1 /*6*/][func_72(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1333842[func_72(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1333848[func_72(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1333854[func_72(iParam2)] = iParam1;
			break;
		
		case 1222:
			Global_1333860[func_72(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, iParam1, iParam3);
	}
}

int func_70(int iParam0)
{
	if (Global_1333709)
	{
		switch (iParam0)
		{
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 744:
			case 745:
			case 746:
			case 747:
			case 1289:
			case 626:
			case 1264:
			case 751:
			case 752:
			case 753:
			case 1222:
			case 1861:
			case 2250:
				return 1;
				break;
			}
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454190[iParam0 /*6*/][func_72(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_9();
		if (iVar1 > -1)
		{
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
		}
	}
	return iVar0;
}

void func_73()
{
	if (func_75() != 6)
	{
		switch (func_49())
		{
			case 0:
				if (func_75() != 0)
				{
					func_74(0);
				}
				break;
			
			case 1:
				if (func_75() != 1)
				{
					func_74(1);
				}
				break;
			
			case 2:
				if (func_75() != 2)
				{
					func_74(2);
				}
				break;
			
			case 3:
				if (func_75() != 3)
				{
					func_74(3);
				}
				break;
			
			case 4:
				if (func_75() != 4)
				{
					func_74(4);
				}
				break;
			
			case 6:
				if (func_75() != 6)
				{
					func_74(6);
				}
				break;
			}
	}
}

void func_74(int iParam0)
{
	Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_1 = iParam0;
}

int func_75()
{
	return Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_1;
}

void func_76()
{
	Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_2 = 0;
	iLocal_148 = 0;
}

bool func_77()
{
	return Global_1573679;
}

void func_78()
{
	if (Global_2421967.f_3252)
	{
		if (uLocal_161 || func_28())
		{
			func_81();
			func_80();
		}
	}
	if (bLocal_156)
	{
		if (!unk_0x61D8FEAF64881CDA(Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_5, 0))
		{
			if ((Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_6 || uLocal_161) || func_28())
			{
				if (unk_0x2A488C176D52CCA5(Local_167, Local_143) <= 60f)
				{
					if (!iLocal_150)
					{
						if (!func_62(iLocal_182, 1))
						{
							func_61("AMSECVAN_DROP", -1);
							iLocal_150 = 1;
						}
					}
					if (func_79("AMSECVAN_DROP"))
					{
						unk_0x3DBE2A7AF9E71C82(&(Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_5), 0);
					}
				}
				else
				{
					unk_0x3DBE2A7AF9E71C82(&(Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_5), 0);
				}
			}
		}
	}
}

bool func_79(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
}

var func_80()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bLocal_162)
	{
		if (unk_0x555782BF9C00FA3E(Local_355.f_2))
		{
			if (unk_0xC6EE326730271D0C(Local_355.f_2))
			{
				if (!Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_6)
				{
					if (func_48(Global_2446210.f_4367))
					{
						unk_0xCDC1FD4387DA32EC(iLocal_178, 1);
						unk_0xE25E46198A369207(iLocal_178, 2, 1, 0);
						unk_0xE25E46198A369207(iLocal_178, 3, 1, 0);
						if (func_28())
						{
							unk_0x377AA6DD990C0D26(iLocal_178, 2, 1, 1f);
							unk_0x377AA6DD990C0D26(iLocal_178, 3, 1, 1f);
						}
						iVar1 = unk_0x4D3E68F73B727E49(2, 6);
						iVar2 = unk_0x4D3E68F73B727E49(4000, 12001);
						fVar3 = unk_0xBBDA792448DB5A89(iVar2);
						fVar4 = unk_0xBBDA792448DB5A89(iVar1);
						fVar3 = (fVar3 * Global_262145.f_2397);
						if (Global_262145.f_2399 != 0f)
						{
							if (fVar3 > (12000f * Global_262145.f_2399))
							{
								fVar3 = (12000f * Global_262145.f_2399);
							}
						}
						if (Global_262145.f_2398 != 0f)
						{
							if (fVar3 < (4000f * Global_262145.f_2398))
							{
								fVar3 = (4000f * Global_262145.f_2398);
							}
						}
						fVar3 = (fVar3 / fVar4);
						iVar2 = unk_0xF2DB717A73826179(fVar3);
						iVar0 = 0;
						while (iVar0 < iVar1)
						{
							Local_143.f_2 = (Local_143.f_2 + 0.1f);
							unk_0xD5C2A73D33CEF9D5(Global_2446210.f_4366, Local_143, 0, iVar2, Global_2446210.f_4367, 0, 1);
							iVar0++;
						}
						Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_6 = 1;
						if (unk_0xD361727124133DF3(uLocal_176))
						{
							unk_0xA0A65B537B1F11EC(&uLocal_176);
						}
						unk_0xFF467904A8A12BBE(Global_2446210.f_4367);
					}
				}
			}
			else
			{
				Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_6 = 1;
			}
		}
		else if (unk_0x2CCDE625E685C339())
		{
			unk_0x1301764D6FF2BC45(Local_355.f_2);
		}
	}
	return Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_6;
}

void func_81()
{
	int iVar0;
	
	if (!iLocal_149)
	{
		if (Local_355.f_15)
		{
			if (bLocal_162)
			{
				if (unk_0x8FE221761D524CFE(Local_167, Local_170, 1) <= 30f && iLocal_102[unk_0x9DCF1243D4AAD942()] == 1)
				{
					iVar0 = (2000 / func_130());
					iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * Global_262145.f_4193));
					if ((Local_355.f_22 || func_28()) || Global_2421967.f_3252)
					{
						func_128();
						func_125(18, 1, -1);
						unk_0x7CD0D54A2E0DE26E(Local_355.f_18[0], iVar0, 0);
						func_84(2, iLocal_178, "XPT_RBBDVAN0", -1636175450, -2028358378, iVar0, 1, -1, 0, 0);
						func_69(1133, func_71(1133, -1, 0) + 1, -1, 1);
						func_82(20, 1);
					}
				}
			}
		}
	}
	iLocal_149 = 1;
}

void func_82(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_83() /*8053*/].f_5756.f_18 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_83() /*8053*/].f_5756.f_17 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_83() /*8053*/].f_5756.f_11 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_83() /*8053*/].f_5756.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_83() /*8053*/].f_5756.f_13 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_83() /*8053*/].f_5756.f_14 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_83() /*8053*/].f_5756.f_15 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_83() /*8053*/].f_5756.f_19 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_83() /*8053*/].f_5756.f_16 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_83() /*8053*/].f_5756.f_22 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_83() /*8053*/].f_5756.f_23 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_83() /*8053*/].f_5756.f_24 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_83() /*8053*/].f_5756.f_25 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_83() /*8053*/].f_5756.f_26 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_83() /*8053*/].f_5756.f_28 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_83() /*8053*/].f_5756.f_27 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_83() /*8053*/].f_5756.f_30 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_83() /*8053*/].f_5756.f_31 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_83() /*8053*/].f_5756.f_29 = iVar0;
			break;
	}
}

int func_83()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_84(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_94(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xFD68187442384158(iParam1))
		{
			if (unk_0x91F594068DF4424F(iParam1))
			{
				uVar1 = unk_0x274BAC44978F9161(iParam1);
				func_90(unk_0xC5B1818639240D24(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_85(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_85(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_88(iParam0, 1) };
	if (iParam0 == func_87(unk_0x507DA4994C3D8EBD()))
	{
		func_86(1);
	}
	func_90(Var0, iParam1, 0, sParam2);
}

void func_86(int iParam0)
{
	Global_2421967.f_1306 = iParam0;
}

int func_87(int iParam0)
{
	return iParam0;
}

Vector3 func_88(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_89(unk_0x507DA4994C3D8EBD()) && unk_0xD686D61A57BCB6E7(unk_0xCF4F7FBD80ABE315()) == 4)
	{
		Var0 = { unk_0x0CAFB9D38494283D(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		fVar3 = unk_0xA9D6B28E708753B6(iParam0);
	}
	unk_0xB72AA272E2B242A6(unk_0x26EA758C2A691D06(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xDA0070A0FA486D72(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_89(int iParam0)
{
	return iParam0;
}

void func_90(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2421967.f_725[iVar0 /*29*/].f_6 == 0 || Global_2421967.f_725[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2421967.f_725[iVar1 /*29*/] = { Param0 };
			Global_2421967.f_725[iVar1 /*29*/].f_6 = 1;
			Global_2421967.f_725[iVar1 /*29*/].f_4 = func_93(Global_2421967.f_725[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2421967.f_725[iVar1 /*29*/].f_7 = unk_0xFACC0E85E40AD425();
			Global_2421967.f_725[iVar1 /*29*/].f_3 = iParam3;
			Global_2421967.f_725[iVar1 /*29*/].f_8 = iParam4;
			Global_2421967.f_725[iVar1 /*29*/].f_9 = func_92();
			Global_2421967.f_725[iVar1 /*29*/].f_10 = func_91();
			StringCopy(&(Global_2421967.f_725[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_91()
{
	if (Global_2421967.f_1306)
	{
		Global_2421967.f_1306 = 0;
		return 1;
	}
	Global_2421967.f_1306 = 0;
	return 0;
}

var func_92()
{
	var uVar0;
	
	uVar0 = Global_2421967.f_1308;
	Global_2421967.f_1308 = 1;
	return uVar0;
}

float func_93(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x8FE221761D524CFE(unk_0xD51D48ADA03E62C7(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_94(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_95(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_95(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_124(unk_0xAF65E5A58BE87D95()) || func_123(unk_0xAF65E5A58BE87D95()))
	{
		if (Global_262145.f_7253 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7253;
		}
	}
	else if (Global_262145.f_4956 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4956;
	}
	if (func_122(uParam2))
	{
	}
	if (func_121())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_119(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_118(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_116(0, &iVar1);
					break;
				
				case 3:
					func_116(1, &iVar1);
					break;
				
				case 1:
					func_113(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_67(1151, iVar1, -1);
			if (iParam1 == 0)
			{
				func_105((func_112(unk_0xAF65E5A58BE87D95()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x3568096DB3FEBF97(iVar1, iParam8, iParam9);
				if (Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_31.f_2 != -1)
				{
					func_67(1152, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_100(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_96((func_98(unk_0xAF65E5A58BE87D95()) + iVar1));
			}
			else
			{
				func_96((func_98(unk_0xAF65E5A58BE87D95()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_96(int iParam0)
{
	if (func_121())
	{
		Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_180.f_5 = iParam0;
		func_97(joaat("mpply_globalxp"), iParam0);
	}
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, uParam1, 1);
	}
}

int func_98(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_11(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xAF65E5A58BE87D95())
			{
				return func_99(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1582048[iParam0 /*324*/].f_180.f_5;
			}
		}
		else
		{
			return func_99(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_100(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_45(unk_0xAF65E5A58BE87D95()) };
	if (unk_0x48005FE1241D4091())
	{
		if (unk_0x39606F3949DA3895(&Var0))
		{
			iVar13 = func_103(func_104(&Var0));
			if (iVar13 == 0)
			{
				func_102(&Global_1333715, iParam0);
				func_101(joaat("mpply_crew_local_xp_0"), Global_1333715);
			}
			else if (iVar13 == 1)
			{
				func_102(&Global_1333716, iParam0);
				func_101(joaat("mpply_crew_local_xp_1"), Global_1333716);
			}
			else if (iVar13 == 2)
			{
				func_102(&Global_1333717, iParam0);
				func_101(joaat("mpply_crew_local_xp_2"), Global_1333717);
			}
			else if (iVar13 == 3)
			{
				func_102(&Global_1333718, iParam0);
				func_101(joaat("mpply_crew_local_xp_3"), Global_1333718);
			}
			else if (iVar13 == 4)
			{
				func_102(&Global_1333719, iParam0);
				func_101(joaat("mpply_crew_local_xp_4"), Global_1333719);
			}
		}
	}
}

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1333710 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1333712 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1333712 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1333713 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1333714 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1333715 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1333716 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1333717 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1333718 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1333719 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1333720 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1333721 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1333722 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1333723 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1333724 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1333725 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1333726 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_102(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_103(int iParam0)
{
	if (iParam0 == Global_1333710)
	{
		return 0;
	}
	else if (iParam0 == Global_1333711)
	{
		return 1;
	}
	else if (iParam0 == Global_1333712)
	{
		return 2;
	}
	else if (iParam0 == Global_1333713)
	{
		return 3;
	}
	else if (iParam0 == Global_1333714)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_104(var uParam0)
{
	if (unk_0x48005FE1241D4091())
	{
		if (unk_0x39606F3949DA3895(uParam0))
		{
			return Global_2434905;
		}
	}
	return Global_2434905;
}

void func_105(int iParam0, int iParam1, int iParam2)
{
	if (func_121())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7228 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1333830[func_72(-1)])
				{
					unk_0x3568096DB3FEBF97(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1333830[func_72(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7227 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x3568096DB3FEBF97(iParam0, -1158693853, -1345423847);
			}
		}
		if (func_111(unk_0xAF65E5A58BE87D95()))
		{
			Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_180.f_1 = iParam0;
			Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_180.f_6 = func_109(iParam0, 1);
		}
		func_68(626, iParam0, -1, 1);
		func_69(627, func_109(iParam0, 1), -1, 1);
		Global_1333830[func_72(-1)] = iParam0;
		func_106(7, 0);
	}
}

void func_106(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_108(iParam0, iParam1))
	{
		iVar0 = func_107();
		Global_2434883[iVar0] = iParam0;
	}
}

int func_107()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2434883[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_108(int iParam0, var uParam1)
{
	if (Global_1315886)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315898) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_109(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_110(iParam0, 0);
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_270026[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270026[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_111(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x61D8FEAF64881CDA(Global_2421967.f_1, iParam0);
	}
	return 1;
}

int func_112(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xAF65E5A58BE87D95())
			{
				return Global_1333830[func_72(-1)];
			}
			else if (func_111(iParam0))
			{
				return Global_1582048[iParam0 /*324*/].f_180.f_1;
			}
		}
	}
	else
	{
		return Global_1333830[func_72(-1)];
	}
	return 0;
}

void func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95());
	iVar0 = 0;
	while (iVar0 < unk_0x0F0C172200951A9A())
	{
		iVar4 = unk_0xC54850646145FF41(iVar0);
		if (unk_0xD0E2103B183CBA60(iVar4))
		{
			iVar5 = unk_0x6E852073107AE8FE(iVar4);
			if (unk_0x5805EAF13FC54BE6(iVar5) != -1)
			{
				if (unk_0x5805EAF13FC54BE6(iVar5) == iVar1 || func_115(unk_0x5805EAF13FC54BE6(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != unk_0xAF65E5A58BE87D95())
					{
						if (func_46(unk_0xAF65E5A58BE87D95(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_114(*iParam0, 100) * (10f * Global_262145.f_4192)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_114(*iParam0, 100) * (20f * Global_262145.f_4185)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_114(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_115(int iParam0, int iParam1)
{
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 0);
				
				case 1:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 1);
				
				case 2:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 2);
				
				case 3:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 4);
				
				case 1:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 5);
				
				case 2:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 6);
				
				case 3:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 8);
				
				case 1:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 9);
				
				case 2:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 10);
				
				case 3:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 12);
				
				case 1:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 13);
				
				case 2:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 14);
				
				case 3:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_116(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x0F0C172200951A9A())
		{
			iVar3 = iVar0;
			if (unk_0xD0E2103B183CBA60(iVar3))
			{
				iVar4 = unk_0x6E852073107AE8FE(iVar3);
				if (func_11(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xAF65E5A58BE87D95())
					{
						iVar1++;
						if (func_46(unk_0xAF65E5A58BE87D95(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_11(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xAF65E5A58BE87D95())
				{
					if (func_117(unk_0xAF65E5A58BE87D95(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_46(unk_0xAF65E5A58BE87D95(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_114(*iParam1, 100) * (10f * Global_262145.f_4192)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_114(*iParam1, 100) * (20f * Global_262145.f_4185)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_117(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_10(iParam0), func_10(iParam1));
	return 0f;
}

int func_118(int iParam0)
{
	int iVar0;
	
	if (unk_0xEBB57845870E2E01() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_114(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_119(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEC8415598F0CAF4B(iParam0) > func_112(unk_0xAF65E5A58BE87D95()))
		{
			iParam0 = -func_112(unk_0xAF65E5A58BE87D95());
		}
	}
	if (func_120(8000, 0, 0) > 0)
	{
		if (func_120(8000, 0, 0) < (iParam0 + func_112(unk_0xAF65E5A58BE87D95())))
		{
			iParam0 = (func_120(8000, 0, 0) - func_112(unk_0xAF65E5A58BE87D95()));
		}
	}
	return iParam0;
}

int func_120(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_270026[iParam0];
}

int func_121()
{
	return 1;
}

int func_122(var uParam0)
{
	if (unk_0xD504011E20D63A81(uParam0))
	{
		return 1;
	}
	else if (unk_0xA858564DC37EED5E(uParam0, "") || unk_0xA858564DC37EED5E(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_123(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 2;
}

bool func_124(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 7;
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_72(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_126(iParam0, iVar0, iParam2);
}

void func_126(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = Global_2474212[iParam0 /*6*/][func_72(uParam2)];
	unk_0x96B68C67633472DC(uVar0, iParam1, 1);
}

int func_127(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2474212[iParam0 /*6*/][func_72(uParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_128()
{
	int iVar0;
	
	iVar0 = func_129(44);
	Global_2408752[iVar0 /*83*/] = 44;
	StringCopy(&(Global_2408752[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2408752[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2408752[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_130()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0F0C172200951A9A())
	{
		if (unk_0xD0E2103B183CBA60(unk_0xC54850646145FF41(iVar0)))
		{
			uVar2 = unk_0xC54850646145FF41(iVar0);
			if (func_11(unk_0x6E852073107AE8FE(uVar2), 1, 1))
			{
				if (iLocal_102[iVar0] == 1)
				{
					if (unk_0x8FE221761D524CFE(func_10(unk_0x6E852073107AE8FE(iVar2)), Local_170, 1) <= 30f)
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_131()
{
	if (bLocal_156)
	{
		if (unk_0x11F6A4A45943670E(iLocal_178) <= 0f)
		{
			unk_0x43F7F4A62787BC4B(iLocal_178, 1);
		}
		else
		{
			unk_0x43F7F4A62787BC4B(iLocal_178, 0);
		}
	}
}

void func_132()
{
	int iVar0;
	
	if (!bLocal_157)
	{
		if (bLocal_164)
		{
			if (!bLocal_165)
			{
				if (!unk_0x2A24448FF232F834(iLocal_179, 0))
				{
					if (unk_0x2A488C176D52CCA5(Local_167, Local_167) <= 60f)
					{
						iVar0 = unk_0xEC043AB2FEE0E94F(iLocal_179, 1805844857);
						if (iVar0 == 1)
						{
							if (!iLocal_152)
							{
								if (!unk_0x2A24448FF232F834(iLocal_179, 0))
								{
									func_133(&uLocal_188, "MPSVAUD", "MPSV_RUN", 12, 0, 0, 0);
									iLocal_152 = 1;
								}
							}
						}
					}
					else
					{
						iLocal_152 = 1;
					}
				}
			}
		}
	}
}

int func_133(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_149(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_134(sParam2, iParam3, 0);
}

int func_134(char* sParam0, int iParam1, bool bParam2)
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
					func_148();
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
		if (func_147(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_146();
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
				func_139();
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
				if (func_138())
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
			if (func_137())
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
			func_136();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_135();
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
		func_148();
	}
	return 0;
}

void func_135()
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

void func_136()
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

int func_137()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_138()
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

void func_139()
{
	if (func_145(14))
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
		Global_14393 = func_140();
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

var func_140()
{
	func_141();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_141()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_144(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_143(unk_0x507DA4994C3D8EBD());
			if (func_142(iVar0) && (!func_145(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_142(Global_97173.f_1729.f_539.f_3213))
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

bool func_142(int iParam0)
{
	return iParam0 < 3;
}

int func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_144(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_144(int iParam0)
{
	if (func_142(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_145(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_146()
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

bool func_147(int iParam0, int iParam1)
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

void func_148()
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

void func_149(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_150()
{
	bool bVar0;
	
	if (bLocal_156)
	{
		if (func_49() == 4)
		{
			if (bVar0)
			{
				if (unk_0xC6EE326730271D0C(Local_355.f_2))
				{
					unk_0x52F60AF2C0E3294F(iLocal_178, 0);
					unk_0xCDC1FD4387DA32EC(iLocal_178, 1);
				}
			}
		}
	}
}

void func_151()
{
	if (unk_0xD361727124133DF3(uLocal_176))
	{
		if (bLocal_156)
		{
			if (!bLocal_166)
			{
				if (func_155(Local_170, func_156(20), ""))
				{
					bLocal_166 = true;
				}
			}
			else
			{
				func_154(Local_170, func_156(20), "");
			}
		}
	}
	else if (bLocal_166)
	{
		func_152(0f, 0f, 0f, func_156(20), 1);
	}
}

void func_152(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0x8FA72E132AAFA62F(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0xA858564DC37EED5E(&(Global_2446210.f_3798[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_153(Global_2446210.f_3798[iVar0 /*26*/].f_1, Param0))
				{
					Global_2446210.f_3798[iVar0 /*26*/] = 0;
					Global_2446210.f_3798[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2446210.f_3798[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2446210.f_3798[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

bool func_153(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_154(struct<3> Param0, char* sParam3, char* sParam4)
{
	if (unk_0xA858564DC37EED5E(&(Global_2446210.f_3798[Global_2446210.f_4215 /*26*/].f_4), sParam3))
	{
		if (unk_0xA858564DC37EED5E(&(Global_2446210.f_3798[Global_2446210.f_4215 /*26*/].f_10), sParam4))
		{
			Global_2446210.f_3798[Global_2446210.f_4215 /*26*/] = 1;
			Global_2446210.f_3798[Global_2446210.f_4215 /*26*/].f_1 = { Param0 };
			StringCopy(&(Global_2446210.f_3798[Global_2446210.f_4215 /*26*/].f_4), sParam3, 24);
			StringCopy(&(Global_2446210.f_3798[Global_2446210.f_4215 /*26*/].f_10), sParam4, 64);
		}
	}
}

int func_155(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!unk_0x8FA72E132AAFA62F(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0xA858564DC37EED5E(&(Global_2446210.f_3798[iVar0 /*26*/].f_4), sParam3))
			{
				if (unk_0x8FA72E132AAFA62F(&(Global_2446210.f_3798[iVar0 /*26*/].f_4)))
				{
					Global_2446210.f_3798[iVar0 /*26*/] = 1;
					Global_2446210.f_3798[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2446210.f_3798[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2446210.f_3798[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_153(Global_2446210.f_3798[iVar0 /*26*/].f_1, Param0))
			{
				Global_2446210.f_3798[iVar0 /*26*/] = 1;
				Global_2446210.f_3798[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2446210.f_3798[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2446210.f_3798[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_156(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_157()
{
	if (func_49() >= 1)
	{
		if (Local_355.f_6 == 1)
		{
			if (bLocal_162)
			{
				if (Global_2421967.f_3018 != iLocal_178)
				{
					Global_2421967.f_3018 = iLocal_178;
				}
			}
			if (!bLocal_157)
			{
				if (Global_2421967.f_3018.f_1 != iLocal_179)
				{
					Global_2421967.f_3018.f_1 = iLocal_179;
				}
			}
			if (Local_355.f_6 == 1)
			{
				if (!bLocal_159)
				{
					if (Global_2421967.f_3018.f_2 != iLocal_180)
					{
						Global_2421967.f_3018.f_2 = iLocal_180;
					}
				}
			}
		}
	}
}

void func_158()
{
	if (!Local_355.f_22)
	{
		if (!iLocal_100)
		{
			if (bLocal_156)
			{
				if (!func_15(&uLocal_353))
				{
					func_14(&uLocal_353, 0, 0);
				}
				else if (func_13(&uLocal_353, 1000, 0))
				{
					if ((func_161() || func_28()) || uLocal_161)
					{
						func_159();
						iLocal_100 = 1;
					}
					func_24(&uLocal_353);
				}
			}
		}
	}
}

void func_159()
{
	struct<2> Var0;
	
	Var0.f_0 = 192;
	Var0.f_1 = unk_0xAF65E5A58BE87D95();
	Global_2421967.f_3252 = 1;
	unk_0x16EC6B18501E56BB(1, &Var0, 2, func_160(1, 1));
}

int func_160(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xAE744CCC666ACB74(iVar1);
		if (func_11(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xAF65E5A58BE87D95() || iParam0)
			{
				if (bParam1)
				{
					unk_0x3DBE2A7AF9E71C82(&uVar0, iVar1);
				}
				else if (!func_7(iVar2, 0))
				{
					unk_0x3DBE2A7AF9E71C82(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_161()
{
	if (unk_0x81A4DE5D88AD9A2C(iLocal_178, 2))
	{
		return 1;
	}
	else if (unk_0x790D2A28F6320CC8(iLocal_178, 2) > 0f)
	{
		return 1;
	}
	if (unk_0x81A4DE5D88AD9A2C(iLocal_178, 3))
	{
		return 1;
	}
	else if (unk_0x790D2A28F6320CC8(iLocal_178, 3) > 0f)
	{
		return 1;
	}
	return 0;
}

void func_162()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (unk_0xD0E2103B183CBA60(unk_0xC54850646145FF41(iVar0)))
		{
			if (func_11(unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iVar0)), 1, 1))
			{
				if (!iLocal_102[iVar0])
				{
					if (bLocal_163)
					{
						if (unk_0x6255AE2591FE7603(iLocal_179, unk_0x687D51F360787909(unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iVar0))), 1))
						{
							func_163(unk_0x687D51F360787909(unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iVar0))));
							iLocal_102[iVar0] = 1;
						}
					}
					if (bLocal_162)
					{
						if (unk_0x6255AE2591FE7603(iLocal_178, unk_0x687D51F360787909(unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iVar0))), 1))
						{
							func_163(unk_0x687D51F360787909(unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iVar0))));
							iLocal_102[iVar0] = 1;
						}
					}
					if (bLocal_158)
					{
						if (unk_0x6255AE2591FE7603(iLocal_180, unk_0x687D51F360787909(unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iVar0))), 1))
						{
							func_163(unk_0x687D51F360787909(unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iVar0))));
							iLocal_102[iVar0] = 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_163(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0x2A24448FF232F834(iParam0, 0))
		{
			uVar0 = unk_0x78AB10B64129B3D5(iParam0, 0);
			if (!unk_0xC51FBEBD87CFD69C(uVar0, -1))
			{
				iVar1 = unk_0xE634CB9EE7094537(uVar0, -1);
				if (unk_0xFD68187442384158(iVar1))
				{
					if (unk_0xBC57175ED22C698D(iVar1))
					{
						uVar2 = unk_0xB53DE20B11FF02FE(iVar1);
						iVar3 = unk_0xB62DE86EAE026A00(uVar2);
						iLocal_102[iVar3] = 1;
					}
				}
			}
		}
	}
}

void func_164()
{
	if (bLocal_160)
	{
		if (func_166())
		{
			func_165();
		}
	}
}

void func_165()
{
	if (!Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_2 || IntToFloat(unk_0x89D8D467C3C356CB(iLocal_182)) == 0f)
	{
		if (unk_0x89D8D467C3C356CB(iLocal_182) < 3)
		{
			unk_0x050E86400BAF39B2(iLocal_182, 3, 0);
			unk_0x4DFE220122919594(iLocal_182, 0);
		}
		Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_2 = 1;
	}
}

int func_166()
{
	int iVar0;
	int iVar1;
	
	if (!Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_2)
	{
		if (bLocal_156)
		{
			iVar0 = unk_0x527D4CB4E8181391(iLocal_181);
			if (iVar0 == iLocal_178)
			{
				if (unk_0xED261CE09A6522AE(iLocal_181))
				{
					return 1;
				}
			}
			else if (unk_0xFD68187442384158(iVar0))
			{
				if (unk_0xCA8794CE207FC6D5(iVar0, 0))
				{
					iVar1 = unk_0x26EA758C2A691D06(iVar0);
					if (iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2"))
					{
						if (unk_0xA89E36906A28895D(iVar0, iLocal_178))
						{
							return 1;
						}
					}
				}
			}
			if (!bLocal_157)
			{
				if (unk_0x53170344050F2301(iLocal_179, iLocal_178, 0))
				{
					if (unk_0x88253E28293B8BFD(iLocal_179))
					{
						if (unk_0xADFF42956B1E6E0F(iLocal_181))
						{
							if (unk_0x26EA758C2A691D06(unk_0x527D4CB4E8181391(iLocal_181)) == joaat("stockade"))
							{
								if (unk_0x2A488C176D52CCA5(Local_167, Local_173) <= 1.5f)
								{
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0xADFF42956B1E6E0F(iLocal_181))
			{
				if (unk_0x53170344050F2301(iLocal_181, iLocal_178, 0))
				{
					return 1;
				}
			}
		}
		if (bLocal_163)
		{
			if (bLocal_164)
			{
				if (!bLocal_165)
				{
					if (unk_0x6255AE2591FE7603(iLocal_179, iLocal_181, 1))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0xB8C2D6B33E64EA14(Local_355.f_5))
		{
			if (unk_0x6255AE2591FE7603(unk_0x9F00512086D0A86F(Local_355.f_5), iLocal_181, 1))
			{
				return 1;
			}
		}
		if (iLocal_102[unk_0x9DCF1243D4AAD942()])
		{
			return 1;
		}
		if (iLocal_102[unk_0x9DCF1243D4AAD942()])
		{
			return 1;
		}
	}
	return 0;
}

void func_167()
{
	if (!iLocal_151)
	{
		if (!bLocal_157)
		{
			func_168(&uLocal_188, 8, iLocal_179, "MPSecurityVanDriver", 1, 1);
			iLocal_151 = 1;
		}
	}
}

void func_168(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_169()
{
	if (iLocal_101)
	{
		return;
	}
	if (Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_2)
	{
		if (!func_170(joaat("weapon_stickybomb")))
		{
			if (!unk_0xBB51CB7A4D14453D())
			{
				func_61("AMSECVAN_STKYB", -1);
				iLocal_101 = 1;
			}
		}
		else
		{
			iLocal_101 = 1;
		}
	}
}

int func_170(int iParam0)
{
	if (unk_0x99A28335809E4B6C(unk_0x507DA4994C3D8EBD(), iParam0, 0))
	{
		return 1;
	}
	if (unk_0x99A28335809E4B6C(unk_0x507DA4994C3D8EBD(), iParam0, 0))
	{
		if (func_171(iParam0) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

void func_172()
{
	struct<9> Var0;
	
	if (!iLocal_148)
	{
		if (Local_378[unk_0x9DCF1243D4AAD942() /*7*/].f_2)
		{
			Var0.f_2 = 8;
			func_173(Var0, func_160(1, 1));
			iLocal_148 = 1;
		}
	}
}

void func_173(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xAF65E5A58BE87D95();
	if (!iParam9 == 0)
	{
		unk_0x16EC6B18501E56BB(1, &Param0, 9, iParam9);
	}
}

int func_174()
{
	return Local_355.f_0;
}

int func_175(int iParam0)
{
	return Local_378[iParam0 /*7*/];
}

void func_176()
{
	iLocal_181 = unk_0x507DA4994C3D8EBD();
	iLocal_182 = unk_0xAF65E5A58BE87D95();
	bLocal_164 = unk_0xFD68187442384158(iLocal_181);
	bLocal_165 = true;
	bLocal_157 = true;
	bLocal_156 = false;
	if (bLocal_164)
	{
		bLocal_165 = unk_0xE5D56342B0FF1D0D(iLocal_181);
	}
	if (!bLocal_165)
	{
		Local_167 = { unk_0xBF1B13057E5119A4(iLocal_181, 1) };
	}
	bLocal_163 = unk_0xB8C2D6B33E64EA14(Local_355.f_3);
	if (bLocal_163)
	{
		iLocal_179 = unk_0xE6286B95AEF7B8C2(Local_355.f_3);
		bLocal_157 = unk_0x9F94F2CFDCA78C55(iLocal_179);
	}
	if (!bLocal_157)
	{
		Local_173 = { unk_0xBF1B13057E5119A4(iLocal_179, 1) };
	}
	bLocal_158 = unk_0xB8C2D6B33E64EA14(Local_355.f_4);
	if (bLocal_158)
	{
		iLocal_180 = unk_0xE6286B95AEF7B8C2(Local_355.f_4);
		bLocal_159 = unk_0x9F94F2CFDCA78C55(iLocal_180);
	}
	bLocal_162 = unk_0xB8C2D6B33E64EA14(Local_355.f_2);
	if (bLocal_162)
	{
		iLocal_178 = unk_0xDACD0CF3BB366AB6(Local_355.f_2);
		bLocal_156 = !func_177(iLocal_178);
	}
	if (bLocal_156)
	{
		Local_170 = { unk_0xBF1B13057E5119A4(iLocal_178, 1) };
		uLocal_161 = unk_0x3739CEE6C015ACB5(iLocal_178);
	}
	bLocal_160 = func_11(iLocal_182, 1, 1);
	if (!bLocal_159)
	{
	}
}

int func_177(int iParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (unk_0xE5D56342B0FF1D0D(iParam0))
		{
			return 1;
		}
		else if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (!unk_0xEF57771119A32DB2(iParam0))
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

int func_178()
{
	if (func_180(unk_0xAF65E5A58BE87D95()))
	{
		return 1;
	}
	if (func_179(unk_0xAF65E5A58BE87D95()))
	{
		return 1;
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0)
{
	if (!func_11(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1582048[iParam0 /*324*/].f_27;
}

int func_180(int iParam0)
{
	if (func_63(iParam0, 1))
	{
		if (Global_1582048[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_181(int iParam0)
{
	return !func_182(iParam0);
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_4980)
			{
				return 0;
			}
			if (func_184(unk_0xAF65E5A58BE87D95(), 7))
			{
				return 0;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0) || unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_4981)
			{
				return 0;
			}
			if (func_184(unk_0xAF65E5A58BE87D95(), 7))
			{
				return 0;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0) || unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_4982)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_4983)
			{
				return 0;
			}
			if (func_184(unk_0xAF65E5A58BE87D95(), 7))
			{
				return 0;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0) || unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_183(4))
			{
				return 0;
			}
			if (func_184(unk_0xAF65E5A58BE87D95(), 7))
			{
				return 0;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0) || unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 18:
			if (func_183(4))
			{
				return 0;
			}
			if (func_184(unk_0xAF65E5A58BE87D95(), 7))
			{
				return 0;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0) || unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_183(4))
			{
				return 0;
			}
			if (func_184(unk_0xAF65E5A58BE87D95(), 7))
			{
				return 0;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0) || unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_183(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_11(unk_0xAE744CCC666ACB74(iVar0), 0, 1))
		{
			if (unk_0x61D8FEAF64881CDA(Global_2413868[iVar0 /*253*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_184(int iParam0, int iParam1)
{
	return unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_205, iParam1);
}

void func_185()
{
	if (unk_0xD361727124133DF3(uLocal_176))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_176);
	}
	Global_2446210.f_4379 = 0;
	Global_2421967.f_3250 = 0;
	Global_2421967.f_3251 = 0;
	Global_2421967.f_3252 = 0;
	func_187(5, 0);
	if (bLocal_166)
	{
		func_152(0f, 0f, 0f, func_156(20), 1);
	}
	Global_2428692.f_3536 = 0;
	if ((func_79("AMSECVAN_DROP") || func_79("AMSECVAN_STKYB")) || func_79("AMSECVAN_SHRTBP"))
	{
		unk_0x4A4C1A1BC79EFE8F(1);
	}
	func_186();
}

void func_186()
{
	unk_0x883793591E631A3B();
}

void func_187(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x61D8FEAF64881CDA(Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_205, iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_205), iParam0);
		}
	}
	else if (unk_0x61D8FEAF64881CDA(Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_205, iParam0))
	{
		unk_0xCD27BF29FB9012E2(&(Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_205), iParam0);
	}
}

int func_188()
{
	bool bVar0;
	
	func_195(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			return 1;
		}
	}
	if (func_194())
	{
		return 1;
	}
	if (Global_2436715)
	{
		return 1;
	}
	if (func_193())
	{
		return 1;
	}
	if (func_192(157))
	{
		if (!func_191())
		{
			return 1;
		}
	}
	if (func_192(155))
	{
		return 1;
	}
	if (!unk_0x0E4B4CA22DBCFA69())
	{
		return 1;
	}
	if (func_189() != 0)
	{
		if (unk_0x25531002BCF0D968(func_189()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_189()
{
	switch (func_190())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_190()
{
	return Global_24444;
}

bool func_191()
{
	return Global_2427935.f_570;
}

int func_192(int iParam0)
{
	if (unk_0x289D054E2E18C82E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_193()
{
	return Global_2434971;
}

bool func_194()
{
	return Global_2427935.f_565;
}

void func_195(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB301423C53556EA6(1))
	{
		iVar1 = unk_0xAAB64DCC229F922F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6EDD33D6B8546C95(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_196(iVar0);
					break;
				
				case 2:
					unk_0x6EDD33D6B8546C95(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_196(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 3))
	{
		if (func_11(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x687D51F360787909(Var0.f_1);
			if (unk_0xFD68187442384158(uVar3))
			{
				if (unk_0x2A24448FF232F834(iVar3, 0))
				{
					uVar4 = unk_0x78AB10B64129B3D5(iVar3, 0);
					if (unk_0x9067781626AA370D(uVar4, Var0.f_2) && unk_0x0D1738F09A13D367())
					{
						if (func_197(uVar4, &bVar5))
						{
							unk_0xA8B02A3D719BC7B0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB67623A401171555(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_197(int iParam0, var uParam1)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0x73E2404DC70203CD(iParam0))
		{
			if (unk_0x9ACF2D423F8B5749(iParam0))
			{
				unk_0xBAE5DF507EEC53C8(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x51BC2FF711F8CF71(iParam0, 0))
		{
			if (unk_0xFE0D96A75DA37EB0(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_198()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_199(struct<20> Param0)
{
	func_203(func_204(Param0.f_0), Param0);
	unk_0x31C8FBE30948E037(2);
	unk_0x091AADFDC8448CBD(1);
	unk_0xB5C67549F1765883(1);
	func_201(0, -1, 0);
	unk_0x661B032797391228(&Local_355, 23);
	unk_0xEF4D8ADC6645E7F7(&Local_378, 225);
	unk_0xB43679BBB30F1391(0);
	if (!func_200())
	{
		func_185();
	}
	func_187(5, 1);
	if (unk_0x2CCDE625E685C339())
	{
		unk_0x2B1B2E96D0A31F96(&(Local_355.f_18[0]), &(Local_355.f_18[1]));
	}
	Local_378[unk_0x9DCF1243D4AAD942() /*7*/] = 0;
}

int func_200()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xD95428C8AA1DBBF2())
		{
			return 0;
		}
		if (unk_0x0483A743E1339A51())
		{
			return 1;
		}
		if (func_194())
		{
			return 0;
		}
		if (func_192(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_201(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x2B79F83CAD49E762();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_186();
			}
			else
			{
				return 0;
			}
		}
		if (!func_202())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xD95428C8AA1DBBF2())
				{
					if (!bParam2)
					{
						func_186();
					}
					else
					{
						return 0;
					}
				}
				if (func_194())
				{
					if (!bParam2)
					{
						func_186();
					}
					else
					{
						return 0;
					}
				}
				if (func_192(155))
				{
					if (!bParam2)
					{
						func_186();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xD5762A6870CA7430())
			{
				if (!bParam2)
				{
					func_186();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x2B79F83CAD49E762();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			if (!bParam2)
			{
				func_186();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xD5762A6870CA7430())
	{
		if (!bParam2)
		{
			func_186();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_202()
{
	return Global_1315872;
}

void func_203(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		func_186();
	}
	unk_0x4C2DEED020A287EF(uParam0, 0, Param1.f_16);
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

