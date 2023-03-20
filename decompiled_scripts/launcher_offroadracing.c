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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	float fLocal_92 = 0f;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	char* sLocal_100 = NULL;
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	float fLocal_116 = 0f;
	bool bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	struct<3> Local_120 = { 0, 0, 0 } ;
	int iLocal_123 = 0;
	struct<3> Local_124[5];
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149[5] = { 0, 0, 0, 0, 0 };
	float fLocal_155 = 0f;
	int iLocal_156 = 0;
	bool bLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	var uLocal_162 = 16;
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
	int iLocal_327 = 0;
	struct<100> Local_328 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
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
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_44 = { 500f, 500f, 500f };
	iLocal_95 = -1;
	iLocal_96 = 2050;
	iLocal_97 = -1;
	iLocal_98 = -1;
	sLocal_100 = "CC_SUBSTR";
	fLocal_101 = 125f;
	iLocal_102 = 1;
	iLocal_104 = 262;
	fLocal_116 = 4f;
	bLocal_117 = true;
	iLocal_118 = 6;
	iLocal_119 = 18;
	iLocal_123 = -1;
	bLocal_157 = true;
	iLocal_158 = 1;
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_89 = { Local_89 };
	iLocal_85 = iLocal_85;
	Local_68 = { Local_68 };
	bVar0 = false;
	if (unk_0xC11469DCA6FC3BB5(82))
	{
		func_145(1);
	}
	uLocal_84 = unk_0x275F255ED201B937(unk_0x217E9DC48139933D());
	iLocal_94 = 0;
	func_143(&Global_96007, 0);
	func_137();
	unk_0x7A12830030CE1C8F(1);
	if (func_136(uLocal_93, 1))
	{
		iLocal_99 = 10;
	}
	else
	{
		iLocal_99 = 9;
	}
	while (!Global_30778)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_136(uLocal_93, 8))
	{
		if (!func_134(iLocal_99))
		{
			if (func_133(0, iLocal_98))
			{
				func_145(0);
			}
			else
			{
				func_145(1);
			}
		}
	}
	if (iLocal_98 != -1)
	{
		if (!func_133(0, iLocal_98))
		{
			bLocal_117 = false;
		}
	}
	if (func_136(uLocal_93, 8388608))
	{
		func_145(1);
	}
	if (func_136(uLocal_93, 524288) && (func_132() && !func_131()))
	{
		func_145(1);
	}
	if (unk_0x8E34C953364A76DD(unk_0xBC2C927F5C264960()) > 1 && !func_136(uLocal_93, 4194304))
	{
		if (iLocal_104 != 262)
		{
			func_130(iLocal_104, 1, 0);
			iLocal_104 = 262;
		}
		func_129(10);
	}
	while (true)
	{
		if (!func_136(uLocal_93, 268435456))
		{
			fVar1 = 0f;
			if (unk_0x24FA4267BB8D2431(ScriptParam_0.f_1[0 /*3*/], &fVar1))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					func_128(&uLocal_93, 268435456);
				}
			}
		}
		uLocal_84 = unk_0x275F255ED201B937(unk_0x217E9DC48139933D());
		if (func_136(uLocal_93, 1048576))
		{
			if (unk_0x7D5B1F88E7504BBA(uLocal_84))
			{
				func_145(1);
			}
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_84) && !unk_0x7D5B1F88E7504BBA(iLocal_84))
		{
			Local_86 = { unk_0xA86D5F069399F44D(iLocal_84, 1) };
			fLocal_92 = unk_0xB7A628320EFF8E47(Local_86, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_92 = fLocal_92;
			Local_110 = { Local_86 };
			Local_113 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_110.f_2 = 0f;
			Local_113.f_2 = 0f;
			fLocal_109 = unk_0xB7A628320EFF8E47(Local_110, Local_113);
			switch (iLocal_94)
			{
				case 0:
					if (func_134(iLocal_99) || (func_136(uLocal_93, 16) && !func_136(uLocal_93, 524288)))
					{
						iLocal_97 = -1;
						func_124();
						func_129(1);
					}
					else
					{
						if (fLocal_109 > (fLocal_101 * fLocal_101))
						{
							if (iLocal_104 != 262)
							{
								func_130(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
							func_129(10);
						}
						if ((Local_86.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_122() && fLocal_92 > ((fLocal_116 * 1.5f) * (fLocal_116 * 1.5f)))
					{
						iLocal_102 = iLocal_102;
						func_129(3);
					}
					else
					{
						func_124();
					}
					break;
				
				case 3:
					if (unk_0x47499F21458D3AFA())
					{
						func_145(1);
						return;
					}
					if (!func_134(iLocal_99))
					{
						if (!func_136(uLocal_93, 8))
						{
							bVar2 = true;
							if (unk_0xD3852F22AB713A1F(&(Global_89962.f_3), &Local_68))
							{
								Local_68 = { Local_52 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_145(0);
								break;
							}
						}
					}
					if (!func_136(uLocal_93, 4))
					{
						func_111();
						func_128(&uLocal_93, 4);
					}
					if (fLocal_109 > (fLocal_101 * fLocal_101) && !Global_89996)
					{
						if (iLocal_104 != 262)
						{
							if (func_110(6) && !func_109(iLocal_104))
							{
							}
							else
							{
								func_130(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
						}
						func_129(10);
					}
					else
					{
						Local_68 = { Local_52 };
						bVar3 = !func_136(uLocal_93, 64);
						func_143(&uLocal_93, 128);
						if (!func_108(3) && !Global_89996)
						{
							if (func_136(uLocal_93, 2097152))
							{
								if ((!func_136(uLocal_93, 1) || !unk_0xD42BD6EB2E0F1677(func_107())) && !Global_89996)
								{
									func_129(10);
									break;
								}
							}
						}
						if (func_136(uLocal_93, 524288) && (func_132() && !func_131()))
						{
							func_145(1);
						}
						if (func_106())
						{
							func_145(1);
						}
						if ((!func_98(6) || Global_96400) || func_97())
						{
							bVar3 = false;
						}
						if (!bLocal_117)
						{
							func_95(&uLocal_93, 128);
							bVar3 = false;
						}
						if (func_136(uLocal_93, 1))
						{
							if (!func_94())
							{
								func_95(&uLocal_93, 128);
								bVar3 = false;
							}
						}
						if (func_93(1))
						{
							bVar3 = false;
						}
						if (Global_68245)
						{
							bVar3 = false;
						}
						if (func_92())
						{
							bVar3 = false;
						}
						if (unk_0xED20CB1F5297791D())
						{
							bVar3 = false;
						}
						if (func_91() || func_90(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0x2DF170B1185AF777(unk_0x217E9DC48139933D()))
						{
							bVar3 = false;
						}
						if (!unk_0xB78350754157C00F(unk_0x217E9DC48139933D()))
						{
							bVar3 = false;
						}
						if (func_89(0) || func_88())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!unk_0x5E58342602E94718(iLocal_84, ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, 0, 1, iLocal_102))
							{
								bVar3 = false;
							}
							iVar4 = unk_0xC82CF208C2B19199();
							if (iLocal_118 > iLocal_119)
							{
								if (iVar4 < iLocal_118 && iVar4 >= iLocal_119)
								{
									func_95(&uLocal_93, 128);
									bVar3 = false;
									if (fLocal_92 < ((fLocal_116 * fLocal_116) + 4f))
									{
										if (!func_136(uLocal_93, 134217728))
										{
											func_87("MG_NA_TIME", iLocal_118, iLocal_119);
											func_95(&uLocal_93, 134217728);
										}
									}
									else
									{
										func_143(&uLocal_93, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_118 || iVar4 >= iLocal_119)
							{
								func_95(&uLocal_93, 128);
								bVar3 = false;
								if (fLocal_92 < ((fLocal_116 * fLocal_116) + 4f))
								{
									if (!func_136(uLocal_93, 134217728))
									{
										func_87("MG_NA_TIME", iLocal_118, iLocal_119);
										func_95(&uLocal_93, 134217728);
									}
								}
								else
								{
									func_143(&uLocal_93, 134217728);
								}
							}
							if (!unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0xDA067FC477B3E571(0, 51);
								if (func_86(iLocal_85))
								{
									if (iLocal_95 == -1)
									{
										func_85(&iLocal_95, 4, sLocal_100, 0, 0);
										func_95(&uLocal_93, 2048);
									}
									else if (!func_136(uLocal_93, 2048) || !unk_0xA805B04DD97BE4E6())
									{
										func_84(&iLocal_95);
										func_143(&uLocal_93, 2048);
									}
									if (func_82(iLocal_95, 1))
									{
										sLocal_100 = sLocal_100;
										func_84(&iLocal_95);
										func_143(&uLocal_93, 2048);
										unk_0x46ED607DDD40D7FE(&Local_68);
										unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 56);
										func_129(5);
									}
								}
								else
								{
									sLocal_100 = sLocal_100;
									func_84(&iLocal_95);
									func_143(&uLocal_93, 2048);
									unk_0x46ED607DDD40D7FE(&Local_68);
									unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 56);
									func_129(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_95 != -1)
							{
								func_84(&iLocal_95);
								func_143(&uLocal_93, 2048);
								unk_0x0BFC2C61FB5B6CA1(0);
							}
						}
					}
					func_50();
					break;
				
				case 5:
					unk_0xDA067FC477B3E571(0, 51);
					if (unk_0xE97BD36574F8B0A6(&Local_68))
					{
						if (iLocal_95 != -1)
						{
							func_84(&iLocal_95);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_136(uLocal_93, 1))
						{
							if (func_110(6) || func_110(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_47(&iLocal_97, 6, iLocal_99, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!unk_0x7D5B1F88E7504BBA(iLocal_85))
							{
								unk_0x6C9B2BE03BBD5C98(&iLocal_85);
							}
							if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
							{
								unk_0x4E4B996C928C7AA6(unk_0x217E9DC48139933D());
							}
							func_46();
							if (Global_35957)
							{
								func_37(unk_0x096275889B8E0EE0());
							}
							unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 56);
							uLocal_51 = func_36();
							func_95(&uLocal_93, 2);
							func_129(6);
							func_32(&uLocal_106);
							if (iLocal_98 != -1)
							{
								func_31(iLocal_98);
								func_29(func_30(iLocal_98), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_28();
						}
						else if (iVar5 == 0)
						{
							func_129(10);
						}
					}
					else
					{
						func_28();
					}
					break;
				
				case 6:
					if (func_136(Global_96007, 262144))
					{
						func_143(&Global_96007, 262144);
						func_27();
					}
					if (func_136(uLocal_93, 2097152))
					{
						if (!func_108(3) && !unk_0x8ADB0730FFB27333(uLocal_51))
						{
							func_129(10);
						}
					}
					if (!unk_0x8ADB0730FFB27333(uLocal_51))
					{
						unk_0x1CC5CCD07F14CD17(unk_0xF2DB717A73826179((func_23(&uLocal_106) * 1000f)), iLocal_98, 0);
						func_22(&uLocal_106);
						func_143(&uLocal_93, 256);
						func_21();
						if (bVar0)
						{
							func_143(&uLocal_93, 2);
						}
						else if (func_136(uLocal_93, 2))
						{
							if (func_136(Global_96007, 0))
							{
								func_20(&iLocal_97);
								iLocal_97 = -1;
								func_143(&uLocal_93, 2);
							}
							else
							{
								func_20(&iLocal_97);
								iLocal_97 = -1;
								func_143(&uLocal_93, 2);
							}
						}
						func_129(0);
						if (iLocal_98 != -1)
						{
							if (func_136(Global_96007, 0))
							{
								unk_0x8F833468562E05BF(func_30(iLocal_98), 0, Global_89999, 0);
								func_19(func_30(iLocal_98), 0, Global_89999, 1, 0);
							}
							else
							{
								unk_0x8F833468562E05BF(func_30(iLocal_98), 0, Global_89999, 0);
								func_19(func_30(iLocal_98), 0, Global_89999, 0, 0);
							}
						}
						func_5();
						func_143(&Global_96007, 0);
						if (func_136(uLocal_93, 16777216))
						{
							func_145(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_97353.f_7341)
							{
								if (!func_133(0, iLocal_98))
								{
									func_145(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_129(0);
					break;
				
				case 10:
					func_145(1);
					break;
				
				case 9:
					if (fLocal_109 > (fLocal_101 * fLocal_101))
					{
						if (iLocal_104 != 262)
						{
							func_130(iLocal_104, 1, 0);
							iLocal_104 = 262;
						}
						func_129(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_104 != 262)
					{
						func_130(iLocal_104, 0, 0);
					}
					if (iLocal_95 != -1)
					{
						func_84(&iLocal_95);
					}
					if (!unk_0x2CF12F9ACF18F048(sLocal_100))
					{
						if (func_1(sLocal_100))
						{
							unk_0x0BFC2C61FB5B6CA1(1);
						}
					}
					func_129(4);
					break;
				
				case 4:
					if ((iLocal_103 % 150) == 0)
					{
						if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
						{
							if (iLocal_105 == 2)
							{
								if (iLocal_105 == 2)
								{
									if (func_134(iLocal_99) && func_133(0, iLocal_98))
									{
										func_137();
										if (iLocal_104 != 262)
										{
											func_130(iLocal_104, 1, 0);
										}
										func_129(0);
									}
								}
							}
							else if (iLocal_105 == 0)
							{
								if (fLocal_109 > (fLocal_101 * fLocal_101))
								{
									if (iLocal_104 != 262)
									{
										func_130(iLocal_104, 1, 0);
										iLocal_104 = 262;
									}
									func_129(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_137();
									if (iLocal_104 != 262)
									{
										func_130(iLocal_104, 1, 0);
									}
									func_129(0);
								}
							}
						}
						else
						{
							func_130(iLocal_104, 1, 0);
						}
					}
					else
					{
						iLocal_103++;
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0x7130CFD8526145CA(sParam0);
	return unk_0x6DF1648C223C3A9D(0);
}

void func_2()
{
	char* sVar0;
	
	func_3(&(Local_328.f_71));
	func_3(&(Local_328.f_77));
	func_3(&(Local_328.f_99));
	unk_0x4763145053A33D46("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x4763145053A33D46("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x4763145053A33D46("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x4763145053A33D46("amb@world_human_aa_smoke@male@idle_a");
	unk_0x4763145053A33D46("random@street_race");
	unk_0x4763145053A33D46("gestures@m@standing@casual");
	switch (iLocal_123)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!unk_0x2CF12F9ACF18F048(sVar0))
	{
		if (unk_0x9AC6F0931A0D749E(sVar0))
		{
			if (unk_0xC837BA262C1E56B9(sVar0))
			{
				unk_0xCC3AB3971752BA95(sVar0, 0);
			}
		}
	}
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x4AD96EF928BD4F9A((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
	if (func_136(Global_97353.f_17270, 1))
	{
		func_143(&(Global_97353.f_17270), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
}

void func_8()
{
	if (Global_97353.f_17270.f_18 < Global_97353.f_17270.f_19[iLocal_123] || Global_97353.f_17270.f_19[iLocal_123] == 0)
	{
		Global_97353.f_17270.f_19[iLocal_123] = Global_97353.f_17270.f_18;
		Global_97353.f_17270.f_18 = 999;
	}
	if (iLocal_123 == Global_97353.f_17270.f_1 || Global_97353.f_17270.f_1 == -1)
	{
		if (Global_97353.f_17270.f_1 != 5)
		{
			Global_97353.f_17270.f_1++;
			switch (Global_97353.f_17270.f_1)
			{
				case 1:
					func_130(69, 1, 0);
					func_17(69, 1);
					func_130(70, 1, 0);
					break;
				
				case 2:
					func_130(69, 1, 0);
					func_17(69, 1);
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					break;
				
				case 3:
					func_130(69, 1, 0);
					func_17(69, 1);
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					break;
				
				case 4:
					func_130(69, 1, 0);
					func_17(69, 1);
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					break;
				
				case 5:
					func_130(69, 1, 0);
					func_17(69, 1);
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					func_17(73, 1);
					func_130(74, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_130(69, 1, 0);
			func_17(69, 1);
			func_130(70, 1, 0);
			func_17(70, 1);
			func_130(72, 1, 0);
			func_17(72, 1);
			func_130(73, 1, 0);
			func_17(73, 1);
			func_130(74, 1, 0);
			func_17(74, 1);
			func_130(71, 1, 0);
			func_17(71, 1);
		}
		switch (Global_97353.f_17270.f_1)
		{
			case 0:
				func_13(69);
				func_9(70);
				break;
			
			case 1:
				func_13(70);
				func_9(71);
				break;
			
			case 2:
				func_13(71);
				func_9(72);
				break;
			
			case 3:
				func_13(72);
				func_9(73);
				break;
			
			case 4:
				func_13(73);
				func_9(74);
				break;
			
			case 5:
				func_13(74);
				break;
			}
	}
}

void func_9(int iParam0)
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_24748[iVar0 /*23*/].f_11), 4);
	}
	if (Global_24745 == 1)
	{
		Global_24746 = 1;
	}
	Global_24745 = 1;
	unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 18);
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_24748[iVar0 /*23*/].f_11), 5);
	}
	if (Global_24745 == 1)
	{
		Global_24746 = 1;
	}
	Global_24745 = 1;
	unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_24748[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_24748[iVar0 /*23*/].f_11), 11);
	}
	if (Global_24745 == 1)
	{
		Global_24746 = 1;
	}
	Global_24745 = 1;
	unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0)
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD3852F22AB713A1F(sParam0, ""))
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
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0xD3852F22AB713A1F(&(Global_97353.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97353.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_8 = (unk_0x4F67E8ECA7D3F667() + iParam3);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = ((unk_0x4F67E8ECA7D3F667() + iParam3) + iParam4);
		}
		else
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97353.f_23635.f_145++;
		func_16();
	}
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97353.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[0])
			{
				Global_97353.f_23635.f_146[0] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[1])
			{
				Global_97353.f_23635.f_146[1] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[2])
			{
				Global_97353.f_23635.f_146[2] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_17(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_24748[iVar0 /*23*/].f_11), 20);
	}
	if (Global_24745 == 1)
	{
		Global_24746 = 1;
	}
	Global_24745 = 1;
	unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 20);
}

void func_18()
{
	unk_0x7E42B5424BF0E844();
	unk_0x42C20998B66172B5();
	switch (iLocal_123)
	{
		case 0:
			unk_0x305538B87F955257(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		
		case 1:
			unk_0x305538B87F955257(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 1);
			break;
		
		case 3:
			unk_0x305538B87F955257(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			unk_0x305538B87F955257(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		
		case 2:
			unk_0x305538B87F955257(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x2CF12F9ACF18F048(&Global_87437))
	{
		return;
	}
	if (unk_0xBFBB74A15EFC149B(sParam0, &Global_87437, 0, -1) != 0)
	{
		return;
	}
	unk_0x4770F2C34FA0A6E3(sParam0, iParam1, iParam2, iParam3, iParam4, Global_84544);
	StringCopy(&Global_87437, "", 64);
}

void func_20(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_34875)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

void func_21()
{
	char cVar0[24];
	
	if (unk_0x50732C31F5D806DF() || unk_0xD1CCC2A2639D325F())
	{
		unk_0x067FB80C077FC449(StackVal, 0, 0, 0);
	}
	else if (unk_0x588D1C657C1F9299() || unk_0x88CFAE250D3E0C71())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0xADD49A5C2FA505B1(0, &cVar0);
	}
}

void func_22(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_23(var uParam0)
{
	if (func_26(uParam0))
	{
		if (func_25(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_24(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_24(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
	}
	if (unk_0x03A753E2C8458335())
	{
		iVar0 = unk_0x6AEB0DF30A9DB9F1();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
}

bool func_25(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 2);
}

bool func_26(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 1);
}

int func_27()
{
	func_8();
	return 1;
}

void func_28()
{
}

void func_29(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2CF12F9ACF18F048(&Global_87437))
	{
		unk_0x4770F2C34FA0A6E3(&Global_87437, 0, 0, 0, 1, 0);
		StringCopy(&Global_87437, "", 64);
	}
	StringCopy(&Global_87437, sParam0, 64);
	unk_0x6C94E26C861F9E87(sParam0, iParam1, iParam2, func_7(0));
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_31(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x50732C31F5D806DF() || unk_0xD1CCC2A2639D325F())
	{
		uVar0 = iParam0;
		unk_0x067FB80C077FC449(8, &uVar0, 1, 1);
	}
	else if (unk_0x588D1C657C1F9299() || unk_0x88CFAE250D3E0C71())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xADD49A5C2FA505B1(8, &cVar1);
	}
}

void func_32(var uParam0)
{
	if (!func_26(uParam0))
	{
		func_35(uParam0);
	}
	else
	{
		func_33(uParam0);
	}
}

void func_33(var uParam0)
{
	func_34(uParam0, 0f);
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_35(var uParam0)
{
	if (!func_26(uParam0))
	{
		func_33(uParam0);
	}
}

int func_36()
{
	struct<18> Var0;
	int iVar18;
	int iVar19;
	
	unk_0x0BFC2C61FB5B6CA1(1);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0.f_0 = iLocal_123;
	Var0.f_1 = { Local_120 };
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < Var0.f_4)
	{
		Var0.f_4[iVar18] = Local_328[iVar18 /*14*/];
		Var0.f_10[iVar18] = Local_328[iVar18 /*14*/].f_1;
		iVar18++;
	}
	Var0.f_16 = Local_328.f_83;
	Var0.f_17 = Local_328.f_83.f_1;
	unk_0x4102732DF6B4005F("SwitchSceneNeutral", 0, 1);
	unk_0x4EDE34FBADD967A6(400);
	iVar19 = unk_0xB8BA7F44DF1575E1(&Local_52, &Var0, 18, iLocal_96);
	unk_0x0086D3067E1CFD1C(&Local_52);
	return iVar19;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
	{
		return;
	}
	iVar0 = func_45(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35760[iVar0 /*5*/];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35734[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35734[iParam0 /*5*/].f_1 == unk_0x096275889B8E0EE0())
		{
			Global_35955 = 0;
		}
	}
	Global_35734[iParam0 /*5*/] = 13;
	Global_35734[iParam0 /*5*/].f_1 = 0;
	Global_35734[iParam0 /*5*/].f_2 = 0;
	Global_35734[iParam0 /*5*/].f_3 = 0;
	Global_35734[iParam0 /*5*/].f_4 = 0;
	Global_35733 = (Global_35733 - 1);
	if (Global_35733 < 0)
	{
		Global_35733 = 0;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35734[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_41(iParam0, iParam1, iParam2, 0, 0);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35841[iVar0 /*5*/] = iParam0;
	Global_35841[iVar0 /*5*/].f_1 = iParam1;
	Global_35841[iVar0 /*5*/].f_2 = iParam2;
	Global_35841[iVar0 /*5*/].f_3 = iParam3;
	Global_35841[iVar0 /*5*/].f_4 = iParam4;
}

int func_42()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35841[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_44(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35841[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35841[iVar0 /*5*/])
			{
				if (iParam1 == Global_35841[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_35760[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35760[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_46()
{
	if (Global_3068[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x7D1D4A3602B6AD4E(&Global_2263, 25);
	unk_0xF73FBE4845C43B5B(&Global_2264, 11);
}

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_49(0))
		{
			return 0;
		}
		Global_34877++;
		*iParam0 = Global_34877;
		unk_0xFEBEEBC9CBDF4B12(unk_0x47E385B0D957C8D4(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x768C017FB878E4F4(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *iParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_134(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*iParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

void func_48(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_49(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_134(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_50()
{
	float fVar0;
	
	fVar0 = unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Local_120);
	if (fVar0 < 62500f)
	{
		func_74();
		func_71();
		if (iLocal_158)
		{
			if (fVar0 < 64f)
			{
				func_70();
				iLocal_158 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_54();
		}
	}
	if (!iLocal_159)
	{
		if (func_52())
		{
			iLocal_159 = 1;
			func_51();
		}
	}
}

void func_51()
{
	iLocal_47++;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_53())
	{
		if (!unk_0xD42BD6EB2E0F1677(Local_328[iVar0 /*14*/]) || !unk_0xD42BD6EB2E0F1677(Local_328[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0xD42BD6EB2E0F1677(Local_328.f_83) || !unk_0xD42BD6EB2E0F1677(Local_328.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_53()
{
	switch (iLocal_123)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_54()
{
	int iVar0;
	char* sVar1;
	
	if (!func_26(&uLocal_146))
	{
		func_35(&uLocal_146);
		return;
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_156) && !unk_0x7D5B1F88E7504BBA(iLocal_156))
	{
		if (unk_0xE83F3075C21CC0A2(iLocal_156))
		{
			return;
		}
	}
	if (func_23(&uLocal_146) >= 8f)
	{
		iVar0 = (unk_0x9C1C462D7B1DD1F9(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (unk_0x7D5B1F88E7504BBA(Local_328[(iVar0 - 1) /*14*/]))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_55(&uLocal_162, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_33(&uLocal_146);
		}
	}
}

int func_55(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_69(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_56(sParam2, iParam3, 0);
}

int func_56(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x89EEEEF0CEB4D045(0);
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
					func_68();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x200E87988220C592())
		{
			return 0;
		}
		if (func_90(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_67();
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
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 20);
			unk_0x7D1D4A3602B6AD4E(&Global_2264, 17);
			unk_0x7D1D4A3602B6AD4E(&Global_2265, 0);
			if (bParam2)
			{
				func_61();
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
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (func_60())
				{
					return 0;
				}
				if (unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0xF66C5FD7C3EDEE62(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x391393371909C23E(unk_0x096275889B8E0EE0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0xDDE5C125AC446723(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
					if (unk_0x54A6BAC0E0415FCB(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
				}
			}
			if (func_59())
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
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 9))
				{
					return 0;
				}
			}
			func_58();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_57();
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
		func_68();
	}
	return 0;
}

void func_57()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x89EEEEF0CEB4D045(0);
	Global_15692 = 1;
}

void func_58()
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
	unk_0x7D1D4A3602B6AD4E(&Global_2264, 16);
}

int func_59()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_60()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar1, 1);
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x698F456FB909E077() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1))
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

void func_61()
{
	if (func_110(14))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
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
		Global_14393 = func_62();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_62()
{
	func_63();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_63()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_66(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_65(unk_0x096275889B8E0EE0());
			if (func_64(iVar0) && (!func_110(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_64(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_64(int iParam0)
{
	return iParam0 < 3;
}

int func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_66(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_66(int iParam0)
{
	if (func_64(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_67()
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

void func_68()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if ((unk_0x3AB7C52414B223F6() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_70()
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x7D5B1F88E7504BBA(Local_328.f_83))
	{
		iVar0 = unk_0xC82CF208C2B19199();
		if (iVar0 <= iLocal_118 && iVar0 >= iLocal_119)
		{
			iLocal_158 = 0;
			return;
		}
		unk_0xD1F7F32640ADFD12(Local_328.f_83, 0f, 0f, 0.75f, 1, 2000, 2000, 2000, 0);
	}
}

void func_71()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = unk_0xC82CF208C2B19199();
	if (iVar0 <= iLocal_118 && iVar0 >= iLocal_119)
	{
		iLocal_327 = 0;
		return;
	}
	if (!unk_0x7D5B1F88E7504BBA(iLocal_156) && !unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		switch (iLocal_327)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(iLocal_156, 1), unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1)) < 64f && !unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					iLocal_160 = 0;
					iLocal_161 = 0;
					iLocal_327 = 1;
				}
				break;
			
			case 1:
				unk_0xF4BF3E3D7FE56705(&uVar1);
				unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), -1, 0, 2);
				unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 0);
				unk_0xFF7E39890B2840DD(uVar1);
				unk_0xD59C10966EB589EA(iLocal_156, uVar1);
				unk_0x5EC7E18324A7D03D(&uVar1);
				iLocal_327 = 2;
				break;
			
			case 2:
				if ((unk_0x04932A97CB319DE0(iLocal_156, 242628503) != 1 || unk_0x9B4CC17D919C8FC4(iLocal_156, unk_0x096275889B8E0EE0(), 20f)) && !unk_0x200E87988220C592())
				{
					unk_0xFE920E72A4B34285(iLocal_156, unk_0x096275889B8E0EE0(), -1);
					if (!iLocal_161)
					{
						func_72(iLocal_156, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_72(iLocal_156, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_327 = 3;
				}
				break;
			
			case 3:
				if (!unk_0xE83F3075C21CC0A2(iLocal_156))
				{
					func_33(&uLocal_143);
					unk_0x8DBC05C86F873CC9(iLocal_156, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_327 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(iLocal_156, 1), unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1)) > 225f)
				{
					unk_0xF4BF3E3D7FE56705(&uVar2);
					unk_0xD54B51DB3BD1FB16(0, Local_328.f_83.f_9, 1000);
					unk_0x8DBC05C86F873CC9(0, Local_328.f_83.f_12, Local_328.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0xFF7E39890B2840DD(uVar2);
					unk_0xD59C10966EB589EA(iLocal_156, uVar2);
					unk_0x5EC7E18324A7D03D(&uVar2);
					iLocal_327 = 0;
				}
				if (func_26(&uLocal_143))
				{
					if (func_23(&uLocal_143) >= 5f && !iLocal_160)
					{
						iLocal_160 = 1;
						iLocal_327 = 1;
					}
					else if (func_23(&uLocal_143) >= 10f && !iLocal_161)
					{
						iLocal_161 = 1;
						iLocal_327 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_72(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xD318BF1FC64DD7D9(iParam0, sParam1, sParam2, func_73(iParam3), 0);
}

int func_73(int iParam0)
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

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (unk_0xD42BD6EB2E0F1677(Local_328[iVar2 /*14*/].f_1) && unk_0xD42BD6EB2E0F1677(Local_328[iVar2 /*14*/]))
		{
			if (func_79(Local_328[iVar2 /*14*/], 1, 0, 0, 0) || unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), Local_328[iVar2 /*14*/].f_1, 1))
			{
				func_77();
				func_76(iLocal_104);
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
			}
			if (!unk_0x6CFF81397164A1D3(Local_328[iVar2 /*14*/]))
			{
				if (func_26(&(Local_124[iVar2 /*3*/])))
				{
					if (func_23(&(Local_124[iVar2 /*3*/])) > uLocal_149[iVar2])
					{
						if (unk_0xB86D29B10F627379(Local_328[iVar2 /*14*/].f_1, 0) && unk_0x9C8E4D238C999648(Local_328[iVar2 /*14*/], Local_328[iVar2 /*14*/].f_1, 0))
						{
							iVar0 = unk_0x9C1C462D7B1DD1F9(250, 500);
							iVar1 = unk_0x9C1C462D7B1DD1F9(250, 500);
							unk_0xF4BF3E3D7FE56705(&uVar3);
							unk_0xDD3F03022D31980D(0, Local_328[iVar2 /*14*/].f_1, 1, iVar0);
							unk_0xDD3F03022D31980D(0, Local_328[iVar2 /*14*/].f_1, 31, iVar1);
							unk_0xFF7E39890B2840DD(uVar3);
							if (!unk_0x6CFF81397164A1D3(Local_328[iVar2 /*14*/]))
							{
								unk_0xD59C10966EB589EA(Local_328[iVar2 /*14*/], uVar3);
							}
							unk_0x5EC7E18324A7D03D(&uVar3);
						}
						func_33(&(Local_124[iVar2 /*3*/]));
						uLocal_149[iVar2] = unk_0xE29F927A961F8AAA(0f, 3f);
					}
				}
				else
				{
					func_35(&(Local_124[iVar2 /*3*/]));
				}
			}
			if (!unk_0x7D5B1F88E7504BBA(Local_328[iVar2 /*14*/]))
			{
				if ((unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), Local_328[iVar2 /*14*/]) && !unk_0x14BDA64F4D0D5E1D(Local_328[iVar2 /*14*/])) && !unk_0x8072F0912899C46C(Local_328[iVar2 /*14*/]))
				{
					Local_328[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_328[iVar2 /*14*/].f_11)
				{
					unk_0xF4BF3E3D7FE56705(&uVar3);
					unk_0xD54B51DB3BD1FB16(0, Local_328[iVar2 /*14*/].f_9, 1000);
					unk_0x8DBC05C86F873CC9(0, Local_328[iVar2 /*14*/].f_12, Local_328[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0xFF7E39890B2840DD(uVar3);
					unk_0xD59C10966EB589EA(Local_328[iVar2 /*14*/], uVar3);
					unk_0x5EC7E18324A7D03D(&uVar3);
					Local_328[iVar2 /*14*/].f_11 = 0;
				}
				if (unk_0x14BDA64F4D0D5E1D(Local_328[iVar2 /*14*/]) || unk_0x8072F0912899C46C(Local_328[iVar2 /*14*/]))
				{
					if (!Local_328[iVar2 /*14*/].f_10 && (unk_0x14BDA64F4D0D5E1D(Local_328[iVar2 /*14*/]) || unk_0x8072F0912899C46C(Local_328[iVar2 /*14*/])))
					{
						Local_328.f_101++;
					}
					Local_328[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_328[iVar2 /*14*/].f_10)
				{
					unk_0xF4BF3E3D7FE56705(&uVar3);
					unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 1000);
					unk_0x8DBC05C86F873CC9(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xD54B51DB3BD1FB16(0, Local_328[iVar2 /*14*/].f_9, 1000);
					unk_0x8DBC05C86F873CC9(0, Local_328[iVar2 /*14*/].f_12, Local_328[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0xFF7E39890B2840DD(uVar3);
					unk_0xD59C10966EB589EA(Local_328[iVar2 /*14*/], uVar3);
					unk_0x5EC7E18324A7D03D(&uVar3);
					Local_328[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (unk_0xD42BD6EB2E0F1677(Local_328.f_83.f_1) && unk_0xD42BD6EB2E0F1677(Local_328.f_83))
	{
		if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), Local_328.f_83.f_1, 0))
		{
			iLocal_85 = Local_328.f_83.f_1;
		}
		if (func_79(Local_328.f_83, 1, 0, 0, 0))
		{
			func_77();
			func_76(iLocal_104);
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
		}
		if (!unk_0x6CFF81397164A1D3(Local_328.f_83))
		{
			if (func_26(&uLocal_140))
			{
				if (func_23(&uLocal_140) > fLocal_155)
				{
					if (unk_0xB86D29B10F627379(Local_328.f_83.f_1, 0) && unk_0x9C8E4D238C999648(Local_328.f_83, Local_328.f_83.f_1, 0))
					{
						iVar0 = unk_0x9C1C462D7B1DD1F9(250, 500);
						iVar1 = unk_0x9C1C462D7B1DD1F9(250, 500);
						unk_0xF4BF3E3D7FE56705(&uVar3);
						unk_0xDD3F03022D31980D(0, Local_328.f_83.f_1, 1, iVar0);
						unk_0xDD3F03022D31980D(0, Local_328.f_83.f_1, 31, iVar1);
						unk_0xFF7E39890B2840DD(uVar3);
						if (!unk_0x6CFF81397164A1D3(Local_328.f_83))
						{
							unk_0xD59C10966EB589EA(Local_328.f_83, uVar3);
						}
						unk_0x5EC7E18324A7D03D(&uVar3);
					}
					func_33(&uLocal_140);
					fLocal_155 = unk_0xE29F927A961F8AAA(0f, 3f);
				}
			}
			else
			{
				func_35(&uLocal_140);
			}
		}
		if (!unk_0x7D5B1F88E7504BBA(Local_328.f_83))
		{
			if ((unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), Local_328.f_83) && !unk_0x14BDA64F4D0D5E1D(Local_328.f_83)) && !unk_0x8072F0912899C46C(Local_328.f_83))
			{
				Local_328.f_83.f_11 = 1;
			}
			else if (Local_328.f_83.f_11)
			{
				unk_0xF4BF3E3D7FE56705(&uVar3);
				unk_0xD54B51DB3BD1FB16(0, Local_328.f_83.f_9, 1000);
				unk_0x8DBC05C86F873CC9(0, Local_328.f_83.f_12, Local_328.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xFF7E39890B2840DD(uVar3);
				unk_0xD59C10966EB589EA(Local_328.f_83, uVar3);
				unk_0x5EC7E18324A7D03D(&uVar3);
				Local_328.f_83.f_11 = 0;
			}
			if (unk_0x14BDA64F4D0D5E1D(Local_328.f_83) || unk_0x8072F0912899C46C(Local_328.f_83))
			{
				if (!Local_328.f_83.f_10)
				{
					Local_328.f_101++;
				}
				Local_328.f_83.f_10 = 1;
			}
			else if (Local_328.f_83.f_10)
			{
				unk_0xF4BF3E3D7FE56705(&uVar3);
				unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 1000);
				unk_0x8DBC05C86F873CC9(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xD54B51DB3BD1FB16(0, Local_328.f_83.f_9, 1000);
				unk_0x8DBC05C86F873CC9(0, Local_328.f_83.f_12, Local_328.f_83.f_13, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xFF7E39890B2840DD(uVar3);
				unk_0xD59C10966EB589EA(Local_328.f_83, uVar3);
				unk_0x5EC7E18324A7D03D(&uVar3);
				iLocal_327 = 4;
				func_33(&uLocal_143);
				Local_328.f_83.f_10 = 0;
			}
		}
	}
}

char* func_75()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (unk_0x9C1C462D7B1DD1F9(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_76(int iParam0)
{
	if (iLocal_94 < 5)
	{
		if (iParam0 != 262)
		{
			func_130(iParam0, 0, 0);
		}
		iLocal_104 = 262;
		func_84(&iLocal_95);
		iLocal_94 = 9;
	}
}

void func_77()
{
	int iVar0[10];
	var uVar11;
	int iVar12;
	
	unk_0xD998C3CE9F8EB5C2(unk_0x096275889B8E0EE0(), &iVar0, -1);
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (unk_0xD42BD6EB2E0F1677(iVar0[iVar12]) && !unk_0x6CFF81397164A1D3(iVar0[iVar12]))
		{
			if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 4))
			{
				unk_0x06C6AD4F38E8412D(iVar0[iVar12], unk_0x096275889B8E0EE0(), 100f, -1, 0, 0);
			}
			else
			{
				unk_0xF4BF3E3D7FE56705(&uVar11);
				unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), unk_0x9C1C462D7B1DD1F9(300, 900));
				unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 0);
				unk_0xFF7E39890B2840DD(uVar11);
				unk_0xD59C10966EB589EA(iVar0[iVar12], uVar11);
				unk_0x5EC7E18324A7D03D(&uVar11);
			}
		}
		iVar12++;
	}
	switch (Global_97353.f_17270.f_1)
	{
		case 0:
			func_78(0);
			break;
		
		case 1:
			func_78(0);
			break;
		
		case 3:
			func_78(0);
			break;
		
		case 4:
			func_78(0);
			break;
		
		case 5:
			func_78(0);
			break;
		
		case 2:
			func_78(0);
			break;
	}
}

void func_78(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_105 = iParam0;
	iLocal_103 = 0;
	iLocal_94 = 7;
}

int func_79(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0x096275889B8E0EE0();
	if (Local_328.f_101 >= 3)
	{
		return 1;
	}
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		if (!unk_0x6CFF81397164A1D3(iParam0))
		{
			Var1 = { unk_0xA86D5F069399F44D(iParam0, 1) };
			if (bParam1)
			{
				if (unk_0x7B6E7BEC1143AC86(iParam0, unk_0x096275889B8E0EE0(), 1))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (unk_0xE1B9C14B617F05EF(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0x9A2304A64C3C8423(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), iParam0) || unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iParam0))
				{
					if (func_80(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (unk_0x52BE10F427339B39(iParam0, 0))
			{
				if (unk_0x7B6E7BEC1143AC86(unk_0xB3598EA616C3FFC3(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (unk_0x78413032BDA99B80(iParam0))
			{
				return 1;
			}
			if (unk_0x0878A3DD21BC848A(iVar0, 4))
			{
				if (unk_0x69BBBA1223D4C644(iVar0))
				{
					if (unk_0x5E58342602E94718(iParam0, unk_0xA86D5F069399F44D(iVar0, 1), 45f, 45f, 45f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0xC652FD308772D79E(Var1, 4f, 1))
			{
				return 1;
			}
			if (unk_0x05B0061EFDFC8941((Var1.f_0 - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.f_0 + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), 0))
			{
				return 1;
			}
			if (unk_0x1E8A2C0DC15A2CCA(iParam0))
			{
				if (unk_0x82387EE8392EE1FC(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((unk_0xD62DD846D82CBB90(-1, Var1, 25f) && !unk_0xD62DD846D82CBB90(11, Var1, 25f)) && !unk_0xD62DD846D82CBB90(13, Var1, 25f))
			{
				return 1;
			}
			unk_0xBB19AC7D4DCEFD0F(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_80(var uParam0, int iParam1)
{
	return func_81(unk_0x275F255ED201B937(unk_0x47E385B0D957C8D4()), uParam0, iParam1);
}

var func_81(int iParam0, int iParam1, var uParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x7D5B1F88E7504BBA(uParam0))
	{
		Var0 = { unk_0xA86D5F069399F44D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA86D5F069399F44D(iParam0, 0) };
	}
	if (!unk_0x7D5B1F88E7504BBA(uParam1))
	{
		Var3 = { unk_0xA86D5F069399F44D(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xA86D5F069399F44D(iParam1, 0) };
	}
	return unk_0x0BE7F4E3CDBAFB28(Var0, Var3, uParam2);
}

int func_82(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xBFFB35986CAAE58C(unk_0x47E385B0D957C8D4()))
	{
		return 0;
	}
	if (func_89(0))
	{
		return 0;
	}
	if (unk_0x2004A43D1B1A5D9F())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/] == 1 && Global_35613[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35613[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35613[iVar0 /*18*/].f_4 = 1;
			Global_35613[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35613[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35613[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

int func_83(int iParam0)
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
		if (Global_35613[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_84(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_83(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_85(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	
	if (unk_0x8E34C953364A76DD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xED20CB1F5297791D())
	{
		if (!*iParam0 == -1)
		{
			func_84(iParam0);
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
		if (!Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/] = 1;
			Global_35613[iVar0 /*18*/].f_1 = Global_35730;
			Global_35730++;
			Global_35613[iVar0 /*18*/].f_3 = 0;
			Global_35613[iVar0 /*18*/].f_16 = 0;
			Global_35613[iVar0 /*18*/].f_4 = 0;
			Global_35613[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35613[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35613[iVar0 /*18*/].f_5 = iParam3;
			Global_35613[iVar0 /*18*/].f_17 = unk_0x55525C346BEF6960();
			Global_35613[iVar0 /*18*/].f_6 = 0;
			if (!unk_0x2CF12F9ACF18F048(sParam4))
			{
				Global_35613[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35613[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35613[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35613[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_86(int iParam0)
{
	if (unk_0xD42BD6EB2E0F1677(iParam0) && unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iParam0, 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_87(char* sParam0, int iParam1, int iParam2)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0xF00CED653959DE03(iParam1);
	unk_0xF00CED653959DE03(iParam2);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, -1);
}

var func_88()
{
	return Global_67058;
}

int func_89(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_90(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
}

bool func_91()
{
	return unk_0x4F67E8ECA7D3F667() <= Global_17236.f_5130 + 100;
}

int func_92()
{
	if (unk_0x8E34C953364A76DD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_93(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17098.f_4 && Global_17098.f_104 == 4);
	}
	return Global_17098.f_4;
}

int func_94()
{
	return 1;
}

void func_95(var uParam0, int iParam1)
{
	func_96(uParam0, iParam1);
}

void func_96(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_97()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		return 0;
	}
	unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		return ((((bVar1 && unk_0x2503EB2EA811EC9A(0, 69)) || (bVar1 && unk_0x2503EB2EA811EC9A(0, 70))) || (bVar1 && unk_0x2503EB2EA811EC9A(0, 68))) || unk_0x4605C66E0F935F83(unk_0x217E9DC48139933D()));
	}
	return (((((bVar1 && unk_0x2503EB2EA811EC9A(0, 24)) || (bVar1 && unk_0x2503EB2EA811EC9A(0, 25))) || (bVar1 && unk_0x2503EB2EA811EC9A(0, 47))) || unk_0x08AF54D58CB9324E(unk_0x096275889B8E0EE0())) || unk_0x4605C66E0F935F83(unk_0x217E9DC48139933D()));
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				iVar0 = func_62();
				if (!func_64(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_105()) || Global_96400) || Global_24446) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_101()) || func_92()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1) || func_105()) || Global_24446) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_105()) || Global_96400) || Global_24446) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_97353.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_105()) || Global_96400) || Global_24446) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_92()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_105() || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || func_90(8, -1)) || func_92()) || func_100()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_90(8, -1) || func_103()) || func_102()) || func_100()) || func_99())
						{
							return 0;
						}
						if ((unk_0xED20CB1F5297791D() && unk_0x79065FCE8B636F38() != 3) && unk_0xEC4E85B30EC75438() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
						{
							if ((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_105()) || Global_24446) || func_104()) || func_90(8, -1)) || func_102()) || func_101()) || func_92()) || Global_97353.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || func_105()) || func_102()) || Global_96400) || Global_24446) || func_104()) || Global_35957) || func_90(8, -1)) || func_101()) || func_100()) || func_92()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0)) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1)) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xB600CF743D8150FB(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_105()) || Global_96400) || Global_24446) || func_104()) || func_90(8, -1)) || func_101()) || func_100()) || func_103()) || func_102()) || func_92())
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

var func_99()
{
	return Global_90001.f_1;
}

int func_100()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_101()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return Global_90014.f_291 > 0;
}

bool func_103()
{
	return Global_90014.f_290 > 0;
}

var func_104()
{
	return Global_1315900;
}

int func_105()
{
	if (!unk_0x03A753E2C8458335())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_106()
{
	if (unk_0x8E34C953364A76DD(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_107()
{
	return Global_86199;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_110(6) || func_110(7))
			{
				return 1;
			}
			else
			{
				return func_108(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_134(5))
			{
				if (func_98(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	return unk_0xCD82FA174080B3B1(Global_24748[iVar0 /*23*/].f_19);
}

bool func_110(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_111()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xC82CF208C2B19199();
	if ((iVar0 <= iLocal_118 && iVar0 >= iLocal_119) || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) != 0)
	{
		return;
	}
	if (bLocal_157)
	{
		func_121();
		func_120();
		switch (iLocal_123)
		{
			case 0:
				func_119(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
				func_119(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
				func_119(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_119(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
				func_119(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
				func_118(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
				break;
			
			case 1:
				func_119(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_119(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
				func_119(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
				func_119(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
				func_118(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
				break;
			
			case 3:
				func_119(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_119(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
				func_119(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
				func_119(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_119(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
				func_118(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
				break;
			
			case 4:
				func_119(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
				func_119(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
				func_119(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
				func_119(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
				func_118(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
				break;
			
			case 5:
				func_119(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
				func_119(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
				func_119(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
				func_119(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
				func_119(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
				func_118(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
				break;
			
			case 2:
				func_119(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
				func_119(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
				func_119(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
				func_119(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
				func_119(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
				func_118(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_123)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!unk_0x2CF12F9ACF18F048(sVar1))
		{
			if (unk_0x9AC6F0931A0D749E(sVar1))
			{
				if (!unk_0xC837BA262C1E56B9(sVar1))
				{
					unk_0xCC3AB3971752BA95(sVar1, 1);
				}
			}
		}
	}
	func_112();
}

void func_112()
{
	var uVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_109 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_328.f_0)
		{
			if (!func_117(Local_328[iVar5 /*14*/].f_2))
			{
				Local_328[iVar5 /*14*/].f_1 = unk_0xF757863E1E2D8F12(func_116(0), Local_328[iVar5 /*14*/].f_2, Local_328[iVar5 /*14*/].f_5, 1, 1);
				unk_0x7263332501E07F52(Local_328[iVar5 /*14*/].f_1);
				unk_0x252253C8A45AA1FC(Local_328[iVar5 /*14*/].f_1, 1);
				if (func_117(Local_328[iVar5 /*14*/].f_6))
				{
					Local_328[iVar5 /*14*/] = unk_0x63FC6DA06F97F02C(Local_328[iVar5 /*14*/].f_1, 4, func_115(), -1, 1, 1);
					unk_0xB64CFA14CB9A2E78(Local_328[iVar5 /*14*/].f_1, 1, 0);
				}
				else
				{
					Local_328[iVar5 /*14*/] = unk_0x9066DFD4D92E6773(4, func_115(), Local_328[iVar5 /*14*/].f_6, Local_328[iVar5 /*14*/].f_9, 1, 1);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_328[iVar5 /*14*/].f_12 = sVar3;
					Local_328[iVar5 /*14*/].f_13 = sVar4;
					unk_0xF4BF3E3D7FE56705(&uVar0);
					unk_0xD105DD793D092030(0, unk_0x9C1C462D7B1DD1F9(100, 500));
					unk_0x8DBC05C86F873CC9(0, sVar3, sVar4, 8f, -8f, -1, 8193, unk_0xE29F927A961F8AAA(0, 1065353216), 0, 0, 0);
					unk_0xFF7E39890B2840DD(uVar0);
					unk_0xD59C10966EB589EA(Local_328[iVar5 /*14*/], uVar0);
					unk_0x5EC7E18324A7D03D(&uVar0);
				}
				unk_0x082FA643218F5655(Local_328[iVar5 /*14*/], 1);
				unk_0x440ED660C7867674(Local_328[iVar5 /*14*/], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_328.f_83.f_1 = unk_0xF757863E1E2D8F12(func_116(1), Local_328.f_83.f_2, Local_328.f_83.f_5, 1, 1);
		unk_0x7263332501E07F52(Local_328.f_83.f_1);
		unk_0x252253C8A45AA1FC(Local_328.f_83.f_1, 1);
		if (func_117(Local_328.f_83.f_6))
		{
			Local_328.f_83 = unk_0x63FC6DA06F97F02C(Local_328.f_83.f_1, 4, func_115(), -1, 1, 1);
			unk_0xB64CFA14CB9A2E78(Local_328.f_83.f_1, 1, 0);
		}
		else
		{
			Local_328.f_83 = unk_0x9066DFD4D92E6773(4, func_115(), Local_328.f_83.f_6, Local_328.f_83.f_9, 1, 1);
			iVar1 = (unk_0x9C1C462D7B1DD1F9(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_328.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_328.f_83.f_13 = sVar4;
			unk_0xF4BF3E3D7FE56705(&uVar0);
			unk_0xD984B17E68AE4E17(0, func_114((unk_0x9C1C462D7B1DD1F9(0, 65535) % 1000), 1, 1000));
			unk_0x8DBC05C86F873CC9(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, unk_0xE29F927A961F8AAA(0, 1065353216), 0, 0, 0);
			unk_0xFF7E39890B2840DD(uVar0);
			unk_0xD59C10966EB589EA(Local_328.f_83, uVar0);
			unk_0x5EC7E18324A7D03D(&uVar0);
		}
	}
	else if (fLocal_109 < 225f)
	{
	}
	iLocal_156 = Local_328.f_83;
	if (!unk_0x7D5B1F88E7504BBA(Local_328[0 /*14*/]))
	{
		func_113(&uLocal_162, 1, Local_328[0 /*14*/], "MALE1", 0, 1);
	}
	if (!unk_0x7D5B1F88E7504BBA(Local_328[1 /*14*/]))
	{
		func_113(&uLocal_162, 2, Local_328[1 /*14*/], "MALE2", 0, 1);
	}
	if (!unk_0x7D5B1F88E7504BBA(Local_328[2 /*14*/]))
	{
		func_113(&uLocal_162, 3, Local_328[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_26(&uLocal_146))
	{
		func_35(&uLocal_146);
	}
	else
	{
		func_33(&uLocal_146);
	}
}

void func_113(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(iParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(iParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(iParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(iParam2, 1);
			}
		}
	}
}

int func_114(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_115()
{
	return joaat("a_m_y_motox_01");
}

int func_116(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_328.f_71)
	{
		if (unk_0x354F62672DE7DB0A(Local_328.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_123 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = unk_0x9C1C462D7B1DD1F9(0, iVar0);
	if (Local_328.f_71[iVar0] == 0)
	{
		if (Local_328.f_71[0] == 0)
		{
			switch (iLocal_123)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_328.f_71[0];
		}
	}
	return Local_328.f_71[iVar0];
}

int func_117(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_118(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	if (func_117(Local_328.f_83.f_2))
	{
		Local_328.f_83.f_2 = { Param0 };
		Local_328.f_83.f_5 = fParam3;
		Local_328.f_83.f_6 = { Param4 };
		Local_328.f_83.f_9 = fParam7;
	}
}

void func_119(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_328.f_0)
	{
		if (!bVar1 && func_117(Local_328[iVar0 /*14*/].f_2))
		{
			Local_328[iVar0 /*14*/].f_2 = { Param0 };
			Local_328[iVar0 /*14*/].f_5 = fParam3;
			Local_328[iVar0 /*14*/].f_6 = { Param4 };
			Local_328[iVar0 /*14*/].f_9 = fParam7;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_120()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_328.f_0)
	{
		Local_328[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_328[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_328.f_83.f_2 = { 0f, 0f, 0f };
	Local_328.f_83.f_5 = 0f;
}

void func_121()
{
	switch (iLocal_123)
	{
		case 0:
			unk_0x014C4B659562111A(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1, 0, 1);
			unk_0x894DDE7F2D919046(-227.43f, 3888.9f, 36.41f, 50f, 1, 0, 0, 0, 0);
			unk_0x904737E822742E53("WORLD_HUMAN_HIKER", 0);
			break;
		
		case 1:
			unk_0x014C4B659562111A(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0, 0, 1);
			break;
		
		case 3:
			unk_0x904737E822742E53("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x014C4B659562111A(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1, 0, 1);
			unk_0xA4D83115C1E02F8A(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0, 0, 0, 0, 0);
			unk_0x014C4B659562111A(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, 1, 0, 1);
			unk_0x904737E822742E53("WORLD_HUMAN_HIKER", 0);
			unk_0x904737E822742E53("WORLD_VEHICLE_EMPTY", 0);
			unk_0x904737E822742E53("WORLD_MOUNTAIN_LION_WANDER", 0);
			break;
		
		case 4:
			unk_0x904737E822742E53("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x904737E822742E53("WORLD_VEHICLE_EMPTY", 1);
			unk_0x904737E822742E53("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 1);
			break;
		
		case 5:
			unk_0x904737E822742E53("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
			unk_0x014C4B659562111A(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, 1, 0, 1);
			unk_0xA4D83115C1E02F8A(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0xCC3AB3971752BA95("QUARRY", 0);
			unk_0x014C4B659562111A(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1, 0, 1);
			unk_0xA4D83115C1E02F8A(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 0, 0, 0, 0, 0);
			break;
	}
}

var func_122()
{
	return ((((((((func_123(&(Local_328.f_71)) && func_123(&(Local_328.f_77))) && func_123(&(Local_328.f_99))) && unk_0x27FF6FE8009B40CA("amb@world_human_hang_out_street@male_a@idle_a")) && unk_0x27FF6FE8009B40CA("amb@world_human_hang_out_street@male_b@idle_a")) && unk_0x27FF6FE8009B40CA("amb@world_human_hang_out_street@male_c@idle_a")) && unk_0x27FF6FE8009B40CA("amb@world_human_aa_smoke@male@idle_a")) && unk_0x27FF6FE8009B40CA("random@street_race")) && unk_0x27FF6FE8009B40CA("gestures@m@standing@casual"));
}

int func_123(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x1283B8B89DD5D1B6((*uParam0)[iVar0]))
			{
				if (!unk_0x1283B8B89DD5D1B6((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_124()
{
	char cVar0[64];
	
	func_126(&(Local_328.f_77), joaat("a_m_y_motox_01"));
	func_126(&(Local_328.f_99), joaat("a_m_y_motox_01"));
	switch (iLocal_123)
	{
		case 0:
			func_126(&(Local_328.f_71), joaat("sanchez"));
			func_126(&(Local_328.f_71), joaat("blazer"));
			break;
		
		case 1:
			func_126(&(Local_328.f_71), joaat("mesa"));
			func_126(&(Local_328.f_71), joaat("bjxl"));
			func_126(&(Local_328.f_71), joaat("patriot"));
			func_126(&(Local_328.f_71), joaat("dubsta2"));
			func_126(&(Local_328.f_71), joaat("bfinjection"));
			break;
		
		case 3:
			func_126(&(Local_328.f_71), joaat("sanchez"));
			func_126(&(Local_328.f_71), joaat("blazer"));
			break;
		
		case 4:
			func_126(&(Local_328.f_71), joaat("sanchez"));
			func_126(&(Local_328.f_71), joaat("blazer"));
			break;
		
		case 5:
			func_126(&(Local_328.f_71), joaat("mesa"));
			func_126(&(Local_328.f_71), joaat("bfinjection"));
			func_126(&(Local_328.f_71), joaat("bjxl"));
			func_126(&(Local_328.f_71), joaat("sadler"));
			func_126(&(Local_328.f_71), joaat("rebel"));
			break;
		
		case 2:
			func_126(&(Local_328.f_71), joaat("sanchez"));
			func_126(&(Local_328.f_71), joaat("blazer"));
			break;
	}
	unk_0xA862A2AD321F94B4("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0xA862A2AD321F94B4("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0xA862A2AD321F94B4("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0xA862A2AD321F94B4("amb@world_human_aa_smoke@male@idle_a");
	unk_0xA862A2AD321F94B4("random@street_race");
	unk_0xA862A2AD321F94B4("gestures@m@standing@casual");
	if (iLocal_123 == 0)
	{
		unk_0xFA28FE3A6246FC30(joaat("prop_fncwood_14c"));
		unk_0xFA28FE3A6246FC30(joaat("prop_fncwood_14e"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_123)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	unk_0xC474CF16EDA45DC9(1, &cVar0);
	func_125(&(Local_328.f_77));
	func_125(&(Local_328.f_71));
	func_125(&(Local_328.f_99));
}

void func_125(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xFA28FE3A6246FC30((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_126(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_127(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_127(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_128(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_129(int iParam0)
{
	iLocal_94 = iParam0;
}

void func_130(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 0))
	{
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 18);
		if (Global_24745 == 1)
		{
			Global_24746 = 1;
		}
		Global_24745 = 1;
	}
	if (bParam1)
	{
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 0);
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 15);
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_24748[iVar0 /*23*/].f_11), 0);
		unk_0x7D1D4A3602B6AD4E(&(Global_24748[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xCD82FA174080B3B1(Global_24748[iVar0 /*23*/].f_19))
		{
			unk_0x8ABD939C2E5D00ED(1);
			unk_0xF2C3C9DA47AAA54A(&(Global_24748[iVar0 /*23*/].f_19));
			unk_0x8ABD939C2E5D00ED(0);
		}
	}
}

int func_131()
{
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x51E9BBB68A21C058() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_132()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_133(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_7341.f_99.f_217[iParam0], iParam1);
	return bVar0;
}

bool func_134(int iParam0)
{
	return func_135(iParam0, Global_34913);
}

int func_135(int iParam0, int iParam1)
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

bool func_136(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_137()
{
	StringCopy(&Local_52, "Offroad_Races", 64);
	unk_0x7A12830030CE1C8F(1);
	fLocal_116 = (6f + 4f);
	iLocal_98 = 4;
	func_95(&uLocal_93, 4194304);
	iLocal_96 = 17000;
	iLocal_85 = 0;
	iLocal_118 = 0;
	iLocal_119 = 25;
	iLocal_102 = 0;
	iLocal_123 = func_141(Local_89, &Local_120);
	iLocal_104 = func_140(iLocal_123);
	fLocal_101 = (unk_0xBBDA792448DB5A89(func_139(iLocal_104)) + 5f);
	if (func_133(0, iLocal_98))
	{
		bLocal_157 = true;
	}
	else
	{
		func_76(iLocal_104);
		bLocal_157 = false;
	}
	if (iLocal_123 > Global_97353.f_17270.f_1)
	{
		if (func_109(func_140(iLocal_123)))
		{
		}
		iLocal_104 = 262;
		func_76(iLocal_104);
	}
	if (!func_109(func_140(iLocal_123)) && unk_0x37F9A426FBCF4AF2())
	{
		if (func_138(iLocal_104, 1))
		{
			iLocal_104 = 262;
		}
		func_76(iLocal_104);
	}
	if (iLocal_123 == 2)
	{
		iLocal_118 = 20;
		iLocal_119 = 3;
	}
	if (iLocal_123 == 1 || iLocal_123 == 5)
	{
		sLocal_100 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_100 = "PLAY_OFFROAD_M";
	}
}

bool func_138(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	if (bParam1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 15);
	}
	return unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 0);
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 90:
		case 91:
		case 109:
		case 110:
			return 20;
			break;
		
		case 65:
		case 66:
		case 75:
		case 106:
		case 107:
		case 108:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 128:
		case 129:
		case 130:
		case 132:
		case 136:
			return 100;
			break;
		
		case 124:
		case 125:
		case 126:
		case 127:
		case 131:
		case 133:
		case 134:
		case 135:
		case 67:
		case 68:
		case 94:
		case 69:
		case 70:
		case 72:
		case 73:
		case 74:
		case 71:
			return 209;
			break;
	}
	return -1;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 69;
		
		case 1:
			return 70;
		
		case 3:
			return 72;
		
		case 4:
			return 73;
		
		case 5:
			return 74;
		
		case 2:
			return 71;
		
		default:
	}
	return 262;
}

int func_141(struct<3> Param0, var uParam3)
{
	int iVar0;
	struct<3> Var1[7];
	float fVar23;
	int iVar24;
	float fVar25;
	
	iVar0 = 0;
	Var1[0 /*3*/] = { func_142(0) };
	Var1[1 /*3*/] = { func_142(1) };
	Var1[3 /*3*/] = { func_142(3) };
	Var1[4 /*3*/] = { func_142(4) };
	Var1[5 /*3*/] = { func_142(5) };
	Var1[2 /*3*/] = { func_142(2) };
	Var1[6 /*3*/] = { func_142(6) };
	fVar23 = unk_0xB7A628320EFF8E47(Param0, Var1[0 /*3*/]);
	iVar24 = 0;
	fVar25 = 0f;
	iVar24 = 1;
	while (iVar24 <= (7 - 1))
	{
		fVar25 = unk_0xB7A628320EFF8E47(Param0, Var1[iVar24 /*3*/]);
		if (fVar25 < fVar23)
		{
			iVar0 = iVar24;
			fVar23 = fVar25;
		}
		iVar24++;
	}
	*uParam3 = { Var1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_142(int iParam0)
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.483f, 4443.953f, 37.3474f;
		
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 3:
			return -223.6755f, 4224.644f, 43.7304f;
		
		case 4:
			return 1606.578f, 3841.188f, 33.2931f;
		
		case 5:
			return 2037.664f, 2137.386f, 92.7095f;
		
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_143(var uParam0, int iParam1)
{
	func_144(uParam0, iParam1);
}

void func_144(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_145(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_104 != 262)
		{
			func_130(iLocal_104, 0, 0);
		}
	}
	func_84(&iLocal_95);
	if (func_136(uLocal_93, 2))
	{
		func_5();
		func_143(&uLocal_93, 2);
		func_20(&iLocal_97);
	}
	iLocal_97 = -1;
	func_146();
	unk_0x5E8B6D17FF91CD59();
}

void func_146()
{
	func_143(&uLocal_93, 4);
	func_147();
	if (unk_0x8ADB0730FFB27333(uLocal_51))
	{
		unk_0xF4C9512A2F0A3031(uLocal_51, 3);
	}
	if (!unk_0x602102324604D96B(&Local_68))
	{
		if (unk_0x481FBF588B0B76DB(&Local_68) != 0)
		{
			unk_0x0086D3067E1CFD1C(&Local_68);
		}
	}
}

void func_147()
{
}

